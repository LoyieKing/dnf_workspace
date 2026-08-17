# yaSSL__CertManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 25

---

## AddPeerCert

```asm
// === 087975e0 yaSSL::CertManager::AddPeerCert  [0x087975e0-0x879764f] ===
 87975e0:	55                   	push   %ebp
 87975e1:	89 e5                	mov    %esp,%ebp
 87975e3:	83 ec 18             	sub    $0x18,%esp
 87975e6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87975e9:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87975ec:	8b 75 08             	mov    0x8(%ebp),%esi
 87975ef:	e8 04 b8 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87975f4:	81 c3 a4 55 bd 00    	add    $0xbd55a4,%ebx
 87975fa:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87975ff:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 8797606:	e8 45 ad fb ff       	call   8752350 <_ZnajN5yaSSL5new_tE>
 879760b:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8797611:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8797618:	8b 55 0c             	mov    0xc(%ebp),%edx
 879761b:	89 50 08             	mov    %edx,0x8(%eax)
 879761e:	8b 56 20             	mov    0x20(%esi),%edx
 8797621:	85 d2                	test   %edx,%edx
 8797623:	74 1b                	je     8797640 <_ZN5yaSSL11CertManager11AddPeerCertEPNS_4x509E+0x60>
 8797625:	89 42 04             	mov    %eax,0x4(%edx)
 8797628:	8b 56 20             	mov    0x20(%esi),%edx
 879762b:	89 10                	mov    %edx,(%eax)
 879762d:	83 46 24 01          	addl   $0x1,0x24(%esi)
 8797631:	89 46 20             	mov    %eax,0x20(%esi)
 8797634:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8797637:	8b 75 fc             	mov    -0x4(%ebp),%esi
 879763a:	89 ec                	mov    %ebp,%esp
 879763c:	5d                   	pop    %ebp
 879763d:	c3                   	ret
 879763e:	66 90                	xchg   %ax,%ax
 8797640:	89 46 1c             	mov    %eax,0x1c(%esi)
 8797643:	eb e8                	jmp    879762d <_ZN5yaSSL11CertManager11AddPeerCertEPNS_4x509E+0x4d>
 8797645:	90                   	nop
 8797646:	8d 76 00             	lea    0x0(%esi),%esi
 8797649:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::CertManager::AddPeerCert @ 0x87975e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertManager::AddPeerCert(yaSSL::x509*) */

void __thiscall yaSSL::CertManager::AddPeerCert(CertManager *this,x509 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new__(0xc,0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = param_1;
  if (*(int *)(this + 0x20) == 0) {
    *(undefined4 **)(this + 0x1c) = puVar1;
  }
  else {
    *(undefined4 **)(*(int *)(this + 0x20) + 4) = puVar1;
    *puVar1 = *(undefined4 *)(this + 0x20);
  }
  *(int *)(this + 0x24) = *(int *)(this + 0x24) + 1;
  *(undefined4 **)(this + 0x20) = puVar1;
  return;
}

```

---

## CertManager

```asm
// === 087978e0 yaSSL::CertManager::CertManager  [0x087978e0-0x879796f] ===
 87978e0:	55                   	push   %ebp
 87978e1:	89 e5                	mov    %esp,%ebp
 87978e3:	56                   	push   %esi
 87978e4:	53                   	push   %ebx
 87978e5:	e8 0e b5 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87978ea:	81 c3 ae 52 bd 00    	add    $0xbd52ae,%ebx
 87978f0:	83 ec 10             	sub    $0x10,%esp
 87978f3:	8b 75 08             	mov    0x8(%ebp),%esi
 87978f6:	8d 46 0c             	lea    0xc(%esi),%eax
 87978f9:	c7 06 00 00 00 00    	movl   $0x0,(%esi)
 87978ff:	c7 46 04 00 00 00 00 	movl   $0x0,0x4(%esi)
 8797906:	c7 46 08 00 00 00 00 	movl   $0x0,0x8(%esi)
 879790d:	89 04 24             	mov    %eax,(%esp)
 8797910:	e8 eb f3 ff ff       	call   8796d00 <_ZN5yaSSL12input_bufferC1Ev>
 8797915:	8d 46 28             	lea    0x28(%esi),%eax
 8797918:	c7 46 1c 00 00 00 00 	movl   $0x0,0x1c(%esi)
 879791f:	c7 46 20 00 00 00 00 	movl   $0x0,0x20(%esi)
 8797926:	c7 46 24 00 00 00 00 	movl   $0x0,0x24(%esi)
 879792d:	89 04 24             	mov    %eax,(%esp)
 8797930:	e8 cb f3 ff ff       	call   8796d00 <_ZN5yaSSL12input_bufferC1Ev>
 8797935:	c7 46 38 00 00 00 00 	movl   $0x0,0x38(%esi)
 879793c:	c7 46 44 00 00 00 00 	movl   $0x0,0x44(%esi)
 8797943:	c7 46 48 00 00 00 00 	movl   $0x0,0x48(%esi)
 879794a:	c7 46 4c 00 00 00 00 	movl   $0x0,0x4c(%esi)
 8797951:	c6 46 50 00          	movb   $0x0,0x50(%esi)
 8797955:	c6 46 51 00          	movb   $0x0,0x51(%esi)
 8797959:	c6 46 52 00          	movb   $0x0,0x52(%esi)
 879795d:	c6 46 53 00          	movb   $0x0,0x53(%esi)
 8797961:	c7 46 54 00 00 00 00 	movl   $0x0,0x54(%esi)
 8797968:	83 c4 10             	add    $0x10,%esp
 879796b:	5b                   	pop    %ebx
 879796c:	5e                   	pop    %esi
 879796d:	5d                   	pop    %ebp
 879796e:	c3                   	ret
 879796f:	90                   	nop

```

```c
// yaSSL::CertManager::CertManager @ 0x87978e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertManager::CertManager() */

void __thiscall yaSSL::CertManager::CertManager(CertManager *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  input_buffer::input_buffer((input_buffer *)(this + 0xc));
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  input_buffer::input_buffer((input_buffer *)(this + 0x28));
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  this[0x50] = (CertManager)0x0;
  this[0x51] = (CertManager)0x0;
  this[0x52] = (CertManager)0x0;
  this[0x53] = (CertManager)0x0;
  *(undefined4 *)(this + 0x54) = 0;
  return;
}

```

---

## CopyCaCert

```asm
// === 08797b00 yaSSL::CertManager::CopyCaCert  [0x08797b00-0x8797cbf] ===
 8797b00:	55                   	push   %ebp
 8797b01:	89 e5                	mov    %esp,%ebp
 8797b03:	57                   	push   %edi
 8797b04:	56                   	push   %esi
 8797b05:	53                   	push   %ebx
 8797b06:	e8 ed b2 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8797b0b:	81 c3 8d 50 bd 00    	add    $0xbd508d,%ebx
 8797b11:	81 ec cc 04 00 00    	sub    $0x4cc,%esp
 8797b17:	8b 55 0c             	mov    0xc(%ebp),%edx
 8797b1a:	8b 75 08             	mov    0x8(%ebp),%esi
 8797b1d:	89 14 24             	mov    %edx,(%esp)
 8797b20:	89 95 4c fb ff ff    	mov    %edx,-0x4b4(%ebp)
 8797b26:	e8 a5 f8 ff ff       	call   87973d0 <_ZNK5yaSSL4x50910get_lengthEv>
 8797b2b:	8b 95 4c fb ff ff    	mov    -0x4b4(%ebp),%edx
 8797b31:	89 14 24             	mov    %edx,(%esp)
 8797b34:	89 c7                	mov    %eax,%edi
 8797b36:	e8 a5 f8 ff ff       	call   87973e0 <_ZNK5yaSSL4x50910get_bufferEv>
 8797b3b:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 8797b3e:	89 c2                	mov    %eax,%edx
 8797b40:	31 c0                	xor    %eax,%eax
 8797b42:	85 ff                	test   %edi,%edi
 8797b44:	74 19                	je     8797b5f <_ZN5yaSSL11CertManager10CopyCaCertEPKNS_4x509E+0x5f>
 8797b46:	89 95 4c fb ff ff    	mov    %edx,-0x4b4(%ebp)
 8797b4c:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8797b51:	89 3c 24             	mov    %edi,(%esp)
 8797b54:	e8 37 fc fc ff       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 8797b59:	8b 95 4c fb ff ff    	mov    -0x4b4(%ebp),%edx
 8797b5f:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 8797b62:	8d bd 60 fb ff ff    	lea    -0x4a0(%ebp),%edi
 8797b68:	89 54 24 04          	mov    %edx,0x4(%esp)
 8797b6c:	89 04 24             	mov    %eax,(%esp)
 8797b6f:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8797b72:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8797b76:	e8 25 5d 8e ff       	call   807d8a0 <memcpy@plt>
 8797b7b:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8797b82:	00 
 8797b83:	0f b6 46 51          	movzbl 0x51(%esi),%eax
 8797b87:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8797b8e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8797b95:	00 
 8797b96:	89 3c 24             	mov    %edi,(%esp)
 8797b99:	89 44 24 10          	mov    %eax,0x10(%esp)
 8797b9d:	8d 46 44             	lea    0x44(%esi),%eax
 8797ba0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8797ba4:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8797ba7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8797bab:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8797bb2:	e8 e9 e9 fb ff       	call   87565a0 <_ZN8TaoCrypt11CertDecoderC1ERNS_6SourceEbPN5mySTL4listIPNS_6SignerEEEbNS0_8CertTypeE>
 8797bb7:	8d 85 54 fb ff ff    	lea    -0x4ac(%ebp),%eax
 8797bbd:	89 04 24             	mov    %eax,(%esp)
 8797bc0:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8797bc4:	e8 a7 bb fb ff       	call   8753770 <_ZN8TaoCrypt11BER_Decoder8GetErrorEv>
 8797bc9:	8b 85 54 fb ff ff    	mov    -0x4ac(%ebp),%eax
 8797bcf:	83 ec 04             	sub    $0x4,%esp
 8797bd2:	85 c0                	test   %eax,%eax
 8797bd4:	74 3a                	je     8797c10 <_ZN5yaSSL11CertManager10CopyCaCertEPKNS_4x509E+0x110>
 8797bd6:	89 3c 24             	mov    %edi,(%esp)
 8797bd9:	e8 c2 c5 fb ff       	call   87541a0 <_ZN8TaoCrypt11CertDecoderD1Ev>
 8797bde:	8b 75 d8             	mov    -0x28(%ebp),%esi
 8797be1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8797be4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8797beb:	00 
 8797bec:	89 34 24             	mov    %esi,(%esp)
 8797bef:	89 44 24 08          	mov    %eax,0x8(%esp)
 8797bf3:	e8 c8 60 8e ff       	call   807dcc0 <memset@plt>
 8797bf8:	89 34 24             	mov    %esi,(%esp)
 8797bfb:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8797c00:	e8 1b fb fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8797c05:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8797c08:	31 c0                	xor    %eax,%eax
 8797c0a:	5b                   	pop    %ebx
 8797c0b:	5e                   	pop    %esi
 8797c0c:	5f                   	pop    %edi
 8797c0d:	5d                   	pop    %ebp
 8797c0e:	c3                   	ret
 8797c0f:	90                   	nop
 8797c10:	8b 8d 6c fb ff ff    	mov    -0x494(%ebp),%ecx
 8797c16:	8b 85 68 fb ff ff    	mov    -0x498(%ebp),%eax
 8797c1c:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8797c21:	c7 04 24 1c 02 00 00 	movl   $0x21c,(%esp)
 8797c28:	89 8d 4c fb ff ff    	mov    %ecx,-0x4b4(%ebp)
 8797c2e:	89 85 50 fb ff ff    	mov    %eax,-0x4b0(%ebp)
 8797c34:	e8 67 90 fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8797c39:	8b 8d 4c fb ff ff    	mov    -0x4b4(%ebp),%ecx
 8797c3f:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8797c43:	89 c2                	mov    %eax,%edx
 8797c45:	8d 85 84 fb ff ff    	lea    -0x47c(%ebp),%eax
 8797c4b:	89 44 24 10          	mov    %eax,0x10(%esp)
 8797c4f:	8d 85 b0 fd ff ff    	lea    -0x250(%ebp),%eax
 8797c55:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8797c59:	8b 85 50 fb ff ff    	mov    -0x4b0(%ebp),%eax
 8797c5f:	89 14 24             	mov    %edx,(%esp)
 8797c62:	89 95 4c fb ff ff    	mov    %edx,-0x4b4(%ebp)
 8797c68:	89 44 24 04          	mov    %eax,0x4(%esp)
 8797c6c:	e8 2f c3 fb ff       	call   8753fa0 <_ZN8TaoCrypt6SignerC1EPKhjPKcS2_>
 8797c71:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8797c76:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 8797c7d:	e8 ce a6 fb ff       	call   8752350 <_ZnajN5yaSSL5new_tE>
 8797c82:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8797c88:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8797c8f:	8b 95 4c fb ff ff    	mov    -0x4b4(%ebp),%edx
 8797c95:	89 50 08             	mov    %edx,0x8(%eax)
 8797c98:	8b 56 48             	mov    0x48(%esi),%edx
 8797c9b:	85 d2                	test   %edx,%edx
 8797c9d:	74 19                	je     8797cb8 <_ZN5yaSSL11CertManager10CopyCaCertEPKNS_4x509E+0x1b8>
 8797c9f:	89 42 04             	mov    %eax,0x4(%edx)
 8797ca2:	8b 56 48             	mov    0x48(%esi),%edx
 8797ca5:	89 10                	mov    %edx,(%eax)
 8797ca7:	89 46 48             	mov    %eax,0x48(%esi)
 8797caa:	83 46 4c 01          	addl   $0x1,0x4c(%esi)
 8797cae:	e9 23 ff ff ff       	jmp    8797bd6 <_ZN5yaSSL11CertManager10CopyCaCertEPKNS_4x509E+0xd6>
 8797cb3:	90                   	nop
 8797cb4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8797cb8:	89 46 44             	mov    %eax,0x44(%esi)
 8797cbb:	eb ea                	jmp    8797ca7 <_ZN5yaSSL11CertManager10CopyCaCertEPKNS_4x509E+0x1a7>
 8797cbd:	90                   	nop
 8797cbe:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::CertManager::CopyCaCert @ 0x8797b00

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertManager::CopyCaCert(yaSSL::x509 const*) */

undefined4 __thiscall yaSSL::CertManager::CopyCaCert(CertManager *this,x509 *param_1)

{
  size_t sVar1;
  void *pvVar2;
  Signer *this_00;
  undefined4 *puVar3;
  uint in_stack_fffffb28;
  CertDecoder *pCVar4;
  uint uVar5;
  int local_4b0;
  CertDecoder local_4a4 [8];
  uchar *local_49c;
  uint local_498;
  uchar local_480 [556];
  char local_254 [548];
  size_t local_30;
  void *local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x8797b0b;
  sVar1 = yaSSL::x509::get_length(param_1);
  pvVar2 = (void *)yaSSL::x509::get_buffer(param_1);
  local_2c = (void *)0x0;
  local_30 = sVar1;
  if (sVar1 != 0) {
    local_2c = operator_new__(sVar1,in_stack_fffffb28 & 0xffffff00);
  }
  memcpy(local_2c,pvVar2,local_30);
  local_24 = 0;
  local_20 = 0;
  TaoCrypt::CertDecoder::CertDecoder(local_4a4,&local_30,1,this + 0x44,this[0x51],0);
  pCVar4 = local_4a4;
  TaoCrypt::BER_Decoder::GetError();
  if (local_4b0 == 0) {
    this_00 = operator_new(0x21c,(uint)pCVar4 & 0xffffff00);
    TaoCrypt::Signer::Signer(this_00,local_49c,local_498,local_254,local_480);
    puVar3 = operator_new__(0xc,(uint)local_49c & 0xffffff00);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = this_00;
    if (*(int *)(this + 0x48) == 0) {
      *(undefined4 **)(this + 0x44) = puVar3;
    }
    else {
      *(undefined4 **)(*(int *)(this + 0x48) + 4) = puVar3;
      *puVar3 = *(undefined4 *)(this + 0x48);
    }
    *(undefined4 **)(this + 0x48) = puVar3;
    *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + 1;
  }
  TaoCrypt::CertDecoder::~CertDecoder(local_4a4);
  pvVar2 = local_2c;
  uVar5 = 0;
  memset(local_2c,0,local_30);
  operator_delete__(pvVar2,uVar5 & 0xffffff00);
  return 0;
}

```

