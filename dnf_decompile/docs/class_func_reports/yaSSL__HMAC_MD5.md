# yaSSL__HMAC_MD5

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## HMAC_MD5

```asm
// === 08799ce0 yaSSL::HMAC_MD5::HMAC_MD5  [0x08799ce0-0x8799e2f] ===
 8799ce0:	55                   	push   %ebp
 8799ce1:	89 e5                	mov    %esp,%ebp
 8799ce3:	57                   	push   %edi
 8799ce4:	56                   	push   %esi
 8799ce5:	53                   	push   %ebx
 8799ce6:	e8 0d 91 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8799ceb:	81 c3 ad 2e bd 00    	add    $0xbd2ead,%ebx
 8799cf1:	83 ec 2c             	sub    $0x2c,%esp
 8799cf4:	8b 55 08             	mov    0x8(%ebp),%edx
 8799cf7:	8b 7d 10             	mov    0x10(%ebp),%edi
 8799cfa:	8b 83 38 fc ff ff    	mov    -0x3c8(%ebx),%eax
 8799d00:	83 c0 08             	add    $0x8,%eax
 8799d03:	89 02                	mov    %eax,(%edx)
 8799d05:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8799d08:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8799d0d:	c7 04 24 10 01 00 00 	movl   $0x110,(%esp)
 8799d14:	e8 87 6f fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8799d19:	89 c6                	mov    %eax,%esi
 8799d1b:	8d 80 80 00 00 00    	lea    0x80(%eax),%eax
 8799d21:	89 06                	mov    %eax,(%esi)
 8799d23:	8d 86 c0 00 00 00    	lea    0xc0(%esi),%eax
 8799d29:	89 46 04             	mov    %eax,0x4(%esi)
 8799d2c:	8d 86 00 01 00 00    	lea    0x100(%esi),%eax
 8799d32:	89 46 08             	mov    %eax,0x8(%esi)
 8799d35:	8d 46 10             	lea    0x10(%esi),%eax
 8799d38:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8799d3b:	89 04 24             	mov    %eax,(%esp)
 8799d3e:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 8799d45:	00 
 8799d46:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8799d4d:	00 
 8799d4e:	e8 7d ee fb ff       	call   8758bd0 <_ZN8TaoCrypt17HASHwithTransformC1Ejj>
 8799d53:	8b 83 c0 fc ff ff    	mov    -0x340(%ebx),%eax
 8799d59:	83 c0 08             	add    $0x8,%eax
 8799d5c:	89 46 10             	mov    %eax,0x10(%esi)
 8799d5f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8799d62:	89 04 24             	mov    %eax,(%esp)
 8799d65:	e8 66 c4 fc ff       	call   87661d0 <_ZN8TaoCrypt3MD54InitEv>
 8799d6a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8799d6d:	89 04 24             	mov    %eax,(%esp)
 8799d70:	e8 5b c4 fc ff       	call   87661d0 <_ZN8TaoCrypt3MD54InitEv>
 8799d75:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8799d78:	c6 46 0c 00          	movb   $0x0,0xc(%esi)
 8799d7c:	89 72 04             	mov    %esi,0x4(%edx)
 8799d7f:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8799d82:	89 14 24             	mov    %edx,(%esp)
 8799d85:	e8 46 c4 fc ff       	call   87661d0 <_ZN8TaoCrypt3MD54InitEv>
 8799d8a:	83 ff 40             	cmp    $0x40,%edi
 8799d8d:	c6 46 0c 00          	movb   $0x0,0xc(%esi)
 8799d91:	77 5b                	ja     8799dee <_ZN5yaSSL8HMAC_MD5C1EPKhj+0x10e>
 8799d93:	8b 06                	mov    (%esi),%eax
 8799d95:	8b 55 0c             	mov    0xc(%ebp),%edx
 8799d98:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8799d9c:	89 04 24             	mov    %eax,(%esp)
 8799d9f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8799da3:	e8 f8 3a 8e ff       	call   807d8a0 <memcpy@plt>
 8799da8:	b8 40 00 00 00       	mov    $0x40,%eax
 8799dad:	29 f8                	sub    %edi,%eax
 8799daf:	03 3e                	add    (%esi),%edi
 8799db1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8799db5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8799dbc:	00 
 8799dbd:	89 3c 24             	mov    %edi,(%esp)
 8799dc0:	e8 fb 3e 8e ff       	call   807dcc0 <memset@plt>
 8799dc5:	31 c0                	xor    %eax,%eax
 8799dc7:	90                   	nop
 8799dc8:	8b 16                	mov    (%esi),%edx
 8799dca:	8b 4e 04             	mov    0x4(%esi),%ecx
 8799dcd:	0f b6 14 02          	movzbl (%edx,%eax,1),%edx
 8799dd1:	83 f2 5c             	xor    $0x5c,%edx
 8799dd4:	88 14 01             	mov    %dl,(%ecx,%eax,1)
 8799dd7:	8b 16                	mov    (%esi),%edx
 8799dd9:	01 c2                	add    %eax,%edx
 8799ddb:	83 c0 01             	add    $0x1,%eax
 8799dde:	80 32 36             	xorb   $0x36,(%edx)
 8799de1:	83 f8 40             	cmp    $0x40,%eax
 8799de4:	75 e2                	jne    8799dc8 <_ZN5yaSSL8HMAC_MD5C1EPKhj+0xe8>
 8799de6:	83 c4 2c             	add    $0x2c,%esp
 8799de9:	5b                   	pop    %ebx
 8799dea:	5e                   	pop    %esi
 8799deb:	5f                   	pop    %edi
 8799dec:	5d                   	pop    %ebp
 8799ded:	c3                   	ret
 8799dee:	8b 45 0c             	mov    0xc(%ebp),%eax
 8799df1:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8799df4:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8799df8:	bf 10 00 00 00       	mov    $0x10,%edi
 8799dfd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8799e01:	89 14 24             	mov    %edx,(%esp)
 8799e04:	e8 f7 d2 fc ff       	call   8767100 <_ZN8TaoCrypt3MD56UpdateEPKhj>
 8799e09:	8b 06                	mov    (%esi),%eax
 8799e0b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8799e0f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8799e12:	89 04 24             	mov    %eax,(%esp)
 8799e15:	e8 76 ef fb ff       	call   8758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>
 8799e1a:	b8 30 00 00 00       	mov    $0x30,%eax
 8799e1f:	eb 8e                	jmp    8799daf <_ZN5yaSSL8HMAC_MD5C1EPKhj+0xcf>
 8799e21:	90                   	nop
 8799e22:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8799e29:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::HMAC_MD5::HMAC_MD5 @ 0x8799ce0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_MD5::HMAC_MD5(unsigned char const*, unsigned int) */

void __thiscall yaSSL::HMAC_MD5::HMAC_MD5(HMAC_MD5 *this,uchar *param_1,uint param_2)

{
  HASHwithTransform *this_00;
  int *piVar1;
  size_t __n;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint in_stack_ffffffc8;
  
  *(undefined **)this = PTR_vtable_0936c7d0 + 8;
  piVar1 = operator_new(0x110,in_stack_ffffffc8 & 0xffffff00);
  *piVar1 = (int)(piVar1 + 0x20);
  piVar1[1] = (int)(piVar1 + 0x30);
  piVar1[2] = (int)(piVar1 + 0x40);
  this_00 = (HASHwithTransform *)(piVar1 + 4);
  TaoCrypt::HASHwithTransform::HASHwithTransform(this_00,4,0x40);
  piVar1[4] = (int)(PTR_vtable_0936c858 + 8);
  TaoCrypt::MD5::Init((MD5 *)this_00);
  TaoCrypt::MD5::Init((MD5 *)this_00);
  *(undefined1 *)(piVar1 + 3) = 0;
  *(int **)(this + 4) = piVar1;
  TaoCrypt::MD5::Init((MD5 *)this_00);
  *(undefined1 *)(piVar1 + 3) = 0;
  if (param_2 < 0x41) {
    memcpy((void *)*piVar1,param_1,param_2);
    __n = 0x40 - param_2;
    uVar4 = param_2;
  }
  else {
    uVar4 = 0x10;
    TaoCrypt::MD5::Update((MD5 *)this_00,param_1,param_2);
    TaoCrypt::HASHwithTransform::Final(this_00,(uchar *)*piVar1);
    __n = 0x30;
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
// === 08799b60 yaSSL::HMAC_MD5::get_digest  [0x08799b60-0x8799c4f] ===
 8799b60:	55                   	push   %ebp
 8799b61:	89 e5                	mov    %esp,%ebp
 8799b63:	83 ec 38             	sub    $0x38,%esp
 8799b66:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8799b69:	8b 7d 08             	mov    0x8(%ebp),%edi
 8799b6c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8799b6f:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8799b72:	e8 81 92 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8799b77:	81 c3 21 30 bd 00    	add    $0xbd3021,%ebx
 8799b7d:	8b 77 04             	mov    0x4(%edi),%esi
 8799b80:	80 7e 0c 00          	cmpb   $0x0,0xc(%esi)
 8799b84:	8d 46 10             	lea    0x10(%esi),%eax
 8799b87:	75 20                	jne    8799ba9 <_ZN5yaSSL8HMAC_MD510get_digestEPhPKhj+0x49>
 8799b89:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 8799b90:	00 
 8799b91:	8b 16                	mov    (%esi),%edx
 8799b93:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8799b96:	89 04 24             	mov    %eax,(%esp)
 8799b99:	89 54 24 04          	mov    %edx,0x4(%esp)
 8799b9d:	e8 5e d5 fc ff       	call   8767100 <_ZN8TaoCrypt3MD56UpdateEPKhj>
 8799ba2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8799ba5:	c6 46 0c 01          	movb   $0x1,0xc(%esi)
 8799ba9:	8b 55 14             	mov    0x14(%ebp),%edx
 8799bac:	89 04 24             	mov    %eax,(%esp)
 8799baf:	89 54 24 08          	mov    %edx,0x8(%esp)
 8799bb3:	8b 55 10             	mov    0x10(%ebp),%edx
 8799bb6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8799bba:	e8 41 d5 fc ff       	call   8767100 <_ZN8TaoCrypt3MD56UpdateEPKhj>
 8799bbf:	8b 77 04             	mov    0x4(%edi),%esi
 8799bc2:	80 7e 0c 00          	cmpb   $0x0,0xc(%esi)
 8799bc6:	8d 7e 10             	lea    0x10(%esi),%edi
 8799bc9:	75 1a                	jne    8799be5 <_ZN5yaSSL8HMAC_MD510get_digestEPhPKhj+0x85>
 8799bcb:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 8799bd2:	00 
 8799bd3:	8b 06                	mov    (%esi),%eax
 8799bd5:	89 3c 24             	mov    %edi,(%esp)
 8799bd8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8799bdc:	e8 1f d5 fc ff       	call   8767100 <_ZN8TaoCrypt3MD56UpdateEPKhj>
 8799be1:	c6 46 0c 01          	movb   $0x1,0xc(%esi)
 8799be5:	8b 46 08             	mov    0x8(%esi),%eax
 8799be8:	89 3c 24             	mov    %edi,(%esp)
 8799beb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8799bef:	e8 9c f1 fb ff       	call   8758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>
 8799bf4:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 8799bfb:	00 
 8799bfc:	8b 46 04             	mov    0x4(%esi),%eax
 8799bff:	89 3c 24             	mov    %edi,(%esp)
 8799c02:	89 44 24 04          	mov    %eax,0x4(%esp)
 8799c06:	e8 f5 d4 fc ff       	call   8767100 <_ZN8TaoCrypt3MD56UpdateEPKhj>
 8799c0b:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8799c12:	00 
 8799c13:	8b 46 08             	mov    0x8(%esi),%eax
 8799c16:	89 3c 24             	mov    %edi,(%esp)
 8799c19:	89 44 24 04          	mov    %eax,0x4(%esp)
 8799c1d:	e8 de d4 fc ff       	call   8767100 <_ZN8TaoCrypt3MD56UpdateEPKhj>
 8799c22:	8b 45 0c             	mov    0xc(%ebp),%eax
 8799c25:	89 3c 24             	mov    %edi,(%esp)
 8799c28:	89 44 24 04          	mov    %eax,0x4(%esp)
 8799c2c:	e8 5f f1 fb ff       	call   8758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>
 8799c31:	c6 46 0c 00          	movb   $0x0,0xc(%esi)
 8799c35:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8799c38:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8799c3b:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8799c3e:	89 ec                	mov    %ebp,%esp
 8799c40:	5d                   	pop    %ebp
 8799c41:	c3                   	ret
 8799c42:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8799c49:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::HMAC_MD5::get_digest @ 0x8799b60

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_MD5::get_digest(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall
yaSSL::HMAC_MD5::get_digest(HMAC_MD5 *this,uchar *param_1,uchar *param_2,uint param_3)

{
  MD5 *this_00;
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 4);
  if (*(char *)(puVar1 + 3) == '\0') {
    TaoCrypt::MD5::Update((MD5 *)(puVar1 + 4),(uchar *)*puVar1,0x40);
    *(undefined1 *)(puVar1 + 3) = 1;
  }
  TaoCrypt::MD5::Update((MD5 *)(puVar1 + 4),param_2,param_3);
  puVar1 = *(undefined4 **)(this + 4);
  this_00 = (MD5 *)(puVar1 + 4);
  if (*(char *)(puVar1 + 3) == '\0') {
    TaoCrypt::MD5::Update(this_00,(uchar *)*puVar1,0x40);
    *(undefined1 *)(puVar1 + 3) = 1;
  }
  TaoCrypt::HASHwithTransform::Final((HASHwithTransform *)this_00,(uchar *)puVar1[2]);
  TaoCrypt::MD5::Update(this_00,(uchar *)puVar1[1],0x40);
  TaoCrypt::MD5::Update(this_00,(uchar *)puVar1[2],0x10);
  TaoCrypt::HASHwithTransform::Final((HASHwithTransform *)this_00,param_1);
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}

```

