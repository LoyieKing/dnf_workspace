# yaSSL__MD5

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## MD5

```asm
// === 08799fb0 yaSSL::MD5::MD5  [0x08799fb0-0x879a00f] ===
 8799fb0:	55                   	push   %ebp
 8799fb1:	89 e5                	mov    %esp,%ebp
 8799fb3:	83 ec 28             	sub    $0x28,%esp
 8799fb6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8799fb9:	e8 3a 8e f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8799fbe:	81 c3 da 2b bd 00    	add    $0xbd2bda,%ebx
 8799fc4:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8799fc7:	8b 75 08             	mov    0x8(%ebp),%esi
 8799fca:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8799fcd:	8b 83 0c fb ff ff    	mov    -0x4f4(%ebx),%eax
 8799fd3:	83 c0 08             	add    $0x8,%eax
 8799fd6:	89 06                	mov    %eax,(%esi)
 8799fd8:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8799fdd:	c7 04 24 70 00 00 00 	movl   $0x70,(%esp)
 8799fe4:	e8 b7 6c fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8799fe9:	89 c7                	mov    %eax,%edi
 8799feb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8799fee:	8b 40 04             	mov    0x4(%eax),%eax
 8799ff1:	89 3c 24             	mov    %edi,(%esp)
 8799ff4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8799ff8:	e8 53 d2 fc ff       	call   8767250 <_ZN8TaoCrypt3MD5C1ERKS0_>
 8799ffd:	89 7e 04             	mov    %edi,0x4(%esi)
 879a000:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 879a003:	8b 75 f8             	mov    -0x8(%ebp),%esi
 879a006:	8b 7d fc             	mov    -0x4(%ebp),%edi
 879a009:	89 ec                	mov    %ebp,%esp
 879a00b:	5d                   	pop    %ebp
 879a00c:	c3                   	ret
 879a00d:	90                   	nop
 879a00e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::MD5::MD5 @ 0x8799fb0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::MD5::MD5(yaSSL::MD5 const&) */

void __thiscall yaSSL::MD5::MD5(MD5 *this,MD5 *param_1)

{
  MD5 *this_00;
  uint in_stack_ffffffd8;
  
  *(undefined **)this = PTR_vtable_0936c6a4 + 8;
  this_00 = operator_new(0x70,in_stack_ffffffd8 & 0xffffff00);
  TaoCrypt::MD5::MD5(this_00,*(MD5 **)(param_1 + 4));
  *(MD5 **)(this + 4) = this_00;
  return;
}

```

---

## MD5_0879a110

```asm
// === 0879a110 yaSSL::MD5::MD5  [0x0879a110-0x879a18f] ===
 879a110:	55                   	push   %ebp
 879a111:	89 e5                	mov    %esp,%ebp
 879a113:	83 ec 28             	sub    $0x28,%esp
 879a116:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 879a119:	e8 da 8c f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879a11e:	81 c3 7a 2a bd 00    	add    $0xbd2a7a,%ebx
 879a124:	89 75 f8             	mov    %esi,-0x8(%ebp)
 879a127:	8b 75 08             	mov    0x8(%ebp),%esi
 879a12a:	89 7d fc             	mov    %edi,-0x4(%ebp)
 879a12d:	8b 83 0c fb ff ff    	mov    -0x4f4(%ebx),%eax
 879a133:	83 c0 08             	add    $0x8,%eax
 879a136:	89 06                	mov    %eax,(%esi)
 879a138:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879a13d:	c7 04 24 70 00 00 00 	movl   $0x70,(%esp)
 879a144:	e8 57 6b fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 879a149:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 879a150:	00 
 879a151:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 879a158:	00 
 879a159:	89 c7                	mov    %eax,%edi
 879a15b:	89 04 24             	mov    %eax,(%esp)
 879a15e:	e8 6d ea fb ff       	call   8758bd0 <_ZN8TaoCrypt17HASHwithTransformC1Ejj>
 879a163:	8b 83 c0 fc ff ff    	mov    -0x340(%ebx),%eax
 879a169:	83 c0 08             	add    $0x8,%eax
 879a16c:	89 07                	mov    %eax,(%edi)
 879a16e:	89 3c 24             	mov    %edi,(%esp)
 879a171:	e8 5a c0 fc ff       	call   87661d0 <_ZN8TaoCrypt3MD54InitEv>
 879a176:	89 7e 04             	mov    %edi,0x4(%esi)
 879a179:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 879a17c:	8b 75 f8             	mov    -0x8(%ebp),%esi
 879a17f:	8b 7d fc             	mov    -0x4(%ebp),%edi
 879a182:	89 ec                	mov    %ebp,%esp
 879a184:	5d                   	pop    %ebp
 879a185:	c3                   	ret
 879a186:	8d 76 00             	lea    0x0(%esi),%esi
 879a189:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::MD5::MD5 @ 0x879a110

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::MD5::MD5() */

void __thiscall yaSSL::MD5::MD5(MD5 *this)

{
  HASHwithTransform *this_00;
  uint in_stack_ffffffd8;
  
  *(undefined **)this = PTR_vtable_0936c6a4 + 8;
  this_00 = operator_new(0x70,in_stack_ffffffd8 & 0xffffff00);
  TaoCrypt::HASHwithTransform::HASHwithTransform(this_00,4,0x40);
  *(undefined **)this_00 = PTR_vtable_0936c858 + 8;
  TaoCrypt::MD5::Init((MD5 *)this_00);
  *(HASHwithTransform **)(this + 4) = this_00;
  return;
}

```

