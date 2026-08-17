# yaSSL__SSL_CTX

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 26

---

## AddCA

```asm
// === 087525a0 yaSSL::SSL_CTX::AddCA  [0x087525a0-0x875260f] ===
 87525a0:	55                   	push   %ebp
 87525a1:	89 e5                	mov    %esp,%ebp
 87525a3:	83 ec 18             	sub    $0x18,%esp
 87525a6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87525a9:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87525ac:	8b 75 08             	mov    0x8(%ebp),%esi
 87525af:	e8 44 08 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87525b4:	81 c3 e4 a5 c1 00    	add    $0xc1a5e4,%ebx
 87525ba:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87525bf:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 87525c6:	e8 85 fd ff ff       	call   8752350 <_ZnajN5yaSSL5new_tE>
 87525cb:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 87525d1:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 87525d8:	8b 55 0c             	mov    0xc(%ebp),%edx
 87525db:	89 50 08             	mov    %edx,0x8(%eax)
 87525de:	8b 56 10             	mov    0x10(%esi),%edx
 87525e1:	85 d2                	test   %edx,%edx
 87525e3:	74 1b                	je     8752600 <_ZN5yaSSL7SSL_CTX5AddCAEPNS_4x509E+0x60>
 87525e5:	89 42 04             	mov    %eax,0x4(%edx)
 87525e8:	8b 56 10             	mov    0x10(%esi),%edx
 87525eb:	89 10                	mov    %edx,(%eax)
 87525ed:	83 46 14 01          	addl   $0x1,0x14(%esi)
 87525f1:	89 46 10             	mov    %eax,0x10(%esi)
 87525f4:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87525f7:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87525fa:	89 ec                	mov    %ebp,%esp
 87525fc:	5d                   	pop    %ebp
 87525fd:	c3                   	ret
 87525fe:	66 90                	xchg   %ax,%ax
 8752600:	89 46 0c             	mov    %eax,0xc(%esi)
 8752603:	eb e8                	jmp    87525ed <_ZN5yaSSL7SSL_CTX5AddCAEPNS_4x509E+0x4d>
 8752605:	90                   	nop
 8752606:	8d 76 00             	lea    0x0(%esi),%esi
 8752609:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::SSL_CTX::AddCA @ 0x87525a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL_CTX::AddCA(yaSSL::x509*) */

void __thiscall yaSSL::SSL_CTX::AddCA(SSL_CTX *this,x509 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new__(0xc,0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = param_1;
  if (*(int *)(this + 0x10) == 0) {
    *(undefined4 **)(this + 0xc) = puVar1;
  }
  else {
    *(undefined4 **)(*(int *)(this + 0x10) + 4) = puVar1;
    *puVar1 = *(undefined4 *)(this + 0x10);
  }
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  *(undefined4 **)(this + 0x10) = puVar1;
  return;
}

```

---

## GetCA_List

```asm
// === 0874e460 yaSSL::SSL_CTX::GetCA_List  [0x0874e460-0x874e46f] ===
 874e460:	55                   	push   %ebp
 874e461:	89 e5                	mov    %esp,%ebp
 874e463:	8b 45 08             	mov    0x8(%ebp),%eax
 874e466:	5d                   	pop    %ebp
 874e467:	83 c0 0c             	add    $0xc,%eax
 874e46a:	c3                   	ret
 874e46b:	90                   	nop
 874e46c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL_CTX::GetCA_List @ 0x874e460

/* yaSSL::SSL_CTX::GetCA_List() const */

SSL_CTX * __thiscall yaSSL::SSL_CTX::GetCA_List(SSL_CTX *this)

{
  return this + 0xc;
}

```

---

## GetCiphers

```asm
// === 0874e4b0 yaSSL::SSL_CTX::GetCiphers  [0x0874e4b0-0x874e4bf] ===
 874e4b0:	55                   	push   %ebp
 874e4b1:	89 e5                	mov    %esp,%ebp
 874e4b3:	8b 45 08             	mov    0x8(%ebp),%eax
 874e4b6:	5d                   	pop    %ebp
 874e4b7:	83 c0 18             	add    $0x18,%eax
 874e4ba:	c3                   	ret
 874e4bb:	90                   	nop
 874e4bc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL_CTX::GetCiphers @ 0x874e4b0

/* yaSSL::SSL_CTX::GetCiphers() const */

SSL_CTX * __thiscall yaSSL::SSL_CTX::GetCiphers(SSL_CTX *this)

{
  return this + 0x18;
}

```

---

## GetDH_Parms

```asm
// === 0874e4c0 yaSSL::SSL_CTX::GetDH_Parms  [0x0874e4c0-0x874e4cf] ===
 874e4c0:	55                   	push   %ebp
 874e4c1:	89 e5                	mov    %esp,%ebp
 874e4c3:	8b 45 08             	mov    0x8(%ebp),%eax
 874e4c6:	5d                   	pop    %ebp
 874e4c7:	05 a0 00 00 00       	add    $0xa0,%eax
 874e4cc:	c3                   	ret
 874e4cd:	90                   	nop
 874e4ce:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::SSL_CTX::GetDH_Parms @ 0x874e4c0

/* yaSSL::SSL_CTX::GetDH_Parms() const */

SSL_CTX * __thiscall yaSSL::SSL_CTX::GetDH_Parms(SSL_CTX *this)

{
  return this + 0xa0;
}

```

---

## GetPasswordCb

```asm
// === 0874e4e0 yaSSL::SSL_CTX::GetPasswordCb  [0x0874e4e0-0x874e4ef] ===
 874e4e0:	55                   	push   %ebp
 874e4e1:	89 e5                	mov    %esp,%ebp
 874e4e3:	8b 45 08             	mov    0x8(%ebp),%eax
 874e4e6:	5d                   	pop    %ebp
 874e4e7:	8b 80 ac 00 00 00    	mov    0xac(%eax),%eax
 874e4ed:	c3                   	ret
 874e4ee:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::SSL_CTX::GetPasswordCb @ 0x874e4e0

/* yaSSL::SSL_CTX::GetPasswordCb() const */

undefined4 __thiscall yaSSL::SSL_CTX::GetPasswordCb(SSL_CTX *this)

{
  return *(undefined4 *)(this + 0xac);
}

```

---

## GetSessionCacheFlushOff

```asm
// === 0874e530 yaSSL::SSL_CTX::GetSessionCacheFlushOff  [0x0874e530-0x874e53f] ===
 874e530:	55                   	push   %ebp
 874e531:	89 e5                	mov    %esp,%ebp
 874e533:	8b 45 08             	mov    0x8(%ebp),%eax
 874e536:	5d                   	pop    %ebp
 874e537:	0f b6 80 b5 00 00 00 	movzbl 0xb5(%eax),%eax
 874e53e:	c3                   	ret
 874e53f:	90                   	nop

```

