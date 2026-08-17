# yaSSL__Crypto

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 17

---

## Crypto

```asm
// === 0874f450 yaSSL::Crypto::Crypto  [0x0874f450-0x874f49f] ===
 874f450:	55                   	push   %ebp
 874f451:	89 e5                	mov    %esp,%ebp
 874f453:	83 ec 18             	sub    $0x18,%esp
 874f456:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 874f459:	e8 9a 39 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874f45e:	81 c3 3a d7 c1 00    	add    $0xc1d73a,%ebx
 874f464:	89 75 fc             	mov    %esi,-0x4(%ebp)
 874f467:	8b 75 08             	mov    0x8(%ebp),%esi
 874f46a:	8d 46 0c             	lea    0xc(%esi),%eax
 874f46d:	c7 06 00 00 00 00    	movl   $0x0,(%esi)
 874f473:	c7 46 04 00 00 00 00 	movl   $0x0,0x4(%esi)
 874f47a:	c7 46 08 00 00 00 00 	movl   $0x0,0x8(%esi)
 874f481:	83 c6 10             	add    $0x10,%esi
 874f484:	89 04 24             	mov    %eax,(%esp)
 874f487:	e8 b4 9b 04 00       	call   8799040 <_ZN5yaSSL10RandomPoolC1Ev>
 874f48c:	89 34 24             	mov    %esi,(%esp)
 874f48f:	e8 4c 84 04 00       	call   87978e0 <_ZN5yaSSL11CertManagerC1Ev>
 874f494:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 874f497:	8b 75 fc             	mov    -0x4(%ebp),%esi
 874f49a:	89 ec                	mov    %ebp,%esp
 874f49c:	5d                   	pop    %ebp
 874f49d:	c3                   	ret
 874f49e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::Crypto::Crypto @ 0x874f450

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Crypto::Crypto() */

void __thiscall yaSSL::Crypto::Crypto(Crypto *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  RandomPool::RandomPool((RandomPool *)(this + 0xc));
  CertManager::CertManager((CertManager *)(this + 0x10));
  return;
}

```

---

## DhSet

```asm
// === 0874e800 yaSSL::Crypto::DhSet  [0x0874e800-0x874e80f] ===
 874e800:	55                   	push   %ebp
 874e801:	89 e5                	mov    %esp,%ebp
 874e803:	8b 45 08             	mov    0x8(%ebp),%eax
 874e806:	5d                   	pop    %ebp
 874e807:	8b 50 08             	mov    0x8(%eax),%edx
 874e80a:	85 d2                	test   %edx,%edx
 874e80c:	0f 95 c0             	setne  %al
 874e80f:	c3                   	ret

```

```c
// yaSSL::Crypto::DhSet @ 0x874e800

/* yaSSL::Crypto::DhSet() */

bool __thiscall yaSSL::Crypto::DhSet(Crypto *this)

{
  return *(int *)(this + 8) != 0;
}

```

---

## SetDH

```asm
// === 0874e7f0 yaSSL::Crypto::SetDH  [0x0874e7f0-0x874e7ff] ===
 874e7f0:	55                   	push   %ebp
 874e7f1:	89 e5                	mov    %esp,%ebp
 874e7f3:	8b 55 0c             	mov    0xc(%ebp),%edx
 874e7f6:	8b 45 08             	mov    0x8(%ebp),%eax
 874e7f9:	89 50 08             	mov    %edx,0x8(%eax)
 874e7fc:	5d                   	pop    %ebp
 874e7fd:	c3                   	ret
 874e7fe:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::Crypto::SetDH @ 0x874e7f0

/* yaSSL::Crypto::SetDH(yaSSL::DiffieHellman*) */

void __thiscall yaSSL::Crypto::SetDH(Crypto *this,DiffieHellman *param_1)

{
  *(DiffieHellman **)(this + 8) = param_1;
  return;
}

```

---

## SetDH_08750ce0

