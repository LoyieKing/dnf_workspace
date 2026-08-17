# TaoCrypt__SHA256

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## Init

```asm
// === 087683f0 TaoCrypt::SHA256::Init  [0x087683f0-0x876844f] ===
 87683f0:	55                   	push   %ebp
 87683f1:	89 e5                	mov    %esp,%ebp
 87683f3:	8b 45 08             	mov    0x8(%ebp),%eax
 87683f6:	c7 40 10 67 e6 09 6a 	movl   $0x6a09e667,0x10(%eax)
 87683fd:	c7 40 14 85 ae 67 bb 	movl   $0xbb67ae85,0x14(%eax)
 8768404:	c7 40 18 72 f3 6e 3c 	movl   $0x3c6ef372,0x18(%eax)
 876840b:	c7 40 1c 3a f5 4f a5 	movl   $0xa54ff53a,0x1c(%eax)
 8768412:	c7 40 20 7f 52 0e 51 	movl   $0x510e527f,0x20(%eax)
 8768419:	c7 40 24 8c 68 05 9b 	movl   $0x9b05688c,0x24(%eax)
 8768420:	c7 40 28 ab d9 83 1f 	movl   $0x1f83d9ab,0x28(%eax)
 8768427:	c7 40 2c 19 cd e0 5b 	movl   $0x5be0cd19,0x2c(%eax)
 876842e:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8768435:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 876843c:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8768443:	5d                   	pop    %ebp
 8768444:	c3                   	ret
 8768445:	90                   	nop
 8768446:	8d 76 00             	lea    0x0(%esi),%esi
 8768449:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::SHA256::Init @ 0x87683f0

/* TaoCrypt::SHA256::Init() */

void __thiscall TaoCrypt::SHA256::Init(SHA256 *this)

{
  *(undefined4 *)(this + 0x10) = 0x6a09e667;
  *(undefined4 *)(this + 0x14) = 0xbb67ae85;
  *(undefined4 *)(this + 0x18) = 0x3c6ef372;
  *(undefined4 *)(this + 0x1c) = 0xa54ff53a;
  *(undefined4 *)(this + 0x20) = 0x510e527f;
  *(undefined4 *)(this + 0x24) = 0x9b05688c;
  *(undefined4 *)(this + 0x28) = 0x1f83d9ab;
  *(undefined4 *)(this + 0x2c) = 0x5be0cd19;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}

```

---

## SHA256

