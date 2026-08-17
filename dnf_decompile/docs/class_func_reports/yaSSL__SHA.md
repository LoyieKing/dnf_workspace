# yaSSL__SHA

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## SHA

```asm
// === 08799f10 yaSSL::SHA::SHA  [0x08799f10-0x8799f6f] ===
 8799f10:	55                   	push   %ebp
 8799f11:	89 e5                	mov    %esp,%ebp
 8799f13:	83 ec 28             	sub    $0x28,%esp
 8799f16:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8799f19:	e8 da 8e f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8799f1e:	81 c3 7a 2c bd 00    	add    $0xbd2c7a,%ebx
 8799f24:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8799f27:	8b 75 08             	mov    0x8(%ebp),%esi
 8799f2a:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8799f2d:	8b 83 dc fb ff ff    	mov    -0x424(%ebx),%eax
 8799f33:	83 c0 08             	add    $0x8,%eax
 8799f36:	89 06                	mov    %eax,(%esi)
 8799f38:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8799f3d:	c7 04 24 70 00 00 00 	movl   $0x70,(%esp)
 8799f44:	e8 57 6d fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8799f49:	89 c7                	mov    %eax,%edi
 8799f4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8799f4e:	8b 40 04             	mov    0x4(%eax),%eax
 8799f51:	89 3c 24             	mov    %edi,(%esp)
 8799f54:	89 44 24 04          	mov    %eax,0x4(%esp)
 8799f58:	e8 c3 64 fd ff       	call   8770420 <_ZN8TaoCrypt3SHAC1ERKS0_>
 8799f5d:	89 7e 04             	mov    %edi,0x4(%esi)
 8799f60:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8799f63:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8799f66:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8799f69:	89 ec                	mov    %ebp,%esp
 8799f6b:	5d                   	pop    %ebp
 8799f6c:	c3                   	ret
 8799f6d:	90                   	nop
 8799f6e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::SHA::SHA @ 0x8799f10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SHA::SHA(yaSSL::SHA const&) */

void __thiscall yaSSL::SHA::SHA(SHA *this,SHA *param_1)

{
  SHA *this_00;
  uint in_stack_ffffffd8;
  
  *(undefined **)this = PTR_vtable_0936c774 + 8;
  this_00 = operator_new(0x70,in_stack_ffffffd8 & 0xffffff00);
  TaoCrypt::SHA::SHA(this_00,*(SHA **)(param_1 + 4));
  *(SHA **)(this + 4) = this_00;
  return;
}

```

---

## SHA_0879a190

```asm
// === 0879a190 yaSSL::SHA::SHA  [0x0879a190-0x879a20f] ===
 879a190:	55                   	push   %ebp
 879a191:	89 e5                	mov    %esp,%ebp
 879a193:	83 ec 28             	sub    $0x28,%esp
 879a196:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 879a199:	e8 5a 8c f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879a19e:	81 c3 fa 29 bd 00    	add    $0xbd29fa,%ebx
 879a1a4:	89 75 f8             	mov    %esi,-0x8(%ebp)
 879a1a7:	8b 75 08             	mov    0x8(%ebp),%esi
 879a1aa:	89 7d fc             	mov    %edi,-0x4(%ebp)
 879a1ad:	8b 83 dc fb ff ff    	mov    -0x424(%ebx),%eax
 879a1b3:	83 c0 08             	add    $0x8,%eax
 879a1b6:	89 06                	mov    %eax,(%esi)
 879a1b8:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879a1bd:	c7 04 24 70 00 00 00 	movl   $0x70,(%esp)
 879a1c4:	e8 d7 6a fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 879a1c9:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 879a1d0:	00 
 879a1d1:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 879a1d8:	00 
 879a1d9:	89 c7                	mov    %eax,%edi
 879a1db:	89 04 24             	mov    %eax,(%esp)
 879a1de:	e8 ed e9 fb ff       	call   8758bd0 <_ZN8TaoCrypt17HASHwithTransformC1Ejj>
 879a1e3:	8b 83 f4 ff ff ff    	mov    -0xc(%ebx),%eax
 879a1e9:	83 c0 08             	add    $0x8,%eax
 879a1ec:	89 07                	mov    %eax,(%edi)
 879a1ee:	89 3c 24             	mov    %edi,(%esp)
 879a1f1:	e8 ba e1 fc ff       	call   87683b0 <_ZN8TaoCrypt3SHA4InitEv>
 879a1f6:	89 7e 04             	mov    %edi,0x4(%esi)
 879a1f9:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 879a1fc:	8b 75 f8             	mov    -0x8(%ebp),%esi
 879a1ff:	8b 7d fc             	mov    -0x4(%ebp),%edi
 879a202:	89 ec                	mov    %ebp,%esp
 879a204:	5d                   	pop    %ebp
 879a205:	c3                   	ret
 879a206:	8d 76 00             	lea    0x0(%esi),%esi
 879a209:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::SHA::SHA @ 0x879a190

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SHA::SHA() */

void __thiscall yaSSL::SHA::SHA(SHA *this)

{
  HASHwithTransform *this_00;
  uint in_stack_ffffffd8;
  
  *(undefined **)this = PTR_vtable_0936c774 + 8;
  this_00 = operator_new(0x70,in_stack_ffffffd8 & 0xffffff00);
  TaoCrypt::HASHwithTransform::HASHwithTransform(this_00,5,0x40);
  *(undefined **)this_00 = PTR_vtable_0936cb8c + 8;
  TaoCrypt::SHA::Init((SHA *)this_00);
  *(HASHwithTransform **)(this + 4) = this_00;
  return;
}

```