---

## CopySelfCert

```asm
// === 087976b0 yaSSL::CertManager::CopySelfCert  [0x087976b0-0x879774f] ===
 87976b0:	55                   	push   %ebp
 87976b1:	89 e5                	mov    %esp,%ebp
 87976b3:	83 ec 38             	sub    $0x38,%esp
 87976b6:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87976b9:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87976bc:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87976bf:	e8 34 b7 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87976c4:	81 c3 d4 54 bd 00    	add    $0xbd54d4,%ebx
 87976ca:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87976cd:	8b 75 08             	mov    0x8(%ebp),%esi
 87976d0:	85 ff                	test   %edi,%edi
 87976d2:	74 5a                	je     879772e <_ZN5yaSSL11CertManager12CopySelfCertEPKNS_4x509E+0x7e>
 87976d4:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87976d9:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 87976e0:	e8 bb 95 fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87976e5:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87976e9:	89 04 24             	mov    %eax,(%esp)
 87976ec:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87976ef:	e8 5c ff ff ff       	call   8797650 <_ZN5yaSSL4x509C1ERKS0_>
 87976f4:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87976f9:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 8797700:	e8 4b ac fb ff       	call   8752350 <_ZnajN5yaSSL5new_tE>
 8797705:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 879770b:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8797712:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8797715:	89 50 08             	mov    %edx,0x8(%eax)
 8797718:	8b 56 04             	mov    0x4(%esi),%edx
 879771b:	85 d2                	test   %edx,%edx
 879771d:	74 21                	je     8797740 <_ZN5yaSSL11CertManager12CopySelfCertEPKNS_4x509E+0x90>
 879771f:	89 42 04             	mov    %eax,0x4(%edx)
 8797722:	8b 56 04             	mov    0x4(%esi),%edx
 8797725:	89 10                	mov    %edx,(%eax)
 8797727:	83 46 08 01          	addl   $0x1,0x8(%esi)
 879772b:	89 46 04             	mov    %eax,0x4(%esi)
 879772e:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8797731:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8797734:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8797737:	89 ec                	mov    %ebp,%esp
 8797739:	5d                   	pop    %ebp
 879773a:	c3                   	ret
 879773b:	90                   	nop
 879773c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8797740:	89 06                	mov    %eax,(%esi)
 8797742:	eb e3                	jmp    8797727 <_ZN5yaSSL11CertManager12CopySelfCertEPKNS_4x509E+0x77>
 8797744:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 879774a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::CertManager::CopySelfCert @ 0x87976b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertManager::CopySelfCert(yaSSL::x509 const*) */

void __thiscall yaSSL::CertManager::CopySelfCert(CertManager *this,x509 *param_1)

{
  x509 *this_00;
  undefined4 *puVar1;
  uint in_stack_ffffffc8;
  
  if (param_1 != (x509 *)0x0) {
    this_00 = operator_new(8,in_stack_ffffffc8 & 0xffffff00);
    yaSSL::x509::x509(this_00,param_1);
    puVar1 = operator_new__(0xc,(uint)param_1 & 0xffffff00);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = this_00;
    if (*(int *)(this + 4) == 0) {
      *(undefined4 **)this = puVar1;
    }
    else {
      *(undefined4 **)(*(int *)(this + 4) + 4) = puVar1;
      *puVar1 = *(undefined4 *)(this + 4);
    }
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    *(undefined4 **)(this + 4) = puVar1;
  }
  return;
}

```

---

## SetPrivateKey