```c
// yaSSL::SSL_CTX::GetSessionCacheFlushOff @ 0x874e530

/* yaSSL::SSL_CTX::GetSessionCacheFlushOff() const */

SSL_CTX __thiscall yaSSL::SSL_CTX::GetSessionCacheFlushOff(SSL_CTX *this)

{
  return this[0xb5];
}

```

---

## GetSessionCacheOff

```asm
// === 0874e520 yaSSL::SSL_CTX::GetSessionCacheOff  [0x0874e520-0x874e52f] ===
 874e520:	55                   	push   %ebp
 874e521:	89 e5                	mov    %esp,%ebp
 874e523:	8b 45 08             	mov    0x8(%ebp),%eax
 874e526:	5d                   	pop    %ebp
 874e527:	0f b6 80 b4 00 00 00 	movzbl 0xb4(%eax),%eax
 874e52e:	c3                   	ret
 874e52f:	90                   	nop

```

```c
// yaSSL::SSL_CTX::GetSessionCacheOff @ 0x874e520

/* yaSSL::SSL_CTX::GetSessionCacheOff() const */

SSL_CTX __thiscall yaSSL::SSL_CTX::GetSessionCacheOff(SSL_CTX *this)

{
  return this[0xb4];
}

```

---

## GetStats

```asm
// === 0874e4d0 yaSSL::SSL_CTX::GetStats  [0x0874e4d0-0x874e4df] ===
 874e4d0:	55                   	push   %ebp
 874e4d1:	89 e5                	mov    %esp,%ebp
 874e4d3:	8b 45 08             	mov    0x8(%ebp),%eax
 874e4d6:	5d                   	pop    %ebp
 874e4d7:	05 b8 00 00 00       	add    $0xb8,%eax
 874e4dc:	c3                   	ret
 874e4dd:	90                   	nop
 874e4de:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::SSL_CTX::GetStats @ 0x874e4d0

/* yaSSL::SSL_CTX::GetStats() const */

SSL_CTX * __thiscall yaSSL::SSL_CTX::GetStats(SSL_CTX *this)

{
  return this + 0xb8;
}

```

---

## GetUserData

```asm
// === 0874e510 yaSSL::SSL_CTX::GetUserData  [0x0874e510-0x874e51f] ===
 874e510:	55                   	push   %ebp
 874e511:	89 e5                	mov    %esp,%ebp
 874e513:	8b 45 08             	mov    0x8(%ebp),%eax
 874e516:	5d                   	pop    %ebp
 874e517:	8b 80 b0 00 00 00    	mov    0xb0(%eax),%eax
 874e51d:	c3                   	ret
 874e51e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::SSL_CTX::GetUserData @ 0x874e510

/* yaSSL::SSL_CTX::GetUserData() const */

undefined4 __thiscall yaSSL::SSL_CTX::GetUserData(SSL_CTX *this)

{
  return *(undefined4 *)(this + 0xb0);
}

```

---

## IncrementStats

```asm
// === 0874e630 yaSSL::SSL_CTX::IncrementStats  [0x0874e630-0x874e74f] ===
 874e630:	55                   	push   %ebp
 874e631:	89 e5                	mov    %esp,%ebp
 874e633:	8b 55 0c             	mov    0xc(%ebp),%edx
 874e636:	e8 89 5f fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 874e63b:	81 c1 5d e5 c1 00    	add    $0xc1e55d,%ecx
 874e641:	8b 45 08             	mov    0x8(%ebp),%eax
 874e644:	83 fa 0e             	cmp    $0xe,%edx
 874e647:	77 17                	ja     874e660 <.L209+0x8>
 874e649:	8b 94 91 2c 83 99 ff 	mov    -0x667cd4(%ecx,%edx,4),%edx
 874e650:	01 ca                	add    %ecx,%edx
 874e652:	ff e2                	jmp    *%edx
 874e654:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

0874e658 <.L209>:
 874e658:	83 80 f0 00 00 00 01 	addl   $0x1,0xf0(%eax)
 874e65f:	90                   	nop
 874e660:	5d                   	pop    %ebp
 874e661:	c3                   	ret
 874e662:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

0874e668 <.L208>:
 874e668:	83 80 ec 00 00 00 01 	addl   $0x1,0xec(%eax)
 874e66f:	5d                   	pop    %ebp
 874e670:	c3                   	ret
 874e671:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

0874e678 <.L195>:
 874e678:	83 80 b8 00 00 00 01 	addl   $0x1,0xb8(%eax)
 874e67f:	5d                   	pop    %ebp
 874e680:	c3                   	ret
 874e681:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

0874e688 <.L196>:
 874e688:	83 80 bc 00 00 00 01 	addl   $0x1,0xbc(%eax)
 874e68f:	5d                   	pop    %ebp
 874e690:	c3                   	ret
 874e691:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

0874e698 <.L197>:
 874e698:	83 80 c0 00 00 00 01 	addl   $0x1,0xc0(%eax)
 874e69f:	5d                   	pop    %ebp
 874e6a0:	c3                   	ret
 874e6a1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

0874e6a8 <.L198>:
 874e6a8:	83 80 c4 00 00 00 01 	addl   $0x1,0xc4(%eax)
 874e6af:	5d                   	pop    %ebp
 874e6b0:	c3                   	ret
 874e6b1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

0874e6b8 <.L199>:
 874e6b8:	83 80 c8 00 00 00 01 	addl   $0x1,0xc8(%eax)
 874e6bf:	5d                   	pop    %ebp
 874e6c0:	c3                   	ret
 874e6c1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

0874e6c8 <.L200>:
 874e6c8:	83 80 cc 00 00 00 01 	addl   $0x1,0xcc(%eax)
 874e6cf:	5d                   	pop    %ebp
 874e6d0:	c3                   	ret
 874e6d1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

0874e6d8 <.L201>:
 874e6d8:	83 80 d0 00 00 00 01 	addl   $0x1,0xd0(%eax)
 874e6df:	5d                   	pop    %ebp
 874e6e0:	c3                   	ret
 874e6e1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

0874e6e8 <.L202>:
 874e6e8:	83 80 d4 00 00 00 01 	addl   $0x1,0xd4(%eax)
 874e6ef:	5d                   	pop    %ebp
 874e6f0:	c3                   	ret
 874e6f1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

0874e6f8 <.L203>:
 874e6f8:	83 80 d8 00 00 00 01 	addl   $0x1,0xd8(%eax)
 874e6ff:	5d                   	pop    %ebp
 874e700:	c3                   	ret
 874e701:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

0874e708 <.L204>:
 874e708:	83 80 dc 00 00 00 01 	addl   $0x1,0xdc(%eax)
 874e70f:	5d                   	pop    %ebp
 874e710:	c3                   	ret
 874e711:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

0874e718 <.L205>:
 874e718:	83 80 e0 00 00 00 01 	addl   $0x1,0xe0(%eax)
 874e71f:	5d                   	pop    %ebp
 874e720:	c3                   	ret
 874e721:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

0874e728 <.L206>:
 874e728:	83 80 e4 00 00 00 01 	addl   $0x1,0xe4(%eax)
 874e72f:	5d                   	pop    %ebp
 874e730:	c3                   	ret
 874e731:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

0874e738 <.L207>:
 874e738:	83 80 e8 00 00 00 01 	addl   $0x1,0xe8(%eax)
 874e73f:	5d                   	pop    %ebp
 874e740:	c3                   	ret
 874e741:	90                   	nop
 874e742:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 874e749:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::SSL_CTX::IncrementStats @ 0x874e630

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* yaSSL::SSL_CTX::IncrementStats(yaSSL::StatsField) */

void __thiscall yaSSL::SSL_CTX::IncrementStats(SSL_CTX *this,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    *(int *)(this + 0xb8) = *(int *)(this + 0xb8) + 1;
    return;
  case 1:
    *(int *)(this + 0xbc) = *(int *)(this + 0xbc) + 1;
    return;
  case 2:
    *(int *)(this + 0xc0) = *(int *)(this + 0xc0) + 1;
    return;
  case 3:
    *(int *)(this + 0xc4) = *(int *)(this + 0xc4) + 1;
    return;
  case 4:
    *(int *)(this + 200) = *(int *)(this + 200) + 1;
    return;
  case 5:
    *(int *)(this + 0xcc) = *(int *)(this + 0xcc) + 1;
    return;
  case 6:
    *(int *)(this + 0xd0) = *(int *)(this + 0xd0) + 1;
    return;
  case 7:
    *(int *)(this + 0xd4) = *(int *)(this + 0xd4) + 1;
    return;
  case 8:
    *(int *)(this + 0xd8) = *(int *)(this + 0xd8) + 1;
    return;
  case 9:
    *(int *)(this + 0xdc) = *(int *)(this + 0xdc) + 1;
    return;
  case 10:
    *(int *)(this + 0xe0) = *(int *)(this + 0xe0) + 1;
    return;
  case 0xb:
    *(int *)(this + 0xe4) = *(int *)(this + 0xe4) + 1;
    return;
  case 0xc:
    *(int *)(this + 0xe8) = *(int *)(this + 0xe8) + 1;
    return;
  case 0xd:
    *(int *)(this + 0xec) = *(int *)(this + 0xec) + 1;
    return;
  case 0xe:
    *(int *)(this + 0xf0) = *(int *)(this + 0xf0) + 1;
  }
  return;
}

```

