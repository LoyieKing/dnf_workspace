# yaSSL__SSL_SESSION

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## CopyX509

```asm
// === 08752720 yaSSL::SSL_SESSION::CopyX509  [0x08752720-0x875281f] ===
 8752720:	55                   	push   %ebp
 8752721:	89 e5                	mov    %esp,%ebp
 8752723:	83 ec 78             	sub    $0x78,%esp
 8752726:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8752729:	8b 75 0c             	mov    0xc(%ebp),%esi
 875272c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 875272f:	e8 c4 06 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8752734:	81 c3 64 a4 c1 00    	add    $0xc1a464,%ebx
 875273a:	89 7d fc             	mov    %edi,-0x4(%ebp)
 875273d:	85 f6                	test   %esi,%esi
 875273f:	0f 84 bf 00 00 00    	je     8752804 <_ZN5yaSSL11SSL_SESSION8CopyX509EPNS_4X509E+0xe4>
 8752745:	89 34 24             	mov    %esi,(%esp)
 8752748:	e8 b3 c8 ff ff       	call   874f000 <_ZN5yaSSL4X5099GetIssuerEv>
 875274d:	89 34 24             	mov    %esi,(%esp)
 8752750:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8752753:	e8 b8 c8 ff ff       	call   874f010 <_ZN5yaSSL4X50910GetSubjectEv>
 8752758:	89 34 24             	mov    %esi,(%esp)
 875275b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 875275e:	e8 fd c8 ff ff       	call   874f060 <_ZN5yaSSL4X5099GetBeforeEv>
 8752763:	89 34 24             	mov    %esi,(%esp)
 8752766:	89 c7                	mov    %eax,%edi
 8752768:	e8 c3 c8 ff ff       	call   874f030 <_ZN5yaSSL4X5098GetAfterEv>
 875276d:	89 c6                	mov    %eax,%esi
 875276f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8752772:	89 04 24             	mov    %eax,(%esp)
 8752775:	e8 66 c8 ff ff       	call   874efe0 <_ZNK5yaSSL9X509_NAME7GetNameEv>
 875277a:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875277d:	89 14 24             	mov    %edx,(%esp)
 8752780:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8752783:	e8 68 c8 ff ff       	call   874eff0 <_ZNK5yaSSL9X509_NAME9GetLengthEv>
 8752788:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 875278b:	89 0c 24             	mov    %ecx,(%esp)
 875278e:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8752791:	e8 4a c8 ff ff       	call   874efe0 <_ZNK5yaSSL9X509_NAME7GetNameEv>
 8752796:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8752799:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 875279c:	89 04 24             	mov    %eax,(%esp)
 875279f:	e8 4c c8 ff ff       	call   874eff0 <_ZNK5yaSSL9X509_NAME9GetLengthEv>
 87527a4:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87527a9:	c7 04 24 40 00 00 00 	movl   $0x40,(%esp)
 87527b0:	89 45 d8             	mov    %eax,-0x28(%ebp)
 87527b3:	e8 e8 e4 ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 87527b8:	8b 4e 04             	mov    0x4(%esi),%ecx
 87527bb:	8b 55 d8             	mov    -0x28(%ebp),%edx
 87527be:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 87527c2:	8b 76 08             	mov    0x8(%esi),%esi
 87527c5:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 87527c8:	89 45 d8             	mov    %eax,-0x28(%ebp)
 87527cb:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 87527cf:	8b 77 04             	mov    0x4(%edi),%esi
 87527d2:	89 74 24 18          	mov    %esi,0x18(%esp)
 87527d6:	8b 77 08             	mov    0x8(%edi),%esi
 87527d9:	89 54 24 10          	mov    %edx,0x10(%esp)
 87527dd:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 87527e0:	89 04 24             	mov    %eax,(%esp)
 87527e3:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87527e7:	89 74 24 14          	mov    %esi,0x14(%esp)
 87527eb:	89 54 24 0c          	mov    %edx,0xc(%esp)
 87527ef:	8b 55 dc             	mov    -0x24(%ebp),%edx
 87527f2:	89 54 24 04          	mov    %edx,0x4(%esp)
 87527f6:	e8 25 fd ff ff       	call   8752520 <_ZN5yaSSL4X509C1EPKcjS2_jS2_iS2_i>
 87527fb:	8b 55 08             	mov    0x8(%ebp),%edx
 87527fe:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8752801:	89 42 60             	mov    %eax,0x60(%edx)
 8752804:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8752807:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875280a:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875280d:	89 ec                	mov    %ebp,%esp
 875280f:	5d                   	pop    %ebp
 8752810:	c3                   	ret
 8752811:	90                   	nop
 8752812:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8752819:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::SSL_SESSION::CopyX509 @ 0x8752720

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL_SESSION::CopyX509(yaSSL::X509*) */

void __thiscall yaSSL::SSL_SESSION::CopyX509(SSL_SESSION *this,X509 *param_1)

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
    *(X509 **)(this + 0x60) = this_02;
  }
  return;
}

```