---

## get_digest

```asm
// === 08799710 yaSSL::MD5::get_digest  [0x08799710-0x879973f] ===
 8799710:	55                   	push   %ebp
 8799711:	89 e5                	mov    %esp,%ebp
 8799713:	53                   	push   %ebx
 8799714:	83 ec 14             	sub    $0x14,%esp
 8799717:	8b 45 0c             	mov    0xc(%ebp),%eax
 879971a:	e8 d9 96 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879971f:	81 c3 79 34 bd 00    	add    $0xbd3479,%ebx
 8799725:	89 44 24 04          	mov    %eax,0x4(%esp)
 8799729:	8b 45 08             	mov    0x8(%ebp),%eax
 879972c:	8b 40 04             	mov    0x4(%eax),%eax
 879972f:	89 04 24             	mov    %eax,(%esp)
 8799732:	e8 59 f6 fb ff       	call   8758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>
 8799737:	83 c4 14             	add    $0x14,%esp
 879973a:	5b                   	pop    %ebx
 879973b:	5d                   	pop    %ebp
 879973c:	c3                   	ret
 879973d:	90                   	nop
 879973e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::MD5::get_digest @ 0x8799710

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::MD5::get_digest(unsigned char*) */

void __thiscall yaSSL::MD5::get_digest(MD5 *this,uchar *param_1)

{
  TaoCrypt::HASHwithTransform::Final(*(HASHwithTransform **)(this + 4),param_1);
  return;
}

```

---

## get_digestSize

```asm
// === 087984d0 yaSSL::MD5::get_digestSize  [0x087984d0-0x87984df] ===
 87984d0:	55                   	push   %ebp
 87984d1:	b8 10 00 00 00       	mov    $0x10,%eax
 87984d6:	89 e5                	mov    %esp,%ebp
 87984d8:	5d                   	pop    %ebp
 87984d9:	c3                   	ret
 87984da:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::MD5::get_digestSize @ 0x87984d0

/* yaSSL::MD5::get_digestSize() const */

undefined4 yaSSL::MD5::get_digestSize(void)

{
  return 0x10;
}

```

---

## get_digest_08799c90

```asm
// === 08799c90 yaSSL::MD5::get_digest  [0x08799c90-0x8799cdf] ===
 8799c90:	55                   	push   %ebp
 8799c91:	89 e5                	mov    %esp,%ebp
 8799c93:	83 ec 18             	sub    $0x18,%esp
 8799c96:	8b 45 14             	mov    0x14(%ebp),%eax
 8799c99:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8799c9c:	8b 75 08             	mov    0x8(%ebp),%esi
 8799c9f:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8799ca2:	e8 51 91 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8799ca7:	81 c3 f1 2e bd 00    	add    $0xbd2ef1,%ebx
 8799cad:	89 44 24 08          	mov    %eax,0x8(%esp)
 8799cb1:	8b 45 10             	mov    0x10(%ebp),%eax
 8799cb4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8799cb8:	8b 46 04             	mov    0x4(%esi),%eax
 8799cbb:	89 04 24             	mov    %eax,(%esp)
 8799cbe:	e8 3d d4 fc ff       	call   8767100 <_ZN8TaoCrypt3MD56UpdateEPKhj>
 8799cc3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8799cc6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8799cca:	8b 46 04             	mov    0x4(%esi),%eax
 8799ccd:	89 04 24             	mov    %eax,(%esp)
 8799cd0:	e8 bb f0 fb ff       	call   8758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>
 8799cd5:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8799cd8:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8799cdb:	89 ec                	mov    %ebp,%esp
 8799cdd:	5d                   	pop    %ebp
 8799cde:	c3                   	ret
 8799cdf:	90                   	nop

```