```asm
// === 08750ce0 yaSSL::Crypto::SetDH  [0x08750ce0-0x8750d4f] ===
 8750ce0:	55                   	push   %ebp
 8750ce1:	89 e5                	mov    %esp,%ebp
 8750ce3:	83 ec 38             	sub    $0x38,%esp
 8750ce6:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8750ce9:	8b 75 0c             	mov    0xc(%ebp),%esi
 8750cec:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8750cef:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8750cf2:	8b 7d 08             	mov    0x8(%ebp),%edi
 8750cf5:	e8 fe 20 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8750cfa:	81 c3 9e be c1 00    	add    $0xc1be9e,%ebx
 8750d00:	80 7e 08 00          	cmpb   $0x0,0x8(%esi)
 8750d04:	74 34                	je     8750d3a <_ZN5yaSSL6Crypto5SetDHERKNS_8DH_ParmsE+0x5a>
 8750d06:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8750d0b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8750d12:	e8 89 ff ff ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8750d17:	8d 57 0c             	lea    0xc(%edi),%edx
 8750d1a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8750d1e:	8d 56 04             	lea    0x4(%esi),%edx
 8750d21:	89 54 24 08          	mov    %edx,0x8(%esp)
 8750d25:	89 74 24 04          	mov    %esi,0x4(%esp)
 8750d29:	89 04 24             	mov    %eax,(%esp)
 8750d2c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8750d2f:	e8 dc 92 04 00       	call   879a010 <_ZN5yaSSL13DiffieHellmanC1ERKNS_7IntegerES3_RKNS_10RandomPoolE>
 8750d34:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8750d37:	89 47 08             	mov    %eax,0x8(%edi)
 8750d3a:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8750d3d:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8750d40:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8750d43:	89 ec                	mov    %ebp,%esp
 8750d45:	5d                   	pop    %ebp
 8750d46:	c3                   	ret
 8750d47:	90                   	nop
 8750d48:	90                   	nop
 8750d49:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Crypto::SetDH @ 0x8750ce0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Crypto::SetDH(yaSSL::DH_Parms const&) */

void __thiscall yaSSL::Crypto::SetDH(Crypto *this,DH_Parms *param_1)

{
  DiffieHellman *this_00;
  uint in_stack_ffffffc8;
  
  if (param_1[8] != (DH_Parms)0x0) {
    this_00 = operator_new(4,in_stack_ffffffc8 & 0xffffff00);
    DiffieHellman::DiffieHellman
              (this_00,(Integer *)param_1,(Integer *)(param_1 + 4),(RandomPool *)(this + 0xc));
    *(DiffieHellman **)(this + 8) = this_00;
  }
  return;
}

```

---

## get_certManager

```asm
// === 0874e790 yaSSL::Crypto::get_certManager  [0x0874e790-0x874e79f] ===
 874e790:	55                   	push   %ebp
 874e791:	89 e5                	mov    %esp,%ebp
 874e793:	8b 45 08             	mov    0x8(%ebp),%eax
 874e796:	5d                   	pop    %ebp
 874e797:	83 c0 10             	add    $0x10,%eax
 874e79a:	c3                   	ret
 874e79b:	90                   	nop
 874e79c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Crypto::get_certManager @ 0x874e790

/* yaSSL::Crypto::get_certManager() const */

Crypto * __thiscall yaSSL::Crypto::get_certManager(Crypto *this)

{
  return this + 0x10;
}

```

---

## get_cipher

```asm
// === 0874e760 yaSSL::Crypto::get_cipher  [0x0874e760-0x874e76f] ===
 874e760:	55                   	push   %ebp
 874e761:	89 e5                	mov    %esp,%ebp
 874e763:	8b 45 08             	mov    0x8(%ebp),%eax
 874e766:	5d                   	pop    %ebp
 874e767:	8b 40 04             	mov    0x4(%eax),%eax
 874e76a:	c3                   	ret
 874e76b:	90                   	nop
 874e76c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Crypto::get_cipher @ 0x874e760

/* yaSSL::Crypto::get_cipher() const */

undefined4 __thiscall yaSSL::Crypto::get_cipher(Crypto *this)

{
  return *(undefined4 *)(this + 4);
}

```