---

## GetBornOn

```asm
// === 0874e360 yaSSL::SSL_SESSION::GetBornOn  [0x0874e360-0x874e36f] ===
 874e360:	55                   	push   %ebp
 874e361:	89 e5                	mov    %esp,%ebp
 874e363:	8b 45 08             	mov    0x8(%ebp),%eax
 874e366:	5d                   	pop    %ebp
 874e367:	8b 40 54             	mov    0x54(%eax),%eax
 874e36a:	c3                   	ret
 874e36b:	90                   	nop
 874e36c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL_SESSION::GetBornOn @ 0x874e360

/* yaSSL::SSL_SESSION::GetBornOn() const */

undefined4 __thiscall yaSSL::SSL_SESSION::GetBornOn(SSL_SESSION *this)

{
  return *(undefined4 *)(this + 0x54);
}

```

---

## GetID

```asm
// === 0874e320 yaSSL::SSL_SESSION::GetID  [0x0874e320-0x874e32f] ===
 874e320:	55                   	push   %ebp
 874e321:	89 e5                	mov    %esp,%ebp
 874e323:	8b 45 08             	mov    0x8(%ebp),%eax
 874e326:	5d                   	pop    %ebp
 874e327:	c3                   	ret
 874e328:	90                   	nop
 874e329:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL_SESSION::GetID @ 0x874e320

/* yaSSL::SSL_SESSION::GetID() const */

SSL_SESSION * __thiscall yaSSL::SSL_SESSION::GetID(SSL_SESSION *this)

{
  return this;
}

```

---

## GetPeerX509

```asm
// === 0874e350 yaSSL::SSL_SESSION::GetPeerX509  [0x0874e350-0x874e35f] ===
 874e350:	55                   	push   %ebp
 874e351:	89 e5                	mov    %esp,%ebp
 874e353:	8b 45 08             	mov    0x8(%ebp),%eax
 874e356:	5d                   	pop    %ebp
 874e357:	8b 40 60             	mov    0x60(%eax),%eax
 874e35a:	c3                   	ret
 874e35b:	90                   	nop
 874e35c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL_SESSION::GetPeerX509 @ 0x874e350

/* yaSSL::SSL_SESSION::GetPeerX509() const */

undefined4 __thiscall yaSSL::SSL_SESSION::GetPeerX509(SSL_SESSION *this)

{
  return *(undefined4 *)(this + 0x60);
}

```

---

## GetSecret

```asm
// === 0874e330 yaSSL::SSL_SESSION::GetSecret  [0x0874e330-0x874e33f] ===
 874e330:	55                   	push   %ebp
 874e331:	89 e5                	mov    %esp,%ebp
 874e333:	8b 45 08             	mov    0x8(%ebp),%eax
 874e336:	5d                   	pop    %ebp
 874e337:	83 c0 20             	add    $0x20,%eax
 874e33a:	c3                   	ret
 874e33b:	90                   	nop
 874e33c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL_SESSION::GetSecret @ 0x874e330

/* yaSSL::SSL_SESSION::GetSecret() const */

SSL_SESSION * __thiscall yaSSL::SSL_SESSION::GetSecret(SSL_SESSION *this)

{
  return this + 0x20;
}

```

---

## GetSuite

