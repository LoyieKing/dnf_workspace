# upgrade_table_t

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## GetPenaltyType

```asm
// === 089003ee upgrade_table_t::GetPenaltyType  [0x089003ee-0x8900435] ===
 89003ee:	55                   	push   %ebp
 89003ef:	89 e5                	mov    %esp,%ebp
 89003f1:	83 ec 04             	sub    $0x4,%esp
 89003f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 89003f7:	88 45 fc             	mov    %al,-0x4(%ebp)
 89003fa:	8b 55 10             	mov    0x10(%ebp),%edx
 89003fd:	8b 45 08             	mov    0x8(%ebp),%eax
 8900400:	81 c2 00 01 00 00    	add    $0x100,%edx
 8900406:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 890040a:	83 f8 ff             	cmp    $0xffffffff,%eax
 890040d:	74 1f                	je     890042e <_ZNK15upgrade_table_t14GetPenaltyTypeEh11ENUM_RARITYPK14upgrade_info_t+0x40>
 890040f:	0f b6 55 fc          	movzbl -0x4(%ebp),%edx
 8900413:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8900416:	8b 45 08             	mov    0x8(%ebp),%eax
 8900419:	81 c1 00 01 00 00    	add    $0x100,%ecx
 890041f:	8b 44 88 04          	mov    0x4(%eax,%ecx,4),%eax
 8900423:	39 c2                	cmp    %eax,%edx
 8900425:	7c 07                	jl     890042e <_ZNK15upgrade_table_t14GetPenaltyTypeEh11ENUM_RARITYPK14upgrade_info_t+0x40>
 8900427:	b8 03 00 00 00       	mov    $0x3,%eax
 890042c:	eb 06                	jmp    8900434 <_ZNK15upgrade_table_t14GetPenaltyTypeEh11ENUM_RARITYPK14upgrade_info_t+0x46>
 890042e:	8b 45 14             	mov    0x14(%ebp),%eax
 8900431:	8b 40 24             	mov    0x24(%eax),%eax
 8900434:	c9                   	leave
 8900435:	c3                   	ret

```

```c
// upgrade_table_t::GetPenaltyType @ 0x89003ee

/* upgrade_table_t::GetPenaltyType(unsigned char, ENUM_RARITY, upgrade_info_t const*) const */

undefined4 __thiscall
upgrade_table_t::GetPenaltyType(upgrade_table_t *this,byte param_1,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + (param_3 + 0x100) * 4 + 4) == -1) ||
     ((int)(uint)param_1 < *(int *)(this + (param_3 + 0x100) * 4 + 4))) {
    uVar1 = *(undefined4 *)(param_4 + 0x24);
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}

```

---

## get_upgrade_info