---

## SSL_CTX

```asm
// === 0874f670 yaSSL::SSL_CTX::SSL_CTX  [0x0874f670-0x874f7af] ===
 874f670:	55                   	push   %ebp
 874f671:	89 e5                	mov    %esp,%ebp
 874f673:	56                   	push   %esi
 874f674:	53                   	push   %ebx
 874f675:	e8 7e 37 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874f67a:	81 c3 1e d5 c1 00    	add    $0xc1d51e,%ebx
 874f680:	83 ec 10             	sub    $0x10,%esp
 874f683:	8b 75 08             	mov    0x8(%ebp),%esi
 874f686:	8b 45 0c             	mov    0xc(%ebp),%eax
 874f689:	c7 46 04 00 00 00 00 	movl   $0x0,0x4(%esi)
 874f690:	89 06                	mov    %eax,(%esi)
 874f692:	8d 86 a0 00 00 00    	lea    0xa0(%esi),%eax
 874f698:	c7 46 08 00 00 00 00 	movl   $0x0,0x8(%esi)
 874f69f:	c7 46 0c 00 00 00 00 	movl   $0x0,0xc(%esi)
 874f6a6:	c7 46 10 00 00 00 00 	movl   $0x0,0x10(%esi)
 874f6ad:	c7 46 14 00 00 00 00 	movl   $0x0,0x14(%esi)
 874f6b4:	c6 46 18 00          	movb   $0x0,0x18(%esi)
 874f6b8:	c7 86 9c 00 00 00 00 	movl   $0x0,0x9c(%esi)
 874f6bf:	00 00 00 
 874f6c2:	89 04 24             	mov    %eax,(%esp)
 874f6c5:	e8 36 98 04 00       	call   8798f00 <_ZN5yaSSL7IntegerC1Ev>
 874f6ca:	8d 86 a4 00 00 00    	lea    0xa4(%esi),%eax
 874f6d0:	89 04 24             	mov    %eax,(%esp)
 874f6d3:	e8 28 98 04 00       	call   8798f00 <_ZN5yaSSL7IntegerC1Ev>
 874f6d8:	c6 86 a8 00 00 00 00 	movb   $0x0,0xa8(%esi)
 874f6df:	c7 86 ac 00 00 00 00 	movl   $0x0,0xac(%esi)
 874f6e6:	00 00 00 
 874f6e9:	c7 86 b0 00 00 00 00 	movl   $0x0,0xb0(%esi)
 874f6f0:	00 00 00 
 874f6f3:	c6 86 b4 00 00 00 00 	movb   $0x0,0xb4(%esi)
 874f6fa:	c6 86 b5 00 00 00 00 	movb   $0x0,0xb5(%esi)
 874f701:	c7 86 b8 00 00 00 00 	movl   $0x0,0xb8(%esi)
 874f708:	00 00 00 
 874f70b:	c7 86 bc 00 00 00 00 	movl   $0x0,0xbc(%esi)
 874f712:	00 00 00 
 874f715:	c7 86 c0 00 00 00 00 	movl   $0x0,0xc0(%esi)
 874f71c:	00 00 00 
 874f71f:	c7 86 c4 00 00 00 00 	movl   $0x0,0xc4(%esi)
 874f726:	00 00 00 
 874f729:	c7 86 c8 00 00 00 00 	movl   $0x0,0xc8(%esi)
 874f730:	00 00 00 
 874f733:	c7 86 cc 00 00 00 00 	movl   $0x0,0xcc(%esi)
 874f73a:	00 00 00 
 874f73d:	c7 86 d0 00 00 00 00 	movl   $0x0,0xd0(%esi)
 874f744:	00 00 00 
 874f747:	c7 86 d4 00 00 00 00 	movl   $0x0,0xd4(%esi)
 874f74e:	00 00 00 
 874f751:	c7 86 d8 00 00 00 00 	movl   $0x0,0xd8(%esi)
 874f758:	00 00 00 
 874f75b:	c7 86 dc 00 00 00 00 	movl   $0x0,0xdc(%esi)
 874f762:	00 00 00 
 874f765:	c7 86 e0 00 00 00 00 	movl   $0x0,0xe0(%esi)
 874f76c:	00 00 00 
 874f76f:	c7 86 e4 00 00 00 00 	movl   $0x0,0xe4(%esi)
 874f776:	00 00 00 
 874f779:	c7 86 e8 00 00 00 00 	movl   $0x0,0xe8(%esi)
 874f780:	00 00 00 
 874f783:	c7 86 ec 00 00 00 00 	movl   $0x0,0xec(%esi)
 874f78a:	00 00 00 
 874f78d:	c7 86 f0 00 00 00 00 	movl   $0x0,0xf0(%esi)
 874f794:	00 00 00 
 874f797:	c7 86 f8 00 00 00 00 	movl   $0x0,0xf8(%esi)
 874f79e:	00 00 00 
 874f7a1:	83 c4 10             	add    $0x10,%esp
 874f7a4:	5b                   	pop    %ebx
 874f7a5:	5e                   	pop    %esi
 874f7a6:	5d                   	pop    %ebp
 874f7a7:	c3                   	ret
 874f7a8:	90                   	nop
 874f7a9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL_CTX::SSL_CTX @ 0x874f670

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL_CTX::SSL_CTX(yaSSL::SSL_METHOD*) */

void __thiscall yaSSL::SSL_CTX::SSL_CTX(SSL_CTX *this,SSL_METHOD *param_1)

{
  *(undefined4 *)(this + 4) = 0;
  *(SSL_METHOD **)this = param_1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  this[0x18] = (SSL_CTX)0x0;
  *(undefined4 *)(this + 0x9c) = 0;
  Integer::Integer((Integer *)(this + 0xa0));
  Integer::Integer((Integer *)(this + 0xa4));
  this[0xa8] = (SSL_CTX)0x0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  this[0xb4] = (SSL_CTX)0x0;
  this[0xb5] = (SSL_CTX)0x0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  return;
}

```