```asm
// === 0874e340 yaSSL::SSL_SESSION::GetSuite  [0x0874e340-0x874e34f] ===
 874e340:	55                   	push   %ebp
 874e341:	89 e5                	mov    %esp,%ebp
 874e343:	8b 45 08             	mov    0x8(%ebp),%eax
 874e346:	5d                   	pop    %ebp
 874e347:	83 c0 50             	add    $0x50,%eax
 874e34a:	c3                   	ret
 874e34b:	90                   	nop
 874e34c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL_SESSION::GetSuite @ 0x874e340

/* yaSSL::SSL_SESSION::GetSuite() const */

SSL_SESSION * __thiscall yaSSL::SSL_SESSION::GetSuite(SSL_SESSION *this)

{
  return this + 0x50;
}

```

---

## GetTimeOut

```asm
// === 0874e370 yaSSL::SSL_SESSION::GetTimeOut  [0x0874e370-0x874e37f] ===
 874e370:	55                   	push   %ebp
 874e371:	89 e5                	mov    %esp,%ebp
 874e373:	8b 45 08             	mov    0x8(%ebp),%eax
 874e376:	5d                   	pop    %ebp
 874e377:	8b 40 58             	mov    0x58(%eax),%eax
 874e37a:	c3                   	ret
 874e37b:	90                   	nop
 874e37c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL_SESSION::GetTimeOut @ 0x874e370

/* yaSSL::SSL_SESSION::GetTimeOut() const */

undefined4 __thiscall yaSSL::SSL_SESSION::GetTimeOut(SSL_SESSION *this)

{
  return *(undefined4 *)(this + 0x58);
}

```

---

## SSL_SESSION

```asm
// === 0874f7d0 yaSSL::SSL_SESSION::SSL_SESSION  [0x0874f7d0-0x874f82f] ===
 874f7d0:	55                   	push   %ebp
 874f7d1:	89 e5                	mov    %esp,%ebp
 874f7d3:	83 ec 08             	sub    $0x8,%esp
 874f7d6:	8b 55 08             	mov    0x8(%ebp),%edx
 874f7d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 874f7dc:	89 34 24             	mov    %esi,(%esp)
 874f7df:	89 7c 24 04          	mov    %edi,0x4(%esp)
 874f7e3:	c7 42 54 00 00 00 00 	movl   $0x0,0x54(%edx)
 874f7ea:	89 42 5c             	mov    %eax,0x5c(%edx)
 874f7ed:	31 c0                	xor    %eax,%eax
 874f7ef:	c7 42 58 00 00 00 00 	movl   $0x0,0x58(%edx)
 874f7f6:	c7 42 60 00 00 00 00 	movl   $0x0,0x60(%edx)
 874f7fd:	c7 04 02 00 00 00 00 	movl   $0x0,(%edx,%eax,1)
 874f804:	83 c0 04             	add    $0x4,%eax
 874f807:	83 f8 20             	cmp    $0x20,%eax
 874f80a:	72 f1                	jb     874f7fd <_ZN5yaSSL11SSL_SESSIONC1ERNS_10RandomPoolE+0x2d>
 874f80c:	8d 72 20             	lea    0x20(%edx),%esi
 874f80f:	b9 0c 00 00 00       	mov    $0xc,%ecx
 874f814:	89 f7                	mov    %esi,%edi
 874f816:	31 c0                	xor    %eax,%eax
 874f818:	f3 ab                	rep stos %eax,%es:(%edi)
 874f81a:	66 c7 42 50 00 00    	movw   $0x0,0x50(%edx)
 874f820:	8b 34 24             	mov    (%esp),%esi
 874f823:	8b 7c 24 04          	mov    0x4(%esp),%edi
 874f827:	89 ec                	mov    %ebp,%esp
 874f829:	5d                   	pop    %ebp
 874f82a:	c3                   	ret
 874f82b:	90                   	nop
 874f82c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL_SESSION::SSL_SESSION @ 0x874f7d0

/* yaSSL::SSL_SESSION::SSL_SESSION(yaSSL::RandomPool&) */

void __thiscall yaSSL::SSL_SESSION::SSL_SESSION(SSL_SESSION *this,RandomPool *param_1)

{
  uint uVar1;
  int iVar2;
  SSL_SESSION *pSVar3;
  
  *(undefined4 *)(this + 0x54) = 0;
  *(RandomPool **)(this + 0x5c) = param_1;
  uVar1 = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  do {
    *(undefined4 *)(this + uVar1) = 0;
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x20);
  pSVar3 = this + 0x20;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pSVar3 = 0;
    pSVar3 = pSVar3 + 4;
  }
  *(undefined2 *)(this + 0x50) = 0;
  return;
}

```

