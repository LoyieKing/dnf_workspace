# TaoCrypt__SHA512

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## Init

```asm
// === 087684b0 TaoCrypt::SHA512::Init  [0x087684b0-0x876853f] ===
 87684b0:	55                   	push   %ebp
 87684b1:	89 e5                	mov    %esp,%ebp
 87684b3:	8b 45 08             	mov    0x8(%ebp),%eax
 87684b6:	c7 40 10 08 c9 bc f3 	movl   $0xf3bcc908,0x10(%eax)
 87684bd:	c7 40 14 67 e6 09 6a 	movl   $0x6a09e667,0x14(%eax)
 87684c4:	c7 40 18 3b a7 ca 84 	movl   $0x84caa73b,0x18(%eax)
 87684cb:	c7 40 1c 85 ae 67 bb 	movl   $0xbb67ae85,0x1c(%eax)
 87684d2:	c7 40 20 2b f8 94 fe 	movl   $0xfe94f82b,0x20(%eax)
 87684d9:	c7 40 24 72 f3 6e 3c 	movl   $0x3c6ef372,0x24(%eax)
 87684e0:	c7 40 28 f1 36 1d 5f 	movl   $0x5f1d36f1,0x28(%eax)
 87684e7:	c7 40 2c 3a f5 4f a5 	movl   $0xa54ff53a,0x2c(%eax)
 87684ee:	c7 40 30 d1 82 e6 ad 	movl   $0xade682d1,0x30(%eax)
 87684f5:	c7 40 34 7f 52 0e 51 	movl   $0x510e527f,0x34(%eax)
 87684fc:	c7 40 38 1f 6c 3e 2b 	movl   $0x2b3e6c1f,0x38(%eax)
 8768503:	c7 40 3c 8c 68 05 9b 	movl   $0x9b05688c,0x3c(%eax)
 876850a:	c7 40 40 6b bd 41 fb 	movl   $0xfb41bd6b,0x40(%eax)
 8768511:	c7 40 44 ab d9 83 1f 	movl   $0x1f83d9ab,0x44(%eax)
 8768518:	c7 40 48 79 21 7e 13 	movl   $0x137e2179,0x48(%eax)
 876851f:	c7 40 4c 19 cd e0 5b 	movl   $0x5be0cd19,0x4c(%eax)
 8768526:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 876852d:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8768534:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 876853b:	5d                   	pop    %ebp
 876853c:	c3                   	ret
 876853d:	90                   	nop
 876853e:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::SHA512::Init @ 0x87684b0

/* TaoCrypt::SHA512::Init() */

void __thiscall TaoCrypt::SHA512::Init(SHA512 *this)

{
  *(undefined4 *)(this + 0x10) = 0xf3bcc908;
  *(undefined4 *)(this + 0x14) = 0x6a09e667;
  *(undefined4 *)(this + 0x18) = 0x84caa73b;
  *(undefined4 *)(this + 0x1c) = 0xbb67ae85;
  *(undefined4 *)(this + 0x20) = 0xfe94f82b;
  *(undefined4 *)(this + 0x24) = 0x3c6ef372;
  *(undefined4 *)(this + 0x28) = 0x5f1d36f1;
  *(undefined4 *)(this + 0x2c) = 0xa54ff53a;
  *(undefined4 *)(this + 0x30) = 0xade682d1;
  *(undefined4 *)(this + 0x34) = 0x510e527f;
  *(undefined4 *)(this + 0x38) = 0x2b3e6c1f;
  *(undefined4 *)(this + 0x3c) = 0x9b05688c;
  *(undefined4 *)(this + 0x40) = 0xfb41bd6b;
  *(undefined4 *)(this + 0x44) = 0x1f83d9ab;
  *(undefined4 *)(this + 0x48) = 0x137e2179;
  *(undefined4 *)(this + 0x4c) = 0x5be0cd19;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}

```

---

## SHA512

