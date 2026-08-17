# yaSSL__Certificate

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## Certificate

```asm
// === 08746d10 yaSSL::Certificate::Certificate  [0x08746d10-0x8746d3f] ===
 8746d10:	e8 af d8 fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8746d15:	81 c1 83 5e c2 00    	add    $0xc25e83,%ecx
 8746d1b:	55                   	push   %ebp
 8746d1c:	89 e5                	mov    %esp,%ebp
 8746d1e:	8b 45 08             	mov    0x8(%ebp),%eax
 8746d21:	8b 91 98 fc ff ff    	mov    -0x368(%ecx),%edx
 8746d27:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8746d2e:	83 c2 08             	add    $0x8,%edx
 8746d31:	89 10                	mov    %edx,(%eax)
 8746d33:	5d                   	pop    %ebp
 8746d34:	c3                   	ret
 8746d35:	90                   	nop
 8746d36:	8d 76 00             	lea    0x0(%esi),%esi
 8746d39:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::Certificate::Certificate @ 0x8746d10

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* yaSSL::Certificate::Certificate() */

void __thiscall yaSSL::Certificate::Certificate(Certificate *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0936c830;
  *(undefined4 *)(this + 8) = 0;
  *(undefined **)this = puVar1 + 8;
  return;
}

```

---

## Certificate_08749730

```asm
// === 08749730 yaSSL::Certificate::Certificate  [0x08749730-0x874977f] ===
 8749730:	55                   	push   %ebp
 8749731:	89 e5                	mov    %esp,%ebp
 8749733:	83 ec 18             	sub    $0x18,%esp
 8749736:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8749739:	8b 45 0c             	mov    0xc(%ebp),%eax
 874973c:	e8 b7 96 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8749741:	81 c3 57 34 c2 00    	add    $0xc23457,%ebx
 8749747:	89 75 fc             	mov    %esi,-0x4(%ebp)
 874974a:	8b 75 08             	mov    0x8(%ebp),%esi
 874974d:	89 46 08             	mov    %eax,0x8(%esi)
 8749750:	8b 93 98 fc ff ff    	mov    -0x368(%ebx),%edx
 8749756:	83 c2 08             	add    $0x8,%edx
 8749759:	89 16                	mov    %edx,(%esi)
 874975b:	89 04 24             	mov    %eax,(%esp)
 874975e:	e8 6d dc 04 00       	call   87973d0 <_ZNK5yaSSL4x50910get_lengthEv>
 8749763:	89 34 24             	mov    %esi,(%esp)
 8749766:	83 c0 06             	add    $0x6,%eax
 8749769:	89 44 24 04          	mov    %eax,0x4(%esp)
 874976d:	e8 3e d3 ff ff       	call   8746ab0 <_ZN5yaSSL13HandShakeBase10set_lengthEi>
 8749772:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8749775:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8749778:	89 ec                	mov    %ebp,%esp
 874977a:	5d                   	pop    %ebp
 874977b:	c3                   	ret
 874977c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Certificate::Certificate @ 0x8749730

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Certificate::Certificate(yaSSL::x509 const*) */

void __thiscall yaSSL::Certificate::Certificate(Certificate *this,x509 *param_1)

{
  int iVar1;
  
  *(x509 **)(this + 8) = param_1;
  *(undefined **)this = PTR_vtable_0936c830 + 8;
  iVar1 = yaSSL::x509::get_length(param_1);
  HandShakeBase::set_length((HandShakeBase *)this,iVar1 + 6);
  return;
}

```

---

## Process