---

## get_digestSize

```asm
// === 08798530 yaSSL::HMAC_MD5::get_digestSize  [0x08798530-0x879853f] ===
 8798530:	55                   	push   %ebp
 8798531:	b8 10 00 00 00       	mov    $0x10,%eax
 8798536:	89 e5                	mov    %esp,%ebp
 8798538:	5d                   	pop    %ebp
 8798539:	c3                   	ret
 879853a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::HMAC_MD5::get_digestSize @ 0x8798530

/* yaSSL::HMAC_MD5::get_digestSize() const */

undefined4 yaSSL::HMAC_MD5::get_digestSize(void)

{
  return 0x10;
}

```

---

## get_digest_0879a690

```asm
// === 0879a690 yaSSL::HMAC_MD5::get_digest  [0x0879a690-0x879a72f] ===
 879a690:	55                   	push   %ebp
 879a691:	89 e5                	mov    %esp,%ebp
 879a693:	83 ec 28             	sub    $0x28,%esp
 879a696:	8b 45 08             	mov    0x8(%ebp),%eax
 879a699:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 879a69c:	89 7d fc             	mov    %edi,-0x4(%ebp)
 879a69f:	89 75 f8             	mov    %esi,-0x8(%ebp)
 879a6a2:	8b 70 04             	mov    0x4(%eax),%esi
 879a6a5:	e8 4e 87 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879a6aa:	81 c3 ee 24 bd 00    	add    $0xbd24ee,%ebx
 879a6b0:	80 7e 0c 00          	cmpb   $0x0,0xc(%esi)
 879a6b4:	8d 7e 10             	lea    0x10(%esi),%edi
 879a6b7:	75 1a                	jne    879a6d3 <_ZN5yaSSL8HMAC_MD510get_digestEPh+0x43>
 879a6b9:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 879a6c0:	00 
 879a6c1:	8b 06                	mov    (%esi),%eax
 879a6c3:	89 3c 24             	mov    %edi,(%esp)
 879a6c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 879a6ca:	e8 31 ca fc ff       	call   8767100 <_ZN8TaoCrypt3MD56UpdateEPKhj>
 879a6cf:	c6 46 0c 01          	movb   $0x1,0xc(%esi)
 879a6d3:	8b 46 08             	mov    0x8(%esi),%eax
 879a6d6:	89 3c 24             	mov    %edi,(%esp)
 879a6d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 879a6dd:	e8 ae e6 fb ff       	call   8758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>
 879a6e2:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 879a6e9:	00 
 879a6ea:	8b 46 04             	mov    0x4(%esi),%eax
 879a6ed:	89 3c 24             	mov    %edi,(%esp)
 879a6f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 879a6f4:	e8 07 ca fc ff       	call   8767100 <_ZN8TaoCrypt3MD56UpdateEPKhj>
 879a6f9:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 879a700:	00 
 879a701:	8b 46 08             	mov    0x8(%esi),%eax
 879a704:	89 3c 24             	mov    %edi,(%esp)
 879a707:	89 44 24 04          	mov    %eax,0x4(%esp)
 879a70b:	e8 f0 c9 fc ff       	call   8767100 <_ZN8TaoCrypt3MD56UpdateEPKhj>
 879a710:	8b 45 0c             	mov    0xc(%ebp),%eax
 879a713:	89 3c 24             	mov    %edi,(%esp)
 879a716:	89 44 24 04          	mov    %eax,0x4(%esp)
 879a71a:	e8 71 e6 fb ff       	call   8758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>
 879a71f:	c6 46 0c 00          	movb   $0x0,0xc(%esi)
 879a723:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 879a726:	8b 75 f8             	mov    -0x8(%ebp),%esi
 879a729:	8b 7d fc             	mov    -0x4(%ebp),%edi
 879a72c:	89 ec                	mov    %ebp,%esp
 879a72e:	5d                   	pop    %ebp
 879a72f:	c3                   	ret

```

