# yaSSL__CertificateRequest

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## Build

```asm
// === 08747020 yaSSL::CertificateRequest::Build  [0x08747020-0x874705f] ===
 8747020:	55                   	push   %ebp
 8747021:	89 e5                	mov    %esp,%ebp
 8747023:	53                   	push   %ebx
 8747024:	e8 cf bd fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8747029:	81 c3 6f 5b c2 00    	add    $0xc25b6f,%ebx
 874702f:	83 ec 14             	sub    $0x14,%esp
 8747032:	8b 45 08             	mov    0x8(%ebp),%eax
 8747035:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
 874703c:	c7 40 0c 02 00 00 00 	movl   $0x2,0xc(%eax)
 8747043:	c7 40 24 02 00 00 00 	movl   $0x2,0x24(%eax)
 874704a:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8747051:	00 
 8747052:	89 04 24             	mov    %eax,(%esp)
 8747055:	e8 56 fa ff ff       	call   8746ab0 <_ZN5yaSSL13HandShakeBase10set_lengthEi>
 874705a:	83 c4 14             	add    $0x14,%esp
 874705d:	5b                   	pop    %ebx
 874705e:	5d                   	pop    %ebp
 874705f:	c3                   	ret

```

```c
// yaSSL::CertificateRequest::Build @ 0x8747020

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertificateRequest::Build() */

void __thiscall yaSSL::CertificateRequest::Build(CertificateRequest *this)

{
  *(undefined4 *)(this + 8) = 1;
  *(undefined4 *)(this + 0xc) = 2;
  *(undefined4 *)(this + 0x24) = 2;
  HandShakeBase::set_length((HandShakeBase *)this,5);
  return;
}

```

---

## CertificateRequest

```asm
// === 08747940 yaSSL::CertificateRequest::CertificateRequest  [0x08747940-0x874798f] ===
 8747940:	e8 7f cc fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8747945:	81 c1 53 52 c2 00    	add    $0xc25253,%ecx
 874794b:	55                   	push   %ebp
 874794c:	89 e5                	mov    %esp,%ebp
 874794e:	8b 45 08             	mov    0x8(%ebp),%eax
 8747951:	8b 91 64 fa ff ff    	mov    -0x59c(%ecx),%edx
 8747957:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
 874795e:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 8747965:	c7 40 2c 00 00 00 00 	movl   $0x0,0x2c(%eax)
 874796c:	83 c2 08             	add    $0x8,%edx
 874796f:	89 10                	mov    %edx,(%eax)
 8747971:	31 d2                	xor    %edx,%edx
 8747973:	c7 40 30 00 00 00 00 	movl   $0x0,0x30(%eax)
 874797a:	83 c0 08             	add    $0x8,%eax
 874797d:	c7 04 10 00 00 00 00 	movl   $0x0,(%eax,%edx,1)
 8747984:	83 c2 04             	add    $0x4,%edx
 8747987:	83 fa 1c             	cmp    $0x1c,%edx
 874798a:	72 f1                	jb     874797d <_ZN5yaSSL18CertificateRequestC1Ev+0x3d>
 874798c:	5d                   	pop    %ebp
 874798d:	c3                   	ret
 874798e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::CertificateRequest::CertificateRequest @ 0x8747940

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* yaSSL::CertificateRequest::CertificateRequest() */

void __thiscall yaSSL::CertificateRequest::CertificateRequest(CertificateRequest *this)

{
  undefined *puVar1;
  uint uVar2;
  
  puVar1 = PTR_vtable_0936c5fc;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined **)this = puVar1 + 8;
  uVar2 = 0;
  *(undefined4 *)(this + 0x30) = 0;
  do {
    *(undefined4 *)(this + uVar2 + 8) = 0;
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x1c);
  return;
}

```

---

## Process

