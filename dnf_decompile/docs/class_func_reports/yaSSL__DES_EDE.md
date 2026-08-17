# yaSSL__DES_EDE

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## DES_EDE

```asm
// === 087986e0 yaSSL::DES_EDE::DES_EDE  [0x087986e0-0x879878f] ===
 87986e0:	55                   	push   %ebp
 87986e1:	89 e5                	mov    %esp,%ebp
 87986e3:	56                   	push   %esi
 87986e4:	53                   	push   %ebx
 87986e5:	e8 0e a7 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87986ea:	81 c3 ae 44 bd 00    	add    $0xbd44ae,%ebx
 87986f0:	83 ec 10             	sub    $0x10,%esp
 87986f3:	8b 75 08             	mov    0x8(%ebp),%esi
 87986f6:	8b 83 40 fa ff ff    	mov    -0x5c0(%ebx),%eax
 87986fc:	83 c0 08             	add    $0x8,%eax
 87986ff:	89 06                	mov    %eax,(%esi)
 8798701:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8798706:	c7 04 24 70 03 00 00 	movl   $0x370,(%esp)
 879870d:	e8 8e 85 fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8798712:	8d 50 10             	lea    0x10(%eax),%edx
 8798715:	89 50 08             	mov    %edx,0x8(%eax)
 8798718:	8d 50 20             	lea    0x20(%eax),%edx
 879871b:	89 50 0c             	mov    %edx,0xc(%eax)
 879871e:	8b 93 48 fa ff ff    	mov    -0x5b8(%ebx),%edx
 8798724:	8d 88 c8 01 00 00    	lea    0x1c8(%eax),%ecx
 879872a:	89 88 c0 01 00 00    	mov    %ecx,0x1c0(%eax)
 8798730:	8d 88 d8 01 00 00    	lea    0x1d8(%eax),%ecx
 8798736:	c7 40 04 08 00 00 00 	movl   $0x8,0x4(%eax)
 879873d:	c7 40 30 00 00 00 00 	movl   $0x0,0x30(%eax)
 8798744:	83 c2 08             	add    $0x8,%edx
 8798747:	c7 40 34 01 00 00 00 	movl   $0x1,0x34(%eax)
 879874e:	89 10                	mov    %edx,(%eax)
 8798750:	c7 80 bc 01 00 00 08 	movl   $0x8,0x1bc(%eax)
 8798757:	00 00 00 
 879875a:	89 88 c4 01 00 00    	mov    %ecx,0x1c4(%eax)
 8798760:	c7 80 e8 01 00 00 01 	movl   $0x1,0x1e8(%eax)
 8798767:	00 00 00 
 879876a:	c7 80 ec 01 00 00 01 	movl   $0x1,0x1ec(%eax)
 8798771:	00 00 00 
 8798774:	89 90 b8 01 00 00    	mov    %edx,0x1b8(%eax)
 879877a:	89 46 04             	mov    %eax,0x4(%esi)
 879877d:	83 c4 10             	add    $0x10,%esp
 8798780:	5b                   	pop    %ebx
 8798781:	5e                   	pop    %esi
 8798782:	5d                   	pop    %ebp
 8798783:	c3                   	ret
 8798784:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 879878a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::DES_EDE::DES_EDE @ 0x87986e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DES_EDE::DES_EDE() */

void __thiscall yaSSL::DES_EDE::DES_EDE(DES_EDE *this)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  *(undefined **)this = PTR_vtable_0936c5d8 + 8;
  puVar2 = operator_new(0x370,0);
  puVar2[2] = puVar2 + 4;
  puVar2[3] = puVar2 + 8;
  puVar1 = PTR_vtable_0936c5e0;
  puVar2[0x70] = puVar2 + 0x72;
  puVar2[1] = 8;
  puVar2[0xc] = 0;
  puVar2[0xd] = 1;
  *puVar2 = puVar1 + 8;
  puVar2[0x6f] = 8;
  puVar2[0x71] = puVar2 + 0x76;
  puVar2[0x7a] = 1;
  puVar2[0x7b] = 1;
  puVar2[0x6e] = puVar1 + 8;
  *(undefined4 **)(this + 4) = puVar2;
  return;
}

```

