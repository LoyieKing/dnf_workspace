# yaSSL__x509

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## Swap

```asm
// === 087973a0 yaSSL::x509::Swap  [0x087973a0-0x87973cf] ===
 87973a0:	55                   	push   %ebp
 87973a1:	89 e5                	mov    %esp,%ebp
 87973a3:	8b 55 08             	mov    0x8(%ebp),%edx
 87973a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 87973a9:	56                   	push   %esi
 87973aa:	8b 0a                	mov    (%edx),%ecx
 87973ac:	8b 30                	mov    (%eax),%esi
 87973ae:	89 32                	mov    %esi,(%edx)
 87973b0:	8b 70 04             	mov    0x4(%eax),%esi
 87973b3:	89 08                	mov    %ecx,(%eax)
 87973b5:	8b 4a 04             	mov    0x4(%edx),%ecx
 87973b8:	89 72 04             	mov    %esi,0x4(%edx)
 87973bb:	89 48 04             	mov    %ecx,0x4(%eax)
 87973be:	5e                   	pop    %esi
 87973bf:	5d                   	pop    %ebp
 87973c0:	c3                   	ret
 87973c1:	90                   	nop
 87973c2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87973c9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::x509::Swap @ 0x87973a0

/* yaSSL::x509::Swap(yaSSL::x509&) */

void __thiscall yaSSL::x509::Swap(x509 *this,x509 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)param_1 = uVar1;
  uVar1 = *(undefined4 *)(this + 4);
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}

```

---

## get_buffer

```asm
// === 087973e0 yaSSL::x509::get_buffer  [0x087973e0-0x87973ef] ===
 87973e0:	55                   	push   %ebp
 87973e1:	89 e5                	mov    %esp,%ebp
 87973e3:	8b 45 08             	mov    0x8(%ebp),%eax
 87973e6:	5d                   	pop    %ebp
 87973e7:	8b 40 04             	mov    0x4(%eax),%eax
 87973ea:	c3                   	ret
 87973eb:	90                   	nop
 87973ec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::x509::get_buffer @ 0x87973e0

/* yaSSL::x509::get_buffer() const */

undefined4 __thiscall yaSSL::x509::get_buffer(x509 *this)

{
  return *(undefined4 *)(this + 4);
}

```

---

## get_length

```asm
// === 087973d0 yaSSL::x509::get_length  [0x087973d0-0x87973df] ===
 87973d0:	55                   	push   %ebp
 87973d1:	89 e5                	mov    %esp,%ebp
 87973d3:	8b 45 08             	mov    0x8(%ebp),%eax
 87973d6:	5d                   	pop    %ebp
 87973d7:	8b 00                	mov    (%eax),%eax
 87973d9:	c3                   	ret
 87973da:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::x509::get_length @ 0x87973d0

/* yaSSL::x509::get_length() const */

undefined4 __thiscall yaSSL::x509::get_length(x509 *this)

{
  return *(undefined4 *)this;
}

```

---

## operator=

```asm
// === 08797880 yaSSL::x509::operator=  [0x08797880-0x87978df] ===
 8797880:	55                   	push   %ebp
 8797881:	89 e5                	mov    %esp,%ebp
 8797883:	83 ec 38             	sub    $0x38,%esp
 8797886:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8797889:	8b 45 0c             	mov    0xc(%ebp),%eax
 879788c:	e8 67 b5 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8797891:	81 c3 07 53 bd 00    	add    $0xbd5307,%ebx
 8797897:	89 7d fc             	mov    %edi,-0x4(%ebp)
 879789a:	8b 7d 08             	mov    0x8(%ebp),%edi
 879789d:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87978a0:	8d 75 e0             	lea    -0x20(%ebp),%esi
 87978a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 87978a7:	89 34 24             	mov    %esi,(%esp)
 87978aa:	e8 a1 fd ff ff       	call   8797650 <_ZN5yaSSL4x509C1ERKS0_>
 87978af:	89 74 24 04          	mov    %esi,0x4(%esp)
 87978b3:	89 3c 24             	mov    %edi,(%esp)
 87978b6:	e8 e5 fa ff ff       	call   87973a0 <_ZN5yaSSL4x5094SwapERS0_>
 87978bb:	89 34 24             	mov    %esi,(%esp)
 87978be:	e8 8d ff ff ff       	call   8797850 <_ZN5yaSSL4x509D1Ev>
 87978c3:	89 f8                	mov    %edi,%eax
 87978c5:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87978c8:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87978cb:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87978ce:	89 ec                	mov    %ebp,%esp
 87978d0:	5d                   	pop    %ebp
 87978d1:	c3                   	ret
 87978d2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87978d9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::x509::operator= @ 0x8797880

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::x509::TEMPNAMEPLACEHOLDERVALUE(yaSSL::x509 const&) */

x509 * __thiscall yaSSL::x509::operator=(x509 *this,x509 *param_1)

{
  x509 local_24 [20];
  
  x509(local_24,param_1);
  Swap(this,local_24);
  ~x509(local_24);
  return this;
}

```

---

## use_buffer