---

## SetCipherList

```asm
// === 0874f4a0 yaSSL::SSL_CTX::SetCipherList  [0x0874f4a0-0x874f5ff] ===
 874f4a0:	55                   	push   %ebp
 874f4a1:	89 e5                	mov    %esp,%ebp
 874f4a3:	57                   	push   %edi
 874f4a4:	56                   	push   %esi
 874f4a5:	53                   	push   %ebx
 874f4a6:	83 ec 7c             	sub    $0x7c,%esp
 874f4a9:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 874f4ac:	e8 47 39 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874f4b1:	81 c3 e7 d6 c1 00    	add    $0xc1d6e7,%ebx
 874f4b7:	c6 45 9f 00          	movb   $0x0,-0x61(%ebp)
 874f4bb:	85 c9                	test   %ecx,%ecx
 874f4bd:	0f 84 2c 01 00 00    	je     874f5ef <_ZN5yaSSL7SSL_CTX13SetCipherListEPKc+0x14f>
 874f4c3:	0f b7 83 2e f4 a8 ff 	movzwl -0x570bd2(%ebx),%eax
 874f4ca:	8d 75 b6             	lea    -0x4a(%ebp),%esi
 874f4cd:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 874f4d4:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 874f4d8:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 874f4db:	89 45 98             	mov    %eax,-0x68(%ebp)
 874f4de:	89 c2                	mov    %eax,%edx
 874f4e0:	89 0c 24             	mov    %ecx,(%esp)
 874f4e3:	89 54 24 04          	mov    %edx,0x4(%esp)
 874f4e7:	89 4d 94             	mov    %ecx,-0x6c(%ebp)
 874f4ea:	e8 d1 e5 92 ff       	call   807dac0 <strstr@plt>
 874f4ef:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 874f4f2:	85 c0                	test   %eax,%eax
 874f4f4:	89 c7                	mov    %eax,%edi
 874f4f6:	0f 84 99 00 00 00    	je     874f595 <_ZN5yaSSL7SSL_CTX13SetCipherListEPKc+0xf5>
 874f4fc:	89 c2                	mov    %eax,%edx
 874f4fe:	29 ca                	sub    %ecx,%edx
 874f500:	83 fa 30             	cmp    $0x30,%edx
 874f503:	0f 87 a7 00 00 00    	ja     874f5b0 <_ZN5yaSSL7SSL_CTX13SetCipherListEPKc+0x110>
 874f509:	89 54 24 08          	mov    %edx,0x8(%esp)
 874f50d:	89 55 94             	mov    %edx,-0x6c(%ebp)
 874f510:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 874f514:	89 34 24             	mov    %esi,(%esp)
 874f517:	e8 b4 e3 92 ff       	call   807d8d0 <strncpy@plt>
 874f51c:	8b 55 94             	mov    -0x6c(%ebp),%edx
 874f51f:	83 fa 30             	cmp    $0x30,%edx
 874f522:	0f 84 9c 00 00 00    	je     874f5c4 <_ZN5yaSSL7SSL_CTX13SetCipherListEPKc+0x124>
 874f528:	c6 44 15 b6 00       	movb   $0x0,-0x4a(%ebp,%edx,1)
 874f52d:	31 d2                	xor    %edx,%edx
 874f52f:	89 7d a0             	mov    %edi,-0x60(%ebp)
 874f532:	89 f7                	mov    %esi,%edi
 874f534:	89 d6                	mov    %edx,%esi
 874f536:	eb 0f                	jmp    874f547 <_ZN5yaSSL7SSL_CTX13SetCipherListEPKc+0xa7>
 874f538:	83 c6 01             	add    $0x1,%esi
 874f53b:	81 fe 80 00 00 00    	cmp    $0x80,%esi
 874f541:	0f 84 89 00 00 00    	je     874f5d0 <_ZN5yaSSL7SSL_CTX13SetCipherListEPKc+0x130>
 874f547:	8b 84 b3 68 d5 ff ff 	mov    -0x2a98(%ebx,%esi,4),%eax
 874f54e:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 874f555:	00 
 874f556:	89 3c 24             	mov    %edi,(%esp)
 874f559:	89 44 24 04          	mov    %eax,0x4(%esp)
 874f55d:	e8 5e f3 92 ff       	call   807e8c0 <strncmp@plt>
 874f562:	85 c0                	test   %eax,%eax
 874f564:	75 d2                	jne    874f538 <_ZN5yaSSL7SSL_CTX13SetCipherListEPKc+0x98>
 874f566:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 874f569:	89 f2                	mov    %esi,%edx
 874f56b:	89 fe                	mov    %edi,%esi
 874f56d:	8b 45 08             	mov    0x8(%ebp),%eax
 874f570:	8b 7d a0             	mov    -0x60(%ebp),%edi
 874f573:	c6 44 08 19 00       	movb   $0x0,0x19(%eax,%ecx,1)
 874f578:	88 54 08 1a          	mov    %dl,0x1a(%eax,%ecx,1)
 874f57c:	83 c1 02             	add    $0x2,%ecx
 874f57f:	85 ff                	test   %edi,%edi
 874f581:	89 4d a4             	mov    %ecx,-0x5c(%ebp)
 874f584:	c6 45 9f 01          	movb   $0x1,-0x61(%ebp)
 874f588:	74 4f                	je     874f5d9 <_ZN5yaSSL7SSL_CTX13SetCipherListEPKc+0x139>
 874f58a:	8d 4f 01             	lea    0x1(%edi),%ecx
 874f58d:	8b 55 98             	mov    -0x68(%ebp),%edx
 874f590:	e9 4b ff ff ff       	jmp    874f4e0 <_ZN5yaSSL7SSL_CTX13SetCipherListEPKc+0x40>
 874f595:	89 0c 24             	mov    %ecx,(%esp)
 874f598:	e8 13 ee 92 ff       	call   807e3b0 <strlen@plt>
 874f59d:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 874f5a0:	83 f8 30             	cmp    $0x30,%eax
 874f5a3:	89 c2                	mov    %eax,%edx
 874f5a5:	0f 86 5e ff ff ff    	jbe    874f509 <_ZN5yaSSL7SSL_CTX13SetCipherListEPKc+0x69>
 874f5ab:	90                   	nop
 874f5ac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 874f5b0:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 874f5b7:	00 
 874f5b8:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 874f5bc:	89 34 24             	mov    %esi,(%esp)
 874f5bf:	e8 0c e3 92 ff       	call   807d8d0 <strncpy@plt>
 874f5c4:	ba 2f 00 00 00       	mov    $0x2f,%edx
 874f5c9:	e9 5a ff ff ff       	jmp    874f528 <_ZN5yaSSL7SSL_CTX13SetCipherListEPKc+0x88>
 874f5ce:	66 90                	xchg   %ax,%ax
 874f5d0:	89 fe                	mov    %edi,%esi
 874f5d2:	8b 7d a0             	mov    -0x60(%ebp),%edi
 874f5d5:	85 ff                	test   %edi,%edi
 874f5d7:	75 b1                	jne    874f58a <_ZN5yaSSL7SSL_CTX13SetCipherListEPKc+0xea>
 874f5d9:	80 7d 9f 00          	cmpb   $0x0,-0x61(%ebp)
 874f5dd:	74 10                	je     874f5ef <_ZN5yaSSL7SSL_CTX13SetCipherListEPKc+0x14f>
 874f5df:	8b 55 08             	mov    0x8(%ebp),%edx
 874f5e2:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 874f5e5:	c6 42 18 01          	movb   $0x1,0x18(%edx)
 874f5e9:	89 8a 9c 00 00 00    	mov    %ecx,0x9c(%edx)
 874f5ef:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 874f5f3:	83 c4 7c             	add    $0x7c,%esp
 874f5f6:	5b                   	pop    %ebx
 874f5f7:	5e                   	pop    %esi
 874f5f8:	5f                   	pop    %edi
 874f5f9:	5d                   	pop    %ebp
 874f5fa:	c3                   	ret
 874f5fb:	90                   	nop
 874f5fc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL_CTX::SetCipherList @ 0x874f4a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL_CTX::SetCipherList(char const*) */

char __thiscall yaSSL::SSL_CTX::SetCipherList(SSL_CTX *this,char *param_1)

{
  char *pcVar1;
  int iVar2;
  size_t __n;
  int iVar3;
  char local_65;
  int local_60;
  char local_4e [48];
  char local_1e [14];
  
  local_65 = '\0';
  if (param_1 == (char *)0x0) {
    return '\0';
  }
  local_1e._0_2_ = s_Generator__compressed___08dfbfb0._22_2_;
  local_60 = 0;
  do {
    pcVar1 = strstr(param_1,local_1e);
    if (pcVar1 == (char *)0x0) {
      __n = strlen(param_1);
      if (0x30 < __n) goto LAB_0874f5b0;
LAB_0874f509:
      strncpy(local_4e,param_1,__n);
      if (__n == 0x30) goto LAB_0874f5c4;
    }
    else {
      __n = (int)pcVar1 - (int)param_1;
      if (__n < 0x31) goto LAB_0874f509;
LAB_0874f5b0:
      strncpy(local_4e,param_1,0x30);
LAB_0874f5c4:
      __n = 0x2f;
    }
    local_4e[__n] = '\0';
    iVar3 = 0;
    do {
      iVar2 = strncmp(local_4e,(&cipher_names)[iVar3],0x30);
      if (iVar2 == 0) {
        this[local_60 + 0x19] = (SSL_CTX)0x0;
        this[local_60 + 0x1a] = SUB41(iVar3,0);
        local_60 = local_60 + 2;
        local_65 = '\x01';
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x80);
    if (pcVar1 == (char *)0x0) {
      if (local_65 == '\0') {
        s_Generator__compressed___08dfbfb0[0x16] = (char)s_Generator__compressed___08dfbfb0._22_2_;
        s_Generator__compressed___08dfbfb0[0x17] =
             SUB21(s_Generator__compressed___08dfbfb0._22_2_,1);
        return '\0';
      }
      this[0x18] = (SSL_CTX)0x1;
      *(int *)(this + 0x9c) = local_60;
      return local_65;
    }
    param_1 = pcVar1 + 1;
  } while( true );
}

```

