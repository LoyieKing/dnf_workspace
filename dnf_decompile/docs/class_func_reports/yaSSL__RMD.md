# yaSSL__RMD

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## RMD

```asm
// === 08799e70 yaSSL::RMD::RMD  [0x08799e70-0x8799ecf] ===
 8799e70:	55                   	push   %ebp
 8799e71:	89 e5                	mov    %esp,%ebp
 8799e73:	83 ec 28             	sub    $0x28,%esp
 8799e76:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8799e79:	e8 7a 8f f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8799e7e:	81 c3 1a 2d bd 00    	add    $0xbd2d1a,%ebx
 8799e84:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8799e87:	8b 75 08             	mov    0x8(%ebp),%esi
 8799e8a:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8799e8d:	8b 83 bc fa ff ff    	mov    -0x544(%ebx),%eax
 8799e93:	83 c0 08             	add    $0x8,%eax
 8799e96:	89 06                	mov    %eax,(%esi)
 8799e98:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8799e9d:	c7 04 24 70 00 00 00 	movl   $0x70,(%esp)
 8799ea4:	e8 f7 6d fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8799ea9:	89 c7                	mov    %eax,%edi
 8799eab:	8b 45 0c             	mov    0xc(%ebp),%eax
 8799eae:	8b 40 04             	mov    0x4(%eax),%eax
 8799eb1:	89 3c 24             	mov    %edi,(%esp)
 8799eb4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8799eb8:	e8 73 16 01 00       	call   87ab530 <_ZN8TaoCrypt9RIPEMD160C1ERKS0_>
 8799ebd:	89 7e 04             	mov    %edi,0x4(%esi)
 8799ec0:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8799ec3:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8799ec6:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8799ec9:	89 ec                	mov    %ebp,%esp
 8799ecb:	5d                   	pop    %ebp
 8799ecc:	c3                   	ret
 8799ecd:	90                   	nop
 8799ece:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::RMD::RMD @ 0x8799e70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RMD::RMD(yaSSL::RMD const&) */

void __thiscall yaSSL::RMD::RMD(RMD *this,RMD *param_1)

{
  RIPEMD160 *this_00;
  uint in_stack_ffffffd8;
  
  *(undefined **)this = PTR_vtable_0936c654 + 8;
  this_00 = operator_new(0x70,in_stack_ffffffd8 & 0xffffff00);
  TaoCrypt::RIPEMD160::RIPEMD160(this_00,*(RIPEMD160 **)(param_1 + 4));
  *(RIPEMD160 **)(this + 4) = this_00;
  return;
}

```

---

## RMD_0879a210

```asm
// === 0879a210 yaSSL::RMD::RMD  [0x0879a210-0x879a28f] ===
 879a210:	55                   	push   %ebp
 879a211:	89 e5                	mov    %esp,%ebp
 879a213:	83 ec 28             	sub    $0x28,%esp
 879a216:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 879a219:	e8 da 8b f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879a21e:	81 c3 7a 29 bd 00    	add    $0xbd297a,%ebx
 879a224:	89 75 f8             	mov    %esi,-0x8(%ebp)
 879a227:	8b 75 08             	mov    0x8(%ebp),%esi
 879a22a:	89 7d fc             	mov    %edi,-0x4(%ebp)
 879a22d:	8b 83 bc fa ff ff    	mov    -0x544(%ebx),%eax
 879a233:	83 c0 08             	add    $0x8,%eax
 879a236:	89 06                	mov    %eax,(%esi)
 879a238:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879a23d:	c7 04 24 70 00 00 00 	movl   $0x70,(%esp)
 879a244:	e8 57 6a fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 879a249:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 879a250:	00 
 879a251:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 879a258:	00 
 879a259:	89 c7                	mov    %eax,%edi
 879a25b:	89 04 24             	mov    %eax,(%esp)
 879a25e:	e8 6d e9 fb ff       	call   8758bd0 <_ZN8TaoCrypt17HASHwithTransformC1Ejj>
 879a263:	8b 83 30 fa ff ff    	mov    -0x5d0(%ebx),%eax
 879a269:	83 c0 08             	add    $0x8,%eax
 879a26c:	89 07                	mov    %eax,(%edi)
 879a26e:	89 3c 24             	mov    %edi,(%esp)
 879a271:	e8 6a ea 00 00       	call   87a8ce0 <_ZN8TaoCrypt9RIPEMD1604InitEv>
 879a276:	89 7e 04             	mov    %edi,0x4(%esi)
 879a279:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 879a27c:	8b 75 f8             	mov    -0x8(%ebp),%esi
 879a27f:	8b 7d fc             	mov    -0x4(%ebp),%edi
 879a282:	89 ec                	mov    %ebp,%esp
 879a284:	5d                   	pop    %ebp
 879a285:	c3                   	ret
 879a286:	8d 76 00             	lea    0x0(%esi),%esi
 879a289:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::RMD::RMD @ 0x879a210

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RMD::RMD() */

void __thiscall yaSSL::RMD::RMD(RMD *this)

{
  HASHwithTransform *this_00;
  uint in_stack_ffffffd8;
  
  *(undefined **)this = PTR_vtable_0936c654 + 8;
  this_00 = operator_new(0x70,in_stack_ffffffd8 & 0xffffff00);
  TaoCrypt::HASHwithTransform::HASHwithTransform(this_00,5,0x40);
  *(undefined **)this_00 = PTR_vtable_0936c5c8 + 8;
  TaoCrypt::RIPEMD160::Init((RIPEMD160 *)this_00);
  *(HASHwithTransform **)(this + 4) = this_00;
  return;
}

```