```asm
// === 08748be0 yaSSL::CertificateRequest::Process  [0x08748be0-0x8748c3f] ===
 8748be0:	55                   	push   %ebp
 8748be1:	89 e5                	mov    %esp,%ebp
 8748be3:	83 ec 18             	sub    $0x18,%esp
 8748be6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8748be9:	8b 45 10             	mov    0x10(%ebp),%eax
 8748bec:	e8 07 a2 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8748bf1:	81 c3 a7 3f c2 00    	add    $0xc23fa7,%ebx
 8748bf7:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8748bfa:	89 04 24             	mov    %eax,(%esp)
 8748bfd:	e8 ae 56 00 00       	call   874e2b0 <_ZN5yaSSL3SSL9useCryptoEv>
 8748c02:	89 04 24             	mov    %eax,(%esp)
 8748c05:	e8 d6 5b 00 00       	call   874e7e0 <_ZN5yaSSL6Crypto15use_certManagerEv>
 8748c0a:	89 c6                	mov    %eax,%esi
 8748c0c:	89 04 24             	mov    %eax,(%esp)
 8748c0f:	e8 7c e8 04 00       	call   8797490 <_ZNK5yaSSL11CertManager8get_certEv>
 8748c14:	85 c0                	test   %eax,%eax
 8748c16:	74 14                	je     8748c2c <_ZN5yaSSL18CertificateRequest7ProcessERNS_12input_bufferERNS_3SSLE+0x4c>
 8748c18:	89 34 24             	mov    %esi,(%esp)
 8748c1b:	e8 d0 eb 04 00       	call   87977f0 <_ZNK5yaSSL11CertManager14get_privateKeyEv>
 8748c20:	85 c0                	test   %eax,%eax
 8748c22:	74 08                	je     8748c2c <_ZN5yaSSL18CertificateRequest7ProcessERNS_12input_bufferERNS_3SSLE+0x4c>
 8748c24:	89 34 24             	mov    %esi,(%esp)
 8748c27:	e8 44 e8 04 00       	call   8797470 <_ZN5yaSSL11CertManager13setSendVerifyEv>
 8748c2c:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8748c2f:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8748c32:	89 ec                	mov    %ebp,%esp
 8748c34:	5d                   	pop    %ebp
 8748c35:	c3                   	ret
 8748c36:	8d 76 00             	lea    0x0(%esi),%esi
 8748c39:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::CertificateRequest::Process @ 0x8748be0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertificateRequest::Process(yaSSL::input_buffer&, yaSSL::SSL&) */

void __thiscall
yaSSL::CertificateRequest::Process(CertificateRequest *this,input_buffer *param_1,SSL *param_2)

{
  Crypto *this_00;
  CertManager *this_01;
  int iVar1;
  
  this_00 = (Crypto *)SSL::useCrypto(param_2);
  this_01 = (CertManager *)Crypto::use_certManager(this_00);
  iVar1 = CertManager::get_cert(this_01);
  if (iVar1 != 0) {
    iVar1 = CertManager::get_privateKey(this_01);
    if (iVar1 != 0) {
      CertManager::setSendVerify(this_01);
    }
  }
  return;
}

```

---

## get

```asm
// === 08748d30 yaSSL::CertificateRequest::get  [0x08748d30-0x8748d5f] ===
 8748d30:	55                   	push   %ebp
 8748d31:	89 e5                	mov    %esp,%ebp
 8748d33:	53                   	push   %ebx
 8748d34:	83 ec 14             	sub    $0x14,%esp
 8748d37:	8b 45 08             	mov    0x8(%ebp),%eax
 8748d3a:	e8 b9 a0 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8748d3f:	81 c3 59 3e c2 00    	add    $0xc23e59,%ebx
 8748d45:	89 44 24 04          	mov    %eax,0x4(%esp)
 8748d49:	8b 45 0c             	mov    0xc(%ebp),%eax
 8748d4c:	89 04 24             	mov    %eax,(%esp)
 8748d4f:	e8 ec fe ff ff       	call   8748c40 <_ZN5yaSSLlsERNS_13output_bufferERKNS_18CertificateRequestE>
 8748d54:	83 c4 14             	add    $0x14,%esp
 8748d57:	5b                   	pop    %ebx
 8748d58:	5d                   	pop    %ebp
 8748d59:	c3                   	ret
 8748d5a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::CertificateRequest::get @ 0x8748d30

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertificateRequest::get(yaSSL::output_buffer&) const */

void __thiscall yaSSL::CertificateRequest::get(CertificateRequest *this,output_buffer *param_1)

{
  yaSSL::operator<<(param_1,this);
  return;
}

```

