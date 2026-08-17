# TaoCrypt__SHA384

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## Init

```asm
// === 08768540 TaoCrypt::SHA384::Init  [0x08768540-0x87685cf] ===
 8768540:	55                   	push   %ebp
 8768541:	89 e5                	mov    %esp,%ebp
 8768543:	8b 45 08             	mov    0x8(%ebp),%eax
 8768546:	c7 40 10 d8 9e 05 c1 	movl   $0xc1059ed8,0x10(%eax)
 876854d:	c7 40 14 5d 9d bb cb 	movl   $0xcbbb9d5d,0x14(%eax)
 8768554:	c7 40 18 07 d5 7c 36 	movl   $0x367cd507,0x18(%eax)
 876855b:	c7 40 1c 2a 29 9a 62 	movl   $0x629a292a,0x1c(%eax)
 8768562:	c7 40 20 17 dd 70 30 	movl   $0x3070dd17,0x20(%eax)
 8768569:	c7 40 24 5a 01 59 91 	movl   $0x9159015a,0x24(%eax)
 8768570:	c7 40 28 39 59 0e f7 	movl   $0xf70e5939,0x28(%eax)
 8768577:	c7 40 2c d8 ec 2f 15 	movl   $0x152fecd8,0x2c(%eax)
 876857e:	c7 40 30 31 0b c0 ff 	movl   $0xffc00b31,0x30(%eax)
 8768585:	c7 40 34 67 26 33 67 	movl   $0x67332667,0x34(%eax)
 876858c:	c7 40 38 11 15 58 68 	movl   $0x68581511,0x38(%eax)
 8768593:	c7 40 3c 87 4a b4 8e 	movl   $0x8eb44a87,0x3c(%eax)
 876859a:	c7 40 40 a7 8f f9 64 	movl   $0x64f98fa7,0x40(%eax)
 87685a1:	c7 40 44 0d 2e 0c db 	movl   $0xdb0c2e0d,0x44(%eax)
 87685a8:	c7 40 48 a4 4f fa be 	movl   $0xbefa4fa4,0x48(%eax)
 87685af:	c7 40 4c 1d 48 b5 47 	movl   $0x47b5481d,0x4c(%eax)
 87685b6:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 87685bd:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 87685c4:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 87685cb:	5d                   	pop    %ebp
 87685cc:	c3                   	ret
 87685cd:	90                   	nop
 87685ce:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::SHA384::Init @ 0x8768540

/* TaoCrypt::SHA384::Init() */

void __thiscall TaoCrypt::SHA384::Init(SHA384 *this)

{
  *(undefined4 *)(this + 0x10) = 0xc1059ed8;
  *(undefined4 *)(this + 0x14) = 0xcbbb9d5d;
  *(undefined4 *)(this + 0x18) = 0x367cd507;
  *(undefined4 *)(this + 0x1c) = 0x629a292a;
  *(undefined4 *)(this + 0x20) = 0x3070dd17;
  *(undefined4 *)(this + 0x24) = 0x9159015a;
  *(undefined4 *)(this + 0x28) = 0xf70e5939;
  *(undefined4 *)(this + 0x2c) = 0x152fecd8;
  *(undefined4 *)(this + 0x30) = 0xffc00b31;
  *(undefined4 *)(this + 0x34) = 0x67332667;
  *(undefined4 *)(this + 0x38) = 0x68581511;
  *(undefined4 *)(this + 0x3c) = 0x8eb44a87;
  *(undefined4 *)(this + 0x40) = 0x64f98fa7;
  *(undefined4 *)(this + 0x44) = 0xdb0c2e0d;
  *(undefined4 *)(this + 0x48) = 0xbefa4fa4;
  *(undefined4 *)(this + 0x4c) = 0x47b5481d;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}

```

---

## SHA384

