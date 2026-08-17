# TaoCrypt__MontgomeryRepresentation

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## ConvertOut

```asm
// === 0875f380 TaoCrypt::MontgomeryRepresentation::ConvertOut  [0x0875f380-0x875f44f] ===
 875f380:	55                   	push   %ebp
 875f381:	89 e5                	mov    %esp,%ebp
 875f383:	57                   	push   %edi
 875f384:	56                   	push   %esi
 875f385:	53                   	push   %ebx
 875f386:	83 ec 3c             	sub    $0x3c,%esp
 875f389:	8b 45 0c             	mov    0xc(%ebp),%eax
 875f38c:	e8 67 3a fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875f391:	81 c3 07 d8 c0 00    	add    $0xc0d807,%ebx
 875f397:	8b 50 20             	mov    0x20(%eax),%edx
 875f39a:	8b 48 50             	mov    0x50(%eax),%ecx
 875f39d:	8b 40 0c             	mov    0xc(%eax),%eax
 875f3a0:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875f3a3:	8b 55 10             	mov    0x10(%ebp),%edx
 875f3a6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 875f3a9:	31 c0                	xor    %eax,%eax
 875f3ab:	8b 32                	mov    (%edx),%esi
 875f3ad:	8b 7a 04             	mov    0x4(%edx),%edi
 875f3b0:	31 d2                	xor    %edx,%edx
 875f3b2:	85 f6                	test   %esi,%esi
 875f3b4:	74 14                	je     875f3ca <_ZNK8TaoCrypt24MontgomeryRepresentation10ConvertOutERKNS_7IntegerE+0x4a>
 875f3b6:	66 90                	xchg   %ax,%ax
 875f3b8:	8b 14 87             	mov    (%edi,%eax,4),%edx
 875f3bb:	89 14 81             	mov    %edx,(%ecx,%eax,4)
 875f3be:	83 c0 01             	add    $0x1,%eax
 875f3c1:	39 c6                	cmp    %eax,%esi
 875f3c3:	77 f3                	ja     875f3b8 <_ZNK8TaoCrypt24MontgomeryRepresentation10ConvertOutERKNS_7IntegerE+0x38>
 875f3c5:	8b 45 10             	mov    0x10(%ebp),%eax
 875f3c8:	8b 10                	mov    (%eax),%edx
 875f3ca:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 875f3cd:	8d 34 91             	lea    (%ecx,%edx,4),%esi
 875f3d0:	01 c0                	add    %eax,%eax
 875f3d2:	29 d0                	sub    %edx,%eax
 875f3d4:	89 c2                	mov    %eax,%edx
 875f3d6:	74 16                	je     875f3ee <_ZNK8TaoCrypt24MontgomeryRepresentation10ConvertOutERKNS_7IntegerE+0x6e>
 875f3d8:	31 c0                	xor    %eax,%eax
 875f3da:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875f3e0:	c7 04 86 00 00 00 00 	movl   $0x0,(%esi,%eax,4)
 875f3e7:	83 c0 01             	add    $0x1,%eax
 875f3ea:	39 c2                	cmp    %eax,%edx
 875f3ec:	77 f2                	ja     875f3e0 <_ZNK8TaoCrypt24MontgomeryRepresentation10ConvertOutERKNS_7IntegerE+0x60>
 875f3ee:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875f3f1:	89 54 24 14          	mov    %edx,0x14(%esp)
 875f3f5:	8b 55 0c             	mov    0xc(%ebp),%edx
 875f3f8:	8b 42 40             	mov    0x40(%edx),%eax
 875f3fb:	89 44 24 10          	mov    %eax,0x10(%esp)
 875f3ff:	8b 42 10             	mov    0x10(%edx),%eax
 875f402:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875f405:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875f409:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875f40d:	8d 04 d1             	lea    (%ecx,%edx,8),%eax
 875f410:	89 44 24 04          	mov    %eax,0x4(%esp)
 875f414:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875f417:	89 04 24             	mov    %eax,(%esp)
 875f41a:	e8 c1 ed ff ff       	call   875e1e0 <_ZN8TaoCrypt16MontgomeryReduceEPjS0_PKjS2_S2_j>
 875f41f:	8b 45 0c             	mov    0xc(%ebp),%eax
 875f422:	8b 55 08             	mov    0x8(%ebp),%edx
 875f425:	83 c0 1c             	add    $0x1c,%eax
 875f428:	89 44 24 04          	mov    %eax,0x4(%esp)
 875f42c:	89 14 24             	mov    %edx,(%esp)
 875f42f:	e8 3c fe ff ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 875f434:	8b 45 08             	mov    0x8(%ebp),%eax
 875f437:	83 c4 3c             	add    $0x3c,%esp
 875f43a:	5b                   	pop    %ebx
 875f43b:	5e                   	pop    %esi
 875f43c:	5f                   	pop    %edi
 875f43d:	5d                   	pop    %ebp
 875f43e:	c2 04 00             	ret    $0x4
 875f441:	90                   	nop
 875f442:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 875f449:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::MontgomeryRepresentation::ConvertOut @ 0x875f380

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::MontgomeryRepresentation::ConvertOut(TaoCrypt::Integer const&) const */

Integer * TaoCrypt::MontgomeryRepresentation::ConvertOut(Integer *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int in_stack_00000008;
  uint *in_stack_0000000c;
  
  puVar1 = *(uint **)(in_stack_00000008 + 0x20);
  puVar2 = *(uint **)(in_stack_00000008 + 0x50);
  uVar3 = *(uint *)(in_stack_00000008 + 0xc);
  uVar4 = 0;
  uVar5 = *in_stack_0000000c;
  uVar6 = in_stack_0000000c[1];
  uVar7 = 0;
  if (uVar5 != 0) {
    do {
      puVar2[uVar4] = *(uint *)(uVar6 + uVar4 * 4);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
    uVar7 = *in_stack_0000000c;
  }
  uVar5 = uVar3 * 2 - uVar7;
  if (uVar5 != 0) {
    uVar6 = 0;
    do {
      puVar2[uVar7 + uVar6] = 0;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  MontgomeryReduce(puVar1,puVar2 + uVar3 * 2,puVar2,*(uint **)(in_stack_00000008 + 0x10),
                   *(uint **)(in_stack_00000008 + 0x40),uVar3);
  Integer::Integer(param_1,(Integer *)(in_stack_00000008 + 0x1c));
  return param_1;
}

```