---

## SetDH

```asm
// === 0874f600 yaSSL::SSL_CTX::SetDH  [0x0874f600-0x874f66f] ===
 874f600:	55                   	push   %ebp
 874f601:	89 e5                	mov    %esp,%ebp
 874f603:	83 ec 28             	sub    $0x28,%esp
 874f606:	89 7d fc             	mov    %edi,-0x4(%ebp)
 874f609:	8b 7d 0c             	mov    0xc(%ebp),%edi
 874f60c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 874f60f:	e8 e4 37 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874f614:	81 c3 84 d5 c1 00    	add    $0xc1d584,%ebx
 874f61a:	89 75 f8             	mov    %esi,-0x8(%ebp)
 874f61d:	8b 75 08             	mov    0x8(%ebp),%esi
 874f620:	8b 07                	mov    (%edi),%eax
 874f622:	89 44 24 04          	mov    %eax,0x4(%esp)
 874f626:	8d 86 a0 00 00 00    	lea    0xa0(%esi),%eax
 874f62c:	89 04 24             	mov    %eax,(%esp)
 874f62f:	e8 1c 99 04 00       	call   8798f50 <_ZN5yaSSL7IntegeraSERKS0_>
 874f634:	8b 47 04             	mov    0x4(%edi),%eax
 874f637:	89 44 24 04          	mov    %eax,0x4(%esp)
 874f63b:	8d 86 a4 00 00 00    	lea    0xa4(%esi),%eax
 874f641:	89 04 24             	mov    %eax,(%esp)
 874f644:	e8 07 99 04 00       	call   8798f50 <_ZN5yaSSL7IntegeraSERKS0_>
 874f649:	b8 01 00 00 00       	mov    $0x1,%eax
 874f64e:	c6 86 a8 00 00 00 01 	movb   $0x1,0xa8(%esi)
 874f655:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 874f658:	8b 75 f8             	mov    -0x8(%ebp),%esi
 874f65b:	8b 7d fc             	mov    -0x4(%ebp),%edi
 874f65e:	89 ec                	mov    %ebp,%esp
 874f660:	5d                   	pop    %ebp
 874f661:	c3                   	ret
 874f662:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 874f669:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::SSL_CTX::SetDH @ 0x874f600

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL_CTX::SetDH(yaSSL::DH const&) */

undefined4 __thiscall yaSSL::SSL_CTX::SetDH(SSL_CTX *this,DH *param_1)

{
  Integer::operator=((Integer *)(this + 0xa0),*(Integer **)param_1);
  Integer::operator=((Integer *)(this + 0xa4),*(Integer **)(param_1 + 4));
  this[0xa8] = (SSL_CTX)0x1;
  return 1;
}

```