```asm
// === 08797cc0 yaSSL::CertManager::SetPrivateKey  [0x08797cc0-0x8797e8f] ===
 8797cc0:	55                   	push   %ebp
 8797cc1:	89 e5                	mov    %esp,%ebp
 8797cc3:	57                   	push   %edi
 8797cc4:	56                   	push   %esi
 8797cc5:	53                   	push   %ebx
 8797cc6:	e8 2d b1 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8797ccb:	81 c3 cd 4e bd 00    	add    $0xbd4ecd,%ebx
 8797cd1:	81 ec cc 04 00 00    	sub    $0x4cc,%esp
 8797cd7:	8b 75 0c             	mov    0xc(%ebp),%esi
 8797cda:	8b 7d 08             	mov    0x8(%ebp),%edi
 8797cdd:	89 34 24             	mov    %esi,(%esp)
 8797ce0:	e8 eb f6 ff ff       	call   87973d0 <_ZNK5yaSSL4x50910get_lengthEv>
 8797ce5:	8d 57 0c             	lea    0xc(%edi),%edx
 8797ce8:	89 14 24             	mov    %edx,(%esp)
 8797ceb:	89 95 4c fb ff ff    	mov    %edx,-0x4b4(%ebp)
 8797cf1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8797cf5:	e8 26 f5 ff ff       	call   8797220 <_ZN5yaSSL12input_buffer8allocateEj>
 8797cfa:	89 34 24             	mov    %esi,(%esp)
 8797cfd:	e8 ce f6 ff ff       	call   87973d0 <_ZNK5yaSSL4x50910get_lengthEv>
 8797d02:	89 34 24             	mov    %esi,(%esp)
 8797d05:	89 85 48 fb ff ff    	mov    %eax,-0x4b8(%ebp)
 8797d0b:	e8 d0 f6 ff ff       	call   87973e0 <_ZNK5yaSSL4x50910get_bufferEv>
 8797d10:	8b 8d 48 fb ff ff    	mov    -0x4b8(%ebp),%ecx
 8797d16:	8b 95 4c fb ff ff    	mov    -0x4b4(%ebp),%edx
 8797d1c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8797d20:	89 14 24             	mov    %edx,(%esp)
 8797d23:	89 44 24 04          	mov    %eax,0x4(%esp)
 8797d27:	e8 84 f3 ff ff       	call   87970b0 <_ZN5yaSSL12input_buffer6assignEPKhj>
 8797d2c:	8b 07                	mov    (%edi),%eax
 8797d2e:	85 c0                	test   %eax,%eax
 8797d30:	0f 84 3a 01 00 00    	je     8797e70 <_ZN5yaSSL11CertManager13SetPrivateKeyERKNS_4x509E+0x1b0>
 8797d36:	8b 70 08             	mov    0x8(%eax),%esi
 8797d39:	85 f6                	test   %esi,%esi
 8797d3b:	0f 84 2f 01 00 00    	je     8797e70 <_ZN5yaSSL11CertManager13SetPrivateKeyERKNS_4x509E+0x1b0>
 8797d41:	89 34 24             	mov    %esi,(%esp)
 8797d44:	e8 87 f6 ff ff       	call   87973d0 <_ZNK5yaSSL4x50910get_lengthEv>
 8797d49:	89 34 24             	mov    %esi,(%esp)
 8797d4c:	89 85 4c fb ff ff    	mov    %eax,-0x4b4(%ebp)
 8797d52:	e8 89 f6 ff ff       	call   87973e0 <_ZNK5yaSSL4x50910get_bufferEv>
 8797d57:	8b 95 4c fb ff ff    	mov    -0x4b4(%ebp),%edx
 8797d5d:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 8797d60:	89 c6                	mov    %eax,%esi
 8797d62:	31 c0                	xor    %eax,%eax
 8797d64:	85 d2                	test   %edx,%edx
 8797d66:	0f 85 ec 00 00 00    	jne    8797e58 <_ZN5yaSSL11CertManager13SetPrivateKeyERKNS_4x509E+0x198>
 8797d6c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8797d70:	89 74 24 04          	mov    %esi,0x4(%esp)
 8797d74:	89 04 24             	mov    %eax,(%esp)
 8797d77:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8797d7a:	e8 21 5b 8e ff       	call   807d8a0 <memcpy@plt>
 8797d7f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8797d82:	89 44 24 04          	mov    %eax,0x4(%esp)
 8797d86:	8d 85 60 fb ff ff    	lea    -0x4a0(%ebp),%eax
 8797d8c:	89 04 24             	mov    %eax,(%esp)
 8797d8f:	89 85 50 fb ff ff    	mov    %eax,-0x4b0(%ebp)
 8797d95:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8797d9c:	00 
 8797d9d:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8797da4:	00 
 8797da5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8797dac:	00 
 8797dad:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8797db4:	00 
 8797db5:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8797dbc:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8797dc3:	e8 d8 e7 fb ff       	call   87565a0 <_ZN8TaoCrypt11CertDecoderC1ERNS_6SourceEbPN5mySTL4listIPNS_6SignerEEEbNS0_8CertTypeE>
 8797dc8:	8b 95 50 fb ff ff    	mov    -0x4b0(%ebp),%edx
 8797dce:	89 14 24             	mov    %edx,(%esp)
 8797dd1:	e8 da d2 fb ff       	call   87550b0 <_ZN8TaoCrypt11CertDecoder11DecodeToKeyEv>
 8797dd6:	8b 95 50 fb ff ff    	mov    -0x4b0(%ebp),%edx
 8797ddc:	8d 85 54 fb ff ff    	lea    -0x4ac(%ebp),%eax
 8797de2:	89 04 24             	mov    %eax,(%esp)
 8797de5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8797de9:	e8 82 b9 fb ff       	call   8753770 <_ZN8TaoCrypt11BER_Decoder8GetErrorEv>
 8797dee:	8b b5 54 fb ff ff    	mov    -0x4ac(%ebp),%esi
 8797df4:	83 ec 04             	sub    $0x4,%esp
 8797df7:	85 f6                	test   %esi,%esi
 8797df9:	0f 85 81 00 00 00    	jne    8797e80 <_ZN5yaSSL11CertManager13SetPrivateKeyERKNS_4x509E+0x1c0>
 8797dff:	31 c0                	xor    %eax,%eax
 8797e01:	8b 95 50 fb ff ff    	mov    -0x4b0(%ebp),%edx
 8797e07:	81 bd 80 fb ff ff 85 	cmpl   $0x285,-0x480(%ebp)
 8797e0e:	02 00 00 
 8797e11:	0f 95 c0             	setne  %al
 8797e14:	83 c0 01             	add    $0x1,%eax
 8797e17:	89 47 3c             	mov    %eax,0x3c(%edi)
 8797e1a:	89 14 24             	mov    %edx,(%esp)
 8797e1d:	e8 7e c3 fb ff       	call   87541a0 <_ZN8TaoCrypt11CertDecoderD1Ev>
 8797e22:	8b 7d d8             	mov    -0x28(%ebp),%edi
 8797e25:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8797e28:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8797e2f:	00 
 8797e30:	89 3c 24             	mov    %edi,(%esp)
 8797e33:	89 44 24 08          	mov    %eax,0x8(%esp)
 8797e37:	e8 84 5e 8e ff       	call   807dcc0 <memset@plt>
 8797e3c:	89 3c 24             	mov    %edi,(%esp)
 8797e3f:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8797e44:	e8 d7 f8 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8797e49:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8797e4c:	89 f0                	mov    %esi,%eax
 8797e4e:	5b                   	pop    %ebx
 8797e4f:	5e                   	pop    %esi
 8797e50:	5f                   	pop    %edi
 8797e51:	5d                   	pop    %ebp
 8797e52:	c3                   	ret
 8797e53:	90                   	nop
 8797e54:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8797e58:	89 14 24             	mov    %edx,(%esp)
 8797e5b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8797e60:	e8 2b f9 fc ff       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 8797e65:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8797e68:	e9 ff fe ff ff       	jmp    8797d6c <_ZN5yaSSL11CertManager13SetPrivateKeyERKNS_4x509E+0xac>
 8797e6d:	8d 76 00             	lea    0x0(%esi),%esi
 8797e70:	31 f6                	xor    %esi,%esi
 8797e72:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8797e75:	89 f0                	mov    %esi,%eax
 8797e77:	5b                   	pop    %ebx
 8797e78:	5e                   	pop    %esi
 8797e79:	5f                   	pop    %edi
 8797e7a:	5d                   	pop    %ebp
 8797e7b:	c3                   	ret
 8797e7c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8797e80:	8b 85 50 fb ff ff    	mov    -0x4b0(%ebp),%eax
 8797e86:	89 04 24             	mov    %eax,(%esp)
 8797e89:	eb 92                	jmp    8797e1d <_ZN5yaSSL11CertManager13SetPrivateKeyERKNS_4x509E+0x15d>
 8797e8b:	90                   	nop
 8797e8c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::CertManager::SetPrivateKey @ 0x8797cc0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertManager::SetPrivateKey(yaSSL::x509 const&) */

int __thiscall yaSSL::CertManager::SetPrivateKey(CertManager *this,x509 *param_1)

{
  x509 *this_00;
  uint uVar1;
  uchar *puVar2;
  size_t sVar3;
  void *pvVar4;
  int local_4b0;
  CertDecoder local_4a4 [32];
  int local_484;
  size_t local_30;
  void *local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x8797ccb;
  uVar1 = yaSSL::x509::get_length(param_1);
  input_buffer::allocate((input_buffer *)(this + 0xc),uVar1);
  uVar1 = yaSSL::x509::get_length(param_1);
  puVar2 = (uchar *)yaSSL::x509::get_buffer(param_1);
  input_buffer::assign((input_buffer *)(this + 0xc),puVar2,uVar1);
  if ((*(int *)this != 0) && (this_00 = *(x509 **)(*(int *)this + 8), this_00 != (x509 *)0x0)) {
    sVar3 = yaSSL::x509::get_length(this_00);
    pvVar4 = (void *)yaSSL::x509::get_buffer(this_00);
    local_2c = (void *)0x0;
    local_30 = sVar3;
    if (sVar3 != 0) {
      local_2c = operator_new__(sVar3,(uint)puVar2 & 0xffffff00);
    }
    memcpy(local_2c,pvVar4,local_30);
    local_24 = 0;
    local_20 = 0;
    TaoCrypt::CertDecoder::CertDecoder(local_4a4,&local_30,0,0,0,1);
    TaoCrypt::CertDecoder::DecodeToKey(local_4a4);
    TaoCrypt::BER_Decoder::GetError();
    if (local_4b0 == 0) {
      *(uint *)(this + 0x3c) = (local_484 != 0x285) + 1;
    }
    TaoCrypt::CertDecoder::~CertDecoder(local_4a4);
    pvVar4 = local_2c;
    uVar1 = 0;
    memset(local_2c,0,local_30);
    operator_delete__(pvVar4,uVar1 & 0xffffff00);
    return local_4b0;
  }
  return 0;
}

```

---

## Validate

