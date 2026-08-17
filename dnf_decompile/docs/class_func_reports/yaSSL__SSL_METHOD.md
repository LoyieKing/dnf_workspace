# yaSSL__SSL_METHOD

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## SSL_METHOD

```asm
// === 0874e390 yaSSL::SSL_METHOD::SSL_METHOD  [0x0874e390-0x874e3bf] ===
 874e390:	55                   	push   %ebp
 874e391:	89 e5                	mov    %esp,%ebp
 874e393:	0f b7 55 10          	movzwl 0x10(%ebp),%edx
 874e397:	8b 45 08             	mov    0x8(%ebp),%eax
 874e39a:	66 89 10             	mov    %dx,(%eax)
 874e39d:	8b 55 0c             	mov    0xc(%ebp),%edx
 874e3a0:	c6 40 08 00          	movb   $0x0,0x8(%eax)
 874e3a4:	c6 40 09 00          	movb   $0x0,0x9(%eax)
 874e3a8:	c6 40 0a 00          	movb   $0x0,0xa(%eax)
 874e3ac:	89 50 04             	mov    %edx,0x4(%eax)
 874e3af:	8b 55 14             	mov    0x14(%ebp),%edx
 874e3b2:	88 50 0b             	mov    %dl,0xb(%eax)
 874e3b5:	5d                   	pop    %ebp
 874e3b6:	c3                   	ret
 874e3b7:	90                   	nop
 874e3b8:	90                   	nop
 874e3b9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL_METHOD::SSL_METHOD @ 0x874e390

/* yaSSL::SSL_METHOD::SSL_METHOD(yaSSL::ConnectionEnd, yaSSL::ProtocolVersion, bool) */

void __thiscall
yaSSL::SSL_METHOD::SSL_METHOD
          (SSL_METHOD *this,undefined4 param_2,undefined2 param_3,SSL_METHOD param_4)

{
  *(undefined2 *)this = param_3;
  this[8] = (SSL_METHOD)0x0;
  this[9] = (SSL_METHOD)0x0;
  this[10] = (SSL_METHOD)0x0;
  *(undefined4 *)(this + 4) = param_2;
  this[0xb] = param_4;
  return;
}

```

---

## failNoCert

```asm
// === 0874e440 yaSSL::SSL_METHOD::failNoCert  [0x0874e440-0x874e44f] ===
 874e440:	55                   	push   %ebp
 874e441:	89 e5                	mov    %esp,%ebp
 874e443:	8b 45 08             	mov    0x8(%ebp),%eax
 874e446:	5d                   	pop    %ebp
 874e447:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 874e44b:	c3                   	ret
 874e44c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL_METHOD::failNoCert @ 0x874e440

/* yaSSL::SSL_METHOD::failNoCert() const */

SSL_METHOD __thiscall yaSSL::SSL_METHOD::failNoCert(SSL_METHOD *this)

{
  return this[10];
}

```

---

## getSide

```asm
// === 0874e3e0 yaSSL::SSL_METHOD::getSide  [0x0874e3e0-0x874e3ef] ===
 874e3e0:	55                   	push   %ebp
 874e3e1:	89 e5                	mov    %esp,%ebp
 874e3e3:	8b 45 08             	mov    0x8(%ebp),%eax
 874e3e6:	5d                   	pop    %ebp
 874e3e7:	8b 40 04             	mov    0x4(%eax),%eax
 874e3ea:	c3                   	ret
 874e3eb:	90                   	nop
 874e3ec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL_METHOD::getSide @ 0x874e3e0

/* yaSSL::SSL_METHOD::getSide() const */

undefined4 __thiscall yaSSL::SSL_METHOD::getSide(SSL_METHOD *this)

{
  return *(undefined4 *)(this + 4);
}

```

---

## getVersion

```asm
// === 0874e3c0 yaSSL::SSL_METHOD::getVersion  [0x0874e3c0-0x874e3df] ===
 874e3c0:	55                   	push   %ebp
 874e3c1:	89 e5                	mov    %esp,%ebp
 874e3c3:	8b 55 0c             	mov    0xc(%ebp),%edx
 874e3c6:	8b 45 08             	mov    0x8(%ebp),%eax
 874e3c9:	0f b7 12             	movzwl (%edx),%edx
 874e3cc:	66 89 10             	mov    %dx,(%eax)
 874e3cf:	5d                   	pop    %ebp
 874e3d0:	c2 04 00             	ret    $0x4
 874e3d3:	90                   	nop
 874e3d4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874e3da:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::SSL_METHOD::getVersion @ 0x874e3c0

/* yaSSL::SSL_METHOD::getVersion() const */

void yaSSL::SSL_METHOD::getVersion(void)

{
  undefined2 *in_stack_00000004;
  undefined2 *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000008;
  return;
}

```