---

## SetPasswordCb

```asm
// === 0874e4f0 yaSSL::SSL_CTX::SetPasswordCb  [0x0874e4f0-0x874e50f] ===
 874e4f0:	55                   	push   %ebp
 874e4f1:	89 e5                	mov    %esp,%ebp
 874e4f3:	8b 55 0c             	mov    0xc(%ebp),%edx
 874e4f6:	8b 45 08             	mov    0x8(%ebp),%eax
 874e4f9:	89 90 ac 00 00 00    	mov    %edx,0xac(%eax)
 874e4ff:	5d                   	pop    %ebp
 874e500:	c3                   	ret
 874e501:	90                   	nop
 874e502:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 874e509:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::SSL_CTX::SetPasswordCb @ 0x874e4f0

/* yaSSL::SSL_CTX::SetPasswordCb(int (*)(char*, int, int, void*)) */

void __thiscall
yaSSL::SSL_CTX::SetPasswordCb(SSL_CTX *this,_func_int_char_ptr_int_int_void_ptr *param_1)

{
  *(_func_int_char_ptr_int_int_void_ptr **)(this + 0xac) = param_1;
  return;
}

```

---

## SetSessionCacheFlushOff

```asm
// === 0874e570 yaSSL::SSL_CTX::SetSessionCacheFlushOff  [0x0874e570-0x874e57f] ===
 874e570:	55                   	push   %ebp
 874e571:	89 e5                	mov    %esp,%ebp
 874e573:	8b 45 08             	mov    0x8(%ebp),%eax
 874e576:	c6 80 b5 00 00 00 01 	movb   $0x1,0xb5(%eax)
 874e57d:	5d                   	pop    %ebp
 874e57e:	c3                   	ret
 874e57f:	90                   	nop

```

```c
// yaSSL::SSL_CTX::SetSessionCacheFlushOff @ 0x874e570

/* yaSSL::SSL_CTX::SetSessionCacheFlushOff() */

void __thiscall yaSSL::SSL_CTX::SetSessionCacheFlushOff(SSL_CTX *this)

{
  this[0xb5] = (SSL_CTX)0x1;
  return;
}

```

---

## SetSessionCacheOff

```asm
// === 0874e560 yaSSL::SSL_CTX::SetSessionCacheOff  [0x0874e560-0x874e56f] ===
 874e560:	55                   	push   %ebp
 874e561:	89 e5                	mov    %esp,%ebp
 874e563:	8b 45 08             	mov    0x8(%ebp),%eax
 874e566:	c6 80 b4 00 00 00 01 	movb   $0x1,0xb4(%eax)
 874e56d:	5d                   	pop    %ebp
 874e56e:	c3                   	ret
 874e56f:	90                   	nop

```

```c
// yaSSL::SSL_CTX::SetSessionCacheOff @ 0x874e560

/* yaSSL::SSL_CTX::SetSessionCacheOff() */

void __thiscall yaSSL::SSL_CTX::SetSessionCacheOff(SSL_CTX *this)

{
  this[0xb4] = (SSL_CTX)0x1;
  return;
}

```

---

## SetUserData

```asm
// === 0874e540 yaSSL::SSL_CTX::SetUserData  [0x0874e540-0x874e55f] ===
 874e540:	55                   	push   %ebp
 874e541:	89 e5                	mov    %esp,%ebp
 874e543:	8b 55 0c             	mov    0xc(%ebp),%edx
 874e546:	8b 45 08             	mov    0x8(%ebp),%eax
 874e549:	89 90 b0 00 00 00    	mov    %edx,0xb0(%eax)
 874e54f:	5d                   	pop    %ebp
 874e550:	c3                   	ret
 874e551:	90                   	nop
 874e552:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 874e559:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::SSL_CTX::SetUserData @ 0x874e540

/* yaSSL::SSL_CTX::SetUserData(void*) */

void __thiscall yaSSL::SSL_CTX::SetUserData(SSL_CTX *this,void *param_1)

{
  *(void **)(this + 0xb0) = param_1;
  return;
}

```

---

## getCert

```asm
// === 0874e480 yaSSL::SSL_CTX::getCert  [0x0874e480-0x874e48f] ===
 874e480:	55                   	push   %ebp
 874e481:	89 e5                	mov    %esp,%ebp
 874e483:	8b 45 08             	mov    0x8(%ebp),%eax
 874e486:	5d                   	pop    %ebp
 874e487:	8b 40 04             	mov    0x4(%eax),%eax
 874e48a:	c3                   	ret
 874e48b:	90                   	nop
 874e48c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL_CTX::getCert @ 0x874e480

/* yaSSL::SSL_CTX::getCert() const */

undefined4 __thiscall yaSSL::SSL_CTX::getCert(SSL_CTX *this)

{
  return *(undefined4 *)(this + 4);
}

```

---

## getKey

```asm
// === 0874e490 yaSSL::SSL_CTX::getKey  [0x0874e490-0x874e49f] ===
 874e490:	55                   	push   %ebp
 874e491:	89 e5                	mov    %esp,%ebp
 874e493:	8b 45 08             	mov    0x8(%ebp),%eax
 874e496:	5d                   	pop    %ebp
 874e497:	8b 40 08             	mov    0x8(%eax),%eax
 874e49a:	c3                   	ret
 874e49b:	90                   	nop
 874e49c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL_CTX::getKey @ 0x874e490

/* yaSSL::SSL_CTX::getKey() const */

undefined4 __thiscall yaSSL::SSL_CTX::getKey(SSL_CTX *this)

{
  return *(undefined4 *)(this + 8);
}

```

---

## getMethod

```asm
// === 0874e4a0 yaSSL::SSL_CTX::getMethod  [0x0874e4a0-0x874e4af] ===
 874e4a0:	55                   	push   %ebp
 874e4a1:	89 e5                	mov    %esp,%ebp
 874e4a3:	8b 45 08             	mov    0x8(%ebp),%eax
 874e4a6:	5d                   	pop    %ebp
 874e4a7:	8b 00                	mov    (%eax),%eax
 874e4a9:	c3                   	ret
 874e4aa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::SSL_CTX::getMethod @ 0x874e4a0

/* yaSSL::SSL_CTX::getMethod() const */

undefined4 __thiscall yaSSL::SSL_CTX::getMethod(SSL_CTX *this)

{
  return *(undefined4 *)this;
}

```