---

## decrypt

```asm
// === 08799300 yaSSL::DES_EDE::decrypt  [0x08799300-0x879933f] ===
 8799300:	55                   	push   %ebp
 8799301:	89 e5                	mov    %esp,%ebp
 8799303:	53                   	push   %ebx
 8799304:	83 ec 14             	sub    $0x14,%esp
 8799307:	8b 45 14             	mov    0x14(%ebp),%eax
 879930a:	e8 e9 9a f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879930f:	81 c3 89 38 bd 00    	add    $0xbd3889,%ebx
 8799315:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8799319:	8b 45 10             	mov    0x10(%ebp),%eax
 879931c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8799320:	8b 45 0c             	mov    0xc(%ebp),%eax
 8799323:	89 44 24 04          	mov    %eax,0x4(%esp)
 8799327:	8b 45 08             	mov    0x8(%ebp),%eax
 879932a:	8b 40 04             	mov    0x4(%eax),%eax
 879932d:	05 b8 01 00 00       	add    $0x1b8,%eax
 8799332:	89 04 24             	mov    %eax,(%esp)
 8799335:	e8 36 f0 00 00       	call   87a8370 <_ZN8TaoCrypt8DES_EDE37ProcessEPhPKhj>
 879933a:	83 c4 14             	add    $0x14,%esp
 879933d:	5b                   	pop    %ebx
 879933e:	5d                   	pop    %ebp
 879933f:	c3                   	ret

```

```c
// yaSSL::DES_EDE::decrypt @ 0x8799300

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DES_EDE::decrypt(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall yaSSL::DES_EDE::decrypt(DES_EDE *this,uchar *param_1,uchar *param_2,uint param_3)

{
  TaoCrypt::DES_EDE3::Process((DES_EDE3 *)(*(int *)(this + 4) + 0x1b8),param_1,param_2,param_3);
  return;
}

```

---

## encrypt

```asm
// === 08799340 yaSSL::DES_EDE::encrypt  [0x08799340-0x879937f] ===
 8799340:	55                   	push   %ebp
 8799341:	89 e5                	mov    %esp,%ebp
 8799343:	53                   	push   %ebx
 8799344:	83 ec 14             	sub    $0x14,%esp
 8799347:	8b 45 14             	mov    0x14(%ebp),%eax
 879934a:	e8 a9 9a f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879934f:	81 c3 49 38 bd 00    	add    $0xbd3849,%ebx
 8799355:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8799359:	8b 45 10             	mov    0x10(%ebp),%eax
 879935c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8799360:	8b 45 0c             	mov    0xc(%ebp),%eax
 8799363:	89 44 24 04          	mov    %eax,0x4(%esp)
 8799367:	8b 45 08             	mov    0x8(%ebp),%eax
 879936a:	8b 40 04             	mov    0x4(%eax),%eax
 879936d:	89 04 24             	mov    %eax,(%esp)
 8799370:	e8 fb ef 00 00       	call   87a8370 <_ZN8TaoCrypt8DES_EDE37ProcessEPhPKhj>
 8799375:	83 c4 14             	add    $0x14,%esp
 8799378:	5b                   	pop    %ebx
 8799379:	5d                   	pop    %ebp
 879937a:	c3                   	ret
 879937b:	90                   	nop
 879937c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::DES_EDE::encrypt @ 0x8799340

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DES_EDE::encrypt(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall yaSSL::DES_EDE::encrypt(DES_EDE *this,uchar *param_1,uchar *param_2,uint param_3)

{
  TaoCrypt::DES_EDE3::Process(*(DES_EDE3 **)(this + 4),param_1,param_2,param_3);
  return;
}

```

---

## set_decryptKey

