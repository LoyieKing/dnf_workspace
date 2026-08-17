# yaSSL

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 97

---

## Compress

```asm
// === 0874f090 yaSSL::Compress  [0x0874f090-0x874f09f] ===
 874f090:	55                   	push   %ebp
 874f091:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 874f096:	89 e5                	mov    %esp,%ebp
 874f098:	5d                   	pop    %ebp
 874f099:	c3                   	ret
 874f09a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::Compress @ 0x874f090

/* yaSSL::Compress(unsigned char const*, int, yaSSL::input_buffer&) */

undefined4 yaSSL::Compress(uchar *param_1,int param_2,input_buffer *param_3)

{
  return 0xffffffff;
}

```

---

## CreateAlert

```asm
// === 087477d0 yaSSL::CreateAlert  [0x087477d0-0x874780f] ===
 87477d0:	55                   	push   %ebp
 87477d1:	89 e5                	mov    %esp,%ebp
 87477d3:	53                   	push   %ebx
 87477d4:	83 ec 14             	sub    $0x14,%esp
 87477d7:	e8 1c b6 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87477dc:	81 c3 bc 53 c2 00    	add    $0xc253bc,%ebx
 87477e2:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87477e7:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 87477ee:	e8 ad 94 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87477f3:	8b 93 20 fd ff ff    	mov    -0x2e0(%ebx),%edx
 87477f9:	83 c2 08             	add    $0x8,%edx
 87477fc:	89 10                	mov    %edx,(%eax)
 87477fe:	83 c4 14             	add    $0x14,%esp
 8747801:	5b                   	pop    %ebx
 8747802:	5d                   	pop    %ebp
 8747803:	c3                   	ret
 8747804:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874780a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::CreateAlert @ 0x87477d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateAlert() */

void yaSSL::CreateAlert(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0xc,0);
  *puVar1 = PTR_vtable_0936c8b8 + 8;
  return;
}

```

---

## CreateCertificate

```asm
// === 087476d0 yaSSL::CreateCertificate  [0x087476d0-0x874770f] ===
 87476d0:	55                   	push   %ebp
 87476d1:	89 e5                	mov    %esp,%ebp
 87476d3:	83 ec 18             	sub    $0x18,%esp
 87476d6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87476d9:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87476dc:	e8 17 b7 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87476e1:	81 c3 b7 54 c2 00    	add    $0xc254b7,%ebx
 87476e7:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87476ec:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 87476f3:	e8 a8 95 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87476f8:	89 c6                	mov    %eax,%esi
 87476fa:	89 04 24             	mov    %eax,(%esp)
 87476fd:	e8 0e f6 ff ff       	call   8746d10 <_ZN5yaSSL11CertificateC1Ev>
 8747702:	89 f0                	mov    %esi,%eax
 8747704:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8747707:	8b 75 fc             	mov    -0x4(%ebp),%esi
 874770a:	89 ec                	mov    %ebp,%esp
 874770c:	5d                   	pop    %ebp
 874770d:	c3                   	ret
 874770e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::CreateCertificate @ 0x87476d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateCertificate() */

Certificate * yaSSL::CreateCertificate(void)

{
  Certificate *this;
  
  this = operator_new(0xc,0);
  Certificate::Certificate(this);
  return this;
}

```

---

## CreateCertificateRequest

```asm
// === 08747990 yaSSL::CreateCertificateRequest  [0x08747990-0x87479cf] ===
 8747990:	55                   	push   %ebp
 8747991:	89 e5                	mov    %esp,%ebp
 8747993:	83 ec 18             	sub    $0x18,%esp
 8747996:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8747999:	89 75 fc             	mov    %esi,-0x4(%ebp)
 874799c:	e8 57 b4 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87479a1:	81 c3 f7 51 c2 00    	add    $0xc251f7,%ebx
 87479a7:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87479ac:	c7 04 24 34 00 00 00 	movl   $0x34,(%esp)
 87479b3:	e8 e8 92 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87479b8:	89 c6                	mov    %eax,%esi
 87479ba:	89 04 24             	mov    %eax,(%esp)
 87479bd:	e8 7e ff ff ff       	call   8747940 <_ZN5yaSSL18CertificateRequestC1Ev>
 87479c2:	89 f0                	mov    %esi,%eax
 87479c4:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87479c7:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87479ca:	89 ec                	mov    %ebp,%esp
 87479cc:	5d                   	pop    %ebp
 87479cd:	c3                   	ret
 87479ce:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::CreateCertificateRequest @ 0x8747990

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateCertificateRequest() */

CertificateRequest * yaSSL::CreateCertificateRequest(void)

{
  CertificateRequest *this;
  
  this = operator_new(0x34,0);
  CertificateRequest::CertificateRequest(this);
  return this;
}

```

---

## CreateCertificateVerify

```asm
// === 08747610 yaSSL::CreateCertificateVerify  [0x08747610-0x874764f] ===
 8747610:	55                   	push   %ebp
 8747611:	89 e5                	mov    %esp,%ebp
 8747613:	83 ec 18             	sub    $0x18,%esp
 8747616:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8747619:	89 75 fc             	mov    %esi,-0x4(%ebp)
 874761c:	e8 d7 b7 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8747621:	81 c3 77 55 c2 00    	add    $0xc25577,%ebx
 8747627:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874762c:	c7 04 24 30 00 00 00 	movl   $0x30,(%esp)
 8747633:	e8 68 96 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8747638:	89 c6                	mov    %eax,%esi
 874763a:	89 04 24             	mov    %eax,(%esp)
 874763d:	e8 2e fa ff ff       	call   8747070 <_ZN5yaSSL17CertificateVerifyC1Ev>
 8747642:	89 f0                	mov    %esi,%eax
 8747644:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8747647:	8b 75 fc             	mov    -0x4(%ebp),%esi
 874764a:	89 ec                	mov    %ebp,%esp
 874764c:	5d                   	pop    %ebp
 874764d:	c3                   	ret
 874764e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::CreateCertificateVerify @ 0x8747610

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateCertificateVerify() */

CertificateVerify * yaSSL::CreateCertificateVerify(void)

{
  CertificateVerify *this;
  
  this = operator_new(0x30,0);
  CertificateVerify::CertificateVerify(this);
  return this;
}

```

---

## CreateCipherSpec

```asm
// === 08747810 yaSSL::CreateCipherSpec  [0x08747810-0x874784f] ===
 8747810:	55                   	push   %ebp
 8747811:	89 e5                	mov    %esp,%ebp
 8747813:	83 ec 18             	sub    $0x18,%esp
 8747816:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8747819:	89 75 fc             	mov    %esi,-0x4(%ebp)
 874781c:	e8 d7 b5 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8747821:	81 c3 77 53 c2 00    	add    $0xc25377,%ebx
 8747827:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874782c:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8747833:	e8 68 94 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8747838:	89 c6                	mov    %eax,%esi
 874783a:	89 04 24             	mov    %eax,(%esp)
 874783d:	e8 fe f2 ff ff       	call   8746b40 <_ZN5yaSSL16ChangeCipherSpecC1Ev>
 8747842:	89 f0                	mov    %esi,%eax
 8747844:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8747847:	8b 75 fc             	mov    -0x4(%ebp),%esi
 874784a:	89 ec                	mov    %ebp,%esp
 874784c:	5d                   	pop    %ebp
 874784d:	c3                   	ret
 874784e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::CreateCipherSpec @ 0x8747810

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateCipherSpec() */

ChangeCipherSpec * yaSSL::CreateCipherSpec(void)

{
  ChangeCipherSpec *this;
  
  this = operator_new(8,0);
  ChangeCipherSpec::ChangeCipherSpec(this);
  return this;
}

```

---

## CreateClientHello

```asm
// === 08747aa0 yaSSL::CreateClientHello  [0x08747aa0-0x8747adf] ===
 8747aa0:	55                   	push   %ebp
 8747aa1:	89 e5                	mov    %esp,%ebp
 8747aa3:	83 ec 18             	sub    $0x18,%esp
 8747aa6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8747aa9:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8747aac:	e8 47 b3 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8747ab1:	81 c3 e7 50 c2 00    	add    $0xc250e7,%ebx
 8747ab7:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8747abc:	c7 04 24 d4 00 00 00 	movl   $0xd4,(%esp)
 8747ac3:	e8 d8 91 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8747ac8:	89 c6                	mov    %eax,%esi
 8747aca:	89 04 24             	mov    %eax,(%esp)
 8747acd:	e8 5e ff ff ff       	call   8747a30 <_ZN5yaSSL11ClientHelloC1Ev>
 8747ad2:	89 f0                	mov    %esi,%eax
 8747ad4:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8747ad7:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8747ada:	89 ec                	mov    %ebp,%esp
 8747adc:	5d                   	pop    %ebp
 8747add:	c3                   	ret
 8747ade:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::CreateClientHello @ 0x8747aa0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateClientHello() */

ClientHello * yaSSL::CreateClientHello(void)

{
  ClientHello *this;
  
  this = operator_new(0xd4,0);
  ClientHello::ClientHello(this);
  return this;
}

```

---

## CreateClientKeyExchange

```asm
// === 087475d0 yaSSL::CreateClientKeyExchange  [0x087475d0-0x874760f] ===
 87475d0:	55                   	push   %ebp
 87475d1:	89 e5                	mov    %esp,%ebp
 87475d3:	83 ec 18             	sub    $0x18,%esp
 87475d6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87475d9:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87475dc:	e8 17 b8 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87475e1:	81 c3 b7 55 c2 00    	add    $0xc255b7,%ebx
 87475e7:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87475ec:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 87475f3:	e8 a8 96 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87475f8:	89 c6                	mov    %eax,%esi
 87475fa:	89 04 24             	mov    %eax,(%esp)
 87475fd:	e8 ae fa ff ff       	call   87470b0 <_ZN5yaSSL17ClientKeyExchangeC1Ev>
 8747602:	89 f0                	mov    %esi,%eax
 8747604:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8747607:	8b 75 fc             	mov    -0x4(%ebp),%esi
 874760a:	89 ec                	mov    %ebp,%esp
 874760c:	5d                   	pop    %ebp
 874760d:	c3                   	ret
 874760e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::CreateClientKeyExchange @ 0x87475d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateClientKeyExchange() */

ClientKeyExchange * yaSSL::CreateClientKeyExchange(void)

{
  ClientKeyExchange *this;
  
  this = operator_new(0xc,0);
  ClientKeyExchange::ClientKeyExchange(this);
  return this;
}

```

---

## CreateDHClient

```asm
// === 08747450 yaSSL::CreateDHClient  [0x08747450-0x874748f] ===
 8747450:	55                   	push   %ebp
 8747451:	89 e5                	mov    %esp,%ebp
 8747453:	83 ec 18             	sub    $0x18,%esp
 8747456:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8747459:	89 75 fc             	mov    %esi,-0x4(%ebp)
 874745c:	e8 97 b9 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8747461:	81 c3 37 57 c2 00    	add    $0xc25737,%ebx
 8747467:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874746c:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 8747473:	e8 28 98 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8747478:	89 c6                	mov    %eax,%esi
 874747a:	89 04 24             	mov    %eax,(%esp)
 874747d:	e8 3e f5 ff ff       	call   87469c0 <_ZN5yaSSL25ClientDiffieHellmanPublicC1Ev>
 8747482:	89 f0                	mov    %esi,%eax
 8747484:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8747487:	8b 75 fc             	mov    -0x4(%ebp),%esi
 874748a:	89 ec                	mov    %ebp,%esp
 874748c:	5d                   	pop    %ebp
 874748d:	c3                   	ret
 874748e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::CreateDHClient @ 0x8747450

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateDHClient() */

ClientDiffieHellmanPublic * yaSSL::CreateDHClient(void)

{
  ClientDiffieHellmanPublic *this;
  
  this = operator_new(0x10,0);
  ClientDiffieHellmanPublic::ClientDiffieHellmanPublic(this);
  return this;
}

```

---

## CreateDHServerKEA

```asm
// === 08747510 yaSSL::CreateDHServerKEA  [0x08747510-0x874754f] ===
 8747510:	55                   	push   %ebp
 8747511:	89 e5                	mov    %esp,%ebp
 8747513:	83 ec 18             	sub    $0x18,%esp
 8747516:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8747519:	89 75 fc             	mov    %esi,-0x4(%ebp)
 874751c:	e8 d7 b8 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8747521:	81 c3 77 56 c2 00    	add    $0xc25677,%ebx
 8747527:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874752c:	c7 04 24 28 00 00 00 	movl   $0x28,(%esp)
 8747533:	e8 68 97 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8747538:	89 c6                	mov    %eax,%esi
 874753a:	89 04 24             	mov    %eax,(%esp)
 874753d:	e8 5e f8 ff ff       	call   8746da0 <_ZN5yaSSL9DH_ServerC1Ev>
 8747542:	89 f0                	mov    %esi,%eax
 8747544:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8747547:	8b 75 fc             	mov    -0x4(%ebp),%esi
 874754a:	89 ec                	mov    %ebp,%esp
 874754c:	5d                   	pop    %ebp
 874754d:	c3                   	ret
 874754e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::CreateDHServerKEA @ 0x8747510

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateDHServerKEA() */

DH_Server * yaSSL::CreateDHServerKEA(void)

{
  DH_Server *this;
  
  this = operator_new(0x28,0);
  DH_Server::DH_Server(this);
  return this;
}

```

---

## CreateData

```asm
// === 08747750 yaSSL::CreateData  [0x08747750-0x874778f] ===
 8747750:	55                   	push   %ebp
 8747751:	89 e5                	mov    %esp,%ebp
 8747753:	83 ec 18             	sub    $0x18,%esp
 8747756:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8747759:	89 75 fc             	mov    %esi,-0x4(%ebp)
 874775c:	e8 97 b6 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8747761:	81 c3 37 54 c2 00    	add    $0xc25437,%ebx
 8747767:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874776c:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 8747773:	e8 28 95 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8747778:	89 c6                	mov    %eax,%esi
 874777a:	89 04 24             	mov    %eax,(%esp)
 874777d:	e8 5e f4 ff ff       	call   8746be0 <_ZN5yaSSL4DataC1Ev>
 8747782:	89 f0                	mov    %esi,%eax
 8747784:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8747787:	8b 75 fc             	mov    -0x4(%ebp),%esi
 874778a:	89 ec                	mov    %ebp,%esp
 874778c:	5d                   	pop    %ebp
 874778d:	c3                   	ret
 874778e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::CreateData @ 0x8747750

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateData() */

Data * yaSSL::CreateData(void)

{
  Data *this;
  
  this = operator_new(0x10,0);
  Data::Data(this);
  return this;
}

```

---

## CreateFinished

```asm
// === 08747590 yaSSL::CreateFinished  [0x08747590-0x87475cf] ===
 8747590:	55                   	push   %ebp
 8747591:	89 e5                	mov    %esp,%ebp
 8747593:	83 ec 18             	sub    $0x18,%esp
 8747596:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8747599:	89 75 fc             	mov    %esi,-0x4(%ebp)
 874759c:	e8 57 b8 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87475a1:	81 c3 f7 55 c2 00    	add    $0xc255f7,%ebx
 87475a7:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87475ac:	c7 04 24 2c 00 00 00 	movl   $0x2c,(%esp)
 87475b3:	e8 e8 96 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87475b8:	89 c6                	mov    %eax,%esi
 87475ba:	89 04 24             	mov    %eax,(%esp)
 87475bd:	e8 de fb ff ff       	call   87471a0 <_ZN5yaSSL8FinishedC1Ev>
 87475c2:	89 f0                	mov    %esi,%eax
 87475c4:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87475c7:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87475ca:	89 ec                	mov    %ebp,%esp
 87475cc:	5d                   	pop    %ebp
 87475cd:	c3                   	ret
 87475ce:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::CreateFinished @ 0x8747590

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateFinished() */

Finished * yaSSL::CreateFinished(void)

{
  Finished *this;
  
  this = operator_new(0x2c,0);
  Finished::Finished(this);
  return this;
}

```

---

## CreateFortezzaClient

```asm
// === 08747410 yaSSL::CreateFortezzaClient  [0x08747410-0x874744f] ===
 8747410:	55                   	push   %ebp
 8747411:	89 e5                	mov    %esp,%ebp
 8747413:	53                   	push   %ebx
 8747414:	83 ec 14             	sub    $0x14,%esp
 8747417:	e8 dc b9 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874741c:	81 c3 7c 57 c2 00    	add    $0xc2577c,%ebx
 8747422:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8747427:	c7 04 24 bc 01 00 00 	movl   $0x1bc,(%esp)
 874742e:	e8 6d 98 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8747433:	8b 93 f4 fb ff ff    	mov    -0x40c(%ebx),%edx
 8747439:	83 c2 08             	add    $0x8,%edx
 874743c:	89 10                	mov    %edx,(%eax)
 874743e:	83 c4 14             	add    $0x14,%esp
 8747441:	5b                   	pop    %ebx
 8747442:	5d                   	pop    %ebp
 8747443:	c3                   	ret
 8747444:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874744a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::CreateFortezzaClient @ 0x8747410

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateFortezzaClient() */

void yaSSL::CreateFortezzaClient(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x1bc,0);
  *puVar1 = PTR_vtable_0936c78c + 8;
  return;
}

```

---

## CreateFortezzaServerKEA

```asm
// === 087474d0 yaSSL::CreateFortezzaServerKEA  [0x087474d0-0x874750f] ===
 87474d0:	55                   	push   %ebp
 87474d1:	89 e5                	mov    %esp,%ebp
 87474d3:	53                   	push   %ebx
 87474d4:	83 ec 14             	sub    $0x14,%esp
 87474d7:	e8 1c b9 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87474dc:	81 c3 bc 56 c2 00    	add    $0xc256bc,%ebx
 87474e2:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87474e7:	c7 04 24 84 00 00 00 	movl   $0x84,(%esp)
 87474ee:	e8 ad 97 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87474f3:	8b 93 3c fc ff ff    	mov    -0x3c4(%ebx),%edx
 87474f9:	83 c2 08             	add    $0x8,%edx
 87474fc:	89 10                	mov    %edx,(%eax)
 87474fe:	83 c4 14             	add    $0x14,%esp
 8747501:	5b                   	pop    %ebx
 8747502:	5d                   	pop    %ebp
 8747503:	c3                   	ret
 8747504:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874750a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::CreateFortezzaServerKEA @ 0x87474d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateFortezzaServerKEA() */

void yaSSL::CreateFortezzaServerKEA(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x84,0);
  *puVar1 = PTR_vtable_0936c7d4 + 8;
  return;
}

```

---

## CreateHandShake

```asm
// === 08747790 yaSSL::CreateHandShake  [0x08747790-0x87477cf] ===
 8747790:	55                   	push   %ebp
 8747791:	89 e5                	mov    %esp,%ebp
 8747793:	53                   	push   %ebx
 8747794:	83 ec 14             	sub    $0x14,%esp
 8747797:	e8 5c b6 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874779c:	81 c3 fc 53 c2 00    	add    $0xc253fc,%ebx
 87477a2:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87477a7:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 87477ae:	e8 ed 94 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87477b3:	8b 93 30 fc ff ff    	mov    -0x3d0(%ebx),%edx
 87477b9:	83 c2 08             	add    $0x8,%edx
 87477bc:	89 10                	mov    %edx,(%eax)
 87477be:	83 c4 14             	add    $0x14,%esp
 87477c1:	5b                   	pop    %ebx
 87477c2:	5d                   	pop    %ebp
 87477c3:	c3                   	ret
 87477c4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87477ca:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::CreateHandShake @ 0x8747790

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateHandShake() */

void yaSSL::CreateHandShake(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0xc,0);
  *puVar1 = PTR_vtable_0936c7c8 + 8;
  return;
}

```

---

## CreateHelloRequest

```asm
// === 08747710 yaSSL::CreateHelloRequest  [0x08747710-0x874774f] ===
 8747710:	55                   	push   %ebp
 8747711:	89 e5                	mov    %esp,%ebp
 8747713:	53                   	push   %ebx
 8747714:	83 ec 14             	sub    $0x14,%esp
 8747717:	e8 dc b6 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874771c:	81 c3 7c 54 c2 00    	add    $0xc2547c,%ebx
 8747722:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8747727:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 874772e:	e8 6d 95 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8747733:	8b 93 c8 fb ff ff    	mov    -0x438(%ebx),%edx
 8747739:	83 c2 08             	add    $0x8,%edx
 874773c:	89 10                	mov    %edx,(%eax)
 874773e:	83 c4 14             	add    $0x14,%esp
 8747741:	5b                   	pop    %ebx
 8747742:	5d                   	pop    %ebp
 8747743:	c3                   	ret
 8747744:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874774a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::CreateHelloRequest @ 0x8747710

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateHelloRequest() */

void yaSSL::CreateHelloRequest(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(8,0);
  *puVar1 = PTR_vtable_0936c760 + 8;
  return;
}

```

---

## CreateRSAClient

```asm
// === 08747490 yaSSL::CreateRSAClient  [0x08747490-0x87474cf] ===
 8747490:	55                   	push   %ebp
 8747491:	89 e5                	mov    %esp,%ebp
 8747493:	83 ec 18             	sub    $0x18,%esp
 8747496:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8747499:	89 75 fc             	mov    %esi,-0x4(%ebp)
 874749c:	e8 57 b9 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87474a1:	81 c3 f7 56 c2 00    	add    $0xc256f7,%ebx
 87474a7:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87474ac:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 87474b3:	e8 e8 97 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87474b8:	89 c6                	mov    %eax,%esi
 87474ba:	89 04 24             	mov    %eax,(%esp)
 87474bd:	e8 ae f4 ff ff       	call   8746970 <_ZN5yaSSL24EncryptedPreMasterSecretC1Ev>
 87474c2:	89 f0                	mov    %esi,%eax
 87474c4:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87474c7:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87474ca:	89 ec                	mov    %ebp,%esp
 87474cc:	5d                   	pop    %ebp
 87474cd:	c3                   	ret
 87474ce:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::CreateRSAClient @ 0x8747490

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateRSAClient() */

EncryptedPreMasterSecret * yaSSL::CreateRSAClient(void)

{
  EncryptedPreMasterSecret *this;
  
  this = operator_new(0xc,0);
  EncryptedPreMasterSecret::EncryptedPreMasterSecret(this);
  return this;
}

```

---

## CreateRSAServerKEA

```asm
// === 08747550 yaSSL::CreateRSAServerKEA  [0x08747550-0x874758f] ===
 8747550:	55                   	push   %ebp
 8747551:	89 e5                	mov    %esp,%ebp
 8747553:	53                   	push   %ebx
 8747554:	83 ec 14             	sub    $0x14,%esp
 8747557:	e8 9c b8 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874755c:	81 c3 3c 56 c2 00    	add    $0xc2563c,%ebx
 8747562:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8747567:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 874756e:	e8 2d 97 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8747573:	8b 93 d8 fc ff ff    	mov    -0x328(%ebx),%edx
 8747579:	83 c2 08             	add    $0x8,%edx
 874757c:	89 10                	mov    %edx,(%eax)
 874757e:	83 c4 14             	add    $0x14,%esp
 8747581:	5b                   	pop    %ebx
 8747582:	5d                   	pop    %ebp
 8747583:	c3                   	ret
 8747584:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874758a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::CreateRSAServerKEA @ 0x8747550

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateRSAServerKEA() */

void yaSSL::CreateRSAServerKEA(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x10,0);
  *puVar1 = PTR_vtable_0936c870 + 8;
  return;
}

```

---

## CreateServerHello

```asm
// === 08747bf0 yaSSL::CreateServerHello  [0x08747bf0-0x8747c2f] ===
 8747bf0:	55                   	push   %ebp
 8747bf1:	89 e5                	mov    %esp,%ebp
 8747bf3:	83 ec 18             	sub    $0x18,%esp
 8747bf6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8747bf9:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8747bfc:	e8 f7 b1 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8747c01:	81 c3 97 4f c2 00    	add    $0xc24f97,%ebx
 8747c07:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8747c0c:	c7 04 24 54 00 00 00 	movl   $0x54,(%esp)
 8747c13:	e8 88 90 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8747c18:	89 c6                	mov    %eax,%esi
 8747c1a:	89 04 24             	mov    %eax,(%esp)
 8747c1d:	e8 3e ff ff ff       	call   8747b60 <_ZN5yaSSL11ServerHelloC1Ev>
 8747c22:	89 f0                	mov    %esi,%eax
 8747c24:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8747c27:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8747c2a:	89 ec                	mov    %ebp,%esp
 8747c2c:	5d                   	pop    %ebp
 8747c2d:	c3                   	ret
 8747c2e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::CreateServerHello @ 0x8747bf0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateServerHello() */

ServerHello * yaSSL::CreateServerHello(void)

{
  ServerHello *this;
  
  this = operator_new(0x54,0);
  ServerHello::ServerHello(this);
  return this;
}

```

---

## CreateServerHelloDone

```asm
// === 08747650 yaSSL::CreateServerHelloDone  [0x08747650-0x874768f] ===
 8747650:	55                   	push   %ebp
 8747651:	89 e5                	mov    %esp,%ebp
 8747653:	83 ec 18             	sub    $0x18,%esp
 8747656:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8747659:	89 75 fc             	mov    %esi,-0x4(%ebp)
 874765c:	e8 97 b7 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8747661:	81 c3 37 55 c2 00    	add    $0xc25537,%ebx
 8747667:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874766c:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8747673:	e8 28 96 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8747678:	89 c6                	mov    %eax,%esi
 874767a:	89 04 24             	mov    %eax,(%esp)
 874767d:	e8 0e f8 ff ff       	call   8746e90 <_ZN5yaSSL15ServerHelloDoneC1Ev>
 8747682:	89 f0                	mov    %esi,%eax
 8747684:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8747687:	8b 75 fc             	mov    -0x4(%ebp),%esi
 874768a:	89 ec                	mov    %ebp,%esp
 874768c:	5d                   	pop    %ebp
 874768d:	c3                   	ret
 874768e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::CreateServerHelloDone @ 0x8747650

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateServerHelloDone() */

ServerHelloDone * yaSSL::CreateServerHelloDone(void)

{
  ServerHelloDone *this;
  
  this = operator_new(8,0);
  ServerHelloDone::ServerHelloDone(this);
  return this;
}

```

---

## CreateServerKeyExchange

```asm
// === 08747690 yaSSL::CreateServerKeyExchange  [0x08747690-0x87476cf] ===
 8747690:	55                   	push   %ebp
 8747691:	89 e5                	mov    %esp,%ebp
 8747693:	83 ec 18             	sub    $0x18,%esp
 8747696:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8747699:	89 75 fc             	mov    %esi,-0x4(%ebp)
 874769c:	e8 57 b7 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87476a1:	81 c3 f7 54 c2 00    	add    $0xc254f7,%ebx
 87476a7:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87476ac:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 87476b3:	e8 e8 95 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87476b8:	89 c6                	mov    %eax,%esi
 87476ba:	89 04 24             	mov    %eax,(%esp)
 87476bd:	e8 7e f8 ff ff       	call   8746f40 <_ZN5yaSSL17ServerKeyExchangeC1Ev>
 87476c2:	89 f0                	mov    %esi,%eax
 87476c4:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87476c7:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87476ca:	89 ec                	mov    %ebp,%esp
 87476cc:	5d                   	pop    %ebp
 87476cd:	c3                   	ret
 87476ce:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::CreateServerKeyExchange @ 0x8747690

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateServerKeyExchange() */

ServerKeyExchange * yaSSL::CreateServerKeyExchange(void)

{
  ServerKeyExchange *this;
  
  this = operator_new(0xc,0);
  ServerKeyExchange::ServerKeyExchange(this);
  return this;
}

```

---

## DeCompress

```asm
// === 0874f0a0 yaSSL::DeCompress  [0x0874f0a0-0x874f0af] ===
 874f0a0:	55                   	push   %ebp
 874f0a1:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 874f0a6:	89 e5                	mov    %esp,%ebp
 874f0a8:	5d                   	pop    %ebp
 874f0a9:	c3                   	ret
 874f0aa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::DeCompress @ 0x874f0a0

/* yaSSL::DeCompress(yaSSL::input_buffer&, int, yaSSL::input_buffer&) */

undefined4 yaSSL::DeCompress(input_buffer *param_1,int param_2,input_buffer *param_3)

{
  return 0xffffffff;
}

```

---

## DoProcessReply

```asm
// === 0879de30 yaSSL::DoProcessReply  [0x0879de30-0x879e38f] ===
 879de30:	55                   	push   %ebp
 879de31:	89 e5                	mov    %esp,%ebp
 879de33:	57                   	push   %edi
 879de34:	56                   	push   %esi
 879de35:	53                   	push   %ebx
 879de36:	e8 bd 4f f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879de3b:	81 c3 5d ed bc 00    	add    $0xbced5d,%ebx
 879de41:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 879de47:	8b 7d 08             	mov    0x8(%ebp),%edi
 879de4a:	89 3c 24             	mov    %edi,(%esp)
 879de4d:	e8 9e 04 fb ff       	call   874e2f0 <_ZN5yaSSL3SSL9useSocketEv>
 879de52:	89 04 24             	mov    %eax,(%esp)
 879de55:	e8 b6 37 00 00       	call   87a1610 <_ZN5yaSSL6Socket4waitEv>
 879de5a:	84 c0                	test   %al,%al
 879de5c:	0f 84 1e 02 00 00    	je     879e080 <_ZN5yaSSL14DoProcessReplyERNS_3SSLE+0x250>
 879de62:	89 3c 24             	mov    %edi,(%esp)
 879de65:	e8 36 02 fb ff       	call   874e0a0 <_ZNK5yaSSL3SSL9getSocketEv>
 879de6a:	89 04 24             	mov    %eax,(%esp)
 879de6d:	e8 4e 38 00 00       	call   87a16c0 <_ZNK5yaSSL6Socket9get_readyEv>
 879de72:	89 c6                	mov    %eax,%esi
 879de74:	b8 01 00 00 00       	mov    $0x1,%eax
 879de79:	85 f6                	test   %esi,%esi
 879de7b:	75 0b                	jne    879de88 <_ZN5yaSSL14DoProcessReplyERNS_3SSLE+0x58>
 879de7d:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 879de83:	5b                   	pop    %ebx
 879de84:	5e                   	pop    %esi
 879de85:	5f                   	pop    %edi
 879de86:	5d                   	pop    %ebp
 879de87:	c3                   	ret
 879de88:	89 3c 24             	mov    %edi,(%esp)
 879de8b:	e8 90 01 fb ff       	call   874e020 <_ZN5yaSSL3SSL10useBuffersEv>
 879de90:	89 04 24             	mov    %eax,(%esp)
 879de93:	e8 68 0a fb ff       	call   874e900 <_ZN5yaSSL7Buffers12TakeRawInputEv>
 879de98:	85 c0                	test   %eax,%eax
 879de9a:	0f 84 fd 01 00 00    	je     879e09d <_ZN5yaSSL14DoProcessReplyERNS_3SSLE+0x26d>
 879dea0:	89 04 24             	mov    %eax,(%esp)
 879dea3:	89 45 90             	mov    %eax,-0x70(%ebp)
 879dea6:	e8 05 8f ff ff       	call   8796db0 <_ZNK5yaSSL12input_buffer8get_sizeEv>
 879deab:	89 45 b0             	mov    %eax,-0x50(%ebp)
 879deae:	01 f0                	add    %esi,%eax
 879deb0:	89 44 24 04          	mov    %eax,0x4(%esp)
 879deb4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 879deb7:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 879deba:	89 04 24             	mov    %eax,(%esp)
 879debd:	e8 1e 94 ff ff       	call   87972e0 <_ZN5yaSSL12input_bufferC1Ej>
 879dec2:	8b 4d b0             	mov    -0x50(%ebp),%ecx
 879dec5:	8b 55 90             	mov    -0x70(%ebp),%edx
 879dec8:	85 c9                	test   %ecx,%ecx
 879deca:	74 39                	je     879df05 <_ZN5yaSSL14DoProcessReplyERNS_3SSLE+0xd5>
 879decc:	89 14 24             	mov    %edx,(%esp)
 879decf:	e8 5c 8e ff ff       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 879ded4:	8b 4d b0             	mov    -0x50(%ebp),%ecx
 879ded7:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 879dedb:	89 44 24 04          	mov    %eax,0x4(%esp)
 879dedf:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 879dee2:	89 04 24             	mov    %eax,(%esp)
 879dee5:	e8 c6 91 ff ff       	call   87970b0 <_ZN5yaSSL12input_buffer6assignEPKhj>
 879deea:	8b 55 90             	mov    -0x70(%ebp),%edx
 879deed:	89 14 24             	mov    %edx,(%esp)
 879def0:	e8 6b 94 ff ff       	call   8797360 <_ZN5yaSSL12input_bufferD1Ev>
 879def5:	8b 55 90             	mov    -0x70(%ebp),%edx
 879def8:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879defd:	89 14 24             	mov    %edx,(%esp)
 879df00:	e8 1b 29 fb ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 879df05:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 879df08:	89 14 24             	mov    %edx,(%esp)
 879df0b:	e8 20 8e ff ff       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 879df10:	89 3c 24             	mov    %edi,(%esp)
 879df13:	89 45 ac             	mov    %eax,-0x54(%ebp)
 879df16:	e8 d5 03 fb ff       	call   874e2f0 <_ZN5yaSSL3SSL9useSocketEv>
 879df1b:	8b 55 ac             	mov    -0x54(%ebp),%edx
 879df1e:	03 55 b0             	add    -0x50(%ebp),%edx
 879df21:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 879df28:	00 
 879df29:	89 74 24 08          	mov    %esi,0x8(%esp)
 879df2d:	89 54 24 04          	mov    %edx,0x4(%esp)
 879df31:	89 04 24             	mov    %eax,(%esp)
 879df34:	e8 57 36 00 00       	call   87a1590 <_ZN5yaSSL6Socket7receiveEPhji>
 879df39:	83 f8 ff             	cmp    $0xffffffff,%eax
 879df3c:	0f 84 79 02 00 00    	je     879e1bb <_ZN5yaSSL14DoProcessReplyERNS_3SSLE+0x38b>
 879df42:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 879df45:	89 44 24 04          	mov    %eax,0x4(%esp)
 879df49:	89 0c 24             	mov    %ecx,(%esp)
 879df4c:	e8 ff 8d ff ff       	call   8796d50 <_ZN5yaSSL12input_buffer8add_sizeEj>
 879df51:	89 3c 24             	mov    %edi,(%esp)
 879df54:	e8 27 32 fb ff       	call   8751180 <_ZNK5yaSSL3SSL10getFactoryEv>
 879df59:	89 04 24             	mov    %eax,(%esp)
 879df5c:	e8 1f 00 fb ff       	call   874df80 <_ZNK5yaSSL10sslFactory10getMessageEv>
 879df61:	89 3c 24             	mov    %edi,(%esp)
 879df64:	89 45 b0             	mov    %eax,-0x50(%ebp)
 879df67:	e8 04 01 fb ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 879df6c:	89 04 24             	mov    %eax,(%esp)
 879df6f:	e8 dc 0a fb ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 879df74:	8b 10                	mov    (%eax),%edx
 879df76:	85 d2                	test   %edx,%edx
 879df78:	0f 84 54 02 00 00    	je     879e1d2 <_ZN5yaSSL14DoProcessReplyERNS_3SSLE+0x3a2>
 879df7e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 879df81:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 879df84:	8d 4d c0             	lea    -0x40(%ebp),%ecx
 879df87:	c7 45 a8 00 00 00 00 	movl   $0x0,-0x58(%ebp)
 879df8e:	89 45 94             	mov    %eax,-0x6c(%ebp)
 879df91:	89 55 98             	mov    %edx,-0x68(%ebp)
 879df94:	89 4d ac             	mov    %ecx,-0x54(%ebp)
 879df97:	89 7d 9c             	mov    %edi,-0x64(%ebp)
 879df9a:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 879df9d:	89 04 24             	mov    %eax,(%esp)
 879dfa0:	e8 cb 8e ff ff       	call   8796e70 <_ZN5yaSSL12input_buffer3eofEv>
 879dfa5:	84 c0                	test   %al,%al
 879dfa7:	0f 85 6e 02 00 00    	jne    879e21b <_ZN5yaSSL14DoProcessReplyERNS_3SSLE+0x3eb>
 879dfad:	8b 75 98             	mov    -0x68(%ebp),%esi
 879dfb0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 879dfb7:	00 
 879dfb8:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 879dfbf:	00 
 879dfc0:	89 34 24             	mov    %esi,(%esp)
 879dfc3:	e8 88 89 fa ff       	call   8746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>
 879dfc8:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 879dfcb:	89 04 24             	mov    %eax,(%esp)
 879dfce:	e8 ed 8d ff ff       	call   8796dc0 <_ZNK5yaSSL12input_buffer13get_remainingEv>
 879dfd3:	83 f8 04             	cmp    $0x4,%eax
 879dfd6:	0f 87 df 00 00 00    	ja     879e0bb <_ZN5yaSSL14DoProcessReplyERNS_3SSLE+0x28b>
 879dfdc:	8b 7d 9c             	mov    -0x64(%ebp),%edi
 879dfdf:	31 f6                	xor    %esi,%esi
 879dfe1:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 879dfe4:	89 0c 24             	mov    %ecx,(%esp)
 879dfe7:	e8 d4 8d ff ff       	call   8796dc0 <_ZNK5yaSSL12input_buffer13get_remainingEv>
 879dfec:	8d 0c 30             	lea    (%eax,%esi,1),%ecx
 879dfef:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 879dff2:	89 4d 90             	mov    %ecx,-0x70(%ebp)
 879dff5:	89 04 24             	mov    %eax,(%esp)
 879dff8:	e8 33 8d ff ff       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 879dffd:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 879e000:	89 14 24             	mov    %edx,(%esp)
 879e003:	89 45 ac             	mov    %eax,-0x54(%ebp)
 879e006:	e8 95 8d ff ff       	call   8796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>
 879e00b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879e010:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 879e017:	89 45 b0             	mov    %eax,-0x50(%ebp)
 879e01a:	e8 81 2c fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 879e01f:	8b 4d 90             	mov    -0x70(%ebp),%ecx
 879e022:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 879e026:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879e02a:	89 c2                	mov    %eax,%edx
 879e02c:	8b 45 b0             	mov    -0x50(%ebp),%eax
 879e02f:	89 14 24             	mov    %edx,(%esp)
 879e032:	89 55 90             	mov    %edx,-0x70(%ebp)
 879e035:	29 f0                	sub    %esi,%eax
 879e037:	8b 75 ac             	mov    -0x54(%ebp),%esi
 879e03a:	01 c6                	add    %eax,%esi
 879e03c:	89 74 24 08          	mov    %esi,0x8(%esp)
 879e040:	e8 2b 92 ff ff       	call   8797270 <_ZN5yaSSL12input_bufferC1EjPKhj>
 879e045:	89 3c 24             	mov    %edi,(%esp)
 879e048:	e8 d3 ff fa ff       	call   874e020 <_ZN5yaSSL3SSL10useBuffersEv>
 879e04d:	8b 55 90             	mov    -0x70(%ebp),%edx
 879e050:	89 54 24 04          	mov    %edx,0x4(%esp)
 879e054:	89 04 24             	mov    %eax,(%esp)
 879e057:	e8 94 08 fb ff       	call   874e8f0 <_ZN5yaSSL7Buffers11SetRawInputEPNS_12input_bufferE>
 879e05c:	b8 01 00 00 00       	mov    $0x1,%eax
 879e061:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 879e064:	89 45 90             	mov    %eax,-0x70(%ebp)
 879e067:	89 14 24             	mov    %edx,(%esp)
 879e06a:	e8 f1 92 ff ff       	call   8797360 <_ZN5yaSSL12input_bufferD1Ev>
 879e06f:	8b 45 90             	mov    -0x70(%ebp),%eax
 879e072:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 879e078:	5b                   	pop    %ebx
 879e079:	5e                   	pop    %esi
 879e07a:	5f                   	pop    %edi
 879e07b:	5d                   	pop    %ebp
 879e07c:	c3                   	ret
 879e07d:	8d 76 00             	lea    0x0(%esi),%esi
 879e080:	89 3c 24             	mov    %edi,(%esp)
 879e083:	c7 44 24 04 72 00 00 	movl   $0x72,0x4(%esp)
 879e08a:	00 
 879e08b:	e8 40 ff fa ff       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 879e090:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 879e096:	31 c0                	xor    %eax,%eax
 879e098:	5b                   	pop    %ebx
 879e099:	5e                   	pop    %esi
 879e09a:	5f                   	pop    %edi
 879e09b:	5d                   	pop    %ebp
 879e09c:	c3                   	ret
 879e09d:	8d 4d d0             	lea    -0x30(%ebp),%ecx
 879e0a0:	89 74 24 04          	mov    %esi,0x4(%esp)
 879e0a4:	89 4d b4             	mov    %ecx,-0x4c(%ebp)
 879e0a7:	89 0c 24             	mov    %ecx,(%esp)
 879e0aa:	e8 31 92 ff ff       	call   87972e0 <_ZN5yaSSL12input_bufferC1Ej>
 879e0af:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 879e0b6:	e9 4a fe ff ff       	jmp    879df05 <_ZN5yaSSL14DoProcessReplyERNS_3SSLE+0xd5>
 879e0bb:	8b 55 94             	mov    -0x6c(%ebp),%edx
 879e0be:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 879e0c1:	89 54 24 04          	mov    %edx,0x4(%esp)
 879e0c5:	89 0c 24             	mov    %ecx,(%esp)
 879e0c8:	e8 63 aa fa ff       	call   8748b30 <_ZN5yaSSLrsERNS_12input_bufferERNS_17RecordLayerHeaderE>
 879e0cd:	8b 75 94             	mov    -0x6c(%ebp),%esi
 879e0d0:	8b 45 9c             	mov    -0x64(%ebp),%eax
 879e0d3:	89 74 24 04          	mov    %esi,0x4(%esp)
 879e0d7:	89 04 24             	mov    %eax,(%esp)
 879e0da:	e8 21 01 fb ff       	call   874e200 <_ZN5yaSSL3SSL11verifyStateERKNS_17RecordLayerHeaderE>
 879e0df:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 879e0e2:	0f b7 75 e6          	movzwl -0x1a(%ebp),%esi
 879e0e6:	89 14 24             	mov    %edx,(%esp)
 879e0e9:	e8 d2 8c ff ff       	call   8796dc0 <_ZNK5yaSSL12input_buffer13get_remainingEv>
 879e0ee:	39 c6                	cmp    %eax,%esi
 879e0f0:	0f 87 2c 01 00 00    	ja     879e222 <_ZN5yaSSL14DoProcessReplyERNS_3SSLE+0x3f2>
 879e0f6:	8b 7d 9c             	mov    -0x64(%ebp),%edi
 879e0f9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 879e100:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 879e103:	89 0c 24             	mov    %ecx,(%esp)
 879e106:	e8 95 8c ff ff       	call   8796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>
 879e10b:	0f b7 55 e6          	movzwl -0x1a(%ebp),%edx
 879e10f:	8b 75 a8             	mov    -0x58(%ebp),%esi
 879e112:	8d 54 16 05          	lea    0x5(%esi,%edx,1),%edx
 879e116:	39 d0                	cmp    %edx,%eax
 879e118:	0f 83 50 02 00 00    	jae    879e36e <_ZN5yaSSL14DoProcessReplyERNS_3SSLE+0x53e>
 879e11e:	89 3c 24             	mov    %edi,(%esp)
 879e121:	e8 4a ff fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 879e126:	89 04 24             	mov    %eax,(%esp)
 879e129:	e8 22 09 fb ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 879e12e:	80 78 28 00          	cmpb   $0x0,0x28(%eax)
 879e132:	0f 84 f8 00 00 00    	je     879e230 <_ZN5yaSSL14DoProcessReplyERNS_3SSLE+0x400>
 879e138:	8b 55 b0             	mov    -0x50(%ebp),%edx
 879e13b:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 879e13e:	8b 02                	mov    (%edx),%eax
 879e140:	8b 52 04             	mov    0x4(%edx),%edx
 879e143:	39 d0                	cmp    %edx,%eax
 879e145:	75 14                	jne    879e15b <_ZN5yaSSL14DoProcessReplyERNS_3SSLE+0x32b>
 879e147:	e9 fc 01 00 00       	jmp    879e348 <_ZN5yaSSL14DoProcessReplyERNS_3SSLE+0x518>
 879e14c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 879e150:	83 c0 08             	add    $0x8,%eax
 879e153:	39 c2                	cmp    %eax,%edx
 879e155:	0f 84 ed 01 00 00    	je     879e348 <_ZN5yaSSL14DoProcessReplyERNS_3SSLE+0x518>
 879e15b:	3b 08                	cmp    (%eax),%ecx
 879e15d:	8d 76 00             	lea    0x0(%esi),%esi
 879e160:	75 ee                	jne    879e150 <_ZN5yaSSL14DoProcessReplyERNS_3SSLE+0x320>
 879e162:	ff 50 04             	call   *0x4(%eax)
 879e165:	85 c0                	test   %eax,%eax
 879e167:	89 c6                	mov    %eax,%esi
 879e169:	0f 84 d9 01 00 00    	je     879e348 <_ZN5yaSSL14DoProcessReplyERNS_3SSLE+0x518>
 879e16f:	89 44 24 04          	mov    %eax,0x4(%esp)
 879e173:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 879e176:	89 04 24             	mov    %eax,(%esp)
 879e179:	e8 b2 88 fa ff       	call   8746a30 <_ZN5yaSSLrsERNS_12input_bufferERNS_7MessageE>
 879e17e:	8b 06                	mov    (%esi),%eax
 879e180:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 879e183:	89 7c 24 08          	mov    %edi,0x8(%esp)
 879e187:	89 34 24             	mov    %esi,(%esp)
 879e18a:	89 54 24 04          	mov    %edx,0x4(%esp)
 879e18e:	ff 50 08             	call   *0x8(%eax)
 879e191:	89 3c 24             	mov    %edi,(%esp)
 879e194:	e8 17 ff fa ff       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 879e199:	85 c0                	test   %eax,%eax
 879e19b:	0f 85 d5 01 00 00    	jne    879e376 <_ZN5yaSSL14DoProcessReplyERNS_3SSLE+0x546>
 879e1a1:	8b 06                	mov    (%esi),%eax
 879e1a3:	89 34 24             	mov    %esi,(%esp)
 879e1a6:	ff 50 14             	call   *0x14(%eax)
 879e1a9:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879e1ae:	89 34 24             	mov    %esi,(%esp)
 879e1b1:	e8 6a 26 fb ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 879e1b6:	e9 45 ff ff ff       	jmp    879e100 <_ZN5yaSSL14DoProcessReplyERNS_3SSLE+0x2d0>
 879e1bb:	c7 44 24 04 72 00 00 	movl   $0x72,0x4(%esp)
 879e1c2:	00 
 879e1c3:	89 3c 24             	mov    %edi,(%esp)
 879e1c6:	e8 05 fe fa ff       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 879e1cb:	31 c0                	xor    %eax,%eax
 879e1cd:	e9 8f fe ff ff       	jmp    879e061 <_ZN5yaSSL14DoProcessReplyERNS_3SSLE+0x231>
 879e1d2:	89 3c 24             	mov    %edi,(%esp)
 879e1d5:	e8 a6 fe fa ff       	call   874e080 <_ZNK5yaSSL3SSL9getStatesEv>
 879e1da:	89 04 24             	mov    %eax,(%esp)
 879e1dd:	e8 ce fc fa ff       	call   874deb0 <_ZNK5yaSSL6States9getServerEv>
 879e1e2:	8b 00                	mov    (%eax),%eax
 879e1e4:	85 c0                	test   %eax,%eax
 879e1e6:	0f 85 92 fd ff ff    	jne    879df7e <_ZN5yaSSL14DoProcessReplyERNS_3SSLE+0x14e>
 879e1ec:	8b 75 b4             	mov    -0x4c(%ebp),%esi
 879e1ef:	89 34 24             	mov    %esi,(%esp)
 879e1f2:	e8 89 8c ff ff       	call   8796e80 <_ZNK5yaSSL12input_buffer4peekEv>
 879e1f7:	3c 16                	cmp    $0x16,%al
 879e1f9:	0f 84 7f fd ff ff    	je     879df7e <_ZN5yaSSL14DoProcessReplyERNS_3SSLE+0x14e>
 879e1ff:	89 7c 24 04          	mov    %edi,0x4(%esp)
 879e203:	89 34 24             	mov    %esi,(%esp)
 879e206:	e8 d5 f5 ff ff       	call   879d7e0 <_ZN5yaSSL21ProcessOldClientHelloERNS_12input_bufferERNS_3SSLE>
 879e20b:	89 3c 24             	mov    %edi,(%esp)
 879e20e:	e8 9d fe fa ff       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 879e213:	85 c0                	test   %eax,%eax
 879e215:	0f 84 63 fd ff ff    	je     879df7e <_ZN5yaSSL14DoProcessReplyERNS_3SSLE+0x14e>
 879e21b:	31 c0                	xor    %eax,%eax
 879e21d:	e9 3f fe ff ff       	jmp    879e061 <_ZN5yaSSL14DoProcessReplyERNS_3SSLE+0x231>
 879e222:	8b 7d 9c             	mov    -0x64(%ebp),%edi
 879e225:	be 05 00 00 00       	mov    $0x5,%esi
 879e22a:	e9 b2 fd ff ff       	jmp    879dfe1 <_ZN5yaSSL14DoProcessReplyERNS_3SSLE+0x1b1>
 879e22f:	90                   	nop
 879e230:	0f b7 55 e6          	movzwl -0x1a(%ebp),%edx
 879e234:	8b 4d ac             	mov    -0x54(%ebp),%ecx
 879e237:	66 89 55 86          	mov    %dx,-0x7a(%ebp)
 879e23b:	0f b7 d2             	movzwl %dx,%edx
 879e23e:	89 54 24 04          	mov    %edx,0x4(%esp)
 879e242:	89 55 90             	mov    %edx,-0x70(%ebp)
 879e245:	89 0c 24             	mov    %ecx,(%esp)
 879e248:	e8 93 90 ff ff       	call   87972e0 <_ZN5yaSSL12input_bufferC1Ej>
 879e24d:	8b 75 b4             	mov    -0x4c(%ebp),%esi
 879e250:	89 34 24             	mov    %esi,(%esp)
 879e253:	e8 d8 8a ff ff       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 879e258:	89 c6                	mov    %eax,%esi
 879e25a:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 879e25d:	89 04 24             	mov    %eax,(%esp)
 879e260:	e8 3b 8b ff ff       	call   8796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>
 879e265:	89 3c 24             	mov    %edi,(%esp)
 879e268:	8d 04 06             	lea    (%esi,%eax,1),%eax
 879e26b:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 879e26e:	e8 3d 00 fb ff       	call   874e2b0 <_ZN5yaSSL3SSL9useCryptoEv>
 879e273:	89 04 24             	mov    %eax,(%esp)
 879e276:	e8 35 05 fb ff       	call   874e7b0 <_ZN5yaSSL6Crypto10use_cipherEv>
 879e27b:	8b 4d ac             	mov    -0x54(%ebp),%ecx
 879e27e:	89 c6                	mov    %eax,%esi
 879e280:	8b 00                	mov    (%eax),%eax
 879e282:	8b 40 04             	mov    0x4(%eax),%eax
 879e285:	89 0c 24             	mov    %ecx,(%esp)
 879e288:	89 45 a0             	mov    %eax,-0x60(%ebp)
 879e28b:	e8 a0 8a ff ff       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 879e290:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 879e293:	8b 55 90             	mov    -0x70(%ebp),%edx
 879e296:	89 34 24             	mov    %esi,(%esp)
 879e299:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 879e29d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 879e2a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 879e2a5:	ff 55 a0             	call   *-0x60(%ebp)
 879e2a8:	8b 75 ac             	mov    -0x54(%ebp),%esi
 879e2ab:	89 34 24             	mov    %esi,(%esp)
 879e2ae:	e8 7d 8a ff ff       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 879e2b3:	8b 55 90             	mov    -0x70(%ebp),%edx
 879e2b6:	89 54 24 08          	mov    %edx,0x8(%esp)
 879e2ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 879e2be:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 879e2c1:	89 04 24             	mov    %eax,(%esp)
 879e2c4:	e8 d7 f5 8d ff       	call   807d8a0 <memcpy@plt>
 879e2c9:	89 3c 24             	mov    %edi,(%esp)
 879e2cc:	e8 ef ff fa ff       	call   874e2c0 <_ZN5yaSSL3SSL11useSecurityEv>
 879e2d1:	89 04 24             	mov    %eax,(%esp)
 879e2d4:	e8 c7 0b fb ff       	call   874eea0 <_ZN5yaSSL8Security9use_parmsEv>
 879e2d9:	0f b7 55 86          	movzwl -0x7a(%ebp),%edx
 879e2dd:	66 89 50 2a          	mov    %dx,0x2a(%eax)
 879e2e1:	89 3c 24             	mov    %edi,(%esp)
 879e2e4:	e8 87 06 fb ff       	call   874e970 <_ZNK5yaSSL3SSL9isTLSv1_1Ev>
 879e2e9:	84 c0                	test   %al,%al
 879e2eb:	74 36                	je     879e323 <_ZN5yaSSL14DoProcessReplyERNS_3SSLE+0x4f3>
 879e2ed:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 879e2f0:	89 0c 24             	mov    %ecx,(%esp)
 879e2f3:	e8 a8 8a ff ff       	call   8796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>
 879e2f8:	89 3c 24             	mov    %edi,(%esp)
 879e2fb:	89 c6                	mov    %eax,%esi
 879e2fd:	e8 5e fd fa ff       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 879e302:	89 04 24             	mov    %eax,(%esp)
 879e305:	e8 56 04 fb ff       	call   874e760 <_ZNK5yaSSL6Crypto10get_cipherEv>
 879e30a:	8b 10                	mov    (%eax),%edx
 879e30c:	89 04 24             	mov    %eax,(%esp)
 879e30f:	ff 52 10             	call   *0x10(%edx)
 879e312:	01 f0                	add    %esi,%eax
 879e314:	8b 75 b4             	mov    -0x4c(%ebp),%esi
 879e317:	89 44 24 04          	mov    %eax,0x4(%esp)
 879e31b:	89 34 24             	mov    %esi,(%esp)
 879e31e:	e8 ad 8a ff ff       	call   8796dd0 <_ZN5yaSSL12input_buffer11set_currentEj>
 879e323:	8b 45 ac             	mov    -0x54(%ebp),%eax
 879e326:	89 04 24             	mov    %eax,(%esp)
 879e329:	e8 32 90 ff ff       	call   8797360 <_ZN5yaSSL12input_bufferD1Ev>
 879e32e:	8b 55 b0             	mov    -0x50(%ebp),%edx
 879e331:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 879e334:	8b 02                	mov    (%edx),%eax
 879e336:	8b 52 04             	mov    0x4(%edx),%edx
 879e339:	39 d0                	cmp    %edx,%eax
 879e33b:	0f 85 1a fe ff ff    	jne    879e15b <_ZN5yaSSL14DoProcessReplyERNS_3SSLE+0x32b>
 879e341:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 879e348:	c7 44 24 04 67 00 00 	movl   $0x67,0x4(%esp)
 879e34f:	00 
 879e350:	31 f6                	xor    %esi,%esi
 879e352:	89 3c 24             	mov    %edi,(%esp)
 879e355:	e8 76 fc fa ff       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 879e35a:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879e35f:	89 34 24             	mov    %esi,(%esp)
 879e362:	e8 b9 24 fb ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 879e367:	31 c0                	xor    %eax,%eax
 879e369:	e9 f3 fc ff ff       	jmp    879e061 <_ZN5yaSSL14DoProcessReplyERNS_3SSLE+0x231>
 879e36e:	89 55 a8             	mov    %edx,-0x58(%ebp)
 879e371:	e9 24 fc ff ff       	jmp    879df9a <_ZN5yaSSL14DoProcessReplyERNS_3SSLE+0x16a>
 879e376:	8b 06                	mov    (%esi),%eax
 879e378:	89 34 24             	mov    %esi,(%esp)
 879e37b:	ff 50 14             	call   *0x14(%eax)
 879e37e:	66 90                	xchg   %ax,%ax
 879e380:	eb d8                	jmp    879e35a <_ZN5yaSSL14DoProcessReplyERNS_3SSLE+0x52a>
 879e382:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 879e389:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::DoProcessReply @ 0x879de30

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DoProcessReply(yaSSL::SSL&) */

undefined4 yaSSL::DoProcessReply(SSL *param_1)

{
  code *pcVar1;
  ushort uVar2;
  char cVar3;
  Socket *pSVar4;
  uint uVar5;
  Buffers *pBVar6;
  input_buffer *piVar7;
  uchar *puVar8;
  int iVar9;
  sslFactory *this;
  undefined4 *puVar10;
  Security *pSVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  States *this_00;
  Crypto *pCVar17;
  void *__src;
  int *piVar18;
  uint uVar19;
  Message *pMVar20;
  RecordLayerHeader *pRVar21;
  uint local_5c;
  uint local_54;
  input_buffer *local_50;
  input_buffer local_44 [16];
  input_buffer local_34 [16];
  int local_24;
  ProtocolVersion local_20 [2];
  ushort local_1e;
  undefined4 uStack_14;
  
  uStack_14 = 0x879de3b;
  pSVar4 = (Socket *)SSL::useSocket(param_1);
  cVar3 = Socket::wait(pSVar4);
  if (cVar3 == '\0') {
    SSL::SetError(param_1,0x72);
    return 0;
  }
  pSVar4 = (Socket *)SSL::getSocket(param_1);
  uVar5 = Socket::get_ready(pSVar4);
  if (uVar5 == 0) {
    return 1;
  }
  pBVar6 = (Buffers *)SSL::useBuffers(param_1);
  piVar7 = (input_buffer *)Buffers::TakeRawInput(pBVar6);
  if (piVar7 == (input_buffer *)0x0) {
    input_buffer::input_buffer(local_34,uVar5);
    local_54 = 0;
  }
  else {
    local_54 = input_buffer::get_size(piVar7);
    input_buffer::input_buffer(local_34,local_54 + uVar5);
    if (local_54 != 0) {
      puVar8 = (uchar *)input_buffer::get_buffer(piVar7);
      input_buffer::assign(local_34,puVar8,local_54);
      input_buffer::~input_buffer(piVar7);
      operator_delete(piVar7,(uint)puVar8 & 0xffffff00);
    }
  }
  local_50 = local_34;
  iVar9 = input_buffer::get_buffer(local_50);
  pSVar4 = (Socket *)SSL::useSocket(param_1);
  uVar5 = Socket::receive(pSVar4,(uchar *)(iVar9 + local_54),uVar5,0);
  if (uVar5 == 0xffffffff) {
    SSL::SetError(param_1,0x72);
    uVar16 = 0;
    goto LAB_0879e061;
  }
  input_buffer::add_size(local_50,uVar5);
  this = (sslFactory *)SSL::getFactory();
  puVar10 = (undefined4 *)sslFactory::getMessage(this);
  pSVar11 = (Security *)SSL::getSecurity(param_1);
  piVar12 = (int *)Security::get_parms(pSVar11);
  if (*piVar12 == 0) {
    this_00 = (States *)SSL::getStates(param_1);
    piVar12 = (int *)States::getServer(this_00);
    if ((*piVar12 != 0) || (cVar3 = input_buffer::peek(local_50), cVar3 == '\x16'))
    goto LAB_0879df7e;
    ProcessOldClientHello(local_50,param_1);
    iVar9 = SSL::GetError(param_1);
    if (iVar9 == 0) goto LAB_0879df7e;
  }
  else {
LAB_0879df7e:
    local_5c = 0;
    uVar5 = local_5c;
    while (local_5c = uVar5, cVar3 = input_buffer::eof(local_50), cVar3 == '\0') {
      pRVar21 = (RecordLayerHeader *)0x0;
      ProtocolVersion::ProtocolVersion(local_20,'\x03','\0');
      uVar5 = input_buffer::get_remaining(local_50);
      if (uVar5 < 5) {
        iVar9 = 0;
LAB_0879dfe1:
        iVar13 = input_buffer::get_remaining(local_50);
        iVar14 = input_buffer::get_buffer(local_50);
        iVar15 = input_buffer::get_current(local_50);
        piVar7 = operator_new(0x10,(uint)pRVar21 & 0xffffff00);
        input_buffer::input_buffer
                  (piVar7,iVar13 + iVar9,(uchar *)(iVar14 + (iVar15 - iVar9)),iVar13 + iVar9);
        pBVar6 = (Buffers *)SSL::useBuffers(param_1);
        Buffers::SetRawInput(pBVar6,piVar7);
        uVar16 = 1;
        goto LAB_0879e061;
      }
      operator>>(local_50,(RecordLayerHeader *)&local_24);
      pRVar21 = (RecordLayerHeader *)&local_24;
      SSL::verifyState(param_1,(RecordLayerHeader *)&local_24);
      uVar19 = (uint)local_1e;
      uVar5 = input_buffer::get_remaining(local_50);
      if (uVar5 < uVar19) {
        iVar9 = 5;
        goto LAB_0879dfe1;
      }
      while( true ) {
        uVar19 = input_buffer::get_current(local_50);
        uVar5 = local_5c + 5 + (uint)local_1e;
        if (uVar5 <= uVar19) break;
        pSVar11 = (Security *)SSL::getSecurity(param_1);
        iVar9 = Security::get_parms(pSVar11);
        uVar2 = local_1e;
        if (*(char *)(iVar9 + 0x28) == '\0') {
          uVar5 = (uint)local_1e;
          input_buffer::input_buffer(local_44,uVar5);
          iVar9 = input_buffer::get_buffer(local_50);
          iVar13 = input_buffer::get_current(local_50);
          pCVar17 = (Crypto *)SSL::useCrypto(param_1);
          piVar12 = (int *)Crypto::use_cipher(pCVar17);
          pcVar1 = *(code **)(*piVar12 + 4);
          uVar16 = input_buffer::get_buffer(local_44);
          (*pcVar1)(piVar12,uVar16,(void *)(iVar9 + iVar13),uVar5);
          __src = (void *)input_buffer::get_buffer(local_44);
          memcpy((void *)(iVar9 + iVar13),__src,uVar5);
          pSVar11 = (Security *)SSL::useSecurity(param_1);
          iVar9 = Security::use_parms(pSVar11);
          *(ushort *)(iVar9 + 0x2a) = uVar2;
          cVar3 = SSL::isTLSv1_1(param_1);
          if (cVar3 != '\0') {
            iVar9 = input_buffer::get_current(local_50);
            pCVar17 = (Crypto *)SSL::getCrypto(param_1);
            piVar12 = (int *)Crypto::get_cipher(pCVar17);
            iVar13 = (**(code **)(*piVar12 + 0x10))(piVar12);
            input_buffer::set_current(local_50,iVar13 + iVar9);
          }
          input_buffer::~input_buffer(local_44);
          piVar12 = (int *)*puVar10;
          piVar18 = (int *)puVar10[1];
          iVar9 = local_24;
          if (piVar12 != piVar18) goto LAB_0879e15b;
LAB_0879e348:
          piVar7 = (input_buffer *)0x0;
          pMVar20 = (Message *)0x0;
          SSL::SetError(param_1,0x67);
LAB_0879e35a:
          operator_delete(pMVar20,(uint)piVar7 & 0xffffff00);
          uVar16 = 0;
          goto LAB_0879e061;
        }
        piVar12 = (int *)*puVar10;
        piVar18 = (int *)puVar10[1];
        iVar9 = local_24;
        if (piVar12 == piVar18) goto LAB_0879e348;
LAB_0879e15b:
        while (iVar9 != *piVar12) {
          piVar12 = piVar12 + 2;
          if (piVar18 == piVar12) goto LAB_0879e348;
        }
        pMVar20 = (Message *)(*(code *)piVar12[1])();
        if (pMVar20 == (Message *)0x0) goto LAB_0879e348;
        operator>>(local_50,pMVar20);
        piVar7 = local_50;
        (**(code **)(*(int *)pMVar20 + 8))(pMVar20,local_50,param_1);
        iVar9 = SSL::GetError(param_1);
        if (iVar9 != 0) {
          (**(code **)(*(int *)pMVar20 + 0x14))(pMVar20);
          goto LAB_0879e35a;
        }
        (**(code **)(*(int *)pMVar20 + 0x14))(pMVar20);
        operator_delete(pMVar20,(uint)piVar7 & 0xffffff00);
      }
    }
  }
  uVar16 = 0;
LAB_0879e061:
  input_buffer::~input_buffer(local_50);
  return uVar16;
}

```

---

## GetErrors

```asm
// === 087510c0 yaSSL::GetErrors  [0x087510c0-0x875111f] ===
 87510c0:	55                   	push   %ebp
 87510c1:	89 e5                	mov    %esp,%ebp
 87510c3:	53                   	push   %ebx
 87510c4:	e8 2f 1d fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87510c9:	81 c3 cf ba c1 00    	add    $0xc1bacf,%ebx
 87510cf:	83 ec 14             	sub    $0x14,%esp
 87510d2:	8b 83 84 4c 12 00    	mov    0x124c84(%ebx),%eax
 87510d8:	85 c0                	test   %eax,%eax
 87510da:	74 0c                	je     87510e8 <_ZN5yaSSL9GetErrorsEv+0x28>
 87510dc:	83 c4 14             	add    $0x14,%esp
 87510df:	5b                   	pop    %ebx
 87510e0:	5d                   	pop    %ebp
 87510e1:	c3                   	ret
 87510e2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87510e8:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87510ed:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 87510f4:	e8 a7 fb ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87510f9:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 87510ff:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8751106:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 875110d:	89 83 84 4c 12 00    	mov    %eax,0x124c84(%ebx)
 8751113:	83 c4 14             	add    $0x14,%esp
 8751116:	5b                   	pop    %ebx
 8751117:	5d                   	pop    %ebp
 8751118:	c3                   	ret
 8751119:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::GetErrors @ 0x87510c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::GetErrors() */

void yaSSL::GetErrors(void)

{
  if (errorsInstance != (undefined4 *)0x0) {
    return;
  }
  errorsInstance = operator_new(0x10,0);
  *errorsInstance = 0;
  errorsInstance[1] = 0;
  errorsInstance[2] = 0;
  return;
}

```

---

## GetSSL_Factory

```asm
// === 08751120 yaSSL::GetSSL_Factory  [0x08751120-0x875117f] ===
 8751120:	55                   	push   %ebp
 8751121:	89 e5                	mov    %esp,%ebp
 8751123:	53                   	push   %ebx
 8751124:	e8 cf 1c fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8751129:	81 c3 6f ba c1 00    	add    $0xc1ba6f,%ebx
 875112f:	83 ec 24             	sub    $0x24,%esp
 8751132:	8b 83 7c 4c 12 00    	mov    0x124c7c(%ebx),%eax
 8751138:	85 c0                	test   %eax,%eax
 875113a:	74 0c                	je     8751148 <_ZN5yaSSL14GetSSL_FactoryEv+0x28>
 875113c:	83 c4 24             	add    $0x24,%esp
 875113f:	5b                   	pop    %ebx
 8751140:	5d                   	pop    %ebp
 8751141:	c3                   	ret
 8751142:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8751148:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875114d:	c7 04 24 30 00 00 00 	movl   $0x30,(%esp)
 8751154:	e8 47 fb ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8751159:	89 04 24             	mov    %eax,(%esp)
 875115c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 875115f:	e8 1c f6 ff ff       	call   8750780 <_ZN5yaSSL10sslFactoryC1Ev>
 8751164:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8751167:	89 83 7c 4c 12 00    	mov    %eax,0x124c7c(%ebx)
 875116d:	83 c4 24             	add    $0x24,%esp
 8751170:	5b                   	pop    %ebx
 8751171:	5d                   	pop    %ebp
 8751172:	c3                   	ret
 8751173:	90                   	nop
 8751174:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875117a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::GetSSL_Factory @ 0x8751120

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::GetSSL_Factory() */

void yaSSL::GetSSL_Factory(void)

{
  sslFactory *this;
  
  if (sslFactoryInstance != (sslFactory *)0x0) {
    return;
  }
  this = operator_new(0x30,0);
  sslFactory::sslFactory(this);
  sslFactoryInstance = this;
  return;
}

```

---

## GetSessions

```asm
// === 087511a0 yaSSL::GetSessions  [0x087511a0-0x875121f] ===
 87511a0:	55                   	push   %ebp
 87511a1:	89 e5                	mov    %esp,%ebp
 87511a3:	53                   	push   %ebx
 87511a4:	e8 4f 1c fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87511a9:	81 c3 ef b9 c1 00    	add    $0xc1b9ef,%ebx
 87511af:	83 ec 24             	sub    $0x24,%esp
 87511b2:	8b 83 80 4c 12 00    	mov    0x124c80(%ebx),%eax
 87511b8:	85 c0                	test   %eax,%eax
 87511ba:	74 0c                	je     87511c8 <_ZN5yaSSL11GetSessionsEv+0x28>
 87511bc:	83 c4 24             	add    $0x24,%esp
 87511bf:	5b                   	pop    %ebx
 87511c0:	5d                   	pop    %ebp
 87511c1:	c3                   	ret
 87511c2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87511c8:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87511cd:	c7 04 24 18 00 00 00 	movl   $0x18,(%esp)
 87511d4:	e8 c7 fa ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87511d9:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 87511df:	8d 50 0c             	lea    0xc(%eax),%edx
 87511e2:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 87511e9:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 87511f0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 87511f3:	89 14 24             	mov    %edx,(%esp)
 87511f6:	e8 45 7e 04 00       	call   8799040 <_ZN5yaSSL10RandomPoolC1Ev>
 87511fb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87511fe:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 8751205:	89 83 80 4c 12 00    	mov    %eax,0x124c80(%ebx)
 875120b:	83 c4 24             	add    $0x24,%esp
 875120e:	5b                   	pop    %ebx
 875120f:	5d                   	pop    %ebp
 8751210:	c3                   	ret
 8751211:	90                   	nop
 8751212:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8751219:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::GetSessions @ 0x87511a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::GetSessions() */

void yaSSL::GetSessions(void)

{
  undefined4 *puVar1;
  
  if (sessionsInstance != (undefined4 *)0x0) {
    return;
  }
  puVar1 = operator_new(0x18,0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  RandomPool::RandomPool((RandomPool *)(puVar1 + 3));
  puVar1[5] = 0;
  sessionsInstance = puVar1;
  return;
}

```

---

## InitClientKeyFactory

```asm
// === 0874c2e0 yaSSL::InitClientKeyFactory  [0x0874c2e0-0x874c59f] ===
 874c2e0:	55                   	push   %ebp
 874c2e1:	89 e5                	mov    %esp,%ebp
 874c2e3:	57                   	push   %edi
 874c2e4:	56                   	push   %esi
 874c2e5:	53                   	push   %ebx
 874c2e6:	83 ec 2c             	sub    $0x2c,%esp
 874c2e9:	8b 75 08             	mov    0x8(%ebp),%esi
 874c2ec:	e8 07 6b fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874c2f1:	81 c3 a7 08 c2 00    	add    $0xc208a7,%ebx
 874c2f7:	8b 56 08             	mov    0x8(%esi),%edx
 874c2fa:	89 d0                	mov    %edx,%eax
 874c2fc:	2b 06                	sub    (%esi),%eax
 874c2fe:	c1 f8 03             	sar    $0x3,%eax
 874c301:	83 f8 02             	cmp    $0x2,%eax
 874c304:	76 6a                	jbe    874c370 <_ZN5yaSSL20InitClientKeyFactoryERNS_7FactoryINS_13ClientKeyBaseEiPFPS1_vEEE+0x90>
 874c306:	8b 46 04             	mov    0x4(%esi),%eax
 874c309:	39 d0                	cmp    %edx,%eax
 874c30b:	0f 84 d3 00 00 00    	je     874c3e4 <_ZN5yaSSL20InitClientKeyFactoryERNS_7FactoryINS_13ClientKeyBaseEiPFPS1_vEEE+0x104>
 874c311:	8b 93 88 fb ff ff    	mov    -0x478(%ebx),%edx
 874c317:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 874c31d:	89 50 04             	mov    %edx,0x4(%eax)
 874c320:	8b 46 04             	mov    0x4(%esi),%eax
 874c323:	83 c0 08             	add    $0x8,%eax
 874c326:	39 46 08             	cmp    %eax,0x8(%esi)
 874c329:	89 46 04             	mov    %eax,0x4(%esi)
 874c32c:	0f 84 46 01 00 00    	je     874c478 <_ZN5yaSSL20InitClientKeyFactoryERNS_7FactoryINS_13ClientKeyBaseEiPFPS1_vEEE+0x198>
 874c332:	8b 93 5c fb ff ff    	mov    -0x4a4(%ebx),%edx
 874c338:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 874c33e:	89 50 04             	mov    %edx,0x4(%eax)
 874c341:	8b 46 04             	mov    0x4(%esi),%eax
 874c344:	83 c0 08             	add    $0x8,%eax
 874c347:	39 46 08             	cmp    %eax,0x8(%esi)
 874c34a:	89 46 04             	mov    %eax,0x4(%esi)
 874c34d:	0f 84 bd 01 00 00    	je     874c510 <_ZN5yaSSL20InitClientKeyFactoryERNS_7FactoryINS_13ClientKeyBaseEiPFPS1_vEEE+0x230>
 874c353:	8b 93 30 fd ff ff    	mov    -0x2d0(%ebx),%edx
 874c359:	83 46 04 08          	addl   $0x8,0x4(%esi)
 874c35d:	c7 00 03 00 00 00    	movl   $0x3,(%eax)
 874c363:	89 50 04             	mov    %edx,0x4(%eax)
 874c366:	83 c4 2c             	add    $0x2c,%esp
 874c369:	5b                   	pop    %ebx
 874c36a:	5e                   	pop    %esi
 874c36b:	5f                   	pop    %edi
 874c36c:	5d                   	pop    %ebp
 874c36d:	c3                   	ret
 874c36e:	66 90                	xchg   %ax,%ax
 874c370:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874c375:	c7 04 24 18 00 00 00 	movl   $0x18,(%esp)
 874c37c:	e8 cf 5f 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 874c381:	8b 7e 04             	mov    0x4(%esi),%edi
 874c384:	8b 0e                	mov    (%esi),%ecx
 874c386:	39 cf                	cmp    %ecx,%edi
 874c388:	89 c2                	mov    %eax,%edx
 874c38a:	74 32                	je     874c3be <_ZN5yaSSL20InitClientKeyFactoryERNS_7FactoryINS_13ClientKeyBaseEiPFPS1_vEEE+0xde>
 874c38c:	8d 51 08             	lea    0x8(%ecx),%edx
 874c38f:	29 d7                	sub    %edx,%edi
 874c391:	31 d2                	xor    %edx,%edx
 874c393:	c1 ef 03             	shr    $0x3,%edi
 874c396:	83 c7 01             	add    $0x1,%edi
 874c399:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 874c39c:	89 75 e0             	mov    %esi,-0x20(%ebp)
 874c39f:	90                   	nop
 874c3a0:	8b 34 d1             	mov    (%ecx,%edx,8),%esi
 874c3a3:	8b 7c d1 04          	mov    0x4(%ecx,%edx,8),%edi
 874c3a7:	89 34 d0             	mov    %esi,(%eax,%edx,8)
 874c3aa:	89 7c d0 04          	mov    %edi,0x4(%eax,%edx,8)
 874c3ae:	83 c2 01             	add    $0x1,%edx
 874c3b1:	3b 55 e4             	cmp    -0x1c(%ebp),%edx
 874c3b4:	75 ea                	jne    874c3a0 <_ZN5yaSSL20InitClientKeyFactoryERNS_7FactoryINS_13ClientKeyBaseEiPFPS1_vEEE+0xc0>
 874c3b6:	8b 75 e0             	mov    -0x20(%ebp),%esi
 874c3b9:	8d 14 d0             	lea    (%eax,%edx,8),%edx
 874c3bc:	8b 3e                	mov    (%esi),%edi
 874c3be:	89 06                	mov    %eax,(%esi)
 874c3c0:	83 c0 18             	add    $0x18,%eax
 874c3c3:	89 56 04             	mov    %edx,0x4(%esi)
 874c3c6:	89 46 08             	mov    %eax,0x8(%esi)
 874c3c9:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874c3ce:	89 3c 24             	mov    %edi,(%esp)
 874c3d1:	e8 1a 45 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874c3d6:	8b 56 08             	mov    0x8(%esi),%edx
 874c3d9:	8b 46 04             	mov    0x4(%esi),%eax
 874c3dc:	39 d0                	cmp    %edx,%eax
 874c3de:	0f 85 2d ff ff ff    	jne    874c311 <_ZN5yaSSL20InitClientKeyFactoryERNS_7FactoryINS_13ClientKeyBaseEiPFPS1_vEEE+0x31>
 874c3e4:	2b 16                	sub    (%esi),%edx
 874c3e6:	c1 fa 03             	sar    $0x3,%edx
 874c3e9:	8d 44 12 01          	lea    0x1(%edx,%edx,1),%eax
 874c3ed:	c1 e0 03             	shl    $0x3,%eax
 874c3f0:	89 45 e0             	mov    %eax,-0x20(%ebp)
 874c3f3:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874c3f8:	89 04 24             	mov    %eax,(%esp)
 874c3fb:	e8 50 5f 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 874c400:	8b 7e 04             	mov    0x4(%esi),%edi
 874c403:	8b 0e                	mov    (%esi),%ecx
 874c405:	39 cf                	cmp    %ecx,%edi
 874c407:	89 c2                	mov    %eax,%edx
 874c409:	74 31                	je     874c43c <_ZN5yaSSL20InitClientKeyFactoryERNS_7FactoryINS_13ClientKeyBaseEiPFPS1_vEEE+0x15c>
 874c40b:	8d 51 08             	lea    0x8(%ecx),%edx
 874c40e:	29 d7                	sub    %edx,%edi
 874c410:	31 d2                	xor    %edx,%edx
 874c412:	c1 ef 03             	shr    $0x3,%edi
 874c415:	83 c7 01             	add    $0x1,%edi
 874c418:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 874c41b:	89 75 dc             	mov    %esi,-0x24(%ebp)
 874c41e:	66 90                	xchg   %ax,%ax
 874c420:	8b 34 d1             	mov    (%ecx,%edx,8),%esi
 874c423:	8b 7c d1 04          	mov    0x4(%ecx,%edx,8),%edi
 874c427:	89 34 d0             	mov    %esi,(%eax,%edx,8)
 874c42a:	89 7c d0 04          	mov    %edi,0x4(%eax,%edx,8)
 874c42e:	83 c2 01             	add    $0x1,%edx
 874c431:	3b 55 e4             	cmp    -0x1c(%ebp),%edx
 874c434:	75 ea                	jne    874c420 <_ZN5yaSSL20InitClientKeyFactoryERNS_7FactoryINS_13ClientKeyBaseEiPFPS1_vEEE+0x140>
 874c436:	8b 75 dc             	mov    -0x24(%ebp),%esi
 874c439:	8d 14 d0             	lea    (%eax,%edx,8),%edx
 874c43c:	8b 8b 88 fb ff ff    	mov    -0x478(%ebx),%ecx
 874c442:	c7 02 01 00 00 00    	movl   $0x1,(%edx)
 874c448:	89 4a 04             	mov    %ecx,0x4(%edx)
 874c44b:	8b 0e                	mov    (%esi),%ecx
 874c44d:	83 c2 08             	add    $0x8,%edx
 874c450:	89 06                	mov    %eax,(%esi)
 874c452:	03 45 e0             	add    -0x20(%ebp),%eax
 874c455:	89 56 04             	mov    %edx,0x4(%esi)
 874c458:	89 46 08             	mov    %eax,0x8(%esi)
 874c45b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874c460:	89 0c 24             	mov    %ecx,(%esp)
 874c463:	e8 88 44 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874c468:	8b 46 04             	mov    0x4(%esi),%eax
 874c46b:	39 46 08             	cmp    %eax,0x8(%esi)
 874c46e:	0f 85 be fe ff ff    	jne    874c332 <_ZN5yaSSL20InitClientKeyFactoryERNS_7FactoryINS_13ClientKeyBaseEiPFPS1_vEEE+0x52>
 874c474:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 874c478:	2b 06                	sub    (%esi),%eax
 874c47a:	c1 f8 03             	sar    $0x3,%eax
 874c47d:	8d 44 00 01          	lea    0x1(%eax,%eax,1),%eax
 874c481:	c1 e0 03             	shl    $0x3,%eax
 874c484:	89 45 e0             	mov    %eax,-0x20(%ebp)
 874c487:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874c48c:	89 04 24             	mov    %eax,(%esp)
 874c48f:	e8 bc 5e 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 874c494:	8b 7e 04             	mov    0x4(%esi),%edi
 874c497:	8b 0e                	mov    (%esi),%ecx
 874c499:	39 cf                	cmp    %ecx,%edi
 874c49b:	89 c2                	mov    %eax,%edx
 874c49d:	74 35                	je     874c4d4 <_ZN5yaSSL20InitClientKeyFactoryERNS_7FactoryINS_13ClientKeyBaseEiPFPS1_vEEE+0x1f4>
 874c49f:	8d 51 08             	lea    0x8(%ecx),%edx
 874c4a2:	29 d7                	sub    %edx,%edi
 874c4a4:	31 d2                	xor    %edx,%edx
 874c4a6:	c1 ef 03             	shr    $0x3,%edi
 874c4a9:	83 c7 01             	add    $0x1,%edi
 874c4ac:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 874c4af:	89 75 dc             	mov    %esi,-0x24(%ebp)
 874c4b2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874c4b8:	8b 34 d1             	mov    (%ecx,%edx,8),%esi
 874c4bb:	8b 7c d1 04          	mov    0x4(%ecx,%edx,8),%edi
 874c4bf:	89 34 d0             	mov    %esi,(%eax,%edx,8)
 874c4c2:	89 7c d0 04          	mov    %edi,0x4(%eax,%edx,8)
 874c4c6:	83 c2 01             	add    $0x1,%edx
 874c4c9:	3b 55 e4             	cmp    -0x1c(%ebp),%edx
 874c4cc:	75 ea                	jne    874c4b8 <_ZN5yaSSL20InitClientKeyFactoryERNS_7FactoryINS_13ClientKeyBaseEiPFPS1_vEEE+0x1d8>
 874c4ce:	8b 75 dc             	mov    -0x24(%ebp),%esi
 874c4d1:	8d 14 d0             	lea    (%eax,%edx,8),%edx
 874c4d4:	8b 8b 5c fb ff ff    	mov    -0x4a4(%ebx),%ecx
 874c4da:	c7 02 02 00 00 00    	movl   $0x2,(%edx)
 874c4e0:	89 4a 04             	mov    %ecx,0x4(%edx)
 874c4e3:	8b 0e                	mov    (%esi),%ecx
 874c4e5:	83 c2 08             	add    $0x8,%edx
 874c4e8:	89 06                	mov    %eax,(%esi)
 874c4ea:	03 45 e0             	add    -0x20(%ebp),%eax
 874c4ed:	89 56 04             	mov    %edx,0x4(%esi)
 874c4f0:	89 46 08             	mov    %eax,0x8(%esi)
 874c4f3:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874c4f8:	89 0c 24             	mov    %ecx,(%esp)
 874c4fb:	e8 f0 43 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874c500:	8b 46 04             	mov    0x4(%esi),%eax
 874c503:	39 46 08             	cmp    %eax,0x8(%esi)
 874c506:	0f 85 47 fe ff ff    	jne    874c353 <_ZN5yaSSL20InitClientKeyFactoryERNS_7FactoryINS_13ClientKeyBaseEiPFPS1_vEEE+0x73>
 874c50c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 874c510:	2b 06                	sub    (%esi),%eax
 874c512:	c1 f8 03             	sar    $0x3,%eax
 874c515:	8d 44 00 01          	lea    0x1(%eax,%eax,1),%eax
 874c519:	c1 e0 03             	shl    $0x3,%eax
 874c51c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 874c51f:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874c524:	89 04 24             	mov    %eax,(%esp)
 874c527:	e8 24 5e 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 874c52c:	8b 7e 04             	mov    0x4(%esi),%edi
 874c52f:	8b 0e                	mov    (%esi),%ecx
 874c531:	39 cf                	cmp    %ecx,%edi
 874c533:	89 c2                	mov    %eax,%edx
 874c535:	74 35                	je     874c56c <_ZN5yaSSL20InitClientKeyFactoryERNS_7FactoryINS_13ClientKeyBaseEiPFPS1_vEEE+0x28c>
 874c537:	8d 51 08             	lea    0x8(%ecx),%edx
 874c53a:	29 d7                	sub    %edx,%edi
 874c53c:	31 d2                	xor    %edx,%edx
 874c53e:	c1 ef 03             	shr    $0x3,%edi
 874c541:	83 c7 01             	add    $0x1,%edi
 874c544:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 874c547:	89 75 dc             	mov    %esi,-0x24(%ebp)
 874c54a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874c550:	8b 34 d1             	mov    (%ecx,%edx,8),%esi
 874c553:	8b 7c d1 04          	mov    0x4(%ecx,%edx,8),%edi
 874c557:	89 34 d0             	mov    %esi,(%eax,%edx,8)
 874c55a:	89 7c d0 04          	mov    %edi,0x4(%eax,%edx,8)
 874c55e:	83 c2 01             	add    $0x1,%edx
 874c561:	3b 55 e4             	cmp    -0x1c(%ebp),%edx
 874c564:	75 ea                	jne    874c550 <_ZN5yaSSL20InitClientKeyFactoryERNS_7FactoryINS_13ClientKeyBaseEiPFPS1_vEEE+0x270>
 874c566:	8b 75 dc             	mov    -0x24(%ebp),%esi
 874c569:	8d 14 d0             	lea    (%eax,%edx,8),%edx
 874c56c:	8b 8b 30 fd ff ff    	mov    -0x2d0(%ebx),%ecx
 874c572:	c7 02 03 00 00 00    	movl   $0x3,(%edx)
 874c578:	89 4a 04             	mov    %ecx,0x4(%edx)
 874c57b:	8b 0e                	mov    (%esi),%ecx
 874c57d:	83 c2 08             	add    $0x8,%edx
 874c580:	89 06                	mov    %eax,(%esi)
 874c582:	03 45 e0             	add    -0x20(%ebp),%eax
 874c585:	89 56 04             	mov    %edx,0x4(%esi)
 874c588:	89 46 08             	mov    %eax,0x8(%esi)
 874c58b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874c590:	89 0c 24             	mov    %ecx,(%esp)
 874c593:	e8 58 43 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874c598:	83 c4 2c             	add    $0x2c,%esp
 874c59b:	5b                   	pop    %ebx
 874c59c:	5e                   	pop    %esi
 874c59d:	5f                   	pop    %edi
 874c59e:	5d                   	pop    %ebp
 874c59f:	c3                   	ret

```

```c
// yaSSL::InitClientKeyFactory @ 0x874c2e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::InitClientKeyFactory(yaSSL::Factory<yaSSL::ClientKeyBase, int, yaSSL::ClientKeyBase*
   (*)()>&) */

void yaSSL::InitClientKeyFactory(Factory *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  
  puVar4 = *(undefined4 **)(param_1 + 8);
  if ((uint)((int)puVar4 - *(int *)param_1 >> 3) < 3) {
    pvVar5 = operator_new__(0x18,0);
    iVar10 = *(int *)(param_1 + 4);
    iVar1 = *(int *)param_1;
    pvVar8 = pvVar5;
    if (iVar10 != iVar1) {
      iVar7 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar1 + 4 + iVar7 * 8);
        *(undefined4 *)((int)pvVar5 + iVar7 * 8) = *(undefined4 *)(iVar1 + iVar7 * 8);
        *(undefined4 *)((int)pvVar5 + iVar7 * 8 + 4) = uVar2;
        iVar7 = iVar7 + 1;
      } while (iVar7 != ((uint)(iVar10 - (iVar1 + 8)) >> 3) + 1);
      pvVar8 = (void *)((int)pvVar5 + iVar7 * 8);
      iVar10 = *(int *)param_1;
    }
    *(void **)param_1 = pvVar5;
    *(void **)(param_1 + 4) = pvVar8;
    *(int *)(param_1 + 8) = (int)pvVar5 + 0x18;
    operator_delete__(iVar10,0);
    puVar4 = *(undefined4 **)(param_1 + 8);
    puVar6 = *(undefined4 **)(param_1 + 4);
    if (puVar6 != puVar4) goto LAB_0874c311;
LAB_0874c3e4:
    iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
    puVar6 = operator_new__(iVar10 * 8,0);
    iVar1 = *(int *)(param_1 + 4);
    iVar7 = *(int *)param_1;
    puVar4 = puVar6;
    if (iVar1 != iVar7) {
      iVar9 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
        puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
        puVar6[iVar9 * 2 + 1] = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
      puVar4 = puVar6 + iVar9 * 2;
    }
    puVar3 = PTR_CreateRSAClient_0936c720;
    *puVar4 = 1;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    puVar4 = *(undefined4 **)(param_1 + 4);
    if (*(undefined4 **)(param_1 + 8) == puVar4) {
LAB_0874c478:
      iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
      puVar6 = operator_new__(iVar10 * 8,0);
      iVar1 = *(int *)(param_1 + 4);
      iVar7 = *(int *)param_1;
      puVar4 = puVar6;
      if (iVar1 != iVar7) {
        iVar9 = 0;
        do {
          uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
          puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
          puVar6[iVar9 * 2 + 1] = uVar2;
          iVar9 = iVar9 + 1;
        } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
        puVar4 = puVar6 + iVar9 * 2;
      }
      puVar3 = PTR_CreateDHClient_0936c6f4;
      *puVar4 = 2;
      puVar4[1] = puVar3;
      uVar2 = *(undefined4 *)param_1;
      *(undefined4 **)param_1 = puVar6;
      *(undefined4 **)(param_1 + 4) = puVar4 + 2;
      *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
      operator_delete__(uVar2,0);
      puVar4 = *(undefined4 **)(param_1 + 4);
      if (*(undefined4 **)(param_1 + 8) == puVar4) goto LAB_0874c510;
      goto LAB_0874c353;
    }
  }
  else {
    puVar6 = *(undefined4 **)(param_1 + 4);
    if (puVar6 == puVar4) goto LAB_0874c3e4;
LAB_0874c311:
    puVar3 = PTR_CreateRSAClient_0936c720;
    *puVar6 = 1;
    puVar6[1] = puVar3;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    *(undefined4 **)(param_1 + 4) = puVar4;
    if (*(undefined4 **)(param_1 + 8) == puVar4) goto LAB_0874c478;
  }
  puVar3 = PTR_CreateDHClient_0936c6f4;
  *puVar4 = 2;
  puVar4[1] = puVar3;
  puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
  *(undefined4 **)(param_1 + 4) = puVar4;
  if (*(undefined4 **)(param_1 + 8) == puVar4) {
LAB_0874c510:
    iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
    puVar6 = operator_new__(iVar10 * 8,0);
    iVar1 = *(int *)(param_1 + 4);
    iVar7 = *(int *)param_1;
    puVar4 = puVar6;
    if (iVar1 != iVar7) {
      iVar9 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
        puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
        puVar6[iVar9 * 2 + 1] = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
      puVar4 = puVar6 + iVar9 * 2;
    }
    puVar3 = PTR_CreateFortezzaClient_0936c8c8;
    *puVar4 = 3;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    return;
  }
LAB_0874c353:
  puVar3 = PTR_CreateFortezzaClient_0936c8c8;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
  *puVar4 = 3;
  puVar4[1] = puVar3;
  return;
}

```

---

## InitHandShakeFactory

```asm
// === 0874d120 yaSSL::InitHandShakeFactory  [0x0874d120-0x874dcff] ===
 874d120:	55                   	push   %ebp
 874d121:	89 e5                	mov    %esp,%ebp
 874d123:	57                   	push   %edi
 874d124:	56                   	push   %esi
 874d125:	53                   	push   %ebx
 874d126:	83 ec 2c             	sub    $0x2c,%esp
 874d129:	8b 75 08             	mov    0x8(%ebp),%esi
 874d12c:	e8 c7 5c fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874d131:	81 c3 67 fa c1 00    	add    $0xc1fa67,%ebx
 874d137:	8b 56 08             	mov    0x8(%esi),%edx
 874d13a:	89 d0                	mov    %edx,%eax
 874d13c:	2b 06                	sub    (%esi),%eax
 874d13e:	c1 f8 03             	sar    $0x3,%eax
 874d141:	83 f8 09             	cmp    $0x9,%eax
 874d144:	0f 86 56 01 00 00    	jbe    874d2a0 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x180>
 874d14a:	8b 46 04             	mov    0x4(%esi),%eax
 874d14d:	39 d0                	cmp    %edx,%eax
 874d14f:	0f 84 bf 01 00 00    	je     874d314 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x1f4>
 874d155:	8b 93 2c ff ff ff    	mov    -0xd4(%ebx),%edx
 874d15b:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 874d161:	89 50 04             	mov    %edx,0x4(%eax)
 874d164:	8b 46 04             	mov    0x4(%esi),%eax
 874d167:	83 c0 08             	add    $0x8,%eax
 874d16a:	39 46 08             	cmp    %eax,0x8(%esi)
 874d16d:	89 46 04             	mov    %eax,0x4(%esi)
 874d170:	0f 84 32 02 00 00    	je     874d3a8 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x288>
 874d176:	8b 93 90 fe ff ff    	mov    -0x170(%ebx),%edx
 874d17c:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 874d182:	89 50 04             	mov    %edx,0x4(%eax)
 874d185:	8b 46 04             	mov    0x4(%esi),%eax
 874d188:	83 c0 08             	add    $0x8,%eax
 874d18b:	39 46 08             	cmp    %eax,0x8(%esi)
 874d18e:	89 46 04             	mov    %eax,0x4(%esi)
 874d191:	0f 84 a9 02 00 00    	je     874d440 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x320>
 874d197:	8b 93 10 ff ff ff    	mov    -0xf0(%ebx),%edx
 874d19d:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 874d1a3:	89 50 04             	mov    %edx,0x4(%eax)
 874d1a6:	8b 46 04             	mov    0x4(%esi),%eax
 874d1a9:	83 c0 08             	add    $0x8,%eax
 874d1ac:	39 46 08             	cmp    %eax,0x8(%esi)
 874d1af:	89 46 04             	mov    %eax,0x4(%esi)
 874d1b2:	0f 84 20 03 00 00    	je     874d4d8 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x3b8>
 874d1b8:	8b 93 dc ff ff ff    	mov    -0x24(%ebx),%edx
 874d1be:	c7 00 0b 00 00 00    	movl   $0xb,(%eax)
 874d1c4:	89 50 04             	mov    %edx,0x4(%eax)
 874d1c7:	8b 46 04             	mov    0x4(%esi),%eax
 874d1ca:	83 c0 08             	add    $0x8,%eax
 874d1cd:	39 46 08             	cmp    %eax,0x8(%esi)
 874d1d0:	89 46 04             	mov    %eax,0x4(%esi)
 874d1d3:	0f 84 97 03 00 00    	je     874d570 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x450>
 874d1d9:	8b 93 4c ff ff ff    	mov    -0xb4(%ebx),%edx
 874d1df:	c7 00 0c 00 00 00    	movl   $0xc,(%eax)
 874d1e5:	89 50 04             	mov    %edx,0x4(%eax)
 874d1e8:	8b 46 04             	mov    0x4(%esi),%eax
 874d1eb:	83 c0 08             	add    $0x8,%eax
 874d1ee:	3b 46 08             	cmp    0x8(%esi),%eax
 874d1f1:	89 46 04             	mov    %eax,0x4(%esi)
 874d1f4:	0f 84 0e 04 00 00    	je     874d608 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x4e8>
 874d1fa:	8b 93 74 fc ff ff    	mov    -0x38c(%ebx),%edx
 874d200:	c7 00 0d 00 00 00    	movl   $0xd,(%eax)
 874d206:	89 50 04             	mov    %edx,0x4(%eax)
 874d209:	8b 46 04             	mov    0x4(%esi),%eax
 874d20c:	83 c0 08             	add    $0x8,%eax
 874d20f:	3b 46 08             	cmp    0x8(%esi),%eax
 874d212:	89 46 04             	mov    %eax,0x4(%esi)
 874d215:	0f 84 85 04 00 00    	je     874d6a0 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x580>
 874d21b:	8b 93 60 fc ff ff    	mov    -0x3a0(%ebx),%edx
 874d221:	c7 00 0e 00 00 00    	movl   $0xe,(%eax)
 874d227:	89 50 04             	mov    %edx,0x4(%eax)
 874d22a:	8b 46 04             	mov    0x4(%esi),%eax
 874d22d:	83 c0 08             	add    $0x8,%eax
 874d230:	39 46 08             	cmp    %eax,0x8(%esi)
 874d233:	89 46 04             	mov    %eax,0x4(%esi)
 874d236:	0f 84 fc 04 00 00    	je     874d738 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x618>
 874d23c:	8b 93 ec ff ff ff    	mov    -0x14(%ebx),%edx
 874d242:	c7 00 0f 00 00 00    	movl   $0xf,(%eax)
 874d248:	89 50 04             	mov    %edx,0x4(%eax)
 874d24b:	8b 46 04             	mov    0x4(%esi),%eax
 874d24e:	83 c0 08             	add    $0x8,%eax
 874d251:	39 46 08             	cmp    %eax,0x8(%esi)
 874d254:	89 46 04             	mov    %eax,0x4(%esi)
 874d257:	0f 84 73 05 00 00    	je     874d7d0 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x6b0>
 874d25d:	8b 93 a4 ff ff ff    	mov    -0x5c(%ebx),%edx
 874d263:	c7 00 10 00 00 00    	movl   $0x10,(%eax)
 874d269:	89 50 04             	mov    %edx,0x4(%eax)
 874d26c:	8b 46 04             	mov    0x4(%esi),%eax
 874d26f:	83 c0 08             	add    $0x8,%eax
 874d272:	39 46 08             	cmp    %eax,0x8(%esi)
 874d275:	89 46 04             	mov    %eax,0x4(%esi)
 874d278:	0f 84 ea 05 00 00    	je     874d868 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x748>
 874d27e:	8b 93 38 fb ff ff    	mov    -0x4c8(%ebx),%edx
 874d284:	83 46 04 08          	addl   $0x8,0x4(%esi)
 874d288:	c7 00 14 00 00 00    	movl   $0x14,(%eax)
 874d28e:	89 50 04             	mov    %edx,0x4(%eax)
 874d291:	83 c4 2c             	add    $0x2c,%esp
 874d294:	5b                   	pop    %ebx
 874d295:	5e                   	pop    %esi
 874d296:	5f                   	pop    %edi
 874d297:	5d                   	pop    %ebp
 874d298:	c3                   	ret
 874d299:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 874d2a0:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874d2a5:	c7 04 24 50 00 00 00 	movl   $0x50,(%esp)
 874d2ac:	e8 9f 50 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 874d2b1:	8b 7e 04             	mov    0x4(%esi),%edi
 874d2b4:	8b 0e                	mov    (%esi),%ecx
 874d2b6:	39 cf                	cmp    %ecx,%edi
 874d2b8:	89 c2                	mov    %eax,%edx
 874d2ba:	74 32                	je     874d2ee <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x1ce>
 874d2bc:	8d 51 08             	lea    0x8(%ecx),%edx
 874d2bf:	29 d7                	sub    %edx,%edi
 874d2c1:	31 d2                	xor    %edx,%edx
 874d2c3:	c1 ef 03             	shr    $0x3,%edi
 874d2c6:	83 c7 01             	add    $0x1,%edi
 874d2c9:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 874d2cc:	89 75 e0             	mov    %esi,-0x20(%ebp)
 874d2cf:	90                   	nop
 874d2d0:	8b 34 d1             	mov    (%ecx,%edx,8),%esi
 874d2d3:	8b 7c d1 04          	mov    0x4(%ecx,%edx,8),%edi
 874d2d7:	89 34 d0             	mov    %esi,(%eax,%edx,8)
 874d2da:	89 7c d0 04          	mov    %edi,0x4(%eax,%edx,8)
 874d2de:	83 c2 01             	add    $0x1,%edx
 874d2e1:	3b 55 e4             	cmp    -0x1c(%ebp),%edx
 874d2e4:	75 ea                	jne    874d2d0 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x1b0>
 874d2e6:	8b 75 e0             	mov    -0x20(%ebp),%esi
 874d2e9:	8d 14 d0             	lea    (%eax,%edx,8),%edx
 874d2ec:	8b 3e                	mov    (%esi),%edi
 874d2ee:	89 06                	mov    %eax,(%esi)
 874d2f0:	83 c0 50             	add    $0x50,%eax
 874d2f3:	89 56 04             	mov    %edx,0x4(%esi)
 874d2f6:	89 46 08             	mov    %eax,0x8(%esi)
 874d2f9:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874d2fe:	89 3c 24             	mov    %edi,(%esp)
 874d301:	e8 ea 35 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874d306:	8b 56 08             	mov    0x8(%esi),%edx
 874d309:	8b 46 04             	mov    0x4(%esi),%eax
 874d30c:	39 d0                	cmp    %edx,%eax
 874d30e:	0f 85 41 fe ff ff    	jne    874d155 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x35>
 874d314:	2b 16                	sub    (%esi),%edx
 874d316:	c1 fa 03             	sar    $0x3,%edx
 874d319:	8d 44 12 01          	lea    0x1(%edx,%edx,1),%eax
 874d31d:	c1 e0 03             	shl    $0x3,%eax
 874d320:	89 45 e0             	mov    %eax,-0x20(%ebp)
 874d323:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874d328:	89 04 24             	mov    %eax,(%esp)
 874d32b:	e8 20 50 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 874d330:	8b 7e 04             	mov    0x4(%esi),%edi
 874d333:	8b 0e                	mov    (%esi),%ecx
 874d335:	39 cf                	cmp    %ecx,%edi
 874d337:	89 c2                	mov    %eax,%edx
 874d339:	74 31                	je     874d36c <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x24c>
 874d33b:	8d 51 08             	lea    0x8(%ecx),%edx
 874d33e:	29 d7                	sub    %edx,%edi
 874d340:	31 d2                	xor    %edx,%edx
 874d342:	c1 ef 03             	shr    $0x3,%edi
 874d345:	83 c7 01             	add    $0x1,%edi
 874d348:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 874d34b:	89 75 dc             	mov    %esi,-0x24(%ebp)
 874d34e:	66 90                	xchg   %ax,%ax
 874d350:	8b 34 d1             	mov    (%ecx,%edx,8),%esi
 874d353:	8b 7c d1 04          	mov    0x4(%ecx,%edx,8),%edi
 874d357:	89 34 d0             	mov    %esi,(%eax,%edx,8)
 874d35a:	89 7c d0 04          	mov    %edi,0x4(%eax,%edx,8)
 874d35e:	83 c2 01             	add    $0x1,%edx
 874d361:	3b 55 e4             	cmp    -0x1c(%ebp),%edx
 874d364:	75 ea                	jne    874d350 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x230>
 874d366:	8b 75 dc             	mov    -0x24(%ebp),%esi
 874d369:	8d 14 d0             	lea    (%eax,%edx,8),%edx
 874d36c:	8b 8b 2c ff ff ff    	mov    -0xd4(%ebx),%ecx
 874d372:	c7 02 00 00 00 00    	movl   $0x0,(%edx)
 874d378:	89 4a 04             	mov    %ecx,0x4(%edx)
 874d37b:	8b 0e                	mov    (%esi),%ecx
 874d37d:	83 c2 08             	add    $0x8,%edx
 874d380:	89 06                	mov    %eax,(%esi)
 874d382:	03 45 e0             	add    -0x20(%ebp),%eax
 874d385:	89 56 04             	mov    %edx,0x4(%esi)
 874d388:	89 46 08             	mov    %eax,0x8(%esi)
 874d38b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874d390:	89 0c 24             	mov    %ecx,(%esp)
 874d393:	e8 58 35 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874d398:	8b 46 04             	mov    0x4(%esi),%eax
 874d39b:	39 46 08             	cmp    %eax,0x8(%esi)
 874d39e:	0f 85 d2 fd ff ff    	jne    874d176 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x56>
 874d3a4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 874d3a8:	2b 06                	sub    (%esi),%eax
 874d3aa:	c1 f8 03             	sar    $0x3,%eax
 874d3ad:	8d 44 00 01          	lea    0x1(%eax,%eax,1),%eax
 874d3b1:	c1 e0 03             	shl    $0x3,%eax
 874d3b4:	89 45 e0             	mov    %eax,-0x20(%ebp)
 874d3b7:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874d3bc:	89 04 24             	mov    %eax,(%esp)
 874d3bf:	e8 8c 4f 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 874d3c4:	8b 7e 04             	mov    0x4(%esi),%edi
 874d3c7:	8b 0e                	mov    (%esi),%ecx
 874d3c9:	39 cf                	cmp    %ecx,%edi
 874d3cb:	89 c2                	mov    %eax,%edx
 874d3cd:	74 35                	je     874d404 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x2e4>
 874d3cf:	8d 51 08             	lea    0x8(%ecx),%edx
 874d3d2:	29 d7                	sub    %edx,%edi
 874d3d4:	31 d2                	xor    %edx,%edx
 874d3d6:	c1 ef 03             	shr    $0x3,%edi
 874d3d9:	83 c7 01             	add    $0x1,%edi
 874d3dc:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 874d3df:	89 75 dc             	mov    %esi,-0x24(%ebp)
 874d3e2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874d3e8:	8b 34 d1             	mov    (%ecx,%edx,8),%esi
 874d3eb:	8b 7c d1 04          	mov    0x4(%ecx,%edx,8),%edi
 874d3ef:	89 34 d0             	mov    %esi,(%eax,%edx,8)
 874d3f2:	89 7c d0 04          	mov    %edi,0x4(%eax,%edx,8)
 874d3f6:	83 c2 01             	add    $0x1,%edx
 874d3f9:	3b 55 e4             	cmp    -0x1c(%ebp),%edx
 874d3fc:	75 ea                	jne    874d3e8 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x2c8>
 874d3fe:	8b 75 dc             	mov    -0x24(%ebp),%esi
 874d401:	8d 14 d0             	lea    (%eax,%edx,8),%edx
 874d404:	8b 8b 90 fe ff ff    	mov    -0x170(%ebx),%ecx
 874d40a:	c7 02 01 00 00 00    	movl   $0x1,(%edx)
 874d410:	89 4a 04             	mov    %ecx,0x4(%edx)
 874d413:	8b 0e                	mov    (%esi),%ecx
 874d415:	83 c2 08             	add    $0x8,%edx
 874d418:	89 06                	mov    %eax,(%esi)
 874d41a:	03 45 e0             	add    -0x20(%ebp),%eax
 874d41d:	89 56 04             	mov    %edx,0x4(%esi)
 874d420:	89 46 08             	mov    %eax,0x8(%esi)
 874d423:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874d428:	89 0c 24             	mov    %ecx,(%esp)
 874d42b:	e8 c0 34 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874d430:	8b 46 04             	mov    0x4(%esi),%eax
 874d433:	39 46 08             	cmp    %eax,0x8(%esi)
 874d436:	0f 85 5b fd ff ff    	jne    874d197 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x77>
 874d43c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 874d440:	2b 06                	sub    (%esi),%eax
 874d442:	c1 f8 03             	sar    $0x3,%eax
 874d445:	8d 44 00 01          	lea    0x1(%eax,%eax,1),%eax
 874d449:	c1 e0 03             	shl    $0x3,%eax
 874d44c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 874d44f:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874d454:	89 04 24             	mov    %eax,(%esp)
 874d457:	e8 f4 4e 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 874d45c:	8b 7e 04             	mov    0x4(%esi),%edi
 874d45f:	8b 0e                	mov    (%esi),%ecx
 874d461:	39 cf                	cmp    %ecx,%edi
 874d463:	89 c2                	mov    %eax,%edx
 874d465:	74 35                	je     874d49c <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x37c>
 874d467:	8d 51 08             	lea    0x8(%ecx),%edx
 874d46a:	29 d7                	sub    %edx,%edi
 874d46c:	31 d2                	xor    %edx,%edx
 874d46e:	c1 ef 03             	shr    $0x3,%edi
 874d471:	83 c7 01             	add    $0x1,%edi
 874d474:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 874d477:	89 75 dc             	mov    %esi,-0x24(%ebp)
 874d47a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874d480:	8b 34 d1             	mov    (%ecx,%edx,8),%esi
 874d483:	8b 7c d1 04          	mov    0x4(%ecx,%edx,8),%edi
 874d487:	89 34 d0             	mov    %esi,(%eax,%edx,8)
 874d48a:	89 7c d0 04          	mov    %edi,0x4(%eax,%edx,8)
 874d48e:	83 c2 01             	add    $0x1,%edx
 874d491:	3b 55 e4             	cmp    -0x1c(%ebp),%edx
 874d494:	75 ea                	jne    874d480 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x360>
 874d496:	8b 75 dc             	mov    -0x24(%ebp),%esi
 874d499:	8d 14 d0             	lea    (%eax,%edx,8),%edx
 874d49c:	8b 8b 10 ff ff ff    	mov    -0xf0(%ebx),%ecx
 874d4a2:	c7 02 02 00 00 00    	movl   $0x2,(%edx)
 874d4a8:	89 4a 04             	mov    %ecx,0x4(%edx)
 874d4ab:	8b 0e                	mov    (%esi),%ecx
 874d4ad:	83 c2 08             	add    $0x8,%edx
 874d4b0:	89 06                	mov    %eax,(%esi)
 874d4b2:	03 45 e0             	add    -0x20(%ebp),%eax
 874d4b5:	89 56 04             	mov    %edx,0x4(%esi)
 874d4b8:	89 46 08             	mov    %eax,0x8(%esi)
 874d4bb:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874d4c0:	89 0c 24             	mov    %ecx,(%esp)
 874d4c3:	e8 28 34 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874d4c8:	8b 46 04             	mov    0x4(%esi),%eax
 874d4cb:	39 46 08             	cmp    %eax,0x8(%esi)
 874d4ce:	0f 85 e4 fc ff ff    	jne    874d1b8 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x98>
 874d4d4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 874d4d8:	2b 06                	sub    (%esi),%eax
 874d4da:	c1 f8 03             	sar    $0x3,%eax
 874d4dd:	8d 44 00 01          	lea    0x1(%eax,%eax,1),%eax
 874d4e1:	c1 e0 03             	shl    $0x3,%eax
 874d4e4:	89 45 e0             	mov    %eax,-0x20(%ebp)
 874d4e7:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874d4ec:	89 04 24             	mov    %eax,(%esp)
 874d4ef:	e8 5c 4e 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 874d4f4:	8b 7e 04             	mov    0x4(%esi),%edi
 874d4f7:	8b 0e                	mov    (%esi),%ecx
 874d4f9:	39 cf                	cmp    %ecx,%edi
 874d4fb:	89 c2                	mov    %eax,%edx
 874d4fd:	74 35                	je     874d534 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x414>
 874d4ff:	8d 51 08             	lea    0x8(%ecx),%edx
 874d502:	29 d7                	sub    %edx,%edi
 874d504:	31 d2                	xor    %edx,%edx
 874d506:	c1 ef 03             	shr    $0x3,%edi
 874d509:	83 c7 01             	add    $0x1,%edi
 874d50c:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 874d50f:	89 75 dc             	mov    %esi,-0x24(%ebp)
 874d512:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874d518:	8b 34 d1             	mov    (%ecx,%edx,8),%esi
 874d51b:	8b 7c d1 04          	mov    0x4(%ecx,%edx,8),%edi
 874d51f:	89 34 d0             	mov    %esi,(%eax,%edx,8)
 874d522:	89 7c d0 04          	mov    %edi,0x4(%eax,%edx,8)
 874d526:	83 c2 01             	add    $0x1,%edx
 874d529:	3b 55 e4             	cmp    -0x1c(%ebp),%edx
 874d52c:	75 ea                	jne    874d518 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x3f8>
 874d52e:	8b 75 dc             	mov    -0x24(%ebp),%esi
 874d531:	8d 14 d0             	lea    (%eax,%edx,8),%edx
 874d534:	8b 8b dc ff ff ff    	mov    -0x24(%ebx),%ecx
 874d53a:	c7 02 0b 00 00 00    	movl   $0xb,(%edx)
 874d540:	89 4a 04             	mov    %ecx,0x4(%edx)
 874d543:	8b 0e                	mov    (%esi),%ecx
 874d545:	83 c2 08             	add    $0x8,%edx
 874d548:	89 06                	mov    %eax,(%esi)
 874d54a:	03 45 e0             	add    -0x20(%ebp),%eax
 874d54d:	89 56 04             	mov    %edx,0x4(%esi)
 874d550:	89 46 08             	mov    %eax,0x8(%esi)
 874d553:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874d558:	89 0c 24             	mov    %ecx,(%esp)
 874d55b:	e8 90 33 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874d560:	8b 46 04             	mov    0x4(%esi),%eax
 874d563:	39 46 08             	cmp    %eax,0x8(%esi)
 874d566:	0f 85 6d fc ff ff    	jne    874d1d9 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0xb9>
 874d56c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 874d570:	2b 06                	sub    (%esi),%eax
 874d572:	c1 f8 03             	sar    $0x3,%eax
 874d575:	8d 44 00 01          	lea    0x1(%eax,%eax,1),%eax
 874d579:	c1 e0 03             	shl    $0x3,%eax
 874d57c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 874d57f:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874d584:	89 04 24             	mov    %eax,(%esp)
 874d587:	e8 c4 4d 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 874d58c:	8b 7e 04             	mov    0x4(%esi),%edi
 874d58f:	8b 0e                	mov    (%esi),%ecx
 874d591:	39 cf                	cmp    %ecx,%edi
 874d593:	89 c2                	mov    %eax,%edx
 874d595:	74 35                	je     874d5cc <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x4ac>
 874d597:	8d 51 08             	lea    0x8(%ecx),%edx
 874d59a:	29 d7                	sub    %edx,%edi
 874d59c:	31 d2                	xor    %edx,%edx
 874d59e:	c1 ef 03             	shr    $0x3,%edi
 874d5a1:	83 c7 01             	add    $0x1,%edi
 874d5a4:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 874d5a7:	89 75 dc             	mov    %esi,-0x24(%ebp)
 874d5aa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874d5b0:	8b 34 d1             	mov    (%ecx,%edx,8),%esi
 874d5b3:	8b 7c d1 04          	mov    0x4(%ecx,%edx,8),%edi
 874d5b7:	89 34 d0             	mov    %esi,(%eax,%edx,8)
 874d5ba:	89 7c d0 04          	mov    %edi,0x4(%eax,%edx,8)
 874d5be:	83 c2 01             	add    $0x1,%edx
 874d5c1:	3b 55 e4             	cmp    -0x1c(%ebp),%edx
 874d5c4:	75 ea                	jne    874d5b0 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x490>
 874d5c6:	8b 75 dc             	mov    -0x24(%ebp),%esi
 874d5c9:	8d 14 d0             	lea    (%eax,%edx,8),%edx
 874d5cc:	8b 8b 4c ff ff ff    	mov    -0xb4(%ebx),%ecx
 874d5d2:	c7 02 0c 00 00 00    	movl   $0xc,(%edx)
 874d5d8:	89 4a 04             	mov    %ecx,0x4(%edx)
 874d5db:	8b 0e                	mov    (%esi),%ecx
 874d5dd:	83 c2 08             	add    $0x8,%edx
 874d5e0:	89 06                	mov    %eax,(%esi)
 874d5e2:	03 45 e0             	add    -0x20(%ebp),%eax
 874d5e5:	89 56 04             	mov    %edx,0x4(%esi)
 874d5e8:	89 46 08             	mov    %eax,0x8(%esi)
 874d5eb:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874d5f0:	89 0c 24             	mov    %ecx,(%esp)
 874d5f3:	e8 f8 32 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874d5f8:	8b 46 04             	mov    0x4(%esi),%eax
 874d5fb:	3b 46 08             	cmp    0x8(%esi),%eax
 874d5fe:	0f 85 f6 fb ff ff    	jne    874d1fa <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0xda>
 874d604:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 874d608:	2b 06                	sub    (%esi),%eax
 874d60a:	c1 f8 03             	sar    $0x3,%eax
 874d60d:	8d 44 00 01          	lea    0x1(%eax,%eax,1),%eax
 874d611:	c1 e0 03             	shl    $0x3,%eax
 874d614:	89 45 e0             	mov    %eax,-0x20(%ebp)
 874d617:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874d61c:	89 04 24             	mov    %eax,(%esp)
 874d61f:	e8 2c 4d 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 874d624:	8b 7e 04             	mov    0x4(%esi),%edi
 874d627:	8b 0e                	mov    (%esi),%ecx
 874d629:	39 cf                	cmp    %ecx,%edi
 874d62b:	89 c2                	mov    %eax,%edx
 874d62d:	74 35                	je     874d664 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x544>
 874d62f:	8d 51 08             	lea    0x8(%ecx),%edx
 874d632:	29 d7                	sub    %edx,%edi
 874d634:	31 d2                	xor    %edx,%edx
 874d636:	c1 ef 03             	shr    $0x3,%edi
 874d639:	83 c7 01             	add    $0x1,%edi
 874d63c:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 874d63f:	89 75 dc             	mov    %esi,-0x24(%ebp)
 874d642:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874d648:	8b 34 d1             	mov    (%ecx,%edx,8),%esi
 874d64b:	8b 7c d1 04          	mov    0x4(%ecx,%edx,8),%edi
 874d64f:	89 34 d0             	mov    %esi,(%eax,%edx,8)
 874d652:	89 7c d0 04          	mov    %edi,0x4(%eax,%edx,8)
 874d656:	83 c2 01             	add    $0x1,%edx
 874d659:	3b 55 e4             	cmp    -0x1c(%ebp),%edx
 874d65c:	75 ea                	jne    874d648 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x528>
 874d65e:	8b 75 dc             	mov    -0x24(%ebp),%esi
 874d661:	8d 14 d0             	lea    (%eax,%edx,8),%edx
 874d664:	8b 8b 74 fc ff ff    	mov    -0x38c(%ebx),%ecx
 874d66a:	c7 02 0d 00 00 00    	movl   $0xd,(%edx)
 874d670:	89 4a 04             	mov    %ecx,0x4(%edx)
 874d673:	8b 0e                	mov    (%esi),%ecx
 874d675:	83 c2 08             	add    $0x8,%edx
 874d678:	89 06                	mov    %eax,(%esi)
 874d67a:	03 45 e0             	add    -0x20(%ebp),%eax
 874d67d:	89 56 04             	mov    %edx,0x4(%esi)
 874d680:	89 46 08             	mov    %eax,0x8(%esi)
 874d683:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874d688:	89 0c 24             	mov    %ecx,(%esp)
 874d68b:	e8 60 32 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874d690:	8b 46 04             	mov    0x4(%esi),%eax
 874d693:	3b 46 08             	cmp    0x8(%esi),%eax
 874d696:	0f 85 7f fb ff ff    	jne    874d21b <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0xfb>
 874d69c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 874d6a0:	2b 06                	sub    (%esi),%eax
 874d6a2:	c1 f8 03             	sar    $0x3,%eax
 874d6a5:	8d 44 00 01          	lea    0x1(%eax,%eax,1),%eax
 874d6a9:	c1 e0 03             	shl    $0x3,%eax
 874d6ac:	89 45 e0             	mov    %eax,-0x20(%ebp)
 874d6af:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874d6b4:	89 04 24             	mov    %eax,(%esp)
 874d6b7:	e8 94 4c 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 874d6bc:	8b 7e 04             	mov    0x4(%esi),%edi
 874d6bf:	8b 0e                	mov    (%esi),%ecx
 874d6c1:	39 cf                	cmp    %ecx,%edi
 874d6c3:	89 c2                	mov    %eax,%edx
 874d6c5:	74 35                	je     874d6fc <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x5dc>
 874d6c7:	8d 51 08             	lea    0x8(%ecx),%edx
 874d6ca:	29 d7                	sub    %edx,%edi
 874d6cc:	31 d2                	xor    %edx,%edx
 874d6ce:	c1 ef 03             	shr    $0x3,%edi
 874d6d1:	83 c7 01             	add    $0x1,%edi
 874d6d4:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 874d6d7:	89 75 dc             	mov    %esi,-0x24(%ebp)
 874d6da:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874d6e0:	8b 34 d1             	mov    (%ecx,%edx,8),%esi
 874d6e3:	8b 7c d1 04          	mov    0x4(%ecx,%edx,8),%edi
 874d6e7:	89 34 d0             	mov    %esi,(%eax,%edx,8)
 874d6ea:	89 7c d0 04          	mov    %edi,0x4(%eax,%edx,8)
 874d6ee:	83 c2 01             	add    $0x1,%edx
 874d6f1:	3b 55 e4             	cmp    -0x1c(%ebp),%edx
 874d6f4:	75 ea                	jne    874d6e0 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x5c0>
 874d6f6:	8b 75 dc             	mov    -0x24(%ebp),%esi
 874d6f9:	8d 14 d0             	lea    (%eax,%edx,8),%edx
 874d6fc:	8b 8b 60 fc ff ff    	mov    -0x3a0(%ebx),%ecx
 874d702:	c7 02 0e 00 00 00    	movl   $0xe,(%edx)
 874d708:	89 4a 04             	mov    %ecx,0x4(%edx)
 874d70b:	8b 0e                	mov    (%esi),%ecx
 874d70d:	83 c2 08             	add    $0x8,%edx
 874d710:	89 06                	mov    %eax,(%esi)
 874d712:	03 45 e0             	add    -0x20(%ebp),%eax
 874d715:	89 56 04             	mov    %edx,0x4(%esi)
 874d718:	89 46 08             	mov    %eax,0x8(%esi)
 874d71b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874d720:	89 0c 24             	mov    %ecx,(%esp)
 874d723:	e8 c8 31 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874d728:	8b 46 04             	mov    0x4(%esi),%eax
 874d72b:	39 46 08             	cmp    %eax,0x8(%esi)
 874d72e:	0f 85 08 fb ff ff    	jne    874d23c <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x11c>
 874d734:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 874d738:	2b 06                	sub    (%esi),%eax
 874d73a:	c1 f8 03             	sar    $0x3,%eax
 874d73d:	8d 44 00 01          	lea    0x1(%eax,%eax,1),%eax
 874d741:	c1 e0 03             	shl    $0x3,%eax
 874d744:	89 45 e0             	mov    %eax,-0x20(%ebp)
 874d747:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874d74c:	89 04 24             	mov    %eax,(%esp)
 874d74f:	e8 fc 4b 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 874d754:	8b 7e 04             	mov    0x4(%esi),%edi
 874d757:	8b 0e                	mov    (%esi),%ecx
 874d759:	39 cf                	cmp    %ecx,%edi
 874d75b:	89 c2                	mov    %eax,%edx
 874d75d:	74 35                	je     874d794 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x674>
 874d75f:	8d 51 08             	lea    0x8(%ecx),%edx
 874d762:	29 d7                	sub    %edx,%edi
 874d764:	31 d2                	xor    %edx,%edx
 874d766:	c1 ef 03             	shr    $0x3,%edi
 874d769:	83 c7 01             	add    $0x1,%edi
 874d76c:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 874d76f:	89 75 dc             	mov    %esi,-0x24(%ebp)
 874d772:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874d778:	8b 34 d1             	mov    (%ecx,%edx,8),%esi
 874d77b:	8b 7c d1 04          	mov    0x4(%ecx,%edx,8),%edi
 874d77f:	89 34 d0             	mov    %esi,(%eax,%edx,8)
 874d782:	89 7c d0 04          	mov    %edi,0x4(%eax,%edx,8)
 874d786:	83 c2 01             	add    $0x1,%edx
 874d789:	3b 55 e4             	cmp    -0x1c(%ebp),%edx
 874d78c:	75 ea                	jne    874d778 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x658>
 874d78e:	8b 75 dc             	mov    -0x24(%ebp),%esi
 874d791:	8d 14 d0             	lea    (%eax,%edx,8),%edx
 874d794:	8b 8b ec ff ff ff    	mov    -0x14(%ebx),%ecx
 874d79a:	c7 02 0f 00 00 00    	movl   $0xf,(%edx)
 874d7a0:	89 4a 04             	mov    %ecx,0x4(%edx)
 874d7a3:	8b 0e                	mov    (%esi),%ecx
 874d7a5:	83 c2 08             	add    $0x8,%edx
 874d7a8:	89 06                	mov    %eax,(%esi)
 874d7aa:	03 45 e0             	add    -0x20(%ebp),%eax
 874d7ad:	89 56 04             	mov    %edx,0x4(%esi)
 874d7b0:	89 46 08             	mov    %eax,0x8(%esi)
 874d7b3:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874d7b8:	89 0c 24             	mov    %ecx,(%esp)
 874d7bb:	e8 30 31 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874d7c0:	8b 46 04             	mov    0x4(%esi),%eax
 874d7c3:	39 46 08             	cmp    %eax,0x8(%esi)
 874d7c6:	0f 85 91 fa ff ff    	jne    874d25d <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x13d>
 874d7cc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 874d7d0:	2b 06                	sub    (%esi),%eax
 874d7d2:	c1 f8 03             	sar    $0x3,%eax
 874d7d5:	8d 44 00 01          	lea    0x1(%eax,%eax,1),%eax
 874d7d9:	c1 e0 03             	shl    $0x3,%eax
 874d7dc:	89 45 e0             	mov    %eax,-0x20(%ebp)
 874d7df:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874d7e4:	89 04 24             	mov    %eax,(%esp)
 874d7e7:	e8 64 4b 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 874d7ec:	8b 7e 04             	mov    0x4(%esi),%edi
 874d7ef:	8b 0e                	mov    (%esi),%ecx
 874d7f1:	39 cf                	cmp    %ecx,%edi
 874d7f3:	89 c2                	mov    %eax,%edx
 874d7f5:	74 35                	je     874d82c <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x70c>
 874d7f7:	8d 51 08             	lea    0x8(%ecx),%edx
 874d7fa:	29 d7                	sub    %edx,%edi
 874d7fc:	31 d2                	xor    %edx,%edx
 874d7fe:	c1 ef 03             	shr    $0x3,%edi
 874d801:	83 c7 01             	add    $0x1,%edi
 874d804:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 874d807:	89 75 dc             	mov    %esi,-0x24(%ebp)
 874d80a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874d810:	8b 34 d1             	mov    (%ecx,%edx,8),%esi
 874d813:	8b 7c d1 04          	mov    0x4(%ecx,%edx,8),%edi
 874d817:	89 34 d0             	mov    %esi,(%eax,%edx,8)
 874d81a:	89 7c d0 04          	mov    %edi,0x4(%eax,%edx,8)
 874d81e:	83 c2 01             	add    $0x1,%edx
 874d821:	3b 55 e4             	cmp    -0x1c(%ebp),%edx
 874d824:	75 ea                	jne    874d810 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x6f0>
 874d826:	8b 75 dc             	mov    -0x24(%ebp),%esi
 874d829:	8d 14 d0             	lea    (%eax,%edx,8),%edx
 874d82c:	8b 8b a4 ff ff ff    	mov    -0x5c(%ebx),%ecx
 874d832:	c7 02 10 00 00 00    	movl   $0x10,(%edx)
 874d838:	89 4a 04             	mov    %ecx,0x4(%edx)
 874d83b:	8b 0e                	mov    (%esi),%ecx
 874d83d:	83 c2 08             	add    $0x8,%edx
 874d840:	89 06                	mov    %eax,(%esi)
 874d842:	03 45 e0             	add    -0x20(%ebp),%eax
 874d845:	89 56 04             	mov    %edx,0x4(%esi)
 874d848:	89 46 08             	mov    %eax,0x8(%esi)
 874d84b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874d850:	89 0c 24             	mov    %ecx,(%esp)
 874d853:	e8 98 30 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874d858:	8b 46 04             	mov    0x4(%esi),%eax
 874d85b:	39 46 08             	cmp    %eax,0x8(%esi)
 874d85e:	0f 85 1a fa ff ff    	jne    874d27e <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x15e>
 874d864:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 874d868:	2b 06                	sub    (%esi),%eax
 874d86a:	c1 f8 03             	sar    $0x3,%eax
 874d86d:	8d 44 00 01          	lea    0x1(%eax,%eax,1),%eax
 874d871:	c1 e0 03             	shl    $0x3,%eax
 874d874:	89 45 e0             	mov    %eax,-0x20(%ebp)
 874d877:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874d87c:	89 04 24             	mov    %eax,(%esp)
 874d87f:	e8 cc 4a 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 874d884:	8b 7e 04             	mov    0x4(%esi),%edi
 874d887:	8b 0e                	mov    (%esi),%ecx
 874d889:	39 cf                	cmp    %ecx,%edi
 874d88b:	89 c2                	mov    %eax,%edx
 874d88d:	74 35                	je     874d8c4 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x7a4>
 874d88f:	8d 51 08             	lea    0x8(%ecx),%edx
 874d892:	29 d7                	sub    %edx,%edi
 874d894:	31 d2                	xor    %edx,%edx
 874d896:	c1 ef 03             	shr    $0x3,%edi
 874d899:	83 c7 01             	add    $0x1,%edi
 874d89c:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 874d89f:	89 75 dc             	mov    %esi,-0x24(%ebp)
 874d8a2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874d8a8:	8b 34 d1             	mov    (%ecx,%edx,8),%esi
 874d8ab:	8b 7c d1 04          	mov    0x4(%ecx,%edx,8),%edi
 874d8af:	89 34 d0             	mov    %esi,(%eax,%edx,8)
 874d8b2:	89 7c d0 04          	mov    %edi,0x4(%eax,%edx,8)
 874d8b6:	83 c2 01             	add    $0x1,%edx
 874d8b9:	3b 55 e4             	cmp    -0x1c(%ebp),%edx
 874d8bc:	75 ea                	jne    874d8a8 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE+0x788>
 874d8be:	8b 75 dc             	mov    -0x24(%ebp),%esi
 874d8c1:	8d 14 d0             	lea    (%eax,%edx,8),%edx
 874d8c4:	8b 8b 38 fb ff ff    	mov    -0x4c8(%ebx),%ecx
 874d8ca:	c7 02 14 00 00 00    	movl   $0x14,(%edx)
 874d8d0:	89 4a 04             	mov    %ecx,0x4(%edx)
 874d8d3:	8b 0e                	mov    (%esi),%ecx
 874d8d5:	83 c2 08             	add    $0x8,%edx
 874d8d8:	89 06                	mov    %eax,(%esi)
 874d8da:	03 45 e0             	add    -0x20(%ebp),%eax
 874d8dd:	89 56 04             	mov    %edx,0x4(%esi)
 874d8e0:	89 46 08             	mov    %eax,0x8(%esi)
 874d8e3:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874d8e8:	89 0c 24             	mov    %ecx,(%esp)
 874d8eb:	e8 00 30 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874d8f0:	83 c4 2c             	add    $0x2c,%esp
 874d8f3:	5b                   	pop    %ebx
 874d8f4:	5e                   	pop    %esi
 874d8f5:	5f                   	pop    %edi
 874d8f6:	5d                   	pop    %ebp
 874d8f7:	c3                   	ret
 874d8f8:	90                   	nop
 874d8f9:	90                   	nop
 874d8fa:	90                   	nop
 874d8fb:	90                   	nop
 874d8fc:	90                   	nop
 874d8fd:	90                   	nop
 874d8fe:	90                   	nop
 874d8ff:	90                   	nop

0874d900 <_ZN5yaSSL13ServerKeyBaseD1Ev>:
 874d900:	e8 bf 6c fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 874d905:	81 c1 93 f2 c1 00    	add    $0xc1f293,%ecx
 874d90b:	55                   	push   %ebp
 874d90c:	89 e5                	mov    %esp,%ebp
 874d90e:	8b 81 a8 fb ff ff    	mov    -0x458(%ecx),%eax
 874d914:	8d 50 08             	lea    0x8(%eax),%edx
 874d917:	8b 45 08             	mov    0x8(%ebp),%eax
 874d91a:	89 10                	mov    %edx,(%eax)
 874d91c:	5d                   	pop    %ebp
 874d91d:	c3                   	ret
 874d91e:	90                   	nop
 874d91f:	90                   	nop

0874d920 <_ZN5yaSSL13ServerKeyBaseD0Ev>:
 874d920:	e8 9f 6c fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 874d925:	81 c1 73 f2 c1 00    	add    $0xc1f273,%ecx
 874d92b:	55                   	push   %ebp
 874d92c:	89 e5                	mov    %esp,%ebp
 874d92e:	8b 81 a8 fb ff ff    	mov    -0x458(%ecx),%eax
 874d934:	8d 50 08             	lea    0x8(%eax),%edx
 874d937:	8b 45 08             	mov    0x8(%ebp),%eax
 874d93a:	89 10                	mov    %edx,(%eax)
 874d93c:	5d                   	pop    %ebp
 874d93d:	c3                   	ret
 874d93e:	90                   	nop
 874d93f:	90                   	nop

0874d940 <_ZN5yaSSL13ServerKeyBase5buildERNS_3SSLE>:
 874d940:	55                   	push   %ebp
 874d941:	89 e5                	mov    %esp,%ebp
 874d943:	5d                   	pop    %ebp
 874d944:	c3                   	ret
 874d945:	90                   	nop
 874d946:	90                   	nop
 874d947:	90                   	nop
 874d948:	90                   	nop
 874d949:	90                   	nop
 874d94a:	90                   	nop
 874d94b:	90                   	nop
 874d94c:	90                   	nop
 874d94d:	90                   	nop
 874d94e:	90                   	nop
 874d94f:	90                   	nop

0874d950 <_ZN5yaSSL13ServerKeyBase4readERNS_3SSLERNS_12input_bufferE>:
 874d950:	55                   	push   %ebp
 874d951:	89 e5                	mov    %esp,%ebp
 874d953:	5d                   	pop    %ebp
 874d954:	c3                   	ret
 874d955:	90                   	nop
 874d956:	90                   	nop
 874d957:	90                   	nop
 874d958:	90                   	nop
 874d959:	90                   	nop
 874d95a:	90                   	nop
 874d95b:	90                   	nop
 874d95c:	90                   	nop
 874d95d:	90                   	nop
 874d95e:	90                   	nop
 874d95f:	90                   	nop

0874d960 <_ZN5yaSSL13ClientKeyBaseD1Ev>:
 874d960:	e8 5f 6c fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 874d965:	81 c1 33 f2 c1 00    	add    $0xc1f233,%ecx
 874d96b:	55                   	push   %ebp
 874d96c:	89 e5                	mov    %esp,%ebp
 874d96e:	8b 81 e8 ff ff ff    	mov    -0x18(%ecx),%eax
 874d974:	8d 50 08             	lea    0x8(%eax),%edx
 874d977:	8b 45 08             	mov    0x8(%ebp),%eax
 874d97a:	89 10                	mov    %edx,(%eax)
 874d97c:	5d                   	pop    %ebp
 874d97d:	c3                   	ret
 874d97e:	90                   	nop
 874d97f:	90                   	nop

0874d980 <_ZN5yaSSL13ClientKeyBaseD0Ev>:
 874d980:	e8 3f 6c fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 874d985:	81 c1 13 f2 c1 00    	add    $0xc1f213,%ecx
 874d98b:	55                   	push   %ebp
 874d98c:	89 e5                	mov    %esp,%ebp
 874d98e:	8b 81 e8 ff ff ff    	mov    -0x18(%ecx),%eax
 874d994:	8d 50 08             	lea    0x8(%eax),%edx
 874d997:	8b 45 08             	mov    0x8(%ebp),%eax
 874d99a:	89 10                	mov    %edx,(%eax)
 874d99c:	5d                   	pop    %ebp
 874d99d:	c3                   	ret
 874d99e:	90                   	nop
 874d99f:	90                   	nop

0874d9a0 <_ZN5yaSSL13ClientKeyBase5buildERNS_3SSLE>:
 874d9a0:	55                   	push   %ebp
 874d9a1:	89 e5                	mov    %esp,%ebp
 874d9a3:	5d                   	pop    %ebp
 874d9a4:	c3                   	ret
 874d9a5:	90                   	nop
 874d9a6:	90                   	nop
 874d9a7:	90                   	nop
 874d9a8:	90                   	nop
 874d9a9:	90                   	nop
 874d9aa:	90                   	nop
 874d9ab:	90                   	nop
 874d9ac:	90                   	nop
 874d9ad:	90                   	nop
 874d9ae:	90                   	nop
 874d9af:	90                   	nop

0874d9b0 <_ZN5yaSSL13ClientKeyBase4readERNS_3SSLERNS_12input_bufferE>:
 874d9b0:	55                   	push   %ebp
 874d9b1:	89 e5                	mov    %esp,%ebp
 874d9b3:	5d                   	pop    %ebp
 874d9b4:	c3                   	ret
 874d9b5:	90                   	nop
 874d9b6:	90                   	nop
 874d9b7:	90                   	nop
 874d9b8:	90                   	nop
 874d9b9:	90                   	nop
 874d9ba:	90                   	nop
 874d9bb:	90                   	nop
 874d9bc:	90                   	nop
 874d9bd:	90                   	nop
 874d9be:	90                   	nop
 874d9bf:	90                   	nop

0874d9c0 <_ZN5yaSSL8FinishedD1Ev>:
 874d9c0:	e8 ff 6b fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 874d9c5:	81 c1 d3 f1 c1 00    	add    $0xc1f1d3,%ecx
 874d9cb:	55                   	push   %ebp
 874d9cc:	89 e5                	mov    %esp,%ebp
 874d9ce:	8b 81 4c fa ff ff    	mov    -0x5b4(%ecx),%eax
 874d9d4:	8d 50 08             	lea    0x8(%eax),%edx
 874d9d7:	8b 45 08             	mov    0x8(%ebp),%eax
 874d9da:	89 10                	mov    %edx,(%eax)
 874d9dc:	5d                   	pop    %ebp
 874d9dd:	c3                   	ret
 874d9de:	90                   	nop
 874d9df:	90                   	nop

0874d9e0 <_ZN5yaSSL8FinishedD0Ev>:
 874d9e0:	e8 df 6b fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 874d9e5:	81 c1 b3 f1 c1 00    	add    $0xc1f1b3,%ecx
 874d9eb:	55                   	push   %ebp
 874d9ec:	89 e5                	mov    %esp,%ebp
 874d9ee:	8b 81 4c fa ff ff    	mov    -0x5b4(%ecx),%eax
 874d9f4:	8d 50 08             	lea    0x8(%eax),%edx
 874d9f7:	8b 45 08             	mov    0x8(%ebp),%eax
 874d9fa:	89 10                	mov    %edx,(%eax)
 874d9fc:	5d                   	pop    %ebp
 874d9fd:	c3                   	ret
 874d9fe:	90                   	nop
 874d9ff:	90                   	nop

0874da00 <_ZN5yaSSL11ClientHelloD1Ev>:
 874da00:	e8 bf 6b fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 874da05:	81 c1 93 f1 c1 00    	add    $0xc1f193,%ecx
 874da0b:	55                   	push   %ebp
 874da0c:	89 e5                	mov    %esp,%ebp
 874da0e:	8b 81 4c fa ff ff    	mov    -0x5b4(%ecx),%eax
 874da14:	8d 50 08             	lea    0x8(%eax),%edx
 874da17:	8b 45 08             	mov    0x8(%ebp),%eax
 874da1a:	89 10                	mov    %edx,(%eax)
 874da1c:	5d                   	pop    %ebp
 874da1d:	c3                   	ret
 874da1e:	90                   	nop
 874da1f:	90                   	nop

0874da20 <_ZN5yaSSL11ClientHelloD0Ev>:
 874da20:	e8 9f 6b fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 874da25:	81 c1 73 f1 c1 00    	add    $0xc1f173,%ecx
 874da2b:	55                   	push   %ebp
 874da2c:	89 e5                	mov    %esp,%ebp
 874da2e:	8b 81 4c fa ff ff    	mov    -0x5b4(%ecx),%eax
 874da34:	8d 50 08             	lea    0x8(%eax),%edx
 874da37:	8b 45 08             	mov    0x8(%ebp),%eax
 874da3a:	89 10                	mov    %edx,(%eax)
 874da3c:	5d                   	pop    %ebp
 874da3d:	c3                   	ret
 874da3e:	90                   	nop
 874da3f:	90                   	nop

0874da40 <_ZN5yaSSL15ServerHelloDoneD1Ev>:
 874da40:	e8 7f 6b fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 874da45:	81 c1 53 f1 c1 00    	add    $0xc1f153,%ecx
 874da4b:	55                   	push   %ebp
 874da4c:	89 e5                	mov    %esp,%ebp
 874da4e:	8b 81 4c fa ff ff    	mov    -0x5b4(%ecx),%eax
 874da54:	8d 50 08             	lea    0x8(%eax),%edx
 874da57:	8b 45 08             	mov    0x8(%ebp),%eax
 874da5a:	89 10                	mov    %edx,(%eax)
 874da5c:	5d                   	pop    %ebp
 874da5d:	c3                   	ret
 874da5e:	90                   	nop
 874da5f:	90                   	nop

0874da60 <_ZN5yaSSL15ServerHelloDoneD0Ev>:
 874da60:	e8 5f 6b fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 874da65:	81 c1 33 f1 c1 00    	add    $0xc1f133,%ecx
 874da6b:	55                   	push   %ebp
 874da6c:	89 e5                	mov    %esp,%ebp
 874da6e:	8b 81 4c fa ff ff    	mov    -0x5b4(%ecx),%eax
 874da74:	8d 50 08             	lea    0x8(%eax),%edx
 874da77:	8b 45 08             	mov    0x8(%ebp),%eax
 874da7a:	89 10                	mov    %edx,(%eax)
 874da7c:	5d                   	pop    %ebp
 874da7d:	c3                   	ret
 874da7e:	90                   	nop
 874da7f:	90                   	nop

0874da80 <_ZN5yaSSL11ServerHelloD1Ev>:
 874da80:	e8 3f 6b fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 874da85:	81 c1 13 f1 c1 00    	add    $0xc1f113,%ecx
 874da8b:	55                   	push   %ebp
 874da8c:	89 e5                	mov    %esp,%ebp
 874da8e:	8b 81 4c fa ff ff    	mov    -0x5b4(%ecx),%eax
 874da94:	8d 50 08             	lea    0x8(%eax),%edx
 874da97:	8b 45 08             	mov    0x8(%ebp),%eax
 874da9a:	89 10                	mov    %edx,(%eax)
 874da9c:	5d                   	pop    %ebp
 874da9d:	c3                   	ret
 874da9e:	90                   	nop
 874da9f:	90                   	nop

0874daa0 <_ZN5yaSSL11ServerHelloD0Ev>:
 874daa0:	e8 1f 6b fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 874daa5:	81 c1 f3 f0 c1 00    	add    $0xc1f0f3,%ecx
 874daab:	55                   	push   %ebp
 874daac:	89 e5                	mov    %esp,%ebp
 874daae:	8b 81 4c fa ff ff    	mov    -0x5b4(%ecx),%eax
 874dab4:	8d 50 08             	lea    0x8(%eax),%edx
 874dab7:	8b 45 08             	mov    0x8(%ebp),%eax
 874daba:	89 10                	mov    %edx,(%eax)
 874dabc:	5d                   	pop    %ebp
 874dabd:	c3                   	ret
 874dabe:	90                   	nop
 874dabf:	90                   	nop

0874dac0 <_ZN5yaSSL11CertificateD1Ev>:
 874dac0:	e8 ff 6a fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 874dac5:	81 c1 d3 f0 c1 00    	add    $0xc1f0d3,%ecx
 874dacb:	55                   	push   %ebp
 874dacc:	89 e5                	mov    %esp,%ebp
 874dace:	8b 81 4c fa ff ff    	mov    -0x5b4(%ecx),%eax
 874dad4:	8d 50 08             	lea    0x8(%eax),%edx
 874dad7:	8b 45 08             	mov    0x8(%ebp),%eax
 874dada:	89 10                	mov    %edx,(%eax)
 874dadc:	5d                   	pop    %ebp
 874dadd:	c3                   	ret
 874dade:	90                   	nop
 874dadf:	90                   	nop

0874dae0 <_ZN5yaSSL11CertificateD0Ev>:
 874dae0:	e8 df 6a fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 874dae5:	81 c1 b3 f0 c1 00    	add    $0xc1f0b3,%ecx
 874daeb:	55                   	push   %ebp
 874daec:	89 e5                	mov    %esp,%ebp
 874daee:	8b 81 4c fa ff ff    	mov    -0x5b4(%ecx),%eax
 874daf4:	8d 50 08             	lea    0x8(%eax),%edx
 874daf7:	8b 45 08             	mov    0x8(%ebp),%eax
 874dafa:	89 10                	mov    %edx,(%eax)
 874dafc:	5d                   	pop    %ebp
 874dafd:	c3                   	ret
 874dafe:	90                   	nop
 874daff:	90                   	nop

0874db00 <_ZN5yaSSL4DataD1Ev>:
 874db00:	e8 bf 6a fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 874db05:	81 c1 93 f0 c1 00    	add    $0xc1f093,%ecx
 874db0b:	55                   	push   %ebp
 874db0c:	89 e5                	mov    %esp,%ebp
 874db0e:	8b 81 e0 fb ff ff    	mov    -0x420(%ecx),%eax
 874db14:	8d 50 08             	lea    0x8(%eax),%edx
 874db17:	8b 45 08             	mov    0x8(%ebp),%eax
 874db1a:	89 10                	mov    %edx,(%eax)
 874db1c:	5d                   	pop    %ebp
 874db1d:	c3                   	ret
 874db1e:	90                   	nop
 874db1f:	90                   	nop

0874db20 <_ZN5yaSSL4DataD0Ev>:
 874db20:	e8 9f 6a fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 874db25:	81 c1 73 f0 c1 00    	add    $0xc1f073,%ecx
 874db2b:	55                   	push   %ebp
 874db2c:	89 e5                	mov    %esp,%ebp
 874db2e:	8b 81 e0 fb ff ff    	mov    -0x420(%ecx),%eax
 874db34:	8d 50 08             	lea    0x8(%eax),%edx
 874db37:	8b 45 08             	mov    0x8(%ebp),%eax
 874db3a:	89 10                	mov    %edx,(%eax)
 874db3c:	5d                   	pop    %ebp
 874db3d:	c3                   	ret
 874db3e:	90                   	nop
 874db3f:	90                   	nop

0874db40 <_ZN5yaSSL5AlertD1Ev>:
 874db40:	e8 7f 6a fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 874db45:	81 c1 53 f0 c1 00    	add    $0xc1f053,%ecx
 874db4b:	55                   	push   %ebp
 874db4c:	89 e5                	mov    %esp,%ebp
 874db4e:	8b 81 e0 fb ff ff    	mov    -0x420(%ecx),%eax
 874db54:	8d 50 08             	lea    0x8(%eax),%edx
 874db57:	8b 45 08             	mov    0x8(%ebp),%eax
 874db5a:	89 10                	mov    %edx,(%eax)
 874db5c:	5d                   	pop    %ebp
 874db5d:	c3                   	ret
 874db5e:	90                   	nop
 874db5f:	90                   	nop

0874db60 <_ZN5yaSSL5AlertD0Ev>:
 874db60:	e8 5f 6a fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 874db65:	81 c1 33 f0 c1 00    	add    $0xc1f033,%ecx
 874db6b:	55                   	push   %ebp
 874db6c:	89 e5                	mov    %esp,%ebp
 874db6e:	8b 81 e0 fb ff ff    	mov    -0x420(%ecx),%eax
 874db74:	8d 50 08             	lea    0x8(%eax),%edx
 874db77:	8b 45 08             	mov    0x8(%ebp),%eax
 874db7a:	89 10                	mov    %edx,(%eax)
 874db7c:	5d                   	pop    %ebp
 874db7d:	c3                   	ret
 874db7e:	90                   	nop
 874db7f:	90                   	nop

0874db80 <_ZN5yaSSL16ChangeCipherSpecD1Ev>:
 874db80:	e8 3f 6a fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 874db85:	81 c1 13 f0 c1 00    	add    $0xc1f013,%ecx
 874db8b:	55                   	push   %ebp
 874db8c:	89 e5                	mov    %esp,%ebp
 874db8e:	8b 81 e0 fb ff ff    	mov    -0x420(%ecx),%eax
 874db94:	8d 50 08             	lea    0x8(%eax),%edx
 874db97:	8b 45 08             	mov    0x8(%ebp),%eax
 874db9a:	89 10                	mov    %edx,(%eax)
 874db9c:	5d                   	pop    %ebp
 874db9d:	c3                   	ret
 874db9e:	90                   	nop
 874db9f:	90                   	nop

0874dba0 <_ZN5yaSSL16ChangeCipherSpecD0Ev>:
 874dba0:	e8 1f 6a fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 874dba5:	81 c1 f3 ef c1 00    	add    $0xc1eff3,%ecx
 874dbab:	55                   	push   %ebp
 874dbac:	89 e5                	mov    %esp,%ebp
 874dbae:	8b 81 e0 fb ff ff    	mov    -0x420(%ecx),%eax
 874dbb4:	8d 50 08             	lea    0x8(%eax),%edx
 874dbb7:	8b 45 08             	mov    0x8(%ebp),%eax
 874dbba:	89 10                	mov    %edx,(%eax)
 874dbbc:	5d                   	pop    %ebp
 874dbbd:	c3                   	ret
 874dbbe:	90                   	nop
 874dbbf:	90                   	nop

0874dbc0 <_ZN5yaSSL12HelloRequestD1Ev>:
 874dbc0:	e8 ff 69 fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 874dbc5:	81 c1 d3 ef c1 00    	add    $0xc1efd3,%ecx
 874dbcb:	55                   	push   %ebp
 874dbcc:	89 e5                	mov    %esp,%ebp
 874dbce:	8b 81 4c fa ff ff    	mov    -0x5b4(%ecx),%eax
 874dbd4:	8d 50 08             	lea    0x8(%eax),%edx
 874dbd7:	8b 45 08             	mov    0x8(%ebp),%eax
 874dbda:	89 10                	mov    %edx,(%eax)
 874dbdc:	5d                   	pop    %ebp
 874dbdd:	c3                   	ret
 874dbde:	90                   	nop
 874dbdf:	90                   	nop

0874dbe0 <_ZN5yaSSL12HelloRequestD0Ev>:
 874dbe0:	e8 df 69 fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 874dbe5:	81 c1 b3 ef c1 00    	add    $0xc1efb3,%ecx
 874dbeb:	55                   	push   %ebp
 874dbec:	89 e5                	mov    %esp,%ebp
 874dbee:	8b 81 4c fa ff ff    	mov    -0x5b4(%ecx),%eax
 874dbf4:	8d 50 08             	lea    0x8(%eax),%edx
 874dbf7:	8b 45 08             	mov    0x8(%ebp),%eax
 874dbfa:	89 10                	mov    %edx,(%eax)
 874dbfc:	5d                   	pop    %ebp
 874dbfd:	c3                   	ret
 874dbfe:	90                   	nop
 874dbff:	90                   	nop

0874dc00 <_ZN5yaSSL15HandShakeHeaderD1Ev>:
 874dc00:	e8 bf 69 fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 874dc05:	81 c1 93 ef c1 00    	add    $0xc1ef93,%ecx
 874dc0b:	55                   	push   %ebp
 874dc0c:	89 e5                	mov    %esp,%ebp
 874dc0e:	8b 81 e0 fb ff ff    	mov    -0x420(%ecx),%eax
 874dc14:	8d 50 08             	lea    0x8(%eax),%edx
 874dc17:	8b 45 08             	mov    0x8(%ebp),%eax
 874dc1a:	89 10                	mov    %edx,(%eax)
 874dc1c:	5d                   	pop    %ebp
 874dc1d:	c3                   	ret
 874dc1e:	90                   	nop
 874dc1f:	90                   	nop

0874dc20 <_ZN5yaSSL15HandShakeHeaderD0Ev>:
 874dc20:	e8 9f 69 fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 874dc25:	81 c1 73 ef c1 00    	add    $0xc1ef73,%ecx
 874dc2b:	55                   	push   %ebp
 874dc2c:	89 e5                	mov    %esp,%ebp
 874dc2e:	8b 81 e0 fb ff ff    	mov    -0x420(%ecx),%eax
 874dc34:	8d 50 08             	lea    0x8(%eax),%edx
 874dc37:	8b 45 08             	mov    0x8(%ebp),%eax
 874dc3a:	89 10                	mov    %edx,(%eax)
 874dc3c:	5d                   	pop    %ebp
 874dc3d:	c3                   	ret
 874dc3e:	90                   	nop
 874dc3f:	90                   	nop

0874dc40 <_ZN5yaSSL12FortezzaKeysD1Ev>:
 874dc40:	e8 7f 69 fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 874dc45:	81 c1 53 ef c1 00    	add    $0xc1ef53,%ecx
 874dc4b:	55                   	push   %ebp
 874dc4c:	89 e5                	mov    %esp,%ebp
 874dc4e:	8b 81 e8 ff ff ff    	mov    -0x18(%ecx),%eax
 874dc54:	8d 50 08             	lea    0x8(%eax),%edx
 874dc57:	8b 45 08             	mov    0x8(%ebp),%eax
 874dc5a:	89 10                	mov    %edx,(%eax)
 874dc5c:	5d                   	pop    %ebp
 874dc5d:	c3                   	ret
 874dc5e:	90                   	nop
 874dc5f:	90                   	nop

0874dc60 <_ZN5yaSSL12FortezzaKeysD0Ev>:
 874dc60:	e8 5f 69 fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 874dc65:	81 c1 33 ef c1 00    	add    $0xc1ef33,%ecx
 874dc6b:	55                   	push   %ebp
 874dc6c:	89 e5                	mov    %esp,%ebp
 874dc6e:	8b 81 e8 ff ff ff    	mov    -0x18(%ecx),%eax
 874dc74:	8d 50 08             	lea    0x8(%eax),%edx
 874dc77:	8b 45 08             	mov    0x8(%ebp),%eax
 874dc7a:	89 10                	mov    %edx,(%eax)
 874dc7c:	5d                   	pop    %ebp
 874dc7d:	c3                   	ret
 874dc7e:	90                   	nop
 874dc7f:	90                   	nop

0874dc80 <_ZN5yaSSL10RSA_ServerD1Ev>:
 874dc80:	e8 3f 69 fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 874dc85:	81 c1 13 ef c1 00    	add    $0xc1ef13,%ecx
 874dc8b:	55                   	push   %ebp
 874dc8c:	89 e5                	mov    %esp,%ebp
 874dc8e:	8b 81 a8 fb ff ff    	mov    -0x458(%ecx),%eax
 874dc94:	8d 50 08             	lea    0x8(%eax),%edx
 874dc97:	8b 45 08             	mov    0x8(%ebp),%eax
 874dc9a:	89 10                	mov    %edx,(%eax)
 874dc9c:	5d                   	pop    %ebp
 874dc9d:	c3                   	ret
 874dc9e:	90                   	nop
 874dc9f:	90                   	nop

0874dca0 <_ZN5yaSSL10RSA_ServerD0Ev>:
 874dca0:	e8 1f 69 fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 874dca5:	81 c1 f3 ee c1 00    	add    $0xc1eef3,%ecx
 874dcab:	55                   	push   %ebp
 874dcac:	89 e5                	mov    %esp,%ebp
 874dcae:	8b 81 a8 fb ff ff    	mov    -0x458(%ecx),%eax
 874dcb4:	8d 50 08             	lea    0x8(%eax),%edx
 874dcb7:	8b 45 08             	mov    0x8(%ebp),%eax
 874dcba:	89 10                	mov    %edx,(%eax)
 874dcbc:	5d                   	pop    %ebp
 874dcbd:	c3                   	ret
 874dcbe:	90                   	nop
 874dcbf:	90                   	nop

0874dcc0 <_ZN5yaSSL15Fortezza_ServerD1Ev>:
 874dcc0:	e8 ff 68 fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 874dcc5:	81 c1 d3 ee c1 00    	add    $0xc1eed3,%ecx
 874dccb:	55                   	push   %ebp
 874dccc:	89 e5                	mov    %esp,%ebp
 874dcce:	8b 81 a8 fb ff ff    	mov    -0x458(%ecx),%eax
 874dcd4:	8d 50 08             	lea    0x8(%eax),%edx
 874dcd7:	8b 45 08             	mov    0x8(%ebp),%eax
 874dcda:	89 10                	mov    %edx,(%eax)
 874dcdc:	5d                   	pop    %ebp
 874dcdd:	c3                   	ret
 874dcde:	90                   	nop
 874dcdf:	90                   	nop

0874dce0 <_ZN5yaSSL15Fortezza_ServerD0Ev>:
 874dce0:	e8 df 68 fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 874dce5:	81 c1 b3 ee c1 00    	add    $0xc1eeb3,%ecx
 874dceb:	55                   	push   %ebp
 874dcec:	89 e5                	mov    %esp,%ebp
 874dcee:	8b 81 a8 fb ff ff    	mov    -0x458(%ecx),%eax
 874dcf4:	8d 50 08             	lea    0x8(%eax),%edx
 874dcf7:	8b 45 08             	mov    0x8(%ebp),%eax
 874dcfa:	89 10                	mov    %edx,(%eax)
 874dcfc:	5d                   	pop    %ebp
 874dcfd:	c3                   	ret
 874dcfe:	90                   	nop
 874dcff:	90                   	nop

```

```c
// yaSSL::InitHandShakeFactory @ 0x874d120

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::InitHandShakeFactory(yaSSL::Factory<yaSSL::HandShakeBase, int, yaSSL::HandShakeBase*
   (*)()>&) */

void yaSSL::InitHandShakeFactory(Factory *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  
  puVar4 = *(undefined4 **)(param_1 + 8);
  if ((uint)((int)puVar4 - *(int *)param_1 >> 3) < 10) {
    pvVar5 = operator_new__(0x50,0);
    iVar10 = *(int *)(param_1 + 4);
    iVar1 = *(int *)param_1;
    pvVar8 = pvVar5;
    if (iVar10 != iVar1) {
      iVar7 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar1 + 4 + iVar7 * 8);
        *(undefined4 *)((int)pvVar5 + iVar7 * 8) = *(undefined4 *)(iVar1 + iVar7 * 8);
        *(undefined4 *)((int)pvVar5 + iVar7 * 8 + 4) = uVar2;
        iVar7 = iVar7 + 1;
      } while (iVar7 != ((uint)(iVar10 - (iVar1 + 8)) >> 3) + 1);
      pvVar8 = (void *)((int)pvVar5 + iVar7 * 8);
      iVar10 = *(int *)param_1;
    }
    *(void **)param_1 = pvVar5;
    *(void **)(param_1 + 4) = pvVar8;
    *(int *)(param_1 + 8) = (int)pvVar5 + 0x50;
    operator_delete__(iVar10,0);
    puVar4 = *(undefined4 **)(param_1 + 8);
    puVar6 = *(undefined4 **)(param_1 + 4);
    if (puVar6 != puVar4) goto LAB_0874d155;
LAB_0874d314:
    iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
    puVar6 = operator_new__(iVar10 * 8,0);
    iVar1 = *(int *)(param_1 + 4);
    iVar7 = *(int *)param_1;
    puVar4 = puVar6;
    if (iVar1 != iVar7) {
      iVar9 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
        puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
        puVar6[iVar9 * 2 + 1] = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
      puVar4 = puVar6 + iVar9 * 2;
    }
    puVar3 = PTR_CreateHelloRequest_0936cac4;
    *puVar4 = 0;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    puVar4 = *(undefined4 **)(param_1 + 4);
    if (*(undefined4 **)(param_1 + 8) != puVar4) goto LAB_0874d176;
LAB_0874d3a8:
    iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
    puVar6 = operator_new__(iVar10 * 8,0);
    iVar1 = *(int *)(param_1 + 4);
    iVar7 = *(int *)param_1;
    puVar4 = puVar6;
    if (iVar1 != iVar7) {
      iVar9 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
        puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
        puVar6[iVar9 * 2 + 1] = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
      puVar4 = puVar6 + iVar9 * 2;
    }
    puVar3 = PTR_CreateClientHello_0936ca28;
    *puVar4 = 1;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    puVar4 = *(undefined4 **)(param_1 + 4);
    if (*(undefined4 **)(param_1 + 8) != puVar4) goto LAB_0874d197;
LAB_0874d440:
    iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
    puVar6 = operator_new__(iVar10 * 8,0);
    iVar1 = *(int *)(param_1 + 4);
    iVar7 = *(int *)param_1;
    puVar4 = puVar6;
    if (iVar1 != iVar7) {
      iVar9 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
        puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
        puVar6[iVar9 * 2 + 1] = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
      puVar4 = puVar6 + iVar9 * 2;
    }
    puVar3 = PTR_CreateServerHello_0936caa8;
    *puVar4 = 2;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    puVar4 = *(undefined4 **)(param_1 + 4);
    if (*(undefined4 **)(param_1 + 8) != puVar4) goto LAB_0874d1b8;
LAB_0874d4d8:
    iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
    puVar6 = operator_new__(iVar10 * 8,0);
    iVar1 = *(int *)(param_1 + 4);
    iVar7 = *(int *)param_1;
    puVar4 = puVar6;
    if (iVar1 != iVar7) {
      iVar9 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
        puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
        puVar6[iVar9 * 2 + 1] = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
      puVar4 = puVar6 + iVar9 * 2;
    }
    puVar3 = PTR_CreateCertificate_0936cb74;
    *puVar4 = 0xb;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    puVar4 = *(undefined4 **)(param_1 + 4);
    if (*(undefined4 **)(param_1 + 8) != puVar4) goto LAB_0874d1d9;
LAB_0874d570:
    iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
    puVar6 = operator_new__(iVar10 * 8,0);
    iVar1 = *(int *)(param_1 + 4);
    iVar7 = *(int *)param_1;
    puVar4 = puVar6;
    if (iVar1 != iVar7) {
      iVar9 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
        puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
        puVar6[iVar9 * 2 + 1] = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
      puVar4 = puVar6 + iVar9 * 2;
    }
    puVar3 = PTR_CreateServerKeyExchange_0936cae4;
    *puVar4 = 0xc;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    puVar4 = *(undefined4 **)(param_1 + 4);
    if (puVar4 != *(undefined4 **)(param_1 + 8)) goto LAB_0874d1fa;
LAB_0874d608:
    iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
    puVar6 = operator_new__(iVar10 * 8,0);
    iVar1 = *(int *)(param_1 + 4);
    iVar7 = *(int *)param_1;
    puVar4 = puVar6;
    if (iVar1 != iVar7) {
      iVar9 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
        puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
        puVar6[iVar9 * 2 + 1] = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
      puVar4 = puVar6 + iVar9 * 2;
    }
    puVar3 = PTR_CreateCertificateRequest_0936c80c;
    *puVar4 = 0xd;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    puVar4 = *(undefined4 **)(param_1 + 4);
    if (puVar4 != *(undefined4 **)(param_1 + 8)) goto LAB_0874d21b;
LAB_0874d6a0:
    iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
    puVar6 = operator_new__(iVar10 * 8,0);
    iVar1 = *(int *)(param_1 + 4);
    iVar7 = *(int *)param_1;
    puVar4 = puVar6;
    if (iVar1 != iVar7) {
      iVar9 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
        puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
        puVar6[iVar9 * 2 + 1] = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
      puVar4 = puVar6 + iVar9 * 2;
    }
    puVar3 = PTR_CreateServerHelloDone_0936c7f8;
    *puVar4 = 0xe;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    puVar4 = *(undefined4 **)(param_1 + 4);
    if (*(undefined4 **)(param_1 + 8) != puVar4) goto LAB_0874d23c;
LAB_0874d738:
    iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
    puVar6 = operator_new__(iVar10 * 8,0);
    iVar1 = *(int *)(param_1 + 4);
    iVar7 = *(int *)param_1;
    puVar4 = puVar6;
    if (iVar1 != iVar7) {
      iVar9 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
        puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
        puVar6[iVar9 * 2 + 1] = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
      puVar4 = puVar6 + iVar9 * 2;
    }
    puVar3 = PTR_CreateCertificateVerify_0936cb84;
    *puVar4 = 0xf;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    puVar4 = *(undefined4 **)(param_1 + 4);
    if (*(undefined4 **)(param_1 + 8) == puVar4) goto LAB_0874d7d0;
  }
  else {
    puVar6 = *(undefined4 **)(param_1 + 4);
    if (puVar6 == puVar4) goto LAB_0874d314;
LAB_0874d155:
    puVar3 = PTR_CreateHelloRequest_0936cac4;
    *puVar6 = 0;
    puVar6[1] = puVar3;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    *(undefined4 **)(param_1 + 4) = puVar4;
    if (*(undefined4 **)(param_1 + 8) == puVar4) goto LAB_0874d3a8;
LAB_0874d176:
    puVar3 = PTR_CreateClientHello_0936ca28;
    *puVar4 = 1;
    puVar4[1] = puVar3;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    *(undefined4 **)(param_1 + 4) = puVar4;
    if (*(undefined4 **)(param_1 + 8) == puVar4) goto LAB_0874d440;
LAB_0874d197:
    puVar3 = PTR_CreateServerHello_0936caa8;
    *puVar4 = 2;
    puVar4[1] = puVar3;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    *(undefined4 **)(param_1 + 4) = puVar4;
    if (*(undefined4 **)(param_1 + 8) == puVar4) goto LAB_0874d4d8;
LAB_0874d1b8:
    puVar3 = PTR_CreateCertificate_0936cb74;
    *puVar4 = 0xb;
    puVar4[1] = puVar3;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    *(undefined4 **)(param_1 + 4) = puVar4;
    if (*(undefined4 **)(param_1 + 8) == puVar4) goto LAB_0874d570;
LAB_0874d1d9:
    puVar3 = PTR_CreateServerKeyExchange_0936cae4;
    *puVar4 = 0xc;
    puVar4[1] = puVar3;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    *(undefined4 **)(param_1 + 4) = puVar4;
    if (puVar4 == *(undefined4 **)(param_1 + 8)) goto LAB_0874d608;
LAB_0874d1fa:
    puVar3 = PTR_CreateCertificateRequest_0936c80c;
    *puVar4 = 0xd;
    puVar4[1] = puVar3;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    *(undefined4 **)(param_1 + 4) = puVar4;
    if (puVar4 == *(undefined4 **)(param_1 + 8)) goto LAB_0874d6a0;
LAB_0874d21b:
    puVar3 = PTR_CreateServerHelloDone_0936c7f8;
    *puVar4 = 0xe;
    puVar4[1] = puVar3;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    *(undefined4 **)(param_1 + 4) = puVar4;
    if (*(undefined4 **)(param_1 + 8) == puVar4) goto LAB_0874d738;
LAB_0874d23c:
    puVar3 = PTR_CreateCertificateVerify_0936cb84;
    *puVar4 = 0xf;
    puVar4[1] = puVar3;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    *(undefined4 **)(param_1 + 4) = puVar4;
    if (*(undefined4 **)(param_1 + 8) == puVar4) {
LAB_0874d7d0:
      iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
      puVar6 = operator_new__(iVar10 * 8,0);
      iVar1 = *(int *)(param_1 + 4);
      iVar7 = *(int *)param_1;
      puVar4 = puVar6;
      if (iVar1 != iVar7) {
        iVar9 = 0;
        do {
          uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
          puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
          puVar6[iVar9 * 2 + 1] = uVar2;
          iVar9 = iVar9 + 1;
        } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
        puVar4 = puVar6 + iVar9 * 2;
      }
      puVar3 = PTR_CreateClientKeyExchange_0936cb3c;
      *puVar4 = 0x10;
      puVar4[1] = puVar3;
      uVar2 = *(undefined4 *)param_1;
      *(undefined4 **)param_1 = puVar6;
      *(undefined4 **)(param_1 + 4) = puVar4 + 2;
      *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
      operator_delete__(uVar2,0);
      puVar4 = *(undefined4 **)(param_1 + 4);
      if (*(undefined4 **)(param_1 + 8) == puVar4) goto LAB_0874d868;
      goto LAB_0874d27e;
    }
  }
  puVar3 = PTR_CreateClientKeyExchange_0936cb3c;
  *puVar4 = 0x10;
  puVar4[1] = puVar3;
  puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
  *(undefined4 **)(param_1 + 4) = puVar4;
  if (*(undefined4 **)(param_1 + 8) == puVar4) {
LAB_0874d868:
    iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
    puVar6 = operator_new__(iVar10 * 8,0);
    iVar1 = *(int *)(param_1 + 4);
    iVar7 = *(int *)param_1;
    puVar4 = puVar6;
    if (iVar1 != iVar7) {
      iVar9 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
        puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
        puVar6[iVar9 * 2 + 1] = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
      puVar4 = puVar6 + iVar9 * 2;
    }
    puVar3 = PTR_CreateFinished_0936c6d0;
    *puVar4 = 0x14;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    return;
  }
LAB_0874d27e:
  puVar3 = PTR_CreateFinished_0936c6d0;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
  *puVar4 = 0x14;
  puVar4[1] = puVar3;
  return;
}

```

---

## InitMessageFactory

```asm
// === 0874c5a0 yaSSL::InitMessageFactory  [0x0874c5a0-0x874c91f] ===
 874c5a0:	55                   	push   %ebp
 874c5a1:	89 e5                	mov    %esp,%ebp
 874c5a3:	57                   	push   %edi
 874c5a4:	56                   	push   %esi
 874c5a5:	53                   	push   %ebx
 874c5a6:	83 ec 2c             	sub    $0x2c,%esp
 874c5a9:	8b 75 08             	mov    0x8(%ebp),%esi
 874c5ac:	e8 47 68 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874c5b1:	81 c3 e7 05 c2 00    	add    $0xc205e7,%ebx
 874c5b7:	8b 56 08             	mov    0x8(%esi),%edx
 874c5ba:	89 d0                	mov    %edx,%eax
 874c5bc:	2b 06                	sub    (%esi),%eax
 874c5be:	c1 f8 03             	sar    $0x3,%eax
 874c5c1:	83 f8 03             	cmp    $0x3,%eax
 874c5c4:	0f 86 8e 00 00 00    	jbe    874c658 <_ZN5yaSSL18InitMessageFactoryERNS_7FactoryINS_7MessageEiPFPS1_vEEE+0xb8>
 874c5ca:	8b 46 04             	mov    0x4(%esi),%eax
 874c5cd:	39 d0                	cmp    %edx,%eax
 874c5cf:	0f 84 f7 00 00 00    	je     874c6cc <_ZN5yaSSL18InitMessageFactoryERNS_7FactoryINS_7MessageEiPFPS1_vEEE+0x12c>
 874c5d5:	8b 93 6c fb ff ff    	mov    -0x494(%ebx),%edx
 874c5db:	c7 00 15 00 00 00    	movl   $0x15,(%eax)
 874c5e1:	89 50 04             	mov    %edx,0x4(%eax)
 874c5e4:	8b 46 04             	mov    0x4(%esi),%eax
 874c5e7:	83 c0 08             	add    $0x8,%eax
 874c5ea:	39 46 08             	cmp    %eax,0x8(%esi)
 874c5ed:	89 46 04             	mov    %eax,0x4(%esi)
 874c5f0:	0f 84 6a 01 00 00    	je     874c760 <_ZN5yaSSL18InitMessageFactoryERNS_7FactoryINS_7MessageEiPFPS1_vEEE+0x1c0>
 874c5f6:	8b 93 90 fd ff ff    	mov    -0x270(%ebx),%edx
 874c5fc:	c7 00 14 00 00 00    	movl   $0x14,(%eax)
 874c602:	89 50 04             	mov    %edx,0x4(%eax)
 874c605:	8b 46 04             	mov    0x4(%esi),%eax
 874c608:	83 c0 08             	add    $0x8,%eax
 874c60b:	39 46 08             	cmp    %eax,0x8(%esi)
 874c60e:	89 46 04             	mov    %eax,0x4(%esi)
 874c611:	0f 84 e1 01 00 00    	je     874c7f8 <_ZN5yaSSL18InitMessageFactoryERNS_7FactoryINS_7MessageEiPFPS1_vEEE+0x258>
 874c617:	8b 93 d4 fe ff ff    	mov    -0x12c(%ebx),%edx
 874c61d:	c7 00 16 00 00 00    	movl   $0x16,(%eax)
 874c623:	89 50 04             	mov    %edx,0x4(%eax)
 874c626:	8b 46 04             	mov    0x4(%esi),%eax
 874c629:	83 c0 08             	add    $0x8,%eax
 874c62c:	39 46 08             	cmp    %eax,0x8(%esi)
 874c62f:	89 46 04             	mov    %eax,0x4(%esi)
 874c632:	0f 84 58 02 00 00    	je     874c890 <_ZN5yaSSL18InitMessageFactoryERNS_7FactoryINS_7MessageEiPFPS1_vEEE+0x2f0>
 874c638:	8b 93 9c fc ff ff    	mov    -0x364(%ebx),%edx
 874c63e:	83 46 04 08          	addl   $0x8,0x4(%esi)
 874c642:	c7 00 17 00 00 00    	movl   $0x17,(%eax)
 874c648:	89 50 04             	mov    %edx,0x4(%eax)
 874c64b:	83 c4 2c             	add    $0x2c,%esp
 874c64e:	5b                   	pop    %ebx
 874c64f:	5e                   	pop    %esi
 874c650:	5f                   	pop    %edi
 874c651:	5d                   	pop    %ebp
 874c652:	c3                   	ret
 874c653:	90                   	nop
 874c654:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 874c658:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874c65d:	c7 04 24 20 00 00 00 	movl   $0x20,(%esp)
 874c664:	e8 e7 5c 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 874c669:	8b 7e 04             	mov    0x4(%esi),%edi
 874c66c:	8b 0e                	mov    (%esi),%ecx
 874c66e:	39 cf                	cmp    %ecx,%edi
 874c670:	89 c2                	mov    %eax,%edx
 874c672:	74 32                	je     874c6a6 <_ZN5yaSSL18InitMessageFactoryERNS_7FactoryINS_7MessageEiPFPS1_vEEE+0x106>
 874c674:	8d 51 08             	lea    0x8(%ecx),%edx
 874c677:	29 d7                	sub    %edx,%edi
 874c679:	31 d2                	xor    %edx,%edx
 874c67b:	c1 ef 03             	shr    $0x3,%edi
 874c67e:	83 c7 01             	add    $0x1,%edi
 874c681:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 874c684:	89 75 e0             	mov    %esi,-0x20(%ebp)
 874c687:	90                   	nop
 874c688:	8b 34 d1             	mov    (%ecx,%edx,8),%esi
 874c68b:	8b 7c d1 04          	mov    0x4(%ecx,%edx,8),%edi
 874c68f:	89 34 d0             	mov    %esi,(%eax,%edx,8)
 874c692:	89 7c d0 04          	mov    %edi,0x4(%eax,%edx,8)
 874c696:	83 c2 01             	add    $0x1,%edx
 874c699:	3b 55 e4             	cmp    -0x1c(%ebp),%edx
 874c69c:	75 ea                	jne    874c688 <_ZN5yaSSL18InitMessageFactoryERNS_7FactoryINS_7MessageEiPFPS1_vEEE+0xe8>
 874c69e:	8b 75 e0             	mov    -0x20(%ebp),%esi
 874c6a1:	8d 14 d0             	lea    (%eax,%edx,8),%edx
 874c6a4:	8b 3e                	mov    (%esi),%edi
 874c6a6:	89 06                	mov    %eax,(%esi)
 874c6a8:	83 c0 20             	add    $0x20,%eax
 874c6ab:	89 56 04             	mov    %edx,0x4(%esi)
 874c6ae:	89 46 08             	mov    %eax,0x8(%esi)
 874c6b1:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874c6b6:	89 3c 24             	mov    %edi,(%esp)
 874c6b9:	e8 32 42 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874c6be:	8b 56 08             	mov    0x8(%esi),%edx
 874c6c1:	8b 46 04             	mov    0x4(%esi),%eax
 874c6c4:	39 d0                	cmp    %edx,%eax
 874c6c6:	0f 85 09 ff ff ff    	jne    874c5d5 <_ZN5yaSSL18InitMessageFactoryERNS_7FactoryINS_7MessageEiPFPS1_vEEE+0x35>
 874c6cc:	2b 16                	sub    (%esi),%edx
 874c6ce:	c1 fa 03             	sar    $0x3,%edx
 874c6d1:	8d 44 12 01          	lea    0x1(%edx,%edx,1),%eax
 874c6d5:	c1 e0 03             	shl    $0x3,%eax
 874c6d8:	89 45 e0             	mov    %eax,-0x20(%ebp)
 874c6db:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874c6e0:	89 04 24             	mov    %eax,(%esp)
 874c6e3:	e8 68 5c 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 874c6e8:	8b 7e 04             	mov    0x4(%esi),%edi
 874c6eb:	8b 0e                	mov    (%esi),%ecx
 874c6ed:	39 cf                	cmp    %ecx,%edi
 874c6ef:	89 c2                	mov    %eax,%edx
 874c6f1:	74 31                	je     874c724 <_ZN5yaSSL18InitMessageFactoryERNS_7FactoryINS_7MessageEiPFPS1_vEEE+0x184>
 874c6f3:	8d 51 08             	lea    0x8(%ecx),%edx
 874c6f6:	29 d7                	sub    %edx,%edi
 874c6f8:	31 d2                	xor    %edx,%edx
 874c6fa:	c1 ef 03             	shr    $0x3,%edi
 874c6fd:	83 c7 01             	add    $0x1,%edi
 874c700:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 874c703:	89 75 dc             	mov    %esi,-0x24(%ebp)
 874c706:	66 90                	xchg   %ax,%ax
 874c708:	8b 34 d1             	mov    (%ecx,%edx,8),%esi
 874c70b:	8b 7c d1 04          	mov    0x4(%ecx,%edx,8),%edi
 874c70f:	89 34 d0             	mov    %esi,(%eax,%edx,8)
 874c712:	89 7c d0 04          	mov    %edi,0x4(%eax,%edx,8)
 874c716:	83 c2 01             	add    $0x1,%edx
 874c719:	3b 55 e4             	cmp    -0x1c(%ebp),%edx
 874c71c:	75 ea                	jne    874c708 <_ZN5yaSSL18InitMessageFactoryERNS_7FactoryINS_7MessageEiPFPS1_vEEE+0x168>
 874c71e:	8b 75 dc             	mov    -0x24(%ebp),%esi
 874c721:	8d 14 d0             	lea    (%eax,%edx,8),%edx
 874c724:	8b 8b 6c fb ff ff    	mov    -0x494(%ebx),%ecx
 874c72a:	c7 02 15 00 00 00    	movl   $0x15,(%edx)
 874c730:	89 4a 04             	mov    %ecx,0x4(%edx)
 874c733:	8b 0e                	mov    (%esi),%ecx
 874c735:	83 c2 08             	add    $0x8,%edx
 874c738:	89 06                	mov    %eax,(%esi)
 874c73a:	03 45 e0             	add    -0x20(%ebp),%eax
 874c73d:	89 56 04             	mov    %edx,0x4(%esi)
 874c740:	89 46 08             	mov    %eax,0x8(%esi)
 874c743:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874c748:	89 0c 24             	mov    %ecx,(%esp)
 874c74b:	e8 a0 41 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874c750:	8b 46 04             	mov    0x4(%esi),%eax
 874c753:	39 46 08             	cmp    %eax,0x8(%esi)
 874c756:	0f 85 9a fe ff ff    	jne    874c5f6 <_ZN5yaSSL18InitMessageFactoryERNS_7FactoryINS_7MessageEiPFPS1_vEEE+0x56>
 874c75c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 874c760:	2b 06                	sub    (%esi),%eax
 874c762:	c1 f8 03             	sar    $0x3,%eax
 874c765:	8d 44 00 01          	lea    0x1(%eax,%eax,1),%eax
 874c769:	c1 e0 03             	shl    $0x3,%eax
 874c76c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 874c76f:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874c774:	89 04 24             	mov    %eax,(%esp)
 874c777:	e8 d4 5b 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 874c77c:	8b 7e 04             	mov    0x4(%esi),%edi
 874c77f:	8b 0e                	mov    (%esi),%ecx
 874c781:	39 cf                	cmp    %ecx,%edi
 874c783:	89 c2                	mov    %eax,%edx
 874c785:	74 35                	je     874c7bc <_ZN5yaSSL18InitMessageFactoryERNS_7FactoryINS_7MessageEiPFPS1_vEEE+0x21c>
 874c787:	8d 51 08             	lea    0x8(%ecx),%edx
 874c78a:	29 d7                	sub    %edx,%edi
 874c78c:	31 d2                	xor    %edx,%edx
 874c78e:	c1 ef 03             	shr    $0x3,%edi
 874c791:	83 c7 01             	add    $0x1,%edi
 874c794:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 874c797:	89 75 dc             	mov    %esi,-0x24(%ebp)
 874c79a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874c7a0:	8b 34 d1             	mov    (%ecx,%edx,8),%esi
 874c7a3:	8b 7c d1 04          	mov    0x4(%ecx,%edx,8),%edi
 874c7a7:	89 34 d0             	mov    %esi,(%eax,%edx,8)
 874c7aa:	89 7c d0 04          	mov    %edi,0x4(%eax,%edx,8)
 874c7ae:	83 c2 01             	add    $0x1,%edx
 874c7b1:	3b 55 e4             	cmp    -0x1c(%ebp),%edx
 874c7b4:	75 ea                	jne    874c7a0 <_ZN5yaSSL18InitMessageFactoryERNS_7FactoryINS_7MessageEiPFPS1_vEEE+0x200>
 874c7b6:	8b 75 dc             	mov    -0x24(%ebp),%esi
 874c7b9:	8d 14 d0             	lea    (%eax,%edx,8),%edx
 874c7bc:	8b 8b 90 fd ff ff    	mov    -0x270(%ebx),%ecx
 874c7c2:	c7 02 14 00 00 00    	movl   $0x14,(%edx)
 874c7c8:	89 4a 04             	mov    %ecx,0x4(%edx)
 874c7cb:	8b 0e                	mov    (%esi),%ecx
 874c7cd:	83 c2 08             	add    $0x8,%edx
 874c7d0:	89 06                	mov    %eax,(%esi)
 874c7d2:	03 45 e0             	add    -0x20(%ebp),%eax
 874c7d5:	89 56 04             	mov    %edx,0x4(%esi)
 874c7d8:	89 46 08             	mov    %eax,0x8(%esi)
 874c7db:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874c7e0:	89 0c 24             	mov    %ecx,(%esp)
 874c7e3:	e8 08 41 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874c7e8:	8b 46 04             	mov    0x4(%esi),%eax
 874c7eb:	39 46 08             	cmp    %eax,0x8(%esi)
 874c7ee:	0f 85 23 fe ff ff    	jne    874c617 <_ZN5yaSSL18InitMessageFactoryERNS_7FactoryINS_7MessageEiPFPS1_vEEE+0x77>
 874c7f4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 874c7f8:	2b 06                	sub    (%esi),%eax
 874c7fa:	c1 f8 03             	sar    $0x3,%eax
 874c7fd:	8d 44 00 01          	lea    0x1(%eax,%eax,1),%eax
 874c801:	c1 e0 03             	shl    $0x3,%eax
 874c804:	89 45 e0             	mov    %eax,-0x20(%ebp)
 874c807:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874c80c:	89 04 24             	mov    %eax,(%esp)
 874c80f:	e8 3c 5b 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 874c814:	8b 7e 04             	mov    0x4(%esi),%edi
 874c817:	8b 0e                	mov    (%esi),%ecx
 874c819:	39 cf                	cmp    %ecx,%edi
 874c81b:	89 c2                	mov    %eax,%edx
 874c81d:	74 35                	je     874c854 <_ZN5yaSSL18InitMessageFactoryERNS_7FactoryINS_7MessageEiPFPS1_vEEE+0x2b4>
 874c81f:	8d 51 08             	lea    0x8(%ecx),%edx
 874c822:	29 d7                	sub    %edx,%edi
 874c824:	31 d2                	xor    %edx,%edx
 874c826:	c1 ef 03             	shr    $0x3,%edi
 874c829:	83 c7 01             	add    $0x1,%edi
 874c82c:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 874c82f:	89 75 dc             	mov    %esi,-0x24(%ebp)
 874c832:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874c838:	8b 34 d1             	mov    (%ecx,%edx,8),%esi
 874c83b:	8b 7c d1 04          	mov    0x4(%ecx,%edx,8),%edi
 874c83f:	89 34 d0             	mov    %esi,(%eax,%edx,8)
 874c842:	89 7c d0 04          	mov    %edi,0x4(%eax,%edx,8)
 874c846:	83 c2 01             	add    $0x1,%edx
 874c849:	3b 55 e4             	cmp    -0x1c(%ebp),%edx
 874c84c:	75 ea                	jne    874c838 <_ZN5yaSSL18InitMessageFactoryERNS_7FactoryINS_7MessageEiPFPS1_vEEE+0x298>
 874c84e:	8b 75 dc             	mov    -0x24(%ebp),%esi
 874c851:	8d 14 d0             	lea    (%eax,%edx,8),%edx
 874c854:	8b 8b d4 fe ff ff    	mov    -0x12c(%ebx),%ecx
 874c85a:	c7 02 16 00 00 00    	movl   $0x16,(%edx)
 874c860:	89 4a 04             	mov    %ecx,0x4(%edx)
 874c863:	8b 0e                	mov    (%esi),%ecx
 874c865:	83 c2 08             	add    $0x8,%edx
 874c868:	89 06                	mov    %eax,(%esi)
 874c86a:	03 45 e0             	add    -0x20(%ebp),%eax
 874c86d:	89 56 04             	mov    %edx,0x4(%esi)
 874c870:	89 46 08             	mov    %eax,0x8(%esi)
 874c873:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874c878:	89 0c 24             	mov    %ecx,(%esp)
 874c87b:	e8 70 40 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874c880:	8b 46 04             	mov    0x4(%esi),%eax
 874c883:	39 46 08             	cmp    %eax,0x8(%esi)
 874c886:	0f 85 ac fd ff ff    	jne    874c638 <_ZN5yaSSL18InitMessageFactoryERNS_7FactoryINS_7MessageEiPFPS1_vEEE+0x98>
 874c88c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 874c890:	2b 06                	sub    (%esi),%eax
 874c892:	c1 f8 03             	sar    $0x3,%eax
 874c895:	8d 44 00 01          	lea    0x1(%eax,%eax,1),%eax
 874c899:	c1 e0 03             	shl    $0x3,%eax
 874c89c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 874c89f:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874c8a4:	89 04 24             	mov    %eax,(%esp)
 874c8a7:	e8 a4 5a 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 874c8ac:	8b 7e 04             	mov    0x4(%esi),%edi
 874c8af:	8b 0e                	mov    (%esi),%ecx
 874c8b1:	39 cf                	cmp    %ecx,%edi
 874c8b3:	89 c2                	mov    %eax,%edx
 874c8b5:	74 35                	je     874c8ec <_ZN5yaSSL18InitMessageFactoryERNS_7FactoryINS_7MessageEiPFPS1_vEEE+0x34c>
 874c8b7:	8d 51 08             	lea    0x8(%ecx),%edx
 874c8ba:	29 d7                	sub    %edx,%edi
 874c8bc:	31 d2                	xor    %edx,%edx
 874c8be:	c1 ef 03             	shr    $0x3,%edi
 874c8c1:	83 c7 01             	add    $0x1,%edi
 874c8c4:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 874c8c7:	89 75 dc             	mov    %esi,-0x24(%ebp)
 874c8ca:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874c8d0:	8b 34 d1             	mov    (%ecx,%edx,8),%esi
 874c8d3:	8b 7c d1 04          	mov    0x4(%ecx,%edx,8),%edi
 874c8d7:	89 34 d0             	mov    %esi,(%eax,%edx,8)
 874c8da:	89 7c d0 04          	mov    %edi,0x4(%eax,%edx,8)
 874c8de:	83 c2 01             	add    $0x1,%edx
 874c8e1:	3b 55 e4             	cmp    -0x1c(%ebp),%edx
 874c8e4:	75 ea                	jne    874c8d0 <_ZN5yaSSL18InitMessageFactoryERNS_7FactoryINS_7MessageEiPFPS1_vEEE+0x330>
 874c8e6:	8b 75 dc             	mov    -0x24(%ebp),%esi
 874c8e9:	8d 14 d0             	lea    (%eax,%edx,8),%edx
 874c8ec:	8b 8b 9c fc ff ff    	mov    -0x364(%ebx),%ecx
 874c8f2:	c7 02 17 00 00 00    	movl   $0x17,(%edx)
 874c8f8:	89 4a 04             	mov    %ecx,0x4(%edx)
 874c8fb:	8b 0e                	mov    (%esi),%ecx
 874c8fd:	83 c2 08             	add    $0x8,%edx
 874c900:	89 06                	mov    %eax,(%esi)
 874c902:	03 45 e0             	add    -0x20(%ebp),%eax
 874c905:	89 56 04             	mov    %edx,0x4(%esi)
 874c908:	89 46 08             	mov    %eax,0x8(%esi)
 874c90b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874c910:	89 0c 24             	mov    %ecx,(%esp)
 874c913:	e8 d8 3f 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874c918:	83 c4 2c             	add    $0x2c,%esp
 874c91b:	5b                   	pop    %ebx
 874c91c:	5e                   	pop    %esi
 874c91d:	5f                   	pop    %edi
 874c91e:	5d                   	pop    %ebp
 874c91f:	c3                   	ret

```

```c
// yaSSL::InitMessageFactory @ 0x874c5a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::InitMessageFactory(yaSSL::Factory<yaSSL::Message, int, yaSSL::Message* (*)()>&) */

void yaSSL::InitMessageFactory(Factory *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  
  puVar4 = *(undefined4 **)(param_1 + 8);
  if ((uint)((int)puVar4 - *(int *)param_1 >> 3) < 4) {
    pvVar5 = operator_new__(0x20,0);
    iVar10 = *(int *)(param_1 + 4);
    iVar1 = *(int *)param_1;
    pvVar8 = pvVar5;
    if (iVar10 != iVar1) {
      iVar7 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar1 + 4 + iVar7 * 8);
        *(undefined4 *)((int)pvVar5 + iVar7 * 8) = *(undefined4 *)(iVar1 + iVar7 * 8);
        *(undefined4 *)((int)pvVar5 + iVar7 * 8 + 4) = uVar2;
        iVar7 = iVar7 + 1;
      } while (iVar7 != ((uint)(iVar10 - (iVar1 + 8)) >> 3) + 1);
      pvVar8 = (void *)((int)pvVar5 + iVar7 * 8);
      iVar10 = *(int *)param_1;
    }
    *(void **)param_1 = pvVar5;
    *(void **)(param_1 + 4) = pvVar8;
    *(int *)(param_1 + 8) = (int)pvVar5 + 0x20;
    operator_delete__(iVar10,0);
    puVar4 = *(undefined4 **)(param_1 + 8);
    puVar6 = *(undefined4 **)(param_1 + 4);
    if (puVar6 != puVar4) goto LAB_0874c5d5;
LAB_0874c6cc:
    iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
    puVar6 = operator_new__(iVar10 * 8,0);
    iVar1 = *(int *)(param_1 + 4);
    iVar7 = *(int *)param_1;
    puVar4 = puVar6;
    if (iVar1 != iVar7) {
      iVar9 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
        puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
        puVar6[iVar9 * 2 + 1] = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
      puVar4 = puVar6 + iVar9 * 2;
    }
    puVar3 = PTR_CreateAlert_0936c704;
    *puVar4 = 0x15;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    puVar4 = *(undefined4 **)(param_1 + 4);
    if (*(undefined4 **)(param_1 + 8) != puVar4) goto LAB_0874c5f6;
LAB_0874c760:
    iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
    puVar6 = operator_new__(iVar10 * 8,0);
    iVar1 = *(int *)(param_1 + 4);
    iVar7 = *(int *)param_1;
    puVar4 = puVar6;
    if (iVar1 != iVar7) {
      iVar9 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
        puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
        puVar6[iVar9 * 2 + 1] = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
      puVar4 = puVar6 + iVar9 * 2;
    }
    puVar3 = PTR_CreateCipherSpec_0936c928;
    *puVar4 = 0x14;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    puVar4 = *(undefined4 **)(param_1 + 4);
    if (*(undefined4 **)(param_1 + 8) == puVar4) goto LAB_0874c7f8;
  }
  else {
    puVar6 = *(undefined4 **)(param_1 + 4);
    if (puVar6 == puVar4) goto LAB_0874c6cc;
LAB_0874c5d5:
    puVar3 = PTR_CreateAlert_0936c704;
    *puVar6 = 0x15;
    puVar6[1] = puVar3;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    *(undefined4 **)(param_1 + 4) = puVar4;
    if (*(undefined4 **)(param_1 + 8) == puVar4) goto LAB_0874c760;
LAB_0874c5f6:
    puVar3 = PTR_CreateCipherSpec_0936c928;
    *puVar4 = 0x14;
    puVar4[1] = puVar3;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    *(undefined4 **)(param_1 + 4) = puVar4;
    if (*(undefined4 **)(param_1 + 8) == puVar4) {
LAB_0874c7f8:
      iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
      puVar6 = operator_new__(iVar10 * 8,0);
      iVar1 = *(int *)(param_1 + 4);
      iVar7 = *(int *)param_1;
      puVar4 = puVar6;
      if (iVar1 != iVar7) {
        iVar9 = 0;
        do {
          uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
          puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
          puVar6[iVar9 * 2 + 1] = uVar2;
          iVar9 = iVar9 + 1;
        } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
        puVar4 = puVar6 + iVar9 * 2;
      }
      puVar3 = PTR_CreateHandShake_0936ca6c;
      *puVar4 = 0x16;
      puVar4[1] = puVar3;
      uVar2 = *(undefined4 *)param_1;
      *(undefined4 **)param_1 = puVar6;
      *(undefined4 **)(param_1 + 4) = puVar4 + 2;
      *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
      operator_delete__(uVar2,0);
      puVar4 = *(undefined4 **)(param_1 + 4);
      if (*(undefined4 **)(param_1 + 8) == puVar4) goto LAB_0874c890;
      goto LAB_0874c638;
    }
  }
  puVar3 = PTR_CreateHandShake_0936ca6c;
  *puVar4 = 0x16;
  puVar4[1] = puVar3;
  puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
  *(undefined4 **)(param_1 + 4) = puVar4;
  if (*(undefined4 **)(param_1 + 8) == puVar4) {
LAB_0874c890:
    iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
    puVar6 = operator_new__(iVar10 * 8,0);
    iVar1 = *(int *)(param_1 + 4);
    iVar7 = *(int *)param_1;
    puVar4 = puVar6;
    if (iVar1 != iVar7) {
      iVar9 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
        puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
        puVar6[iVar9 * 2 + 1] = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
      puVar4 = puVar6 + iVar9 * 2;
    }
    puVar3 = PTR_CreateData_0936c834;
    *puVar4 = 0x17;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    return;
  }
LAB_0874c638:
  puVar3 = PTR_CreateData_0936c834;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
  *puVar4 = 0x17;
  puVar4[1] = puVar3;
  return;
}

```

---

## InitServerKeyFactory

```asm
// === 0874c020 yaSSL::InitServerKeyFactory  [0x0874c020-0x874c2df] ===
 874c020:	55                   	push   %ebp
 874c021:	89 e5                	mov    %esp,%ebp
 874c023:	57                   	push   %edi
 874c024:	56                   	push   %esi
 874c025:	53                   	push   %ebx
 874c026:	83 ec 2c             	sub    $0x2c,%esp
 874c029:	8b 75 08             	mov    0x8(%ebp),%esi
 874c02c:	e8 c7 6d fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874c031:	81 c3 67 0b c2 00    	add    $0xc20b67,%ebx
 874c037:	8b 56 08             	mov    0x8(%esi),%edx
 874c03a:	89 d0                	mov    %edx,%eax
 874c03c:	2b 06                	sub    (%esi),%eax
 874c03e:	c1 f8 03             	sar    $0x3,%eax
 874c041:	83 f8 02             	cmp    $0x2,%eax
 874c044:	76 6a                	jbe    874c0b0 <_ZN5yaSSL20InitServerKeyFactoryERNS_7FactoryINS_13ServerKeyBaseEiPFPS1_vEEE+0x90>
 874c046:	8b 46 04             	mov    0x4(%esi),%eax
 874c049:	39 d0                	cmp    %edx,%eax
 874c04b:	0f 84 d3 00 00 00    	je     874c124 <_ZN5yaSSL20InitServerKeyFactoryERNS_7FactoryINS_13ServerKeyBaseEiPFPS1_vEEE+0x104>
 874c051:	8b 93 9c fe ff ff    	mov    -0x164(%ebx),%edx
 874c057:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 874c05d:	89 50 04             	mov    %edx,0x4(%eax)
 874c060:	8b 46 04             	mov    0x4(%esi),%eax
 874c063:	83 c0 08             	add    $0x8,%eax
 874c066:	39 46 08             	cmp    %eax,0x8(%esi)
 874c069:	89 46 04             	mov    %eax,0x4(%esi)
 874c06c:	0f 84 46 01 00 00    	je     874c1b8 <_ZN5yaSSL20InitServerKeyFactoryERNS_7FactoryINS_13ServerKeyBaseEiPFPS1_vEEE+0x198>
 874c072:	8b 93 b8 fa ff ff    	mov    -0x548(%ebx),%edx
 874c078:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 874c07e:	89 50 04             	mov    %edx,0x4(%eax)
 874c081:	8b 46 04             	mov    0x4(%esi),%eax
 874c084:	83 c0 08             	add    $0x8,%eax
 874c087:	39 46 08             	cmp    %eax,0x8(%esi)
 874c08a:	89 46 04             	mov    %eax,0x4(%esi)
 874c08d:	0f 84 bd 01 00 00    	je     874c250 <_ZN5yaSSL20InitServerKeyFactoryERNS_7FactoryINS_13ServerKeyBaseEiPFPS1_vEEE+0x230>
 874c093:	8b 93 14 fc ff ff    	mov    -0x3ec(%ebx),%edx
 874c099:	83 46 04 08          	addl   $0x8,0x4(%esi)
 874c09d:	c7 00 03 00 00 00    	movl   $0x3,(%eax)
 874c0a3:	89 50 04             	mov    %edx,0x4(%eax)
 874c0a6:	83 c4 2c             	add    $0x2c,%esp
 874c0a9:	5b                   	pop    %ebx
 874c0aa:	5e                   	pop    %esi
 874c0ab:	5f                   	pop    %edi
 874c0ac:	5d                   	pop    %ebp
 874c0ad:	c3                   	ret
 874c0ae:	66 90                	xchg   %ax,%ax
 874c0b0:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874c0b5:	c7 04 24 18 00 00 00 	movl   $0x18,(%esp)
 874c0bc:	e8 8f 62 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 874c0c1:	8b 7e 04             	mov    0x4(%esi),%edi
 874c0c4:	8b 0e                	mov    (%esi),%ecx
 874c0c6:	39 cf                	cmp    %ecx,%edi
 874c0c8:	89 c2                	mov    %eax,%edx
 874c0ca:	74 32                	je     874c0fe <_ZN5yaSSL20InitServerKeyFactoryERNS_7FactoryINS_13ServerKeyBaseEiPFPS1_vEEE+0xde>
 874c0cc:	8d 51 08             	lea    0x8(%ecx),%edx
 874c0cf:	29 d7                	sub    %edx,%edi
 874c0d1:	31 d2                	xor    %edx,%edx
 874c0d3:	c1 ef 03             	shr    $0x3,%edi
 874c0d6:	83 c7 01             	add    $0x1,%edi
 874c0d9:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 874c0dc:	89 75 e0             	mov    %esi,-0x20(%ebp)
 874c0df:	90                   	nop
 874c0e0:	8b 34 d1             	mov    (%ecx,%edx,8),%esi
 874c0e3:	8b 7c d1 04          	mov    0x4(%ecx,%edx,8),%edi
 874c0e7:	89 34 d0             	mov    %esi,(%eax,%edx,8)
 874c0ea:	89 7c d0 04          	mov    %edi,0x4(%eax,%edx,8)
 874c0ee:	83 c2 01             	add    $0x1,%edx
 874c0f1:	3b 55 e4             	cmp    -0x1c(%ebp),%edx
 874c0f4:	75 ea                	jne    874c0e0 <_ZN5yaSSL20InitServerKeyFactoryERNS_7FactoryINS_13ServerKeyBaseEiPFPS1_vEEE+0xc0>
 874c0f6:	8b 75 e0             	mov    -0x20(%ebp),%esi
 874c0f9:	8d 14 d0             	lea    (%eax,%edx,8),%edx
 874c0fc:	8b 3e                	mov    (%esi),%edi
 874c0fe:	89 06                	mov    %eax,(%esi)
 874c100:	83 c0 18             	add    $0x18,%eax
 874c103:	89 56 04             	mov    %edx,0x4(%esi)
 874c106:	89 46 08             	mov    %eax,0x8(%esi)
 874c109:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874c10e:	89 3c 24             	mov    %edi,(%esp)
 874c111:	e8 da 47 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874c116:	8b 56 08             	mov    0x8(%esi),%edx
 874c119:	8b 46 04             	mov    0x4(%esi),%eax
 874c11c:	39 d0                	cmp    %edx,%eax
 874c11e:	0f 85 2d ff ff ff    	jne    874c051 <_ZN5yaSSL20InitServerKeyFactoryERNS_7FactoryINS_13ServerKeyBaseEiPFPS1_vEEE+0x31>
 874c124:	2b 16                	sub    (%esi),%edx
 874c126:	c1 fa 03             	sar    $0x3,%edx
 874c129:	8d 44 12 01          	lea    0x1(%edx,%edx,1),%eax
 874c12d:	c1 e0 03             	shl    $0x3,%eax
 874c130:	89 45 e0             	mov    %eax,-0x20(%ebp)
 874c133:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874c138:	89 04 24             	mov    %eax,(%esp)
 874c13b:	e8 10 62 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 874c140:	8b 7e 04             	mov    0x4(%esi),%edi
 874c143:	8b 0e                	mov    (%esi),%ecx
 874c145:	39 cf                	cmp    %ecx,%edi
 874c147:	89 c2                	mov    %eax,%edx
 874c149:	74 31                	je     874c17c <_ZN5yaSSL20InitServerKeyFactoryERNS_7FactoryINS_13ServerKeyBaseEiPFPS1_vEEE+0x15c>
 874c14b:	8d 51 08             	lea    0x8(%ecx),%edx
 874c14e:	29 d7                	sub    %edx,%edi
 874c150:	31 d2                	xor    %edx,%edx
 874c152:	c1 ef 03             	shr    $0x3,%edi
 874c155:	83 c7 01             	add    $0x1,%edi
 874c158:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 874c15b:	89 75 dc             	mov    %esi,-0x24(%ebp)
 874c15e:	66 90                	xchg   %ax,%ax
 874c160:	8b 34 d1             	mov    (%ecx,%edx,8),%esi
 874c163:	8b 7c d1 04          	mov    0x4(%ecx,%edx,8),%edi
 874c167:	89 34 d0             	mov    %esi,(%eax,%edx,8)
 874c16a:	89 7c d0 04          	mov    %edi,0x4(%eax,%edx,8)
 874c16e:	83 c2 01             	add    $0x1,%edx
 874c171:	3b 55 e4             	cmp    -0x1c(%ebp),%edx
 874c174:	75 ea                	jne    874c160 <_ZN5yaSSL20InitServerKeyFactoryERNS_7FactoryINS_13ServerKeyBaseEiPFPS1_vEEE+0x140>
 874c176:	8b 75 dc             	mov    -0x24(%ebp),%esi
 874c179:	8d 14 d0             	lea    (%eax,%edx,8),%edx
 874c17c:	8b 8b 9c fe ff ff    	mov    -0x164(%ebx),%ecx
 874c182:	c7 02 01 00 00 00    	movl   $0x1,(%edx)
 874c188:	89 4a 04             	mov    %ecx,0x4(%edx)
 874c18b:	8b 0e                	mov    (%esi),%ecx
 874c18d:	83 c2 08             	add    $0x8,%edx
 874c190:	89 06                	mov    %eax,(%esi)
 874c192:	03 45 e0             	add    -0x20(%ebp),%eax
 874c195:	89 56 04             	mov    %edx,0x4(%esi)
 874c198:	89 46 08             	mov    %eax,0x8(%esi)
 874c19b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874c1a0:	89 0c 24             	mov    %ecx,(%esp)
 874c1a3:	e8 48 47 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874c1a8:	8b 46 04             	mov    0x4(%esi),%eax
 874c1ab:	39 46 08             	cmp    %eax,0x8(%esi)
 874c1ae:	0f 85 be fe ff ff    	jne    874c072 <_ZN5yaSSL20InitServerKeyFactoryERNS_7FactoryINS_13ServerKeyBaseEiPFPS1_vEEE+0x52>
 874c1b4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 874c1b8:	2b 06                	sub    (%esi),%eax
 874c1ba:	c1 f8 03             	sar    $0x3,%eax
 874c1bd:	8d 44 00 01          	lea    0x1(%eax,%eax,1),%eax
 874c1c1:	c1 e0 03             	shl    $0x3,%eax
 874c1c4:	89 45 e0             	mov    %eax,-0x20(%ebp)
 874c1c7:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874c1cc:	89 04 24             	mov    %eax,(%esp)
 874c1cf:	e8 7c 61 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 874c1d4:	8b 7e 04             	mov    0x4(%esi),%edi
 874c1d7:	8b 0e                	mov    (%esi),%ecx
 874c1d9:	39 cf                	cmp    %ecx,%edi
 874c1db:	89 c2                	mov    %eax,%edx
 874c1dd:	74 35                	je     874c214 <_ZN5yaSSL20InitServerKeyFactoryERNS_7FactoryINS_13ServerKeyBaseEiPFPS1_vEEE+0x1f4>
 874c1df:	8d 51 08             	lea    0x8(%ecx),%edx
 874c1e2:	29 d7                	sub    %edx,%edi
 874c1e4:	31 d2                	xor    %edx,%edx
 874c1e6:	c1 ef 03             	shr    $0x3,%edi
 874c1e9:	83 c7 01             	add    $0x1,%edi
 874c1ec:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 874c1ef:	89 75 dc             	mov    %esi,-0x24(%ebp)
 874c1f2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874c1f8:	8b 34 d1             	mov    (%ecx,%edx,8),%esi
 874c1fb:	8b 7c d1 04          	mov    0x4(%ecx,%edx,8),%edi
 874c1ff:	89 34 d0             	mov    %esi,(%eax,%edx,8)
 874c202:	89 7c d0 04          	mov    %edi,0x4(%eax,%edx,8)
 874c206:	83 c2 01             	add    $0x1,%edx
 874c209:	3b 55 e4             	cmp    -0x1c(%ebp),%edx
 874c20c:	75 ea                	jne    874c1f8 <_ZN5yaSSL20InitServerKeyFactoryERNS_7FactoryINS_13ServerKeyBaseEiPFPS1_vEEE+0x1d8>
 874c20e:	8b 75 dc             	mov    -0x24(%ebp),%esi
 874c211:	8d 14 d0             	lea    (%eax,%edx,8),%edx
 874c214:	8b 8b b8 fa ff ff    	mov    -0x548(%ebx),%ecx
 874c21a:	c7 02 02 00 00 00    	movl   $0x2,(%edx)
 874c220:	89 4a 04             	mov    %ecx,0x4(%edx)
 874c223:	8b 0e                	mov    (%esi),%ecx
 874c225:	83 c2 08             	add    $0x8,%edx
 874c228:	89 06                	mov    %eax,(%esi)
 874c22a:	03 45 e0             	add    -0x20(%ebp),%eax
 874c22d:	89 56 04             	mov    %edx,0x4(%esi)
 874c230:	89 46 08             	mov    %eax,0x8(%esi)
 874c233:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874c238:	89 0c 24             	mov    %ecx,(%esp)
 874c23b:	e8 b0 46 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874c240:	8b 46 04             	mov    0x4(%esi),%eax
 874c243:	39 46 08             	cmp    %eax,0x8(%esi)
 874c246:	0f 85 47 fe ff ff    	jne    874c093 <_ZN5yaSSL20InitServerKeyFactoryERNS_7FactoryINS_13ServerKeyBaseEiPFPS1_vEEE+0x73>
 874c24c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 874c250:	2b 06                	sub    (%esi),%eax
 874c252:	c1 f8 03             	sar    $0x3,%eax
 874c255:	8d 44 00 01          	lea    0x1(%eax,%eax,1),%eax
 874c259:	c1 e0 03             	shl    $0x3,%eax
 874c25c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 874c25f:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874c264:	89 04 24             	mov    %eax,(%esp)
 874c267:	e8 e4 60 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 874c26c:	8b 7e 04             	mov    0x4(%esi),%edi
 874c26f:	8b 0e                	mov    (%esi),%ecx
 874c271:	39 cf                	cmp    %ecx,%edi
 874c273:	89 c2                	mov    %eax,%edx
 874c275:	74 35                	je     874c2ac <_ZN5yaSSL20InitServerKeyFactoryERNS_7FactoryINS_13ServerKeyBaseEiPFPS1_vEEE+0x28c>
 874c277:	8d 51 08             	lea    0x8(%ecx),%edx
 874c27a:	29 d7                	sub    %edx,%edi
 874c27c:	31 d2                	xor    %edx,%edx
 874c27e:	c1 ef 03             	shr    $0x3,%edi
 874c281:	83 c7 01             	add    $0x1,%edi
 874c284:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 874c287:	89 75 dc             	mov    %esi,-0x24(%ebp)
 874c28a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874c290:	8b 34 d1             	mov    (%ecx,%edx,8),%esi
 874c293:	8b 7c d1 04          	mov    0x4(%ecx,%edx,8),%edi
 874c297:	89 34 d0             	mov    %esi,(%eax,%edx,8)
 874c29a:	89 7c d0 04          	mov    %edi,0x4(%eax,%edx,8)
 874c29e:	83 c2 01             	add    $0x1,%edx
 874c2a1:	3b 55 e4             	cmp    -0x1c(%ebp),%edx
 874c2a4:	75 ea                	jne    874c290 <_ZN5yaSSL20InitServerKeyFactoryERNS_7FactoryINS_13ServerKeyBaseEiPFPS1_vEEE+0x270>
 874c2a6:	8b 75 dc             	mov    -0x24(%ebp),%esi
 874c2a9:	8d 14 d0             	lea    (%eax,%edx,8),%edx
 874c2ac:	8b 8b 14 fc ff ff    	mov    -0x3ec(%ebx),%ecx
 874c2b2:	c7 02 03 00 00 00    	movl   $0x3,(%edx)
 874c2b8:	89 4a 04             	mov    %ecx,0x4(%edx)
 874c2bb:	8b 0e                	mov    (%esi),%ecx
 874c2bd:	83 c2 08             	add    $0x8,%edx
 874c2c0:	89 06                	mov    %eax,(%esi)
 874c2c2:	03 45 e0             	add    -0x20(%ebp),%eax
 874c2c5:	89 56 04             	mov    %edx,0x4(%esi)
 874c2c8:	89 46 08             	mov    %eax,0x8(%esi)
 874c2cb:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874c2d0:	89 0c 24             	mov    %ecx,(%esp)
 874c2d3:	e8 18 46 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874c2d8:	83 c4 2c             	add    $0x2c,%esp
 874c2db:	5b                   	pop    %ebx
 874c2dc:	5e                   	pop    %esi
 874c2dd:	5f                   	pop    %edi
 874c2de:	5d                   	pop    %ebp
 874c2df:	c3                   	ret

```

```c
// yaSSL::InitServerKeyFactory @ 0x874c020

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::InitServerKeyFactory(yaSSL::Factory<yaSSL::ServerKeyBase, int, yaSSL::ServerKeyBase*
   (*)()>&) */

void yaSSL::InitServerKeyFactory(Factory *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  
  puVar4 = *(undefined4 **)(param_1 + 8);
  if ((uint)((int)puVar4 - *(int *)param_1 >> 3) < 3) {
    pvVar5 = operator_new__(0x18,0);
    iVar10 = *(int *)(param_1 + 4);
    iVar1 = *(int *)param_1;
    pvVar8 = pvVar5;
    if (iVar10 != iVar1) {
      iVar7 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar1 + 4 + iVar7 * 8);
        *(undefined4 *)((int)pvVar5 + iVar7 * 8) = *(undefined4 *)(iVar1 + iVar7 * 8);
        *(undefined4 *)((int)pvVar5 + iVar7 * 8 + 4) = uVar2;
        iVar7 = iVar7 + 1;
      } while (iVar7 != ((uint)(iVar10 - (iVar1 + 8)) >> 3) + 1);
      pvVar8 = (void *)((int)pvVar5 + iVar7 * 8);
      iVar10 = *(int *)param_1;
    }
    *(void **)param_1 = pvVar5;
    *(void **)(param_1 + 4) = pvVar8;
    *(int *)(param_1 + 8) = (int)pvVar5 + 0x18;
    operator_delete__(iVar10,0);
    puVar4 = *(undefined4 **)(param_1 + 8);
    puVar6 = *(undefined4 **)(param_1 + 4);
    if (puVar6 != puVar4) goto LAB_0874c051;
LAB_0874c124:
    iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
    puVar6 = operator_new__(iVar10 * 8,0);
    iVar1 = *(int *)(param_1 + 4);
    iVar7 = *(int *)param_1;
    puVar4 = puVar6;
    if (iVar1 != iVar7) {
      iVar9 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
        puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
        puVar6[iVar9 * 2 + 1] = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
      puVar4 = puVar6 + iVar9 * 2;
    }
    puVar3 = PTR_CreateRSAServerKEA_0936ca34;
    *puVar4 = 1;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    puVar4 = *(undefined4 **)(param_1 + 4);
    if (*(undefined4 **)(param_1 + 8) == puVar4) {
LAB_0874c1b8:
      iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
      puVar6 = operator_new__(iVar10 * 8,0);
      iVar1 = *(int *)(param_1 + 4);
      iVar7 = *(int *)param_1;
      puVar4 = puVar6;
      if (iVar1 != iVar7) {
        iVar9 = 0;
        do {
          uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
          puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
          puVar6[iVar9 * 2 + 1] = uVar2;
          iVar9 = iVar9 + 1;
        } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
        puVar4 = puVar6 + iVar9 * 2;
      }
      puVar3 = PTR_CreateDHServerKEA_0936c650;
      *puVar4 = 2;
      puVar4[1] = puVar3;
      uVar2 = *(undefined4 *)param_1;
      *(undefined4 **)param_1 = puVar6;
      *(undefined4 **)(param_1 + 4) = puVar4 + 2;
      *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
      operator_delete__(uVar2,0);
      puVar4 = *(undefined4 **)(param_1 + 4);
      if (*(undefined4 **)(param_1 + 8) == puVar4) goto LAB_0874c250;
      goto LAB_0874c093;
    }
  }
  else {
    puVar6 = *(undefined4 **)(param_1 + 4);
    if (puVar6 == puVar4) goto LAB_0874c124;
LAB_0874c051:
    puVar3 = PTR_CreateRSAServerKEA_0936ca34;
    *puVar6 = 1;
    puVar6[1] = puVar3;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    *(undefined4 **)(param_1 + 4) = puVar4;
    if (*(undefined4 **)(param_1 + 8) == puVar4) goto LAB_0874c1b8;
  }
  puVar3 = PTR_CreateDHServerKEA_0936c650;
  *puVar4 = 2;
  puVar4[1] = puVar3;
  puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
  *(undefined4 **)(param_1 + 4) = puVar4;
  if (*(undefined4 **)(param_1 + 8) == puVar4) {
LAB_0874c250:
    iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
    puVar6 = operator_new__(iVar10 * 8,0);
    iVar1 = *(int *)(param_1 + 4);
    iVar7 = *(int *)param_1;
    puVar4 = puVar6;
    if (iVar1 != iVar7) {
      iVar9 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
        puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
        puVar6[iVar9 * 2 + 1] = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
      puVar4 = puVar6 + iVar9 * 2;
    }
    puVar3 = PTR_CreateFortezzaServerKEA_0936c7ac;
    *puVar4 = 3;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    return;
  }
LAB_0874c093:
  puVar3 = PTR_CreateFortezzaServerKEA_0936c7ac;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
  *puVar4 = 3;
  puVar4[1] = puVar3;
  return;
}

```

---

## PRF

```asm
// === 0879e980 yaSSL::PRF  [0x0879e980-0x879eb3f] ===
 879e980:	55                   	push   %ebp
 879e981:	89 e5                	mov    %esp,%ebp
 879e983:	57                   	push   %edi
 879e984:	56                   	push   %esi
 879e985:	53                   	push   %ebx
 879e986:	83 ec 7c             	sub    $0x7c,%esp
 879e989:	8b 7d 14             	mov    0x14(%ebp),%edi
 879e98c:	e8 67 44 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879e991:	81 c3 07 e2 bc 00    	add    $0xbce207,%ebx
 879e997:	8d 45 dc             	lea    -0x24(%ebp),%eax
 879e99a:	89 45 9c             	mov    %eax,-0x64(%ebp)
 879e99d:	89 04 24             	mov    %eax,(%esp)
 879e9a0:	8d 77 01             	lea    0x1(%edi),%esi
 879e9a3:	83 e7 01             	and    $0x1,%edi
 879e9a6:	d1 ee                	shr    $1,%esi
 879e9a8:	89 74 24 04          	mov    %esi,0x4(%esp)
 879e9ac:	e8 1f 88 ff ff       	call   87971d0 <_ZN5yaSSL13output_bufferC1Ej>
 879e9b1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 879e9b4:	89 74 24 04          	mov    %esi,0x4(%esp)
 879e9b8:	89 45 98             	mov    %eax,-0x68(%ebp)
 879e9bb:	89 04 24             	mov    %eax,(%esp)
 879e9be:	e8 0d 88 ff ff       	call   87971d0 <_ZN5yaSSL13output_bufferC1Ej>
 879e9c3:	8b 45 24             	mov    0x24(%ebp),%eax
 879e9c6:	03 45 1c             	add    0x1c(%ebp),%eax
 879e9c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 879e9cd:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 879e9d0:	89 45 a0             	mov    %eax,-0x60(%ebp)
 879e9d3:	89 04 24             	mov    %eax,(%esp)
 879e9d6:	e8 f5 87 ff ff       	call   87971d0 <_ZN5yaSSL13output_bufferC1Ej>
 879e9db:	8b 45 10             	mov    0x10(%ebp),%eax
 879e9de:	89 74 24 08          	mov    %esi,0x8(%esp)
 879e9e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 879e9e6:	8b 45 9c             	mov    -0x64(%ebp),%eax
 879e9e9:	89 04 24             	mov    %eax,(%esp)
 879e9ec:	e8 df 85 ff ff       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 879e9f1:	8b 45 98             	mov    -0x68(%ebp),%eax
 879e9f4:	89 74 24 08          	mov    %esi,0x8(%esp)
 879e9f8:	29 fe                	sub    %edi,%esi
 879e9fa:	03 75 10             	add    0x10(%ebp),%esi
 879e9fd:	8d 7d b8             	lea    -0x48(%ebp),%edi
 879ea00:	89 04 24             	mov    %eax,(%esp)
 879ea03:	89 74 24 04          	mov    %esi,0x4(%esp)
 879ea07:	8d 75 ac             	lea    -0x54(%ebp),%esi
 879ea0a:	e8 c1 85 ff ff       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 879ea0f:	8b 45 1c             	mov    0x1c(%ebp),%eax
 879ea12:	89 44 24 08          	mov    %eax,0x8(%esp)
 879ea16:	8b 45 18             	mov    0x18(%ebp),%eax
 879ea19:	89 44 24 04          	mov    %eax,0x4(%esp)
 879ea1d:	8b 45 a0             	mov    -0x60(%ebp),%eax
 879ea20:	89 04 24             	mov    %eax,(%esp)
 879ea23:	e8 a8 85 ff ff       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 879ea28:	8b 45 24             	mov    0x24(%ebp),%eax
 879ea2b:	89 44 24 08          	mov    %eax,0x8(%esp)
 879ea2f:	8b 45 20             	mov    0x20(%ebp),%eax
 879ea32:	89 44 24 04          	mov    %eax,0x4(%esp)
 879ea36:	8b 45 a0             	mov    -0x60(%ebp),%eax
 879ea39:	89 04 24             	mov    %eax,(%esp)
 879ea3c:	e8 8f 85 ff ff       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 879ea41:	8b 45 0c             	mov    0xc(%ebp),%eax
 879ea44:	89 3c 24             	mov    %edi,(%esp)
 879ea47:	89 44 24 04          	mov    %eax,0x4(%esp)
 879ea4b:	e8 80 87 ff ff       	call   87971d0 <_ZN5yaSSL13output_bufferC1Ej>
 879ea50:	8b 45 0c             	mov    0xc(%ebp),%eax
 879ea53:	89 34 24             	mov    %esi,(%esp)
 879ea56:	89 44 24 04          	mov    %eax,0x4(%esp)
 879ea5a:	e8 71 87 ff ff       	call   87971d0 <_ZN5yaSSL13output_bufferC1Ej>
 879ea5f:	8b 45 a0             	mov    -0x60(%ebp),%eax
 879ea62:	8b 55 9c             	mov    -0x64(%ebp),%edx
 879ea65:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 879ea6c:	00 
 879ea6d:	89 04 24             	mov    %eax,(%esp)
 879ea70:	89 f8                	mov    %edi,%eax
 879ea72:	e8 b9 fc ff ff       	call   879e730 <_ZN5yaSSL12_GLOBAL__N_16p_hashERNS_13output_bufferERKS1_S4_NS_12MACAlgorithmE>
 879ea77:	8b 45 a0             	mov    -0x60(%ebp),%eax
 879ea7a:	8b 55 98             	mov    -0x68(%ebp),%edx
 879ea7d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 879ea84:	00 
 879ea85:	89 04 24             	mov    %eax,(%esp)
 879ea88:	89 f0                	mov    %esi,%eax
 879ea8a:	e8 a1 fc ff ff       	call   879e730 <_ZN5yaSSL12_GLOBAL__N_16p_hashERNS_13output_bufferERKS1_S4_NS_12MACAlgorithmE>
 879ea8f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879ea96:	00 
 879ea97:	89 3c 24             	mov    %edi,(%esp)
 879ea9a:	e8 41 84 ff ff       	call   8796ee0 <_ZN5yaSSL13output_buffer11set_currentEj>
 879ea9f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879eaa6:	00 
 879eaa7:	89 34 24             	mov    %esi,(%esp)
 879eaaa:	e8 31 84 ff ff       	call   8796ee0 <_ZN5yaSSL13output_buffer11set_currentEj>
 879eaaf:	8b 45 0c             	mov    0xc(%ebp),%eax
 879eab2:	85 c0                	test   %eax,%eax
 879eab4:	74 4c                	je     879eb02 <_ZN5yaSSL3PRFEPhjPKhjS2_jS2_j+0x182>
 879eab6:	31 d2                	xor    %edx,%edx
 879eab8:	89 7d a4             	mov    %edi,-0x5c(%ebp)
 879eabb:	89 f7                	mov    %esi,%edi
 879eabd:	89 d6                	mov    %edx,%esi
 879eabf:	90                   	nop
 879eac0:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 879eac3:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 879eaca:	fe 
 879eacb:	89 04 24             	mov    %eax,(%esp)
 879eace:	e8 6d 84 ff ff       	call   8796f40 <_ZN5yaSSL13output_bufferixEj>
 879ead3:	0f b6 10             	movzbl (%eax),%edx
 879ead6:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 879eadd:	fe 
 879eade:	89 3c 24             	mov    %edi,(%esp)
 879eae1:	88 55 94             	mov    %dl,-0x6c(%ebp)
 879eae4:	e8 57 84 ff ff       	call   8796f40 <_ZN5yaSSL13output_bufferixEj>
 879eae9:	0f b6 55 94          	movzbl -0x6c(%ebp),%edx
 879eaed:	32 10                	xor    (%eax),%dl
 879eaef:	8b 45 08             	mov    0x8(%ebp),%eax
 879eaf2:	88 14 30             	mov    %dl,(%eax,%esi,1)
 879eaf5:	83 c6 01             	add    $0x1,%esi
 879eaf8:	39 75 0c             	cmp    %esi,0xc(%ebp)
 879eafb:	77 c3                	ja     879eac0 <_ZN5yaSSL3PRFEPhjPKhjS2_jS2_j+0x140>
 879eafd:	89 fe                	mov    %edi,%esi
 879eaff:	8b 7d a4             	mov    -0x5c(%ebp),%edi
 879eb02:	89 34 24             	mov    %esi,(%esp)
 879eb05:	e8 26 88 ff ff       	call   8797330 <_ZN5yaSSL13output_bufferD1Ev>
 879eb0a:	89 3c 24             	mov    %edi,(%esp)
 879eb0d:	e8 1e 88 ff ff       	call   8797330 <_ZN5yaSSL13output_bufferD1Ev>
 879eb12:	8b 45 a0             	mov    -0x60(%ebp),%eax
 879eb15:	89 04 24             	mov    %eax,(%esp)
 879eb18:	e8 13 88 ff ff       	call   8797330 <_ZN5yaSSL13output_bufferD1Ev>
 879eb1d:	8b 45 98             	mov    -0x68(%ebp),%eax
 879eb20:	89 04 24             	mov    %eax,(%esp)
 879eb23:	e8 08 88 ff ff       	call   8797330 <_ZN5yaSSL13output_bufferD1Ev>
 879eb28:	8b 45 9c             	mov    -0x64(%ebp),%eax
 879eb2b:	89 04 24             	mov    %eax,(%esp)
 879eb2e:	e8 fd 87 ff ff       	call   8797330 <_ZN5yaSSL13output_bufferD1Ev>
 879eb33:	83 c4 7c             	add    $0x7c,%esp
 879eb36:	5b                   	pop    %ebx
 879eb37:	5e                   	pop    %esi
 879eb38:	5f                   	pop    %edi
 879eb39:	5d                   	pop    %ebp
 879eb3a:	c3                   	ret
 879eb3b:	90                   	nop
 879eb3c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::PRF @ 0x879e980

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::PRF(unsigned char*, unsigned int, unsigned char const*, unsigned int, unsigned char
   const*, unsigned int, unsigned char const*, unsigned int) */

void yaSSL::PRF(uchar *param_1,uint param_2,uchar *param_3,uint param_4,uchar *param_5,uint param_6,
               uchar *param_7,uint param_8)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  output_buffer local_58 [12];
  output_buffer local_4c [12];
  output_buffer local_40 [12];
  output_buffer local_34 [12];
  output_buffer local_28 [24];
  
  uVar3 = param_4 + 1 >> 1;
  output_buffer::output_buffer(local_28,uVar3);
  output_buffer::output_buffer(local_34,uVar3);
  output_buffer::output_buffer(local_40,param_8 + param_6);
  output_buffer::write(local_28,param_3,uVar3);
  output_buffer::write(local_34,param_3 + (uVar3 - (param_4 & 1)),uVar3);
  output_buffer::write(local_40,param_5,param_6);
  output_buffer::write(local_40,param_7,param_8);
  output_buffer::output_buffer(local_4c,param_2);
  output_buffer::output_buffer(local_58,param_2);
  (anonymous_namespace)::p_hash(local_4c,local_28,local_40,1);
  (anonymous_namespace)::p_hash(local_58,local_34,local_40,2);
  output_buffer::set_current(local_4c,0);
  output_buffer::set_current(local_58,0);
  if (param_2 != 0) {
    uVar3 = 0;
    do {
      pbVar2 = (byte *)output_buffer::operator[]((uint)local_4c);
      bVar1 = *pbVar2;
      pbVar2 = (byte *)output_buffer::operator[]((uint)local_58);
      param_1[uVar3] = bVar1 ^ *pbVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
  output_buffer::~output_buffer(local_58);
  output_buffer::~output_buffer(local_4c);
  output_buffer::~output_buffer(local_40);
  output_buffer::~output_buffer(local_34);
  output_buffer::~output_buffer(local_28);
  return;
}

```

---

## PemToDer

```asm
// === 0879bcb0 yaSSL::PemToDer  [0x0879bcb0-0x879cd3f] ===
 879bcb0:	55                   	push   %ebp
 879bcb1:	89 e5                	mov    %esp,%ebp
 879bcb3:	57                   	push   %edi
 879bcb4:	56                   	push   %esi
 879bcb5:	53                   	push   %ebx
 879bcb6:	81 ec 6c 01 00 00    	sub    $0x16c,%esp
 879bcbc:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 879bcbf:	e8 34 71 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879bcc4:	81 c3 d4 0e bd 00    	add    $0xbd0ed4,%ebx
 879bcca:	8b 75 08             	mov    0x8(%ebp),%esi
 879bccd:	85 c9                	test   %ecx,%ecx
 879bccf:	0f 85 db 01 00 00    	jne    879beb0 <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x200>
 879bcd5:	8d 83 22 08 9a ff    	lea    -0x65f7de(%ebx),%eax
 879bcdb:	89 44 24 04          	mov    %eax,0x4(%esp)
 879bcdf:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 879bce5:	c7 44 24 08 50 00 00 	movl   $0x50,0x8(%esp)
 879bcec:	00 
 879bced:	8d bd b8 fe ff ff    	lea    -0x148(%ebp),%edi
 879bcf3:	89 85 b4 fe ff ff    	mov    %eax,-0x14c(%ebp)
 879bcf9:	89 04 24             	mov    %eax,(%esp)
 879bcfc:	e8 cf 1b 8e ff       	call   807d8d0 <strncpy@plt>
 879bd01:	8d 95 08 ff ff ff    	lea    -0xf8(%ebp),%edx
 879bd07:	8d 83 3e 08 9a ff    	lea    -0x65f7c2(%ebx),%eax
 879bd0d:	c7 44 24 08 50 00 00 	movl   $0x50,0x8(%esp)
 879bd14:	00 
 879bd15:	89 44 24 04          	mov    %eax,0x4(%esp)
 879bd19:	89 95 b0 fe ff ff    	mov    %edx,-0x150(%ebp)
 879bd1f:	89 14 24             	mov    %edx,(%esp)
 879bd22:	e8 a9 1b 8e ff       	call   807d8d0 <strncpy@plt>
 879bd27:	90                   	nop
 879bd28:	89 74 24 08          	mov    %esi,0x8(%esp)
 879bd2c:	c7 44 24 04 50 00 00 	movl   $0x50,0x4(%esp)
 879bd33:	00 
 879bd34:	89 3c 24             	mov    %edi,(%esp)
 879bd37:	e8 24 25 8e ff       	call   807e260 <fgets@plt>
 879bd3c:	85 c0                	test   %eax,%eax
 879bd3e:	0f 84 84 02 00 00    	je     879bfc8 <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x318>
 879bd44:	8b 95 b4 fe ff ff    	mov    -0x14c(%ebp),%edx
 879bd4a:	8b 0a                	mov    (%edx),%ecx
 879bd4c:	83 c2 04             	add    $0x4,%edx
 879bd4f:	8d 81 ff fe fe fe    	lea    -0x1010101(%ecx),%eax
 879bd55:	f7 d1                	not    %ecx
 879bd57:	21 c8                	and    %ecx,%eax
 879bd59:	25 80 80 80 80       	and    $0x80808080,%eax
 879bd5e:	74 ea                	je     879bd4a <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x9a>
 879bd60:	89 c1                	mov    %eax,%ecx
 879bd62:	c1 e9 10             	shr    $0x10,%ecx
 879bd65:	a9 80 80 00 00       	test   $0x8080,%eax
 879bd6a:	0f 44 c1             	cmove  %ecx,%eax
 879bd6d:	8d 4a 02             	lea    0x2(%edx),%ecx
 879bd70:	0f 44 d1             	cmove  %ecx,%edx
 879bd73:	00 c0                	add    %al,%al
 879bd75:	83 da 03             	sbb    $0x3,%edx
 879bd78:	2b 95 b4 fe ff ff    	sub    -0x14c(%ebp),%edx
 879bd7e:	89 7c 24 04          	mov    %edi,0x4(%esp)
 879bd82:	89 54 24 08          	mov    %edx,0x8(%esp)
 879bd86:	8b 95 b4 fe ff ff    	mov    -0x14c(%ebp),%edx
 879bd8c:	89 14 24             	mov    %edx,(%esp)
 879bd8f:	e8 2c 2b 8e ff       	call   807e8c0 <strncmp@plt>
 879bd94:	85 c0                	test   %eax,%eax
 879bd96:	75 90                	jne    879bd28 <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x78>
 879bd98:	89 34 24             	mov    %esi,(%esp)
 879bd9b:	e8 30 1c 8e ff       	call   807d9d0 <ftell@plt>
 879bda0:	89 85 ac fe ff ff    	mov    %eax,-0x154(%ebp)
 879bda6:	89 74 24 08          	mov    %esi,0x8(%esp)
 879bdaa:	c7 44 24 04 50 00 00 	movl   $0x50,0x4(%esp)
 879bdb1:	00 
 879bdb2:	89 3c 24             	mov    %edi,(%esp)
 879bdb5:	e8 a6 24 8e ff       	call   807e260 <fgets@plt>
 879bdba:	85 c0                	test   %eax,%eax
 879bdbc:	74 43                	je     879be01 <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x151>
 879bdbe:	8d 55 de             	lea    -0x22(%ebp),%edx
 879bdc1:	89 14 24             	mov    %edx,(%esp)
 879bdc4:	89 95 a8 fe ff ff    	mov    %edx,-0x158(%ebp)
 879bdca:	c7 45 de 50 72 6f 63 	movl   $0x636f7250,-0x22(%ebp)
 879bdd1:	c7 45 e2 2d 54 79 70 	movl   $0x7079542d,-0x1e(%ebp)
 879bdd8:	66 c7 45 e6 65 00    	movw   $0x65,-0x1a(%ebp)
 879bdde:	e8 cd 25 8e ff       	call   807e3b0 <strlen@plt>
 879bde3:	8b 95 a8 fe ff ff    	mov    -0x158(%ebp),%edx
 879bde9:	89 7c 24 04          	mov    %edi,0x4(%esp)
 879bded:	89 14 24             	mov    %edx,(%esp)
 879bdf0:	89 44 24 08          	mov    %eax,0x8(%esp)
 879bdf4:	e8 c7 2a 8e ff       	call   807e8c0 <strncmp@plt>
 879bdf9:	85 c0                	test   %eax,%eax
 879bdfb:	0f 84 1f 01 00 00    	je     879bf20 <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x270>
 879be01:	c7 85 b4 fe ff ff 00 	movl   $0x0,-0x14c(%ebp)
 879be08:	00 00 00 
 879be0b:	eb 69                	jmp    879be76 <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x1c6>
 879be0d:	8d 76 00             	lea    0x0(%esi),%esi
 879be10:	8b 95 b0 fe ff ff    	mov    -0x150(%ebp),%edx
 879be16:	8b 0a                	mov    (%edx),%ecx
 879be18:	83 c2 04             	add    $0x4,%edx
 879be1b:	8d 81 ff fe fe fe    	lea    -0x1010101(%ecx),%eax
 879be21:	f7 d1                	not    %ecx
 879be23:	21 c8                	and    %ecx,%eax
 879be25:	25 80 80 80 80       	and    $0x80808080,%eax
 879be2a:	74 ea                	je     879be16 <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x166>
 879be2c:	89 c1                	mov    %eax,%ecx
 879be2e:	c1 e9 10             	shr    $0x10,%ecx
 879be31:	a9 80 80 00 00       	test   $0x8080,%eax
 879be36:	0f 44 c1             	cmove  %ecx,%eax
 879be39:	8d 4a 02             	lea    0x2(%edx),%ecx
 879be3c:	0f 44 d1             	cmove  %ecx,%edx
 879be3f:	00 c0                	add    %al,%al
 879be41:	8b 8d b0 fe ff ff    	mov    -0x150(%ebp),%ecx
 879be47:	83 da 03             	sbb    $0x3,%edx
 879be4a:	2b 95 b0 fe ff ff    	sub    -0x150(%ebp),%edx
 879be50:	89 7c 24 04          	mov    %edi,0x4(%esp)
 879be54:	89 0c 24             	mov    %ecx,(%esp)
 879be57:	89 54 24 08          	mov    %edx,0x8(%esp)
 879be5b:	e8 60 2a 8e ff       	call   807e8c0 <strncmp@plt>
 879be60:	85 c0                	test   %eax,%eax
 879be62:	0f 84 a0 00 00 00    	je     879bf08 <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x258>
 879be68:	89 34 24             	mov    %esi,(%esp)
 879be6b:	e8 60 1b 8e ff       	call   807d9d0 <ftell@plt>
 879be70:	89 85 b4 fe ff ff    	mov    %eax,-0x14c(%ebp)
 879be76:	89 74 24 08          	mov    %esi,0x8(%esp)
 879be7a:	c7 44 24 04 50 00 00 	movl   $0x50,0x4(%esp)
 879be81:	00 
 879be82:	89 3c 24             	mov    %edi,(%esp)
 879be85:	e8 d6 23 8e ff       	call   807e260 <fgets@plt>
 879be8a:	85 c0                	test   %eax,%eax
 879be8c:	75 82                	jne    879be10 <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x160>
 879be8e:	83 bd ac fe ff ff ff 	cmpl   $0xffffffff,-0x154(%ebp)
 879be95:	0f 85 3d 01 00 00    	jne    879bfd8 <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x328>
 879be9b:	31 f6                	xor    %esi,%esi
 879be9d:	81 c4 6c 01 00 00    	add    $0x16c,%esp
 879bea3:	89 f0                	mov    %esi,%eax
 879bea5:	5b                   	pop    %ebx
 879bea6:	5e                   	pop    %esi
 879bea7:	5f                   	pop    %edi
 879bea8:	5d                   	pop    %ebp
 879bea9:	c3                   	ret
 879beaa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 879beb0:	8d 8d 58 ff ff ff    	lea    -0xa8(%ebp),%ecx
 879beb6:	8d 83 7c 08 9a ff    	lea    -0x65f784(%ebx),%eax
 879bebc:	89 8d b4 fe ff ff    	mov    %ecx,-0x14c(%ebp)
 879bec2:	8d bd b8 fe ff ff    	lea    -0x148(%ebp),%edi
 879bec8:	89 0c 24             	mov    %ecx,(%esp)
 879becb:	c7 44 24 08 50 00 00 	movl   $0x50,0x8(%esp)
 879bed2:	00 
 879bed3:	89 44 24 04          	mov    %eax,0x4(%esp)
 879bed7:	e8 f4 19 8e ff       	call   807d8d0 <strncpy@plt>
 879bedc:	8d 83 58 08 9a ff    	lea    -0x65f7a8(%ebx),%eax
 879bee2:	89 44 24 04          	mov    %eax,0x4(%esp)
 879bee6:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 879beec:	c7 44 24 08 50 00 00 	movl   $0x50,0x8(%esp)
 879bef3:	00 
 879bef4:	89 85 b0 fe ff ff    	mov    %eax,-0x150(%ebp)
 879befa:	89 04 24             	mov    %eax,(%esp)
 879befd:	e8 ce 19 8e ff       	call   807d8d0 <strncpy@plt>
 879bf02:	e9 21 fe ff ff       	jmp    879bd28 <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x78>
 879bf07:	90                   	nop
 879bf08:	83 bd ac fe ff ff ff 	cmpl   $0xffffffff,-0x154(%ebp)
 879bf0f:	b8 01 00 00 00       	mov    $0x1,%eax
 879bf14:	74 85                	je     879be9b <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x1eb>
 879bf16:	e9 bd 00 00 00       	jmp    879bfd8 <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x328>
 879bf1b:	90                   	nop
 879bf1c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 879bf20:	89 74 24 08          	mov    %esi,0x8(%esp)
 879bf24:	c7 44 24 04 50 00 00 	movl   $0x50,0x4(%esp)
 879bf2b:	00 
 879bf2c:	89 3c 24             	mov    %edi,(%esp)
 879bf2f:	e8 2c 23 8e ff       	call   807e260 <fgets@plt>
 879bf34:	85 c0                	test   %eax,%eax
 879bf36:	0f 84 c5 fe ff ff    	je     879be01 <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x151>
 879bf3c:	8d 83 07 76 a7 ff    	lea    -0x5889f9(%ebx),%eax
 879bf42:	89 44 24 04          	mov    %eax,0x4(%esp)
 879bf46:	89 3c 24             	mov    %edi,(%esp)
 879bf49:	e8 72 1b 8e ff       	call   807dac0 <strstr@plt>
 879bf4e:	c7 44 24 04 2c 00 00 	movl   $0x2c,0x4(%esp)
 879bf55:	00 
 879bf56:	89 3c 24             	mov    %edi,(%esp)
 879bf59:	89 85 a8 fe ff ff    	mov    %eax,-0x158(%ebp)
 879bf5f:	e8 1c 26 8e ff       	call   807e580 <strchr@plt>
 879bf64:	8b 8d a8 fe ff ff    	mov    -0x158(%ebp),%ecx
 879bf6a:	85 c9                	test   %ecx,%ecx
 879bf6c:	89 85 b4 fe ff ff    	mov    %eax,-0x14c(%ebp)
 879bf72:	0f 84 e1 00 00 00    	je     879c059 <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x3a9>
 879bf78:	8b 55 10             	mov    0x10(%ebp),%edx
 879bf7b:	85 d2                	test   %edx,%edx
 879bf7d:	0f 84 18 ff ff ff    	je     879be9b <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x1eb>
 879bf83:	85 c9                	test   %ecx,%ecx
 879bf85:	74 16                	je     879bf9d <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x2ed>
 879bf87:	8b 85 b4 fe ff ff    	mov    -0x14c(%ebp),%eax
 879bf8d:	85 c0                	test   %eax,%eax
 879bf8f:	74 0c                	je     879bf9d <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x2ed>
 879bf91:	3b 8d b4 fe ff ff    	cmp    -0x14c(%ebp),%ecx
 879bf97:	0f 82 d5 00 00 00    	jb     879c072 <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x3c2>
 879bf9d:	89 74 24 08          	mov    %esi,0x8(%esp)
 879bfa1:	c7 44 24 04 50 00 00 	movl   $0x50,0x4(%esp)
 879bfa8:	00 
 879bfa9:	89 3c 24             	mov    %edi,(%esp)
 879bfac:	e8 af 22 8e ff       	call   807e260 <fgets@plt>
 879bfb1:	89 34 24             	mov    %esi,(%esp)
 879bfb4:	e8 17 1a 8e ff       	call   807d9d0 <ftell@plt>
 879bfb9:	89 85 ac fe ff ff    	mov    %eax,-0x154(%ebp)
 879bfbf:	e9 3d fe ff ff       	jmp    879be01 <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x151>
 879bfc4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 879bfc8:	c7 85 ac fe ff ff ff 	movl   $0xffffffff,-0x154(%ebp)
 879bfcf:	ff ff ff 
 879bfd2:	e9 cf fd ff ff       	jmp    879bda6 <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0xf6>
 879bfd7:	90                   	nop
 879bfd8:	84 c0                	test   %al,%al
 879bfda:	0f 84 bb fe ff ff    	je     879be9b <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x1eb>
 879bfe0:	8b 85 b4 fe ff ff    	mov    -0x14c(%ebp),%eax
 879bfe6:	8d 7d cc             	lea    -0x34(%ebp),%edi
 879bfe9:	2b 85 ac fe ff ff    	sub    -0x154(%ebp),%eax
 879bfef:	89 3c 24             	mov    %edi,(%esp)
 879bff2:	89 85 b4 fe ff ff    	mov    %eax,-0x14c(%ebp)
 879bff8:	89 44 24 04          	mov    %eax,0x4(%esp)
 879bffc:	e8 df b2 ff ff       	call   87972e0 <_ZN5yaSSL12input_bufferC1Ej>
 879c001:	8b 95 ac fe ff ff    	mov    -0x154(%ebp),%edx
 879c007:	89 34 24             	mov    %esi,(%esp)
 879c00a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 879c011:	00 
 879c012:	89 54 24 04          	mov    %edx,0x4(%esp)
 879c016:	e8 95 20 8e ff       	call   807e0b0 <fseek@plt>
 879c01b:	89 3c 24             	mov    %edi,(%esp)
 879c01e:	e8 0d ad ff ff       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 879c023:	8b 8d b4 fe ff ff    	mov    -0x14c(%ebp),%ecx
 879c029:	89 74 24 0c          	mov    %esi,0xc(%esp)
 879c02d:	31 f6                	xor    %esi,%esi
 879c02f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 879c036:	00 
 879c037:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879c03b:	89 04 24             	mov    %eax,(%esp)
 879c03e:	e8 0d 1d 8e ff       	call   807dd50 <fread@plt>
 879c043:	83 f8 01             	cmp    $0x1,%eax
 879c046:	0f 84 ee 00 00 00    	je     879c13a <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x48a>
 879c04c:	89 3c 24             	mov    %edi,(%esp)
 879c04f:	e8 0c b3 ff ff       	call   8797360 <_ZN5yaSSL12input_bufferD1Ev>
 879c054:	e9 44 fe ff ff       	jmp    879be9d <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x1ed>
 879c059:	8d 83 76 08 9a ff    	lea    -0x65f78a(%ebx),%eax
 879c05f:	89 44 24 04          	mov    %eax,0x4(%esp)
 879c063:	89 3c 24             	mov    %edi,(%esp)
 879c066:	e8 55 1a 8e ff       	call   807dac0 <strstr@plt>
 879c06b:	89 c1                	mov    %eax,%ecx
 879c06d:	e9 06 ff ff ff       	jmp    879bf78 <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x2c8>
 879c072:	8b 95 b4 fe ff ff    	mov    -0x14c(%ebp),%edx
 879c078:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879c07c:	29 ca                	sub    %ecx,%edx
 879c07e:	8b 4d 10             	mov    0x10(%ebp),%ecx
 879c081:	89 54 24 08          	mov    %edx,0x8(%esp)
 879c085:	89 95 a8 fe ff ff    	mov    %edx,-0x158(%ebp)
 879c08b:	89 0c 24             	mov    %ecx,(%esp)
 879c08e:	e8 0d 18 8e ff       	call   807d8a0 <memcpy@plt>
 879c093:	8b 95 a8 fe ff ff    	mov    -0x158(%ebp),%edx
 879c099:	8b 45 10             	mov    0x10(%ebp),%eax
 879c09c:	c6 04 10 00          	movb   $0x0,(%eax,%edx,1)
 879c0a0:	8b 8d b4 fe ff ff    	mov    -0x14c(%ebp),%ecx
 879c0a6:	83 c0 50             	add    $0x50,%eax
 879c0a9:	8b 95 b4 fe ff ff    	mov    -0x14c(%ebp),%edx
 879c0af:	89 85 ac fe ff ff    	mov    %eax,-0x154(%ebp)
 879c0b5:	8b 45 10             	mov    0x10(%ebp),%eax
 879c0b8:	8b 49 01             	mov    0x1(%ecx),%ecx
 879c0bb:	83 c2 01             	add    $0x1,%edx
 879c0be:	89 48 50             	mov    %ecx,0x50(%eax)
 879c0c1:	8b 4a 04             	mov    0x4(%edx),%ecx
 879c0c4:	8b 85 ac fe ff ff    	mov    -0x154(%ebp),%eax
 879c0ca:	89 48 04             	mov    %ecx,0x4(%eax)
 879c0cd:	8b 4a 08             	mov    0x8(%edx),%ecx
 879c0d0:	89 48 08             	mov    %ecx,0x8(%eax)
 879c0d3:	8b 4a 0c             	mov    0xc(%edx),%ecx
 879c0d6:	89 48 0c             	mov    %ecx,0xc(%eax)
 879c0d9:	8b 4a 10             	mov    0x10(%edx),%ecx
 879c0dc:	89 48 10             	mov    %ecx,0x10(%eax)
 879c0df:	8b 4a 14             	mov    0x14(%edx),%ecx
 879c0e2:	89 48 14             	mov    %ecx,0x14(%eax)
 879c0e5:	8b 4a 18             	mov    0x18(%edx),%ecx
 879c0e8:	89 48 18             	mov    %ecx,0x18(%eax)
 879c0eb:	8b 4a 1c             	mov    0x1c(%edx),%ecx
 879c0ee:	89 48 1c             	mov    %ecx,0x1c(%eax)
 879c0f1:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 879c0f8:	00 
 879c0f9:	89 3c 24             	mov    %edi,(%esp)
 879c0fc:	89 95 a8 fe ff ff    	mov    %edx,-0x158(%ebp)
 879c102:	e8 79 24 8e ff       	call   807e580 <strchr@plt>
 879c107:	8b 95 a8 fe ff ff    	mov    -0x158(%ebp),%edx
 879c10d:	85 c0                	test   %eax,%eax
 879c10f:	0f 84 71 01 00 00    	je     879c286 <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x5d6>
 879c115:	3b 85 b4 fe ff ff    	cmp    -0x14c(%ebp),%eax
 879c11b:	0f 86 7c fe ff ff    	jbe    879bf9d <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x2ed>
 879c121:	85 c0                	test   %eax,%eax
 879c123:	0f 84 74 fe ff ff    	je     879bf9d <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x2ed>
 879c129:	29 d0                	sub    %edx,%eax
 879c12b:	8b 55 10             	mov    0x10(%ebp),%edx
 879c12e:	89 42 70             	mov    %eax,0x70(%edx)
 879c131:	c6 42 74 01          	movb   $0x1,0x74(%edx)
 879c135:	e9 63 fe ff ff       	jmp    879bf9d <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x2ed>
 879c13a:	89 3c 24             	mov    %edi,(%esp)
 879c13d:	e8 ee ab ff ff       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 879c142:	8b 8d b4 fe ff ff    	mov    -0x14c(%ebp),%ecx
 879c148:	89 c6                	mov    %eax,%esi
 879c14a:	8b 85 b4 fe ff ff    	mov    -0x14c(%ebp),%eax
 879c150:	89 45 a8             	mov    %eax,-0x58(%ebp)
 879c153:	31 c0                	xor    %eax,%eax
 879c155:	85 c9                	test   %ecx,%ecx
 879c157:	74 13                	je     879c16c <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x4bc>
 879c159:	8b 95 b4 fe ff ff    	mov    -0x14c(%ebp),%edx
 879c15f:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879c164:	89 14 24             	mov    %edx,(%esp)
 879c167:	e8 24 b6 fc ff       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 879c16c:	8b 55 a8             	mov    -0x58(%ebp),%edx
 879c16f:	89 45 ac             	mov    %eax,-0x54(%ebp)
 879c172:	89 74 24 04          	mov    %esi,0x4(%esp)
 879c176:	89 04 24             	mov    %eax,(%esp)
 879c179:	89 54 24 08          	mov    %edx,0x8(%esp)
 879c17d:	e8 1e 17 8e ff       	call   807d8a0 <memcpy@plt>
 879c182:	8d 45 a8             	lea    -0x58(%ebp),%eax
 879c185:	89 45 c8             	mov    %eax,-0x38(%ebp)
 879c188:	8d 45 bc             	lea    -0x44(%ebp),%eax
 879c18b:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 879c192:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 879c199:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 879c1a0:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 879c1a7:	89 04 24             	mov    %eax,(%esp)
 879c1aa:	e8 11 ab fb ff       	call   8756cc0 <_ZN8TaoCrypt13Base64Decoder6DecodeEv>
 879c1af:	8b 4d a8             	mov    -0x58(%ebp),%ecx
 879c1b2:	89 8d b0 fe ff ff    	mov    %ecx,-0x150(%ebp)
 879c1b8:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879c1bd:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 879c1c4:	e8 d7 4a fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 879c1c9:	89 c6                	mov    %eax,%esi
 879c1cb:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 879c1d1:	89 34 24             	mov    %esi,(%esp)
 879c1d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 879c1d8:	e8 73 b5 ff ff       	call   8797750 <_ZN5yaSSL4x509C1Ej>
 879c1dd:	8b 55 ac             	mov    -0x54(%ebp),%edx
 879c1e0:	89 34 24             	mov    %esi,(%esp)
 879c1e3:	89 95 a8 fe ff ff    	mov    %edx,-0x158(%ebp)
 879c1e9:	e8 02 b2 ff ff       	call   87973f0 <_ZN5yaSSL4x50910use_bufferEv>
 879c1ee:	8b 8d b0 fe ff ff    	mov    -0x150(%ebp),%ecx
 879c1f4:	8b 95 a8 fe ff ff    	mov    -0x158(%ebp),%edx
 879c1fa:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 879c1fe:	89 54 24 04          	mov    %edx,0x4(%esp)
 879c202:	89 04 24             	mov    %eax,(%esp)
 879c205:	e8 96 16 8e ff       	call   807d8a0 <memcpy@plt>
 879c20a:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879c20f:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 879c216:	e8 05 46 fb ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 879c21b:	8b 55 c0             	mov    -0x40(%ebp),%edx
 879c21e:	8b 45 bc             	mov    -0x44(%ebp),%eax
 879c221:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879c228:	00 
 879c229:	89 14 24             	mov    %edx,(%esp)
 879c22c:	89 95 a8 fe ff ff    	mov    %edx,-0x158(%ebp)
 879c232:	89 44 24 08          	mov    %eax,0x8(%esp)
 879c236:	e8 85 1a 8e ff       	call   807dcc0 <memset@plt>
 879c23b:	8b 95 a8 fe ff ff    	mov    -0x158(%ebp),%edx
 879c241:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879c246:	89 14 24             	mov    %edx,(%esp)
 879c249:	e8 d2 b4 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879c24e:	8b 55 ac             	mov    -0x54(%ebp),%edx
 879c251:	8b 45 a8             	mov    -0x58(%ebp),%eax
 879c254:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879c25b:	00 
 879c25c:	89 14 24             	mov    %edx,(%esp)
 879c25f:	89 95 a8 fe ff ff    	mov    %edx,-0x158(%ebp)
 879c265:	89 44 24 08          	mov    %eax,0x8(%esp)
 879c269:	e8 52 1a 8e ff       	call   807dcc0 <memset@plt>
 879c26e:	8b 95 a8 fe ff ff    	mov    -0x158(%ebp),%edx
 879c274:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879c279:	89 14 24             	mov    %edx,(%esp)
 879c27c:	e8 9f b4 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879c281:	e9 c6 fd ff ff       	jmp    879c04c <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x39c>
 879c286:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 879c28d:	00 
 879c28e:	89 3c 24             	mov    %edi,(%esp)
 879c291:	e8 ea 22 8e ff       	call   807e580 <strchr@plt>
 879c296:	8b 95 a8 fe ff ff    	mov    -0x158(%ebp),%edx
 879c29c:	e9 74 fe ff ff       	jmp    879c115 <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0x465>
 879c2a1:	90                   	nop
 879c2a2:	90                   	nop
 879c2a3:	90                   	nop
 879c2a4:	90                   	nop
 879c2a5:	90                   	nop
 879c2a6:	90                   	nop
 879c2a7:	90                   	nop
 879c2a8:	90                   	nop
 879c2a9:	90                   	nop
 879c2aa:	90                   	nop
 879c2ab:	90                   	nop
 879c2ac:	90                   	nop
 879c2ad:	90                   	nop
 879c2ae:	90                   	nop
 879c2af:	90                   	nop

0879c2b0 <_ZN5yaSSL6DigestD1Ev>:
 879c2b0:	e8 0f 83 f8 ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 879c2b5:	81 c1 e3 08 bd 00    	add    $0xbd08e3,%ecx
 879c2bb:	55                   	push   %ebp
 879c2bc:	89 e5                	mov    %esp,%ebp
 879c2be:	8b 81 28 fb ff ff    	mov    -0x4d8(%ecx),%eax
 879c2c4:	8d 50 08             	lea    0x8(%eax),%edx
 879c2c7:	8b 45 08             	mov    0x8(%ebp),%eax
 879c2ca:	89 10                	mov    %edx,(%eax)
 879c2cc:	5d                   	pop    %ebp
 879c2cd:	c3                   	ret
 879c2ce:	90                   	nop
 879c2cf:	90                   	nop

0879c2d0 <_ZN5yaSSL6DigestD0Ev>:
 879c2d0:	e8 ef 82 f8 ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 879c2d5:	81 c1 c3 08 bd 00    	add    $0xbd08c3,%ecx
 879c2db:	55                   	push   %ebp
 879c2dc:	89 e5                	mov    %esp,%ebp
 879c2de:	8b 81 28 fb ff ff    	mov    -0x4d8(%ecx),%eax
 879c2e4:	8d 50 08             	lea    0x8(%eax),%edx
 879c2e7:	8b 45 08             	mov    0x8(%ebp),%eax
 879c2ea:	89 10                	mov    %edx,(%eax)
 879c2ec:	5d                   	pop    %ebp
 879c2ed:	c3                   	ret
 879c2ee:	90                   	nop
 879c2ef:	90                   	nop

0879c2f0 <_ZN5yaSSL10BulkCipherD1Ev>:
 879c2f0:	e8 cf 82 f8 ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 879c2f5:	81 c1 a3 08 bd 00    	add    $0xbd08a3,%ecx
 879c2fb:	55                   	push   %ebp
 879c2fc:	89 e5                	mov    %esp,%ebp
 879c2fe:	8b 81 e0 fa ff ff    	mov    -0x520(%ecx),%eax
 879c304:	8d 50 08             	lea    0x8(%eax),%edx
 879c307:	8b 45 08             	mov    0x8(%ebp),%eax
 879c30a:	89 10                	mov    %edx,(%eax)
 879c30c:	5d                   	pop    %ebp
 879c30d:	c3                   	ret
 879c30e:	90                   	nop
 879c30f:	90                   	nop

0879c310 <_ZN5yaSSL10BulkCipherD0Ev>:
 879c310:	e8 af 82 f8 ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 879c315:	81 c1 83 08 bd 00    	add    $0xbd0883,%ecx
 879c31b:	55                   	push   %ebp
 879c31c:	89 e5                	mov    %esp,%ebp
 879c31e:	8b 81 e0 fa ff ff    	mov    -0x520(%ecx),%eax
 879c324:	8d 50 08             	lea    0x8(%eax),%edx
 879c327:	8b 45 08             	mov    0x8(%ebp),%eax
 879c32a:	89 10                	mov    %edx,(%eax)
 879c32c:	5d                   	pop    %ebp
 879c32d:	c3                   	ret
 879c32e:	90                   	nop
 879c32f:	90                   	nop

0879c330 <_ZNK5yaSSL3DES13get_blockSizeEv>:
 879c330:	55                   	push   %ebp
 879c331:	b8 08 00 00 00       	mov    $0x8,%eax
 879c336:	89 e5                	mov    %esp,%ebp
 879c338:	5d                   	pop    %ebp
 879c339:	c3                   	ret
 879c33a:	90                   	nop
 879c33b:	90                   	nop
 879c33c:	90                   	nop
 879c33d:	90                   	nop
 879c33e:	90                   	nop
 879c33f:	90                   	nop

0879c340 <_ZNK5yaSSL3DES11get_keySizeEv>:
 879c340:	55                   	push   %ebp
 879c341:	b8 08 00 00 00       	mov    $0x8,%eax
 879c346:	89 e5                	mov    %esp,%ebp
 879c348:	5d                   	pop    %ebp
 879c349:	c3                   	ret
 879c34a:	90                   	nop
 879c34b:	90                   	nop
 879c34c:	90                   	nop
 879c34d:	90                   	nop
 879c34e:	90                   	nop
 879c34f:	90                   	nop

0879c350 <_ZNK5yaSSL3DES10get_ivSizeEv>:
 879c350:	55                   	push   %ebp
 879c351:	b8 08 00 00 00       	mov    $0x8,%eax
 879c356:	89 e5                	mov    %esp,%ebp
 879c358:	5d                   	pop    %ebp
 879c359:	c3                   	ret
 879c35a:	90                   	nop
 879c35b:	90                   	nop
 879c35c:	90                   	nop
 879c35d:	90                   	nop
 879c35e:	90                   	nop
 879c35f:	90                   	nop

0879c360 <_ZNK5yaSSL7DES_EDE13get_blockSizeEv>:
 879c360:	55                   	push   %ebp
 879c361:	b8 08 00 00 00       	mov    $0x8,%eax
 879c366:	89 e5                	mov    %esp,%ebp
 879c368:	5d                   	pop    %ebp
 879c369:	c3                   	ret
 879c36a:	90                   	nop
 879c36b:	90                   	nop
 879c36c:	90                   	nop
 879c36d:	90                   	nop
 879c36e:	90                   	nop
 879c36f:	90                   	nop

0879c370 <_ZNK5yaSSL7DES_EDE11get_keySizeEv>:
 879c370:	55                   	push   %ebp
 879c371:	b8 18 00 00 00       	mov    $0x18,%eax
 879c376:	89 e5                	mov    %esp,%ebp
 879c378:	5d                   	pop    %ebp
 879c379:	c3                   	ret
 879c37a:	90                   	nop
 879c37b:	90                   	nop
 879c37c:	90                   	nop
 879c37d:	90                   	nop
 879c37e:	90                   	nop
 879c37f:	90                   	nop

0879c380 <_ZNK5yaSSL7DES_EDE10get_ivSizeEv>:
 879c380:	55                   	push   %ebp
 879c381:	b8 08 00 00 00       	mov    $0x8,%eax
 879c386:	89 e5                	mov    %esp,%ebp
 879c388:	5d                   	pop    %ebp
 879c389:	c3                   	ret
 879c38a:	90                   	nop
 879c38b:	90                   	nop
 879c38c:	90                   	nop
 879c38d:	90                   	nop
 879c38e:	90                   	nop
 879c38f:	90                   	nop

0879c390 <_ZNK5yaSSL3RC413get_blockSizeEv>:
 879c390:	55                   	push   %ebp
 879c391:	31 c0                	xor    %eax,%eax
 879c393:	89 e5                	mov    %esp,%ebp
 879c395:	5d                   	pop    %ebp
 879c396:	c3                   	ret
 879c397:	90                   	nop
 879c398:	90                   	nop
 879c399:	90                   	nop
 879c39a:	90                   	nop
 879c39b:	90                   	nop
 879c39c:	90                   	nop
 879c39d:	90                   	nop
 879c39e:	90                   	nop
 879c39f:	90                   	nop

0879c3a0 <_ZNK5yaSSL3RC411get_keySizeEv>:
 879c3a0:	55                   	push   %ebp
 879c3a1:	b8 10 00 00 00       	mov    $0x10,%eax
 879c3a6:	89 e5                	mov    %esp,%ebp
 879c3a8:	5d                   	pop    %ebp
 879c3a9:	c3                   	ret
 879c3aa:	90                   	nop
 879c3ab:	90                   	nop
 879c3ac:	90                   	nop
 879c3ad:	90                   	nop
 879c3ae:	90                   	nop
 879c3af:	90                   	nop

0879c3b0 <_ZNK5yaSSL3RC410get_ivSizeEv>:
 879c3b0:	55                   	push   %ebp
 879c3b1:	31 c0                	xor    %eax,%eax
 879c3b3:	89 e5                	mov    %esp,%ebp
 879c3b5:	5d                   	pop    %ebp
 879c3b6:	c3                   	ret
 879c3b7:	90                   	nop
 879c3b8:	90                   	nop
 879c3b9:	90                   	nop
 879c3ba:	90                   	nop
 879c3bb:	90                   	nop
 879c3bc:	90                   	nop
 879c3bd:	90                   	nop
 879c3be:	90                   	nop
 879c3bf:	90                   	nop

0879c3c0 <_ZNK5yaSSL3AES13get_blockSizeEv>:
 879c3c0:	55                   	push   %ebp
 879c3c1:	b8 10 00 00 00       	mov    $0x10,%eax
 879c3c6:	89 e5                	mov    %esp,%ebp
 879c3c8:	5d                   	pop    %ebp
 879c3c9:	c3                   	ret
 879c3ca:	90                   	nop
 879c3cb:	90                   	nop
 879c3cc:	90                   	nop
 879c3cd:	90                   	nop
 879c3ce:	90                   	nop
 879c3cf:	90                   	nop

0879c3d0 <_ZNK5yaSSL3AES10get_ivSizeEv>:
 879c3d0:	55                   	push   %ebp
 879c3d1:	b8 10 00 00 00       	mov    $0x10,%eax
 879c3d6:	89 e5                	mov    %esp,%ebp
 879c3d8:	5d                   	pop    %ebp
 879c3d9:	c3                   	ret
 879c3da:	90                   	nop
 879c3db:	90                   	nop
 879c3dc:	90                   	nop
 879c3dd:	90                   	nop
 879c3de:	90                   	nop
 879c3df:	90                   	nop

0879c3e0 <_ZN5yaSSL4AuthD1Ev>:
 879c3e0:	e8 df 81 f8 ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 879c3e5:	81 c1 b3 07 bd 00    	add    $0xbd07b3,%ecx
 879c3eb:	55                   	push   %ebp
 879c3ec:	89 e5                	mov    %esp,%ebp
 879c3ee:	8b 81 24 fd ff ff    	mov    -0x2dc(%ecx),%eax
 879c3f4:	8d 50 08             	lea    0x8(%eax),%edx
 879c3f7:	8b 45 08             	mov    0x8(%ebp),%eax
 879c3fa:	89 10                	mov    %edx,(%eax)
 879c3fc:	5d                   	pop    %ebp
 879c3fd:	c3                   	ret
 879c3fe:	90                   	nop
 879c3ff:	90                   	nop

0879c400 <_ZN5yaSSL4AuthD0Ev>:
 879c400:	e8 bf 81 f8 ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 879c405:	81 c1 93 07 bd 00    	add    $0xbd0793,%ecx
 879c40b:	55                   	push   %ebp
 879c40c:	89 e5                	mov    %esp,%ebp
 879c40e:	8b 81 24 fd ff ff    	mov    -0x2dc(%ecx),%eax
 879c414:	8d 50 08             	lea    0x8(%eax),%edx
 879c417:	8b 45 08             	mov    0x8(%ebp),%eax
 879c41a:	89 10                	mov    %edx,(%eax)
 879c41c:	5d                   	pop    %ebp
 879c41d:	c3                   	ret
 879c41e:	90                   	nop
 879c41f:	90                   	nop

0879c420 <_ZN8TaoCrypt9Mode_BASED1Ev>:
 879c420:	e8 9f 81 f8 ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 879c425:	81 c1 73 07 bd 00    	add    $0xbd0773,%ecx
 879c42b:	55                   	push   %ebp
 879c42c:	89 e5                	mov    %esp,%ebp
 879c42e:	8b 81 8c fb ff ff    	mov    -0x474(%ecx),%eax
 879c434:	8d 50 08             	lea    0x8(%eax),%edx
 879c437:	8b 45 08             	mov    0x8(%ebp),%eax
 879c43a:	89 10                	mov    %edx,(%eax)
 879c43c:	5d                   	pop    %ebp
 879c43d:	c3                   	ret
 879c43e:	90                   	nop
 879c43f:	90                   	nop

0879c440 <_ZN8TaoCrypt9Mode_BASED0Ev>:
 879c440:	e8 7f 81 f8 ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 879c445:	81 c1 53 07 bd 00    	add    $0xbd0753,%ecx
 879c44b:	55                   	push   %ebp
 879c44c:	89 e5                	mov    %esp,%ebp
 879c44e:	8b 81 8c fb ff ff    	mov    -0x474(%ecx),%eax
 879c454:	8d 50 08             	lea    0x8(%eax),%edx
 879c457:	8b 45 08             	mov    0x8(%ebp),%eax
 879c45a:	89 10                	mov    %edx,(%eax)
 879c45c:	5d                   	pop    %ebp
 879c45d:	c3                   	ret
 879c45e:	90                   	nop
 879c45f:	90                   	nop

0879c460 <_ZN8TaoCrypt9Mode_BASE7ProcessEPhPKhj>:
 879c460:	55                   	push   %ebp
 879c461:	89 e5                	mov    %esp,%ebp
 879c463:	57                   	push   %edi
 879c464:	56                   	push   %esi
 879c465:	53                   	push   %ebx
 879c466:	83 ec 4c             	sub    $0x4c,%esp
 879c469:	8b 75 08             	mov    0x8(%ebp),%esi
 879c46c:	e8 87 69 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879c471:	81 c3 27 07 bd 00    	add    $0xbd0727,%ebx
 879c477:	8b 7d 0c             	mov    0xc(%ebp),%edi
 879c47a:	8b 4d 10             	mov    0x10(%ebp),%ecx
 879c47d:	8b 45 14             	mov    0x14(%ebp),%eax
 879c480:	8b 56 34             	mov    0x34(%esi),%edx
 879c483:	85 d2                	test   %edx,%edx
 879c485:	75 51                	jne    879c4d8 <_ZN8TaoCrypt9Mode_BASE7ProcessEPhPKhj+0x78>
 879c487:	31 d2                	xor    %edx,%edx
 879c489:	f7 76 04             	divl   0x4(%esi)
 879c48c:	85 c0                	test   %eax,%eax
 879c48e:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 879c491:	74 3d                	je     879c4d0 <_ZN8TaoCrypt9Mode_BASE7ProcessEPhPKhj+0x70>
 879c493:	89 f8                	mov    %edi,%eax
 879c495:	89 f7                	mov    %esi,%edi
 879c497:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 879c49a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 879c4a0:	8b 17                	mov    (%edi),%edx
 879c4a2:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 879c4a5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 879c4a9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879c4ad:	89 4d c8             	mov    %ecx,-0x38(%ebp)
 879c4b0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 879c4b7:	00 
 879c4b8:	89 3c 24             	mov    %edi,(%esp)
 879c4bb:	ff 52 0c             	call   *0xc(%edx)
 879c4be:	8b 57 04             	mov    0x4(%edi),%edx
 879c4c1:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 879c4c4:	8b 4d c8             	mov    -0x38(%ebp),%ecx
 879c4c7:	01 d0                	add    %edx,%eax
 879c4c9:	01 d1                	add    %edx,%ecx
 879c4cb:	83 ee 01             	sub    $0x1,%esi
 879c4ce:	75 d0                	jne    879c4a0 <_ZN8TaoCrypt9Mode_BASE7ProcessEPhPKhj+0x40>
 879c4d0:	83 c4 4c             	add    $0x4c,%esp
 879c4d3:	5b                   	pop    %ebx
 879c4d4:	5e                   	pop    %esi
 879c4d5:	5f                   	pop    %edi
 879c4d6:	5d                   	pop    %ebp
 879c4d7:	c3                   	ret
 879c4d8:	83 fa 01             	cmp    $0x1,%edx
 879c4db:	75 f3                	jne    879c4d0 <_ZN8TaoCrypt9Mode_BASE7ProcessEPhPKhj+0x70>
 879c4dd:	8b 56 30             	mov    0x30(%esi),%edx
 879c4e0:	85 d2                	test   %edx,%edx
 879c4e2:	75 7c                	jne    879c560 <_ZN8TaoCrypt9Mode_BASE7ProcessEPhPKhj+0x100>
 879c4e4:	8b 56 04             	mov    0x4(%esi),%edx
 879c4e7:	89 55 d0             	mov    %edx,-0x30(%ebp)
 879c4ea:	31 d2                	xor    %edx,%edx
 879c4ec:	f7 75 d0             	divl   -0x30(%ebp)
 879c4ef:	85 c0                	test   %eax,%eax
 879c4f1:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 879c4f4:	74 da                	je     879c4d0 <_ZN8TaoCrypt9Mode_BASE7ProcessEPhPKhj+0x70>
 879c4f6:	8b 45 d0             	mov    -0x30(%ebp),%eax
 879c4f9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 879c500:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879c504:	89 44 24 08          	mov    %eax,0x8(%esp)
 879c508:	8b 46 08             	mov    0x8(%esi),%eax
 879c50b:	89 4d c8             	mov    %ecx,-0x38(%ebp)
 879c50e:	89 04 24             	mov    %eax,(%esp)
 879c511:	e8 fa ae fc ff       	call   8767410 <_ZN8TaoCrypt6xorbufEPhPKhj>
 879c516:	8b 46 08             	mov    0x8(%esi),%eax
 879c519:	8b 16                	mov    (%esi),%edx
 879c51b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 879c522:	00 
 879c523:	89 34 24             	mov    %esi,(%esp)
 879c526:	89 44 24 0c          	mov    %eax,0xc(%esp)
 879c52a:	89 44 24 04          	mov    %eax,0x4(%esp)
 879c52e:	ff 52 0c             	call   *0xc(%edx)
 879c531:	8b 46 08             	mov    0x8(%esi),%eax
 879c534:	8b 56 04             	mov    0x4(%esi),%edx
 879c537:	89 3c 24             	mov    %edi,(%esp)
 879c53a:	89 44 24 04          	mov    %eax,0x4(%esp)
 879c53e:	89 54 24 08          	mov    %edx,0x8(%esp)
 879c542:	e8 59 13 8e ff       	call   807d8a0 <memcpy@plt>
 879c547:	8b 46 04             	mov    0x4(%esi),%eax
 879c54a:	8b 4d c8             	mov    -0x38(%ebp),%ecx
 879c54d:	01 c7                	add    %eax,%edi
 879c54f:	01 c1                	add    %eax,%ecx
 879c551:	83 6d d4 01          	subl   $0x1,-0x2c(%ebp)
 879c555:	75 a9                	jne    879c500 <_ZN8TaoCrypt9Mode_BASE7ProcessEPhPKhj+0xa0>
 879c557:	e9 74 ff ff ff       	jmp    879c4d0 <_ZN8TaoCrypt9Mode_BASE7ProcessEPhPKhj+0x70>
 879c55c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 879c560:	8b 56 04             	mov    0x4(%esi),%edx
 879c563:	89 55 cc             	mov    %edx,-0x34(%ebp)
 879c566:	31 d2                	xor    %edx,%edx
 879c568:	f7 75 cc             	divl   -0x34(%ebp)
 879c56b:	85 c0                	test   %eax,%eax
 879c56d:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 879c570:	0f 84 5a ff ff ff    	je     879c4d0 <_ZN8TaoCrypt9Mode_BASE7ProcessEPhPKhj+0x70>
 879c576:	8d 45 d8             	lea    -0x28(%ebp),%eax
 879c579:	89 45 d0             	mov    %eax,-0x30(%ebp)
 879c57c:	8b 45 cc             	mov    -0x34(%ebp),%eax
 879c57f:	90                   	nop
 879c580:	8b 56 0c             	mov    0xc(%esi),%edx
 879c583:	89 4d c8             	mov    %ecx,-0x38(%ebp)
 879c586:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879c58a:	89 44 24 08          	mov    %eax,0x8(%esp)
 879c58e:	89 14 24             	mov    %edx,(%esp)
 879c591:	e8 0a 13 8e ff       	call   807d8a0 <memcpy@plt>
 879c596:	8b 06                	mov    (%esi),%eax
 879c598:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 879c59c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 879c5a3:	00 
 879c5a4:	8b 56 0c             	mov    0xc(%esi),%edx
 879c5a7:	89 34 24             	mov    %esi,(%esp)
 879c5aa:	89 54 24 04          	mov    %edx,0x4(%esp)
 879c5ae:	ff 50 0c             	call   *0xc(%eax)
 879c5b1:	8b 46 04             	mov    0x4(%esi),%eax
 879c5b4:	89 44 24 08          	mov    %eax,0x8(%esp)
 879c5b8:	8b 46 08             	mov    0x8(%esi),%eax
 879c5bb:	89 3c 24             	mov    %edi,(%esp)
 879c5be:	89 44 24 04          	mov    %eax,0x4(%esp)
 879c5c2:	e8 49 ae fc ff       	call   8767410 <_ZN8TaoCrypt6xorbufEPhPKhj>
 879c5c7:	8b 56 04             	mov    0x4(%esi),%edx
 879c5ca:	8b 46 08             	mov    0x8(%esi),%eax
 879c5cd:	89 54 24 08          	mov    %edx,0x8(%esp)
 879c5d1:	8b 55 d0             	mov    -0x30(%ebp),%edx
 879c5d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 879c5d8:	89 14 24             	mov    %edx,(%esp)
 879c5db:	e8 c0 12 8e ff       	call   807d8a0 <memcpy@plt>
 879c5e0:	8b 46 0c             	mov    0xc(%esi),%eax
 879c5e3:	8b 56 04             	mov    0x4(%esi),%edx
 879c5e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 879c5ea:	89 54 24 08          	mov    %edx,0x8(%esp)
 879c5ee:	8b 46 08             	mov    0x8(%esi),%eax
 879c5f1:	89 04 24             	mov    %eax,(%esp)
 879c5f4:	e8 a7 12 8e ff       	call   807d8a0 <memcpy@plt>
 879c5f9:	8b 56 04             	mov    0x4(%esi),%edx
 879c5fc:	8b 46 0c             	mov    0xc(%esi),%eax
 879c5ff:	89 54 24 08          	mov    %edx,0x8(%esp)
 879c603:	8b 55 d0             	mov    -0x30(%ebp),%edx
 879c606:	89 04 24             	mov    %eax,(%esp)
 879c609:	89 54 24 04          	mov    %edx,0x4(%esp)
 879c60d:	e8 8e 12 8e ff       	call   807d8a0 <memcpy@plt>
 879c612:	8b 46 04             	mov    0x4(%esi),%eax
 879c615:	8b 4d c8             	mov    -0x38(%ebp),%ecx
 879c618:	01 c7                	add    %eax,%edi
 879c61a:	01 c1                	add    %eax,%ecx
 879c61c:	83 6d d4 01          	subl   $0x1,-0x2c(%ebp)
 879c620:	0f 85 5a ff ff ff    	jne    879c580 <_ZN8TaoCrypt9Mode_BASE7ProcessEPhPKhj+0x120>
 879c626:	e9 a5 fe ff ff       	jmp    879c4d0 <_ZN8TaoCrypt9Mode_BASE7ProcessEPhPKhj+0x70>
 879c62b:	90                   	nop
 879c62c:	90                   	nop
 879c62d:	90                   	nop
 879c62e:	90                   	nop
 879c62f:	90                   	nop

0879c630 <_ZN8TaoCrypt13RSA_EncryptorINS_14RSA_BlockType1EE7EncryptEPKhjPhRNS_21RandomNumberGeneratorE>:
 879c630:	55                   	push   %ebp
 879c631:	89 e5                	mov    %esp,%ebp
 879c633:	57                   	push   %edi
 879c634:	31 ff                	xor    %edi,%edi
 879c636:	56                   	push   %esi
 879c637:	53                   	push   %ebx
 879c638:	83 ec 5c             	sub    $0x5c,%esp
 879c63b:	8b 45 08             	mov    0x8(%ebp),%eax
 879c63e:	e8 b5 67 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879c643:	81 c3 55 05 bd 00    	add    $0xbd0555,%ebx
 879c649:	8b 00                	mov    (%eax),%eax
 879c64b:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 879c64e:	89 04 24             	mov    %eax,(%esp)
 879c651:	e8 8a 25 fc ff       	call   875ebe0 <_ZNK8TaoCrypt7Integer8BitCountEv>
 879c656:	8d 70 06             	lea    0x6(%eax),%esi
 879c659:	c1 ee 03             	shr    $0x3,%esi
 879c65c:	85 f6                	test   %esi,%esi
 879c65e:	0f 85 44 01 00 00    	jne    879c7a8 <_ZN8TaoCrypt13RSA_EncryptorINS_14RSA_BlockType1EE7EncryptEPKhjPhRNS_21RandomNumberGeneratorE+0x178>
 879c664:	89 74 24 08          	mov    %esi,0x8(%esp)
 879c668:	89 3c 24             	mov    %edi,(%esp)
 879c66b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879c672:	00 
 879c673:	e8 48 16 8e ff       	call   807dcc0 <memset@plt>
 879c678:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 879c67b:	89 14 24             	mov    %edx,(%esp)
 879c67e:	e8 5d 25 fc ff       	call   875ebe0 <_ZNK8TaoCrypt7Integer8BitCountEv>
 879c683:	8b 55 18             	mov    0x18(%ebp),%edx
 879c686:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 879c68a:	89 54 24 14          	mov    %edx,0x14(%esp)
 879c68e:	83 e8 01             	sub    $0x1,%eax
 879c691:	89 44 24 10          	mov    %eax,0x10(%esp)
 879c695:	8b 45 10             	mov    0x10(%ebp),%eax
 879c698:	89 44 24 08          	mov    %eax,0x8(%esp)
 879c69c:	8b 45 0c             	mov    0xc(%ebp),%eax
 879c69f:	89 44 24 04          	mov    %eax,0x4(%esp)
 879c6a3:	8b 45 08             	mov    0x8(%ebp),%eax
 879c6a6:	83 c0 04             	add    $0x4,%eax
 879c6a9:	89 04 24             	mov    %eax,(%esp)
 879c6ac:	e8 1f b4 fc ff       	call   8767ad0 <_ZNK8TaoCrypt14RSA_BlockType13PadEPKhjPhjRNS_21RandomNumberGeneratorE>
 879c6b1:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 879c6b4:	89 04 24             	mov    %eax,(%esp)
 879c6b7:	e8 74 25 fc ff       	call   875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>
 879c6bc:	8d 55 d8             	lea    -0x28(%ebp),%edx
 879c6bf:	89 74 24 08          	mov    %esi,0x8(%esp)
 879c6c3:	89 7c 24 04          	mov    %edi,0x4(%esp)
 879c6c7:	89 14 24             	mov    %edx,(%esp)
 879c6ca:	89 55 c0             	mov    %edx,-0x40(%ebp)
 879c6cd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 879c6d4:	00 
 879c6d5:	89 45 bc             	mov    %eax,-0x44(%ebp)
 879c6d8:	e8 23 4c fc ff       	call   8761300 <_ZN8TaoCrypt7IntegerC1EPKhjNS0_10SignednessE>
 879c6dd:	8b 55 c0             	mov    -0x40(%ebp),%edx
 879c6e0:	8d 45 c8             	lea    -0x38(%ebp),%eax
 879c6e3:	89 45 c0             	mov    %eax,-0x40(%ebp)
 879c6e6:	89 54 24 08          	mov    %edx,0x8(%esp)
 879c6ea:	8b 55 08             	mov    0x8(%ebp),%edx
 879c6ed:	8b 12                	mov    (%edx),%edx
 879c6ef:	89 04 24             	mov    %eax,(%esp)
 879c6f2:	89 54 24 04          	mov    %edx,0x4(%esp)
 879c6f6:	e8 05 b7 fc ff       	call   8767e00 <_ZNK8TaoCrypt13RSA_PublicKey13ApplyFunctionERKNS_7IntegerE>
 879c6fb:	8b 4d bc             	mov    -0x44(%ebp),%ecx
 879c6fe:	8b 55 14             	mov    0x14(%ebp),%edx
 879c701:	8b 45 c0             	mov    -0x40(%ebp),%eax
 879c704:	83 ec 04             	sub    $0x4,%esp
 879c707:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 879c70b:	89 54 24 04          	mov    %edx,0x4(%esp)
 879c70f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 879c716:	00 
 879c717:	89 04 24             	mov    %eax,(%esp)
 879c71a:	e8 f1 47 fc ff       	call   8760f10 <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE>
 879c71f:	8b 45 c8             	mov    -0x38(%ebp),%eax
 879c722:	8b 55 cc             	mov    -0x34(%ebp),%edx
 879c725:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879c72c:	00 
 879c72d:	c1 e0 02             	shl    $0x2,%eax
 879c730:	89 14 24             	mov    %edx,(%esp)
 879c733:	89 55 c0             	mov    %edx,-0x40(%ebp)
 879c736:	89 44 24 08          	mov    %eax,0x8(%esp)
 879c73a:	e8 81 15 8e ff       	call   807dcc0 <memset@plt>
 879c73f:	8b 55 c0             	mov    -0x40(%ebp),%edx
 879c742:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879c747:	89 14 24             	mov    %edx,(%esp)
 879c74a:	e8 d1 af fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879c74f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 879c752:	8b 55 dc             	mov    -0x24(%ebp),%edx
 879c755:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879c75c:	00 
 879c75d:	c1 e0 02             	shl    $0x2,%eax
 879c760:	89 14 24             	mov    %edx,(%esp)
 879c763:	89 55 c0             	mov    %edx,-0x40(%ebp)
 879c766:	89 44 24 08          	mov    %eax,0x8(%esp)
 879c76a:	e8 51 15 8e ff       	call   807dcc0 <memset@plt>
 879c76f:	8b 55 c0             	mov    -0x40(%ebp),%edx
 879c772:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879c777:	89 14 24             	mov    %edx,(%esp)
 879c77a:	e8 a1 af fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879c77f:	89 74 24 08          	mov    %esi,0x8(%esp)
 879c783:	89 3c 24             	mov    %edi,(%esp)
 879c786:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879c78d:	00 
 879c78e:	e8 2d 15 8e ff       	call   807dcc0 <memset@plt>
 879c793:	89 3c 24             	mov    %edi,(%esp)
 879c796:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879c79b:	e8 80 af fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879c7a0:	8d 65 f4             	lea    -0xc(%ebp),%esp
 879c7a3:	5b                   	pop    %ebx
 879c7a4:	5e                   	pop    %esi
 879c7a5:	5f                   	pop    %edi
 879c7a6:	5d                   	pop    %ebp
 879c7a7:	c3                   	ret
 879c7a8:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879c7ad:	89 34 24             	mov    %esi,(%esp)
 879c7b0:	e8 db af fc ff       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 879c7b5:	89 c7                	mov    %eax,%edi
 879c7b7:	e9 a8 fe ff ff       	jmp    879c664 <_ZN8TaoCrypt13RSA_EncryptorINS_14RSA_BlockType1EE7EncryptEPKhjPhRNS_21RandomNumberGeneratorE+0x34>
 879c7bc:	90                   	nop
 879c7bd:	90                   	nop
 879c7be:	90                   	nop
 879c7bf:	90                   	nop

0879c7c0 <_ZN8TaoCrypt13RSA_EncryptorINS_14RSA_BlockType2EE7EncryptEPKhjPhRNS_21RandomNumberGeneratorE>:
 879c7c0:	55                   	push   %ebp
 879c7c1:	89 e5                	mov    %esp,%ebp
 879c7c3:	57                   	push   %edi
 879c7c4:	31 ff                	xor    %edi,%edi
 879c7c6:	56                   	push   %esi
 879c7c7:	53                   	push   %ebx
 879c7c8:	83 ec 5c             	sub    $0x5c,%esp
 879c7cb:	8b 45 08             	mov    0x8(%ebp),%eax
 879c7ce:	e8 25 66 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879c7d3:	81 c3 c5 03 bd 00    	add    $0xbd03c5,%ebx
 879c7d9:	8b 00                	mov    (%eax),%eax
 879c7db:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 879c7de:	89 04 24             	mov    %eax,(%esp)
 879c7e1:	e8 fa 23 fc ff       	call   875ebe0 <_ZNK8TaoCrypt7Integer8BitCountEv>
 879c7e6:	8d 70 06             	lea    0x6(%eax),%esi
 879c7e9:	c1 ee 03             	shr    $0x3,%esi
 879c7ec:	85 f6                	test   %esi,%esi
 879c7ee:	0f 85 44 01 00 00    	jne    879c938 <_ZN8TaoCrypt13RSA_EncryptorINS_14RSA_BlockType2EE7EncryptEPKhjPhRNS_21RandomNumberGeneratorE+0x178>
 879c7f4:	89 74 24 08          	mov    %esi,0x8(%esp)
 879c7f8:	89 3c 24             	mov    %edi,(%esp)
 879c7fb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879c802:	00 
 879c803:	e8 b8 14 8e ff       	call   807dcc0 <memset@plt>
 879c808:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 879c80b:	89 14 24             	mov    %edx,(%esp)
 879c80e:	e8 cd 23 fc ff       	call   875ebe0 <_ZNK8TaoCrypt7Integer8BitCountEv>
 879c813:	8b 55 18             	mov    0x18(%ebp),%edx
 879c816:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 879c81a:	89 54 24 14          	mov    %edx,0x14(%esp)
 879c81e:	83 e8 01             	sub    $0x1,%eax
 879c821:	89 44 24 10          	mov    %eax,0x10(%esp)
 879c825:	8b 45 10             	mov    0x10(%ebp),%eax
 879c828:	89 44 24 08          	mov    %eax,0x8(%esp)
 879c82c:	8b 45 0c             	mov    0xc(%ebp),%eax
 879c82f:	89 44 24 04          	mov    %eax,0x4(%esp)
 879c833:	8b 45 08             	mov    0x8(%ebp),%eax
 879c836:	83 c0 04             	add    $0x4,%eax
 879c839:	89 04 24             	mov    %eax,(%esp)
 879c83c:	e8 cf b3 fc ff       	call   8767c10 <_ZNK8TaoCrypt14RSA_BlockType23PadEPKhjPhjRNS_21RandomNumberGeneratorE>
 879c841:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 879c844:	89 04 24             	mov    %eax,(%esp)
 879c847:	e8 e4 23 fc ff       	call   875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>
 879c84c:	8d 55 d8             	lea    -0x28(%ebp),%edx
 879c84f:	89 74 24 08          	mov    %esi,0x8(%esp)
 879c853:	89 7c 24 04          	mov    %edi,0x4(%esp)
 879c857:	89 14 24             	mov    %edx,(%esp)
 879c85a:	89 55 c0             	mov    %edx,-0x40(%ebp)
 879c85d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 879c864:	00 
 879c865:	89 45 bc             	mov    %eax,-0x44(%ebp)
 879c868:	e8 93 4a fc ff       	call   8761300 <_ZN8TaoCrypt7IntegerC1EPKhjNS0_10SignednessE>
 879c86d:	8b 55 c0             	mov    -0x40(%ebp),%edx
 879c870:	8d 45 c8             	lea    -0x38(%ebp),%eax
 879c873:	89 45 c0             	mov    %eax,-0x40(%ebp)
 879c876:	89 54 24 08          	mov    %edx,0x8(%esp)
 879c87a:	8b 55 08             	mov    0x8(%ebp),%edx
 879c87d:	8b 12                	mov    (%edx),%edx
 879c87f:	89 04 24             	mov    %eax,(%esp)
 879c882:	89 54 24 04          	mov    %edx,0x4(%esp)
 879c886:	e8 75 b5 fc ff       	call   8767e00 <_ZNK8TaoCrypt13RSA_PublicKey13ApplyFunctionERKNS_7IntegerE>
 879c88b:	8b 4d bc             	mov    -0x44(%ebp),%ecx
 879c88e:	8b 55 14             	mov    0x14(%ebp),%edx
 879c891:	8b 45 c0             	mov    -0x40(%ebp),%eax
 879c894:	83 ec 04             	sub    $0x4,%esp
 879c897:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 879c89b:	89 54 24 04          	mov    %edx,0x4(%esp)
 879c89f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 879c8a6:	00 
 879c8a7:	89 04 24             	mov    %eax,(%esp)
 879c8aa:	e8 61 46 fc ff       	call   8760f10 <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE>
 879c8af:	8b 45 c8             	mov    -0x38(%ebp),%eax
 879c8b2:	8b 55 cc             	mov    -0x34(%ebp),%edx
 879c8b5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879c8bc:	00 
 879c8bd:	c1 e0 02             	shl    $0x2,%eax
 879c8c0:	89 14 24             	mov    %edx,(%esp)
 879c8c3:	89 55 c0             	mov    %edx,-0x40(%ebp)
 879c8c6:	89 44 24 08          	mov    %eax,0x8(%esp)
 879c8ca:	e8 f1 13 8e ff       	call   807dcc0 <memset@plt>
 879c8cf:	8b 55 c0             	mov    -0x40(%ebp),%edx
 879c8d2:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879c8d7:	89 14 24             	mov    %edx,(%esp)
 879c8da:	e8 41 ae fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879c8df:	8b 45 d8             	mov    -0x28(%ebp),%eax
 879c8e2:	8b 55 dc             	mov    -0x24(%ebp),%edx
 879c8e5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879c8ec:	00 
 879c8ed:	c1 e0 02             	shl    $0x2,%eax
 879c8f0:	89 14 24             	mov    %edx,(%esp)
 879c8f3:	89 55 c0             	mov    %edx,-0x40(%ebp)
 879c8f6:	89 44 24 08          	mov    %eax,0x8(%esp)
 879c8fa:	e8 c1 13 8e ff       	call   807dcc0 <memset@plt>
 879c8ff:	8b 55 c0             	mov    -0x40(%ebp),%edx
 879c902:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879c907:	89 14 24             	mov    %edx,(%esp)
 879c90a:	e8 11 ae fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879c90f:	89 74 24 08          	mov    %esi,0x8(%esp)
 879c913:	89 3c 24             	mov    %edi,(%esp)
 879c916:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879c91d:	00 
 879c91e:	e8 9d 13 8e ff       	call   807dcc0 <memset@plt>
 879c923:	89 3c 24             	mov    %edi,(%esp)
 879c926:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879c92b:	e8 f0 ad fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879c930:	8d 65 f4             	lea    -0xc(%ebp),%esp
 879c933:	5b                   	pop    %ebx
 879c934:	5e                   	pop    %esi
 879c935:	5f                   	pop    %edi
 879c936:	5d                   	pop    %ebp
 879c937:	c3                   	ret
 879c938:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879c93d:	89 34 24             	mov    %esi,(%esp)
 879c940:	e8 4b ae fc ff       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 879c945:	89 c7                	mov    %eax,%edi
 879c947:	e9 a8 fe ff ff       	jmp    879c7f4 <_ZN8TaoCrypt13RSA_EncryptorINS_14RSA_BlockType2EE7EncryptEPKhjPhRNS_21RandomNumberGeneratorE+0x34>
 879c94c:	90                   	nop
 879c94d:	90                   	nop
 879c94e:	90                   	nop
 879c94f:	90                   	nop

0879c950 <_ZN5yaSSL8ysDeleteINS_3RSA7RSAImplEEEvPT_>:
 879c950:	55                   	push   %ebp
 879c951:	89 e5                	mov    %esp,%ebp
 879c953:	57                   	push   %edi
 879c954:	56                   	push   %esi
 879c955:	53                   	push   %ebx
 879c956:	83 ec 2c             	sub    $0x2c,%esp
 879c959:	8b 75 08             	mov    0x8(%ebp),%esi
 879c95c:	e8 97 64 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879c961:	81 c3 37 02 bd 00    	add    $0xbd0237,%ebx
 879c967:	85 f6                	test   %esi,%esi
 879c969:	0f 84 b8 01 00 00    	je     879cb27 <_ZN5yaSSL8ysDeleteINS_3RSA7RSAImplEEEvPT_+0x1d7>
 879c96f:	8b 86 90 00 00 00    	mov    0x90(%esi),%eax
 879c975:	8b be 94 00 00 00    	mov    0x94(%esi),%edi
 879c97b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879c982:	00 
 879c983:	c1 e0 02             	shl    $0x2,%eax
 879c986:	89 3c 24             	mov    %edi,(%esp)
 879c989:	89 44 24 08          	mov    %eax,0x8(%esp)
 879c98d:	e8 2e 13 8e ff       	call   807dcc0 <memset@plt>
 879c992:	89 3c 24             	mov    %edi,(%esp)
 879c995:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879c99a:	e8 81 ad fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879c99f:	8b 86 80 00 00 00    	mov    0x80(%esi),%eax
 879c9a5:	8b be 84 00 00 00    	mov    0x84(%esi),%edi
 879c9ab:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879c9b2:	00 
 879c9b3:	c1 e0 02             	shl    $0x2,%eax
 879c9b6:	89 3c 24             	mov    %edi,(%esp)
 879c9b9:	89 44 24 08          	mov    %eax,0x8(%esp)
 879c9bd:	e8 fe 12 8e ff       	call   807dcc0 <memset@plt>
 879c9c2:	89 3c 24             	mov    %edi,(%esp)
 879c9c5:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879c9ca:	e8 51 ad fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879c9cf:	8b 46 70             	mov    0x70(%esi),%eax
 879c9d2:	8b 7e 74             	mov    0x74(%esi),%edi
 879c9d5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879c9dc:	00 
 879c9dd:	c1 e0 02             	shl    $0x2,%eax
 879c9e0:	89 3c 24             	mov    %edi,(%esp)
 879c9e3:	89 44 24 08          	mov    %eax,0x8(%esp)
 879c9e7:	e8 d4 12 8e ff       	call   807dcc0 <memset@plt>
 879c9ec:	89 3c 24             	mov    %edi,(%esp)
 879c9ef:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879c9f4:	e8 27 ad fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879c9f9:	8b 46 60             	mov    0x60(%esi),%eax
 879c9fc:	8b 7e 64             	mov    0x64(%esi),%edi
 879c9ff:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879ca06:	00 
 879ca07:	c1 e0 02             	shl    $0x2,%eax
 879ca0a:	89 3c 24             	mov    %edi,(%esp)
 879ca0d:	89 44 24 08          	mov    %eax,0x8(%esp)
 879ca11:	e8 aa 12 8e ff       	call   807dcc0 <memset@plt>
 879ca16:	89 3c 24             	mov    %edi,(%esp)
 879ca19:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879ca1e:	e8 fd ac fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879ca23:	8b 46 50             	mov    0x50(%esi),%eax
 879ca26:	8b 7e 54             	mov    0x54(%esi),%edi
 879ca29:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879ca30:	00 
 879ca31:	c1 e0 02             	shl    $0x2,%eax
 879ca34:	89 3c 24             	mov    %edi,(%esp)
 879ca37:	89 44 24 08          	mov    %eax,0x8(%esp)
 879ca3b:	e8 80 12 8e ff       	call   807dcc0 <memset@plt>
 879ca40:	89 3c 24             	mov    %edi,(%esp)
 879ca43:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879ca48:	e8 d3 ac fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879ca4d:	8b 46 40             	mov    0x40(%esi),%eax
 879ca50:	8b 7e 44             	mov    0x44(%esi),%edi
 879ca53:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879ca5a:	00 
 879ca5b:	c1 e0 02             	shl    $0x2,%eax
 879ca5e:	89 3c 24             	mov    %edi,(%esp)
 879ca61:	89 44 24 08          	mov    %eax,0x8(%esp)
 879ca65:	e8 56 12 8e ff       	call   807dcc0 <memset@plt>
 879ca6a:	89 3c 24             	mov    %edi,(%esp)
 879ca6d:	8d 7e 20             	lea    0x20(%esi),%edi
 879ca70:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879ca75:	e8 a6 ac fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879ca7a:	8b 47 10             	mov    0x10(%edi),%eax
 879ca7d:	8b 57 14             	mov    0x14(%edi),%edx
 879ca80:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879ca87:	00 
 879ca88:	c1 e0 02             	shl    $0x2,%eax
 879ca8b:	89 14 24             	mov    %edx,(%esp)
 879ca8e:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 879ca91:	89 44 24 08          	mov    %eax,0x8(%esp)
 879ca95:	e8 26 12 8e ff       	call   807dcc0 <memset@plt>
 879ca9a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 879ca9d:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879caa2:	89 14 24             	mov    %edx,(%esp)
 879caa5:	e8 76 ac fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879caaa:	8b 46 20             	mov    0x20(%esi),%eax
 879caad:	8b 7f 04             	mov    0x4(%edi),%edi
 879cab0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879cab7:	00 
 879cab8:	c1 e0 02             	shl    $0x2,%eax
 879cabb:	89 3c 24             	mov    %edi,(%esp)
 879cabe:	89 44 24 08          	mov    %eax,0x8(%esp)
 879cac2:	e8 f9 11 8e ff       	call   807dcc0 <memset@plt>
 879cac7:	89 3c 24             	mov    %edi,(%esp)
 879caca:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879cacf:	e8 4c ac fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879cad4:	8b 46 10             	mov    0x10(%esi),%eax
 879cad7:	8b 7e 14             	mov    0x14(%esi),%edi
 879cada:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879cae1:	00 
 879cae2:	c1 e0 02             	shl    $0x2,%eax
 879cae5:	89 3c 24             	mov    %edi,(%esp)
 879cae8:	89 44 24 08          	mov    %eax,0x8(%esp)
 879caec:	e8 cf 11 8e ff       	call   807dcc0 <memset@plt>
 879caf1:	89 3c 24             	mov    %edi,(%esp)
 879caf4:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879caf9:	e8 22 ac fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879cafe:	8b 06                	mov    (%esi),%eax
 879cb00:	8b 7e 04             	mov    0x4(%esi),%edi
 879cb03:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879cb0a:	00 
 879cb0b:	c1 e0 02             	shl    $0x2,%eax
 879cb0e:	89 44 24 08          	mov    %eax,0x8(%esp)
 879cb12:	89 3c 24             	mov    %edi,(%esp)
 879cb15:	e8 a6 11 8e ff       	call   807dcc0 <memset@plt>
 879cb1a:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879cb1f:	89 3c 24             	mov    %edi,(%esp)
 879cb22:	e8 f9 ab fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879cb27:	89 34 24             	mov    %esi,(%esp)
 879cb2a:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879cb2f:	e8 ec 3c fb ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 879cb34:	83 c4 2c             	add    $0x2c,%esp
 879cb37:	5b                   	pop    %ebx
 879cb38:	5e                   	pop    %esi
 879cb39:	5f                   	pop    %edi
 879cb3a:	5d                   	pop    %ebp
 879cb3b:	c3                   	ret
 879cb3c:	90                   	nop
 879cb3d:	90                   	nop
 879cb3e:	90                   	nop
 879cb3f:	90                   	nop

0879cb40 <_ZN8TaoCrypt13RSA_DecryptorINS_14RSA_BlockType2EE7DecryptEPKhjPhRNS_21RandomNumberGeneratorE>:
 879cb40:	55                   	push   %ebp
 879cb41:	89 e5                	mov    %esp,%ebp
 879cb43:	83 ec 58             	sub    $0x58,%esp
 879cb46:	89 7d fc             	mov    %edi,-0x4(%ebp)
 879cb49:	8b 7d 08             	mov    0x8(%ebp),%edi
 879cb4c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 879cb4f:	e8 a4 62 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879cb54:	81 c3 44 00 bd 00    	add    $0xbd0044,%ebx
 879cb5a:	89 75 f8             	mov    %esi,-0x8(%ebp)
 879cb5d:	8b 37                	mov    (%edi),%esi
 879cb5f:	89 34 24             	mov    %esi,(%esp)
 879cb62:	e8 c9 20 fc ff       	call   875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>
 879cb67:	31 d2                	xor    %edx,%edx
 879cb69:	39 45 10             	cmp    %eax,0x10(%ebp)
 879cb6c:	74 12                	je     879cb80 <_ZN8TaoCrypt13RSA_DecryptorINS_14RSA_BlockType2EE7DecryptEPKhjPhRNS_21RandomNumberGeneratorE+0x40>
 879cb6e:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 879cb71:	89 d0                	mov    %edx,%eax
 879cb73:	8b 75 f8             	mov    -0x8(%ebp),%esi
 879cb76:	8b 7d fc             	mov    -0x4(%ebp),%edi
 879cb79:	89 ec                	mov    %ebp,%esp
 879cb7b:	5d                   	pop    %ebp
 879cb7c:	c3                   	ret
 879cb7d:	8d 76 00             	lea    0x0(%esi),%esi
 879cb80:	89 34 24             	mov    %esi,(%esp)
 879cb83:	e8 58 20 fc ff       	call   875ebe0 <_ZNK8TaoCrypt7Integer8BitCountEv>
 879cb88:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 879cb8f:	8d 48 06             	lea    0x6(%eax),%ecx
 879cb92:	c1 e9 03             	shr    $0x3,%ecx
 879cb95:	85 c9                	test   %ecx,%ecx
 879cb97:	0f 85 63 01 00 00    	jne    879cd00 <_ZN8TaoCrypt13RSA_DecryptorINS_14RSA_BlockType2EE7DecryptEPKhjPhRNS_21RandomNumberGeneratorE+0x1c0>
 879cb9d:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 879cba0:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 879cba4:	89 4d bc             	mov    %ecx,-0x44(%ebp)
 879cba7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879cbae:	00 
 879cbaf:	89 04 24             	mov    %eax,(%esp)
 879cbb2:	e8 09 11 8e ff       	call   807dcc0 <memset@plt>
 879cbb7:	89 34 24             	mov    %esi,(%esp)
 879cbba:	e8 71 20 fc ff       	call   875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>
 879cbbf:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 879cbc6:	00 
 879cbc7:	89 44 24 08          	mov    %eax,0x8(%esp)
 879cbcb:	8b 45 0c             	mov    0xc(%ebp),%eax
 879cbce:	89 44 24 04          	mov    %eax,0x4(%esp)
 879cbd2:	8d 45 c8             	lea    -0x38(%ebp),%eax
 879cbd5:	89 04 24             	mov    %eax,(%esp)
 879cbd8:	89 45 b8             	mov    %eax,-0x48(%ebp)
 879cbdb:	e8 20 47 fc ff       	call   8761300 <_ZN8TaoCrypt7IntegerC1EPKhjNS0_10SignednessE>
 879cbe0:	8b 45 b8             	mov    -0x48(%ebp),%eax
 879cbe3:	8d 55 d8             	lea    -0x28(%ebp),%edx
 879cbe6:	89 55 c0             	mov    %edx,-0x40(%ebp)
 879cbe9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 879cbed:	8b 45 18             	mov    0x18(%ebp),%eax
 879cbf0:	89 44 24 08          	mov    %eax,0x8(%esp)
 879cbf4:	8b 07                	mov    (%edi),%eax
 879cbf6:	89 14 24             	mov    %edx,(%esp)
 879cbf9:	89 44 24 04          	mov    %eax,0x4(%esp)
 879cbfd:	e8 fe b3 fc ff       	call   8768000 <_ZNK8TaoCrypt14RSA_PrivateKey16CalculateInverseERNS_21RandomNumberGeneratorERKNS_7IntegerE>
 879cc02:	8b 45 c8             	mov    -0x38(%ebp),%eax
 879cc05:	8b 55 cc             	mov    -0x34(%ebp),%edx
 879cc08:	c1 e0 02             	shl    $0x2,%eax
 879cc0b:	89 55 b8             	mov    %edx,-0x48(%ebp)
 879cc0e:	83 ec 04             	sub    $0x4,%esp
 879cc11:	89 14 24             	mov    %edx,(%esp)
 879cc14:	89 44 24 08          	mov    %eax,0x8(%esp)
 879cc18:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879cc1f:	00 
 879cc20:	e8 9b 10 8e ff       	call   807dcc0 <memset@plt>
 879cc25:	8b 55 b8             	mov    -0x48(%ebp),%edx
 879cc28:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879cc2d:	89 14 24             	mov    %edx,(%esp)
 879cc30:	e8 eb aa fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879cc35:	8b 45 c0             	mov    -0x40(%ebp),%eax
 879cc38:	89 04 24             	mov    %eax,(%esp)
 879cc3b:	e8 f0 1f fc ff       	call   875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>
 879cc40:	8b 4d bc             	mov    -0x44(%ebp),%ecx
 879cc43:	39 c8                	cmp    %ecx,%eax
 879cc45:	0f 87 d5 00 00 00    	ja     879cd20 <_ZN8TaoCrypt13RSA_DecryptorINS_14RSA_BlockType2EE7DecryptEPKhjPhRNS_21RandomNumberGeneratorE+0x1e0>
 879cc4b:	8b 55 c0             	mov    -0x40(%ebp),%edx
 879cc4e:	83 c7 04             	add    $0x4,%edi
 879cc51:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 879cc54:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 879cc58:	89 4d bc             	mov    %ecx,-0x44(%ebp)
 879cc5b:	89 14 24             	mov    %edx,(%esp)
 879cc5e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 879cc65:	00 
 879cc66:	89 44 24 04          	mov    %eax,0x4(%esp)
 879cc6a:	e8 a1 42 fc ff       	call   8760f10 <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE>
 879cc6f:	89 34 24             	mov    %esi,(%esp)
 879cc72:	e8 69 1f fc ff       	call   875ebe0 <_ZNK8TaoCrypt7Integer8BitCountEv>
 879cc77:	8b 55 14             	mov    0x14(%ebp),%edx
 879cc7a:	89 3c 24             	mov    %edi,(%esp)
 879cc7d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 879cc81:	83 e8 01             	sub    $0x1,%eax
 879cc84:	89 44 24 08          	mov    %eax,0x8(%esp)
 879cc88:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 879cc8b:	89 44 24 04          	mov    %eax,0x4(%esp)
 879cc8f:	e8 bc ae fc ff       	call   8767b50 <_ZNK8TaoCrypt14RSA_BlockType25UnPadEPKhjPh>
 879cc94:	8b 75 dc             	mov    -0x24(%ebp),%esi
 879cc97:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879cc9e:	00 
 879cc9f:	89 34 24             	mov    %esi,(%esp)
 879cca2:	89 c2                	mov    %eax,%edx
 879cca4:	8b 45 d8             	mov    -0x28(%ebp),%eax
 879cca7:	89 55 b8             	mov    %edx,-0x48(%ebp)
 879ccaa:	c1 e0 02             	shl    $0x2,%eax
 879ccad:	89 44 24 08          	mov    %eax,0x8(%esp)
 879ccb1:	e8 0a 10 8e ff       	call   807dcc0 <memset@plt>
 879ccb6:	89 34 24             	mov    %esi,(%esp)
 879ccb9:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879ccbe:	e8 5d aa fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879ccc3:	8b 4d bc             	mov    -0x44(%ebp),%ecx
 879ccc6:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 879ccc9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879ccd0:	00 
 879ccd1:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 879ccd5:	89 04 24             	mov    %eax,(%esp)
 879ccd8:	e8 e3 0f 8e ff       	call   807dcc0 <memset@plt>
 879ccdd:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 879cce0:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879cce5:	89 04 24             	mov    %eax,(%esp)
 879cce8:	e8 33 aa fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879cced:	8b 55 b8             	mov    -0x48(%ebp),%edx
 879ccf0:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 879ccf3:	8b 75 f8             	mov    -0x8(%ebp),%esi
 879ccf6:	8b 7d fc             	mov    -0x4(%ebp),%edi
 879ccf9:	89 ec                	mov    %ebp,%esp
 879ccfb:	89 d0                	mov    %edx,%eax
 879ccfd:	5d                   	pop    %ebp
 879ccfe:	c3                   	ret
 879ccff:	90                   	nop
 879cd00:	89 0c 24             	mov    %ecx,(%esp)
 879cd03:	89 4d bc             	mov    %ecx,-0x44(%ebp)
 879cd06:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879cd0b:	e8 80 aa fc ff       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 879cd10:	8b 4d bc             	mov    -0x44(%ebp),%ecx
 879cd13:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 879cd16:	e9 82 fe ff ff       	jmp    879cb9d <_ZN8TaoCrypt13RSA_DecryptorINS_14RSA_BlockType2EE7DecryptEPKhjPhRNS_21RandomNumberGeneratorE+0x5d>
 879cd1b:	90                   	nop
 879cd1c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 879cd20:	e8 3b 2b fc ff       	call   875f860 <_ZN8TaoCrypt7Integer4ZeroEv>
 879cd25:	8b 55 c0             	mov    -0x40(%ebp),%edx
 879cd28:	89 14 24             	mov    %edx,(%esp)
 879cd2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 879cd2f:	e8 2c 37 fc ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 879cd34:	8b 4d bc             	mov    -0x44(%ebp),%ecx
 879cd37:	e9 0f ff ff ff       	jmp    879cc4b <_ZN8TaoCrypt13RSA_DecryptorINS_14RSA_BlockType2EE7DecryptEPKhjPhRNS_21RandomNumberGeneratorE+0x10b>
 879cd3c:	90                   	nop
 879cd3d:	90                   	nop
 879cd3e:	90                   	nop
 879cd3f:	90                   	nop

```

```c
// yaSSL::PemToDer @ 0x879bcb0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::PemToDer(_IO_FILE*, yaSSL::CertType, yaSSL::EncryptedInfo*) */

x509 * yaSSL::PemToDer(FILE *param_1,int param_2,void *param_3)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  void *pvVar8;
  void *__dest;
  uint *puVar9;
  uint *puVar10;
  x509 *this;
  long local_158;
  uint *local_154;
  uint *local_150;
  char local_14c [80];
  uint local_fc [20];
  uint local_ac [20];
  size_t local_5c;
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  size_t local_48;
  void *local_44;
  size_t *local_3c;
  input_buffer local_38 [18];
  undefined4 local_26;
  undefined4 local_22;
  undefined2 local_1e;
  
  if (param_2 == 0) {
    strncpy((char *)local_ac,"-----BEGIN CERTIFICATE-----",0x50);
    strncpy((char *)local_fc,"-----END CERTIFICATE-----",0x50);
  }
  else {
    strncpy((char *)local_ac,"-----BEGIN RSA PRIVATE KEY-----",0x50);
    strncpy((char *)local_fc,"-----END RSA PRIVATE KEY-----",0x50);
  }
  do {
    local_150 = local_ac;
    local_154 = local_fc;
    pcVar2 = fgets(local_14c,0x50,param_1);
    puVar10 = local_150;
    if (pcVar2 == (char *)0x0) {
      local_158 = -1;
      goto LAB_0879bda6;
    }
    do {
      puVar9 = puVar10;
      uVar3 = *puVar9 + 0xfefefeff & ~*puVar9;
      uVar4 = uVar3 & 0x80808080;
      puVar10 = puVar9 + 1;
    } while (uVar4 == 0);
    if ((uVar3 & 0x8080) == 0) {
      puVar10 = (uint *)((int)puVar9 + 6);
      uVar4 = uVar4 >> 0x10;
    }
    iVar5 = strncmp((char *)local_150,local_14c,
                    (int)puVar10 + ((-3 - (uint)CARRY1((byte)uVar4,(byte)uVar4)) - (int)local_150));
  } while (iVar5 != 0);
  local_158 = ftell(param_1);
LAB_0879bda6:
  pcVar2 = fgets(local_14c,0x50,param_1);
  if (pcVar2 != (char *)0x0) {
    local_26 = 0x636f7250;
    local_22 = 0x7079542d;
    local_1e = 0x65;
    sVar6 = strlen((char *)&local_26);
    iVar5 = strncmp((char *)&local_26,local_14c,sVar6);
    if ((iVar5 == 0) && (pcVar2 = fgets(local_14c,0x50,param_1), pcVar2 != (char *)0x0)) {
      pcVar2 = strstr(local_14c,"DES");
      pcVar7 = strchr(local_14c,0x2c);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = strstr(local_14c,"AES");
      }
      if (param_3 == (void *)0x0) {
        return (x509 *)0x0;
      }
      if (((pcVar2 != (char *)0x0) && (pcVar7 != (char *)0x0)) && (pcVar2 < pcVar7)) {
        memcpy(param_3,pcVar2,(int)pcVar7 - (int)pcVar2);
        *(undefined1 *)((int)param_3 + ((int)pcVar7 - (int)pcVar2)) = 0;
        *(undefined4 *)((int)param_3 + 0x50) = *(undefined4 *)(pcVar7 + 1);
        *(undefined4 *)((int)param_3 + 0x54) = *(undefined4 *)(pcVar7 + 5);
        *(undefined4 *)((int)param_3 + 0x58) = *(undefined4 *)(pcVar7 + 9);
        *(undefined4 *)((int)param_3 + 0x5c) = *(undefined4 *)(pcVar7 + 0xd);
        *(undefined4 *)((int)param_3 + 0x60) = *(undefined4 *)(pcVar7 + 0x11);
        *(undefined4 *)((int)param_3 + 100) = *(undefined4 *)(pcVar7 + 0x15);
        *(undefined4 *)((int)param_3 + 0x68) = *(undefined4 *)(pcVar7 + 0x19);
        *(undefined4 *)((int)param_3 + 0x6c) = *(undefined4 *)(pcVar7 + 0x1d);
        pcVar2 = strchr(local_14c,0xd);
        if (pcVar2 == (char *)0x0) {
          pcVar2 = strchr(local_14c,10);
        }
        if ((pcVar7 < pcVar2) && (pcVar2 != (char *)0x0)) {
          *(int *)((int)param_3 + 0x70) = (int)pcVar2 - (int)(pcVar7 + 1);
          *(undefined1 *)((int)param_3 + 0x74) = 1;
        }
      }
      fgets(local_14c,0x50,param_1);
      local_158 = ftell(param_1);
    }
  }
  local_150 = (uint *)0x0;
  do {
    pcVar2 = fgets(local_14c,0x50,param_1);
    puVar10 = local_154;
    if (pcVar2 == (char *)0x0) {
      bVar1 = false;
joined_r0x0879bf14:
      if ((local_158 != -1) && (bVar1)) {
        uVar3 = (int)local_150 - local_158;
        input_buffer::input_buffer(local_38,uVar3);
        fseek(param_1,local_158,0);
        pvVar8 = (void *)input_buffer::get_buffer(local_38);
        this = (x509 *)0x0;
        uVar4 = uVar3;
        sVar6 = fread(pvVar8,uVar3,1,param_1);
        if (sVar6 == 1) {
          pvVar8 = (void *)input_buffer::get_buffer(local_38);
          local_58 = (void *)0x0;
          local_5c = uVar3;
          if (uVar3 != 0) {
            local_58 = operator_new__(uVar3,uVar4 & 0xffffff00);
          }
          memcpy(local_58,pvVar8,local_5c);
          local_3c = &local_5c;
          local_50 = 0;
          local_4c = 0;
          local_44 = (void *)0x0;
          local_48 = 0;
          TaoCrypt::Base64Decoder::Decode((Base64Decoder *)&local_48);
          sVar6 = local_5c;
          this = operator_new(8,(uint)pvVar8 & 0xffffff00);
          x509::x509(this,sVar6);
          pvVar8 = local_58;
          __dest = (void *)x509::use_buffer(this);
          memcpy(__dest,pvVar8,sVar6);
          operator_delete(0,(uint)pvVar8 & 0xffffff00);
          pvVar8 = local_44;
          uVar4 = 0;
          memset(local_44,0,local_48);
          operator_delete__(pvVar8,uVar4 & 0xffffff00);
          pvVar8 = local_58;
          uVar4 = 0;
          memset(local_58,0,local_5c);
          operator_delete__(pvVar8,uVar4 & 0xffffff00);
        }
        input_buffer::~input_buffer(local_38);
        return this;
      }
      return (x509 *)0x0;
    }
    do {
      puVar9 = puVar10;
      uVar3 = *puVar9 + 0xfefefeff & ~*puVar9;
      uVar4 = uVar3 & 0x80808080;
      puVar10 = puVar9 + 1;
    } while (uVar4 == 0);
    if ((uVar3 & 0x8080) == 0) {
      puVar10 = (uint *)((int)puVar9 + 6);
      uVar4 = uVar4 >> 0x10;
    }
    iVar5 = strncmp((char *)local_154,local_14c,
                    (int)puVar10 + ((-3 - (uint)CARRY1((byte)uVar4,(byte)uVar4)) - (int)local_154));
    if (iVar5 == 0) {
      bVar1 = true;
      goto joined_r0x0879bf14;
    }
    local_150 = (uint *)ftell(param_1);
  } while( true );
}

```

---

## ProcessOldClientHello

```asm
// === 0879d7e0 yaSSL::ProcessOldClientHello  [0x0879d7e0-0x879db6f] ===
 879d7e0:	55                   	push   %ebp
 879d7e1:	89 e5                	mov    %esp,%ebp
 879d7e3:	57                   	push   %edi
 879d7e4:	56                   	push   %esi
 879d7e5:	53                   	push   %ebx
 879d7e6:	e8 0d 56 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879d7eb:	81 c3 ad f3 bc 00    	add    $0xbcf3ad,%ebx
 879d7f1:	81 ec 0c 01 00 00    	sub    $0x10c,%esp
 879d7f7:	8b 75 08             	mov    0x8(%ebp),%esi
 879d7fa:	89 34 24             	mov    %esi,(%esp)
 879d7fd:	e8 be 95 ff ff       	call   8796dc0 <_ZNK5yaSSL12input_buffer13get_remainingEv>
 879d802:	83 f8 01             	cmp    $0x1,%eax
 879d805:	0f 86 ed 02 00 00    	jbe    879daf8 <_ZN5yaSSL21ProcessOldClientHelloERNS_12input_bufferERNS_3SSLE+0x318>
 879d80b:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 879d812:	fe 
 879d813:	89 34 24             	mov    %esi,(%esp)
 879d816:	e8 05 96 ff ff       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 879d81b:	0f b6 38             	movzbl (%eax),%edi
 879d81e:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 879d825:	fe 
 879d826:	89 34 24             	mov    %esi,(%esp)
 879d829:	e8 f2 95 ff ff       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 879d82e:	89 fa                	mov    %edi,%edx
 879d830:	83 e2 7f             	and    $0x7f,%edx
 879d833:	c1 e2 08             	shl    $0x8,%edx
 879d836:	0f b6 38             	movzbl (%eax),%edi
 879d839:	89 34 24             	mov    %esi,(%esp)
 879d83c:	09 d7                	or     %edx,%edi
 879d83e:	e8 7d 95 ff ff       	call   8796dc0 <_ZNK5yaSSL12input_buffer13get_remainingEv>
 879d843:	39 c7                	cmp    %eax,%edi
 879d845:	0f 87 8d 02 00 00    	ja     879dad8 <_ZN5yaSSL21ProcessOldClientHelloERNS_12input_bufferERNS_3SSLE+0x2f8>
 879d84b:	89 34 24             	mov    %esi,(%esp)
 879d84e:	e8 dd 94 ff ff       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 879d853:	89 34 24             	mov    %esi,(%esp)
 879d856:	89 85 04 ff ff ff    	mov    %eax,-0xfc(%ebp)
 879d85c:	e8 3f 95 ff ff       	call   8796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>
 879d861:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 879d864:	03 85 04 ff ff ff    	add    -0xfc(%ebp),%eax
 879d86a:	89 0c 24             	mov    %ecx,(%esp)
 879d86d:	89 85 04 ff ff ff    	mov    %eax,-0xfc(%ebp)
 879d873:	e8 68 0a fb ff       	call   874e2e0 <_ZN5yaSSL3SSL9useHashesEv>
 879d878:	89 04 24             	mov    %eax,(%esp)
 879d87b:	e8 f0 0f fb ff       	call   874e870 <_ZN5yaSSL9sslHashes7use_MD5Ev>
 879d880:	8b 8d 04 ff ff ff    	mov    -0xfc(%ebp),%ecx
 879d886:	8b 10                	mov    (%eax),%edx
 879d888:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879d88c:	89 04 24             	mov    %eax,(%esp)
 879d88f:	89 7c 24 08          	mov    %edi,0x8(%esp)
 879d893:	ff 52 08             	call   *0x8(%edx)
 879d896:	8b 45 0c             	mov    0xc(%ebp),%eax
 879d899:	89 04 24             	mov    %eax,(%esp)
 879d89c:	e8 3f 0a fb ff       	call   874e2e0 <_ZN5yaSSL3SSL9useHashesEv>
 879d8a1:	89 04 24             	mov    %eax,(%esp)
 879d8a4:	e8 d7 0f fb ff       	call   874e880 <_ZN5yaSSL9sslHashes7use_SHAEv>
 879d8a9:	8b 8d 04 ff ff ff    	mov    -0xfc(%ebp),%ecx
 879d8af:	8b 10                	mov    (%eax),%edx
 879d8b1:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879d8b5:	89 04 24             	mov    %eax,(%esp)
 879d8b8:	89 7c 24 08          	mov    %edi,0x8(%esp)
 879d8bc:	ff 52 08             	call   *0x8(%edx)
 879d8bf:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 879d8c6:	fe 
 879d8c7:	89 34 24             	mov    %esi,(%esp)
 879d8ca:	e8 51 95 ff ff       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 879d8cf:	8d 85 0c ff ff ff    	lea    -0xf4(%ebp),%eax
 879d8d5:	89 85 fc fe ff ff    	mov    %eax,-0x104(%ebp)
 879d8db:	89 04 24             	mov    %eax,(%esp)
 879d8de:	e8 4d a1 fa ff       	call   8747a30 <_ZN5yaSSL11ClientHelloC1Ev>
 879d8e3:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 879d8ea:	fe 
 879d8eb:	89 34 24             	mov    %esi,(%esp)
 879d8ee:	e8 2d 95 ff ff       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 879d8f3:	0f b6 00             	movzbl (%eax),%eax
 879d8f6:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 879d8fd:	fe 
 879d8fe:	89 34 24             	mov    %esi,(%esp)
 879d901:	88 85 14 ff ff ff    	mov    %al,-0xec(%ebp)
 879d907:	e8 14 95 ff ff       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 879d90c:	8d 55 e6             	lea    -0x1a(%ebp),%edx
 879d90f:	0f b6 00             	movzbl (%eax),%eax
 879d912:	89 95 04 ff ff ff    	mov    %edx,-0xfc(%ebp)
 879d918:	89 54 24 04          	mov    %edx,0x4(%esp)
 879d91c:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 879d923:	00 
 879d924:	88 85 15 ff ff ff    	mov    %al,-0xeb(%ebp)
 879d92a:	89 34 24             	mov    %esi,(%esp)
 879d92d:	e8 0e 97 ff ff       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 879d932:	8b 8d 04 ff ff ff    	mov    -0xfc(%ebp),%ecx
 879d938:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 879d93e:	89 44 24 04          	mov    %eax,0x4(%esp)
 879d942:	89 0c 24             	mov    %ecx,(%esp)
 879d945:	e8 46 04 fb ff       	call   874dd90 <_ZN5yaSSL5ato16EPKhRt>
 879d94a:	8b 85 04 ff ff ff    	mov    -0xfc(%ebp),%eax
 879d950:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 879d957:	00 
 879d958:	89 34 24             	mov    %esi,(%esp)
 879d95b:	89 44 24 04          	mov    %eax,0x4(%esp)
 879d95f:	e8 dc 96 ff ff       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 879d964:	8b 95 04 ff ff ff    	mov    -0xfc(%ebp),%edx
 879d96a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 879d96d:	89 44 24 04          	mov    %eax,0x4(%esp)
 879d971:	89 14 24             	mov    %edx,(%esp)
 879d974:	e8 17 04 fb ff       	call   874dd90 <_ZN5yaSSL5ato16EPKhRt>
 879d979:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
 879d97d:	8b 8d 04 ff ff ff    	mov    -0xfc(%ebp),%ecx
 879d983:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 879d98a:	00 
 879d98b:	89 34 24             	mov    %esi,(%esp)
 879d98e:	88 85 36 ff ff ff    	mov    %al,-0xca(%ebp)
 879d994:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879d998:	e8 a3 96 ff ff       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 879d99d:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 879d9a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 879d9a4:	8b 85 04 ff ff ff    	mov    -0xfc(%ebp),%eax
 879d9aa:	89 04 24             	mov    %eax,(%esp)
 879d9ad:	e8 de 03 fb ff       	call   874dd90 <_ZN5yaSSL5ato16EPKhRt>
 879d9b2:	0f b7 85 58 ff ff ff 	movzwl -0xa8(%ebp),%eax
 879d9b9:	66 3d 80 00          	cmp    $0x80,%ax
 879d9bd:	0f 87 15 01 00 00    	ja     879dad8 <_ZN5yaSSL21ProcessOldClientHelloERNS_12input_bufferERNS_3SSLE+0x2f8>
 879d9c3:	66 83 7d e4 20       	cmpw   $0x20,-0x1c(%ebp)
 879d9c8:	0f 87 0a 01 00 00    	ja     879dad8 <_ZN5yaSSL21ProcessOldClientHelloERNS_12input_bufferERNS_3SSLE+0x2f8>
 879d9ce:	66 83 7d e2 20       	cmpw   $0x20,-0x1e(%ebp)
 879d9d3:	0f 87 ff 00 00 00    	ja     879dad8 <_ZN5yaSSL21ProcessOldClientHelloERNS_12input_bufferERNS_3SSLE+0x2f8>
 879d9d9:	31 ff                	xor    %edi,%edi
 879d9db:	31 d2                	xor    %edx,%edx
 879d9dd:	66 85 c0             	test   %ax,%ax
 879d9e0:	c7 85 00 ff ff ff 00 	movl   $0x0,-0x100(%ebp)
 879d9e7:	00 00 00 
 879d9ea:	75 2a                	jne    879da16 <_ZN5yaSSL21ProcessOldClientHelloERNS_12input_bufferERNS_3SSLE+0x236>
 879d9ec:	eb 7b                	jmp    879da69 <_ZN5yaSSL21ProcessOldClientHelloERNS_12input_bufferERNS_3SSLE+0x289>
 879d9ee:	66 90                	xchg   %ax,%ax
 879d9f0:	8b 8d 04 ff ff ff    	mov    -0xfc(%ebp),%ecx
 879d9f6:	83 c7 03             	add    $0x3,%edi
 879d9f9:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 879da00:	00 
 879da01:	89 34 24             	mov    %esi,(%esp)
 879da04:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879da08:	e8 33 96 ff ff       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 879da0d:	66 39 bd 58 ff ff ff 	cmp    %di,-0xa8(%ebp)
 879da14:	76 4c                	jbe    879da62 <_ZN5yaSSL21ProcessOldClientHelloERNS_12input_bufferERNS_3SSLE+0x282>
 879da16:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 879da1d:	fe 
 879da1e:	89 34 24             	mov    %esi,(%esp)
 879da21:	e8 fa 93 ff ff       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 879da26:	80 38 00             	cmpb   $0x0,(%eax)
 879da29:	75 c5                	jne    879d9f0 <_ZN5yaSSL21ProcessOldClientHelloERNS_12input_bufferERNS_3SSLE+0x210>
 879da2b:	8b 8d fc fe ff ff    	mov    -0x104(%ebp),%ecx
 879da31:	83 c7 03             	add    $0x3,%edi
 879da34:	8b 95 00 ff ff ff    	mov    -0x100(%ebp),%edx
 879da3a:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 879da41:	00 
 879da42:	89 34 24             	mov    %esi,(%esp)
 879da45:	8d 44 11 4e          	lea    0x4e(%ecx,%edx,1),%eax
 879da49:	89 44 24 04          	mov    %eax,0x4(%esp)
 879da4d:	e8 ee 95 ff ff       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 879da52:	83 85 00 ff ff ff 02 	addl   $0x2,-0x100(%ebp)
 879da59:	66 39 bd 58 ff ff ff 	cmp    %di,-0xa8(%ebp)
 879da60:	77 b4                	ja     879da16 <_ZN5yaSSL21ProcessOldClientHelloERNS_12input_bufferERNS_3SSLE+0x236>
 879da62:	0f b7 95 00 ff ff ff 	movzwl -0x100(%ebp),%edx
 879da69:	0f b6 85 36 ff ff ff 	movzbl -0xca(%ebp),%eax
 879da70:	66 89 95 58 ff ff ff 	mov    %dx,-0xa8(%ebp)
 879da77:	84 c0                	test   %al,%al
 879da79:	0f 85 99 00 00 00    	jne    879db18 <_ZN5yaSSL21ProcessOldClientHelloERNS_12input_bufferERNS_3SSLE+0x338>
 879da7f:	0f b7 45 e2          	movzwl -0x1e(%ebp),%eax
 879da83:	66 83 f8 1f          	cmp    $0x1f,%ax
 879da87:	0f 86 ab 00 00 00    	jbe    879db38 <_ZN5yaSSL21ProcessOldClientHelloERNS_12input_bufferERNS_3SSLE+0x358>
 879da8d:	8b 95 fc fe ff ff    	mov    -0x104(%ebp),%edx
 879da93:	0f b7 c0             	movzwl %ax,%eax
 879da96:	89 44 24 08          	mov    %eax,0x8(%esp)
 879da9a:	89 34 24             	mov    %esi,(%esp)
 879da9d:	29 c2                	sub    %eax,%edx
 879da9f:	89 d0                	mov    %edx,%eax
 879daa1:	83 c0 2a             	add    $0x2a,%eax
 879daa4:	89 44 24 04          	mov    %eax,0x4(%esp)
 879daa8:	e8 93 95 ff ff       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 879daad:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 879dab0:	8b 85 fc fe ff ff    	mov    -0x104(%ebp),%eax
 879dab6:	89 74 24 04          	mov    %esi,0x4(%esp)
 879daba:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 879dabe:	89 04 24             	mov    %eax,(%esp)
 879dac1:	e8 8a c9 fa ff       	call   874a450 <_ZN5yaSSL11ClientHello7ProcessERNS_12input_bufferERNS_3SSLE>
 879dac6:	81 c4 0c 01 00 00    	add    $0x10c,%esp
 879dacc:	5b                   	pop    %ebx
 879dacd:	5e                   	pop    %esi
 879dace:	5f                   	pop    %edi
 879dacf:	5d                   	pop    %ebp
 879dad0:	c3                   	ret
 879dad1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 879dad8:	8b 55 0c             	mov    0xc(%ebp),%edx
 879dadb:	c7 44 24 04 6d 00 00 	movl   $0x6d,0x4(%esp)
 879dae2:	00 
 879dae3:	89 14 24             	mov    %edx,(%esp)
 879dae6:	e8 e5 04 fb ff       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 879daeb:	81 c4 0c 01 00 00    	add    $0x10c,%esp
 879daf1:	5b                   	pop    %ebx
 879daf2:	5e                   	pop    %esi
 879daf3:	5f                   	pop    %edi
 879daf4:	5d                   	pop    %ebp
 879daf5:	c3                   	ret
 879daf6:	66 90                	xchg   %ax,%ax
 879daf8:	8b 45 0c             	mov    0xc(%ebp),%eax
 879dafb:	c7 44 24 04 6d 00 00 	movl   $0x6d,0x4(%esp)
 879db02:	00 
 879db03:	89 04 24             	mov    %eax,(%esp)
 879db06:	e8 c5 04 fb ff       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 879db0b:	81 c4 0c 01 00 00    	add    $0x10c,%esp
 879db11:	5b                   	pop    %ebx
 879db12:	5e                   	pop    %esi
 879db13:	5f                   	pop    %edi
 879db14:	5d                   	pop    %ebp
 879db15:	c3                   	ret
 879db16:	66 90                	xchg   %ax,%ax
 879db18:	0f b6 c0             	movzbl %al,%eax
 879db1b:	89 44 24 08          	mov    %eax,0x8(%esp)
 879db1f:	8d 85 37 ff ff ff    	lea    -0xc9(%ebp),%eax
 879db25:	89 44 24 04          	mov    %eax,0x4(%esp)
 879db29:	89 34 24             	mov    %esi,(%esp)
 879db2c:	e8 0f 95 ff ff       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 879db31:	e9 49 ff ff ff       	jmp    879da7f <_ZN5yaSSL21ProcessOldClientHelloERNS_12input_bufferERNS_3SSLE+0x29f>
 879db36:	66 90                	xchg   %ax,%ax
 879db38:	0f b7 c0             	movzwl %ax,%eax
 879db3b:	ba 20 00 00 00       	mov    $0x20,%edx
 879db40:	29 c2                	sub    %eax,%edx
 879db42:	8d 85 16 ff ff ff    	lea    -0xea(%ebp),%eax
 879db48:	89 54 24 08          	mov    %edx,0x8(%esp)
 879db4c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879db53:	00 
 879db54:	89 04 24             	mov    %eax,(%esp)
 879db57:	e8 64 01 8e ff       	call   807dcc0 <memset@plt>
 879db5c:	0f b7 45 e2          	movzwl -0x1e(%ebp),%eax
 879db60:	e9 28 ff ff ff       	jmp    879da8d <_ZN5yaSSL21ProcessOldClientHelloERNS_12input_bufferERNS_3SSLE+0x2ad>
 879db65:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 879db69:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::ProcessOldClientHello @ 0x879d7e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Type propagation algorithm not settling */
/* yaSSL::ProcessOldClientHello(yaSSL::input_buffer&, yaSSL::SSL&) */

void yaSSL::ProcessOldClientHello(input_buffer *param_1,SSL *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  sslHashes *psVar6;
  int *piVar7;
  undefined1 *puVar8;
  char *pcVar9;
  ushort uVar10;
  uint uVar11;
  int local_104;
  ClientHello local_f8 [8];
  undefined1 local_f0;
  undefined1 local_ef;
  undefined1 local_ee [32];
  byte local_ce [34];
  ushort local_ac;
  uchar auStack_aa [136];
  ushort local_22;
  ushort local_20;
  uchar local_1e [10];
  undefined4 uStack_14;
  
  uStack_14 = 0x879d7eb;
  uVar2 = input_buffer::get_remaining(param_1);
  if (uVar2 < 2) {
    SSL::SetError(param_2,0x6d);
    return;
  }
  pbVar3 = (byte *)input_buffer::operator[]((uint)param_1);
  bVar1 = *pbVar3;
  pbVar3 = (byte *)input_buffer::operator[]((uint)param_1);
  uVar11 = (uint)*pbVar3 | (bVar1 & 0x7f) << 8;
  uVar2 = input_buffer::get_remaining(param_1);
  if (uVar11 <= uVar2) {
    iVar4 = input_buffer::get_buffer(param_1);
    iVar5 = input_buffer::get_current(param_1);
    psVar6 = (sslHashes *)SSL::useHashes(param_2);
    piVar7 = (int *)sslHashes::use_MD5(psVar6);
    (**(code **)(*piVar7 + 8))(piVar7,iVar5 + iVar4,uVar11);
    psVar6 = (sslHashes *)SSL::useHashes(param_2);
    piVar7 = (int *)sslHashes::use_SHA(psVar6);
    (**(code **)(*piVar7 + 8))(piVar7,iVar5 + iVar4,uVar11);
    input_buffer::operator[]((uint)param_1);
    ClientHello::ClientHello(local_f8);
    puVar8 = (undefined1 *)input_buffer::operator[]((uint)param_1);
    local_f0 = *puVar8;
    puVar8 = (undefined1 *)input_buffer::operator[]((uint)param_1);
    local_ef = *puVar8;
    input_buffer::read(param_1,local_1e,2);
    ato16(local_1e,&local_ac);
    input_buffer::read(param_1,local_1e,2);
    ato16(local_1e,&local_20);
    local_ce[0] = (byte)local_20;
    input_buffer::read(param_1,local_1e,2);
    ato16(local_1e,&local_22);
    if (((local_ac < 0x81) && (local_20 < 0x21)) && (local_22 < 0x21)) {
      uVar10 = 0;
      local_104._0_2_ = 0;
      local_104 = 0;
      if (local_ac != 0) {
        do {
          while (pcVar9 = (char *)input_buffer::operator[]((uint)param_1), *pcVar9 == '\0') {
            uVar10 = uVar10 + 3;
            input_buffer::read(param_1,auStack_aa + local_104,2);
            local_104 = local_104 + 2;
            if (local_ac <= uVar10) goto LAB_0879da62;
          }
          uVar10 = uVar10 + 3;
          input_buffer::read(param_1,local_1e,2);
        } while (uVar10 < local_ac);
LAB_0879da62:
      }
      local_ac = (ushort)local_104;
      if (local_ce[0] != 0) {
        input_buffer::read(param_1,(uchar *)((int)local_ce + 1),(uint)local_ce[0]);
      }
      if (local_22 < 0x20) {
        memset(local_ee,0,0x20 - local_22);
      }
      input_buffer::read(param_1,local_ce + -(uint)local_22,(uint)local_22);
      ClientHello::Process(local_f8,param_1,param_2);
      return;
    }
  }
  SSL::SetError(param_2,0x6d);
  return;
}

```

---

## SetErrorString

```asm
// === 08746630 yaSSL::SetErrorString  [0x08746630-0x874693f] ===
 8746630:	55                   	push   %ebp
 8746631:	89 e5                	mov    %esp,%ebp
 8746633:	53                   	push   %ebx
 8746634:	83 ec 14             	sub    $0x14,%esp
 8746637:	8b 45 08             	mov    0x8(%ebp),%eax
 874663a:	e8 b9 c7 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874663f:	81 c3 59 65 c2 00    	add    $0xc26559,%ebx
 8746645:	8b 55 0c             	mov    0xc(%ebp),%edx
 8746648:	83 f8 78             	cmp    $0x78,%eax
 874664b:	76 23                	jbe    8746670 <.L4+0x23>

0874664d <.L4>:
 874664d:	8d 83 d4 7f 99 ff    	lea    -0x66802c(%ebx),%eax
 8746653:	c7 44 24 08 50 00 00 	movl   $0x50,0x8(%esp)
 874665a:	00 
 874665b:	89 44 24 04          	mov    %eax,0x4(%esp)
 874665f:	89 14 24             	mov    %edx,(%esp)
 8746662:	e8 69 72 93 ff       	call   807d8d0 <strncpy@plt>
 8746667:	90                   	nop
 8746668:	83 c4 14             	add    $0x14,%esp
 874666b:	5b                   	pop    %ebx
 874666c:	5d                   	pop    %ebp
 874666d:	c3                   	ret
 874666e:	66 90                	xchg   %ax,%ax
 8746670:	8b 84 83 ec 7f 99 ff 	mov    -0x668014(%ebx,%eax,4),%eax
 8746677:	01 d8                	add    %ebx,%eax
 8746679:	ff e0                	jmp    *%eax
 874667b:	90                   	nop
 874667c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

08746680 <.L26>:
 8746680:	8d 83 b0 7e 99 ff    	lea    -0x668150(%ebx),%eax
 8746686:	c7 44 24 08 50 00 00 	movl   $0x50,0x8(%esp)
 874668d:	00 
 874668e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8746692:	89 14 24             	mov    %edx,(%esp)
 8746695:	e8 36 72 93 ff       	call   807d8d0 <strncpy@plt>
 874669a:	eb cc                	jmp    8746668 <.L4+0x1b>
 874669c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

087466a0 <.L25>:
 87466a0:	8d 83 ad 7f 99 ff    	lea    -0x668053(%ebx),%eax
 87466a6:	c7 44 24 08 50 00 00 	movl   $0x50,0x8(%esp)
 87466ad:	00 
 87466ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 87466b2:	89 14 24             	mov    %edx,(%esp)
 87466b5:	e8 16 72 93 ff       	call   807d8d0 <strncpy@plt>
 87466ba:	eb ac                	jmp    8746668 <.L4+0x1b>
 87466bc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

087466c0 <.L24>:
 87466c0:	8d 83 af 7f 99 ff    	lea    -0x668051(%ebx),%eax
 87466c6:	c7 44 24 08 50 00 00 	movl   $0x50,0x8(%esp)
 87466cd:	00 
 87466ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 87466d2:	89 14 24             	mov    %edx,(%esp)
 87466d5:	e8 f6 71 93 ff       	call   807d8d0 <strncpy@plt>
 87466da:	eb 8c                	jmp    8746668 <.L4+0x1b>
 87466dc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

087466e0 <.L23>:
 87466e0:	8d 83 94 7f 99 ff    	lea    -0x66806c(%ebx),%eax
 87466e6:	c7 44 24 08 50 00 00 	movl   $0x50,0x8(%esp)
 87466ed:	00 
 87466ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 87466f2:	89 14 24             	mov    %edx,(%esp)
 87466f5:	e8 d6 71 93 ff       	call   807d8d0 <strncpy@plt>
 87466fa:	e9 69 ff ff ff       	jmp    8746668 <.L4+0x1b>
 87466ff:	90                   	nop

08746700 <.L22>:
 8746700:	8d 83 84 7e 99 ff    	lea    -0x66817c(%ebx),%eax
 8746706:	c7 44 24 08 50 00 00 	movl   $0x50,0x8(%esp)
 874670d:	00 
 874670e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8746712:	89 14 24             	mov    %edx,(%esp)
 8746715:	e8 b6 71 93 ff       	call   807d8d0 <strncpy@plt>
 874671a:	e9 49 ff ff ff       	jmp    8746668 <.L4+0x1b>
 874671f:	90                   	nop

08746720 <.L21>:
 8746720:	8d 83 76 7f 99 ff    	lea    -0x66808a(%ebx),%eax
 8746726:	c7 44 24 08 50 00 00 	movl   $0x50,0x8(%esp)
 874672d:	00 
 874672e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8746732:	89 14 24             	mov    %edx,(%esp)
 8746735:	e8 96 71 93 ff       	call   807d8d0 <strncpy@plt>
 874673a:	e9 29 ff ff ff       	jmp    8746668 <.L4+0x1b>
 874673f:	90                   	nop

08746740 <.L20>:
 8746740:	8d 83 5b 7f 99 ff    	lea    -0x6680a5(%ebx),%eax
 8746746:	c7 44 24 08 50 00 00 	movl   $0x50,0x8(%esp)
 874674d:	00 
 874674e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8746752:	89 14 24             	mov    %edx,(%esp)
 8746755:	e8 76 71 93 ff       	call   807d8d0 <strncpy@plt>
 874675a:	e9 09 ff ff ff       	jmp    8746668 <.L4+0x1b>
 874675f:	90                   	nop

08746760 <.L19>:
 8746760:	8d 83 43 7f 99 ff    	lea    -0x6680bd(%ebx),%eax
 8746766:	c7 44 24 08 50 00 00 	movl   $0x50,0x8(%esp)
 874676d:	00 
 874676e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8746772:	89 14 24             	mov    %edx,(%esp)
 8746775:	e8 56 71 93 ff       	call   807d8d0 <strncpy@plt>
 874677a:	e9 e9 fe ff ff       	jmp    8746668 <.L4+0x1b>
 874677f:	90                   	nop

08746780 <.L18>:
 8746780:	8d 83 64 7e 99 ff    	lea    -0x66819c(%ebx),%eax
 8746786:	c7 44 24 08 50 00 00 	movl   $0x50,0x8(%esp)
 874678d:	00 
 874678e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8746792:	89 14 24             	mov    %edx,(%esp)
 8746795:	e8 36 71 93 ff       	call   807d8d0 <strncpy@plt>
 874679a:	e9 c9 fe ff ff       	jmp    8746668 <.L4+0x1b>
 874679f:	90                   	nop

087467a0 <.L17>:
 87467a0:	8d 83 40 7e 99 ff    	lea    -0x6681c0(%ebx),%eax
 87467a6:	c7 44 24 08 50 00 00 	movl   $0x50,0x8(%esp)
 87467ad:	00 
 87467ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 87467b2:	89 14 24             	mov    %edx,(%esp)
 87467b5:	e8 16 71 93 ff       	call   807d8d0 <strncpy@plt>
 87467ba:	e9 a9 fe ff ff       	jmp    8746668 <.L4+0x1b>
 87467bf:	90                   	nop

087467c0 <.L16>:
 87467c0:	8d 83 14 7e 99 ff    	lea    -0x6681ec(%ebx),%eax
 87467c6:	c7 44 24 08 50 00 00 	movl   $0x50,0x8(%esp)
 87467cd:	00 
 87467ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 87467d2:	89 14 24             	mov    %edx,(%esp)
 87467d5:	e8 f6 70 93 ff       	call   807d8d0 <strncpy@plt>
 87467da:	e9 89 fe ff ff       	jmp    8746668 <.L4+0x1b>
 87467df:	90                   	nop

087467e0 <.L15>:
 87467e0:	8d 83 2c 7f 99 ff    	lea    -0x6680d4(%ebx),%eax
 87467e6:	c7 44 24 08 50 00 00 	movl   $0x50,0x8(%esp)
 87467ed:	00 
 87467ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 87467f2:	89 14 24             	mov    %edx,(%esp)
 87467f5:	e8 d6 70 93 ff       	call   807d8d0 <strncpy@plt>
 87467fa:	e9 69 fe ff ff       	jmp    8746668 <.L4+0x1b>
 87467ff:	90                   	nop

08746800 <.L14>:
 8746800:	8d 83 e8 7d 99 ff    	lea    -0x668218(%ebx),%eax
 8746806:	c7 44 24 08 50 00 00 	movl   $0x50,0x8(%esp)
 874680d:	00 
 874680e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8746812:	89 14 24             	mov    %edx,(%esp)
 8746815:	e8 b6 70 93 ff       	call   807d8d0 <strncpy@plt>
 874681a:	e9 49 fe ff ff       	jmp    8746668 <.L4+0x1b>
 874681f:	90                   	nop

08746820 <.L13>:
 8746820:	8d 83 0e 7f 99 ff    	lea    -0x6680f2(%ebx),%eax
 8746826:	c7 44 24 08 50 00 00 	movl   $0x50,0x8(%esp)
 874682d:	00 
 874682e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8746832:	89 14 24             	mov    %edx,(%esp)
 8746835:	e8 96 70 93 ff       	call   807d8d0 <strncpy@plt>
 874683a:	e9 29 fe ff ff       	jmp    8746668 <.L4+0x1b>
 874683f:	90                   	nop

08746840 <.L12>:
 8746840:	8d 83 f3 7e 99 ff    	lea    -0x66810d(%ebx),%eax
 8746846:	c7 44 24 08 50 00 00 	movl   $0x50,0x8(%esp)
 874684d:	00 
 874684e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8746852:	89 14 24             	mov    %edx,(%esp)
 8746855:	e8 76 70 93 ff       	call   807d8d0 <strncpy@plt>
 874685a:	e9 09 fe ff ff       	jmp    8746668 <.L4+0x1b>
 874685f:	90                   	nop

08746860 <.L11>:
 8746860:	8d 83 b8 7d 99 ff    	lea    -0x668248(%ebx),%eax
 8746866:	c7 44 24 08 50 00 00 	movl   $0x50,0x8(%esp)
 874686d:	00 
 874686e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8746872:	89 14 24             	mov    %edx,(%esp)
 8746875:	e8 56 70 93 ff       	call   807d8d0 <strncpy@plt>
 874687a:	e9 e9 fd ff ff       	jmp    8746668 <.L4+0x1b>
 874687f:	90                   	nop

08746880 <.L10>:
 8746880:	8d 83 98 7d 99 ff    	lea    -0x668268(%ebx),%eax
 8746886:	c7 44 24 08 50 00 00 	movl   $0x50,0x8(%esp)
 874688d:	00 
 874688e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8746892:	89 14 24             	mov    %edx,(%esp)
 8746895:	e8 36 70 93 ff       	call   807d8d0 <strncpy@plt>
 874689a:	e9 c9 fd ff ff       	jmp    8746668 <.L4+0x1b>
 874689f:	90                   	nop

087468a0 <.L9>:
 87468a0:	8d 83 78 7d 99 ff    	lea    -0x668288(%ebx),%eax
 87468a6:	c7 44 24 08 50 00 00 	movl   $0x50,0x8(%esp)
 87468ad:	00 
 87468ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 87468b2:	89 14 24             	mov    %edx,(%esp)
 87468b5:	e8 16 70 93 ff       	call   807d8d0 <strncpy@plt>
 87468ba:	e9 a9 fd ff ff       	jmp    8746668 <.L4+0x1b>
 87468bf:	90                   	nop

087468c0 <.L8>:
 87468c0:	8d 83 54 7d 99 ff    	lea    -0x6682ac(%ebx),%eax
 87468c6:	c7 44 24 08 50 00 00 	movl   $0x50,0x8(%esp)
 87468cd:	00 
 87468ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 87468d2:	89 14 24             	mov    %edx,(%esp)
 87468d5:	e8 f6 6f 93 ff       	call   807d8d0 <strncpy@plt>
 87468da:	e9 89 fd ff ff       	jmp    8746668 <.L4+0x1b>
 87468df:	90                   	nop

087468e0 <.L7>:
 87468e0:	8d 83 30 7d 99 ff    	lea    -0x6682d0(%ebx),%eax
 87468e6:	c7 44 24 08 50 00 00 	movl   $0x50,0x8(%esp)
 87468ed:	00 
 87468ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 87468f2:	89 14 24             	mov    %edx,(%esp)
 87468f5:	e8 d6 6f 93 ff       	call   807d8d0 <strncpy@plt>
 87468fa:	e9 69 fd ff ff       	jmp    8746668 <.L4+0x1b>
 87468ff:	90                   	nop

08746900 <.L6>:
 8746900:	8d 83 d4 7e 99 ff    	lea    -0x66812c(%ebx),%eax
 8746906:	c7 44 24 08 50 00 00 	movl   $0x50,0x8(%esp)
 874690d:	00 
 874690e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8746912:	89 14 24             	mov    %edx,(%esp)
 8746915:	e8 b6 6f 93 ff       	call   807d8d0 <strncpy@plt>
 874691a:	e9 49 fd ff ff       	jmp    8746668 <.L4+0x1b>
 874691f:	90                   	nop

08746920 <.L5>:
 8746920:	8d 83 c1 7f 99 ff    	lea    -0x66803f(%ebx),%eax
 8746926:	c7 44 24 08 50 00 00 	movl   $0x50,0x8(%esp)
 874692d:	00 
 874692e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8746932:	89 14 24             	mov    %edx,(%esp)
 8746935:	e8 96 6f 93 ff       	call   807d8d0 <strncpy@plt>
 874693a:	e9 29 fd ff ff       	jmp    8746668 <.L4+0x1b>
 874693f:	90                   	nop

```

```c
// yaSSL::SetErrorString @ 0x8746630

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SetErrorString(yaSSL::YasslError, char*) */

void yaSSL::SetErrorString(undefined4 param_1,char *param_2)

{
  switch(param_1) {
  case 0:
    strncpy(param_2,"not in error state",0x50);
    break;
  default:
    strncpy(param_2,"unknown error number",0x50);
    break;
  case 0x50:
    strncpy(param_2,"the read operation would block",0x50);
    break;
  case 0x65:
    strncpy(param_2,"buffer index error, out of range",0x50);
    break;
  case 0x66:
    strncpy(param_2,"trying to realloc a fixed buffer",0x50);
    break;
  case 0x67:
    strncpy(param_2,"unknown factory create request",0x50);
    break;
  case 0x68:
    strncpy(param_2,"trying to use an unknown cipher",0x50);
    break;
  case 0x69:
    strncpy(param_2,"bad master secret derivation, prefix too big",0x50);
    break;
  case 0x6a:
    strncpy(param_2,"record layer not ready yet",0x50);
    break;
  case 0x6b:
    strncpy(param_2,"handshake layer not ready yet",0x50);
    break;
  case 0x6c:
    strncpy(param_2,"handshake message received in wrong order",0x50);
    break;
  case 0x6d:
    strncpy(param_2,"bad cipher suite input",0x50);
    break;
  case 0x6e:
    strncpy(param_2,"unable to match a supported cipher suite",0x50);
    break;
  case 0x6f:
    strncpy(param_2,"the server needs a private key file",0x50);
    break;
  case 0x70:
    strncpy(param_2,"unable to verify peer checksum",0x50);
    break;
  case 0x71:
    strncpy(param_2,"socket layer send error",0x50);
    break;
  case 0x72:
    strncpy(param_2,"socket layer receive error",0x50);
    break;
  case 0x73:
    strncpy(param_2,"unable to proccess cerificate",0x50);
    break;
  case 0x74:
    strncpy(param_2,"unable to proccess private key, bad format",0x50);
    break;
  case 0x75:
    strncpy(param_2,"protocl version mismatch",0x50);
    break;
  case 0x76:
    strncpy(param_2,"compression error",0x50);
    break;
  case 0x77:
    strncpy(param_2,"decompression error",0x50);
    break;
  case 0x78:
    strncpy(param_2,"bad PreMasterSecret version error",0x50);
  }
  return;
}

```

---

## TLS_hmac

```asm
// === 0879f370 yaSSL::TLS_hmac  [0x0879f370-0x879f57f] ===
 879f370:	55                   	push   %ebp
 879f371:	89 e5                	mov    %esp,%ebp
 879f373:	57                   	push   %edi
 879f374:	56                   	push   %esi
 879f375:	53                   	push   %ebx
 879f376:	e8 7d 3a f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879f37b:	81 c3 1d d8 bc 00    	add    $0xbcd81d,%ebx
 879f381:	83 ec 3c             	sub    $0x3c,%esp
 879f384:	0f b6 75 1c          	movzbl 0x1c(%ebp),%esi
 879f388:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 879f38b:	8b 7d 08             	mov    0x8(%ebp),%edi
 879f38e:	89 44 24 04          	mov    %eax,0x4(%esp)
 879f392:	0f b7 45 14          	movzwl 0x14(%ebp),%eax
 879f396:	c7 45 d9 00 00 00 00 	movl   $0x0,-0x27(%ebp)
 879f39d:	81 e6 ff 00 00 00    	and    $0xff,%esi
 879f3a3:	c7 45 dd 00 00 00 00 	movl   $0x0,-0x23(%ebp)
 879f3aa:	89 04 24             	mov    %eax,(%esp)
 879f3ad:	e8 1e ea fa ff       	call   874ddd0 <_ZN5yaSSL6c16toaEtPh>
 879f3b2:	89 74 24 04          	mov    %esi,0x4(%esp)
 879f3b6:	89 3c 24             	mov    %edi,(%esp)
 879f3b9:	e8 52 f9 fa ff       	call   874ed10 <_ZN5yaSSL3SSL16get_SEQIncrementEb>
 879f3be:	8d 55 dd             	lea    -0x23(%ebp),%edx
 879f3c1:	89 54 24 04          	mov    %edx,0x4(%esp)
 879f3c5:	89 04 24             	mov    %eax,(%esp)
 879f3c8:	e8 43 ea fa ff       	call   874de10 <_ZN5yaSSL6c32toaEjPh>
 879f3cd:	89 3c 24             	mov    %edi,(%esp)
 879f3d0:	e8 9b ec fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 879f3d5:	89 04 24             	mov    %eax,(%esp)
 879f3d8:	e8 73 f6 fa ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 879f3dd:	8b 40 10             	mov    0x10(%eax),%eax
 879f3e0:	83 f8 02             	cmp    $0x2,%eax
 879f3e3:	0f 84 4f 01 00 00    	je     879f538 <_ZN5yaSSL8TLS_hmacERNS_3SSLEPhPKhjNS_11ContentTypeEb+0x1c8>
 879f3e9:	83 f8 03             	cmp    $0x3,%eax
 879f3ec:	0f 84 fe 00 00 00    	je     879f4f0 <_ZN5yaSSL8TLS_hmacERNS_3SSLEPhPKhjNS_11ContentTypeEb+0x180>
 879f3f2:	89 74 24 04          	mov    %esi,0x4(%esp)
 879f3f6:	89 3c 24             	mov    %edi,(%esp)
 879f3f9:	e8 52 f8 fa ff       	call   874ec50 <_ZN5yaSSL3SSL13get_macSecretEb>
 879f3fe:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879f403:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 879f40a:	89 c6                	mov    %eax,%esi
 879f40c:	e8 8f 18 fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 879f411:	89 74 24 04          	mov    %esi,0x4(%esp)
 879f415:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 879f41c:	00 
 879f41d:	89 04 24             	mov    %eax,(%esp)
 879f420:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 879f423:	e8 b8 a8 ff ff       	call   8799ce0 <_ZN5yaSSL8HMAC_MD5C1EPKhj>
 879f428:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 879f42b:	85 c0                	test   %eax,%eax
 879f42d:	89 c6                	mov    %eax,%esi
 879f42f:	74 11                	je     879f442 <_ZN5yaSSL8TLS_hmacERNS_3SSLEPhPKhjNS_11ContentTypeEb+0xd2>
 879f431:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879f436:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 879f43d:	e8 de 13 fb ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 879f442:	8b 06                	mov    (%esi),%eax
 879f444:	8d 55 d9             	lea    -0x27(%ebp),%edx
 879f447:	89 54 24 04          	mov    %edx,0x4(%esp)
 879f44b:	89 34 24             	mov    %esi,(%esp)
 879f44e:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 879f455:	00 
 879f456:	ff 50 08             	call   *0x8(%eax)
 879f459:	8b 45 18             	mov    0x18(%ebp),%eax
 879f45c:	89 3c 24             	mov    %edi,(%esp)
 879f45f:	88 45 e1             	mov    %al,-0x1f(%ebp)
 879f462:	e8 09 ec fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 879f467:	89 04 24             	mov    %eax,(%esp)
 879f46a:	e8 f1 f4 fa ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 879f46f:	0f b6 80 2e 01 00 00 	movzbl 0x12e(%eax),%eax
 879f476:	89 3c 24             	mov    %edi,(%esp)
 879f479:	88 45 e2             	mov    %al,-0x1e(%ebp)
 879f47c:	e8 ef eb fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 879f481:	89 04 24             	mov    %eax,(%esp)
 879f484:	e8 d7 f4 fa ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 879f489:	8d 55 e1             	lea    -0x1f(%ebp),%edx
 879f48c:	0f b6 80 2f 01 00 00 	movzbl 0x12f(%eax),%eax
 879f493:	88 45 e3             	mov    %al,-0x1d(%ebp)
 879f496:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 879f49a:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 879f49e:	8b 06                	mov    (%esi),%eax
 879f4a0:	89 54 24 04          	mov    %edx,0x4(%esp)
 879f4a4:	89 34 24             	mov    %esi,(%esp)
 879f4a7:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 879f4ae:	00 
 879f4af:	ff 50 08             	call   *0x8(%eax)
 879f4b2:	8b 55 14             	mov    0x14(%ebp),%edx
 879f4b5:	8b 06                	mov    (%esi),%eax
 879f4b7:	89 34 24             	mov    %esi,(%esp)
 879f4ba:	89 54 24 0c          	mov    %edx,0xc(%esp)
 879f4be:	8b 55 10             	mov    0x10(%ebp),%edx
 879f4c1:	89 54 24 08          	mov    %edx,0x8(%esp)
 879f4c5:	8b 55 0c             	mov    0xc(%ebp),%edx
 879f4c8:	89 54 24 04          	mov    %edx,0x4(%esp)
 879f4cc:	ff 50 04             	call   *0x4(%eax)
 879f4cf:	8b 06                	mov    (%esi),%eax
 879f4d1:	89 34 24             	mov    %esi,(%esp)
 879f4d4:	ff 50 14             	call   *0x14(%eax)
 879f4d7:	89 34 24             	mov    %esi,(%esp)
 879f4da:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879f4df:	e8 3c 13 fb ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 879f4e4:	83 c4 3c             	add    $0x3c,%esp
 879f4e7:	5b                   	pop    %ebx
 879f4e8:	5e                   	pop    %esi
 879f4e9:	5f                   	pop    %edi
 879f4ea:	5d                   	pop    %ebp
 879f4eb:	c3                   	ret
 879f4ec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 879f4f0:	89 74 24 04          	mov    %esi,0x4(%esp)
 879f4f4:	89 3c 24             	mov    %edi,(%esp)
 879f4f7:	e8 54 f7 fa ff       	call   874ec50 <_ZN5yaSSL3SSL13get_macSecretEb>
 879f4fc:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879f501:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 879f508:	89 c6                	mov    %eax,%esi
 879f50a:	e8 91 17 fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 879f50f:	89 74 24 04          	mov    %esi,0x4(%esp)
 879f513:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 879f51a:	00 
 879f51b:	89 04 24             	mov    %eax,(%esp)
 879f51e:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 879f521:	e8 1a a2 ff ff       	call   8799740 <_ZN5yaSSL8HMAC_RMDC1EPKhj>
 879f526:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 879f529:	85 c0                	test   %eax,%eax
 879f52b:	89 c6                	mov    %eax,%esi
 879f52d:	0f 85 fe fe ff ff    	jne    879f431 <_ZN5yaSSL8TLS_hmacERNS_3SSLEPhPKhjNS_11ContentTypeEb+0xc1>
 879f533:	e9 0a ff ff ff       	jmp    879f442 <_ZN5yaSSL8TLS_hmacERNS_3SSLEPhPKhjNS_11ContentTypeEb+0xd2>
 879f538:	89 74 24 04          	mov    %esi,0x4(%esp)
 879f53c:	89 3c 24             	mov    %edi,(%esp)
 879f53f:	e8 0c f7 fa ff       	call   874ec50 <_ZN5yaSSL3SSL13get_macSecretEb>
 879f544:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879f549:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 879f550:	89 c6                	mov    %eax,%esi
 879f552:	e8 49 17 fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 879f557:	89 74 24 04          	mov    %esi,0x4(%esp)
 879f55b:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 879f562:	00 
 879f563:	89 04 24             	mov    %eax,(%esp)
 879f566:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 879f569:	e8 a2 a4 ff ff       	call   8799a10 <_ZN5yaSSL8HMAC_SHAC1EPKhj>
 879f56e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 879f571:	85 c0                	test   %eax,%eax
 879f573:	89 c6                	mov    %eax,%esi
 879f575:	0f 85 b6 fe ff ff    	jne    879f431 <_ZN5yaSSL8TLS_hmacERNS_3SSLEPhPKhjNS_11ContentTypeEb+0xc1>
 879f57b:	e9 c2 fe ff ff       	jmp    879f442 <_ZN5yaSSL8TLS_hmacERNS_3SSLEPhPKhjNS_11ContentTypeEb+0xd2>

```

```c
// yaSSL::TLS_hmac @ 0x879f370

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TLS_hmac(yaSSL::SSL&, unsigned char*, unsigned char const*, unsigned int,
   yaSSL::ContentType, bool) */

void yaSSL::TLS_hmac(SSL *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                    undefined1 param_5,bool param_6)

{
  uint uVar1;
  Security *pSVar2;
  int iVar3;
  uchar *puVar4;
  HMAC_MD5 *this;
  uint uVar5;
  undefined4 local_2b;
  undefined4 local_27;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined2 local_20;
  undefined2 local_1e [5];
  undefined4 uStack_14;
  
  uStack_14 = 0x879f37b;
  uVar5 = 0;
  local_2b = 0;
  local_27 = 0;
  c16toa((ushort)param_4,(uchar *)local_1e);
  uVar1 = SSL::get_SEQIncrement(param_1,param_6);
  c32toa(uVar1,(uchar *)&local_27);
  pSVar2 = (Security *)SSL::getSecurity(param_1);
  iVar3 = Security::get_parms(pSVar2);
  if (*(int *)(iVar3 + 0x10) == 2) {
    puVar4 = (uchar *)SSL::get_macSecret(param_1,param_6);
    this = operator_new(8,uVar5 & 0xffffff00);
    HMAC_SHA::HMAC_SHA((HMAC_SHA *)this,puVar4,0x14);
  }
  else if (*(int *)(iVar3 + 0x10) == 3) {
    puVar4 = (uchar *)SSL::get_macSecret(param_1,param_6);
    this = operator_new(8,uVar5 & 0xffffff00);
    HMAC_RMD::HMAC_RMD((HMAC_RMD *)this,puVar4,0x14);
  }
  else {
    puVar4 = (uchar *)SSL::get_macSecret(param_1,param_6);
    this = operator_new(8,uVar5 & 0xffffff00);
    HMAC_MD5::HMAC_MD5(this,puVar4,0x10);
  }
  if (this != (HMAC_MD5 *)0x0) {
    operator_delete(0,(uint)puVar4 & 0xffffff00);
  }
  (**(code **)(*(int *)this + 8))(this,&local_2b,8);
  local_23 = param_5;
  pSVar2 = (Security *)SSL::getSecurity(param_1);
  iVar3 = Security::get_connection(pSVar2);
  local_22 = *(undefined1 *)(iVar3 + 0x12e);
  pSVar2 = (Security *)SSL::getSecurity(param_1);
  iVar3 = Security::get_connection(pSVar2);
  local_21 = *(undefined1 *)(iVar3 + 0x12f);
  local_20 = local_1e[0];
  (**(code **)(*(int *)this + 8))(this,&local_23,5);
  (**(code **)(*(int *)this + 4))(this,param_2,param_3,param_4);
  (**(code **)(*(int *)this + 0x14))(this);
  operator_delete(this,param_2 & 0xffffff00);
  return;
}

```

---

## _0874f210

```asm
// === 0874f210 yaSSL::  [0x0874f210-0x874f2cf] ===
 874f210:	55                   	push   %ebp
 874f211:	31 c9                	xor    %ecx,%ecx
 874f213:	89 e5                	mov    %esp,%ebp
 874f215:	53                   	push   %ebx
 874f216:	e8 dd 3b fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874f21b:	81 c3 7d d9 c1 00    	add    $0xc1d97d,%ebx
 874f221:	83 fa 06             	cmp    $0x6,%edx
 874f224:	77 1a                	ja     874f240 <.L380+0x8>
 874f226:	8b 94 93 10 84 99 ff 	mov    -0x667bf0(%ebx,%edx,4),%edx
 874f22d:	01 da                	add    %ebx,%edx
 874f22f:	ff e2                	jmp    *%edx
 874f231:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

0874f238 <.L380>:
 874f238:	c6 00 41             	movb   $0x41,(%eax)
 874f23b:	b9 01 00 00 00       	mov    $0x1,%ecx
 874f240:	89 c8                	mov    %ecx,%eax
 874f242:	5b                   	pop    %ebx
 874f243:	5d                   	pop    %ebp
 874f244:	c3                   	ret
 874f245:	8d 76 00             	lea    0x0(%esi),%esi

0874f248 <.L385>:
 874f248:	b9 01 00 00 00       	mov    $0x1,%ecx
 874f24d:	c7 00 46 46 46 46    	movl   $0x46464646,(%eax)
 874f253:	66 c7 40 04 46 46    	movw   $0x4646,0x4(%eax)
 874f259:	89 c8                	mov    %ecx,%eax
 874f25b:	5b                   	pop    %ebx
 874f25c:	5d                   	pop    %ebp
 874f25d:	c3                   	ret
 874f25e:	66 90                	xchg   %ax,%ax

0874f260 <.L386>:
 874f260:	b9 01 00 00 00       	mov    $0x1,%ecx
 874f265:	c7 00 47 47 47 47    	movl   $0x47474747,(%eax)
 874f26b:	66 c7 40 04 47 47    	movw   $0x4747,0x4(%eax)
 874f271:	c6 40 06 47          	movb   $0x47,0x6(%eax)
 874f275:	89 c8                	mov    %ecx,%eax
 874f277:	5b                   	pop    %ebx
 874f278:	5d                   	pop    %ebp
 874f279:	c3                   	ret
 874f27a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

0874f280 <.L381>:
 874f280:	b9 01 00 00 00       	mov    $0x1,%ecx
 874f285:	66 c7 00 42 42       	movw   $0x4242,(%eax)
 874f28a:	89 c8                	mov    %ecx,%eax
 874f28c:	5b                   	pop    %ebx
 874f28d:	5d                   	pop    %ebp
 874f28e:	c3                   	ret
 874f28f:	90                   	nop

0874f290 <.L382>:
 874f290:	b9 01 00 00 00       	mov    $0x1,%ecx
 874f295:	66 c7 00 43 43       	movw   $0x4343,(%eax)
 874f29a:	c6 40 02 43          	movb   $0x43,0x2(%eax)
 874f29e:	89 c8                	mov    %ecx,%eax
 874f2a0:	5b                   	pop    %ebx
 874f2a1:	5d                   	pop    %ebp
 874f2a2:	c3                   	ret
 874f2a3:	90                   	nop
 874f2a4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

0874f2a8 <.L383>:
 874f2a8:	b9 01 00 00 00       	mov    $0x1,%ecx
 874f2ad:	c7 00 44 44 44 44    	movl   $0x44444444,(%eax)
 874f2b3:	89 c8                	mov    %ecx,%eax
 874f2b5:	5b                   	pop    %ebx
 874f2b6:	5d                   	pop    %ebp
 874f2b7:	c3                   	ret

0874f2b8 <.L384>:
 874f2b8:	b9 01 00 00 00       	mov    $0x1,%ecx
 874f2bd:	c7 00 45 45 45 45    	movl   $0x45454545,(%eax)
 874f2c3:	c6 40 04 45          	movb   $0x45,0x4(%eax)
 874f2c7:	89 c8                	mov    %ecx,%eax
 874f2c9:	5b                   	pop    %ebx
 874f2ca:	5d                   	pop    %ebp
 874f2cb:	c3                   	ret
 874f2cc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// setPrefix @ 0x874f210

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::(anonymous namespace)::setPrefix(unsigned char*, int) */

undefined4 __regparm3 yaSSL::(anonymous_namespace)::setPrefix(uchar *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    *param_1 = 'A';
    uVar1 = 1;
    break;
  case 1:
    param_1[0] = 'B';
    param_1[1] = 'B';
    return 1;
  case 2:
    param_1[0] = 'C';
    param_1[1] = 'C';
    param_1[2] = 'C';
    return 1;
  case 3:
    builtin_memcpy(param_1,"DDDD",4);
    return 1;
  case 4:
    builtin_memcpy(param_1,"EEEEE",5);
    return 1;
  case 5:
    builtin_memcpy(param_1,"FFFFFF",6);
    return 1;
  case 6:
    builtin_memcpy(param_1,"GGGGGGG",7);
    return 1;
  }
  return uVar1;
}

```

---

## _0879cd50

```asm
// === 0879cd50 yaSSL::  [0x0879cd50-0x879ce0f] ===
 879cd50:	55                   	push   %ebp
 879cd51:	89 e5                	mov    %esp,%ebp
 879cd53:	83 ec 38             	sub    $0x38,%esp
 879cd56:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 879cd59:	e8 9a 60 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879cd5e:	81 c3 3a fe bc 00    	add    $0xbcfe3a,%ebx
 879cd64:	89 7d fc             	mov    %edi,-0x4(%ebp)
 879cd67:	89 d7                	mov    %edx,%edi
 879cd69:	0f b6 55 08          	movzbl 0x8(%ebp),%edx
 879cd6d:	89 75 f8             	mov    %esi,-0x8(%ebp)
 879cd70:	89 c6                	mov    %eax,%esi
 879cd72:	89 3c 24             	mov    %edi,(%esp)
 879cd75:	88 55 e0             	mov    %dl,-0x20(%ebp)
 879cd78:	e8 43 a1 ff ff       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 879cd7d:	89 3c 24             	mov    %edi,(%esp)
 879cd80:	83 e8 05             	sub    $0x5,%eax
 879cd83:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 879cd86:	e8 a5 a1 ff ff       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 879cd8b:	0f b6 55 e0          	movzbl -0x20(%ebp),%edx
 879cd8f:	84 d2                	test   %dl,%dl
 879cd91:	8d 78 05             	lea    0x5(%eax),%edi
 879cd94:	74 1d                	je     879cdb3 <_ZN5yaSSL12_GLOBAL__N_113hashHandShakeERNS_3SSLERKNS_13output_bufferEb+0x63>
 879cd96:	89 34 24             	mov    %esi,(%esp)
 879cd99:	e8 c2 12 fb ff       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 879cd9e:	89 04 24             	mov    %eax,(%esp)
 879cda1:	e8 ba 19 fb ff       	call   874e760 <_ZNK5yaSSL6Crypto10get_cipherEv>
 879cda6:	8b 10                	mov    (%eax),%edx
 879cda8:	89 04 24             	mov    %eax,(%esp)
 879cdab:	ff 52 10             	call   *0x10(%edx)
 879cdae:	29 45 e4             	sub    %eax,-0x1c(%ebp)
 879cdb1:	01 c7                	add    %eax,%edi
 879cdb3:	89 34 24             	mov    %esi,(%esp)
 879cdb6:	e8 25 15 fb ff       	call   874e2e0 <_ZN5yaSSL3SSL9useHashesEv>
 879cdbb:	89 04 24             	mov    %eax,(%esp)
 879cdbe:	e8 ad 1a fb ff       	call   874e870 <_ZN5yaSSL9sslHashes7use_MD5Ev>
 879cdc3:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 879cdc6:	8b 10                	mov    (%eax),%edx
 879cdc8:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 879cdcc:	89 7c 24 04          	mov    %edi,0x4(%esp)
 879cdd0:	89 04 24             	mov    %eax,(%esp)
 879cdd3:	ff 52 08             	call   *0x8(%edx)
 879cdd6:	89 34 24             	mov    %esi,(%esp)
 879cdd9:	e8 02 15 fb ff       	call   874e2e0 <_ZN5yaSSL3SSL9useHashesEv>
 879cdde:	89 04 24             	mov    %eax,(%esp)
 879cde1:	e8 9a 1a fb ff       	call   874e880 <_ZN5yaSSL9sslHashes7use_SHAEv>
 879cde6:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 879cde9:	8b 10                	mov    (%eax),%edx
 879cdeb:	89 7c 24 04          	mov    %edi,0x4(%esp)
 879cdef:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 879cdf3:	89 04 24             	mov    %eax,(%esp)
 879cdf6:	ff 52 08             	call   *0x8(%edx)
 879cdf9:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 879cdfc:	8b 75 f8             	mov    -0x8(%ebp),%esi
 879cdff:	8b 7d fc             	mov    -0x4(%ebp),%edi
 879ce02:	89 ec                	mov    %ebp,%esp
 879ce04:	5d                   	pop    %ebp
 879ce05:	c3                   	ret
 879ce06:	8d 76 00             	lea    0x0(%esi),%esi
 879ce09:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// hashHandShake @ 0x879cd50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::(anonymous namespace)::hashHandShake(yaSSL::SSL&, yaSSL::output_buffer const&, bool) */

void __regparm2
yaSSL::(anonymous_namespace)::hashHandShake(SSL *param_1,output_buffer *param_2,bool param_3)

{
  int iVar1;
  Crypto *this;
  int *piVar2;
  int iVar3;
  sslHashes *psVar4;
  undefined4 local_20;
  
  local_20 = output_buffer::get_size(param_2);
  local_20 = local_20 + -5;
  iVar1 = output_buffer::get_buffer(param_2);
  iVar1 = iVar1 + 5;
  if (param_3) {
    this = (Crypto *)SSL::getCrypto(param_1);
    piVar2 = (int *)Crypto::get_cipher(this);
    iVar3 = (**(code **)(*piVar2 + 0x10))(piVar2);
    local_20 = local_20 - iVar3;
    iVar1 = iVar1 + iVar3;
  }
  psVar4 = (sslHashes *)SSL::useHashes(param_1);
  piVar2 = (int *)sslHashes::use_MD5(psVar4);
  (**(code **)(*piVar2 + 8))(piVar2,iVar1,local_20);
  psVar4 = (sslHashes *)SSL::useHashes(param_1);
  piVar2 = (int *)sslHashes::use_SHA(psVar4);
  (**(code **)(*piVar2 + 8))(piVar2,iVar1,local_20);
  return;
}

```

---

## _0879e730

```asm
// === 0879e730 yaSSL::  [0x0879e730-0x879e97f] ===
 879e730:	55                   	push   %ebp
 879e731:	89 e5                	mov    %esp,%ebp
 879e733:	57                   	push   %edi
 879e734:	56                   	push   %esi
 879e735:	89 d6                	mov    %edx,%esi
 879e737:	53                   	push   %ebx
 879e738:	e8 bb 46 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879e73d:	81 c3 5b e4 bc 00    	add    $0xbce45b,%ebx
 879e743:	83 ec 7c             	sub    $0x7c,%esp
 879e746:	89 45 a0             	mov    %eax,-0x60(%ebp)
 879e749:	31 c0                	xor    %eax,%eax
 879e74b:	8b 55 a0             	mov    -0x60(%ebp),%edx
 879e74e:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 879e752:	0f 95 c0             	setne  %al
 879e755:	8d 04 85 10 00 00 00 	lea    0x10(,%eax,4),%eax
 879e75c:	89 14 24             	mov    %edx,(%esp)
 879e75f:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 879e762:	e8 69 87 ff ff       	call   8796ed0 <_ZNK5yaSSL13output_buffer12get_capacityEv>
 879e767:	31 d2                	xor    %edx,%edx
 879e769:	f7 75 b4             	divl   -0x4c(%ebp)
 879e76c:	89 c7                	mov    %eax,%edi
 879e76e:	8b 45 a0             	mov    -0x60(%ebp),%eax
 879e771:	89 04 24             	mov    %eax,(%esp)
 879e774:	e8 57 87 ff ff       	call   8796ed0 <_ZNK5yaSSL13output_buffer12get_capacityEv>
 879e779:	31 d2                	xor    %edx,%edx
 879e77b:	f7 75 b4             	divl   -0x4c(%ebp)
 879e77e:	8d 47 01             	lea    0x1(%edi),%eax
 879e781:	85 d2                	test   %edx,%edx
 879e783:	0f 45 f8             	cmovne %eax,%edi
 879e786:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 879e78a:	89 55 98             	mov    %edx,-0x68(%ebp)
 879e78d:	89 7d a4             	mov    %edi,-0x5c(%ebp)
 879e790:	0f 84 9a 01 00 00    	je     879e930 <_ZN5yaSSL12_GLOBAL__N_16p_hashERNS_13output_bufferERKS1_S4_NS_12MACAlgorithmE+0x200>
 879e796:	89 34 24             	mov    %esi,(%esp)
 879e799:	e8 92 87 ff ff       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 879e79e:	89 34 24             	mov    %esi,(%esp)
 879e7a1:	89 45 90             	mov    %eax,-0x70(%ebp)
 879e7a4:	e8 17 87 ff ff       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 879e7a9:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879e7ae:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 879e7b5:	89 c7                	mov    %eax,%edi
 879e7b7:	e8 e4 24 fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 879e7bc:	8b 55 90             	mov    -0x70(%ebp),%edx
 879e7bf:	89 7c 24 08          	mov    %edi,0x8(%esp)
 879e7c3:	89 54 24 04          	mov    %edx,0x4(%esp)
 879e7c7:	89 c6                	mov    %eax,%esi
 879e7c9:	89 04 24             	mov    %eax,(%esp)
 879e7cc:	e8 3f b2 ff ff       	call   8799a10 <_ZN5yaSSL8HMAC_SHAC1EPKhj>
 879e7d1:	85 f6                	test   %esi,%esi
 879e7d3:	74 11                	je     879e7e6 <_ZN5yaSSL12_GLOBAL__N_16p_hashERNS_13output_bufferERKS1_S4_NS_12MACAlgorithmE+0xb6>
 879e7d5:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879e7da:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 879e7e1:	e8 3a 20 fb ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 879e7e6:	8b 06                	mov    (%esi),%eax
 879e7e8:	8b 40 04             	mov    0x4(%eax),%eax
 879e7eb:	89 45 ac             	mov    %eax,-0x54(%ebp)
 879e7ee:	8b 45 08             	mov    0x8(%ebp),%eax
 879e7f1:	89 04 24             	mov    %eax,(%esp)
 879e7f4:	e8 c7 86 ff ff       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 879e7f9:	8b 55 08             	mov    0x8(%ebp),%edx
 879e7fc:	89 14 24             	mov    %edx,(%esp)
 879e7ff:	89 c7                	mov    %eax,%edi
 879e801:	e8 2a 87 ff ff       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 879e806:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 879e80a:	89 34 24             	mov    %esi,(%esp)
 879e80d:	89 44 24 08          	mov    %eax,0x8(%esp)
 879e811:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 879e814:	89 45 b0             	mov    %eax,-0x50(%ebp)
 879e817:	89 44 24 04          	mov    %eax,0x4(%esp)
 879e81b:	ff 55 ac             	call   *-0x54(%ebp)
 879e81e:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 879e821:	8b 7d a4             	mov    -0x5c(%ebp),%edi
 879e824:	83 ea 01             	sub    $0x1,%edx
 879e827:	85 ff                	test   %edi,%edi
 879e829:	89 55 9c             	mov    %edx,-0x64(%ebp)
 879e82c:	0f 84 da 00 00 00    	je     879e90c <_ZN5yaSSL12_GLOBAL__N_16p_hashERNS_13output_bufferERKS1_S4_NS_12MACAlgorithmE+0x1dc>
 879e832:	8b 4d 98             	mov    -0x68(%ebp),%ecx
 879e835:	8d 45 c0             	lea    -0x40(%ebp),%eax
 879e838:	89 45 ac             	mov    %eax,-0x54(%ebp)
 879e83b:	85 c9                	test   %ecx,%ecx
 879e83d:	0f 95 45 97          	setne  -0x69(%ebp)
 879e841:	31 ff                	xor    %edi,%edi
 879e843:	eb 2e                	jmp    879e873 <_ZN5yaSSL12_GLOBAL__N_16p_hashERNS_13output_bufferERKS1_S4_NS_12MACAlgorithmE+0x143>
 879e845:	8d 76 00             	lea    0x0(%esi),%esi
 879e848:	80 7d 97 00          	cmpb   $0x0,-0x69(%ebp)
 879e84c:	74 7f                	je     879e8cd <_ZN5yaSSL12_GLOBAL__N_16p_hashERNS_13output_bufferERKS1_S4_NS_12MACAlgorithmE+0x19d>
 879e84e:	8b 45 98             	mov    -0x68(%ebp),%eax
 879e851:	83 c7 01             	add    $0x1,%edi
 879e854:	8b 55 ac             	mov    -0x54(%ebp),%edx
 879e857:	89 44 24 08          	mov    %eax,0x8(%esp)
 879e85b:	8b 45 a0             	mov    -0x60(%ebp),%eax
 879e85e:	89 54 24 04          	mov    %edx,0x4(%esp)
 879e862:	89 04 24             	mov    %eax,(%esp)
 879e865:	e8 66 87 ff ff       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 879e86a:	39 7d a4             	cmp    %edi,-0x5c(%ebp)
 879e86d:	0f 86 99 00 00 00    	jbe    879e90c <_ZN5yaSSL12_GLOBAL__N_16p_hashERNS_13output_bufferERKS1_S4_NS_12MACAlgorithmE+0x1dc>
 879e873:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 879e876:	8b 06                	mov    (%esi),%eax
 879e878:	89 34 24             	mov    %esi,(%esp)
 879e87b:	89 54 24 08          	mov    %edx,0x8(%esp)
 879e87f:	8b 55 b0             	mov    -0x50(%ebp),%edx
 879e882:	89 54 24 04          	mov    %edx,0x4(%esp)
 879e886:	ff 50 08             	call   *0x8(%eax)
 879e889:	8b 06                	mov    (%esi),%eax
 879e88b:	8b 40 04             	mov    0x4(%eax),%eax
 879e88e:	89 45 a8             	mov    %eax,-0x58(%ebp)
 879e891:	8b 45 08             	mov    0x8(%ebp),%eax
 879e894:	89 04 24             	mov    %eax,(%esp)
 879e897:	e8 24 86 ff ff       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 879e89c:	89 c2                	mov    %eax,%edx
 879e89e:	8b 45 08             	mov    0x8(%ebp),%eax
 879e8a1:	89 55 90             	mov    %edx,-0x70(%ebp)
 879e8a4:	89 04 24             	mov    %eax,(%esp)
 879e8a7:	e8 84 86 ff ff       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 879e8ac:	8b 55 90             	mov    -0x70(%ebp),%edx
 879e8af:	89 34 24             	mov    %esi,(%esp)
 879e8b2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 879e8b6:	8b 55 ac             	mov    -0x54(%ebp),%edx
 879e8b9:	89 44 24 08          	mov    %eax,0x8(%esp)
 879e8bd:	89 54 24 04          	mov    %edx,0x4(%esp)
 879e8c1:	ff 55 a8             	call   *-0x58(%ebp)
 879e8c4:	3b 7d 9c             	cmp    -0x64(%ebp),%edi
 879e8c7:	0f 84 7b ff ff ff    	je     879e848 <_ZN5yaSSL12_GLOBAL__N_16p_hashERNS_13output_bufferERKS1_S4_NS_12MACAlgorithmE+0x118>
 879e8cd:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 879e8d0:	83 c7 01             	add    $0x1,%edi
 879e8d3:	8b 45 ac             	mov    -0x54(%ebp),%eax
 879e8d6:	89 54 24 08          	mov    %edx,0x8(%esp)
 879e8da:	8b 55 a0             	mov    -0x60(%ebp),%edx
 879e8dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 879e8e1:	89 14 24             	mov    %edx,(%esp)
 879e8e4:	e8 e7 86 ff ff       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 879e8e9:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 879e8ec:	8b 06                	mov    (%esi),%eax
 879e8ee:	89 34 24             	mov    %esi,(%esp)
 879e8f1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 879e8f5:	8b 55 b0             	mov    -0x50(%ebp),%edx
 879e8f8:	89 54 24 08          	mov    %edx,0x8(%esp)
 879e8fc:	89 54 24 04          	mov    %edx,0x4(%esp)
 879e900:	ff 50 04             	call   *0x4(%eax)
 879e903:	39 7d a4             	cmp    %edi,-0x5c(%ebp)
 879e906:	0f 87 67 ff ff ff    	ja     879e873 <_ZN5yaSSL12_GLOBAL__N_16p_hashERNS_13output_bufferERKS1_S4_NS_12MACAlgorithmE+0x143>
 879e90c:	8b 06                	mov    (%esi),%eax
 879e90e:	89 34 24             	mov    %esi,(%esp)
 879e911:	ff 50 14             	call   *0x14(%eax)
 879e914:	89 34 24             	mov    %esi,(%esp)
 879e917:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879e91c:	e8 ff 1e fb ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 879e921:	83 c4 7c             	add    $0x7c,%esp
 879e924:	5b                   	pop    %ebx
 879e925:	5e                   	pop    %esi
 879e926:	5f                   	pop    %edi
 879e927:	5d                   	pop    %ebp
 879e928:	c3                   	ret
 879e929:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 879e930:	89 34 24             	mov    %esi,(%esp)
 879e933:	e8 f8 85 ff ff       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 879e938:	89 34 24             	mov    %esi,(%esp)
 879e93b:	89 45 90             	mov    %eax,-0x70(%ebp)
 879e93e:	e8 7d 85 ff ff       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 879e943:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879e948:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 879e94f:	89 c7                	mov    %eax,%edi
 879e951:	e8 4a 23 fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 879e956:	8b 55 90             	mov    -0x70(%ebp),%edx
 879e959:	89 7c 24 08          	mov    %edi,0x8(%esp)
 879e95d:	89 54 24 04          	mov    %edx,0x4(%esp)
 879e961:	89 c6                	mov    %eax,%esi
 879e963:	89 04 24             	mov    %eax,(%esp)
 879e966:	e8 75 b3 ff ff       	call   8799ce0 <_ZN5yaSSL8HMAC_MD5C1EPKhj>
 879e96b:	85 f6                	test   %esi,%esi
 879e96d:	0f 85 62 fe ff ff    	jne    879e7d5 <_ZN5yaSSL12_GLOBAL__N_16p_hashERNS_13output_bufferERKS1_S4_NS_12MACAlgorithmE+0xa5>
 879e973:	e9 6e fe ff ff       	jmp    879e7e6 <_ZN5yaSSL12_GLOBAL__N_16p_hashERNS_13output_bufferERKS1_S4_NS_12MACAlgorithmE+0xb6>
 879e978:	90                   	nop
 879e979:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// p_hash @ 0x879e730

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::(anonymous namespace)::p_hash(yaSSL::output_buffer&, yaSSL::output_buffer const&,
   yaSSL::output_buffer const&, yaSSL::MACAlgorithm) */

void __regparm2
yaSSL::(anonymous_namespace)::p_hash
          (output_buffer *param_1,output_buffer *param_2,output_buffer *param_3,int param_4)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uchar *puVar5;
  HMAC_SHA *this;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint in_stack_ffffff78;
  uchar local_44 [20];
  uchar local_30 [28];
  undefined4 uStack_14;
  
  uStack_14 = 0x879e73d;
  uVar1 = (uint)(param_4 != 1) * 4 + 0x10;
  uVar3 = output_buffer::get_capacity(param_1);
  uVar4 = output_buffer::get_capacity(param_1);
  uVar4 = uVar4 % uVar1;
  uVar8 = uVar3 / uVar1;
  if (uVar4 != 0) {
    uVar8 = uVar3 / uVar1 + 1;
  }
  if (param_4 == 1) {
    puVar5 = (uchar *)output_buffer::get_buffer(param_2);
    uVar3 = output_buffer::get_size(param_2);
    this = operator_new(8,in_stack_ffffff78 & 0xffffff00);
    HMAC_MD5::HMAC_MD5((HMAC_MD5 *)this,puVar5,uVar3);
  }
  else {
    puVar5 = (uchar *)output_buffer::get_buffer(param_2);
    uVar3 = output_buffer::get_size(param_2);
    this = operator_new(8,in_stack_ffffff78 & 0xffffff00);
    HMAC_SHA::HMAC_SHA(this,puVar5,uVar3);
  }
  if (this != (HMAC_SHA *)0x0) {
    operator_delete(0,(uint)puVar5 & 0xffffff00);
  }
  pcVar2 = *(code **)(*(int *)this + 4);
  uVar6 = output_buffer::get_size(param_3);
  uVar7 = output_buffer::get_buffer(param_3);
  puVar5 = local_30;
  (*pcVar2)(this,local_30,uVar7,uVar6);
  if (uVar8 != 0) {
    uVar3 = 0;
    do {
      while( true ) {
        (**(code **)(*(int *)this + 8))(this,local_30,uVar1);
        pcVar2 = *(code **)(*(int *)this + 4);
        uVar6 = output_buffer::get_size(param_3);
        uVar7 = output_buffer::get_buffer(param_3);
        (*pcVar2)(this,local_44,uVar7,uVar6);
        if ((uVar3 == uVar8 - 1) && (uVar4 != 0)) break;
        uVar3 = uVar3 + 1;
        output_buffer::write(param_1,local_44,uVar1);
        puVar5 = local_30;
        (**(code **)(*(int *)this + 4))(this,local_30,local_30,uVar1);
        if (uVar8 <= uVar3) goto LAB_0879e90c;
      }
      uVar3 = uVar3 + 1;
      puVar5 = local_44;
      output_buffer::write(param_1,local_44,uVar4);
    } while (uVar3 < uVar8);
  }
LAB_0879e90c:
  (**(code **)(*(int *)this + 0x14))(this);
  operator_delete(this,(uint)puVar5 & 0xffffff00);
  return;
}

```

---

## _0879f580

```asm
// === 0879f580 yaSSL::  [0x0879f580-0x879f9bf] ===
 879f580:	55                   	push   %ebp
 879f581:	89 e5                	mov    %esp,%ebp
 879f583:	57                   	push   %edi
 879f584:	56                   	push   %esi
 879f585:	89 d6                	mov    %edx,%esi
 879f587:	53                   	push   %ebx
 879f588:	e8 6b 38 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879f58d:	81 c3 0b d6 bc 00    	add    $0xbcd60b,%ebx
 879f593:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 879f599:	8b 7d 08             	mov    0x8(%ebp),%edi
 879f59c:	89 45 a0             	mov    %eax,-0x60(%ebp)
 879f59f:	89 04 24             	mov    %eax,(%esp)
 879f5a2:	e8 b9 ea fa ff       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 879f5a7:	89 04 24             	mov    %eax,(%esp)
 879f5aa:	e8 a1 f1 fa ff       	call   874e750 <_ZNK5yaSSL6Crypto10get_digestEv>
 879f5af:	8b 10                	mov    (%eax),%edx
 879f5b1:	89 04 24             	mov    %eax,(%esp)
 879f5b4:	ff 52 0c             	call   *0xc(%edx)
 879f5b7:	89 45 9c             	mov    %eax,-0x64(%ebp)
 879f5ba:	8b 07                	mov    (%edi),%eax
 879f5bc:	89 3c 24             	mov    %edi,(%esp)
 879f5bf:	ff 50 10             	call   *0x10(%eax)
 879f5c2:	8b 55 9c             	mov    -0x64(%ebp),%edx
 879f5c5:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 879f5c8:	89 0c 24             	mov    %ecx,(%esp)
 879f5cb:	0f b7 c0             	movzwl %ax,%eax
 879f5ce:	8d 44 02 05          	lea    0x5(%edx,%eax,1),%eax
 879f5d2:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 879f5d5:	e8 86 ea fa ff       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 879f5da:	89 04 24             	mov    %eax,(%esp)
 879f5dd:	e8 7e f1 fa ff       	call   874e760 <_ZNK5yaSSL6Crypto10get_cipherEv>
 879f5e2:	8b 10                	mov    (%eax),%edx
 879f5e4:	89 04 24             	mov    %eax,(%esp)
 879f5e7:	ff 52 10             	call   *0x10(%edx)
 879f5ea:	89 45 94             	mov    %eax,-0x6c(%ebp)
 879f5ed:	8b 45 a0             	mov    -0x60(%ebp),%eax
 879f5f0:	89 04 24             	mov    %eax,(%esp)
 879f5f3:	e8 78 ea fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 879f5f8:	89 04 24             	mov    %eax,(%esp)
 879f5fb:	e8 50 f4 fa ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 879f600:	c7 45 90 00 00 00 00 	movl   $0x0,-0x70(%ebp)
 879f607:	83 78 08 01          	cmpl   $0x1,0x8(%eax)
 879f60b:	0f 84 67 03 00 00    	je     879f978 <_ZN5yaSSL12_GLOBAL__N_112buildMessageERNS_3SSLERNS_13output_bufferERKNS_7MessageE+0x3f8>
 879f611:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 879f614:	89 04 24             	mov    %eax,(%esp)
 879f617:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 879f61e:	00 
 879f61f:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 879f626:	00 
 879f627:	e8 24 73 fa ff       	call   8746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>
 879f62c:	8b 55 a0             	mov    -0x60(%ebp),%edx
 879f62f:	89 14 24             	mov    %edx,(%esp)
 879f632:	e8 39 ea fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 879f637:	89 04 24             	mov    %eax,(%esp)
 879f63a:	e8 21 f3 fa ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 879f63f:	0f b6 88 2f 01 00 00 	movzbl 0x12f(%eax),%ecx
 879f646:	0f b6 90 2e 01 00 00 	movzbl 0x12e(%eax),%edx
 879f64d:	8b 07                	mov    (%edi),%eax
 879f64f:	89 3c 24             	mov    %edi,(%esp)
 879f652:	88 4d 88             	mov    %cl,-0x78(%ebp)
 879f655:	88 55 8c             	mov    %dl,-0x74(%ebp)
 879f658:	ff 50 0c             	call   *0xc(%eax)
 879f65b:	0f b6 55 8c          	movzbl -0x74(%ebp),%edx
 879f65f:	0f b6 4d 88          	movzbl -0x78(%ebp),%ecx
 879f663:	88 55 e4             	mov    %dl,-0x1c(%ebp)
 879f666:	88 4d e5             	mov    %cl,-0x1b(%ebp)
 879f669:	89 45 e0             	mov    %eax,-0x20(%ebp)
 879f66c:	8b 07                	mov    (%edi),%eax
 879f66e:	89 3c 24             	mov    %edi,(%esp)
 879f671:	ff 50 10             	call   *0x10(%eax)
 879f674:	0f b7 45 a4          	movzwl -0x5c(%ebp),%eax
 879f678:	8d 4d d0             	lea    -0x30(%ebp),%ecx
 879f67b:	89 4d 98             	mov    %ecx,-0x68(%ebp)
 879f67e:	89 0c 24             	mov    %ecx,(%esp)
 879f681:	83 e8 05             	sub    $0x5,%eax
 879f684:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 879f688:	e8 73 76 ff ff       	call   8796d00 <_ZN5yaSSL12input_bufferC1Ev>
 879f68d:	8b 45 a0             	mov    -0x60(%ebp),%eax
 879f690:	89 04 24             	mov    %eax,(%esp)
 879f693:	e8 d8 f2 fa ff       	call   874e970 <_ZNK5yaSSL3SSL9isTLSv1_1Ev>
 879f698:	84 c0                	test   %al,%al
 879f69a:	0f 85 58 02 00 00    	jne    879f8f8 <_ZN5yaSSL12_GLOBAL__N_112buildMessageERNS_3SSLERNS_13output_bufferERKNS_7MessageE+0x378>
 879f6a0:	8b 4d 98             	mov    -0x68(%ebp),%ecx
 879f6a3:	89 0c 24             	mov    %ecx,(%esp)
 879f6a6:	e8 05 77 ff ff       	call   8796db0 <_ZNK5yaSSL12input_buffer8get_sizeEv>
 879f6ab:	89 34 24             	mov    %esi,(%esp)
 879f6ae:	89 45 94             	mov    %eax,-0x6c(%ebp)
 879f6b1:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 879f6b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 879f6b8:	e8 63 7a ff ff       	call   8797120 <_ZN5yaSSL13output_buffer8allocateEj>
 879f6bd:	8d 45 e0             	lea    -0x20(%ebp),%eax
 879f6c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 879f6c4:	89 34 24             	mov    %esi,(%esp)
 879f6c7:	e8 94 9a fa ff       	call   8749160 <_ZN5yaSSLlsERNS_13output_bufferERKNS_17RecordLayerHeaderE>
 879f6cc:	8b 55 98             	mov    -0x68(%ebp),%edx
 879f6cf:	89 14 24             	mov    %edx,(%esp)
 879f6d2:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 879f6d5:	e8 d6 76 ff ff       	call   8796db0 <_ZNK5yaSSL12input_buffer8get_sizeEv>
 879f6da:	8b 4d 98             	mov    -0x68(%ebp),%ecx
 879f6dd:	89 0c 24             	mov    %ecx,(%esp)
 879f6e0:	89 45 8c             	mov    %eax,-0x74(%ebp)
 879f6e3:	e8 48 76 ff ff       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 879f6e8:	8b 55 8c             	mov    -0x74(%ebp),%edx
 879f6eb:	89 54 24 08          	mov    %edx,0x8(%esp)
 879f6ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 879f6f3:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 879f6f6:	89 04 24             	mov    %eax,(%esp)
 879f6f9:	e8 d2 78 ff ff       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 879f6fe:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 879f701:	89 7c 24 04          	mov    %edi,0x4(%esp)
 879f705:	89 14 24             	mov    %edx,(%esp)
 879f708:	e8 43 73 fa ff       	call   8746a50 <_ZN5yaSSLlsERNS_13output_bufferERKNS_7MessageE>
 879f70d:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 879f710:	89 0c 24             	mov    %ecx,(%esp)
 879f713:	e8 88 f2 fa ff       	call   874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>
 879f718:	84 c0                	test   %al,%al
 879f71a:	0f 84 48 01 00 00    	je     879f868 <_ZN5yaSSL12_GLOBAL__N_112buildMessageERNS_3SSLERNS_13output_bufferERKNS_7MessageE+0x2e8>
 879f720:	8b 07                	mov    (%edi),%eax
 879f722:	89 3c 24             	mov    %edi,(%esp)
 879f725:	ff 50 0c             	call   *0xc(%eax)
 879f728:	89 34 24             	mov    %esi,(%esp)
 879f72b:	89 c7                	mov    %eax,%edi
 879f72d:	e8 8e 77 ff ff       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 879f732:	89 34 24             	mov    %esi,(%esp)
 879f735:	89 45 8c             	mov    %eax,-0x74(%ebp)
 879f738:	e8 f3 77 ff ff       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 879f73d:	8b 55 8c             	mov    -0x74(%ebp),%edx
 879f740:	2b 55 94             	sub    -0x6c(%ebp),%edx
 879f743:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 879f746:	89 7c 24 10          	mov    %edi,0x10(%esp)
 879f74a:	8d 7d ac             	lea    -0x54(%ebp),%edi
 879f74d:	83 ea 05             	sub    $0x5,%edx
 879f750:	89 54 24 0c          	mov    %edx,0xc(%esp)
 879f754:	8b 55 94             	mov    -0x6c(%ebp),%edx
 879f757:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 879f75e:	00 
 879f75f:	89 7c 24 04          	mov    %edi,0x4(%esp)
 879f763:	89 0c 24             	mov    %ecx,(%esp)
 879f766:	8d 44 10 05          	lea    0x5(%eax,%edx,1),%eax
 879f76a:	89 44 24 08          	mov    %eax,0x8(%esp)
 879f76e:	e8 fd fb ff ff       	call   879f370 <_ZN5yaSSL8TLS_hmacERNS_3SSLEPhPKhjNS_11ContentTypeEb>
 879f773:	8b 55 9c             	mov    -0x64(%ebp),%edx
 879f776:	89 7c 24 04          	mov    %edi,0x4(%esp)
 879f77a:	89 34 24             	mov    %esi,(%esp)
 879f77d:	89 54 24 08          	mov    %edx,0x8(%esp)
 879f781:	e8 4a 78 ff ff       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 879f786:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 879f789:	89 0c 24             	mov    %ecx,(%esp)
 879f78c:	e8 df e8 fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 879f791:	89 04 24             	mov    %eax,(%esp)
 879f794:	e8 b7 f2 fa ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 879f799:	83 78 08 01          	cmpl   $0x1,0x8(%eax)
 879f79d:	0f 84 1d 01 00 00    	je     879f8c0 <_ZN5yaSSL12_GLOBAL__N_112buildMessageERNS_3SSLERNS_13output_bufferERKNS_7MessageE+0x340>
 879f7a3:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 879f7a7:	8d 7d c0             	lea    -0x40(%ebp),%edi
 879f7aa:	89 3c 24             	mov    %edi,(%esp)
 879f7ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 879f7b1:	e8 2a 7b ff ff       	call   87972e0 <_ZN5yaSSL12input_bufferC1Ej>
 879f7b6:	8b 45 a0             	mov    -0x60(%ebp),%eax
 879f7b9:	89 04 24             	mov    %eax,(%esp)
 879f7bc:	e8 ef ea fa ff       	call   874e2b0 <_ZN5yaSSL3SSL9useCryptoEv>
 879f7c1:	89 04 24             	mov    %eax,(%esp)
 879f7c4:	e8 e7 ef fa ff       	call   874e7b0 <_ZN5yaSSL6Crypto10use_cipherEv>
 879f7c9:	89 c2                	mov    %eax,%edx
 879f7cb:	8b 00                	mov    (%eax),%eax
 879f7cd:	89 55 8c             	mov    %edx,-0x74(%ebp)
 879f7d0:	8b 00                	mov    (%eax),%eax
 879f7d2:	89 34 24             	mov    %esi,(%esp)
 879f7d5:	89 45 9c             	mov    %eax,-0x64(%ebp)
 879f7d8:	e8 e3 76 ff ff       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 879f7dd:	89 34 24             	mov    %esi,(%esp)
 879f7e0:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 879f7e3:	e8 48 77 ff ff       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 879f7e8:	89 3c 24             	mov    %edi,(%esp)
 879f7eb:	89 45 a0             	mov    %eax,-0x60(%ebp)
 879f7ee:	e8 3d 75 ff ff       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 879f7f3:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 879f7f6:	8b 55 8c             	mov    -0x74(%ebp),%edx
 879f7f9:	83 e9 05             	sub    $0x5,%ecx
 879f7fc:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 879f800:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 879f803:	89 14 24             	mov    %edx,(%esp)
 879f806:	89 44 24 04          	mov    %eax,0x4(%esp)
 879f80a:	83 c1 05             	add    $0x5,%ecx
 879f80d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 879f811:	ff 55 9c             	call   *-0x64(%ebp)
 879f814:	89 34 24             	mov    %esi,(%esp)
 879f817:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 879f81e:	00 
 879f81f:	e8 bc 76 ff ff       	call   8796ee0 <_ZN5yaSSL13output_buffer11set_currentEj>
 879f824:	89 3c 24             	mov    %edi,(%esp)
 879f827:	e8 14 75 ff ff       	call   8796d40 <_ZNK5yaSSL12input_buffer12get_capacityEv>
 879f82c:	89 3c 24             	mov    %edi,(%esp)
 879f82f:	89 45 8c             	mov    %eax,-0x74(%ebp)
 879f832:	e8 f9 74 ff ff       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 879f837:	8b 55 8c             	mov    -0x74(%ebp),%edx
 879f83a:	89 34 24             	mov    %esi,(%esp)
 879f83d:	89 54 24 08          	mov    %edx,0x8(%esp)
 879f841:	89 44 24 04          	mov    %eax,0x4(%esp)
 879f845:	e8 86 77 ff ff       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 879f84a:	89 3c 24             	mov    %edi,(%esp)
 879f84d:	e8 0e 7b ff ff       	call   8797360 <_ZN5yaSSL12input_bufferD1Ev>
 879f852:	8b 55 98             	mov    -0x68(%ebp),%edx
 879f855:	89 14 24             	mov    %edx,(%esp)
 879f858:	e8 03 7b ff ff       	call   8797360 <_ZN5yaSSL12input_bufferD1Ev>
 879f85d:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 879f863:	5b                   	pop    %ebx
 879f864:	5e                   	pop    %esi
 879f865:	5f                   	pop    %edi
 879f866:	5d                   	pop    %ebp
 879f867:	c3                   	ret
 879f868:	8b 07                	mov    (%edi),%eax
 879f86a:	89 3c 24             	mov    %edi,(%esp)
 879f86d:	ff 50 0c             	call   *0xc(%eax)
 879f870:	89 34 24             	mov    %esi,(%esp)
 879f873:	89 c7                	mov    %eax,%edi
 879f875:	e8 46 76 ff ff       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 879f87a:	89 34 24             	mov    %esi,(%esp)
 879f87d:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 879f880:	e8 ab 76 ff ff       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 879f885:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 879f888:	89 7c 24 10          	mov    %edi,0x10(%esp)
 879f88c:	8d 7d ac             	lea    -0x54(%ebp),%edi
 879f88f:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 879f896:	00 
 879f897:	89 7c 24 04          	mov    %edi,0x4(%esp)
 879f89b:	83 ea 05             	sub    $0x5,%edx
 879f89e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 879f8a2:	83 c0 05             	add    $0x5,%eax
 879f8a5:	89 44 24 08          	mov    %eax,0x8(%esp)
 879f8a9:	8b 45 a0             	mov    -0x60(%ebp),%eax
 879f8ac:	89 04 24             	mov    %eax,(%esp)
 879f8af:	e8 1c dd ff ff       	call   879d5d0 <_ZN5yaSSL4hmacERNS_3SSLEPhPKhjNS_11ContentTypeEb>
 879f8b4:	e9 ba fe ff ff       	jmp    879f773 <_ZN5yaSSL12_GLOBAL__N_112buildMessageERNS_3SSLERNS_13output_bufferERKNS_7MessageE+0x1f3>
 879f8b9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 879f8c0:	0f b6 45 90          	movzbl -0x70(%ebp),%eax
 879f8c4:	31 ff                	xor    %edi,%edi
 879f8c6:	89 75 a4             	mov    %esi,-0x5c(%ebp)
 879f8c9:	8b 75 90             	mov    -0x70(%ebp),%esi
 879f8cc:	88 45 9c             	mov    %al,-0x64(%ebp)
 879f8cf:	90                   	nop
 879f8d0:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 879f8d3:	83 c7 01             	add    $0x1,%edi
 879f8d6:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 879f8dd:	fe 
 879f8de:	89 14 24             	mov    %edx,(%esp)
 879f8e1:	e8 5a 76 ff ff       	call   8796f40 <_ZN5yaSSL13output_bufferixEj>
 879f8e6:	0f b6 4d 9c          	movzbl -0x64(%ebp),%ecx
 879f8ea:	39 fe                	cmp    %edi,%esi
 879f8ec:	88 08                	mov    %cl,(%eax)
 879f8ee:	73 e0                	jae    879f8d0 <_ZN5yaSSL12_GLOBAL__N_112buildMessageERNS_3SSLERNS_13output_bufferERKNS_7MessageE+0x350>
 879f8f0:	8b 75 a4             	mov    -0x5c(%ebp),%esi
 879f8f3:	e9 ab fe ff ff       	jmp    879f7a3 <_ZN5yaSSL12_GLOBAL__N_112buildMessageERNS_3SSLERNS_13output_bufferERKNS_7MessageE+0x223>
 879f8f8:	8b 55 a0             	mov    -0x60(%ebp),%edx
 879f8fb:	89 14 24             	mov    %edx,(%esp)
 879f8fe:	e8 6d e7 fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 879f903:	89 04 24             	mov    %eax,(%esp)
 879f906:	e8 45 f1 fa ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 879f90b:	83 78 08 01          	cmpl   $0x1,0x8(%eax)
 879f90f:	0f 85 8b fd ff ff    	jne    879f6a0 <_ZN5yaSSL12_GLOBAL__N_112buildMessageERNS_3SSLERNS_13output_bufferERKNS_7MessageE+0x120>
 879f915:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 879f918:	8b 45 98             	mov    -0x68(%ebp),%eax
 879f91b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879f91f:	89 04 24             	mov    %eax,(%esp)
 879f922:	e8 f9 78 ff ff       	call   8797220 <_ZN5yaSSL12input_buffer8allocateEj>
 879f927:	8b 55 98             	mov    -0x68(%ebp),%edx
 879f92a:	89 14 24             	mov    %edx,(%esp)
 879f92d:	e8 fe 73 ff ff       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 879f932:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 879f935:	89 0c 24             	mov    %ecx,(%esp)
 879f938:	89 45 8c             	mov    %eax,-0x74(%ebp)
 879f93b:	e8 20 e7 fa ff       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 879f940:	89 04 24             	mov    %eax,(%esp)
 879f943:	e8 38 ee fa ff       	call   874e780 <_ZNK5yaSSL6Crypto10get_randomEv>
 879f948:	8b 55 8c             	mov    -0x74(%ebp),%edx
 879f94b:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 879f94e:	89 54 24 04          	mov    %edx,0x4(%esp)
 879f952:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 879f956:	89 04 24             	mov    %eax,(%esp)
 879f959:	e8 62 96 ff ff       	call   8798fc0 <_ZNK5yaSSL10RandomPool4FillEPhj>
 879f95e:	8b 45 94             	mov    -0x6c(%ebp),%eax
 879f961:	8b 55 98             	mov    -0x68(%ebp),%edx
 879f964:	89 44 24 04          	mov    %eax,0x4(%esp)
 879f968:	89 14 24             	mov    %edx,(%esp)
 879f96b:	e8 e0 73 ff ff       	call   8796d50 <_ZN5yaSSL12input_buffer8add_sizeEj>
 879f970:	e9 2b fd ff ff       	jmp    879f6a0 <_ZN5yaSSL12_GLOBAL__N_112buildMessageERNS_3SSLERNS_13output_bufferERKNS_7MessageE+0x120>
 879f975:	8d 76 00             	lea    0x0(%esi),%esi
 879f978:	8b 55 a0             	mov    -0x60(%ebp),%edx
 879f97b:	89 14 24             	mov    %edx,(%esp)
 879f97e:	e8 ed ef fa ff       	call   874e970 <_ZNK5yaSSL3SSL9isTLSv1_1Ev>
 879f983:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 879f986:	03 55 94             	add    -0x6c(%ebp),%edx
 879f989:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 879f98c:	84 c0                	test   %al,%al
 879f98e:	0f 44 55 a4          	cmove  -0x5c(%ebp),%edx
 879f992:	89 d0                	mov    %edx,%eax
 879f994:	89 55 a4             	mov    %edx,-0x5c(%ebp)
 879f997:	83 e8 04             	sub    $0x4,%eax
 879f99a:	31 d2                	xor    %edx,%edx
 879f99c:	f7 75 94             	divl   -0x6c(%ebp)
 879f99f:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 879f9a2:	29 d1                	sub    %edx,%ecx
 879f9a4:	8d 44 01 01          	lea    0x1(%ecx,%eax,1),%eax
 879f9a8:	89 4d 90             	mov    %ecx,-0x70(%ebp)
 879f9ab:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 879f9ae:	e9 5e fc ff ff       	jmp    879f611 <_ZN5yaSSL12_GLOBAL__N_112buildMessageERNS_3SSLERNS_13output_bufferERKNS_7MessageE+0x91>
 879f9b3:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 879f9b9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// buildMessage @ 0x879f580

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::(anonymous namespace)::buildMessage(yaSSL::SSL&, yaSSL::output_buffer&, yaSSL::Message
   const&) */

void __regparm2
yaSSL::(anonymous_namespace)::buildMessage(SSL *param_1,output_buffer *param_2,Message *param_3)

{
  undefined1 uVar1;
  ProtocolVersion PVar2;
  code *pcVar3;
  char cVar4;
  Crypto *pCVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  Security *pSVar9;
  int iVar10;
  output_buffer *this;
  uchar *puVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined1 *puVar16;
  RandomPool *this_00;
  uint uVar17;
  uint local_74;
  uint local_60;
  uchar local_58 [20];
  input_buffer local_44 [16];
  input_buffer local_34 [16];
  undefined4 local_24;
  ProtocolVersion local_20;
  undefined1 local_1f;
  ushort local_1e;
  undefined4 uStack_14;
  
  uStack_14 = 0x879f58d;
  pCVar5 = (Crypto *)SSL::getCrypto(param_1);
  piVar6 = (int *)Crypto::get_digest(pCVar5);
  uVar7 = (**(code **)(*piVar6 + 0xc))(piVar6);
  uVar8 = (**(code **)(*(int *)param_3 + 0x10))(param_3);
  local_60 = uVar7 + 5 + (uVar8 & 0xffff);
  pCVar5 = (Crypto *)SSL::getCrypto(param_1);
  piVar6 = (int *)Crypto::get_cipher(pCVar5);
  uVar8 = (**(code **)(*piVar6 + 0x10))(piVar6);
  pSVar9 = (Security *)SSL::getSecurity(param_1);
  iVar10 = Security::get_parms(pSVar9);
  local_74 = 0;
  if (*(int *)(iVar10 + 8) == 1) {
    cVar4 = SSL::isTLSv1_1(param_1);
    uVar17 = local_60 + uVar8;
    if (cVar4 == '\0') {
      uVar17 = local_60;
    }
    local_74 = uVar8 - (uVar17 - 4) % uVar8;
    local_60 = local_74 + 1 + uVar17;
  }
  ProtocolVersion::ProtocolVersion(&local_20,'\x03','\0');
  pSVar9 = (Security *)SSL::getSecurity(param_1);
  iVar10 = Security::get_connection(pSVar9);
  uVar1 = *(undefined1 *)(iVar10 + 0x12f);
  PVar2 = *(ProtocolVersion *)(iVar10 + 0x12e);
  local_24 = (**(code **)(*(int *)param_3 + 0xc))(param_3);
  local_20 = PVar2;
  local_1f = uVar1;
  (**(code **)(*(int *)param_3 + 0x10))(param_3);
  local_1e = (short)local_60 - 5;
  input_buffer::input_buffer(local_34);
  cVar4 = SSL::isTLSv1_1(param_1);
  if (cVar4 != '\0') {
    pSVar9 = (Security *)SSL::getSecurity(param_1);
    iVar10 = Security::get_parms(pSVar9);
    if (*(int *)(iVar10 + 8) == 1) {
      input_buffer::allocate(local_34,uVar8);
      puVar11 = (uchar *)input_buffer::get_buffer(local_34);
      pCVar5 = (Crypto *)SSL::getCrypto(param_1);
      this_00 = (RandomPool *)Crypto::get_random(pCVar5);
      RandomPool::Fill(this_00,puVar11,uVar8);
      input_buffer::add_size(local_34,uVar8);
    }
  }
  iVar10 = input_buffer::get_size(local_34);
  output_buffer::allocate(param_2,local_60);
  this = (output_buffer *)yaSSL::operator<<(param_2,(RecordLayerHeader *)&local_24);
  uVar8 = input_buffer::get_size(local_34);
  puVar11 = (uchar *)input_buffer::get_buffer(local_34);
  output_buffer::write(this,puVar11,uVar8);
  yaSSL::operator<<(this,param_3);
  cVar4 = SSL::isTLS(param_1);
  if (cVar4 == '\0') {
    uVar12 = (**(code **)(*(int *)param_3 + 0xc))(param_3);
    iVar10 = output_buffer::get_size(param_2);
    iVar13 = output_buffer::get_buffer(param_2);
    hmac(param_1,local_58,iVar13 + 5,iVar10 + -5,uVar12,0);
  }
  else {
    uVar12 = (**(code **)(*(int *)param_3 + 0xc))(param_3);
    iVar13 = output_buffer::get_size(param_2);
    iVar14 = output_buffer::get_buffer(param_2);
    TLS_hmac(param_1,local_58,iVar14 + 5 + iVar10,(iVar13 - iVar10) + -5,uVar12,0);
  }
  output_buffer::write(param_2,local_58,uVar7);
  pSVar9 = (Security *)SSL::getSecurity(param_1);
  iVar10 = Security::get_parms(pSVar9);
  if (*(int *)(iVar10 + 8) == 1) {
    uVar7 = 0;
    do {
      uVar7 = uVar7 + 1;
      puVar16 = (undefined1 *)output_buffer::operator[]((uint)param_2);
      *puVar16 = (undefined1)local_74;
    } while (uVar7 <= local_74);
  }
  input_buffer::input_buffer(local_44,(uint)local_1e);
  pCVar5 = (Crypto *)SSL::useCrypto(param_1);
  puVar15 = (undefined4 *)Crypto::use_cipher(pCVar5);
  pcVar3 = *(code **)*puVar15;
  iVar10 = output_buffer::get_size(param_2);
  iVar13 = output_buffer::get_buffer(param_2);
  uVar12 = input_buffer::get_buffer(local_44);
  (*pcVar3)(puVar15,uVar12,iVar13 + 5,iVar10 + -5);
  output_buffer::set_current(param_2,5);
  uVar7 = input_buffer::get_capacity(local_44);
  puVar11 = (uchar *)input_buffer::get_buffer(local_44);
  output_buffer::write(param_2,puVar11,uVar7);
  input_buffer::~input_buffer(local_44);
  input_buffer::~input_buffer(local_34);
  return;
}

```

---

## ato16

```asm
// === 0874dd90 yaSSL::ato16  [0x0874dd90-0x874ddaf] ===
 874dd90:	55                   	push   %ebp
 874dd91:	89 e5                	mov    %esp,%ebp
 874dd93:	8b 45 08             	mov    0x8(%ebp),%eax
 874dd96:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 874dd99:	66 c7 01 00 00       	movw   $0x0,(%ecx)
 874dd9e:	0f b6 10             	movzbl (%eax),%edx
 874dda1:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 874dda5:	c1 e2 08             	shl    $0x8,%edx
 874dda8:	09 d0                	or     %edx,%eax
 874ddaa:	66 89 01             	mov    %ax,(%ecx)
 874ddad:	5d                   	pop    %ebp
 874ddae:	c3                   	ret
 874ddaf:	90                   	nop

```

```c
// yaSSL::ato16 @ 0x874dd90

/* yaSSL::ato16(unsigned char const*, unsigned short&) */

void yaSSL::ato16(uchar *param_1,ushort *param_2)

{
  *param_2 = 0;
  *param_2 = CONCAT11(*param_1,param_1[1]);
  return;
}

```

---

## ato24

```asm
// === 0874ddb0 yaSSL::ato24  [0x0874ddb0-0x874ddcf] ===
 874ddb0:	55                   	push   %ebp
 874ddb1:	89 e5                	mov    %esp,%ebp
 874ddb3:	8b 55 08             	mov    0x8(%ebp),%edx
 874ddb6:	8b 45 0c             	mov    0xc(%ebp),%eax
 874ddb9:	0f b6 0a             	movzbl (%edx),%ecx
 874ddbc:	88 08                	mov    %cl,(%eax)
 874ddbe:	0f b6 4a 01          	movzbl 0x1(%edx),%ecx
 874ddc2:	88 48 01             	mov    %cl,0x1(%eax)
 874ddc5:	0f b6 52 02          	movzbl 0x2(%edx),%edx
 874ddc9:	88 50 02             	mov    %dl,0x2(%eax)
 874ddcc:	5d                   	pop    %ebp
 874ddcd:	c3                   	ret
 874ddce:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::ato24 @ 0x874ddb0

/* yaSSL::ato24(unsigned char const*, unsigned char (&) [3]) */

void yaSSL::ato24(uchar *param_1,unsigned_char *param_2)

{
  *param_2 = (unsigned_char)*param_1;
  param_2[1] = *(unsigned_char *)(param_1 + 1);
  param_2[2] = *(unsigned_char *)(param_1 + 2);
  return;
}

```

---

## buildClientHello

```asm
// === 0879db70 yaSSL::buildClientHello  [0x0879db70-0x879dcaf] ===
 879db70:	55                   	push   %ebp
 879db71:	89 e5                	mov    %esp,%ebp
 879db73:	57                   	push   %edi
 879db74:	56                   	push   %esi
 879db75:	53                   	push   %ebx
 879db76:	e8 7d 52 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879db7b:	81 c3 1d f0 bc 00    	add    $0xbcf01d,%ebx
 879db81:	83 ec 2c             	sub    $0x2c,%esp
 879db84:	8b 7d 08             	mov    0x8(%ebp),%edi
 879db87:	8b 75 0c             	mov    0xc(%ebp),%esi
 879db8a:	89 3c 24             	mov    %edi,(%esp)
 879db8d:	e8 2e 07 fb ff       	call   874e2c0 <_ZN5yaSSL3SSL11useSecurityEv>
 879db92:	89 04 24             	mov    %eax,(%esp)
 879db95:	e8 66 11 fb ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 879db9a:	0f b7 56 08          	movzwl 0x8(%esi),%edx
 879db9e:	66 89 90 30 01 00 00 	mov    %dx,0x130(%eax)
 879dba5:	89 3c 24             	mov    %edi,(%esp)
 879dba8:	e8 b3 04 fb ff       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 879dbad:	89 04 24             	mov    %eax,(%esp)
 879dbb0:	e8 cb 0b fb ff       	call   874e780 <_ZNK5yaSSL6Crypto10get_randomEv>
 879dbb5:	8d 56 0a             	lea    0xa(%esi),%edx
 879dbb8:	89 54 24 04          	mov    %edx,0x4(%esp)
 879dbbc:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 879dbc3:	00 
 879dbc4:	89 04 24             	mov    %eax,(%esp)
 879dbc7:	e8 f4 b3 ff ff       	call   8798fc0 <_ZNK5yaSSL10RandomPool4FillEPhj>
 879dbcc:	89 3c 24             	mov    %edi,(%esp)
 879dbcf:	e8 9c 04 fb ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 879dbd4:	89 04 24             	mov    %eax,(%esp)
 879dbd7:	e8 14 11 fb ff       	call   874ecf0 <_ZNK5yaSSL8Security12get_resumingEv>
 879dbdc:	84 c0                	test   %al,%al
 879dbde:	75 78                	jne    879dc58 <_ZN5yaSSL16buildClientHelloERNS_3SSLERNS_11ClientHelloE+0xe8>
 879dbe0:	c6 46 2a 00          	movb   $0x0,0x2a(%esi)
 879dbe4:	89 3c 24             	mov    %edi,(%esp)
 879dbe7:	e8 84 04 fb ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 879dbec:	89 04 24             	mov    %eax,(%esp)
 879dbef:	e8 5c 0e fb ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 879dbf4:	0f b6 50 2e          	movzbl 0x2e(%eax),%edx
 879dbf8:	66 89 56 4c          	mov    %dx,0x4c(%esi)
 879dbfc:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 879dbff:	89 3c 24             	mov    %edi,(%esp)
 879dc02:	e8 69 04 fb ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 879dc07:	89 04 24             	mov    %eax,(%esp)
 879dc0a:	e8 41 0e fb ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 879dc0f:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 879dc12:	8d 4e 4e             	lea    0x4e(%esi),%ecx
 879dc15:	89 0c 24             	mov    %ecx,(%esp)
 879dc18:	0f b7 d2             	movzwl %dx,%edx
 879dc1b:	89 54 24 08          	mov    %edx,0x8(%esp)
 879dc1f:	83 c0 2f             	add    $0x2f,%eax
 879dc22:	89 44 24 04          	mov    %eax,0x4(%esp)
 879dc26:	e8 75 fc 8d ff       	call   807d8a0 <memcpy@plt>
 879dc2b:	0f b6 56 2a          	movzbl 0x2a(%esi),%edx
 879dc2f:	0f b7 46 4c          	movzwl 0x4c(%esi),%eax
 879dc33:	c6 86 ce 00 00 00 01 	movb   $0x1,0xce(%esi)
 879dc3a:	89 34 24             	mov    %esi,(%esp)
 879dc3d:	8d 44 02 27          	lea    0x27(%edx,%eax,1),%eax
 879dc41:	89 44 24 04          	mov    %eax,0x4(%esp)
 879dc45:	e8 66 8e fa ff       	call   8746ab0 <_ZN5yaSSL13HandShakeBase10set_lengthEi>
 879dc4a:	83 c4 2c             	add    $0x2c,%esp
 879dc4d:	5b                   	pop    %ebx
 879dc4e:	5e                   	pop    %esi
 879dc4f:	5f                   	pop    %edi
 879dc50:	5d                   	pop    %ebp
 879dc51:	c3                   	ret
 879dc52:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 879dc58:	c6 46 2a 20          	movb   $0x20,0x2a(%esi)
 879dc5c:	89 3c 24             	mov    %edi,(%esp)
 879dc5f:	e8 0c 04 fb ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 879dc64:	89 04 24             	mov    %eax,(%esp)
 879dc67:	e8 74 10 fb ff       	call   874ece0 <_ZNK5yaSSL8Security10get_resumeEv>
 879dc6c:	89 04 24             	mov    %eax,(%esp)
 879dc6f:	e8 ac 06 fb ff       	call   874e320 <_ZNK5yaSSL11SSL_SESSION5GetIDEv>
 879dc74:	8d 56 2b             	lea    0x2b(%esi),%edx
 879dc77:	8b 08                	mov    (%eax),%ecx
 879dc79:	89 4e 2b             	mov    %ecx,0x2b(%esi)
 879dc7c:	8b 48 04             	mov    0x4(%eax),%ecx
 879dc7f:	89 4a 04             	mov    %ecx,0x4(%edx)
 879dc82:	8b 48 08             	mov    0x8(%eax),%ecx
 879dc85:	89 4a 08             	mov    %ecx,0x8(%edx)
 879dc88:	8b 48 0c             	mov    0xc(%eax),%ecx
 879dc8b:	89 4a 0c             	mov    %ecx,0xc(%edx)
 879dc8e:	8b 48 10             	mov    0x10(%eax),%ecx
 879dc91:	89 4a 10             	mov    %ecx,0x10(%edx)
 879dc94:	8b 48 14             	mov    0x14(%eax),%ecx
 879dc97:	89 4a 14             	mov    %ecx,0x14(%edx)
 879dc9a:	8b 48 18             	mov    0x18(%eax),%ecx
 879dc9d:	89 4a 18             	mov    %ecx,0x18(%edx)
 879dca0:	8b 40 1c             	mov    0x1c(%eax),%eax
 879dca3:	89 42 1c             	mov    %eax,0x1c(%edx)
 879dca6:	e9 39 ff ff ff       	jmp    879dbe4 <_ZN5yaSSL16buildClientHelloERNS_3SSLERNS_11ClientHelloE+0x74>
 879dcab:	90                   	nop
 879dcac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::buildClientHello @ 0x879db70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::buildClientHello(yaSSL::SSL&, yaSSL::ClientHello&) */

void yaSSL::buildClientHello(SSL *param_1,ClientHello *param_2)

{
  byte bVar1;
  char cVar2;
  Security *pSVar3;
  int iVar4;
  Crypto *this;
  RandomPool *this_00;
  SSL_SESSION *this_01;
  undefined4 *puVar5;
  
  pSVar3 = (Security *)SSL::useSecurity(param_1);
  iVar4 = Security::use_connection(pSVar3);
  *(undefined2 *)(iVar4 + 0x130) = *(undefined2 *)(param_2 + 8);
  this = (Crypto *)SSL::getCrypto(param_1);
  this_00 = (RandomPool *)Crypto::get_random(this);
  RandomPool::Fill(this_00,(uchar *)(param_2 + 10),0x20);
  pSVar3 = (Security *)SSL::getSecurity(param_1);
  cVar2 = Security::get_resuming(pSVar3);
  if (cVar2 == '\0') {
    param_2[0x2a] = (ClientHello)0x0;
  }
  else {
    param_2[0x2a] = (ClientHello)0x20;
    pSVar3 = (Security *)SSL::getSecurity(param_1);
    this_01 = (SSL_SESSION *)Security::get_resume(pSVar3);
    puVar5 = (undefined4 *)SSL_SESSION::GetID(this_01);
    *(undefined4 *)(param_2 + 0x2b) = *puVar5;
    *(undefined4 *)(param_2 + 0x2f) = puVar5[1];
    *(undefined4 *)(param_2 + 0x33) = puVar5[2];
    *(undefined4 *)(param_2 + 0x37) = puVar5[3];
    *(undefined4 *)(param_2 + 0x3b) = puVar5[4];
    *(undefined4 *)(param_2 + 0x3f) = puVar5[5];
    *(undefined4 *)(param_2 + 0x43) = puVar5[6];
    *(undefined4 *)(param_2 + 0x47) = puVar5[7];
  }
  pSVar3 = (Security *)SSL::getSecurity(param_1);
  iVar4 = Security::get_parms(pSVar3);
  bVar1 = *(byte *)(iVar4 + 0x2e);
  *(ushort *)(param_2 + 0x4c) = (ushort)bVar1;
  pSVar3 = (Security *)SSL::getSecurity(param_1);
  iVar4 = Security::get_parms(pSVar3);
  memcpy(param_2 + 0x4e,(void *)(iVar4 + 0x2f),(uint)bVar1);
  param_2[0xce] = (ClientHello)0x1;
  HandShakeBase::set_length
            ((HandShakeBase *)param_2,(byte)param_2[0x2a] + 0x27 + (uint)*(ushort *)(param_2 + 0x4c)
            );
  return;
}

```

---

## buildFinished

```asm
// === 0879eb40 yaSSL::buildFinished  [0x0879eb40-0x879f36f] ===
 879eb40:	55                   	push   %ebp
 879eb41:	89 e5                	mov    %esp,%ebp
 879eb43:	57                   	push   %edi
 879eb44:	56                   	push   %esi
 879eb45:	53                   	push   %ebx
 879eb46:	e8 ad 42 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879eb4b:	81 c3 4d e0 bc 00    	add    $0xbce04d,%ebx
 879eb51:	81 ec 5c 01 00 00    	sub    $0x15c,%esp
 879eb57:	8b 7d 08             	mov    0x8(%ebp),%edi
 879eb5a:	89 3c 24             	mov    %edi,(%esp)
 879eb5d:	e8 2e f5 fa ff       	call   874e090 <_ZNK5yaSSL3SSL9getHashesEv>
 879eb62:	89 04 24             	mov    %eax,(%esp)
 879eb65:	e8 c6 fc fa ff       	call   874e830 <_ZNK5yaSSL9sslHashes7get_MD5Ev>
 879eb6a:	89 44 24 04          	mov    %eax,0x4(%esp)
 879eb6e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 879eb71:	89 85 cc fe ff ff    	mov    %eax,-0x134(%ebp)
 879eb77:	89 04 24             	mov    %eax,(%esp)
 879eb7a:	e8 31 b4 ff ff       	call   8799fb0 <_ZN5yaSSL3MD5C1ERKS0_>
 879eb7f:	89 3c 24             	mov    %edi,(%esp)
 879eb82:	e8 09 f5 fa ff       	call   874e090 <_ZNK5yaSSL3SSL9getHashesEv>
 879eb87:	89 04 24             	mov    %eax,(%esp)
 879eb8a:	e8 b1 fc fa ff       	call   874e840 <_ZNK5yaSSL9sslHashes7get_SHAEv>
 879eb8f:	8d 55 d8             	lea    -0x28(%ebp),%edx
 879eb92:	89 95 d0 fe ff ff    	mov    %edx,-0x130(%ebp)
 879eb98:	89 14 24             	mov    %edx,(%esp)
 879eb9b:	89 44 24 04          	mov    %eax,0x4(%esp)
 879eb9f:	e8 6c b3 ff ff       	call   8799f10 <_ZN5yaSSL3SHAC1ERKS0_>
 879eba4:	89 3c 24             	mov    %edi,(%esp)
 879eba7:	e8 f4 fd fa ff       	call   874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>
 879ebac:	84 c0                	test   %al,%al
 879ebae:	0f 85 cc 06 00 00    	jne    879f280 <_ZN5yaSSL13buildFinishedERNS_3SSLERNS_8FinishedEPKh+0x740>
 879ebb4:	89 3c 24             	mov    %edi,(%esp)
 879ebb7:	e8 b4 f4 fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 879ebbc:	89 04 24             	mov    %eax,(%esp)
 879ebbf:	e8 9c fd fa ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 879ebc4:	8d 8d 50 ff ff ff    	lea    -0xb0(%ebp),%ecx
 879ebca:	89 8d c8 fe ff ff    	mov    %ecx,-0x138(%ebp)
 879ebd0:	8b 4d 10             	mov    0x10(%ebp),%ecx
 879ebd3:	8d 70 04             	lea    0x4(%eax),%esi
 879ebd6:	89 c2                	mov    %eax,%edx
 879ebd8:	8b 01                	mov    (%ecx),%eax
 879ebda:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 879ebe0:	8b 42 04             	mov    0x4(%edx),%eax
 879ebe3:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 879ebe9:	8b 46 04             	mov    0x4(%esi),%eax
 879ebec:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 879ebf2:	8b 46 08             	mov    0x8(%esi),%eax
 879ebf5:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
 879ebfb:	8b 46 0c             	mov    0xc(%esi),%eax
 879ebfe:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 879ec04:	8b 46 10             	mov    0x10(%esi),%eax
 879ec07:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 879ec0d:	8b 46 14             	mov    0x14(%esi),%eax
 879ec10:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 879ec16:	8b 46 18             	mov    0x18(%esi),%eax
 879ec19:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 879ec1f:	8b 46 1c             	mov    0x1c(%esi),%eax
 879ec22:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 879ec28:	8b 46 20             	mov    0x20(%esi),%eax
 879ec2b:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 879ec31:	8b 46 24             	mov    0x24(%esi),%eax
 879ec34:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 879ec3a:	8b 46 28             	mov    0x28(%esi),%eax
 879ec3d:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 879ec43:	8b 46 2c             	mov    0x2c(%esi),%eax
 879ec46:	c6 45 84 36          	movb   $0x36,-0x7c(%ebp)
 879ec4a:	c6 45 85 36          	movb   $0x36,-0x7b(%ebp)
 879ec4e:	c6 45 86 36          	movb   $0x36,-0x7a(%ebp)
 879ec52:	89 45 80             	mov    %eax,-0x80(%ebp)
 879ec55:	c6 45 87 36          	movb   $0x36,-0x79(%ebp)
 879ec59:	c6 45 88 36          	movb   $0x36,-0x78(%ebp)
 879ec5d:	c6 45 89 36          	movb   $0x36,-0x77(%ebp)
 879ec61:	c6 45 8a 36          	movb   $0x36,-0x76(%ebp)
 879ec65:	c6 45 8b 36          	movb   $0x36,-0x75(%ebp)
 879ec69:	c6 45 8c 36          	movb   $0x36,-0x74(%ebp)
 879ec6d:	c6 45 8d 36          	movb   $0x36,-0x73(%ebp)
 879ec71:	c6 45 8e 36          	movb   $0x36,-0x72(%ebp)
 879ec75:	c6 45 8f 36          	movb   $0x36,-0x71(%ebp)
 879ec79:	c6 45 90 36          	movb   $0x36,-0x70(%ebp)
 879ec7d:	c6 45 91 36          	movb   $0x36,-0x6f(%ebp)
 879ec81:	c6 45 92 36          	movb   $0x36,-0x6e(%ebp)
 879ec85:	c6 45 93 36          	movb   $0x36,-0x6d(%ebp)
 879ec89:	c6 45 94 36          	movb   $0x36,-0x6c(%ebp)
 879ec8d:	c6 45 95 36          	movb   $0x36,-0x6b(%ebp)
 879ec91:	c6 45 96 36          	movb   $0x36,-0x6a(%ebp)
 879ec95:	c6 45 97 36          	movb   $0x36,-0x69(%ebp)
 879ec99:	c6 45 98 36          	movb   $0x36,-0x68(%ebp)
 879ec9d:	c6 45 99 36          	movb   $0x36,-0x67(%ebp)
 879eca1:	c6 45 9a 36          	movb   $0x36,-0x66(%ebp)
 879eca5:	c6 45 9b 36          	movb   $0x36,-0x65(%ebp)
 879eca9:	c6 45 9c 36          	movb   $0x36,-0x64(%ebp)
 879ecad:	c6 45 9d 36          	movb   $0x36,-0x63(%ebp)
 879ecb1:	c6 45 9e 36          	movb   $0x36,-0x62(%ebp)
 879ecb5:	c6 45 9f 36          	movb   $0x36,-0x61(%ebp)
 879ecb9:	c6 45 a0 36          	movb   $0x36,-0x60(%ebp)
 879ecbd:	c6 45 a1 36          	movb   $0x36,-0x5f(%ebp)
 879ecc1:	c6 45 a2 36          	movb   $0x36,-0x5e(%ebp)
 879ecc5:	c6 45 a3 36          	movb   $0x36,-0x5d(%ebp)
 879ecc9:	c6 45 a4 36          	movb   $0x36,-0x5c(%ebp)
 879eccd:	c6 45 a5 36          	movb   $0x36,-0x5b(%ebp)
 879ecd1:	c6 45 a6 36          	movb   $0x36,-0x5a(%ebp)
 879ecd5:	c6 45 a7 36          	movb   $0x36,-0x59(%ebp)
 879ecd9:	c6 45 a8 36          	movb   $0x36,-0x58(%ebp)
 879ecdd:	c6 45 a9 36          	movb   $0x36,-0x57(%ebp)
 879ece1:	c6 45 aa 36          	movb   $0x36,-0x56(%ebp)
 879ece5:	c6 45 ab 36          	movb   $0x36,-0x55(%ebp)
 879ece9:	89 95 b8 fe ff ff    	mov    %edx,-0x148(%ebp)
 879ecef:	c6 45 ac 36          	movb   $0x36,-0x54(%ebp)
 879ecf3:	c6 45 ad 36          	movb   $0x36,-0x53(%ebp)
 879ecf7:	c6 45 ae 36          	movb   $0x36,-0x52(%ebp)
 879ecfb:	c6 45 af 36          	movb   $0x36,-0x51(%ebp)
 879ecff:	c6 45 b0 36          	movb   $0x36,-0x50(%ebp)
 879ed03:	c6 45 b1 36          	movb   $0x36,-0x4f(%ebp)
 879ed07:	c6 45 b2 36          	movb   $0x36,-0x4e(%ebp)
 879ed0b:	c6 45 b3 36          	movb   $0x36,-0x4d(%ebp)
 879ed0f:	89 3c 24             	mov    %edi,(%esp)
 879ed12:	e8 c9 f5 fa ff       	call   874e2e0 <_ZN5yaSSL3SSL9useHashesEv>
 879ed17:	89 04 24             	mov    %eax,(%esp)
 879ed1a:	e8 51 fb fa ff       	call   874e870 <_ZN5yaSSL9sslHashes7use_MD5Ev>
 879ed1f:	8b 08                	mov    (%eax),%ecx
 879ed21:	89 04 24             	mov    %eax,(%esp)
 879ed24:	c7 44 24 0c 64 00 00 	movl   $0x64,0xc(%esp)
 879ed2b:	00 
 879ed2c:	89 8d d4 fe ff ff    	mov    %ecx,-0x12c(%ebp)
 879ed32:	8b 8d c8 fe ff ff    	mov    -0x138(%ebp),%ecx
 879ed38:	8b 85 d4 fe ff ff    	mov    -0x12c(%ebp),%eax
 879ed3e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 879ed42:	8d 4d b4             	lea    -0x4c(%ebp),%ecx
 879ed45:	89 8d c4 fe ff ff    	mov    %ecx,-0x13c(%ebp)
 879ed4b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879ed4f:	ff 50 04             	call   *0x4(%eax)
 879ed52:	8b 95 b8 fe ff ff    	mov    -0x148(%ebp),%edx
 879ed58:	8d 8d e0 fe ff ff    	lea    -0x120(%ebp),%ecx
 879ed5e:	89 8d c0 fe ff ff    	mov    %ecx,-0x140(%ebp)
 879ed64:	8b 42 04             	mov    0x4(%edx),%eax
 879ed67:	89 85 e0 fe ff ff    	mov    %eax,-0x120(%ebp)
 879ed6d:	8b 46 04             	mov    0x4(%esi),%eax
 879ed70:	89 85 e4 fe ff ff    	mov    %eax,-0x11c(%ebp)
 879ed76:	8b 46 08             	mov    0x8(%esi),%eax
 879ed79:	89 85 e8 fe ff ff    	mov    %eax,-0x118(%ebp)
 879ed7f:	8b 46 0c             	mov    0xc(%esi),%eax
 879ed82:	89 85 ec fe ff ff    	mov    %eax,-0x114(%ebp)
 879ed88:	8b 46 10             	mov    0x10(%esi),%eax
 879ed8b:	89 85 f0 fe ff ff    	mov    %eax,-0x110(%ebp)
 879ed91:	8b 46 14             	mov    0x14(%esi),%eax
 879ed94:	89 85 f4 fe ff ff    	mov    %eax,-0x10c(%ebp)
 879ed9a:	8b 46 18             	mov    0x18(%esi),%eax
 879ed9d:	89 85 f8 fe ff ff    	mov    %eax,-0x108(%ebp)
 879eda3:	8b 46 1c             	mov    0x1c(%esi),%eax
 879eda6:	89 85 fc fe ff ff    	mov    %eax,-0x104(%ebp)
 879edac:	8b 46 20             	mov    0x20(%esi),%eax
 879edaf:	89 85 00 ff ff ff    	mov    %eax,-0x100(%ebp)
 879edb5:	8b 46 24             	mov    0x24(%esi),%eax
 879edb8:	89 85 04 ff ff ff    	mov    %eax,-0xfc(%ebp)
 879edbe:	8b 46 28             	mov    0x28(%esi),%eax
 879edc1:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
 879edc7:	8b 46 2c             	mov    0x2c(%esi),%eax
 879edca:	c6 85 10 ff ff ff 5c 	movb   $0x5c,-0xf0(%ebp)
 879edd1:	c6 85 11 ff ff ff 5c 	movb   $0x5c,-0xef(%ebp)
 879edd8:	c6 85 12 ff ff ff 5c 	movb   $0x5c,-0xee(%ebp)
 879eddf:	89 85 0c ff ff ff    	mov    %eax,-0xf4(%ebp)
 879ede5:	c6 85 13 ff ff ff 5c 	movb   $0x5c,-0xed(%ebp)
 879edec:	c6 85 14 ff ff ff 5c 	movb   $0x5c,-0xec(%ebp)
 879edf3:	c6 85 15 ff ff ff 5c 	movb   $0x5c,-0xeb(%ebp)
 879edfa:	c6 85 16 ff ff ff 5c 	movb   $0x5c,-0xea(%ebp)
 879ee01:	c6 85 17 ff ff ff 5c 	movb   $0x5c,-0xe9(%ebp)
 879ee08:	c6 85 18 ff ff ff 5c 	movb   $0x5c,-0xe8(%ebp)
 879ee0f:	c6 85 19 ff ff ff 5c 	movb   $0x5c,-0xe7(%ebp)
 879ee16:	c6 85 1a ff ff ff 5c 	movb   $0x5c,-0xe6(%ebp)
 879ee1d:	c6 85 1b ff ff ff 5c 	movb   $0x5c,-0xe5(%ebp)
 879ee24:	c6 85 1c ff ff ff 5c 	movb   $0x5c,-0xe4(%ebp)
 879ee2b:	c6 85 1d ff ff ff 5c 	movb   $0x5c,-0xe3(%ebp)
 879ee32:	c6 85 1e ff ff ff 5c 	movb   $0x5c,-0xe2(%ebp)
 879ee39:	c6 85 1f ff ff ff 5c 	movb   $0x5c,-0xe1(%ebp)
 879ee40:	c6 85 20 ff ff ff 5c 	movb   $0x5c,-0xe0(%ebp)
 879ee47:	c6 85 21 ff ff ff 5c 	movb   $0x5c,-0xdf(%ebp)
 879ee4e:	c6 85 22 ff ff ff 5c 	movb   $0x5c,-0xde(%ebp)
 879ee55:	c6 85 23 ff ff ff 5c 	movb   $0x5c,-0xdd(%ebp)
 879ee5c:	c6 85 24 ff ff ff 5c 	movb   $0x5c,-0xdc(%ebp)
 879ee63:	c6 85 25 ff ff ff 5c 	movb   $0x5c,-0xdb(%ebp)
 879ee6a:	c6 85 26 ff ff ff 5c 	movb   $0x5c,-0xda(%ebp)
 879ee71:	c6 85 27 ff ff ff 5c 	movb   $0x5c,-0xd9(%ebp)
 879ee78:	c6 85 28 ff ff ff 5c 	movb   $0x5c,-0xd8(%ebp)
 879ee7f:	c6 85 29 ff ff ff 5c 	movb   $0x5c,-0xd7(%ebp)
 879ee86:	c6 85 2a ff ff ff 5c 	movb   $0x5c,-0xd6(%ebp)
 879ee8d:	c6 85 2b ff ff ff 5c 	movb   $0x5c,-0xd5(%ebp)
 879ee94:	c6 85 2c ff ff ff 5c 	movb   $0x5c,-0xd4(%ebp)
 879ee9b:	c6 85 2d ff ff ff 5c 	movb   $0x5c,-0xd3(%ebp)
 879eea2:	c6 85 2e ff ff ff 5c 	movb   $0x5c,-0xd2(%ebp)
 879eea9:	c6 85 2f ff ff ff 5c 	movb   $0x5c,-0xd1(%ebp)
 879eeb0:	c6 85 30 ff ff ff 5c 	movb   $0x5c,-0xd0(%ebp)
 879eeb7:	c6 85 31 ff ff ff 5c 	movb   $0x5c,-0xcf(%ebp)
 879eebe:	c6 85 32 ff ff ff 5c 	movb   $0x5c,-0xce(%ebp)
 879eec5:	c6 85 33 ff ff ff 5c 	movb   $0x5c,-0xcd(%ebp)
 879eecc:	c6 85 34 ff ff ff 5c 	movb   $0x5c,-0xcc(%ebp)
 879eed3:	c6 85 35 ff ff ff 5c 	movb   $0x5c,-0xcb(%ebp)
 879eeda:	c6 85 36 ff ff ff 5c 	movb   $0x5c,-0xca(%ebp)
 879eee1:	c6 85 37 ff ff ff 5c 	movb   $0x5c,-0xc9(%ebp)
 879eee8:	c6 85 38 ff ff ff 5c 	movb   $0x5c,-0xc8(%ebp)
 879eeef:	c6 85 39 ff ff ff 5c 	movb   $0x5c,-0xc7(%ebp)
 879eef6:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 879eef9:	c6 85 3a ff ff ff 5c 	movb   $0x5c,-0xc6(%ebp)
 879ef00:	c6 85 3b ff ff ff 5c 	movb   $0x5c,-0xc5(%ebp)
 879ef07:	c6 85 3c ff ff ff 5c 	movb   $0x5c,-0xc4(%ebp)
 879ef0e:	89 85 40 ff ff ff    	mov    %eax,-0xc0(%ebp)
 879ef14:	8b 45 b8             	mov    -0x48(%ebp),%eax
 879ef17:	c6 85 3d ff ff ff 5c 	movb   $0x5c,-0xc3(%ebp)
 879ef1e:	c6 85 3e ff ff ff 5c 	movb   $0x5c,-0xc2(%ebp)
 879ef25:	c6 85 3f ff ff ff 5c 	movb   $0x5c,-0xc1(%ebp)
 879ef2c:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 879ef32:	8b 45 bc             	mov    -0x44(%ebp),%eax
 879ef35:	89 3c 24             	mov    %edi,(%esp)
 879ef38:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 879ef3e:	8b 45 c0             	mov    -0x40(%ebp),%eax
 879ef41:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 879ef47:	e8 94 f3 fa ff       	call   874e2e0 <_ZN5yaSSL3SSL9useHashesEv>
 879ef4c:	89 04 24             	mov    %eax,(%esp)
 879ef4f:	e8 1c f9 fa ff       	call   874e870 <_ZN5yaSSL9sslHashes7use_MD5Ev>
 879ef54:	89 c6                	mov    %eax,%esi
 879ef56:	8b 00                	mov    (%eax),%eax
 879ef58:	8b 40 04             	mov    0x4(%eax),%eax
 879ef5b:	89 85 bc fe ff ff    	mov    %eax,-0x144(%ebp)
 879ef61:	8b 45 0c             	mov    0xc(%ebp),%eax
 879ef64:	89 04 24             	mov    %eax,(%esp)
 879ef67:	e8 74 82 fa ff       	call   87471e0 <_ZN5yaSSL8Finished7set_md5Ev>
 879ef6c:	8b 95 c0 fe ff ff    	mov    -0x140(%ebp),%edx
 879ef72:	89 34 24             	mov    %esi,(%esp)
 879ef75:	c7 44 24 0c 70 00 00 	movl   $0x70,0xc(%esp)
 879ef7c:	00 
 879ef7d:	89 54 24 08          	mov    %edx,0x8(%esp)
 879ef81:	89 44 24 04          	mov    %eax,0x4(%esp)
 879ef85:	ff 95 bc fe ff ff    	call   *-0x144(%ebp)
 879ef8b:	89 3c 24             	mov    %edi,(%esp)
 879ef8e:	e8 dd f0 fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 879ef93:	89 04 24             	mov    %eax,(%esp)
 879ef96:	e8 c5 f9 fa ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 879ef9b:	8b 4d 10             	mov    0x10(%ebp),%ecx
 879ef9e:	8d 70 04             	lea    0x4(%eax),%esi
 879efa1:	89 c2                	mov    %eax,%edx
 879efa3:	8b 01                	mov    (%ecx),%eax
 879efa5:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 879efab:	8b 42 04             	mov    0x4(%edx),%eax
 879efae:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 879efb4:	8b 46 04             	mov    0x4(%esi),%eax
 879efb7:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 879efbd:	8b 46 08             	mov    0x8(%esi),%eax
 879efc0:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
 879efc6:	8b 46 0c             	mov    0xc(%esi),%eax
 879efc9:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 879efcf:	8b 46 10             	mov    0x10(%esi),%eax
 879efd2:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 879efd8:	8b 46 14             	mov    0x14(%esi),%eax
 879efdb:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 879efe1:	8b 46 18             	mov    0x18(%esi),%eax
 879efe4:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 879efea:	8b 46 1c             	mov    0x1c(%esi),%eax
 879efed:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 879eff3:	8b 46 20             	mov    0x20(%esi),%eax
 879eff6:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 879effc:	8b 46 24             	mov    0x24(%esi),%eax
 879efff:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 879f005:	8b 46 28             	mov    0x28(%esi),%eax
 879f008:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 879f00e:	8b 46 2c             	mov    0x2c(%esi),%eax
 879f011:	89 45 80             	mov    %eax,-0x80(%ebp)
 879f014:	8b 83 c8 08 9a ff    	mov    -0x65f738(%ebx),%eax
 879f01a:	89 45 84             	mov    %eax,-0x7c(%ebp)
 879f01d:	8b 83 cc 08 9a ff    	mov    -0x65f734(%ebx),%eax
 879f023:	89 45 88             	mov    %eax,-0x78(%ebp)
 879f026:	8b 83 d0 08 9a ff    	mov    -0x65f730(%ebx),%eax
 879f02c:	89 45 8c             	mov    %eax,-0x74(%ebp)
 879f02f:	8b 83 d4 08 9a ff    	mov    -0x65f72c(%ebx),%eax
 879f035:	89 45 90             	mov    %eax,-0x70(%ebp)
 879f038:	8b 83 d8 08 9a ff    	mov    -0x65f728(%ebx),%eax
 879f03e:	89 95 b8 fe ff ff    	mov    %edx,-0x148(%ebp)
 879f044:	89 3c 24             	mov    %edi,(%esp)
 879f047:	89 45 94             	mov    %eax,-0x6c(%ebp)
 879f04a:	8b 83 dc 08 9a ff    	mov    -0x65f724(%ebx),%eax
 879f050:	89 45 98             	mov    %eax,-0x68(%ebp)
 879f053:	8b 83 e0 08 9a ff    	mov    -0x65f720(%ebx),%eax
 879f059:	89 45 9c             	mov    %eax,-0x64(%ebp)
 879f05c:	8b 83 e4 08 9a ff    	mov    -0x65f71c(%ebx),%eax
 879f062:	89 45 a0             	mov    %eax,-0x60(%ebp)
 879f065:	8b 83 e8 08 9a ff    	mov    -0x65f718(%ebx),%eax
 879f06b:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 879f06e:	8b 83 ec 08 9a ff    	mov    -0x65f714(%ebx),%eax
 879f074:	89 45 a8             	mov    %eax,-0x58(%ebp)
 879f077:	e8 64 f2 fa ff       	call   874e2e0 <_ZN5yaSSL3SSL9useHashesEv>
 879f07c:	89 04 24             	mov    %eax,(%esp)
 879f07f:	e8 fc f7 fa ff       	call   874e880 <_ZN5yaSSL9sslHashes7use_SHAEv>
 879f084:	89 c1                	mov    %eax,%ecx
 879f086:	8b 00                	mov    (%eax),%eax
 879f088:	89 0c 24             	mov    %ecx,(%esp)
 879f08b:	c7 44 24 0c 5c 00 00 	movl   $0x5c,0xc(%esp)
 879f092:	00 
 879f093:	89 85 d4 fe ff ff    	mov    %eax,-0x12c(%ebp)
 879f099:	8b 85 c8 fe ff ff    	mov    -0x138(%ebp),%eax
 879f09f:	8b 8d d4 fe ff ff    	mov    -0x12c(%ebp),%ecx
 879f0a5:	89 44 24 08          	mov    %eax,0x8(%esp)
 879f0a9:	8b 85 c4 fe ff ff    	mov    -0x13c(%ebp),%eax
 879f0af:	89 44 24 04          	mov    %eax,0x4(%esp)
 879f0b3:	ff 51 04             	call   *0x4(%ecx)
 879f0b6:	8b 95 b8 fe ff ff    	mov    -0x148(%ebp),%edx
 879f0bc:	8b 42 04             	mov    0x4(%edx),%eax
 879f0bf:	89 85 e0 fe ff ff    	mov    %eax,-0x120(%ebp)
 879f0c5:	8b 46 04             	mov    0x4(%esi),%eax
 879f0c8:	89 85 e4 fe ff ff    	mov    %eax,-0x11c(%ebp)
 879f0ce:	8b 46 08             	mov    0x8(%esi),%eax
 879f0d1:	89 85 e8 fe ff ff    	mov    %eax,-0x118(%ebp)
 879f0d7:	8b 46 0c             	mov    0xc(%esi),%eax
 879f0da:	89 85 ec fe ff ff    	mov    %eax,-0x114(%ebp)
 879f0e0:	8b 46 10             	mov    0x10(%esi),%eax
 879f0e3:	89 85 f0 fe ff ff    	mov    %eax,-0x110(%ebp)
 879f0e9:	8b 46 14             	mov    0x14(%esi),%eax
 879f0ec:	89 85 f4 fe ff ff    	mov    %eax,-0x10c(%ebp)
 879f0f2:	8b 46 18             	mov    0x18(%esi),%eax
 879f0f5:	89 85 f8 fe ff ff    	mov    %eax,-0x108(%ebp)
 879f0fb:	8b 46 1c             	mov    0x1c(%esi),%eax
 879f0fe:	89 85 fc fe ff ff    	mov    %eax,-0x104(%ebp)
 879f104:	8b 46 20             	mov    0x20(%esi),%eax
 879f107:	89 85 00 ff ff ff    	mov    %eax,-0x100(%ebp)
 879f10d:	8b 46 24             	mov    0x24(%esi),%eax
 879f110:	89 85 04 ff ff ff    	mov    %eax,-0xfc(%ebp)
 879f116:	8b 46 28             	mov    0x28(%esi),%eax
 879f119:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
 879f11f:	8b 46 2c             	mov    0x2c(%esi),%eax
 879f122:	89 85 0c ff ff ff    	mov    %eax,-0xf4(%ebp)
 879f128:	8b 83 08 09 9a ff    	mov    -0x65f6f8(%ebx),%eax
 879f12e:	89 85 10 ff ff ff    	mov    %eax,-0xf0(%ebp)
 879f134:	8b 83 0c 09 9a ff    	mov    -0x65f6f4(%ebx),%eax
 879f13a:	89 85 14 ff ff ff    	mov    %eax,-0xec(%ebp)
 879f140:	8b 83 10 09 9a ff    	mov    -0x65f6f0(%ebx),%eax
 879f146:	89 85 18 ff ff ff    	mov    %eax,-0xe8(%ebp)
 879f14c:	8b 83 14 09 9a ff    	mov    -0x65f6ec(%ebx),%eax
 879f152:	89 85 1c ff ff ff    	mov    %eax,-0xe4(%ebp)
 879f158:	8b 83 18 09 9a ff    	mov    -0x65f6e8(%ebx),%eax
 879f15e:	89 85 20 ff ff ff    	mov    %eax,-0xe0(%ebp)
 879f164:	8b 83 1c 09 9a ff    	mov    -0x65f6e4(%ebx),%eax
 879f16a:	89 3c 24             	mov    %edi,(%esp)
 879f16d:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
 879f173:	8b 83 20 09 9a ff    	mov    -0x65f6e0(%ebx),%eax
 879f179:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 879f17f:	8b 83 24 09 9a ff    	mov    -0x65f6dc(%ebx),%eax
 879f185:	89 85 2c ff ff ff    	mov    %eax,-0xd4(%ebp)
 879f18b:	8b 83 28 09 9a ff    	mov    -0x65f6d8(%ebx),%eax
 879f191:	89 85 30 ff ff ff    	mov    %eax,-0xd0(%ebp)
 879f197:	8b 83 2c 09 9a ff    	mov    -0x65f6d4(%ebx),%eax
 879f19d:	89 85 34 ff ff ff    	mov    %eax,-0xcc(%ebp)
 879f1a3:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 879f1a6:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
 879f1ac:	8b 45 b8             	mov    -0x48(%ebp),%eax
 879f1af:	89 85 3c ff ff ff    	mov    %eax,-0xc4(%ebp)
 879f1b5:	8b 45 bc             	mov    -0x44(%ebp),%eax
 879f1b8:	89 85 40 ff ff ff    	mov    %eax,-0xc0(%ebp)
 879f1be:	8b 45 c0             	mov    -0x40(%ebp),%eax
 879f1c1:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 879f1c7:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 879f1ca:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 879f1d0:	e8 0b f1 fa ff       	call   874e2e0 <_ZN5yaSSL3SSL9useHashesEv>
 879f1d5:	89 04 24             	mov    %eax,(%esp)
 879f1d8:	e8 a3 f6 fa ff       	call   874e880 <_ZN5yaSSL9sslHashes7use_SHAEv>
 879f1dd:	89 c6                	mov    %eax,%esi
 879f1df:	8b 00                	mov    (%eax),%eax
 879f1e1:	8b 40 04             	mov    0x4(%eax),%eax
 879f1e4:	89 85 d4 fe ff ff    	mov    %eax,-0x12c(%ebp)
 879f1ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 879f1ed:	89 04 24             	mov    %eax,(%esp)
 879f1f0:	e8 fb 7f fa ff       	call   87471f0 <_ZN5yaSSL8Finished7set_shaEv>
 879f1f5:	8b 95 c0 fe ff ff    	mov    -0x140(%ebp),%edx
 879f1fb:	c7 44 24 0c 6c 00 00 	movl   $0x6c,0xc(%esp)
 879f202:	00 
 879f203:	89 34 24             	mov    %esi,(%esp)
 879f206:	89 54 24 08          	mov    %edx,0x8(%esp)
 879f20a:	89 44 24 04          	mov    %eax,0x4(%esp)
 879f20e:	ff 95 d4 fe ff ff    	call   *-0x12c(%ebp)
 879f214:	89 3c 24             	mov    %edi,(%esp)
 879f217:	e8 c4 f0 fa ff       	call   874e2e0 <_ZN5yaSSL3SSL9useHashesEv>
 879f21c:	89 04 24             	mov    %eax,(%esp)
 879f21f:	e8 4c f6 fa ff       	call   874e870 <_ZN5yaSSL9sslHashes7use_MD5Ev>
 879f224:	8b 8d cc fe ff ff    	mov    -0x134(%ebp),%ecx
 879f22a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879f22e:	89 04 24             	mov    %eax,(%esp)
 879f231:	e8 3a ad ff ff       	call   8799f70 <_ZN5yaSSL3MD5aSERKS0_>
 879f236:	89 3c 24             	mov    %edi,(%esp)
 879f239:	e8 a2 f0 fa ff       	call   874e2e0 <_ZN5yaSSL3SSL9useHashesEv>
 879f23e:	89 04 24             	mov    %eax,(%esp)
 879f241:	e8 3a f6 fa ff       	call   874e880 <_ZN5yaSSL9sslHashes7use_SHAEv>
 879f246:	8b 95 d0 fe ff ff    	mov    -0x130(%ebp),%edx
 879f24c:	89 54 24 04          	mov    %edx,0x4(%esp)
 879f250:	89 04 24             	mov    %eax,(%esp)
 879f253:	e8 78 ac ff ff       	call   8799ed0 <_ZN5yaSSL3SHAaSERKS0_>
 879f258:	8b 8d d0 fe ff ff    	mov    -0x130(%ebp),%ecx
 879f25e:	89 0c 24             	mov    %ecx,(%esp)
 879f261:	e8 4a 9a ff ff       	call   8798cb0 <_ZN5yaSSL3SHAD1Ev>
 879f266:	8b 85 cc fe ff ff    	mov    -0x134(%ebp),%eax
 879f26c:	89 04 24             	mov    %eax,(%esp)
 879f26f:	e8 cc 9a ff ff       	call   8798d40 <_ZN5yaSSL3MD5D1Ev>
 879f274:	81 c4 5c 01 00 00    	add    $0x15c,%esp
 879f27a:	5b                   	pop    %ebx
 879f27b:	5e                   	pop    %esi
 879f27c:	5f                   	pop    %edi
 879f27d:	5d                   	pop    %ebp
 879f27e:	c3                   	ret
 879f27f:	90                   	nop
 879f280:	89 3c 24             	mov    %edi,(%esp)
 879f283:	e8 58 f0 fa ff       	call   874e2e0 <_ZN5yaSSL3SSL9useHashesEv>
 879f288:	89 04 24             	mov    %eax,(%esp)
 879f28b:	e8 e0 f5 fa ff       	call   874e870 <_ZN5yaSSL9sslHashes7use_MD5Ev>
 879f290:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 879f293:	89 95 b8 fe ff ff    	mov    %edx,-0x148(%ebp)
 879f299:	8b 08                	mov    (%eax),%ecx
 879f29b:	89 54 24 04          	mov    %edx,0x4(%esp)
 879f29f:	89 04 24             	mov    %eax,(%esp)
 879f2a2:	ff 11                	call   *(%ecx)
 879f2a4:	89 3c 24             	mov    %edi,(%esp)
 879f2a7:	e8 34 f0 fa ff       	call   874e2e0 <_ZN5yaSSL3SSL9useHashesEv>
 879f2ac:	89 04 24             	mov    %eax,(%esp)
 879f2af:	e8 cc f5 fa ff       	call   874e880 <_ZN5yaSSL9sslHashes7use_SHAEv>
 879f2b4:	8d 4d c4             	lea    -0x3c(%ebp),%ecx
 879f2b7:	8b 30                	mov    (%eax),%esi
 879f2b9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879f2bd:	89 04 24             	mov    %eax,(%esp)
 879f2c0:	ff 16                	call   *(%esi)
 879f2c2:	8b 4d 10             	mov    0x10(%ebp),%ecx
 879f2c5:	8d 83 a8 08 9a ff    	lea    -0x65f758(%ebx),%eax
 879f2cb:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 879f2d2:	00 
 879f2d3:	8d b3 48 09 9a ff    	lea    -0x65f6b8(%ebx),%esi
 879f2d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 879f2dd:	89 0c 24             	mov    %ecx,(%esp)
 879f2e0:	e8 db f5 8d ff       	call   807e8c0 <strncmp@plt>
 879f2e5:	89 3c 24             	mov    %edi,(%esp)
 879f2e8:	85 c0                	test   %eax,%eax
 879f2ea:	8d 83 38 09 9a ff    	lea    -0x65f6c8(%ebx),%eax
 879f2f0:	0f 44 f0             	cmove  %eax,%esi
 879f2f3:	e8 78 ed fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 879f2f8:	89 04 24             	mov    %eax,(%esp)
 879f2fb:	e8 60 f6 fa ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 879f300:	89 85 d4 fe ff ff    	mov    %eax,-0x12c(%ebp)
 879f306:	8b 45 0c             	mov    0xc(%ebp),%eax
 879f309:	89 04 24             	mov    %eax,(%esp)
 879f30c:	e8 cf 7e fa ff       	call   87471e0 <_ZN5yaSSL8Finished7set_md5Ev>
 879f311:	8b 95 b8 fe ff ff    	mov    -0x148(%ebp),%edx
 879f317:	c7 44 24 1c 24 00 00 	movl   $0x24,0x1c(%esp)
 879f31e:	00 
 879f31f:	c7 44 24 14 0f 00 00 	movl   $0xf,0x14(%esp)
 879f326:	00 
 879f327:	89 74 24 10          	mov    %esi,0x10(%esp)
 879f32b:	89 54 24 18          	mov    %edx,0x18(%esp)
 879f32f:	8b 95 d4 fe ff ff    	mov    -0x12c(%ebp),%edx
 879f335:	c7 44 24 0c 30 00 00 	movl   $0x30,0xc(%esp)
 879f33c:	00 
 879f33d:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 879f344:	00 
 879f345:	89 04 24             	mov    %eax,(%esp)
 879f348:	83 c2 04             	add    $0x4,%edx
 879f34b:	89 54 24 08          	mov    %edx,0x8(%esp)
 879f34f:	e8 2c f6 ff ff       	call   879e980 <_ZN5yaSSL3PRFEPhjPKhjS2_jS2_j>
 879f354:	8b 55 0c             	mov    0xc(%ebp),%edx
 879f357:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 879f35e:	00 
 879f35f:	89 14 24             	mov    %edx,(%esp)
 879f362:	e8 49 77 fa ff       	call   8746ab0 <_ZN5yaSSL13HandShakeBase10set_lengthEi>
 879f367:	e9 a8 fe ff ff       	jmp    879f214 <_ZN5yaSSL13buildFinishedERNS_3SSLERNS_8FinishedEPKh+0x6d4>
 879f36c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::buildFinished @ 0x879eb40

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::buildFinished(yaSSL::SSL&, yaSSL::Finished&, unsigned char const*) */

void yaSSL::buildFinished(SSL *param_1,Finished *param_2,uchar *param_3)

{
  code *pcVar1;
  char cVar2;
  sslHashes *psVar3;
  MD5 *pMVar4;
  SHA *pSVar5;
  Security *pSVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uchar *puVar11;
  uchar *puVar12;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  char local_f4 [40];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  char local_5c [12];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40 [5];
  SHA local_2c [8];
  MD5 local_24 [16];
  undefined4 uStack_14;
  
  uStack_14 = 0x879eb4b;
  psVar3 = (sslHashes *)SSL::getHashes(param_1);
  pMVar4 = (MD5 *)sslHashes::get_MD5(psVar3);
  MD5::MD5(local_24,pMVar4);
  psVar3 = (sslHashes *)SSL::getHashes(param_1);
  pSVar5 = (SHA *)sslHashes::get_SHA(psVar3);
  SHA::SHA(local_2c,pSVar5);
  cVar2 = SSL::isTLS(param_1);
  if (cVar2 == '\0') {
    pSVar6 = (Security *)SSL::getSecurity(param_1);
    iVar7 = Security::get_connection(pSVar6);
    local_b4 = *(undefined4 *)param_3;
    local_b0 = *(undefined4 *)(iVar7 + 4);
    local_ac = *(undefined4 *)(iVar7 + 8);
    local_a8 = *(undefined4 *)(iVar7 + 0xc);
    local_a4 = *(undefined4 *)(iVar7 + 0x10);
    local_a0 = *(undefined4 *)(iVar7 + 0x14);
    local_9c = *(undefined4 *)(iVar7 + 0x18);
    local_98 = *(undefined4 *)(iVar7 + 0x1c);
    local_94 = *(undefined4 *)(iVar7 + 0x20);
    local_90 = *(undefined4 *)(iVar7 + 0x24);
    local_8c = *(undefined4 *)(iVar7 + 0x28);
    local_88 = *(undefined4 *)(iVar7 + 0x2c);
    local_84 = *(undefined4 *)(iVar7 + 0x30);
    local_80 = 0x36363636;
    local_7c = 0x36363636;
    local_78 = 0x36363636;
    local_74 = 0x36363636;
    local_70 = 0x36363636;
    local_6c = 0x36363636;
    local_68 = 0x36363636;
    local_64 = 0x36363636;
    local_60 = 0x36363636;
    builtin_strncpy(local_5c,"666666666666",0xc);
    psVar3 = (sslHashes *)SSL::useHashes(param_1);
    piVar8 = (int *)sslHashes::use_MD5(psVar3);
    (**(code **)(*piVar8 + 4))(piVar8,&local_50,&local_b4,100);
    local_124 = *(undefined4 *)(iVar7 + 4);
    local_120 = *(undefined4 *)(iVar7 + 8);
    local_11c = *(undefined4 *)(iVar7 + 0xc);
    local_118 = *(undefined4 *)(iVar7 + 0x10);
    local_114 = *(undefined4 *)(iVar7 + 0x14);
    local_110 = *(undefined4 *)(iVar7 + 0x18);
    local_10c = *(undefined4 *)(iVar7 + 0x1c);
    local_108 = *(undefined4 *)(iVar7 + 0x20);
    local_104 = *(undefined4 *)(iVar7 + 0x24);
    local_100 = *(undefined4 *)(iVar7 + 0x28);
    local_fc = *(undefined4 *)(iVar7 + 0x2c);
    local_f8 = *(undefined4 *)(iVar7 + 0x30);
    builtin_strncpy(local_f4,
                    "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"
                    ,0x28);
    local_cc = 0x5c5c5c5c;
    local_c4 = local_50;
    local_c8 = 0x5c5c5c5c;
    local_c0 = local_4c;
    local_bc = local_48;
    local_b8 = local_44;
    psVar3 = (sslHashes *)SSL::useHashes(param_1);
    piVar8 = (int *)sslHashes::use_MD5(psVar3);
    pcVar1 = *(code **)(*piVar8 + 4);
    uVar9 = Finished::set_md5(param_2);
    (*pcVar1)(piVar8,uVar9,&local_124,0x70);
    pSVar6 = (Security *)SSL::getSecurity(param_1);
    iVar7 = Security::get_connection(pSVar6);
    local_b4 = *(undefined4 *)param_3;
    local_b0 = *(undefined4 *)(iVar7 + 4);
    local_ac = *(undefined4 *)(iVar7 + 8);
    local_a8 = *(undefined4 *)(iVar7 + 0xc);
    local_a4 = *(undefined4 *)(iVar7 + 0x10);
    local_a0 = *(undefined4 *)(iVar7 + 0x14);
    local_9c = *(undefined4 *)(iVar7 + 0x18);
    local_98 = *(undefined4 *)(iVar7 + 0x1c);
    local_94 = *(undefined4 *)(iVar7 + 0x20);
    local_90 = *(undefined4 *)(iVar7 + 0x24);
    local_8c = *(undefined4 *)(iVar7 + 0x28);
    local_88 = *(undefined4 *)(iVar7 + 0x2c);
    local_84 = *(undefined4 *)(iVar7 + 0x30);
    local_80 = PAD1;
    local_7c = DAT_08d0d464;
    local_78 = DAT_08d0d468;
    local_74 = DAT_08d0d46c;
    local_70 = DAT_08d0d470;
    local_6c = DAT_08d0d474;
    local_68 = DAT_08d0d478;
    local_64 = DAT_08d0d47c;
    local_60 = DAT_08d0d480;
    local_5c[0] = s_666666666666_08d0d484[0];
    local_5c[1] = s_666666666666_08d0d484[1];
    local_5c[2] = s_666666666666_08d0d484[2];
    local_5c[3] = s_666666666666_08d0d484[3];
    psVar3 = (sslHashes *)SSL::useHashes(param_1);
    piVar8 = (int *)sslHashes::use_SHA(psVar3);
    (**(code **)(*piVar8 + 4))(piVar8,&local_50,&local_b4,0x5c);
    local_124 = *(undefined4 *)(iVar7 + 4);
    local_120 = *(undefined4 *)(iVar7 + 8);
    local_11c = *(undefined4 *)(iVar7 + 0xc);
    local_118 = *(undefined4 *)(iVar7 + 0x10);
    local_114 = *(undefined4 *)(iVar7 + 0x14);
    local_110 = *(undefined4 *)(iVar7 + 0x18);
    local_10c = *(undefined4 *)(iVar7 + 0x1c);
    local_108 = *(undefined4 *)(iVar7 + 0x20);
    local_104 = *(undefined4 *)(iVar7 + 0x24);
    local_100 = *(undefined4 *)(iVar7 + 0x28);
    local_fc = *(undefined4 *)(iVar7 + 0x2c);
    local_f8 = *(undefined4 *)(iVar7 + 0x30);
    local_f4[0] = PAD2[0];
    local_f4[1] = PAD2[1];
    local_f4[2] = PAD2[2];
    local_f4[3] = PAD2[3];
    local_f4[4] = PAD2[4];
    local_f4[5] = PAD2[5];
    local_f4[6] = PAD2[6];
    local_f4[7] = PAD2[7];
    local_f4[8] = PAD2[8];
    local_f4[9] = PAD2[9];
    local_f4[10] = PAD2[10];
    local_f4[0xb] = PAD2[0xb];
    local_f4[0xc] = PAD2[0xc];
    local_f4[0xd] = PAD2[0xd];
    local_f4[0xe] = PAD2[0xe];
    local_f4[0xf] = PAD2[0xf];
    local_f4[0x10] = PAD2[0x10];
    local_f4[0x11] = PAD2[0x11];
    local_f4[0x12] = PAD2[0x12];
    local_f4[0x13] = PAD2[0x13];
    local_f4[0x14] = PAD2[0x14];
    local_f4[0x15] = PAD2[0x15];
    local_f4[0x16] = PAD2[0x16];
    local_f4[0x17] = PAD2[0x17];
    local_f4[0x18] = PAD2[0x18];
    local_f4[0x19] = PAD2[0x19];
    local_f4[0x1a] = PAD2[0x1a];
    local_f4[0x1b] = PAD2[0x1b];
    local_f4[0x1c] = PAD2[0x1c];
    local_f4[0x1d] = PAD2[0x1d];
    local_f4[0x1e] = PAD2[0x1e];
    local_f4[0x1f] = PAD2[0x1f];
    local_f4[0x20] = PAD2[0x20];
    local_f4[0x21] = PAD2[0x21];
    local_f4[0x22] = PAD2[0x22];
    local_f4[0x23] = PAD2[0x23];
    local_f4[0x24] = PAD2[0x24];
    local_f4[0x25] = PAD2[0x25];
    local_f4[0x26] = PAD2[0x26];
    local_f4[0x27] = PAD2[0x27];
    local_cc = local_50;
    local_c8 = local_4c;
    local_c4 = local_48;
    local_c0 = local_44;
    local_bc = local_40[0];
    psVar3 = (sslHashes *)SSL::useHashes(param_1);
    piVar8 = (int *)sslHashes::use_SHA(psVar3);
    pcVar1 = *(code **)(*piVar8 + 4);
    uVar9 = Finished::set_sha(param_2);
    (*pcVar1)(piVar8,uVar9,&local_124,0x6c);
  }
  else {
    psVar3 = (sslHashes *)SSL::useHashes(param_1);
    puVar10 = (undefined4 *)sslHashes::use_MD5(psVar3);
    (**(code **)*puVar10)(puVar10,&local_50);
    psVar3 = (sslHashes *)SSL::useHashes(param_1);
    puVar10 = (undefined4 *)sslHashes::use_SHA(psVar3);
    (**(code **)*puVar10)(puVar10,local_40);
    iVar7 = strncmp((char *)param_3,"CLNTSRVR",4);
    puVar12 = (uchar *)"server finished";
    if (iVar7 == 0) {
      puVar12 = "client finished";
    }
    pSVar6 = (Security *)SSL::getSecurity(param_1);
    iVar7 = Security::get_connection(pSVar6);
    puVar11 = (uchar *)Finished::set_md5(param_2);
    PRF(puVar11,0xc,(uchar *)(iVar7 + 4),0x30,puVar12,0xf,(uchar *)&local_50,0x24);
    HandShakeBase::set_length((HandShakeBase *)param_2,0xc);
  }
  psVar3 = (sslHashes *)SSL::useHashes(param_1);
  pMVar4 = (MD5 *)sslHashes::use_MD5(psVar3);
  MD5::operator=(pMVar4,local_24);
  psVar3 = (sslHashes *)SSL::useHashes(param_1);
  pSVar5 = (SHA *)sslHashes::use_SHA(psVar3);
  SHA::operator=(pSVar5,local_2c);
  SHA::~SHA(local_2c);
  MD5::~MD5(local_24);
  return;
}

```

---

## buildServerHello

```asm
// === 0879dcb0 yaSSL::buildServerHello  [0x0879dcb0-0x879de2f] ===
 879dcb0:	55                   	push   %ebp
 879dcb1:	89 e5                	mov    %esp,%ebp
 879dcb3:	57                   	push   %edi
 879dcb4:	56                   	push   %esi
 879dcb5:	53                   	push   %ebx
 879dcb6:	e8 3d 51 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879dcbb:	81 c3 dd ee bc 00    	add    $0xbceedd,%ebx
 879dcc1:	83 ec 2c             	sub    $0x2c,%esp
 879dcc4:	8b 7d 08             	mov    0x8(%ebp),%edi
 879dcc7:	8b 75 0c             	mov    0xc(%ebp),%esi
 879dcca:	89 3c 24             	mov    %edi,(%esp)
 879dccd:	e8 9e 03 fb ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 879dcd2:	89 04 24             	mov    %eax,(%esp)
 879dcd5:	e8 16 10 fb ff       	call   874ecf0 <_ZNK5yaSSL8Security12get_resumingEv>
 879dcda:	84 c0                	test   %al,%al
 879dcdc:	0f 85 ae 00 00 00    	jne    879dd90 <_ZN5yaSSL16buildServerHelloERNS_3SSLERNS_11ServerHelloE+0xe0>
 879dce2:	89 3c 24             	mov    %edi,(%esp)
 879dce5:	e8 76 03 fb ff       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 879dcea:	89 04 24             	mov    %eax,(%esp)
 879dced:	e8 8e 0a fb ff       	call   874e780 <_ZNK5yaSSL6Crypto10get_randomEv>
 879dcf2:	8d 56 0a             	lea    0xa(%esi),%edx
 879dcf5:	89 54 24 04          	mov    %edx,0x4(%esp)
 879dcf9:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 879dd00:	00 
 879dd01:	89 04 24             	mov    %eax,(%esp)
 879dd04:	e8 b7 b2 ff ff       	call   8798fc0 <_ZNK5yaSSL10RandomPool4FillEPhj>
 879dd09:	89 3c 24             	mov    %edi,(%esp)
 879dd0c:	e8 4f 03 fb ff       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 879dd11:	89 04 24             	mov    %eax,(%esp)
 879dd14:	e8 67 0a fb ff       	call   874e780 <_ZNK5yaSSL6Crypto10get_randomEv>
 879dd19:	8d 56 2b             	lea    0x2b(%esi),%edx
 879dd1c:	89 54 24 04          	mov    %edx,0x4(%esp)
 879dd20:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 879dd23:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 879dd2a:	00 
 879dd2b:	89 04 24             	mov    %eax,(%esp)
 879dd2e:	e8 8d b2 ff ff       	call   8798fc0 <_ZNK5yaSSL10RandomPool4FillEPhj>
 879dd33:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 879dd36:	c6 46 2a 20          	movb   $0x20,0x2a(%esi)
 879dd3a:	89 54 24 04          	mov    %edx,0x4(%esp)
 879dd3e:	89 3c 24             	mov    %edi,(%esp)
 879dd41:	e8 8a 15 fb ff       	call   874f2d0 <_ZN5yaSSL3SSL13set_sessionIDEPKh>
 879dd46:	89 3c 24             	mov    %edi,(%esp)
 879dd49:	e8 22 03 fb ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 879dd4e:	89 04 24             	mov    %eax,(%esp)
 879dd51:	e8 fa 0c fb ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 879dd56:	0f b6 40 2c          	movzbl 0x2c(%eax),%eax
 879dd5a:	88 46 4b             	mov    %al,0x4b(%esi)
 879dd5d:	89 3c 24             	mov    %edi,(%esp)
 879dd60:	e8 0b 03 fb ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 879dd65:	89 04 24             	mov    %eax,(%esp)
 879dd68:	e8 e3 0c fb ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 879dd6d:	0f b6 40 2d          	movzbl 0x2d(%eax),%eax
 879dd71:	88 46 4c             	mov    %al,0x4c(%esi)
 879dd74:	89 34 24             	mov    %esi,(%esp)
 879dd77:	c7 44 24 04 46 00 00 	movl   $0x46,0x4(%esp)
 879dd7e:	00 
 879dd7f:	e8 2c 8d fa ff       	call   8746ab0 <_ZN5yaSSL13HandShakeBase10set_lengthEi>
 879dd84:	83 c4 2c             	add    $0x2c,%esp
 879dd87:	5b                   	pop    %ebx
 879dd88:	5e                   	pop    %esi
 879dd89:	5f                   	pop    %edi
 879dd8a:	5d                   	pop    %ebp
 879dd8b:	c3                   	ret
 879dd8c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 879dd90:	89 3c 24             	mov    %edi,(%esp)
 879dd93:	e8 d8 02 fb ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 879dd98:	89 04 24             	mov    %eax,(%esp)
 879dd9b:	e8 c0 0b fb ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 879dda0:	8d 56 0a             	lea    0xa(%esi),%edx
 879dda3:	8d 48 54             	lea    0x54(%eax),%ecx
 879dda6:	8b 40 54             	mov    0x54(%eax),%eax
 879dda9:	89 46 0a             	mov    %eax,0xa(%esi)
 879ddac:	8b 41 04             	mov    0x4(%ecx),%eax
 879ddaf:	89 42 04             	mov    %eax,0x4(%edx)
 879ddb2:	8b 41 08             	mov    0x8(%ecx),%eax
 879ddb5:	89 42 08             	mov    %eax,0x8(%edx)
 879ddb8:	8b 41 0c             	mov    0xc(%ecx),%eax
 879ddbb:	89 42 0c             	mov    %eax,0xc(%edx)
 879ddbe:	8b 41 10             	mov    0x10(%ecx),%eax
 879ddc1:	89 42 10             	mov    %eax,0x10(%edx)
 879ddc4:	8b 41 14             	mov    0x14(%ecx),%eax
 879ddc7:	89 42 14             	mov    %eax,0x14(%edx)
 879ddca:	8b 41 18             	mov    0x18(%ecx),%eax
 879ddcd:	89 42 18             	mov    %eax,0x18(%edx)
 879ddd0:	8b 41 1c             	mov    0x1c(%ecx),%eax
 879ddd3:	89 42 1c             	mov    %eax,0x1c(%edx)
 879ddd6:	89 3c 24             	mov    %edi,(%esp)
 879ddd9:	e8 92 02 fb ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 879ddde:	89 04 24             	mov    %eax,(%esp)
 879dde1:	e8 fa 0e fb ff       	call   874ece0 <_ZNK5yaSSL8Security10get_resumeEv>
 879dde6:	89 04 24             	mov    %eax,(%esp)
 879dde9:	e8 32 05 fb ff       	call   874e320 <_ZNK5yaSSL11SSL_SESSION5GetIDEv>
 879ddee:	8d 56 2b             	lea    0x2b(%esi),%edx
 879ddf1:	8b 08                	mov    (%eax),%ecx
 879ddf3:	89 4e 2b             	mov    %ecx,0x2b(%esi)
 879ddf6:	8b 48 04             	mov    0x4(%eax),%ecx
 879ddf9:	89 4a 04             	mov    %ecx,0x4(%edx)
 879ddfc:	8b 48 08             	mov    0x8(%eax),%ecx
 879ddff:	89 4a 08             	mov    %ecx,0x8(%edx)
 879de02:	8b 48 0c             	mov    0xc(%eax),%ecx
 879de05:	89 4a 0c             	mov    %ecx,0xc(%edx)
 879de08:	8b 48 10             	mov    0x10(%eax),%ecx
 879de0b:	89 4a 10             	mov    %ecx,0x10(%edx)
 879de0e:	8b 48 14             	mov    0x14(%eax),%ecx
 879de11:	89 4a 14             	mov    %ecx,0x14(%edx)
 879de14:	8b 48 18             	mov    0x18(%eax),%ecx
 879de17:	89 4a 18             	mov    %ecx,0x18(%edx)
 879de1a:	8b 40 1c             	mov    0x1c(%eax),%eax
 879de1d:	89 42 1c             	mov    %eax,0x1c(%edx)
 879de20:	e9 11 ff ff ff       	jmp    879dd36 <_ZN5yaSSL16buildServerHelloERNS_3SSLERNS_11ServerHelloE+0x86>
 879de25:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 879de29:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::buildServerHello @ 0x879dcb0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::buildServerHello(yaSSL::SSL&, yaSSL::ServerHello&) */

void yaSSL::buildServerHello(SSL *param_1,ServerHello *param_2)

{
  char cVar1;
  Security *pSVar2;
  Crypto *pCVar3;
  RandomPool *pRVar4;
  int iVar5;
  SSL_SESSION *this;
  undefined4 *puVar6;
  
  pSVar2 = (Security *)SSL::getSecurity(param_1);
  cVar1 = Security::get_resuming(pSVar2);
  if (cVar1 == '\0') {
    pCVar3 = (Crypto *)SSL::getCrypto(param_1);
    pRVar4 = (RandomPool *)Crypto::get_random(pCVar3);
    RandomPool::Fill(pRVar4,(uchar *)(param_2 + 10),0x20);
    pCVar3 = (Crypto *)SSL::getCrypto(param_1);
    pRVar4 = (RandomPool *)Crypto::get_random(pCVar3);
    RandomPool::Fill(pRVar4,(uchar *)(param_2 + 0x2b),0x20);
  }
  else {
    pSVar2 = (Security *)SSL::getSecurity(param_1);
    iVar5 = Security::get_connection(pSVar2);
    *(undefined4 *)(param_2 + 10) = *(undefined4 *)(iVar5 + 0x54);
    *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(iVar5 + 0x58);
    *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)(iVar5 + 0x5c);
    *(undefined4 *)(param_2 + 0x16) = *(undefined4 *)(iVar5 + 0x60);
    *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(iVar5 + 100);
    *(undefined4 *)(param_2 + 0x1e) = *(undefined4 *)(iVar5 + 0x68);
    *(undefined4 *)(param_2 + 0x22) = *(undefined4 *)(iVar5 + 0x6c);
    *(undefined4 *)(param_2 + 0x26) = *(undefined4 *)(iVar5 + 0x70);
    pSVar2 = (Security *)SSL::getSecurity(param_1);
    this = (SSL_SESSION *)Security::get_resume(pSVar2);
    puVar6 = (undefined4 *)SSL_SESSION::GetID(this);
    *(undefined4 *)(param_2 + 0x2b) = *puVar6;
    *(undefined4 *)(param_2 + 0x2f) = puVar6[1];
    *(undefined4 *)(param_2 + 0x33) = puVar6[2];
    *(undefined4 *)(param_2 + 0x37) = puVar6[3];
    *(undefined4 *)(param_2 + 0x3b) = puVar6[4];
    *(undefined4 *)(param_2 + 0x3f) = puVar6[5];
    *(undefined4 *)(param_2 + 0x43) = puVar6[6];
    *(undefined4 *)(param_2 + 0x47) = puVar6[7];
  }
  param_2[0x2a] = (ServerHello)0x20;
  SSL::set_sessionID(param_1,(uchar *)(param_2 + 0x2b));
  pSVar2 = (Security *)SSL::getSecurity(param_1);
  iVar5 = Security::get_parms(pSVar2);
  param_2[0x4b] = *(ServerHello *)(iVar5 + 0x2c);
  pSVar2 = (Security *)SSL::getSecurity(param_1);
  iVar5 = Security::get_parms(pSVar2);
  param_2[0x4c] = *(ServerHello *)(iVar5 + 0x2d);
  HandShakeBase::set_length((HandShakeBase *)param_2,0x46);
  return;
}

```

---

## build_certHashes

```asm
// === 0879cea0 yaSSL::build_certHashes  [0x0879cea0-0x879d5cf] ===
 879cea0:	55                   	push   %ebp
 879cea1:	89 e5                	mov    %esp,%ebp
 879cea3:	57                   	push   %edi
 879cea4:	56                   	push   %esi
 879cea5:	53                   	push   %ebx
 879cea6:	e8 4d 5f f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879ceab:	81 c3 ed fc bc 00    	add    $0xbcfced,%ebx
 879ceb1:	81 ec 4c 01 00 00    	sub    $0x14c,%esp
 879ceb7:	8b 7d 08             	mov    0x8(%ebp),%edi
 879ceba:	89 3c 24             	mov    %edi,(%esp)
 879cebd:	e8 ce 11 fb ff       	call   874e090 <_ZNK5yaSSL3SSL9getHashesEv>
 879cec2:	89 04 24             	mov    %eax,(%esp)
 879cec5:	e8 66 19 fb ff       	call   874e830 <_ZNK5yaSSL9sslHashes7get_MD5Ev>
 879ceca:	89 44 24 04          	mov    %eax,0x4(%esp)
 879cece:	8d 45 e0             	lea    -0x20(%ebp),%eax
 879ced1:	89 85 e4 fe ff ff    	mov    %eax,-0x11c(%ebp)
 879ced7:	89 04 24             	mov    %eax,(%esp)
 879ceda:	e8 d1 d0 ff ff       	call   8799fb0 <_ZN5yaSSL3MD5C1ERKS0_>
 879cedf:	89 3c 24             	mov    %edi,(%esp)
 879cee2:	e8 a9 11 fb ff       	call   874e090 <_ZNK5yaSSL3SSL9getHashesEv>
 879cee7:	89 04 24             	mov    %eax,(%esp)
 879ceea:	e8 51 19 fb ff       	call   874e840 <_ZNK5yaSSL9sslHashes7get_SHAEv>
 879ceef:	8d 55 d8             	lea    -0x28(%ebp),%edx
 879cef2:	89 95 e0 fe ff ff    	mov    %edx,-0x120(%ebp)
 879cef8:	89 14 24             	mov    %edx,(%esp)
 879cefb:	89 44 24 04          	mov    %eax,0x4(%esp)
 879ceff:	e8 0c d0 ff ff       	call   8799f10 <_ZN5yaSSL3SHAC1ERKS0_>
 879cf04:	89 3c 24             	mov    %edi,(%esp)
 879cf07:	e8 94 1a fb ff       	call   874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>
 879cf0c:	84 c0                	test   %al,%al
 879cf0e:	0f 85 74 06 00 00    	jne    879d588 <_ZN5yaSSL16build_certHashesERNS_3SSLERNS_6HashesE+0x6e8>
 879cf14:	89 3c 24             	mov    %edi,(%esp)
 879cf17:	e8 54 11 fb ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 879cf1c:	89 04 24             	mov    %eax,(%esp)
 879cf1f:	e8 3c 1a fb ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 879cf24:	8d 70 04             	lea    0x4(%eax),%esi
 879cf27:	89 c2                	mov    %eax,%edx
 879cf29:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 879cf2f:	89 85 dc fe ff ff    	mov    %eax,-0x124(%ebp)
 879cf35:	8b 42 04             	mov    0x4(%edx),%eax
 879cf38:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 879cf3e:	8b 46 04             	mov    0x4(%esi),%eax
 879cf41:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 879cf47:	8b 46 08             	mov    0x8(%esi),%eax
 879cf4a:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 879cf50:	8b 46 0c             	mov    0xc(%esi),%eax
 879cf53:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 879cf59:	8b 46 10             	mov    0x10(%esi),%eax
 879cf5c:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 879cf62:	8b 46 14             	mov    0x14(%esi),%eax
 879cf65:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 879cf6b:	8b 46 18             	mov    0x18(%esi),%eax
 879cf6e:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 879cf74:	8b 46 1c             	mov    0x1c(%esi),%eax
 879cf77:	89 45 80             	mov    %eax,-0x80(%ebp)
 879cf7a:	8b 46 20             	mov    0x20(%esi),%eax
 879cf7d:	89 45 84             	mov    %eax,-0x7c(%ebp)
 879cf80:	8b 46 24             	mov    0x24(%esi),%eax
 879cf83:	89 45 88             	mov    %eax,-0x78(%ebp)
 879cf86:	8b 46 28             	mov    0x28(%esi),%eax
 879cf89:	89 45 8c             	mov    %eax,-0x74(%ebp)
 879cf8c:	8b 46 2c             	mov    0x2c(%esi),%eax
 879cf8f:	c6 45 94 36          	movb   $0x36,-0x6c(%ebp)
 879cf93:	c6 45 95 36          	movb   $0x36,-0x6b(%ebp)
 879cf97:	c6 45 96 36          	movb   $0x36,-0x6a(%ebp)
 879cf9b:	89 45 90             	mov    %eax,-0x70(%ebp)
 879cf9e:	c6 45 97 36          	movb   $0x36,-0x69(%ebp)
 879cfa2:	c6 45 98 36          	movb   $0x36,-0x68(%ebp)
 879cfa6:	c6 45 99 36          	movb   $0x36,-0x67(%ebp)
 879cfaa:	c6 45 9a 36          	movb   $0x36,-0x66(%ebp)
 879cfae:	c6 45 9b 36          	movb   $0x36,-0x65(%ebp)
 879cfb2:	c6 45 9c 36          	movb   $0x36,-0x64(%ebp)
 879cfb6:	c6 45 9d 36          	movb   $0x36,-0x63(%ebp)
 879cfba:	c6 45 9e 36          	movb   $0x36,-0x62(%ebp)
 879cfbe:	c6 45 9f 36          	movb   $0x36,-0x61(%ebp)
 879cfc2:	c6 45 a0 36          	movb   $0x36,-0x60(%ebp)
 879cfc6:	c6 45 a1 36          	movb   $0x36,-0x5f(%ebp)
 879cfca:	c6 45 a2 36          	movb   $0x36,-0x5e(%ebp)
 879cfce:	c6 45 a3 36          	movb   $0x36,-0x5d(%ebp)
 879cfd2:	c6 45 a4 36          	movb   $0x36,-0x5c(%ebp)
 879cfd6:	c6 45 a5 36          	movb   $0x36,-0x5b(%ebp)
 879cfda:	c6 45 a6 36          	movb   $0x36,-0x5a(%ebp)
 879cfde:	c6 45 a7 36          	movb   $0x36,-0x59(%ebp)
 879cfe2:	c6 45 a8 36          	movb   $0x36,-0x58(%ebp)
 879cfe6:	c6 45 a9 36          	movb   $0x36,-0x57(%ebp)
 879cfea:	c6 45 aa 36          	movb   $0x36,-0x56(%ebp)
 879cfee:	c6 45 ab 36          	movb   $0x36,-0x55(%ebp)
 879cff2:	c6 45 ac 36          	movb   $0x36,-0x54(%ebp)
 879cff6:	c6 45 ad 36          	movb   $0x36,-0x53(%ebp)
 879cffa:	c6 45 ae 36          	movb   $0x36,-0x52(%ebp)
 879cffe:	c6 45 af 36          	movb   $0x36,-0x51(%ebp)
 879d002:	c6 45 b0 36          	movb   $0x36,-0x50(%ebp)
 879d006:	c6 45 b1 36          	movb   $0x36,-0x4f(%ebp)
 879d00a:	c6 45 b2 36          	movb   $0x36,-0x4e(%ebp)
 879d00e:	c6 45 b3 36          	movb   $0x36,-0x4d(%ebp)
 879d012:	c6 45 b4 36          	movb   $0x36,-0x4c(%ebp)
 879d016:	c6 45 b5 36          	movb   $0x36,-0x4b(%ebp)
 879d01a:	c6 45 b6 36          	movb   $0x36,-0x4a(%ebp)
 879d01e:	c6 45 b7 36          	movb   $0x36,-0x49(%ebp)
 879d022:	c6 45 b8 36          	movb   $0x36,-0x48(%ebp)
 879d026:	c6 45 b9 36          	movb   $0x36,-0x47(%ebp)
 879d02a:	c6 45 ba 36          	movb   $0x36,-0x46(%ebp)
 879d02e:	c6 45 bb 36          	movb   $0x36,-0x45(%ebp)
 879d032:	c6 45 bc 36          	movb   $0x36,-0x44(%ebp)
 879d036:	c6 45 bd 36          	movb   $0x36,-0x43(%ebp)
 879d03a:	c6 45 be 36          	movb   $0x36,-0x42(%ebp)
 879d03e:	89 95 d0 fe ff ff    	mov    %edx,-0x130(%ebp)
 879d044:	c6 45 bf 36          	movb   $0x36,-0x41(%ebp)
 879d048:	c6 45 c0 36          	movb   $0x36,-0x40(%ebp)
 879d04c:	c6 45 c1 36          	movb   $0x36,-0x3f(%ebp)
 879d050:	c6 45 c2 36          	movb   $0x36,-0x3e(%ebp)
 879d054:	c6 45 c3 36          	movb   $0x36,-0x3d(%ebp)
 879d058:	89 3c 24             	mov    %edi,(%esp)
 879d05b:	e8 80 12 fb ff       	call   874e2e0 <_ZN5yaSSL3SSL9useHashesEv>
 879d060:	89 04 24             	mov    %eax,(%esp)
 879d063:	e8 08 18 fb ff       	call   874e870 <_ZN5yaSSL9sslHashes7use_MD5Ev>
 879d068:	8b 08                	mov    (%eax),%ecx
 879d06a:	89 04 24             	mov    %eax,(%esp)
 879d06d:	c7 44 24 0c 60 00 00 	movl   $0x60,0xc(%esp)
 879d074:	00 
 879d075:	89 8d d4 fe ff ff    	mov    %ecx,-0x12c(%ebp)
 879d07b:	8b 8d dc fe ff ff    	mov    -0x124(%ebp),%ecx
 879d081:	8b 85 d4 fe ff ff    	mov    -0x12c(%ebp),%eax
 879d087:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 879d08b:	8d 4d c4             	lea    -0x3c(%ebp),%ecx
 879d08e:	89 8d d8 fe ff ff    	mov    %ecx,-0x128(%ebp)
 879d094:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879d098:	ff 50 04             	call   *0x4(%eax)
 879d09b:	8b 95 d0 fe ff ff    	mov    -0x130(%ebp),%edx
 879d0a1:	8d 8d f4 fe ff ff    	lea    -0x10c(%ebp),%ecx
 879d0a7:	89 8d d4 fe ff ff    	mov    %ecx,-0x12c(%ebp)
 879d0ad:	8b 42 04             	mov    0x4(%edx),%eax
 879d0b0:	89 85 f4 fe ff ff    	mov    %eax,-0x10c(%ebp)
 879d0b6:	8b 46 04             	mov    0x4(%esi),%eax
 879d0b9:	89 85 f8 fe ff ff    	mov    %eax,-0x108(%ebp)
 879d0bf:	8b 46 08             	mov    0x8(%esi),%eax
 879d0c2:	89 85 fc fe ff ff    	mov    %eax,-0x104(%ebp)
 879d0c8:	8b 46 0c             	mov    0xc(%esi),%eax
 879d0cb:	89 85 00 ff ff ff    	mov    %eax,-0x100(%ebp)
 879d0d1:	8b 46 10             	mov    0x10(%esi),%eax
 879d0d4:	89 85 04 ff ff ff    	mov    %eax,-0xfc(%ebp)
 879d0da:	8b 46 14             	mov    0x14(%esi),%eax
 879d0dd:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
 879d0e3:	8b 46 18             	mov    0x18(%esi),%eax
 879d0e6:	89 85 0c ff ff ff    	mov    %eax,-0xf4(%ebp)
 879d0ec:	8b 46 1c             	mov    0x1c(%esi),%eax
 879d0ef:	89 85 10 ff ff ff    	mov    %eax,-0xf0(%ebp)
 879d0f5:	8b 46 20             	mov    0x20(%esi),%eax
 879d0f8:	89 85 14 ff ff ff    	mov    %eax,-0xec(%ebp)
 879d0fe:	8b 46 24             	mov    0x24(%esi),%eax
 879d101:	89 85 18 ff ff ff    	mov    %eax,-0xe8(%ebp)
 879d107:	8b 46 28             	mov    0x28(%esi),%eax
 879d10a:	89 85 1c ff ff ff    	mov    %eax,-0xe4(%ebp)
 879d110:	8b 46 2c             	mov    0x2c(%esi),%eax
 879d113:	c6 85 24 ff ff ff 5c 	movb   $0x5c,-0xdc(%ebp)
 879d11a:	c6 85 25 ff ff ff 5c 	movb   $0x5c,-0xdb(%ebp)
 879d121:	c6 85 26 ff ff ff 5c 	movb   $0x5c,-0xda(%ebp)
 879d128:	89 85 20 ff ff ff    	mov    %eax,-0xe0(%ebp)
 879d12e:	c6 85 27 ff ff ff 5c 	movb   $0x5c,-0xd9(%ebp)
 879d135:	c6 85 28 ff ff ff 5c 	movb   $0x5c,-0xd8(%ebp)
 879d13c:	c6 85 29 ff ff ff 5c 	movb   $0x5c,-0xd7(%ebp)
 879d143:	c6 85 2a ff ff ff 5c 	movb   $0x5c,-0xd6(%ebp)
 879d14a:	c6 85 2b ff ff ff 5c 	movb   $0x5c,-0xd5(%ebp)
 879d151:	c6 85 2c ff ff ff 5c 	movb   $0x5c,-0xd4(%ebp)
 879d158:	c6 85 2d ff ff ff 5c 	movb   $0x5c,-0xd3(%ebp)
 879d15f:	c6 85 2e ff ff ff 5c 	movb   $0x5c,-0xd2(%ebp)
 879d166:	c6 85 2f ff ff ff 5c 	movb   $0x5c,-0xd1(%ebp)
 879d16d:	c6 85 30 ff ff ff 5c 	movb   $0x5c,-0xd0(%ebp)
 879d174:	c6 85 31 ff ff ff 5c 	movb   $0x5c,-0xcf(%ebp)
 879d17b:	c6 85 32 ff ff ff 5c 	movb   $0x5c,-0xce(%ebp)
 879d182:	c6 85 33 ff ff ff 5c 	movb   $0x5c,-0xcd(%ebp)
 879d189:	c6 85 34 ff ff ff 5c 	movb   $0x5c,-0xcc(%ebp)
 879d190:	c6 85 35 ff ff ff 5c 	movb   $0x5c,-0xcb(%ebp)
 879d197:	c6 85 36 ff ff ff 5c 	movb   $0x5c,-0xca(%ebp)
 879d19e:	c6 85 37 ff ff ff 5c 	movb   $0x5c,-0xc9(%ebp)
 879d1a5:	c6 85 38 ff ff ff 5c 	movb   $0x5c,-0xc8(%ebp)
 879d1ac:	c6 85 39 ff ff ff 5c 	movb   $0x5c,-0xc7(%ebp)
 879d1b3:	c6 85 3a ff ff ff 5c 	movb   $0x5c,-0xc6(%ebp)
 879d1ba:	c6 85 3b ff ff ff 5c 	movb   $0x5c,-0xc5(%ebp)
 879d1c1:	c6 85 3c ff ff ff 5c 	movb   $0x5c,-0xc4(%ebp)
 879d1c8:	c6 85 3d ff ff ff 5c 	movb   $0x5c,-0xc3(%ebp)
 879d1cf:	c6 85 3e ff ff ff 5c 	movb   $0x5c,-0xc2(%ebp)
 879d1d6:	c6 85 3f ff ff ff 5c 	movb   $0x5c,-0xc1(%ebp)
 879d1dd:	c6 85 40 ff ff ff 5c 	movb   $0x5c,-0xc0(%ebp)
 879d1e4:	c6 85 41 ff ff ff 5c 	movb   $0x5c,-0xbf(%ebp)
 879d1eb:	c6 85 42 ff ff ff 5c 	movb   $0x5c,-0xbe(%ebp)
 879d1f2:	c6 85 43 ff ff ff 5c 	movb   $0x5c,-0xbd(%ebp)
 879d1f9:	c6 85 44 ff ff ff 5c 	movb   $0x5c,-0xbc(%ebp)
 879d200:	c6 85 45 ff ff ff 5c 	movb   $0x5c,-0xbb(%ebp)
 879d207:	c6 85 46 ff ff ff 5c 	movb   $0x5c,-0xba(%ebp)
 879d20e:	c6 85 47 ff ff ff 5c 	movb   $0x5c,-0xb9(%ebp)
 879d215:	c6 85 48 ff ff ff 5c 	movb   $0x5c,-0xb8(%ebp)
 879d21c:	c6 85 49 ff ff ff 5c 	movb   $0x5c,-0xb7(%ebp)
 879d223:	c6 85 4a ff ff ff 5c 	movb   $0x5c,-0xb6(%ebp)
 879d22a:	c6 85 4b ff ff ff 5c 	movb   $0x5c,-0xb5(%ebp)
 879d231:	c6 85 4c ff ff ff 5c 	movb   $0x5c,-0xb4(%ebp)
 879d238:	c6 85 4d ff ff ff 5c 	movb   $0x5c,-0xb3(%ebp)
 879d23f:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 879d242:	c6 85 4e ff ff ff 5c 	movb   $0x5c,-0xb2(%ebp)
 879d249:	c6 85 4f ff ff ff 5c 	movb   $0x5c,-0xb1(%ebp)
 879d250:	c6 85 50 ff ff ff 5c 	movb   $0x5c,-0xb0(%ebp)
 879d257:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 879d25d:	8b 45 c8             	mov    -0x38(%ebp),%eax
 879d260:	c6 85 51 ff ff ff 5c 	movb   $0x5c,-0xaf(%ebp)
 879d267:	c6 85 52 ff ff ff 5c 	movb   $0x5c,-0xae(%ebp)
 879d26e:	c6 85 53 ff ff ff 5c 	movb   $0x5c,-0xad(%ebp)
 879d275:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 879d27b:	8b 45 cc             	mov    -0x34(%ebp),%eax
 879d27e:	89 3c 24             	mov    %edi,(%esp)
 879d281:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
 879d287:	8b 45 d0             	mov    -0x30(%ebp),%eax
 879d28a:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 879d290:	e8 4b 10 fb ff       	call   874e2e0 <_ZN5yaSSL3SSL9useHashesEv>
 879d295:	89 04 24             	mov    %eax,(%esp)
 879d298:	e8 d3 15 fb ff       	call   874e870 <_ZN5yaSSL9sslHashes7use_MD5Ev>
 879d29d:	8b 8d d4 fe ff ff    	mov    -0x12c(%ebp),%ecx
 879d2a3:	8b 10                	mov    (%eax),%edx
 879d2a5:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 879d2a9:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 879d2ac:	89 04 24             	mov    %eax,(%esp)
 879d2af:	c7 44 24 0c 70 00 00 	movl   $0x70,0xc(%esp)
 879d2b6:	00 
 879d2b7:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879d2bb:	ff 52 04             	call   *0x4(%edx)
 879d2be:	89 3c 24             	mov    %edi,(%esp)
 879d2c1:	e8 aa 0d fb ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 879d2c6:	89 04 24             	mov    %eax,(%esp)
 879d2c9:	e8 92 16 fb ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 879d2ce:	8d 70 04             	lea    0x4(%eax),%esi
 879d2d1:	89 c2                	mov    %eax,%edx
 879d2d3:	8b 40 04             	mov    0x4(%eax),%eax
 879d2d6:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 879d2dc:	8b 46 04             	mov    0x4(%esi),%eax
 879d2df:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 879d2e5:	8b 46 08             	mov    0x8(%esi),%eax
 879d2e8:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 879d2ee:	8b 46 0c             	mov    0xc(%esi),%eax
 879d2f1:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 879d2f7:	8b 46 10             	mov    0x10(%esi),%eax
 879d2fa:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 879d300:	8b 46 14             	mov    0x14(%esi),%eax
 879d303:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 879d309:	8b 46 18             	mov    0x18(%esi),%eax
 879d30c:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 879d312:	8b 46 1c             	mov    0x1c(%esi),%eax
 879d315:	89 45 80             	mov    %eax,-0x80(%ebp)
 879d318:	8b 46 20             	mov    0x20(%esi),%eax
 879d31b:	89 45 84             	mov    %eax,-0x7c(%ebp)
 879d31e:	8b 46 24             	mov    0x24(%esi),%eax
 879d321:	89 45 88             	mov    %eax,-0x78(%ebp)
 879d324:	8b 46 28             	mov    0x28(%esi),%eax
 879d327:	89 45 8c             	mov    %eax,-0x74(%ebp)
 879d32a:	8b 46 2c             	mov    0x2c(%esi),%eax
 879d32d:	89 45 90             	mov    %eax,-0x70(%ebp)
 879d330:	8b 83 c8 08 9a ff    	mov    -0x65f738(%ebx),%eax
 879d336:	89 45 94             	mov    %eax,-0x6c(%ebp)
 879d339:	8b 83 cc 08 9a ff    	mov    -0x65f734(%ebx),%eax
 879d33f:	89 45 98             	mov    %eax,-0x68(%ebp)
 879d342:	8b 83 d0 08 9a ff    	mov    -0x65f730(%ebx),%eax
 879d348:	89 45 9c             	mov    %eax,-0x64(%ebp)
 879d34b:	8b 83 d4 08 9a ff    	mov    -0x65f72c(%ebx),%eax
 879d351:	89 45 a0             	mov    %eax,-0x60(%ebp)
 879d354:	8b 83 d8 08 9a ff    	mov    -0x65f728(%ebx),%eax
 879d35a:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 879d35d:	8b 83 dc 08 9a ff    	mov    -0x65f724(%ebx),%eax
 879d363:	89 95 d0 fe ff ff    	mov    %edx,-0x130(%ebp)
 879d369:	89 3c 24             	mov    %edi,(%esp)
 879d36c:	89 45 a8             	mov    %eax,-0x58(%ebp)
 879d36f:	8b 83 e0 08 9a ff    	mov    -0x65f720(%ebx),%eax
 879d375:	89 45 ac             	mov    %eax,-0x54(%ebp)
 879d378:	8b 83 e4 08 9a ff    	mov    -0x65f71c(%ebx),%eax
 879d37e:	89 45 b0             	mov    %eax,-0x50(%ebp)
 879d381:	8b 83 e8 08 9a ff    	mov    -0x65f718(%ebx),%eax
 879d387:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 879d38a:	8b 83 ec 08 9a ff    	mov    -0x65f714(%ebx),%eax
 879d390:	89 45 b8             	mov    %eax,-0x48(%ebp)
 879d393:	e8 48 0f fb ff       	call   874e2e0 <_ZN5yaSSL3SSL9useHashesEv>
 879d398:	89 04 24             	mov    %eax,(%esp)
 879d39b:	e8 e0 14 fb ff       	call   874e880 <_ZN5yaSSL9sslHashes7use_SHAEv>
 879d3a0:	89 c1                	mov    %eax,%ecx
 879d3a2:	8b 00                	mov    (%eax),%eax
 879d3a4:	89 0c 24             	mov    %ecx,(%esp)
 879d3a7:	c7 44 24 0c 58 00 00 	movl   $0x58,0xc(%esp)
 879d3ae:	00 
 879d3af:	89 85 c4 fe ff ff    	mov    %eax,-0x13c(%ebp)
 879d3b5:	8b 85 dc fe ff ff    	mov    -0x124(%ebp),%eax
 879d3bb:	8b 8d c4 fe ff ff    	mov    -0x13c(%ebp),%ecx
 879d3c1:	89 44 24 08          	mov    %eax,0x8(%esp)
 879d3c5:	8b 85 d8 fe ff ff    	mov    -0x128(%ebp),%eax
 879d3cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 879d3cf:	ff 51 04             	call   *0x4(%ecx)
 879d3d2:	8b 95 d0 fe ff ff    	mov    -0x130(%ebp),%edx
 879d3d8:	8b 42 04             	mov    0x4(%edx),%eax
 879d3db:	89 85 f4 fe ff ff    	mov    %eax,-0x10c(%ebp)
 879d3e1:	8b 46 04             	mov    0x4(%esi),%eax
 879d3e4:	89 85 f8 fe ff ff    	mov    %eax,-0x108(%ebp)
 879d3ea:	8b 46 08             	mov    0x8(%esi),%eax
 879d3ed:	89 85 fc fe ff ff    	mov    %eax,-0x104(%ebp)
 879d3f3:	8b 46 0c             	mov    0xc(%esi),%eax
 879d3f6:	89 85 00 ff ff ff    	mov    %eax,-0x100(%ebp)
 879d3fc:	8b 46 10             	mov    0x10(%esi),%eax
 879d3ff:	89 85 04 ff ff ff    	mov    %eax,-0xfc(%ebp)
 879d405:	8b 46 14             	mov    0x14(%esi),%eax
 879d408:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
 879d40e:	8b 46 18             	mov    0x18(%esi),%eax
 879d411:	89 85 0c ff ff ff    	mov    %eax,-0xf4(%ebp)
 879d417:	8b 46 1c             	mov    0x1c(%esi),%eax
 879d41a:	89 85 10 ff ff ff    	mov    %eax,-0xf0(%ebp)
 879d420:	8b 46 20             	mov    0x20(%esi),%eax
 879d423:	89 85 14 ff ff ff    	mov    %eax,-0xec(%ebp)
 879d429:	8b 46 24             	mov    0x24(%esi),%eax
 879d42c:	89 85 18 ff ff ff    	mov    %eax,-0xe8(%ebp)
 879d432:	8b 46 28             	mov    0x28(%esi),%eax
 879d435:	89 85 1c ff ff ff    	mov    %eax,-0xe4(%ebp)
 879d43b:	8b 46 2c             	mov    0x2c(%esi),%eax
 879d43e:	89 85 20 ff ff ff    	mov    %eax,-0xe0(%ebp)
 879d444:	8b 83 08 09 9a ff    	mov    -0x65f6f8(%ebx),%eax
 879d44a:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
 879d450:	8b 83 0c 09 9a ff    	mov    -0x65f6f4(%ebx),%eax
 879d456:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 879d45c:	8b 83 10 09 9a ff    	mov    -0x65f6f0(%ebx),%eax
 879d462:	89 85 2c ff ff ff    	mov    %eax,-0xd4(%ebp)
 879d468:	8b 83 14 09 9a ff    	mov    -0x65f6ec(%ebx),%eax
 879d46e:	89 85 30 ff ff ff    	mov    %eax,-0xd0(%ebp)
 879d474:	8b 83 18 09 9a ff    	mov    -0x65f6e8(%ebx),%eax
 879d47a:	89 85 34 ff ff ff    	mov    %eax,-0xcc(%ebp)
 879d480:	8b 83 1c 09 9a ff    	mov    -0x65f6e4(%ebx),%eax
 879d486:	89 3c 24             	mov    %edi,(%esp)
 879d489:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
 879d48f:	8b 83 20 09 9a ff    	mov    -0x65f6e0(%ebx),%eax
 879d495:	89 85 3c ff ff ff    	mov    %eax,-0xc4(%ebp)
 879d49b:	8b 83 24 09 9a ff    	mov    -0x65f6dc(%ebx),%eax
 879d4a1:	89 85 40 ff ff ff    	mov    %eax,-0xc0(%ebp)
 879d4a7:	8b 83 28 09 9a ff    	mov    -0x65f6d8(%ebx),%eax
 879d4ad:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 879d4b3:	8b 83 2c 09 9a ff    	mov    -0x65f6d4(%ebx),%eax
 879d4b9:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 879d4bf:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 879d4c2:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 879d4c8:	8b 45 c8             	mov    -0x38(%ebp),%eax
 879d4cb:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 879d4d1:	8b 45 cc             	mov    -0x34(%ebp),%eax
 879d4d4:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 879d4da:	8b 45 d0             	mov    -0x30(%ebp),%eax
 879d4dd:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 879d4e3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 879d4e6:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
 879d4ec:	e8 ef 0d fb ff       	call   874e2e0 <_ZN5yaSSL3SSL9useHashesEv>
 879d4f1:	89 04 24             	mov    %eax,(%esp)
 879d4f4:	e8 87 13 fb ff       	call   874e880 <_ZN5yaSSL9sslHashes7use_SHAEv>
 879d4f9:	8b 8d d4 fe ff ff    	mov    -0x12c(%ebp),%ecx
 879d4ff:	8b 10                	mov    (%eax),%edx
 879d501:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 879d505:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 879d508:	c7 44 24 0c 6c 00 00 	movl   $0x6c,0xc(%esp)
 879d50f:	00 
 879d510:	89 04 24             	mov    %eax,(%esp)
 879d513:	83 c1 10             	add    $0x10,%ecx
 879d516:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879d51a:	ff 52 04             	call   *0x4(%edx)
 879d51d:	89 3c 24             	mov    %edi,(%esp)
 879d520:	e8 bb 0d fb ff       	call   874e2e0 <_ZN5yaSSL3SSL9useHashesEv>
 879d525:	89 04 24             	mov    %eax,(%esp)
 879d528:	e8 43 13 fb ff       	call   874e870 <_ZN5yaSSL9sslHashes7use_MD5Ev>
 879d52d:	8b 95 e4 fe ff ff    	mov    -0x11c(%ebp),%edx
 879d533:	89 54 24 04          	mov    %edx,0x4(%esp)
 879d537:	89 04 24             	mov    %eax,(%esp)
 879d53a:	e8 31 ca ff ff       	call   8799f70 <_ZN5yaSSL3MD5aSERKS0_>
 879d53f:	89 3c 24             	mov    %edi,(%esp)
 879d542:	e8 99 0d fb ff       	call   874e2e0 <_ZN5yaSSL3SSL9useHashesEv>
 879d547:	89 04 24             	mov    %eax,(%esp)
 879d54a:	e8 31 13 fb ff       	call   874e880 <_ZN5yaSSL9sslHashes7use_SHAEv>
 879d54f:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 879d555:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879d559:	89 04 24             	mov    %eax,(%esp)
 879d55c:	e8 6f c9 ff ff       	call   8799ed0 <_ZN5yaSSL3SHAaSERKS0_>
 879d561:	8b 85 e0 fe ff ff    	mov    -0x120(%ebp),%eax
 879d567:	89 04 24             	mov    %eax,(%esp)
 879d56a:	e8 41 b7 ff ff       	call   8798cb0 <_ZN5yaSSL3SHAD1Ev>
 879d56f:	8b 95 e4 fe ff ff    	mov    -0x11c(%ebp),%edx
 879d575:	89 14 24             	mov    %edx,(%esp)
 879d578:	e8 c3 b7 ff ff       	call   8798d40 <_ZN5yaSSL3MD5D1Ev>
 879d57d:	81 c4 4c 01 00 00    	add    $0x14c,%esp
 879d583:	5b                   	pop    %ebx
 879d584:	5e                   	pop    %esi
 879d585:	5f                   	pop    %edi
 879d586:	5d                   	pop    %ebp
 879d587:	c3                   	ret
 879d588:	89 3c 24             	mov    %edi,(%esp)
 879d58b:	e8 50 0d fb ff       	call   874e2e0 <_ZN5yaSSL3SSL9useHashesEv>
 879d590:	89 04 24             	mov    %eax,(%esp)
 879d593:	e8 d8 12 fb ff       	call   874e870 <_ZN5yaSSL9sslHashes7use_MD5Ev>
 879d598:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 879d59b:	8b 10                	mov    (%eax),%edx
 879d59d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879d5a1:	89 04 24             	mov    %eax,(%esp)
 879d5a4:	ff 12                	call   *(%edx)
 879d5a6:	89 3c 24             	mov    %edi,(%esp)
 879d5a9:	e8 32 0d fb ff       	call   874e2e0 <_ZN5yaSSL3SSL9useHashesEv>
 879d5ae:	89 04 24             	mov    %eax,(%esp)
 879d5b1:	e8 ca 12 fb ff       	call   874e880 <_ZN5yaSSL9sslHashes7use_SHAEv>
 879d5b6:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 879d5b9:	83 c1 10             	add    $0x10,%ecx
 879d5bc:	8b 10                	mov    (%eax),%edx
 879d5be:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879d5c2:	89 04 24             	mov    %eax,(%esp)
 879d5c5:	ff 12                	call   *(%edx)
 879d5c7:	e9 51 ff ff ff       	jmp    879d51d <_ZN5yaSSL16build_certHashesERNS_3SSLERNS_6HashesE+0x67d>
 879d5cc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::build_certHashes @ 0x879cea0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::build_certHashes(yaSSL::SSL&, yaSSL::Hashes&) */

void yaSSL::build_certHashes(SSL *param_1,Hashes *param_2)

{
  char cVar1;
  sslHashes *psVar2;
  MD5 *pMVar3;
  SHA *pSVar4;
  Security *pSVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  char local_e0 [40];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  char local_4c [12];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  SHA local_2c [8];
  MD5 local_24 [16];
  undefined4 uStack_14;
  
  uStack_14 = 0x879ceab;
  psVar2 = (sslHashes *)SSL::getHashes(param_1);
  pMVar3 = (MD5 *)sslHashes::get_MD5(psVar2);
  MD5::MD5(local_24,pMVar3);
  psVar2 = (sslHashes *)SSL::getHashes(param_1);
  pSVar4 = (SHA *)sslHashes::get_SHA(psVar2);
  SHA::SHA(local_2c,pSVar4);
  cVar1 = SSL::isTLS(param_1);
  if (cVar1 == '\0') {
    pSVar5 = (Security *)SSL::getSecurity(param_1);
    iVar6 = Security::get_connection(pSVar5);
    local_a0 = *(undefined4 *)(iVar6 + 4);
    local_9c = *(undefined4 *)(iVar6 + 8);
    local_98 = *(undefined4 *)(iVar6 + 0xc);
    local_94 = *(undefined4 *)(iVar6 + 0x10);
    local_90 = *(undefined4 *)(iVar6 + 0x14);
    local_8c = *(undefined4 *)(iVar6 + 0x18);
    local_88 = *(undefined4 *)(iVar6 + 0x1c);
    local_84 = *(undefined4 *)(iVar6 + 0x20);
    local_80 = *(undefined4 *)(iVar6 + 0x24);
    local_7c = *(undefined4 *)(iVar6 + 0x28);
    local_78 = *(undefined4 *)(iVar6 + 0x2c);
    local_74 = *(undefined4 *)(iVar6 + 0x30);
    local_70 = 0x36363636;
    local_6c = 0x36363636;
    local_68 = 0x36363636;
    local_64 = 0x36363636;
    local_60 = 0x36363636;
    local_5c = 0x36363636;
    local_58 = 0x36363636;
    local_54 = 0x36363636;
    local_50 = 0x36363636;
    builtin_strncpy(local_4c,"666666666666",0xc);
    psVar2 = (sslHashes *)SSL::useHashes(param_1);
    piVar7 = (int *)sslHashes::use_MD5(psVar2);
    (**(code **)(*piVar7 + 4))(piVar7,&local_40,&local_a0,0x60);
    local_110 = *(undefined4 *)(iVar6 + 4);
    local_10c = *(undefined4 *)(iVar6 + 8);
    local_108 = *(undefined4 *)(iVar6 + 0xc);
    local_104 = *(undefined4 *)(iVar6 + 0x10);
    local_100 = *(undefined4 *)(iVar6 + 0x14);
    local_fc = *(undefined4 *)(iVar6 + 0x18);
    local_f8 = *(undefined4 *)(iVar6 + 0x1c);
    local_f4 = *(undefined4 *)(iVar6 + 0x20);
    local_f0 = *(undefined4 *)(iVar6 + 0x24);
    local_ec = *(undefined4 *)(iVar6 + 0x28);
    local_e8 = *(undefined4 *)(iVar6 + 0x2c);
    local_e4 = *(undefined4 *)(iVar6 + 0x30);
    builtin_strncpy(local_e0,
                    "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"
                    ,0x28);
    local_b8 = 0x5c5c5c5c;
    local_b0 = local_40;
    local_b4 = 0x5c5c5c5c;
    local_ac = local_3c;
    local_a8 = local_38;
    local_a4 = local_34;
    psVar2 = (sslHashes *)SSL::useHashes(param_1);
    piVar7 = (int *)sslHashes::use_MD5(psVar2);
    (**(code **)(*piVar7 + 4))(piVar7,param_2,&local_110,0x70);
    pSVar5 = (Security *)SSL::getSecurity(param_1);
    iVar6 = Security::get_connection(pSVar5);
    local_a0 = *(undefined4 *)(iVar6 + 4);
    local_9c = *(undefined4 *)(iVar6 + 8);
    local_98 = *(undefined4 *)(iVar6 + 0xc);
    local_94 = *(undefined4 *)(iVar6 + 0x10);
    local_90 = *(undefined4 *)(iVar6 + 0x14);
    local_8c = *(undefined4 *)(iVar6 + 0x18);
    local_88 = *(undefined4 *)(iVar6 + 0x1c);
    local_84 = *(undefined4 *)(iVar6 + 0x20);
    local_80 = *(undefined4 *)(iVar6 + 0x24);
    local_7c = *(undefined4 *)(iVar6 + 0x28);
    local_78 = *(undefined4 *)(iVar6 + 0x2c);
    local_74 = *(undefined4 *)(iVar6 + 0x30);
    local_70 = PAD1;
    local_6c = DAT_08d0d464;
    local_68 = DAT_08d0d468;
    local_64 = DAT_08d0d46c;
    local_60 = DAT_08d0d470;
    local_5c = DAT_08d0d474;
    local_58 = DAT_08d0d478;
    local_54 = DAT_08d0d47c;
    local_50 = DAT_08d0d480;
    local_4c[0] = s_666666666666_08d0d484[0];
    local_4c[1] = s_666666666666_08d0d484[1];
    local_4c[2] = s_666666666666_08d0d484[2];
    local_4c[3] = s_666666666666_08d0d484[3];
    psVar2 = (sslHashes *)SSL::useHashes(param_1);
    piVar7 = (int *)sslHashes::use_SHA(psVar2);
    (**(code **)(*piVar7 + 4))(piVar7,&local_40,&local_a0,0x58);
    local_110 = *(undefined4 *)(iVar6 + 4);
    local_10c = *(undefined4 *)(iVar6 + 8);
    local_108 = *(undefined4 *)(iVar6 + 0xc);
    local_104 = *(undefined4 *)(iVar6 + 0x10);
    local_100 = *(undefined4 *)(iVar6 + 0x14);
    local_fc = *(undefined4 *)(iVar6 + 0x18);
    local_f8 = *(undefined4 *)(iVar6 + 0x1c);
    local_f4 = *(undefined4 *)(iVar6 + 0x20);
    local_f0 = *(undefined4 *)(iVar6 + 0x24);
    local_ec = *(undefined4 *)(iVar6 + 0x28);
    local_e8 = *(undefined4 *)(iVar6 + 0x2c);
    local_e4 = *(undefined4 *)(iVar6 + 0x30);
    local_e0[0] = PAD2[0];
    local_e0[1] = PAD2[1];
    local_e0[2] = PAD2[2];
    local_e0[3] = PAD2[3];
    local_e0[4] = PAD2[4];
    local_e0[5] = PAD2[5];
    local_e0[6] = PAD2[6];
    local_e0[7] = PAD2[7];
    local_e0[8] = PAD2[8];
    local_e0[9] = PAD2[9];
    local_e0[10] = PAD2[10];
    local_e0[0xb] = PAD2[0xb];
    local_e0[0xc] = PAD2[0xc];
    local_e0[0xd] = PAD2[0xd];
    local_e0[0xe] = PAD2[0xe];
    local_e0[0xf] = PAD2[0xf];
    local_e0[0x10] = PAD2[0x10];
    local_e0[0x11] = PAD2[0x11];
    local_e0[0x12] = PAD2[0x12];
    local_e0[0x13] = PAD2[0x13];
    local_e0[0x14] = PAD2[0x14];
    local_e0[0x15] = PAD2[0x15];
    local_e0[0x16] = PAD2[0x16];
    local_e0[0x17] = PAD2[0x17];
    local_e0[0x18] = PAD2[0x18];
    local_e0[0x19] = PAD2[0x19];
    local_e0[0x1a] = PAD2[0x1a];
    local_e0[0x1b] = PAD2[0x1b];
    local_e0[0x1c] = PAD2[0x1c];
    local_e0[0x1d] = PAD2[0x1d];
    local_e0[0x1e] = PAD2[0x1e];
    local_e0[0x1f] = PAD2[0x1f];
    local_e0[0x20] = PAD2[0x20];
    local_e0[0x21] = PAD2[0x21];
    local_e0[0x22] = PAD2[0x22];
    local_e0[0x23] = PAD2[0x23];
    local_e0[0x24] = PAD2[0x24];
    local_e0[0x25] = PAD2[0x25];
    local_e0[0x26] = PAD2[0x26];
    local_e0[0x27] = PAD2[0x27];
    local_b8 = local_40;
    local_b4 = local_3c;
    local_b0 = local_38;
    local_ac = local_34;
    local_a8 = local_30;
    psVar2 = (sslHashes *)SSL::useHashes(param_1);
    piVar7 = (int *)sslHashes::use_SHA(psVar2);
    (**(code **)(*piVar7 + 4))(piVar7,param_2 + 0x10,&local_110,0x6c);
  }
  else {
    psVar2 = (sslHashes *)SSL::useHashes(param_1);
    puVar8 = (undefined4 *)sslHashes::use_MD5(psVar2);
    (**(code **)*puVar8)(puVar8,param_2);
    psVar2 = (sslHashes *)SSL::useHashes(param_1);
    puVar8 = (undefined4 *)sslHashes::use_SHA(psVar2);
    (**(code **)*puVar8)(puVar8,param_2 + 0x10);
  }
  psVar2 = (sslHashes *)SSL::useHashes(param_1);
  pMVar3 = (MD5 *)sslHashes::use_MD5(psVar2);
  MD5::operator=(pMVar3,local_24);
  psVar2 = (sslHashes *)SSL::useHashes(param_1);
  pSVar4 = (SHA *)sslHashes::use_SHA(psVar2);
  SHA::operator=(pSVar4,local_2c);
  SHA::~SHA(local_2c);
  MD5::~MD5(local_24);
  return;
}

```

---

## c16toa

```asm
// === 0874ddd0 yaSSL::c16toa  [0x0874ddd0-0x874ddef] ===
 874ddd0:	55                   	push   %ebp
 874ddd1:	89 e5                	mov    %esp,%ebp
 874ddd3:	0f b7 55 08          	movzwl 0x8(%ebp),%edx
 874ddd7:	8b 45 0c             	mov    0xc(%ebp),%eax
 874ddda:	89 d1                	mov    %edx,%ecx
 874dddc:	66 c1 e9 08          	shr    $0x8,%cx
 874dde0:	88 08                	mov    %cl,(%eax)
 874dde2:	88 50 01             	mov    %dl,0x1(%eax)
 874dde5:	5d                   	pop    %ebp
 874dde6:	c3                   	ret
 874dde7:	89 f6                	mov    %esi,%esi
 874dde9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::c16toa @ 0x874ddd0

/* yaSSL::c16toa(unsigned short, unsigned char*) */

void yaSSL::c16toa(ushort param_1,uchar *param_2)

{
  *param_2 = (uchar)(param_1 >> 8);
  param_2[1] = (uchar)param_1;
  return;
}

```

---

## c24to32

```asm
// === 0874dd30 yaSSL::c24to32  [0x0874dd30-0x874dd5f] ===
 874dd30:	55                   	push   %ebp
 874dd31:	89 e5                	mov    %esp,%ebp
 874dd33:	8b 55 08             	mov    0x8(%ebp),%edx
 874dd36:	56                   	push   %esi
 874dd37:	8b 75 0c             	mov    0xc(%ebp),%esi
 874dd3a:	c7 06 00 00 00 00    	movl   $0x0,(%esi)
 874dd40:	0f b6 0a             	movzbl (%edx),%ecx
 874dd43:	0f b6 42 02          	movzbl 0x2(%edx),%eax
 874dd47:	0f b6 52 01          	movzbl 0x1(%edx),%edx
 874dd4b:	c1 e1 10             	shl    $0x10,%ecx
 874dd4e:	09 c8                	or     %ecx,%eax
 874dd50:	c1 e2 08             	shl    $0x8,%edx
 874dd53:	09 d0                	or     %edx,%eax
 874dd55:	89 06                	mov    %eax,(%esi)
 874dd57:	5e                   	pop    %esi
 874dd58:	5d                   	pop    %ebp
 874dd59:	c3                   	ret
 874dd5a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::c24to32 @ 0x874dd30

/* yaSSL::c24to32(unsigned char const*, unsigned int&) */

void yaSSL::c24to32(uchar *param_1,uint *param_2)

{
  *param_2 = 0;
  *param_2 = (uint)param_1[2] | (uint)*param_1 << 0x10 | (uint)param_1[1] << 8;
  return;
}

```

---

## c24to32_0874dd60

```asm
// === 0874dd60 yaSSL::c24to32  [0x0874dd60-0x874dd8f] ===
 874dd60:	55                   	push   %ebp
 874dd61:	89 e5                	mov    %esp,%ebp
 874dd63:	53                   	push   %ebx
 874dd64:	e8 8f 50 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874dd69:	81 c3 2f ee c1 00    	add    $0xc1ee2f,%ebx
 874dd6f:	83 ec 24             	sub    $0x24,%esp
 874dd72:	8d 45 f4             	lea    -0xc(%ebp),%eax
 874dd75:	89 44 24 04          	mov    %eax,0x4(%esp)
 874dd79:	8b 45 08             	mov    0x8(%ebp),%eax
 874dd7c:	89 04 24             	mov    %eax,(%esp)
 874dd7f:	e8 ac ff ff ff       	call   874dd30 <_ZN5yaSSL7c24to32EPKhRj>
 874dd84:	8b 45 f4             	mov    -0xc(%ebp),%eax
 874dd87:	83 c4 24             	add    $0x24,%esp
 874dd8a:	5b                   	pop    %ebx
 874dd8b:	5d                   	pop    %ebp
 874dd8c:	c3                   	ret
 874dd8d:	8d 76 00             	lea    0x0(%esi),%esi

```

```c
// yaSSL::c24to32 @ 0x874dd60

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::c24to32(unsigned char const*) */

uint yaSSL::c24to32(uchar *param_1)

{
  uint local_10 [2];
  
  local_10[1] = 0x874dd69;
  c24to32(param_1,local_10);
  return local_10[0];
}

```

---

## c24toa

```asm
// === 0874ddf0 yaSSL::c24toa  [0x0874ddf0-0x874de0f] ===
 874ddf0:	55                   	push   %ebp
 874ddf1:	89 e5                	mov    %esp,%ebp
 874ddf3:	8b 55 08             	mov    0x8(%ebp),%edx
 874ddf6:	8b 45 0c             	mov    0xc(%ebp),%eax
 874ddf9:	0f b6 0a             	movzbl (%edx),%ecx
 874ddfc:	88 08                	mov    %cl,(%eax)
 874ddfe:	0f b6 4a 01          	movzbl 0x1(%edx),%ecx
 874de02:	88 48 01             	mov    %cl,0x1(%eax)
 874de05:	0f b6 52 02          	movzbl 0x2(%edx),%edx
 874de09:	88 50 02             	mov    %dl,0x2(%eax)
 874de0c:	5d                   	pop    %ebp
 874de0d:	c3                   	ret
 874de0e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::c24toa @ 0x874ddf0

/* yaSSL::c24toa(unsigned char const*, unsigned char*) */

void yaSSL::c24toa(uchar *param_1,uchar *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  return;
}

```

---

## c32to24

```asm
// === 0874dd10 yaSSL::c32to24  [0x0874dd10-0x874dd2f] ===
 874dd10:	55                   	push   %ebp
 874dd11:	89 e5                	mov    %esp,%ebp
 874dd13:	8b 55 08             	mov    0x8(%ebp),%edx
 874dd16:	8b 45 0c             	mov    0xc(%ebp),%eax
 874dd19:	89 d1                	mov    %edx,%ecx
 874dd1b:	c1 e9 10             	shr    $0x10,%ecx
 874dd1e:	88 08                	mov    %cl,(%eax)
 874dd20:	89 d1                	mov    %edx,%ecx
 874dd22:	c1 e9 08             	shr    $0x8,%ecx
 874dd25:	88 48 01             	mov    %cl,0x1(%eax)
 874dd28:	88 50 02             	mov    %dl,0x2(%eax)
 874dd2b:	5d                   	pop    %ebp
 874dd2c:	c3                   	ret
 874dd2d:	8d 76 00             	lea    0x0(%esi),%esi

```

```c
// yaSSL::c32to24 @ 0x874dd10

/* yaSSL::c32to24(unsigned int, unsigned char (&) [3]) */

void yaSSL::c32to24(uint param_1,unsigned_char *param_2)

{
  *param_2 = SUB41(param_1 >> 0x10,0);
  param_2[1] = SUB41(param_1 >> 8,0);
  param_2[2] = SUB41(param_1,0);
  return;
}

```

---

## c32toa

```asm
// === 0874de10 yaSSL::c32toa  [0x0874de10-0x874de3f] ===
 874de10:	55                   	push   %ebp
 874de11:	89 e5                	mov    %esp,%ebp
 874de13:	8b 55 08             	mov    0x8(%ebp),%edx
 874de16:	8b 45 0c             	mov    0xc(%ebp),%eax
 874de19:	89 d1                	mov    %edx,%ecx
 874de1b:	c1 e9 18             	shr    $0x18,%ecx
 874de1e:	88 08                	mov    %cl,(%eax)
 874de20:	89 d1                	mov    %edx,%ecx
 874de22:	c1 e9 10             	shr    $0x10,%ecx
 874de25:	88 48 01             	mov    %cl,0x1(%eax)
 874de28:	89 d1                	mov    %edx,%ecx
 874de2a:	c1 e9 08             	shr    $0x8,%ecx
 874de2d:	88 48 02             	mov    %cl,0x2(%eax)
 874de30:	88 50 03             	mov    %dl,0x3(%eax)
 874de33:	5d                   	pop    %ebp
 874de34:	c3                   	ret
 874de35:	90                   	nop
 874de36:	8d 76 00             	lea    0x0(%esi),%esi
 874de39:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::c32toa @ 0x874de10

/* yaSSL::c32toa(unsigned int, unsigned char*) */

void yaSSL::c32toa(uint param_1,uchar *param_2)

{
  *param_2 = (uchar)(param_1 >> 0x18);
  param_2[1] = (uchar)(param_1 >> 0x10);
  param_2[2] = (uchar)(param_1 >> 8);
  param_2[3] = (uchar)param_1;
  return;
}

```

---

## clean

```asm
// === 08747c30 yaSSL::clean  [0x08747c30-0x8747caf] ===
 8747c30:	55                   	push   %ebp
 8747c31:	89 e5                	mov    %esp,%ebp
 8747c33:	57                   	push   %edi
 8747c34:	56                   	push   %esi
 8747c35:	53                   	push   %ebx
 8747c36:	83 ec 1c             	sub    $0x1c,%esp
 8747c39:	8b 75 0c             	mov    0xc(%ebp),%esi
 8747c3c:	e8 b7 b1 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8747c41:	81 c3 57 4f c2 00    	add    $0xc24f57,%ebx
 8747c47:	8b 7d 08             	mov    0x8(%ebp),%edi
 8747c4a:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8747c4d:	85 f6                	test   %esi,%esi
 8747c4f:	74 3c                	je     8747c8d <_ZN5yaSSL5cleanEPVhjRNS_10RandomPoolE+0x5d>
 8747c51:	31 c0                	xor    %eax,%eax
 8747c53:	90                   	nop
 8747c54:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8747c58:	8d 14 07             	lea    (%edi,%eax,1),%edx
 8747c5b:	83 c0 01             	add    $0x1,%eax
 8747c5e:	39 c6                	cmp    %eax,%esi
 8747c60:	c6 02 00             	movb   $0x0,(%edx)
 8747c63:	77 f3                	ja     8747c58 <_ZN5yaSSL5cleanEPVhjRNS_10RandomPoolE+0x28>
 8747c65:	89 74 24 08          	mov    %esi,0x8(%esp)
 8747c69:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8747c6d:	89 0c 24             	mov    %ecx,(%esp)
 8747c70:	e8 4b 13 05 00       	call   8798fc0 <_ZNK5yaSSL10RandomPool4FillEPhj>
 8747c75:	31 c0                	xor    %eax,%eax
 8747c77:	90                   	nop
 8747c78:	8d 14 07             	lea    (%edi,%eax,1),%edx
 8747c7b:	83 c0 01             	add    $0x1,%eax
 8747c7e:	39 c6                	cmp    %eax,%esi
 8747c80:	c6 02 00             	movb   $0x0,(%edx)
 8747c83:	77 f3                	ja     8747c78 <_ZN5yaSSL5cleanEPVhjRNS_10RandomPoolE+0x48>
 8747c85:	83 c4 1c             	add    $0x1c,%esp
 8747c88:	5b                   	pop    %ebx
 8747c89:	5e                   	pop    %esi
 8747c8a:	5f                   	pop    %edi
 8747c8b:	5d                   	pop    %ebp
 8747c8c:	c3                   	ret
 8747c8d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8747c94:	00 
 8747c95:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8747c99:	89 0c 24             	mov    %ecx,(%esp)
 8747c9c:	e8 1f 13 05 00       	call   8798fc0 <_ZNK5yaSSL10RandomPool4FillEPhj>
 8747ca1:	eb e2                	jmp    8747c85 <_ZN5yaSSL5cleanEPVhjRNS_10RandomPoolE+0x55>
 8747ca3:	90                   	nop
 8747ca4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8747caa:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::clean @ 0x8747c30

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::clean(unsigned char volatile*, unsigned int, yaSSL::RandomPool&) */

void yaSSL::clean(uchar *param_1,uint param_2,RandomPool *param_3)

{
  uchar *puVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    RandomPool::Fill(param_3,param_1,0);
  }
  else {
    uVar2 = 0;
    do {
      puVar1 = param_1 + uVar2;
      uVar2 = uVar2 + 1;
      *puVar1 = '\0';
    } while (uVar2 < param_2);
    RandomPool::Fill(param_3,param_1,param_2);
    uVar2 = 0;
    do {
      puVar1 = param_1 + uVar2;
      uVar2 = uVar2 + 1;
      *puVar1 = '\0';
    } while (uVar2 < param_2);
  }
  return;
}

```

---

## hashHandShake

```asm
// === 0879ce10 yaSSL::hashHandShake  [0x0879ce10-0x879ce9f] ===
 879ce10:	55                   	push   %ebp
 879ce11:	89 e5                	mov    %esp,%ebp
 879ce13:	83 ec 28             	sub    $0x28,%esp
 879ce16:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 879ce19:	e8 da 5f f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879ce1e:	81 c3 7a fd bc 00    	add    $0xbcfd7a,%ebx
 879ce24:	89 75 f8             	mov    %esi,-0x8(%ebp)
 879ce27:	8b 75 0c             	mov    0xc(%ebp),%esi
 879ce2a:	89 7d fc             	mov    %edi,-0x4(%ebp)
 879ce2d:	89 34 24             	mov    %esi,(%esp)
 879ce30:	e8 fb 9e ff ff       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 879ce35:	89 34 24             	mov    %esi,(%esp)
 879ce38:	89 c7                	mov    %eax,%edi
 879ce3a:	e8 61 9f ff ff       	call   8796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>
 879ce3f:	8d 74 07 fc          	lea    -0x4(%edi,%eax,1),%esi
 879ce43:	8b 45 08             	mov    0x8(%ebp),%eax
 879ce46:	8b 7d 10             	mov    0x10(%ebp),%edi
 879ce49:	89 04 24             	mov    %eax,(%esp)
 879ce4c:	e8 8f 14 fb ff       	call   874e2e0 <_ZN5yaSSL3SSL9useHashesEv>
 879ce51:	83 c7 04             	add    $0x4,%edi
 879ce54:	89 04 24             	mov    %eax,(%esp)
 879ce57:	e8 14 1a fb ff       	call   874e870 <_ZN5yaSSL9sslHashes7use_MD5Ev>
 879ce5c:	8b 10                	mov    (%eax),%edx
 879ce5e:	89 7c 24 08          	mov    %edi,0x8(%esp)
 879ce62:	89 74 24 04          	mov    %esi,0x4(%esp)
 879ce66:	89 04 24             	mov    %eax,(%esp)
 879ce69:	ff 52 08             	call   *0x8(%edx)
 879ce6c:	8b 45 08             	mov    0x8(%ebp),%eax
 879ce6f:	89 04 24             	mov    %eax,(%esp)
 879ce72:	e8 69 14 fb ff       	call   874e2e0 <_ZN5yaSSL3SSL9useHashesEv>
 879ce77:	89 04 24             	mov    %eax,(%esp)
 879ce7a:	e8 01 1a fb ff       	call   874e880 <_ZN5yaSSL9sslHashes7use_SHAEv>
 879ce7f:	8b 10                	mov    (%eax),%edx
 879ce81:	89 7c 24 08          	mov    %edi,0x8(%esp)
 879ce85:	89 74 24 04          	mov    %esi,0x4(%esp)
 879ce89:	89 04 24             	mov    %eax,(%esp)
 879ce8c:	ff 52 08             	call   *0x8(%edx)
 879ce8f:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 879ce92:	8b 75 f8             	mov    -0x8(%ebp),%esi
 879ce95:	8b 7d fc             	mov    -0x4(%ebp),%edi
 879ce98:	89 ec                	mov    %ebp,%esp
 879ce9a:	5d                   	pop    %ebp
 879ce9b:	c3                   	ret
 879ce9c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::hashHandShake @ 0x879ce10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::hashHandShake(yaSSL::SSL&, yaSSL::input_buffer const&, unsigned int) */

void yaSSL::hashHandShake(SSL *param_1,input_buffer *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  sslHashes *psVar3;
  int *piVar4;
  
  iVar1 = input_buffer::get_buffer(param_2);
  iVar2 = input_buffer::get_current(param_2);
  iVar2 = iVar1 + -4 + iVar2;
  psVar3 = (sslHashes *)SSL::useHashes(param_1);
  piVar4 = (int *)sslHashes::use_MD5(psVar3);
  (**(code **)(*piVar4 + 8))(piVar4,iVar2,param_3 + 4);
  psVar3 = (sslHashes *)SSL::useHashes(param_1);
  piVar4 = (int *)sslHashes::use_SHA(psVar3);
  (**(code **)(*piVar4 + 8))(piVar4,iVar2,param_3 + 4);
  return;
}

```

---

## hmac

```asm
// === 0879d5d0 yaSSL::hmac  [0x0879d5d0-0x879d7df] ===
 879d5d0:	55                   	push   %ebp
 879d5d1:	89 e5                	mov    %esp,%ebp
 879d5d3:	57                   	push   %edi
 879d5d4:	56                   	push   %esi
 879d5d5:	53                   	push   %ebx
 879d5d6:	e8 1d 58 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879d5db:	81 c3 bd f5 bc 00    	add    $0xbcf5bd,%ebx
 879d5e1:	81 ec 2c 01 00 00    	sub    $0x12c,%esp
 879d5e7:	8b 55 08             	mov    0x8(%ebp),%edx
 879d5ea:	0f b6 45 1c          	movzbl 0x1c(%ebp),%eax
 879d5ee:	89 14 24             	mov    %edx,(%esp)
 879d5f1:	88 85 10 ff ff ff    	mov    %al,-0xf0(%ebp)
 879d5f7:	e8 b4 0c fb ff       	call   874e2b0 <_ZN5yaSSL3SSL9useCryptoEv>
 879d5fc:	89 04 24             	mov    %eax,(%esp)
 879d5ff:	e8 9c 11 fb ff       	call   874e7a0 <_ZN5yaSSL6Crypto10use_digestEv>
 879d604:	89 c6                	mov    %eax,%esi
 879d606:	8b 00                	mov    (%eax),%eax
 879d608:	89 34 24             	mov    %esi,(%esp)
 879d60b:	ff 50 0c             	call   *0xc(%eax)
 879d60e:	89 c7                	mov    %eax,%edi
 879d610:	8b 06                	mov    (%esi),%eax
 879d612:	89 34 24             	mov    %esi,(%esp)
 879d615:	ff 50 10             	call   *0x10(%eax)
 879d618:	0f b6 8d 10 ff ff ff 	movzbl -0xf0(%ebp),%ecx
 879d61f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879d623:	89 8d 08 ff ff ff    	mov    %ecx,-0xf8(%ebp)
 879d629:	89 85 0c ff ff ff    	mov    %eax,-0xf4(%ebp)
 879d62f:	01 f8                	add    %edi,%eax
 879d631:	89 85 f4 fe ff ff    	mov    %eax,-0x10c(%ebp)
 879d637:	8b 45 08             	mov    0x8(%ebp),%eax
 879d63a:	89 04 24             	mov    %eax,(%esp)
 879d63d:	e8 0e 16 fb ff       	call   874ec50 <_ZN5yaSSL3SSL13get_macSecretEb>
 879d642:	c7 45 de 00 00 00 00 	movl   $0x0,-0x22(%ebp)
 879d649:	c7 45 e2 00 00 00 00 	movl   $0x0,-0x1e(%ebp)
 879d650:	89 85 10 ff ff ff    	mov    %eax,-0xf0(%ebp)
 879d656:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 879d659:	89 44 24 04          	mov    %eax,0x4(%esp)
 879d65d:	0f b7 45 14          	movzwl 0x14(%ebp),%eax
 879d661:	89 04 24             	mov    %eax,(%esp)
 879d664:	e8 67 07 fb ff       	call   874ddd0 <_ZN5yaSSL6c16toaEtPh>
 879d669:	8b 55 08             	mov    0x8(%ebp),%edx
 879d66c:	8b 8d 08 ff ff ff    	mov    -0xf8(%ebp),%ecx
 879d672:	89 14 24             	mov    %edx,(%esp)
 879d675:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879d679:	e8 92 16 fb ff       	call   874ed10 <_ZN5yaSSL3SSL16get_SEQIncrementEb>
 879d67e:	8d 4d e2             	lea    -0x1e(%ebp),%ecx
 879d681:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879d685:	89 04 24             	mov    %eax,(%esp)
 879d688:	e8 83 07 fb ff       	call   874de10 <_ZN5yaSSL6c32toaEjPh>
 879d68d:	8b 85 10 ff ff ff    	mov    -0xf0(%ebp),%eax
 879d693:	8d 8d 7b ff ff ff    	lea    -0x85(%ebp),%ecx
 879d699:	89 8d e4 fe ff ff    	mov    %ecx,-0x11c(%ebp)
 879d69f:	89 7c 24 08          	mov    %edi,0x8(%esp)
 879d6a3:	89 0c 24             	mov    %ecx,(%esp)
 879d6a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 879d6aa:	e8 f1 01 8e ff       	call   807d8a0 <memcpy@plt>
 879d6af:	8b 95 e4 fe ff ff    	mov    -0x11c(%ebp),%edx
 879d6b5:	8d 83 c8 08 9a ff    	lea    -0x65f738(%ebx),%eax
 879d6bb:	8b 8d 0c ff ff ff    	mov    -0xf4(%ebp),%ecx
 879d6c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 879d6c5:	01 fa                	add    %edi,%edx
 879d6c7:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 879d6cb:	89 14 24             	mov    %edx,(%esp)
 879d6ce:	e8 cd 01 8e ff       	call   807d8a0 <memcpy@plt>
 879d6d3:	8b 8d f4 fe ff ff    	mov    -0x10c(%ebp),%ecx
 879d6d9:	8b 45 de             	mov    -0x22(%ebp),%eax
 879d6dc:	8b 55 e2             	mov    -0x1e(%ebp),%edx
 879d6df:	89 84 0d 7b ff ff ff 	mov    %eax,-0x85(%ebp,%ecx,1)
 879d6e6:	89 94 0d 7f ff ff ff 	mov    %edx,-0x81(%ebp,%ecx,1)
 879d6ed:	8b 45 18             	mov    0x18(%ebp),%eax
 879d6f0:	88 44 0d 83          	mov    %al,-0x7d(%ebp,%ecx,1)
 879d6f4:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 879d6f8:	66 89 44 0d 84       	mov    %ax,-0x7c(%ebp,%ecx,1)
 879d6fd:	89 c8                	mov    %ecx,%eax
 879d6ff:	8b 16                	mov    (%esi),%edx
 879d701:	83 c0 0b             	add    $0xb,%eax
 879d704:	89 44 24 08          	mov    %eax,0x8(%esp)
 879d708:	8b 85 e4 fe ff ff    	mov    -0x11c(%ebp),%eax
 879d70e:	89 34 24             	mov    %esi,(%esp)
 879d711:	89 44 24 04          	mov    %eax,0x4(%esp)
 879d715:	ff 52 08             	call   *0x8(%edx)
 879d718:	8b 4d 10             	mov    0x10(%ebp),%ecx
 879d71b:	8b 06                	mov    (%esi),%eax
 879d71d:	8b 55 14             	mov    0x14(%ebp),%edx
 879d720:	89 34 24             	mov    %esi,(%esp)
 879d723:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 879d727:	8d 4d ca             	lea    -0x36(%ebp),%ecx
 879d72a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879d72e:	89 8d 08 ff ff ff    	mov    %ecx,-0xf8(%ebp)
 879d734:	89 54 24 0c          	mov    %edx,0xc(%esp)
 879d738:	ff 50 04             	call   *0x4(%eax)
 879d73b:	8b 95 10 ff ff ff    	mov    -0xf0(%ebp),%edx
 879d741:	8d 85 23 ff ff ff    	lea    -0xdd(%ebp),%eax
 879d747:	89 7c 24 08          	mov    %edi,0x8(%esp)
 879d74b:	89 85 14 ff ff ff    	mov    %eax,-0xec(%ebp)
 879d751:	89 04 24             	mov    %eax,(%esp)
 879d754:	89 54 24 04          	mov    %edx,0x4(%esp)
 879d758:	e8 43 01 8e ff       	call   807d8a0 <memcpy@plt>
 879d75d:	8b 85 0c ff ff ff    	mov    -0xf4(%ebp),%eax
 879d763:	8b 95 14 ff ff ff    	mov    -0xec(%ebp),%edx
 879d769:	89 44 24 08          	mov    %eax,0x8(%esp)
 879d76d:	8d 83 08 09 9a ff    	lea    -0x65f6f8(%ebx),%eax
 879d773:	01 fa                	add    %edi,%edx
 879d775:	89 14 24             	mov    %edx,(%esp)
 879d778:	89 44 24 04          	mov    %eax,0x4(%esp)
 879d77c:	e8 1f 01 8e ff       	call   807d8a0 <memcpy@plt>
 879d781:	8b 8d 08 ff ff ff    	mov    -0xf8(%ebp),%ecx
 879d787:	8b 85 14 ff ff ff    	mov    -0xec(%ebp),%eax
 879d78d:	03 85 f4 fe ff ff    	add    -0x10c(%ebp),%eax
 879d793:	89 7c 24 08          	mov    %edi,0x8(%esp)
 879d797:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879d79b:	89 04 24             	mov    %eax,(%esp)
 879d79e:	e8 fd 00 8e ff       	call   807d8a0 <memcpy@plt>
 879d7a3:	8b 95 14 ff ff ff    	mov    -0xec(%ebp),%edx
 879d7a9:	8b 06                	mov    (%esi),%eax
 879d7ab:	03 bd f4 fe ff ff    	add    -0x10c(%ebp),%edi
 879d7b1:	89 34 24             	mov    %esi,(%esp)
 879d7b4:	89 54 24 08          	mov    %edx,0x8(%esp)
 879d7b8:	8b 55 0c             	mov    0xc(%ebp),%edx
 879d7bb:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 879d7bf:	89 54 24 04          	mov    %edx,0x4(%esp)
 879d7c3:	ff 50 04             	call   *0x4(%eax)
 879d7c6:	81 c4 2c 01 00 00    	add    $0x12c,%esp
 879d7cc:	5b                   	pop    %ebx
 879d7cd:	5e                   	pop    %esi
 879d7ce:	5f                   	pop    %edi
 879d7cf:	5d                   	pop    %ebp
 879d7d0:	c3                   	ret
 879d7d1:	eb 0d                	jmp    879d7e0 <_ZN5yaSSL21ProcessOldClientHelloERNS_12input_bufferERNS_3SSLE>
 879d7d3:	90                   	nop
 879d7d4:	90                   	nop
 879d7d5:	90                   	nop
 879d7d6:	90                   	nop
 879d7d7:	90                   	nop
 879d7d8:	90                   	nop
 879d7d9:	90                   	nop
 879d7da:	90                   	nop
 879d7db:	90                   	nop
 879d7dc:	90                   	nop
 879d7dd:	90                   	nop
 879d7de:	90                   	nop
 879d7df:	90                   	nop

```

```c
// yaSSL::hmac @ 0x879d5d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::hmac(yaSSL::SSL&, unsigned char*, unsigned char const*, unsigned int, yaSSL::ContentType,
   bool) */

void yaSSL::hmac(SSL *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined1 param_5,bool param_6)

{
  undefined4 uVar1;
  Crypto *this;
  int *piVar2;
  size_t __n;
  size_t __n_00;
  int iVar3;
  void *__src;
  uint uVar4;
  undefined1 local_e1 [88];
  undefined4 local_89 [2];
  undefined1 uStack_81;
  undefined2 auStack_80 [35];
  undefined1 local_3a [20];
  undefined4 local_26;
  undefined4 local_22;
  undefined2 local_1e [5];
  undefined4 uStack_14;
  
  uStack_14 = 0x879d5db;
  this = (Crypto *)SSL::useCrypto(param_1);
  piVar2 = (int *)Crypto::use_digest(this);
  __n = (**(code **)(*piVar2 + 0xc))(piVar2);
  __n_00 = (**(code **)(*piVar2 + 0x10))(piVar2);
  iVar3 = __n_00 + __n;
  __src = (void *)SSL::get_macSecret(param_1,param_6);
  local_26 = 0;
  local_22 = 0;
  c16toa((ushort)param_4,(uchar *)local_1e);
  uVar4 = SSL::get_SEQIncrement(param_1,param_6);
  c32toa(uVar4,(uchar *)&local_22);
  memcpy(local_89,__src,__n);
  memcpy((void *)((int)local_89 + __n),&PAD1,__n_00);
  uVar1 = local_22;
  *(undefined4 *)((int)local_89 + iVar3) = local_26;
  *(undefined4 *)((int)local_89 + iVar3 + 4) = uVar1;
  (&uStack_81)[iVar3] = param_5;
  *(undefined2 *)((int)auStack_80 + iVar3) = local_1e[0];
  (**(code **)(*piVar2 + 8))(piVar2,local_89,iVar3 + 0xb);
  (**(code **)(*piVar2 + 4))(piVar2,local_3a,param_3,param_4);
  memcpy(local_e1,__src,__n);
  memcpy(local_e1 + __n,
         "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\client finished"
         ,__n_00);
  memcpy(local_e1 + iVar3,local_3a,__n);
  (**(code **)(*piVar2 + 4))(piVar2,param_2,local_e1,__n + iVar3);
  return;
}

```

---

## lowResTimer

```asm
// === 087a1750 yaSSL::lowResTimer  [0x087a1750-0x87a177f] ===
 87a1750:	55                   	push   %ebp
 87a1751:	89 e5                	mov    %esp,%ebp
 87a1753:	53                   	push   %ebx
 87a1754:	e8 9f 16 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a1759:	81 c3 3f b4 bc 00    	add    $0xbcb43f,%ebx
 87a175f:	83 ec 24             	sub    $0x24,%esp
 87a1762:	8d 45 f0             	lea    -0x10(%ebp),%eax
 87a1765:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a176c:	00 
 87a176d:	89 04 24             	mov    %eax,(%esp)
 87a1770:	e8 7b cb 8d ff       	call   807e2f0 <gettimeofday@plt>
 87a1775:	8b 45 f0             	mov    -0x10(%ebp),%eax
 87a1778:	83 c4 24             	add    $0x24,%esp
 87a177b:	5b                   	pop    %ebx
 87a177c:	5d                   	pop    %ebp
 87a177d:	c3                   	ret
 87a177e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::lowResTimer @ 0x87a1750

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::lowResTimer() */

__time_t yaSSL::lowResTimer(void)

{
  timeval local_14;
  undefined4 uStack_c;
  
  uStack_c = 0x87a1759;
  gettimeofday(&local_14,(__timezone_ptr_t)0x0);
  return local_14.tv_sec;
}

```

---

## operator_gt__gt_

```asm
// === 08746a30 yaSSL::operator>>  [0x08746a30-0x8746a4f] ===
 8746a30:	55                   	push   %ebp
 8746a31:	89 e5                	mov    %esp,%ebp
 8746a33:	83 ec 18             	sub    $0x18,%esp
 8746a36:	8b 45 0c             	mov    0xc(%ebp),%eax
 8746a39:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8746a3c:	8b 10                	mov    (%eax),%edx
 8746a3e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8746a42:	89 04 24             	mov    %eax,(%esp)
 8746a45:	ff 12                	call   *(%edx)
 8746a47:	c9                   	leave
 8746a48:	c3                   	ret
 8746a49:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::operator>> @ 0x8746a30

/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::input_buffer&, yaSSL::Message&) */

void yaSSL::operator>>(input_buffer *param_1,Message *param_2)

{
  (*(code *)**(undefined4 **)param_2)(param_2,param_1);
  return;
}

```

---

## operator_gt__gt__08746cd0

```asm
// === 08746cd0 yaSSL::operator>>  [0x08746cd0-0x8746cef] ===
 8746cd0:	55                   	push   %ebp
 8746cd1:	89 e5                	mov    %esp,%ebp
 8746cd3:	83 ec 18             	sub    $0x18,%esp
 8746cd6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8746cd9:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8746cdc:	8b 10                	mov    (%eax),%edx
 8746cde:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8746ce2:	89 04 24             	mov    %eax,(%esp)
 8746ce5:	ff 52 04             	call   *0x4(%edx)
 8746ce8:	c9                   	leave
 8746ce9:	c3                   	ret
 8746cea:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::operator>> @ 0x8746cd0

/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::input_buffer&, yaSSL::HandShakeBase&) */

void yaSSL::operator>>(input_buffer *param_1,HandShakeBase *param_2)

{
  (**(code **)(*(int *)param_2 + 4))(param_2,param_1);
  return;
}

```

---

## operator_gt__gt__08747190

```asm
// === 08747190 yaSSL::operator>>  [0x08747190-0x874719f] ===
 8747190:	55                   	push   %ebp
 8747191:	89 e5                	mov    %esp,%ebp
 8747193:	8b 45 08             	mov    0x8(%ebp),%eax
 8747196:	5d                   	pop    %ebp
 8747197:	c3                   	ret
 8747198:	90                   	nop
 8747199:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::operator>> @ 0x8747190

/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::input_buffer&, yaSSL::Finished&) */

input_buffer * yaSSL::operator>>(input_buffer *param_1,Finished *param_2)

{
  return param_1;
}

```

---

## operator_gt__gt__08747d10

```asm
// === 08747d10 yaSSL::operator>>  [0x08747d10-0x8747def] ===
 8747d10:	55                   	push   %ebp
 8747d11:	89 e5                	mov    %esp,%ebp
 8747d13:	57                   	push   %edi
 8747d14:	56                   	push   %esi
 8747d15:	53                   	push   %ebx
 8747d16:	e8 dd b0 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8747d1b:	81 c3 7d 4e c2 00    	add    $0xc24e7d,%ebx
 8747d21:	83 ec 1c             	sub    $0x1c,%esp
 8747d24:	8b 75 08             	mov    0x8(%ebp),%esi
 8747d27:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8747d2a:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8747d31:	fe 
 8747d32:	89 34 24             	mov    %esi,(%esp)
 8747d35:	e8 e6 f0 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 8747d3a:	0f b6 00             	movzbl (%eax),%eax
 8747d3d:	88 47 08             	mov    %al,0x8(%edi)
 8747d40:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8747d47:	fe 
 8747d48:	89 34 24             	mov    %esi,(%esp)
 8747d4b:	e8 d0 f0 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 8747d50:	0f b6 00             	movzbl (%eax),%eax
 8747d53:	88 47 09             	mov    %al,0x9(%edi)
 8747d56:	8d 47 0a             	lea    0xa(%edi),%eax
 8747d59:	89 44 24 04          	mov    %eax,0x4(%esp)
 8747d5d:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 8747d64:	00 
 8747d65:	89 34 24             	mov    %esi,(%esp)
 8747d68:	e8 d3 f2 04 00       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 8747d6d:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8747d74:	fe 
 8747d75:	89 34 24             	mov    %esi,(%esp)
 8747d78:	e8 a3 f0 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 8747d7d:	0f b6 00             	movzbl (%eax),%eax
 8747d80:	84 c0                	test   %al,%al
 8747d82:	88 47 2a             	mov    %al,0x2a(%edi)
 8747d85:	74 16                	je     8747d9d <_ZN5yaSSLrsERNS_12input_bufferERNS_11ServerHelloE+0x8d>
 8747d87:	0f b6 c0             	movzbl %al,%eax
 8747d8a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8747d8e:	8d 47 2b             	lea    0x2b(%edi),%eax
 8747d91:	89 44 24 04          	mov    %eax,0x4(%esp)
 8747d95:	89 34 24             	mov    %esi,(%esp)
 8747d98:	e8 a3 f2 04 00       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 8747d9d:	89 34 24             	mov    %esi,(%esp)
 8747da0:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8747da7:	fe 
 8747da8:	e8 73 f0 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 8747dad:	0f b6 00             	movzbl (%eax),%eax
 8747db0:	88 47 4b             	mov    %al,0x4b(%edi)
 8747db3:	89 34 24             	mov    %esi,(%esp)
 8747db6:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8747dbd:	fe 
 8747dbe:	e8 5d f0 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 8747dc3:	0f b6 00             	movzbl (%eax),%eax
 8747dc6:	88 47 4c             	mov    %al,0x4c(%edi)
 8747dc9:	89 34 24             	mov    %esi,(%esp)
 8747dcc:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8747dd3:	fe 
 8747dd4:	e8 47 f0 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 8747dd9:	0f b6 00             	movzbl (%eax),%eax
 8747ddc:	89 47 50             	mov    %eax,0x50(%edi)
 8747ddf:	83 c4 1c             	add    $0x1c,%esp
 8747de2:	89 f0                	mov    %esi,%eax
 8747de4:	5b                   	pop    %ebx
 8747de5:	5e                   	pop    %esi
 8747de6:	5f                   	pop    %edi
 8747de7:	5d                   	pop    %ebp
 8747de8:	c3                   	ret
 8747de9:	90                   	nop
 8747dea:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::operator>> @ 0x8747d10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::input_buffer&, yaSSL::ServerHello&) */

input_buffer * yaSSL::operator>>(input_buffer *param_1,ServerHello *param_2)

{
  ServerHello SVar1;
  ServerHello *pSVar2;
  byte *pbVar3;
  
  pSVar2 = (ServerHello *)input_buffer::operator[]((uint)param_1);
  param_2[8] = *pSVar2;
  pSVar2 = (ServerHello *)input_buffer::operator[]((uint)param_1);
  param_2[9] = *pSVar2;
  input_buffer::read(param_1,(uchar *)(param_2 + 10),0x20);
  pSVar2 = (ServerHello *)input_buffer::operator[]((uint)param_1);
  SVar1 = *pSVar2;
  param_2[0x2a] = SVar1;
  if (SVar1 != (ServerHello)0x0) {
    input_buffer::read(param_1,(uchar *)(param_2 + 0x2b),(uint)(byte)SVar1);
  }
  pSVar2 = (ServerHello *)input_buffer::operator[]((uint)param_1);
  param_2[0x4b] = *pSVar2;
  pSVar2 = (ServerHello *)input_buffer::operator[]((uint)param_1);
  param_2[0x4c] = *pSVar2;
  pbVar3 = (byte *)input_buffer::operator[]((uint)param_1);
  *(uint *)(param_2 + 0x50) = (uint)*pbVar3;
  return param_1;
}

```

---

## operator_gt__gt__08747e20

```asm
// === 08747e20 yaSSL::operator>>  [0x08747e20-0x8747e7f] ===
 8747e20:	55                   	push   %ebp
 8747e21:	89 e5                	mov    %esp,%ebp
 8747e23:	83 ec 28             	sub    $0x28,%esp
 8747e26:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8747e29:	e8 ca af fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8747e2e:	81 c3 6a 4d c2 00    	add    $0xc24d6a,%ebx
 8747e34:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8747e37:	8b 75 08             	mov    0x8(%ebp),%esi
 8747e3a:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8747e3d:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8747e40:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8747e47:	fe 
 8747e48:	89 34 24             	mov    %esi,(%esp)
 8747e4b:	e8 d0 ef 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 8747e50:	0f b6 00             	movzbl (%eax),%eax
 8747e53:	89 47 04             	mov    %eax,0x4(%edi)
 8747e56:	89 34 24             	mov    %esi,(%esp)
 8747e59:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8747e60:	fe 
 8747e61:	e8 ba ef 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 8747e66:	0f b6 00             	movzbl (%eax),%eax
 8747e69:	89 47 08             	mov    %eax,0x8(%edi)
 8747e6c:	89 f0                	mov    %esi,%eax
 8747e6e:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8747e71:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8747e74:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8747e77:	89 ec                	mov    %ebp,%esp
 8747e79:	5d                   	pop    %ebp
 8747e7a:	c3                   	ret
 8747e7b:	90                   	nop
 8747e7c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::operator>> @ 0x8747e20

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::input_buffer&, yaSSL::Alert&) */

input_buffer * yaSSL::operator>>(input_buffer *param_1,Alert *param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)input_buffer::operator[]((uint)param_1);
  *(uint *)(param_2 + 4) = (uint)*pbVar1;
  pbVar1 = (byte *)input_buffer::operator[]((uint)param_1);
  *(uint *)(param_2 + 8) = (uint)*pbVar1;
  return param_1;
}

```

---

## operator_gt__gt__08747eb0

```asm
// === 08747eb0 yaSSL::operator>>  [0x08747eb0-0x8747eef] ===
 8747eb0:	55                   	push   %ebp
 8747eb1:	89 e5                	mov    %esp,%ebp
 8747eb3:	83 ec 18             	sub    $0x18,%esp
 8747eb6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8747eb9:	e8 3a af fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8747ebe:	81 c3 da 4c c2 00    	add    $0xc24cda,%ebx
 8747ec4:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8747ec7:	8b 75 08             	mov    0x8(%ebp),%esi
 8747eca:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8747ed1:	fe 
 8747ed2:	89 34 24             	mov    %esi,(%esp)
 8747ed5:	e8 46 ef 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 8747eda:	0f b6 10             	movzbl (%eax),%edx
 8747edd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8747ee0:	89 50 04             	mov    %edx,0x4(%eax)
 8747ee3:	89 f0                	mov    %esi,%eax
 8747ee5:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8747ee8:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8747eeb:	89 ec                	mov    %ebp,%esp
 8747eed:	5d                   	pop    %ebp
 8747eee:	c3                   	ret
 8747eef:	90                   	nop

```

```c
// yaSSL::operator>> @ 0x8747eb0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::input_buffer&, yaSSL::ChangeCipherSpec&) */

input_buffer * yaSSL::operator>>(input_buffer *param_1,ChangeCipherSpec *param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)input_buffer::operator[]((uint)param_1);
  *(uint *)(param_2 + 4) = (uint)*pbVar1;
  return param_1;
}

```

---

## operator_gt__gt__08747f20

```asm
// === 08747f20 yaSSL::operator>>  [0x08747f20-0x8747faf] ===
 8747f20:	55                   	push   %ebp
 8747f21:	89 e5                	mov    %esp,%ebp
 8747f23:	83 ec 28             	sub    $0x28,%esp
 8747f26:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8747f29:	e8 ca ae fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8747f2e:	81 c3 6a 4c c2 00    	add    $0xc24c6a,%ebx
 8747f34:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8747f37:	8b 75 08             	mov    0x8(%ebp),%esi
 8747f3a:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8747f3d:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8747f40:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8747f47:	fe 
 8747f48:	89 34 24             	mov    %esi,(%esp)
 8747f4b:	e8 d0 ee 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 8747f50:	0f b6 00             	movzbl (%eax),%eax
 8747f53:	89 47 04             	mov    %eax,0x4(%edi)
 8747f56:	89 34 24             	mov    %esi,(%esp)
 8747f59:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8747f60:	fe 
 8747f61:	e8 ba ee 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 8747f66:	0f b6 00             	movzbl (%eax),%eax
 8747f69:	88 47 08             	mov    %al,0x8(%edi)
 8747f6c:	89 34 24             	mov    %esi,(%esp)
 8747f6f:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8747f76:	fe 
 8747f77:	e8 a4 ee 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 8747f7c:	0f b6 00             	movzbl (%eax),%eax
 8747f7f:	88 47 09             	mov    %al,0x9(%edi)
 8747f82:	89 34 24             	mov    %esi,(%esp)
 8747f85:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8747f8c:	fe 
 8747f8d:	e8 8e ee 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 8747f92:	0f b6 00             	movzbl (%eax),%eax
 8747f95:	88 47 0a             	mov    %al,0xa(%edi)
 8747f98:	89 f0                	mov    %esi,%eax
 8747f9a:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8747f9d:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8747fa0:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8747fa3:	89 ec                	mov    %ebp,%esp
 8747fa5:	5d                   	pop    %ebp
 8747fa6:	c3                   	ret
 8747fa7:	90                   	nop
 8747fa8:	90                   	nop
 8747fa9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::operator>> @ 0x8747f20

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::input_buffer&, yaSSL::HandShakeHeader&) */

input_buffer * yaSSL::operator>>(input_buffer *param_1,HandShakeHeader *param_2)

{
  byte *pbVar1;
  HandShakeHeader *pHVar2;
  
  pbVar1 = (byte *)input_buffer::operator[]((uint)param_1);
  *(uint *)(param_2 + 4) = (uint)*pbVar1;
  pHVar2 = (HandShakeHeader *)input_buffer::operator[]((uint)param_1);
  param_2[8] = *pHVar2;
  pHVar2 = (HandShakeHeader *)input_buffer::operator[]((uint)param_1);
  param_2[9] = *pHVar2;
  pHVar2 = (HandShakeHeader *)input_buffer::operator[]((uint)param_1);
  param_2[10] = *pHVar2;
  return param_1;
}

```

---

## operator_gt__gt__087488c0

```asm
// === 087488c0 yaSSL::operator>>  [0x087488c0-0x874895f] ===
 87488c0:	55                   	push   %ebp
 87488c1:	89 e5                	mov    %esp,%ebp
 87488c3:	83 ec 48             	sub    $0x48,%esp
 87488c6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87488c9:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 87488cc:	e8 27 a5 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87488d1:	81 c3 c7 42 c2 00    	add    $0xc242c7,%ebx
 87488d7:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87488da:	8b 75 08             	mov    0x8(%ebp),%esi
 87488dd:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87488e0:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87488e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 87488e7:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87488ea:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 87488f1:	00 
 87488f2:	89 34 24             	mov    %esi,(%esp)
 87488f5:	e8 46 e7 04 00       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 87488fa:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 87488fd:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8748900:	89 54 24 04          	mov    %edx,0x4(%esp)
 8748904:	66 c7 45 e4 00 00    	movw   $0x0,-0x1c(%ebp)
 874890a:	89 04 24             	mov    %eax,(%esp)
 874890d:	e8 7e 54 00 00       	call   874dd90 <_ZN5yaSSL5ato16EPKhRt>
 8748912:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
 8748916:	89 3c 24             	mov    %edi,(%esp)
 8748919:	89 44 24 04          	mov    %eax,0x4(%esp)
 874891d:	e8 8e e1 ff ff       	call   8746ab0 <_ZN5yaSSL13HandShakeBase10set_lengthEi>
 8748922:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
 8748926:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874892b:	89 04 24             	mov    %eax,(%esp)
 874892e:	e8 1d 9a 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 8748933:	0f b7 55 e4          	movzwl -0x1c(%ebp),%edx
 8748937:	89 47 2c             	mov    %eax,0x2c(%edi)
 874893a:	89 44 24 04          	mov    %eax,0x4(%esp)
 874893e:	89 34 24             	mov    %esi,(%esp)
 8748941:	89 54 24 08          	mov    %edx,0x8(%esp)
 8748945:	e8 f6 e6 04 00       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 874894a:	89 f0                	mov    %esi,%eax
 874894c:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 874894f:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8748952:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8748955:	89 ec                	mov    %ebp,%esp
 8748957:	5d                   	pop    %ebp
 8748958:	c3                   	ret
 8748959:	90                   	nop
 874895a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::operator>> @ 0x87488c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::input_buffer&, yaSSL::CertificateVerify&) */

input_buffer * yaSSL::operator>>(input_buffer *param_1,CertificateVerify *param_2)

{
  uint uVar1;
  uchar *puVar2;
  ushort local_20;
  uchar local_1e [14];
  
  input_buffer::read(param_1,local_1e,2);
  local_20 = 0;
  ato16(local_1e,&local_20);
  uVar1 = (uint)local_20;
  HandShakeBase::set_length((HandShakeBase *)param_2,uVar1);
  puVar2 = operator_new__(local_20,uVar1 & 0xffffff00);
  *(uchar **)(param_2 + 0x2c) = puVar2;
  input_buffer::read(param_1,puVar2,(uint)local_20);
  return param_1;
}

```

---

## operator_gt__gt__08748990

```asm
// === 08748990 yaSSL::operator>>  [0x08748990-0x8748aff] ===
 8748990:	55                   	push   %ebp
 8748991:	89 e5                	mov    %esp,%ebp
 8748993:	57                   	push   %edi
 8748994:	56                   	push   %esi
 8748995:	53                   	push   %ebx
 8748996:	e8 5d a4 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874899b:	81 c3 fd 41 c2 00    	add    $0xc241fd,%ebx
 87489a1:	83 ec 3c             	sub    $0x3c,%esp
 87489a4:	8b 45 08             	mov    0x8(%ebp),%eax
 87489a7:	8b 75 0c             	mov    0xc(%ebp),%esi
 87489aa:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 87489b1:	fe 
 87489b2:	89 04 24             	mov    %eax,(%esp)
 87489b5:	e8 66 e4 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 87489ba:	0f b6 00             	movzbl (%eax),%eax
 87489bd:	85 c0                	test   %eax,%eax
 87489bf:	89 46 24             	mov    %eax,0x24(%esi)
 87489c2:	74 26                	je     87489ea <_ZN5yaSSLrsERNS_12input_bufferERNS_18CertificateRequestE+0x5a>
 87489c4:	31 ff                	xor    %edi,%edi
 87489c6:	66 90                	xchg   %ax,%ax
 87489c8:	8b 45 08             	mov    0x8(%ebp),%eax
 87489cb:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 87489d2:	fe 
 87489d3:	89 04 24             	mov    %eax,(%esp)
 87489d6:	e8 45 e4 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 87489db:	0f b6 00             	movzbl (%eax),%eax
 87489de:	89 44 be 08          	mov    %eax,0x8(%esi,%edi,4)
 87489e2:	83 c7 01             	add    $0x1,%edi
 87489e5:	39 7e 24             	cmp    %edi,0x24(%esi)
 87489e8:	7f de                	jg     87489c8 <_ZN5yaSSLrsERNS_12input_bufferERNS_18CertificateRequestE+0x38>
 87489ea:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 87489ed:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87489f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 87489f4:	8b 45 08             	mov    0x8(%ebp),%eax
 87489f7:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 87489fe:	00 
 87489ff:	89 04 24             	mov    %eax,(%esp)
 8748a02:	e8 39 e6 04 00       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 8748a07:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8748a0a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8748a0e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8748a11:	89 04 24             	mov    %eax,(%esp)
 8748a14:	e8 77 53 00 00       	call   874dd90 <_ZN5yaSSL5ato16EPKhRt>
 8748a19:	66 83 7d e4 00       	cmpw   $0x0,-0x1c(%ebp)
 8748a1e:	0f 84 c4 00 00 00    	je     8748ae8 <_ZN5yaSSLrsERNS_12input_bufferERNS_18CertificateRequestE+0x158>
 8748a24:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 8748a27:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8748a2a:	eb 45                	jmp    8748a71 <_ZN5yaSSLrsERNS_12input_bufferERNS_18CertificateRequestE+0xe1>
 8748a2c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8748a30:	89 42 04             	mov    %eax,0x4(%edx)
 8748a33:	8b 56 2c             	mov    0x2c(%esi),%edx
 8748a36:	89 10                	mov    %edx,(%eax)
 8748a38:	83 46 30 01          	addl   $0x1,0x30(%esi)
 8748a3c:	89 46 2c             	mov    %eax,0x2c(%esi)
 8748a3f:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 8748a43:	66 89 07             	mov    %ax,(%edi)
 8748a46:	0f b7 45 e2          	movzwl -0x1e(%ebp),%eax
 8748a4a:	83 c7 02             	add    $0x2,%edi
 8748a4d:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8748a51:	89 44 24 08          	mov    %eax,0x8(%esp)
 8748a55:	8b 45 08             	mov    0x8(%ebp),%eax
 8748a58:	89 04 24             	mov    %eax,(%esp)
 8748a5b:	e8 e0 e5 04 00       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 8748a60:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
 8748a64:	83 e8 02             	sub    $0x2,%eax
 8748a67:	66 2b 45 e2          	sub    -0x1e(%ebp),%ax
 8748a6b:	74 7b                	je     8748ae8 <_ZN5yaSSLrsERNS_12input_bufferERNS_18CertificateRequestE+0x158>
 8748a6d:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 8748a71:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8748a74:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8748a7b:	00 
 8748a7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8748a80:	8b 45 08             	mov    0x8(%ebp),%eax
 8748a83:	89 04 24             	mov    %eax,(%esp)
 8748a86:	e8 b5 e5 04 00       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 8748a8b:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8748a8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8748a92:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8748a95:	89 04 24             	mov    %eax,(%esp)
 8748a98:	e8 f3 52 00 00       	call   874dd90 <_ZN5yaSSL5ato16EPKhRt>
 8748a9d:	0f b7 45 e2          	movzwl -0x1e(%ebp),%eax
 8748aa1:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8748aa6:	83 c0 02             	add    $0x2,%eax
 8748aa9:	89 04 24             	mov    %eax,(%esp)
 8748aac:	e8 9f 98 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 8748ab1:	89 c7                	mov    %eax,%edi
 8748ab3:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8748ab8:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 8748abf:	e8 8c 98 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 8748ac4:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8748aca:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8748ad1:	89 78 08             	mov    %edi,0x8(%eax)
 8748ad4:	8b 56 2c             	mov    0x2c(%esi),%edx
 8748ad7:	85 d2                	test   %edx,%edx
 8748ad9:	0f 85 51 ff ff ff    	jne    8748a30 <_ZN5yaSSLrsERNS_12input_bufferERNS_18CertificateRequestE+0xa0>
 8748adf:	89 46 28             	mov    %eax,0x28(%esi)
 8748ae2:	e9 51 ff ff ff       	jmp    8748a38 <_ZN5yaSSLrsERNS_12input_bufferERNS_18CertificateRequestE+0xa8>
 8748ae7:	90                   	nop
 8748ae8:	8b 45 08             	mov    0x8(%ebp),%eax
 8748aeb:	83 c4 3c             	add    $0x3c,%esp
 8748aee:	5b                   	pop    %ebx
 8748aef:	5e                   	pop    %esi
 8748af0:	5f                   	pop    %edi
 8748af1:	5d                   	pop    %ebp
 8748af2:	c3                   	ret
 8748af3:	90                   	nop
 8748af4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8748afa:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::operator>> @ 0x8748990

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::input_buffer&, yaSSL::CertificateRequest&) */

input_buffer * yaSSL::operator>>(input_buffer *param_1,CertificateRequest *param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  ushort local_22;
  ushort local_20;
  undefined2 local_1e [5];
  undefined4 uStack_14;
  
  uStack_14 = 0x874899b;
  pbVar2 = (byte *)input_buffer::operator[]((uint)param_1);
  bVar1 = *pbVar2;
  *(uint *)(param_2 + 0x24) = (uint)bVar1;
  if (bVar1 != 0) {
    iVar5 = 0;
    do {
      pbVar2 = (byte *)input_buffer::operator[]((uint)param_1);
      *(uint *)(param_2 + iVar5 * 4 + 8) = (uint)*pbVar2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_2 + 0x24));
  }
  input_buffer::read(param_1,(uchar *)local_1e,2);
  ato16((uchar *)local_1e,&local_20);
  if (local_20 != 0) {
    do {
      input_buffer::read(param_1,(uchar *)local_1e,2);
      puVar6 = &local_22;
      ato16((uchar *)local_1e,&local_22);
      uVar7 = (uint)puVar6 & 0xffffff00;
      puVar3 = operator_new__(local_22 + 2,uVar7);
      puVar4 = operator_new__(0xc,uVar7 & 0xffffff00);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = puVar3;
      if (*(int *)(param_2 + 0x2c) == 0) {
        *(undefined4 **)(param_2 + 0x28) = puVar4;
      }
      else {
        *(undefined4 **)(*(int *)(param_2 + 0x2c) + 4) = puVar4;
        *puVar4 = *(undefined4 *)(param_2 + 0x2c);
      }
      *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
      *(undefined4 **)(param_2 + 0x2c) = puVar4;
      *puVar3 = local_1e[0];
      input_buffer::read(param_1,(uchar *)(puVar3 + 1),(uint)local_22);
      local_20 = (local_20 - 2) - local_22;
    } while (local_20 != 0);
  }
  return param_1;
}

```

---

## operator_gt__gt__08748b30

```asm
// === 08748b30 yaSSL::operator>>  [0x08748b30-0x8748bdf] ===
 8748b30:	55                   	push   %ebp
 8748b31:	89 e5                	mov    %esp,%ebp
 8748b33:	83 ec 38             	sub    $0x38,%esp
 8748b36:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8748b39:	e8 ba a2 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8748b3e:	81 c3 5a 40 c2 00    	add    $0xc2405a,%ebx
 8748b44:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8748b47:	8b 75 08             	mov    0x8(%ebp),%esi
 8748b4a:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8748b4d:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8748b50:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8748b57:	fe 
 8748b58:	89 34 24             	mov    %esi,(%esp)
 8748b5b:	e8 c0 e2 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 8748b60:	0f b6 00             	movzbl (%eax),%eax
 8748b63:	89 07                	mov    %eax,(%edi)
 8748b65:	89 34 24             	mov    %esi,(%esp)
 8748b68:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8748b6f:	fe 
 8748b70:	e8 ab e2 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 8748b75:	0f b6 00             	movzbl (%eax),%eax
 8748b78:	88 47 04             	mov    %al,0x4(%edi)
 8748b7b:	89 34 24             	mov    %esi,(%esp)
 8748b7e:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8748b85:	fe 
 8748b86:	e8 95 e2 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 8748b8b:	0f b6 00             	movzbl (%eax),%eax
 8748b8e:	88 47 05             	mov    %al,0x5(%edi)
 8748b91:	83 c7 06             	add    $0x6,%edi
 8748b94:	89 34 24             	mov    %esi,(%esp)
 8748b97:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8748b9e:	fe 
 8748b9f:	e8 7c e2 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 8748ba4:	0f b6 00             	movzbl (%eax),%eax
 8748ba7:	89 34 24             	mov    %esi,(%esp)
 8748baa:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8748bb1:	fe 
 8748bb2:	88 45 e6             	mov    %al,-0x1a(%ebp)
 8748bb5:	e8 66 e2 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 8748bba:	0f b6 00             	movzbl (%eax),%eax
 8748bbd:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8748bc1:	88 45 e7             	mov    %al,-0x19(%ebp)
 8748bc4:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 8748bc7:	89 04 24             	mov    %eax,(%esp)
 8748bca:	e8 c1 51 00 00       	call   874dd90 <_ZN5yaSSL5ato16EPKhRt>
 8748bcf:	89 f0                	mov    %esi,%eax
 8748bd1:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8748bd4:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8748bd7:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8748bda:	89 ec                	mov    %ebp,%esp
 8748bdc:	5d                   	pop    %ebp
 8748bdd:	c3                   	ret
 8748bde:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::operator>> @ 0x8748b30

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::input_buffer&, yaSSL::RecordLayerHeader&) */

input_buffer * yaSSL::operator>>(input_buffer *param_1,RecordLayerHeader *param_2)

{
  byte *pbVar1;
  RecordLayerHeader *pRVar2;
  uchar *puVar3;
  undefined1 *puVar4;
  uchar local_1e;
  undefined1 local_1d;
  
  pbVar1 = (byte *)input_buffer::operator[]((uint)param_1);
  *(uint *)param_2 = (uint)*pbVar1;
  pRVar2 = (RecordLayerHeader *)input_buffer::operator[]((uint)param_1);
  param_2[4] = *pRVar2;
  pRVar2 = (RecordLayerHeader *)input_buffer::operator[]((uint)param_1);
  param_2[5] = *pRVar2;
  puVar3 = (uchar *)input_buffer::operator[]((uint)param_1);
  local_1e = *puVar3;
  puVar4 = (undefined1 *)input_buffer::operator[]((uint)param_1);
  local_1d = *puVar4;
  ato16(&local_1e,(ushort *)(param_2 + 6));
  return param_1;
}

```

---

## operator_gt__gt__08749210

```asm
// === 08749210 yaSSL::operator>>  [0x08749210-0x87493ff] ===
 8749210:	55                   	push   %ebp
 8749211:	89 e5                	mov    %esp,%ebp
 8749213:	57                   	push   %edi
 8749214:	56                   	push   %esi
 8749215:	53                   	push   %ebx
 8749216:	e8 dd 9b fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874921b:	81 c3 7d 39 c2 00    	add    $0xc2397d,%ebx
 8749221:	83 ec 3c             	sub    $0x3c,%esp
 8749224:	8b 7d 08             	mov    0x8(%ebp),%edi
 8749227:	8b 75 0c             	mov    0xc(%ebp),%esi
 874922a:	89 3c 24             	mov    %edi,(%esp)
 874922d:	e8 6e db 04 00       	call   8796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>
 8749232:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8749239:	fe 
 874923a:	89 3c 24             	mov    %edi,(%esp)
 874923d:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8749240:	e8 db db 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 8749245:	0f b6 00             	movzbl (%eax),%eax
 8749248:	88 46 08             	mov    %al,0x8(%esi)
 874924b:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8749252:	fe 
 8749253:	89 3c 24             	mov    %edi,(%esp)
 8749256:	e8 c5 db 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 874925b:	0f b6 00             	movzbl (%eax),%eax
 874925e:	88 46 09             	mov    %al,0x9(%esi)
 8749261:	8d 46 0a             	lea    0xa(%esi),%eax
 8749264:	89 44 24 04          	mov    %eax,0x4(%esp)
 8749268:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 874926f:	00 
 8749270:	89 3c 24             	mov    %edi,(%esp)
 8749273:	e8 c8 dd 04 00       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 8749278:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 874927f:	fe 
 8749280:	89 3c 24             	mov    %edi,(%esp)
 8749283:	e8 98 db 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 8749288:	0f b6 00             	movzbl (%eax),%eax
 874928b:	84 c0                	test   %al,%al
 874928d:	88 46 2a             	mov    %al,0x2a(%esi)
 8749290:	0f 85 4a 01 00 00    	jne    87493e0 <_ZN5yaSSLrsERNS_12input_bufferERNS_11ClientHelloE+0x1d0>
 8749296:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 874929d:	fe 
 874929e:	89 3c 24             	mov    %edi,(%esp)
 87492a1:	e8 7a db 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 87492a6:	0f b6 00             	movzbl (%eax),%eax
 87492a9:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 87492b0:	fe 
 87492b1:	89 3c 24             	mov    %edi,(%esp)
 87492b4:	88 45 e6             	mov    %al,-0x1a(%ebp)
 87492b7:	e8 64 db 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 87492bc:	0f b6 00             	movzbl (%eax),%eax
 87492bf:	88 45 e7             	mov    %al,-0x19(%ebp)
 87492c2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 87492c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 87492c9:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 87492cc:	89 04 24             	mov    %eax,(%esp)
 87492cf:	e8 bc 4a 00 00       	call   874dd90 <_ZN5yaSSL5ato16EPKhRt>
 87492d4:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
 87492d8:	66 83 f8 7f          	cmp    $0x7f,%ax
 87492dc:	0f b7 d0             	movzwl %ax,%edx
 87492df:	76 0a                	jbe    87492eb <_ZN5yaSSLrsERNS_12input_bufferERNS_11ClientHelloE+0xdb>
 87492e1:	ba 80 00 00 00       	mov    $0x80,%edx
 87492e6:	b8 80 00 00 00       	mov    $0x80,%eax
 87492eb:	66 89 46 4c          	mov    %ax,0x4c(%esi)
 87492ef:	8d 46 4e             	lea    0x4e(%esi),%eax
 87492f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 87492f6:	89 54 24 08          	mov    %edx,0x8(%esp)
 87492fa:	89 3c 24             	mov    %edi,(%esp)
 87492fd:	e8 3e dd 04 00       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 8749302:	0f b7 46 4c          	movzwl 0x4c(%esi),%eax
 8749306:	66 3b 45 e4          	cmp    -0x1c(%ebp),%ax
 874930a:	0f 82 a8 00 00 00    	jb     87493b8 <_ZN5yaSSLrsERNS_12input_bufferERNS_11ClientHelloE+0x1a8>
 8749310:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8749317:	fe 
 8749318:	89 3c 24             	mov    %edi,(%esp)
 874931b:	e8 00 db 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 8749320:	0f b6 00             	movzbl (%eax),%eax
 8749323:	c7 86 d0 00 00 00 00 	movl   $0x0,0xd0(%esi)
 874932a:	00 00 00 
 874932d:	88 86 ce 00 00 00    	mov    %al,0xce(%esi)
 8749333:	eb 0a                	jmp    874933f <_ZN5yaSSLrsERNS_12input_bufferERNS_11ClientHelloE+0x12f>
 8749335:	8d 76 00             	lea    0x0(%esi),%esi
 8749338:	0f b6 86 ce 00 00 00 	movzbl 0xce(%esi),%eax
 874933f:	8d 50 ff             	lea    -0x1(%eax),%edx
 8749342:	84 c0                	test   %al,%al
 8749344:	88 96 ce 00 00 00    	mov    %dl,0xce(%esi)
 874934a:	74 24                	je     8749370 <_ZN5yaSSLrsERNS_12input_bufferERNS_11ClientHelloE+0x160>
 874934c:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8749353:	fe 
 8749354:	89 3c 24             	mov    %edi,(%esp)
 8749357:	e8 c4 da 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 874935c:	80 38 dd             	cmpb   $0xdd,(%eax)
 874935f:	75 d7                	jne    8749338 <_ZN5yaSSLrsERNS_12input_bufferERNS_11ClientHelloE+0x128>
 8749361:	c7 86 d0 00 00 00 dd 	movl   $0xdd,0xd0(%esi)
 8749368:	00 00 00 
 874936b:	eb cb                	jmp    8749338 <_ZN5yaSSLrsERNS_12input_bufferERNS_11ClientHelloE+0x128>
 874936d:	8d 76 00             	lea    0x0(%esi),%esi
 8749370:	89 3c 24             	mov    %edi,(%esp)
 8749373:	e8 28 da 04 00       	call   8796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>
 8749378:	89 34 24             	mov    %esi,(%esp)
 874937b:	89 c2                	mov    %eax,%edx
 874937d:	2b 55 d4             	sub    -0x2c(%ebp),%edx
 8749380:	89 55 d0             	mov    %edx,-0x30(%ebp)
 8749383:	e8 18 d7 ff ff       	call   8746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>
 8749388:	8b 55 d0             	mov    -0x30(%ebp),%edx
 874938b:	39 c2                	cmp    %eax,%edx
 874938d:	89 c6                	mov    %eax,%esi
 874938f:	73 1c                	jae    87493ad <_ZN5yaSSLrsERNS_12input_bufferERNS_11ClientHelloE+0x19d>
 8749391:	89 3c 24             	mov    %edi,(%esp)
 8749394:	e8 07 da 04 00       	call   8796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>
 8749399:	8b 55 d0             	mov    -0x30(%ebp),%edx
 874939c:	89 3c 24             	mov    %edi,(%esp)
 874939f:	29 d6                	sub    %edx,%esi
 87493a1:	8d 14 06             	lea    (%esi,%eax,1),%edx
 87493a4:	89 54 24 04          	mov    %edx,0x4(%esp)
 87493a8:	e8 23 da 04 00       	call   8796dd0 <_ZN5yaSSL12input_buffer11set_currentEj>
 87493ad:	83 c4 3c             	add    $0x3c,%esp
 87493b0:	89 f8                	mov    %edi,%eax
 87493b2:	5b                   	pop    %ebx
 87493b3:	5e                   	pop    %esi
 87493b4:	5f                   	pop    %edi
 87493b5:	5d                   	pop    %ebp
 87493b6:	c3                   	ret
 87493b7:	90                   	nop
 87493b8:	89 3c 24             	mov    %edi,(%esp)
 87493bb:	e8 e0 d9 04 00       	call   8796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>
 87493c0:	0f b7 56 4c          	movzwl 0x4c(%esi),%edx
 87493c4:	89 3c 24             	mov    %edi,(%esp)
 87493c7:	89 c1                	mov    %eax,%ecx
 87493c9:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
 87493cd:	29 d0                	sub    %edx,%eax
 87493cf:	01 c8                	add    %ecx,%eax
 87493d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 87493d5:	e8 f6 d9 04 00       	call   8796dd0 <_ZN5yaSSL12input_buffer11set_currentEj>
 87493da:	e9 31 ff ff ff       	jmp    8749310 <_ZN5yaSSLrsERNS_12input_bufferERNS_11ClientHelloE+0x100>
 87493df:	90                   	nop
 87493e0:	8d 46 2b             	lea    0x2b(%esi),%eax
 87493e3:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 87493ea:	00 
 87493eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 87493ef:	89 3c 24             	mov    %edi,(%esp)
 87493f2:	e8 49 dc 04 00       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 87493f7:	e9 9a fe ff ff       	jmp    8749296 <_ZN5yaSSLrsERNS_12input_bufferERNS_11ClientHelloE+0x86>
 87493fc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::operator>> @ 0x8749210

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::input_buffer&, yaSSL::ClientHello&) */

input_buffer * yaSSL::operator>>(input_buffer *param_1,ClientHello *param_2)

{
  ClientHello CVar1;
  ushort uVar2;
  int iVar3;
  ClientHello *pCVar4;
  uchar *puVar5;
  undefined1 *puVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ushort local_20;
  uchar local_1e;
  undefined1 local_1d;
  undefined4 uStack_14;
  
  uStack_14 = 0x874921b;
  iVar3 = input_buffer::get_current(param_1);
  pCVar4 = (ClientHello *)input_buffer::operator[]((uint)param_1);
  param_2[8] = *pCVar4;
  pCVar4 = (ClientHello *)input_buffer::operator[]((uint)param_1);
  param_2[9] = *pCVar4;
  input_buffer::read(param_1,(uchar *)(param_2 + 10),0x20);
  pCVar4 = (ClientHello *)input_buffer::operator[]((uint)param_1);
  CVar1 = *pCVar4;
  param_2[0x2a] = CVar1;
  if (CVar1 != (ClientHello)0x0) {
    input_buffer::read(param_1,(uchar *)(param_2 + 0x2b),0x20);
  }
  puVar5 = (uchar *)input_buffer::operator[]((uint)param_1);
  local_1e = *puVar5;
  puVar6 = (undefined1 *)input_buffer::operator[]((uint)param_1);
  local_1d = *puVar6;
  ato16(&local_1e,&local_20);
  uVar10 = (uint)local_20;
  uVar2 = local_20;
  if (0x7f < local_20) {
    uVar10 = 0x80;
    uVar2 = 0x80;
  }
  *(ushort *)(param_2 + 0x4c) = uVar2;
  input_buffer::read(param_1,(uchar *)(param_2 + 0x4e),uVar10);
  if (*(ushort *)(param_2 + 0x4c) < local_20) {
    iVar8 = input_buffer::get_current(param_1);
    input_buffer::set_current(param_1,((uint)local_20 - (uint)*(ushort *)(param_2 + 0x4c)) + iVar8);
  }
  pCVar4 = (ClientHello *)input_buffer::operator[]((uint)param_1);
  CVar1 = *pCVar4;
  *(undefined4 *)(param_2 + 0xd0) = 0;
  param_2[0xce] = CVar1;
  while (param_2[0xce] = (ClientHello)((char)CVar1 + -1), CVar1 != (ClientHello)0x0) {
    pcVar7 = (char *)input_buffer::operator[]((uint)param_1);
    if (*pcVar7 == -0x23) {
      *(undefined4 *)(param_2 + 0xd0) = 0xdd;
    }
    CVar1 = param_2[0xce];
  }
  iVar8 = input_buffer::get_current(param_1);
  uVar10 = HandShakeBase::get_length((HandShakeBase *)param_2);
  if ((uint)(iVar8 - iVar3) < uVar10) {
    iVar9 = input_buffer::get_current(param_1);
    input_buffer::set_current(param_1,(uVar10 - (iVar8 - iVar3)) + iVar9);
  }
  return param_1;
}

```

---

## operator_lt__lt_

```asm
// === 08746a50 yaSSL::operator<<  [0x08746a50-0x8746a6f] ===
 8746a50:	55                   	push   %ebp
 8746a51:	89 e5                	mov    %esp,%ebp
 8746a53:	83 ec 18             	sub    $0x18,%esp
 8746a56:	8b 45 0c             	mov    0xc(%ebp),%eax
 8746a59:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8746a5c:	8b 10                	mov    (%eax),%edx
 8746a5e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8746a62:	89 04 24             	mov    %eax,(%esp)
 8746a65:	ff 52 04             	call   *0x4(%edx)
 8746a68:	c9                   	leave
 8746a69:	c3                   	ret
 8746a6a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::operator<< @ 0x8746a50

/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::output_buffer&, yaSSL::Message const&) */

void yaSSL::operator<<(output_buffer *param_1,Message *param_2)

{
  (**(code **)(*(int *)param_2 + 4))(param_2,param_1);
  return;
}

```

---

## operator_lt__lt__08746cf0

```asm
// === 08746cf0 yaSSL::operator<<  [0x08746cf0-0x8746d0f] ===
 8746cf0:	55                   	push   %ebp
 8746cf1:	89 e5                	mov    %esp,%ebp
 8746cf3:	83 ec 18             	sub    $0x18,%esp
 8746cf6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8746cf9:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8746cfc:	8b 10                	mov    (%eax),%edx
 8746cfe:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8746d02:	89 04 24             	mov    %eax,(%esp)
 8746d05:	ff 52 08             	call   *0x8(%edx)
 8746d08:	c9                   	leave
 8746d09:	c3                   	ret
 8746d0a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::operator<< @ 0x8746cf0

/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::output_buffer&, yaSSL::HandShakeBase const&) */

void yaSSL::operator<<(output_buffer *param_1,HandShakeBase *param_2)

{
  (**(code **)(*(int *)param_2 + 8))(param_2,param_1);
  return;
}

```

---

## operator_lt__lt__08748320

```asm
// === 08748320 yaSSL::operator<<  [0x08748320-0x87483bf] ===
 8748320:	55                   	push   %ebp
 8748321:	89 e5                	mov    %esp,%ebp
 8748323:	83 ec 28             	sub    $0x28,%esp
 8748326:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8748329:	e8 ca aa fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874832e:	81 c3 6a 48 c2 00    	add    $0xc2486a,%ebx
 8748334:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8748337:	8b 7d 0c             	mov    0xc(%ebp),%edi
 874833a:	89 75 f8             	mov    %esi,-0x8(%ebp)
 874833d:	8b 75 08             	mov    0x8(%ebp),%esi
 8748340:	89 3c 24             	mov    %edi,(%esp)
 8748343:	e8 58 e7 ff ff       	call   8746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>
 8748348:	83 f8 24             	cmp    $0x24,%eax
 874834b:	74 2b                	je     8748378 <_ZN5yaSSLlsERNS_13output_bufferERKNS_8FinishedE+0x58>
 874834d:	83 c7 08             	add    $0x8,%edi
 8748350:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8748354:	89 34 24             	mov    %esi,(%esp)
 8748357:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 874835e:	00 
 874835f:	e8 6c ec 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 8748364:	89 f0                	mov    %esi,%eax
 8748366:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8748369:	8b 75 f8             	mov    -0x8(%ebp),%esi
 874836c:	8b 7d fc             	mov    -0x4(%ebp),%edi
 874836f:	89 ec                	mov    %ebp,%esp
 8748371:	5d                   	pop    %ebp
 8748372:	c3                   	ret
 8748373:	90                   	nop
 8748374:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8748378:	8d 47 08             	lea    0x8(%edi),%eax
 874837b:	83 c7 18             	add    $0x18,%edi
 874837e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8748382:	89 34 24             	mov    %esi,(%esp)
 8748385:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 874838c:	00 
 874838d:	e8 3e ec 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 8748392:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8748396:	89 34 24             	mov    %esi,(%esp)
 8748399:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 87483a0:	00 
 87483a1:	e8 2a ec 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 87483a6:	89 f0                	mov    %esi,%eax
 87483a8:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87483ab:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87483ae:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87483b1:	89 ec                	mov    %ebp,%esp
 87483b3:	5d                   	pop    %ebp
 87483b4:	c3                   	ret
 87483b5:	90                   	nop
 87483b6:	8d 76 00             	lea    0x0(%esi),%esi
 87483b9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::operator<< @ 0x8748320

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::output_buffer&, yaSSL::Finished const&) */

output_buffer * yaSSL::operator<<(output_buffer *param_1,Finished *param_2)

{
  int iVar1;
  
  iVar1 = HandShakeBase::get_length((HandShakeBase *)param_2);
  if (iVar1 != 0x24) {
    output_buffer::write(param_1,(uchar *)(param_2 + 8),0xc);
    return param_1;
  }
  output_buffer::write(param_1,(uchar *)(param_2 + 8),0x10);
  output_buffer::write(param_1,(uchar *)(param_2 + 0x18),0x14);
  return param_1;
}

```

---

## operator_lt__lt__087483f0

```asm
// === 087483f0 yaSSL::operator<<  [0x087483f0-0x874844f] ===
 87483f0:	55                   	push   %ebp
 87483f1:	89 e5                	mov    %esp,%ebp
 87483f3:	83 ec 38             	sub    $0x38,%esp
 87483f6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87483f9:	e8 fa a9 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87483fe:	81 c3 9a 47 c2 00    	add    $0xc2479a,%ebx
 8748404:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8748407:	8b 7d 0c             	mov    0xc(%ebp),%edi
 874840a:	89 75 f8             	mov    %esi,-0x8(%ebp)
 874840d:	8b 75 08             	mov    0x8(%ebp),%esi
 8748410:	89 3c 24             	mov    %edi,(%esp)
 8748413:	e8 38 ed ff ff       	call   8747150 <_ZNK5yaSSL17ClientKeyExchange12getKeyLengthEv>
 8748418:	89 3c 24             	mov    %edi,(%esp)
 874841b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 874841e:	e8 0d ed ff ff       	call   8747130 <_ZNK5yaSSL17ClientKeyExchange6getKeyEv>
 8748423:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8748426:	89 34 24             	mov    %esi,(%esp)
 8748429:	89 54 24 08          	mov    %edx,0x8(%esp)
 874842d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8748431:	e8 9a eb 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 8748436:	89 f0                	mov    %esi,%eax
 8748438:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 874843b:	8b 75 f8             	mov    -0x8(%ebp),%esi
 874843e:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8748441:	89 ec                	mov    %ebp,%esp
 8748443:	5d                   	pop    %ebp
 8748444:	c3                   	ret
 8748445:	90                   	nop
 8748446:	8d 76 00             	lea    0x0(%esi),%esi
 8748449:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::operator<< @ 0x87483f0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::output_buffer&, yaSSL::ClientKeyExchange const&) */

output_buffer * yaSSL::operator<<(output_buffer *param_1,ClientKeyExchange *param_2)

{
  uint uVar1;
  uchar *puVar2;
  
  uVar1 = ClientKeyExchange::getKeyLength(param_2);
  puVar2 = (uchar *)ClientKeyExchange::getKey(param_2);
  output_buffer::write(param_1,puVar2,uVar1);
  return param_1;
}

```

---

## operator_lt__lt__08748480

```asm
// === 08748480 yaSSL::operator<<  [0x08748480-0x87484cf] ===
 8748480:	55                   	push   %ebp
 8748481:	89 e5                	mov    %esp,%ebp
 8748483:	83 ec 28             	sub    $0x28,%esp
 8748486:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8748489:	e8 6a a9 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874848e:	81 c3 0a 47 c2 00    	add    $0xc2470a,%ebx
 8748494:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8748497:	8b 7d 0c             	mov    0xc(%ebp),%edi
 874849a:	89 75 f8             	mov    %esi,-0x8(%ebp)
 874849d:	8b 75 08             	mov    0x8(%ebp),%esi
 87484a0:	89 3c 24             	mov    %edi,(%esp)
 87484a3:	e8 f8 e5 ff ff       	call   8746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>
 87484a8:	89 44 24 08          	mov    %eax,0x8(%esp)
 87484ac:	8b 47 2c             	mov    0x2c(%edi),%eax
 87484af:	89 34 24             	mov    %esi,(%esp)
 87484b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 87484b6:	e8 15 eb 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 87484bb:	89 f0                	mov    %esi,%eax
 87484bd:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87484c0:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87484c3:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87484c6:	89 ec                	mov    %ebp,%esp
 87484c8:	5d                   	pop    %ebp
 87484c9:	c3                   	ret
 87484ca:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::operator<< @ 0x8748480

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::output_buffer&, yaSSL::CertificateVerify const&) */

output_buffer * yaSSL::operator<<(output_buffer *param_1,CertificateVerify *param_2)

{
  uint uVar1;
  
  uVar1 = HandShakeBase::get_length((HandShakeBase *)param_2);
  output_buffer::write(param_1,*(uchar **)(param_2 + 0x2c),uVar1);
  return param_1;
}

```

---

## operator_lt__lt__08748500

```asm
// === 08748500 yaSSL::operator<<  [0x08748500-0x874855f] ===
 8748500:	55                   	push   %ebp
 8748501:	89 e5                	mov    %esp,%ebp
 8748503:	83 ec 38             	sub    $0x38,%esp
 8748506:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8748509:	e8 ea a8 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874850e:	81 c3 8a 46 c2 00    	add    $0xc2468a,%ebx
 8748514:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8748517:	8b 7d 0c             	mov    0xc(%ebp),%edi
 874851a:	89 75 f8             	mov    %esi,-0x8(%ebp)
 874851d:	8b 75 08             	mov    0x8(%ebp),%esi
 8748520:	89 3c 24             	mov    %edi,(%esp)
 8748523:	e8 b8 ea ff ff       	call   8746fe0 <_ZNK5yaSSL17ServerKeyExchange12getKeyLengthEv>
 8748528:	89 3c 24             	mov    %edi,(%esp)
 874852b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 874852e:	e8 8d ea ff ff       	call   8746fc0 <_ZNK5yaSSL17ServerKeyExchange6getKeyEv>
 8748533:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8748536:	89 34 24             	mov    %esi,(%esp)
 8748539:	89 54 24 08          	mov    %edx,0x8(%esp)
 874853d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8748541:	e8 8a ea 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 8748546:	89 f0                	mov    %esi,%eax
 8748548:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 874854b:	8b 75 f8             	mov    -0x8(%ebp),%esi
 874854e:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8748551:	89 ec                	mov    %ebp,%esp
 8748553:	5d                   	pop    %ebp
 8748554:	c3                   	ret
 8748555:	90                   	nop
 8748556:	8d 76 00             	lea    0x0(%esi),%esi
 8748559:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::operator<< @ 0x8748500

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::output_buffer&, yaSSL::ServerKeyExchange const&) */

output_buffer * yaSSL::operator<<(output_buffer *param_1,ServerKeyExchange *param_2)

{
  uint uVar1;
  uchar *puVar2;
  
  uVar1 = ServerKeyExchange::getKeyLength(param_2);
  puVar2 = (uchar *)ServerKeyExchange::getKey(param_2);
  output_buffer::write(param_1,puVar2,uVar1);
  return param_1;
}

```

---

## operator_lt__lt__08748590

```asm
// === 08748590 yaSSL::operator<<  [0x08748590-0x87485cf] ===
 8748590:	55                   	push   %ebp
 8748591:	89 e5                	mov    %esp,%ebp
 8748593:	83 ec 18             	sub    $0x18,%esp
 8748596:	8b 45 0c             	mov    0xc(%ebp),%eax
 8748599:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 874859c:	89 75 fc             	mov    %esi,-0x4(%ebp)
 874859f:	8b 75 08             	mov    0x8(%ebp),%esi
 87485a2:	e8 51 a8 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87485a7:	81 c3 f1 45 c2 00    	add    $0xc245f1,%ebx
 87485ad:	0f b7 50 04          	movzwl 0x4(%eax),%edx
 87485b1:	89 54 24 08          	mov    %edx,0x8(%esp)
 87485b5:	8b 40 0c             	mov    0xc(%eax),%eax
 87485b8:	89 34 24             	mov    %esi,(%esp)
 87485bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 87485bf:	e8 0c ea 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 87485c4:	89 f0                	mov    %esi,%eax
 87485c6:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87485c9:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87485cc:	89 ec                	mov    %ebp,%esp
 87485ce:	5d                   	pop    %ebp
 87485cf:	c3                   	ret

```

```c
// yaSSL::operator<< @ 0x8748590

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::output_buffer&, yaSSL::Data const&) */

output_buffer * yaSSL::operator<<(output_buffer *param_1,Data *param_2)

{
  output_buffer::write(param_1,*(uchar **)(param_2 + 0xc),(uint)*(ushort *)(param_2 + 4));
  return param_1;
}

```

---

## operator_lt__lt__08748c40

```asm
// === 08748c40 yaSSL::operator<<  [0x08748c40-0x8748d2f] ===
 8748c40:	55                   	push   %ebp
 8748c41:	89 e5                	mov    %esp,%ebp
 8748c43:	57                   	push   %edi
 8748c44:	56                   	push   %esi
 8748c45:	53                   	push   %ebx
 8748c46:	e8 ad a1 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8748c4b:	81 c3 4d 3f c2 00    	add    $0xc23f4d,%ebx
 8748c51:	83 ec 3c             	sub    $0x3c,%esp
 8748c54:	8b 55 0c             	mov    0xc(%ebp),%edx
 8748c57:	8b 7d 08             	mov    0x8(%ebp),%edi
 8748c5a:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8748c61:	fe 
 8748c62:	89 55 d0             	mov    %edx,-0x30(%ebp)
 8748c65:	89 3c 24             	mov    %edi,(%esp)
 8748c68:	e8 d3 e2 04 00       	call   8796f40 <_ZN5yaSSL13output_bufferixEj>
 8748c6d:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8748c70:	8b 4a 24             	mov    0x24(%edx),%ecx
 8748c73:	88 08                	mov    %cl,(%eax)
 8748c75:	8b 42 24             	mov    0x24(%edx),%eax
 8748c78:	85 c0                	test   %eax,%eax
 8748c7a:	7e 28                	jle    8748ca4 <_ZN5yaSSLlsERNS_13output_bufferERKNS_18CertificateRequestE+0x64>
 8748c7c:	31 f6                	xor    %esi,%esi
 8748c7e:	66 90                	xchg   %ax,%ax
 8748c80:	89 55 d0             	mov    %edx,-0x30(%ebp)
 8748c83:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8748c8a:	fe 
 8748c8b:	89 3c 24             	mov    %edi,(%esp)
 8748c8e:	e8 ad e2 04 00       	call   8796f40 <_ZN5yaSSL13output_bufferixEj>
 8748c93:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8748c96:	8b 4c b2 08          	mov    0x8(%edx,%esi,4),%ecx
 8748c9a:	83 c6 01             	add    $0x1,%esi
 8748c9d:	88 08                	mov    %cl,(%eax)
 8748c9f:	39 72 24             	cmp    %esi,0x24(%edx)
 8748ca2:	7f dc                	jg     8748c80 <_ZN5yaSSLlsERNS_13output_bufferERKNS_18CertificateRequestE+0x40>
 8748ca4:	89 14 24             	mov    %edx,(%esp)
 8748ca7:	8d 75 e6             	lea    -0x1a(%ebp),%esi
 8748caa:	89 55 d0             	mov    %edx,-0x30(%ebp)
 8748cad:	e8 ee dd ff ff       	call   8746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>
 8748cb2:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8748cb5:	89 74 24 04          	mov    %esi,0x4(%esp)
 8748cb9:	66 2b 42 24          	sub    0x24(%edx),%ax
 8748cbd:	83 e8 03             	sub    $0x3,%eax
 8748cc0:	0f b7 c0             	movzwl %ax,%eax
 8748cc3:	89 04 24             	mov    %eax,(%esp)
 8748cc6:	e8 05 51 00 00       	call   874ddd0 <_ZN5yaSSL6c16toaEtPh>
 8748ccb:	89 74 24 04          	mov    %esi,0x4(%esp)
 8748ccf:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8748cd6:	00 
 8748cd7:	89 3c 24             	mov    %edi,(%esp)
 8748cda:	e8 f1 e2 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 8748cdf:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8748ce2:	8b 72 28             	mov    0x28(%edx),%esi
 8748ce5:	85 f6                	test   %esi,%esi
 8748ce7:	74 3a                	je     8748d23 <_ZN5yaSSLlsERNS_13output_bufferERKNS_18CertificateRequestE+0xe3>
 8748ce9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8748cec:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8748cef:	90                   	nop
 8748cf0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8748cf3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8748cf7:	8b 46 08             	mov    0x8(%esi),%eax
 8748cfa:	89 04 24             	mov    %eax,(%esp)
 8748cfd:	e8 8e 50 00 00       	call   874dd90 <_ZN5yaSSL5ato16EPKhRt>
 8748d02:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
 8748d06:	83 c0 02             	add    $0x2,%eax
 8748d09:	89 44 24 08          	mov    %eax,0x8(%esp)
 8748d0d:	8b 46 08             	mov    0x8(%esi),%eax
 8748d10:	89 3c 24             	mov    %edi,(%esp)
 8748d13:	89 44 24 04          	mov    %eax,0x4(%esp)
 8748d17:	e8 b4 e2 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 8748d1c:	8b 76 04             	mov    0x4(%esi),%esi
 8748d1f:	85 f6                	test   %esi,%esi
 8748d21:	75 cd                	jne    8748cf0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_18CertificateRequestE+0xb0>
 8748d23:	83 c4 3c             	add    $0x3c,%esp
 8748d26:	89 f8                	mov    %edi,%eax
 8748d28:	5b                   	pop    %ebx
 8748d29:	5e                   	pop    %esi
 8748d2a:	5f                   	pop    %edi
 8748d2b:	5d                   	pop    %ebp
 8748d2c:	c3                   	ret
 8748d2d:	90                   	nop
 8748d2e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::operator<< @ 0x8748c40

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::output_buffer&, yaSSL::CertificateRequest const&) */

output_buffer * yaSSL::operator<<(output_buffer *param_1,CertificateRequest *param_2)

{
  int iVar1;
  short sVar2;
  undefined1 *puVar3;
  int iVar4;
  ushort local_20;
  uchar local_1e [10];
  undefined4 uStack_14;
  
  uStack_14 = 0x8748c4b;
  puVar3 = (undefined1 *)output_buffer::operator[]((uint)param_1);
  *puVar3 = (char)*(undefined4 *)(param_2 + 0x24);
  if (0 < *(int *)(param_2 + 0x24)) {
    iVar4 = 0;
    do {
      puVar3 = (undefined1 *)output_buffer::operator[]((uint)param_1);
      iVar1 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      *puVar3 = (char)*(undefined4 *)(param_2 + iVar1 + 8);
    } while (iVar4 < *(int *)(param_2 + 0x24));
  }
  sVar2 = HandShakeBase::get_length((HandShakeBase *)param_2);
  c16toa((sVar2 - *(short *)(param_2 + 0x24)) - 3,local_1e);
  output_buffer::write(param_1,local_1e,2);
  iVar4 = *(int *)(param_2 + 0x28);
  if (iVar4 != 0) {
    do {
      ato16(*(uchar **)(iVar4 + 8),&local_20);
      output_buffer::write(param_1,*(uchar **)(iVar4 + 8),local_20 + 2);
      iVar4 = *(int *)(iVar4 + 4);
    } while (iVar4 != 0);
  }
  return param_1;
}

```

---

## operator_lt__lt__08748d60

```asm
// === 08748d60 yaSSL::operator<<  [0x08748d60-0x8748e8f] ===
 8748d60:	55                   	push   %ebp
 8748d61:	89 e5                	mov    %esp,%ebp
 8748d63:	57                   	push   %edi
 8748d64:	56                   	push   %esi
 8748d65:	53                   	push   %ebx
 8748d66:	e8 8d a0 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8748d6b:	81 c3 2d 3e c2 00    	add    $0xc23e2d,%ebx
 8748d71:	83 ec 2c             	sub    $0x2c,%esp
 8748d74:	8b 75 08             	mov    0x8(%ebp),%esi
 8748d77:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8748d7a:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8748d81:	fe 
 8748d82:	89 34 24             	mov    %esi,(%esp)
 8748d85:	e8 b6 e1 04 00       	call   8796f40 <_ZN5yaSSL13output_bufferixEj>
 8748d8a:	0f b6 57 08          	movzbl 0x8(%edi),%edx
 8748d8e:	88 10                	mov    %dl,(%eax)
 8748d90:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8748d97:	fe 
 8748d98:	89 34 24             	mov    %esi,(%esp)
 8748d9b:	e8 a0 e1 04 00       	call   8796f40 <_ZN5yaSSL13output_bufferixEj>
 8748da0:	0f b6 57 09          	movzbl 0x9(%edi),%edx
 8748da4:	88 10                	mov    %dl,(%eax)
 8748da6:	8d 47 0a             	lea    0xa(%edi),%eax
 8748da9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8748dad:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 8748db4:	00 
 8748db5:	89 34 24             	mov    %esi,(%esp)
 8748db8:	e8 13 e2 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 8748dbd:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8748dc4:	fe 
 8748dc5:	89 34 24             	mov    %esi,(%esp)
 8748dc8:	e8 73 e1 04 00       	call   8796f40 <_ZN5yaSSL13output_bufferixEj>
 8748dcd:	0f b6 57 2a          	movzbl 0x2a(%edi),%edx
 8748dd1:	88 10                	mov    %dl,(%eax)
 8748dd3:	80 7f 2a 00          	cmpb   $0x0,0x2a(%edi)
 8748dd7:	74 17                	je     8748df0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_11ClientHelloE+0x90>
 8748dd9:	8d 47 2b             	lea    0x2b(%edi),%eax
 8748ddc:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 8748de3:	00 
 8748de4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8748de8:	89 34 24             	mov    %esi,(%esp)
 8748deb:	e8 e0 e1 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 8748df0:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 8748df3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8748df7:	0f b7 47 4c          	movzwl 0x4c(%edi),%eax
 8748dfb:	89 04 24             	mov    %eax,(%esp)
 8748dfe:	e8 cd 4f 00 00       	call   874ddd0 <_ZN5yaSSL6c16toaEtPh>
 8748e03:	89 34 24             	mov    %esi,(%esp)
 8748e06:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8748e0d:	fe 
 8748e0e:	e8 2d e1 04 00       	call   8796f40 <_ZN5yaSSL13output_bufferixEj>
 8748e13:	0f b6 55 e6          	movzbl -0x1a(%ebp),%edx
 8748e17:	88 10                	mov    %dl,(%eax)
 8748e19:	89 34 24             	mov    %esi,(%esp)
 8748e1c:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8748e23:	fe 
 8748e24:	e8 17 e1 04 00       	call   8796f40 <_ZN5yaSSL13output_bufferixEj>
 8748e29:	0f b6 55 e7          	movzbl -0x19(%ebp),%edx
 8748e2d:	88 10                	mov    %dl,(%eax)
 8748e2f:	0f b7 47 4c          	movzwl 0x4c(%edi),%eax
 8748e33:	89 34 24             	mov    %esi,(%esp)
 8748e36:	89 44 24 08          	mov    %eax,0x8(%esp)
 8748e3a:	8d 47 4e             	lea    0x4e(%edi),%eax
 8748e3d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8748e41:	e8 8a e1 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 8748e46:	89 34 24             	mov    %esi,(%esp)
 8748e49:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8748e50:	fe 
 8748e51:	e8 ea e0 04 00       	call   8796f40 <_ZN5yaSSL13output_bufferixEj>
 8748e56:	0f b6 97 ce 00 00 00 	movzbl 0xce(%edi),%edx
 8748e5d:	88 10                	mov    %dl,(%eax)
 8748e5f:	89 34 24             	mov    %esi,(%esp)
 8748e62:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8748e69:	fe 
 8748e6a:	e8 d1 e0 04 00       	call   8796f40 <_ZN5yaSSL13output_bufferixEj>
 8748e6f:	8b 97 d0 00 00 00    	mov    0xd0(%edi),%edx
 8748e75:	88 10                	mov    %dl,(%eax)
 8748e77:	83 c4 2c             	add    $0x2c,%esp
 8748e7a:	89 f0                	mov    %esi,%eax
 8748e7c:	5b                   	pop    %ebx
 8748e7d:	5e                   	pop    %esi
 8748e7e:	5f                   	pop    %edi
 8748e7f:	5d                   	pop    %ebp
 8748e80:	c3                   	ret
 8748e81:	90                   	nop
 8748e82:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8748e89:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::operator<< @ 0x8748d60

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::output_buffer&, yaSSL::ClientHello const&) */

output_buffer * yaSSL::operator<<(output_buffer *param_1,ClientHello *param_2)

{
  ClientHello *pCVar1;
  uchar *puVar2;
  undefined1 *puVar3;
  uchar local_1e;
  undefined1 local_1d;
  undefined4 uStack_14;
  
  uStack_14 = 0x8748d6b;
  pCVar1 = (ClientHello *)output_buffer::operator[]((uint)param_1);
  *pCVar1 = param_2[8];
  pCVar1 = (ClientHello *)output_buffer::operator[]((uint)param_1);
  *pCVar1 = param_2[9];
  output_buffer::write(param_1,(uchar *)(param_2 + 10),0x20);
  pCVar1 = (ClientHello *)output_buffer::operator[]((uint)param_1);
  *pCVar1 = param_2[0x2a];
  if (param_2[0x2a] != (ClientHello)0x0) {
    output_buffer::write(param_1,(uchar *)(param_2 + 0x2b),0x20);
  }
  c16toa(*(ushort *)(param_2 + 0x4c),&local_1e);
  puVar2 = (uchar *)output_buffer::operator[]((uint)param_1);
  *puVar2 = local_1e;
  puVar3 = (undefined1 *)output_buffer::operator[]((uint)param_1);
  *puVar3 = local_1d;
  output_buffer::write(param_1,(uchar *)(param_2 + 0x4e),(uint)*(ushort *)(param_2 + 0x4c));
  pCVar1 = (ClientHello *)output_buffer::operator[]((uint)param_1);
  *pCVar1 = param_2[0xce];
  puVar3 = (undefined1 *)output_buffer::operator[]((uint)param_1);
  *puVar3 = (char)*(undefined4 *)(param_2 + 0xd0);
  return param_1;
}

```

---

## operator_lt__lt__08748ec0

```asm
// === 08748ec0 yaSSL::operator<<  [0x08748ec0-0x8748f9f] ===
 8748ec0:	55                   	push   %ebp
 8748ec1:	89 e5                	mov    %esp,%ebp
 8748ec3:	57                   	push   %edi
 8748ec4:	56                   	push   %esi
 8748ec5:	53                   	push   %ebx
 8748ec6:	e8 2d 9f fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8748ecb:	81 c3 cd 3c c2 00    	add    $0xc23ccd,%ebx
 8748ed1:	83 ec 1c             	sub    $0x1c,%esp
 8748ed4:	8b 75 08             	mov    0x8(%ebp),%esi
 8748ed7:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8748eda:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8748ee1:	fe 
 8748ee2:	89 34 24             	mov    %esi,(%esp)
 8748ee5:	e8 56 e0 04 00       	call   8796f40 <_ZN5yaSSL13output_bufferixEj>
 8748eea:	0f b6 57 08          	movzbl 0x8(%edi),%edx
 8748eee:	88 10                	mov    %dl,(%eax)
 8748ef0:	89 34 24             	mov    %esi,(%esp)
 8748ef3:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8748efa:	fe 
 8748efb:	e8 40 e0 04 00       	call   8796f40 <_ZN5yaSSL13output_bufferixEj>
 8748f00:	0f b6 57 09          	movzbl 0x9(%edi),%edx
 8748f04:	88 10                	mov    %dl,(%eax)
 8748f06:	8d 47 0a             	lea    0xa(%edi),%eax
 8748f09:	89 44 24 04          	mov    %eax,0x4(%esp)
 8748f0d:	89 34 24             	mov    %esi,(%esp)
 8748f10:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 8748f17:	00 
 8748f18:	e8 b3 e0 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 8748f1d:	89 34 24             	mov    %esi,(%esp)
 8748f20:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8748f27:	fe 
 8748f28:	e8 13 e0 04 00       	call   8796f40 <_ZN5yaSSL13output_bufferixEj>
 8748f2d:	0f b6 57 2a          	movzbl 0x2a(%edi),%edx
 8748f31:	88 10                	mov    %dl,(%eax)
 8748f33:	8d 47 2b             	lea    0x2b(%edi),%eax
 8748f36:	89 44 24 04          	mov    %eax,0x4(%esp)
 8748f3a:	89 34 24             	mov    %esi,(%esp)
 8748f3d:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 8748f44:	00 
 8748f45:	e8 86 e0 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 8748f4a:	89 34 24             	mov    %esi,(%esp)
 8748f4d:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8748f54:	fe 
 8748f55:	e8 e6 df 04 00       	call   8796f40 <_ZN5yaSSL13output_bufferixEj>
 8748f5a:	0f b6 57 4b          	movzbl 0x4b(%edi),%edx
 8748f5e:	88 10                	mov    %dl,(%eax)
 8748f60:	89 34 24             	mov    %esi,(%esp)
 8748f63:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8748f6a:	fe 
 8748f6b:	e8 d0 df 04 00       	call   8796f40 <_ZN5yaSSL13output_bufferixEj>
 8748f70:	0f b6 57 4c          	movzbl 0x4c(%edi),%edx
 8748f74:	88 10                	mov    %dl,(%eax)
 8748f76:	89 34 24             	mov    %esi,(%esp)
 8748f79:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8748f80:	fe 
 8748f81:	e8 ba df 04 00       	call   8796f40 <_ZN5yaSSL13output_bufferixEj>
 8748f86:	8b 57 50             	mov    0x50(%edi),%edx
 8748f89:	88 10                	mov    %dl,(%eax)
 8748f8b:	83 c4 1c             	add    $0x1c,%esp
 8748f8e:	89 f0                	mov    %esi,%eax
 8748f90:	5b                   	pop    %ebx
 8748f91:	5e                   	pop    %esi
 8748f92:	5f                   	pop    %edi
 8748f93:	5d                   	pop    %ebp
 8748f94:	c3                   	ret
 8748f95:	90                   	nop
 8748f96:	8d 76 00             	lea    0x0(%esi),%esi
 8748f99:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::operator<< @ 0x8748ec0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::output_buffer&, yaSSL::ServerHello const&) */

output_buffer * yaSSL::operator<<(output_buffer *param_1,ServerHello *param_2)

{
  ServerHello *pSVar1;
  undefined1 *puVar2;
  
  pSVar1 = (ServerHello *)output_buffer::operator[]((uint)param_1);
  *pSVar1 = param_2[8];
  pSVar1 = (ServerHello *)output_buffer::operator[]((uint)param_1);
  *pSVar1 = param_2[9];
  output_buffer::write(param_1,(uchar *)(param_2 + 10),0x20);
  pSVar1 = (ServerHello *)output_buffer::operator[]((uint)param_1);
  *pSVar1 = param_2[0x2a];
  output_buffer::write(param_1,(uchar *)(param_2 + 0x2b),0x20);
  pSVar1 = (ServerHello *)output_buffer::operator[]((uint)param_1);
  *pSVar1 = param_2[0x4b];
  pSVar1 = (ServerHello *)output_buffer::operator[]((uint)param_1);
  *pSVar1 = param_2[0x4c];
  puVar2 = (undefined1 *)output_buffer::operator[]((uint)param_1);
  *puVar2 = (char)*(undefined4 *)(param_2 + 0x50);
  return param_1;
}

```

---

## operator_lt__lt__08748fd0

```asm
// === 08748fd0 yaSSL::operator<<  [0x08748fd0-0x874902f] ===
 8748fd0:	55                   	push   %ebp
 8748fd1:	89 e5                	mov    %esp,%ebp
 8748fd3:	83 ec 28             	sub    $0x28,%esp
 8748fd6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8748fd9:	e8 1a 9e fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8748fde:	81 c3 ba 3b c2 00    	add    $0xc23bba,%ebx
 8748fe4:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8748fe7:	8b 75 08             	mov    0x8(%ebp),%esi
 8748fea:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8748fed:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8748ff0:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8748ff7:	fe 
 8748ff8:	89 34 24             	mov    %esi,(%esp)
 8748ffb:	e8 40 df 04 00       	call   8796f40 <_ZN5yaSSL13output_bufferixEj>
 8749000:	8b 57 04             	mov    0x4(%edi),%edx
 8749003:	88 10                	mov    %dl,(%eax)
 8749005:	89 34 24             	mov    %esi,(%esp)
 8749008:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 874900f:	fe 
 8749010:	e8 2b df 04 00       	call   8796f40 <_ZN5yaSSL13output_bufferixEj>
 8749015:	8b 57 08             	mov    0x8(%edi),%edx
 8749018:	88 10                	mov    %dl,(%eax)
 874901a:	89 f0                	mov    %esi,%eax
 874901c:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 874901f:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8749022:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8749025:	89 ec                	mov    %ebp,%esp
 8749027:	5d                   	pop    %ebp
 8749028:	c3                   	ret
 8749029:	90                   	nop
 874902a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::operator<< @ 0x8748fd0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::output_buffer&, yaSSL::Alert const&) */

output_buffer * yaSSL::operator<<(output_buffer *param_1,Alert *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)output_buffer::operator[]((uint)param_1);
  *puVar1 = (char)*(undefined4 *)(param_2 + 4);
  puVar1 = (undefined1 *)output_buffer::operator[]((uint)param_1);
  *puVar1 = (char)*(undefined4 *)(param_2 + 8);
  return param_1;
}

```

---

## operator_lt__lt__08749060

```asm
// === 08749060 yaSSL::operator<<  [0x08749060-0x874909f] ===
 8749060:	55                   	push   %ebp
 8749061:	89 e5                	mov    %esp,%ebp
 8749063:	83 ec 18             	sub    $0x18,%esp
 8749066:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8749069:	e8 8a 9d fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874906e:	81 c3 2a 3b c2 00    	add    $0xc23b2a,%ebx
 8749074:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8749077:	8b 75 08             	mov    0x8(%ebp),%esi
 874907a:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8749081:	fe 
 8749082:	89 34 24             	mov    %esi,(%esp)
 8749085:	e8 b6 de 04 00       	call   8796f40 <_ZN5yaSSL13output_bufferixEj>
 874908a:	8b 55 0c             	mov    0xc(%ebp),%edx
 874908d:	8b 52 04             	mov    0x4(%edx),%edx
 8749090:	88 10                	mov    %dl,(%eax)
 8749092:	89 f0                	mov    %esi,%eax
 8749094:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8749097:	8b 75 fc             	mov    -0x4(%ebp),%esi
 874909a:	89 ec                	mov    %ebp,%esp
 874909c:	5d                   	pop    %ebp
 874909d:	c3                   	ret
 874909e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::operator<< @ 0x8749060

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::output_buffer&, yaSSL::ChangeCipherSpec const&) */

output_buffer * yaSSL::operator<<(output_buffer *param_1,ChangeCipherSpec *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)output_buffer::operator[]((uint)param_1);
  *puVar1 = (char)*(undefined4 *)(param_2 + 4);
  return param_1;
}

```

---

## operator_lt__lt__087490d0

```asm
// === 087490d0 yaSSL::operator<<  [0x087490d0-0x874912f] ===
 87490d0:	55                   	push   %ebp
 87490d1:	89 e5                	mov    %esp,%ebp
 87490d3:	83 ec 28             	sub    $0x28,%esp
 87490d6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87490d9:	e8 1a 9d fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87490de:	81 c3 ba 3a c2 00    	add    $0xc23aba,%ebx
 87490e4:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87490e7:	8b 75 08             	mov    0x8(%ebp),%esi
 87490ea:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87490ed:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87490f0:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 87490f7:	fe 
 87490f8:	89 34 24             	mov    %esi,(%esp)
 87490fb:	e8 40 de 04 00       	call   8796f40 <_ZN5yaSSL13output_bufferixEj>
 8749100:	8b 57 04             	mov    0x4(%edi),%edx
 8749103:	83 c7 08             	add    $0x8,%edi
 8749106:	88 10                	mov    %dl,(%eax)
 8749108:	89 7c 24 04          	mov    %edi,0x4(%esp)
 874910c:	89 34 24             	mov    %esi,(%esp)
 874910f:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 8749116:	00 
 8749117:	e8 b4 de 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 874911c:	89 f0                	mov    %esi,%eax
 874911e:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8749121:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8749124:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8749127:	89 ec                	mov    %ebp,%esp
 8749129:	5d                   	pop    %ebp
 874912a:	c3                   	ret
 874912b:	90                   	nop
 874912c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::operator<< @ 0x87490d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::output_buffer&, yaSSL::HandShakeHeader const&) */

output_buffer * yaSSL::operator<<(output_buffer *param_1,HandShakeHeader *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)output_buffer::operator[]((uint)param_1);
  *puVar1 = (char)*(undefined4 *)(param_2 + 4);
  output_buffer::write(param_1,(uchar *)(param_2 + 8),3);
  return param_1;
}

```

---

## operator_lt__lt__08749160

```asm
// === 08749160 yaSSL::operator<<  [0x08749160-0x874920f] ===
 8749160:	55                   	push   %ebp
 8749161:	89 e5                	mov    %esp,%ebp
 8749163:	83 ec 38             	sub    $0x38,%esp
 8749166:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8749169:	e8 8a 9c fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874916e:	81 c3 2a 3a c2 00    	add    $0xc23a2a,%ebx
 8749174:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8749177:	8b 75 08             	mov    0x8(%ebp),%esi
 874917a:	89 7d fc             	mov    %edi,-0x4(%ebp)
 874917d:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8749180:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8749187:	fe 
 8749188:	89 34 24             	mov    %esi,(%esp)
 874918b:	e8 b0 dd 04 00       	call   8796f40 <_ZN5yaSSL13output_bufferixEj>
 8749190:	8b 17                	mov    (%edi),%edx
 8749192:	88 10                	mov    %dl,(%eax)
 8749194:	89 34 24             	mov    %esi,(%esp)
 8749197:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 874919e:	fe 
 874919f:	e8 9c dd 04 00       	call   8796f40 <_ZN5yaSSL13output_bufferixEj>
 87491a4:	0f b6 57 04          	movzbl 0x4(%edi),%edx
 87491a8:	88 10                	mov    %dl,(%eax)
 87491aa:	89 34 24             	mov    %esi,(%esp)
 87491ad:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 87491b4:	fe 
 87491b5:	e8 86 dd 04 00       	call   8796f40 <_ZN5yaSSL13output_bufferixEj>
 87491ba:	0f b6 57 05          	movzbl 0x5(%edi),%edx
 87491be:	88 10                	mov    %dl,(%eax)
 87491c0:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 87491c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 87491c7:	0f b7 47 06          	movzwl 0x6(%edi),%eax
 87491cb:	89 04 24             	mov    %eax,(%esp)
 87491ce:	e8 fd 4b 00 00       	call   874ddd0 <_ZN5yaSSL6c16toaEtPh>
 87491d3:	89 34 24             	mov    %esi,(%esp)
 87491d6:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 87491dd:	fe 
 87491de:	e8 5d dd 04 00       	call   8796f40 <_ZN5yaSSL13output_bufferixEj>
 87491e3:	0f b6 55 e6          	movzbl -0x1a(%ebp),%edx
 87491e7:	88 10                	mov    %dl,(%eax)
 87491e9:	89 34 24             	mov    %esi,(%esp)
 87491ec:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 87491f3:	fe 
 87491f4:	e8 47 dd 04 00       	call   8796f40 <_ZN5yaSSL13output_bufferixEj>
 87491f9:	0f b6 55 e7          	movzbl -0x19(%ebp),%edx
 87491fd:	88 10                	mov    %dl,(%eax)
 87491ff:	89 f0                	mov    %esi,%eax
 8749201:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8749204:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8749207:	8b 7d fc             	mov    -0x4(%ebp),%edi
 874920a:	89 ec                	mov    %ebp,%esp
 874920c:	5d                   	pop    %ebp
 874920d:	c3                   	ret
 874920e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::operator<< @ 0x8749160

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::output_buffer&, yaSSL::RecordLayerHeader const&) */

output_buffer * yaSSL::operator<<(output_buffer *param_1,RecordLayerHeader *param_2)

{
  undefined1 *puVar1;
  RecordLayerHeader *pRVar2;
  uchar *puVar3;
  uchar local_1e;
  undefined1 local_1d;
  
  puVar1 = (undefined1 *)output_buffer::operator[]((uint)param_1);
  *puVar1 = (char)*(undefined4 *)param_2;
  pRVar2 = (RecordLayerHeader *)output_buffer::operator[]((uint)param_1);
  *pRVar2 = param_2[4];
  pRVar2 = (RecordLayerHeader *)output_buffer::operator[]((uint)param_1);
  *pRVar2 = param_2[5];
  c16toa(*(ushort *)(param_2 + 6),&local_1e);
  puVar3 = (uchar *)output_buffer::operator[]((uint)param_1);
  *puVar3 = local_1e;
  puVar1 = (undefined1 *)output_buffer::operator[]((uint)param_1);
  *puVar1 = local_1d;
  return param_1;
}

```

---

## operator_lt__lt__087499b0

```asm
// === 087499b0 yaSSL::operator<<  [0x087499b0-0x8749a5f] ===
 87499b0:	55                   	push   %ebp
 87499b1:	89 e5                	mov    %esp,%ebp
 87499b3:	83 ec 48             	sub    $0x48,%esp
 87499b6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87499b9:	8b 55 0c             	mov    0xc(%ebp),%edx
 87499bc:	e8 37 94 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87499c1:	81 c3 d7 31 c2 00    	add    $0xc231d7,%ebx
 87499c7:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87499ca:	8b 75 08             	mov    0x8(%ebp),%esi
 87499cd:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87499d0:	89 14 24             	mov    %edx,(%esp)
 87499d3:	89 55 d0             	mov    %edx,-0x30(%ebp)
 87499d6:	e8 c5 d0 ff ff       	call   8746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>
 87499db:	8d 4d e5             	lea    -0x1b(%ebp),%ecx
 87499de:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
 87499e1:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87499e5:	8d 78 fa             	lea    -0x6(%eax),%edi
 87499e8:	83 e8 03             	sub    $0x3,%eax
 87499eb:	89 04 24             	mov    %eax,(%esp)
 87499ee:	e8 1d 43 00 00       	call   874dd10 <_ZN5yaSSL7c32to24EjRA3_h>
 87499f3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 87499f6:	89 34 24             	mov    %esi,(%esp)
 87499f9:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 8749a00:	00 
 8749a01:	89 44 24 04          	mov    %eax,0x4(%esp)
 8749a05:	e8 c6 d5 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 8749a0a:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 8749a0d:	89 3c 24             	mov    %edi,(%esp)
 8749a10:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8749a14:	e8 f7 42 00 00       	call   874dd10 <_ZN5yaSSL7c32to24EjRA3_h>
 8749a19:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8749a1c:	89 34 24             	mov    %esi,(%esp)
 8749a1f:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 8749a26:	00 
 8749a27:	89 44 24 04          	mov    %eax,0x4(%esp)
 8749a2b:	e8 a0 d5 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 8749a30:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8749a33:	89 14 24             	mov    %edx,(%esp)
 8749a36:	e8 45 ff ff ff       	call   8749980 <_ZNK5yaSSL11Certificate10get_bufferEv>
 8749a3b:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8749a3f:	89 34 24             	mov    %esi,(%esp)
 8749a42:	89 44 24 04          	mov    %eax,0x4(%esp)
 8749a46:	e8 85 d5 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 8749a4b:	89 f0                	mov    %esi,%eax
 8749a4d:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8749a50:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8749a53:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8749a56:	89 ec                	mov    %ebp,%esp
 8749a58:	5d                   	pop    %ebp
 8749a59:	c3                   	ret
 8749a5a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::operator<< @ 0x87499b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::output_buffer&, yaSSL::Certificate const&) */

output_buffer * yaSSL::operator<<(output_buffer *param_1,Certificate *param_2)

{
  int iVar1;
  uchar *puVar2;
  unsigned_char local_1f [15];
  
  iVar1 = HandShakeBase::get_length((HandShakeBase *)param_2);
  c32to24(iVar1 - 3,local_1f);
  output_buffer::write(param_1,(uchar *)local_1f,3);
  c32to24(iVar1 - 6U,local_1f);
  output_buffer::write(param_1,(uchar *)local_1f,3);
  puVar2 = (uchar *)Certificate::get_buffer(param_2);
  output_buffer::write(param_1,puVar2,iVar1 - 6U);
  return param_1;
}

```

---

## processReply

```asm
// === 0879e390 yaSSL::processReply  [0x0879e390-0x879e41f] ===
 879e390:	55                   	push   %ebp
 879e391:	89 e5                	mov    %esp,%ebp
 879e393:	83 ec 18             	sub    $0x18,%esp
 879e396:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 879e399:	e8 5a 4a f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879e39e:	81 c3 fa e7 bc 00    	add    $0xbce7fa,%ebx
 879e3a4:	89 75 fc             	mov    %esi,-0x4(%ebp)
 879e3a7:	8b 75 08             	mov    0x8(%ebp),%esi
 879e3aa:	89 34 24             	mov    %esi,(%esp)
 879e3ad:	e8 fe fc fa ff       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 879e3b2:	85 c0                	test   %eax,%eax
 879e3b4:	74 0a                	je     879e3c0 <_ZN5yaSSL12processReplyERNS_3SSLE+0x30>
 879e3b6:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 879e3b9:	8b 75 fc             	mov    -0x4(%ebp),%esi
 879e3bc:	89 ec                	mov    %ebp,%esp
 879e3be:	5d                   	pop    %ebp
 879e3bf:	c3                   	ret
 879e3c0:	89 34 24             	mov    %esi,(%esp)
 879e3c3:	e8 68 fa ff ff       	call   879de30 <_ZN5yaSSL14DoProcessReplyERNS_3SSLE>
 879e3c8:	85 c0                	test   %eax,%eax
 879e3ca:	74 ea                	je     879e3b6 <_ZN5yaSSL12processReplyERNS_3SSLE+0x26>
 879e3cc:	89 34 24             	mov    %esi,(%esp)
 879e3cf:	e8 cc fc fa ff       	call   874e0a0 <_ZNK5yaSSL3SSL9getSocketEv>
 879e3d4:	89 04 24             	mov    %eax,(%esp)
 879e3d7:	e8 24 31 00 00       	call   87a1500 <_ZNK5yaSSL6Socket13IsNonBlockingEv>
 879e3dc:	84 c0                	test   %al,%al
 879e3de:	75 20                	jne    879e400 <_ZN5yaSSL12processReplyERNS_3SSLE+0x70>
 879e3e0:	89 34 24             	mov    %esi,(%esp)
 879e3e3:	e8 c8 fc fa ff       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 879e3e8:	85 c0                	test   %eax,%eax
 879e3ea:	75 ca                	jne    879e3b6 <_ZN5yaSSL12processReplyERNS_3SSLE+0x26>
 879e3ec:	89 34 24             	mov    %esi,(%esp)
 879e3ef:	e8 3c fa ff ff       	call   879de30 <_ZN5yaSSL14DoProcessReplyERNS_3SSLE>
 879e3f4:	85 c0                	test   %eax,%eax
 879e3f6:	75 e8                	jne    879e3e0 <_ZN5yaSSL12processReplyERNS_3SSLE+0x50>
 879e3f8:	eb bc                	jmp    879e3b6 <_ZN5yaSSL12processReplyERNS_3SSLE+0x26>
 879e3fa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 879e400:	c7 44 24 04 50 00 00 	movl   $0x50,0x4(%esp)
 879e407:	00 
 879e408:	89 34 24             	mov    %esi,(%esp)
 879e40b:	e8 c0 fb fa ff       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 879e410:	eb a4                	jmp    879e3b6 <_ZN5yaSSL12processReplyERNS_3SSLE+0x26>
 879e412:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 879e419:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::processReply @ 0x879e390

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::processReply(yaSSL::SSL&) */

void yaSSL::processReply(SSL *param_1)

{
  char cVar1;
  int iVar2;
  Socket *this;
  
  iVar2 = SSL::GetError(param_1);
  if ((iVar2 == 0) && (iVar2 = DoProcessReply(param_1), iVar2 != 0)) {
    this = (Socket *)SSL::getSocket(param_1);
    cVar1 = Socket::IsNonBlocking(this);
    if (cVar1 == '\0') {
      do {
        iVar2 = SSL::GetError(param_1);
        if (iVar2 != 0) {
          return;
        }
        iVar2 = DoProcessReply(param_1);
      } while (iVar2 != 0);
    }
    else {
      SSL::SetError(param_1,0x50);
    }
  }
  return;
}

```

---

## read_file

```asm
// === 08745ab0 yaSSL::read_file  [0x08745ab0-0x87460bf] ===
 8745ab0:	55                   	push   %ebp
 8745ab1:	89 e5                	mov    %esp,%ebp
 8745ab3:	81 ec 88 01 00 00    	sub    $0x188,%esp
 8745ab9:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8745abc:	8b 75 10             	mov    0x10(%ebp),%esi
 8745abf:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8745ac2:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8745ac5:	e8 2e d3 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8745aca:	81 c3 ce 70 c2 00    	add    $0xc270ce,%ebx
 8745ad0:	8b 55 14             	mov    0x14(%ebp),%edx
 8745ad3:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8745ad6:	8d 46 f6             	lea    -0xa(%esi),%eax
 8745ad9:	83 f8 01             	cmp    $0x1,%eax
 8745adc:	76 12                	jbe    8745af0 <_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE+0x40>
 8745ade:	b8 fb ff ff ff       	mov    $0xfffffffb,%eax
 8745ae3:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8745ae6:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8745ae9:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8745aec:	89 ec                	mov    %ebp,%esp
 8745aee:	5d                   	pop    %ebp
 8745aef:	c3                   	ret
 8745af0:	85 c9                	test   %ecx,%ecx
 8745af2:	75 07                	jne    8745afb <_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE+0x4b>
 8745af4:	b8 fc ff ff ff       	mov    $0xfffffffc,%eax
 8745af9:	eb e8                	jmp    8745ae3 <_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE+0x33>
 8745afb:	80 39 00             	cmpb   $0x0,(%ecx)
 8745afe:	74 f4                	je     8745af4 <_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE+0x44>
 8745b00:	8d 83 bc 4a 99 ff    	lea    -0x66b544(%ebx),%eax
 8745b06:	89 95 b0 fe ff ff    	mov    %edx,-0x150(%ebp)
 8745b0c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8745b10:	89 0c 24             	mov    %ecx,(%esp)
 8745b13:	e8 58 8c 93 ff       	call   807e770 <fopen@plt>
 8745b18:	8b 95 b0 fe ff ff    	mov    -0x150(%ebp),%edx
 8745b1e:	85 c0                	test   %eax,%eax
 8745b20:	89 c7                	mov    %eax,%edi
 8745b22:	74 d0                	je     8745af4 <_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE+0x44>
 8745b24:	83 fa 02             	cmp    $0x2,%edx
 8745b27:	74 7d                	je     8745ba6 <_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE+0xf6>
 8745b29:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8745b2c:	8b 45 08             	mov    0x8(%ebp),%eax
 8745b2f:	83 c1 04             	add    $0x4,%ecx
 8745b32:	83 c0 08             	add    $0x8,%eax
 8745b35:	85 d2                	test   %edx,%edx
 8745b37:	0f 44 c1             	cmove  %ecx,%eax
 8745b3a:	83 fe 0a             	cmp    $0xa,%esi
 8745b3d:	89 85 c0 fe ff ff    	mov    %eax,-0x140(%ebp)
 8745b43:	0f 84 e5 04 00 00    	je     874602e <_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE+0x57e>
 8745b49:	8d b5 c8 fe ff ff    	lea    -0x138(%ebp),%esi
 8745b4f:	c7 85 38 ff ff ff 00 	movl   $0x0,-0xc8(%ebp)
 8745b56:	00 00 00 
 8745b59:	c6 85 3c ff ff ff 00 	movb   $0x0,-0xc4(%ebp)
 8745b60:	89 74 24 08          	mov    %esi,0x8(%esp)
 8745b64:	89 54 24 04          	mov    %edx,0x4(%esp)
 8745b68:	89 3c 24             	mov    %edi,(%esp)
 8745b6b:	e8 40 61 05 00       	call   879bcb0 <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE>
 8745b70:	8b 8d c0 fe ff ff    	mov    -0x140(%ebp),%ecx
 8745b76:	85 c0                	test   %eax,%eax
 8745b78:	89 01                	mov    %eax,(%ecx)
 8745b7a:	74 52                	je     8745bce <_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE+0x11e>
 8745b7c:	80 bd 3c ff ff ff 00 	cmpb   $0x0,-0xc4(%ebp)
 8745b83:	75 5b                	jne    8745be0 <_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE+0x130>
 8745b85:	89 3c 24             	mov    %edi,(%esp)
 8745b88:	e8 13 83 93 ff       	call   807dea0 <fclose@plt>
 8745b8d:	b8 01 00 00 00       	mov    $0x1,%eax
 8745b92:	e9 4c ff ff ff       	jmp    8745ae3 <_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE+0x33>
 8745b97:	89 44 24 04          	mov    %eax,0x4(%esp)
 8745b9b:	8b 45 08             	mov    0x8(%ebp),%eax
 8745b9e:	89 04 24             	mov    %eax,(%esp)
 8745ba1:	e8 fa c9 00 00       	call   87525a0 <_ZN5yaSSL7SSL_CTX5AddCAEPNS_4x509E>
 8745ba6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8745bad:	00 
 8745bae:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8745bb5:	00 
 8745bb6:	89 3c 24             	mov    %edi,(%esp)
 8745bb9:	e8 f2 60 05 00       	call   879bcb0 <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE>
 8745bbe:	85 c0                	test   %eax,%eax
 8745bc0:	75 d5                	jne    8745b97 <_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE+0xe7>
 8745bc2:	89 3c 24             	mov    %edi,(%esp)
 8745bc5:	e8 e6 7b 93 ff       	call   807d7b0 <feof@plt>
 8745bca:	85 c0                	test   %eax,%eax
 8745bcc:	75 b7                	jne    8745b85 <_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE+0xd5>
 8745bce:	89 3c 24             	mov    %edi,(%esp)
 8745bd1:	e8 ca 82 93 ff       	call   807dea0 <fclose@plt>
 8745bd6:	b8 fc ff ff ff       	mov    $0xfffffffc,%eax
 8745bdb:	e9 03 ff ff ff       	jmp    8745ae3 <_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE+0x33>
 8745be0:	8b 45 08             	mov    0x8(%ebp),%eax
 8745be3:	89 04 24             	mov    %eax,(%esp)
 8745be6:	e8 f5 88 00 00       	call   874e4e0 <_ZNK5yaSSL7SSL_CTX13GetPasswordCbEv>
 8745beb:	85 c0                	test   %eax,%eax
 8745bed:	74 df                	je     8745bce <_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE+0x11e>
 8745bef:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8745bf2:	89 85 b0 fe ff ff    	mov    %eax,-0x150(%ebp)
 8745bf8:	89 0c 24             	mov    %ecx,(%esp)
 8745bfb:	e8 10 89 00 00       	call   874e510 <_ZNK5yaSSL7SSL_CTX11GetUserDataEv>
 8745c00:	8b 95 b0 fe ff ff    	mov    -0x150(%ebp),%edx
 8745c06:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8745c0d:	00 
 8745c0e:	c7 44 24 04 50 00 00 	movl   $0x50,0x4(%esp)
 8745c15:	00 
 8745c16:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8745c1a:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 8745c20:	89 85 b8 fe ff ff    	mov    %eax,-0x148(%ebp)
 8745c26:	89 04 24             	mov    %eax,(%esp)
 8745c29:	ff d2                	call   *%edx
 8745c2b:	8b 95 38 ff ff ff    	mov    -0xc8(%ebp),%edx
 8745c31:	89 55 b0             	mov    %edx,-0x50(%ebp)
 8745c34:	89 85 b4 fe ff ff    	mov    %eax,-0x14c(%ebp)
 8745c3a:	31 c0                	xor    %eax,%eax
 8745c3c:	85 d2                	test   %edx,%edx
 8745c3e:	74 0d                	je     8745c4d <_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE+0x19d>
 8745c40:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8745c45:	89 14 24             	mov    %edx,(%esp)
 8745c48:	e8 43 1b 02 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 8745c4d:	8d 95 18 ff ff ff    	lea    -0xe8(%ebp),%edx
 8745c53:	89 95 c4 fe ff ff    	mov    %edx,-0x13c(%ebp)
 8745c59:	8b 55 b0             	mov    -0x50(%ebp),%edx
 8745c5c:	8b 8d c4 fe ff ff    	mov    -0x13c(%ebp),%ecx
 8745c62:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8745c65:	89 04 24             	mov    %eax,(%esp)
 8745c68:	89 54 24 08          	mov    %edx,0x8(%esp)
 8745c6c:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8745c70:	e8 2b 7c 93 ff       	call   807d8a0 <memcpy@plt>
 8745c75:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8745c78:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8745c7b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8745c7e:	89 04 24             	mov    %eax,(%esp)
 8745c81:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 8745c88:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 8745c8f:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 8745c96:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8745c9d:	e8 5e 15 01 00       	call   8757200 <_ZN8TaoCrypt10HexDecoder6DecodeEv>
 8745ca2:	8b 55 b0             	mov    -0x50(%ebp),%edx
 8745ca5:	b8 20 00 00 00       	mov    $0x20,%eax
 8745caa:	83 fa 20             	cmp    $0x20,%edx
 8745cad:	0f 46 c2             	cmovbe %edx,%eax
 8745cb0:	89 44 24 08          	mov    %eax,0x8(%esp)
 8745cb4:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8745cb7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8745cbb:	8b 85 c4 fe ff ff    	mov    -0x13c(%ebp),%eax
 8745cc1:	89 04 24             	mov    %eax,(%esp)
 8745cc4:	e8 d7 7b 93 ff       	call   807d8a0 <memcpy@plt>
 8745cc9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8745ccc:	8b 8d b4 fe ff ff    	mov    -0x14c(%ebp),%ecx
 8745cd2:	8d 55 90             	lea    -0x70(%ebp),%edx
 8745cd5:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8745cd9:	8b 85 b8 fe ff ff    	mov    -0x148(%ebp),%eax
 8745cdf:	89 95 bc fe ff ff    	mov    %edx,-0x144(%ebp)
 8745ce5:	89 54 24 18          	mov    %edx,0x18(%esp)
 8745ce9:	8b 95 c4 fe ff ff    	mov    -0x13c(%ebp),%edx
 8745cef:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8745cf3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8745cf7:	8d 83 03 82 99 ff    	lea    -0x667dfd(%ebx),%eax
 8745cfd:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8745d04:	00 
 8745d05:	89 54 24 08          	mov    %edx,0x8(%esp)
 8745d09:	89 44 24 04          	mov    %eax,0x4(%esp)
 8745d0d:	89 34 24             	mov    %esi,(%esp)
 8745d10:	e8 2b e3 ff ff       	call   8744040 <yaEVP_BytesToKey>
 8745d15:	8d 83 19 76 a7 ff    	lea    -0x5889e7(%ebx),%eax
 8745d1b:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 8745d22:	00 
 8745d23:	89 44 24 04          	mov    %eax,0x4(%esp)
 8745d27:	89 34 24             	mov    %esi,(%esp)
 8745d2a:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8745d31:	e8 8a 8b 93 ff       	call   807e8c0 <strncmp@plt>
 8745d36:	85 c0                	test   %eax,%eax
 8745d38:	0f 84 c2 02 00 00    	je     8746000 <_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE+0x550>
 8745d3e:	8d 83 58 7c 99 ff    	lea    -0x6683a8(%ebx),%eax
 8745d44:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 8745d4b:	00 
 8745d4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8745d50:	89 34 24             	mov    %esi,(%esp)
 8745d53:	e8 68 8b 93 ff       	call   807e8c0 <strncmp@plt>
 8745d58:	85 c0                	test   %eax,%eax
 8745d5a:	0f 84 72 02 00 00    	je     8745fd2 <_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE+0x522>
 8745d60:	8d 83 65 7c 99 ff    	lea    -0x66839b(%ebx),%eax
 8745d66:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8745d6d:	00 
 8745d6e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8745d72:	89 34 24             	mov    %esi,(%esp)
 8745d75:	e8 46 8b 93 ff       	call   807e8c0 <strncmp@plt>
 8745d7a:	85 c0                	test   %eax,%eax
 8745d7c:	0f 84 30 02 00 00    	je     8745fb2 <_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE+0x502>
 8745d82:	8d 83 71 7c 99 ff    	lea    -0x66838f(%ebx),%eax
 8745d88:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8745d8f:	00 
 8745d90:	89 44 24 04          	mov    %eax,0x4(%esp)
 8745d94:	89 34 24             	mov    %esi,(%esp)
 8745d97:	e8 24 8b 93 ff       	call   807e8c0 <strncmp@plt>
 8745d9c:	85 c0                	test   %eax,%eax
 8745d9e:	0f 84 ee 01 00 00    	je     8745f92 <_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE+0x4e2>
 8745da4:	8d 83 7d 7c 99 ff    	lea    -0x668383(%ebx),%eax
 8745daa:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8745db1:	00 
 8745db2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8745db6:	89 34 24             	mov    %esi,(%esp)
 8745db9:	e8 02 8b 93 ff       	call   807e8c0 <strncmp@plt>
 8745dbe:	85 c0                	test   %eax,%eax
 8745dc0:	0f 85 7d 01 00 00    	jne    8745f43 <_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE+0x493>
 8745dc6:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8745dcb:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8745dd2:	e8 c9 ae 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8745dd7:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 8745dde:	00 
 8745ddf:	89 c6                	mov    %eax,%esi
 8745de1:	89 34 24             	mov    %esi,(%esp)
 8745de4:	e8 f7 27 05 00       	call   87985e0 <_ZN5yaSSL3AESC1Ej>
 8745de9:	89 f0                	mov    %esi,%eax
 8745deb:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8745dee:	8d 75 e4             	lea    -0x1c(%ebp),%esi
 8745df1:	74 17                	je     8745e0a <_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE+0x35a>
 8745df3:	89 85 b0 fe ff ff    	mov    %eax,-0x150(%ebp)
 8745df9:	89 34 24             	mov    %esi,(%esp)
 8745dfc:	e8 9f 06 00 00       	call   87464a0 <_ZN5mySTL8auto_ptrIN5yaSSL10BulkCipherEE7DestroyEv>
 8745e01:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 8745e07:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8745e0a:	8b 8d c4 fe ff ff    	mov    -0x13c(%ebp),%ecx
 8745e10:	8b 10                	mov    (%eax),%edx
 8745e12:	89 04 24             	mov    %eax,(%esp)
 8745e15:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8745e19:	8b 8d bc fe ff ff    	mov    -0x144(%ebp),%ecx
 8745e1f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8745e23:	ff 52 0c             	call   *0xc(%edx)
 8745e26:	8b 95 c0 fe ff ff    	mov    -0x140(%ebp),%edx
 8745e2c:	8b 02                	mov    (%edx),%eax
 8745e2e:	89 04 24             	mov    %eax,(%esp)
 8745e31:	e8 9a 15 05 00       	call   87973d0 <_ZNK5yaSSL4x50910get_lengthEv>
 8745e36:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8745e3b:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8745e42:	89 85 b0 fe ff ff    	mov    %eax,-0x150(%ebp)
 8745e48:	e8 53 ae 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8745e4d:	8b 95 b0 fe ff ff    	mov    -0x150(%ebp),%edx
 8745e53:	89 54 24 04          	mov    %edx,0x4(%esp)
 8745e57:	89 04 24             	mov    %eax,(%esp)
 8745e5a:	89 85 ac fe ff ff    	mov    %eax,-0x154(%ebp)
 8745e60:	e8 eb 18 05 00       	call   8797750 <_ZN5yaSSL4x509C1Ej>
 8745e65:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8745e68:	8b 02                	mov    (%edx),%eax
 8745e6a:	89 95 b0 fe ff ff    	mov    %edx,-0x150(%ebp)
 8745e70:	8b 40 04             	mov    0x4(%eax),%eax
 8745e73:	89 85 b8 fe ff ff    	mov    %eax,-0x148(%ebp)
 8745e79:	8b 85 c0 fe ff ff    	mov    -0x140(%ebp),%eax
 8745e7f:	8b 00                	mov    (%eax),%eax
 8745e81:	89 04 24             	mov    %eax,(%esp)
 8745e84:	e8 47 15 05 00       	call   87973d0 <_ZNK5yaSSL4x50910get_lengthEv>
 8745e89:	89 85 bc fe ff ff    	mov    %eax,-0x144(%ebp)
 8745e8f:	8b 85 c0 fe ff ff    	mov    -0x140(%ebp),%eax
 8745e95:	8b 00                	mov    (%eax),%eax
 8745e97:	89 04 24             	mov    %eax,(%esp)
 8745e9a:	e8 41 15 05 00       	call   87973e0 <_ZNK5yaSSL4x50910get_bufferEv>
 8745e9f:	8b 8d ac fe ff ff    	mov    -0x154(%ebp),%ecx
 8745ea5:	89 0c 24             	mov    %ecx,(%esp)
 8745ea8:	89 85 c4 fe ff ff    	mov    %eax,-0x13c(%ebp)
 8745eae:	e8 3d 15 05 00       	call   87973f0 <_ZN5yaSSL4x50910use_bufferEv>
 8745eb3:	8b 95 b0 fe ff ff    	mov    -0x150(%ebp),%edx
 8745eb9:	89 14 24             	mov    %edx,(%esp)
 8745ebc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8745ec0:	8b 85 bc fe ff ff    	mov    -0x144(%ebp),%eax
 8745ec6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8745eca:	8b 85 c4 fe ff ff    	mov    -0x13c(%ebp),%eax
 8745ed0:	89 44 24 08          	mov    %eax,0x8(%esp)
 8745ed4:	ff 95 b8 fe ff ff    	call   *-0x148(%ebp)
 8745eda:	8b 95 c0 fe ff ff    	mov    -0x140(%ebp),%edx
 8745ee0:	8b 02                	mov    (%edx),%eax
 8745ee2:	89 04 24             	mov    %eax,(%esp)
 8745ee5:	e8 f6 06 00 00       	call   87465e0 <_ZN5yaSSL8ysDeleteINS_4x509EEEvPT_>
 8745eea:	8b 8d ac fe ff ff    	mov    -0x154(%ebp),%ecx
 8745ef0:	8b 85 c0 fe ff ff    	mov    -0x140(%ebp),%eax
 8745ef6:	89 08                	mov    %ecx,(%eax)
 8745ef8:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8745eff:	e8 dc 06 00 00       	call   87465e0 <_ZN5yaSSL8ysDeleteINS_4x509EEEvPT_>
 8745f04:	89 34 24             	mov    %esi,(%esp)
 8745f07:	e8 94 05 00 00       	call   87464a0 <_ZN5mySTL8auto_ptrIN5yaSSL10BulkCipherEE7DestroyEv>
 8745f0c:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8745f0f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8745f13:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8745f16:	89 44 24 04          	mov    %eax,0x4(%esp)
 8745f1a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8745f1d:	89 04 24             	mov    %eax,(%esp)
 8745f20:	e8 6b 06 00 00       	call   8746590 <_ZN8TaoCrypt20AllocatorWithCleanupIhE10deallocateEPvj>
 8745f25:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8745f28:	89 44 24 08          	mov    %eax,0x8(%esp)
 8745f2c:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8745f2f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8745f33:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8745f36:	89 04 24             	mov    %eax,(%esp)
 8745f39:	e8 52 06 00 00       	call   8746590 <_ZN8TaoCrypt20AllocatorWithCleanupIhE10deallocateEPvj>
 8745f3e:	e9 42 fc ff ff       	jmp    8745b85 <_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE+0xd5>
 8745f43:	89 3c 24             	mov    %edi,(%esp)
 8745f46:	e8 55 7f 93 ff       	call   807dea0 <fclose@plt>
 8745f4b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8745f4e:	89 04 24             	mov    %eax,(%esp)
 8745f51:	e8 4a 05 00 00       	call   87464a0 <_ZN5mySTL8auto_ptrIN5yaSSL10BulkCipherEE7DestroyEv>
 8745f56:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8745f59:	89 44 24 08          	mov    %eax,0x8(%esp)
 8745f5d:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8745f60:	89 44 24 04          	mov    %eax,0x4(%esp)
 8745f64:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8745f67:	89 04 24             	mov    %eax,(%esp)
 8745f6a:	e8 21 06 00 00       	call   8746590 <_ZN8TaoCrypt20AllocatorWithCleanupIhE10deallocateEPvj>
 8745f6f:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8745f72:	89 44 24 08          	mov    %eax,0x8(%esp)
 8745f76:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8745f79:	89 44 24 04          	mov    %eax,0x4(%esp)
 8745f7d:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8745f80:	89 04 24             	mov    %eax,(%esp)
 8745f83:	e8 08 06 00 00       	call   8746590 <_ZN8TaoCrypt20AllocatorWithCleanupIhE10deallocateEPvj>
 8745f88:	b8 fc ff ff ff       	mov    $0xfffffffc,%eax
 8745f8d:	e9 51 fb ff ff       	jmp    8745ae3 <_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE+0x33>
 8745f92:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8745f97:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8745f9e:	e8 fd ac 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8745fa3:	c7 44 24 04 18 00 00 	movl   $0x18,0x4(%esp)
 8745faa:	00 
 8745fab:	89 c6                	mov    %eax,%esi
 8745fad:	e9 2f fe ff ff       	jmp    8745de1 <_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE+0x331>
 8745fb2:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8745fb7:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8745fbe:	e8 dd ac 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8745fc3:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 8745fca:	00 
 8745fcb:	89 c6                	mov    %eax,%esi
 8745fcd:	e9 0f fe ff ff       	jmp    8745de1 <_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE+0x331>
 8745fd2:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8745fd7:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8745fde:	e8 bd ac 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8745fe3:	89 c6                	mov    %eax,%esi
 8745fe5:	89 04 24             	mov    %eax,(%esp)
 8745fe8:	e8 f3 26 05 00       	call   87986e0 <_ZN5yaSSL7DES_EDEC1Ev>
 8745fed:	89 f0                	mov    %esi,%eax
 8745fef:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8745ff2:	8d 75 e4             	lea    -0x1c(%ebp),%esi
 8745ff5:	0f 85 f8 fd ff ff    	jne    8745df3 <_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE+0x343>
 8745ffb:	e9 0a fe ff ff       	jmp    8745e0a <_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE+0x35a>
 8746000:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8746005:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 874600c:	e8 8f ac 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8746011:	89 c6                	mov    %eax,%esi
 8746013:	89 04 24             	mov    %eax,(%esp)
 8746016:	e8 75 27 05 00       	call   8798790 <_ZN5yaSSL3DESC1Ev>
 874601b:	89 f0                	mov    %esi,%eax
 874601d:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8746020:	8d 75 e4             	lea    -0x1c(%ebp),%esi
 8746023:	0f 85 ca fd ff ff    	jne    8745df3 <_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE+0x343>
 8746029:	e9 dc fd ff ff       	jmp    8745e0a <_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE+0x35a>
 874602e:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8746035:	00 
 8746036:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 874603d:	00 
 874603e:	89 3c 24             	mov    %edi,(%esp)
 8746041:	e8 6a 80 93 ff       	call   807e0b0 <fseek@plt>
 8746046:	89 3c 24             	mov    %edi,(%esp)
 8746049:	e8 82 79 93 ff       	call   807d9d0 <ftell@plt>
 874604e:	89 3c 24             	mov    %edi,(%esp)
 8746051:	89 c6                	mov    %eax,%esi
 8746053:	e8 b8 7c 93 ff       	call   807dd10 <rewind@plt>
 8746058:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874605d:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8746064:	e8 37 ac 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8746069:	89 74 24 04          	mov    %esi,0x4(%esp)
 874606d:	89 04 24             	mov    %eax,(%esp)
 8746070:	89 85 b0 fe ff ff    	mov    %eax,-0x150(%ebp)
 8746076:	e8 d5 16 05 00       	call   8797750 <_ZN5yaSSL4x509C1Ej>
 874607b:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 8746081:	8b 95 c0 fe ff ff    	mov    -0x140(%ebp),%edx
 8746087:	89 02                	mov    %eax,(%edx)
 8746089:	89 04 24             	mov    %eax,(%esp)
 874608c:	e8 5f 13 05 00       	call   87973f0 <_ZN5yaSSL4x50910use_bufferEv>
 8746091:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8746095:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 874609c:	00 
 874609d:	89 74 24 04          	mov    %esi,0x4(%esp)
 87460a1:	89 04 24             	mov    %eax,(%esp)
 87460a4:	e8 a7 7c 93 ff       	call   807dd50 <fread@plt>
 87460a9:	83 f8 01             	cmp    $0x1,%eax
 87460ac:	0f 84 d3 fa ff ff    	je     8745b85 <_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE+0xd5>
 87460b2:	e9 17 fb ff ff       	jmp    8745bce <_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE+0x11e>
 87460b7:	89 f6                	mov    %esi,%esi
 87460b9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::read_file @ 0x8745ab0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::read_file(yaSSL::SSL_CTX*, char const*, int, yaSSL::CertType) */

undefined4 yaSSL::read_file(SSL_CTX *param_1,char *param_2,int param_3,int param_4)

{
  FILE *__stream;
  SSL_CTX *pSVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  DES_EDE *pDVar5;
  x509 *pxVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  void *__ptr;
  size_t sVar9;
  char *pcVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  char local_13c [80];
  undefined1 local_ec [32];
  size_t local_cc;
  char local_c8;
  undefined1 local_c4 [80];
  undefined1 local_74 [32];
  size_t local_54;
  void *local_50;
  AllocatorWithCleanup<unsigned_char> local_4c [4];
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  void *local_3c;
  AllocatorWithCleanup<unsigned_char> local_38 [4];
  size_t *local_34;
  undefined1 local_30 [16];
  DES_EDE *local_20 [4];
  
  if (1 < param_3 - 10U) {
    return 0xfffffffb;
  }
  if (((param_2 == (char *)0x0) || (*param_2 == '\0')) ||
     (__stream = fopen(param_2,"rb"), __stream == (FILE *)0x0)) {
    return 0xfffffffc;
  }
  if (param_4 == 2) {
    while (pxVar6 = (x509 *)PemToDer(__stream,0,0), pxVar6 != (x509 *)0x0) {
      SSL_CTX::AddCA(param_1,pxVar6);
    }
    iVar2 = feof(__stream);
    if (iVar2 == 0) goto LAB_08745bce;
    goto LAB_08745b85;
  }
  pSVar1 = param_1 + 8;
  if (param_4 == 0) {
    pSVar1 = param_1 + 4;
  }
  if (param_3 == 10) {
    uVar14 = 0;
    fseek(__stream,0,2);
    uVar12 = ftell(__stream);
    rewind(__stream);
    pxVar6 = operator_new(8,uVar14 & 0xffffff00);
    x509::x509(pxVar6,uVar12);
    *(x509 **)pSVar1 = pxVar6;
    __ptr = (void *)x509::use_buffer(pxVar6);
    sVar9 = fread(__ptr,uVar12,1,__stream);
    if (sVar9 == 1) goto LAB_08745b85;
LAB_08745bce:
    fclose(__stream);
    return 0xfffffffc;
  }
  local_cc = 0;
  local_c8 = '\0';
  iVar2 = PemToDer(__stream,param_4,local_13c);
  *(int *)pSVar1 = iVar2;
  if (iVar2 == 0) goto LAB_08745bce;
  if (local_c8 == '\0') goto LAB_08745b85;
  pcVar3 = (code *)SSL_CTX::GetPasswordCb(param_1);
  if (pcVar3 == (code *)0x0) goto LAB_08745bce;
  uVar4 = SSL_CTX::GetUserData(param_1);
  uVar12 = 0;
  uVar4 = (*pcVar3)(local_c4,0x50,0,uVar4);
  local_54 = local_cc;
  local_50 = (void *)0x0;
  if (local_cc != 0) {
    local_50 = operator_new__(local_cc,uVar12 & 0xffffff00);
  }
  memcpy(local_50,local_ec,local_54);
  local_34 = &local_54;
  local_48 = 0;
  local_44 = 0;
  local_3c = (void *)0x0;
  local_40 = 0;
  TaoCrypt::HexDecoder::Decode((HexDecoder *)&local_40);
  sVar9 = 0x20;
  if (local_54 < 0x21) {
    sVar9 = local_54;
  }
  memcpy(local_ec,local_50,sVar9);
  puVar13 = local_74;
  yaEVP_BytesToKey(local_13c,&DAT_08d04d9b,local_ec,local_c4,uVar4,1,puVar13,local_30);
  pcVar10 = "DES-CBC";
  local_20[0] = (DES_EDE *)0x0;
  iVar2 = strncmp(local_13c,"DES-CBC",7);
  if (iVar2 == 0) {
    pDVar5 = operator_new(8,(uint)pcVar10 & 0xffffff00);
    DES::DES((DES *)pDVar5);
    if (pDVar5 != local_20[0]) goto LAB_08745df3;
  }
  else {
    puVar11 = &DAT_08d047f0;
    iVar2 = strncmp(local_13c,"DES-EDE3-CBC",0xd);
    if (iVar2 == 0) {
      pDVar5 = operator_new(8,(uint)puVar11 & 0xffffff00);
      DES_EDE::DES_EDE(pDVar5);
      if (pDVar5 != local_20[0]) goto LAB_08745df3;
    }
    else {
      puVar11 = &DAT_08d047fd;
      iVar2 = strncmp(local_13c,"AES-128-CBC",0xc);
      if (iVar2 == 0) {
        pDVar5 = operator_new(8,(uint)puVar11 & 0xffffff00);
        uVar12 = 0x10;
      }
      else {
        puVar11 = &DAT_08d04809;
        iVar2 = strncmp(local_13c,"AES-192-CBC",0xc);
        if (iVar2 == 0) {
          pDVar5 = operator_new(8,(uint)puVar11 & 0xffffff00);
          uVar12 = 0x18;
        }
        else {
          pcVar10 = "AES-256-CBC";
          iVar2 = strncmp(local_13c,"AES-256-CBC",0xc);
          if (iVar2 != 0) {
            fclose(__stream);
            mySTL::auto_ptr<yaSSL::BulkCipher>::Destroy((auto_ptr<yaSSL::BulkCipher> *)local_20);
            TaoCrypt::AllocatorWithCleanup<unsigned_char>::deallocate(local_38,local_3c,local_40);
            TaoCrypt::AllocatorWithCleanup<unsigned_char>::deallocate(local_4c,local_50,local_54);
            return 0xfffffffc;
          }
          pDVar5 = operator_new(8,(uint)pcVar10 & 0xffffff00);
          uVar12 = 0x20;
        }
      }
      AES::AES((AES *)pDVar5,uVar12);
      if (pDVar5 != local_20[0]) {
LAB_08745df3:
        mySTL::auto_ptr<yaSSL::BulkCipher>::Destroy((auto_ptr<yaSSL::BulkCipher> *)local_20);
        local_20[0] = pDVar5;
      }
    }
  }
  (**(code **)(*(int *)pDVar5 + 0xc))(pDVar5,puVar13,local_ec);
  uVar12 = x509::get_length(*(x509 **)pSVar1);
  pxVar6 = operator_new(8,(uint)puVar13 & 0xffffff00);
  x509::x509(pxVar6,uVar12);
  pDVar5 = local_20[0];
  pcVar3 = *(code **)(*(int *)local_20[0] + 4);
  uVar4 = x509::get_length(*(x509 **)pSVar1);
  uVar7 = x509::get_buffer(*(x509 **)pSVar1);
  uVar8 = x509::use_buffer(pxVar6);
  (*pcVar3)(pDVar5,uVar8,uVar7,uVar4);
  ysDelete<yaSSL::x509>(*(x509 **)pSVar1);
  *(x509 **)pSVar1 = pxVar6;
  ysDelete<yaSSL::x509>((x509 *)0x0);
  mySTL::auto_ptr<yaSSL::BulkCipher>::Destroy((auto_ptr<yaSSL::BulkCipher> *)local_20);
  TaoCrypt::AllocatorWithCleanup<unsigned_char>::deallocate(local_38,local_3c,local_40);
  TaoCrypt::AllocatorWithCleanup<unsigned_char>::deallocate(local_4c,local_50,local_54);
LAB_08745b85:
  fclose(__stream);
  return 1;
}

```

---

## receiveData

```asm
// === 0879e420 yaSSL::receiveData  [0x0879e420-0x879e56f] ===
 879e420:	55                   	push   %ebp
 879e421:	89 e5                	mov    %esp,%ebp
 879e423:	83 ec 38             	sub    $0x38,%esp
 879e426:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 879e429:	0f b6 45 10          	movzbl 0x10(%ebp),%eax
 879e42d:	e8 c6 49 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879e432:	81 c3 66 e7 bc 00    	add    $0xbce766,%ebx
 879e438:	89 75 f8             	mov    %esi,-0x8(%ebp)
 879e43b:	8b 75 08             	mov    0x8(%ebp),%esi
 879e43e:	89 7d fc             	mov    %edi,-0x4(%ebp)
 879e441:	8b 7d 0c             	mov    0xc(%ebp),%edi
 879e444:	88 45 e6             	mov    %al,-0x1a(%ebp)
 879e447:	89 34 24             	mov    %esi,(%esp)
 879e44a:	e8 61 fc fa ff       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 879e44f:	83 f8 50             	cmp    $0x50,%eax
 879e452:	74 2c                	je     879e480 <_ZN5yaSSL11receiveDataERNS_3SSLERNS_4DataEb+0x60>
 879e454:	89 34 24             	mov    %esi,(%esp)
 879e457:	e8 84 fc fa ff       	call   874e0e0 <_ZN5yaSSL3SSL23verfiyHandShakeCompleteEv>
 879e45c:	89 34 24             	mov    %esi,(%esp)
 879e45f:	e8 4c fc fa ff       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 879e464:	85 c0                	test   %eax,%eax
 879e466:	74 30                	je     879e498 <_ZN5yaSSL11receiveDataERNS_3SSLERNS_4DataEb+0x78>
 879e468:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 879e46d:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 879e470:	8b 75 f8             	mov    -0x8(%ebp),%esi
 879e473:	8b 7d fc             	mov    -0x4(%ebp),%edi
 879e476:	89 ec                	mov    %ebp,%esp
 879e478:	5d                   	pop    %ebp
 879e479:	c3                   	ret
 879e47a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 879e480:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879e487:	00 
 879e488:	89 34 24             	mov    %esi,(%esp)
 879e48b:	e8 40 fb fa ff       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 879e490:	eb c2                	jmp    879e454 <_ZN5yaSSL11receiveDataERNS_3SSLERNS_4DataEb+0x34>
 879e492:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 879e498:	89 34 24             	mov    %esi,(%esp)
 879e49b:	e8 70 fe fa ff       	call   874e310 <_ZNK5yaSSL3SSL7HasDataEv>
 879e4a0:	84 c0                	test   %al,%al
 879e4a2:	0f 84 80 00 00 00    	je     879e528 <_ZN5yaSSL11receiveDataERNS_3SSLERNS_4DataEb+0x108>
 879e4a8:	80 7d e6 00          	cmpb   $0x0,-0x1a(%ebp)
 879e4ac:	74 6c                	je     879e51a <_ZN5yaSSL11receiveDataERNS_3SSLERNS_4DataEb+0xfa>
 879e4ae:	89 7c 24 04          	mov    %edi,0x4(%esp)
 879e4b2:	89 34 24             	mov    %esi,(%esp)
 879e4b5:	e8 b6 15 fb ff       	call   874fa70 <_ZN5yaSSL3SSL8PeekDataERNS_4DataE>
 879e4ba:	8b 07                	mov    (%edi),%eax
 879e4bc:	89 3c 24             	mov    %edi,(%esp)
 879e4bf:	ff 50 10             	call   *0x10(%eax)
 879e4c2:	89 34 24             	mov    %esi,(%esp)
 879e4c5:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 879e4c9:	e8 32 fe fa ff       	call   874e300 <_ZN5yaSSL3SSL6useLogEv>
 879e4ce:	0f b7 55 e6          	movzwl -0x1a(%ebp),%edx
 879e4d2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 879e4d9:	00 
 879e4da:	89 54 24 04          	mov    %edx,0x4(%esp)
 879e4de:	89 04 24             	mov    %eax,(%esp)
 879e4e1:	e8 9a 2f 00 00       	call   87a1480 <_ZN5yaSSL3Log8ShowDataEjb>
 879e4e6:	89 34 24             	mov    %esi,(%esp)
 879e4e9:	e8 c2 fb fa ff       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 879e4ee:	89 c2                	mov    %eax,%edx
 879e4f0:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 879e4f5:	85 d2                	test   %edx,%edx
 879e4f7:	0f 85 70 ff ff ff    	jne    879e46d <_ZN5yaSSL11receiveDataERNS_3SSLERNS_4DataEb+0x4d>
 879e4fd:	8b 07                	mov    (%edi),%eax
 879e4ff:	89 3c 24             	mov    %edi,(%esp)
 879e502:	ff 50 10             	call   *0x10(%eax)
 879e505:	66 85 c0             	test   %ax,%ax
 879e508:	74 2b                	je     879e535 <_ZN5yaSSL11receiveDataERNS_3SSLERNS_4DataEb+0x115>
 879e50a:	8b 07                	mov    (%edi),%eax
 879e50c:	89 3c 24             	mov    %edi,(%esp)
 879e50f:	ff 50 10             	call   *0x10(%eax)
 879e512:	0f b7 c0             	movzwl %ax,%eax
 879e515:	e9 53 ff ff ff       	jmp    879e46d <_ZN5yaSSL11receiveDataERNS_3SSLERNS_4DataEb+0x4d>
 879e51a:	89 7c 24 04          	mov    %edi,0x4(%esp)
 879e51e:	89 34 24             	mov    %esi,(%esp)
 879e521:	e8 0a 25 fb ff       	call   8750a30 <_ZN5yaSSL3SSL8fillDataERNS_4DataE>
 879e526:	eb 92                	jmp    879e4ba <_ZN5yaSSL11receiveDataERNS_3SSLERNS_4DataEb+0x9a>
 879e528:	89 34 24             	mov    %esi,(%esp)
 879e52b:	e8 60 fe ff ff       	call   879e390 <_ZN5yaSSL12processReplyERNS_3SSLE>
 879e530:	e9 73 ff ff ff       	jmp    879e4a8 <_ZN5yaSSL11receiveDataERNS_3SSLERNS_4DataEb+0x88>
 879e535:	89 34 24             	mov    %esi,(%esp)
 879e538:	e8 63 fb fa ff       	call   874e0a0 <_ZNK5yaSSL3SSL9getSocketEv>
 879e53d:	89 04 24             	mov    %eax,(%esp)
 879e540:	e8 ab 2f 00 00       	call   87a14f0 <_ZNK5yaSSL6Socket10WouldBlockEv>
 879e545:	84 c0                	test   %al,%al
 879e547:	74 c1                	je     879e50a <_ZN5yaSSL11receiveDataERNS_3SSLERNS_4DataEb+0xea>
 879e549:	c7 44 24 04 50 00 00 	movl   $0x50,0x4(%esp)
 879e550:	00 
 879e551:	89 34 24             	mov    %esi,(%esp)
 879e554:	e8 77 fa fa ff       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 879e559:	b8 f8 ff ff ff       	mov    $0xfffffff8,%eax
 879e55e:	e9 0a ff ff ff       	jmp    879e46d <_ZN5yaSSL11receiveDataERNS_3SSLERNS_4DataEb+0x4d>
 879e563:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 879e569:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::receiveData @ 0x879e420

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::receiveData(yaSSL::SSL&, yaSSL::Data&, bool) */

uint yaSSL::receiveData(SSL *param_1,Data *param_2,bool param_3)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  Socket *this;
  uint uVar6;
  undefined4 uVar7;
  
  iVar4 = SSL::GetError(param_1);
  if (iVar4 == 0x50) {
    SSL::SetError(param_1,0);
  }
  SSL::verfiyHandShakeComplete(param_1);
  iVar4 = SSL::GetError(param_1);
  if (iVar4 == 0) {
    cVar1 = SSL::HasData(param_1);
    if (cVar1 == '\0') {
      processReply(param_1);
    }
    if (param_3) {
      SSL::PeekData(param_1,param_2);
    }
    else {
      SSL::fillData(param_1,param_2);
    }
    uVar2 = (**(code **)(*(int *)param_2 + 0x10))(param_2);
    uVar5 = SSL::useLog(param_1);
    uVar6 = (uint)uVar2;
    uVar7 = 0;
    Log::ShowData(uVar5,SUB21(uVar2,0));
    iVar4 = SSL::GetError(param_1);
    uVar5 = 0xffffffff;
    if (iVar4 == 0) {
      sVar3 = (**(code **)(*(int *)param_2 + 0x10))(param_2,uVar6,uVar7);
      if (sVar3 == 0) {
        this = (Socket *)SSL::getSocket(param_1);
        cVar1 = Socket::WouldBlock(this);
        if (cVar1 != '\0') {
          SSL::SetError(param_1,0x50);
          return 0xfffffff8;
        }
      }
      uVar5 = (**(code **)(*(int *)param_2 + 0x10))(param_2);
      uVar5 = uVar5 & 0xffff;
    }
  }
  else {
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

```

---

## sendAlert

```asm
// === 0879f9c0 yaSSL::sendAlert  [0x0879f9c0-0x879faef] ===
 879f9c0:	55                   	push   %ebp
 879f9c1:	89 e5                	mov    %esp,%ebp
 879f9c3:	57                   	push   %edi
 879f9c4:	56                   	push   %esi
 879f9c5:	53                   	push   %ebx
 879f9c6:	e8 2d 34 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879f9cb:	81 c3 cd d1 bc 00    	add    $0xbcd1cd,%ebx
 879f9d1:	83 ec 4c             	sub    $0x4c,%esp
 879f9d4:	8b 75 0c             	mov    0xc(%ebp),%esi
 879f9d7:	8d 7d d4             	lea    -0x2c(%ebp),%edi
 879f9da:	89 3c 24             	mov    %edi,(%esp)
 879f9dd:	e8 be 74 ff ff       	call   8796ea0 <_ZN5yaSSL13output_bufferC1Ev>
 879f9e2:	8b 45 08             	mov    0x8(%ebp),%eax
 879f9e5:	89 04 24             	mov    %eax,(%esp)
 879f9e8:	e8 83 e6 fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 879f9ed:	89 04 24             	mov    %eax,(%esp)
 879f9f0:	e8 5b f0 fa ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 879f9f5:	80 78 28 00          	cmpb   $0x0,0x28(%eax)
 879f9f9:	0f 84 e1 00 00 00    	je     879fae0 <_ZN5yaSSL9sendAlertERNS_3SSLERKNS_5AlertE+0x120>
 879f9ff:	8d 55 e0             	lea    -0x20(%ebp),%edx
 879fa02:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 879fa05:	89 55 c0             	mov    %edx,-0x40(%ebp)
 879fa08:	89 04 24             	mov    %eax,(%esp)
 879fa0b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 879fa12:	00 
 879fa13:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 879fa1a:	00 
 879fa1b:	e8 30 6f fa ff       	call   8746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>
 879fa20:	8b 4d 08             	mov    0x8(%ebp),%ecx
 879fa23:	89 0c 24             	mov    %ecx,(%esp)
 879fa26:	e8 45 e6 fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 879fa2b:	89 04 24             	mov    %eax,(%esp)
 879fa2e:	e8 2d ef fa ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 879fa33:	0f b6 88 2f 01 00 00 	movzbl 0x12f(%eax),%ecx
 879fa3a:	88 4d c7             	mov    %cl,-0x39(%ebp)
 879fa3d:	0f b6 88 2e 01 00 00 	movzbl 0x12e(%eax),%ecx
 879fa44:	8b 06                	mov    (%esi),%eax
 879fa46:	89 34 24             	mov    %esi,(%esp)
 879fa49:	88 4d bc             	mov    %cl,-0x44(%ebp)
 879fa4c:	ff 50 0c             	call   *0xc(%eax)
 879fa4f:	0f b6 4d bc          	movzbl -0x44(%ebp),%ecx
 879fa53:	88 4d e4             	mov    %cl,-0x1c(%ebp)
 879fa56:	89 45 e0             	mov    %eax,-0x20(%ebp)
 879fa59:	0f b6 45 c7          	movzbl -0x39(%ebp),%eax
 879fa5d:	88 45 e5             	mov    %al,-0x1b(%ebp)
 879fa60:	8b 06                	mov    (%esi),%eax
 879fa62:	89 34 24             	mov    %esi,(%esp)
 879fa65:	ff 50 10             	call   *0x10(%eax)
 879fa68:	89 3c 24             	mov    %edi,(%esp)
 879fa6b:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 879fa6f:	0f b7 c0             	movzwl %ax,%eax
 879fa72:	83 c0 05             	add    $0x5,%eax
 879fa75:	89 44 24 04          	mov    %eax,0x4(%esp)
 879fa79:	e8 a2 76 ff ff       	call   8797120 <_ZN5yaSSL13output_buffer8allocateEj>
 879fa7e:	8b 55 c0             	mov    -0x40(%ebp),%edx
 879fa81:	89 3c 24             	mov    %edi,(%esp)
 879fa84:	89 54 24 04          	mov    %edx,0x4(%esp)
 879fa88:	e8 d3 96 fa ff       	call   8749160 <_ZN5yaSSLlsERNS_13output_bufferERKNS_17RecordLayerHeaderE>
 879fa8d:	89 74 24 04          	mov    %esi,0x4(%esp)
 879fa91:	89 04 24             	mov    %eax,(%esp)
 879fa94:	e8 b7 6f fa ff       	call   8746a50 <_ZN5yaSSLlsERNS_13output_bufferERKNS_7MessageE>
 879fa99:	89 3c 24             	mov    %edi,(%esp)
 879fa9c:	e8 1f 74 ff ff       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 879faa1:	89 3c 24             	mov    %edi,(%esp)
 879faa4:	89 45 c0             	mov    %eax,-0x40(%ebp)
 879faa7:	e8 84 74 ff ff       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 879faac:	8b 55 c0             	mov    -0x40(%ebp),%edx
 879faaf:	8b 4d 08             	mov    0x8(%ebp),%ecx
 879fab2:	89 54 24 08          	mov    %edx,0x8(%esp)
 879fab6:	89 0c 24             	mov    %ecx,(%esp)
 879fab9:	89 44 24 04          	mov    %eax,0x4(%esp)
 879fabd:	e8 de fe fa ff       	call   874f9a0 <_ZN5yaSSL3SSL4SendEPKhj>
 879fac2:	8b 06                	mov    (%esi),%eax
 879fac4:	89 34 24             	mov    %esi,(%esp)
 879fac7:	ff 50 10             	call   *0x10(%eax)
 879faca:	89 3c 24             	mov    %edi,(%esp)
 879facd:	89 c6                	mov    %eax,%esi
 879facf:	e8 5c 78 ff ff       	call   8797330 <_ZN5yaSSL13output_bufferD1Ev>
 879fad4:	83 c4 4c             	add    $0x4c,%esp
 879fad7:	0f b7 c6             	movzwl %si,%eax
 879fada:	5b                   	pop    %ebx
 879fadb:	5e                   	pop    %esi
 879fadc:	5f                   	pop    %edi
 879fadd:	5d                   	pop    %ebp
 879fade:	c3                   	ret
 879fadf:	90                   	nop
 879fae0:	8b 45 08             	mov    0x8(%ebp),%eax
 879fae3:	89 fa                	mov    %edi,%edx
 879fae5:	89 34 24             	mov    %esi,(%esp)
 879fae8:	e8 93 fa ff ff       	call   879f580 <_ZN5yaSSL12_GLOBAL__N_112buildMessageERNS_3SSLERNS_13output_bufferERKNS_7MessageE>
 879faed:	eb aa                	jmp    879fa99 <_ZN5yaSSL9sendAlertERNS_3SSLERKNS_5AlertE+0xd9>
 879faef:	90                   	nop

```

```c
// yaSSL::sendAlert @ 0x879f9c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::sendAlert(yaSSL::SSL&, yaSSL::Alert const&) */

undefined2 yaSSL::sendAlert(SSL *param_1,Alert *param_2)

{
  undefined1 uVar1;
  ProtocolVersion PVar2;
  undefined2 uVar3;
  Security *pSVar4;
  int iVar5;
  output_buffer *poVar6;
  uint uVar7;
  uchar *puVar8;
  output_buffer local_30 [12];
  undefined4 local_24;
  ProtocolVersion local_20;
  undefined1 local_1f;
  ushort local_1e;
  undefined4 uStack_14;
  
  uStack_14 = 0x879f9cb;
  output_buffer::output_buffer(local_30);
  pSVar4 = (Security *)SSL::getSecurity(param_1);
  iVar5 = Security::get_parms(pSVar4);
  if (*(char *)(iVar5 + 0x28) == '\0') {
    (anonymous_namespace)::buildMessage(param_1,local_30,(Message *)param_2);
  }
  else {
    ProtocolVersion::ProtocolVersion(&local_20,'\x03','\0');
    pSVar4 = (Security *)SSL::getSecurity(param_1);
    iVar5 = Security::get_connection(pSVar4);
    uVar1 = *(undefined1 *)(iVar5 + 0x12f);
    PVar2 = *(ProtocolVersion *)(iVar5 + 0x12e);
    local_24 = (**(code **)(*(int *)param_2 + 0xc))(param_2);
    local_20 = PVar2;
    local_1f = uVar1;
    local_1e = (**(code **)(*(int *)param_2 + 0x10))(param_2);
    output_buffer::allocate(local_30,local_1e + 5);
    poVar6 = (output_buffer *)operator<<(local_30,(RecordLayerHeader *)&local_24);
    operator<<(poVar6,(Message *)param_2);
  }
  uVar7 = output_buffer::get_size(local_30);
  puVar8 = (uchar *)output_buffer::get_buffer(local_30);
  SSL::Send(param_1,puVar8,uVar7);
  uVar3 = (**(code **)(*(int *)param_2 + 0x10))(param_2);
  output_buffer::~output_buffer(local_30);
  return uVar3;
}

```

---

## sendCertificate

```asm
// === 087a1260 yaSSL::sendCertificate  [0x087a1260-0x87a142f] ===
 87a1260:	55                   	push   %ebp
 87a1261:	89 e5                	mov    %esp,%ebp
 87a1263:	57                   	push   %edi
 87a1264:	56                   	push   %esi
 87a1265:	53                   	push   %ebx
 87a1266:	e8 8d 1b f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a126b:	81 c3 2d b9 bc 00    	add    $0xbcb92d,%ebx
 87a1271:	83 ec 5c             	sub    $0x5c,%esp
 87a1274:	8b 7d 08             	mov    0x8(%ebp),%edi
 87a1277:	89 3c 24             	mov    %edi,(%esp)
 87a127a:	e8 31 ce fa ff       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 87a127f:	85 c0                	test   %eax,%eax
 87a1281:	74 0d                	je     87a1290 <_ZN5yaSSL15sendCertificateERNS_3SSLENS_12BufferOutputE+0x30>
 87a1283:	83 c4 5c             	add    $0x5c,%esp
 87a1286:	5b                   	pop    %ebx
 87a1287:	5e                   	pop    %esi
 87a1288:	5f                   	pop    %edi
 87a1289:	5d                   	pop    %ebp
 87a128a:	c3                   	ret
 87a128b:	90                   	nop
 87a128c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a1290:	89 3c 24             	mov    %edi,(%esp)
 87a1293:	e8 c8 cd fa ff       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 87a1298:	89 04 24             	mov    %eax,(%esp)
 87a129b:	e8 f0 d4 fa ff       	call   874e790 <_ZNK5yaSSL6Crypto15get_certManagerEv>
 87a12a0:	89 04 24             	mov    %eax,(%esp)
 87a12a3:	e8 e8 61 ff ff       	call   8797490 <_ZNK5yaSSL11CertManager8get_certEv>
 87a12a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a12ac:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 87a12af:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 87a12b2:	89 04 24             	mov    %eax,(%esp)
 87a12b5:	e8 76 84 fa ff       	call   8749730 <_ZN5yaSSL11CertificateC1EPKNS_4x509E>
 87a12ba:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 87a12bd:	8d 55 e0             	lea    -0x20(%ebp),%edx
 87a12c0:	89 04 24             	mov    %eax,(%esp)
 87a12c3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87a12ca:	00 
 87a12cb:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 87a12d2:	00 
 87a12d3:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 87a12d6:	e8 75 56 fa ff       	call   8746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>
 87a12db:	8b 83 30 fc ff ff    	mov    -0x3d0(%ebx),%eax
 87a12e1:	83 c0 08             	add    $0x8,%eax
 87a12e4:	89 45 c8             	mov    %eax,-0x38(%ebp)
 87a12e7:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a12ec:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 87a12f3:	e8 a8 f9 fa ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87a12f8:	89 c6                	mov    %eax,%esi
 87a12fa:	89 04 24             	mov    %eax,(%esp)
 87a12fd:	e8 9e 5b ff ff       	call   8796ea0 <_ZN5yaSSL13output_bufferC1Ev>
 87a1302:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 87a1305:	89 0c 24             	mov    %ecx,(%esp)
 87a1308:	e8 93 57 fa ff       	call   8746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>
 87a130d:	89 45 c0             	mov    %eax,-0x40(%ebp)
 87a1310:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 87a1313:	89 04 24             	mov    %eax,(%esp)
 87a1316:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 87a1319:	ff 10                	call   *(%eax)
 87a131b:	8d 55 c8             	lea    -0x38(%ebp),%edx
 87a131e:	89 14 24             	mov    %edx,(%esp)
 87a1321:	89 55 bc             	mov    %edx,-0x44(%ebp)
 87a1324:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a1328:	e8 63 57 fa ff       	call   8746a90 <_ZN5yaSSL15HandShakeHeader8set_typeENS_13HandShakeTypeE>
 87a132d:	8b 55 bc             	mov    -0x44(%ebp),%edx
 87a1330:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 87a1333:	89 14 24             	mov    %edx,(%esp)
 87a1336:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87a133a:	e8 11 86 fa ff       	call   8749950 <_ZN5yaSSL15HandShakeHeader10set_lengthEj>
 87a133f:	89 3c 24             	mov    %edi,(%esp)
 87a1342:	e8 29 cd fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 87a1347:	89 04 24             	mov    %eax,(%esp)
 87a134a:	e8 11 d6 fa ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 87a134f:	0f b6 88 2f 01 00 00 	movzbl 0x12f(%eax),%ecx
 87a1356:	0f b6 80 2e 01 00 00 	movzbl 0x12e(%eax),%eax
 87a135d:	c7 45 e0 16 00 00 00 	movl   $0x16,-0x20(%ebp)
 87a1364:	89 34 24             	mov    %esi,(%esp)
 87a1367:	88 4d e5             	mov    %cl,-0x1b(%ebp)
 87a136a:	88 45 e4             	mov    %al,-0x1c(%ebp)
 87a136d:	0f b7 45 c0          	movzwl -0x40(%ebp),%eax
 87a1371:	83 c0 04             	add    $0x4,%eax
 87a1374:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 87a1378:	0f b7 c0             	movzwl %ax,%eax
 87a137b:	83 c0 05             	add    $0x5,%eax
 87a137e:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a1382:	e8 99 5d ff ff       	call   8797120 <_ZN5yaSSL13output_buffer8allocateEj>
 87a1387:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 87a138a:	89 34 24             	mov    %esi,(%esp)
 87a138d:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a1391:	e8 ca 7d fa ff       	call   8749160 <_ZN5yaSSLlsERNS_13output_bufferERKNS_17RecordLayerHeaderE>
 87a1396:	8b 55 bc             	mov    -0x44(%ebp),%edx
 87a1399:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a139d:	89 04 24             	mov    %eax,(%esp)
 87a13a0:	e8 2b 7d fa ff       	call   87490d0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_15HandShakeHeaderE>
 87a13a5:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 87a13a8:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a13ac:	89 04 24             	mov    %eax,(%esp)
 87a13af:	e8 3c 59 fa ff       	call   8746cf0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_13HandShakeBaseE>
 87a13b4:	89 f8                	mov    %edi,%eax
 87a13b6:	89 f2                	mov    %esi,%edx
 87a13b8:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 87a13bf:	e8 8c b9 ff ff       	call   879cd50 <_ZN5yaSSL12_GLOBAL__N_113hashHandShakeERNS_3SSLERKNS_13output_bufferEb>
 87a13c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 87a13c7:	85 c0                	test   %eax,%eax
 87a13c9:	74 4d                	je     87a1418 <_ZN5yaSSL15sendCertificateERNS_3SSLENS_12BufferOutputE+0x1b8>
 87a13cb:	89 34 24             	mov    %esi,(%esp)
 87a13ce:	e8 ed 5a ff ff       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 87a13d3:	89 34 24             	mov    %esi,(%esp)
 87a13d6:	89 45 bc             	mov    %eax,-0x44(%ebp)
 87a13d9:	e8 52 5b ff ff       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 87a13de:	8b 55 bc             	mov    -0x44(%ebp),%edx
 87a13e1:	89 3c 24             	mov    %edi,(%esp)
 87a13e4:	89 54 24 08          	mov    %edx,0x8(%esp)
 87a13e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a13ec:	e8 af e5 fa ff       	call   874f9a0 <_ZN5yaSSL3SSL4SendEPKhj>
 87a13f1:	85 f6                	test   %esi,%esi
 87a13f3:	74 08                	je     87a13fd <_ZN5yaSSL15sendCertificateERNS_3SSLENS_12BufferOutputE+0x19d>
 87a13f5:	89 34 24             	mov    %esi,(%esp)
 87a13f8:	e8 33 5f ff ff       	call   8797330 <_ZN5yaSSL13output_bufferD1Ev>
 87a13fd:	89 34 24             	mov    %esi,(%esp)
 87a1400:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a1405:	e8 16 f4 fa ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 87a140a:	83 c4 5c             	add    $0x5c,%esp
 87a140d:	5b                   	pop    %ebx
 87a140e:	5e                   	pop    %esi
 87a140f:	5f                   	pop    %edi
 87a1410:	5d                   	pop    %ebp
 87a1411:	c3                   	ret
 87a1412:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87a1418:	89 74 24 04          	mov    %esi,0x4(%esp)
 87a141c:	31 f6                	xor    %esi,%esi
 87a141e:	89 3c 24             	mov    %edi,(%esp)
 87a1421:	e8 ea 11 fb ff       	call   8752610 <_ZN5yaSSL3SSL9addBufferEPNS_13output_bufferE>
 87a1426:	eb d5                	jmp    87a13fd <_ZN5yaSSL15sendCertificateERNS_3SSLENS_12BufferOutputE+0x19d>
 87a1428:	90                   	nop
 87a1429:	90                   	nop
 87a142a:	90                   	nop
 87a142b:	90                   	nop
 87a142c:	90                   	nop
 87a142d:	90                   	nop
 87a142e:	90                   	nop
 87a142f:	90                   	nop

```

```c
// yaSSL::sendCertificate @ 0x87a1260

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::sendCertificate(yaSSL::SSL&, yaSSL::BufferOutput) */

void yaSSL::sendCertificate(SSL *param_1,int param_2)

{
  int iVar1;
  Crypto *this;
  CertManager *this_00;
  x509 *pxVar2;
  output_buffer *this_01;
  uint uVar3;
  undefined4 uVar4;
  Security *this_02;
  output_buffer *poVar5;
  output_buffer *poVar6;
  short local_44;
  undefined *local_3c [3];
  undefined4 *local_30 [3];
  undefined4 local_24;
  ProtocolVersion local_20;
  undefined1 local_1f;
  ushort local_1e;
  undefined4 uStack_14;
  
  uStack_14 = 0x87a126b;
  iVar1 = SSL::GetError(param_1);
  if (iVar1 != 0) {
    return;
  }
  this = (Crypto *)SSL::getCrypto(param_1);
  this_00 = (CertManager *)Crypto::get_certManager(this);
  pxVar2 = (x509 *)CertManager::get_cert(this_00);
  Certificate::Certificate((Certificate *)local_30,pxVar2);
  uVar3 = 0;
  ProtocolVersion::ProtocolVersion(&local_20,'\x03','\0');
  local_3c[0] = PTR_vtable_0936c7c8 + 8;
  this_01 = operator_new(0xc,uVar3 & 0xffffff00);
  output_buffer::output_buffer(this_01);
  uVar3 = HandShakeBase::get_length((HandShakeBase *)local_30);
  uVar4 = (*(code *)*local_30[0])((Certificate *)local_30);
  HandShakeHeader::set_type((HandShakeHeader *)local_3c,uVar4);
  HandShakeHeader::set_length((HandShakeHeader *)local_3c,uVar3);
  this_02 = (Security *)SSL::getSecurity(param_1);
  iVar1 = Security::get_connection(this_02);
  local_1f = *(undefined1 *)(iVar1 + 0x12f);
  local_20 = *(ProtocolVersion *)(iVar1 + 0x12e);
  local_24 = 0x16;
  local_44 = (short)uVar3;
  local_1e = local_44 + 4;
  output_buffer::allocate(this_01,local_1e + 5);
  poVar5 = (output_buffer *)operator<<(this_01,(RecordLayerHeader *)&local_24);
  poVar5 = (output_buffer *)operator<<(poVar5,(HandShakeHeader *)local_3c);
  operator<<(poVar5,(HandShakeBase *)local_30);
  (anonymous_namespace)::hashHandShake(param_1,this_01,false);
  if (param_2 == 0) {
    poVar5 = (output_buffer *)0x0;
    SSL::addBuffer(param_1,this_01);
    poVar6 = this_01;
  }
  else {
    uVar3 = output_buffer::get_size(this_01);
    poVar6 = (output_buffer *)output_buffer::get_buffer(this_01);
    SSL::Send(param_1,(uchar *)poVar6,uVar3);
    poVar5 = this_01;
    if (this_01 != (output_buffer *)0x0) {
      output_buffer::~output_buffer(this_01);
    }
  }
  operator_delete(poVar5,(uint)poVar6 & 0xffffff00);
  return;
}

```

---

## sendCertificateRequest

```asm
// === 087a1090 yaSSL::sendCertificateRequest  [0x087a1090-0x87a125f] ===
 87a1090:	55                   	push   %ebp
 87a1091:	89 e5                	mov    %esp,%ebp
 87a1093:	57                   	push   %edi
 87a1094:	56                   	push   %esi
 87a1095:	53                   	push   %ebx
 87a1096:	e8 5d 1d f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a109b:	81 c3 fd ba bc 00    	add    $0xbcbafd,%ebx
 87a10a1:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 87a10a7:	8b 45 08             	mov    0x8(%ebp),%eax
 87a10aa:	89 04 24             	mov    %eax,(%esp)
 87a10ad:	e8 fe cf fa ff       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 87a10b2:	85 c0                	test   %eax,%eax
 87a10b4:	74 12                	je     87a10c8 <_ZN5yaSSL22sendCertificateRequestERNS_3SSLENS_12BufferOutputE+0x38>
 87a10b6:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 87a10bc:	5b                   	pop    %ebx
 87a10bd:	5e                   	pop    %esi
 87a10be:	5f                   	pop    %edi
 87a10bf:	5d                   	pop    %ebp
 87a10c0:	c3                   	ret
 87a10c1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87a10c8:	8d 7d a0             	lea    -0x60(%ebp),%edi
 87a10cb:	89 3c 24             	mov    %edi,(%esp)
 87a10ce:	e8 6d 68 fa ff       	call   8747940 <_ZN5yaSSL18CertificateRequestC1Ev>
 87a10d3:	89 3c 24             	mov    %edi,(%esp)
 87a10d6:	e8 45 5f fa ff       	call   8747020 <_ZN5yaSSL18CertificateRequest5BuildEv>
 87a10db:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 87a10de:	8d 4d e0             	lea    -0x20(%ebp),%ecx
 87a10e1:	89 04 24             	mov    %eax,(%esp)
 87a10e4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87a10eb:	00 
 87a10ec:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 87a10f3:	00 
 87a10f4:	89 4d 84             	mov    %ecx,-0x7c(%ebp)
 87a10f7:	e8 54 58 fa ff       	call   8746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>
 87a10fc:	8b 83 30 fc ff ff    	mov    -0x3d0(%ebx),%eax
 87a1102:	83 c0 08             	add    $0x8,%eax
 87a1105:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87a1108:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a110d:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 87a1114:	e8 87 fb fa ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87a1119:	89 c6                	mov    %eax,%esi
 87a111b:	89 04 24             	mov    %eax,(%esp)
 87a111e:	e8 7d 5d ff ff       	call   8796ea0 <_ZN5yaSSL13output_bufferC1Ev>
 87a1123:	89 3c 24             	mov    %edi,(%esp)
 87a1126:	e8 75 59 fa ff       	call   8746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>
 87a112b:	89 3c 24             	mov    %edi,(%esp)
 87a112e:	89 45 94             	mov    %eax,-0x6c(%ebp)
 87a1131:	8b 45 a0             	mov    -0x60(%ebp),%eax
 87a1134:	ff 10                	call   *(%eax)
 87a1136:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 87a1139:	89 14 24             	mov    %edx,(%esp)
 87a113c:	89 55 90             	mov    %edx,-0x70(%ebp)
 87a113f:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a1143:	e8 48 59 fa ff       	call   8746a90 <_ZN5yaSSL15HandShakeHeader8set_typeENS_13HandShakeTypeE>
 87a1148:	8b 55 90             	mov    -0x70(%ebp),%edx
 87a114b:	8b 45 94             	mov    -0x6c(%ebp),%eax
 87a114e:	89 14 24             	mov    %edx,(%esp)
 87a1151:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a1155:	e8 f6 87 fa ff       	call   8749950 <_ZN5yaSSL15HandShakeHeader10set_lengthEj>
 87a115a:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87a115d:	89 0c 24             	mov    %ecx,(%esp)
 87a1160:	e8 0b cf fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 87a1165:	89 04 24             	mov    %eax,(%esp)
 87a1168:	e8 f3 d7 fa ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 87a116d:	0f b6 88 2f 01 00 00 	movzbl 0x12f(%eax),%ecx
 87a1174:	0f b6 80 2e 01 00 00 	movzbl 0x12e(%eax),%eax
 87a117b:	c7 45 e0 16 00 00 00 	movl   $0x16,-0x20(%ebp)
 87a1182:	89 34 24             	mov    %esi,(%esp)
 87a1185:	88 4d e5             	mov    %cl,-0x1b(%ebp)
 87a1188:	88 45 e4             	mov    %al,-0x1c(%ebp)
 87a118b:	0f b7 45 94          	movzwl -0x6c(%ebp),%eax
 87a118f:	83 c0 04             	add    $0x4,%eax
 87a1192:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 87a1196:	0f b7 c0             	movzwl %ax,%eax
 87a1199:	83 c0 05             	add    $0x5,%eax
 87a119c:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a11a0:	e8 7b 5f ff ff       	call   8797120 <_ZN5yaSSL13output_buffer8allocateEj>
 87a11a5:	8b 45 84             	mov    -0x7c(%ebp),%eax
 87a11a8:	89 34 24             	mov    %esi,(%esp)
 87a11ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a11af:	e8 ac 7f fa ff       	call   8749160 <_ZN5yaSSLlsERNS_13output_bufferERKNS_17RecordLayerHeaderE>
 87a11b4:	8b 55 90             	mov    -0x70(%ebp),%edx
 87a11b7:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a11bb:	89 04 24             	mov    %eax,(%esp)
 87a11be:	e8 0d 7f fa ff       	call   87490d0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_15HandShakeHeaderE>
 87a11c3:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87a11c7:	89 04 24             	mov    %eax,(%esp)
 87a11ca:	e8 21 5b fa ff       	call   8746cf0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_13HandShakeBaseE>
 87a11cf:	8b 45 08             	mov    0x8(%ebp),%eax
 87a11d2:	89 f2                	mov    %esi,%edx
 87a11d4:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 87a11db:	e8 70 bb ff ff       	call   879cd50 <_ZN5yaSSL12_GLOBAL__N_113hashHandShakeERNS_3SSLERKNS_13output_bufferEb>
 87a11e0:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 87a11e3:	85 c9                	test   %ecx,%ecx
 87a11e5:	74 61                	je     87a1248 <_ZN5yaSSL22sendCertificateRequestERNS_3SSLENS_12BufferOutputE+0x1b8>
 87a11e7:	89 34 24             	mov    %esi,(%esp)
 87a11ea:	e8 d1 5c ff ff       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 87a11ef:	89 34 24             	mov    %esi,(%esp)
 87a11f2:	89 45 90             	mov    %eax,-0x70(%ebp)
 87a11f5:	e8 36 5d ff ff       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 87a11fa:	8b 55 90             	mov    -0x70(%ebp),%edx
 87a11fd:	89 54 24 08          	mov    %edx,0x8(%esp)
 87a1201:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a1205:	8b 45 08             	mov    0x8(%ebp),%eax
 87a1208:	89 04 24             	mov    %eax,(%esp)
 87a120b:	e8 90 e7 fa ff       	call   874f9a0 <_ZN5yaSSL3SSL4SendEPKhj>
 87a1210:	85 f6                	test   %esi,%esi
 87a1212:	74 08                	je     87a121c <_ZN5yaSSL22sendCertificateRequestERNS_3SSLENS_12BufferOutputE+0x18c>
 87a1214:	89 34 24             	mov    %esi,(%esp)
 87a1217:	e8 14 61 ff ff       	call   8797330 <_ZN5yaSSL13output_bufferD1Ev>
 87a121c:	89 34 24             	mov    %esi,(%esp)
 87a121f:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a1224:	e8 f7 f5 fa ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 87a1229:	8b 83 e0 fb ff ff    	mov    -0x420(%ebx),%eax
 87a122f:	89 3c 24             	mov    %edi,(%esp)
 87a1232:	83 c0 08             	add    $0x8,%eax
 87a1235:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87a1238:	e8 c3 a5 fa ff       	call   874b800 <_ZN5yaSSL18CertificateRequestD1Ev>
 87a123d:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 87a1243:	5b                   	pop    %ebx
 87a1244:	5e                   	pop    %esi
 87a1245:	5f                   	pop    %edi
 87a1246:	5d                   	pop    %ebp
 87a1247:	c3                   	ret
 87a1248:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87a124b:	89 74 24 04          	mov    %esi,0x4(%esp)
 87a124f:	31 f6                	xor    %esi,%esi
 87a1251:	89 0c 24             	mov    %ecx,(%esp)
 87a1254:	e8 b7 13 fb ff       	call   8752610 <_ZN5yaSSL3SSL9addBufferEPNS_13output_bufferE>
 87a1259:	eb c1                	jmp    87a121c <_ZN5yaSSL22sendCertificateRequestERNS_3SSLENS_12BufferOutputE+0x18c>
 87a125b:	90                   	nop
 87a125c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::sendCertificateRequest @ 0x87a1090

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::sendCertificateRequest(yaSSL::SSL&, yaSSL::BufferOutput) */

void yaSSL::sendCertificateRequest(SSL *param_1,int param_2)

{
  int iVar1;
  output_buffer *this;
  uint uVar2;
  undefined4 uVar3;
  Security *this_00;
  output_buffer *poVar4;
  output_buffer *poVar5;
  short local_70;
  undefined4 *local_64 [13];
  undefined *local_30 [3];
  undefined4 local_24;
  ProtocolVersion local_20;
  undefined1 local_1f;
  ushort local_1e;
  undefined4 uStack_14;
  
  uStack_14 = 0x87a109b;
  iVar1 = SSL::GetError(param_1);
  if (iVar1 != 0) {
    return;
  }
  CertificateRequest::CertificateRequest((CertificateRequest *)local_64);
  CertificateRequest::Build((CertificateRequest *)local_64);
  uVar2 = 0;
  ProtocolVersion::ProtocolVersion(&local_20,'\x03','\0');
  local_30[0] = PTR_vtable_0936c7c8 + 8;
  this = operator_new(0xc,uVar2 & 0xffffff00);
  output_buffer::output_buffer(this);
  uVar2 = HandShakeBase::get_length((HandShakeBase *)local_64);
  uVar3 = (*(code *)*local_64[0])((CertificateRequest *)local_64);
  HandShakeHeader::set_type((HandShakeHeader *)local_30,uVar3);
  HandShakeHeader::set_length((HandShakeHeader *)local_30,uVar2);
  this_00 = (Security *)SSL::getSecurity(param_1);
  iVar1 = Security::get_connection(this_00);
  local_1f = *(undefined1 *)(iVar1 + 0x12f);
  local_20 = *(ProtocolVersion *)(iVar1 + 0x12e);
  local_24 = 0x16;
  local_70 = (short)uVar2;
  local_1e = local_70 + 4;
  output_buffer::allocate(this,local_1e + 5);
  poVar4 = (output_buffer *)operator<<(this,(RecordLayerHeader *)&local_24);
  poVar4 = (output_buffer *)operator<<(poVar4,(HandShakeHeader *)local_30);
  operator<<(poVar4,(HandShakeBase *)local_64);
  (anonymous_namespace)::hashHandShake(param_1,this,false);
  if (param_2 == 0) {
    poVar4 = (output_buffer *)0x0;
    SSL::addBuffer(param_1,this);
    poVar5 = this;
  }
  else {
    uVar2 = output_buffer::get_size(this);
    poVar5 = (output_buffer *)output_buffer::get_buffer(this);
    SSL::Send(param_1,(uchar *)poVar5,uVar2);
    poVar4 = this;
    if (this != (output_buffer *)0x0) {
      output_buffer::~output_buffer(this);
    }
  }
  operator_delete(poVar4,(uint)poVar5 & 0xffffff00);
  local_30[0] = PTR_vtable_0936c778 + 8;
  CertificateRequest::~CertificateRequest((CertificateRequest *)local_64);
  return;
}

```

---

## sendCertificateVerify

```asm
// === 087a0eb0 yaSSL::sendCertificateVerify  [0x087a0eb0-0x87a108f] ===
 87a0eb0:	55                   	push   %ebp
 87a0eb1:	89 e5                	mov    %esp,%ebp
 87a0eb3:	57                   	push   %edi
 87a0eb4:	56                   	push   %esi
 87a0eb5:	53                   	push   %ebx
 87a0eb6:	e8 3d 1f f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a0ebb:	81 c3 dd bc bc 00    	add    $0xbcbcdd,%ebx
 87a0ec1:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 87a0ec7:	8b 45 08             	mov    0x8(%ebp),%eax
 87a0eca:	89 04 24             	mov    %eax,(%esp)
 87a0ecd:	e8 de d1 fa ff       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 87a0ed2:	85 c0                	test   %eax,%eax
 87a0ed4:	74 12                	je     87a0ee8 <_ZN5yaSSL21sendCertificateVerifyERNS_3SSLENS_12BufferOutputE+0x38>
 87a0ed6:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 87a0edc:	5b                   	pop    %ebx
 87a0edd:	5e                   	pop    %esi
 87a0ede:	5f                   	pop    %edi
 87a0edf:	5d                   	pop    %ebp
 87a0ee0:	c3                   	ret
 87a0ee1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87a0ee8:	8d 7d a4             	lea    -0x5c(%ebp),%edi
 87a0eeb:	89 3c 24             	mov    %edi,(%esp)
 87a0eee:	e8 7d 61 fa ff       	call   8747070 <_ZN5yaSSL17CertificateVerifyC1Ev>
 87a0ef3:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87a0ef6:	89 3c 24             	mov    %edi,(%esp)
 87a0ef9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87a0efd:	e8 ee ac fa ff       	call   874bbf0 <_ZN5yaSSL17CertificateVerify5BuildERNS_3SSLE>
 87a0f02:	8d 45 e0             	lea    -0x20(%ebp),%eax
 87a0f05:	89 45 84             	mov    %eax,-0x7c(%ebp)
 87a0f08:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 87a0f0b:	89 04 24             	mov    %eax,(%esp)
 87a0f0e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87a0f15:	00 
 87a0f16:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 87a0f1d:	00 
 87a0f1e:	e8 2d 5a fa ff       	call   8746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>
 87a0f23:	8b 83 30 fc ff ff    	mov    -0x3d0(%ebx),%eax
 87a0f29:	83 c0 08             	add    $0x8,%eax
 87a0f2c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87a0f2f:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a0f34:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 87a0f3b:	e8 60 fd fa ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87a0f40:	89 c6                	mov    %eax,%esi
 87a0f42:	89 04 24             	mov    %eax,(%esp)
 87a0f45:	e8 56 5f ff ff       	call   8796ea0 <_ZN5yaSSL13output_bufferC1Ev>
 87a0f4a:	89 3c 24             	mov    %edi,(%esp)
 87a0f4d:	e8 4e 5b fa ff       	call   8746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>
 87a0f52:	89 3c 24             	mov    %edi,(%esp)
 87a0f55:	89 45 94             	mov    %eax,-0x6c(%ebp)
 87a0f58:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 87a0f5b:	ff 10                	call   *(%eax)
 87a0f5d:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 87a0f60:	89 14 24             	mov    %edx,(%esp)
 87a0f63:	89 55 90             	mov    %edx,-0x70(%ebp)
 87a0f66:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a0f6a:	e8 21 5b fa ff       	call   8746a90 <_ZN5yaSSL15HandShakeHeader8set_typeENS_13HandShakeTypeE>
 87a0f6f:	8b 55 90             	mov    -0x70(%ebp),%edx
 87a0f72:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 87a0f75:	89 14 24             	mov    %edx,(%esp)
 87a0f78:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87a0f7c:	e8 cf 89 fa ff       	call   8749950 <_ZN5yaSSL15HandShakeHeader10set_lengthEj>
 87a0f81:	8b 45 08             	mov    0x8(%ebp),%eax
 87a0f84:	89 04 24             	mov    %eax,(%esp)
 87a0f87:	e8 e4 d0 fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 87a0f8c:	89 04 24             	mov    %eax,(%esp)
 87a0f8f:	e8 cc d9 fa ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 87a0f94:	0f b6 88 2f 01 00 00 	movzbl 0x12f(%eax),%ecx
 87a0f9b:	0f b6 80 2e 01 00 00 	movzbl 0x12e(%eax),%eax
 87a0fa2:	c7 45 e0 16 00 00 00 	movl   $0x16,-0x20(%ebp)
 87a0fa9:	89 34 24             	mov    %esi,(%esp)
 87a0fac:	88 4d e5             	mov    %cl,-0x1b(%ebp)
 87a0faf:	88 45 e4             	mov    %al,-0x1c(%ebp)
 87a0fb2:	0f b7 45 94          	movzwl -0x6c(%ebp),%eax
 87a0fb6:	83 c0 04             	add    $0x4,%eax
 87a0fb9:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 87a0fbd:	0f b7 c0             	movzwl %ax,%eax
 87a0fc0:	83 c0 05             	add    $0x5,%eax
 87a0fc3:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a0fc7:	e8 54 61 ff ff       	call   8797120 <_ZN5yaSSL13output_buffer8allocateEj>
 87a0fcc:	8b 45 84             	mov    -0x7c(%ebp),%eax
 87a0fcf:	89 34 24             	mov    %esi,(%esp)
 87a0fd2:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a0fd6:	e8 85 81 fa ff       	call   8749160 <_ZN5yaSSLlsERNS_13output_bufferERKNS_17RecordLayerHeaderE>
 87a0fdb:	8b 55 90             	mov    -0x70(%ebp),%edx
 87a0fde:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a0fe2:	89 04 24             	mov    %eax,(%esp)
 87a0fe5:	e8 e6 80 fa ff       	call   87490d0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_15HandShakeHeaderE>
 87a0fea:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87a0fee:	89 04 24             	mov    %eax,(%esp)
 87a0ff1:	e8 fa 5c fa ff       	call   8746cf0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_13HandShakeBaseE>
 87a0ff6:	8b 45 08             	mov    0x8(%ebp),%eax
 87a0ff9:	89 f2                	mov    %esi,%edx
 87a0ffb:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 87a1002:	e8 49 bd ff ff       	call   879cd50 <_ZN5yaSSL12_GLOBAL__N_113hashHandShakeERNS_3SSLERKNS_13output_bufferEb>
 87a1007:	8b 55 0c             	mov    0xc(%ebp),%edx
 87a100a:	85 d2                	test   %edx,%edx
 87a100c:	74 62                	je     87a1070 <_ZN5yaSSL21sendCertificateVerifyERNS_3SSLENS_12BufferOutputE+0x1c0>
 87a100e:	89 34 24             	mov    %esi,(%esp)
 87a1011:	e8 aa 5e ff ff       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 87a1016:	89 34 24             	mov    %esi,(%esp)
 87a1019:	89 45 90             	mov    %eax,-0x70(%ebp)
 87a101c:	e8 0f 5f ff ff       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 87a1021:	8b 55 90             	mov    -0x70(%ebp),%edx
 87a1024:	89 54 24 08          	mov    %edx,0x8(%esp)
 87a1028:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a102c:	8b 45 08             	mov    0x8(%ebp),%eax
 87a102f:	89 04 24             	mov    %eax,(%esp)
 87a1032:	e8 69 e9 fa ff       	call   874f9a0 <_ZN5yaSSL3SSL4SendEPKhj>
 87a1037:	85 f6                	test   %esi,%esi
 87a1039:	74 08                	je     87a1043 <_ZN5yaSSL21sendCertificateVerifyERNS_3SSLENS_12BufferOutputE+0x193>
 87a103b:	89 34 24             	mov    %esi,(%esp)
 87a103e:	e8 ed 62 ff ff       	call   8797330 <_ZN5yaSSL13output_bufferD1Ev>
 87a1043:	89 34 24             	mov    %esi,(%esp)
 87a1046:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a104b:	e8 d0 f7 fa ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 87a1050:	8b 83 e0 fb ff ff    	mov    -0x420(%ebx),%eax
 87a1056:	89 3c 24             	mov    %edi,(%esp)
 87a1059:	83 c0 08             	add    $0x8,%eax
 87a105c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87a105f:	e8 5c a8 fa ff       	call   874b8c0 <_ZN5yaSSL17CertificateVerifyD1Ev>
 87a1064:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 87a106a:	5b                   	pop    %ebx
 87a106b:	5e                   	pop    %esi
 87a106c:	5f                   	pop    %edi
 87a106d:	5d                   	pop    %ebp
 87a106e:	c3                   	ret
 87a106f:	90                   	nop
 87a1070:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87a1073:	89 74 24 04          	mov    %esi,0x4(%esp)
 87a1077:	31 f6                	xor    %esi,%esi
 87a1079:	89 0c 24             	mov    %ecx,(%esp)
 87a107c:	e8 8f 15 fb ff       	call   8752610 <_ZN5yaSSL3SSL9addBufferEPNS_13output_bufferE>
 87a1081:	eb c0                	jmp    87a1043 <_ZN5yaSSL21sendCertificateVerifyERNS_3SSLENS_12BufferOutputE+0x193>
 87a1083:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87a1089:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::sendCertificateVerify @ 0x87a0eb0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::sendCertificateVerify(yaSSL::SSL&, yaSSL::BufferOutput) */

void yaSSL::sendCertificateVerify(SSL *param_1,int param_2)

{
  int iVar1;
  output_buffer *this;
  uint uVar2;
  undefined4 uVar3;
  Security *this_00;
  output_buffer *poVar4;
  output_buffer *poVar5;
  short local_70;
  undefined4 *local_60 [12];
  undefined *local_30 [3];
  undefined4 local_24;
  ProtocolVersion local_20;
  undefined1 local_1f;
  ushort local_1e;
  undefined4 uStack_14;
  
  uStack_14 = 0x87a0ebb;
  iVar1 = SSL::GetError(param_1);
  if (iVar1 != 0) {
    return;
  }
  CertificateVerify::CertificateVerify((CertificateVerify *)local_60);
  CertificateVerify::Build((CertificateVerify *)local_60,param_1);
  uVar2 = 0;
  ProtocolVersion::ProtocolVersion(&local_20,'\x03','\0');
  local_30[0] = PTR_vtable_0936c7c8 + 8;
  this = operator_new(0xc,uVar2 & 0xffffff00);
  output_buffer::output_buffer(this);
  uVar2 = HandShakeBase::get_length((HandShakeBase *)local_60);
  uVar3 = (*(code *)*local_60[0])((CertificateVerify *)local_60);
  HandShakeHeader::set_type((HandShakeHeader *)local_30,uVar3);
  HandShakeHeader::set_length((HandShakeHeader *)local_30,uVar2);
  this_00 = (Security *)SSL::getSecurity(param_1);
  iVar1 = Security::get_connection(this_00);
  local_1f = *(undefined1 *)(iVar1 + 0x12f);
  local_20 = *(ProtocolVersion *)(iVar1 + 0x12e);
  local_24 = 0x16;
  local_70 = (short)uVar2;
  local_1e = local_70 + 4;
  output_buffer::allocate(this,local_1e + 5);
  poVar4 = (output_buffer *)operator<<(this,(RecordLayerHeader *)&local_24);
  poVar4 = (output_buffer *)operator<<(poVar4,(HandShakeHeader *)local_30);
  operator<<(poVar4,(HandShakeBase *)local_60);
  (anonymous_namespace)::hashHandShake(param_1,this,false);
  if (param_2 == 0) {
    poVar4 = (output_buffer *)0x0;
    SSL::addBuffer(param_1,this);
    poVar5 = this;
  }
  else {
    uVar2 = output_buffer::get_size(this);
    poVar5 = (output_buffer *)output_buffer::get_buffer(this);
    SSL::Send(param_1,(uchar *)poVar5,uVar2);
    poVar4 = this;
    if (this != (output_buffer *)0x0) {
      output_buffer::~output_buffer(this);
    }
  }
  operator_delete(poVar4,(uint)poVar5 & 0xffffff00);
  local_30[0] = PTR_vtable_0936c778 + 8;
  CertificateVerify::~CertificateVerify((CertificateVerify *)local_60);
  return;
}

```

---

## sendChangeCipher

```asm
// === 0879e570 yaSSL::sendChangeCipher  [0x0879e570-0x879e72f] ===
 879e570:	55                   	push   %ebp
 879e571:	89 e5                	mov    %esp,%ebp
 879e573:	57                   	push   %edi
 879e574:	56                   	push   %esi
 879e575:	53                   	push   %ebx
 879e576:	e8 7d 48 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879e57b:	81 c3 1d e6 bc 00    	add    $0xbce61d,%ebx
 879e581:	83 ec 3c             	sub    $0x3c,%esp
 879e584:	8b 75 08             	mov    0x8(%ebp),%esi
 879e587:	89 34 24             	mov    %esi,(%esp)
 879e58a:	e8 e1 fa fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 879e58f:	89 04 24             	mov    %eax,(%esp)
 879e592:	e8 b9 04 fb ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 879e597:	8b 10                	mov    (%eax),%edx
 879e599:	85 d2                	test   %edx,%edx
 879e59b:	0f 84 2f 01 00 00    	je     879e6d0 <_ZN5yaSSL16sendChangeCipherERNS_3SSLENS_12BufferOutputE+0x160>
 879e5a1:	89 34 24             	mov    %esi,(%esp)
 879e5a4:	e8 07 fb fa ff       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 879e5a9:	85 c0                	test   %eax,%eax
 879e5ab:	74 0b                	je     879e5b8 <_ZN5yaSSL16sendChangeCipherERNS_3SSLENS_12BufferOutputE+0x48>
 879e5ad:	83 c4 3c             	add    $0x3c,%esp
 879e5b0:	5b                   	pop    %ebx
 879e5b1:	5e                   	pop    %esi
 879e5b2:	5f                   	pop    %edi
 879e5b3:	5d                   	pop    %ebp
 879e5b4:	c3                   	ret
 879e5b5:	8d 76 00             	lea    0x0(%esi),%esi
 879e5b8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 879e5bb:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 879e5be:	89 04 24             	mov    %eax,(%esp)
 879e5c1:	e8 7a 85 fa ff       	call   8746b40 <_ZN5yaSSL16ChangeCipherSpecC1Ev>
 879e5c6:	8d 55 d8             	lea    -0x28(%ebp),%edx
 879e5c9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 879e5cc:	89 55 d0             	mov    %edx,-0x30(%ebp)
 879e5cf:	89 04 24             	mov    %eax,(%esp)
 879e5d2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 879e5d9:	00 
 879e5da:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 879e5e1:	00 
 879e5e2:	e8 69 83 fa ff       	call   8746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>
 879e5e7:	89 34 24             	mov    %esi,(%esp)
 879e5ea:	e8 81 fa fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 879e5ef:	89 04 24             	mov    %eax,(%esp)
 879e5f2:	e8 69 03 fb ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 879e5f7:	0f b6 b8 2e 01 00 00 	movzbl 0x12e(%eax),%edi
 879e5fe:	0f b6 88 2f 01 00 00 	movzbl 0x12f(%eax),%ecx
 879e605:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 879e608:	88 4d cc             	mov    %cl,-0x34(%ebp)
 879e60b:	89 04 24             	mov    %eax,(%esp)
 879e60e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 879e611:	ff 50 0c             	call   *0xc(%eax)
 879e614:	0f b6 4d cc          	movzbl -0x34(%ebp),%ecx
 879e618:	88 4d dd             	mov    %cl,-0x23(%ebp)
 879e61b:	89 45 d8             	mov    %eax,-0x28(%ebp)
 879e61e:	89 f8                	mov    %edi,%eax
 879e620:	88 45 dc             	mov    %al,-0x24(%ebp)
 879e623:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 879e626:	89 04 24             	mov    %eax,(%esp)
 879e629:	8b 45 e0             	mov    -0x20(%ebp),%eax
 879e62c:	ff 50 10             	call   *0x10(%eax)
 879e62f:	66 89 45 de          	mov    %ax,-0x22(%ebp)
 879e633:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879e638:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 879e63f:	e8 5c 26 fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 879e644:	89 c7                	mov    %eax,%edi
 879e646:	89 04 24             	mov    %eax,(%esp)
 879e649:	e8 52 88 ff ff       	call   8796ea0 <_ZN5yaSSL13output_bufferC1Ev>
 879e64e:	0f b7 45 de          	movzwl -0x22(%ebp),%eax
 879e652:	89 3c 24             	mov    %edi,(%esp)
 879e655:	83 c0 05             	add    $0x5,%eax
 879e658:	89 44 24 04          	mov    %eax,0x4(%esp)
 879e65c:	e8 bf 8a ff ff       	call   8797120 <_ZN5yaSSL13output_buffer8allocateEj>
 879e661:	8b 55 d0             	mov    -0x30(%ebp),%edx
 879e664:	89 3c 24             	mov    %edi,(%esp)
 879e667:	89 54 24 04          	mov    %edx,0x4(%esp)
 879e66b:	e8 f0 aa fa ff       	call   8749160 <_ZN5yaSSLlsERNS_13output_bufferERKNS_17RecordLayerHeaderE>
 879e670:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 879e673:	89 54 24 04          	mov    %edx,0x4(%esp)
 879e677:	89 04 24             	mov    %eax,(%esp)
 879e67a:	e8 d1 83 fa ff       	call   8746a50 <_ZN5yaSSLlsERNS_13output_bufferERKNS_7MessageE>
 879e67f:	8b 45 0c             	mov    0xc(%ebp),%eax
 879e682:	85 c0                	test   %eax,%eax
 879e684:	74 7a                	je     879e700 <_ZN5yaSSL16sendChangeCipherERNS_3SSLENS_12BufferOutputE+0x190>
 879e686:	89 3c 24             	mov    %edi,(%esp)
 879e689:	e8 32 88 ff ff       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 879e68e:	89 3c 24             	mov    %edi,(%esp)
 879e691:	89 45 d0             	mov    %eax,-0x30(%ebp)
 879e694:	e8 97 88 ff ff       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 879e699:	8b 55 d0             	mov    -0x30(%ebp),%edx
 879e69c:	89 34 24             	mov    %esi,(%esp)
 879e69f:	89 54 24 08          	mov    %edx,0x8(%esp)
 879e6a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 879e6a7:	e8 f4 12 fb ff       	call   874f9a0 <_ZN5yaSSL3SSL4SendEPKhj>
 879e6ac:	85 ff                	test   %edi,%edi
 879e6ae:	74 08                	je     879e6b8 <_ZN5yaSSL16sendChangeCipherERNS_3SSLENS_12BufferOutputE+0x148>
 879e6b0:	89 3c 24             	mov    %edi,(%esp)
 879e6b3:	e8 78 8c ff ff       	call   8797330 <_ZN5yaSSL13output_bufferD1Ev>
 879e6b8:	89 3c 24             	mov    %edi,(%esp)
 879e6bb:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879e6c0:	e8 5b 21 fb ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 879e6c5:	83 c4 3c             	add    $0x3c,%esp
 879e6c8:	5b                   	pop    %ebx
 879e6c9:	5e                   	pop    %esi
 879e6ca:	5f                   	pop    %edi
 879e6cb:	5d                   	pop    %ebp
 879e6cc:	c3                   	ret
 879e6cd:	8d 76 00             	lea    0x0(%esi),%esi
 879e6d0:	89 34 24             	mov    %esi,(%esp)
 879e6d3:	e8 98 f9 fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 879e6d8:	89 04 24             	mov    %eax,(%esp)
 879e6db:	e8 10 06 fb ff       	call   874ecf0 <_ZNK5yaSSL8Security12get_resumingEv>
 879e6e0:	84 c0                	test   %al,%al
 879e6e2:	74 2c                	je     879e710 <_ZN5yaSSL16sendChangeCipherERNS_3SSLENS_12BufferOutputE+0x1a0>
 879e6e4:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 879e6eb:	00 
 879e6ec:	89 34 24             	mov    %esi,(%esp)
 879e6ef:	e8 4c fa fa ff       	call   874e140 <_ZN5yaSSL3SSL11verifyStateENS_11ServerStateE>
 879e6f4:	e9 a8 fe ff ff       	jmp    879e5a1 <_ZN5yaSSL16sendChangeCipherERNS_3SSLENS_12BufferOutputE+0x31>
 879e6f9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 879e700:	89 7c 24 04          	mov    %edi,0x4(%esp)
 879e704:	31 ff                	xor    %edi,%edi
 879e706:	89 34 24             	mov    %esi,(%esp)
 879e709:	e8 02 3f fb ff       	call   8752610 <_ZN5yaSSL3SSL9addBufferEPNS_13output_bufferE>
 879e70e:	eb a8                	jmp    879e6b8 <_ZN5yaSSL16sendChangeCipherERNS_3SSLENS_12BufferOutputE+0x148>
 879e710:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 879e717:	00 
 879e718:	89 34 24             	mov    %esi,(%esp)
 879e71b:	e8 20 fa fa ff       	call   874e140 <_ZN5yaSSL3SSL11verifyStateENS_11ServerStateE>
 879e720:	e9 7c fe ff ff       	jmp    879e5a1 <_ZN5yaSSL16sendChangeCipherERNS_3SSLENS_12BufferOutputE+0x31>
 879e725:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 879e729:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::sendChangeCipher @ 0x879e570

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::sendChangeCipher(yaSSL::SSL&, yaSSL::BufferOutput) */

void yaSSL::sendChangeCipher(SSL *param_1,int param_2)

{
  ProtocolVersion PVar1;
  undefined1 uVar2;
  char cVar3;
  Security *pSVar4;
  int *piVar5;
  int iVar6;
  output_buffer *this;
  output_buffer *poVar7;
  uint uVar8;
  output_buffer *poVar9;
  undefined4 local_2c;
  ProtocolVersion local_28;
  undefined1 local_27;
  ushort local_26;
  int local_24 [4];
  undefined4 uStack_14;
  
  uStack_14 = 0x879e57b;
  pSVar4 = (Security *)SSL::getSecurity(param_1);
  piVar5 = (int *)Security::get_parms(pSVar4);
  if (*piVar5 == 0) {
    pSVar4 = (Security *)SSL::getSecurity(param_1);
    cVar3 = Security::get_resuming(pSVar4);
    if (cVar3 == '\0') {
      SSL::verifyState(param_1,3);
    }
    else {
      SSL::verifyState(param_1,2);
    }
  }
  iVar6 = SSL::GetError(param_1);
  if (iVar6 != 0) {
    return;
  }
  ChangeCipherSpec::ChangeCipherSpec((ChangeCipherSpec *)local_24);
  uVar8 = 0;
  ProtocolVersion::ProtocolVersion(&local_28,'\x03','\0');
  pSVar4 = (Security *)SSL::getSecurity(param_1);
  iVar6 = Security::get_connection(pSVar4);
  PVar1 = *(ProtocolVersion *)(iVar6 + 0x12e);
  uVar2 = *(undefined1 *)(iVar6 + 0x12f);
  local_2c = (**(code **)(local_24[0] + 0xc))((ChangeCipherSpec *)local_24);
  local_28 = PVar1;
  local_27 = uVar2;
  local_26 = (**(code **)(local_24[0] + 0x10))((ChangeCipherSpec *)local_24);
  this = operator_new(0xc,uVar8 & 0xffffff00);
  output_buffer::output_buffer(this);
  output_buffer::allocate(this,local_26 + 5);
  poVar7 = (output_buffer *)operator<<(this,(RecordLayerHeader *)&local_2c);
  operator<<(poVar7,(Message *)local_24);
  if (param_2 == 0) {
    poVar7 = (output_buffer *)0x0;
    SSL::addBuffer(param_1,this);
    poVar9 = this;
  }
  else {
    uVar8 = output_buffer::get_size(this);
    poVar9 = (output_buffer *)output_buffer::get_buffer(this);
    SSL::Send(param_1,(uchar *)poVar9,uVar8);
    poVar7 = this;
    if (this != (output_buffer *)0x0) {
      output_buffer::~output_buffer(this);
    }
  }
  operator_delete(poVar7,(uint)poVar9 & 0xffffff00);
  return;
}

```

---

## sendClientHello

```asm
// === 087a08d0 yaSSL::sendClientHello  [0x087a08d0-0x87a0aef] ===
 87a08d0:	55                   	push   %ebp
 87a08d1:	89 e5                	mov    %esp,%ebp
 87a08d3:	57                   	push   %edi
 87a08d4:	56                   	push   %esi
 87a08d5:	53                   	push   %ebx
 87a08d6:	e8 1d 25 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a08db:	81 c3 bd c2 bc 00    	add    $0xbcc2bd,%ebx
 87a08e1:	81 ec 3c 01 00 00    	sub    $0x13c,%esp
 87a08e7:	8b 75 08             	mov    0x8(%ebp),%esi
 87a08ea:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a08f1:	00 
 87a08f2:	89 34 24             	mov    %esi,(%esp)
 87a08f5:	e8 a6 d8 fa ff       	call   874e1a0 <_ZN5yaSSL3SSL11verifyStateENS_11ClientStateE>
 87a08fa:	89 34 24             	mov    %esi,(%esp)
 87a08fd:	e8 ae d7 fa ff       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 87a0902:	85 c0                	test   %eax,%eax
 87a0904:	0f 85 d1 01 00 00    	jne    87a0adb <_ZN5yaSSL15sendClientHelloERNS_3SSLE+0x20b>
 87a090a:	89 34 24             	mov    %esi,(%esp)
 87a090d:	e8 5e d7 fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 87a0912:	89 04 24             	mov    %eax,(%esp)
 87a0915:	e8 46 e0 fa ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 87a091a:	0f b6 b8 2d 01 00 00 	movzbl 0x12d(%eax),%edi
 87a0921:	89 34 24             	mov    %esi,(%esp)
 87a0924:	e8 47 d7 fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 87a0929:	89 04 24             	mov    %eax,(%esp)
 87a092c:	e8 2f e0 fa ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 87a0931:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87a0935:	8d 7d c8             	lea    -0x38(%ebp),%edi
 87a0938:	0f b7 80 2e 01 00 00 	movzwl 0x12e(%eax),%eax
 87a093f:	66 89 44 24 04       	mov    %ax,0x4(%esp)
 87a0944:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 87a094a:	89 85 e4 fe ff ff    	mov    %eax,-0x11c(%ebp)
 87a0950:	89 04 24             	mov    %eax,(%esp)
 87a0953:	e8 78 70 fa ff       	call   87479d0 <_ZN5yaSSL11ClientHelloC1ENS_15ProtocolVersionEb>
 87a0958:	8d 55 e0             	lea    -0x20(%ebp),%edx
 87a095b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 87a095e:	89 95 d4 fe ff ff    	mov    %edx,-0x12c(%ebp)
 87a0964:	89 04 24             	mov    %eax,(%esp)
 87a0967:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87a096e:	00 
 87a096f:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 87a0976:	00 
 87a0977:	e8 d4 5f fa ff       	call   8746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>
 87a097c:	8b 83 30 fc ff ff    	mov    -0x3d0(%ebx),%eax
 87a0982:	89 3c 24             	mov    %edi,(%esp)
 87a0985:	83 c0 08             	add    $0x8,%eax
 87a0988:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87a098b:	e8 10 65 ff ff       	call   8796ea0 <_ZN5yaSSL13output_bufferC1Ev>
 87a0990:	8b 8d e4 fe ff ff    	mov    -0x11c(%ebp),%ecx
 87a0996:	89 34 24             	mov    %esi,(%esp)
 87a0999:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87a099d:	e8 ce d1 ff ff       	call   879db70 <_ZN5yaSSL16buildClientHelloERNS_3SSLERNS_11ClientHelloE>
 87a09a2:	8b 85 e4 fe ff ff    	mov    -0x11c(%ebp),%eax
 87a09a8:	89 04 24             	mov    %eax,(%esp)
 87a09ab:	e8 80 65 fa ff       	call   8746f30 <_ZNK5yaSSL11ClientHello10get_randomEv>
 87a09b0:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 87a09b7:	00 
 87a09b8:	89 34 24             	mov    %esi,(%esp)
 87a09bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a09bf:	e8 0c ea fa ff       	call   874f3d0 <_ZN5yaSSL3SSL10set_randomEPKhNS_13ConnectionEndE>
 87a09c4:	8b 95 e4 fe ff ff    	mov    -0x11c(%ebp),%edx
 87a09ca:	89 14 24             	mov    %edx,(%esp)
 87a09cd:	e8 ce 60 fa ff       	call   8746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>
 87a09d2:	8b 8d e4 fe ff ff    	mov    -0x11c(%ebp),%ecx
 87a09d8:	89 0c 24             	mov    %ecx,(%esp)
 87a09db:	89 85 e0 fe ff ff    	mov    %eax,-0x120(%ebp)
 87a09e1:	8b 85 f4 fe ff ff    	mov    -0x10c(%ebp),%eax
 87a09e7:	ff 10                	call   *(%eax)
 87a09e9:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 87a09ec:	89 14 24             	mov    %edx,(%esp)
 87a09ef:	89 95 dc fe ff ff    	mov    %edx,-0x124(%ebp)
 87a09f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a09f9:	e8 92 60 fa ff       	call   8746a90 <_ZN5yaSSL15HandShakeHeader8set_typeENS_13HandShakeTypeE>
 87a09fe:	8b 95 dc fe ff ff    	mov    -0x124(%ebp),%edx
 87a0a04:	8b 85 e0 fe ff ff    	mov    -0x120(%ebp),%eax
 87a0a0a:	89 14 24             	mov    %edx,(%esp)
 87a0a0d:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a0a11:	e8 3a 8f fa ff       	call   8749950 <_ZN5yaSSL15HandShakeHeader10set_lengthEj>
 87a0a16:	89 34 24             	mov    %esi,(%esp)
 87a0a19:	e8 52 d6 fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 87a0a1e:	89 04 24             	mov    %eax,(%esp)
 87a0a21:	e8 3a df fa ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 87a0a26:	0f b6 88 2f 01 00 00 	movzbl 0x12f(%eax),%ecx
 87a0a2d:	0f b6 80 2e 01 00 00 	movzbl 0x12e(%eax),%eax
 87a0a34:	c7 45 e0 16 00 00 00 	movl   $0x16,-0x20(%ebp)
 87a0a3b:	89 3c 24             	mov    %edi,(%esp)
 87a0a3e:	88 4d e5             	mov    %cl,-0x1b(%ebp)
 87a0a41:	88 45 e4             	mov    %al,-0x1c(%ebp)
 87a0a44:	0f b7 85 e0 fe ff ff 	movzwl -0x120(%ebp),%eax
 87a0a4b:	83 c0 04             	add    $0x4,%eax
 87a0a4e:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 87a0a52:	0f b7 c0             	movzwl %ax,%eax
 87a0a55:	83 c0 05             	add    $0x5,%eax
 87a0a58:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a0a5c:	e8 bf 66 ff ff       	call   8797120 <_ZN5yaSSL13output_buffer8allocateEj>
 87a0a61:	8b 85 d4 fe ff ff    	mov    -0x12c(%ebp),%eax
 87a0a67:	89 3c 24             	mov    %edi,(%esp)
 87a0a6a:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a0a6e:	e8 ed 86 fa ff       	call   8749160 <_ZN5yaSSLlsERNS_13output_bufferERKNS_17RecordLayerHeaderE>
 87a0a73:	8b 95 dc fe ff ff    	mov    -0x124(%ebp),%edx
 87a0a79:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a0a7d:	89 04 24             	mov    %eax,(%esp)
 87a0a80:	e8 4b 86 fa ff       	call   87490d0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_15HandShakeHeaderE>
 87a0a85:	8b 95 e4 fe ff ff    	mov    -0x11c(%ebp),%edx
 87a0a8b:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a0a8f:	89 04 24             	mov    %eax,(%esp)
 87a0a92:	e8 59 62 fa ff       	call   8746cf0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_13HandShakeBaseE>
 87a0a97:	89 fa                	mov    %edi,%edx
 87a0a99:	89 f0                	mov    %esi,%eax
 87a0a9b:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 87a0aa2:	e8 a9 c2 ff ff       	call   879cd50 <_ZN5yaSSL12_GLOBAL__N_113hashHandShakeERNS_3SSLERKNS_13output_bufferEb>
 87a0aa7:	89 3c 24             	mov    %edi,(%esp)
 87a0aaa:	e8 11 64 ff ff       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 87a0aaf:	89 3c 24             	mov    %edi,(%esp)
 87a0ab2:	89 85 dc fe ff ff    	mov    %eax,-0x124(%ebp)
 87a0ab8:	e8 73 64 ff ff       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 87a0abd:	8b 95 dc fe ff ff    	mov    -0x124(%ebp),%edx
 87a0ac3:	89 34 24             	mov    %esi,(%esp)
 87a0ac6:	89 54 24 08          	mov    %edx,0x8(%esp)
 87a0aca:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a0ace:	e8 cd ee fa ff       	call   874f9a0 <_ZN5yaSSL3SSL4SendEPKhj>
 87a0ad3:	89 3c 24             	mov    %edi,(%esp)
 87a0ad6:	e8 55 68 ff ff       	call   8797330 <_ZN5yaSSL13output_bufferD1Ev>
 87a0adb:	81 c4 3c 01 00 00    	add    $0x13c,%esp
 87a0ae1:	5b                   	pop    %ebx
 87a0ae2:	5e                   	pop    %esi
 87a0ae3:	5f                   	pop    %edi
 87a0ae4:	5d                   	pop    %ebp
 87a0ae5:	c3                   	ret
 87a0ae6:	8d 76 00             	lea    0x0(%esi),%esi
 87a0ae9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::sendClientHello @ 0x87a08d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::sendClientHello(yaSSL::SSL&) */

void yaSSL::sendClientHello(SSL *param_1)

{
  undefined1 uVar1;
  int iVar2;
  Security *pSVar3;
  undefined4 uVar4;
  uint uVar5;
  output_buffer *poVar6;
  uchar *puVar7;
  undefined2 uVar8;
  short local_124;
  undefined4 *local_110 [53];
  output_buffer local_3c [12];
  undefined *local_30 [3];
  undefined4 local_24;
  ProtocolVersion local_20;
  undefined1 local_1f;
  ushort local_1e;
  undefined4 uStack_14;
  
  uStack_14 = 0x87a08db;
  uVar8 = 0;
  SSL::verifyState(param_1,0);
  iVar2 = SSL::GetError(param_1);
  if (iVar2 == 0) {
    pSVar3 = (Security *)SSL::getSecurity(param_1);
    iVar2 = Security::get_connection(pSVar3);
    uVar1 = *(undefined1 *)(iVar2 + 0x12d);
    pSVar3 = (Security *)SSL::getSecurity(param_1);
    iVar2 = Security::get_connection(pSVar3);
    ClientHello::ClientHello
              ((ClientHello *)local_110,CONCAT22(uVar8,*(undefined2 *)(iVar2 + 0x12e)),uVar1);
    ProtocolVersion::ProtocolVersion(&local_20,'\x03','\0');
    local_30[0] = PTR_vtable_0936c7c8 + 8;
    output_buffer::output_buffer(local_3c);
    buildClientHello(param_1,(ClientHello *)local_110);
    uVar4 = ClientHello::get_random((ClientHello *)local_110);
    SSL::set_random(param_1,uVar4,1);
    uVar5 = HandShakeBase::get_length((HandShakeBase *)local_110);
    uVar4 = (*(code *)*local_110[0])((ClientHello *)local_110);
    HandShakeHeader::set_type((HandShakeHeader *)local_30,uVar4);
    HandShakeHeader::set_length((HandShakeHeader *)local_30,uVar5);
    pSVar3 = (Security *)SSL::getSecurity(param_1);
    iVar2 = Security::get_connection(pSVar3);
    local_1f = *(undefined1 *)(iVar2 + 0x12f);
    local_20 = *(ProtocolVersion *)(iVar2 + 0x12e);
    local_24 = 0x16;
    local_124 = (short)uVar5;
    local_1e = local_124 + 4;
    output_buffer::allocate(local_3c,local_1e + 5);
    poVar6 = (output_buffer *)operator<<(local_3c,(RecordLayerHeader *)&local_24);
    poVar6 = (output_buffer *)operator<<(poVar6,(HandShakeHeader *)local_30);
    operator<<(poVar6,(HandShakeBase *)local_110);
    (anonymous_namespace)::hashHandShake(param_1,local_3c,false);
    uVar5 = output_buffer::get_size(local_3c);
    puVar7 = (uchar *)output_buffer::get_buffer(local_3c);
    SSL::Send(param_1,puVar7,uVar5);
    output_buffer::~output_buffer(local_3c);
  }
  return;
}

```

---

## sendClientKeyExchange

```asm
// === 087a0cc0 yaSSL::sendClientKeyExchange  [0x087a0cc0-0x87a0eaf] ===
 87a0cc0:	55                   	push   %ebp
 87a0cc1:	89 e5                	mov    %esp,%ebp
 87a0cc3:	57                   	push   %edi
 87a0cc4:	56                   	push   %esi
 87a0cc5:	53                   	push   %ebx
 87a0cc6:	e8 2d 21 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a0ccb:	81 c3 cd be bc 00    	add    $0xbcbecd,%ebx
 87a0cd1:	83 ec 5c             	sub    $0x5c,%esp
 87a0cd4:	8b 75 08             	mov    0x8(%ebp),%esi
 87a0cd7:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 87a0cde:	00 
 87a0cdf:	89 34 24             	mov    %esi,(%esp)
 87a0ce2:	e8 b9 d4 fa ff       	call   874e1a0 <_ZN5yaSSL3SSL11verifyStateENS_11ClientStateE>
 87a0ce7:	89 34 24             	mov    %esi,(%esp)
 87a0cea:	e8 c1 d3 fa ff       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 87a0cef:	85 c0                	test   %eax,%eax
 87a0cf1:	74 0d                	je     87a0d00 <_ZN5yaSSL21sendClientKeyExchangeERNS_3SSLENS_12BufferOutputE+0x40>
 87a0cf3:	83 c4 5c             	add    $0x5c,%esp
 87a0cf6:	5b                   	pop    %ebx
 87a0cf7:	5e                   	pop    %esi
 87a0cf8:	5f                   	pop    %edi
 87a0cf9:	5d                   	pop    %ebp
 87a0cfa:	c3                   	ret
 87a0cfb:	90                   	nop
 87a0cfc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a0d00:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 87a0d03:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 87a0d06:	89 04 24             	mov    %eax,(%esp)
 87a0d09:	89 74 24 04          	mov    %esi,0x4(%esp)
 87a0d0d:	e8 ee a9 fa ff       	call   874b700 <_ZN5yaSSL17ClientKeyExchangeC1ERNS_3SSLE>
 87a0d12:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 87a0d15:	89 74 24 04          	mov    %esi,0x4(%esp)
 87a0d19:	89 14 24             	mov    %edx,(%esp)
 87a0d1c:	e8 bf 63 fa ff       	call   87470e0 <_ZN5yaSSL17ClientKeyExchange5buildERNS_3SSLE>
 87a0d21:	89 34 24             	mov    %esi,(%esp)
 87a0d24:	e8 97 f4 fa ff       	call   87501c0 <_ZN5yaSSL3SSL16makeMasterSecretEv>
 87a0d29:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 87a0d2c:	8d 4d e0             	lea    -0x20(%ebp),%ecx
 87a0d2f:	89 04 24             	mov    %eax,(%esp)
 87a0d32:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87a0d39:	00 
 87a0d3a:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 87a0d41:	00 
 87a0d42:	89 4d b4             	mov    %ecx,-0x4c(%ebp)
 87a0d45:	e8 06 5c fa ff       	call   8746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>
 87a0d4a:	8b 83 30 fc ff ff    	mov    -0x3d0(%ebx),%eax
 87a0d50:	83 c0 08             	add    $0x8,%eax
 87a0d53:	89 45 c8             	mov    %eax,-0x38(%ebp)
 87a0d56:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a0d5b:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 87a0d62:	e8 39 ff fa ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87a0d67:	89 c7                	mov    %eax,%edi
 87a0d69:	89 04 24             	mov    %eax,(%esp)
 87a0d6c:	e8 2f 61 ff ff       	call   8796ea0 <_ZN5yaSSL13output_bufferC1Ev>
 87a0d71:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 87a0d74:	89 04 24             	mov    %eax,(%esp)
 87a0d77:	e8 24 5d fa ff       	call   8746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>
 87a0d7c:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 87a0d7f:	89 14 24             	mov    %edx,(%esp)
 87a0d82:	89 45 c0             	mov    %eax,-0x40(%ebp)
 87a0d85:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 87a0d88:	ff 10                	call   *(%eax)
 87a0d8a:	8d 55 c8             	lea    -0x38(%ebp),%edx
 87a0d8d:	89 14 24             	mov    %edx,(%esp)
 87a0d90:	89 55 bc             	mov    %edx,-0x44(%ebp)
 87a0d93:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a0d97:	e8 f4 5c fa ff       	call   8746a90 <_ZN5yaSSL15HandShakeHeader8set_typeENS_13HandShakeTypeE>
 87a0d9c:	8b 55 bc             	mov    -0x44(%ebp),%edx
 87a0d9f:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 87a0da2:	89 14 24             	mov    %edx,(%esp)
 87a0da5:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87a0da9:	e8 a2 8b fa ff       	call   8749950 <_ZN5yaSSL15HandShakeHeader10set_lengthEj>
 87a0dae:	89 34 24             	mov    %esi,(%esp)
 87a0db1:	e8 ba d2 fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 87a0db6:	89 04 24             	mov    %eax,(%esp)
 87a0db9:	e8 a2 db fa ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 87a0dbe:	0f b6 88 2f 01 00 00 	movzbl 0x12f(%eax),%ecx
 87a0dc5:	0f b6 80 2e 01 00 00 	movzbl 0x12e(%eax),%eax
 87a0dcc:	c7 45 e0 16 00 00 00 	movl   $0x16,-0x20(%ebp)
 87a0dd3:	89 3c 24             	mov    %edi,(%esp)
 87a0dd6:	88 4d e5             	mov    %cl,-0x1b(%ebp)
 87a0dd9:	88 45 e4             	mov    %al,-0x1c(%ebp)
 87a0ddc:	0f b7 45 c0          	movzwl -0x40(%ebp),%eax
 87a0de0:	83 c0 04             	add    $0x4,%eax
 87a0de3:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 87a0de7:	0f b7 c0             	movzwl %ax,%eax
 87a0dea:	83 c0 05             	add    $0x5,%eax
 87a0ded:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a0df1:	e8 2a 63 ff ff       	call   8797120 <_ZN5yaSSL13output_buffer8allocateEj>
 87a0df6:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 87a0df9:	89 3c 24             	mov    %edi,(%esp)
 87a0dfc:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a0e00:	e8 5b 83 fa ff       	call   8749160 <_ZN5yaSSLlsERNS_13output_bufferERKNS_17RecordLayerHeaderE>
 87a0e05:	8b 55 bc             	mov    -0x44(%ebp),%edx
 87a0e08:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a0e0c:	89 04 24             	mov    %eax,(%esp)
 87a0e0f:	e8 bc 82 fa ff       	call   87490d0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_15HandShakeHeaderE>
 87a0e14:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 87a0e17:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a0e1b:	89 04 24             	mov    %eax,(%esp)
 87a0e1e:	e8 cd 5e fa ff       	call   8746cf0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_13HandShakeBaseE>
 87a0e23:	89 f0                	mov    %esi,%eax
 87a0e25:	89 fa                	mov    %edi,%edx
 87a0e27:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 87a0e2e:	e8 1d bf ff ff       	call   879cd50 <_ZN5yaSSL12_GLOBAL__N_113hashHandShakeERNS_3SSLERKNS_13output_bufferEb>
 87a0e33:	8b 45 0c             	mov    0xc(%ebp),%eax
 87a0e36:	85 c0                	test   %eax,%eax
 87a0e38:	74 5e                	je     87a0e98 <_ZN5yaSSL21sendClientKeyExchangeERNS_3SSLENS_12BufferOutputE+0x1d8>
 87a0e3a:	89 3c 24             	mov    %edi,(%esp)
 87a0e3d:	e8 7e 60 ff ff       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 87a0e42:	89 3c 24             	mov    %edi,(%esp)
 87a0e45:	89 45 bc             	mov    %eax,-0x44(%ebp)
 87a0e48:	e8 e3 60 ff ff       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 87a0e4d:	8b 55 bc             	mov    -0x44(%ebp),%edx
 87a0e50:	89 34 24             	mov    %esi,(%esp)
 87a0e53:	89 54 24 08          	mov    %edx,0x8(%esp)
 87a0e57:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a0e5b:	e8 40 eb fa ff       	call   874f9a0 <_ZN5yaSSL3SSL4SendEPKhj>
 87a0e60:	85 ff                	test   %edi,%edi
 87a0e62:	74 08                	je     87a0e6c <_ZN5yaSSL21sendClientKeyExchangeERNS_3SSLENS_12BufferOutputE+0x1ac>
 87a0e64:	89 3c 24             	mov    %edi,(%esp)
 87a0e67:	e8 c4 64 ff ff       	call   8797330 <_ZN5yaSSL13output_bufferD1Ev>
 87a0e6c:	89 3c 24             	mov    %edi,(%esp)
 87a0e6f:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a0e74:	e8 a7 f9 fa ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 87a0e79:	8b 83 e0 fb ff ff    	mov    -0x420(%ebx),%eax
 87a0e7f:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 87a0e82:	83 c0 08             	add    $0x8,%eax
 87a0e85:	89 45 c8             	mov    %eax,-0x38(%ebp)
 87a0e88:	89 0c 24             	mov    %ecx,(%esp)
 87a0e8b:	e8 70 77 fa ff       	call   8748600 <_ZN5yaSSL17ClientKeyExchangeD1Ev>
 87a0e90:	83 c4 5c             	add    $0x5c,%esp
 87a0e93:	5b                   	pop    %ebx
 87a0e94:	5e                   	pop    %esi
 87a0e95:	5f                   	pop    %edi
 87a0e96:	5d                   	pop    %ebp
 87a0e97:	c3                   	ret
 87a0e98:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87a0e9c:	31 ff                	xor    %edi,%edi
 87a0e9e:	89 34 24             	mov    %esi,(%esp)
 87a0ea1:	e8 6a 17 fb ff       	call   8752610 <_ZN5yaSSL3SSL9addBufferEPNS_13output_bufferE>
 87a0ea6:	eb c4                	jmp    87a0e6c <_ZN5yaSSL21sendClientKeyExchangeERNS_3SSLENS_12BufferOutputE+0x1ac>
 87a0ea8:	90                   	nop
 87a0ea9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::sendClientKeyExchange @ 0x87a0cc0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::sendClientKeyExchange(yaSSL::SSL&, yaSSL::BufferOutput) */

void yaSSL::sendClientKeyExchange(SSL *param_1,int param_2)

{
  int iVar1;
  output_buffer *this;
  uint uVar2;
  undefined4 uVar3;
  Security *this_00;
  output_buffer *poVar4;
  output_buffer *poVar5;
  short local_44;
  undefined *local_3c [3];
  undefined4 *local_30 [3];
  undefined4 local_24;
  ProtocolVersion local_20;
  undefined1 local_1f;
  ushort local_1e;
  undefined4 uStack_14;
  
  uStack_14 = 0x87a0ccb;
  SSL::verifyState(param_1,4);
  iVar1 = SSL::GetError(param_1);
  if (iVar1 != 0) {
    return;
  }
  ClientKeyExchange::ClientKeyExchange((ClientKeyExchange *)local_30,param_1);
  ClientKeyExchange::build((ClientKeyExchange *)local_30,param_1);
  SSL::makeMasterSecret(param_1);
  uVar2 = 0;
  ProtocolVersion::ProtocolVersion(&local_20,'\x03','\0');
  local_3c[0] = PTR_vtable_0936c7c8 + 8;
  this = operator_new(0xc,uVar2 & 0xffffff00);
  output_buffer::output_buffer(this);
  uVar2 = HandShakeBase::get_length((HandShakeBase *)local_30);
  uVar3 = (*(code *)*local_30[0])((ClientKeyExchange *)local_30);
  HandShakeHeader::set_type((HandShakeHeader *)local_3c,uVar3);
  HandShakeHeader::set_length((HandShakeHeader *)local_3c,uVar2);
  this_00 = (Security *)SSL::getSecurity(param_1);
  iVar1 = Security::get_connection(this_00);
  local_1f = *(undefined1 *)(iVar1 + 0x12f);
  local_20 = *(ProtocolVersion *)(iVar1 + 0x12e);
  local_24 = 0x16;
  local_44 = (short)uVar2;
  local_1e = local_44 + 4;
  output_buffer::allocate(this,local_1e + 5);
  poVar4 = (output_buffer *)operator<<(this,(RecordLayerHeader *)&local_24);
  poVar4 = (output_buffer *)operator<<(poVar4,(HandShakeHeader *)local_3c);
  operator<<(poVar4,(HandShakeBase *)local_30);
  (anonymous_namespace)::hashHandShake(param_1,this,false);
  if (param_2 == 0) {
    poVar4 = (output_buffer *)0x0;
    SSL::addBuffer(param_1,this);
    poVar5 = this;
  }
  else {
    uVar2 = output_buffer::get_size(this);
    poVar5 = (output_buffer *)output_buffer::get_buffer(this);
    SSL::Send(param_1,(uchar *)poVar5,uVar2);
    poVar4 = this;
    if (this != (output_buffer *)0x0) {
      output_buffer::~output_buffer(this);
    }
  }
  operator_delete(poVar4,(uint)poVar5 & 0xffffff00);
  local_3c[0] = PTR_vtable_0936c778 + 8;
  ClientKeyExchange::~ClientKeyExchange((ClientKeyExchange *)local_30);
  return;
}

```

---

## sendData

```asm
// === 0879faf0 yaSSL::sendData  [0x0879faf0-0x879fd3f] ===
 879faf0:	55                   	push   %ebp
 879faf1:	89 e5                	mov    %esp,%ebp
 879faf3:	57                   	push   %edi
 879faf4:	56                   	push   %esi
 879faf5:	53                   	push   %ebx
 879faf6:	e8 fd 32 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879fafb:	81 c3 9d d0 bc 00    	add    $0xbcd09d,%ebx
 879fb01:	83 ec 6c             	sub    $0x6c,%esp
 879fb04:	8b 45 08             	mov    0x8(%ebp),%eax
 879fb07:	89 04 24             	mov    %eax,(%esp)
 879fb0a:	e8 a1 e5 fa ff       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 879fb0f:	83 f8 50             	cmp    $0x50,%eax
 879fb12:	0f 84 10 02 00 00    	je     879fd28 <_ZN5yaSSL8sendDataERNS_3SSLEPKvi+0x238>
 879fb18:	8b 45 08             	mov    0x8(%ebp),%eax
 879fb1b:	89 04 24             	mov    %eax,(%esp)
 879fb1e:	e8 bd e5 fa ff       	call   874e0e0 <_ZN5yaSSL3SSL23verfiyHandShakeCompleteEv>
 879fb23:	8b 55 08             	mov    0x8(%ebp),%edx
 879fb26:	89 14 24             	mov    %edx,(%esp)
 879fb29:	e8 82 e5 fa ff       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 879fb2e:	89 c2                	mov    %eax,%edx
 879fb30:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 879fb35:	85 d2                	test   %edx,%edx
 879fb37:	0f 85 9f 01 00 00    	jne    879fcdc <_ZN5yaSSL8sendDataERNS_3SSLEPKvi+0x1ec>
 879fb3d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 879fb40:	89 45 b0             	mov    %eax,-0x50(%ebp)
 879fb43:	8b 83 e0 fb ff ff    	mov    -0x420(%ebx),%eax
 879fb49:	8d 55 bc             	lea    -0x44(%ebp),%edx
 879fb4c:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 879fb53:	8d 7d dc             	lea    -0x24(%ebp),%edi
 879fb56:	89 55 ac             	mov    %edx,-0x54(%ebp)
 879fb59:	83 c0 08             	add    $0x8,%eax
 879fb5c:	89 45 a8             	mov    %eax,-0x58(%ebp)
 879fb5f:	e9 ce 00 00 00       	jmp    879fc32 <_ZN5yaSSL8sendDataERNS_3SSLEPKvi+0x142>
 879fb64:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 879fb68:	8b 45 b0             	mov    -0x50(%ebp),%eax
 879fb6b:	89 74 24 04          	mov    %esi,0x4(%esp)
 879fb6f:	89 44 24 08          	mov    %eax,0x8(%esp)
 879fb73:	8b 45 0c             	mov    0xc(%ebp),%eax
 879fb76:	03 45 b4             	add    -0x4c(%ebp),%eax
 879fb79:	89 04 24             	mov    %eax,(%esp)
 879fb7c:	e8 0f f5 fa ff       	call   874f090 <_ZN5yaSSL8CompressEPKhiRNS_12input_bufferE>
 879fb81:	83 f8 ff             	cmp    $0xffffffff,%eax
 879fb84:	0f 84 5e 01 00 00    	je     879fce8 <_ZN5yaSSL8sendDataERNS_3SSLEPKvi+0x1f8>
 879fb8a:	8b 45 b0             	mov    -0x50(%ebp),%eax
 879fb8d:	89 04 24             	mov    %eax,(%esp)
 879fb90:	e8 9b 71 ff ff       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 879fb95:	89 c2                	mov    %eax,%edx
 879fb97:	8b 45 b0             	mov    -0x50(%ebp),%eax
 879fb9a:	89 55 a4             	mov    %edx,-0x5c(%ebp)
 879fb9d:	89 04 24             	mov    %eax,(%esp)
 879fba0:	e8 0b 72 ff ff       	call   8796db0 <_ZNK5yaSSL12input_buffer8get_sizeEv>
 879fba5:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 879fba8:	89 54 24 08          	mov    %edx,0x8(%esp)
 879fbac:	8b 55 ac             	mov    -0x54(%ebp),%edx
 879fbaf:	0f b7 c0             	movzwl %ax,%eax
 879fbb2:	89 44 24 04          	mov    %eax,0x4(%esp)
 879fbb6:	89 14 24             	mov    %edx,(%esp)
 879fbb9:	e8 a2 70 fa ff       	call   8746c60 <_ZN5yaSSL4Data7SetDataEtPKh>
 879fbbe:	8b 55 ac             	mov    -0x54(%ebp),%edx
 879fbc1:	8b 45 08             	mov    0x8(%ebp),%eax
 879fbc4:	89 14 24             	mov    %edx,(%esp)
 879fbc7:	89 fa                	mov    %edi,%edx
 879fbc9:	e8 b2 f9 ff ff       	call   879f580 <_ZN5yaSSL12_GLOBAL__N_112buildMessageERNS_3SSLERNS_13output_bufferERKNS_7MessageE>
 879fbce:	89 3c 24             	mov    %edi,(%esp)
 879fbd1:	e8 ea 72 ff ff       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 879fbd6:	89 3c 24             	mov    %edi,(%esp)
 879fbd9:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 879fbdc:	e8 4f 73 ff ff       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 879fbe1:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 879fbe4:	89 54 24 08          	mov    %edx,0x8(%esp)
 879fbe8:	89 44 24 04          	mov    %eax,0x4(%esp)
 879fbec:	8b 45 08             	mov    0x8(%ebp),%eax
 879fbef:	89 04 24             	mov    %eax,(%esp)
 879fbf2:	e8 a9 fd fa ff       	call   874f9a0 <_ZN5yaSSL3SSL4SendEPKhj>
 879fbf7:	8b 55 08             	mov    0x8(%ebp),%edx
 879fbfa:	89 14 24             	mov    %edx,(%esp)
 879fbfd:	e8 ae e4 fa ff       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 879fc02:	85 c0                	test   %eax,%eax
 879fc04:	0f 85 f1 00 00 00    	jne    879fcfb <_ZN5yaSSL8sendDataERNS_3SSLEPKvi+0x20b>
 879fc0a:	01 75 b4             	add    %esi,-0x4c(%ebp)
 879fc0d:	8b 45 10             	mov    0x10(%ebp),%eax
 879fc10:	39 45 b4             	cmp    %eax,-0x4c(%ebp)
 879fc13:	0f 84 7f 00 00 00    	je     879fc98 <_ZN5yaSSL8sendDataERNS_3SSLEPKvi+0x1a8>
 879fc19:	8b 55 a8             	mov    -0x58(%ebp),%edx
 879fc1c:	8b 45 b0             	mov    -0x50(%ebp),%eax
 879fc1f:	89 55 bc             	mov    %edx,-0x44(%ebp)
 879fc22:	89 04 24             	mov    %eax,(%esp)
 879fc25:	e8 36 77 ff ff       	call   8797360 <_ZN5yaSSL12input_bufferD1Ev>
 879fc2a:	89 3c 24             	mov    %edi,(%esp)
 879fc2d:	e8 fe 76 ff ff       	call   8797330 <_ZN5yaSSL13output_bufferD1Ev>
 879fc32:	8b 75 10             	mov    0x10(%ebp),%esi
 879fc35:	b8 00 40 00 00       	mov    $0x4000,%eax
 879fc3a:	2b 75 b4             	sub    -0x4c(%ebp),%esi
 879fc3d:	89 3c 24             	mov    %edi,(%esp)
 879fc40:	81 fe 00 40 00 00    	cmp    $0x4000,%esi
 879fc46:	0f 4d f0             	cmovge %eax,%esi
 879fc49:	e8 52 72 ff ff       	call   8796ea0 <_ZN5yaSSL13output_bufferC1Ev>
 879fc4e:	8b 55 b0             	mov    -0x50(%ebp),%edx
 879fc51:	89 14 24             	mov    %edx,(%esp)
 879fc54:	e8 a7 70 ff ff       	call   8796d00 <_ZN5yaSSL12input_bufferC1Ev>
 879fc59:	8b 45 ac             	mov    -0x54(%ebp),%eax
 879fc5c:	89 04 24             	mov    %eax,(%esp)
 879fc5f:	e8 7c 6f fa ff       	call   8746be0 <_ZN5yaSSL4DataC1Ev>
 879fc64:	8b 55 08             	mov    0x8(%ebp),%edx
 879fc67:	89 14 24             	mov    %edx,(%esp)
 879fc6a:	e8 61 ed fa ff       	call   874e9d0 <_ZNK5yaSSL3SSL13CompressionOnEv>
 879fc6f:	84 c0                	test   %al,%al
 879fc71:	0f 85 f1 fe ff ff    	jne    879fb68 <_ZN5yaSSL8sendDataERNS_3SSLEPKvi+0x78>
 879fc77:	8b 45 0c             	mov    0xc(%ebp),%eax
 879fc7a:	03 45 b4             	add    -0x4c(%ebp),%eax
 879fc7d:	89 44 24 08          	mov    %eax,0x8(%esp)
 879fc81:	0f b7 c6             	movzwl %si,%eax
 879fc84:	89 44 24 04          	mov    %eax,0x4(%esp)
 879fc88:	8b 45 ac             	mov    -0x54(%ebp),%eax
 879fc8b:	89 04 24             	mov    %eax,(%esp)
 879fc8e:	e8 cd 6f fa ff       	call   8746c60 <_ZN5yaSSL4Data7SetDataEtPKh>
 879fc93:	e9 26 ff ff ff       	jmp    879fbbe <_ZN5yaSSL8sendDataERNS_3SSLEPKvi+0xce>
 879fc98:	8b 93 e0 fb ff ff    	mov    -0x420(%ebx),%edx
 879fc9e:	8d 42 08             	lea    0x8(%edx),%eax
 879fca1:	89 45 bc             	mov    %eax,-0x44(%ebp)
 879fca4:	8b 45 b0             	mov    -0x50(%ebp),%eax
 879fca7:	89 04 24             	mov    %eax,(%esp)
 879fcaa:	e8 b1 76 ff ff       	call   8797360 <_ZN5yaSSL12input_bufferD1Ev>
 879fcaf:	89 3c 24             	mov    %edi,(%esp)
 879fcb2:	e8 79 76 ff ff       	call   8797330 <_ZN5yaSSL13output_bufferD1Ev>
 879fcb7:	8b 55 08             	mov    0x8(%ebp),%edx
 879fcba:	89 14 24             	mov    %edx,(%esp)
 879fcbd:	e8 3e e6 fa ff       	call   874e300 <_ZN5yaSSL3SSL6useLogEv>
 879fcc2:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 879fcc5:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 879fccc:	00 
 879fccd:	89 54 24 04          	mov    %edx,0x4(%esp)
 879fcd1:	89 04 24             	mov    %eax,(%esp)
 879fcd4:	e8 a7 17 00 00       	call   87a1480 <_ZN5yaSSL3Log8ShowDataEjb>
 879fcd9:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 879fcdc:	83 c4 6c             	add    $0x6c,%esp
 879fcdf:	5b                   	pop    %ebx
 879fce0:	5e                   	pop    %esi
 879fce1:	5f                   	pop    %edi
 879fce2:	5d                   	pop    %ebp
 879fce3:	c3                   	ret
 879fce4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 879fce8:	8b 55 08             	mov    0x8(%ebp),%edx
 879fceb:	c7 44 24 04 76 00 00 	movl   $0x76,0x4(%esp)
 879fcf2:	00 
 879fcf3:	89 14 24             	mov    %edx,(%esp)
 879fcf6:	e8 d5 e2 fa ff       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 879fcfb:	8b 93 e0 fb ff ff    	mov    -0x420(%ebx),%edx
 879fd01:	8d 42 08             	lea    0x8(%edx),%eax
 879fd04:	89 45 bc             	mov    %eax,-0x44(%ebp)
 879fd07:	8b 45 b0             	mov    -0x50(%ebp),%eax
 879fd0a:	89 04 24             	mov    %eax,(%esp)
 879fd0d:	e8 4e 76 ff ff       	call   8797360 <_ZN5yaSSL12input_bufferD1Ev>
 879fd12:	89 3c 24             	mov    %edi,(%esp)
 879fd15:	e8 16 76 ff ff       	call   8797330 <_ZN5yaSSL13output_bufferD1Ev>
 879fd1a:	83 c4 6c             	add    $0x6c,%esp
 879fd1d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 879fd22:	5b                   	pop    %ebx
 879fd23:	5e                   	pop    %esi
 879fd24:	5f                   	pop    %edi
 879fd25:	5d                   	pop    %ebp
 879fd26:	c3                   	ret
 879fd27:	90                   	nop
 879fd28:	8b 55 08             	mov    0x8(%ebp),%edx
 879fd2b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879fd32:	00 
 879fd33:	89 14 24             	mov    %edx,(%esp)
 879fd36:	e8 95 e2 fa ff       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 879fd3b:	e9 d8 fd ff ff       	jmp    879fb18 <_ZN5yaSSL8sendDataERNS_3SSLEPKvi+0x28>

```

```c
// yaSSL::sendData @ 0x879faf0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::sendData(yaSSL::SSL&, void const*, int) */

int yaSSL::sendData(SSL *param_1,void *param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  uchar *puVar6;
  int iVar7;
  int local_50;
  undefined *local_48 [4];
  input_buffer local_38 [16];
  output_buffer local_28 [20];
  undefined4 uStack_14;
  
  uStack_14 = 0x879fafb;
  iVar3 = SSL::GetError(param_1);
  if (iVar3 == 0x50) {
    SSL::SetError(param_1,0);
  }
  SSL::verfiyHandShakeComplete(param_1);
  iVar3 = SSL::GetError(param_1);
  if (iVar3 != 0) {
    return -1;
  }
  local_50 = 0;
  puVar4 = PTR_vtable_0936c778 + 8;
  while( true ) {
    iVar3 = param_3 - local_50;
    if (0x3fff < iVar3) {
      iVar3 = 0x4000;
    }
    output_buffer::output_buffer(local_28);
    input_buffer::input_buffer(local_38);
    Data::Data((Data *)local_48);
    cVar1 = SSL::CompressionOn(param_1);
    if (cVar1 == '\0') {
      Data::SetData((Data *)local_48,(ushort)iVar3,(uchar *)((int)param_2 + local_50));
    }
    else {
      iVar7 = Compress((uchar *)((int)param_2 + local_50),iVar3,local_38);
      if (iVar7 == -1) {
        SSL::SetError(param_1,0x76);
        break;
      }
      puVar6 = (uchar *)input_buffer::get_buffer(local_38);
      uVar2 = input_buffer::get_size(local_38);
      Data::SetData((Data *)local_48,uVar2,puVar6);
    }
    (anonymous_namespace)::buildMessage(param_1,local_28,(Message *)local_48);
    uVar5 = output_buffer::get_size(local_28);
    puVar6 = (uchar *)output_buffer::get_buffer(local_28);
    SSL::Send(param_1,puVar6,uVar5);
    iVar7 = SSL::GetError(param_1);
    if (iVar7 != 0) break;
    local_50 = local_50 + iVar3;
    if (local_50 == param_3) {
      local_48[0] = PTR_vtable_0936c778 + 8;
      input_buffer::~input_buffer(local_38);
      output_buffer::~output_buffer(local_28);
      uVar5 = SSL::useLog(param_1);
      Log::ShowData(uVar5,SUB41(local_50,0));
      return local_50;
    }
    local_48[0] = puVar4;
    input_buffer::~input_buffer(local_38);
    output_buffer::~output_buffer(local_28);
  }
  local_48[0] = PTR_vtable_0936c778 + 8;
  input_buffer::~input_buffer(local_38);
  output_buffer::~output_buffer(local_28);
  return -1;
}

```

---

## sendFinished

```asm
// === 0879ff00 yaSSL::sendFinished  [0x0879ff00-0x87a063f] ===
 879ff00:	55                   	push   %ebp
 879ff01:	89 e5                	mov    %esp,%ebp
 879ff03:	57                   	push   %edi
 879ff04:	56                   	push   %esi
 879ff05:	53                   	push   %ebx
 879ff06:	e8 ed 2e f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879ff0b:	81 c3 8d cc bc 00    	add    $0xbccc8d,%ebx
 879ff11:	81 ec cc 00 00 00    	sub    $0xcc,%esp
 879ff17:	8b 75 08             	mov    0x8(%ebp),%esi
 879ff1a:	89 34 24             	mov    %esi,(%esp)
 879ff1d:	e8 8e e1 fa ff       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 879ff22:	85 c0                	test   %eax,%eax
 879ff24:	74 12                	je     879ff38 <_ZN5yaSSL12sendFinishedERNS_3SSLENS_13ConnectionEndENS_12BufferOutputE+0x38>
 879ff26:	81 c4 cc 00 00 00    	add    $0xcc,%esp
 879ff2c:	5b                   	pop    %ebx
 879ff2d:	5e                   	pop    %esi
 879ff2e:	5f                   	pop    %edi
 879ff2f:	5d                   	pop    %ebp
 879ff30:	c3                   	ret
 879ff31:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 879ff38:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 879ff3e:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 879ff44:	89 04 24             	mov    %eax,(%esp)
 879ff47:	e8 54 72 fa ff       	call   87471a0 <_ZN5yaSSL8FinishedC1Ev>
 879ff4c:	8d 93 a8 08 9a ff    	lea    -0x65f758(%ebx),%edx
 879ff52:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 879ff56:	8d 83 ac 08 9a ff    	lea    -0x65f754(%ebx),%eax
 879ff5c:	89 34 24             	mov    %esi,(%esp)
 879ff5f:	0f 44 c2             	cmove  %edx,%eax
 879ff62:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 879ff68:	89 44 24 08          	mov    %eax,0x8(%esp)
 879ff6c:	89 54 24 04          	mov    %edx,0x4(%esp)
 879ff70:	e8 cb eb ff ff       	call   879eb40 <_ZN5yaSSL13buildFinishedERNS_3SSLERNS_8FinishedEPKh>
 879ff75:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879ff7a:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 879ff81:	e8 1a 0d fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 879ff86:	89 c7                	mov    %eax,%edi
 879ff88:	89 04 24             	mov    %eax,(%esp)
 879ff8b:	e8 10 6f ff ff       	call   8796ea0 <_ZN5yaSSL13output_bufferC1Ev>
 879ff90:	89 34 24             	mov    %esi,(%esp)
 879ff93:	e8 c8 e0 fa ff       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 879ff98:	89 04 24             	mov    %eax,(%esp)
 879ff9b:	e8 b0 e7 fa ff       	call   874e750 <_ZNK5yaSSL6Crypto10get_digestEv>
 879ffa0:	8b 10                	mov    (%eax),%edx
 879ffa2:	89 04 24             	mov    %eax,(%esp)
 879ffa5:	ff 52 0c             	call   *0xc(%edx)
 879ffa8:	89 34 24             	mov    %esi,(%esp)
 879ffab:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 879ffb1:	e8 ea e9 fa ff       	call   874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>
 879ffb6:	8b 8d 54 ff ff ff    	mov    -0xac(%ebp),%ecx
 879ffbc:	89 34 24             	mov    %esi,(%esp)
 879ffbf:	3c 01                	cmp    $0x1,%al
 879ffc1:	19 c0                	sbb    %eax,%eax
 879ffc3:	83 e0 18             	and    $0x18,%eax
 879ffc6:	8d 44 01 15          	lea    0x15(%ecx,%eax,1),%eax
 879ffca:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 879ffd0:	e8 8b e0 fa ff       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 879ffd5:	89 04 24             	mov    %eax,(%esp)
 879ffd8:	e8 83 e7 fa ff       	call   874e760 <_ZNK5yaSSL6Crypto10get_cipherEv>
 879ffdd:	8b 10                	mov    (%eax),%edx
 879ffdf:	89 04 24             	mov    %eax,(%esp)
 879ffe2:	ff 52 10             	call   *0x10(%edx)
 879ffe5:	89 34 24             	mov    %esi,(%esp)
 879ffe8:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 879ffee:	e8 7d e0 fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 879fff3:	89 04 24             	mov    %eax,(%esp)
 879fff6:	e8 55 ea fa ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 879fffb:	c7 85 4c ff ff ff 00 	movl   $0x0,-0xb4(%ebp)
 87a0002:	00 00 00 
 87a0005:	83 78 08 01          	cmpl   $0x1,0x8(%eax)
 87a0009:	0f 84 c1 05 00 00    	je     87a05d0 <_ZN5yaSSL12sendFinishedERNS_3SSLENS_13ConnectionEndENS_12BufferOutputE+0x6d0>
 87a000f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 87a0012:	89 04 24             	mov    %eax,(%esp)
 87a0015:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87a001c:	00 
 87a001d:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 87a0024:	00 
 87a0025:	e8 26 69 fa ff       	call   8746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>
 87a002a:	8b 83 30 fc ff ff    	mov    -0x3d0(%ebx),%eax
 87a0030:	8b 8d 64 ff ff ff    	mov    -0x9c(%ebp),%ecx
 87a0036:	83 c0 08             	add    $0x8,%eax
 87a0039:	89 0c 24             	mov    %ecx,(%esp)
 87a003c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87a003f:	e8 5c 6a fa ff       	call   8746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>
 87a0044:	89 c2                	mov    %eax,%edx
 87a0046:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 87a004c:	89 95 48 ff ff ff    	mov    %edx,-0xb8(%ebp)
 87a0052:	89 04 24             	mov    %eax,(%esp)
 87a0055:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 87a005b:	ff 10                	call   *(%eax)
 87a005d:	8d 4d d4             	lea    -0x2c(%ebp),%ecx
 87a0060:	89 8d 5c ff ff ff    	mov    %ecx,-0xa4(%ebp)
 87a0066:	89 0c 24             	mov    %ecx,(%esp)
 87a0069:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a006d:	e8 1e 6a fa ff       	call   8746a90 <_ZN5yaSSL15HandShakeHeader8set_typeENS_13HandShakeTypeE>
 87a0072:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 87a0078:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 87a007e:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a0082:	89 04 24             	mov    %eax,(%esp)
 87a0085:	e8 c6 98 fa ff       	call   8749950 <_ZN5yaSSL15HandShakeHeader10set_lengthEj>
 87a008a:	89 34 24             	mov    %esi,(%esp)
 87a008d:	e8 de df fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 87a0092:	89 04 24             	mov    %eax,(%esp)
 87a0095:	e8 c6 e8 fa ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 87a009a:	0f b6 90 2f 01 00 00 	movzbl 0x12f(%eax),%edx
 87a00a1:	0f b6 80 2e 01 00 00 	movzbl 0x12e(%eax),%eax
 87a00a8:	c7 45 e0 16 00 00 00 	movl   $0x16,-0x20(%ebp)
 87a00af:	88 55 e5             	mov    %dl,-0x1b(%ebp)
 87a00b2:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 87a00b5:	88 45 e4             	mov    %al,-0x1c(%ebp)
 87a00b8:	0f b7 85 60 ff ff ff 	movzwl -0xa0(%ebp),%eax
 87a00bf:	89 95 58 ff ff ff    	mov    %edx,-0xa8(%ebp)
 87a00c5:	89 14 24             	mov    %edx,(%esp)
 87a00c8:	83 e8 05             	sub    $0x5,%eax
 87a00cb:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 87a00cf:	e8 2c 6c ff ff       	call   8796d00 <_ZN5yaSSL12input_bufferC1Ev>
 87a00d4:	89 34 24             	mov    %esi,(%esp)
 87a00d7:	e8 94 e8 fa ff       	call   874e970 <_ZNK5yaSSL3SSL9isTLSv1_1Ev>
 87a00dc:	84 c0                	test   %al,%al
 87a00de:	0f 85 cc 03 00 00    	jne    87a04b0 <_ZN5yaSSL12sendFinishedERNS_3SSLENS_13ConnectionEndENS_12BufferOutputE+0x5b0>
 87a00e4:	8b 8d 58 ff ff ff    	mov    -0xa8(%ebp),%ecx
 87a00ea:	89 0c 24             	mov    %ecx,(%esp)
 87a00ed:	e8 be 6c ff ff       	call   8796db0 <_ZNK5yaSSL12input_buffer8get_sizeEv>
 87a00f2:	89 3c 24             	mov    %edi,(%esp)
 87a00f5:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 87a00fb:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 87a0101:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a0105:	e8 16 70 ff ff       	call   8797120 <_ZN5yaSSL13output_buffer8allocateEj>
 87a010a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 87a010d:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a0111:	89 3c 24             	mov    %edi,(%esp)
 87a0114:	e8 47 90 fa ff       	call   8749160 <_ZN5yaSSLlsERNS_13output_bufferERKNS_17RecordLayerHeaderE>
 87a0119:	8b 95 58 ff ff ff    	mov    -0xa8(%ebp),%edx
 87a011f:	89 14 24             	mov    %edx,(%esp)
 87a0122:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 87a0128:	e8 83 6c ff ff       	call   8796db0 <_ZNK5yaSSL12input_buffer8get_sizeEv>
 87a012d:	8b 8d 58 ff ff ff    	mov    -0xa8(%ebp),%ecx
 87a0133:	89 0c 24             	mov    %ecx,(%esp)
 87a0136:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 87a013c:	e8 ef 6b ff ff       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 87a0141:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 87a0147:	89 54 24 08          	mov    %edx,0x8(%esp)
 87a014b:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a014f:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 87a0155:	89 04 24             	mov    %eax,(%esp)
 87a0158:	e8 73 6e ff ff       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 87a015d:	8b 8d 60 ff ff ff    	mov    -0xa0(%ebp),%ecx
 87a0163:	8b 95 5c ff ff ff    	mov    -0xa4(%ebp),%edx
 87a0169:	89 0c 24             	mov    %ecx,(%esp)
 87a016c:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a0170:	e8 5b 8f fa ff       	call   87490d0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_15HandShakeHeaderE>
 87a0175:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 87a017b:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a017f:	89 04 24             	mov    %eax,(%esp)
 87a0182:	e8 99 81 fa ff       	call   8748320 <_ZN5yaSSLlsERNS_13output_bufferERKNS_8FinishedE>
 87a0187:	89 34 24             	mov    %esi,(%esp)
 87a018a:	e8 e1 e7 fa ff       	call   874e970 <_ZNK5yaSSL3SSL9isTLSv1_1Ev>
 87a018f:	89 fa                	mov    %edi,%edx
 87a0191:	0f b6 c0             	movzbl %al,%eax
 87a0194:	89 04 24             	mov    %eax,(%esp)
 87a0197:	89 f0                	mov    %esi,%eax
 87a0199:	e8 b2 cb ff ff       	call   879cd50 <_ZN5yaSSL12_GLOBAL__N_113hashHandShakeERNS_3SSLERKNS_13output_bufferEb>
 87a019e:	89 34 24             	mov    %esi,(%esp)
 87a01a1:	e8 fa e7 fa ff       	call   874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>
 87a01a6:	84 c0                	test   %al,%al
 87a01a8:	0f 85 fa 01 00 00    	jne    87a03a8 <_ZN5yaSSL12sendFinishedERNS_3SSLENS_13ConnectionEndENS_12BufferOutputE+0x4a8>
 87a01ae:	89 3c 24             	mov    %edi,(%esp)
 87a01b1:	e8 0a 6d ff ff       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 87a01b6:	89 3c 24             	mov    %edi,(%esp)
 87a01b9:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 87a01bf:	e8 6c 6d ff ff       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 87a01c4:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 87a01ca:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 87a01d1:	00 
 87a01d2:	c7 44 24 10 16 00 00 	movl   $0x16,0x10(%esp)
 87a01d9:	00 
 87a01da:	89 34 24             	mov    %esi,(%esp)
 87a01dd:	83 ea 05             	sub    $0x5,%edx
 87a01e0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 87a01e4:	83 c0 05             	add    $0x5,%eax
 87a01e7:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a01eb:	8d 45 a0             	lea    -0x60(%ebp),%eax
 87a01ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a01f2:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 87a01f8:	e8 d3 d3 ff ff       	call   879d5d0 <_ZN5yaSSL4hmacERNS_3SSLEPhPKhjNS_11ContentTypeEb>
 87a01fd:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 87a0203:	8b 95 54 ff ff ff    	mov    -0xac(%ebp),%edx
 87a0209:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a020d:	89 3c 24             	mov    %edi,(%esp)
 87a0210:	89 54 24 08          	mov    %edx,0x8(%esp)
 87a0214:	e8 b7 6d ff ff       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 87a0219:	89 34 24             	mov    %esi,(%esp)
 87a021c:	e8 4f de fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 87a0221:	89 04 24             	mov    %eax,(%esp)
 87a0224:	e8 27 e8 fa ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 87a0229:	83 78 08 01          	cmpl   $0x1,0x8(%eax)
 87a022d:	0f 84 0d 03 00 00    	je     87a0540 <_ZN5yaSSL12sendFinishedERNS_3SSLENS_13ConnectionEndENS_12BufferOutputE+0x640>
 87a0233:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 87a0237:	8d 4d b4             	lea    -0x4c(%ebp),%ecx
 87a023a:	89 8d 64 ff ff ff    	mov    %ecx,-0x9c(%ebp)
 87a0240:	89 0c 24             	mov    %ecx,(%esp)
 87a0243:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a0247:	e8 94 70 ff ff       	call   87972e0 <_ZN5yaSSL12input_bufferC1Ej>
 87a024c:	89 34 24             	mov    %esi,(%esp)
 87a024f:	e8 5c e0 fa ff       	call   874e2b0 <_ZN5yaSSL3SSL9useCryptoEv>
 87a0254:	89 04 24             	mov    %eax,(%esp)
 87a0257:	e8 54 e5 fa ff       	call   874e7b0 <_ZN5yaSSL6Crypto10use_cipherEv>
 87a025c:	89 c2                	mov    %eax,%edx
 87a025e:	8b 00                	mov    (%eax),%eax
 87a0260:	89 95 48 ff ff ff    	mov    %edx,-0xb8(%ebp)
 87a0266:	8b 00                	mov    (%eax),%eax
 87a0268:	89 3c 24             	mov    %edi,(%esp)
 87a026b:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
 87a0271:	e8 4a 6c ff ff       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 87a0276:	89 3c 24             	mov    %edi,(%esp)
 87a0279:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 87a027f:	e8 ac 6c ff ff       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 87a0284:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 87a028a:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 87a0290:	89 04 24             	mov    %eax,(%esp)
 87a0293:	e8 98 6a ff ff       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 87a0298:	8b 8d 60 ff ff ff    	mov    -0xa0(%ebp),%ecx
 87a029e:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 87a02a4:	83 e9 05             	sub    $0x5,%ecx
 87a02a7:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 87a02ab:	8b 8d 54 ff ff ff    	mov    -0xac(%ebp),%ecx
 87a02b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a02b5:	89 14 24             	mov    %edx,(%esp)
 87a02b8:	83 c1 05             	add    $0x5,%ecx
 87a02bb:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87a02bf:	ff 95 5c ff ff ff    	call   *-0xa4(%ebp)
 87a02c5:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 87a02cc:	00 
 87a02cd:	89 3c 24             	mov    %edi,(%esp)
 87a02d0:	e8 0b 6c ff ff       	call   8796ee0 <_ZN5yaSSL13output_buffer11set_currentEj>
 87a02d5:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 87a02db:	89 14 24             	mov    %edx,(%esp)
 87a02de:	e8 5d 6a ff ff       	call   8796d40 <_ZNK5yaSSL12input_buffer12get_capacityEv>
 87a02e3:	8b 8d 64 ff ff ff    	mov    -0x9c(%ebp),%ecx
 87a02e9:	89 0c 24             	mov    %ecx,(%esp)
 87a02ec:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 87a02f2:	e8 39 6a ff ff       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 87a02f7:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 87a02fd:	89 3c 24             	mov    %edi,(%esp)
 87a0300:	89 54 24 08          	mov    %edx,0x8(%esp)
 87a0304:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a0308:	e8 c3 6c ff ff       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 87a030d:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 87a0313:	89 04 24             	mov    %eax,(%esp)
 87a0316:	e8 45 70 ff ff       	call   8797360 <_ZN5yaSSL12input_bufferD1Ev>
 87a031b:	8b 95 58 ff ff ff    	mov    -0xa8(%ebp),%edx
 87a0321:	89 14 24             	mov    %edx,(%esp)
 87a0324:	e8 37 70 ff ff       	call   8797360 <_ZN5yaSSL12input_bufferD1Ev>
 87a0329:	8b 83 e0 fb ff ff    	mov    -0x420(%ebx),%eax
 87a032f:	89 34 24             	mov    %esi,(%esp)
 87a0332:	83 c0 08             	add    $0x8,%eax
 87a0335:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87a0338:	e8 33 dd fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 87a033d:	89 04 24             	mov    %eax,(%esp)
 87a0340:	e8 ab e9 fa ff       	call   874ecf0 <_ZNK5yaSSL8Security12get_resumingEv>
 87a0345:	84 c0                	test   %al,%al
 87a0347:	0f 84 0b 01 00 00    	je     87a0458 <_ZN5yaSSL12sendFinishedERNS_3SSLENS_13ConnectionEndENS_12BufferOutputE+0x558>
 87a034d:	8b 45 0c             	mov    0xc(%ebp),%eax
 87a0350:	85 c0                	test   %eax,%eax
 87a0352:	0f 84 48 02 00 00    	je     87a05a0 <_ZN5yaSSL12sendFinishedERNS_3SSLENS_13ConnectionEndENS_12BufferOutputE+0x6a0>
 87a0358:	89 34 24             	mov    %esi,(%esp)
 87a035b:	e8 60 df fa ff       	call   874e2c0 <_ZN5yaSSL3SSL11useSecurityEv>
 87a0360:	89 04 24             	mov    %eax,(%esp)
 87a0363:	e8 98 e9 fa ff       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 87a0368:	89 04 24             	mov    %eax,(%esp)
 87a036b:	e8 40 79 fa ff       	call   8747cb0 <_ZN5yaSSL10Connection11CleanMasterEv>
 87a0370:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87a0373:	85 c9                	test   %ecx,%ecx
 87a0375:	0f 85 95 00 00 00    	jne    87a0410 <_ZN5yaSSL12sendFinishedERNS_3SSLENS_13ConnectionEndENS_12BufferOutputE+0x510>
 87a037b:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87a037f:	31 ff                	xor    %edi,%edi
 87a0381:	89 34 24             	mov    %esi,(%esp)
 87a0384:	e8 87 22 fb ff       	call   8752610 <_ZN5yaSSL3SSL9addBufferEPNS_13output_bufferE>
 87a0389:	89 3c 24             	mov    %edi,(%esp)
 87a038c:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a0391:	e8 8a 04 fb ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 87a0396:	81 c4 cc 00 00 00    	add    $0xcc,%esp
 87a039c:	5b                   	pop    %ebx
 87a039d:	5e                   	pop    %esi
 87a039e:	5f                   	pop    %edi
 87a039f:	5d                   	pop    %ebp
 87a03a0:	c3                   	ret
 87a03a1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87a03a8:	89 3c 24             	mov    %edi,(%esp)
 87a03ab:	e8 10 6b ff ff       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 87a03b0:	89 3c 24             	mov    %edi,(%esp)
 87a03b3:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 87a03b9:	e8 72 6b ff ff       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 87a03be:	8b 8d 50 ff ff ff    	mov    -0xb0(%ebp),%ecx
 87a03c4:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 87a03ca:	2b 95 50 ff ff ff    	sub    -0xb0(%ebp),%edx
 87a03d0:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 87a03d7:	00 
 87a03d8:	c7 44 24 10 16 00 00 	movl   $0x16,0x10(%esp)
 87a03df:	00 
 87a03e0:	83 ea 05             	sub    $0x5,%edx
 87a03e3:	8d 44 08 05          	lea    0x5(%eax,%ecx,1),%eax
 87a03e7:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a03eb:	8d 45 a0             	lea    -0x60(%ebp),%eax
 87a03ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a03f2:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 87a03f8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 87a03fc:	89 34 24             	mov    %esi,(%esp)
 87a03ff:	e8 6c ef ff ff       	call   879f370 <_ZN5yaSSL8TLS_hmacERNS_3SSLEPhPKhjNS_11ContentTypeEb>
 87a0404:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 87a040a:	e9 f4 fd ff ff       	jmp    87a0203 <_ZN5yaSSL12sendFinishedERNS_3SSLENS_13ConnectionEndENS_12BufferOutputE+0x303>
 87a040f:	90                   	nop
 87a0410:	89 3c 24             	mov    %edi,(%esp)
 87a0413:	e8 a8 6a ff ff       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 87a0418:	89 3c 24             	mov    %edi,(%esp)
 87a041b:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 87a0421:	e8 0a 6b ff ff       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 87a0426:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 87a042c:	89 34 24             	mov    %esi,(%esp)
 87a042f:	89 54 24 08          	mov    %edx,0x8(%esp)
 87a0433:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a0437:	e8 64 f5 fa ff       	call   874f9a0 <_ZN5yaSSL3SSL4SendEPKhj>
 87a043c:	85 ff                	test   %edi,%edi
 87a043e:	0f 84 45 ff ff ff    	je     87a0389 <_ZN5yaSSL12sendFinishedERNS_3SSLENS_13ConnectionEndENS_12BufferOutputE+0x489>
 87a0444:	89 3c 24             	mov    %edi,(%esp)
 87a0447:	e8 e4 6e ff ff       	call   8797330 <_ZN5yaSSL13output_bufferD1Ev>
 87a044c:	e9 38 ff ff ff       	jmp    87a0389 <_ZN5yaSSL12sendFinishedERNS_3SSLENS_13ConnectionEndENS_12BufferOutputE+0x489>
 87a0451:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87a0458:	89 34 24             	mov    %esi,(%esp)
 87a045b:	e8 10 dc fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 87a0460:	89 04 24             	mov    %eax,(%esp)
 87a0463:	e8 98 e5 fa ff       	call   874ea00 <_ZNK5yaSSL8Security10GetContextEv>
 87a0468:	89 04 24             	mov    %eax,(%esp)
 87a046b:	e8 b0 e0 fa ff       	call   874e520 <_ZNK5yaSSL7SSL_CTX18GetSessionCacheOffEv>
 87a0470:	84 c0                	test   %al,%al
 87a0472:	0f 84 b0 01 00 00    	je     87a0628 <_ZN5yaSSL12sendFinishedERNS_3SSLENS_13ConnectionEndENS_12BufferOutputE+0x728>
 87a0478:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 87a047c:	0f 85 d6 fe ff ff    	jne    87a0358 <_ZN5yaSSL12sendFinishedERNS_3SSLENS_13ConnectionEndENS_12BufferOutputE+0x458>
 87a0482:	89 34 24             	mov    %esi,(%esp)
 87a0485:	e8 56 de fa ff       	call   874e2e0 <_ZN5yaSSL3SSL9useHashesEv>
 87a048a:	89 04 24             	mov    %eax,(%esp)
 87a048d:	e8 fe e3 fa ff       	call   874e890 <_ZN5yaSSL9sslHashes10use_verifyEv>
 87a0492:	8d 93 ac 08 9a ff    	lea    -0x65f754(%ebx),%edx
 87a0498:	89 54 24 08          	mov    %edx,0x8(%esp)
 87a049c:	89 34 24             	mov    %esi,(%esp)
 87a049f:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a04a3:	e8 98 e6 ff ff       	call   879eb40 <_ZN5yaSSL13buildFinishedERNS_3SSLERNS_8FinishedEPKh>
 87a04a8:	e9 ab fe ff ff       	jmp    87a0358 <_ZN5yaSSL12sendFinishedERNS_3SSLENS_13ConnectionEndENS_12BufferOutputE+0x458>
 87a04ad:	8d 76 00             	lea    0x0(%esi),%esi
 87a04b0:	89 34 24             	mov    %esi,(%esp)
 87a04b3:	e8 b8 db fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 87a04b8:	89 04 24             	mov    %eax,(%esp)
 87a04bb:	e8 90 e5 fa ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 87a04c0:	83 78 08 01          	cmpl   $0x1,0x8(%eax)
 87a04c4:	0f 85 1a fc ff ff    	jne    87a00e4 <_ZN5yaSSL12sendFinishedERNS_3SSLENS_13ConnectionEndENS_12BufferOutputE+0x1e4>
 87a04ca:	8b 8d 50 ff ff ff    	mov    -0xb0(%ebp),%ecx
 87a04d0:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 87a04d6:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87a04da:	89 04 24             	mov    %eax,(%esp)
 87a04dd:	e8 3e 6d ff ff       	call   8797220 <_ZN5yaSSL12input_buffer8allocateEj>
 87a04e2:	8b 95 58 ff ff ff    	mov    -0xa8(%ebp),%edx
 87a04e8:	89 14 24             	mov    %edx,(%esp)
 87a04eb:	e8 40 68 ff ff       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 87a04f0:	89 34 24             	mov    %esi,(%esp)
 87a04f3:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 87a04f9:	e8 62 db fa ff       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 87a04fe:	89 04 24             	mov    %eax,(%esp)
 87a0501:	e8 7a e2 fa ff       	call   874e780 <_ZNK5yaSSL6Crypto10get_randomEv>
 87a0506:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 87a050c:	8b 8d 50 ff ff ff    	mov    -0xb0(%ebp),%ecx
 87a0512:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a0516:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87a051a:	89 04 24             	mov    %eax,(%esp)
 87a051d:	e8 9e 8a ff ff       	call   8798fc0 <_ZNK5yaSSL10RandomPool4FillEPhj>
 87a0522:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 87a0528:	8b 95 58 ff ff ff    	mov    -0xa8(%ebp),%edx
 87a052e:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a0532:	89 14 24             	mov    %edx,(%esp)
 87a0535:	e8 16 68 ff ff       	call   8796d50 <_ZN5yaSSL12input_buffer8add_sizeEj>
 87a053a:	e9 a5 fb ff ff       	jmp    87a00e4 <_ZN5yaSSL12sendFinishedERNS_3SSLENS_13ConnectionEndENS_12BufferOutputE+0x1e4>
 87a053f:	90                   	nop
 87a0540:	0f b6 8d 4c ff ff ff 	movzbl -0xb4(%ebp),%ecx
 87a0547:	31 d2                	xor    %edx,%edx
 87a0549:	89 bd 64 ff ff ff    	mov    %edi,-0x9c(%ebp)
 87a054f:	8b bd 4c ff ff ff    	mov    -0xb4(%ebp),%edi
 87a0555:	89 b5 60 ff ff ff    	mov    %esi,-0xa0(%ebp)
 87a055b:	89 d6                	mov    %edx,%esi
 87a055d:	88 8d 5c ff ff ff    	mov    %cl,-0xa4(%ebp)
 87a0563:	90                   	nop
 87a0564:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a0568:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 87a056e:	83 c6 01             	add    $0x1,%esi
 87a0571:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 87a0578:	fe 
 87a0579:	89 04 24             	mov    %eax,(%esp)
 87a057c:	e8 bf 69 ff ff       	call   8796f40 <_ZN5yaSSL13output_bufferixEj>
 87a0581:	0f b6 95 5c ff ff ff 	movzbl -0xa4(%ebp),%edx
 87a0588:	39 f7                	cmp    %esi,%edi
 87a058a:	88 10                	mov    %dl,(%eax)
 87a058c:	73 da                	jae    87a0568 <_ZN5yaSSL12sendFinishedERNS_3SSLENS_13ConnectionEndENS_12BufferOutputE+0x668>
 87a058e:	8b bd 64 ff ff ff    	mov    -0x9c(%ebp),%edi
 87a0594:	8b b5 60 ff ff ff    	mov    -0xa0(%ebp),%esi
 87a059a:	e9 94 fc ff ff       	jmp    87a0233 <_ZN5yaSSL12sendFinishedERNS_3SSLENS_13ConnectionEndENS_12BufferOutputE+0x333>
 87a059f:	90                   	nop
 87a05a0:	89 34 24             	mov    %esi,(%esp)
 87a05a3:	e8 38 dd fa ff       	call   874e2e0 <_ZN5yaSSL3SSL9useHashesEv>
 87a05a8:	89 04 24             	mov    %eax,(%esp)
 87a05ab:	e8 e0 e2 fa ff       	call   874e890 <_ZN5yaSSL9sslHashes10use_verifyEv>
 87a05b0:	8d 93 a8 08 9a ff    	lea    -0x65f758(%ebx),%edx
 87a05b6:	89 54 24 08          	mov    %edx,0x8(%esp)
 87a05ba:	89 34 24             	mov    %esi,(%esp)
 87a05bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a05c1:	e8 7a e5 ff ff       	call   879eb40 <_ZN5yaSSL13buildFinishedERNS_3SSLERNS_8FinishedEPKh>
 87a05c6:	e9 8d fd ff ff       	jmp    87a0358 <_ZN5yaSSL12sendFinishedERNS_3SSLENS_13ConnectionEndENS_12BufferOutputE+0x458>
 87a05cb:	90                   	nop
 87a05cc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a05d0:	89 34 24             	mov    %esi,(%esp)
 87a05d3:	e8 98 e3 fa ff       	call   874e970 <_ZNK5yaSSL3SSL9isTLSv1_1Ev>
 87a05d8:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
 87a05de:	03 95 50 ff ff ff    	add    -0xb0(%ebp),%edx
 87a05e4:	84 c0                	test   %al,%al
 87a05e6:	0f 44 95 60 ff ff ff 	cmove  -0xa0(%ebp),%edx
 87a05ed:	89 d0                	mov    %edx,%eax
 87a05ef:	89 95 60 ff ff ff    	mov    %edx,-0xa0(%ebp)
 87a05f5:	83 e8 04             	sub    $0x4,%eax
 87a05f8:	31 d2                	xor    %edx,%edx
 87a05fa:	f7 b5 50 ff ff ff    	divl   -0xb0(%ebp)
 87a0600:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 87a0606:	29 d0                	sub    %edx,%eax
 87a0608:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
 87a060e:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 87a0614:	8d 54 10 01          	lea    0x1(%eax,%edx,1),%edx
 87a0618:	89 95 60 ff ff ff    	mov    %edx,-0xa0(%ebp)
 87a061e:	e9 ec f9 ff ff       	jmp    87a000f <_ZN5yaSSL12sendFinishedERNS_3SSLENS_13ConnectionEndENS_12BufferOutputE+0x10f>
 87a0623:	90                   	nop
 87a0624:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a0628:	e8 73 0b fb ff       	call   87511a0 <_ZN5yaSSL11GetSessionsEv>
 87a062d:	89 74 24 04          	mov    %esi,0x4(%esp)
 87a0631:	89 04 24             	mov    %eax,(%esp)
 87a0634:	e8 a7 2b fb ff       	call   87531e0 <_ZN5yaSSL8Sessions3addERKNS_3SSLE>
 87a0639:	e9 3a fe ff ff       	jmp    87a0478 <_ZN5yaSSL12sendFinishedERNS_3SSLENS_13ConnectionEndENS_12BufferOutputE+0x578>
 87a063e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::sendFinished @ 0x879ff00

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::sendFinished(yaSSL::SSL&, yaSSL::ConnectionEnd, yaSSL::BufferOutput) */

void yaSSL::sendFinished(SSL *param_1,int param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  output_buffer *this;
  Crypto *pCVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  Security *pSVar9;
  uint uVar10;
  undefined4 uVar11;
  output_buffer *poVar12;
  uchar *puVar13;
  int iVar14;
  undefined4 *puVar15;
  Connection *this_00;
  int iVar16;
  SSL_CTX *this_01;
  RandomPool *this_02;
  undefined1 *puVar17;
  sslHashes *psVar18;
  Finished *pFVar19;
  Sessions *this_03;
  uint local_b8;
  uint local_a4;
  undefined4 *local_90 [11];
  uchar local_64 [20];
  input_buffer local_50 [16];
  input_buffer local_40 [16];
  undefined *local_30 [3];
  undefined4 local_24;
  ProtocolVersion local_20;
  undefined1 local_1f;
  ushort local_1e;
  undefined4 uStack_14;
  
  uStack_14 = 0x879ff0b;
  iVar4 = SSL::GetError(param_1);
  if (iVar4 == 0) {
    Finished::Finished((Finished *)local_90);
    puVar13 = "SRVR";
    if (param_2 == 1) {
      puVar13 = "CLNTSRVR";
    }
    pFVar19 = (Finished *)local_90;
    buildFinished(param_1,(Finished *)local_90,puVar13);
    this = operator_new(0xc,(uint)pFVar19 & 0xffffff00);
    output_buffer::output_buffer(this);
    pCVar5 = (Crypto *)SSL::getCrypto(param_1);
    piVar6 = (int *)Crypto::get_digest(pCVar5);
    uVar7 = (**(code **)(*piVar6 + 0xc))(piVar6);
    cVar2 = SSL::isTLS(param_1);
    local_a4 = uVar7 + 0x15 + (-(uint)(cVar2 == '\0') & 0x18);
    pCVar5 = (Crypto *)SSL::getCrypto(param_1);
    piVar6 = (int *)Crypto::get_cipher(pCVar5);
    uVar8 = (**(code **)(*piVar6 + 0x10))(piVar6);
    pSVar9 = (Security *)SSL::getSecurity(param_1);
    iVar4 = Security::get_parms(pSVar9);
    local_b8 = 0;
    if (*(int *)(iVar4 + 8) == 1) {
      cVar2 = SSL::isTLSv1_1(param_1);
      uVar10 = local_a4 + uVar8;
      if (cVar2 == '\0') {
        uVar10 = local_a4;
      }
      local_b8 = uVar8 - (uVar10 - 4) % uVar8;
      local_a4 = local_b8 + 1 + uVar10;
    }
    ProtocolVersion::ProtocolVersion(&local_20,'\x03','\0');
    local_30[0] = PTR_vtable_0936c7c8 + 8;
    uVar10 = HandShakeBase::get_length((HandShakeBase *)local_90);
    uVar11 = (*(code *)*local_90[0])((Finished *)local_90);
    HandShakeHeader::set_type((HandShakeHeader *)local_30,uVar11);
    HandShakeHeader::set_length((HandShakeHeader *)local_30,uVar10);
    pSVar9 = (Security *)SSL::getSecurity(param_1);
    iVar4 = Security::get_connection(pSVar9);
    local_1f = *(undefined1 *)(iVar4 + 0x12f);
    local_20 = *(ProtocolVersion *)(iVar4 + 0x12e);
    local_24 = 0x16;
    local_1e = (short)local_a4 - 5;
    input_buffer::input_buffer(local_40);
    cVar2 = SSL::isTLSv1_1(param_1);
    if (cVar2 != '\0') {
      pSVar9 = (Security *)SSL::getSecurity(param_1);
      iVar4 = Security::get_parms(pSVar9);
      if (*(int *)(iVar4 + 8) == 1) {
        input_buffer::allocate(local_40,uVar8);
        puVar13 = (uchar *)input_buffer::get_buffer(local_40);
        pCVar5 = (Crypto *)SSL::getCrypto(param_1);
        this_02 = (RandomPool *)Crypto::get_random(pCVar5);
        RandomPool::Fill(this_02,puVar13,uVar8);
        input_buffer::add_size(local_40,uVar8);
      }
    }
    iVar4 = input_buffer::get_size(local_40);
    output_buffer::allocate(this,local_a4);
    poVar12 = (output_buffer *)operator<<(this,(RecordLayerHeader *)&local_24);
    uVar8 = input_buffer::get_size(local_40);
    puVar13 = (uchar *)input_buffer::get_buffer(local_40);
    output_buffer::write(poVar12,puVar13,uVar8);
    poVar12 = (output_buffer *)operator<<(poVar12,(HandShakeHeader *)local_30);
    operator<<(poVar12,(Finished *)local_90);
    bVar3 = (bool)SSL::isTLSv1_1(param_1);
    (anonymous_namespace)::hashHandShake(param_1,this,bVar3);
    cVar2 = SSL::isTLS(param_1);
    if (cVar2 == '\0') {
      iVar4 = output_buffer::get_size(this);
      iVar14 = output_buffer::get_buffer(this);
      hmac(param_1,local_64,iVar14 + 5,iVar4 + -5,0x16,0);
    }
    else {
      iVar14 = output_buffer::get_size(this);
      iVar16 = output_buffer::get_buffer(this);
      TLS_hmac(param_1,local_64,iVar16 + 5 + iVar4,(iVar14 - iVar4) + -5,0x16,0);
    }
    output_buffer::write(this,local_64,uVar7);
    pSVar9 = (Security *)SSL::getSecurity(param_1);
    iVar4 = Security::get_parms(pSVar9);
    if (*(int *)(iVar4 + 8) == 1) {
      uVar7 = 0;
      do {
        uVar7 = uVar7 + 1;
        puVar17 = (undefined1 *)output_buffer::operator[]((uint)this);
        *puVar17 = (undefined1)local_b8;
      } while (uVar7 <= local_b8);
    }
    input_buffer::input_buffer(local_50,(uint)local_1e);
    pCVar5 = (Crypto *)SSL::useCrypto(param_1);
    puVar15 = (undefined4 *)Crypto::use_cipher(pCVar5);
    pcVar1 = *(code **)*puVar15;
    iVar4 = output_buffer::get_size(this);
    iVar14 = output_buffer::get_buffer(this);
    uVar11 = input_buffer::get_buffer(local_50);
    (*pcVar1)(puVar15,uVar11,iVar14 + 5,iVar4 + -5);
    output_buffer::set_current(this,5);
    uVar7 = input_buffer::get_capacity(local_50);
    puVar13 = (uchar *)input_buffer::get_buffer(local_50);
    output_buffer::write(this,puVar13,uVar7);
    input_buffer::~input_buffer(local_50);
    input_buffer::~input_buffer(local_40);
    local_30[0] = PTR_vtable_0936c778 + 8;
    pSVar9 = (Security *)SSL::getSecurity(param_1);
    cVar2 = Security::get_resuming(pSVar9);
    if (cVar2 == '\0') {
      pSVar9 = (Security *)SSL::getSecurity(param_1);
      this_01 = (SSL_CTX *)Security::GetContext(pSVar9);
      cVar2 = SSL_CTX::GetSessionCacheOff(this_01);
      if (cVar2 == '\0') {
        this_03 = (Sessions *)GetSessions();
        Sessions::add(this_03,param_1);
      }
      if (param_2 == 1) {
        psVar18 = (sslHashes *)SSL::useHashes(param_1);
        pFVar19 = (Finished *)sslHashes::use_verify(psVar18);
        buildFinished(param_1,pFVar19,"SRVR");
      }
    }
    else if (param_2 == 0) {
      psVar18 = (sslHashes *)SSL::useHashes(param_1);
      pFVar19 = (Finished *)sslHashes::use_verify(psVar18);
      buildFinished(param_1,pFVar19,"CLNTSRVR");
    }
    pSVar9 = (Security *)SSL::useSecurity(param_1);
    this_00 = (Connection *)Security::use_connection(pSVar9);
    Connection::CleanMaster(this_00);
    if (param_3 == 0) {
      poVar12 = this;
      SSL::addBuffer(param_1,this);
      this = (output_buffer *)0x0;
    }
    else {
      uVar7 = output_buffer::get_size(this);
      poVar12 = (output_buffer *)output_buffer::get_buffer(this);
      SSL::Send(param_1,(uchar *)poVar12,uVar7);
      if (this != (output_buffer *)0x0) {
        output_buffer::~output_buffer(this);
      }
    }
    operator_delete(this,(uint)poVar12 & 0xffffff00);
    return;
  }
  return;
}

```

---

## sendServerHello

```asm
// === 087a0640 yaSSL::sendServerHello  [0x087a0640-0x87a08cf] ===
 87a0640:	55                   	push   %ebp
 87a0641:	89 e5                	mov    %esp,%ebp
 87a0643:	57                   	push   %edi
 87a0644:	56                   	push   %esi
 87a0645:	53                   	push   %ebx
 87a0646:	e8 ad 27 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a064b:	81 c3 4d c5 bc 00    	add    $0xbcc54d,%ebx
 87a0651:	81 ec ac 00 00 00    	sub    $0xac,%esp
 87a0657:	8b 75 08             	mov    0x8(%ebp),%esi
 87a065a:	89 34 24             	mov    %esi,(%esp)
 87a065d:	e8 0e da fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 87a0662:	89 04 24             	mov    %eax,(%esp)
 87a0665:	e8 86 e6 fa ff       	call   874ecf0 <_ZNK5yaSSL8Security12get_resumingEv>
 87a066a:	84 c0                	test   %al,%al
 87a066c:	74 2a                	je     87a0698 <_ZN5yaSSL15sendServerHelloERNS_3SSLENS_12BufferOutputE+0x58>
 87a066e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 87a0675:	00 
 87a0676:	89 34 24             	mov    %esi,(%esp)
 87a0679:	e8 c2 da fa ff       	call   874e140 <_ZN5yaSSL3SSL11verifyStateENS_11ServerStateE>
 87a067e:	89 34 24             	mov    %esi,(%esp)
 87a0681:	e8 2a da fa ff       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 87a0686:	85 c0                	test   %eax,%eax
 87a0688:	74 2a                	je     87a06b4 <_ZN5yaSSL15sendServerHelloERNS_3SSLENS_12BufferOutputE+0x74>
 87a068a:	81 c4 ac 00 00 00    	add    $0xac,%esp
 87a0690:	5b                   	pop    %ebx
 87a0691:	5e                   	pop    %esi
 87a0692:	5f                   	pop    %edi
 87a0693:	5d                   	pop    %ebp
 87a0694:	c3                   	ret
 87a0695:	8d 76 00             	lea    0x0(%esi),%esi
 87a0698:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 87a069f:	00 
 87a06a0:	89 34 24             	mov    %esi,(%esp)
 87a06a3:	e8 98 da fa ff       	call   874e140 <_ZN5yaSSL3SSL11verifyStateENS_11ServerStateE>
 87a06a8:	89 34 24             	mov    %esi,(%esp)
 87a06ab:	e8 00 da fa ff       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 87a06b0:	85 c0                	test   %eax,%eax
 87a06b2:	75 d6                	jne    87a068a <_ZN5yaSSL15sendServerHelloERNS_3SSLENS_12BufferOutputE+0x4a>
 87a06b4:	89 34 24             	mov    %esi,(%esp)
 87a06b7:	e8 b4 d9 fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 87a06bc:	89 04 24             	mov    %eax,(%esp)
 87a06bf:	e8 9c e2 fa ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 87a06c4:	0f b6 b8 2d 01 00 00 	movzbl 0x12d(%eax),%edi
 87a06cb:	89 34 24             	mov    %esi,(%esp)
 87a06ce:	e8 9d d9 fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 87a06d3:	89 04 24             	mov    %eax,(%esp)
 87a06d6:	e8 85 e2 fa ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 87a06db:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87a06df:	0f b7 80 2e 01 00 00 	movzwl 0x12e(%eax),%eax
 87a06e6:	66 89 44 24 04       	mov    %ax,0x4(%esp)
 87a06eb:	8d 45 80             	lea    -0x80(%ebp),%eax
 87a06ee:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 87a06f4:	89 04 24             	mov    %eax,(%esp)
 87a06f7:	e8 e4 73 fa ff       	call   8747ae0 <_ZN5yaSSL11ServerHelloC1ENS_15ProtocolVersionEb>
 87a06fc:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 87a06ff:	8d 55 e0             	lea    -0x20(%ebp),%edx
 87a0702:	89 04 24             	mov    %eax,(%esp)
 87a0705:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87a070c:	00 
 87a070d:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 87a0714:	00 
 87a0715:	89 95 64 ff ff ff    	mov    %edx,-0x9c(%ebp)
 87a071b:	e8 30 62 fa ff       	call   8746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>
 87a0720:	8b 83 30 fc ff ff    	mov    -0x3d0(%ebx),%eax
 87a0726:	83 c0 08             	add    $0x8,%eax
 87a0729:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87a072c:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a0731:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 87a0738:	e8 63 05 fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87a073d:	89 c7                	mov    %eax,%edi
 87a073f:	89 04 24             	mov    %eax,(%esp)
 87a0742:	e8 59 67 ff ff       	call   8796ea0 <_ZN5yaSSL13output_bufferC1Ev>
 87a0747:	8b 8d 74 ff ff ff    	mov    -0x8c(%ebp),%ecx
 87a074d:	89 34 24             	mov    %esi,(%esp)
 87a0750:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87a0754:	e8 57 d5 ff ff       	call   879dcb0 <_ZN5yaSSL16buildServerHelloERNS_3SSLERNS_11ServerHelloE>
 87a0759:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 87a075f:	89 04 24             	mov    %eax,(%esp)
 87a0762:	e8 19 67 fa ff       	call   8746e80 <_ZNK5yaSSL11ServerHello10get_randomEv>
 87a0767:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87a076e:	00 
 87a076f:	89 34 24             	mov    %esi,(%esp)
 87a0772:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a0776:	e8 55 ec fa ff       	call   874f3d0 <_ZN5yaSSL3SSL10set_randomEPKhNS_13ConnectionEndE>
 87a077b:	8b 95 74 ff ff ff    	mov    -0x8c(%ebp),%edx
 87a0781:	89 14 24             	mov    %edx,(%esp)
 87a0784:	e8 17 63 fa ff       	call   8746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>
 87a0789:	8b 8d 74 ff ff ff    	mov    -0x8c(%ebp),%ecx
 87a078f:	89 0c 24             	mov    %ecx,(%esp)
 87a0792:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 87a0798:	8b 45 80             	mov    -0x80(%ebp),%eax
 87a079b:	ff 10                	call   *(%eax)
 87a079d:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 87a07a0:	89 14 24             	mov    %edx,(%esp)
 87a07a3:	89 95 6c ff ff ff    	mov    %edx,-0x94(%ebp)
 87a07a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a07ad:	e8 de 62 fa ff       	call   8746a90 <_ZN5yaSSL15HandShakeHeader8set_typeENS_13HandShakeTypeE>
 87a07b2:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 87a07b8:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 87a07be:	89 14 24             	mov    %edx,(%esp)
 87a07c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a07c5:	e8 86 91 fa ff       	call   8749950 <_ZN5yaSSL15HandShakeHeader10set_lengthEj>
 87a07ca:	89 34 24             	mov    %esi,(%esp)
 87a07cd:	e8 9e d8 fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 87a07d2:	89 04 24             	mov    %eax,(%esp)
 87a07d5:	e8 86 e1 fa ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 87a07da:	0f b6 88 2f 01 00 00 	movzbl 0x12f(%eax),%ecx
 87a07e1:	0f b6 80 2e 01 00 00 	movzbl 0x12e(%eax),%eax
 87a07e8:	c7 45 e0 16 00 00 00 	movl   $0x16,-0x20(%ebp)
 87a07ef:	89 3c 24             	mov    %edi,(%esp)
 87a07f2:	88 4d e5             	mov    %cl,-0x1b(%ebp)
 87a07f5:	88 45 e4             	mov    %al,-0x1c(%ebp)
 87a07f8:	0f b7 85 70 ff ff ff 	movzwl -0x90(%ebp),%eax
 87a07ff:	83 c0 04             	add    $0x4,%eax
 87a0802:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 87a0806:	0f b7 c0             	movzwl %ax,%eax
 87a0809:	83 c0 05             	add    $0x5,%eax
 87a080c:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a0810:	e8 0b 69 ff ff       	call   8797120 <_ZN5yaSSL13output_buffer8allocateEj>
 87a0815:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 87a081b:	89 3c 24             	mov    %edi,(%esp)
 87a081e:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a0822:	e8 39 89 fa ff       	call   8749160 <_ZN5yaSSLlsERNS_13output_bufferERKNS_17RecordLayerHeaderE>
 87a0827:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 87a082d:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a0831:	89 04 24             	mov    %eax,(%esp)
 87a0834:	e8 97 88 fa ff       	call   87490d0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_15HandShakeHeaderE>
 87a0839:	8b 95 74 ff ff ff    	mov    -0x8c(%ebp),%edx
 87a083f:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a0843:	89 04 24             	mov    %eax,(%esp)
 87a0846:	e8 a5 64 fa ff       	call   8746cf0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_13HandShakeBaseE>
 87a084b:	89 fa                	mov    %edi,%edx
 87a084d:	89 f0                	mov    %esi,%eax
 87a084f:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 87a0856:	e8 f5 c4 ff ff       	call   879cd50 <_ZN5yaSSL12_GLOBAL__N_113hashHandShakeERNS_3SSLERKNS_13output_bufferEb>
 87a085b:	8b 55 0c             	mov    0xc(%ebp),%edx
 87a085e:	85 d2                	test   %edx,%edx
 87a0860:	74 56                	je     87a08b8 <_ZN5yaSSL15sendServerHelloERNS_3SSLENS_12BufferOutputE+0x278>
 87a0862:	89 3c 24             	mov    %edi,(%esp)
 87a0865:	e8 56 66 ff ff       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 87a086a:	89 3c 24             	mov    %edi,(%esp)
 87a086d:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 87a0873:	e8 b8 66 ff ff       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 87a0878:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 87a087e:	89 34 24             	mov    %esi,(%esp)
 87a0881:	89 54 24 08          	mov    %edx,0x8(%esp)
 87a0885:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a0889:	e8 12 f1 fa ff       	call   874f9a0 <_ZN5yaSSL3SSL4SendEPKhj>
 87a088e:	85 ff                	test   %edi,%edi
 87a0890:	74 08                	je     87a089a <_ZN5yaSSL15sendServerHelloERNS_3SSLENS_12BufferOutputE+0x25a>
 87a0892:	89 3c 24             	mov    %edi,(%esp)
 87a0895:	e8 96 6a ff ff       	call   8797330 <_ZN5yaSSL13output_bufferD1Ev>
 87a089a:	89 3c 24             	mov    %edi,(%esp)
 87a089d:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a08a2:	e8 79 ff fa ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 87a08a7:	81 c4 ac 00 00 00    	add    $0xac,%esp
 87a08ad:	5b                   	pop    %ebx
 87a08ae:	5e                   	pop    %esi
 87a08af:	5f                   	pop    %edi
 87a08b0:	5d                   	pop    %ebp
 87a08b1:	c3                   	ret
 87a08b2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87a08b8:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87a08bc:	31 ff                	xor    %edi,%edi
 87a08be:	89 34 24             	mov    %esi,(%esp)
 87a08c1:	e8 4a 1d fb ff       	call   8752610 <_ZN5yaSSL3SSL9addBufferEPNS_13output_bufferE>
 87a08c6:	eb d2                	jmp    87a089a <_ZN5yaSSL15sendServerHelloERNS_3SSLENS_12BufferOutputE+0x25a>
 87a08c8:	90                   	nop
 87a08c9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::sendServerHello @ 0x87a0640

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::sendServerHello(yaSSL::SSL&, yaSSL::BufferOutput) */

void yaSSL::sendServerHello(SSL *param_1,int param_2)

{
  undefined1 uVar1;
  char cVar2;
  Security *pSVar3;
  int iVar4;
  output_buffer *this;
  undefined4 uVar5;
  uint uVar6;
  output_buffer *poVar7;
  output_buffer *poVar8;
  undefined2 uVar9;
  short local_94;
  undefined4 *local_84 [21];
  undefined *local_30 [3];
  undefined4 local_24;
  ProtocolVersion local_20;
  undefined1 local_1f;
  ushort local_1e;
  undefined4 uStack_14;
  
  uStack_14 = 0x87a064b;
  pSVar3 = (Security *)SSL::getSecurity(param_1);
  cVar2 = Security::get_resuming(pSVar3);
  if (cVar2 == '\0') {
    uVar9 = 0;
    SSL::verifyState(param_1,1);
    iVar4 = SSL::GetError(param_1);
  }
  else {
    uVar9 = 0;
    SSL::verifyState(param_1,2);
    iVar4 = SSL::GetError(param_1);
  }
  if (iVar4 != 0) {
    return;
  }
  pSVar3 = (Security *)SSL::getSecurity(param_1);
  iVar4 = Security::get_connection(pSVar3);
  uVar1 = *(undefined1 *)(iVar4 + 0x12d);
  pSVar3 = (Security *)SSL::getSecurity(param_1);
  iVar4 = Security::get_connection(pSVar3);
  ServerHello::ServerHello
            ((ServerHello *)local_84,CONCAT22(uVar9,*(undefined2 *)(iVar4 + 0x12e)),uVar1);
  uVar6 = 0;
  ProtocolVersion::ProtocolVersion(&local_20,'\x03','\0');
  local_30[0] = PTR_vtable_0936c7c8 + 8;
  this = operator_new(0xc,uVar6 & 0xffffff00);
  output_buffer::output_buffer(this);
  buildServerHello(param_1,(ServerHello *)local_84);
  uVar5 = ServerHello::get_random((ServerHello *)local_84);
  SSL::set_random(param_1,uVar5,0);
  uVar6 = HandShakeBase::get_length((HandShakeBase *)local_84);
  uVar5 = (*(code *)*local_84[0])((ServerHello *)local_84);
  HandShakeHeader::set_type((HandShakeHeader *)local_30,uVar5);
  HandShakeHeader::set_length((HandShakeHeader *)local_30,uVar6);
  pSVar3 = (Security *)SSL::getSecurity(param_1);
  iVar4 = Security::get_connection(pSVar3);
  local_1f = *(undefined1 *)(iVar4 + 0x12f);
  local_20 = *(ProtocolVersion *)(iVar4 + 0x12e);
  local_24 = 0x16;
  local_94 = (short)uVar6;
  local_1e = local_94 + 4;
  output_buffer::allocate(this,local_1e + 5);
  poVar7 = (output_buffer *)operator<<(this,(RecordLayerHeader *)&local_24);
  poVar7 = (output_buffer *)operator<<(poVar7,(HandShakeHeader *)local_30);
  operator<<(poVar7,(HandShakeBase *)local_84);
  (anonymous_namespace)::hashHandShake(param_1,this,false);
  if (param_2 == 0) {
    poVar7 = (output_buffer *)0x0;
    SSL::addBuffer(param_1,this);
    poVar8 = this;
  }
  else {
    uVar6 = output_buffer::get_size(this);
    poVar8 = (output_buffer *)output_buffer::get_buffer(this);
    SSL::Send(param_1,(uchar *)poVar8,uVar6);
    poVar7 = this;
    if (this != (output_buffer *)0x0) {
      output_buffer::~output_buffer(this);
    }
  }
  operator_delete(poVar7,(uint)poVar8 & 0xffffff00);
  return;
}

```

---

## sendServerHelloDone

```asm
// === 0879fd40 yaSSL::sendServerHelloDone  [0x0879fd40-0x879feff] ===
 879fd40:	55                   	push   %ebp
 879fd41:	89 e5                	mov    %esp,%ebp
 879fd43:	83 ec 68             	sub    $0x68,%esp
 879fd46:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 879fd49:	e8 aa 30 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879fd4e:	81 c3 4a ce bc 00    	add    $0xbcce4a,%ebx
 879fd54:	89 7d fc             	mov    %edi,-0x4(%ebp)
 879fd57:	8b 7d 08             	mov    0x8(%ebp),%edi
 879fd5a:	89 75 f8             	mov    %esi,-0x8(%ebp)
 879fd5d:	89 3c 24             	mov    %edi,(%esp)
 879fd60:	e8 4b e3 fa ff       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 879fd65:	85 c0                	test   %eax,%eax
 879fd67:	74 0f                	je     879fd78 <_ZN5yaSSL19sendServerHelloDoneERNS_3SSLENS_12BufferOutputE+0x38>
 879fd69:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 879fd6c:	8b 75 f8             	mov    -0x8(%ebp),%esi
 879fd6f:	8b 7d fc             	mov    -0x4(%ebp),%edi
 879fd72:	89 ec                	mov    %ebp,%esp
 879fd74:	5d                   	pop    %ebp
 879fd75:	c3                   	ret
 879fd76:	66 90                	xchg   %ax,%ax
 879fd78:	8d 45 e0             	lea    -0x20(%ebp),%eax
 879fd7b:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 879fd7e:	89 04 24             	mov    %eax,(%esp)
 879fd81:	e8 0a 71 fa ff       	call   8746e90 <_ZN5yaSSL15ServerHelloDoneC1Ev>
 879fd86:	8d 45 dc             	lea    -0x24(%ebp),%eax
 879fd89:	8d 55 d8             	lea    -0x28(%ebp),%edx
 879fd8c:	89 04 24             	mov    %eax,(%esp)
 879fd8f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 879fd96:	00 
 879fd97:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 879fd9e:	00 
 879fd9f:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 879fda2:	e8 a9 6b fa ff       	call   8746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>
 879fda7:	8b 83 30 fc ff ff    	mov    -0x3d0(%ebx),%eax
 879fdad:	83 c0 08             	add    $0x8,%eax
 879fdb0:	89 45 cc             	mov    %eax,-0x34(%ebp)
 879fdb3:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879fdb8:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 879fdbf:	e8 dc 0e fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 879fdc4:	89 c6                	mov    %eax,%esi
 879fdc6:	89 04 24             	mov    %eax,(%esp)
 879fdc9:	e8 d2 70 ff ff       	call   8796ea0 <_ZN5yaSSL13output_bufferC1Ev>
 879fdce:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 879fdd1:	89 0c 24             	mov    %ecx,(%esp)
 879fdd4:	e8 c7 6c fa ff       	call   8746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>
 879fdd9:	89 45 c0             	mov    %eax,-0x40(%ebp)
 879fddc:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 879fddf:	89 04 24             	mov    %eax,(%esp)
 879fde2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 879fde5:	ff 10                	call   *(%eax)
 879fde7:	8d 55 cc             	lea    -0x34(%ebp),%edx
 879fdea:	89 14 24             	mov    %edx,(%esp)
 879fded:	89 55 bc             	mov    %edx,-0x44(%ebp)
 879fdf0:	89 44 24 04          	mov    %eax,0x4(%esp)
 879fdf4:	e8 97 6c fa ff       	call   8746a90 <_ZN5yaSSL15HandShakeHeader8set_typeENS_13HandShakeTypeE>
 879fdf9:	8b 55 bc             	mov    -0x44(%ebp),%edx
 879fdfc:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 879fdff:	89 14 24             	mov    %edx,(%esp)
 879fe02:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 879fe06:	e8 45 9b fa ff       	call   8749950 <_ZN5yaSSL15HandShakeHeader10set_lengthEj>
 879fe0b:	89 3c 24             	mov    %edi,(%esp)
 879fe0e:	e8 5d e2 fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 879fe13:	89 04 24             	mov    %eax,(%esp)
 879fe16:	e8 45 eb fa ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 879fe1b:	0f b6 88 2f 01 00 00 	movzbl 0x12f(%eax),%ecx
 879fe22:	0f b6 80 2e 01 00 00 	movzbl 0x12e(%eax),%eax
 879fe29:	c7 45 d8 16 00 00 00 	movl   $0x16,-0x28(%ebp)
 879fe30:	89 34 24             	mov    %esi,(%esp)
 879fe33:	88 4d dd             	mov    %cl,-0x23(%ebp)
 879fe36:	88 45 dc             	mov    %al,-0x24(%ebp)
 879fe39:	0f b7 45 c0          	movzwl -0x40(%ebp),%eax
 879fe3d:	83 c0 04             	add    $0x4,%eax
 879fe40:	66 89 45 de          	mov    %ax,-0x22(%ebp)
 879fe44:	0f b7 c0             	movzwl %ax,%eax
 879fe47:	83 c0 05             	add    $0x5,%eax
 879fe4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 879fe4e:	e8 cd 72 ff ff       	call   8797120 <_ZN5yaSSL13output_buffer8allocateEj>
 879fe53:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 879fe56:	89 34 24             	mov    %esi,(%esp)
 879fe59:	89 44 24 04          	mov    %eax,0x4(%esp)
 879fe5d:	e8 fe 92 fa ff       	call   8749160 <_ZN5yaSSLlsERNS_13output_bufferERKNS_17RecordLayerHeaderE>
 879fe62:	8b 55 bc             	mov    -0x44(%ebp),%edx
 879fe65:	89 54 24 04          	mov    %edx,0x4(%esp)
 879fe69:	89 04 24             	mov    %eax,(%esp)
 879fe6c:	e8 5f 92 fa ff       	call   87490d0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_15HandShakeHeaderE>
 879fe71:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 879fe74:	89 54 24 04          	mov    %edx,0x4(%esp)
 879fe78:	89 04 24             	mov    %eax,(%esp)
 879fe7b:	e8 70 6e fa ff       	call   8746cf0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_13HandShakeBaseE>
 879fe80:	89 f2                	mov    %esi,%edx
 879fe82:	89 f8                	mov    %edi,%eax
 879fe84:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 879fe8b:	e8 c0 ce ff ff       	call   879cd50 <_ZN5yaSSL12_GLOBAL__N_113hashHandShakeERNS_3SSLERKNS_13output_bufferEb>
 879fe90:	8b 55 0c             	mov    0xc(%ebp),%edx
 879fe93:	85 d2                	test   %edx,%edx
 879fe95:	74 51                	je     879fee8 <_ZN5yaSSL19sendServerHelloDoneERNS_3SSLENS_12BufferOutputE+0x1a8>
 879fe97:	89 34 24             	mov    %esi,(%esp)
 879fe9a:	e8 21 70 ff ff       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 879fe9f:	89 34 24             	mov    %esi,(%esp)
 879fea2:	89 45 bc             	mov    %eax,-0x44(%ebp)
 879fea5:	e8 86 70 ff ff       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 879feaa:	8b 55 bc             	mov    -0x44(%ebp),%edx
 879fead:	89 3c 24             	mov    %edi,(%esp)
 879feb0:	89 54 24 08          	mov    %edx,0x8(%esp)
 879feb4:	89 44 24 04          	mov    %eax,0x4(%esp)
 879feb8:	e8 e3 fa fa ff       	call   874f9a0 <_ZN5yaSSL3SSL4SendEPKhj>
 879febd:	85 f6                	test   %esi,%esi
 879febf:	74 08                	je     879fec9 <_ZN5yaSSL19sendServerHelloDoneERNS_3SSLENS_12BufferOutputE+0x189>
 879fec1:	89 34 24             	mov    %esi,(%esp)
 879fec4:	e8 67 74 ff ff       	call   8797330 <_ZN5yaSSL13output_bufferD1Ev>
 879fec9:	89 34 24             	mov    %esi,(%esp)
 879fecc:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879fed1:	e8 4a 09 fb ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 879fed6:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 879fed9:	8b 75 f8             	mov    -0x8(%ebp),%esi
 879fedc:	8b 7d fc             	mov    -0x4(%ebp),%edi
 879fedf:	89 ec                	mov    %ebp,%esp
 879fee1:	5d                   	pop    %ebp
 879fee2:	c3                   	ret
 879fee3:	90                   	nop
 879fee4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 879fee8:	89 74 24 04          	mov    %esi,0x4(%esp)
 879feec:	31 f6                	xor    %esi,%esi
 879feee:	89 3c 24             	mov    %edi,(%esp)
 879fef1:	e8 1a 27 fb ff       	call   8752610 <_ZN5yaSSL3SSL9addBufferEPNS_13output_bufferE>
 879fef6:	eb d1                	jmp    879fec9 <_ZN5yaSSL19sendServerHelloDoneERNS_3SSLENS_12BufferOutputE+0x189>
 879fef8:	90                   	nop
 879fef9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::sendServerHelloDone @ 0x879fd40

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::sendServerHelloDone(yaSSL::SSL&, yaSSL::BufferOutput) */

void yaSSL::sendServerHelloDone(SSL *param_1,int param_2)

{
  int iVar1;
  output_buffer *this;
  uint uVar2;
  undefined4 uVar3;
  Security *this_00;
  output_buffer *poVar4;
  output_buffer *poVar5;
  short local_44;
  undefined *local_38 [3];
  undefined4 local_2c;
  ProtocolVersion local_28;
  undefined1 local_27;
  ushort local_26;
  undefined4 *local_24 [5];
  
  iVar1 = SSL::GetError(param_1);
  if (iVar1 != 0) {
    return;
  }
  ServerHelloDone::ServerHelloDone((ServerHelloDone *)local_24);
  uVar2 = 0;
  ProtocolVersion::ProtocolVersion(&local_28,'\x03','\0');
  local_38[0] = PTR_vtable_0936c7c8 + 8;
  this = operator_new(0xc,uVar2 & 0xffffff00);
  output_buffer::output_buffer(this);
  uVar2 = HandShakeBase::get_length((HandShakeBase *)local_24);
  uVar3 = (*(code *)*local_24[0])((ServerHelloDone *)local_24);
  HandShakeHeader::set_type((HandShakeHeader *)local_38,uVar3);
  HandShakeHeader::set_length((HandShakeHeader *)local_38,uVar2);
  this_00 = (Security *)SSL::getSecurity(param_1);
  iVar1 = Security::get_connection(this_00);
  local_27 = *(undefined1 *)(iVar1 + 0x12f);
  local_28 = *(ProtocolVersion *)(iVar1 + 0x12e);
  local_2c = 0x16;
  local_44 = (short)uVar2;
  local_26 = local_44 + 4;
  output_buffer::allocate(this,local_26 + 5);
  poVar4 = (output_buffer *)operator<<(this,(RecordLayerHeader *)&local_2c);
  poVar4 = (output_buffer *)operator<<(poVar4,(HandShakeHeader *)local_38);
  operator<<(poVar4,(HandShakeBase *)local_24);
  (anonymous_namespace)::hashHandShake(param_1,this,false);
  if (param_2 == 0) {
    poVar4 = (output_buffer *)0x0;
    SSL::addBuffer(param_1,this);
    poVar5 = this;
  }
  else {
    uVar2 = output_buffer::get_size(this);
    poVar5 = (output_buffer *)output_buffer::get_buffer(this);
    SSL::Send(param_1,(uchar *)poVar5,uVar2);
    poVar4 = this;
    if (this != (output_buffer *)0x0) {
      output_buffer::~output_buffer(this);
    }
  }
  operator_delete(poVar4,(uint)poVar5 & 0xffffff00);
  return;
}

```

---

## sendServerKeyExchange

```asm
// === 087a0af0 yaSSL::sendServerKeyExchange  [0x087a0af0-0x87a0cbf] ===
 87a0af0:	55                   	push   %ebp
 87a0af1:	89 e5                	mov    %esp,%ebp
 87a0af3:	57                   	push   %edi
 87a0af4:	56                   	push   %esi
 87a0af5:	53                   	push   %ebx
 87a0af6:	e8 fd 22 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a0afb:	81 c3 9d c0 bc 00    	add    $0xbcc09d,%ebx
 87a0b01:	83 ec 5c             	sub    $0x5c,%esp
 87a0b04:	8b 7d 08             	mov    0x8(%ebp),%edi
 87a0b07:	89 3c 24             	mov    %edi,(%esp)
 87a0b0a:	e8 a1 d5 fa ff       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 87a0b0f:	85 c0                	test   %eax,%eax
 87a0b11:	74 0d                	je     87a0b20 <_ZN5yaSSL21sendServerKeyExchangeERNS_3SSLENS_12BufferOutputE+0x30>
 87a0b13:	83 c4 5c             	add    $0x5c,%esp
 87a0b16:	5b                   	pop    %ebx
 87a0b17:	5e                   	pop    %esi
 87a0b18:	5f                   	pop    %edi
 87a0b19:	5d                   	pop    %ebp
 87a0b1a:	c3                   	ret
 87a0b1b:	90                   	nop
 87a0b1c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a0b20:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 87a0b23:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 87a0b26:	89 04 24             	mov    %eax,(%esp)
 87a0b29:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87a0b2d:	e8 7e aa fa ff       	call   874b5b0 <_ZN5yaSSL17ServerKeyExchangeC1ERNS_3SSLE>
 87a0b32:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 87a0b35:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87a0b39:	89 14 24             	mov    %edx,(%esp)
 87a0b3c:	e8 2f 64 fa ff       	call   8746f70 <_ZN5yaSSL17ServerKeyExchange5buildERNS_3SSLE>
 87a0b41:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 87a0b44:	8d 4d e0             	lea    -0x20(%ebp),%ecx
 87a0b47:	89 04 24             	mov    %eax,(%esp)
 87a0b4a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87a0b51:	00 
 87a0b52:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 87a0b59:	00 
 87a0b5a:	89 4d b4             	mov    %ecx,-0x4c(%ebp)
 87a0b5d:	e8 ee 5d fa ff       	call   8746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>
 87a0b62:	8b 83 30 fc ff ff    	mov    -0x3d0(%ebx),%eax
 87a0b68:	83 c0 08             	add    $0x8,%eax
 87a0b6b:	89 45 c8             	mov    %eax,-0x38(%ebp)
 87a0b6e:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a0b73:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 87a0b7a:	e8 21 01 fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87a0b7f:	89 c6                	mov    %eax,%esi
 87a0b81:	89 04 24             	mov    %eax,(%esp)
 87a0b84:	e8 17 63 ff ff       	call   8796ea0 <_ZN5yaSSL13output_bufferC1Ev>
 87a0b89:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 87a0b8c:	89 04 24             	mov    %eax,(%esp)
 87a0b8f:	e8 0c 5f fa ff       	call   8746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>
 87a0b94:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 87a0b97:	89 14 24             	mov    %edx,(%esp)
 87a0b9a:	89 45 c0             	mov    %eax,-0x40(%ebp)
 87a0b9d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 87a0ba0:	ff 10                	call   *(%eax)
 87a0ba2:	8d 55 c8             	lea    -0x38(%ebp),%edx
 87a0ba5:	89 14 24             	mov    %edx,(%esp)
 87a0ba8:	89 55 bc             	mov    %edx,-0x44(%ebp)
 87a0bab:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a0baf:	e8 dc 5e fa ff       	call   8746a90 <_ZN5yaSSL15HandShakeHeader8set_typeENS_13HandShakeTypeE>
 87a0bb4:	8b 55 bc             	mov    -0x44(%ebp),%edx
 87a0bb7:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 87a0bba:	89 14 24             	mov    %edx,(%esp)
 87a0bbd:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87a0bc1:	e8 8a 8d fa ff       	call   8749950 <_ZN5yaSSL15HandShakeHeader10set_lengthEj>
 87a0bc6:	89 3c 24             	mov    %edi,(%esp)
 87a0bc9:	e8 a2 d4 fa ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 87a0bce:	89 04 24             	mov    %eax,(%esp)
 87a0bd1:	e8 8a dd fa ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 87a0bd6:	0f b6 88 2f 01 00 00 	movzbl 0x12f(%eax),%ecx
 87a0bdd:	0f b6 80 2e 01 00 00 	movzbl 0x12e(%eax),%eax
 87a0be4:	c7 45 e0 16 00 00 00 	movl   $0x16,-0x20(%ebp)
 87a0beb:	89 34 24             	mov    %esi,(%esp)
 87a0bee:	88 4d e5             	mov    %cl,-0x1b(%ebp)
 87a0bf1:	88 45 e4             	mov    %al,-0x1c(%ebp)
 87a0bf4:	0f b7 45 c0          	movzwl -0x40(%ebp),%eax
 87a0bf8:	83 c0 04             	add    $0x4,%eax
 87a0bfb:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 87a0bff:	0f b7 c0             	movzwl %ax,%eax
 87a0c02:	83 c0 05             	add    $0x5,%eax
 87a0c05:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a0c09:	e8 12 65 ff ff       	call   8797120 <_ZN5yaSSL13output_buffer8allocateEj>
 87a0c0e:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 87a0c11:	89 34 24             	mov    %esi,(%esp)
 87a0c14:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a0c18:	e8 43 85 fa ff       	call   8749160 <_ZN5yaSSLlsERNS_13output_bufferERKNS_17RecordLayerHeaderE>
 87a0c1d:	8b 55 bc             	mov    -0x44(%ebp),%edx
 87a0c20:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a0c24:	89 04 24             	mov    %eax,(%esp)
 87a0c27:	e8 a4 84 fa ff       	call   87490d0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_15HandShakeHeaderE>
 87a0c2c:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 87a0c2f:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a0c33:	89 04 24             	mov    %eax,(%esp)
 87a0c36:	e8 b5 60 fa ff       	call   8746cf0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_13HandShakeBaseE>
 87a0c3b:	89 f2                	mov    %esi,%edx
 87a0c3d:	89 f8                	mov    %edi,%eax
 87a0c3f:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 87a0c46:	e8 05 c1 ff ff       	call   879cd50 <_ZN5yaSSL12_GLOBAL__N_113hashHandShakeERNS_3SSLERKNS_13output_bufferEb>
 87a0c4b:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 87a0c4e:	85 c9                	test   %ecx,%ecx
 87a0c50:	74 5e                	je     87a0cb0 <_ZN5yaSSL21sendServerKeyExchangeERNS_3SSLENS_12BufferOutputE+0x1c0>
 87a0c52:	89 34 24             	mov    %esi,(%esp)
 87a0c55:	e8 66 62 ff ff       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 87a0c5a:	89 34 24             	mov    %esi,(%esp)
 87a0c5d:	89 45 bc             	mov    %eax,-0x44(%ebp)
 87a0c60:	e8 cb 62 ff ff       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 87a0c65:	8b 55 bc             	mov    -0x44(%ebp),%edx
 87a0c68:	89 3c 24             	mov    %edi,(%esp)
 87a0c6b:	89 54 24 08          	mov    %edx,0x8(%esp)
 87a0c6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a0c73:	e8 28 ed fa ff       	call   874f9a0 <_ZN5yaSSL3SSL4SendEPKhj>
 87a0c78:	85 f6                	test   %esi,%esi
 87a0c7a:	74 08                	je     87a0c84 <_ZN5yaSSL21sendServerKeyExchangeERNS_3SSLENS_12BufferOutputE+0x194>
 87a0c7c:	89 34 24             	mov    %esi,(%esp)
 87a0c7f:	e8 ac 66 ff ff       	call   8797330 <_ZN5yaSSL13output_bufferD1Ev>
 87a0c84:	89 34 24             	mov    %esi,(%esp)
 87a0c87:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a0c8c:	e8 8f fb fa ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 87a0c91:	8b 83 e0 fb ff ff    	mov    -0x420(%ebx),%eax
 87a0c97:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 87a0c9a:	83 c0 08             	add    $0x8,%eax
 87a0c9d:	89 45 c8             	mov    %eax,-0x38(%ebp)
 87a0ca0:	89 0c 24             	mov    %ecx,(%esp)
 87a0ca3:	e8 e8 79 fa ff       	call   8748690 <_ZN5yaSSL17ServerKeyExchangeD1Ev>
 87a0ca8:	83 c4 5c             	add    $0x5c,%esp
 87a0cab:	5b                   	pop    %ebx
 87a0cac:	5e                   	pop    %esi
 87a0cad:	5f                   	pop    %edi
 87a0cae:	5d                   	pop    %ebp
 87a0caf:	c3                   	ret
 87a0cb0:	89 74 24 04          	mov    %esi,0x4(%esp)
 87a0cb4:	31 f6                	xor    %esi,%esi
 87a0cb6:	89 3c 24             	mov    %edi,(%esp)
 87a0cb9:	e8 52 19 fb ff       	call   8752610 <_ZN5yaSSL3SSL9addBufferEPNS_13output_bufferE>
 87a0cbe:	eb c4                	jmp    87a0c84 <_ZN5yaSSL21sendServerKeyExchangeERNS_3SSLENS_12BufferOutputE+0x194>

```

```c
// yaSSL::sendServerKeyExchange @ 0x87a0af0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::sendServerKeyExchange(yaSSL::SSL&, yaSSL::BufferOutput) */

void yaSSL::sendServerKeyExchange(SSL *param_1,int param_2)

{
  int iVar1;
  output_buffer *this;
  uint uVar2;
  undefined4 uVar3;
  Security *this_00;
  output_buffer *poVar4;
  output_buffer *poVar5;
  short local_44;
  undefined *local_3c [3];
  undefined4 *local_30 [3];
  undefined4 local_24;
  ProtocolVersion local_20;
  undefined1 local_1f;
  ushort local_1e;
  undefined4 uStack_14;
  
  uStack_14 = 0x87a0afb;
  iVar1 = SSL::GetError(param_1);
  if (iVar1 != 0) {
    return;
  }
  ServerKeyExchange::ServerKeyExchange((ServerKeyExchange *)local_30,param_1);
  ServerKeyExchange::build((ServerKeyExchange *)local_30,param_1);
  uVar2 = 0;
  ProtocolVersion::ProtocolVersion(&local_20,'\x03','\0');
  local_3c[0] = PTR_vtable_0936c7c8 + 8;
  this = operator_new(0xc,uVar2 & 0xffffff00);
  output_buffer::output_buffer(this);
  uVar2 = HandShakeBase::get_length((HandShakeBase *)local_30);
  uVar3 = (*(code *)*local_30[0])((ServerKeyExchange *)local_30);
  HandShakeHeader::set_type((HandShakeHeader *)local_3c,uVar3);
  HandShakeHeader::set_length((HandShakeHeader *)local_3c,uVar2);
  this_00 = (Security *)SSL::getSecurity(param_1);
  iVar1 = Security::get_connection(this_00);
  local_1f = *(undefined1 *)(iVar1 + 0x12f);
  local_20 = *(ProtocolVersion *)(iVar1 + 0x12e);
  local_24 = 0x16;
  local_44 = (short)uVar2;
  local_1e = local_44 + 4;
  output_buffer::allocate(this,local_1e + 5);
  poVar4 = (output_buffer *)operator<<(this,(RecordLayerHeader *)&local_24);
  poVar4 = (output_buffer *)operator<<(poVar4,(HandShakeHeader *)local_3c);
  operator<<(poVar4,(HandShakeBase *)local_30);
  (anonymous_namespace)::hashHandShake(param_1,this,false);
  if (param_2 == 0) {
    poVar4 = (output_buffer *)0x0;
    SSL::addBuffer(param_1,this);
    poVar5 = this;
  }
  else {
    uVar2 = output_buffer::get_size(this);
    poVar5 = (output_buffer *)output_buffer::get_buffer(this);
    SSL::Send(param_1,(uchar *)poVar5,uVar2);
    poVar4 = this;
    if (this != (output_buffer *)0x0) {
      output_buffer::~output_buffer(this);
    }
  }
  operator_delete(poVar4,(uint)poVar5 & 0xffffff00);
  local_3c[0] = PTR_vtable_0936c778 + 8;
  ServerKeyExchange::~ServerKeyExchange((ServerKeyExchange *)local_30);
  return;
}

```

---

## timer

```asm
// === 087a1780 yaSSL::timer  [0x087a1780-0x87a17bf] ===
 87a1780:	55                   	push   %ebp
 87a1781:	89 e5                	mov    %esp,%ebp
 87a1783:	53                   	push   %ebx
 87a1784:	e8 6f 16 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a1789:	81 c3 0f b4 bc 00    	add    $0xbcb40f,%ebx
 87a178f:	83 ec 24             	sub    $0x24,%esp
 87a1792:	8d 45 f0             	lea    -0x10(%ebp),%eax
 87a1795:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a179c:	00 
 87a179d:	89 04 24             	mov    %eax,(%esp)
 87a17a0:	e8 4b cb 8d ff       	call   807e2f0 <gettimeofday@plt>
 87a17a5:	db 45 f0             	fildl  -0x10(%ebp)
 87a17a8:	db 45 f4             	fildl  -0xc(%ebp)
 87a17ab:	d8 b3 58 09 9a ff    	fdivs  -0x65f6a8(%ebx)
 87a17b1:	83 c4 24             	add    $0x24,%esp
 87a17b4:	5b                   	pop    %ebx
 87a17b5:	5d                   	pop    %ebp
 87a17b6:	de c1                	faddp  %st,%st(1)
 87a17b8:	c3                   	ret
 87a17b9:	90                   	nop
 87a17ba:	90                   	nop
 87a17bb:	90                   	nop
 87a17bc:	90                   	nop
 87a17bd:	90                   	nop
 87a17be:	90                   	nop
 87a17bf:	90                   	nop

```

```c
// yaSSL::timer @ 0x87a1780

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::timer() */

longdouble yaSSL::timer(void)

{
  timeval local_14;
  undefined4 uStack_c;
  
  uStack_c = 0x87a1789;
  gettimeofday(&local_14,(__timezone_ptr_t)0x0);
  return (longdouble)local_14.tv_usec / (longdouble)DAT_08d0d4f0 + (longdouble)local_14.tv_sec;
}

```