---

## getVerifyCallback

```asm
// === 0874e470 yaSSL::SSL_CTX::getVerifyCallback  [0x0874e470-0x874e47f] ===
 874e470:	55                   	push   %ebp
 874e471:	89 e5                	mov    %esp,%ebp
 874e473:	8b 45 08             	mov    0x8(%ebp),%eax
 874e476:	5d                   	pop    %ebp
 874e477:	8b 80 f8 00 00 00    	mov    0xf8(%eax),%eax
 874e47d:	c3                   	ret
 874e47e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::SSL_CTX::getVerifyCallback @ 0x874e470

/* yaSSL::SSL_CTX::getVerifyCallback() const */

undefined4 __thiscall yaSSL::SSL_CTX::getVerifyCallback(SSL_CTX *this)

{
  return *(undefined4 *)(this + 0xf8);
}

```

---

## setFailNoCert

```asm
// === 0874e5e0 yaSSL::SSL_CTX::setFailNoCert  [0x0874e5e0-0x874e60f] ===
 874e5e0:	55                   	push   %ebp
 874e5e1:	89 e5                	mov    %esp,%ebp
 874e5e3:	53                   	push   %ebx
 874e5e4:	83 ec 14             	sub    $0x14,%esp
 874e5e7:	8b 45 08             	mov    0x8(%ebp),%eax
 874e5ea:	e8 09 48 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874e5ef:	81 c3 a9 e5 c1 00    	add    $0xc1e5a9,%ebx
 874e5f5:	8b 00                	mov    (%eax),%eax
 874e5f7:	89 04 24             	mov    %eax,(%esp)
 874e5fa:	e8 11 fe ff ff       	call   874e410 <_ZN5yaSSL10SSL_METHOD13setFailNoCertEv>
 874e5ff:	83 c4 14             	add    $0x14,%esp
 874e602:	5b                   	pop    %ebx
 874e603:	5d                   	pop    %ebp
 874e604:	c3                   	ret
 874e605:	90                   	nop
 874e606:	8d 76 00             	lea    0x0(%esi),%esi
 874e609:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::SSL_CTX::setFailNoCert @ 0x874e5e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL_CTX::setFailNoCert() */

void __thiscall yaSSL::SSL_CTX::setFailNoCert(SSL_CTX *this)

{
  SSL_METHOD::setFailNoCert(*(SSL_METHOD **)this);
  return;
}

```

---

## setVerifyCallback

```asm
// === 0874e610 yaSSL::SSL_CTX::setVerifyCallback  [0x0874e610-0x874e62f] ===
 874e610:	55                   	push   %ebp
 874e611:	89 e5                	mov    %esp,%ebp
 874e613:	8b 55 0c             	mov    0xc(%ebp),%edx
 874e616:	8b 45 08             	mov    0x8(%ebp),%eax
 874e619:	89 90 f8 00 00 00    	mov    %edx,0xf8(%eax)
 874e61f:	5d                   	pop    %ebp
 874e620:	c3                   	ret
 874e621:	90                   	nop
 874e622:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 874e629:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::SSL_CTX::setVerifyCallback @ 0x874e610

/* yaSSL::SSL_CTX::setVerifyCallback(int (*)(int, yaSSL::X509_STORE_CTX*)) */

void __thiscall
yaSSL::SSL_CTX::setVerifyCallback(SSL_CTX *this,_func_int_int_X509_STORE_CTX_ptr *param_1)

{
  *(_func_int_int_X509_STORE_CTX_ptr **)(this + 0xf8) = param_1;
  return;
}

```

---

## setVerifyNone

```asm
// === 0874e5b0 yaSSL::SSL_CTX::setVerifyNone  [0x0874e5b0-0x874e5df] ===
 874e5b0:	55                   	push   %ebp
 874e5b1:	89 e5                	mov    %esp,%ebp
 874e5b3:	53                   	push   %ebx
 874e5b4:	83 ec 14             	sub    $0x14,%esp
 874e5b7:	8b 45 08             	mov    0x8(%ebp),%eax
 874e5ba:	e8 39 48 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874e5bf:	81 c3 d9 e5 c1 00    	add    $0xc1e5d9,%ebx
 874e5c5:	8b 00                	mov    (%eax),%eax
 874e5c7:	89 04 24             	mov    %eax,(%esp)
 874e5ca:	e8 31 fe ff ff       	call   874e400 <_ZN5yaSSL10SSL_METHOD13setVerifyNoneEv>
 874e5cf:	83 c4 14             	add    $0x14,%esp
 874e5d2:	5b                   	pop    %ebx
 874e5d3:	5d                   	pop    %ebp
 874e5d4:	c3                   	ret
 874e5d5:	90                   	nop
 874e5d6:	8d 76 00             	lea    0x0(%esi),%esi
 874e5d9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::SSL_CTX::setVerifyNone @ 0x874e5b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL_CTX::setVerifyNone() */

void __thiscall yaSSL::SSL_CTX::setVerifyNone(SSL_CTX *this)

{
  SSL_METHOD::setVerifyNone(*(SSL_METHOD **)this);
  return;
}

```

---

## setVerifyPeer

```asm
// === 0874e580 yaSSL::SSL_CTX::setVerifyPeer  [0x0874e580-0x874e5af] ===
 874e580:	55                   	push   %ebp
 874e581:	89 e5                	mov    %esp,%ebp
 874e583:	53                   	push   %ebx
 874e584:	83 ec 14             	sub    $0x14,%esp
 874e587:	8b 45 08             	mov    0x8(%ebp),%eax
 874e58a:	e8 69 48 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874e58f:	81 c3 09 e6 c1 00    	add    $0xc1e609,%ebx
 874e595:	8b 00                	mov    (%eax),%eax
 874e597:	89 04 24             	mov    %eax,(%esp)
 874e59a:	e8 51 fe ff ff       	call   874e3f0 <_ZN5yaSSL10SSL_METHOD13setVerifyPeerEv>
 874e59f:	83 c4 14             	add    $0x14,%esp
 874e5a2:	5b                   	pop    %ebx
 874e5a3:	5d                   	pop    %ebp
 874e5a4:	c3                   	ret
 874e5a5:	90                   	nop
 874e5a6:	8d 76 00             	lea    0x0(%esi),%esi
 874e5a9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::SSL_CTX::setVerifyPeer @ 0x874e580

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL_CTX::setVerifyPeer() */

void __thiscall yaSSL::SSL_CTX::setVerifyPeer(SSL_CTX *this)

{
  SSL_METHOD::setVerifyPeer(*(SSL_METHOD **)this);
  return;
}

```

---

## ~SSL_CTX

