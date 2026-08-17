# yaSSL__sslFactory

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## getClientKey

```asm
// === 0874dfb0 yaSSL::sslFactory::getClientKey  [0x0874dfb0-0x874dfbf] ===
 874dfb0:	55                   	push   %ebp
 874dfb1:	89 e5                	mov    %esp,%ebp
 874dfb3:	8b 45 08             	mov    0x8(%ebp),%eax
 874dfb6:	5d                   	pop    %ebp
 874dfb7:	83 c0 24             	add    $0x24,%eax
 874dfba:	c3                   	ret
 874dfbb:	90                   	nop
 874dfbc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::sslFactory::getClientKey @ 0x874dfb0

/* yaSSL::sslFactory::getClientKey() const */

sslFactory * __thiscall yaSSL::sslFactory::getClientKey(sslFactory *this)

{
  return this + 0x24;
}

```

---

## getHandShake

```asm
// === 0874df90 yaSSL::sslFactory::getHandShake  [0x0874df90-0x874df9f] ===
 874df90:	55                   	push   %ebp
 874df91:	89 e5                	mov    %esp,%ebp
 874df93:	8b 45 08             	mov    0x8(%ebp),%eax
 874df96:	5d                   	pop    %ebp
 874df97:	83 c0 0c             	add    $0xc,%eax
 874df9a:	c3                   	ret
 874df9b:	90                   	nop
 874df9c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::sslFactory::getHandShake @ 0x874df90

/* yaSSL::sslFactory::getHandShake() const */

sslFactory * __thiscall yaSSL::sslFactory::getHandShake(sslFactory *this)

{
  return this + 0xc;
}

```

---

## getMessage

```asm
// === 0874df80 yaSSL::sslFactory::getMessage  [0x0874df80-0x874df8f] ===
 874df80:	55                   	push   %ebp
 874df81:	89 e5                	mov    %esp,%ebp
 874df83:	8b 45 08             	mov    0x8(%ebp),%eax
 874df86:	5d                   	pop    %ebp
 874df87:	c3                   	ret
 874df88:	90                   	nop
 874df89:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::sslFactory::getMessage @ 0x874df80

/* yaSSL::sslFactory::getMessage() const */

sslFactory * __thiscall yaSSL::sslFactory::getMessage(sslFactory *this)

{
  return this;
}

```

---

## getServerKey

```asm
// === 0874dfa0 yaSSL::sslFactory::getServerKey  [0x0874dfa0-0x874dfaf] ===
 874dfa0:	55                   	push   %ebp
 874dfa1:	89 e5                	mov    %esp,%ebp
 874dfa3:	8b 45 08             	mov    0x8(%ebp),%eax
 874dfa6:	5d                   	pop    %ebp
 874dfa7:	83 c0 18             	add    $0x18,%eax
 874dfaa:	c3                   	ret
 874dfab:	90                   	nop
 874dfac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::sslFactory::getServerKey @ 0x874dfa0

/* yaSSL::sslFactory::getServerKey() const */

sslFactory * __thiscall yaSSL::sslFactory::getServerKey(sslFactory *this)

{
  return this + 0x18;
}

```

---

## sslFactory

```asm
// === 08750780 yaSSL::sslFactory::sslFactory  [0x08750780-0x875081f] ===
 8750780:	55                   	push   %ebp
 8750781:	89 e5                	mov    %esp,%ebp
 8750783:	56                   	push   %esi
 8750784:	53                   	push   %ebx
 8750785:	e8 6e 26 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875078a:	81 c3 0e c4 c1 00    	add    $0xc1c40e,%ebx
 8750790:	83 ec 10             	sub    $0x10,%esp
 8750793:	8b 75 08             	mov    0x8(%ebp),%esi
 8750796:	c7 06 00 00 00 00    	movl   $0x0,(%esi)
 875079c:	c7 46 04 00 00 00 00 	movl   $0x0,0x4(%esi)
 87507a3:	c7 46 08 00 00 00 00 	movl   $0x0,0x8(%esi)
 87507aa:	89 34 24             	mov    %esi,(%esp)
 87507ad:	e8 ee bd ff ff       	call   874c5a0 <_ZN5yaSSL18InitMessageFactoryERNS_7FactoryINS_7MessageEiPFPS1_vEEE>
 87507b2:	8d 46 0c             	lea    0xc(%esi),%eax
 87507b5:	c7 46 0c 00 00 00 00 	movl   $0x0,0xc(%esi)
 87507bc:	c7 46 10 00 00 00 00 	movl   $0x0,0x10(%esi)
 87507c3:	c7 46 14 00 00 00 00 	movl   $0x0,0x14(%esi)
 87507ca:	89 04 24             	mov    %eax,(%esp)
 87507cd:	e8 4e c9 ff ff       	call   874d120 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE>
 87507d2:	8d 46 18             	lea    0x18(%esi),%eax
 87507d5:	c7 46 18 00 00 00 00 	movl   $0x0,0x18(%esi)
 87507dc:	c7 46 1c 00 00 00 00 	movl   $0x0,0x1c(%esi)
 87507e3:	c7 46 20 00 00 00 00 	movl   $0x0,0x20(%esi)
 87507ea:	89 04 24             	mov    %eax,(%esp)
 87507ed:	e8 2e b8 ff ff       	call   874c020 <_ZN5yaSSL20InitServerKeyFactoryERNS_7FactoryINS_13ServerKeyBaseEiPFPS1_vEEE>
 87507f2:	c7 46 24 00 00 00 00 	movl   $0x0,0x24(%esi)
 87507f9:	c7 46 28 00 00 00 00 	movl   $0x0,0x28(%esi)
 8750800:	c7 46 2c 00 00 00 00 	movl   $0x0,0x2c(%esi)
 8750807:	83 c6 24             	add    $0x24,%esi
 875080a:	89 34 24             	mov    %esi,(%esp)
 875080d:	e8 ce ba ff ff       	call   874c2e0 <_ZN5yaSSL20InitClientKeyFactoryERNS_7FactoryINS_13ClientKeyBaseEiPFPS1_vEEE>
 8750812:	83 c4 10             	add    $0x10,%esp
 8750815:	5b                   	pop    %ebx
 8750816:	5e                   	pop    %esi
 8750817:	5d                   	pop    %ebp
 8750818:	c3                   	ret
 8750819:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::sslFactory::sslFactory @ 0x8750780

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::sslFactory::sslFactory() */

void __thiscall yaSSL::sslFactory::sslFactory(sslFactory *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  InitMessageFactory((Factory *)this);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  InitHandShakeFactory((Factory *)(this + 0xc));
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  InitServerKeyFactory((Factory *)(this + 0x18));
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  InitClientKeyFactory((Factory *)(this + 0x24));
  return;
}

```