---

## get_digest

```asm
// === 087996e0 yaSSL::SHA::get_digest  [0x087996e0-0x879970f] ===
 87996e0:	55                   	push   %ebp
 87996e1:	89 e5                	mov    %esp,%ebp
 87996e3:	53                   	push   %ebx
 87996e4:	83 ec 14             	sub    $0x14,%esp
 87996e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 87996ea:	e8 09 97 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87996ef:	81 c3 a9 34 bd 00    	add    $0xbd34a9,%ebx
 87996f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 87996f9:	8b 45 08             	mov    0x8(%ebp),%eax
 87996fc:	8b 40 04             	mov    0x4(%eax),%eax
 87996ff:	89 04 24             	mov    %eax,(%esp)
 8799702:	e8 89 f6 fb ff       	call   8758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>
 8799707:	83 c4 14             	add    $0x14,%esp
 879970a:	5b                   	pop    %ebx
 879970b:	5d                   	pop    %ebp
 879970c:	c3                   	ret
 879970d:	90                   	nop
 879970e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::SHA::get_digest @ 0x87996e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SHA::get_digest(unsigned char*) */

void __thiscall yaSSL::SHA::get_digest(SHA *this,uchar *param_1)

{
  TaoCrypt::HASHwithTransform::Final(*(HASHwithTransform **)(this + 4),param_1);
  return;
}

```

---

## get_digestSize

```asm
// === 087984f0 yaSSL::SHA::get_digestSize  [0x087984f0-0x87984ff] ===
 87984f0:	55                   	push   %ebp
 87984f1:	b8 14 00 00 00       	mov    $0x14,%eax
 87984f6:	89 e5                	mov    %esp,%ebp
 87984f8:	5d                   	pop    %ebp
 87984f9:	c3                   	ret
 87984fa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::SHA::get_digestSize @ 0x87984f0

/* yaSSL::SHA::get_digestSize() const */

undefined4 yaSSL::SHA::get_digestSize(void)

{
  return 0x14;
}

```

---

## get_digest_087999c0

```asm
// === 087999c0 yaSSL::SHA::get_digest  [0x087999c0-0x8799a0f] ===
 87999c0:	55                   	push   %ebp
 87999c1:	89 e5                	mov    %esp,%ebp
 87999c3:	83 ec 18             	sub    $0x18,%esp
 87999c6:	8b 45 14             	mov    0x14(%ebp),%eax
 87999c9:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87999cc:	8b 75 08             	mov    0x8(%ebp),%esi
 87999cf:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87999d2:	e8 21 94 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87999d7:	81 c3 c1 31 bd 00    	add    $0xbd31c1,%ebx
 87999dd:	89 44 24 08          	mov    %eax,0x8(%esp)
 87999e1:	8b 45 10             	mov    0x10(%ebp),%eax
 87999e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 87999e8:	8b 46 04             	mov    0x4(%esi),%eax
 87999eb:	89 04 24             	mov    %eax,(%esp)
 87999ee:	e8 6d 62 fd ff       	call   876fc60 <_ZN8TaoCrypt3SHA6UpdateEPKhj>
 87999f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 87999f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 87999fa:	8b 46 04             	mov    0x4(%esi),%eax
 87999fd:	89 04 24             	mov    %eax,(%esp)
 8799a00:	e8 8b f3 fb ff       	call   8758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>
 8799a05:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8799a08:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8799a0b:	89 ec                	mov    %ebp,%esp
 8799a0d:	5d                   	pop    %ebp
 8799a0e:	c3                   	ret
 8799a0f:	90                   	nop

```