```asm
// === 08749780 yaSSL::Certificate::Process  [0x08749780-0x874994f] ===
 8749780:	55                   	push   %ebp
 8749781:	89 e5                	mov    %esp,%ebp
 8749783:	57                   	push   %edi
 8749784:	56                   	push   %esi
 8749785:	53                   	push   %ebx
 8749786:	e8 6d 96 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874978b:	81 c3 0d 34 c2 00    	add    $0xc2340d,%ebx
 8749791:	83 ec 3c             	sub    $0x3c,%esp
 8749794:	8b 45 10             	mov    0x10(%ebp),%eax
 8749797:	8b 7d 0c             	mov    0xc(%ebp),%edi
 874979a:	89 04 24             	mov    %eax,(%esp)
 874979d:	e8 0e 4b 00 00       	call   874e2b0 <_ZN5yaSSL3SSL9useCryptoEv>
 87497a2:	89 04 24             	mov    %eax,(%esp)
 87497a5:	e8 36 50 00 00       	call   874e7e0 <_ZN5yaSSL6Crypto15use_certManagerEv>
 87497aa:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 87497b1:	fe 
 87497b2:	89 3c 24             	mov    %edi,(%esp)
 87497b5:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87497b8:	e8 63 d6 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 87497bd:	0f b6 00             	movzbl (%eax),%eax
 87497c0:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 87497c7:	fe 
 87497c8:	89 3c 24             	mov    %edi,(%esp)
 87497cb:	88 45 e5             	mov    %al,-0x1b(%ebp)
 87497ce:	e8 4d d6 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 87497d3:	0f b6 00             	movzbl (%eax),%eax
 87497d6:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 87497dd:	fe 
 87497de:	89 3c 24             	mov    %edi,(%esp)
 87497e1:	88 45 e6             	mov    %al,-0x1a(%ebp)
 87497e4:	e8 37 d6 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 87497e9:	0f b6 00             	movzbl (%eax),%eax
 87497ec:	88 45 e7             	mov    %al,-0x19(%ebp)
 87497ef:	8d 45 e0             	lea    -0x20(%ebp),%eax
 87497f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 87497f6:	8d 45 e5             	lea    -0x1b(%ebp),%eax
 87497f9:	89 45 d0             	mov    %eax,-0x30(%ebp)
 87497fc:	89 04 24             	mov    %eax,(%esp)
 87497ff:	e8 2c 45 00 00       	call   874dd30 <_ZN5yaSSL7c24to32EPKhRj>
 8749804:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 8749807:	85 c9                	test   %ecx,%ecx
 8749809:	0f 84 c8 00 00 00    	je     87498d7 <_ZN5yaSSL11Certificate7ProcessERNS_12input_bufferERNS_3SSLE+0x157>
 874980f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8749812:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8749815:	8d 76 00             	lea    0x0(%esi),%esi
 8749818:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 874981f:	fe 
 8749820:	89 3c 24             	mov    %edi,(%esp)
 8749823:	e8 f8 d5 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 8749828:	0f b6 00             	movzbl (%eax),%eax
 874982b:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8749832:	fe 
 8749833:	89 3c 24             	mov    %edi,(%esp)
 8749836:	88 45 e5             	mov    %al,-0x1b(%ebp)
 8749839:	e8 e2 d5 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 874983e:	0f b6 00             	movzbl (%eax),%eax
 8749841:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8749848:	fe 
 8749849:	89 3c 24             	mov    %edi,(%esp)
 874984c:	88 45 e6             	mov    %al,-0x1a(%ebp)
 874984f:	e8 cc d5 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 8749854:	0f b6 00             	movzbl (%eax),%eax
 8749857:	88 45 e7             	mov    %al,-0x19(%ebp)
 874985a:	8b 45 cc             	mov    -0x34(%ebp),%eax
 874985d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8749861:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8749864:	89 04 24             	mov    %eax,(%esp)
 8749867:	e8 c4 44 00 00       	call   874dd30 <_ZN5yaSSL7c24to32EPKhRj>
 874986c:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8749871:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8749878:	e8 23 74 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 874987d:	89 c6                	mov    %eax,%esi
 874987f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8749882:	89 34 24             	mov    %esi,(%esp)
 8749885:	89 44 24 04          	mov    %eax,0x4(%esp)
 8749889:	e8 c2 de 04 00       	call   8797750 <_ZN5yaSSL4x509C1Ej>
 874988e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8749891:	89 74 24 04          	mov    %esi,0x4(%esp)
 8749895:	89 04 24             	mov    %eax,(%esp)
 8749898:	e8 43 dd 04 00       	call   87975e0 <_ZN5yaSSL11CertManager11AddPeerCertEPNS_4x509E>
 874989d:	89 34 24             	mov    %esi,(%esp)
 87498a0:	e8 2b db 04 00       	call   87973d0 <_ZNK5yaSSL4x50910get_lengthEv>
 87498a5:	89 34 24             	mov    %esi,(%esp)
 87498a8:	89 45 c8             	mov    %eax,-0x38(%ebp)
 87498ab:	e8 40 db 04 00       	call   87973f0 <_ZN5yaSSL4x50910use_bufferEv>
 87498b0:	8b 55 c8             	mov    -0x38(%ebp),%edx
 87498b3:	89 3c 24             	mov    %edi,(%esp)
 87498b6:	89 54 24 08          	mov    %edx,0x8(%esp)
 87498ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 87498be:	e8 7d d7 04 00       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 87498c3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87498c6:	83 e8 03             	sub    $0x3,%eax
 87498c9:	2b 45 dc             	sub    -0x24(%ebp),%eax
 87498cc:	85 c0                	test   %eax,%eax
 87498ce:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87498d1:	0f 85 41 ff ff ff    	jne    8749818 <_ZN5yaSSL11Certificate7ProcessERNS_12input_bufferERNS_3SSLE+0x98>
 87498d7:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 87498da:	89 04 24             	mov    %eax,(%esp)
 87498dd:	e8 ae e5 04 00       	call   8797e90 <_ZN5yaSSL11CertManager8ValidateEv>
 87498e2:	85 c0                	test   %eax,%eax
 87498e4:	75 22                	jne    8749908 <_ZN5yaSSL11Certificate7ProcessERNS_12input_bufferERNS_3SSLE+0x188>
 87498e6:	8b 45 10             	mov    0x10(%ebp),%eax
 87498e9:	89 04 24             	mov    %eax,(%esp)
 87498ec:	e8 7f 47 00 00       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 87498f1:	89 04 24             	mov    %eax,(%esp)
 87498f4:	e8 57 51 00 00       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 87498f9:	83 38 01             	cmpl   $0x1,(%eax)
 87498fc:	74 22                	je     8749920 <_ZN5yaSSL11Certificate7ProcessERNS_12input_bufferERNS_3SSLE+0x1a0>
 87498fe:	83 c4 3c             	add    $0x3c,%esp
 8749901:	5b                   	pop    %ebx
 8749902:	5e                   	pop    %esi
 8749903:	5f                   	pop    %edi
 8749904:	5d                   	pop    %ebp
 8749905:	c3                   	ret
 8749906:	66 90                	xchg   %ax,%ax
 8749908:	89 44 24 04          	mov    %eax,0x4(%esp)
 874990c:	8b 45 10             	mov    0x10(%ebp),%eax
 874990f:	89 04 24             	mov    %eax,(%esp)
 8749912:	e8 b9 46 00 00       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 8749917:	83 c4 3c             	add    $0x3c,%esp
 874991a:	5b                   	pop    %ebx
 874991b:	5e                   	pop    %esi
 874991c:	5f                   	pop    %edi
 874991d:	5d                   	pop    %ebp
 874991e:	c3                   	ret
 874991f:	90                   	nop
 8749920:	8b 45 10             	mov    0x10(%ebp),%eax
 8749923:	89 04 24             	mov    %eax,(%esp)
 8749926:	e8 a5 49 00 00       	call   874e2d0 <_ZN5yaSSL3SSL9useStatesEv>
 874992b:	89 04 24             	mov    %eax,(%esp)
 874992e:	e8 ed 45 00 00       	call   874df20 <_ZN5yaSSL6States9useClientEv>
 8749933:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 8749939:	83 c4 3c             	add    $0x3c,%esp
 874993c:	5b                   	pop    %ebx
 874993d:	5e                   	pop    %esi
 874993e:	5f                   	pop    %edi
 874993f:	5d                   	pop    %ebp
 8749940:	c3                   	ret
 8749941:	90                   	nop
 8749942:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8749949:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::Certificate::Process @ 0x8749780

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Certificate::Process(yaSSL::input_buffer&, yaSSL::SSL&) */

void __thiscall yaSSL::Certificate::Process(Certificate *this,input_buffer *param_1,SSL *param_2)

{
  Crypto *this_00;
  CertManager *this_01;
  uchar *puVar1;
  undefined1 *puVar2;
  x509 *this_02;
  uint uVar3;
  int iVar4;
  Security *this_03;
  int *piVar5;
  States *this_04;
  undefined4 *puVar6;
  uint *puVar7;
  uint local_28;
  uint local_24;
  uchar local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined4 uStack_14;
  
  uStack_14 = 0x874978b;
  this_00 = (Crypto *)SSL::useCrypto(param_2);
  this_01 = (CertManager *)Crypto::use_certManager(this_00);
  puVar1 = (uchar *)input_buffer::operator[]((uint)param_1);
  local_1f = *puVar1;
  puVar2 = (undefined1 *)input_buffer::operator[]((uint)param_1);
  local_1e = *puVar2;
  puVar2 = (undefined1 *)input_buffer::operator[]((uint)param_1);
  local_1d = *puVar2;
  c24to32(&local_1f,&local_24);
  if (local_24 != 0) {
    do {
      puVar1 = (uchar *)input_buffer::operator[]((uint)param_1);
      local_1f = *puVar1;
      puVar2 = (undefined1 *)input_buffer::operator[]((uint)param_1);
      local_1e = *puVar2;
      puVar2 = (undefined1 *)input_buffer::operator[]((uint)param_1);
      local_1d = *puVar2;
      puVar7 = &local_28;
      c24to32(&local_1f,&local_28);
      this_02 = operator_new(8,(uint)puVar7 & 0xffffff00);
      yaSSL::x509::x509(this_02,local_28);
      CertManager::AddPeerCert(this_01,this_02);
      uVar3 = yaSSL::x509::get_length(this_02);
      puVar1 = (uchar *)yaSSL::x509::use_buffer(this_02);
      input_buffer::read(param_1,puVar1,uVar3);
      local_24 = (local_24 - 3) - local_28;
    } while (local_24 != 0);
  }
  iVar4 = CertManager::Validate(this_01);
  if (iVar4 == 0) {
    this_03 = (Security *)SSL::getSecurity(param_2);
    piVar5 = (int *)Security::get_parms(this_03);
    if (*piVar5 != 1) {
      return;
    }
    this_04 = (States *)SSL::useStates(param_2);
    puVar6 = (undefined4 *)States::useClient(this_04);
    *puVar6 = 2;
    return;
  }
  SSL::SetError(param_2,iVar4);
  return;
}

```