```asm
// === 087702d0 TaoCrypt::SHA256::SHA256  [0x087702d0-0x87703cf] ===
 87702d0:	55                   	push   %ebp
 87702d1:	89 e5                	mov    %esp,%ebp
 87702d3:	57                   	push   %edi
 87702d4:	56                   	push   %esi
 87702d5:	53                   	push   %ebx
 87702d6:	e8 1d 2b fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87702db:	81 c3 bd c8 bf 00    	add    $0xbfc8bd,%ebx
 87702e1:	83 ec 1c             	sub    $0x1c,%esp
 87702e4:	8b 75 08             	mov    0x8(%ebp),%esi
 87702e7:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87702ea:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 87702f1:	00 
 87702f2:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 87702f9:	00 
 87702fa:	89 34 24             	mov    %esi,(%esp)
 87702fd:	e8 ce 88 fe ff       	call   8758bd0 <_ZN8TaoCrypt17HASHwithTransformC1Ejj>
 8770302:	8b 83 3c ff ff ff    	mov    -0xc4(%ebx),%eax
 8770308:	8d 57 10             	lea    0x10(%edi),%edx
 877030b:	8b 4f 10             	mov    0x10(%edi),%ecx
 877030e:	83 c0 08             	add    $0x8,%eax
 8770311:	89 06                	mov    %eax,(%esi)
 8770313:	8b 47 04             	mov    0x4(%edi),%eax
 8770316:	89 4e 10             	mov    %ecx,0x10(%esi)
 8770319:	8b 4a 04             	mov    0x4(%edx),%ecx
 877031c:	89 46 04             	mov    %eax,0x4(%esi)
 877031f:	8b 47 08             	mov    0x8(%edi),%eax
 8770322:	89 46 08             	mov    %eax,0x8(%esi)
 8770325:	8b 47 0c             	mov    0xc(%edi),%eax
 8770328:	89 46 0c             	mov    %eax,0xc(%esi)
 877032b:	8d 46 10             	lea    0x10(%esi),%eax
 877032e:	89 48 04             	mov    %ecx,0x4(%eax)
 8770331:	8b 4a 08             	mov    0x8(%edx),%ecx
 8770334:	89 48 08             	mov    %ecx,0x8(%eax)
 8770337:	8b 4a 0c             	mov    0xc(%edx),%ecx
 877033a:	89 48 0c             	mov    %ecx,0xc(%eax)
 877033d:	8b 4a 10             	mov    0x10(%edx),%ecx
 8770340:	89 48 10             	mov    %ecx,0x10(%eax)
 8770343:	8b 4a 14             	mov    0x14(%edx),%ecx
 8770346:	89 48 14             	mov    %ecx,0x14(%eax)
 8770349:	8b 4a 18             	mov    0x18(%edx),%ecx
 877034c:	89 48 18             	mov    %ecx,0x18(%eax)
 877034f:	8b 52 1c             	mov    0x1c(%edx),%edx
 8770352:	8b 4f 30             	mov    0x30(%edi),%ecx
 8770355:	89 50 1c             	mov    %edx,0x1c(%eax)
 8770358:	8d 57 30             	lea    0x30(%edi),%edx
 877035b:	89 4e 30             	mov    %ecx,0x30(%esi)
 877035e:	8b 4a 04             	mov    0x4(%edx),%ecx
 8770361:	8d 46 30             	lea    0x30(%esi),%eax
 8770364:	89 48 04             	mov    %ecx,0x4(%eax)
 8770367:	8b 4a 08             	mov    0x8(%edx),%ecx
 877036a:	89 48 08             	mov    %ecx,0x8(%eax)
 877036d:	8b 4a 0c             	mov    0xc(%edx),%ecx
 8770370:	89 48 0c             	mov    %ecx,0xc(%eax)
 8770373:	8b 4a 10             	mov    0x10(%edx),%ecx
 8770376:	89 48 10             	mov    %ecx,0x10(%eax)
 8770379:	8b 4a 14             	mov    0x14(%edx),%ecx
 877037c:	89 48 14             	mov    %ecx,0x14(%eax)
 877037f:	8b 4a 18             	mov    0x18(%edx),%ecx
 8770382:	89 48 18             	mov    %ecx,0x18(%eax)
 8770385:	8b 4a 1c             	mov    0x1c(%edx),%ecx
 8770388:	89 48 1c             	mov    %ecx,0x1c(%eax)
 877038b:	8b 4a 20             	mov    0x20(%edx),%ecx
 877038e:	89 48 20             	mov    %ecx,0x20(%eax)
 8770391:	8b 4a 24             	mov    0x24(%edx),%ecx
 8770394:	89 48 24             	mov    %ecx,0x24(%eax)
 8770397:	8b 4a 28             	mov    0x28(%edx),%ecx
 877039a:	89 48 28             	mov    %ecx,0x28(%eax)
 877039d:	8b 4a 2c             	mov    0x2c(%edx),%ecx
 87703a0:	89 48 2c             	mov    %ecx,0x2c(%eax)
 87703a3:	8b 4a 30             	mov    0x30(%edx),%ecx
 87703a6:	89 48 30             	mov    %ecx,0x30(%eax)
 87703a9:	8b 4a 34             	mov    0x34(%edx),%ecx
 87703ac:	89 48 34             	mov    %ecx,0x34(%eax)
 87703af:	8b 4a 38             	mov    0x38(%edx),%ecx
 87703b2:	89 48 38             	mov    %ecx,0x38(%eax)
 87703b5:	8b 52 3c             	mov    0x3c(%edx),%edx
 87703b8:	89 50 3c             	mov    %edx,0x3c(%eax)
 87703bb:	83 c4 1c             	add    $0x1c,%esp
 87703be:	5b                   	pop    %ebx
 87703bf:	5e                   	pop    %esi
 87703c0:	5f                   	pop    %edi
 87703c1:	5d                   	pop    %ebp
 87703c2:	c3                   	ret
 87703c3:	90                   	nop
 87703c4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87703ca:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TaoCrypt::SHA256::SHA256 @ 0x87702d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::SHA256::SHA256(TaoCrypt::SHA256 const&) */

void __thiscall TaoCrypt::SHA256::SHA256(SHA256 *this,SHA256 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  HASHwithTransform::HASHwithTransform((HASHwithTransform *)this,8,0x40);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined **)this = PTR_vtable_0936cad4 + 8;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x10) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = uVar1;
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  return;
}

```

---

## Swap