---

## MontgomeryRepresentation

```asm
// === 0875f910 TaoCrypt::MontgomeryRepresentation::MontgomeryRepresentation  [0x0875f910-0x875fa2f] ===
 875f910:	55                   	push   %ebp
 875f911:	89 e5                	mov    %esp,%ebp
 875f913:	57                   	push   %edi
 875f914:	56                   	push   %esi
 875f915:	53                   	push   %ebx
 875f916:	e8 dd 34 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875f91b:	81 c3 7d d2 c0 00    	add    $0xc0d27d,%ebx
 875f921:	83 ec 2c             	sub    $0x2c,%esp
 875f924:	8b 75 08             	mov    0x8(%ebp),%esi
 875f927:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875f92a:	89 76 08             	mov    %esi,0x8(%esi)
 875f92d:	8b 83 c0 ff ff ff    	mov    -0x40(%ebx),%eax
 875f933:	83 c0 08             	add    $0x8,%eax
 875f936:	89 46 04             	mov    %eax,0x4(%esi)
 875f939:	8b 83 50 fd ff ff    	mov    -0x2b0(%ebx),%eax
 875f93f:	83 c0 08             	add    $0x8,%eax
 875f942:	89 06                	mov    %eax,(%esi)
 875f944:	8d 46 0c             	lea    0xc(%esi),%eax
 875f947:	89 04 24             	mov    %eax,(%esp)
 875f94a:	89 7c 24 04          	mov    %edi,0x4(%esp)
 875f94e:	e8 1d f9 ff ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 875f953:	8b 07                	mov    (%edi),%eax
 875f955:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 875f95c:	00 
 875f95d:	89 44 24 08          	mov    %eax,0x8(%esp)
 875f961:	8d 46 1c             	lea    0x1c(%esi),%eax
 875f964:	89 04 24             	mov    %eax,(%esp)
 875f967:	e8 84 f7 ff ff       	call   875f0f0 <_ZN8TaoCrypt7IntegerC1Ejj>
 875f96c:	8d 46 2c             	lea    0x2c(%esi),%eax
 875f96f:	89 04 24             	mov    %eax,(%esp)
 875f972:	e8 19 fc ff ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 875f977:	8b 83 d4 fa ff ff    	mov    -0x52c(%ebx),%eax
 875f97d:	83 c0 08             	add    $0x8,%eax
 875f980:	89 06                	mov    %eax,(%esi)
 875f982:	8b 46 0c             	mov    0xc(%esi),%eax
 875f985:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 875f98c:	00 
 875f98d:	89 44 24 08          	mov    %eax,0x8(%esp)
 875f991:	8d 46 3c             	lea    0x3c(%esi),%eax
 875f994:	89 04 24             	mov    %eax,(%esp)
 875f997:	e8 54 f7 ff ff       	call   875f0f0 <_ZN8TaoCrypt7IntegerC1Ejj>
 875f99c:	8b 46 0c             	mov    0xc(%esi),%eax
 875f99f:	8d 14 80             	lea    (%eax,%eax,4),%edx
 875f9a2:	31 c0                	xor    %eax,%eax
 875f9a4:	85 d2                	test   %edx,%edx
 875f9a6:	89 56 4c             	mov    %edx,0x4c(%esi)
 875f9a9:	74 10                	je     875f9bb <_ZN8TaoCrypt24MontgomeryRepresentationC1ERKNS_7IntegerE+0xab>
 875f9ab:	c1 e2 02             	shl    $0x2,%edx
 875f9ae:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875f9b3:	89 14 24             	mov    %edx,(%esp)
 875f9b6:	e8 d5 7d 00 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 875f9bb:	8b 7e 4c             	mov    0x4c(%esi),%edi
 875f9be:	89 46 50             	mov    %eax,0x50(%esi)
 875f9c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 875f9c5:	8d 46 54             	lea    0x54(%esi),%eax
 875f9c8:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 875f9cf:	00 
 875f9d0:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 875f9d4:	89 7c 24 08          	mov    %edi,0x8(%esp)
 875f9d8:	89 04 24             	mov    %eax,(%esp)
 875f9db:	e8 e0 42 00 00       	call   8763cc0 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10reallocateEPjjjb>
 875f9e0:	89 7e 4c             	mov    %edi,0x4c(%esi)
 875f9e3:	c1 e7 02             	shl    $0x2,%edi
 875f9e6:	89 46 50             	mov    %eax,0x50(%esi)
 875f9e9:	89 7c 24 08          	mov    %edi,0x8(%esp)
 875f9ed:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 875f9f4:	00 
 875f9f5:	89 04 24             	mov    %eax,(%esp)
 875f9f8:	e8 c3 e2 91 ff       	call   807dcc0 <memset@plt>
 875f9fd:	8b 46 0c             	mov    0xc(%esi),%eax
 875fa00:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875fa04:	8b 46 10             	mov    0x10(%esi),%eax
 875fa07:	89 44 24 08          	mov    %eax,0x8(%esp)
 875fa0b:	8b 46 50             	mov    0x50(%esi),%eax
 875fa0e:	89 44 24 04          	mov    %eax,0x4(%esp)
 875fa12:	8b 46 40             	mov    0x40(%esi),%eax
 875fa15:	89 04 24             	mov    %eax,(%esp)
 875fa18:	e8 b3 e5 ff ff       	call   875dfd0 <_ZN8TaoCrypt25RecursiveInverseModPower2EPjS0_PKjj>
 875fa1d:	83 c4 2c             	add    $0x2c,%esp
 875fa20:	5b                   	pop    %ebx
 875fa21:	5e                   	pop    %esi
 875fa22:	5f                   	pop    %edi
 875fa23:	5d                   	pop    %ebp
 875fa24:	c3                   	ret
 875fa25:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875fa29:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::MontgomeryRepresentation::MontgomeryRepresentation @ 0x875f910

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::MontgomeryRepresentation::MontgomeryRepresentation(TaoCrypt::Integer const&) */

void __thiscall
TaoCrypt::MontgomeryRepresentation::MontgomeryRepresentation
          (MontgomeryRepresentation *this,Integer *param_1)

{
  int iVar1;
  uint *puVar2;
  void *__s;
  uint uVar3;
  
  *(MontgomeryRepresentation **)(this + 8) = this;
  *(undefined **)(this + 4) = PTR_vtable_0936cb58 + 8;
  *(undefined **)this = PTR_vtable_0936c8e8 + 8;
  Integer::Integer((Integer *)(this + 0xc),param_1);
  Integer::Integer((Integer *)(this + 0x1c),0,*(uint *)param_1);
  Integer::Integer((Integer *)(this + 0x2c));
  *(undefined **)this = PTR_vtable_0936c66c + 8;
  uVar3 = 0;
  Integer::Integer((Integer *)(this + 0x3c),0,*(uint *)(this + 0xc));
  iVar1 = *(int *)(this + 0xc) * 5;
  puVar2 = (uint *)0x0;
  *(int *)(this + 0x4c) = iVar1;
  if (iVar1 != 0) {
    puVar2 = operator_new__(*(int *)(this + 0xc) * 0x14,uVar3 & 0xffffff00);
  }
  uVar3 = *(uint *)(this + 0x4c);
  *(uint **)(this + 0x50) = puVar2;
  __s = (void *)AllocatorWithCleanup<unsigned_int>::reallocate
                          ((AllocatorWithCleanup<unsigned_int> *)(this + 0x54),puVar2,uVar3,uVar3,
                           false);
  *(uint *)(this + 0x4c) = uVar3;
  *(void **)(this + 0x50) = __s;
  memset(__s,0,uVar3 << 2);
  RecursiveInverseModPower2
            (*(uint **)(this + 0x40),*(uint **)(this + 0x50),*(uint **)(this + 0x10),
             *(uint *)(this + 0xc));
  return;
}

```