---

## get

```asm
// === 08749a60 yaSSL::Certificate::get  [0x08749a60-0x8749a8f] ===
 8749a60:	55                   	push   %ebp
 8749a61:	89 e5                	mov    %esp,%ebp
 8749a63:	53                   	push   %ebx
 8749a64:	83 ec 14             	sub    $0x14,%esp
 8749a67:	8b 45 08             	mov    0x8(%ebp),%eax
 8749a6a:	e8 89 93 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8749a6f:	81 c3 29 31 c2 00    	add    $0xc23129,%ebx
 8749a75:	89 44 24 04          	mov    %eax,0x4(%esp)
 8749a79:	8b 45 0c             	mov    0xc(%ebp),%eax
 8749a7c:	89 04 24             	mov    %eax,(%esp)
 8749a7f:	e8 2c ff ff ff       	call   87499b0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_11CertificateE>
 8749a84:	83 c4 14             	add    $0x14,%esp
 8749a87:	5b                   	pop    %ebx
 8749a88:	5d                   	pop    %ebp
 8749a89:	c3                   	ret
 8749a8a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::Certificate::get @ 0x8749a60

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Certificate::get(yaSSL::output_buffer&) const */

void __thiscall yaSSL::Certificate::get(Certificate *this,output_buffer *param_1)

{
  yaSSL::operator<<(param_1,this);
  return;
}

```