```c
// yaSSL::MD5::get_digest @ 0x8799c90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::MD5::get_digest(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall yaSSL::MD5::get_digest(MD5 *this,uchar *param_1,uchar *param_2,uint param_3)

{
  TaoCrypt::MD5::Update(*(MD5 **)(this + 4),param_2,param_3);
  TaoCrypt::HASHwithTransform::Final(*(HASHwithTransform **)(this + 4),param_1);
  return;
}

```

---

## get_padSize

```asm
// === 087984e0 yaSSL::MD5::get_padSize  [0x087984e0-0x87984ef] ===
 87984e0:	55                   	push   %ebp
 87984e1:	b8 30 00 00 00       	mov    $0x30,%eax
 87984e6:	89 e5                	mov    %esp,%ebp
 87984e8:	5d                   	pop    %ebp
 87984e9:	c3                   	ret
 87984ea:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::MD5::get_padSize @ 0x87984e0

/* yaSSL::MD5::get_padSize() const */

undefined4 yaSSL::MD5::get_padSize(void)

{
  return 0x30;
}

```

---

## operator=

```asm
// === 08799f70 yaSSL::MD5::operator=  [0x08799f70-0x8799faf] ===
 8799f70:	55                   	push   %ebp
 8799f71:	89 e5                	mov    %esp,%ebp
 8799f73:	83 ec 18             	sub    $0x18,%esp
 8799f76:	8b 45 0c             	mov    0xc(%ebp),%eax
 8799f79:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8799f7c:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8799f7f:	8b 75 08             	mov    0x8(%ebp),%esi
 8799f82:	e8 71 8e f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8799f87:	81 c3 11 2c bd 00    	add    $0xbd2c11,%ebx
 8799f8d:	8b 40 04             	mov    0x4(%eax),%eax
 8799f90:	89 44 24 04          	mov    %eax,0x4(%esp)
 8799f94:	8b 46 04             	mov    0x4(%esi),%eax
 8799f97:	89 04 24             	mov    %eax,(%esp)
 8799f9a:	e8 91 d3 fc ff       	call   8767330 <_ZN8TaoCrypt3MD5aSERKS0_>
 8799f9f:	89 f0                	mov    %esi,%eax
 8799fa1:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8799fa4:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8799fa7:	89 ec                	mov    %ebp,%esp
 8799fa9:	5d                   	pop    %ebp
 8799faa:	c3                   	ret
 8799fab:	90                   	nop
 8799fac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::MD5::operator= @ 0x8799f70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::MD5::TEMPNAMEPLACEHOLDERVALUE(yaSSL::MD5 const&) */

MD5 * __thiscall yaSSL::MD5::operator=(MD5 *this,MD5 *param_1)

{
  TaoCrypt::MD5::operator=(*(MD5 **)(this + 4),*(MD5 **)(param_1 + 4));
  return this;
}

```

---

## update