```asm
// === 08797e90 yaSSL::CertManager::Validate  [0x08797e90-0x87984bf] ===
 8797e90:	55                   	push   %ebp
 8797e91:	89 e5                	mov    %esp,%ebp
 8797e93:	57                   	push   %edi
 8797e94:	56                   	push   %esi
 8797e95:	53                   	push   %ebx
 8797e96:	81 ec fc 04 00 00    	sub    $0x4fc,%esp
 8797e9c:	8b 75 08             	mov    0x8(%ebp),%esi
 8797e9f:	e8 54 af f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8797ea4:	81 c3 f4 4c bd 00    	add    $0xbd4cf4,%ebx
 8797eaa:	8b 46 24             	mov    0x24(%esi),%eax
 8797ead:	8b 7e 20             	mov    0x20(%esi),%edi
 8797eb0:	83 f8 01             	cmp    $0x1,%eax
 8797eb3:	89 85 4c fb ff ff    	mov    %eax,-0x4b4(%ebp)
 8797eb9:	0f 86 19 02 00 00    	jbe    87980d8 <_ZN5yaSSL11CertManager8ValidateEv+0x248>
 8797ebf:	8d 56 44             	lea    0x44(%esi),%edx
 8797ec2:	8d 4d d4             	lea    -0x2c(%ebp),%ecx
 8797ec5:	8d 85 60 fb ff ff    	lea    -0x4a0(%ebp),%eax
 8797ecb:	89 95 44 fb ff ff    	mov    %edx,-0x4bc(%ebp)
 8797ed1:	8d 95 54 fb ff ff    	lea    -0x4ac(%ebp),%edx
 8797ed7:	89 8d 3c fb ff ff    	mov    %ecx,-0x4c4(%ebp)
 8797edd:	8d 8d 84 fb ff ff    	lea    -0x47c(%ebp),%ecx
 8797ee3:	89 85 50 fb ff ff    	mov    %eax,-0x4b0(%ebp)
 8797ee9:	8d 85 b0 fd ff ff    	lea    -0x250(%ebp),%eax
 8797eef:	89 95 40 fb ff ff    	mov    %edx,-0x4c0(%ebp)
 8797ef5:	89 8d 38 fb ff ff    	mov    %ecx,-0x4c8(%ebp)
 8797efb:	89 85 34 fb ff ff    	mov    %eax,-0x4cc(%ebp)
 8797f01:	eb 6b                	jmp    8797f6e <_ZN5yaSSL11CertManager8ValidateEv+0xde>
 8797f03:	90                   	nop
 8797f04:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8797f08:	89 42 04             	mov    %eax,0x4(%edx)
 8797f0b:	8b 56 48             	mov    0x48(%esi),%edx
 8797f0e:	89 10                	mov    %edx,(%eax)
 8797f10:	89 46 48             	mov    %eax,0x48(%esi)
 8797f13:	8b 85 50 fb ff ff    	mov    -0x4b0(%ebp),%eax
 8797f19:	83 46 4c 01          	addl   $0x1,0x4c(%esi)
 8797f1d:	8b 3f                	mov    (%edi),%edi
 8797f1f:	83 ad 4c fb ff ff 01 	subl   $0x1,-0x4b4(%ebp)
 8797f26:	89 04 24             	mov    %eax,(%esp)
 8797f29:	e8 72 c2 fb ff       	call   87541a0 <_ZN8TaoCrypt11CertDecoderD1Ev>
 8797f2e:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8797f31:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8797f34:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8797f3b:	00 
 8797f3c:	89 14 24             	mov    %edx,(%esp)
 8797f3f:	89 95 30 fb ff ff    	mov    %edx,-0x4d0(%ebp)
 8797f45:	89 44 24 08          	mov    %eax,0x8(%esp)
 8797f49:	e8 72 5d 8e ff       	call   807dcc0 <memset@plt>
 8797f4e:	8b 95 30 fb ff ff    	mov    -0x4d0(%ebp),%edx
 8797f54:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8797f59:	89 14 24             	mov    %edx,(%esp)
 8797f5c:	e8 bf f7 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8797f61:	83 bd 4c fb ff ff 01 	cmpl   $0x1,-0x4b4(%ebp)
 8797f68:	0f 86 6a 01 00 00    	jbe    87980d8 <_ZN5yaSSL11CertManager8ValidateEv+0x248>
 8797f6e:	8b 47 08             	mov    0x8(%edi),%eax
 8797f71:	89 04 24             	mov    %eax,(%esp)
 8797f74:	e8 57 f4 ff ff       	call   87973d0 <_ZNK5yaSSL4x50910get_lengthEv>
 8797f79:	89 c2                	mov    %eax,%edx
 8797f7b:	8b 47 08             	mov    0x8(%edi),%eax
 8797f7e:	89 95 30 fb ff ff    	mov    %edx,-0x4d0(%ebp)
 8797f84:	89 04 24             	mov    %eax,(%esp)
 8797f87:	e8 54 f4 ff ff       	call   87973e0 <_ZNK5yaSSL4x50910get_bufferEv>
 8797f8c:	8b 95 30 fb ff ff    	mov    -0x4d0(%ebp),%edx
 8797f92:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 8797f95:	89 c1                	mov    %eax,%ecx
 8797f97:	31 c0                	xor    %eax,%eax
 8797f99:	85 d2                	test   %edx,%edx
 8797f9b:	74 1c                	je     8797fb9 <_ZN5yaSSL11CertManager8ValidateEv+0x129>
 8797f9d:	89 14 24             	mov    %edx,(%esp)
 8797fa0:	89 8d 2c fb ff ff    	mov    %ecx,-0x4d4(%ebp)
 8797fa6:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8797fab:	e8 e0 f7 fc ff       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 8797fb0:	8b 8d 2c fb ff ff    	mov    -0x4d4(%ebp),%ecx
 8797fb6:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8797fb9:	89 54 24 08          	mov    %edx,0x8(%esp)
 8797fbd:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8797fc1:	89 04 24             	mov    %eax,(%esp)
 8797fc4:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8797fc7:	e8 d4 58 8e ff       	call   807d8a0 <memcpy@plt>
 8797fcc:	8b 95 44 fb ff ff    	mov    -0x4bc(%ebp),%edx
 8797fd2:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8797fd9:	00 
 8797fda:	0f b6 46 51          	movzbl 0x51(%esi),%eax
 8797fde:	8b 8d 3c fb ff ff    	mov    -0x4c4(%ebp),%ecx
 8797fe4:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8797feb:	00 
 8797fec:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8797ff0:	89 44 24 10          	mov    %eax,0x10(%esp)
 8797ff4:	8b 85 50 fb ff ff    	mov    -0x4b0(%ebp),%eax
 8797ffa:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8797ffe:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8798005:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 879800c:	89 04 24             	mov    %eax,(%esp)
 879800f:	e8 8c e5 fb ff       	call   87565a0 <_ZN8TaoCrypt11CertDecoderC1ERNS_6SourceEbPN5mySTL4listIPNS_6SignerEEEbNS0_8CertTypeE>
 8798014:	8b 95 50 fb ff ff    	mov    -0x4b0(%ebp),%edx
 879801a:	8b 8d 40 fb ff ff    	mov    -0x4c0(%ebp),%ecx
 8798020:	89 54 24 04          	mov    %edx,0x4(%esp)
 8798024:	89 0c 24             	mov    %ecx,(%esp)
 8798027:	e8 44 b7 fb ff       	call   8753770 <_ZN8TaoCrypt11BER_Decoder8GetErrorEv>
 879802c:	8b 95 54 fb ff ff    	mov    -0x4ac(%ebp),%edx
 8798032:	83 ec 04             	sub    $0x4,%esp
 8798035:	85 d2                	test   %edx,%edx
 8798037:	0f 85 b3 00 00 00    	jne    87980f0 <_ZN5yaSSL11CertManager8ValidateEv+0x260>
 879803d:	8b 95 68 fb ff ff    	mov    -0x498(%ebp),%edx
 8798043:	8b 8d 6c fb ff ff    	mov    -0x494(%ebp),%ecx
 8798049:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879804e:	c7 04 24 1c 02 00 00 	movl   $0x21c,(%esp)
 8798055:	89 95 48 fb ff ff    	mov    %edx,-0x4b8(%ebp)
 879805b:	89 8d 2c fb ff ff    	mov    %ecx,-0x4d4(%ebp)
 8798061:	e8 3a 8c fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8798066:	8b 8d 2c fb ff ff    	mov    -0x4d4(%ebp),%ecx
 879806c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8798070:	8b 8d 48 fb ff ff    	mov    -0x4b8(%ebp),%ecx
 8798076:	89 c2                	mov    %eax,%edx
 8798078:	8b 85 38 fb ff ff    	mov    -0x4c8(%ebp),%eax
 879807e:	89 14 24             	mov    %edx,(%esp)
 8798081:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8798085:	89 95 30 fb ff ff    	mov    %edx,-0x4d0(%ebp)
 879808b:	89 44 24 10          	mov    %eax,0x10(%esp)
 879808f:	8b 85 34 fb ff ff    	mov    -0x4cc(%ebp),%eax
 8798095:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8798099:	e8 02 bf fb ff       	call   8753fa0 <_ZN8TaoCrypt6SignerC1EPKhjPKcS2_>
 879809e:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87980a3:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 87980aa:	e8 a1 a2 fb ff       	call   8752350 <_ZnajN5yaSSL5new_tE>
 87980af:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 87980b5:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 87980bc:	8b 95 30 fb ff ff    	mov    -0x4d0(%ebp),%edx
 87980c2:	89 50 08             	mov    %edx,0x8(%eax)
 87980c5:	8b 56 48             	mov    0x48(%esi),%edx
 87980c8:	85 d2                	test   %edx,%edx
 87980ca:	0f 85 38 fe ff ff    	jne    8797f08 <_ZN5yaSSL11CertManager8ValidateEv+0x78>
 87980d0:	89 46 44             	mov    %eax,0x44(%esi)
 87980d3:	e9 38 fe ff ff       	jmp    8797f10 <_ZN5yaSSL11CertManager8ValidateEv+0x80>
 87980d8:	8b 8d 4c fb ff ff    	mov    -0x4b4(%ebp),%ecx
 87980de:	31 d2                	xor    %edx,%edx
 87980e0:	85 c9                	test   %ecx,%ecx
 87980e2:	75 5c                	jne    8798140 <_ZN5yaSSL11CertManager8ValidateEv+0x2b0>
 87980e4:	8d 65 f4             	lea    -0xc(%ebp),%esp
 87980e7:	89 d0                	mov    %edx,%eax
 87980e9:	5b                   	pop    %ebx
 87980ea:	5e                   	pop    %esi
 87980eb:	5f                   	pop    %edi
 87980ec:	5d                   	pop    %ebp
 87980ed:	c3                   	ret
 87980ee:	66 90                	xchg   %ax,%ax
 87980f0:	8b 85 50 fb ff ff    	mov    -0x4b0(%ebp),%eax
 87980f6:	89 95 30 fb ff ff    	mov    %edx,-0x4d0(%ebp)
 87980fc:	89 04 24             	mov    %eax,(%esp)
 87980ff:	e8 9c c0 fb ff       	call   87541a0 <_ZN8TaoCrypt11CertDecoderD1Ev>
 8798104:	8b 75 d8             	mov    -0x28(%ebp),%esi
 8798107:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 879810a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8798111:	00 
 8798112:	89 34 24             	mov    %esi,(%esp)
 8798115:	89 44 24 08          	mov    %eax,0x8(%esp)
 8798119:	e8 a2 5b 8e ff       	call   807dcc0 <memset@plt>
 879811e:	89 34 24             	mov    %esi,(%esp)
 8798121:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8798126:	e8 f5 f5 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879812b:	8b 95 30 fb ff ff    	mov    -0x4d0(%ebp),%edx
 8798131:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8798134:	5b                   	pop    %ebx
 8798135:	5e                   	pop    %esi
 8798136:	5f                   	pop    %edi
 8798137:	89 d0                	mov    %edx,%eax
 8798139:	5d                   	pop    %ebp
 879813a:	c3                   	ret
 879813b:	90                   	nop
 879813c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8798140:	8b 47 08             	mov    0x8(%edi),%eax
 8798143:	89 04 24             	mov    %eax,(%esp)
 8798146:	e8 85 f2 ff ff       	call   87973d0 <_ZNK5yaSSL4x50910get_lengthEv>
 879814b:	89 c2                	mov    %eax,%edx
 879814d:	8b 47 08             	mov    0x8(%edi),%eax
 8798150:	89 95 30 fb ff ff    	mov    %edx,-0x4d0(%ebp)
 8798156:	89 04 24             	mov    %eax,(%esp)
 8798159:	e8 82 f2 ff ff       	call   87973e0 <_ZNK5yaSSL4x50910get_bufferEv>
 879815e:	8b 95 30 fb ff ff    	mov    -0x4d0(%ebp),%edx
 8798164:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 8798167:	89 c7                	mov    %eax,%edi
 8798169:	31 c0                	xor    %eax,%eax
 879816b:	85 d2                	test   %edx,%edx
 879816d:	74 10                	je     879817f <_ZN5yaSSL11CertManager8ValidateEv+0x2ef>
 879816f:	89 14 24             	mov    %edx,(%esp)
 8798172:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8798177:	e8 14 f6 fc ff       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 879817c:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 879817f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8798183:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8798187:	89 04 24             	mov    %eax,(%esp)
 879818a:	89 45 d8             	mov    %eax,-0x28(%ebp)
 879818d:	e8 0e 57 8e ff       	call   807d8a0 <memcpy@plt>
 8798192:	8d 95 60 fb ff ff    	lea    -0x4a0(%ebp),%edx
 8798198:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 879819f:	00 
 87981a0:	0f b6 46 51          	movzbl 0x51(%esi),%eax
 87981a4:	89 95 50 fb ff ff    	mov    %edx,-0x4b0(%ebp)
 87981aa:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 87981b1:	00 
 87981b2:	89 14 24             	mov    %edx,(%esp)
 87981b5:	89 44 24 10          	mov    %eax,0x10(%esp)
 87981b9:	8d 46 44             	lea    0x44(%esi),%eax
 87981bc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87981c0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 87981c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 87981c7:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 87981ce:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 87981d5:	e8 c6 e3 fb ff       	call   87565a0 <_ZN8TaoCrypt11CertDecoderC1ERNS_6SourceEbPN5mySTL4listIPNS_6SignerEEEbNS0_8CertTypeE>
 87981da:	8b 8d 50 fb ff ff    	mov    -0x4b0(%ebp),%ecx
 87981e0:	8d 85 54 fb ff ff    	lea    -0x4ac(%ebp),%eax
 87981e6:	89 04 24             	mov    %eax,(%esp)
 87981e9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87981ed:	e8 7e b5 fb ff       	call   8753770 <_ZN8TaoCrypt11BER_Decoder8GetErrorEv>
 87981f2:	8b bd 54 fb ff ff    	mov    -0x4ac(%ebp),%edi
 87981f8:	83 ec 04             	sub    $0x4,%esp
 87981fb:	85 ff                	test   %edi,%edi
 87981fd:	0f 85 75 02 00 00    	jne    8798478 <_ZN5yaSSL11CertManager8ValidateEv+0x5e8>
 8798203:	8b 85 6c fb ff ff    	mov    -0x494(%ebp),%eax
 8798209:	8d 7e 28             	lea    0x28(%esi),%edi
 879820c:	89 3c 24             	mov    %edi,(%esp)
 879820f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8798213:	89 85 30 fb ff ff    	mov    %eax,-0x4d0(%ebp)
 8798219:	e8 02 f0 ff ff       	call   8797220 <_ZN5yaSSL12input_buffer8allocateEj>
 879821e:	8b 85 30 fb ff ff    	mov    -0x4d0(%ebp),%eax
 8798224:	89 3c 24             	mov    %edi,(%esp)
 8798227:	89 44 24 08          	mov    %eax,0x8(%esp)
 879822b:	8b 85 68 fb ff ff    	mov    -0x498(%ebp),%eax
 8798231:	89 44 24 04          	mov    %eax,0x4(%esp)
 8798235:	e8 76 ee ff ff       	call   87970b0 <_ZN5yaSSL12input_buffer6assignEPKhj>
 879823a:	31 c0                	xor    %eax,%eax
 879823c:	81 bd 80 fb ff ff 85 	cmpl   $0x285,-0x480(%ebp)
 8798243:	02 00 00 
 8798246:	0f 95 c0             	setne  %al
 8798249:	83 c0 01             	add    $0x1,%eax
 879824c:	89 46 40             	mov    %eax,0x40(%esi)
 879824f:	8d 85 b0 fb ff ff    	lea    -0x450(%ebp),%eax
 8798255:	89 85 4c fb ff ff    	mov    %eax,-0x4b4(%ebp)
 879825b:	89 c7                	mov    %eax,%edi
 879825d:	8b 17                	mov    (%edi),%edx
 879825f:	83 c7 04             	add    $0x4,%edi
 8798262:	8d 82 ff fe fe fe    	lea    -0x1010101(%edx),%eax
 8798268:	f7 d2                	not    %edx
 879826a:	21 d0                	and    %edx,%eax
 879826c:	25 80 80 80 80       	and    $0x80808080,%eax
 8798271:	74 ea                	je     879825d <_ZN5yaSSL11CertManager8ValidateEv+0x3cd>
 8798273:	89 c2                	mov    %eax,%edx
 8798275:	c1 ea 10             	shr    $0x10,%edx
 8798278:	a9 80 80 00 00       	test   $0x8080,%eax
 879827d:	0f 44 c2             	cmove  %edx,%eax
 8798280:	8d 57 02             	lea    0x2(%edi),%edx
 8798283:	0f 44 fa             	cmove  %edx,%edi
 8798286:	00 c0                	add    %al,%al
 8798288:	83 df 03             	sbb    $0x3,%edi
 879828b:	2b bd 4c fb ff ff    	sub    -0x4b4(%ebp),%edi
 8798291:	8d 95 b0 fd ff ff    	lea    -0x250(%ebp),%edx
 8798297:	89 95 40 fb ff ff    	mov    %edx,-0x4c0(%ebp)
 879829d:	89 d1                	mov    %edx,%ecx
 879829f:	8b 11                	mov    (%ecx),%edx
 87982a1:	83 c1 04             	add    $0x4,%ecx
 87982a4:	8d 82 ff fe fe fe    	lea    -0x1010101(%edx),%eax
 87982aa:	f7 d2                	not    %edx
 87982ac:	21 d0                	and    %edx,%eax
 87982ae:	25 80 80 80 80       	and    $0x80808080,%eax
 87982b3:	74 ea                	je     879829f <_ZN5yaSSL11CertManager8ValidateEv+0x40f>
 87982b5:	89 c2                	mov    %eax,%edx
 87982b7:	c1 ea 10             	shr    $0x10,%edx
 87982ba:	a9 80 80 00 00       	test   $0x8080,%eax
 87982bf:	0f 44 c2             	cmove  %edx,%eax
 87982c2:	8d 51 02             	lea    0x2(%ecx),%edx
 87982c5:	0f 44 ca             	cmove  %edx,%ecx
 87982c8:	00 c0                	add    %al,%al
 87982ca:	83 d9 03             	sbb    $0x3,%ecx
 87982cd:	2b 8d 40 fb ff ff    	sub    -0x4c0(%ebp),%ecx
 87982d3:	8d 45 b0             	lea    -0x50(%ebp),%eax
 87982d6:	89 85 3c fb ff ff    	mov    %eax,-0x4c4(%ebp)
 87982dc:	89 85 48 fb ff ff    	mov    %eax,-0x4b8(%ebp)
 87982e2:	8b 95 48 fb ff ff    	mov    -0x4b8(%ebp),%edx
 87982e8:	8b 02                	mov    (%edx),%eax
 87982ea:	83 c2 04             	add    $0x4,%edx
 87982ed:	89 95 48 fb ff ff    	mov    %edx,-0x4b8(%ebp)
 87982f3:	8d 90 ff fe fe fe    	lea    -0x1010101(%eax),%edx
 87982f9:	f7 d0                	not    %eax
 87982fb:	21 c2                	and    %eax,%edx
 87982fd:	81 e2 80 80 80 80    	and    $0x80808080,%edx
 8798303:	74 dd                	je     87982e2 <_ZN5yaSSL11CertManager8ValidateEv+0x452>
 8798305:	89 d0                	mov    %edx,%eax
 8798307:	c1 e8 10             	shr    $0x10,%eax
 879830a:	f7 c2 80 80 00 00    	test   $0x8080,%edx
 8798310:	0f 44 d0             	cmove  %eax,%edx
 8798313:	8b 85 48 fb ff ff    	mov    -0x4b8(%ebp),%eax
 8798319:	89 8d 34 fb ff ff    	mov    %ecx,-0x4cc(%ebp)
 879831f:	8d 40 02             	lea    0x2(%eax),%eax
 8798322:	89 85 44 fb ff ff    	mov    %eax,-0x4bc(%ebp)
 8798328:	8b 85 48 fb ff ff    	mov    -0x4b8(%ebp),%eax
 879832e:	0f 44 85 44 fb ff ff 	cmove  -0x4bc(%ebp),%eax
 8798335:	00 d2                	add    %dl,%dl
 8798337:	8b 95 3c fb ff ff    	mov    -0x4c4(%ebp),%edx
 879833d:	83 d8 03             	sbb    $0x3,%eax
 8798340:	29 d0                	sub    %edx,%eax
 8798342:	89 85 48 fb ff ff    	mov    %eax,-0x4b8(%ebp)
 8798348:	8d 45 c0             	lea    -0x40(%ebp),%eax
 879834b:	89 85 38 fb ff ff    	mov    %eax,-0x4c8(%ebp)
 8798351:	89 c2                	mov    %eax,%edx
 8798353:	8b 02                	mov    (%edx),%eax
 8798355:	83 c2 04             	add    $0x4,%edx
 8798358:	8d 88 ff fe fe fe    	lea    -0x1010101(%eax),%ecx
 879835e:	f7 d0                	not    %eax
 8798360:	21 c1                	and    %eax,%ecx
 8798362:	81 e1 80 80 80 80    	and    $0x80808080,%ecx
 8798368:	89 8d 44 fb ff ff    	mov    %ecx,-0x4bc(%ebp)
 879836e:	74 e3                	je     8798353 <_ZN5yaSSL11CertManager8ValidateEv+0x4c3>
 8798370:	8b 85 44 fb ff ff    	mov    -0x4bc(%ebp),%eax
 8798376:	8b 8d 34 fb ff ff    	mov    -0x4cc(%ebp),%ecx
 879837c:	c1 e8 10             	shr    $0x10,%eax
 879837f:	f7 85 44 fb ff ff 80 	testl  $0x8080,-0x4bc(%ebp)
 8798386:	80 00 00 
 8798389:	0f 45 85 44 fb ff ff 	cmovne -0x4bc(%ebp),%eax
 8798390:	89 85 44 fb ff ff    	mov    %eax,-0x4bc(%ebp)
 8798396:	8d 42 02             	lea    0x2(%edx),%eax
 8798399:	0f 44 d0             	cmove  %eax,%edx
 879839c:	0f b6 85 44 fb ff ff 	movzbl -0x4bc(%ebp),%eax
 87983a3:	00 c0                	add    %al,%al
 87983a5:	83 da 03             	sbb    $0x3,%edx
 87983a8:	2b 95 38 fb ff ff    	sub    -0x4c8(%ebp),%edx
 87983ae:	89 95 30 fb ff ff    	mov    %edx,-0x4d0(%ebp)
 87983b4:	83 c7 01             	add    $0x1,%edi
 87983b7:	89 8d 2c fb ff ff    	mov    %ecx,-0x4d4(%ebp)
 87983bd:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87983c2:	c7 04 24 40 00 00 00 	movl   $0x40,(%esp)
 87983c9:	e8 d2 88 fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87983ce:	8b 95 30 fb ff ff    	mov    -0x4d0(%ebp),%edx
 87983d4:	8b 8d 2c fb ff ff    	mov    -0x4d4(%ebp),%ecx
 87983da:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87983de:	83 c2 01             	add    $0x1,%edx
 87983e1:	89 54 24 20          	mov    %edx,0x20(%esp)
 87983e5:	8b 95 38 fb ff ff    	mov    -0x4c8(%ebp),%edx
 87983eb:	83 c1 01             	add    $0x1,%ecx
 87983ee:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 87983f2:	8b 8d 40 fb ff ff    	mov    -0x4c0(%ebp),%ecx
 87983f8:	89 04 24             	mov    %eax,(%esp)
 87983fb:	89 85 30 fb ff ff    	mov    %eax,-0x4d0(%ebp)
 8798401:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8798405:	8b 95 48 fb ff ff    	mov    -0x4b8(%ebp),%edx
 879840b:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 879840f:	83 c2 01             	add    $0x1,%edx
 8798412:	89 54 24 18          	mov    %edx,0x18(%esp)
 8798416:	8b 95 3c fb ff ff    	mov    -0x4c4(%ebp),%edx
 879841c:	89 54 24 14          	mov    %edx,0x14(%esp)
 8798420:	8b 95 4c fb ff ff    	mov    -0x4b4(%ebp),%edx
 8798426:	89 54 24 04          	mov    %edx,0x4(%esp)
 879842a:	e8 f1 a0 fb ff       	call   8752520 <_ZN5yaSSL4X509C1EPKcjS2_jS2_iS2_i>
 879842f:	8b 85 30 fb ff ff    	mov    -0x4d0(%ebp),%eax
 8798435:	8b 8d 50 fb ff ff    	mov    -0x4b0(%ebp),%ecx
 879843b:	89 46 38             	mov    %eax,0x38(%esi)
 879843e:	89 0c 24             	mov    %ecx,(%esp)
 8798441:	e8 5a bd fb ff       	call   87541a0 <_ZN8TaoCrypt11CertDecoderD1Ev>
 8798446:	8b 75 d8             	mov    -0x28(%ebp),%esi
 8798449:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 879844c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8798453:	00 
 8798454:	89 34 24             	mov    %esi,(%esp)
 8798457:	89 44 24 08          	mov    %eax,0x8(%esp)
 879845b:	e8 60 58 8e ff       	call   807dcc0 <memset@plt>
 8798460:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8798465:	89 34 24             	mov    %esi,(%esp)
 8798468:	e8 b3 f2 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879846d:	31 d2                	xor    %edx,%edx
 879846f:	e9 70 fc ff ff       	jmp    87980e4 <_ZN5yaSSL11CertManager8ValidateEv+0x254>
 8798474:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8798478:	8b 85 50 fb ff ff    	mov    -0x4b0(%ebp),%eax
 879847e:	89 04 24             	mov    %eax,(%esp)
 8798481:	e8 1a bd fb ff       	call   87541a0 <_ZN8TaoCrypt11CertDecoderD1Ev>
 8798486:	8b 75 d8             	mov    -0x28(%ebp),%esi
 8798489:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 879848c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8798493:	00 
 8798494:	89 34 24             	mov    %esi,(%esp)
 8798497:	89 44 24 08          	mov    %eax,0x8(%esp)
 879849b:	e8 20 58 8e ff       	call   807dcc0 <memset@plt>
 87984a0:	89 34 24             	mov    %esi,(%esp)
 87984a3:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87984a8:	e8 73 f2 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87984ad:	89 fa                	mov    %edi,%edx
 87984af:	8d 65 f4             	lea    -0xc(%ebp),%esp
 87984b2:	89 d0                	mov    %edx,%eax
 87984b4:	5b                   	pop    %ebx
 87984b5:	5e                   	pop    %esi
 87984b6:	5f                   	pop    %edi
 87984b7:	5d                   	pop    %ebp
 87984b8:	c3                   	ret
 87984b9:	90                   	nop
 87984ba:	90                   	nop
 87984bb:	90                   	nop
 87984bc:	90                   	nop
 87984bd:	90                   	nop
 87984be:	90                   	nop
 87984bf:	90                   	nop

```

