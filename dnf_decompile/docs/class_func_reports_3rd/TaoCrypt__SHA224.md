# TaoCrypt__SHA224

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## Init

```asm
// === 08768450 TaoCrypt::SHA224::Init  [0x08768450-0x87684af] ===
 8768450:	55                   	push   %ebp
 8768451:	89 e5                	mov    %esp,%ebp
 8768453:	8b 45 08             	mov    0x8(%ebp),%eax
 8768456:	c7 40 10 d8 9e 05 c1 	movl   $0xc1059ed8,0x10(%eax)
 876845d:	c7 40 14 07 d5 7c 36 	movl   $0x367cd507,0x14(%eax)
 8768464:	c7 40 18 17 dd 70 30 	movl   $0x3070dd17,0x18(%eax)
 876846b:	c7 40 1c 39 59 0e f7 	movl   $0xf70e5939,0x1c(%eax)
 8768472:	c7 40 20 31 0b c0 ff 	movl   $0xffc00b31,0x20(%eax)
 8768479:	c7 40 24 11 15 58 68 	movl   $0x68581511,0x24(%eax)
 8768480:	c7 40 28 a7 8f f9 64 	movl   $0x64f98fa7,0x28(%eax)
 8768487:	c7 40 2c a4 4f fa be 	movl   $0xbefa4fa4,0x2c(%eax)
 876848e:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8768495:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 876849c:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 87684a3:	5d                   	pop    %ebp
 87684a4:	c3                   	ret
 87684a5:	90                   	nop
 87684a6:	8d 76 00             	lea    0x0(%esi),%esi
 87684a9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::SHA224::Init @ 0x8768450

/* TaoCrypt::SHA224::Init() */

void __thiscall TaoCrypt::SHA224::Init(SHA224 *this)

{
  *(undefined4 *)(this + 0x10) = 0xc1059ed8;
  *(undefined4 *)(this + 0x14) = 0x367cd507;
  *(undefined4 *)(this + 0x18) = 0x3070dd17;
  *(undefined4 *)(this + 0x1c) = 0xf70e5939;
  *(undefined4 *)(this + 0x20) = 0xffc00b31;
  *(undefined4 *)(this + 0x24) = 0x68581511;
  *(undefined4 *)(this + 0x28) = 0x64f98fa7;
  *(undefined4 *)(this + 0x2c) = 0xbefa4fa4;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}

```

---

## SHA224