```asm
// === 0876ff60 TaoCrypt::SHA384::SHA384  [0x0876ff60-0x877001f] ===
 876ff60:	55                   	push   %ebp
 876ff61:	89 e5                	mov    %esp,%ebp
 876ff63:	57                   	push   %edi
 876ff64:	56                   	push   %esi
 876ff65:	53                   	push   %ebx
 876ff66:	e8 8d 2e fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 876ff6b:	81 c3 2d cc bf 00    	add    $0xbfcc2d,%ebx
 876ff71:	83 ec 1c             	sub    $0x1c,%esp
 876ff74:	8b 7d 08             	mov    0x8(%ebp),%edi
 876ff77:	8b 75 0c             	mov    0xc(%ebp),%esi
 876ff7a:	c7 44 24 08 80 00 00 	movl   $0x80,0x8(%esp)
 876ff81:	00 
 876ff82:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 876ff89:	00 
 876ff8a:	89 3c 24             	mov    %edi,(%esp)
 876ff8d:	e8 8e 8c fe ff       	call   8758c20 <_ZN8TaoCrypt19HASH64withTransformC1Ejj>
 876ff92:	8b 83 08 fd ff ff    	mov    -0x2f8(%ebx),%eax
 876ff98:	8d 4e 10             	lea    0x10(%esi),%ecx
 876ff9b:	8d 57 10             	lea    0x10(%edi),%edx
 876ff9e:	83 c0 08             	add    $0x8,%eax
 876ffa1:	89 07                	mov    %eax,(%edi)
 876ffa3:	8b 46 04             	mov    0x4(%esi),%eax
 876ffa6:	89 47 04             	mov    %eax,0x4(%edi)
 876ffa9:	8b 46 08             	mov    0x8(%esi),%eax
 876ffac:	89 47 08             	mov    %eax,0x8(%edi)
 876ffaf:	8b 46 0c             	mov    0xc(%esi),%eax
 876ffb2:	89 47 0c             	mov    %eax,0xc(%edi)
 876ffb5:	8b 46 10             	mov    0x10(%esi),%eax
 876ffb8:	83 c6 50             	add    $0x50,%esi
 876ffbb:	89 47 10             	mov    %eax,0x10(%edi)
 876ffbe:	8b 41 04             	mov    0x4(%ecx),%eax
 876ffc1:	89 42 04             	mov    %eax,0x4(%edx)
 876ffc4:	8b 41 08             	mov    0x8(%ecx),%eax
 876ffc7:	89 42 08             	mov    %eax,0x8(%edx)
 876ffca:	8b 41 0c             	mov    0xc(%ecx),%eax
 876ffcd:	89 42 0c             	mov    %eax,0xc(%edx)
 876ffd0:	8b 41 10             	mov    0x10(%ecx),%eax
 876ffd3:	89 42 10             	mov    %eax,0x10(%edx)
 876ffd6:	8b 41 14             	mov    0x14(%ecx),%eax
 876ffd9:	89 42 14             	mov    %eax,0x14(%edx)
 876ffdc:	8b 41 18             	mov    0x18(%ecx),%eax
 876ffdf:	89 42 18             	mov    %eax,0x18(%edx)
 876ffe2:	8b 41 1c             	mov    0x1c(%ecx),%eax
 876ffe5:	89 42 1c             	mov    %eax,0x1c(%edx)
 876ffe8:	8b 41 20             	mov    0x20(%ecx),%eax
 876ffeb:	89 42 20             	mov    %eax,0x20(%edx)
 876ffee:	8b 41 24             	mov    0x24(%ecx),%eax
 876fff1:	89 42 24             	mov    %eax,0x24(%edx)
 876fff4:	8b 41 28             	mov    0x28(%ecx),%eax
 876fff7:	89 42 28             	mov    %eax,0x28(%edx)
 876fffa:	8b 41 2c             	mov    0x2c(%ecx),%eax
 876fffd:	b9 20 00 00 00       	mov    $0x20,%ecx
 8770002:	89 42 2c             	mov    %eax,0x2c(%edx)
 8770005:	8d 47 50             	lea    0x50(%edi),%eax
 8770008:	89 c7                	mov    %eax,%edi
 877000a:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 877000c:	83 c4 1c             	add    $0x1c,%esp
 877000f:	5b                   	pop    %ebx
 8770010:	5e                   	pop    %esi
 8770011:	5f                   	pop    %edi
 8770012:	5d                   	pop    %ebp
 8770013:	c3                   	ret
 8770014:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 877001a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TaoCrypt::SHA384::SHA384 @ 0x876ff60

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::SHA384::SHA384(TaoCrypt::SHA384 const&) */

void __thiscall TaoCrypt::SHA384::SHA384(SHA384 *this,SHA384 *param_1)

{
  int iVar1;
  SHA384 *pSVar2;
  SHA384 *pSVar3;
  byte bVar4;
  
  bVar4 = 0;
  HASH64withTransform::HASH64withTransform((HASH64withTransform *)this,8,0x80);
  *(undefined **)this = PTR_vtable_0936c8a0 + 8;
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
// === 0876f8c0 TaoCrypt::SHA384::Swap  [0x0876f8c0-0x876f94f] ===
 876f8c0:	55                   	push   %ebp
 876f8c1:	89 e5                	mov    %esp,%ebp
 876f8c3:	57                   	push   %edi
 876f8c4:	8b 45 08             	mov    0x8(%ebp),%eax
 876f8c7:	56                   	push   %esi
 876f8c8:	8b 75 0c             	mov    0xc(%ebp),%esi
 876f8cb:	8b 50 08             	mov    0x8(%eax),%edx
 876f8ce:	8b 4e 08             	mov    0x8(%esi),%ecx
 876f8d1:	8b 7e 10             	mov    0x10(%esi),%edi
 876f8d4:	89 48 08             	mov    %ecx,0x8(%eax)
 876f8d7:	8b 4e 0c             	mov    0xc(%esi),%ecx
 876f8da:	89 56 08             	mov    %edx,0x8(%esi)
 876f8dd:	8b 50 0c             	mov    0xc(%eax),%edx
 876f8e0:	89 78 10             	mov    %edi,0x10(%eax)
 876f8e3:	89 48 0c             	mov    %ecx,0xc(%eax)
 876f8e6:	8b 4e 04             	mov    0x4(%esi),%ecx
 876f8e9:	89 56 0c             	mov    %edx,0xc(%esi)
 876f8ec:	8b 50 04             	mov    0x4(%eax),%edx
 876f8ef:	89 48 04             	mov    %ecx,0x4(%eax)
 876f8f2:	8d 4e 10             	lea    0x10(%esi),%ecx
 876f8f5:	8b 79 04             	mov    0x4(%ecx),%edi
 876f8f8:	89 56 04             	mov    %edx,0x4(%esi)
 876f8fb:	8d 50 10             	lea    0x10(%eax),%edx
 876f8fe:	83 c0 50             	add    $0x50,%eax
 876f901:	83 c6 50             	add    $0x50,%esi
 876f904:	89 7a 04             	mov    %edi,0x4(%edx)
 876f907:	8b 79 08             	mov    0x8(%ecx),%edi
 876f90a:	89 7a 08             	mov    %edi,0x8(%edx)
 876f90d:	8b 79 0c             	mov    0xc(%ecx),%edi
 876f910:	89 7a 0c             	mov    %edi,0xc(%edx)
 876f913:	8b 79 10             	mov    0x10(%ecx),%edi
 876f916:	89 7a 10             	mov    %edi,0x10(%edx)
 876f919:	8b 79 14             	mov    0x14(%ecx),%edi
 876f91c:	89 7a 14             	mov    %edi,0x14(%edx)
 876f91f:	8b 79 18             	mov    0x18(%ecx),%edi
 876f922:	89 7a 18             	mov    %edi,0x18(%edx)
 876f925:	8b 79 1c             	mov    0x1c(%ecx),%edi
 876f928:	89 7a 1c             	mov    %edi,0x1c(%edx)
 876f92b:	8b 79 20             	mov    0x20(%ecx),%edi
 876f92e:	89 7a 20             	mov    %edi,0x20(%edx)
 876f931:	8b 79 24             	mov    0x24(%ecx),%edi
 876f934:	89 7a 24             	mov    %edi,0x24(%edx)
 876f937:	8b 79 28             	mov    0x28(%ecx),%edi
 876f93a:	89 7a 28             	mov    %edi,0x28(%edx)
 876f93d:	8b 49 2c             	mov    0x2c(%ecx),%ecx
 876f940:	89 c7                	mov    %eax,%edi
 876f942:	89 4a 2c             	mov    %ecx,0x2c(%edx)
 876f945:	b9 20 00 00 00       	mov    $0x20,%ecx
 876f94a:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 876f94c:	5e                   	pop    %esi
 876f94d:	5f                   	pop    %edi
 876f94e:	5d                   	pop    %ebp
 876f94f:	c3                   	ret

```