---

## SSL_SESSION_08752940

```asm
// === 08752940 yaSSL::SSL_SESSION::SSL_SESSION  [0x08752940-0x8752a4f] ===
 8752940:	55                   	push   %ebp
 8752941:	89 e5                	mov    %esp,%ebp
 8752943:	57                   	push   %edi
 8752944:	56                   	push   %esi
 8752945:	53                   	push   %ebx
 8752946:	e8 ad 04 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875294b:	81 c3 4d a2 c1 00    	add    $0xc1a24d,%ebx
 8752951:	83 ec 1c             	sub    $0x1c,%esp
 8752954:	8b 75 08             	mov    0x8(%ebp),%esi
 8752957:	8b 45 10             	mov    0x10(%ebp),%eax
 875295a:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875295d:	c7 46 58 f4 01 00 00 	movl   $0x1f4,0x58(%esi)
 8752964:	89 46 5c             	mov    %eax,0x5c(%esi)
 8752967:	c7 46 60 00 00 00 00 	movl   $0x0,0x60(%esi)
 875296e:	89 3c 24             	mov    %edi,(%esp)
 8752971:	e8 fa b6 ff ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 8752976:	89 04 24             	mov    %eax,(%esp)
 8752979:	e8 e2 bf ff ff       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 875297e:	8b 48 74             	mov    0x74(%eax),%ecx
 8752981:	8d 50 74             	lea    0x74(%eax),%edx
 8752984:	89 0e                	mov    %ecx,(%esi)
 8752986:	8b 4a 04             	mov    0x4(%edx),%ecx
 8752989:	89 4e 04             	mov    %ecx,0x4(%esi)
 875298c:	8b 4a 08             	mov    0x8(%edx),%ecx
 875298f:	89 4e 08             	mov    %ecx,0x8(%esi)
 8752992:	8b 4a 0c             	mov    0xc(%edx),%ecx
 8752995:	89 4e 0c             	mov    %ecx,0xc(%esi)
 8752998:	8b 4a 10             	mov    0x10(%edx),%ecx
 875299b:	89 4e 10             	mov    %ecx,0x10(%esi)
 875299e:	8b 4a 14             	mov    0x14(%edx),%ecx
 87529a1:	89 4e 14             	mov    %ecx,0x14(%esi)
 87529a4:	8b 4a 18             	mov    0x18(%edx),%ecx
 87529a7:	89 4e 18             	mov    %ecx,0x18(%esi)
 87529aa:	8b 52 1c             	mov    0x1c(%edx),%edx
 87529ad:	8d 48 04             	lea    0x4(%eax),%ecx
 87529b0:	89 56 1c             	mov    %edx,0x1c(%esi)
 87529b3:	8b 40 04             	mov    0x4(%eax),%eax
 87529b6:	8d 56 20             	lea    0x20(%esi),%edx
 87529b9:	89 46 20             	mov    %eax,0x20(%esi)
 87529bc:	8b 41 04             	mov    0x4(%ecx),%eax
 87529bf:	89 42 04             	mov    %eax,0x4(%edx)
 87529c2:	8b 41 08             	mov    0x8(%ecx),%eax
 87529c5:	89 42 08             	mov    %eax,0x8(%edx)
 87529c8:	8b 41 0c             	mov    0xc(%ecx),%eax
 87529cb:	89 42 0c             	mov    %eax,0xc(%edx)
 87529ce:	8b 41 10             	mov    0x10(%ecx),%eax
 87529d1:	89 42 10             	mov    %eax,0x10(%edx)
 87529d4:	8b 41 14             	mov    0x14(%ecx),%eax
 87529d7:	89 42 14             	mov    %eax,0x14(%edx)
 87529da:	8b 41 18             	mov    0x18(%ecx),%eax
 87529dd:	89 42 18             	mov    %eax,0x18(%edx)
 87529e0:	8b 41 1c             	mov    0x1c(%ecx),%eax
 87529e3:	89 42 1c             	mov    %eax,0x1c(%edx)
 87529e6:	8b 41 20             	mov    0x20(%ecx),%eax
 87529e9:	89 42 20             	mov    %eax,0x20(%edx)
 87529ec:	8b 41 24             	mov    0x24(%ecx),%eax
 87529ef:	89 42 24             	mov    %eax,0x24(%edx)
 87529f2:	8b 41 28             	mov    0x28(%ecx),%eax
 87529f5:	89 42 28             	mov    %eax,0x28(%edx)
 87529f8:	8b 41 2c             	mov    0x2c(%ecx),%eax
 87529fb:	89 42 2c             	mov    %eax,0x2c(%edx)
 87529fe:	89 3c 24             	mov    %edi,(%esp)
 8752a01:	e8 6a b6 ff ff       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 8752a06:	89 04 24             	mov    %eax,(%esp)
 8752a09:	e8 42 c0 ff ff       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 8752a0e:	0f b7 40 2c          	movzwl 0x2c(%eax),%eax
 8752a12:	66 89 46 50          	mov    %ax,0x50(%esi)
 8752a16:	e8 35 ed 04 00       	call   87a1750 <_ZN5yaSSL11lowResTimerEv>
 8752a1b:	89 46 54             	mov    %eax,0x54(%esi)
 8752a1e:	89 3c 24             	mov    %edi,(%esp)
 8752a21:	e8 3a b6 ff ff       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 8752a26:	89 04 24             	mov    %eax,(%esp)
 8752a29:	e8 62 bd ff ff       	call   874e790 <_ZNK5yaSSL6Crypto15get_certManagerEv>
 8752a2e:	89 04 24             	mov    %eax,(%esp)
 8752a31:	e8 7a 4a 04 00       	call   87974b0 <_ZNK5yaSSL11CertManager12get_peerX509Ev>
 8752a36:	89 34 24             	mov    %esi,(%esp)
 8752a39:	89 44 24 04          	mov    %eax,0x4(%esp)
 8752a3d:	e8 de fc ff ff       	call   8752720 <_ZN5yaSSL11SSL_SESSION8CopyX509EPNS_4X509E>
 8752a42:	83 c4 1c             	add    $0x1c,%esp
 8752a45:	5b                   	pop    %ebx
 8752a46:	5e                   	pop    %esi
 8752a47:	5f                   	pop    %edi
 8752a48:	5d                   	pop    %ebp
 8752a49:	c3                   	ret
 8752a4a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::SSL_SESSION::SSL_SESSION @ 0x8752940

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL_SESSION::SSL_SESSION(yaSSL::SSL const&, yaSSL::RandomPool&) */

void __thiscall yaSSL::SSL_SESSION::SSL_SESSION(SSL_SESSION *this,SSL *param_1,RandomPool *param_2)

{
  Security *pSVar1;
  int iVar2;
  undefined4 uVar3;
  Crypto *this_00;
  CertManager *this_01;
  X509 *pXVar4;
  
  *(undefined4 *)(this + 0x58) = 500;
  *(RandomPool **)(this + 0x5c) = param_2;
  *(undefined4 *)(this + 0x60) = 0;
  pSVar1 = (Security *)SSL::getSecurity(param_1);
  iVar2 = Security::get_connection(pSVar1);
  *(undefined4 *)this = *(undefined4 *)(iVar2 + 0x74);
  *(undefined4 *)(this + 4) = *(undefined4 *)(iVar2 + 0x78);
  *(undefined4 *)(this + 8) = *(undefined4 *)(iVar2 + 0x7c);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(iVar2 + 0x80);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(iVar2 + 0x84);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(iVar2 + 0x88);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(iVar2 + 0x8c);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(iVar2 + 0x90);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(iVar2 + 4);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(iVar2 + 8);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(iVar2 + 0xc);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(iVar2 + 0x14);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(iVar2 + 0x18);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(iVar2 + 0x20);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(iVar2 + 0x24);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(iVar2 + 0x28);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(iVar2 + 0x2c);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(iVar2 + 0x30);
  pSVar1 = (Security *)SSL::getSecurity(param_1);
  iVar2 = Security::get_parms(pSVar1);
  *(undefined2 *)(this + 0x50) = *(undefined2 *)(iVar2 + 0x2c);
  uVar3 = lowResTimer();
  *(undefined4 *)(this + 0x54) = uVar3;
  this_00 = (Crypto *)SSL::getCrypto(param_1);
  this_01 = (CertManager *)Crypto::get_certManager(this_00);
  pXVar4 = (X509 *)CertManager::get_peerX509(this_01);
  CopyX509(this,pXVar4);
  return;
}

```