---

## MultiplicativeInverse

```asm
// === 0875e2c0 TaoCrypt::MontgomeryRepresentation::MultiplicativeInverse  [0x0875e2c0-0x875e3ff] ===
 875e2c0:	55                   	push   %ebp
 875e2c1:	89 e5                	mov    %esp,%ebp
 875e2c3:	57                   	push   %edi
 875e2c4:	56                   	push   %esi
 875e2c5:	53                   	push   %ebx
 875e2c6:	83 ec 3c             	sub    $0x3c,%esp
 875e2c9:	8b 75 08             	mov    0x8(%ebp),%esi
 875e2cc:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 875e2cf:	e8 24 4b fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875e2d4:	81 c3 c4 e8 c0 00    	add    $0xc0e8c4,%ebx
 875e2da:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 875e2e1:	8b 56 0c             	mov    0xc(%esi),%edx
 875e2e4:	8b 46 20             	mov    0x20(%esi),%eax
 875e2e7:	8b 7e 50             	mov    0x50(%esi),%edi
 875e2ea:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 875e2ed:	8b 11                	mov    (%ecx),%edx
 875e2ef:	89 45 dc             	mov    %eax,-0x24(%ebp)
 875e2f2:	31 c0                	xor    %eax,%eax
 875e2f4:	8b 49 04             	mov    0x4(%ecx),%ecx
 875e2f7:	85 d2                	test   %edx,%edx
 875e2f9:	74 1d                	je     875e318 <_ZNK8TaoCrypt24MontgomeryRepresentation21MultiplicativeInverseERKNS_7IntegerE+0x58>
 875e2fb:	89 75 e0             	mov    %esi,-0x20(%ebp)
 875e2fe:	89 d6                	mov    %edx,%esi
 875e300:	8b 14 81             	mov    (%ecx,%eax,4),%edx
 875e303:	89 14 87             	mov    %edx,(%edi,%eax,4)
 875e306:	83 c0 01             	add    $0x1,%eax
 875e309:	39 c6                	cmp    %eax,%esi
 875e30b:	77 f3                	ja     875e300 <_ZNK8TaoCrypt24MontgomeryRepresentation21MultiplicativeInverseERKNS_7IntegerE+0x40>
 875e30d:	8b 55 0c             	mov    0xc(%ebp),%edx
 875e310:	8b 75 e0             	mov    -0x20(%ebp),%esi
 875e313:	8b 12                	mov    (%edx),%edx
 875e315:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875e318:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 875e31b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875e31e:	01 c9                	add    %ecx,%ecx
 875e320:	29 c1                	sub    %eax,%ecx
 875e322:	8d 14 87             	lea    (%edi,%eax,4),%edx
 875e325:	74 17                	je     875e33e <_ZNK8TaoCrypt24MontgomeryRepresentation21MultiplicativeInverseERKNS_7IntegerE+0x7e>
 875e327:	31 c0                	xor    %eax,%eax
 875e329:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 875e330:	c7 04 82 00 00 00 00 	movl   $0x0,(%edx,%eax,4)
 875e337:	83 c0 01             	add    $0x1,%eax
 875e33a:	39 c1                	cmp    %eax,%ecx
 875e33c:	77 f2                	ja     875e330 <_ZNK8TaoCrypt24MontgomeryRepresentation21MultiplicativeInverseERKNS_7IntegerE+0x70>
 875e33e:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875e341:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 875e344:	89 54 24 14          	mov    %edx,0x14(%esp)
 875e348:	8b 46 40             	mov    0x40(%esi),%eax
 875e34b:	89 44 24 10          	mov    %eax,0x10(%esp)
 875e34f:	8b 46 10             	mov    0x10(%esi),%eax
 875e352:	89 0c 24             	mov    %ecx,(%esp)
 875e355:	89 7c 24 08          	mov    %edi,0x8(%esp)
 875e359:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875e35d:	8d 04 d7             	lea    (%edi,%edx,8),%eax
 875e360:	89 44 24 04          	mov    %eax,0x4(%esp)
 875e364:	e8 77 fe ff ff       	call   875e1e0 <_ZN8TaoCrypt16MontgomeryReduceEPjS0_PKjS2_S2_j>
 875e369:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 875e36c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875e36f:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 875e372:	89 44 24 14          	mov    %eax,0x14(%esp)
 875e376:	8b 46 10             	mov    0x10(%esi),%eax
 875e379:	89 54 24 0c          	mov    %edx,0xc(%esp)
 875e37d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875e381:	89 7c 24 04          	mov    %edi,0x4(%esp)
 875e385:	89 44 24 10          	mov    %eax,0x10(%esp)
 875e389:	89 0c 24             	mov    %ecx,(%esp)
 875e38c:	e8 ef e5 ff ff       	call   875c980 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j>
 875e391:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875e394:	c1 e2 05             	shl    $0x5,%edx
 875e397:	39 d0                	cmp    %edx,%eax
 875e399:	77 35                	ja     875e3d0 <_ZNK8TaoCrypt24MontgomeryRepresentation21MultiplicativeInverseERKNS_7IntegerE+0x110>
 875e39b:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 875e39e:	29 c2                	sub    %eax,%edx
 875e3a0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 875e3a3:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 875e3a7:	8b 4e 10             	mov    0x10(%esi),%ecx
 875e3aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 875e3ae:	89 04 24             	mov    %eax,(%esp)
 875e3b1:	89 54 24 08          	mov    %edx,0x8(%esp)
 875e3b5:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 875e3b9:	e8 d2 eb ff ff       	call   875cf90 <_ZN8TaoCrypt19MultiplyByPower2ModEPjPKjjS2_j>
 875e3be:	83 c4 3c             	add    $0x3c,%esp
 875e3c1:	8d 46 1c             	lea    0x1c(%esi),%eax
 875e3c4:	5b                   	pop    %ebx
 875e3c5:	5e                   	pop    %esi
 875e3c6:	5f                   	pop    %edi
 875e3c7:	5d                   	pop    %ebp
 875e3c8:	c3                   	ret
 875e3c9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 875e3d0:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 875e3d3:	29 d0                	sub    %edx,%eax
 875e3d5:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 875e3d9:	8b 4e 10             	mov    0x10(%esi),%ecx
 875e3dc:	89 44 24 08          	mov    %eax,0x8(%esp)
 875e3e0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 875e3e3:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 875e3e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 875e3eb:	89 04 24             	mov    %eax,(%esp)
 875e3ee:	e8 9d ea ff ff       	call   875ce90 <_ZN8TaoCrypt17DivideByPower2ModEPjPKjjS2_j>
 875e3f3:	83 c4 3c             	add    $0x3c,%esp
 875e3f6:	8d 46 1c             	lea    0x1c(%esi),%eax
 875e3f9:	5b                   	pop    %ebx
 875e3fa:	5e                   	pop    %esi
 875e3fb:	5f                   	pop    %edi
 875e3fc:	5d                   	pop    %ebp
 875e3fd:	c3                   	ret
 875e3fe:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::MontgomeryRepresentation::MultiplicativeInverse @ 0x875e2c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::MontgomeryRepresentation::MultiplicativeInverse(TaoCrypt::Integer const&) const */

MontgomeryRepresentation * __thiscall
TaoCrypt::MontgomeryRepresentation::MultiplicativeInverse
          (MontgomeryRepresentation *this,Integer *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int local_24;
  
  local_24 = 0;
  uVar1 = *(uint *)(this + 0xc);
  puVar2 = *(uint **)(this + 0x20);
  puVar3 = *(uint **)(this + 0x50);
  uVar6 = *(uint *)param_1;
  uVar5 = 0;
  iVar4 = *(int *)(param_1 + 4);
  if (uVar6 != 0) {
    do {
      puVar3[uVar5] = *(uint *)(iVar4 + uVar5 * 4);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    local_24 = *(int *)param_1;
  }
  uVar6 = uVar1 * 2 - local_24;
  if (uVar6 != 0) {
    uVar5 = 0;
    do {
      puVar3[local_24 + uVar5] = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  MontgomeryReduce(puVar2,puVar3 + uVar1 * 2,puVar3,*(uint **)(this + 0x10),*(uint **)(this + 0x40),
                   uVar1);
  uVar6 = AlmostInverse(puVar2,puVar3,puVar2,uVar1,*(uint **)(this + 0x10),uVar1);
  if (uVar1 * 0x20 < uVar6) {
    DivideByPower2Mod(puVar2,puVar2,uVar6 + uVar1 * -0x20,*(uint **)(this + 0x10),uVar1);
    return this + 0x1c;
  }
  MultiplyByPower2Mod(puVar2,puVar2,uVar1 * 0x20 - uVar6,*(uint **)(this + 0x10),uVar1);
  return this + 0x1c;
}

```