---

## get_dh

```asm
// === 0874e770 yaSSL::Crypto::get_dh  [0x0874e770-0x874e77f] ===
 874e770:	55                   	push   %ebp
 874e771:	89 e5                	mov    %esp,%ebp
 874e773:	8b 45 08             	mov    0x8(%ebp),%eax
 874e776:	5d                   	pop    %ebp
 874e777:	8b 40 08             	mov    0x8(%eax),%eax
 874e77a:	c3                   	ret
 874e77b:	90                   	nop
 874e77c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Crypto::get_dh @ 0x874e770

/* yaSSL::Crypto::get_dh() const */

undefined4 __thiscall yaSSL::Crypto::get_dh(Crypto *this)

{
  return *(undefined4 *)(this + 8);
}

```

---

## get_digest

```asm
// === 0874e750 yaSSL::Crypto::get_digest  [0x0874e750-0x874e75f] ===
 874e750:	55                   	push   %ebp
 874e751:	89 e5                	mov    %esp,%ebp
 874e753:	8b 45 08             	mov    0x8(%ebp),%eax
 874e756:	5d                   	pop    %ebp
 874e757:	8b 00                	mov    (%eax),%eax
 874e759:	c3                   	ret
 874e75a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::Crypto::get_digest @ 0x874e750

/* yaSSL::Crypto::get_digest() const */

undefined4 __thiscall yaSSL::Crypto::get_digest(Crypto *this)

{
  return *(undefined4 *)this;
}

```

---

## get_random

```asm
// === 0874e780 yaSSL::Crypto::get_random  [0x0874e780-0x874e78f] ===
 874e780:	55                   	push   %ebp
 874e781:	89 e5                	mov    %esp,%ebp
 874e783:	8b 45 08             	mov    0x8(%ebp),%eax
 874e786:	5d                   	pop    %ebp
 874e787:	83 c0 0c             	add    $0xc,%eax
 874e78a:	c3                   	ret
 874e78b:	90                   	nop
 874e78c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Crypto::get_random @ 0x874e780

/* yaSSL::Crypto::get_random() const */

Crypto * __thiscall yaSSL::Crypto::get_random(Crypto *this)

{
  return this + 0xc;
}

```

---

## setCipher

```asm
// === 0874e820 yaSSL::Crypto::setCipher  [0x0874e820-0x874e82f] ===
 874e820:	55                   	push   %ebp
 874e821:	89 e5                	mov    %esp,%ebp
 874e823:	8b 55 0c             	mov    0xc(%ebp),%edx
 874e826:	8b 45 08             	mov    0x8(%ebp),%eax
 874e829:	89 50 04             	mov    %edx,0x4(%eax)
 874e82c:	5d                   	pop    %ebp
 874e82d:	c3                   	ret
 874e82e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::Crypto::setCipher @ 0x874e820

/* yaSSL::Crypto::setCipher(yaSSL::BulkCipher*) */

void __thiscall yaSSL::Crypto::setCipher(Crypto *this,BulkCipher *param_1)

{
  *(BulkCipher **)(this + 4) = param_1;
  return;
}

```

---

## setDigest

```asm
// === 0874e810 yaSSL::Crypto::setDigest  [0x0874e810-0x874e81f] ===
 874e810:	55                   	push   %ebp
 874e811:	89 e5                	mov    %esp,%ebp
 874e813:	8b 55 0c             	mov    0xc(%ebp),%edx
 874e816:	8b 45 08             	mov    0x8(%ebp),%eax
 874e819:	89 10                	mov    %edx,(%eax)
 874e81b:	5d                   	pop    %ebp
 874e81c:	c3                   	ret
 874e81d:	90                   	nop
 874e81e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::Crypto::setDigest @ 0x874e810

/* yaSSL::Crypto::setDigest(yaSSL::Digest*) */

void __thiscall yaSSL::Crypto::setDigest(Crypto *this,Digest *param_1)

{
  *(Digest **)this = param_1;
  return;
}

```