```asm
// === 08752bf0 yaSSL::SSL_CTX::~SSL_CTX  [0x08752bf0-0x8752cdf] ===
 8752bf0:	55                   	push   %ebp
 8752bf1:	89 e5                	mov    %esp,%ebp
 8752bf3:	57                   	push   %edi
 8752bf4:	56                   	push   %esi
 8752bf5:	53                   	push   %ebx
 8752bf6:	83 ec 1c             	sub    $0x1c,%esp
 8752bf9:	8b 55 08             	mov    0x8(%ebp),%edx
 8752bfc:	e8 f7 01 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8752c01:	81 c3 97 9f c1 00    	add    $0xc19f97,%ebx
 8752c07:	8b 02                	mov    (%edx),%eax
 8752c09:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8752c0e:	89 04 24             	mov    %eax,(%esp)
 8752c11:	e8 0a dc ff ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 8752c16:	8b 45 08             	mov    0x8(%ebp),%eax
 8752c19:	8b 70 04             	mov    0x4(%eax),%esi
 8752c1c:	85 f6                	test   %esi,%esi
 8752c1e:	74 08                	je     8752c28 <_ZN5yaSSL7SSL_CTXD1Ev+0x38>
 8752c20:	89 34 24             	mov    %esi,(%esp)
 8752c23:	e8 28 4c 04 00       	call   8797850 <_ZN5yaSSL4x509D1Ev>
 8752c28:	89 34 24             	mov    %esi,(%esp)
 8752c2b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8752c30:	e8 eb db ff ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 8752c35:	8b 55 08             	mov    0x8(%ebp),%edx
 8752c38:	8b 72 08             	mov    0x8(%edx),%esi
 8752c3b:	85 f6                	test   %esi,%esi
 8752c3d:	74 08                	je     8752c47 <_ZN5yaSSL7SSL_CTXD1Ev+0x57>
 8752c3f:	89 34 24             	mov    %esi,(%esp)
 8752c42:	e8 09 4c 04 00       	call   8797850 <_ZN5yaSSL4x509D1Ev>
 8752c47:	89 34 24             	mov    %esi,(%esp)
 8752c4a:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8752c4f:	e8 cc db ff ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 8752c54:	8b 45 08             	mov    0x8(%ebp),%eax
 8752c57:	8b 70 0c             	mov    0xc(%eax),%esi
 8752c5a:	85 f6                	test   %esi,%esi
 8752c5c:	74 2c                	je     8752c8a <_ZN5yaSSL7SSL_CTXD1Ev+0x9a>
 8752c5e:	66 90                	xchg   %ax,%ax
 8752c60:	8b 7e 08             	mov    0x8(%esi),%edi
 8752c63:	c7 46 08 00 00 00 00 	movl   $0x0,0x8(%esi)
 8752c6a:	85 ff                	test   %edi,%edi
 8752c6c:	74 08                	je     8752c76 <_ZN5yaSSL7SSL_CTXD1Ev+0x86>
 8752c6e:	89 3c 24             	mov    %edi,(%esp)
 8752c71:	e8 da 4b 04 00       	call   8797850 <_ZN5yaSSL4x509D1Ev>
 8752c76:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8752c7b:	89 3c 24             	mov    %edi,(%esp)
 8752c7e:	e8 9d db ff ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 8752c83:	8b 76 04             	mov    0x4(%esi),%esi
 8752c86:	85 f6                	test   %esi,%esi
 8752c88:	75 d6                	jne    8752c60 <_ZN5yaSSL7SSL_CTXD1Ev+0x70>
 8752c8a:	8b 45 08             	mov    0x8(%ebp),%eax
 8752c8d:	05 a4 00 00 00       	add    $0xa4,%eax
 8752c92:	89 04 24             	mov    %eax,(%esp)
 8752c95:	e8 e6 81 04 00       	call   879ae80 <_ZN5yaSSL7IntegerD1Ev>
 8752c9a:	8b 45 08             	mov    0x8(%ebp),%eax
 8752c9d:	05 a0 00 00 00       	add    $0xa0,%eax
 8752ca2:	89 04 24             	mov    %eax,(%esp)
 8752ca5:	e8 d6 81 04 00       	call   879ae80 <_ZN5yaSSL7IntegerD1Ev>
 8752caa:	8b 55 08             	mov    0x8(%ebp),%edx
 8752cad:	8b 42 0c             	mov    0xc(%edx),%eax
 8752cb0:	85 c0                	test   %eax,%eax
 8752cb2:	75 06                	jne    8752cba <_ZN5yaSSL7SSL_CTXD1Ev+0xca>
 8752cb4:	eb 18                	jmp    8752cce <_ZN5yaSSL7SSL_CTXD1Ev+0xde>
 8752cb6:	66 90                	xchg   %ax,%ax
 8752cb8:	89 f0                	mov    %esi,%eax
 8752cba:	8b 70 04             	mov    0x4(%eax),%esi
 8752cbd:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8752cc2:	89 04 24             	mov    %eax,(%esp)
 8752cc5:	e8 26 dc ff ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 8752cca:	85 f6                	test   %esi,%esi
 8752ccc:	75 ea                	jne    8752cb8 <_ZN5yaSSL7SSL_CTXD1Ev+0xc8>
 8752cce:	83 c4 1c             	add    $0x1c,%esp
 8752cd1:	5b                   	pop    %ebx
 8752cd2:	5e                   	pop    %esi
 8752cd3:	5f                   	pop    %edi
 8752cd4:	5d                   	pop    %ebp
 8752cd5:	c3                   	ret
 8752cd6:	8d 76 00             	lea    0x0(%esi),%esi
 8752cd9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::SSL_CTX::~SSL_CTX @ 0x8752bf0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL_CTX::~SSL_CTX() */

void __thiscall yaSSL::SSL_CTX::~SSL_CTX(SSL_CTX *this)

{
  x509 *pxVar1;
  int iVar2;
  int iVar3;
  
  operator_delete(*(undefined4 *)this,0);
  pxVar1 = *(x509 **)(this + 4);
  if (pxVar1 != (x509 *)0x0) {
    yaSSL::x509::~x509(pxVar1);
  }
  operator_delete(pxVar1,0);
  pxVar1 = *(x509 **)(this + 8);
  if (pxVar1 != (x509 *)0x0) {
    yaSSL::x509::~x509(pxVar1);
  }
  operator_delete(pxVar1,0);
  for (iVar2 = *(int *)(this + 0xc); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    pxVar1 = *(x509 **)(iVar2 + 8);
    *(undefined4 *)(iVar2 + 8) = 0;
    if (pxVar1 != (x509 *)0x0) {
      yaSSL::x509::~x509(pxVar1);
    }
    operator_delete(pxVar1,0);
  }
  Integer::~Integer((Integer *)(this + 0xa4));
  Integer::~Integer((Integer *)(this + 0xa0));
  iVar2 = *(int *)(this + 0xc);
  while (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 4);
    operator_delete__(iVar2,0);
    iVar2 = iVar3;
  }
  return;
}

```