```c
// yaSSL::CertManager::Validate @ 0x8797e90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertManager::Validate() */

int __thiscall yaSSL::CertManager::Validate(CertManager *this)

{
  size_t sVar1;
  void *pvVar2;
  void *pvVar3;
  Signer *this_00;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  X509 *this_01;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  uint in_stack_fffffaf8;
  CertDecoder *pCVar16;
  uchar *puVar17;
  byte local_4c0;
  uint *local_4bc;
  uint local_4b8;
  int local_4b0;
  CertDecoder local_4a4 [8];
  uchar *local_49c;
  uint local_498;
  int local_484;
  uchar local_480 [44];
  uint local_454 [128];
  uint local_254 [128];
  uint local_54 [4];
  uint local_44 [5];
  size_t local_30;
  void *local_2c;
  undefined4 local_24;
  undefined4 local_20;
  
  local_4b8 = *(uint *)(this + 0x24);
  puVar14 = *(undefined4 **)(this + 0x20);
  if (1 < local_4b8) {
    do {
      sVar1 = yaSSL::x509::get_length((x509 *)puVar14[2]);
      pvVar2 = (void *)yaSSL::x509::get_buffer((x509 *)puVar14[2]);
      pvVar3 = (void *)0x0;
      local_30 = sVar1;
      if (sVar1 != 0) {
        pvVar3 = operator_new__(sVar1,in_stack_fffffaf8 & 0xffffff00);
      }
      local_2c = pvVar3;
      memcpy(pvVar3,pvVar2,local_30);
      local_24 = 0;
      local_20 = 0;
      TaoCrypt::CertDecoder::CertDecoder(local_4a4,&local_30,1,this + 0x44,this[0x51],1);
      pCVar16 = local_4a4;
      TaoCrypt::BER_Decoder::GetError();
      uVar6 = local_498;
      puVar17 = local_49c;
      if (local_4b0 != 0) {
        TaoCrypt::CertDecoder::~CertDecoder(local_4a4);
        pvVar2 = local_2c;
        uVar6 = 0;
        memset(local_2c,0,local_30);
        operator_delete__(pvVar2,uVar6 & 0xffffff00);
        return local_4b0;
      }
      this_00 = operator_new(0x21c,(uint)pCVar16 & 0xffffff00);
      TaoCrypt::Signer::Signer(this_00,puVar17,uVar6,(char *)local_254,local_480);
      puVar4 = operator_new__(0xc,(uint)puVar17 & 0xffffff00);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = this_00;
      if (*(int *)(this + 0x48) == 0) {
        *(undefined4 **)(this + 0x44) = puVar4;
      }
      else {
        *(undefined4 **)(*(int *)(this + 0x48) + 4) = puVar4;
        *puVar4 = *(undefined4 *)(this + 0x48);
      }
      *(undefined4 **)(this + 0x48) = puVar4;
      *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + 1;
      puVar14 = (undefined4 *)*puVar14;
      local_4b8 = local_4b8 - 1;
      TaoCrypt::CertDecoder::~CertDecoder(local_4a4);
      pvVar2 = local_2c;
      in_stack_fffffaf8 = 0;
      memset(local_2c,0,local_30);
      in_stack_fffffaf8 = in_stack_fffffaf8 & 0xffffff00;
      operator_delete__(pvVar2,in_stack_fffffaf8);
    } while (1 < local_4b8);
  }
  if (local_4b8 != 0) {
    sVar1 = yaSSL::x509::get_length((x509 *)puVar14[2]);
    pvVar2 = (void *)yaSSL::x509::get_buffer((x509 *)puVar14[2]);
    pvVar3 = (void *)0x0;
    local_30 = sVar1;
    if (sVar1 != 0) {
      pvVar3 = operator_new__(sVar1,in_stack_fffffaf8 & 0xffffff00);
    }
    local_2c = pvVar3;
    memcpy(pvVar3,pvVar2,local_30);
    local_24 = 0;
    local_20 = 0;
    TaoCrypt::CertDecoder::CertDecoder(local_4a4,&local_30,1,this + 0x44,this[0x51],1);
    TaoCrypt::BER_Decoder::GetError();
    if (local_4b0 != 0) {
      TaoCrypt::CertDecoder::~CertDecoder(local_4a4);
      pvVar2 = local_2c;
      uVar6 = 0;
      memset(local_2c,0,local_30);
      operator_delete__(pvVar2,uVar6 & 0xffffff00);
      return local_4b0;
    }
    input_buffer::allocate((input_buffer *)(this + 0x28),local_498);
    input_buffer::assign((input_buffer *)(this + 0x28),local_49c,local_498);
    *(uint *)(this + 0x40) = (local_484 != 0x285) + 1;
    puVar15 = local_454;
    do {
      puVar9 = puVar15;
      uVar5 = *puVar9 + 0xfefefeff & ~*puVar9;
      uVar6 = uVar5 & 0x80808080;
      puVar15 = puVar9 + 1;
    } while (uVar6 == 0);
    if ((uVar5 & 0x8080) == 0) {
      puVar15 = (uint *)((int)puVar9 + 6);
      uVar6 = uVar6 >> 0x10;
    }
    puVar9 = local_254;
    do {
      puVar8 = puVar9;
      uVar7 = *puVar8 + 0xfefefeff & ~*puVar8;
      uVar5 = uVar7 & 0x80808080;
      puVar9 = puVar8 + 1;
    } while (uVar5 == 0);
    if ((uVar7 & 0x8080) == 0) {
      puVar9 = (uint *)((int)puVar8 + 6);
      uVar5 = uVar5 >> 0x10;
    }
    puVar8 = local_54;
    do {
      local_4bc = puVar8;
      uVar11 = *local_4bc + 0xfefefeff & ~*local_4bc;
      uVar7 = uVar11 & 0x80808080;
      puVar8 = local_4bc + 1;
    } while (uVar7 == 0);
    if ((uVar11 & 0x8080) == 0) {
      puVar8 = (uint *)((int)local_4bc + 6);
      uVar7 = uVar7 >> 0x10;
    }
    puVar13 = local_44;
    do {
      puVar12 = puVar13;
      puVar13 = puVar12 + 1;
      uVar10 = *puVar12 + 0xfefefeff & ~*puVar12;
      uVar11 = uVar10 & 0x80808080;
    } while (uVar11 == 0);
    if ((uVar10 & 0x8080) == 0) {
      puVar13 = (uint *)((int)puVar12 + 6);
      uVar11 = uVar11 >> 0x10;
    }
    local_4c0 = (byte)uVar11;
    this_01 = operator_new(0x40,(uint)local_49c & 0xffffff00);
    X509::X509(this_01,(char *)local_454,
               (uint)((int)puVar15 + (-(int)local_454 - (uint)CARRY1((byte)uVar6,(byte)uVar6)) + -2)
               ,(char *)local_254,
               (uint)((int)puVar9 + (-(int)local_254 - (uint)CARRY1((byte)uVar5,(byte)uVar5)) + -2),
               (char *)local_54,
               (int)((int)puVar8 + (-(int)local_54 - (uint)CARRY1((byte)uVar7,(byte)uVar7)) + -2),
               (char *)local_44,
               (int)((int)puVar13 + (-(int)local_44 - (uint)CARRY1(local_4c0,local_4c0)) + -2));
    *(X509 **)(this + 0x38) = this_01;
    TaoCrypt::CertDecoder::~CertDecoder(local_4a4);
    pvVar2 = local_2c;
    uVar6 = 0;
    memset(local_2c,0,local_30);
    operator_delete__(pvVar2,uVar6 & 0xffffff00);
  }
  return 0;
}

```