```c
// TaoCrypt::SHA384::Swap @ 0x876f8c0

/* TaoCrypt::SHA384::Swap(TaoCrypt::SHA384&) */

void __thiscall TaoCrypt::SHA384::Swap(SHA384 *this,SHA384 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  SHA384 *pSVar5;
  SHA384 *pSVar6;
  
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
// === 0876d460 TaoCrypt::SHA384::Transform  [0x0876d460-0x876d47f] ===
 876d460:	55                   	push   %ebp
 876d461:	89 e5                	mov    %esp,%ebp
 876d463:	8b 45 08             	mov    0x8(%ebp),%eax
 876d466:	5d                   	pop    %ebp
 876d467:	8d 50 50             	lea    0x50(%eax),%edx
 876d46a:	83 c0 10             	add    $0x10,%eax
 876d46d:	e9 fe c0 ff ff       	jmp    8769570 <_ZN8TaoCryptL12Transform512EPyS0_>
 876d472:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 876d479:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::SHA384::Transform @ 0x876d460

/* TaoCrypt::SHA384::Transform() */

void __thiscall TaoCrypt::SHA384::Transform(SHA384 *this)

{
  Transform512((ulonglong *)(this + 0x10),(ulonglong *)(this + 0x50));
  return;
}

```

---

## operator=