```c
// yaSSL::SHA::get_digest @ 0x87999c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SHA::get_digest(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall yaSSL::SHA::get_digest(SHA *this,uchar *param_1,uchar *param_2,uint param_3)

{
  TaoCrypt::SHA::Update(*(SHA **)(this + 4),param_2,param_3);
  TaoCrypt::HASHwithTransform::Final(*(HASHwithTransform **)(this + 4),param_1);
  return;
}

```

---

## get_padSize

```asm
// === 08798500 yaSSL::SHA::get_padSize  [0x08798500-0x879850f] ===
 8798500:	55                   	push   %ebp
 8798501:	b8 28 00 00 00       	mov    $0x28,%eax
 8798506:	89 e5                	mov    %esp,%ebp
 8798508:	5d                   	pop    %ebp
 8798509:	c3                   	ret
 879850a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::SHA::get_padSize @ 0x8798500

/* yaSSL::SHA::get_padSize() const */

undefined4 yaSSL::SHA::get_padSize(void)

{
  return 0x28;
}

```

---

## operator=

```asm
// === 08799ed0 yaSSL::SHA::operator=  [0x08799ed0-0x8799f0f] ===
 8799ed0:	55                   	push   %ebp
 8799ed1:	89 e5                	mov    %esp,%ebp
 8799ed3:	83 ec 18             	sub    $0x18,%esp
 8799ed6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8799ed9:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8799edc:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8799edf:	8b 75 08             	mov    0x8(%ebp),%esi
 8799ee2:	e8 11 8f f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8799ee7:	81 c3 b1 2c bd 00    	add    $0xbd2cb1,%ebx
 8799eed:	8b 40 04             	mov    0x4(%eax),%eax
 8799ef0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8799ef4:	8b 46 04             	mov    0x4(%esi),%eax
 8799ef7:	89 04 24             	mov    %eax,(%esp)
 8799efa:	e8 11 66 fd ff       	call   8770510 <_ZN8TaoCrypt3SHAaSERKS0_>
 8799eff:	89 f0                	mov    %esi,%eax
 8799f01:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8799f04:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8799f07:	89 ec                	mov    %ebp,%esp
 8799f09:	5d                   	pop    %ebp
 8799f0a:	c3                   	ret
 8799f0b:	90                   	nop
 8799f0c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::SHA::operator= @ 0x8799ed0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SHA::TEMPNAMEPLACEHOLDERVALUE(yaSSL::SHA const&) */

SHA * __thiscall yaSSL::SHA::operator=(SHA *this,SHA *param_1)

{
  TaoCrypt::SHA::operator=(*(SHA **)(this + 4),*(SHA **)(param_1 + 4));
  return this;
}

```

---

## update

```asm
// === 08799980 yaSSL::SHA::update  [0x08799980-0x87999bf] ===
 8799980:	55                   	push   %ebp
 8799981:	89 e5                	mov    %esp,%ebp
 8799983:	53                   	push   %ebx
 8799984:	83 ec 14             	sub    $0x14,%esp
 8799987:	8b 45 10             	mov    0x10(%ebp),%eax
 879998a:	e8 69 94 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879998f:	81 c3 09 32 bd 00    	add    $0xbd3209,%ebx
 8799995:	89 44 24 08          	mov    %eax,0x8(%esp)
 8799999:	8b 45 0c             	mov    0xc(%ebp),%eax
 879999c:	89 44 24 04          	mov    %eax,0x4(%esp)
 87999a0:	8b 45 08             	mov    0x8(%ebp),%eax
 87999a3:	8b 40 04             	mov    0x4(%eax),%eax
 87999a6:	89 04 24             	mov    %eax,(%esp)
 87999a9:	e8 b2 62 fd ff       	call   876fc60 <_ZN8TaoCrypt3SHA6UpdateEPKhj>
 87999ae:	83 c4 14             	add    $0x14,%esp
 87999b1:	5b                   	pop    %ebx
 87999b2:	5d                   	pop    %ebp
 87999b3:	c3                   	ret
 87999b4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87999ba:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::SHA::update @ 0x8799980

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SHA::update(unsigned char const*, unsigned int) */

void __thiscall yaSSL::SHA::update(SHA *this,uchar *param_1,uint param_2)

{
  TaoCrypt::SHA::Update(*(SHA **)(this + 4),param_1,param_2);
  return;
}

```