```asm
// === 08900436 upgrade_table_t::get_upgrade_info  [0x08900436-0x89008b7] ===
 8900436:	55                   	push   %ebp
 8900437:	89 e5                	mov    %esp,%ebp
 8900439:	57                   	push   %edi
 890043a:	56                   	push   %esi
 890043b:	53                   	push   %ebx
 890043c:	83 ec 6c             	sub    $0x6c,%esp
 890043f:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8900442:	8b 55 14             	mov    0x14(%ebp),%edx
 8900445:	8b 45 18             	mov    0x18(%ebp),%eax
 8900448:	88 4d c4             	mov    %cl,-0x3c(%ebp)
 890044b:	88 55 c0             	mov    %dl,-0x40(%ebp)
 890044e:	88 45 bc             	mov    %al,-0x44(%ebp)
 8900451:	0f b6 5d bc          	movzbl -0x44(%ebp),%ebx
 8900455:	8b 45 08             	mov    0x8(%ebp),%eax
 8900458:	89 04 24             	mov    %eax,(%esp)
 890045b:	e8 a2 b1 c4 ff       	call   854b602 <_ZNKSt6vectorI14upgrade_info_tSaIS0_EE4sizeEv>
 8900460:	39 c3                	cmp    %eax,%ebx
 8900462:	0f 93 c0             	setae  %al
 8900465:	84 c0                	test   %al,%al
 8900467:	74 0a                	je     8900473 <_ZNK15upgrade_table_t16get_upgrade_infoEP14upgrade_info_thhh18ENUM_EQUIPMENTTYPE+0x3d>
 8900469:	b8 00 00 00 00       	mov    $0x0,%eax
 890046e:	e9 3a 04 00 00       	jmp    89008ad <_ZNK15upgrade_table_t16get_upgrade_infoEP14upgrade_info_thhh18ENUM_EQUIPMENTTYPE+0x477>
 8900473:	80 7d c4 05          	cmpb   $0x5,-0x3c(%ebp)
 8900477:	76 0a                	jbe    8900483 <_ZNK15upgrade_table_t16get_upgrade_infoEP14upgrade_info_thhh18ENUM_EQUIPMENTTYPE+0x4d>
 8900479:	b8 00 00 00 00       	mov    $0x0,%eax
 890047e:	e9 2a 04 00 00       	jmp    89008ad <_ZNK15upgrade_table_t16get_upgrade_infoEP14upgrade_info_thhh18ENUM_EQUIPMENTTYPE+0x477>
 8900483:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8900486:	83 f8 15             	cmp    $0x15,%eax
 8900489:	7e 0a                	jle    8900495 <_ZNK15upgrade_table_t16get_upgrade_infoEP14upgrade_info_thhh18ENUM_EQUIPMENTTYPE+0x5f>
 890048b:	b8 00 00 00 00       	mov    $0x0,%eax
 8900490:	e9 18 04 00 00       	jmp    89008ad <_ZNK15upgrade_table_t16get_upgrade_infoEP14upgrade_info_thhh18ENUM_EQUIPMENTTYPE+0x477>
 8900495:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8900498:	83 f8 09             	cmp    $0x9,%eax
 890049b:	7f 0a                	jg     89004a7 <_ZNK15upgrade_table_t16get_upgrade_infoEP14upgrade_info_thhh18ENUM_EQUIPMENTTYPE+0x71>
 890049d:	b8 00 00 00 00       	mov    $0x0,%eax
 89004a2:	e9 06 04 00 00       	jmp    89008ad <_ZNK15upgrade_table_t16get_upgrade_infoEP14upgrade_info_thhh18ENUM_EQUIPMENTTYPE+0x477>
 89004a7:	80 7d c0 63          	cmpb   $0x63,-0x40(%ebp)
 89004ab:	76 0a                	jbe    89004b7 <_ZNK15upgrade_table_t16get_upgrade_infoEP14upgrade_info_thhh18ENUM_EQUIPMENTTYPE+0x81>
 89004ad:	b8 00 00 00 00       	mov    $0x0,%eax
 89004b2:	e9 f6 03 00 00       	jmp    89008ad <_ZNK15upgrade_table_t16get_upgrade_infoEP14upgrade_info_thhh18ENUM_EQUIPMENTTYPE+0x477>
 89004b7:	d9 05 b8 4f 3f 09    	flds   0x93f4fb8
 89004bd:	d9 05 bc 4f 3f 09    	flds   0x93f4fbc
 89004c3:	de c9                	fmulp  %st,%st(1)
 89004c5:	d9 5d e0             	fstps  -0x20(%ebp)
 89004c8:	0f b6 55 bc          	movzbl -0x44(%ebp),%edx
 89004cc:	8b 45 08             	mov    0x8(%ebp),%eax
 89004cf:	89 54 24 04          	mov    %edx,0x4(%esp)
 89004d3:	89 04 24             	mov    %eax,(%esp)
 89004d6:	e8 83 da 01 00       	call   891df5e <_ZNKSt6vectorI14upgrade_info_tSaIS0_EE2atEj>
 89004db:	8b 55 0c             	mov    0xc(%ebp),%edx
 89004de:	89 c3                	mov    %eax,%ebx
 89004e0:	b8 1b 00 00 00       	mov    $0x1b,%eax
 89004e5:	89 d7                	mov    %edx,%edi
 89004e7:	89 de                	mov    %ebx,%esi
 89004e9:	89 c1                	mov    %eax,%ecx
 89004eb:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 89004ed:	0f b6 45 c0          	movzbl -0x40(%ebp),%eax
 89004f1:	89 45 b8             	mov    %eax,-0x48(%ebp)
 89004f4:	db 45 b8             	fildl  -0x48(%ebp)
 89004f7:	8b 45 08             	mov    0x8(%ebp),%eax
 89004fa:	d9 40 0c             	flds   0xc(%eax)
 89004fd:	de f9                	fdivrp %st,%st(1)
 89004ff:	d8 45 e0             	fadds  -0x20(%ebp)
 8900502:	8b 45 0c             	mov    0xc(%ebp),%eax
 8900505:	d9 00                	flds   (%eax)
 8900507:	de c9                	fmulp  %st,%st(1)
 8900509:	0f b6 55 c4          	movzbl -0x3c(%ebp),%edx
 890050d:	8b 45 08             	mov    0x8(%ebp),%eax
 8900510:	83 c2 20             	add    $0x20,%edx
 8900513:	d9 44 90 0c          	flds   0xc(%eax,%edx,4)
 8900517:	de c9                	fmulp  %st,%st(1)
 8900519:	8b 45 0c             	mov    0xc(%ebp),%eax
 890051c:	d9 18                	fstps  (%eax)
 890051e:	0f b6 45 c0          	movzbl -0x40(%ebp),%eax
 8900522:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8900525:	db 45 b8             	fildl  -0x48(%ebp)
 8900528:	8b 45 08             	mov    0x8(%ebp),%eax
 890052b:	d9 40 10             	flds   0x10(%eax)
 890052e:	de f9                	fdivrp %st,%st(1)
 8900530:	d8 45 e0             	fadds  -0x20(%ebp)
 8900533:	8b 45 0c             	mov    0xc(%ebp),%eax
 8900536:	d9 40 04             	flds   0x4(%eax)
 8900539:	de c9                	fmulp  %st,%st(1)
 890053b:	0f b6 55 c4          	movzbl -0x3c(%ebp),%edx
 890053f:	8b 45 08             	mov    0x8(%ebp),%eax
 8900542:	83 c2 20             	add    $0x20,%edx
 8900545:	d9 44 90 0c          	flds   0xc(%eax,%edx,4)
 8900549:	de c9                	fmulp  %st,%st(1)
 890054b:	8b 45 0c             	mov    0xc(%ebp),%eax
 890054e:	d9 58 04             	fstps  0x4(%eax)
 8900551:	0f b6 45 c0          	movzbl -0x40(%ebp),%eax
 8900555:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8900558:	db 45 b8             	fildl  -0x48(%ebp)
 890055b:	8b 45 08             	mov    0x8(%ebp),%eax
 890055e:	d9 40 14             	flds   0x14(%eax)
 8900561:	de f9                	fdivrp %st,%st(1)
 8900563:	d8 45 e0             	fadds  -0x20(%ebp)
 8900566:	8b 45 0c             	mov    0xc(%ebp),%eax
 8900569:	d9 40 08             	flds   0x8(%eax)
 890056c:	de c9                	fmulp  %st,%st(1)
 890056e:	0f b6 55 c4          	movzbl -0x3c(%ebp),%edx
 8900572:	8b 45 08             	mov    0x8(%ebp),%eax
 8900575:	83 c2 20             	add    $0x20,%edx
 8900578:	d9 44 90 0c          	flds   0xc(%eax,%edx,4)
 890057c:	de c9                	fmulp  %st,%st(1)
 890057e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8900581:	d9 58 08             	fstps  0x8(%eax)
 8900584:	0f b6 45 c0          	movzbl -0x40(%ebp),%eax
 8900588:	89 45 b8             	mov    %eax,-0x48(%ebp)
 890058b:	db 45 b8             	fildl  -0x48(%ebp)
 890058e:	8b 45 08             	mov    0x8(%ebp),%eax
 8900591:	d9 40 18             	flds   0x18(%eax)
 8900594:	de f9                	fdivrp %st,%st(1)
 8900596:	d8 45 e0             	fadds  -0x20(%ebp)
 8900599:	8b 45 0c             	mov    0xc(%ebp),%eax
 890059c:	d9 40 0c             	flds   0xc(%eax)
 890059f:	de c9                	fmulp  %st,%st(1)
 89005a1:	0f b6 55 c4          	movzbl -0x3c(%ebp),%edx
 89005a5:	8b 45 08             	mov    0x8(%ebp),%eax
 89005a8:	83 c2 20             	add    $0x20,%edx
 89005ab:	d9 44 90 0c          	flds   0xc(%eax,%edx,4)
 89005af:	de c9                	fmulp  %st,%st(1)
 89005b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 89005b4:	d9 58 0c             	fstps  0xc(%eax)
 89005b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 89005ba:	d9 40 10             	flds   0x10(%eax)
 89005bd:	0f b6 55 c4          	movzbl -0x3c(%ebp),%edx
 89005c1:	8b 45 08             	mov    0x8(%ebp),%eax
 89005c4:	83 c2 20             	add    $0x20,%edx
 89005c7:	d9 44 90 0c          	flds   0xc(%eax,%edx,4)
 89005cb:	de c9                	fmulp  %st,%st(1)
 89005cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 89005d0:	d9 58 10             	fstps  0x10(%eax)
 89005d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 89005d6:	d9 40 14             	flds   0x14(%eax)
 89005d9:	0f b6 55 c4          	movzbl -0x3c(%ebp),%edx
 89005dd:	8b 45 08             	mov    0x8(%ebp),%eax
 89005e0:	83 c2 20             	add    $0x20,%edx
 89005e3:	d9 44 90 0c          	flds   0xc(%eax,%edx,4)
 89005e7:	de c9                	fmulp  %st,%st(1)
 89005e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 89005ec:	d9 58 14             	fstps  0x14(%eax)
 89005ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 89005f2:	d9 40 18             	flds   0x18(%eax)
 89005f5:	0f b6 55 c4          	movzbl -0x3c(%ebp),%edx
 89005f9:	8b 45 08             	mov    0x8(%ebp),%eax
 89005fc:	83 c2 20             	add    $0x20,%edx
 89005ff:	d9 44 90 0c          	flds   0xc(%eax,%edx,4)
 8900603:	de c9                	fmulp  %st,%st(1)
 8900605:	8b 45 0c             	mov    0xc(%ebp),%eax
 8900608:	d9 58 18             	fstps  0x18(%eax)
 890060b:	8b 45 0c             	mov    0xc(%ebp),%eax
 890060e:	d9 40 1c             	flds   0x1c(%eax)
 8900611:	0f b6 55 c4          	movzbl -0x3c(%ebp),%edx
 8900615:	8b 45 08             	mov    0x8(%ebp),%eax
 8900618:	83 c2 20             	add    $0x20,%edx
 890061b:	d9 44 90 0c          	flds   0xc(%eax,%edx,4)
 890061f:	de c9                	fmulp  %st,%st(1)
 8900621:	8b 45 0c             	mov    0xc(%ebp),%eax
 8900624:	d9 58 1c             	fstps  0x1c(%eax)
 8900627:	0f b6 45 c0          	movzbl -0x40(%ebp),%eax
 890062b:	89 45 b8             	mov    %eax,-0x48(%ebp)
 890062e:	db 45 b8             	fildl  -0x48(%ebp)
 8900631:	8b 45 08             	mov    0x8(%ebp),%eax
 8900634:	d9 40 0c             	flds   0xc(%eax)
 8900637:	de f9                	fdivrp %st,%st(1)
 8900639:	d8 45 e0             	fadds  -0x20(%ebp)
 890063c:	8b 45 0c             	mov    0xc(%ebp),%eax
 890063f:	d9 40 4c             	flds   0x4c(%eax)
 8900642:	de c9                	fmulp  %st,%st(1)
 8900644:	0f b6 55 c4          	movzbl -0x3c(%ebp),%edx
 8900648:	8b 45 08             	mov    0x8(%ebp),%eax
 890064b:	83 c2 20             	add    $0x20,%edx
 890064e:	d9 44 90 0c          	flds   0xc(%eax,%edx,4)
 8900652:	de c9                	fmulp  %st,%st(1)
 8900654:	8b 45 0c             	mov    0xc(%ebp),%eax
 8900657:	d9 58 4c             	fstps  0x4c(%eax)
 890065a:	0f b6 45 c0          	movzbl -0x40(%ebp),%eax
 890065e:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8900661:	db 45 b8             	fildl  -0x48(%ebp)
 8900664:	8b 45 08             	mov    0x8(%ebp),%eax
 8900667:	d9 40 10             	flds   0x10(%eax)
 890066a:	de f9                	fdivrp %st,%st(1)
 890066c:	d8 45 e0             	fadds  -0x20(%ebp)
 890066f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8900672:	d9 40 50             	flds   0x50(%eax)
 8900675:	de c9                	fmulp  %st,%st(1)
 8900677:	0f b6 55 c4          	movzbl -0x3c(%ebp),%edx
 890067b:	8b 45 08             	mov    0x8(%ebp),%eax
 890067e:	83 c2 20             	add    $0x20,%edx
 8900681:	d9 44 90 0c          	flds   0xc(%eax,%edx,4)
 8900685:	de c9                	fmulp  %st,%st(1)
 8900687:	8b 45 0c             	mov    0xc(%ebp),%eax
 890068a:	d9 58 50             	fstps  0x50(%eax)
 890068d:	0f b6 45 c0          	movzbl -0x40(%ebp),%eax
 8900691:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8900694:	db 45 b8             	fildl  -0x48(%ebp)
 8900697:	8b 45 08             	mov    0x8(%ebp),%eax
 890069a:	d9 40 14             	flds   0x14(%eax)
 890069d:	de f9                	fdivrp %st,%st(1)
 890069f:	d8 45 e0             	fadds  -0x20(%ebp)
 89006a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 89006a5:	d9 40 54             	flds   0x54(%eax)
 89006a8:	de c9                	fmulp  %st,%st(1)
 89006aa:	0f b6 55 c4          	movzbl -0x3c(%ebp),%edx
 89006ae:	8b 45 08             	mov    0x8(%ebp),%eax
 89006b1:	83 c2 20             	add    $0x20,%edx
 89006b4:	d9 44 90 0c          	flds   0xc(%eax,%edx,4)
 89006b8:	de c9                	fmulp  %st,%st(1)
 89006ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 89006bd:	d9 58 54             	fstps  0x54(%eax)
 89006c0:	0f b6 45 c0          	movzbl -0x40(%ebp),%eax
 89006c4:	89 45 b8             	mov    %eax,-0x48(%ebp)
 89006c7:	db 45 b8             	fildl  -0x48(%ebp)
 89006ca:	8b 45 08             	mov    0x8(%ebp),%eax
 89006cd:	d9 40 18             	flds   0x18(%eax)
 89006d0:	de f9                	fdivrp %st,%st(1)
 89006d2:	d8 45 e0             	fadds  -0x20(%ebp)
 89006d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 89006d8:	d9 40 58             	flds   0x58(%eax)
 89006db:	de c9                	fmulp  %st,%st(1)
 89006dd:	0f b6 55 c4          	movzbl -0x3c(%ebp),%edx
 89006e1:	8b 45 08             	mov    0x8(%ebp),%eax
 89006e4:	83 c2 20             	add    $0x20,%edx
 89006e7:	d9 44 90 0c          	flds   0xc(%eax,%edx,4)
 89006eb:	de c9                	fmulp  %st,%st(1)
 89006ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 89006f0:	d9 58 58             	fstps  0x58(%eax)
 89006f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 89006f6:	d9 40 5c             	flds   0x5c(%eax)
 89006f9:	0f b6 55 c4          	movzbl -0x3c(%ebp),%edx
 89006fd:	8b 45 08             	mov    0x8(%ebp),%eax
 8900700:	83 c2 20             	add    $0x20,%edx
 8900703:	d9 44 90 0c          	flds   0xc(%eax,%edx,4)
 8900707:	de c9                	fmulp  %st,%st(1)
 8900709:	8b 45 0c             	mov    0xc(%ebp),%eax
 890070c:	d9 58 5c             	fstps  0x5c(%eax)
 890070f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8900712:	d9 40 60             	flds   0x60(%eax)
 8900715:	0f b6 55 c4          	movzbl -0x3c(%ebp),%edx
 8900719:	8b 45 08             	mov    0x8(%ebp),%eax
 890071c:	83 c2 20             	add    $0x20,%edx
 890071f:	d9 44 90 0c          	flds   0xc(%eax,%edx,4)
 8900723:	de c9                	fmulp  %st,%st(1)
 8900725:	8b 45 0c             	mov    0xc(%ebp),%eax
 8900728:	d9 58 60             	fstps  0x60(%eax)
 890072b:	8b 45 0c             	mov    0xc(%ebp),%eax
 890072e:	d9 40 64             	flds   0x64(%eax)
 8900731:	0f b6 55 c4          	movzbl -0x3c(%ebp),%edx
 8900735:	8b 45 08             	mov    0x8(%ebp),%eax
 8900738:	83 c2 20             	add    $0x20,%edx
 890073b:	d9 44 90 0c          	flds   0xc(%eax,%edx,4)
 890073f:	de c9                	fmulp  %st,%st(1)
 8900741:	8b 45 0c             	mov    0xc(%ebp),%eax
 8900744:	d9 58 64             	fstps  0x64(%eax)
 8900747:	8b 45 0c             	mov    0xc(%ebp),%eax
 890074a:	d9 40 68             	flds   0x68(%eax)
 890074d:	0f b6 55 c4          	movzbl -0x3c(%ebp),%edx
 8900751:	8b 45 08             	mov    0x8(%ebp),%eax
 8900754:	83 c2 20             	add    $0x20,%edx
 8900757:	d9 44 90 0c          	flds   0xc(%eax,%edx,4)
 890075b:	de c9                	fmulp  %st,%st(1)
 890075d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8900760:	d9 58 68             	fstps  0x68(%eax)
 8900763:	0f b6 55 c0          	movzbl -0x40(%ebp),%edx
 8900767:	8b 45 08             	mov    0x8(%ebp),%eax
 890076a:	83 c2 28             	add    $0x28,%edx
 890076d:	8b 54 90 04          	mov    0x4(%eax,%edx,4),%edx
 8900771:	8b 45 0c             	mov    0xc(%ebp),%eax
 8900774:	89 50 34             	mov    %edx,0x34(%eax)
 8900777:	8b 45 0c             	mov    0xc(%ebp),%eax
 890077a:	8b 40 34             	mov    0x34(%eax),%eax
 890077d:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8900780:	db 45 b8             	fildl  -0x48(%ebp)
 8900783:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8900786:	8b 45 08             	mov    0x8(%ebp),%eax
 8900789:	83 c2 04             	add    $0x4,%edx
 890078c:	d9 44 90 0c          	flds   0xc(%eax,%edx,4)
 8900790:	de c9                	fmulp  %st,%st(1)
 8900792:	d9 05 e8 22 e1 08    	flds   0x8e122e8
 8900798:	de c1                	faddp  %st,%st(1)
 890079a:	d9 7d b6             	fnstcw -0x4a(%ebp)
 890079d:	0f b7 45 b6          	movzwl -0x4a(%ebp),%eax
 89007a1:	b4 0c                	mov    $0xc,%ah
 89007a3:	66 89 45 b4          	mov    %ax,-0x4c(%ebp)
 89007a7:	d9 6d b4             	fldcw  -0x4c(%ebp)
 89007aa:	df 7d a8             	fistpll -0x58(%ebp)
 89007ad:	d9 6d b6             	fldcw  -0x4a(%ebp)
 89007b0:	8b 45 a8             	mov    -0x58(%ebp),%eax
 89007b3:	8b 55 ac             	mov    -0x54(%ebp),%edx
 89007b6:	89 c2                	mov    %eax,%edx
 89007b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 89007bb:	89 50 34             	mov    %edx,0x34(%eax)
 89007be:	8b 45 0c             	mov    0xc(%ebp),%eax
 89007c1:	8b 40 34             	mov    0x34(%eax),%eax
 89007c4:	89 45 b8             	mov    %eax,-0x48(%ebp)
 89007c7:	db 45 b8             	fildl  -0x48(%ebp)
 89007ca:	0f b6 55 c4          	movzbl -0x3c(%ebp),%edx
 89007ce:	8b 45 08             	mov    0x8(%ebp),%eax
 89007d1:	83 c2 1c             	add    $0x1c,%edx
 89007d4:	d9 44 90 04          	flds   0x4(%eax,%edx,4)
 89007d8:	de c9                	fmulp  %st,%st(1)
 89007da:	d9 05 e8 22 e1 08    	flds   0x8e122e8
 89007e0:	de c1                	faddp  %st,%st(1)
 89007e2:	d9 6d b4             	fldcw  -0x4c(%ebp)
 89007e5:	df 7d a8             	fistpll -0x58(%ebp)
 89007e8:	d9 6d b6             	fldcw  -0x4a(%ebp)
 89007eb:	8b 45 a8             	mov    -0x58(%ebp),%eax
 89007ee:	8b 55 ac             	mov    -0x54(%ebp),%edx
 89007f1:	89 c2                	mov    %eax,%edx
 89007f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 89007f6:	89 50 34             	mov    %edx,0x34(%eax)
 89007f9:	c7 45 e4 12 00 00 00 	movl   $0x12,-0x1c(%ebp)
 8900800:	80 7d bc 12          	cmpb   $0x12,-0x44(%ebp)
 8900804:	76 04                	jbe    890080a <_ZNK15upgrade_table_t16get_upgrade_infoEP14upgrade_info_thhh18ENUM_EQUIPMENTTYPE+0x3d4>
 8900806:	c6 45 bc 12          	movb   $0x12,-0x44(%ebp)
 890080a:	0f b6 45 bc          	movzbl -0x44(%ebp),%eax
 890080e:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8900811:	8b 45 08             	mov    0x8(%ebp),%eax
 8900814:	8d 88 9c 04 00 00    	lea    0x49c(%eax),%ecx
 890081a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 890081d:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8900820:	89 54 24 08          	mov    %edx,0x8(%esp)
 8900824:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8900828:	89 04 24             	mov    %eax,(%esp)
 890082b:	e8 5a d7 01 00       	call   891df8a <_ZNKSt3mapIifSt4lessIiESaISt4pairIKifEEE4findERS3_>
 8900830:	83 ec 04             	sub    $0x4,%esp
 8900833:	8b 45 08             	mov    0x8(%ebp),%eax
 8900836:	8d 90 9c 04 00 00    	lea    0x49c(%eax),%edx
 890083c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 890083f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8900843:	89 04 24             	mov    %eax,(%esp)
 8900846:	e8 6b d7 01 00       	call   891dfb6 <_ZNKSt3mapIifSt4lessIiESaISt4pairIKifEEE3endEv>
 890084b:	83 ec 04             	sub    $0x4,%esp
 890084e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8900851:	89 44 24 04          	mov    %eax,0x4(%esp)
 8900855:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8900858:	89 04 24             	mov    %eax,(%esp)
 890085b:	e8 7c d7 01 00       	call   891dfdc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKifEEneERKS3_>
 8900860:	84 c0                	test   %al,%al
 8900862:	74 44                	je     89008a8 <_ZNK15upgrade_table_t16get_upgrade_infoEP14upgrade_info_thhh18ENUM_EQUIPMENTTYPE+0x472>
 8900864:	8b 45 0c             	mov    0xc(%ebp),%eax
 8900867:	8b 40 34             	mov    0x34(%eax),%eax
 890086a:	89 45 b8             	mov    %eax,-0x48(%ebp)
 890086d:	db 45 b8             	fildl  -0x48(%ebp)
 8900870:	d9 5d a4             	fstps  -0x5c(%ebp)
 8900873:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8900876:	89 04 24             	mov    %eax,(%esp)
 8900879:	e8 72 d7 01 00       	call   891dff0 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKifEEptEv>
 890087e:	d9 40 04             	flds   0x4(%eax)
 8900881:	d8 4d a4             	fmuls  -0x5c(%ebp)
 8900884:	d9 7d b6             	fnstcw -0x4a(%ebp)
 8900887:	0f b7 45 b6          	movzwl -0x4a(%ebp),%eax
 890088b:	b4 0c                	mov    $0xc,%ah
 890088d:	66 89 45 b4          	mov    %ax,-0x4c(%ebp)
 8900891:	d9 6d b4             	fldcw  -0x4c(%ebp)
 8900894:	df 7d a8             	fistpll -0x58(%ebp)
 8900897:	d9 6d b6             	fldcw  -0x4a(%ebp)
 890089a:	8b 45 a8             	mov    -0x58(%ebp),%eax
 890089d:	8b 55 ac             	mov    -0x54(%ebp),%edx
 89008a0:	89 c2                	mov    %eax,%edx
 89008a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 89008a5:	89 50 34             	mov    %edx,0x34(%eax)
 89008a8:	b8 01 00 00 00       	mov    $0x1,%eax
 89008ad:	8d 65 f4             	lea    -0xc(%ebp),%esp
 89008b0:	83 c4 00             	add    $0x0,%esp
 89008b3:	5b                   	pop    %ebx
 89008b4:	5e                   	pop    %esi
 89008b5:	5f                   	pop    %edi
 89008b6:	5d                   	pop    %ebp
 89008b7:	c3                   	ret

```