---

## failNoCert

```asm
// === 08797420 yaSSL::CertManager::failNoCert  [0x08797420-0x879742f] ===
 8797420:	55                   	push   %ebp
 8797421:	89 e5                	mov    %esp,%ebp
 8797423:	8b 45 08             	mov    0x8(%ebp),%eax
 8797426:	5d                   	pop    %ebp
 8797427:	0f b6 40 52          	movzbl 0x52(%eax),%eax
 879742b:	c3                   	ret
 879742c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::CertManager::failNoCert @ 0x8797420

/* yaSSL::CertManager::failNoCert() const */

CertManager __thiscall yaSSL::CertManager::failNoCert(CertManager *this)

{
  return this[0x52];
}

```

---

## get_cert

```asm
// === 08797490 yaSSL::CertManager::get_cert  [0x08797490-0x87974af] ===
 8797490:	55                   	push   %ebp
 8797491:	89 e5                	mov    %esp,%ebp
 8797493:	8b 45 08             	mov    0x8(%ebp),%eax
 8797496:	8b 10                	mov    (%eax),%edx
 8797498:	31 c0                	xor    %eax,%eax
 879749a:	85 d2                	test   %edx,%edx
 879749c:	74 03                	je     87974a1 <_ZNK5yaSSL11CertManager8get_certEv+0x11>
 879749e:	8b 42 08             	mov    0x8(%edx),%eax
 87974a1:	5d                   	pop    %ebp
 87974a2:	c3                   	ret
 87974a3:	90                   	nop
 87974a4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87974aa:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::CertManager::get_cert @ 0x8797490

/* yaSSL::CertManager::get_cert() const */

undefined4 __thiscall yaSSL::CertManager::get_cert(CertManager *this)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = *(undefined4 *)(*(int *)this + 8);
  }
  return uVar1;
}

```

---

## get_keyType

```asm
// === 087974d0 yaSSL::CertManager::get_keyType  [0x087974d0-0x87974df] ===
 87974d0:	55                   	push   %ebp
 87974d1:	89 e5                	mov    %esp,%ebp
 87974d3:	8b 45 08             	mov    0x8(%ebp),%eax
 87974d6:	5d                   	pop    %ebp
 87974d7:	8b 40 3c             	mov    0x3c(%eax),%eax
 87974da:	c3                   	ret
 87974db:	90                   	nop
 87974dc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::CertManager::get_keyType @ 0x87974d0

/* yaSSL::CertManager::get_keyType() const */

undefined4 __thiscall yaSSL::CertManager::get_keyType(CertManager *this)

{
  return *(undefined4 *)(this + 0x3c);
}

```

---

## get_peerKey

```asm
// === 08797820 yaSSL::CertManager::get_peerKey  [0x08797820-0x879784f] ===
 8797820:	55                   	push   %ebp
 8797821:	89 e5                	mov    %esp,%ebp
 8797823:	53                   	push   %ebx
 8797824:	e8 cf b5 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8797829:	81 c3 6f 53 bd 00    	add    $0xbd536f,%ebx
 879782f:	83 ec 14             	sub    $0x14,%esp
 8797832:	8b 45 08             	mov    0x8(%ebp),%eax
 8797835:	83 c0 28             	add    $0x28,%eax
 8797838:	89 04 24             	mov    %eax,(%esp)
 879783b:	e8 f0 f4 ff ff       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 8797840:	83 c4 14             	add    $0x14,%esp
 8797843:	5b                   	pop    %ebx
 8797844:	5d                   	pop    %ebp
 8797845:	c3                   	ret
 8797846:	8d 76 00             	lea    0x0(%esi),%esi
 8797849:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::CertManager::get_peerKey @ 0x8797820

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertManager::get_peerKey() const */

void __thiscall yaSSL::CertManager::get_peerKey(CertManager *this)

{
  input_buffer::get_buffer((input_buffer *)(this + 0x28));
  return;
}

```

---

## get_peerKeyLength

```asm
// === 087977c0 yaSSL::CertManager::get_peerKeyLength  [0x087977c0-0x87977ef] ===
 87977c0:	55                   	push   %ebp
 87977c1:	89 e5                	mov    %esp,%ebp
 87977c3:	53                   	push   %ebx
 87977c4:	e8 2f b6 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87977c9:	81 c3 cf 53 bd 00    	add    $0xbd53cf,%ebx
 87977cf:	83 ec 14             	sub    $0x14,%esp
 87977d2:	8b 45 08             	mov    0x8(%ebp),%eax
 87977d5:	83 c0 28             	add    $0x28,%eax
 87977d8:	89 04 24             	mov    %eax,(%esp)
 87977db:	e8 d0 f5 ff ff       	call   8796db0 <_ZNK5yaSSL12input_buffer8get_sizeEv>
 87977e0:	83 c4 14             	add    $0x14,%esp
 87977e3:	5b                   	pop    %ebx
 87977e4:	5d                   	pop    %ebp
 87977e5:	c3                   	ret
 87977e6:	8d 76 00             	lea    0x0(%esi),%esi
 87977e9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::CertManager::get_peerKeyLength @ 0x87977c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertManager::get_peerKeyLength() const */

void __thiscall yaSSL::CertManager::get_peerKeyLength(CertManager *this)

{
  input_buffer::get_size((input_buffer *)(this + 0x28));
  return;
}

```

---

## get_peerKeyType

```asm
// === 087974c0 yaSSL::CertManager::get_peerKeyType  [0x087974c0-0x87974cf] ===
 87974c0:	55                   	push   %ebp
 87974c1:	89 e5                	mov    %esp,%ebp
 87974c3:	8b 45 08             	mov    0x8(%ebp),%eax
 87974c6:	5d                   	pop    %ebp
 87974c7:	8b 40 40             	mov    0x40(%eax),%eax
 87974ca:	c3                   	ret
 87974cb:	90                   	nop
 87974cc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::CertManager::get_peerKeyType @ 0x87974c0

/* yaSSL::CertManager::get_peerKeyType() const */

undefined4 __thiscall yaSSL::CertManager::get_peerKeyType(CertManager *this)

{
  return *(undefined4 *)(this + 0x40);
}

```

---

## get_peerX509

```asm
// === 087974b0 yaSSL::CertManager::get_peerX509  [0x087974b0-0x87974bf] ===
 87974b0:	55                   	push   %ebp
 87974b1:	89 e5                	mov    %esp,%ebp
 87974b3:	8b 45 08             	mov    0x8(%ebp),%eax
 87974b6:	5d                   	pop    %ebp
 87974b7:	8b 40 38             	mov    0x38(%eax),%eax
 87974ba:	c3                   	ret
 87974bb:	90                   	nop
 87974bc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::CertManager::get_peerX509 @ 0x87974b0

/* yaSSL::CertManager::get_peerX509() const */

undefined4 __thiscall yaSSL::CertManager::get_peerX509(CertManager *this)

{
  return *(undefined4 *)(this + 0x38);
}

```

---

## get_privateKey

```asm
// === 087977f0 yaSSL::CertManager::get_privateKey  [0x087977f0-0x879781f] ===
 87977f0:	55                   	push   %ebp
 87977f1:	89 e5                	mov    %esp,%ebp
 87977f3:	53                   	push   %ebx
 87977f4:	e8 ff b5 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87977f9:	81 c3 9f 53 bd 00    	add    $0xbd539f,%ebx
 87977ff:	83 ec 14             	sub    $0x14,%esp
 8797802:	8b 45 08             	mov    0x8(%ebp),%eax
 8797805:	83 c0 0c             	add    $0xc,%eax
 8797808:	89 04 24             	mov    %eax,(%esp)
 879780b:	e8 20 f5 ff ff       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 8797810:	83 c4 14             	add    $0x14,%esp
 8797813:	5b                   	pop    %ebx
 8797814:	5d                   	pop    %ebp
 8797815:	c3                   	ret
 8797816:	8d 76 00             	lea    0x0(%esi),%esi
 8797819:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::CertManager::get_privateKey @ 0x87977f0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertManager::get_privateKey() const */

void __thiscall yaSSL::CertManager::get_privateKey(CertManager *this)

{
  input_buffer::get_buffer((input_buffer *)(this + 0xc));
  return;
}

```

---

## get_privateKeyLength