---

## get_digest

```asm
// === 08799660 yaSSL::RMD::get_digest  [0x08799660-0x879968f] ===
 8799660:	55                   	push   %ebp
 8799661:	89 e5                	mov    %esp,%ebp
 8799663:	53                   	push   %ebx
 8799664:	83 ec 14             	sub    $0x14,%esp
 8799667:	8b 45 0c             	mov    0xc(%ebp),%eax
 879966a:	e8 89 97 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879966f:	81 c3 29 35 bd 00    	add    $0xbd3529,%ebx
 8799675:	89 44 24 04          	mov    %eax,0x4(%esp)
 8799679:	8b 45 08             	mov    0x8(%ebp),%eax
 879967c:	8b 40 04             	mov    0x4(%eax),%eax
 879967f:	89 04 24             	mov    %eax,(%esp)
 8799682:	e8 09 f7 fb ff       	call   8758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>
 8799687:	83 c4 14             	add    $0x14,%esp
 879968a:	5b                   	pop    %ebx
 879968b:	5d                   	pop    %ebp
 879968c:	c3                   	ret
 879968d:	90                   	nop
 879968e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::RMD::get_digest @ 0x8799660

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RMD::get_digest(unsigned char*) */

void __thiscall yaSSL::RMD::get_digest(RMD *this,uchar *param_1)

{
  TaoCrypt::HASHwithTransform::Final(*(HASHwithTransform **)(this + 4),param_1);
  return;
}

```

---

## get_digestSize

```asm
// === 08798510 yaSSL::RMD::get_digestSize  [0x08798510-0x879851f] ===
 8798510:	55                   	push   %ebp
 8798511:	b8 14 00 00 00       	mov    $0x14,%eax
 8798516:	89 e5                	mov    %esp,%ebp
 8798518:	5d                   	pop    %ebp
 8798519:	c3                   	ret
 879851a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::RMD::get_digestSize @ 0x8798510

/* yaSSL::RMD::get_digestSize() const */

undefined4 yaSSL::RMD::get_digestSize(void)

{
  return 0x14;
}

```

---

## get_digest_08799690

```asm
// === 08799690 yaSSL::RMD::get_digest  [0x08799690-0x87996df] ===
 8799690:	55                   	push   %ebp
 8799691:	89 e5                	mov    %esp,%ebp
 8799693:	83 ec 18             	sub    $0x18,%esp
 8799696:	8b 45 14             	mov    0x14(%ebp),%eax
 8799699:	89 75 fc             	mov    %esi,-0x4(%ebp)
 879969c:	8b 75 08             	mov    0x8(%ebp),%esi
 879969f:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87996a2:	e8 51 97 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87996a7:	81 c3 f1 34 bd 00    	add    $0xbd34f1,%ebx
 87996ad:	89 44 24 08          	mov    %eax,0x8(%esp)
 87996b1:	8b 45 10             	mov    0x10(%ebp),%eax
 87996b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 87996b8:	8b 46 04             	mov    0x4(%esi),%eax
 87996bb:	89 04 24             	mov    %eax,(%esp)
 87996be:	e8 1d 1d 01 00       	call   87ab3e0 <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj>
 87996c3:	8b 45 0c             	mov    0xc(%ebp),%eax
 87996c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 87996ca:	8b 46 04             	mov    0x4(%esi),%eax
 87996cd:	89 04 24             	mov    %eax,(%esp)
 87996d0:	e8 bb f6 fb ff       	call   8758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>
 87996d5:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87996d8:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87996db:	89 ec                	mov    %ebp,%esp
 87996dd:	5d                   	pop    %ebp
 87996de:	c3                   	ret
 87996df:	90                   	nop

```