```asm
// === 08770190 TaoCrypt::SHA224::SHA224  [0x08770190-0x877027f] ===
 8770190:	55                   	push   %ebp
 8770191:	89 e5                	mov    %esp,%ebp
 8770193:	57                   	push   %edi
 8770194:	56                   	push   %esi
 8770195:	53                   	push   %ebx
 8770196:	e8 5d 2c fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 877019b:	81 c3 fd c9 bf 00    	add    $0xbfc9fd,%ebx
 87701a1:	83 ec 1c             	sub    $0x1c,%esp
 87701a4:	8b 75 08             	mov    0x8(%ebp),%esi
 87701a7:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87701aa:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 87701b1:	00 
 87701b2:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 87701b9:	00 
 87701ba:	89 34 24             	mov    %esi,(%esp)
 87701bd:	e8 0e 8a fe ff       	call   8758bd0 <_ZN8TaoCrypt17HASHwithTransformC1Ejj>
 87701c2:	8b 83 08 fc ff ff    	mov    -0x3f8(%ebx),%eax
 87701c8:	8d 57 10             	lea    0x10(%edi),%edx
 87701cb:	8b 4f 10             	mov    0x10(%edi),%ecx
 87701ce:	83 c0 08             	add    $0x8,%eax
 87701d1:	89 06                	mov    %eax,(%esi)
 87701d3:	8b 47 04             	mov    0x4(%edi),%eax
 87701d6:	89 4e 10             	mov    %ecx,0x10(%esi)
 87701d9:	8b 4a 04             	mov    0x4(%edx),%ecx
 87701dc:	89 46 04             	mov    %eax,0x4(%esi)
 87701df:	8b 47 08             	mov    0x8(%edi),%eax
 87701e2:	89 46 08             	mov    %eax,0x8(%esi)
 87701e5:	8b 47 0c             	mov    0xc(%edi),%eax
 87701e8:	89 46 0c             	mov    %eax,0xc(%esi)
 87701eb:	8d 46 10             	lea    0x10(%esi),%eax
 87701ee:	89 48 04             	mov    %ecx,0x4(%eax)
 87701f1:	8b 4a 08             	mov    0x8(%edx),%ecx
 87701f4:	89 48 08             	mov    %ecx,0x8(%eax)
 87701f7:	8b 4a 0c             	mov    0xc(%edx),%ecx
 87701fa:	89 48 0c             	mov    %ecx,0xc(%eax)
 87701fd:	8b 4a 10             	mov    0x10(%edx),%ecx
 8770200:	89 48 10             	mov    %ecx,0x10(%eax)
 8770203:	8b 4a 14             	mov    0x14(%edx),%ecx
 8770206:	89 48 14             	mov    %ecx,0x14(%eax)
 8770209:	8b 52 18             	mov    0x18(%edx),%edx
 877020c:	8b 4f 30             	mov    0x30(%edi),%ecx
 877020f:	89 50 18             	mov    %edx,0x18(%eax)
 8770212:	8d 57 30             	lea    0x30(%edi),%edx
 8770215:	89 4e 30             	mov    %ecx,0x30(%esi)
 8770218:	8b 4a 04             	mov    0x4(%edx),%ecx
 877021b:	8d 46 30             	lea    0x30(%esi),%eax
 877021e:	89 48 04             	mov    %ecx,0x4(%eax)
 8770221:	8b 4a 08             	mov    0x8(%edx),%ecx
 8770224:	89 48 08             	mov    %ecx,0x8(%eax)
 8770227:	8b 4a 0c             	mov    0xc(%edx),%ecx
 877022a:	89 48 0c             	mov    %ecx,0xc(%eax)
 877022d:	8b 4a 10             	mov    0x10(%edx),%ecx
 8770230:	89 48 10             	mov    %ecx,0x10(%eax)
 8770233:	8b 4a 14             	mov    0x14(%edx),%ecx
 8770236:	89 48 14             	mov    %ecx,0x14(%eax)
 8770239:	8b 4a 18             	mov    0x18(%edx),%ecx
 877023c:	89 48 18             	mov    %ecx,0x18(%eax)
 877023f:	8b 4a 1c             	mov    0x1c(%edx),%ecx
 8770242:	89 48 1c             	mov    %ecx,0x1c(%eax)
 8770245:	8b 4a 20             	mov    0x20(%edx),%ecx
 8770248:	89 48 20             	mov    %ecx,0x20(%eax)
 877024b:	8b 4a 24             	mov    0x24(%edx),%ecx
 877024e:	89 48 24             	mov    %ecx,0x24(%eax)
 8770251:	8b 4a 28             	mov    0x28(%edx),%ecx
 8770254:	89 48 28             	mov    %ecx,0x28(%eax)
 8770257:	8b 4a 2c             	mov    0x2c(%edx),%ecx
 877025a:	89 48 2c             	mov    %ecx,0x2c(%eax)
 877025d:	8b 4a 30             	mov    0x30(%edx),%ecx
 8770260:	89 48 30             	mov    %ecx,0x30(%eax)
 8770263:	8b 4a 34             	mov    0x34(%edx),%ecx
 8770266:	89 48 34             	mov    %ecx,0x34(%eax)
 8770269:	8b 4a 38             	mov    0x38(%edx),%ecx
 877026c:	89 48 38             	mov    %ecx,0x38(%eax)
 877026f:	8b 52 3c             	mov    0x3c(%edx),%edx
 8770272:	89 50 3c             	mov    %edx,0x3c(%eax)
 8770275:	83 c4 1c             	add    $0x1c,%esp
 8770278:	5b                   	pop    %ebx
 8770279:	5e                   	pop    %esi
 877027a:	5f                   	pop    %edi
 877027b:	5d                   	pop    %ebp
 877027c:	c3                   	ret
 877027d:	90                   	nop
 877027e:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::SHA224::SHA224 @ 0x8770190

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::SHA224::SHA224(TaoCrypt::SHA224 const&) */

void __thiscall TaoCrypt::SHA224::SHA224(SHA224 *this,SHA224 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  HASHwithTransform::HASHwithTransform((HASHwithTransform *)this,8,0x40);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined **)this = PTR_vtable_0936c7a0 + 8;
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
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
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
// === 0876fa00 TaoCrypt::SHA224::Swap  [0x0876fa00-0x876facf] ===
 876fa00:	55                   	push   %ebp
 876fa01:	89 e5                	mov    %esp,%ebp
 876fa03:	57                   	push   %edi
 876fa04:	8b 4d 08             	mov    0x8(%ebp),%ecx
 876fa07:	56                   	push   %esi
 876fa08:	8b 75 0c             	mov    0xc(%ebp),%esi
 876fa0b:	8b 41 08             	mov    0x8(%ecx),%eax
 876fa0e:	8b 56 08             	mov    0x8(%esi),%edx
 876fa11:	8b 7e 10             	mov    0x10(%esi),%edi
 876fa14:	89 51 08             	mov    %edx,0x8(%ecx)
 876fa17:	8b 56 0c             	mov    0xc(%esi),%edx
 876fa1a:	89 46 08             	mov    %eax,0x8(%esi)
 876fa1d:	8b 41 0c             	mov    0xc(%ecx),%eax
 876fa20:	89 79 10             	mov    %edi,0x10(%ecx)
 876fa23:	89 51 0c             	mov    %edx,0xc(%ecx)
 876fa26:	8b 56 04             	mov    0x4(%esi),%edx
 876fa29:	89 46 0c             	mov    %eax,0xc(%esi)
 876fa2c:	8b 41 04             	mov    0x4(%ecx),%eax
 876fa2f:	89 51 04             	mov    %edx,0x4(%ecx)
 876fa32:	8d 56 10             	lea    0x10(%esi),%edx
 876fa35:	8b 7a 04             	mov    0x4(%edx),%edi
 876fa38:	89 46 04             	mov    %eax,0x4(%esi)
 876fa3b:	8d 41 10             	lea    0x10(%ecx),%eax
 876fa3e:	89 78 04             	mov    %edi,0x4(%eax)
 876fa41:	8b 7a 08             	mov    0x8(%edx),%edi
 876fa44:	89 78 08             	mov    %edi,0x8(%eax)
 876fa47:	8b 7a 0c             	mov    0xc(%edx),%edi
 876fa4a:	89 78 0c             	mov    %edi,0xc(%eax)
 876fa4d:	8b 7a 10             	mov    0x10(%edx),%edi
 876fa50:	89 78 10             	mov    %edi,0x10(%eax)
 876fa53:	8b 7a 14             	mov    0x14(%edx),%edi
 876fa56:	89 78 14             	mov    %edi,0x14(%eax)
 876fa59:	8b 52 18             	mov    0x18(%edx),%edx
 876fa5c:	89 50 18             	mov    %edx,0x18(%eax)
 876fa5f:	8d 56 30             	lea    0x30(%esi),%edx
 876fa62:	8b 76 30             	mov    0x30(%esi),%esi
 876fa65:	8d 41 30             	lea    0x30(%ecx),%eax
 876fa68:	89 71 30             	mov    %esi,0x30(%ecx)
 876fa6b:	8b 4a 04             	mov    0x4(%edx),%ecx
 876fa6e:	89 48 04             	mov    %ecx,0x4(%eax)
 876fa71:	8b 4a 08             	mov    0x8(%edx),%ecx
 876fa74:	89 48 08             	mov    %ecx,0x8(%eax)
 876fa77:	8b 4a 0c             	mov    0xc(%edx),%ecx
 876fa7a:	89 48 0c             	mov    %ecx,0xc(%eax)
 876fa7d:	8b 4a 10             	mov    0x10(%edx),%ecx
 876fa80:	89 48 10             	mov    %ecx,0x10(%eax)
 876fa83:	8b 4a 14             	mov    0x14(%edx),%ecx
 876fa86:	89 48 14             	mov    %ecx,0x14(%eax)
 876fa89:	8b 4a 18             	mov    0x18(%edx),%ecx
 876fa8c:	89 48 18             	mov    %ecx,0x18(%eax)
 876fa8f:	8b 4a 1c             	mov    0x1c(%edx),%ecx
 876fa92:	89 48 1c             	mov    %ecx,0x1c(%eax)
 876fa95:	8b 4a 20             	mov    0x20(%edx),%ecx
 876fa98:	89 48 20             	mov    %ecx,0x20(%eax)
 876fa9b:	8b 4a 24             	mov    0x24(%edx),%ecx
 876fa9e:	89 48 24             	mov    %ecx,0x24(%eax)
 876faa1:	8b 4a 28             	mov    0x28(%edx),%ecx
 876faa4:	89 48 28             	mov    %ecx,0x28(%eax)
 876faa7:	8b 4a 2c             	mov    0x2c(%edx),%ecx
 876faaa:	89 48 2c             	mov    %ecx,0x2c(%eax)
 876faad:	8b 4a 30             	mov    0x30(%edx),%ecx
 876fab0:	89 48 30             	mov    %ecx,0x30(%eax)
 876fab3:	8b 4a 34             	mov    0x34(%edx),%ecx
 876fab6:	89 48 34             	mov    %ecx,0x34(%eax)
 876fab9:	8b 4a 38             	mov    0x38(%edx),%ecx
 876fabc:	89 48 38             	mov    %ecx,0x38(%eax)
 876fabf:	8b 52 3c             	mov    0x3c(%edx),%edx
 876fac2:	89 50 3c             	mov    %edx,0x3c(%eax)
 876fac5:	5e                   	pop    %esi
 876fac6:	5f                   	pop    %edi
 876fac7:	5d                   	pop    %ebp
 876fac8:	c3                   	ret
 876fac9:	90                   	nop
 876faca:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TaoCrypt::SHA224::Swap @ 0x876fa00

/* TaoCrypt::SHA224::Swap(TaoCrypt::SHA224&) */

void __thiscall TaoCrypt::SHA224::Swap(SHA224 *this,SHA224 *param_1)

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
// === 0876e350 TaoCrypt::SHA224::Transform  [0x0876e350-0x876e36f] ===
 876e350:	55                   	push   %ebp
 876e351:	89 e5                	mov    %esp,%ebp
 876e353:	8b 45 08             	mov    0x8(%ebp),%eax
 876e356:	5d                   	pop    %ebp
 876e357:	8d 50 30             	lea    0x30(%eax),%edx
 876e35a:	83 c0 10             	add    $0x10,%eax
 876e35d:	e9 3e f1 ff ff       	jmp    876d4a0 <_ZN8TaoCryptL12Transform256EPjS0_>
 876e362:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 876e369:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::SHA224::Transform @ 0x876e350

/* TaoCrypt::SHA224::Transform() */

void __thiscall TaoCrypt::SHA224::Transform(SHA224 *this)

{
  Transform256((uint *)(this + 0x10),(uint *)(this + 0x30));
  return;
}

```