---

## SetTimeOut

```asm
// === 0874e380 yaSSL::SSL_SESSION::SetTimeOut  [0x0874e380-0x874e38f] ===
 874e380:	55                   	push   %ebp
 874e381:	89 e5                	mov    %esp,%ebp
 874e383:	8b 55 0c             	mov    0xc(%ebp),%edx
 874e386:	8b 45 08             	mov    0x8(%ebp),%eax
 874e389:	89 50 58             	mov    %edx,0x58(%eax)
 874e38c:	5d                   	pop    %ebp
 874e38d:	c3                   	ret
 874e38e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::SSL_SESSION::SetTimeOut @ 0x874e380

/* yaSSL::SSL_SESSION::SetTimeOut(unsigned int) */

void __thiscall yaSSL::SSL_SESSION::SetTimeOut(SSL_SESSION *this,uint param_1)

{
  *(uint *)(this + 0x58) = param_1;
  return;
}

```

---

## operator=

```asm
// === 08752820 yaSSL::SSL_SESSION::operator=  [0x08752820-0x875293f] ===
 8752820:	55                   	push   %ebp
 8752821:	89 e5                	mov    %esp,%ebp
 8752823:	57                   	push   %edi
 8752824:	56                   	push   %esi
 8752825:	53                   	push   %ebx
 8752826:	83 ec 2c             	sub    $0x2c,%esp
 8752829:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875282c:	8b 75 08             	mov    0x8(%ebp),%esi
 875282f:	e8 c4 05 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8752834:	81 c3 64 a3 c1 00    	add    $0xc1a364,%ebx
 875283a:	8b 07                	mov    (%edi),%eax
 875283c:	8d 57 20             	lea    0x20(%edi),%edx
 875283f:	8b 4f 20             	mov    0x20(%edi),%ecx
 8752842:	89 06                	mov    %eax,(%esi)
 8752844:	8b 47 04             	mov    0x4(%edi),%eax
 8752847:	89 4e 20             	mov    %ecx,0x20(%esi)
 875284a:	8b 4a 04             	mov    0x4(%edx),%ecx
 875284d:	89 46 04             	mov    %eax,0x4(%esi)
 8752850:	8b 47 08             	mov    0x8(%edi),%eax
 8752853:	89 46 08             	mov    %eax,0x8(%esi)
 8752856:	8b 47 0c             	mov    0xc(%edi),%eax
 8752859:	89 46 0c             	mov    %eax,0xc(%esi)
 875285c:	8b 47 10             	mov    0x10(%edi),%eax
 875285f:	89 46 10             	mov    %eax,0x10(%esi)
 8752862:	8b 47 14             	mov    0x14(%edi),%eax
 8752865:	89 46 14             	mov    %eax,0x14(%esi)
 8752868:	8b 47 18             	mov    0x18(%edi),%eax
 875286b:	89 46 18             	mov    %eax,0x18(%esi)
 875286e:	8b 47 1c             	mov    0x1c(%edi),%eax
 8752871:	89 46 1c             	mov    %eax,0x1c(%esi)
 8752874:	8d 46 20             	lea    0x20(%esi),%eax
 8752877:	89 48 04             	mov    %ecx,0x4(%eax)
 875287a:	8b 4a 08             	mov    0x8(%edx),%ecx
 875287d:	89 48 08             	mov    %ecx,0x8(%eax)
 8752880:	8b 4a 0c             	mov    0xc(%edx),%ecx
 8752883:	89 48 0c             	mov    %ecx,0xc(%eax)
 8752886:	8b 4a 10             	mov    0x10(%edx),%ecx
 8752889:	89 48 10             	mov    %ecx,0x10(%eax)
 875288c:	8b 4a 14             	mov    0x14(%edx),%ecx
 875288f:	89 48 14             	mov    %ecx,0x14(%eax)
 8752892:	8b 4a 18             	mov    0x18(%edx),%ecx
 8752895:	89 48 18             	mov    %ecx,0x18(%eax)
 8752898:	8b 4a 1c             	mov    0x1c(%edx),%ecx
 875289b:	89 48 1c             	mov    %ecx,0x1c(%eax)
 875289e:	8b 4a 20             	mov    0x20(%edx),%ecx
 87528a1:	89 48 20             	mov    %ecx,0x20(%eax)
 87528a4:	8b 4a 24             	mov    0x24(%edx),%ecx
 87528a7:	89 48 24             	mov    %ecx,0x24(%eax)
 87528aa:	8b 4a 28             	mov    0x28(%edx),%ecx
 87528ad:	89 48 28             	mov    %ecx,0x28(%eax)
 87528b0:	8b 52 2c             	mov    0x2c(%edx),%edx
 87528b3:	89 50 2c             	mov    %edx,0x2c(%eax)
 87528b6:	0f b7 47 50          	movzwl 0x50(%edi),%eax
 87528ba:	66 89 46 50          	mov    %ax,0x50(%esi)
 87528be:	8b 47 54             	mov    0x54(%edi),%eax
 87528c1:	89 46 54             	mov    %eax,0x54(%esi)
 87528c4:	8b 47 58             	mov    0x58(%edi),%eax
 87528c7:	89 46 58             	mov    %eax,0x58(%esi)
 87528ca:	8b 46 60             	mov    0x60(%esi),%eax
 87528cd:	85 c0                	test   %eax,%eax
 87528cf:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87528d2:	74 49                	je     875291d <_ZN5yaSSL11SSL_SESSIONaSERKS0_+0xfd>
 87528d4:	83 c0 34             	add    $0x34,%eax
 87528d7:	89 04 24             	mov    %eax,(%esp)
 87528da:	e8 41 e3 ff ff       	call   8750c20 <_ZN5yaSSL12StringHolderD1Ev>
 87528df:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87528e2:	83 c0 28             	add    $0x28,%eax
 87528e5:	89 04 24             	mov    %eax,(%esp)
 87528e8:	e8 33 e3 ff ff       	call   8750c20 <_ZN5yaSSL12StringHolderD1Ev>
 87528ed:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87528f0:	83 c0 14             	add    $0x14,%eax
 87528f3:	89 04 24             	mov    %eax,(%esp)
 87528f6:	e8 55 e3 ff ff       	call   8750c50 <_ZN5yaSSL9X509_NAMED1Ev>
 87528fb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87528fe:	89 04 24             	mov    %eax,(%esp)
 8752901:	e8 4a e3 ff ff       	call   8750c50 <_ZN5yaSSL9X509_NAMED1Ev>
 8752906:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8752909:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875290e:	89 04 24             	mov    %eax,(%esp)
 8752911:	e8 0a df ff ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 8752916:	c7 46 60 00 00 00 00 	movl   $0x0,0x60(%esi)
 875291d:	8b 47 60             	mov    0x60(%edi),%eax
 8752920:	89 34 24             	mov    %esi,(%esp)
 8752923:	89 44 24 04          	mov    %eax,0x4(%esp)
 8752927:	e8 f4 fd ff ff       	call   8752720 <_ZN5yaSSL11SSL_SESSION8CopyX509EPNS_4X509E>
 875292c:	83 c4 2c             	add    $0x2c,%esp
 875292f:	89 f0                	mov    %esi,%eax
 8752931:	5b                   	pop    %ebx
 8752932:	5e                   	pop    %esi
 8752933:	5f                   	pop    %edi
 8752934:	5d                   	pop    %ebp
 8752935:	c3                   	ret
 8752936:	8d 76 00             	lea    0x0(%esi),%esi
 8752939:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::SSL_SESSION::operator= @ 0x8752820

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL_SESSION::TEMPNAMEPLACEHOLDERVALUE(yaSSL::SSL_SESSION const&) */

SSL_SESSION * __thiscall yaSSL::SSL_SESSION::operator=(SSL_SESSION *this,SSL_SESSION *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  X509_NAME *this_00;
  uint in_stack_ffffffc8;
  
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)this = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x20) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x24) = uVar1;
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined2 *)(this + 0x50) = *(undefined2 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  this_00 = *(X509_NAME **)(this + 0x60);
  if (this_00 != (X509_NAME *)0x0) {
    StringHolder::~StringHolder((StringHolder *)(this_00 + 0x34));
    StringHolder::~StringHolder((StringHolder *)(this_00 + 0x28));
    X509_NAME::~X509_NAME(this_00 + 0x14);
    X509_NAME::~X509_NAME(this_00);
    operator_delete(this_00,in_stack_ffffffc8 & 0xffffff00);
    *(undefined4 *)(this + 0x60) = 0;
  }
  CopyX509(this,*(X509 **)(param_1 + 0x60));
  return this;
}

```