---

## multipleProtocol

```asm
// === 0874e450 yaSSL::SSL_METHOD::multipleProtocol  [0x0874e450-0x874e45f] ===
 874e450:	55                   	push   %ebp
 874e451:	89 e5                	mov    %esp,%ebp
 874e453:	8b 45 08             	mov    0x8(%ebp),%eax
 874e456:	5d                   	pop    %ebp
 874e457:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 874e45b:	c3                   	ret
 874e45c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL_METHOD::multipleProtocol @ 0x874e450

/* yaSSL::SSL_METHOD::multipleProtocol() const */

SSL_METHOD __thiscall yaSSL::SSL_METHOD::multipleProtocol(SSL_METHOD *this)

{
  return this[0xb];
}

```

---

## setFailNoCert

```asm
// === 0874e410 yaSSL::SSL_METHOD::setFailNoCert  [0x0874e410-0x874e41f] ===
 874e410:	55                   	push   %ebp
 874e411:	89 e5                	mov    %esp,%ebp
 874e413:	8b 45 08             	mov    0x8(%ebp),%eax
 874e416:	c6 40 0a 01          	movb   $0x1,0xa(%eax)
 874e41a:	5d                   	pop    %ebp
 874e41b:	c3                   	ret
 874e41c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL_METHOD::setFailNoCert @ 0x874e410

/* yaSSL::SSL_METHOD::setFailNoCert() */

void __thiscall yaSSL::SSL_METHOD::setFailNoCert(SSL_METHOD *this)

{
  this[10] = (SSL_METHOD)0x1;
  return;
}

```

---

## setVerifyNone

```asm
// === 0874e400 yaSSL::SSL_METHOD::setVerifyNone  [0x0874e400-0x874e40f] ===
 874e400:	55                   	push   %ebp
 874e401:	89 e5                	mov    %esp,%ebp
 874e403:	8b 45 08             	mov    0x8(%ebp),%eax
 874e406:	c6 40 09 01          	movb   $0x1,0x9(%eax)
 874e40a:	5d                   	pop    %ebp
 874e40b:	c3                   	ret
 874e40c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL_METHOD::setVerifyNone @ 0x874e400

/* yaSSL::SSL_METHOD::setVerifyNone() */

void __thiscall yaSSL::SSL_METHOD::setVerifyNone(SSL_METHOD *this)

{
  this[9] = (SSL_METHOD)0x1;
  return;
}

```

---

## setVerifyPeer

```asm
// === 0874e3f0 yaSSL::SSL_METHOD::setVerifyPeer  [0x0874e3f0-0x874e3ff] ===
 874e3f0:	55                   	push   %ebp
 874e3f1:	89 e5                	mov    %esp,%ebp
 874e3f3:	8b 45 08             	mov    0x8(%ebp),%eax
 874e3f6:	c6 40 08 01          	movb   $0x1,0x8(%eax)
 874e3fa:	5d                   	pop    %ebp
 874e3fb:	c3                   	ret
 874e3fc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL_METHOD::setVerifyPeer @ 0x874e3f0

/* yaSSL::SSL_METHOD::setVerifyPeer() */

void __thiscall yaSSL::SSL_METHOD::setVerifyPeer(SSL_METHOD *this)

{
  this[8] = (SSL_METHOD)0x1;
  return;
}

```

---

## verifyNone

```asm
// === 0874e430 yaSSL::SSL_METHOD::verifyNone  [0x0874e430-0x874e43f] ===
 874e430:	55                   	push   %ebp
 874e431:	89 e5                	mov    %esp,%ebp
 874e433:	8b 45 08             	mov    0x8(%ebp),%eax
 874e436:	5d                   	pop    %ebp
 874e437:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 874e43b:	c3                   	ret
 874e43c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL_METHOD::verifyNone @ 0x874e430

/* yaSSL::SSL_METHOD::verifyNone() const */

SSL_METHOD __thiscall yaSSL::SSL_METHOD::verifyNone(SSL_METHOD *this)

{
  return this[9];
}

```

---

## verifyPeer

```asm
// === 0874e420 yaSSL::SSL_METHOD::verifyPeer  [0x0874e420-0x874e42f] ===
 874e420:	55                   	push   %ebp
 874e421:	89 e5                	mov    %esp,%ebp
 874e423:	8b 45 08             	mov    0x8(%ebp),%eax
 874e426:	5d                   	pop    %ebp
 874e427:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 874e42b:	c3                   	ret
 874e42c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SSL_METHOD::verifyPeer @ 0x874e420

/* yaSSL::SSL_METHOD::verifyPeer() const */

SSL_METHOD __thiscall yaSSL::SSL_METHOD::verifyPeer(SSL_METHOD *this)

{
  return this[8];
}

```

