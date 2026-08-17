# yaSSL__ChangeCipherSpec

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## ChangeCipherSpec

```asm
// === 08746b40 yaSSL::ChangeCipherSpec::ChangeCipherSpec  [0x08746b40-0x8746b6f] ===
 8746b40:	e8 7f da fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8746b45:	81 c1 53 60 c2 00    	add    $0xc26053,%ecx
 8746b4b:	55                   	push   %ebp
 8746b4c:	89 e5                	mov    %esp,%ebp
 8746b4e:	8b 45 08             	mov    0x8(%ebp),%eax
 8746b51:	8b 91 04 fd ff ff    	mov    -0x2fc(%ecx),%edx
 8746b57:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
 8746b5e:	83 c2 08             	add    $0x8,%edx
 8746b61:	89 10                	mov    %edx,(%eax)
 8746b63:	5d                   	pop    %ebp
 8746b64:	c3                   	ret
 8746b65:	90                   	nop
 8746b66:	8d 76 00             	lea    0x0(%esi),%esi
 8746b69:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::ChangeCipherSpec::ChangeCipherSpec @ 0x8746b40

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* yaSSL::ChangeCipherSpec::ChangeCipherSpec() */

void __thiscall yaSSL::ChangeCipherSpec::ChangeCipherSpec(ChangeCipherSpec *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0936c89c;
  *(undefined4 *)(this + 4) = 1;
  *(undefined **)this = puVar1 + 8;
  return;
}

```

---

## Process

```asm
// === 0874a0a0 yaSSL::ChangeCipherSpec::Process  [0x0874a0a0-0x874a16f] ===
 874a0a0:	55                   	push   %ebp
 874a0a1:	89 e5                	mov    %esp,%ebp
 874a0a3:	56                   	push   %esi
 874a0a4:	53                   	push   %ebx
 874a0a5:	e8 4e 8d fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874a0aa:	81 c3 ee 2a c2 00    	add    $0xc22aee,%ebx
 874a0b0:	83 ec 10             	sub    $0x10,%esp
 874a0b3:	8b 75 10             	mov    0x10(%ebp),%esi
 874a0b6:	89 34 24             	mov    %esi,(%esp)
 874a0b9:	e8 02 42 00 00       	call   874e2c0 <_ZN5yaSSL3SSL11useSecurityEv>
 874a0be:	89 04 24             	mov    %eax,(%esp)
 874a0c1:	e8 da 4d 00 00       	call   874eea0 <_ZN5yaSSL8Security9use_parmsEv>
 874a0c6:	c6 40 28 00          	movb   $0x0,0x28(%eax)
 874a0ca:	89 34 24             	mov    %esi,(%esp)
 874a0cd:	e8 9e 3f 00 00       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 874a0d2:	89 04 24             	mov    %eax,(%esp)
 874a0d5:	e8 16 4c 00 00       	call   874ecf0 <_ZNK5yaSSL8Security12get_resumingEv>
 874a0da:	84 c0                	test   %al,%al
 874a0dc:	74 22                	je     874a100 <_ZN5yaSSL16ChangeCipherSpec7ProcessERNS_12input_bufferERNS_3SSLE+0x60>
 874a0de:	89 34 24             	mov    %esi,(%esp)
 874a0e1:	e8 8a 3f 00 00       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 874a0e6:	89 04 24             	mov    %eax,(%esp)
 874a0e9:	e8 62 49 00 00       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 874a0ee:	83 38 01             	cmpl   $0x1,(%eax)
 874a0f1:	74 55                	je     874a148 <_ZN5yaSSL16ChangeCipherSpec7ProcessERNS_12input_bufferERNS_3SSLE+0xa8>
 874a0f3:	83 c4 10             	add    $0x10,%esp
 874a0f6:	5b                   	pop    %ebx
 874a0f7:	5e                   	pop    %esi
 874a0f8:	5d                   	pop    %ebp
 874a0f9:	c3                   	ret
 874a0fa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874a100:	89 34 24             	mov    %esi,(%esp)
 874a103:	e8 68 3f 00 00       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 874a108:	89 04 24             	mov    %eax,(%esp)
 874a10b:	e8 40 49 00 00       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 874a110:	8b 00                	mov    (%eax),%eax
 874a112:	85 c0                	test   %eax,%eax
 874a114:	75 dd                	jne    874a0f3 <_ZN5yaSSL16ChangeCipherSpec7ProcessERNS_12input_bufferERNS_3SSLE+0x53>
 874a116:	89 34 24             	mov    %esi,(%esp)
 874a119:	e8 c2 41 00 00       	call   874e2e0 <_ZN5yaSSL3SSL9useHashesEv>
 874a11e:	89 04 24             	mov    %eax,(%esp)
 874a121:	e8 6a 47 00 00       	call   874e890 <_ZN5yaSSL9sslHashes10use_verifyEv>
 874a126:	8d 93 27 83 99 ff    	lea    -0x667cd9(%ebx),%edx
 874a12c:	89 34 24             	mov    %esi,(%esp)
 874a12f:	89 54 24 08          	mov    %edx,0x8(%esp)
 874a133:	89 44 24 04          	mov    %eax,0x4(%esp)
 874a137:	e8 04 4a 05 00       	call   879eb40 <_ZN5yaSSL13buildFinishedERNS_3SSLERNS_8FinishedEPKh>
 874a13c:	83 c4 10             	add    $0x10,%esp
 874a13f:	5b                   	pop    %ebx
 874a140:	5e                   	pop    %esi
 874a141:	5d                   	pop    %ebp
 874a142:	c3                   	ret
 874a143:	90                   	nop
 874a144:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 874a148:	89 34 24             	mov    %esi,(%esp)
 874a14b:	e8 90 41 00 00       	call   874e2e0 <_ZN5yaSSL3SSL9useHashesEv>
 874a150:	89 04 24             	mov    %eax,(%esp)
 874a153:	e8 38 47 00 00       	call   874e890 <_ZN5yaSSL9sslHashes10use_verifyEv>
 874a158:	8d 93 23 83 99 ff    	lea    -0x667cdd(%ebx),%edx
 874a15e:	89 54 24 08          	mov    %edx,0x8(%esp)
 874a162:	89 34 24             	mov    %esi,(%esp)
 874a165:	89 44 24 04          	mov    %eax,0x4(%esp)
 874a169:	e8 d2 49 05 00       	call   879eb40 <_ZN5yaSSL13buildFinishedERNS_3SSLERNS_8FinishedEPKh>
 874a16e:	eb 83                	jmp    874a0f3 <_ZN5yaSSL16ChangeCipherSpec7ProcessERNS_12input_bufferERNS_3SSLE+0x53>

```