---

## ~SSL_SESSION

```asm
// === 08752de0 yaSSL::SSL_SESSION::~SSL_SESSION  [0x08752de0-0x8752e5f] ===
 8752de0:	55                   	push   %ebp
 8752de1:	89 e5                	mov    %esp,%ebp
 8752de3:	56                   	push   %esi
 8752de4:	53                   	push   %ebx
 8752de5:	83 ec 10             	sub    $0x10,%esp
 8752de8:	8b 75 08             	mov    0x8(%ebp),%esi
 8752deb:	e8 08 00 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8752df0:	81 c3 a8 9d c1 00    	add    $0xc19da8,%ebx
 8752df6:	8b 46 5c             	mov    0x5c(%esi),%eax
 8752df9:	c7 44 24 04 30 00 00 	movl   $0x30,0x4(%esp)
 8752e00:	00 
 8752e01:	89 44 24 08          	mov    %eax,0x8(%esp)
 8752e05:	8d 46 20             	lea    0x20(%esi),%eax
 8752e08:	89 04 24             	mov    %eax,(%esp)
 8752e0b:	e8 20 4e ff ff       	call   8747c30 <_ZN5yaSSL5cleanEPVhjRNS_10RandomPoolE>
 8752e10:	8b 76 60             	mov    0x60(%esi),%esi
 8752e13:	85 f6                	test   %esi,%esi
 8752e15:	74 29                	je     8752e40 <_ZN5yaSSL11SSL_SESSIOND1Ev+0x60>
 8752e17:	8d 46 34             	lea    0x34(%esi),%eax
 8752e1a:	89 04 24             	mov    %eax,(%esp)
 8752e1d:	e8 fe dd ff ff       	call   8750c20 <_ZN5yaSSL12StringHolderD1Ev>
 8752e22:	8d 46 28             	lea    0x28(%esi),%eax
 8752e25:	89 04 24             	mov    %eax,(%esp)
 8752e28:	e8 f3 dd ff ff       	call   8750c20 <_ZN5yaSSL12StringHolderD1Ev>
 8752e2d:	8d 46 14             	lea    0x14(%esi),%eax
 8752e30:	89 04 24             	mov    %eax,(%esp)
 8752e33:	e8 18 de ff ff       	call   8750c50 <_ZN5yaSSL9X509_NAMED1Ev>
 8752e38:	89 34 24             	mov    %esi,(%esp)
 8752e3b:	e8 10 de ff ff       	call   8750c50 <_ZN5yaSSL9X509_NAMED1Ev>
 8752e40:	89 34 24             	mov    %esi,(%esp)
 8752e43:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8752e48:	e8 d3 d9 ff ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 8752e4d:	83 c4 10             	add    $0x10,%esp
 8752e50:	5b                   	pop    %ebx
 8752e51:	5e                   	pop    %esi
 8752e52:	5d                   	pop    %ebp
 8752e53:	c3                   	ret
 8752e54:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8752e5a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::SSL_SESSION::~SSL_SESSION @ 0x8752de0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL_SESSION::~SSL_SESSION() */

void __thiscall yaSSL::SSL_SESSION::~SSL_SESSION(SSL_SESSION *this)

{
  X509_NAME *this_00;
  uint uVar1;
  
  uVar1 = 0;
  clean((uchar *)(this + 0x20),0x30,*(RandomPool **)(this + 0x5c));
  this_00 = *(X509_NAME **)(this + 0x60);
  if (this_00 != (X509_NAME *)0x0) {
    StringHolder::~StringHolder((StringHolder *)(this_00 + 0x34));
    StringHolder::~StringHolder((StringHolder *)(this_00 + 0x28));
    X509_NAME::~X509_NAME(this_00 + 0x14);
    X509_NAME::~X509_NAME(this_00);
  }
  operator_delete(this_00,uVar1 & 0xffffff00);
  return;
}

```