```asm
// === 08770070 TaoCrypt::SHA512::SHA512  [0x08770070-0x877013f] ===
 8770070:	55                   	push   %ebp
 8770071:	89 e5                	mov    %esp,%ebp
 8770073:	57                   	push   %edi
 8770074:	56                   	push   %esi
 8770075:	53                   	push   %ebx
 8770076:	e8 7d 2d fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 877007b:	81 c3 1d cb bf 00    	add    $0xbfcb1d,%ebx
 8770081:	83 ec 1c             	sub    $0x1c,%esp
 8770084:	8b 7d 08             	mov    0x8(%ebp),%edi
 8770087:	8b 75 0c             	mov    0xc(%ebp),%esi
 877008a:	c7 44 24 08 80 00 00 	movl   $0x80,0x8(%esp)
 8770091:	00 
 8770092:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 8770099:	00 
 877009a:	89 3c 24             	mov    %edi,(%esp)
 877009d:	e8 7e 8b fe ff       	call   8758c20 <_ZN8TaoCrypt19HASH64withTransformC1Ejj>
 87700a2:	8b 83 00 fe ff ff    	mov    -0x200(%ebx),%eax
 87700a8:	8d 4e 10             	lea    0x10(%esi),%ecx
 87700ab:	8d 57 10             	lea    0x10(%edi),%edx
 87700ae:	83 c0 08             	add    $0x8,%eax
 87700b1:	89 07                	mov    %eax,(%edi)
 87700b3:	8b 46 04             	mov    0x4(%esi),%eax
 87700b6:	89 47 04             	mov    %eax,0x4(%edi)
 87700b9:	8b 46 08             	mov    0x8(%esi),%eax
 87700bc:	89 47 08             	mov    %eax,0x8(%edi)
 87700bf:	8b 46 0c             	mov    0xc(%esi),%eax
 87700c2:	89 47 0c             	mov    %eax,0xc(%edi)
 87700c5:	8b 46 10             	mov    0x10(%esi),%eax
 87700c8:	83 c6 50             	add    $0x50,%esi
 87700cb:	89 47 10             	mov    %eax,0x10(%edi)
 87700ce:	8b 41 04             	mov    0x4(%ecx),%eax
 87700d1:	89 42 04             	mov    %eax,0x4(%edx)
 87700d4:	8b 41 08             	mov    0x8(%ecx),%eax
 87700d7:	89 42 08             	mov    %eax,0x8(%edx)
 87700da:	8b 41 0c             	mov    0xc(%ecx),%eax
 87700dd:	89 42 0c             	mov    %eax,0xc(%edx)
 87700e0:	8b 41 10             	mov    0x10(%ecx),%eax
 87700e3:	89 42 10             	mov    %eax,0x10(%edx)
 87700e6:	8b 41 14             	mov    0x14(%ecx),%eax
 87700e9:	89 42 14             	mov    %eax,0x14(%edx)
 87700ec:	8b 41 18             	mov    0x18(%ecx),%eax
 87700ef:	89 42 18             	mov    %eax,0x18(%edx)
 87700f2:	8b 41 1c             	mov    0x1c(%ecx),%eax
 87700f5:	89 42 1c             	mov    %eax,0x1c(%edx)
 87700f8:	8b 41 20             	mov    0x20(%ecx),%eax
 87700fb:	89 42 20             	mov    %eax,0x20(%edx)
 87700fe:	8b 41 24             	mov    0x24(%ecx),%eax
 8770101:	89 42 24             	mov    %eax,0x24(%edx)
 8770104:	8b 41 28             	mov    0x28(%ecx),%eax
 8770107:	89 42 28             	mov    %eax,0x28(%edx)
 877010a:	8b 41 2c             	mov    0x2c(%ecx),%eax
 877010d:	89 42 2c             	mov    %eax,0x2c(%edx)
 8770110:	8b 41 30             	mov    0x30(%ecx),%eax
 8770113:	89 42 30             	mov    %eax,0x30(%edx)
 8770116:	8b 41 34             	mov    0x34(%ecx),%eax
 8770119:	89 42 34             	mov    %eax,0x34(%edx)
 877011c:	8b 41 38             	mov    0x38(%ecx),%eax
 877011f:	89 42 38             	mov    %eax,0x38(%edx)
 8770122:	8b 41 3c             	mov    0x3c(%ecx),%eax
 8770125:	b9 20 00 00 00       	mov    $0x20,%ecx
 877012a:	89 42 3c             	mov    %eax,0x3c(%edx)
 877012d:	8d 47 50             	lea    0x50(%edi),%eax
 8770130:	89 c7                	mov    %eax,%edi
 8770132:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 8770134:	83 c4 1c             	add    $0x1c,%esp
 8770137:	5b                   	pop    %ebx
 8770138:	5e                   	pop    %esi
 8770139:	5f                   	pop    %edi
 877013a:	5d                   	pop    %ebp
 877013b:	c3                   	ret
 877013c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::SHA512::SHA512 @ 0x8770070

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::SHA512::SHA512(TaoCrypt::SHA512 const&) */

void __thiscall TaoCrypt::SHA512::SHA512(SHA512 *this,SHA512 *param_1)

{
  int iVar1;
  SHA512 *pSVar2;
  SHA512 *pSVar3;
  byte bVar4;
  
  bVar4 = 0;
  HASH64withTransform::HASH64withTransform((HASH64withTransform *)this,8,0x80);
  *(undefined **)this = PTR_vtable_0936c998 + 8;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
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
  pSVar2 = param_1 + 0x50;
  pSVar3 = this + 0x50;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pSVar3 = *(undefined4 *)pSVar2;
    pSVar2 = pSVar2 + (uint)bVar4 * -8 + 4;
    pSVar3 = pSVar3 + (uint)bVar4 * -8 + 4;
  }
  return;
}

```