```asm
// === 087973f0 yaSSL::x509::use_buffer  [0x087973f0-0x87973ff] ===
 87973f0:	55                   	push   %ebp
 87973f1:	89 e5                	mov    %esp,%ebp
 87973f3:	8b 45 08             	mov    0x8(%ebp),%eax
 87973f6:	5d                   	pop    %ebp
 87973f7:	8b 40 04             	mov    0x4(%eax),%eax
 87973fa:	c3                   	ret
 87973fb:	90                   	nop
 87973fc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::x509::use_buffer @ 0x87973f0

/* yaSSL::x509::use_buffer() */

undefined4 __thiscall yaSSL::x509::use_buffer(x509 *this)

{
  return *(undefined4 *)(this + 4);
}

```

---

## x509

```asm
// === 08797650 yaSSL::x509::x509  [0x08797650-0x87976af] ===
 8797650:	55                   	push   %ebp
 8797651:	89 e5                	mov    %esp,%ebp
 8797653:	83 ec 28             	sub    $0x28,%esp
 8797656:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8797659:	8b 7d 0c             	mov    0xc(%ebp),%edi
 879765c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 879765f:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8797662:	8b 75 08             	mov    0x8(%ebp),%esi
 8797665:	e8 8e b7 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879766a:	81 c3 2e 55 bd 00    	add    $0xbd552e,%ebx
 8797670:	8b 07                	mov    (%edi),%eax
 8797672:	89 06                	mov    %eax,(%esi)
 8797674:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8797679:	8b 06                	mov    (%esi),%eax
 879767b:	89 04 24             	mov    %eax,(%esp)
 879767e:	e8 cd ac fb ff       	call   8752350 <_ZnajN5yaSSL5new_tE>
 8797683:	8b 0e                	mov    (%esi),%ecx
 8797685:	89 46 04             	mov    %eax,0x4(%esi)
 8797688:	8b 57 04             	mov    0x4(%edi),%edx
 879768b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 879768f:	89 04 24             	mov    %eax,(%esp)
 8797692:	89 54 24 04          	mov    %edx,0x4(%esp)
 8797696:	e8 05 62 8e ff       	call   807d8a0 <memcpy@plt>
 879769b:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 879769e:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87976a1:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87976a4:	89 ec                	mov    %ebp,%esp
 87976a6:	5d                   	pop    %ebp
 87976a7:	c3                   	ret
 87976a8:	90                   	nop
 87976a9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::x509::x509 @ 0x8797650

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::x509::x509(yaSSL::x509 const&) */

void __thiscall yaSSL::x509::x509(x509 *this,x509 *param_1)

{
  void *__dest;
  uint in_stack_ffffffd8;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  __dest = operator_new__(*(undefined4 *)this,in_stack_ffffffd8 & 0xffffff00);
  *(void **)(this + 4) = __dest;
  memcpy(__dest,*(void **)(param_1 + 4),*(size_t *)this);
  return;
}

```

---

## x509_08797750

```asm
// === 08797750 yaSSL::x509::x509  [0x08797750-0x879778f] ===
 8797750:	55                   	push   %ebp
 8797751:	89 e5                	mov    %esp,%ebp
 8797753:	83 ec 18             	sub    $0x18,%esp
 8797756:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8797759:	8b 45 0c             	mov    0xc(%ebp),%eax
 879775c:	8b 75 08             	mov    0x8(%ebp),%esi
 879775f:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8797762:	e8 91 b6 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8797767:	81 c3 31 54 bd 00    	add    $0xbd5431,%ebx
 879776d:	89 06                	mov    %eax,(%esi)
 879776f:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8797774:	89 04 24             	mov    %eax,(%esp)
 8797777:	e8 d4 ab fb ff       	call   8752350 <_ZnajN5yaSSL5new_tE>
 879777c:	89 46 04             	mov    %eax,0x4(%esi)
 879777f:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8797782:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8797785:	89 ec                	mov    %ebp,%esp
 8797787:	5d                   	pop    %ebp
 8797788:	c3                   	ret
 8797789:	90                   	nop
 879778a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::x509::x509 @ 0x8797750

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::x509::x509(unsigned int) */

void __thiscall yaSSL::x509::x509(x509 *this,uint param_1)

{
  void *pvVar1;
  
  *(uint *)this = param_1;
  pvVar1 = operator_new__(param_1,0);
  *(void **)(this + 4) = pvVar1;
  return;
}

```

---

## ~x509

```asm
// === 08797850 yaSSL::x509::~x509  [0x08797850-0x879787f] ===
 8797850:	55                   	push   %ebp
 8797851:	89 e5                	mov    %esp,%ebp
 8797853:	53                   	push   %ebx
 8797854:	83 ec 14             	sub    $0x14,%esp
 8797857:	8b 45 08             	mov    0x8(%ebp),%eax
 879785a:	e8 99 b5 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879785f:	81 c3 39 53 bd 00    	add    $0xbd5339,%ebx
 8797865:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879786a:	8b 40 04             	mov    0x4(%eax),%eax
 879786d:	89 04 24             	mov    %eax,(%esp)
 8797870:	e8 7b 90 fb ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 8797875:	83 c4 14             	add    $0x14,%esp
 8797878:	5b                   	pop    %ebx
 8797879:	5d                   	pop    %ebp
 879787a:	c3                   	ret
 879787b:	90                   	nop
 879787c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::x509::~x509 @ 0x8797850

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::x509::~x509() */

void __thiscall yaSSL::x509::~x509(x509 *this)

{
  operator_delete__(*(undefined4 *)(this + 4),0);
  return;
}

```