```asm
// === 08799380 yaSSL::DES_EDE::set_decryptKey  [0x08799380-0x87993ef] ===
 8799380:	55                   	push   %ebp
 8799381:	89 e5                	mov    %esp,%ebp
 8799383:	83 ec 28             	sub    $0x28,%esp
 8799386:	8b 45 08             	mov    0x8(%ebp),%eax
 8799389:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 879938c:	e8 67 9a f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8799391:	81 c3 07 38 bd 00    	add    $0xbd3807,%ebx
 8799397:	89 7d fc             	mov    %edi,-0x4(%ebp)
 879939a:	8b 7d 10             	mov    0x10(%ebp),%edi
 879939d:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87993a0:	8b 70 04             	mov    0x4(%eax),%esi
 87993a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 87993a6:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 87993ad:	00 
 87993ae:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 87993b5:	00 
 87993b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 87993ba:	8d 86 b8 01 00 00    	lea    0x1b8(%esi),%eax
 87993c0:	89 04 24             	mov    %eax,(%esp)
 87993c3:	e8 a8 e8 00 00       	call   87a7c70 <_ZN8TaoCrypt8DES_EDE36SetKeyEPKhjNS_9CipherDirE>
 87993c8:	8b 07                	mov    (%edi),%eax
 87993ca:	89 86 c8 01 00 00    	mov    %eax,0x1c8(%esi)
 87993d0:	8b 47 04             	mov    0x4(%edi),%eax
 87993d3:	89 86 cc 01 00 00    	mov    %eax,0x1cc(%esi)
 87993d9:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87993dc:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87993df:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87993e2:	89 ec                	mov    %ebp,%esp
 87993e4:	5d                   	pop    %ebp
 87993e5:	c3                   	ret
 87993e6:	8d 76 00             	lea    0x0(%esi),%esi
 87993e9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::DES_EDE::set_decryptKey @ 0x8799380

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DES_EDE::set_decryptKey(unsigned char const*, unsigned char const*) */

void __thiscall yaSSL::DES_EDE::set_decryptKey(DES_EDE *this,uchar *param_1,uchar *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 4);
  TaoCrypt::DES_EDE3::SetKey((DES_EDE3 *)(iVar1 + 0x1b8),param_1,0x18,1);
  *(undefined4 *)(iVar1 + 0x1c8) = *(undefined4 *)param_2;
  *(undefined4 *)(iVar1 + 0x1cc) = *(undefined4 *)(param_2 + 4);
  return;
}

```

---

## set_encryptKey

```asm
// === 087993f0 yaSSL::DES_EDE::set_encryptKey  [0x087993f0-0x879944f] ===
 87993f0:	55                   	push   %ebp
 87993f1:	89 e5                	mov    %esp,%ebp
 87993f3:	83 ec 28             	sub    $0x28,%esp
 87993f6:	8b 45 08             	mov    0x8(%ebp),%eax
 87993f9:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87993fc:	e8 f7 99 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8799401:	81 c3 97 37 bd 00    	add    $0xbd3797,%ebx
 8799407:	89 7d fc             	mov    %edi,-0x4(%ebp)
 879940a:	8b 7d 10             	mov    0x10(%ebp),%edi
 879940d:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8799410:	8b 70 04             	mov    0x4(%eax),%esi
 8799413:	8b 45 0c             	mov    0xc(%ebp),%eax
 8799416:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 879941d:	00 
 879941e:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 8799425:	00 
 8799426:	89 34 24             	mov    %esi,(%esp)
 8799429:	89 44 24 04          	mov    %eax,0x4(%esp)
 879942d:	e8 3e e8 00 00       	call   87a7c70 <_ZN8TaoCrypt8DES_EDE36SetKeyEPKhjNS_9CipherDirE>
 8799432:	8b 07                	mov    (%edi),%eax
 8799434:	89 46 10             	mov    %eax,0x10(%esi)
 8799437:	8b 47 04             	mov    0x4(%edi),%eax
 879943a:	89 46 14             	mov    %eax,0x14(%esi)
 879943d:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8799440:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8799443:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8799446:	89 ec                	mov    %ebp,%esp
 8799448:	5d                   	pop    %ebp
 8799449:	c3                   	ret
 879944a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::DES_EDE::set_encryptKey @ 0x87993f0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DES_EDE::set_encryptKey(unsigned char const*, unsigned char const*) */

void __thiscall yaSSL::DES_EDE::set_encryptKey(DES_EDE *this,uchar *param_1,uchar *param_2)

{
  DES_EDE3 *pDVar1;
  
  pDVar1 = *(DES_EDE3 **)(this + 4);
  TaoCrypt::DES_EDE3::SetKey(pDVar1,param_1,0x18,0);
  *(undefined4 *)(pDVar1 + 0x10) = *(undefined4 *)param_2;
  *(undefined4 *)(pDVar1 + 0x14) = *(undefined4 *)(param_2 + 4);
  return;
}

```