---

## Swap

```asm
// === 0876f950 TaoCrypt::SHA512::Swap  [0x0876f950-0x876f9ff] ===
 876f950:	55                   	push   %ebp
 876f951:	89 e5                	mov    %esp,%ebp
 876f953:	57                   	push   %edi
 876f954:	8b 45 08             	mov    0x8(%ebp),%eax
 876f957:	56                   	push   %esi
 876f958:	8b 75 0c             	mov    0xc(%ebp),%esi
 876f95b:	8b 50 08             	mov    0x8(%eax),%edx
 876f95e:	8b 4e 08             	mov    0x8(%esi),%ecx
 876f961:	8b 7e 10             	mov    0x10(%esi),%edi
 876f964:	89 48 08             	mov    %ecx,0x8(%eax)
 876f967:	8b 4e 0c             	mov    0xc(%esi),%ecx
 876f96a:	89 56 08             	mov    %edx,0x8(%esi)
 876f96d:	8b 50 0c             	mov    0xc(%eax),%edx
 876f970:	89 78 10             	mov    %edi,0x10(%eax)
 876f973:	89 48 0c             	mov    %ecx,0xc(%eax)
 876f976:	8b 4e 04             	mov    0x4(%esi),%ecx
 876f979:	89 56 0c             	mov    %edx,0xc(%esi)
 876f97c:	8b 50 04             	mov    0x4(%eax),%edx
 876f97f:	89 48 04             	mov    %ecx,0x4(%eax)
 876f982:	8d 4e 10             	lea    0x10(%esi),%ecx
 876f985:	8b 79 04             	mov    0x4(%ecx),%edi
 876f988:	89 56 04             	mov    %edx,0x4(%esi)
 876f98b:	8d 50 10             	lea    0x10(%eax),%edx
 876f98e:	83 c0 50             	add    $0x50,%eax
 876f991:	83 c6 50             	add    $0x50,%esi
 876f994:	89 7a 04             	mov    %edi,0x4(%edx)
 876f997:	8b 79 08             	mov    0x8(%ecx),%edi
 876f99a:	89 7a 08             	mov    %edi,0x8(%edx)
 876f99d:	8b 79 0c             	mov    0xc(%ecx),%edi
 876f9a0:	89 7a 0c             	mov    %edi,0xc(%edx)
 876f9a3:	8b 79 10             	mov    0x10(%ecx),%edi
 876f9a6:	89 7a 10             	mov    %edi,0x10(%edx)
 876f9a9:	8b 79 14             	mov    0x14(%ecx),%edi
 876f9ac:	89 7a 14             	mov    %edi,0x14(%edx)
 876f9af:	8b 79 18             	mov    0x18(%ecx),%edi
 876f9b2:	89 7a 18             	mov    %edi,0x18(%edx)
 876f9b5:	8b 79 1c             	mov    0x1c(%ecx),%edi
 876f9b8:	89 7a 1c             	mov    %edi,0x1c(%edx)
 876f9bb:	8b 79 20             	mov    0x20(%ecx),%edi
 876f9be:	89 7a 20             	mov    %edi,0x20(%edx)
 876f9c1:	8b 79 24             	mov    0x24(%ecx),%edi
 876f9c4:	89 7a 24             	mov    %edi,0x24(%edx)
 876f9c7:	8b 79 28             	mov    0x28(%ecx),%edi
 876f9ca:	89 7a 28             	mov    %edi,0x28(%edx)
 876f9cd:	8b 79 2c             	mov    0x2c(%ecx),%edi
 876f9d0:	89 7a 2c             	mov    %edi,0x2c(%edx)
 876f9d3:	8b 79 30             	mov    0x30(%ecx),%edi
 876f9d6:	89 7a 30             	mov    %edi,0x30(%edx)
 876f9d9:	8b 79 34             	mov    0x34(%ecx),%edi
 876f9dc:	89 7a 34             	mov    %edi,0x34(%edx)
 876f9df:	8b 79 38             	mov    0x38(%ecx),%edi
 876f9e2:	89 7a 38             	mov    %edi,0x38(%edx)
 876f9e5:	8b 49 3c             	mov    0x3c(%ecx),%ecx
 876f9e8:	89 c7                	mov    %eax,%edi
 876f9ea:	89 4a 3c             	mov    %ecx,0x3c(%edx)
 876f9ed:	b9 20 00 00 00       	mov    $0x20,%ecx
 876f9f2:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 876f9f4:	5e                   	pop    %esi
 876f9f5:	5f                   	pop    %edi
 876f9f6:	5d                   	pop    %ebp
 876f9f7:	c3                   	ret
 876f9f8:	90                   	nop
 876f9f9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::SHA512::Swap @ 0x876f950

/* TaoCrypt::SHA512::Swap(TaoCrypt::SHA512&) */

void __thiscall TaoCrypt::SHA512::Swap(SHA512 *this,SHA512 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  SHA512 *pSVar5;
  SHA512 *pSVar6;
  
  uVar1 = *(undefined4 *)(this + 8);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(this + 0x10) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = *(undefined4 *)(this + 4);
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
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
  pSVar5 = param_1 + 0x50;
  pSVar6 = this + 0x50;
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pSVar6 = *(undefined4 *)pSVar5;
    pSVar5 = pSVar5 + 4;
    pSVar6 = pSVar6 + 4;
  }
  return;
}

```