```asm
// === 0876fad0 TaoCrypt::SHA256::Swap  [0x0876fad0-0x876fb9f] ===
 876fad0:	55                   	push   %ebp
 876fad1:	89 e5                	mov    %esp,%ebp
 876fad3:	57                   	push   %edi
 876fad4:	8b 4d 08             	mov    0x8(%ebp),%ecx
 876fad7:	56                   	push   %esi
 876fad8:	8b 75 0c             	mov    0xc(%ebp),%esi
 876fadb:	8b 41 08             	mov    0x8(%ecx),%eax
 876fade:	8b 56 08             	mov    0x8(%esi),%edx
 876fae1:	8b 7e 10             	mov    0x10(%esi),%edi
 876fae4:	89 51 08             	mov    %edx,0x8(%ecx)
 876fae7:	8b 56 0c             	mov    0xc(%esi),%edx
 876faea:	89 46 08             	mov    %eax,0x8(%esi)
 876faed:	8b 41 0c             	mov    0xc(%ecx),%eax
 876faf0:	89 79 10             	mov    %edi,0x10(%ecx)
 876faf3:	89 51 0c             	mov    %edx,0xc(%ecx)
 876faf6:	8b 56 04             	mov    0x4(%esi),%edx
 876faf9:	89 46 0c             	mov    %eax,0xc(%esi)
 876fafc:	8b 41 04             	mov    0x4(%ecx),%eax
 876faff:	89 51 04             	mov    %edx,0x4(%ecx)
 876fb02:	8d 56 10             	lea    0x10(%esi),%edx
 876fb05:	8b 7a 04             	mov    0x4(%edx),%edi
 876fb08:	89 46 04             	mov    %eax,0x4(%esi)
 876fb0b:	8d 41 10             	lea    0x10(%ecx),%eax
 876fb0e:	89 78 04             	mov    %edi,0x4(%eax)
 876fb11:	8b 7a 08             	mov    0x8(%edx),%edi
 876fb14:	89 78 08             	mov    %edi,0x8(%eax)
 876fb17:	8b 7a 0c             	mov    0xc(%edx),%edi
 876fb1a:	89 78 0c             	mov    %edi,0xc(%eax)
 876fb1d:	8b 7a 10             	mov    0x10(%edx),%edi
 876fb20:	89 78 10             	mov    %edi,0x10(%eax)
 876fb23:	8b 7a 14             	mov    0x14(%edx),%edi
 876fb26:	89 78 14             	mov    %edi,0x14(%eax)
 876fb29:	8b 7a 18             	mov    0x18(%edx),%edi
 876fb2c:	89 78 18             	mov    %edi,0x18(%eax)
 876fb2f:	8b 52 1c             	mov    0x1c(%edx),%edx
 876fb32:	89 50 1c             	mov    %edx,0x1c(%eax)
 876fb35:	8d 56 30             	lea    0x30(%esi),%edx
 876fb38:	8b 76 30             	mov    0x30(%esi),%esi
 876fb3b:	8d 41 30             	lea    0x30(%ecx),%eax
 876fb3e:	89 71 30             	mov    %esi,0x30(%ecx)
 876fb41:	8b 4a 04             	mov    0x4(%edx),%ecx
 876fb44:	89 48 04             	mov    %ecx,0x4(%eax)
 876fb47:	8b 4a 08             	mov    0x8(%edx),%ecx
 876fb4a:	89 48 08             	mov    %ecx,0x8(%eax)
 876fb4d:	8b 4a 0c             	mov    0xc(%edx),%ecx
 876fb50:	89 48 0c             	mov    %ecx,0xc(%eax)
 876fb53:	8b 4a 10             	mov    0x10(%edx),%ecx
 876fb56:	89 48 10             	mov    %ecx,0x10(%eax)
 876fb59:	8b 4a 14             	mov    0x14(%edx),%ecx
 876fb5c:	89 48 14             	mov    %ecx,0x14(%eax)
 876fb5f:	8b 4a 18             	mov    0x18(%edx),%ecx
 876fb62:	89 48 18             	mov    %ecx,0x18(%eax)
 876fb65:	8b 4a 1c             	mov    0x1c(%edx),%ecx
 876fb68:	89 48 1c             	mov    %ecx,0x1c(%eax)
 876fb6b:	8b 4a 20             	mov    0x20(%edx),%ecx
 876fb6e:	89 48 20             	mov    %ecx,0x20(%eax)
 876fb71:	8b 4a 24             	mov    0x24(%edx),%ecx
 876fb74:	89 48 24             	mov    %ecx,0x24(%eax)
 876fb77:	8b 4a 28             	mov    0x28(%edx),%ecx
 876fb7a:	89 48 28             	mov    %ecx,0x28(%eax)
 876fb7d:	8b 4a 2c             	mov    0x2c(%edx),%ecx
 876fb80:	89 48 2c             	mov    %ecx,0x2c(%eax)
 876fb83:	8b 4a 30             	mov    0x30(%edx),%ecx
 876fb86:	89 48 30             	mov    %ecx,0x30(%eax)
 876fb89:	8b 4a 34             	mov    0x34(%edx),%ecx
 876fb8c:	89 48 34             	mov    %ecx,0x34(%eax)
 876fb8f:	8b 4a 38             	mov    0x38(%edx),%ecx
 876fb92:	89 48 38             	mov    %ecx,0x38(%eax)
 876fb95:	8b 52 3c             	mov    0x3c(%edx),%edx
 876fb98:	89 50 3c             	mov    %edx,0x3c(%eax)
 876fb9b:	5e                   	pop    %esi
 876fb9c:	5f                   	pop    %edi
 876fb9d:	5d                   	pop    %ebp
 876fb9e:	c3                   	ret
 876fb9f:	90                   	nop

```