---

## get_buffer

```asm
// === 08749980 yaSSL::Certificate::get_buffer  [0x08749980-0x87499af] ===
 8749980:	55                   	push   %ebp
 8749981:	89 e5                	mov    %esp,%ebp
 8749983:	53                   	push   %ebx
 8749984:	83 ec 14             	sub    $0x14,%esp
 8749987:	8b 45 08             	mov    0x8(%ebp),%eax
 874998a:	e8 69 94 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874998f:	81 c3 09 32 c2 00    	add    $0xc23209,%ebx
 8749995:	8b 40 08             	mov    0x8(%eax),%eax
 8749998:	89 04 24             	mov    %eax,(%esp)
 874999b:	e8 40 da 04 00       	call   87973e0 <_ZNK5yaSSL4x50910get_bufferEv>
 87499a0:	83 c4 14             	add    $0x14,%esp
 87499a3:	5b                   	pop    %ebx
 87499a4:	5d                   	pop    %ebp
 87499a5:	c3                   	ret
 87499a6:	8d 76 00             	lea    0x0(%esi),%esi
 87499a9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::Certificate::get_buffer @ 0x8749980

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Certificate::get_buffer() const */

void __thiscall yaSSL::Certificate::get_buffer(Certificate *this)

{
  yaSSL::x509::get_buffer(*(x509 **)(this + 8));
  return;
}

```

---

## get_type

```asm
// === 08746d50 yaSSL::Certificate::get_type  [0x08746d50-0x8746d5f] ===
 8746d50:	55                   	push   %ebp
 8746d51:	b8 0b 00 00 00       	mov    $0xb,%eax
 8746d56:	89 e5                	mov    %esp,%ebp
 8746d58:	5d                   	pop    %ebp
 8746d59:	c3                   	ret
 8746d5a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::Certificate::get_type @ 0x8746d50

/* yaSSL::Certificate::get_type() const */

undefined4 yaSSL::Certificate::get_type(void)

{
  return 0xb;
}

```

---

## set

```asm
// === 08746d40 yaSSL::Certificate::set  [0x08746d40-0x8746d4f] ===
 8746d40:	55                   	push   %ebp
 8746d41:	89 e5                	mov    %esp,%ebp
 8746d43:	8b 45 0c             	mov    0xc(%ebp),%eax
 8746d46:	5d                   	pop    %ebp
 8746d47:	c3                   	ret
 8746d48:	90                   	nop
 8746d49:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Certificate::set @ 0x8746d40

/* yaSSL::Certificate::set(yaSSL::input_buffer&) */

input_buffer * __thiscall yaSSL::Certificate::set(Certificate *this,input_buffer *param_1)

{
  return param_1;
}

```