---

## Multiply

```asm
// === 0875e4b0 TaoCrypt::MontgomeryRepresentation::Multiply  [0x0875e4b0-0x875e57f] ===
 875e4b0:	55                   	push   %ebp
 875e4b1:	89 e5                	mov    %esp,%ebp
 875e4b3:	57                   	push   %edi
 875e4b4:	56                   	push   %esi
 875e4b5:	53                   	push   %ebx
 875e4b6:	83 ec 4c             	sub    $0x4c,%esp
 875e4b9:	8b 75 08             	mov    0x8(%ebp),%esi
 875e4bc:	8b 45 10             	mov    0x10(%ebp),%eax
 875e4bf:	8b 55 0c             	mov    0xc(%ebp),%edx
 875e4c2:	e8 31 49 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875e4c7:	81 c3 d1 e6 c0 00    	add    $0xc0e6d1,%ebx
 875e4cd:	8b 4e 20             	mov    0x20(%esi),%ecx
 875e4d0:	8b 7e 50             	mov    0x50(%esi),%edi
 875e4d3:	89 45 d0             	mov    %eax,-0x30(%ebp)
 875e4d6:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 875e4d9:	89 4d d8             	mov    %ecx,-0x28(%ebp)
 875e4dc:	8b 4e 0c             	mov    0xc(%esi),%ecx
 875e4df:	89 4d e0             	mov    %ecx,-0x20(%ebp)
 875e4e2:	8d 0c cf             	lea    (%edi,%ecx,8),%ecx
 875e4e5:	89 4d dc             	mov    %ecx,-0x24(%ebp)
 875e4e8:	8b 08                	mov    (%eax),%ecx
 875e4ea:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 875e4ee:	8b 48 04             	mov    0x4(%eax),%ecx
 875e4f1:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 875e4f5:	8b 0a                	mov    (%edx),%ecx
 875e4f7:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 875e4fb:	8b 4a 04             	mov    0x4(%edx),%ecx
 875e4fe:	89 3c 24             	mov    %edi,(%esp)
 875e501:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875e505:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 875e508:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 875e50c:	e8 ff e0 ff ff       	call   875c610 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j>
 875e511:	8b 45 d0             	mov    -0x30(%ebp),%eax
 875e514:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 875e517:	8b 00                	mov    (%eax),%eax
 875e519:	8b 12                	mov    (%edx),%edx
 875e51b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 875e51e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875e521:	01 c0                	add    %eax,%eax
 875e523:	29 d0                	sub    %edx,%eax
 875e525:	03 55 e4             	add    -0x1c(%ebp),%edx
 875e528:	2b 45 e4             	sub    -0x1c(%ebp),%eax
 875e52b:	8d 0c 97             	lea    (%edi,%edx,4),%ecx
 875e52e:	74 16                	je     875e546 <_ZNK8TaoCrypt24MontgomeryRepresentation8MultiplyERKNS_7IntegerES3_+0x96>
 875e530:	31 d2                	xor    %edx,%edx
 875e532:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875e538:	c7 04 91 00 00 00 00 	movl   $0x0,(%ecx,%edx,4)
 875e53f:	83 c2 01             	add    $0x1,%edx
 875e542:	39 d0                	cmp    %edx,%eax
 875e544:	77 f2                	ja     875e538 <_ZNK8TaoCrypt24MontgomeryRepresentation8MultiplyERKNS_7IntegerES3_+0x88>
 875e546:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875e549:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 875e54c:	89 44 24 14          	mov    %eax,0x14(%esp)
 875e550:	8b 46 40             	mov    0x40(%esi),%eax
 875e553:	89 44 24 10          	mov    %eax,0x10(%esp)
 875e557:	8b 46 10             	mov    0x10(%esi),%eax
 875e55a:	89 7c 24 08          	mov    %edi,0x8(%esp)
 875e55e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 875e562:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875e566:	8b 45 d8             	mov    -0x28(%ebp),%eax
 875e569:	89 04 24             	mov    %eax,(%esp)
 875e56c:	e8 6f fc ff ff       	call   875e1e0 <_ZN8TaoCrypt16MontgomeryReduceEPjS0_PKjS2_S2_j>
 875e571:	83 c4 4c             	add    $0x4c,%esp
 875e574:	8d 46 1c             	lea    0x1c(%esi),%eax
 875e577:	5b                   	pop    %ebx
 875e578:	5e                   	pop    %esi
 875e579:	5f                   	pop    %edi
 875e57a:	5d                   	pop    %ebp
 875e57b:	c3                   	ret
 875e57c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::MontgomeryRepresentation::Multiply @ 0x875e4b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::MontgomeryRepresentation::Multiply(TaoCrypt::Integer const&, TaoCrypt::Integer const&)
   const */

MontgomeryRepresentation * __thiscall
TaoCrypt::MontgomeryRepresentation::Multiply
          (MontgomeryRepresentation *this,Integer *param_1,Integer *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  puVar1 = *(uint **)(this + 0x20);
  puVar2 = *(uint **)(this + 0x50);
  uVar3 = *(uint *)(this + 0xc);
  AsymmetricMultiply(puVar2,puVar2 + uVar3 * 2,*(uint **)(param_1 + 4),*(uint *)param_1,
                     *(uint **)(param_2 + 4),*(uint *)param_2);
  iVar4 = *(int *)param_2;
  iVar5 = *(int *)param_1;
  iVar6 = uVar3 * 2 - iVar5;
  if (iVar6 != iVar4) {
    uVar7 = 0;
    do {
      puVar2[iVar5 + iVar4 + uVar7] = 0;
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)(iVar6 - iVar4));
  }
  MontgomeryReduce(puVar1,puVar2 + uVar3 * 2,puVar2,*(uint **)(this + 0x10),*(uint **)(this + 0x40),
                   uVar3);
  return this + 0x1c;
}

```