```asm
// === 08799c50 yaSSL::MD5::update  [0x08799c50-0x8799c8f] ===
 8799c50:	55                   	push   %ebp
 8799c51:	89 e5                	mov    %esp,%ebp
 8799c53:	53                   	push   %ebx
 8799c54:	83 ec 14             	sub    $0x14,%esp
 8799c57:	8b 45 10             	mov    0x10(%ebp),%eax
 8799c5a:	e8 99 91 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8799c5f:	81 c3 39 2f bd 00    	add    $0xbd2f39,%ebx
 8799c65:	89 44 24 08          	mov    %eax,0x8(%esp)
 8799c69:	8b 45 0c             	mov    0xc(%ebp),%eax
 8799c6c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8799c70:	8b 45 08             	mov    0x8(%ebp),%eax
 8799c73:	8b 40 04             	mov    0x4(%eax),%eax
 8799c76:	89 04 24             	mov    %eax,(%esp)
 8799c79:	e8 82 d4 fc ff       	call   8767100 <_ZN8TaoCrypt3MD56UpdateEPKhj>
 8799c7e:	83 c4 14             	add    $0x14,%esp
 8799c81:	5b                   	pop    %ebx
 8799c82:	5d                   	pop    %ebp
 8799c83:	c3                   	ret
 8799c84:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8799c8a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::MD5::update @ 0x8799c50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::MD5::update(unsigned char const*, unsigned int) */

void __thiscall yaSSL::MD5::update(MD5 *this,uchar *param_1,uint param_2)

{
  TaoCrypt::MD5::Update(*(MD5 **)(this + 4),param_1,param_2);
  return;
}

```

---

## ~MD5

```asm
// === 08798d40 yaSSL::MD5::~MD5  [0x08798d40-0x8798d9f] ===
 8798d40:	55                   	push   %ebp
 8798d41:	89 e5                	mov    %esp,%ebp
 8798d43:	83 ec 18             	sub    $0x18,%esp
 8798d46:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8798d49:	e8 aa a0 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8798d4e:	81 c3 4a 3e bd 00    	add    $0xbd3e4a,%ebx
 8798d54:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8798d57:	8b 75 08             	mov    0x8(%ebp),%esi
 8798d5a:	8b 83 0c fb ff ff    	mov    -0x4f4(%ebx),%eax
 8798d60:	83 c0 08             	add    $0x8,%eax
 8798d63:	89 06                	mov    %eax,(%esi)
 8798d65:	8b 46 04             	mov    0x4(%esi),%eax
 8798d68:	85 c0                	test   %eax,%eax
 8798d6a:	74 0b                	je     8798d77 <_ZN5yaSSL3MD5D1Ev+0x37>
 8798d6c:	8b 93 c4 ff ff ff    	mov    -0x3c(%ebx),%edx
 8798d72:	83 c2 08             	add    $0x8,%edx
 8798d75:	89 10                	mov    %edx,(%eax)
 8798d77:	89 04 24             	mov    %eax,(%esp)
 8798d7a:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8798d7f:	e8 9c 7a fb ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 8798d84:	8b 83 28 fb ff ff    	mov    -0x4d8(%ebx),%eax
 8798d8a:	83 c0 08             	add    $0x8,%eax
 8798d8d:	89 06                	mov    %eax,(%esi)
 8798d8f:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8798d92:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8798d95:	89 ec                	mov    %ebp,%esp
 8798d97:	5d                   	pop    %ebp
 8798d98:	c3                   	ret
 8798d99:	90                   	nop
 8798d9a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::MD5::~MD5 @ 0x8798d40

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::MD5::~MD5() */

void __thiscall yaSSL::MD5::~MD5(MD5 *this)

{
  undefined4 *puVar1;
  
  *(undefined **)this = PTR_vtable_0936c6a4 + 8;
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

## ~MD5_08798da0

```asm
// === 08798da0 yaSSL::MD5::~MD5  [0x08798da0-0x8798dcf] ===
 8798da0:	55                   	push   %ebp
 8798da1:	89 e5                	mov    %esp,%ebp
 8798da3:	53                   	push   %ebx
 8798da4:	e8 4f a0 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8798da9:	81 c3 ef 3d bd 00    	add    $0xbd3def,%ebx
 8798daf:	83 ec 14             	sub    $0x14,%esp
 8798db2:	8b 45 08             	mov    0x8(%ebp),%eax
 8798db5:	89 04 24             	mov    %eax,(%esp)
 8798db8:	e8 83 ff ff ff       	call   8798d40 <_ZN5yaSSL3MD5D1Ev>
 8798dbd:	83 c4 14             	add    $0x14,%esp
 8798dc0:	5b                   	pop    %ebx
 8798dc1:	5d                   	pop    %ebp
 8798dc2:	c3                   	ret
 8798dc3:	90                   	nop
 8798dc4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8798dca:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::MD5::~MD5 @ 0x8798da0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::MD5::~MD5() */

void __thiscall yaSSL::MD5::~MD5(MD5 *this)

{
  ~MD5(this);
  return;
}

```