```c
// yaSSL::RMD::get_digest @ 0x8799690

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RMD::get_digest(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall yaSSL::RMD::get_digest(RMD *this,uchar *param_1,uchar *param_2,uint param_3)

{
  TaoCrypt::RIPEMD160::Update(*(RIPEMD160 **)(this + 4),param_2,param_3);
  TaoCrypt::HASHwithTransform::Final(*(HASHwithTransform **)(this + 4),param_1);
  return;
}

```

---

## get_padSize

```asm
// === 08798520 yaSSL::RMD::get_padSize  [0x08798520-0x879852f] ===
 8798520:	55                   	push   %ebp
 8798521:	b8 2c 00 00 00       	mov    $0x2c,%eax
 8798526:	89 e5                	mov    %esp,%ebp
 8798528:	5d                   	pop    %ebp
 8798529:	c3                   	ret
 879852a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::RMD::get_padSize @ 0x8798520

/* yaSSL::RMD::get_padSize() const */

undefined4 yaSSL::RMD::get_padSize(void)

{
  return 0x2c;
}

```

---

## operator=

```asm
// === 08799e30 yaSSL::RMD::operator=  [0x08799e30-0x8799e6f] ===
 8799e30:	55                   	push   %ebp
 8799e31:	89 e5                	mov    %esp,%ebp
 8799e33:	83 ec 18             	sub    $0x18,%esp
 8799e36:	8b 45 0c             	mov    0xc(%ebp),%eax
 8799e39:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8799e3c:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8799e3f:	8b 75 08             	mov    0x8(%ebp),%esi
 8799e42:	e8 b1 8f f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8799e47:	81 c3 51 2d bd 00    	add    $0xbd2d51,%ebx
 8799e4d:	8b 40 04             	mov    0x4(%eax),%eax
 8799e50:	89 44 24 04          	mov    %eax,0x4(%esp)
 8799e54:	8b 46 04             	mov    0x4(%esi),%eax
 8799e57:	89 04 24             	mov    %eax,(%esp)
 8799e5a:	e8 c1 17 01 00       	call   87ab620 <_ZN8TaoCrypt9RIPEMD160aSERKS0_>
 8799e5f:	89 f0                	mov    %esi,%eax
 8799e61:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8799e64:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8799e67:	89 ec                	mov    %ebp,%esp
 8799e69:	5d                   	pop    %ebp
 8799e6a:	c3                   	ret
 8799e6b:	90                   	nop
 8799e6c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::RMD::operator= @ 0x8799e30

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RMD::TEMPNAMEPLACEHOLDERVALUE(yaSSL::RMD const&) */

RMD * __thiscall yaSSL::RMD::operator=(RMD *this,RMD *param_1)

{
  TaoCrypt::RIPEMD160::operator=(*(RIPEMD160 **)(this + 4),*(RIPEMD160 **)(param_1 + 4));
  return this;
}

```

---

## update

```asm
// === 08799530 yaSSL::RMD::update  [0x08799530-0x879956f] ===
 8799530:	55                   	push   %ebp
 8799531:	89 e5                	mov    %esp,%ebp
 8799533:	53                   	push   %ebx
 8799534:	83 ec 14             	sub    $0x14,%esp
 8799537:	8b 45 10             	mov    0x10(%ebp),%eax
 879953a:	e8 b9 98 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879953f:	81 c3 59 36 bd 00    	add    $0xbd3659,%ebx
 8799545:	89 44 24 08          	mov    %eax,0x8(%esp)
 8799549:	8b 45 0c             	mov    0xc(%ebp),%eax
 879954c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8799550:	8b 45 08             	mov    0x8(%ebp),%eax
 8799553:	8b 40 04             	mov    0x4(%eax),%eax
 8799556:	89 04 24             	mov    %eax,(%esp)
 8799559:	e8 82 1e 01 00       	call   87ab3e0 <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj>
 879955e:	83 c4 14             	add    $0x14,%esp
 8799561:	5b                   	pop    %ebx
 8799562:	5d                   	pop    %ebp
 8799563:	c3                   	ret
 8799564:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 879956a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::RMD::update @ 0x8799530

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RMD::update(unsigned char const*, unsigned int) */

void __thiscall yaSSL::RMD::update(RMD *this,uchar *param_1,uint param_2)

{
  TaoCrypt::RIPEMD160::Update(*(RIPEMD160 **)(this + 4),param_1,param_2);
  return;
}

```