---

## operator=

```asm
// === 08770280 TaoCrypt::SHA224::operator=  [0x08770280-0x87702cf] ===
 8770280:	55                   	push   %ebp
 8770281:	89 e5                	mov    %esp,%ebp
 8770283:	81 ec 98 00 00 00    	sub    $0x98,%esp
 8770289:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 877028c:	8b 45 0c             	mov    0xc(%ebp),%eax
 877028f:	e8 64 2b fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8770294:	81 c3 04 c9 bf 00    	add    $0xbfc904,%ebx
 877029a:	89 75 f8             	mov    %esi,-0x8(%ebp)
 877029d:	8b 75 08             	mov    0x8(%ebp),%esi
 87702a0:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87702a3:	8d bd 78 ff ff ff    	lea    -0x88(%ebp),%edi
 87702a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 87702ad:	89 3c 24             	mov    %edi,(%esp)
 87702b0:	e8 db fe ff ff       	call   8770190 <_ZN8TaoCrypt6SHA224C1ERKS0_>
 87702b5:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87702b9:	89 34 24             	mov    %esi,(%esp)
 87702bc:	e8 3f f7 ff ff       	call   876fa00 <_ZN8TaoCrypt6SHA2244SwapERS0_>
 87702c1:	89 f0                	mov    %esi,%eax
 87702c3:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87702c6:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87702c9:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87702cc:	89 ec                	mov    %ebp,%esp
 87702ce:	5d                   	pop    %ebp
 87702cf:	c3                   	ret

```

```c
// TaoCrypt::SHA224::operator= @ 0x8770280

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::SHA224::TEMPNAMEPLACEHOLDERVALUE(TaoCrypt::SHA224 const&) */

SHA224 * __thiscall TaoCrypt::SHA224::operator=(SHA224 *this,SHA224 *param_1)

{
  SHA224 local_8c [124];
  
  SHA224(local_8c,param_1);
  Swap(this,local_8c);
  return this;
}

```