```asm
// === 08797790 yaSSL::CertManager::get_privateKeyLength  [0x08797790-0x87977bf] ===
 8797790:	55                   	push   %ebp
 8797791:	89 e5                	mov    %esp,%ebp
 8797793:	53                   	push   %ebx
 8797794:	e8 5f b6 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8797799:	81 c3 ff 53 bd 00    	add    $0xbd53ff,%ebx
 879779f:	83 ec 14             	sub    $0x14,%esp
 87977a2:	8b 45 08             	mov    0x8(%ebp),%eax
 87977a5:	83 c0 0c             	add    $0xc,%eax
 87977a8:	89 04 24             	mov    %eax,(%esp)
 87977ab:	e8 00 f6 ff ff       	call   8796db0 <_ZNK5yaSSL12input_buffer8get_sizeEv>
 87977b0:	83 c4 14             	add    $0x14,%esp
 87977b3:	5b                   	pop    %ebx
 87977b4:	5d                   	pop    %ebp
 87977b5:	c3                   	ret
 87977b6:	8d 76 00             	lea    0x0(%esi),%esi
 87977b9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::CertManager::get_privateKeyLength @ 0x8797790

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertManager::get_privateKeyLength() const */

void __thiscall yaSSL::CertManager::get_privateKeyLength(CertManager *this)

{
  input_buffer::get_size((input_buffer *)(this + 0xc));
  return;
}

```

---

## sendVerify

```asm
// === 08797430 yaSSL::CertManager::sendVerify  [0x08797430-0x879743f] ===
 8797430:	55                   	push   %ebp
 8797431:	89 e5                	mov    %esp,%ebp
 8797433:	8b 45 08             	mov    0x8(%ebp),%eax
 8797436:	5d                   	pop    %ebp
 8797437:	0f b6 40 53          	movzbl 0x53(%eax),%eax
 879743b:	c3                   	ret
 879743c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::CertManager::sendVerify @ 0x8797430

/* yaSSL::CertManager::sendVerify() const */

CertManager __thiscall yaSSL::CertManager::sendVerify(CertManager *this)

{
  return this[0x53];
}

```

---

## setFailNoCert

```asm
// === 08797460 yaSSL::CertManager::setFailNoCert  [0x08797460-0x879746f] ===
 8797460:	55                   	push   %ebp
 8797461:	89 e5                	mov    %esp,%ebp
 8797463:	8b 45 08             	mov    0x8(%ebp),%eax
 8797466:	c6 40 52 01          	movb   $0x1,0x52(%eax)
 879746a:	5d                   	pop    %ebp
 879746b:	c3                   	ret
 879746c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::CertManager::setFailNoCert @ 0x8797460

/* yaSSL::CertManager::setFailNoCert() */

void __thiscall yaSSL::CertManager::setFailNoCert(CertManager *this)

{
  this[0x52] = (CertManager)0x1;
  return;
}

```

---

## setPeerX509

```asm
// === 087974e0 yaSSL::CertManager::setPeerX509  [0x087974e0-0x87975df] ===
 87974e0:	55                   	push   %ebp
 87974e1:	89 e5                	mov    %esp,%ebp
 87974e3:	83 ec 78             	sub    $0x78,%esp
 87974e6:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87974e9:	8b 75 0c             	mov    0xc(%ebp),%esi
 87974ec:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87974ef:	e8 04 b9 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87974f4:	81 c3 a4 56 bd 00    	add    $0xbd56a4,%ebx
 87974fa:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87974fd:	85 f6                	test   %esi,%esi
 87974ff:	0f 84 bf 00 00 00    	je     87975c4 <_ZN5yaSSL11CertManager11setPeerX509EPNS_4X509E+0xe4>
 8797505:	89 34 24             	mov    %esi,(%esp)
 8797508:	e8 f3 7a fb ff       	call   874f000 <_ZN5yaSSL4X5099GetIssuerEv>
 879750d:	89 34 24             	mov    %esi,(%esp)
 8797510:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8797513:	e8 f8 7a fb ff       	call   874f010 <_ZN5yaSSL4X50910GetSubjectEv>
 8797518:	89 34 24             	mov    %esi,(%esp)
 879751b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 879751e:	e8 3d 7b fb ff       	call   874f060 <_ZN5yaSSL4X5099GetBeforeEv>
 8797523:	89 34 24             	mov    %esi,(%esp)
 8797526:	89 c7                	mov    %eax,%edi
 8797528:	e8 03 7b fb ff       	call   874f030 <_ZN5yaSSL4X5098GetAfterEv>
 879752d:	89 c6                	mov    %eax,%esi
 879752f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8797532:	89 04 24             	mov    %eax,(%esp)
 8797535:	e8 a6 7a fb ff       	call   874efe0 <_ZNK5yaSSL9X509_NAME7GetNameEv>
 879753a:	8b 55 e0             	mov    -0x20(%ebp),%edx
 879753d:	89 14 24             	mov    %edx,(%esp)
 8797540:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8797543:	e8 a8 7a fb ff       	call   874eff0 <_ZNK5yaSSL9X509_NAME9GetLengthEv>
 8797548:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 879754b:	89 0c 24             	mov    %ecx,(%esp)
 879754e:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8797551:	e8 8a 7a fb ff       	call   874efe0 <_ZNK5yaSSL9X509_NAME7GetNameEv>
 8797556:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8797559:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 879755c:	89 04 24             	mov    %eax,(%esp)
 879755f:	e8 8c 7a fb ff       	call   874eff0 <_ZNK5yaSSL9X509_NAME9GetLengthEv>
 8797564:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8797569:	c7 04 24 40 00 00 00 	movl   $0x40,(%esp)
 8797570:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8797573:	e8 28 97 fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8797578:	8b 4e 04             	mov    0x4(%esi),%ecx
 879757b:	8b 55 d8             	mov    -0x28(%ebp),%edx
 879757e:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 8797582:	8b 76 08             	mov    0x8(%esi),%esi
 8797585:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 8797588:	89 45 d8             	mov    %eax,-0x28(%ebp)
 879758b:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 879758f:	8b 77 04             	mov    0x4(%edi),%esi
 8797592:	89 74 24 18          	mov    %esi,0x18(%esp)
 8797596:	8b 77 08             	mov    0x8(%edi),%esi
 8797599:	89 54 24 10          	mov    %edx,0x10(%esp)
 879759d:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 87975a0:	89 04 24             	mov    %eax,(%esp)
 87975a3:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87975a7:	89 74 24 14          	mov    %esi,0x14(%esp)
 87975ab:	89 54 24 0c          	mov    %edx,0xc(%esp)
 87975af:	8b 55 dc             	mov    -0x24(%ebp),%edx
 87975b2:	89 54 24 04          	mov    %edx,0x4(%esp)
 87975b6:	e8 65 af fb ff       	call   8752520 <_ZN5yaSSL4X509C1EPKcjS2_jS2_iS2_i>
 87975bb:	8b 55 08             	mov    0x8(%ebp),%edx
 87975be:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87975c1:	89 42 38             	mov    %eax,0x38(%edx)
 87975c4:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87975c7:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87975ca:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87975cd:	89 ec                	mov    %ebp,%esp
 87975cf:	5d                   	pop    %ebp
 87975d0:	c3                   	ret
 87975d1:	90                   	nop
 87975d2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87975d9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::CertManager::setPeerX509 @ 0x87974e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertManager::setPeerX509(yaSSL::X509*) */

void __thiscall yaSSL::CertManager::setPeerX509(CertManager *this,X509 *param_1)

{
  X509_NAME *this_00;
  X509_NAME *this_01;
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  X509 *this_02;
  uint in_stack_ffffff88;
  
  if (param_1 != (X509 *)0x0) {
    this_00 = (X509_NAME *)X509::GetIssuer(param_1);
    this_01 = (X509_NAME *)X509::GetSubject(param_1);
    iVar1 = X509::GetBefore(param_1);
    iVar2 = X509::GetAfter(param_1);
    pcVar3 = (char *)X509_NAME::GetName(this_00);
    uVar4 = X509_NAME::GetLength(this_00);
    pcVar5 = (char *)X509_NAME::GetName(this_01);
    uVar6 = X509_NAME::GetLength(this_01);
    this_02 = operator_new(0x40,in_stack_ffffff88 & 0xffffff00);
    X509::X509(this_02,pcVar3,uVar4,pcVar5,uVar6,*(char **)(iVar1 + 8),*(int *)(iVar1 + 4),
               *(char **)(iVar2 + 8),*(int *)(iVar2 + 4));
    *(X509 **)(this + 0x38) = this_02;
  }
  return;
}

```

---

## setSendVerify

```asm
// === 08797470 yaSSL::CertManager::setSendVerify  [0x08797470-0x879747f] ===
 8797470:	55                   	push   %ebp
 8797471:	89 e5                	mov    %esp,%ebp
 8797473:	8b 45 08             	mov    0x8(%ebp),%eax
 8797476:	c6 40 53 01          	movb   $0x1,0x53(%eax)
 879747a:	5d                   	pop    %ebp
 879747b:	c3                   	ret
 879747c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::CertManager::setSendVerify @ 0x8797470

/* yaSSL::CertManager::setSendVerify() */

void __thiscall yaSSL::CertManager::setSendVerify(CertManager *this)

{
  this[0x53] = (CertManager)0x1;
  return;
}

```

---

## setVerifyCallback

```asm
// === 08797480 yaSSL::CertManager::setVerifyCallback  [0x08797480-0x879748f] ===
 8797480:	55                   	push   %ebp
 8797481:	89 e5                	mov    %esp,%ebp
 8797483:	8b 55 0c             	mov    0xc(%ebp),%edx
 8797486:	8b 45 08             	mov    0x8(%ebp),%eax
 8797489:	89 50 54             	mov    %edx,0x54(%eax)
 879748c:	5d                   	pop    %ebp
 879748d:	c3                   	ret
 879748e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::CertManager::setVerifyCallback @ 0x8797480

/* yaSSL::CertManager::setVerifyCallback(int (*)(int, yaSSL::X509_STORE_CTX*)) */

void __thiscall
yaSSL::CertManager::setVerifyCallback(CertManager *this,_func_int_int_X509_STORE_CTX_ptr *param_1)

{
  *(_func_int_int_X509_STORE_CTX_ptr **)(this + 0x54) = param_1;
  return;
}

```

---

## setVerifyNone

```asm
// === 08797450 yaSSL::CertManager::setVerifyNone  [0x08797450-0x879745f] ===
 8797450:	55                   	push   %ebp
 8797451:	89 e5                	mov    %esp,%ebp
 8797453:	8b 45 08             	mov    0x8(%ebp),%eax
 8797456:	c6 40 51 01          	movb   $0x1,0x51(%eax)
 879745a:	5d                   	pop    %ebp
 879745b:	c3                   	ret
 879745c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::CertManager::setVerifyNone @ 0x8797450

/* yaSSL::CertManager::setVerifyNone() */

void __thiscall yaSSL::CertManager::setVerifyNone(CertManager *this)

{
  this[0x51] = (CertManager)0x1;
  return;
}

```

---

## setVerifyPeer

```asm
// === 08797440 yaSSL::CertManager::setVerifyPeer  [0x08797440-0x879744f] ===
 8797440:	55                   	push   %ebp
 8797441:	89 e5                	mov    %esp,%ebp
 8797443:	8b 45 08             	mov    0x8(%ebp),%eax
 8797446:	c6 40 50 01          	movb   $0x1,0x50(%eax)
 879744a:	5d                   	pop    %ebp
 879744b:	c3                   	ret
 879744c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::CertManager::setVerifyPeer @ 0x8797440

/* yaSSL::CertManager::setVerifyPeer() */

void __thiscall yaSSL::CertManager::setVerifyPeer(CertManager *this)

{
  this[0x50] = (CertManager)0x1;
  return;
}

```

---

## verifyNone

```asm
// === 08797410 yaSSL::CertManager::verifyNone  [0x08797410-0x879741f] ===
 8797410:	55                   	push   %ebp
 8797411:	89 e5                	mov    %esp,%ebp
 8797413:	8b 45 08             	mov    0x8(%ebp),%eax
 8797416:	5d                   	pop    %ebp
 8797417:	0f b6 40 51          	movzbl 0x51(%eax),%eax
 879741b:	c3                   	ret
 879741c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::CertManager::verifyNone @ 0x8797410

/* yaSSL::CertManager::verifyNone() const */

CertManager __thiscall yaSSL::CertManager::verifyNone(CertManager *this)

{
  return this[0x51];
}

```

---

## verifyPeer