---

## use_certManager

```asm
// === 0874e7e0 yaSSL::Crypto::use_certManager  [0x0874e7e0-0x874e7ef] ===
 874e7e0:	55                   	push   %ebp
 874e7e1:	89 e5                	mov    %esp,%ebp
 874e7e3:	8b 45 08             	mov    0x8(%ebp),%eax
 874e7e6:	5d                   	pop    %ebp
 874e7e7:	83 c0 10             	add    $0x10,%eax
 874e7ea:	c3                   	ret
 874e7eb:	90                   	nop
 874e7ec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Crypto::use_certManager @ 0x874e7e0

/* yaSSL::Crypto::use_certManager() */

Crypto * __thiscall yaSSL::Crypto::use_certManager(Crypto *this)

{
  return this + 0x10;
}

```

---

## use_cipher

```asm
// === 0874e7b0 yaSSL::Crypto::use_cipher  [0x0874e7b0-0x874e7bf] ===
 874e7b0:	55                   	push   %ebp
 874e7b1:	89 e5                	mov    %esp,%ebp
 874e7b3:	8b 45 08             	mov    0x8(%ebp),%eax
 874e7b6:	5d                   	pop    %ebp
 874e7b7:	8b 40 04             	mov    0x4(%eax),%eax
 874e7ba:	c3                   	ret
 874e7bb:	90                   	nop
 874e7bc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Crypto::use_cipher @ 0x874e7b0

/* yaSSL::Crypto::use_cipher() */

undefined4 __thiscall yaSSL::Crypto::use_cipher(Crypto *this)

{
  return *(undefined4 *)(this + 4);
}

```

---

## use_dh

```asm
// === 0874e7c0 yaSSL::Crypto::use_dh  [0x0874e7c0-0x874e7cf] ===
 874e7c0:	55                   	push   %ebp
 874e7c1:	89 e5                	mov    %esp,%ebp
 874e7c3:	8b 45 08             	mov    0x8(%ebp),%eax
 874e7c6:	5d                   	pop    %ebp
 874e7c7:	8b 40 08             	mov    0x8(%eax),%eax
 874e7ca:	c3                   	ret
 874e7cb:	90                   	nop
 874e7cc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Crypto::use_dh @ 0x874e7c0

/* yaSSL::Crypto::use_dh() */

undefined4 __thiscall yaSSL::Crypto::use_dh(Crypto *this)

{
  return *(undefined4 *)(this + 8);
}

```

---

## use_digest

```asm
// === 0874e7a0 yaSSL::Crypto::use_digest  [0x0874e7a0-0x874e7af] ===
 874e7a0:	55                   	push   %ebp
 874e7a1:	89 e5                	mov    %esp,%ebp
 874e7a3:	8b 45 08             	mov    0x8(%ebp),%eax
 874e7a6:	5d                   	pop    %ebp
 874e7a7:	8b 00                	mov    (%eax),%eax
 874e7a9:	c3                   	ret
 874e7aa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::Crypto::use_digest @ 0x874e7a0

/* yaSSL::Crypto::use_digest() */

undefined4 __thiscall yaSSL::Crypto::use_digest(Crypto *this)

{
  return *(undefined4 *)this;
}

```

---

## use_random

```asm
// === 0874e7d0 yaSSL::Crypto::use_random  [0x0874e7d0-0x874e7df] ===
 874e7d0:	55                   	push   %ebp
 874e7d1:	89 e5                	mov    %esp,%ebp
 874e7d3:	8b 45 08             	mov    0x8(%ebp),%eax
 874e7d6:	5d                   	pop    %ebp
 874e7d7:	83 c0 0c             	add    $0xc,%eax
 874e7da:	c3                   	ret
 874e7db:	90                   	nop
 874e7dc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Crypto::use_random @ 0x874e7d0

/* yaSSL::Crypto::use_random() */

Crypto * __thiscall yaSSL::Crypto::use_random(Crypto *this)

{
  return this + 0xc;
}

```