```c
// TaoCrypt::SHA256::Swap @ 0x876fad0

/* TaoCrypt::SHA256::Swap(TaoCrypt::SHA256&) */

void __thiscall TaoCrypt::SHA256::Swap(SHA256 *this,SHA256 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
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
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  return;
}

```

---

## Transform

```asm
// === 0876e370 TaoCrypt::SHA256::Transform  [0x0876e370-0x876e38f] ===
 876e370:	55                   	push   %ebp
 876e371:	89 e5                	mov    %esp,%ebp
 876e373:	8b 45 08             	mov    0x8(%ebp),%eax
 876e376:	5d                   	pop    %ebp
 876e377:	8d 50 30             	lea    0x30(%eax),%edx
 876e37a:	83 c0 10             	add    $0x10,%eax
 876e37d:	e9 1e f1 ff ff       	jmp    876d4a0 <_ZN8TaoCryptL12Transform256EPjS0_>
 876e382:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 876e389:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::SHA256::Transform @ 0x876e370

/* TaoCrypt::SHA256::Transform() */

void __thiscall TaoCrypt::SHA256::Transform(SHA256 *this)

{
  Transform256((uint *)(this + 0x10),(uint *)(this + 0x30));
  return;
}

```

---

## operator=

```asm
// === 087703d0 TaoCrypt::SHA256::operator=  [0x087703d0-0x877041f] ===
 87703d0:	55                   	push   %ebp
 87703d1:	89 e5                	mov    %esp,%ebp
 87703d3:	81 ec 98 00 00 00    	sub    $0x98,%esp
 87703d9:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87703dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 87703df:	e8 14 2a fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87703e4:	81 c3 b4 c7 bf 00    	add    $0xbfc7b4,%ebx
 87703ea:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87703ed:	8b 75 08             	mov    0x8(%ebp),%esi
 87703f0:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87703f3:	8d bd 78 ff ff ff    	lea    -0x88(%ebp),%edi
 87703f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 87703fd:	89 3c 24             	mov    %edi,(%esp)
 8770400:	e8 cb fe ff ff       	call   87702d0 <_ZN8TaoCrypt6SHA256C1ERKS0_>
 8770405:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8770409:	89 34 24             	mov    %esi,(%esp)
 877040c:	e8 bf f6 ff ff       	call   876fad0 <_ZN8TaoCrypt6SHA2564SwapERS0_>
 8770411:	89 f0                	mov    %esi,%eax
 8770413:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8770416:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8770419:	8b 7d fc             	mov    -0x4(%ebp),%edi
 877041c:	89 ec                	mov    %ebp,%esp
 877041e:	5d                   	pop    %ebp
 877041f:	c3                   	ret

```

```c
// TaoCrypt::SHA256::operator= @ 0x87703d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::SHA256::TEMPNAMEPLACEHOLDERVALUE(TaoCrypt::SHA256 const&) */

SHA256 * __thiscall TaoCrypt::SHA256::operator=(SHA256 *this,SHA256 *param_1)

{
  SHA256 local_8c [124];
  
  SHA256(local_8c,param_1);
  Swap(this,local_8c);
  return this;
}

```