```asm
// === 08797400 yaSSL::CertManager::verifyPeer  [0x08797400-0x879740f] ===
 8797400:	55                   	push   %ebp
 8797401:	89 e5                	mov    %esp,%ebp
 8797403:	8b 45 08             	mov    0x8(%ebp),%eax
 8797406:	5d                   	pop    %ebp
 8797407:	0f b6 40 50          	movzbl 0x50(%eax),%eax
 879740b:	c3                   	ret
 879740c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::CertManager::verifyPeer @ 0x8797400

/* yaSSL::CertManager::verifyPeer() const */

CertManager __thiscall yaSSL::CertManager::verifyPeer(CertManager *this)

{
  return this[0x50];
}

```

---

## ~CertManager

```asm
// === 08797970 yaSSL::CertManager::~CertManager  [0x08797970-0x8797aff] ===
 8797970:	55                   	push   %ebp
 8797971:	89 e5                	mov    %esp,%ebp
 8797973:	57                   	push   %edi
 8797974:	56                   	push   %esi
 8797975:	53                   	push   %ebx
 8797976:	83 ec 1c             	sub    $0x1c,%esp
 8797979:	8b 45 08             	mov    0x8(%ebp),%eax
 879797c:	e8 77 b4 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8797981:	81 c3 17 52 bd 00    	add    $0xbd5217,%ebx
 8797987:	8b 70 38             	mov    0x38(%eax),%esi
 879798a:	85 f6                	test   %esi,%esi
 879798c:	74 29                	je     87979b7 <_ZN5yaSSL11CertManagerD1Ev+0x47>
 879798e:	8d 46 34             	lea    0x34(%esi),%eax
 8797991:	89 04 24             	mov    %eax,(%esp)
 8797994:	e8 87 92 fb ff       	call   8750c20 <_ZN5yaSSL12StringHolderD1Ev>
 8797999:	8d 46 28             	lea    0x28(%esi),%eax
 879799c:	89 04 24             	mov    %eax,(%esp)
 879799f:	e8 7c 92 fb ff       	call   8750c20 <_ZN5yaSSL12StringHolderD1Ev>
 87979a4:	8d 46 14             	lea    0x14(%esi),%eax
 87979a7:	89 04 24             	mov    %eax,(%esp)
 87979aa:	e8 a1 92 fb ff       	call   8750c50 <_ZN5yaSSL9X509_NAMED1Ev>
 87979af:	89 34 24             	mov    %esi,(%esp)
 87979b2:	e8 99 92 fb ff       	call   8750c50 <_ZN5yaSSL9X509_NAMED1Ev>
 87979b7:	89 34 24             	mov    %esi,(%esp)
 87979ba:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87979bf:	e8 5c 8e fb ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 87979c4:	8b 55 08             	mov    0x8(%ebp),%edx
 87979c7:	8b 72 44             	mov    0x44(%edx),%esi
 87979ca:	85 f6                	test   %esi,%esi
 87979cc:	74 2c                	je     87979fa <_ZN5yaSSL11CertManagerD1Ev+0x8a>
 87979ce:	66 90                	xchg   %ax,%ax
 87979d0:	8b 7e 08             	mov    0x8(%esi),%edi
 87979d3:	c7 46 08 00 00 00 00 	movl   $0x0,0x8(%esi)
 87979da:	85 ff                	test   %edi,%edi
 87979dc:	74 08                	je     87979e6 <_ZN5yaSSL11CertManagerD1Ev+0x76>
 87979de:	89 3c 24             	mov    %edi,(%esp)
 87979e1:	e8 4a c8 fb ff       	call   8754230 <_ZN8TaoCrypt6SignerD1Ev>
 87979e6:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87979eb:	89 3c 24             	mov    %edi,(%esp)
 87979ee:	e8 2d 8e fb ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 87979f3:	8b 76 04             	mov    0x4(%esi),%esi
 87979f6:	85 f6                	test   %esi,%esi
 87979f8:	75 d6                	jne    87979d0 <_ZN5yaSSL11CertManagerD1Ev+0x60>
 87979fa:	8b 45 08             	mov    0x8(%ebp),%eax
 87979fd:	8b 70 1c             	mov    0x1c(%eax),%esi
 8797a00:	85 f6                	test   %esi,%esi
 8797a02:	74 2e                	je     8797a32 <_ZN5yaSSL11CertManagerD1Ev+0xc2>
 8797a04:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8797a08:	8b 7e 08             	mov    0x8(%esi),%edi
 8797a0b:	c7 46 08 00 00 00 00 	movl   $0x0,0x8(%esi)
 8797a12:	85 ff                	test   %edi,%edi
 8797a14:	74 08                	je     8797a1e <_ZN5yaSSL11CertManagerD1Ev+0xae>
 8797a16:	89 3c 24             	mov    %edi,(%esp)
 8797a19:	e8 32 fe ff ff       	call   8797850 <_ZN5yaSSL4x509D1Ev>
 8797a1e:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8797a23:	89 3c 24             	mov    %edi,(%esp)
 8797a26:	e8 f5 8d fb ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 8797a2b:	8b 76 04             	mov    0x4(%esi),%esi
 8797a2e:	85 f6                	test   %esi,%esi
 8797a30:	75 d6                	jne    8797a08 <_ZN5yaSSL11CertManagerD1Ev+0x98>
 8797a32:	8b 55 08             	mov    0x8(%ebp),%edx
 8797a35:	8b 32                	mov    (%edx),%esi
 8797a37:	85 f6                	test   %esi,%esi
 8797a39:	74 2f                	je     8797a6a <_ZN5yaSSL11CertManagerD1Ev+0xfa>
 8797a3b:	90                   	nop
 8797a3c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8797a40:	8b 7e 08             	mov    0x8(%esi),%edi
 8797a43:	c7 46 08 00 00 00 00 	movl   $0x0,0x8(%esi)
 8797a4a:	85 ff                	test   %edi,%edi
 8797a4c:	74 08                	je     8797a56 <_ZN5yaSSL11CertManagerD1Ev+0xe6>
 8797a4e:	89 3c 24             	mov    %edi,(%esp)
 8797a51:	e8 fa fd ff ff       	call   8797850 <_ZN5yaSSL4x509D1Ev>
 8797a56:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8797a5b:	89 3c 24             	mov    %edi,(%esp)
 8797a5e:	e8 bd 8d fb ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 8797a63:	8b 76 04             	mov    0x4(%esi),%esi
 8797a66:	85 f6                	test   %esi,%esi
 8797a68:	75 d6                	jne    8797a40 <_ZN5yaSSL11CertManagerD1Ev+0xd0>
 8797a6a:	8b 55 08             	mov    0x8(%ebp),%edx
 8797a6d:	8b 42 44             	mov    0x44(%edx),%eax
 8797a70:	85 c0                	test   %eax,%eax
 8797a72:	75 06                	jne    8797a7a <_ZN5yaSSL11CertManagerD1Ev+0x10a>
 8797a74:	eb 18                	jmp    8797a8e <_ZN5yaSSL11CertManagerD1Ev+0x11e>
 8797a76:	66 90                	xchg   %ax,%ax
 8797a78:	89 f0                	mov    %esi,%eax
 8797a7a:	8b 70 04             	mov    0x4(%eax),%esi
 8797a7d:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8797a82:	89 04 24             	mov    %eax,(%esp)
 8797a85:	e8 66 8e fb ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 8797a8a:	85 f6                	test   %esi,%esi
 8797a8c:	75 ea                	jne    8797a78 <_ZN5yaSSL11CertManagerD1Ev+0x108>
 8797a8e:	8b 45 08             	mov    0x8(%ebp),%eax
 8797a91:	83 c0 28             	add    $0x28,%eax
 8797a94:	89 04 24             	mov    %eax,(%esp)
 8797a97:	e8 c4 f8 ff ff       	call   8797360 <_ZN5yaSSL12input_bufferD1Ev>
 8797a9c:	8b 55 08             	mov    0x8(%ebp),%edx
 8797a9f:	8b 42 1c             	mov    0x1c(%edx),%eax
 8797aa2:	85 c0                	test   %eax,%eax
 8797aa4:	75 04                	jne    8797aaa <_ZN5yaSSL11CertManagerD1Ev+0x13a>
 8797aa6:	eb 16                	jmp    8797abe <_ZN5yaSSL11CertManagerD1Ev+0x14e>
 8797aa8:	89 f0                	mov    %esi,%eax
 8797aaa:	8b 70 04             	mov    0x4(%eax),%esi
 8797aad:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8797ab2:	89 04 24             	mov    %eax,(%esp)
 8797ab5:	e8 36 8e fb ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 8797aba:	85 f6                	test   %esi,%esi
 8797abc:	75 ea                	jne    8797aa8 <_ZN5yaSSL11CertManagerD1Ev+0x138>
 8797abe:	8b 45 08             	mov    0x8(%ebp),%eax
 8797ac1:	83 c0 0c             	add    $0xc,%eax
 8797ac4:	89 04 24             	mov    %eax,(%esp)
 8797ac7:	e8 94 f8 ff ff       	call   8797360 <_ZN5yaSSL12input_bufferD1Ev>
 8797acc:	8b 55 08             	mov    0x8(%ebp),%edx
 8797acf:	8b 02                	mov    (%edx),%eax
 8797ad1:	85 c0                	test   %eax,%eax
 8797ad3:	75 05                	jne    8797ada <_ZN5yaSSL11CertManagerD1Ev+0x16a>
 8797ad5:	eb 17                	jmp    8797aee <_ZN5yaSSL11CertManagerD1Ev+0x17e>
 8797ad7:	90                   	nop
 8797ad8:	89 f0                	mov    %esi,%eax
 8797ada:	8b 70 04             	mov    0x4(%eax),%esi
 8797add:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8797ae2:	89 04 24             	mov    %eax,(%esp)
 8797ae5:	e8 06 8e fb ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 8797aea:	85 f6                	test   %esi,%esi
 8797aec:	75 ea                	jne    8797ad8 <_ZN5yaSSL11CertManagerD1Ev+0x168>
 8797aee:	83 c4 1c             	add    $0x1c,%esp
 8797af1:	5b                   	pop    %ebx
 8797af2:	5e                   	pop    %esi
 8797af3:	5f                   	pop    %edi
 8797af4:	5d                   	pop    %ebp
 8797af5:	c3                   	ret
 8797af6:	8d 76 00             	lea    0x0(%esi),%esi
 8797af9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::CertManager::~CertManager @ 0x8797970

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertManager::~CertManager() */

void __thiscall yaSSL::CertManager::~CertManager(CertManager *this)

{
  X509_NAME *this_00;
  int iVar1;
  Signer *this_01;
  x509 *pxVar2;
  int iVar3;
  
  this_00 = *(X509_NAME **)(this + 0x38);
  if (this_00 != (X509_NAME *)0x0) {
    StringHolder::~StringHolder((StringHolder *)(this_00 + 0x34));
    StringHolder::~StringHolder((StringHolder *)(this_00 + 0x28));
    X509_NAME::~X509_NAME(this_00 + 0x14);
    X509_NAME::~X509_NAME(this_00);
  }
  operator_delete(this_00,0);
  for (iVar1 = *(int *)(this + 0x44); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    this_01 = *(Signer **)(iVar1 + 8);
    *(undefined4 *)(iVar1 + 8) = 0;
    if (this_01 != (Signer *)0x0) {
      TaoCrypt::Signer::~Signer(this_01);
    }
    operator_delete(this_01,0);
  }
  for (iVar1 = *(int *)(this + 0x1c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    pxVar2 = *(x509 **)(iVar1 + 8);
    *(undefined4 *)(iVar1 + 8) = 0;
    if (pxVar2 != (x509 *)0x0) {
      yaSSL::x509::~x509(pxVar2);
    }
    operator_delete(pxVar2,0);
  }
  for (iVar1 = *(int *)this; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    pxVar2 = *(x509 **)(iVar1 + 8);
    *(undefined4 *)(iVar1 + 8) = 0;
    if (pxVar2 != (x509 *)0x0) {
      yaSSL::x509::~x509(pxVar2);
    }
    operator_delete(pxVar2,0);
  }
  iVar1 = *(int *)(this + 0x44);
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 4);
    operator_delete__(iVar1,0);
    iVar1 = iVar3;
  }
  input_buffer::~input_buffer((input_buffer *)(this + 0x28));
  iVar1 = *(int *)(this + 0x1c);
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 4);
    operator_delete__(iVar1,0);
    iVar1 = iVar3;
  }
  input_buffer::~input_buffer((input_buffer *)(this + 0xc));
  iVar1 = *(int *)this;
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 4);
    operator_delete__(iVar1,0);
    iVar1 = iVar3;
  }
  return;
}

```