```c
// yaSSL::HMAC_MD5::get_digest @ 0x879a690

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_MD5::get_digest(unsigned char*) */

void __thiscall yaSSL::HMAC_MD5::get_digest(HMAC_MD5 *this,uchar *param_1)

{
  MD5 *this_00;
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 4);
  this_00 = (MD5 *)(puVar1 + 4);
  if (*(char *)(puVar1 + 3) == '\0') {
    TaoCrypt::MD5::Update(this_00,(uchar *)*puVar1,0x40);
    *(undefined1 *)(puVar1 + 3) = 1;
  }
  TaoCrypt::HASHwithTransform::Final((HASHwithTransform *)this_00,(uchar *)puVar1[2]);
  TaoCrypt::MD5::Update(this_00,(uchar *)puVar1[1],0x40);
  TaoCrypt::MD5::Update(this_00,(uchar *)puVar1[2],0x10);
  TaoCrypt::HASHwithTransform::Final((HASHwithTransform *)this_00,param_1);
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}

```

---

## get_padSize

```asm
// === 08798540 yaSSL::HMAC_MD5::get_padSize  [0x08798540-0x879854f] ===
 8798540:	55                   	push   %ebp
 8798541:	b8 30 00 00 00       	mov    $0x30,%eax
 8798546:	89 e5                	mov    %esp,%ebp
 8798548:	5d                   	pop    %ebp
 8798549:	c3                   	ret
 879854a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::HMAC_MD5::get_padSize @ 0x8798540

/* yaSSL::HMAC_MD5::get_padSize() const */

undefined4 yaSSL::HMAC_MD5::get_padSize(void)

{
  return 0x30;
}

```