```asm
// === 08770020 TaoCrypt::SHA384::operator=  [0x08770020-0x877006f] ===
 8770020:	55                   	push   %ebp
 8770021:	89 e5                	mov    %esp,%ebp
 8770023:	81 ec f8 00 00 00    	sub    $0xf8,%esp
 8770029:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 877002c:	8b 45 0c             	mov    0xc(%ebp),%eax
 877002f:	e8 c4 2d fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8770034:	81 c3 64 cb bf 00    	add    $0xbfcb64,%ebx
 877003a:	89 75 f8             	mov    %esi,-0x8(%ebp)
 877003d:	8b 75 08             	mov    0x8(%ebp),%esi
 8770040:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8770043:	8d bd 18 ff ff ff    	lea    -0xe8(%ebp),%edi
 8770049:	89 44 24 04          	mov    %eax,0x4(%esp)
 877004d:	89 3c 24             	mov    %edi,(%esp)
 8770050:	e8 0b ff ff ff       	call   876ff60 <_ZN8TaoCrypt6SHA384C1ERKS0_>
 8770055:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8770059:	89 34 24             	mov    %esi,(%esp)
 877005c:	e8 5f f8 ff ff       	call   876f8c0 <_ZN8TaoCrypt6SHA3844SwapERS0_>
 8770061:	89 f0                	mov    %esi,%eax
 8770063:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8770066:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8770069:	8b 7d fc             	mov    -0x4(%ebp),%edi
 877006c:	89 ec                	mov    %ebp,%esp
 877006e:	5d                   	pop    %ebp
 877006f:	c3                   	ret

```

```c
// TaoCrypt::SHA384::operator= @ 0x8770020

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::SHA384::TEMPNAMEPLACEHOLDERVALUE(TaoCrypt::SHA384 const&) */

SHA384 * __thiscall TaoCrypt::SHA384::operator=(SHA384 *this,SHA384 *param_1)

{
  SHA384 local_ec [220];
  
  SHA384(local_ec,param_1);
  Swap(this,local_ec);
  return this;
}

```