---

## ~DES_EDE

```asm
// === 08798950 yaSSL::DES_EDE::~DES_EDE  [0x08798950-0x87989af] ===
 8798950:	55                   	push   %ebp
 8798951:	89 e5                	mov    %esp,%ebp
 8798953:	83 ec 18             	sub    $0x18,%esp
 8798956:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8798959:	e8 9a a4 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879895e:	81 c3 3a 42 bd 00    	add    $0xbd423a,%ebx
 8798964:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8798967:	8b 75 08             	mov    0x8(%ebp),%esi
 879896a:	8b 83 40 fa ff ff    	mov    -0x5c0(%ebx),%eax
 8798970:	83 c0 08             	add    $0x8,%eax
 8798973:	89 06                	mov    %eax,(%esi)
 8798975:	8b 46 04             	mov    0x4(%esi),%eax
 8798978:	85 c0                	test   %eax,%eax
 879897a:	74 11                	je     879898d <_ZN5yaSSL7DES_EDED1Ev+0x3d>
 879897c:	8b 93 8c fb ff ff    	mov    -0x474(%ebx),%edx
 8798982:	83 c2 08             	add    $0x8,%edx
 8798985:	89 90 b8 01 00 00    	mov    %edx,0x1b8(%eax)
 879898b:	89 10                	mov    %edx,(%eax)
 879898d:	89 04 24             	mov    %eax,(%esp)
 8798990:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8798995:	e8 86 7e fb ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 879899a:	8b 83 e0 fa ff ff    	mov    -0x520(%ebx),%eax
 87989a0:	83 c0 08             	add    $0x8,%eax
 87989a3:	89 06                	mov    %eax,(%esi)
 87989a5:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87989a8:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87989ab:	89 ec                	mov    %ebp,%esp
 87989ad:	5d                   	pop    %ebp
 87989ae:	c3                   	ret
 87989af:	90                   	nop

```

```c
// yaSSL::DES_EDE::~DES_EDE @ 0x8798950

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DES_EDE::~DES_EDE() */

void __thiscall yaSSL::DES_EDE::~DES_EDE(DES_EDE *this)

{
  undefined4 *puVar1;
  undefined *puVar2;
  
  *(undefined **)this = PTR_vtable_0936c5d8 + 8;
  puVar1 = *(undefined4 **)(this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = PTR_vtable_0936c724 + 8;
    puVar1[0x6e] = puVar2;
    *puVar1 = puVar2;
  }
  operator_delete(puVar1,0);
  *(undefined **)this = PTR_vtable_0936c678 + 8;
  return;
}

```

---

## ~DES_EDE_087989b0

```asm
// === 087989b0 yaSSL::DES_EDE::~DES_EDE  [0x087989b0-0x87989df] ===
 87989b0:	55                   	push   %ebp
 87989b1:	89 e5                	mov    %esp,%ebp
 87989b3:	53                   	push   %ebx
 87989b4:	e8 3f a4 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87989b9:	81 c3 df 41 bd 00    	add    $0xbd41df,%ebx
 87989bf:	83 ec 14             	sub    $0x14,%esp
 87989c2:	8b 45 08             	mov    0x8(%ebp),%eax
 87989c5:	89 04 24             	mov    %eax,(%esp)
 87989c8:	e8 83 ff ff ff       	call   8798950 <_ZN5yaSSL7DES_EDED1Ev>
 87989cd:	83 c4 14             	add    $0x14,%esp
 87989d0:	5b                   	pop    %ebx
 87989d1:	5d                   	pop    %ebp
 87989d2:	c3                   	ret
 87989d3:	90                   	nop
 87989d4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87989da:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::DES_EDE::~DES_EDE @ 0x87989b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DES_EDE::~DES_EDE() */

void __thiscall yaSSL::DES_EDE::~DES_EDE(DES_EDE *this)

{
  ~DES_EDE(this);
  return;
}

```