---

## ~RMD

```asm
// === 08798c20 yaSSL::RMD::~RMD  [0x08798c20-0x8798c7f] ===
 8798c20:	55                   	push   %ebp
 8798c21:	89 e5                	mov    %esp,%ebp
 8798c23:	83 ec 18             	sub    $0x18,%esp
 8798c26:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8798c29:	e8 ca a1 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8798c2e:	81 c3 6a 3f bd 00    	add    $0xbd3f6a,%ebx
 8798c34:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8798c37:	8b 75 08             	mov    0x8(%ebp),%esi
 8798c3a:	8b 83 bc fa ff ff    	mov    -0x544(%ebx),%eax
 8798c40:	83 c0 08             	add    $0x8,%eax
 8798c43:	89 06                	mov    %eax,(%esi)
 8798c45:	8b 46 04             	mov    0x4(%esi),%eax
 8798c48:	85 c0                	test   %eax,%eax
 8798c4a:	74 0b                	je     8798c57 <_ZN5yaSSL3RMDD1Ev+0x37>
 8798c4c:	8b 93 c4 ff ff ff    	mov    -0x3c(%ebx),%edx
 8798c52:	83 c2 08             	add    $0x8,%edx
 8798c55:	89 10                	mov    %edx,(%eax)
 8798c57:	89 04 24             	mov    %eax,(%esp)
 8798c5a:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8798c5f:	e8 bc 7b fb ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 8798c64:	8b 83 28 fb ff ff    	mov    -0x4d8(%ebx),%eax
 8798c6a:	83 c0 08             	add    $0x8,%eax
 8798c6d:	89 06                	mov    %eax,(%esi)
 8798c6f:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8798c72:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8798c75:	89 ec                	mov    %ebp,%esp
 8798c77:	5d                   	pop    %ebp
 8798c78:	c3                   	ret
 8798c79:	90                   	nop
 8798c7a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::RMD::~RMD @ 0x8798c20

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RMD::~RMD() */

void __thiscall yaSSL::RMD::~RMD(RMD *this)

{
  undefined4 *puVar1;
  
  *(undefined **)this = PTR_vtable_0936c654 + 8;
  puVar1 = *(undefined4 **)(this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = PTR_vtable_0936cb5c + 8;
  }
  operator_delete(puVar1,0);
  *(undefined **)this = PTR_vtable_0936c6c0 + 8;
  return;
}

```

---

## ~RMD_08798c80

```asm
// === 08798c80 yaSSL::RMD::~RMD  [0x08798c80-0x8798caf] ===
 8798c80:	55                   	push   %ebp
 8798c81:	89 e5                	mov    %esp,%ebp
 8798c83:	53                   	push   %ebx
 8798c84:	e8 6f a1 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8798c89:	81 c3 0f 3f bd 00    	add    $0xbd3f0f,%ebx
 8798c8f:	83 ec 14             	sub    $0x14,%esp
 8798c92:	8b 45 08             	mov    0x8(%ebp),%eax
 8798c95:	89 04 24             	mov    %eax,(%esp)
 8798c98:	e8 83 ff ff ff       	call   8798c20 <_ZN5yaSSL3RMDD1Ev>
 8798c9d:	83 c4 14             	add    $0x14,%esp
 8798ca0:	5b                   	pop    %ebx
 8798ca1:	5d                   	pop    %ebp
 8798ca2:	c3                   	ret
 8798ca3:	90                   	nop
 8798ca4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8798caa:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::RMD::~RMD @ 0x8798c80

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RMD::~RMD() */

void __thiscall yaSSL::RMD::~RMD(RMD *this)

{
  ~RMD(this);
  return;
}

```