```c
// yaSSL::ChangeCipherSpec::Process @ 0x874a0a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ChangeCipherSpec::Process(yaSSL::input_buffer&, yaSSL::SSL&) */

void __thiscall
yaSSL::ChangeCipherSpec::Process(ChangeCipherSpec *this,input_buffer *param_1,SSL *param_2)

{
  char cVar1;
  Security *pSVar2;
  int iVar3;
  int *piVar4;
  sslHashes *psVar5;
  Finished *pFVar6;
  
  pSVar2 = (Security *)SSL::useSecurity(param_2);
  iVar3 = Security::use_parms(pSVar2);
  *(undefined1 *)(iVar3 + 0x28) = 0;
  pSVar2 = (Security *)SSL::getSecurity(param_2);
  cVar1 = Security::get_resuming(pSVar2);
  if (cVar1 == '\0') {
    pSVar2 = (Security *)SSL::getSecurity(param_2);
    piVar4 = (int *)Security::get_parms(pSVar2);
    if (*piVar4 == 0) {
      psVar5 = (sslHashes *)SSL::useHashes(param_2);
      pFVar6 = (Finished *)sslHashes::use_verify(psVar5);
      buildFinished(param_2,pFVar6,"CLNT");
      return;
    }
  }
  else {
    pSVar2 = (Security *)SSL::getSecurity(param_2);
    piVar4 = (int *)Security::get_parms(pSVar2);
    if (*piVar4 == 1) {
      psVar5 = (sslHashes *)SSL::useHashes(param_2);
      pFVar6 = (Finished *)sslHashes::use_verify(psVar5);
      buildFinished(param_2,pFVar6,"SRVRCLNT");
    }
  }
  return;
}

```

---

## get