---

## ~Crypto

```asm
// === 08750850 yaSSL::Crypto::~Crypto  [0x08750850-0x87508ef] ===
 8750850:	55                   	push   %ebp
 8750851:	89 e5                	mov    %esp,%ebp
 8750853:	83 ec 28             	sub    $0x28,%esp
 8750856:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8750859:	8b 75 08             	mov    0x8(%ebp),%esi
 875085c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 875085f:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8750862:	e8 91 25 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8750867:	81 c3 31 c3 c1 00    	add    $0xc1c331,%ebx
 875086d:	8b 7e 08             	mov    0x8(%esi),%edi
 8750870:	85 ff                	test   %edi,%edi
 8750872:	74 08                	je     875087c <_ZN5yaSSL6CryptoD1Ev+0x2c>
 8750874:	89 3c 24             	mov    %edi,(%esp)
 8750877:	e8 74 a6 04 00       	call   879aef0 <_ZN5yaSSL13DiffieHellmanD1Ev>
 875087c:	89 3c 24             	mov    %edi,(%esp)
 875087f:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8750884:	e8 97 ff ff ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 8750889:	8b 7e 04             	mov    0x4(%esi),%edi
 875088c:	85 ff                	test   %edi,%edi
 875088e:	74 08                	je     8750898 <_ZN5yaSSL6CryptoD1Ev+0x48>
 8750890:	8b 07                	mov    (%edi),%eax
 8750892:	89 3c 24             	mov    %edi,(%esp)
 8750895:	ff 50 1c             	call   *0x1c(%eax)
 8750898:	89 3c 24             	mov    %edi,(%esp)
 875089b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87508a0:	e8 7b ff ff ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 87508a5:	8b 3e                	mov    (%esi),%edi
 87508a7:	85 ff                	test   %edi,%edi
 87508a9:	74 08                	je     87508b3 <_ZN5yaSSL6CryptoD1Ev+0x63>
 87508ab:	8b 07                	mov    (%edi),%eax
 87508ad:	89 3c 24             	mov    %edi,(%esp)
 87508b0:	ff 50 14             	call   *0x14(%eax)
 87508b3:	89 3c 24             	mov    %edi,(%esp)
 87508b6:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87508bb:	e8 60 ff ff ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 87508c0:	8d 46 10             	lea    0x10(%esi),%eax
 87508c3:	83 c6 0c             	add    $0xc,%esi
 87508c6:	89 04 24             	mov    %eax,(%esp)
 87508c9:	e8 a2 70 04 00       	call   8797970 <_ZN5yaSSL11CertManagerD1Ev>
 87508ce:	89 34 24             	mov    %esi,(%esp)
 87508d1:	e8 2a 87 04 00       	call   8799000 <_ZN5yaSSL10RandomPoolD1Ev>
 87508d6:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87508d9:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87508dc:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87508df:	89 ec                	mov    %ebp,%esp
 87508e1:	5d                   	pop    %ebp
 87508e2:	c3                   	ret
 87508e3:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87508e9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::Crypto::~Crypto @ 0x8750850

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Crypto::~Crypto() */

void __thiscall yaSSL::Crypto::~Crypto(Crypto *this)

{
  DiffieHellman *this_00;
  int *piVar1;
  
  this_00 = *(DiffieHellman **)(this + 8);
  if (this_00 != (DiffieHellman *)0x0) {
    DiffieHellman::~DiffieHellman(this_00);
  }
  operator_delete(this_00,0);
  piVar1 = *(int **)(this + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1);
  }
  operator_delete(piVar1,0);
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(piVar1);
  }
  operator_delete(piVar1,0);
  CertManager::~CertManager((CertManager *)(this + 0x10));
  RandomPool::~RandomPool((RandomPool *)(this + 0xc));
  return;
}

```