---

## get_type

```asm
// === 08747060 yaSSL::CertificateRequest::get_type  [0x08747060-0x874706f] ===
 8747060:	55                   	push   %ebp
 8747061:	b8 0d 00 00 00       	mov    $0xd,%eax
 8747066:	89 e5                	mov    %esp,%ebp
 8747068:	5d                   	pop    %ebp
 8747069:	c3                   	ret
 874706a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::CertificateRequest::get_type @ 0x8747060

/* yaSSL::CertificateRequest::get_type() const */

undefined4 yaSSL::CertificateRequest::get_type(void)

{
  return 0xd;
}

```

---

## set

```asm
// === 08748b00 yaSSL::CertificateRequest::set  [0x08748b00-0x8748b2f] ===
 8748b00:	55                   	push   %ebp
 8748b01:	89 e5                	mov    %esp,%ebp
 8748b03:	53                   	push   %ebx
 8748b04:	83 ec 14             	sub    $0x14,%esp
 8748b07:	8b 45 08             	mov    0x8(%ebp),%eax
 8748b0a:	e8 e9 a2 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8748b0f:	81 c3 89 40 c2 00    	add    $0xc24089,%ebx
 8748b15:	89 44 24 04          	mov    %eax,0x4(%esp)
 8748b19:	8b 45 0c             	mov    0xc(%ebp),%eax
 8748b1c:	89 04 24             	mov    %eax,(%esp)
 8748b1f:	e8 6c fe ff ff       	call   8748990 <_ZN5yaSSLrsERNS_12input_bufferERNS_18CertificateRequestE>
 8748b24:	83 c4 14             	add    $0x14,%esp
 8748b27:	5b                   	pop    %ebx
 8748b28:	5d                   	pop    %ebp
 8748b29:	c3                   	ret
 8748b2a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::CertificateRequest::set @ 0x8748b00

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertificateRequest::set(yaSSL::input_buffer&) */

void __thiscall yaSSL::CertificateRequest::set(CertificateRequest *this,input_buffer *param_1)

{
  yaSSL::operator>>(param_1,this);
  return;
}

```

---

## ~CertificateRequest