---

## Square

```asm
// === 0875e400 TaoCrypt::MontgomeryRepresentation::Square  [0x0875e400-0x875e4af] ===
 875e400:	55                   	push   %ebp
 875e401:	89 e5                	mov    %esp,%ebp
 875e403:	57                   	push   %edi
 875e404:	56                   	push   %esi
 875e405:	53                   	push   %ebx
 875e406:	83 ec 3c             	sub    $0x3c,%esp
 875e409:	8b 75 08             	mov    0x8(%ebp),%esi
 875e40c:	8b 45 0c             	mov    0xc(%ebp),%eax
 875e40f:	e8 e4 49 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875e414:	81 c3 84 e7 c0 00    	add    $0xc0e784,%ebx
 875e41a:	8b 56 20             	mov    0x20(%esi),%edx
 875e41d:	8b 7e 50             	mov    0x50(%esi),%edi
 875e420:	89 45 d8             	mov    %eax,-0x28(%ebp)
 875e423:	89 55 dc             	mov    %edx,-0x24(%ebp)
 875e426:	8b 56 0c             	mov    0xc(%esi),%edx
 875e429:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 875e42c:	8d 14 d7             	lea    (%edi,%edx,8),%edx
 875e42f:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875e432:	8b 10                	mov    (%eax),%edx
 875e434:	89 54 24 0c          	mov    %edx,0xc(%esp)
 875e438:	8b 50 04             	mov    0x4(%eax),%edx
 875e43b:	89 3c 24             	mov    %edi,(%esp)
 875e43e:	89 54 24 08          	mov    %edx,0x8(%esp)
 875e442:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875e445:	89 54 24 04          	mov    %edx,0x4(%esp)
 875e449:	e8 c2 de ff ff       	call   875c310 <_ZN8TaoCrypt15RecursiveSquareEPjS0_PKjj>
 875e44e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 875e451:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875e454:	8b 00                	mov    (%eax),%eax
 875e456:	29 c2                	sub    %eax,%edx
 875e458:	8d 0c c7             	lea    (%edi,%eax,8),%ecx
 875e45b:	89 d0                	mov    %edx,%eax
 875e45d:	01 c0                	add    %eax,%eax
 875e45f:	74 15                	je     875e476 <_ZNK8TaoCrypt24MontgomeryRepresentation6SquareERKNS_7IntegerE+0x76>
 875e461:	31 d2                	xor    %edx,%edx
 875e463:	90                   	nop
 875e464:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875e468:	c7 04 91 00 00 00 00 	movl   $0x0,(%ecx,%edx,4)
 875e46f:	83 c2 01             	add    $0x1,%edx
 875e472:	39 d0                	cmp    %edx,%eax
 875e474:	77 f2                	ja     875e468 <_ZNK8TaoCrypt24MontgomeryRepresentation6SquareERKNS_7IntegerE+0x68>
 875e476:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 875e479:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875e47c:	89 44 24 14          	mov    %eax,0x14(%esp)
 875e480:	8b 46 40             	mov    0x40(%esi),%eax
 875e483:	89 44 24 10          	mov    %eax,0x10(%esp)
 875e487:	8b 46 10             	mov    0x10(%esi),%eax
 875e48a:	89 7c 24 08          	mov    %edi,0x8(%esp)
 875e48e:	89 54 24 04          	mov    %edx,0x4(%esp)
 875e492:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875e496:	8b 45 dc             	mov    -0x24(%ebp),%eax
 875e499:	89 04 24             	mov    %eax,(%esp)
 875e49c:	e8 3f fd ff ff       	call   875e1e0 <_ZN8TaoCrypt16MontgomeryReduceEPjS0_PKjS2_S2_j>
 875e4a1:	83 c4 3c             	add    $0x3c,%esp
 875e4a4:	8d 46 1c             	lea    0x1c(%esi),%eax
 875e4a7:	5b                   	pop    %ebx
 875e4a8:	5e                   	pop    %esi
 875e4a9:	5f                   	pop    %edi
 875e4aa:	5d                   	pop    %ebp
 875e4ab:	c3                   	ret
 875e4ac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::MontgomeryRepresentation::Square @ 0x875e400

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::MontgomeryRepresentation::Square(TaoCrypt::Integer const&) const */

MontgomeryRepresentation * __thiscall
TaoCrypt::MontgomeryRepresentation::Square(MontgomeryRepresentation *this,Integer *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = *(uint **)(this + 0x20);
  puVar2 = *(uint **)(this + 0x50);
  uVar3 = *(uint *)(this + 0xc);
  RecursiveSquare(puVar2,puVar2 + uVar3 * 2,*(uint **)(param_1 + 4),*(uint *)param_1);
  iVar4 = *(int *)param_1;
  uVar5 = (uVar3 - iVar4) * 2;
  if (uVar5 != 0) {
    uVar6 = 0;
    do {
      puVar2[iVar4 * 2 + uVar6] = 0;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  MontgomeryReduce(puVar1,puVar2 + uVar3 * 2,puVar2,*(uint **)(this + 0x10),*(uint **)(this + 0x40),
                   uVar3);
  return this + 0x1c;
}

```