---

## update

```asm
// === 0879a290 yaSSL::HMAC_MD5::update  [0x0879a290-0x879a2ff] ===
 879a290:	55                   	push   %ebp
 879a291:	89 e5                	mov    %esp,%ebp
 879a293:	83 ec 28             	sub    $0x28,%esp
 879a296:	8b 45 08             	mov    0x8(%ebp),%eax
 879a299:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 879a29c:	89 7d fc             	mov    %edi,-0x4(%ebp)
 879a29f:	89 75 f8             	mov    %esi,-0x8(%ebp)
 879a2a2:	8b 70 04             	mov    0x4(%eax),%esi
 879a2a5:	e8 4e 8b f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879a2aa:	81 c3 ee 28 bd 00    	add    $0xbd28ee,%ebx
 879a2b0:	80 7e 0c 00          	cmpb   $0x0,0xc(%esi)
 879a2b4:	8d 7e 10             	lea    0x10(%esi),%edi
 879a2b7:	75 1a                	jne    879a2d3 <_ZN5yaSSL8HMAC_MD56updateEPKhj+0x43>
 879a2b9:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 879a2c0:	00 
 879a2c1:	8b 06                	mov    (%esi),%eax
 879a2c3:	89 3c 24             	mov    %edi,(%esp)
 879a2c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 879a2ca:	e8 31 ce fc ff       	call   8767100 <_ZN8TaoCrypt3MD56UpdateEPKhj>
 879a2cf:	c6 46 0c 01          	movb   $0x1,0xc(%esi)
 879a2d3:	8b 45 10             	mov    0x10(%ebp),%eax
 879a2d6:	89 3c 24             	mov    %edi,(%esp)
 879a2d9:	89 44 24 08          	mov    %eax,0x8(%esp)
 879a2dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 879a2e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 879a2e4:	e8 17 ce fc ff       	call   8767100 <_ZN8TaoCrypt3MD56UpdateEPKhj>
 879a2e9:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 879a2ec:	8b 75 f8             	mov    -0x8(%ebp),%esi
 879a2ef:	8b 7d fc             	mov    -0x4(%ebp),%edi
 879a2f2:	89 ec                	mov    %ebp,%esp
 879a2f4:	5d                   	pop    %ebp
 879a2f5:	c3                   	ret
 879a2f6:	8d 76 00             	lea    0x0(%esi),%esi
 879a2f9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::HMAC_MD5::update @ 0x879a290

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_MD5::update(unsigned char const*, unsigned int) */

void __thiscall yaSSL::HMAC_MD5::update(HMAC_MD5 *this,uchar *param_1,uint param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 4);
  if (*(char *)(puVar1 + 3) == '\0') {
    TaoCrypt::MD5::Update((MD5 *)(puVar1 + 4),(uchar *)*puVar1,0x40);
    *(undefined1 *)(puVar1 + 3) = 1;
  }
  TaoCrypt::MD5::Update((MD5 *)(puVar1 + 4),param_1,param_2);
  return;
}

```