```asm
// === 0874b800 yaSSL::CertificateRequest::~CertificateRequest  [0x0874b800-0x874b88f] ===
 874b800:	55                   	push   %ebp
 874b801:	89 e5                	mov    %esp,%ebp
 874b803:	57                   	push   %edi
 874b804:	56                   	push   %esi
 874b805:	53                   	push   %ebx
 874b806:	e8 ed 75 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874b80b:	81 c3 8d 13 c2 00    	add    $0xc2138d,%ebx
 874b811:	83 ec 1c             	sub    $0x1c,%esp
 874b814:	8b 7d 08             	mov    0x8(%ebp),%edi
 874b817:	8b 77 28             	mov    0x28(%edi),%esi
 874b81a:	8b 83 64 fa ff ff    	mov    -0x59c(%ebx),%eax
 874b820:	83 c0 08             	add    $0x8,%eax
 874b823:	85 f6                	test   %esi,%esi
 874b825:	89 07                	mov    %eax,(%edi)
 874b827:	74 45                	je     874b86e <_ZN5yaSSL18CertificateRequestD1Ev+0x6e>
 874b829:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 874b830:	8b 46 08             	mov    0x8(%esi),%eax
 874b833:	c7 46 08 00 00 00 00 	movl   $0x0,0x8(%esi)
 874b83a:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874b83f:	89 04 24             	mov    %eax,(%esp)
 874b842:	e8 d9 4f 00 00       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 874b847:	8b 76 04             	mov    0x4(%esi),%esi
 874b84a:	85 f6                	test   %esi,%esi
 874b84c:	75 e2                	jne    874b830 <_ZN5yaSSL18CertificateRequestD1Ev+0x30>
 874b84e:	8b 47 28             	mov    0x28(%edi),%eax
 874b851:	85 c0                	test   %eax,%eax
 874b853:	75 05                	jne    874b85a <_ZN5yaSSL18CertificateRequestD1Ev+0x5a>
 874b855:	eb 17                	jmp    874b86e <_ZN5yaSSL18CertificateRequestD1Ev+0x6e>
 874b857:	90                   	nop
 874b858:	89 f0                	mov    %esi,%eax
 874b85a:	8b 70 04             	mov    0x4(%eax),%esi
 874b85d:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874b862:	89 04 24             	mov    %eax,(%esp)
 874b865:	e8 86 50 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874b86a:	85 f6                	test   %esi,%esi
 874b86c:	75 ea                	jne    874b858 <_ZN5yaSSL18CertificateRequestD1Ev+0x58>
 874b86e:	8b 83 4c fa ff ff    	mov    -0x5b4(%ebx),%eax
 874b874:	83 c0 08             	add    $0x8,%eax
 874b877:	89 07                	mov    %eax,(%edi)
 874b879:	83 c4 1c             	add    $0x1c,%esp
 874b87c:	5b                   	pop    %ebx
 874b87d:	5e                   	pop    %esi
 874b87e:	5f                   	pop    %edi
 874b87f:	5d                   	pop    %ebp
 874b880:	c3                   	ret
 874b881:	90                   	nop
 874b882:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 874b889:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::CertificateRequest::~CertificateRequest @ 0x874b800

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertificateRequest::~CertificateRequest() */

void __thiscall yaSSL::CertificateRequest::~CertificateRequest(CertificateRequest *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x28);
  *(undefined **)this = PTR_vtable_0936c5fc + 8;
  if (iVar3 != 0) {
    do {
      uVar1 = *(undefined4 *)(iVar3 + 8);
      *(undefined4 *)(iVar3 + 8) = 0;
      operator_delete(uVar1,0);
      iVar3 = *(int *)(iVar3 + 4);
    } while (iVar3 != 0);
    iVar3 = *(int *)(this + 0x28);
    while (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 4);
      operator_delete__(iVar3,0);
      iVar3 = iVar2;
    }
  }
  *(undefined **)this = PTR_vtable_0936c5e4 + 8;
  return;
}

```

---

## ~CertificateRequest_0874b890

```asm
// === 0874b890 yaSSL::CertificateRequest::~CertificateRequest  [0x0874b890-0x874b8bf] ===
 874b890:	55                   	push   %ebp
 874b891:	89 e5                	mov    %esp,%ebp
 874b893:	53                   	push   %ebx
 874b894:	e8 5f 75 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874b899:	81 c3 ff 12 c2 00    	add    $0xc212ff,%ebx
 874b89f:	83 ec 14             	sub    $0x14,%esp
 874b8a2:	8b 45 08             	mov    0x8(%ebp),%eax
 874b8a5:	89 04 24             	mov    %eax,(%esp)
 874b8a8:	e8 53 ff ff ff       	call   874b800 <_ZN5yaSSL18CertificateRequestD1Ev>
 874b8ad:	83 c4 14             	add    $0x14,%esp
 874b8b0:	5b                   	pop    %ebx
 874b8b1:	5d                   	pop    %ebp
 874b8b2:	c3                   	ret
 874b8b3:	90                   	nop
 874b8b4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874b8ba:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::CertificateRequest::~CertificateRequest @ 0x874b890

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertificateRequest::~CertificateRequest() */

void __thiscall yaSSL::CertificateRequest::~CertificateRequest(CertificateRequest *this)

{
  ~CertificateRequest(this);
  return;
}

```