```c
// upgrade_table_t::get_upgrade_info @ 0x8900436

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* upgrade_table_t::get_upgrade_info(upgrade_info_t*, unsigned char, unsigned char, unsigned char,
   ENUM_EQUIPMENTTYPE) const */

undefined4 __thiscall
upgrade_table_t::get_upgrade_info
          (upgrade_table_t *this,float *param_1,byte param_2,byte param_3,byte param_4,int param_6)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  byte bVar8;
  float local_5c;
  byte local_48;
  _Rb_tree_const_iterator<std::pair<int_const,float>> local_30 [4];
  uint local_2c;
  map<int,float,std::less<int>,std::allocator<std::pair<int_const,float>>> local_28 [4];
  float local_24;
  undefined4 local_20;
  
  bVar8 = 0;
  local_48 = param_4;
  uVar3 = std::vector<upgrade_info_t,std::allocator<upgrade_info_t>>::size
                    ((vector<upgrade_info_t,std::allocator<upgrade_info_t>> *)this);
  if (param_4 < uVar3) {
    if (param_2 < 6) {
      if (param_6 < 0x16) {
        if (param_6 < 10) {
          uVar4 = 0;
        }
        else if (param_3 < 100) {
          local_24 = get_upgrade_info(upgrade_info_t*,unsigned_char,unsigned_char,unsigned_char,ENUM_EQUIPMENTTYPE)
                     ::two * get_upgrade_info(upgrade_info_t*,unsigned_char,unsigned_char,unsigned_char,ENUM_EQUIPMENTTYPE)
                             ::pointFive;
          pfVar5 = (float *)std::vector<upgrade_info_t,std::allocator<upgrade_info_t>>::at
                                      ((vector<upgrade_info_t,std::allocator<upgrade_info_t>> *)this
                                       ,(uint)param_4);
          pfVar7 = param_1;
          for (iVar6 = 0x1b; iVar6 != 0; iVar6 = iVar6 + -1) {
            *pfVar7 = *pfVar5;
            pfVar5 = pfVar5 + (uint)bVar8 * -2 + 1;
            pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
          }
          *param_1 = *(float *)(this + (param_2 + 0x20) * 4 + 0xc) *
                     *param_1 * ((float)param_3 / *(float *)(this + 0xc) + local_24);
          param_1[1] = *(float *)(this + (param_2 + 0x20) * 4 + 0xc) *
                       param_1[1] * ((float)param_3 / *(float *)(this + 0x10) + local_24);
          param_1[2] = *(float *)(this + (param_2 + 0x20) * 4 + 0xc) *
                       param_1[2] * ((float)param_3 / *(float *)(this + 0x14) + local_24);
          param_1[3] = *(float *)(this + (param_2 + 0x20) * 4 + 0xc) *
                       param_1[3] * ((float)param_3 / *(float *)(this + 0x18) + local_24);
          param_1[4] = *(float *)(this + (param_2 + 0x20) * 4 + 0xc) * param_1[4];
          param_1[5] = *(float *)(this + (param_2 + 0x20) * 4 + 0xc) * param_1[5];
          param_1[6] = *(float *)(this + (param_2 + 0x20) * 4 + 0xc) * param_1[6];
          param_1[7] = *(float *)(this + (param_2 + 0x20) * 4 + 0xc) * param_1[7];
          param_1[0x13] =
               *(float *)(this + (param_2 + 0x20) * 4 + 0xc) *
               param_1[0x13] * ((float)param_3 / *(float *)(this + 0xc) + local_24);
          param_1[0x14] =
               *(float *)(this + (param_2 + 0x20) * 4 + 0xc) *
               param_1[0x14] * ((float)param_3 / *(float *)(this + 0x10) + local_24);
          param_1[0x15] =
               *(float *)(this + (param_2 + 0x20) * 4 + 0xc) *
               param_1[0x15] * ((float)param_3 / *(float *)(this + 0x14) + local_24);
          param_1[0x16] =
               *(float *)(this + (param_2 + 0x20) * 4 + 0xc) *
               param_1[0x16] * ((float)param_3 / *(float *)(this + 0x18) + local_24);
          param_1[0x17] = *(float *)(this + (param_2 + 0x20) * 4 + 0xc) * param_1[0x17];
          param_1[0x18] = *(float *)(this + (param_2 + 0x20) * 4 + 0xc) * param_1[0x18];
          param_1[0x19] = *(float *)(this + (param_2 + 0x20) * 4 + 0xc) * param_1[0x19];
          param_1[0x1a] = *(float *)(this + (param_2 + 0x20) * 4 + 0xc) * param_1[0x1a];
          param_1[0xd] = *(float *)(this + (param_3 + 0x28) * 4 + 4);
          local_5c = (float)(longlong)
                            ROUND(_DAT_08e122e8 +
                                  *(float *)(this + (param_6 + 4) * 4 + 0xc) *
                                  (float)(int)param_1[0xd]);
          param_1[0xd] = local_5c;
          local_5c = (float)(longlong)
                            ROUND(_DAT_08e122e8 +
                                  *(float *)(this + (param_2 + 0x1c) * 4 + 4) *
                                  (float)(int)param_1[0xd]);
          param_1[0xd] = local_5c;
          local_20 = 0x12;
          if (0x12 < param_4) {
            local_48 = 0x12;
          }
          local_2c = (uint)local_48;
          std::map<int,float,std::less<int>,std::allocator<std::pair<int_const,float>>>::find
                    ((int *)local_30);
          std::map<int,float,std::less<int>,std::allocator<std::pair<int_const,float>>>::end
                    (local_28);
          cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,float>>::operator!=
                            (local_30,(_Rb_tree_const_iterator *)local_28);
          if (cVar2 != '\0') {
            fVar1 = param_1[0xd];
            iVar6 = std::_Rb_tree_const_iterator<std::pair<int_const,float>>::operator->(local_30);
            local_5c = (float)(longlong)ROUND(*(float *)(iVar6 + 4) * (float)(int)fVar1);
            param_1[0xd] = local_5c;
          }
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## upgrade_table_t

```asm
// === 089000ca upgrade_table_t::upgrade_table_t  [0x089000ca-0x89003b3] ===
 89000ca:	55                   	push   %ebp
 89000cb:	89 e5                	mov    %esp,%ebp
 89000cd:	56                   	push   %esi
 89000ce:	53                   	push   %ebx
 89000cf:	83 ec 40             	sub    $0x40,%esp
 89000d2:	8b 45 08             	mov    0x8(%ebp),%eax
 89000d5:	89 04 24             	mov    %eax,(%esp)
 89000d8:	e8 ed dd 01 00       	call   891deca <_ZNSt6vectorI14upgrade_info_tSaIS0_EEC1Ev>
 89000dd:	8b 45 08             	mov    0x8(%ebp),%eax
 89000e0:	05 34 04 00 00       	add    $0x434,%eax
 89000e5:	89 04 24             	mov    %eax,(%esp)
 89000e8:	e8 f3 a7 01 00       	call   891a8e0 <_ZN31ST3rdChronicleDestructionResultC1Ev>
 89000ed:	8b 45 08             	mov    0x8(%ebp),%eax
 89000f0:	05 9c 04 00 00       	add    $0x49c,%eax
 89000f5:	89 04 24             	mov    %eax,(%esp)
 89000f8:	e8 e1 dd 01 00       	call   891dede <_ZNSt3mapIifSt4lessIiESaISt4pairIKifEEEC1Ev>
 89000fd:	8d 45 d9             	lea    -0x27(%ebp),%eax
 8900100:	89 04 24             	mov    %eax,(%esp)
 8900103:	e8 ea dd 01 00       	call   891def2 <_ZNSaISt4pairIKiN15upgrade_table_t16MachineFrameInfoEEEC1Ev>
 8900108:	8b 45 08             	mov    0x8(%ebp),%eax
 890010b:	8d 90 c4 04 00 00    	lea    0x4c4(%eax),%edx
 8900111:	8d 45 d9             	lea    -0x27(%ebp),%eax
 8900114:	89 44 24 10          	mov    %eax,0x10(%esp)
 8900118:	8d 45 da             	lea    -0x26(%ebp),%eax
 890011b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 890011f:	8d 45 db             	lea    -0x25(%ebp),%eax
 8900122:	89 44 24 08          	mov    %eax,0x8(%esp)
 8900126:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 890012d:	00 
 890012e:	89 14 24             	mov    %edx,(%esp)
 8900131:	e8 e4 dd 01 00       	call   891df1a <_ZNSt13unordered_mapIiN15upgrade_table_t16MachineFrameInfoESt4hashIiESt8equal_toIiESaISt4pairIKiS1_EEEC1EjRKS3_RKS5_RKS9_>
 8900136:	eb 18                	jmp    8900150 <_ZN15upgrade_table_tC1Ev+0x86>
 8900138:	89 d3                	mov    %edx,%ebx
 890013a:	89 c6                	mov    %eax,%esi
 890013c:	8d 45 d9             	lea    -0x27(%ebp),%eax
 890013f:	89 04 24             	mov    %eax,(%esp)
 8900142:	e8 bf dd 01 00       	call   891df06 <_ZNSaISt4pairIKiN15upgrade_table_t16MachineFrameInfoEEED1Ev>
 8900147:	89 f0                	mov    %esi,%eax
 8900149:	89 da                	mov    %ebx,%edx
 890014b:	e9 15 02 00 00       	jmp    8900365 <_ZN15upgrade_table_tC1Ev+0x29b>
 8900150:	8d 45 d9             	lea    -0x27(%ebp),%eax
 8900153:	89 04 24             	mov    %eax,(%esp)
 8900156:	e8 ab dd 01 00       	call   891df06 <_ZNSaISt4pairIKiN15upgrade_table_t16MachineFrameInfoEEED1Ev>
 890015b:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8900162:	eb 13                	jmp    8900177 <_ZN15upgrade_table_tC1Ev+0xad>
 8900164:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8900167:	8b 45 08             	mov    0x8(%ebp),%eax
 890016a:	b9 00 00 80 3f       	mov    $0x3f800000,%ecx
 890016f:	89 4c 90 0c          	mov    %ecx,0xc(%eax,%edx,4)
 8900173:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 8900177:	83 7d dc 03          	cmpl   $0x3,-0x24(%ebp)
 890017b:	0f 9e c0             	setle  %al
 890017e:	84 c0                	test   %al,%al
 8900180:	75 e2                	jne    8900164 <_ZN15upgrade_table_tC1Ev+0x9a>
 8900182:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8900189:	eb 16                	jmp    89001a1 <_ZN15upgrade_table_tC1Ev+0xd7>
 890018b:	8b 55 e0             	mov    -0x20(%ebp),%edx
 890018e:	8b 45 08             	mov    0x8(%ebp),%eax
 8900191:	8d 4a 04             	lea    0x4(%edx),%ecx
 8900194:	ba 00 00 80 3f       	mov    $0x3f800000,%edx
 8900199:	89 54 88 0c          	mov    %edx,0xc(%eax,%ecx,4)
 890019d:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 89001a1:	83 7d e0 15          	cmpl   $0x15,-0x20(%ebp)
 89001a5:	0f 9e c0             	setle  %al
 89001a8:	84 c0                	test   %al,%al
 89001aa:	75 df                	jne    890018b <_ZN15upgrade_table_tC1Ev+0xc1>
 89001ac:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 89001b3:	eb 28                	jmp    89001dd <_ZN15upgrade_table_tC1Ev+0x113>
 89001b5:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 89001b8:	8b 45 08             	mov    0x8(%ebp),%eax
 89001bb:	8d 4a 1c             	lea    0x1c(%edx),%ecx
 89001be:	ba 00 00 80 3f       	mov    $0x3f800000,%edx
 89001c3:	89 54 88 04          	mov    %edx,0x4(%eax,%ecx,4)
 89001c7:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 89001ca:	8b 45 08             	mov    0x8(%ebp),%eax
 89001cd:	8d 4a 20             	lea    0x20(%edx),%ecx
 89001d0:	ba 00 00 80 3f       	mov    $0x3f800000,%edx
 89001d5:	89 54 88 0c          	mov    %edx,0xc(%eax,%ecx,4)
 89001d9:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 89001dd:	83 7d e4 05          	cmpl   $0x5,-0x1c(%ebp)
 89001e1:	0f 9e c0             	setle  %al
 89001e4:	84 c0                	test   %al,%al
 89001e6:	75 cd                	jne    89001b5 <_ZN15upgrade_table_tC1Ev+0xeb>
 89001e8:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 89001ef:	eb 15                	jmp    8900206 <_ZN15upgrade_table_tC1Ev+0x13c>
 89001f1:	8b 55 e8             	mov    -0x18(%ebp),%edx
 89001f4:	8b 45 08             	mov    0x8(%ebp),%eax
 89001f7:	83 c2 28             	add    $0x28,%edx
 89001fa:	c7 44 90 04 01 00 00 	movl   $0x1,0x4(%eax,%edx,4)
 8900201:	00 
 8900202:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8900206:	83 7d e8 63          	cmpl   $0x63,-0x18(%ebp)
 890020a:	0f 9e c0             	setle  %al
 890020d:	84 c0                	test   %al,%al
 890020f:	75 e0                	jne    89001f1 <_ZN15upgrade_table_tC1Ev+0x127>
 8900211:	8b 45 08             	mov    0x8(%ebp),%eax
 8900214:	c7 80 34 02 00 00 00 	movl   $0x0,0x234(%eax)
 890021b:	00 00 00 
 890021e:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8900225:	eb 19                	jmp    8900240 <_ZN15upgrade_table_tC1Ev+0x176>
 8900227:	8b 55 ec             	mov    -0x14(%ebp),%edx
 890022a:	8b 45 08             	mov    0x8(%ebp),%eax
 890022d:	8d 8a 9c 00 00 00    	lea    0x9c(%edx),%ecx
 8900233:	ba 00 00 80 3f       	mov    $0x3f800000,%edx
 8900238:	89 54 88 04          	mov    %edx,0x4(%eax,%ecx,4)
 890023c:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8900240:	83 7d ec 63          	cmpl   $0x63,-0x14(%ebp)
 8900244:	0f 9e c0             	setle  %al
 8900247:	84 c0                	test   %al,%al
 8900249:	75 dc                	jne    8900227 <_ZN15upgrade_table_tC1Ev+0x15d>
 890024b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8900252:	eb 2c                	jmp    8900280 <_ZN15upgrade_table_tC1Ev+0x1b6>
 8900254:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8900257:	8b 45 08             	mov    0x8(%ebp),%eax
 890025a:	81 c2 00 01 00 00    	add    $0x100,%edx
 8900260:	c7 44 90 04 ff ff ff 	movl   $0xffffffff,0x4(%eax,%edx,4)
 8900267:	ff 
 8900268:	8b 55 f0             	mov    -0x10(%ebp),%edx
 890026b:	8b 45 08             	mov    0x8(%ebp),%eax
 890026e:	81 c2 04 01 00 00    	add    $0x104,%edx
 8900274:	c7 44 90 0c ff ff ff 	movl   $0xffffffff,0xc(%eax,%edx,4)
 890027b:	ff 
 890027c:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8900280:	83 7d f0 05          	cmpl   $0x5,-0x10(%ebp)
 8900284:	0f 9e c0             	setle  %al
 8900287:	84 c0                	test   %al,%al
 8900289:	75 c9                	jne    8900254 <_ZN15upgrade_table_tC1Ev+0x18a>
 890028b:	8b 45 08             	mov    0x8(%ebp),%eax
 890028e:	c7 80 38 02 00 00 ff 	movl   $0xffffffff,0x238(%eax)
 8900295:	ff ff ff 
 8900298:	8b 45 08             	mov    0x8(%ebp),%eax
 890029b:	c7 80 3c 02 00 00 00 	movl   $0x0,0x23c(%eax)
 89002a2:	00 00 00 
 89002a5:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 89002ac:	eb 2c                	jmp    89002da <_ZN15upgrade_table_tC1Ev+0x210>
 89002ae:	8b 55 f4             	mov    -0xc(%ebp),%edx
 89002b1:	8b 45 08             	mov    0x8(%ebp),%eax
 89002b4:	8d 8a 90 00 00 00    	lea    0x90(%edx),%ecx
 89002ba:	ba 00 00 00 00       	mov    $0x0,%edx
 89002bf:	89 14 88             	mov    %edx,(%eax,%ecx,4)
 89002c2:	8b 55 f4             	mov    -0xc(%ebp),%edx
 89002c5:	8b 45 08             	mov    0x8(%ebp),%eax
 89002c8:	81 c2 94 00 00 00    	add    $0x94,%edx
 89002ce:	c7 44 90 0c 00 00 00 	movl   $0x0,0xc(%eax,%edx,4)
 89002d5:	00 
 89002d6:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 89002da:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 89002de:	0f 9e c0             	setle  %al
 89002e1:	84 c0                	test   %al,%al
 89002e3:	75 c9                	jne    89002ae <_ZN15upgrade_table_tC1Ev+0x1e4>
 89002e5:	8b 45 08             	mov    0x8(%ebp),%eax
 89002e8:	c7 80 58 02 00 00 00 	movl   $0x0,0x258(%eax)
 89002ef:	00 00 00 
 89002f2:	8b 45 08             	mov    0x8(%ebp),%eax
 89002f5:	05 9c 04 00 00       	add    $0x49c,%eax
 89002fa:	89 04 24             	mov    %eax,(%esp)
 89002fd:	e8 48 dc 01 00       	call   891df4a <_ZNSt3mapIifSt4lessIiESaISt4pairIKifEEE5clearEv>
 8900302:	8b 45 08             	mov    0x8(%ebp),%eax
 8900305:	05 c4 04 00 00       	add    $0x4c4,%eax
 890030a:	89 04 24             	mov    %eax,(%esp)
 890030d:	e8 b6 b8 c4 ff       	call   854bbc8 <_ZNSt10_HashtableIiSt4pairIKiN15upgrade_table_t16MachineFrameInfoEESaIS4_ESt10_Select1stIS4_ESt8equal_toIiESt4hashIiENSt8__detail18_Mod_range_hashingENSC_20_Default_ranged_hashENSC_20_Prime_rehash_policyELb0ELb0ELb1EE5clearEv>
 8900312:	8b 45 08             	mov    0x8(%ebp),%eax
 8900315:	c7 80 b4 04 00 00 00 	movl   $0x0,0x4b4(%eax)
 890031c:	00 00 00 
 890031f:	8b 45 08             	mov    0x8(%ebp),%eax
 8900322:	c7 80 b8 04 00 00 00 	movl   $0x0,0x4b8(%eax)
 8900329:	00 00 00 
 890032c:	8b 45 08             	mov    0x8(%ebp),%eax
 890032f:	c7 80 bc 04 00 00 00 	movl   $0x0,0x4bc(%eax)
 8900336:	00 00 00 
 8900339:	8b 45 08             	mov    0x8(%ebp),%eax
 890033c:	c7 80 c0 04 00 00 00 	movl   $0x0,0x4c0(%eax)
 8900343:	00 00 00 
 8900346:	83 c4 40             	add    $0x40,%esp
 8900349:	5b                   	pop    %ebx
 890034a:	5e                   	pop    %esi
 890034b:	5d                   	pop    %ebp
 890034c:	c3                   	ret
 890034d:	89 d3                	mov    %edx,%ebx
 890034f:	89 c6                	mov    %eax,%esi
 8900351:	8b 45 08             	mov    0x8(%ebp),%eax
 8900354:	05 c4 04 00 00       	add    $0x4c4,%eax
 8900359:	89 04 24             	mov    %eax,(%esp)
 890035c:	e8 81 b0 c4 ff       	call   854b3e2 <_ZNSt13unordered_mapIiN15upgrade_table_t16MachineFrameInfoESt4hashIiESt8equal_toIiESaISt4pairIKiS1_EEED1Ev>
 8900361:	89 f0                	mov    %esi,%eax
 8900363:	89 da                	mov    %ebx,%edx
 8900365:	89 d3                	mov    %edx,%ebx
 8900367:	89 c6                	mov    %eax,%esi
 8900369:	8b 45 08             	mov    0x8(%ebp),%eax
 890036c:	05 9c 04 00 00       	add    $0x49c,%eax
 8900371:	89 04 24             	mov    %eax,(%esp)
 8900374:	e8 41 b0 c4 ff       	call   854b3ba <_ZNSt3mapIifSt4lessIiESaISt4pairIKifEEED1Ev>
 8900379:	89 f0                	mov    %esi,%eax
 890037b:	89 da                	mov    %ebx,%edx
 890037d:	eb 00                	jmp    890037f <_ZN15upgrade_table_tC1Ev+0x2b5>
 890037f:	89 d3                	mov    %edx,%ebx
 8900381:	89 c6                	mov    %eax,%esi
 8900383:	8b 45 08             	mov    0x8(%ebp),%eax
 8900386:	05 34 04 00 00       	add    $0x434,%eax
 890038b:	89 04 24             	mov    %eax,(%esp)
 890038e:	e8 11 b0 c4 ff       	call   854b3a4 <_ZN31ST3rdChronicleDestructionResultD1Ev>
 8900393:	89 f0                	mov    %esi,%eax
 8900395:	89 da                	mov    %ebx,%edx
 8900397:	eb 00                	jmp    8900399 <_ZN15upgrade_table_tC1Ev+0x2cf>
 8900399:	89 d3                	mov    %edx,%ebx
 890039b:	89 c6                	mov    %eax,%esi
 890039d:	8b 45 08             	mov    0x8(%ebp),%eax
 89003a0:	89 04 24             	mov    %eax,(%esp)
 89003a3:	e8 7c b2 c4 ff       	call   854b624 <_ZNSt6vectorI14upgrade_info_tSaIS0_EED1Ev>
 89003a8:	89 f0                	mov    %esi,%eax
 89003aa:	89 da                	mov    %ebx,%edx
 89003ac:	89 04 24             	mov    %eax,(%esp)
 89003af:	e8 9c 33 1e 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// upgrade_table_t::upgrade_table_t @ 0x89000ca