---

## Transform

```asm
// === 0876d480 TaoCrypt::SHA512::Transform  [0x0876d480-0x876d49f] ===
 876d480:	55                   	push   %ebp
 876d481:	89 e5                	mov    %esp,%ebp
 876d483:	8b 45 08             	mov    0x8(%ebp),%eax
 876d486:	5d                   	pop    %ebp
 876d487:	8d 50 50             	lea    0x50(%eax),%edx
 876d48a:	83 c0 10             	add    $0x10,%eax
 876d48d:	e9 de c0 ff ff       	jmp    8769570 <_ZN8TaoCryptL12Transform512EPyS0_>
 876d492:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 876d499:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::SHA512::Transform @ 0x876d480

/* TaoCrypt::SHA512::Transform() */

void __thiscall TaoCrypt::SHA512::Transform(SHA512 *this)

{
  Transform512((ulonglong *)(this + 0x10),(ulonglong *)(this + 0x50));
  return;
}

```

---

## operator=

```asm
// === 08770140 TaoCrypt::SHA512::operator=  [0x08770140-0x877018f] ===
 8770140:	55                   	push   %ebp
 8770141:	89 e5                	mov    %esp,%ebp
 8770143:	81 ec f8 00 00 00    	sub    $0xf8,%esp
 8770149:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 877014c:	8b 45 0c             	mov    0xc(%ebp),%eax
 877014f:	e8 a4 2c fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8770154:	81 c3 44 ca bf 00    	add    $0xbfca44,%ebx
 877015a:	89 75 f8             	mov    %esi,-0x8(%ebp)
 877015d:	8b 75 08             	mov    0x8(%ebp),%esi
 8770160:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8770163:	8d bd 18 ff ff ff    	lea    -0xe8(%ebp),%edi
 8770169:	89 44 24 04          	mov    %eax,0x4(%esp)
 877016d:	89 3c 24             	mov    %edi,(%esp)
 8770170:	e8 fb fe ff ff       	call   8770070 <_ZN8TaoCrypt6SHA512C1ERKS0_>
 8770175:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8770179:	89 34 24             	mov    %esi,(%esp)
 877017c:	e8 cf f7 ff ff       	call   876f950 <_ZN8TaoCrypt6SHA5124SwapERS0_>
 8770181:	89 f0                	mov    %esi,%eax
 8770183:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8770186:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8770189:	8b 7d fc             	mov    -0x4(%ebp),%edi
 877018c:	89 ec                	mov    %ebp,%esp
 877018e:	5d                   	pop    %ebp
 877018f:	c3                   	ret

```

```c
// TaoCrypt::SHA512::operator= @ 0x8770140

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::SHA512::TEMPNAMEPLACEHOLDERVALUE(TaoCrypt::SHA512 const&) */

SHA512 * __thiscall TaoCrypt::SHA512::operator=(SHA512 *this,SHA512 *param_1)

{
  SHA512 local_ec [220];
  
  SHA512(local_ec,param_1);
  Swap(this,local_ec);
  return this;
}

```