```asm
// === 087490a0 yaSSL::ChangeCipherSpec::get  [0x087490a0-0x87490cf] ===
 87490a0:	55                   	push   %ebp
 87490a1:	89 e5                	mov    %esp,%ebp
 87490a3:	53                   	push   %ebx
 87490a4:	83 ec 14             	sub    $0x14,%esp
 87490a7:	8b 45 08             	mov    0x8(%ebp),%eax
 87490aa:	e8 49 9d fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87490af:	81 c3 e9 3a c2 00    	add    $0xc23ae9,%ebx
 87490b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 87490b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 87490bc:	89 04 24             	mov    %eax,(%esp)
 87490bf:	e8 9c ff ff ff       	call   8749060 <_ZN5yaSSLlsERNS_13output_bufferERKNS_16ChangeCipherSpecE>
 87490c4:	83 c4 14             	add    $0x14,%esp
 87490c7:	5b                   	pop    %ebx
 87490c8:	5d                   	pop    %ebp
 87490c9:	c3                   	ret
 87490ca:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::ChangeCipherSpec::get @ 0x87490a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ChangeCipherSpec::get(yaSSL::output_buffer&) const */

void __thiscall yaSSL::ChangeCipherSpec::get(ChangeCipherSpec *this,output_buffer *param_1)

{
  yaSSL::operator<<(param_1,this);
  return;
}

```

---

## get_length

```asm
// === 08746b80 yaSSL::ChangeCipherSpec::get_length  [0x08746b80-0x8746b8f] ===
 8746b80:	55                   	push   %ebp
 8746b81:	b8 01 00 00 00       	mov    $0x1,%eax
 8746b86:	89 e5                	mov    %esp,%ebp
 8746b88:	5d                   	pop    %ebp
 8746b89:	c3                   	ret
 8746b8a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::ChangeCipherSpec::get_length @ 0x8746b80

/* yaSSL::ChangeCipherSpec::get_length() const */

undefined4 yaSSL::ChangeCipherSpec::get_length(void)

{
  return 1;
}

```

---

## get_type

```asm
// === 08746b70 yaSSL::ChangeCipherSpec::get_type  [0x08746b70-0x8746b7f] ===
 8746b70:	55                   	push   %ebp
 8746b71:	b8 14 00 00 00       	mov    $0x14,%eax
 8746b76:	89 e5                	mov    %esp,%ebp
 8746b78:	5d                   	pop    %ebp
 8746b79:	c3                   	ret
 8746b7a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::ChangeCipherSpec::get_type @ 0x8746b70

/* yaSSL::ChangeCipherSpec::get_type() const */

undefined4 yaSSL::ChangeCipherSpec::get_type(void)

{
  return 0x14;
}

```

---

## set

```asm
// === 08747ef0 yaSSL::ChangeCipherSpec::set  [0x08747ef0-0x8747f1f] ===
 8747ef0:	55                   	push   %ebp
 8747ef1:	89 e5                	mov    %esp,%ebp
 8747ef3:	53                   	push   %ebx
 8747ef4:	83 ec 14             	sub    $0x14,%esp
 8747ef7:	8b 45 08             	mov    0x8(%ebp),%eax
 8747efa:	e8 f9 ae fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8747eff:	81 c3 99 4c c2 00    	add    $0xc24c99,%ebx
 8747f05:	89 44 24 04          	mov    %eax,0x4(%esp)
 8747f09:	8b 45 0c             	mov    0xc(%ebp),%eax
 8747f0c:	89 04 24             	mov    %eax,(%esp)
 8747f0f:	e8 9c ff ff ff       	call   8747eb0 <_ZN5yaSSLrsERNS_12input_bufferERNS_16ChangeCipherSpecE>
 8747f14:	83 c4 14             	add    $0x14,%esp
 8747f17:	5b                   	pop    %ebx
 8747f18:	5d                   	pop    %ebp
 8747f19:	c3                   	ret
 8747f1a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::ChangeCipherSpec::set @ 0x8747ef0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ChangeCipherSpec::set(yaSSL::input_buffer&) */

void __thiscall yaSSL::ChangeCipherSpec::set(ChangeCipherSpec *this,input_buffer *param_1)

{
  yaSSL::operator>>(param_1,this);
  return;
}

```