/* upgrade_table_t::upgrade_table_t() */

void __thiscall upgrade_table_t::upgrade_table_t(upgrade_table_t *this)

{
  allocator<std::pair<int_const,upgrade_table_t::MachineFrameInfo>> local_2b;
  allocator local_2a;
  equal_to local_29;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  std::vector<upgrade_info_t,std::allocator<upgrade_info_t>>::vector
            ((vector<upgrade_info_t,std::allocator<upgrade_info_t>> *)this);
                    /* try { // try from 089000e8 to 089000ec has its CatchHandler @ 08900399 */
  ST3rdChronicleDestructionResult::ST3rdChronicleDestructionResult
            ((ST3rdChronicleDestructionResult *)(this + 0x434));
                    /* try { // try from 089000f8 to 089000fc has its CatchHandler @ 0890037f */
  std::map<int,float,std::less<int>,std::allocator<std::pair<int_const,float>>>::map
            ((map<int,float,std::less<int>,std::allocator<std::pair<int_const,float>>> *)
             (this + 0x49c));
  std::allocator<std::pair<int_const,upgrade_table_t::MachineFrameInfo>>::allocator();
                    /* try { // try from 08900131 to 08900135 has its CatchHandler @ 08900138 */
  std::
  unordered_map<int,upgrade_table_t::MachineFrameInfo,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,upgrade_table_t::MachineFrameInfo>>>
  ::unordered_map((uint)(this + 0x4c4),(hash *)0xa,&local_29,&local_2a);
  std::allocator<std::pair<int_const,upgrade_table_t::MachineFrameInfo>>::~allocator(&local_2b);
  for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
    *(undefined4 *)(this + local_28 * 4 + 0xc) = 0x3f800000;
  }
  for (local_24 = 0; local_24 < 0x16; local_24 = local_24 + 1) {
    *(undefined4 *)(this + (local_24 + 4) * 4 + 0xc) = 0x3f800000;
  }
  for (local_20 = 0; local_20 < 6; local_20 = local_20 + 1) {
    *(undefined4 *)(this + (local_20 + 0x1c) * 4 + 4) = 0x3f800000;
    *(undefined4 *)(this + (local_20 + 0x20) * 4 + 0xc) = 0x3f800000;
  }
  for (local_1c = 0; local_1c < 100; local_1c = local_1c + 1) {
    *(undefined4 *)(this + (local_1c + 0x28) * 4 + 4) = 1;
  }
  *(undefined4 *)(this + 0x234) = 0;
  for (local_18 = 0; local_18 < 100; local_18 = local_18 + 1) {
    *(undefined4 *)(this + (local_18 + 0x9c) * 4 + 4) = 0x3f800000;
  }
  for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
    *(undefined4 *)(this + (local_14 + 0x100) * 4 + 4) = 0xffffffff;
    *(undefined4 *)(this + (local_14 + 0x104) * 4 + 0xc) = 0xffffffff;
  }
  *(undefined4 *)(this + 0x238) = 0xffffffff;
  *(undefined4 *)(this + 0x23c) = 0;
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    *(undefined4 *)(this + (local_10 + 0x90) * 4) = 0;
    *(undefined4 *)(this + (local_10 + 0x94) * 4 + 0xc) = 0;
  }
  *(undefined4 *)(this + 600) = 0;
                    /* try { // try from 089002fd to 08900311 has its CatchHandler @ 0890034d */
  std::map<int,float,std::less<int>,std::allocator<std::pair<int_const,float>>>::clear
            ((map<int,float,std::less<int>,std::allocator<std::pair<int_const,float>>> *)
             (this + 0x49c));
  std::
  _Hashtable<int,std::pair<int_const,upgrade_table_t::MachineFrameInfo>,std::allocator<std::pair<int_const,upgrade_table_t::MachineFrameInfo>>,std::_Select1st<std::pair<int_const,upgrade_table_t::MachineFrameInfo>>,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,false,false,true>
  ::clear((_Hashtable<int,std::pair<int_const,upgrade_table_t::MachineFrameInfo>,std::allocator<std::pair<int_const,upgrade_table_t::MachineFrameInfo>>,std::_Select1st<std::pair<int_const,upgrade_table_t::MachineFrameInfo>>,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,false,false,true>
           *)(this + 0x4c4));
  *(undefined4 *)(this + 0x4b4) = 0;
  *(undefined4 *)(this + 0x4b8) = 0;
  *(undefined4 *)(this + 0x4bc) = 0;
  *(undefined4 *)(this + 0x4c0) = 0;
  return;
}

```