---

## ~SHA

```asm
// === 08798cb0 yaSSL::SHA::~SHA  [0x08798cb0-0x8798d0f] ===
 8798cb0:	55                   	push   %ebp
 8798cb1:	89 e5                	mov    %esp,%ebp
 8798cb3:	83 ec 18             	sub    $0x18,%esp
 8798cb6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8798cb9:	e8 3a a1 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8798cbe:	81 c3 da 3e bd 00    	add    $0xbd3eda,%ebx
 8798cc4:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8798cc7:	8b 75 08             	mov    0x8(%ebp),%esi
 8798cca:	8b 83 dc fb ff ff    	mov    -0x424(%ebx),%eax
 8798cd0:	83 c0 08             	add    $0x8,%eax
 8798cd3:	89 06                	mov    %eax,(%esi)
 8798cd5:	8b 46 04             	mov    0x4(%esi),%eax
 8798cd8:	85 c0                	test   %eax,%eax
 8798cda:	74 0b                	je     8798ce7 <_ZN5yaSSL3SHAD1Ev+0x37>
 8798cdc:	8b 93 c4 ff ff ff    	mov    -0x3c(%ebx),%edx
 8798ce2:	83 c2 08             	add    $0x8,%edx
 8798ce5:	89 10                	mov    %edx,(%eax)
 8798ce7:	89 04 24             	mov    %eax,(%esp)
 8798cea:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8798cef:	e8 2c 7b fb ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 8798cf4:	8b 83 28 fb ff ff    	mov    -0x4d8(%ebx),%eax
 8798cfa:	83 c0 08             	add    $0x8,%eax
 8798cfd:	89 06                	mov    %eax,(%esi)
 8798cff:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8798d02:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8798d05:	89 ec                	mov    %ebp,%esp
 8798d07:	5d                   	pop    %ebp
 8798d08:	c3                   	ret
 8798d09:	90                   	nop
 8798d0a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::SHA::~SHA @ 0x8798cb0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SHA::~SHA() */

void __thiscall yaSSL::SHA::~SHA(SHA *this)

{
  undefined4 *puVar1;
  
  *(undefined **)this = PTR_vtable_0936c774 + 8;
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

## ~SHA_08798d10

```asm
// === 08798d10 yaSSL::SHA::~SHA  [0x08798d10-0x8798d3f] ===
 8798d10:	55                   	push   %ebp
 8798d11:	89 e5                	mov    %esp,%ebp
 8798d13:	53                   	push   %ebx
 8798d14:	e8 df a0 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8798d19:	81 c3 7f 3e bd 00    	add    $0xbd3e7f,%ebx
 8798d1f:	83 ec 14             	sub    $0x14,%esp
 8798d22:	8b 45 08             	mov    0x8(%ebp),%eax
 8798d25:	89 04 24             	mov    %eax,(%esp)
 8798d28:	e8 83 ff ff ff       	call   8798cb0 <_ZN5yaSSL3SHAD1Ev>
 8798d2d:	83 c4 14             	add    $0x14,%esp
 8798d30:	5b                   	pop    %ebx
 8798d31:	5d                   	pop    %ebp
 8798d32:	c3                   	ret
 8798d33:	90                   	nop
 8798d34:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8798d3a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::SHA::~SHA @ 0x8798d10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SHA::~SHA() */

void __thiscall yaSSL::SHA::~SHA(SHA *this)

{
  ~SHA(this);
  return;
}

```