---

## ~HMAC_MD5

```asm
// === 08798b90 yaSSL::HMAC_MD5::~HMAC_MD5  [0x08798b90-0x8798bef] ===
 8798b90:	55                   	push   %ebp
 8798b91:	89 e5                	mov    %esp,%ebp
 8798b93:	83 ec 18             	sub    $0x18,%esp
 8798b96:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8798b99:	e8 5a a2 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8798b9e:	81 c3 fa 3f bd 00    	add    $0xbd3ffa,%ebx
 8798ba4:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8798ba7:	8b 75 08             	mov    0x8(%ebp),%esi
 8798baa:	8b 83 38 fc ff ff    	mov    -0x3c8(%ebx),%eax
 8798bb0:	83 c0 08             	add    $0x8,%eax
 8798bb3:	89 06                	mov    %eax,(%esi)
 8798bb5:	8b 46 04             	mov    0x4(%esi),%eax
 8798bb8:	85 c0                	test   %eax,%eax
 8798bba:	74 0c                	je     8798bc8 <_ZN5yaSSL8HMAC_MD5D1Ev+0x38>
 8798bbc:	8b 93 c4 ff ff ff    	mov    -0x3c(%ebx),%edx
 8798bc2:	83 c2 08             	add    $0x8,%edx
 8798bc5:	89 50 10             	mov    %edx,0x10(%eax)
 8798bc8:	89 04 24             	mov    %eax,(%esp)
 8798bcb:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8798bd0:	e8 4b 7c fb ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 8798bd5:	8b 83 28 fb ff ff    	mov    -0x4d8(%ebx),%eax
 8798bdb:	83 c0 08             	add    $0x8,%eax
 8798bde:	89 06                	mov    %eax,(%esi)
 8798be0:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8798be3:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8798be6:	89 ec                	mov    %ebp,%esp
 8798be8:	5d                   	pop    %ebp
 8798be9:	c3                   	ret
 8798bea:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::HMAC_MD5::~HMAC_MD5 @ 0x8798b90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_MD5::~HMAC_MD5() */

void __thiscall yaSSL::HMAC_MD5::~HMAC_MD5(HMAC_MD5 *this)

{
  int iVar1;
  
  *(undefined **)this = PTR_vtable_0936c7d0 + 8;
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

## ~HMAC_MD5_08798bf0

```asm
// === 08798bf0 yaSSL::HMAC_MD5::~HMAC_MD5  [0x08798bf0-0x8798c1f] ===
 8798bf0:	55                   	push   %ebp
 8798bf1:	89 e5                	mov    %esp,%ebp
 8798bf3:	53                   	push   %ebx
 8798bf4:	e8 ff a1 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8798bf9:	81 c3 9f 3f bd 00    	add    $0xbd3f9f,%ebx
 8798bff:	83 ec 14             	sub    $0x14,%esp
 8798c02:	8b 45 08             	mov    0x8(%ebp),%eax
 8798c05:	89 04 24             	mov    %eax,(%esp)
 8798c08:	e8 83 ff ff ff       	call   8798b90 <_ZN5yaSSL8HMAC_MD5D1Ev>
 8798c0d:	83 c4 14             	add    $0x14,%esp
 8798c10:	5b                   	pop    %ebx
 8798c11:	5d                   	pop    %ebp
 8798c12:	c3                   	ret
 8798c13:	90                   	nop
 8798c14:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8798c1a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::HMAC_MD5::~HMAC_MD5 @ 0x8798bf0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_MD5::~HMAC_MD5() */

void __thiscall yaSSL::HMAC_MD5::~HMAC_MD5(HMAC_MD5 *this)

{
  ~HMAC_MD5(this);
  return;
}

```

