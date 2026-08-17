# TaoCrypt__Portable

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 11

---

## Add

```asm
// === 08759400 TaoCrypt::Portable::Add  [0x08759400-0x875948f] ===
 8759400:	55                   	push   %ebp
 8759401:	31 c0                	xor    %eax,%eax
 8759403:	89 e5                	mov    %esp,%ebp
 8759405:	57                   	push   %edi
 8759406:	56                   	push   %esi
 8759407:	31 f6                	xor    %esi,%esi
 8759409:	83 ec 20             	sub    $0x20,%esp
 875940c:	8b 55 14             	mov    0x14(%ebp),%edx
 875940f:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8759416:	85 d2                	test   %edx,%edx
 8759418:	75 09                	jne    8759423 <_ZN8TaoCrypt8Portable3AddEPjPKjS3_j+0x23>
 875941a:	eb 6b                	jmp    8759487 <_ZN8TaoCrypt8Portable3AddEPjPKjS3_j+0x87>
 875941c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8759420:	89 4d e0             	mov    %ecx,-0x20(%ebp)
 8759423:	8b 75 10             	mov    0x10(%ebp),%esi
 8759426:	31 c9                	xor    %ecx,%ecx
 8759428:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875942b:	8b 14 86             	mov    (%esi,%eax,4),%edx
 875942e:	8b 34 87             	mov    (%edi,%eax,4),%esi
 8759431:	31 ff                	xor    %edi,%edi
 8759433:	01 f2                	add    %esi,%edx
 8759435:	8b 75 e0             	mov    -0x20(%ebp),%esi
 8759438:	11 f9                	adc    %edi,%ecx
 875943a:	31 ff                	xor    %edi,%edi
 875943c:	01 f2                	add    %esi,%edx
 875943e:	8b 75 08             	mov    0x8(%ebp),%esi
 8759441:	11 f9                	adc    %edi,%ecx
 8759443:	89 d7                	mov    %edx,%edi
 8759445:	89 4d f4             	mov    %ecx,-0xc(%ebp)
 8759448:	31 c9                	xor    %ecx,%ecx
 875944a:	89 55 f0             	mov    %edx,-0x10(%ebp)
 875944d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8759450:	89 3c 86             	mov    %edi,(%esi,%eax,4)
 8759453:	8b 7d 10             	mov    0x10(%ebp),%edi
 8759456:	89 55 d8             	mov    %edx,-0x28(%ebp)
 8759459:	8b 54 87 04          	mov    0x4(%edi,%eax,4),%edx
 875945d:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8759460:	8b 74 87 04          	mov    0x4(%edi,%eax,4),%esi
 8759464:	31 ff                	xor    %edi,%edi
 8759466:	01 f2                	add    %esi,%edx
 8759468:	8b 75 d8             	mov    -0x28(%ebp),%esi
 875946b:	11 f9                	adc    %edi,%ecx
 875946d:	31 ff                	xor    %edi,%edi
 875946f:	01 f2                	add    %esi,%edx
 8759471:	8b 75 08             	mov    0x8(%ebp),%esi
 8759474:	11 f9                	adc    %edi,%ecx
 8759476:	89 4d d8             	mov    %ecx,-0x28(%ebp)
 8759479:	89 54 86 04          	mov    %edx,0x4(%esi,%eax,4)
 875947d:	83 c0 02             	add    $0x2,%eax
 8759480:	39 45 14             	cmp    %eax,0x14(%ebp)
 8759483:	77 9b                	ja     8759420 <_ZN8TaoCrypt8Portable3AddEPjPKjS3_j+0x20>
 8759485:	89 ce                	mov    %ecx,%esi
 8759487:	83 c4 20             	add    $0x20,%esp
 875948a:	89 f0                	mov    %esi,%eax
 875948c:	5e                   	pop    %esi
 875948d:	5f                   	pop    %edi
 875948e:	5d                   	pop    %ebp
 875948f:	c3                   	ret

```

```c
// TaoCrypt::Portable::Add @ 0x8759400

/* TaoCrypt::Portable::Add(unsigned int*, unsigned int const*, unsigned int const*, unsigned int) */

uint TaoCrypt::Portable::Add(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_24;
  
  uVar1 = 0;
  uVar4 = 0;
  local_24 = 0;
  if (param_4 != 0) {
    do {
      uVar4 = param_3[uVar1] + param_2[uVar1];
      uVar2 = (uint)CARRY4(param_3[uVar1],param_2[uVar1]) + (uint)CARRY4(uVar4,local_24);
      param_1[uVar1] = uVar4 + local_24;
      uVar3 = param_3[uVar1 + 1] + param_2[uVar1 + 1];
      uVar4 = (uint)CARRY4(param_3[uVar1 + 1],param_2[uVar1 + 1]) + (uint)CARRY4(uVar3,uVar2);
      param_1[uVar1 + 1] = uVar3 + uVar2;
      uVar1 = uVar1 + 2;
      local_24 = uVar4;
    } while (uVar1 < param_4);
  }
  return uVar4;
}

```

---

## Multiply2

```asm
// === 08759530 TaoCrypt::Portable::Multiply2  [0x08759530-0x875965f] ===
 8759530:	55                   	push   %ebp
 8759531:	89 e5                	mov    %esp,%ebp
 8759533:	57                   	push   %edi
 8759534:	56                   	push   %esi
 8759535:	83 ec 48             	sub    $0x48,%esp
 8759538:	8b 45 0c             	mov    0xc(%ebp),%eax
 875953b:	8b 48 04             	mov    0x4(%eax),%ecx
 875953e:	8b 10                	mov    (%eax),%edx
 8759540:	8b 45 10             	mov    0x10(%ebp),%eax
 8759543:	89 ce                	mov    %ecx,%esi
 8759545:	29 d6                	sub    %edx,%esi
 8759547:	89 75 e8             	mov    %esi,-0x18(%ebp)
 875954a:	89 d6                	mov    %edx,%esi
 875954c:	29 ce                	sub    %ecx,%esi
 875954e:	89 75 ec             	mov    %esi,-0x14(%ebp)
 8759551:	8b 75 10             	mov    0x10(%ebp),%esi
 8759554:	89 55 b0             	mov    %edx,-0x50(%ebp)
 8759557:	8b 36                	mov    (%esi),%esi
 8759559:	89 75 b4             	mov    %esi,-0x4c(%ebp)
 875955c:	8b 70 04             	mov    0x4(%eax),%esi
 875955f:	8b 7d b4             	mov    -0x4c(%ebp),%edi
 8759562:	29 f7                	sub    %esi,%edi
 8759564:	89 7d f0             	mov    %edi,-0x10(%ebp)
 8759567:	89 f7                	mov    %esi,%edi
 8759569:	2b 7d b4             	sub    -0x4c(%ebp),%edi
 875956c:	39 d1                	cmp    %edx,%ecx
 875956e:	0f 92 c1             	setb   %cl
 8759571:	0f b6 c9             	movzbl %cl,%ecx
 8759574:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
 8759577:	31 c9                	xor    %ecx,%ecx
 8759579:	39 75 b4             	cmp    %esi,-0x4c(%ebp)
 875957c:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875957f:	89 7d f4             	mov    %edi,-0xc(%ebp)
 8759582:	0f 92 c1             	setb   %cl
 8759585:	21 ce                	and    %ecx,%esi
 8759587:	83 f1 01             	xor    $0x1,%ecx
 875958a:	8d 7e 02             	lea    0x2(%esi),%edi
 875958d:	8b 74 b5 e8          	mov    -0x18(%ebp,%esi,4),%esi
 8759591:	8b 44 bd e8          	mov    -0x18(%ebp,%edi,4),%eax
 8759595:	03 4d d4             	add    -0x2c(%ebp),%ecx
 8759598:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 875959f:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 87595a6:	f7 e6                	mul    %esi
 87595a8:	8b 4c 8d e8          	mov    -0x18(%ebp,%ecx,4),%ecx
 87595ac:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 87595af:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 87595b2:	89 55 c8             	mov    %edx,-0x38(%ebp)
 87595b5:	f7 65 b0             	mull   -0x50(%ebp)
 87595b8:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
 87595bb:	89 d6                	mov    %edx,%esi
 87595bd:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87595c0:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 87595c3:	8b 55 08             	mov    0x8(%ebp),%edx
 87595c6:	89 45 d8             	mov    %eax,-0x28(%ebp)
 87595c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 87595cc:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 87595d3:	89 0a                	mov    %ecx,(%edx)
 87595d5:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87595d8:	8b 78 04             	mov    0x4(%eax),%edi
 87595db:	8b 41 04             	mov    0x4(%ecx),%eax
 87595de:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 87595e1:	f7 e7                	mul    %edi
 87595e3:	31 ff                	xor    %edi,%edi
 87595e5:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87595e8:	89 45 c0             	mov    %eax,-0x40(%ebp)
 87595eb:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87595ee:	89 4d d8             	mov    %ecx,-0x28(%ebp)
 87595f1:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 87595f4:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 87595f7:	89 55 bc             	mov    %edx,-0x44(%ebp)
 87595fa:	31 d2                	xor    %edx,%edx
 87595fc:	01 f0                	add    %esi,%eax
 87595fe:	11 fa                	adc    %edi,%edx
 8759600:	03 45 d8             	add    -0x28(%ebp),%eax
 8759603:	89 4d d8             	mov    %ecx,-0x28(%ebp)
 8759606:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8759609:	13 55 dc             	adc    -0x24(%ebp),%edx
 875960c:	03 45 d8             	add    -0x28(%ebp),%eax
 875960f:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8759616:	13 55 dc             	adc    -0x24(%ebp),%edx
 8759619:	89 41 04             	mov    %eax,0x4(%ecx)
 875961c:	89 55 d8             	mov    %edx,-0x28(%ebp)
 875961f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8759622:	31 d2                	xor    %edx,%edx
 8759624:	01 f0                	add    %esi,%eax
 8759626:	8b 75 c8             	mov    -0x38(%ebp),%esi
 8759629:	11 fa                	adc    %edi,%edx
 875962b:	31 ff                	xor    %edi,%edi
 875962d:	01 f0                	add    %esi,%eax
 875962f:	8b 75 bc             	mov    -0x44(%ebp),%esi
 8759632:	11 fa                	adc    %edi,%edx
 8759634:	31 ff                	xor    %edi,%edi
 8759636:	01 f0                	add    %esi,%eax
 8759638:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875963b:	11 fa                	adc    %edi,%edx
 875963d:	03 45 e0             	add    -0x20(%ebp),%eax
 8759640:	13 55 e4             	adc    -0x1c(%ebp),%edx
 8759643:	31 ff                	xor    %edi,%edi
 8759645:	29 f0                	sub    %esi,%eax
 8759647:	19 fa                	sbb    %edi,%edx
 8759649:	89 55 d8             	mov    %edx,-0x28(%ebp)
 875964c:	89 41 08             	mov    %eax,0x8(%ecx)
 875964f:	89 51 0c             	mov    %edx,0xc(%ecx)
 8759652:	83 c4 48             	add    $0x48,%esp
 8759655:	5e                   	pop    %esi
 8759656:	5f                   	pop    %edi
 8759657:	5d                   	pop    %ebp
 8759658:	c3                   	ret
 8759659:	90                   	nop
 875965a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TaoCrypt::Portable::Multiply2 @ 0x8759530

/* TaoCrypt::Portable::Multiply2(unsigned int*, unsigned int const*, unsigned int const*) */

void TaoCrypt::Portable::Multiply2(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_40;
  uint local_3c;
  uint local_1c [4];
  
  uVar1 = param_2[1];
  uVar4 = *param_2;
  local_1c[0] = uVar1 - uVar4;
  local_1c[1] = uVar4 - uVar1;
  uVar5 = *param_3;
  uVar6 = param_3[1];
  local_1c[2] = uVar5 - uVar6;
  local_1c[3] = uVar6 - uVar5;
  uVar9 = (uint)(uVar1 < uVar4 && uVar5 < uVar6);
  uVar2 = local_1c[uVar9];
  uVar9 = local_1c[uVar9 + 2];
  local_1c[3] = 0;
  local_1c[1] = 0;
  uVar1 = local_1c[(uVar5 < uVar6 ^ 1) + (uint)(uVar1 < uVar4)];
  uVar6 = (uint)((ulonglong)uVar5 * (ulonglong)uVar4 >> 0x20);
  uVar4 = (uint)((ulonglong)uVar5 * (ulonglong)uVar4);
  *param_1 = uVar4;
  local_40 = (uint)((ulonglong)uVar9 * (ulonglong)uVar2);
  lVar3 = (ulonglong)param_3[1] * (ulonglong)param_2[1];
  uVar7 = (uint)((ulonglong)lVar3 >> 0x20);
  uVar5 = uVar4 + uVar6 + local_40;
  uVar8 = (uint)CARRY4(uVar4,uVar6) + (uint)CARRY4(uVar4 + uVar6,local_40) +
          (uint)CARRY4(uVar5,(uint)lVar3);
  param_1[1] = uVar5 + (uint)lVar3;
  uVar4 = uVar8 + uVar6;
  local_3c = (uint)((ulonglong)uVar9 * (ulonglong)uVar2 >> 0x20);
  uVar5 = uVar4 + local_3c;
  lVar3 = lVar3 + CONCAT44((uint)CARRY4(uVar8,uVar6) + (uint)CARRY4(uVar4,local_3c) +
                           (uint)CARRY4(uVar5,uVar7),uVar5 + uVar7);
  uVar4 = (uint)lVar3;
  param_1[2] = uVar4 - uVar1;
  param_1[3] = (int)((ulonglong)lVar3 >> 0x20) - (uint)(uVar4 < uVar1);
  return;
}

```

---

## Multiply2Add

```asm
// === 087596b0 TaoCrypt::Portable::Multiply2Add  [0x087596b0-0x875980f] ===
 87596b0:	55                   	push   %ebp
 87596b1:	89 e5                	mov    %esp,%ebp
 87596b3:	57                   	push   %edi
 87596b4:	56                   	push   %esi
 87596b5:	83 ec 48             	sub    $0x48,%esp
 87596b8:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 87596bb:	8b 7d 10             	mov    0x10(%ebp),%edi
 87596be:	8b 71 04             	mov    0x4(%ecx),%esi
 87596c1:	89 f0                	mov    %esi,%eax
 87596c3:	2b 01                	sub    (%ecx),%eax
 87596c5:	89 45 e8             	mov    %eax,-0x18(%ebp)
 87596c8:	8b 01                	mov    (%ecx),%eax
 87596ca:	29 f0                	sub    %esi,%eax
 87596cc:	89 45 ec             	mov    %eax,-0x14(%ebp)
 87596cf:	8b 45 10             	mov    0x10(%ebp),%eax
 87596d2:	8b 57 04             	mov    0x4(%edi),%edx
 87596d5:	8b 00                	mov    (%eax),%eax
 87596d7:	89 c7                	mov    %eax,%edi
 87596d9:	29 d7                	sub    %edx,%edi
 87596db:	89 7d f0             	mov    %edi,-0x10(%ebp)
 87596de:	89 d7                	mov    %edx,%edi
 87596e0:	29 c7                	sub    %eax,%edi
 87596e2:	89 7d f4             	mov    %edi,-0xc(%ebp)
 87596e5:	3b 31                	cmp    (%ecx),%esi
 87596e7:	89 45 b8             	mov    %eax,-0x48(%ebp)
 87596ea:	0f 92 c0             	setb   %al
 87596ed:	39 55 b8             	cmp    %edx,-0x48(%ebp)
 87596f0:	0f b6 f8             	movzbl %al,%edi
 87596f3:	89 7d d0             	mov    %edi,-0x30(%ebp)
 87596f6:	0f 92 c0             	setb   %al
 87596f9:	0f b6 f8             	movzbl %al,%edi
 87596fc:	8b 45 d0             	mov    -0x30(%ebp),%eax
 87596ff:	21 f8                	and    %edi,%eax
 8759701:	83 f7 01             	xor    $0x1,%edi
 8759704:	8d 70 02             	lea    0x2(%eax),%esi
 8759707:	8b 44 85 e8          	mov    -0x18(%ebp,%eax,4),%eax
 875970b:	f7 64 b5 e8          	mull   -0x18(%ebp,%esi,4)
 875970f:	03 7d d0             	add    -0x30(%ebp),%edi
 8759712:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8759719:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8759720:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8759723:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8759726:	8b 7c bd e8          	mov    -0x18(%ebp,%edi,4),%edi
 875972a:	89 55 cc             	mov    %edx,-0x34(%ebp)
 875972d:	89 55 c8             	mov    %edx,-0x38(%ebp)
 8759730:	f7 21                	mull   (%ecx)
 8759732:	89 7d d0             	mov    %edi,-0x30(%ebp)
 8759735:	31 ff                	xor    %edi,%edi
 8759737:	89 45 e0             	mov    %eax,-0x20(%ebp)
 875973a:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 875973d:	89 55 bc             	mov    %edx,-0x44(%ebp)
 8759740:	8b 55 08             	mov    0x8(%ebp),%edx
 8759743:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8759746:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 875974d:	8b 32                	mov    (%edx),%esi
 875974f:	03 75 e0             	add    -0x20(%ebp),%esi
 8759752:	13 7d e4             	adc    -0x1c(%ebp),%edi
 8759755:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 875975c:	89 32                	mov    %esi,(%edx)
 875975e:	8b 75 10             	mov    0x10(%ebp),%esi
 8759761:	8b 49 04             	mov    0x4(%ecx),%ecx
 8759764:	89 7d b4             	mov    %edi,-0x4c(%ebp)
 8759767:	31 ff                	xor    %edi,%edi
 8759769:	8b 46 04             	mov    0x4(%esi),%eax
 875976c:	8b 75 c0             	mov    -0x40(%ebp),%esi
 875976f:	f7 e1                	mul    %ecx
 8759771:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8759774:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8759777:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 875977a:	31 d2                	xor    %edx,%edx
 875977c:	01 c6                	add    %eax,%esi
 875977e:	11 d7                	adc    %edx,%edi
 8759780:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8759783:	31 c9                	xor    %ecx,%ecx
 8759785:	01 d6                	add    %edx,%esi
 8759787:	8b 55 08             	mov    0x8(%ebp),%edx
 875978a:	11 cf                	adc    %ecx,%edi
 875978c:	03 75 d8             	add    -0x28(%ebp),%esi
 875978f:	13 7d dc             	adc    -0x24(%ebp),%edi
 8759792:	8b 42 04             	mov    0x4(%edx),%eax
 8759795:	31 d2                	xor    %edx,%edx
 8759797:	01 c6                	add    %eax,%esi
 8759799:	8b 45 08             	mov    0x8(%ebp),%eax
 875979c:	11 d7                	adc    %edx,%edi
 875979e:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87597a1:	89 7d b4             	mov    %edi,-0x4c(%ebp)
 87597a4:	31 ff                	xor    %edi,%edi
 87597a6:	89 70 04             	mov    %esi,0x4(%eax)
 87597a9:	8b 75 b4             	mov    -0x4c(%ebp),%esi
 87597ac:	89 55 e0             	mov    %edx,-0x20(%ebp)
 87597af:	8b 55 bc             	mov    -0x44(%ebp),%edx
 87597b2:	03 75 d8             	add    -0x28(%ebp),%esi
 87597b5:	13 7d dc             	adc    -0x24(%ebp),%edi
 87597b8:	31 c9                	xor    %ecx,%ecx
 87597ba:	8b 40 08             	mov    0x8(%eax),%eax
 87597bd:	01 d6                	add    %edx,%esi
 87597bf:	8b 55 c8             	mov    -0x38(%ebp),%edx
 87597c2:	11 cf                	adc    %ecx,%edi
 87597c4:	31 c9                	xor    %ecx,%ecx
 87597c6:	01 d6                	add    %edx,%esi
 87597c8:	11 cf                	adc    %ecx,%edi
 87597ca:	03 75 e0             	add    -0x20(%ebp),%esi
 87597cd:	13 7d e4             	adc    -0x1c(%ebp),%edi
 87597d0:	31 d2                	xor    %edx,%edx
 87597d2:	01 c6                	add    %eax,%esi
 87597d4:	11 d7                	adc    %edx,%edi
 87597d6:	8b 55 d0             	mov    -0x30(%ebp),%edx
 87597d9:	31 c9                	xor    %ecx,%ecx
 87597db:	29 d6                	sub    %edx,%esi
 87597dd:	19 cf                	sbb    %ecx,%edi
 87597df:	89 7d b4             	mov    %edi,-0x4c(%ebp)
 87597e2:	8b 45 08             	mov    0x8(%ebp),%eax
 87597e5:	31 ff                	xor    %edi,%edi
 87597e7:	89 70 08             	mov    %esi,0x8(%eax)
 87597ea:	8b 75 b4             	mov    -0x4c(%ebp),%esi
 87597ed:	8b 40 0c             	mov    0xc(%eax),%eax
 87597f0:	03 75 e0             	add    -0x20(%ebp),%esi
 87597f3:	13 7d e4             	adc    -0x1c(%ebp),%edi
 87597f6:	31 d2                	xor    %edx,%edx
 87597f8:	01 c6                	add    %eax,%esi
 87597fa:	8b 45 08             	mov    0x8(%ebp),%eax
 87597fd:	11 d7                	adc    %edx,%edi
 87597ff:	89 7d b4             	mov    %edi,-0x4c(%ebp)
 8759802:	89 70 0c             	mov    %esi,0xc(%eax)
 8759805:	83 c4 48             	add    $0x48,%esp
 8759808:	89 f8                	mov    %edi,%eax
 875980a:	5e                   	pop    %esi
 875980b:	5f                   	pop    %edi
 875980c:	5d                   	pop    %ebp
 875980d:	c3                   	ret
 875980e:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::Portable::Multiply2Add @ 0x87596b0

/* TaoCrypt::Portable::Multiply2Add(unsigned int*, unsigned int const*, unsigned int const*) */

char TaoCrypt::Portable::Multiply2Add(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_1c [4];
  
  uVar1 = param_2[1];
  local_1c[0] = uVar1 - *param_2;
  local_1c[1] = *param_2 - uVar1;
  uVar4 = param_3[1];
  uVar6 = *param_3;
  local_1c[2] = uVar6 - uVar4;
  local_1c[3] = uVar4 - uVar6;
  uVar3 = (uint)(uVar1 < *param_2 && uVar6 < uVar4);
  uVar5 = (uint)((ulonglong)local_1c[uVar3] * (ulonglong)local_1c[uVar3 + 2] >> 0x20);
  uVar3 = (uint)((ulonglong)local_1c[uVar3] * (ulonglong)local_1c[uVar3 + 2]);
  local_1c[3] = 0;
  local_1c[1] = 0;
  uVar1 = local_1c[(uVar6 < uVar4 ^ 1) + (uint)(uVar1 < *param_2)];
  lVar2 = (ulonglong)uVar6 * (ulonglong)*param_2;
  uVar6 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar11 = (uint)(lVar2 + (ulonglong)*param_1 >> 0x20);
  *param_1 = (uint)(lVar2 + (ulonglong)*param_1);
  uVar7 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[1] >> 0x20);
  uVar4 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[1]);
  uVar8 = (uint)lVar2 + uVar11;
  uVar9 = uVar8 + uVar3;
  uVar10 = uVar9 + uVar4;
  uVar12 = (uint)CARRY4((uint)lVar2,uVar11) + (uint)CARRY4(uVar8,uVar3) + (uint)CARRY4(uVar9,uVar4)
           + (uint)CARRY4(uVar10,param_1[1]);
  param_1[1] = uVar10 + param_1[1];
  uVar3 = uVar12 + uVar4;
  uVar8 = uVar3 + uVar6;
  uVar9 = uVar8 + uVar5;
  uVar10 = uVar9 + uVar7;
  uVar11 = uVar10 + param_1[2];
  uVar6 = ((uint)CARRY4(uVar12,uVar4) + (uint)CARRY4(uVar3,uVar6) + (uint)CARRY4(uVar8,uVar5) +
           (uint)CARRY4(uVar9,uVar7) + (uint)CARRY4(uVar10,param_1[2])) - (uint)(uVar11 < uVar1);
  param_1[2] = uVar11 - uVar1;
  uVar1 = param_1[3];
  uVar4 = uVar6 + uVar7;
  param_1[3] = uVar4 + uVar1;
  return CARRY4(uVar6,uVar7) + CARRY4(uVar4,uVar1);
}

```

---

## Multiply2Bottom

```asm
// === 08759660 TaoCrypt::Portable::Multiply2Bottom  [0x08759660-0x87596af] ===
 8759660:	55                   	push   %ebp
 8759661:	89 e5                	mov    %esp,%ebp
 8759663:	83 ec 10             	sub    $0x10,%esp
 8759666:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8759669:	8b 45 0c             	mov    0xc(%ebp),%eax
 875966c:	8b 7d 10             	mov    0x10(%ebp),%edi
 875966f:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8759672:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8759675:	8b 30                	mov    (%eax),%esi
 8759677:	8b 07                	mov    (%edi),%eax
 8759679:	f7 e6                	mul    %esi
 875967b:	89 d6                	mov    %edx,%esi
 875967d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8759680:	89 01                	mov    %eax,(%ecx)
 8759682:	89 f8                	mov    %edi,%eax
 8759684:	8b 3f                	mov    (%edi),%edi
 8759686:	0f af 7a 04          	imul   0x4(%edx),%edi
 875968a:	8b 50 04             	mov    0x4(%eax),%edx
 875968d:	8d 34 37             	lea    (%edi,%esi,1),%esi
 8759690:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8759693:	0f af 17             	imul   (%edi),%edx
 8759696:	8d 14 16             	lea    (%esi,%edx,1),%edx
 8759699:	89 51 04             	mov    %edx,0x4(%ecx)
 875969c:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875969f:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87596a2:	89 ec                	mov    %ebp,%esp
 87596a4:	5d                   	pop    %ebp
 87596a5:	c3                   	ret
 87596a6:	8d 76 00             	lea    0x0(%esi),%esi
 87596a9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::Portable::Multiply2Bottom @ 0x8759660

/* TaoCrypt::Portable::Multiply2Bottom(unsigned int*, unsigned int const*, unsigned int const*) */

void TaoCrypt::Portable::Multiply2Bottom(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  *param_1 = (uint)((ulonglong)uVar2 * (ulonglong)uVar1);
  param_1[1] = *param_3 * param_2[1] + (int)((ulonglong)uVar2 * (ulonglong)uVar1 >> 0x20) +
               param_3[1] * *param_2;
  return;
}

```

---

## Multiply4

```asm
// === 08759810 TaoCrypt::Portable::Multiply4  [0x08759810-0x8759b8f] ===
 8759810:	55                   	push   %ebp
 8759811:	89 e5                	mov    %esp,%ebp
 8759813:	57                   	push   %edi
 8759814:	31 ff                	xor    %edi,%edi
 8759816:	56                   	push   %esi
 8759817:	83 ec 28             	sub    $0x28,%esp
 875981a:	8b 4d 10             	mov    0x10(%ebp),%ecx
 875981d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8759820:	8b 30                	mov    (%eax),%esi
 8759822:	8b 01                	mov    (%ecx),%eax
 8759824:	f7 e6                	mul    %esi
 8759826:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 8759829:	89 c6                	mov    %eax,%esi
 875982b:	8b 55 0c             	mov    0xc(%ebp),%edx
 875982e:	8b 45 08             	mov    0x8(%ebp),%eax
 8759831:	89 30                	mov    %esi,(%eax)
 8759833:	8b 32                	mov    (%edx),%esi
 8759835:	8b 41 04             	mov    0x4(%ecx),%eax
 8759838:	f7 e6                	mul    %esi
 875983a:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875983d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8759840:	01 75 f0             	add    %esi,-0x10(%ebp)
 8759843:	8b 75 f0             	mov    -0x10(%ebp),%esi
 8759846:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8759849:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875984c:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875984f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8759852:	8b 7f 04             	mov    0x4(%edi),%edi
 8759855:	89 d1                	mov    %edx,%ecx
 8759857:	89 f8                	mov    %edi,%eax
 8759859:	8b 7d 10             	mov    0x10(%ebp),%edi
 875985c:	f7 27                	mull   (%edi)
 875985e:	31 ff                	xor    %edi,%edi
 8759860:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8759863:	01 75 f0             	add    %esi,-0x10(%ebp)
 8759866:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8759869:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875986c:	31 d2                	xor    %edx,%edx
 875986e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8759871:	31 ff                	xor    %edi,%edi
 8759873:	89 c6                	mov    %eax,%esi
 8759875:	01 ce                	add    %ecx,%esi
 8759877:	11 d7                	adc    %edx,%edi
 8759879:	89 f1                	mov    %esi,%ecx
 875987b:	8b 55 08             	mov    0x8(%ebp),%edx
 875987e:	8b 75 f0             	mov    -0x10(%ebp),%esi
 8759881:	89 7d e0             	mov    %edi,-0x20(%ebp)
 8759884:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8759887:	89 72 04             	mov    %esi,0x4(%edx)
 875988a:	8b 77 08             	mov    0x8(%edi),%esi
 875988d:	8b 7d 10             	mov    0x10(%ebp),%edi
 8759890:	8b 07                	mov    (%edi),%eax
 8759892:	31 ff                	xor    %edi,%edi
 8759894:	f7 e6                	mul    %esi
 8759896:	8b 75 e0             	mov    -0x20(%ebp),%esi
 8759899:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875989c:	01 4d e8             	add    %ecx,-0x18(%ebp)
 875989f:	89 55 ec             	mov    %edx,-0x14(%ebp)
 87598a2:	11 7d ec             	adc    %edi,-0x14(%ebp)
 87598a5:	31 d2                	xor    %edx,%edx
 87598a7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 87598aa:	31 ff                	xor    %edi,%edi
 87598ac:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87598af:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 87598b2:	01 c6                	add    %eax,%esi
 87598b4:	89 f1                	mov    %esi,%ecx
 87598b6:	8b 75 0c             	mov    0xc(%ebp),%esi
 87598b9:	11 d7                	adc    %edx,%edi
 87598bb:	89 7d e0             	mov    %edi,-0x20(%ebp)
 87598be:	8b 7e 04             	mov    0x4(%esi),%edi
 87598c1:	8b 75 10             	mov    0x10(%ebp),%esi
 87598c4:	8b 46 04             	mov    0x4(%esi),%eax
 87598c7:	8b 75 e8             	mov    -0x18(%ebp),%esi
 87598ca:	f7 e7                	mul    %edi
 87598cc:	31 ff                	xor    %edi,%edi
 87598ce:	89 45 f0             	mov    %eax,-0x10(%ebp)
 87598d1:	01 75 f0             	add    %esi,-0x10(%ebp)
 87598d4:	89 55 f4             	mov    %edx,-0xc(%ebp)
 87598d7:	11 7d f4             	adc    %edi,-0xc(%ebp)
 87598da:	31 d2                	xor    %edx,%edx
 87598dc:	8b 7d f4             	mov    -0xc(%ebp),%edi
 87598df:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 87598e2:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 87598e5:	31 ff                	xor    %edi,%edi
 87598e7:	01 ce                	add    %ecx,%esi
 87598e9:	11 d7                	adc    %edx,%edi
 87598eb:	89 f1                	mov    %esi,%ecx
 87598ed:	8b 55 e0             	mov    -0x20(%ebp),%edx
 87598f0:	8b 75 0c             	mov    0xc(%ebp),%esi
 87598f3:	01 fa                	add    %edi,%edx
 87598f5:	8b 3e                	mov    (%esi),%edi
 87598f7:	8b 75 10             	mov    0x10(%ebp),%esi
 87598fa:	89 55 e0             	mov    %edx,-0x20(%ebp)
 87598fd:	8b 46 08             	mov    0x8(%esi),%eax
 8759900:	8b 75 f0             	mov    -0x10(%ebp),%esi
 8759903:	f7 e7                	mul    %edi
 8759905:	31 ff                	xor    %edi,%edi
 8759907:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875990a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875990d:	01 75 e8             	add    %esi,-0x18(%ebp)
 8759910:	89 55 ec             	mov    %edx,-0x14(%ebp)
 8759913:	11 7d ec             	adc    %edi,-0x14(%ebp)
 8759916:	31 d2                	xor    %edx,%edx
 8759918:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875991b:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875991e:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 8759921:	31 ff                	xor    %edi,%edi
 8759923:	01 ce                	add    %ecx,%esi
 8759925:	11 d7                	adc    %edx,%edi
 8759927:	89 f1                	mov    %esi,%ecx
 8759929:	8b 55 08             	mov    0x8(%ebp),%edx
 875992c:	01 f8                	add    %edi,%eax
 875992e:	8b 75 e8             	mov    -0x18(%ebp),%esi
 8759931:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8759934:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8759937:	89 72 08             	mov    %esi,0x8(%edx)
 875993a:	8b 37                	mov    (%edi),%esi
 875993c:	8b 7d 10             	mov    0x10(%ebp),%edi
 875993f:	8b 47 0c             	mov    0xc(%edi),%eax
 8759942:	31 ff                	xor    %edi,%edi
 8759944:	f7 e6                	mul    %esi
 8759946:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8759949:	01 4d f0             	add    %ecx,-0x10(%ebp)
 875994c:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875994f:	11 7d f4             	adc    %edi,-0xc(%ebp)
 8759952:	31 d2                	xor    %edx,%edx
 8759954:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8759957:	31 ff                	xor    %edi,%edi
 8759959:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 875995c:	8b 75 e0             	mov    -0x20(%ebp),%esi
 875995f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8759962:	01 c6                	add    %eax,%esi
 8759964:	89 f1                	mov    %esi,%ecx
 8759966:	8b 75 0c             	mov    0xc(%ebp),%esi
 8759969:	11 d7                	adc    %edx,%edi
 875996b:	89 7d e0             	mov    %edi,-0x20(%ebp)
 875996e:	8b 7e 04             	mov    0x4(%esi),%edi
 8759971:	8b 75 10             	mov    0x10(%ebp),%esi
 8759974:	8b 46 08             	mov    0x8(%esi),%eax
 8759977:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875997a:	f7 e7                	mul    %edi
 875997c:	31 ff                	xor    %edi,%edi
 875997e:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8759981:	01 75 e8             	add    %esi,-0x18(%ebp)
 8759984:	89 55 ec             	mov    %edx,-0x14(%ebp)
 8759987:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875998a:	31 d2                	xor    %edx,%edx
 875998c:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875998f:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 8759992:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 8759995:	31 ff                	xor    %edi,%edi
 8759997:	01 ce                	add    %ecx,%esi
 8759999:	11 d7                	adc    %edx,%edi
 875999b:	89 f1                	mov    %esi,%ecx
 875999d:	8b 55 e0             	mov    -0x20(%ebp),%edx
 87599a0:	8b 75 0c             	mov    0xc(%ebp),%esi
 87599a3:	01 fa                	add    %edi,%edx
 87599a5:	8b 7e 08             	mov    0x8(%esi),%edi
 87599a8:	8b 75 10             	mov    0x10(%ebp),%esi
 87599ab:	89 55 e0             	mov    %edx,-0x20(%ebp)
 87599ae:	8b 46 04             	mov    0x4(%esi),%eax
 87599b1:	8b 75 e8             	mov    -0x18(%ebp),%esi
 87599b4:	f7 e7                	mul    %edi
 87599b6:	31 ff                	xor    %edi,%edi
 87599b8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 87599bb:	01 75 f0             	add    %esi,-0x10(%ebp)
 87599be:	89 55 f4             	mov    %edx,-0xc(%ebp)
 87599c1:	11 7d f4             	adc    %edi,-0xc(%ebp)
 87599c4:	31 d2                	xor    %edx,%edx
 87599c6:	8b 7d f4             	mov    -0xc(%ebp),%edi
 87599c9:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 87599cc:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 87599cf:	31 ff                	xor    %edi,%edi
 87599d1:	01 ce                	add    %ecx,%esi
 87599d3:	11 d7                	adc    %edx,%edi
 87599d5:	89 f1                	mov    %esi,%ecx
 87599d7:	8b 55 e0             	mov    -0x20(%ebp),%edx
 87599da:	8b 75 0c             	mov    0xc(%ebp),%esi
 87599dd:	01 fa                	add    %edi,%edx
 87599df:	8b 7e 0c             	mov    0xc(%esi),%edi
 87599e2:	8b 75 10             	mov    0x10(%ebp),%esi
 87599e5:	89 55 e0             	mov    %edx,-0x20(%ebp)
 87599e8:	8b 06                	mov    (%esi),%eax
 87599ea:	8b 75 f0             	mov    -0x10(%ebp),%esi
 87599ed:	f7 e7                	mul    %edi
 87599ef:	31 ff                	xor    %edi,%edi
 87599f1:	89 45 e8             	mov    %eax,-0x18(%ebp)
 87599f4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87599f7:	01 75 e8             	add    %esi,-0x18(%ebp)
 87599fa:	89 55 ec             	mov    %edx,-0x14(%ebp)
 87599fd:	11 7d ec             	adc    %edi,-0x14(%ebp)
 8759a00:	31 d2                	xor    %edx,%edx
 8759a02:	8b 7d ec             	mov    -0x14(%ebp),%edi
 8759a05:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 8759a08:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 8759a0b:	31 ff                	xor    %edi,%edi
 8759a0d:	01 ce                	add    %ecx,%esi
 8759a0f:	11 d7                	adc    %edx,%edi
 8759a11:	89 f1                	mov    %esi,%ecx
 8759a13:	8b 55 08             	mov    0x8(%ebp),%edx
 8759a16:	8b 75 e8             	mov    -0x18(%ebp),%esi
 8759a19:	01 f8                	add    %edi,%eax
 8759a1b:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8759a1e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8759a21:	89 72 0c             	mov    %esi,0xc(%edx)
 8759a24:	8b 77 0c             	mov    0xc(%edi),%esi
 8759a27:	8b 7d 10             	mov    0x10(%ebp),%edi
 8759a2a:	8b 47 04             	mov    0x4(%edi),%eax
 8759a2d:	31 ff                	xor    %edi,%edi
 8759a2f:	f7 e6                	mul    %esi
 8759a31:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8759a34:	01 4d e8             	add    %ecx,-0x18(%ebp)
 8759a37:	89 55 ec             	mov    %edx,-0x14(%ebp)
 8759a3a:	11 7d ec             	adc    %edi,-0x14(%ebp)
 8759a3d:	31 d2                	xor    %edx,%edx
 8759a3f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8759a42:	31 ff                	xor    %edi,%edi
 8759a44:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8759a47:	8b 75 f0             	mov    -0x10(%ebp),%esi
 8759a4a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8759a4d:	01 c6                	add    %eax,%esi
 8759a4f:	89 f1                	mov    %esi,%ecx
 8759a51:	8b 75 0c             	mov    0xc(%ebp),%esi
 8759a54:	11 d7                	adc    %edx,%edi
 8759a56:	89 7d e0             	mov    %edi,-0x20(%ebp)
 8759a59:	8b 7e 08             	mov    0x8(%esi),%edi
 8759a5c:	8b 75 10             	mov    0x10(%ebp),%esi
 8759a5f:	8b 46 08             	mov    0x8(%esi),%eax
 8759a62:	8b 75 e8             	mov    -0x18(%ebp),%esi
 8759a65:	f7 e7                	mul    %edi
 8759a67:	31 ff                	xor    %edi,%edi
 8759a69:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8759a6c:	01 75 f0             	add    %esi,-0x10(%ebp)
 8759a6f:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8759a72:	11 7d f4             	adc    %edi,-0xc(%ebp)
 8759a75:	31 d2                	xor    %edx,%edx
 8759a77:	8b 7d f4             	mov    -0xc(%ebp),%edi
 8759a7a:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 8759a7d:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 8759a80:	31 ff                	xor    %edi,%edi
 8759a82:	01 ce                	add    %ecx,%esi
 8759a84:	11 d7                	adc    %edx,%edi
 8759a86:	89 f1                	mov    %esi,%ecx
 8759a88:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8759a8b:	8b 75 0c             	mov    0xc(%ebp),%esi
 8759a8e:	01 fa                	add    %edi,%edx
 8759a90:	8b 7e 04             	mov    0x4(%esi),%edi
 8759a93:	8b 75 10             	mov    0x10(%ebp),%esi
 8759a96:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8759a99:	8b 46 0c             	mov    0xc(%esi),%eax
 8759a9c:	8b 75 f0             	mov    -0x10(%ebp),%esi
 8759a9f:	f7 e7                	mul    %edi
 8759aa1:	31 ff                	xor    %edi,%edi
 8759aa3:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8759aa6:	01 75 e8             	add    %esi,-0x18(%ebp)
 8759aa9:	89 55 ec             	mov    %edx,-0x14(%ebp)
 8759aac:	11 7d ec             	adc    %edi,-0x14(%ebp)
 8759aaf:	31 d2                	xor    %edx,%edx
 8759ab1:	8b 7d ec             	mov    -0x14(%ebp),%edi
 8759ab4:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 8759ab7:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 8759aba:	31 ff                	xor    %edi,%edi
 8759abc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8759abf:	01 ce                	add    %ecx,%esi
 8759ac1:	11 d7                	adc    %edx,%edi
 8759ac3:	89 f1                	mov    %esi,%ecx
 8759ac5:	8b 55 08             	mov    0x8(%ebp),%edx
 8759ac8:	8b 75 e8             	mov    -0x18(%ebp),%esi
 8759acb:	01 f8                	add    %edi,%eax
 8759acd:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8759ad0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8759ad3:	89 72 10             	mov    %esi,0x10(%edx)
 8759ad6:	8b 75 10             	mov    0x10(%ebp),%esi
 8759ad9:	8b 78 08             	mov    0x8(%eax),%edi
 8759adc:	8b 46 0c             	mov    0xc(%esi),%eax
 8759adf:	8b 75 e0             	mov    -0x20(%ebp),%esi
 8759ae2:	f7 e7                	mul    %edi
 8759ae4:	31 ff                	xor    %edi,%edi
 8759ae6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8759ae9:	01 4d f0             	add    %ecx,-0x10(%ebp)
 8759aec:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8759aef:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8759af2:	11 7d f4             	adc    %edi,-0xc(%ebp)
 8759af5:	31 d2                	xor    %edx,%edx
 8759af7:	8b 7d f4             	mov    -0xc(%ebp),%edi
 8759afa:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 8759afd:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8759b00:	31 ff                	xor    %edi,%edi
 8759b02:	01 c6                	add    %eax,%esi
 8759b04:	8b 45 0c             	mov    0xc(%ebp),%eax
 8759b07:	89 75 e0             	mov    %esi,-0x20(%ebp)
 8759b0a:	8b 75 10             	mov    0x10(%ebp),%esi
 8759b0d:	11 d7                	adc    %edx,%edi
 8759b0f:	89 7d e8             	mov    %edi,-0x18(%ebp)
 8759b12:	8b 78 0c             	mov    0xc(%eax),%edi
 8759b15:	8b 46 08             	mov    0x8(%esi),%eax
 8759b18:	f7 e7                	mul    %edi
 8759b1a:	31 ff                	xor    %edi,%edi
 8759b1c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8759b1f:	01 4d f0             	add    %ecx,-0x10(%ebp)
 8759b22:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8759b25:	11 7d f4             	adc    %edi,-0xc(%ebp)
 8759b28:	31 c9                	xor    %ecx,%ecx
 8759b2a:	8b 7d f4             	mov    -0xc(%ebp),%edi
 8759b2d:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8759b30:	8b 45 08             	mov    0x8(%ebp),%eax
 8759b33:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 8759b36:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 8759b39:	31 ff                	xor    %edi,%edi
 8759b3b:	01 d6                	add    %edx,%esi
 8759b3d:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8759b40:	11 cf                	adc    %ecx,%edi
 8759b42:	89 f1                	mov    %esi,%ecx
 8759b44:	8b 75 e8             	mov    -0x18(%ebp),%esi
 8759b47:	89 50 14             	mov    %edx,0x14(%eax)
 8759b4a:	01 fe                	add    %edi,%esi
 8759b4c:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8759b4f:	8b 7f 0c             	mov    0xc(%edi),%edi
 8759b52:	89 f8                	mov    %edi,%eax
 8759b54:	8b 7d 10             	mov    0x10(%ebp),%edi
 8759b57:	f7 67 0c             	mull   0xc(%edi)
 8759b5a:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8759b5d:	89 55 dc             	mov    %edx,-0x24(%ebp)
 8759b60:	31 d2                	xor    %edx,%edx
 8759b62:	01 4d d8             	add    %ecx,-0x28(%ebp)
 8759b65:	11 55 dc             	adc    %edx,-0x24(%ebp)
 8759b68:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8759b6b:	8b 55 08             	mov    0x8(%ebp),%edx
 8759b6e:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 8759b71:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8759b74:	8d 04 06             	lea    (%esi,%eax,1),%eax
 8759b77:	89 42 1c             	mov    %eax,0x1c(%edx)
 8759b7a:	89 4a 18             	mov    %ecx,0x18(%edx)
 8759b7d:	83 c4 28             	add    $0x28,%esp
 8759b80:	5e                   	pop    %esi
 8759b81:	5f                   	pop    %edi
 8759b82:	5d                   	pop    %ebp
 8759b83:	c3                   	ret
 8759b84:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8759b8a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TaoCrypt::Portable::Multiply4 @ 0x8759810

/* TaoCrypt::Portable::Multiply4(unsigned int*, unsigned int const*, unsigned int const*) */

void TaoCrypt::Portable::Multiply4(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  *param_1 = (uint)((ulonglong)uVar2 * (ulonglong)uVar1);
  uVar3 = (ulonglong)param_3[1] * (ulonglong)*param_2 +
          ((ulonglong)uVar2 * (ulonglong)uVar1 >> 0x20);
  uVar1 = (uint)(uVar3 >> 0x20);
  lVar4 = (ulonglong)param_2[1] * (ulonglong)*param_3 + (uVar3 & 0xffffffff);
  uVar2 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar9 = (uint)CARRY4(uVar2,uVar1);
  param_1[1] = (uint)lVar4;
  uVar3 = (ulonglong)*param_3 * (ulonglong)param_2[2] + (ulonglong)(uVar2 + uVar1);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar5 = uVar9 + uVar1;
  uVar3 = (ulonglong)param_3[1] * (ulonglong)param_2[1] + (uVar3 & 0xffffffff);
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar6 = uVar2 + uVar5;
  lVar4 = (ulonglong)param_3[2] * (ulonglong)*param_2 + (uVar3 & 0xffffffff);
  uVar10 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar5 = (uint)CARRY4(uVar9,uVar1) + (uint)CARRY4(uVar2,uVar5) + (uint)CARRY4(uVar10,uVar6);
  param_1[2] = (uint)lVar4;
  uVar3 = (ulonglong)param_3[3] * (ulonglong)*param_2 + (ulonglong)(uVar10 + uVar6);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar6 = uVar5 + uVar1;
  uVar3 = (ulonglong)param_3[2] * (ulonglong)param_2[1] + (uVar3 & 0xffffffff);
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar7 = uVar2 + uVar6;
  uVar3 = (ulonglong)param_3[1] * (ulonglong)param_2[2] + (uVar3 & 0xffffffff);
  uVar10 = (uint)(uVar3 >> 0x20);
  uVar8 = uVar10 + uVar7;
  lVar4 = (ulonglong)*param_3 * (ulonglong)param_2[3] + (uVar3 & 0xffffffff);
  uVar9 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar5 = (uint)CARRY4(uVar5,uVar1) + (uint)CARRY4(uVar2,uVar6) + (uint)CARRY4(uVar10,uVar7) +
          (uint)CARRY4(uVar9,uVar8);
  param_1[3] = (uint)lVar4;
  uVar3 = (ulonglong)param_3[1] * (ulonglong)param_2[3] + (ulonglong)(uVar9 + uVar8);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar9 = uVar5 + uVar1;
  uVar3 = (ulonglong)param_3[2] * (ulonglong)param_2[2] + (uVar3 & 0xffffffff);
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar6 = uVar2 + uVar9;
  lVar4 = (ulonglong)param_3[3] * (ulonglong)param_2[1] + (uVar3 & 0xffffffff);
  uVar10 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar9 = (uint)CARRY4(uVar5,uVar1) + (uint)CARRY4(uVar2,uVar9) + (uint)CARRY4(uVar10,uVar6);
  param_1[4] = (uint)lVar4;
  uVar3 = (ulonglong)param_3[3] * (ulonglong)param_2[2] + (ulonglong)(uVar10 + uVar6);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar10 = uVar9 + uVar1;
  lVar4 = (ulonglong)param_3[2] * (ulonglong)param_2[3] + (uVar3 & 0xffffffff);
  uVar2 = (uint)((ulonglong)lVar4 >> 0x20);
  param_1[5] = (uint)lVar4;
  lVar4 = (ulonglong)param_2[3] * (ulonglong)param_3[3] + (ulonglong)(uVar2 + uVar10);
  param_1[7] = (uint)CARRY4(uVar9,uVar1) + (uint)CARRY4(uVar2,uVar10) +
               (int)((ulonglong)lVar4 >> 0x20);
  param_1[6] = (uint)lVar4;
  return;
}

```

---

## Multiply4Bottom

```asm
// === 0875ad80 TaoCrypt::Portable::Multiply4Bottom  [0x0875ad80-0x875aeaf] ===
 875ad80:	55                   	push   %ebp
 875ad81:	89 e5                	mov    %esp,%ebp
 875ad83:	57                   	push   %edi
 875ad84:	56                   	push   %esi
 875ad85:	83 ec 18             	sub    $0x18,%esp
 875ad88:	8b 4d 10             	mov    0x10(%ebp),%ecx
 875ad8b:	8b 45 0c             	mov    0xc(%ebp),%eax
 875ad8e:	8b 30                	mov    (%eax),%esi
 875ad90:	8b 01                	mov    (%ecx),%eax
 875ad92:	f7 e6                	mul    %esi
 875ad94:	89 d7                	mov    %edx,%edi
 875ad96:	8b 55 08             	mov    0x8(%ebp),%edx
 875ad99:	89 02                	mov    %eax,(%edx)
 875ad9b:	8b 45 0c             	mov    0xc(%ebp),%eax
 875ad9e:	8b 30                	mov    (%eax),%esi
 875ada0:	8b 41 04             	mov    0x4(%ecx),%eax
 875ada3:	f7 e6                	mul    %esi
 875ada5:	89 fe                	mov    %edi,%esi
 875ada7:	31 ff                	xor    %edi,%edi
 875ada9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875adac:	8b 01                	mov    (%ecx),%eax
 875adae:	01 75 f0             	add    %esi,-0x10(%ebp)
 875adb1:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875adb4:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875adb7:	8b 55 0c             	mov    0xc(%ebp),%edx
 875adba:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875adbd:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875adc0:	89 7d e8             	mov    %edi,-0x18(%ebp)
 875adc3:	8b 7a 04             	mov    0x4(%edx),%edi
 875adc6:	f7 e7                	mul    %edi
 875adc8:	31 ff                	xor    %edi,%edi
 875adca:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875adcd:	01 75 f0             	add    %esi,-0x10(%ebp)
 875add0:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875add3:	8b 55 e8             	mov    -0x18(%ebp),%edx
 875add6:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875add9:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875addc:	89 55 e8             	mov    %edx,-0x18(%ebp)
 875addf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 875ade2:	8b 55 0c             	mov    0xc(%ebp),%edx
 875ade5:	89 fe                	mov    %edi,%esi
 875ade7:	31 ff                	xor    %edi,%edi
 875ade9:	03 75 e8             	add    -0x18(%ebp),%esi
 875adec:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 875adf3:	13 7d ec             	adc    -0x14(%ebp),%edi
 875adf6:	89 75 e8             	mov    %esi,-0x18(%ebp)
 875adf9:	8b 75 08             	mov    0x8(%ebp),%esi
 875adfc:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 875adff:	31 ff                	xor    %edi,%edi
 875ae01:	89 46 04             	mov    %eax,0x4(%esi)
 875ae04:	8b 72 08             	mov    0x8(%edx),%esi
 875ae07:	8b 01                	mov    (%ecx),%eax
 875ae09:	f7 e6                	mul    %esi
 875ae0b:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875ae0e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875ae11:	8b 41 04             	mov    0x4(%ecx),%eax
 875ae14:	01 75 f0             	add    %esi,-0x10(%ebp)
 875ae17:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875ae1a:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875ae1d:	8b 55 0c             	mov    0xc(%ebp),%edx
 875ae20:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875ae23:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875ae26:	03 7d e4             	add    -0x1c(%ebp),%edi
 875ae29:	89 7d e8             	mov    %edi,-0x18(%ebp)
 875ae2c:	8b 7a 04             	mov    0x4(%edx),%edi
 875ae2f:	f7 e7                	mul    %edi
 875ae31:	31 ff                	xor    %edi,%edi
 875ae33:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875ae36:	01 75 f0             	add    %esi,-0x10(%ebp)
 875ae39:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875ae3c:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875ae3f:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875ae42:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875ae45:	03 7d e8             	add    -0x18(%ebp),%edi
 875ae48:	89 7d e8             	mov    %edi,-0x18(%ebp)
 875ae4b:	8b 55 0c             	mov    0xc(%ebp),%edx
 875ae4e:	8b 41 08             	mov    0x8(%ecx),%eax
 875ae51:	8b 3a                	mov    (%edx),%edi
 875ae53:	f7 e7                	mul    %edi
 875ae55:	31 ff                	xor    %edi,%edi
 875ae57:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875ae5a:	01 75 f0             	add    %esi,-0x10(%ebp)
 875ae5d:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875ae60:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875ae63:	8b 55 08             	mov    0x8(%ebp),%edx
 875ae66:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875ae69:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875ae6c:	03 7d e8             	add    -0x18(%ebp),%edi
 875ae6f:	89 72 08             	mov    %esi,0x8(%edx)
 875ae72:	8b 55 0c             	mov    0xc(%ebp),%edx
 875ae75:	8b 01                	mov    (%ecx),%eax
 875ae77:	89 7d e8             	mov    %edi,-0x18(%ebp)
 875ae7a:	0f af 42 0c          	imul   0xc(%edx),%eax
 875ae7e:	8d 34 38             	lea    (%eax,%edi,1),%esi
 875ae81:	8b 41 0c             	mov    0xc(%ecx),%eax
 875ae84:	0f af 02             	imul   (%edx),%eax
 875ae87:	01 c6                	add    %eax,%esi
 875ae89:	8b 41 08             	mov    0x8(%ecx),%eax
 875ae8c:	0f af 42 04          	imul   0x4(%edx),%eax
 875ae90:	01 c6                	add    %eax,%esi
 875ae92:	8b 41 04             	mov    0x4(%ecx),%eax
 875ae95:	0f af 42 08          	imul   0x8(%edx),%eax
 875ae99:	8d 04 06             	lea    (%esi,%eax,1),%eax
 875ae9c:	8b 75 08             	mov    0x8(%ebp),%esi
 875ae9f:	89 46 0c             	mov    %eax,0xc(%esi)
 875aea2:	83 c4 18             	add    $0x18,%esp
 875aea5:	5e                   	pop    %esi
 875aea6:	5f                   	pop    %edi
 875aea7:	5d                   	pop    %ebp
 875aea8:	c3                   	ret
 875aea9:	90                   	nop
 875aeaa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TaoCrypt::Portable::Multiply4Bottom @ 0x875ad80

/* TaoCrypt::Portable::Multiply4Bottom(unsigned int*, unsigned int const*, unsigned int const*) */

void TaoCrypt::Portable::Multiply4Bottom(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  *param_1 = (uint)((ulonglong)uVar2 * (ulonglong)uVar1);
  uVar3 = (ulonglong)param_3[1] * (ulonglong)*param_2 +
          ((ulonglong)uVar2 * (ulonglong)uVar1 >> 0x20);
  uVar1 = (uint)(uVar3 >> 0x20);
  lVar4 = (ulonglong)*param_3 * (ulonglong)param_2[1] + (uVar3 & 0xffffffff);
  uVar2 = (uint)((ulonglong)lVar4 >> 0x20);
  param_1[1] = (uint)lVar4;
  uVar3 = (ulonglong)*param_3 * (ulonglong)param_2[2] + (ulonglong)(uVar2 + uVar1);
  uVar5 = (ulonglong)param_3[1] * (ulonglong)param_2[1] + (uVar3 & 0xffffffff);
  lVar4 = (ulonglong)param_3[2] * (ulonglong)*param_2 + (uVar5 & 0xffffffff);
  param_1[2] = (uint)lVar4;
  param_1[3] = *param_3 * param_2[3] +
               (int)((ulonglong)lVar4 >> 0x20) +
               (int)(uVar5 >> 0x20) + (int)(uVar3 >> 0x20) + (uint)CARRY4(uVar2,uVar1) +
               param_3[3] * *param_2 + param_3[2] * param_2[1] + param_3[1] * param_2[2];
  return;
}

```

---

## Multiply8

```asm
// === 08759f10 TaoCrypt::Portable::Multiply8  [0x08759f10-0x875ad7f] ===
 8759f10:	55                   	push   %ebp
 8759f11:	89 e5                	mov    %esp,%ebp
 8759f13:	57                   	push   %edi
 8759f14:	31 ff                	xor    %edi,%edi
 8759f16:	56                   	push   %esi
 8759f17:	83 ec 28             	sub    $0x28,%esp
 8759f1a:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8759f1d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8759f20:	8b 30                	mov    (%eax),%esi
 8759f22:	8b 01                	mov    (%ecx),%eax
 8759f24:	f7 e6                	mul    %esi
 8759f26:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 8759f29:	89 c6                	mov    %eax,%esi
 8759f2b:	8b 55 0c             	mov    0xc(%ebp),%edx
 8759f2e:	8b 45 08             	mov    0x8(%ebp),%eax
 8759f31:	89 30                	mov    %esi,(%eax)
 8759f33:	8b 32                	mov    (%edx),%esi
 8759f35:	8b 41 04             	mov    0x4(%ecx),%eax
 8759f38:	f7 e6                	mul    %esi
 8759f3a:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 8759f3d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8759f40:	01 75 f0             	add    %esi,-0x10(%ebp)
 8759f43:	8b 75 f0             	mov    -0x10(%ebp),%esi
 8759f46:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8759f49:	11 7d f4             	adc    %edi,-0xc(%ebp)
 8759f4c:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8759f4f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8759f52:	8b 7f 04             	mov    0x4(%edi),%edi
 8759f55:	89 d1                	mov    %edx,%ecx
 8759f57:	89 f8                	mov    %edi,%eax
 8759f59:	8b 7d 10             	mov    0x10(%ebp),%edi
 8759f5c:	f7 27                	mull   (%edi)
 8759f5e:	31 ff                	xor    %edi,%edi
 8759f60:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8759f63:	01 75 f0             	add    %esi,-0x10(%ebp)
 8759f66:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8759f69:	11 7d f4             	adc    %edi,-0xc(%ebp)
 8759f6c:	31 d2                	xor    %edx,%edx
 8759f6e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8759f71:	31 ff                	xor    %edi,%edi
 8759f73:	89 c6                	mov    %eax,%esi
 8759f75:	01 ce                	add    %ecx,%esi
 8759f77:	11 d7                	adc    %edx,%edi
 8759f79:	89 f1                	mov    %esi,%ecx
 8759f7b:	8b 55 08             	mov    0x8(%ebp),%edx
 8759f7e:	8b 75 f0             	mov    -0x10(%ebp),%esi
 8759f81:	89 7d e0             	mov    %edi,-0x20(%ebp)
 8759f84:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8759f87:	89 72 04             	mov    %esi,0x4(%edx)
 8759f8a:	8b 77 08             	mov    0x8(%edi),%esi
 8759f8d:	8b 7d 10             	mov    0x10(%ebp),%edi
 8759f90:	8b 07                	mov    (%edi),%eax
 8759f92:	31 ff                	xor    %edi,%edi
 8759f94:	f7 e6                	mul    %esi
 8759f96:	8b 75 e0             	mov    -0x20(%ebp),%esi
 8759f99:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8759f9c:	01 4d e8             	add    %ecx,-0x18(%ebp)
 8759f9f:	89 55 ec             	mov    %edx,-0x14(%ebp)
 8759fa2:	11 7d ec             	adc    %edi,-0x14(%ebp)
 8759fa5:	31 d2                	xor    %edx,%edx
 8759fa7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8759faa:	31 ff                	xor    %edi,%edi
 8759fac:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8759faf:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8759fb2:	01 c6                	add    %eax,%esi
 8759fb4:	89 f1                	mov    %esi,%ecx
 8759fb6:	8b 75 0c             	mov    0xc(%ebp),%esi
 8759fb9:	11 d7                	adc    %edx,%edi
 8759fbb:	89 7d e0             	mov    %edi,-0x20(%ebp)
 8759fbe:	8b 7e 04             	mov    0x4(%esi),%edi
 8759fc1:	8b 75 10             	mov    0x10(%ebp),%esi
 8759fc4:	8b 46 04             	mov    0x4(%esi),%eax
 8759fc7:	8b 75 e8             	mov    -0x18(%ebp),%esi
 8759fca:	f7 e7                	mul    %edi
 8759fcc:	31 ff                	xor    %edi,%edi
 8759fce:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8759fd1:	01 75 f0             	add    %esi,-0x10(%ebp)
 8759fd4:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8759fd7:	11 7d f4             	adc    %edi,-0xc(%ebp)
 8759fda:	31 d2                	xor    %edx,%edx
 8759fdc:	8b 7d f4             	mov    -0xc(%ebp),%edi
 8759fdf:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 8759fe2:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 8759fe5:	31 ff                	xor    %edi,%edi
 8759fe7:	01 ce                	add    %ecx,%esi
 8759fe9:	11 d7                	adc    %edx,%edi
 8759feb:	89 f1                	mov    %esi,%ecx
 8759fed:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8759ff0:	8b 75 0c             	mov    0xc(%ebp),%esi
 8759ff3:	01 fa                	add    %edi,%edx
 8759ff5:	8b 3e                	mov    (%esi),%edi
 8759ff7:	8b 75 10             	mov    0x10(%ebp),%esi
 8759ffa:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8759ffd:	8b 46 08             	mov    0x8(%esi),%eax
 875a000:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875a003:	f7 e7                	mul    %edi
 875a005:	31 ff                	xor    %edi,%edi
 875a007:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875a00a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875a00d:	01 75 e8             	add    %esi,-0x18(%ebp)
 875a010:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875a013:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875a016:	31 d2                	xor    %edx,%edx
 875a018:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875a01b:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a01e:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a021:	31 ff                	xor    %edi,%edi
 875a023:	01 ce                	add    %ecx,%esi
 875a025:	11 d7                	adc    %edx,%edi
 875a027:	89 f1                	mov    %esi,%ecx
 875a029:	8b 55 08             	mov    0x8(%ebp),%edx
 875a02c:	01 f8                	add    %edi,%eax
 875a02e:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875a031:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875a034:	89 45 e0             	mov    %eax,-0x20(%ebp)
 875a037:	89 72 08             	mov    %esi,0x8(%edx)
 875a03a:	8b 37                	mov    (%edi),%esi
 875a03c:	8b 7d 10             	mov    0x10(%ebp),%edi
 875a03f:	8b 47 0c             	mov    0xc(%edi),%eax
 875a042:	31 ff                	xor    %edi,%edi
 875a044:	f7 e6                	mul    %esi
 875a046:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875a049:	01 4d f0             	add    %ecx,-0x10(%ebp)
 875a04c:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875a04f:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875a052:	31 d2                	xor    %edx,%edx
 875a054:	8b 45 f4             	mov    -0xc(%ebp),%eax
 875a057:	31 ff                	xor    %edi,%edi
 875a059:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 875a05c:	8b 75 e0             	mov    -0x20(%ebp),%esi
 875a05f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 875a062:	01 c6                	add    %eax,%esi
 875a064:	89 f1                	mov    %esi,%ecx
 875a066:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a069:	11 d7                	adc    %edx,%edi
 875a06b:	89 7d e0             	mov    %edi,-0x20(%ebp)
 875a06e:	8b 7e 04             	mov    0x4(%esi),%edi
 875a071:	8b 75 10             	mov    0x10(%ebp),%esi
 875a074:	8b 46 08             	mov    0x8(%esi),%eax
 875a077:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875a07a:	f7 e7                	mul    %edi
 875a07c:	31 ff                	xor    %edi,%edi
 875a07e:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875a081:	01 75 e8             	add    %esi,-0x18(%ebp)
 875a084:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875a087:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875a08a:	31 d2                	xor    %edx,%edx
 875a08c:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875a08f:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a092:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a095:	31 ff                	xor    %edi,%edi
 875a097:	01 ce                	add    %ecx,%esi
 875a099:	11 d7                	adc    %edx,%edi
 875a09b:	89 f1                	mov    %esi,%ecx
 875a09d:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875a0a0:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a0a3:	01 fa                	add    %edi,%edx
 875a0a5:	8b 7e 08             	mov    0x8(%esi),%edi
 875a0a8:	8b 75 10             	mov    0x10(%ebp),%esi
 875a0ab:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875a0ae:	8b 46 04             	mov    0x4(%esi),%eax
 875a0b1:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875a0b4:	f7 e7                	mul    %edi
 875a0b6:	31 ff                	xor    %edi,%edi
 875a0b8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875a0bb:	01 75 f0             	add    %esi,-0x10(%ebp)
 875a0be:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875a0c1:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875a0c4:	31 d2                	xor    %edx,%edx
 875a0c6:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875a0c9:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a0cc:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a0cf:	31 ff                	xor    %edi,%edi
 875a0d1:	01 ce                	add    %ecx,%esi
 875a0d3:	11 d7                	adc    %edx,%edi
 875a0d5:	89 f1                	mov    %esi,%ecx
 875a0d7:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875a0da:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a0dd:	01 fa                	add    %edi,%edx
 875a0df:	8b 7e 0c             	mov    0xc(%esi),%edi
 875a0e2:	8b 75 10             	mov    0x10(%ebp),%esi
 875a0e5:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875a0e8:	8b 06                	mov    (%esi),%eax
 875a0ea:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875a0ed:	f7 e7                	mul    %edi
 875a0ef:	31 ff                	xor    %edi,%edi
 875a0f1:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875a0f4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875a0f7:	01 75 e8             	add    %esi,-0x18(%ebp)
 875a0fa:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875a0fd:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875a100:	31 d2                	xor    %edx,%edx
 875a102:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875a105:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a108:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a10b:	31 ff                	xor    %edi,%edi
 875a10d:	01 ce                	add    %ecx,%esi
 875a10f:	11 d7                	adc    %edx,%edi
 875a111:	89 f1                	mov    %esi,%ecx
 875a113:	8b 55 08             	mov    0x8(%ebp),%edx
 875a116:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875a119:	01 f8                	add    %edi,%eax
 875a11b:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875a11e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875a121:	89 72 0c             	mov    %esi,0xc(%edx)
 875a124:	8b 37                	mov    (%edi),%esi
 875a126:	8b 7d 10             	mov    0x10(%ebp),%edi
 875a129:	8b 47 10             	mov    0x10(%edi),%eax
 875a12c:	31 ff                	xor    %edi,%edi
 875a12e:	f7 e6                	mul    %esi
 875a130:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875a133:	01 4d e8             	add    %ecx,-0x18(%ebp)
 875a136:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875a139:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875a13c:	31 d2                	xor    %edx,%edx
 875a13e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 875a141:	31 ff                	xor    %edi,%edi
 875a143:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 875a146:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875a149:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 875a14c:	01 c6                	add    %eax,%esi
 875a14e:	89 f1                	mov    %esi,%ecx
 875a150:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a153:	11 d7                	adc    %edx,%edi
 875a155:	89 7d e0             	mov    %edi,-0x20(%ebp)
 875a158:	8b 7e 04             	mov    0x4(%esi),%edi
 875a15b:	8b 75 10             	mov    0x10(%ebp),%esi
 875a15e:	8b 46 0c             	mov    0xc(%esi),%eax
 875a161:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875a164:	f7 e7                	mul    %edi
 875a166:	31 ff                	xor    %edi,%edi
 875a168:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875a16b:	01 75 f0             	add    %esi,-0x10(%ebp)
 875a16e:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875a171:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875a174:	31 d2                	xor    %edx,%edx
 875a176:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875a179:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a17c:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a17f:	31 ff                	xor    %edi,%edi
 875a181:	01 ce                	add    %ecx,%esi
 875a183:	11 d7                	adc    %edx,%edi
 875a185:	89 f1                	mov    %esi,%ecx
 875a187:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875a18a:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a18d:	01 fa                	add    %edi,%edx
 875a18f:	8b 7e 08             	mov    0x8(%esi),%edi
 875a192:	8b 75 10             	mov    0x10(%ebp),%esi
 875a195:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875a198:	8b 46 08             	mov    0x8(%esi),%eax
 875a19b:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875a19e:	f7 e7                	mul    %edi
 875a1a0:	31 ff                	xor    %edi,%edi
 875a1a2:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875a1a5:	01 75 e8             	add    %esi,-0x18(%ebp)
 875a1a8:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875a1ab:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875a1ae:	31 d2                	xor    %edx,%edx
 875a1b0:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875a1b3:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a1b6:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a1b9:	31 ff                	xor    %edi,%edi
 875a1bb:	01 ce                	add    %ecx,%esi
 875a1bd:	11 d7                	adc    %edx,%edi
 875a1bf:	89 f1                	mov    %esi,%ecx
 875a1c1:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875a1c4:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a1c7:	01 fa                	add    %edi,%edx
 875a1c9:	8b 7e 0c             	mov    0xc(%esi),%edi
 875a1cc:	8b 75 10             	mov    0x10(%ebp),%esi
 875a1cf:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875a1d2:	8b 46 04             	mov    0x4(%esi),%eax
 875a1d5:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875a1d8:	f7 e7                	mul    %edi
 875a1da:	31 ff                	xor    %edi,%edi
 875a1dc:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875a1df:	01 75 f0             	add    %esi,-0x10(%ebp)
 875a1e2:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875a1e5:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875a1e8:	31 d2                	xor    %edx,%edx
 875a1ea:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875a1ed:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a1f0:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a1f3:	31 ff                	xor    %edi,%edi
 875a1f5:	01 ce                	add    %ecx,%esi
 875a1f7:	11 d7                	adc    %edx,%edi
 875a1f9:	89 f1                	mov    %esi,%ecx
 875a1fb:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875a1fe:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a201:	01 fa                	add    %edi,%edx
 875a203:	8b 7e 10             	mov    0x10(%esi),%edi
 875a206:	8b 75 10             	mov    0x10(%ebp),%esi
 875a209:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875a20c:	8b 06                	mov    (%esi),%eax
 875a20e:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875a211:	f7 e7                	mul    %edi
 875a213:	31 ff                	xor    %edi,%edi
 875a215:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875a218:	01 75 e8             	add    %esi,-0x18(%ebp)
 875a21b:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875a21e:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875a221:	31 d2                	xor    %edx,%edx
 875a223:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875a226:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a229:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a22c:	31 ff                	xor    %edi,%edi
 875a22e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875a231:	01 ce                	add    %ecx,%esi
 875a233:	11 d7                	adc    %edx,%edi
 875a235:	89 f1                	mov    %esi,%ecx
 875a237:	8b 55 08             	mov    0x8(%ebp),%edx
 875a23a:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875a23d:	01 f8                	add    %edi,%eax
 875a23f:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875a242:	89 45 e0             	mov    %eax,-0x20(%ebp)
 875a245:	89 72 10             	mov    %esi,0x10(%edx)
 875a248:	8b 37                	mov    (%edi),%esi
 875a24a:	8b 7d 10             	mov    0x10(%ebp),%edi
 875a24d:	8b 47 14             	mov    0x14(%edi),%eax
 875a250:	31 ff                	xor    %edi,%edi
 875a252:	f7 e6                	mul    %esi
 875a254:	8b 75 e0             	mov    -0x20(%ebp),%esi
 875a257:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875a25a:	01 4d f0             	add    %ecx,-0x10(%ebp)
 875a25d:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875a260:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875a263:	31 d2                	xor    %edx,%edx
 875a265:	8b 45 f4             	mov    -0xc(%ebp),%eax
 875a268:	31 ff                	xor    %edi,%edi
 875a26a:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 875a26d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 875a270:	01 c6                	add    %eax,%esi
 875a272:	89 f1                	mov    %esi,%ecx
 875a274:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a277:	11 d7                	adc    %edx,%edi
 875a279:	89 7d e0             	mov    %edi,-0x20(%ebp)
 875a27c:	8b 7e 04             	mov    0x4(%esi),%edi
 875a27f:	8b 75 10             	mov    0x10(%ebp),%esi
 875a282:	8b 46 10             	mov    0x10(%esi),%eax
 875a285:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875a288:	f7 e7                	mul    %edi
 875a28a:	31 ff                	xor    %edi,%edi
 875a28c:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875a28f:	01 75 e8             	add    %esi,-0x18(%ebp)
 875a292:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875a295:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875a298:	31 d2                	xor    %edx,%edx
 875a29a:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875a29d:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a2a0:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a2a3:	31 ff                	xor    %edi,%edi
 875a2a5:	01 ce                	add    %ecx,%esi
 875a2a7:	11 d7                	adc    %edx,%edi
 875a2a9:	89 f1                	mov    %esi,%ecx
 875a2ab:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875a2ae:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a2b1:	01 fa                	add    %edi,%edx
 875a2b3:	8b 7e 08             	mov    0x8(%esi),%edi
 875a2b6:	8b 75 10             	mov    0x10(%ebp),%esi
 875a2b9:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875a2bc:	8b 46 0c             	mov    0xc(%esi),%eax
 875a2bf:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875a2c2:	f7 e7                	mul    %edi
 875a2c4:	31 ff                	xor    %edi,%edi
 875a2c6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875a2c9:	01 75 f0             	add    %esi,-0x10(%ebp)
 875a2cc:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875a2cf:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875a2d2:	31 d2                	xor    %edx,%edx
 875a2d4:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875a2d7:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a2da:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a2dd:	31 ff                	xor    %edi,%edi
 875a2df:	01 ce                	add    %ecx,%esi
 875a2e1:	11 d7                	adc    %edx,%edi
 875a2e3:	89 f1                	mov    %esi,%ecx
 875a2e5:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875a2e8:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a2eb:	01 fa                	add    %edi,%edx
 875a2ed:	8b 7e 0c             	mov    0xc(%esi),%edi
 875a2f0:	8b 75 10             	mov    0x10(%ebp),%esi
 875a2f3:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875a2f6:	8b 46 08             	mov    0x8(%esi),%eax
 875a2f9:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875a2fc:	f7 e7                	mul    %edi
 875a2fe:	31 ff                	xor    %edi,%edi
 875a300:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875a303:	01 75 e8             	add    %esi,-0x18(%ebp)
 875a306:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875a309:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875a30c:	31 d2                	xor    %edx,%edx
 875a30e:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875a311:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a314:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a317:	31 ff                	xor    %edi,%edi
 875a319:	01 ce                	add    %ecx,%esi
 875a31b:	11 d7                	adc    %edx,%edi
 875a31d:	89 f1                	mov    %esi,%ecx
 875a31f:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875a322:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a325:	01 fa                	add    %edi,%edx
 875a327:	8b 7e 10             	mov    0x10(%esi),%edi
 875a32a:	8b 75 10             	mov    0x10(%ebp),%esi
 875a32d:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875a330:	8b 46 04             	mov    0x4(%esi),%eax
 875a333:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875a336:	f7 e7                	mul    %edi
 875a338:	31 ff                	xor    %edi,%edi
 875a33a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875a33d:	01 75 f0             	add    %esi,-0x10(%ebp)
 875a340:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875a343:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875a346:	31 d2                	xor    %edx,%edx
 875a348:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875a34b:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a34e:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a351:	31 ff                	xor    %edi,%edi
 875a353:	01 ce                	add    %ecx,%esi
 875a355:	11 d7                	adc    %edx,%edi
 875a357:	89 f1                	mov    %esi,%ecx
 875a359:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875a35c:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a35f:	01 fa                	add    %edi,%edx
 875a361:	8b 7e 14             	mov    0x14(%esi),%edi
 875a364:	8b 75 10             	mov    0x10(%ebp),%esi
 875a367:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875a36a:	8b 06                	mov    (%esi),%eax
 875a36c:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875a36f:	f7 e7                	mul    %edi
 875a371:	31 ff                	xor    %edi,%edi
 875a373:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875a376:	01 75 e8             	add    %esi,-0x18(%ebp)
 875a379:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875a37c:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875a37f:	31 d2                	xor    %edx,%edx
 875a381:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875a384:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a387:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a38a:	31 ff                	xor    %edi,%edi
 875a38c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875a38f:	01 ce                	add    %ecx,%esi
 875a391:	11 d7                	adc    %edx,%edi
 875a393:	89 f1                	mov    %esi,%ecx
 875a395:	8b 55 08             	mov    0x8(%ebp),%edx
 875a398:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875a39b:	01 f8                	add    %edi,%eax
 875a39d:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875a3a0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875a3a3:	89 72 14             	mov    %esi,0x14(%edx)
 875a3a6:	8b 37                	mov    (%edi),%esi
 875a3a8:	8b 7d 10             	mov    0x10(%ebp),%edi
 875a3ab:	8b 47 18             	mov    0x18(%edi),%eax
 875a3ae:	31 ff                	xor    %edi,%edi
 875a3b0:	f7 e6                	mul    %esi
 875a3b2:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875a3b5:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875a3b8:	01 4d e8             	add    %ecx,-0x18(%ebp)
 875a3bb:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875a3be:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875a3c1:	31 d2                	xor    %edx,%edx
 875a3c3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 875a3c6:	31 ff                	xor    %edi,%edi
 875a3c8:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 875a3cb:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 875a3ce:	01 c6                	add    %eax,%esi
 875a3d0:	89 f1                	mov    %esi,%ecx
 875a3d2:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a3d5:	11 d7                	adc    %edx,%edi
 875a3d7:	89 7d e0             	mov    %edi,-0x20(%ebp)
 875a3da:	8b 7e 04             	mov    0x4(%esi),%edi
 875a3dd:	8b 75 10             	mov    0x10(%ebp),%esi
 875a3e0:	8b 46 14             	mov    0x14(%esi),%eax
 875a3e3:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875a3e6:	f7 e7                	mul    %edi
 875a3e8:	31 ff                	xor    %edi,%edi
 875a3ea:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875a3ed:	01 75 f0             	add    %esi,-0x10(%ebp)
 875a3f0:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875a3f3:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875a3f6:	31 d2                	xor    %edx,%edx
 875a3f8:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875a3fb:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a3fe:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a401:	31 ff                	xor    %edi,%edi
 875a403:	01 ce                	add    %ecx,%esi
 875a405:	11 d7                	adc    %edx,%edi
 875a407:	89 f1                	mov    %esi,%ecx
 875a409:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875a40c:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a40f:	01 fa                	add    %edi,%edx
 875a411:	8b 7e 08             	mov    0x8(%esi),%edi
 875a414:	8b 75 10             	mov    0x10(%ebp),%esi
 875a417:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875a41a:	8b 46 10             	mov    0x10(%esi),%eax
 875a41d:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875a420:	f7 e7                	mul    %edi
 875a422:	31 ff                	xor    %edi,%edi
 875a424:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875a427:	01 75 e8             	add    %esi,-0x18(%ebp)
 875a42a:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875a42d:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875a430:	31 d2                	xor    %edx,%edx
 875a432:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875a435:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a438:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a43b:	31 ff                	xor    %edi,%edi
 875a43d:	01 ce                	add    %ecx,%esi
 875a43f:	11 d7                	adc    %edx,%edi
 875a441:	89 f1                	mov    %esi,%ecx
 875a443:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875a446:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a449:	01 fa                	add    %edi,%edx
 875a44b:	8b 7e 0c             	mov    0xc(%esi),%edi
 875a44e:	8b 75 10             	mov    0x10(%ebp),%esi
 875a451:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875a454:	8b 46 0c             	mov    0xc(%esi),%eax
 875a457:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875a45a:	f7 e7                	mul    %edi
 875a45c:	31 ff                	xor    %edi,%edi
 875a45e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875a461:	01 75 f0             	add    %esi,-0x10(%ebp)
 875a464:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875a467:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875a46a:	31 d2                	xor    %edx,%edx
 875a46c:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875a46f:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a472:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a475:	31 ff                	xor    %edi,%edi
 875a477:	01 ce                	add    %ecx,%esi
 875a479:	11 d7                	adc    %edx,%edi
 875a47b:	89 f1                	mov    %esi,%ecx
 875a47d:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875a480:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a483:	01 fa                	add    %edi,%edx
 875a485:	8b 7e 10             	mov    0x10(%esi),%edi
 875a488:	8b 75 10             	mov    0x10(%ebp),%esi
 875a48b:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875a48e:	8b 46 08             	mov    0x8(%esi),%eax
 875a491:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875a494:	f7 e7                	mul    %edi
 875a496:	31 ff                	xor    %edi,%edi
 875a498:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875a49b:	01 75 e8             	add    %esi,-0x18(%ebp)
 875a49e:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875a4a1:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875a4a4:	31 d2                	xor    %edx,%edx
 875a4a6:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875a4a9:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a4ac:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a4af:	31 ff                	xor    %edi,%edi
 875a4b1:	01 ce                	add    %ecx,%esi
 875a4b3:	11 d7                	adc    %edx,%edi
 875a4b5:	89 f1                	mov    %esi,%ecx
 875a4b7:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875a4ba:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a4bd:	01 fa                	add    %edi,%edx
 875a4bf:	8b 7e 14             	mov    0x14(%esi),%edi
 875a4c2:	8b 75 10             	mov    0x10(%ebp),%esi
 875a4c5:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875a4c8:	8b 46 04             	mov    0x4(%esi),%eax
 875a4cb:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875a4ce:	f7 e7                	mul    %edi
 875a4d0:	31 ff                	xor    %edi,%edi
 875a4d2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875a4d5:	01 75 f0             	add    %esi,-0x10(%ebp)
 875a4d8:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875a4db:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875a4de:	31 d2                	xor    %edx,%edx
 875a4e0:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875a4e3:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a4e6:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a4e9:	31 ff                	xor    %edi,%edi
 875a4eb:	01 ce                	add    %ecx,%esi
 875a4ed:	11 d7                	adc    %edx,%edi
 875a4ef:	89 f1                	mov    %esi,%ecx
 875a4f1:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875a4f4:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a4f7:	01 fa                	add    %edi,%edx
 875a4f9:	8b 7e 18             	mov    0x18(%esi),%edi
 875a4fc:	8b 75 10             	mov    0x10(%ebp),%esi
 875a4ff:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875a502:	8b 06                	mov    (%esi),%eax
 875a504:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875a507:	f7 e7                	mul    %edi
 875a509:	31 ff                	xor    %edi,%edi
 875a50b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875a50e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875a511:	01 75 e8             	add    %esi,-0x18(%ebp)
 875a514:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875a517:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875a51a:	31 d2                	xor    %edx,%edx
 875a51c:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875a51f:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a522:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a525:	31 ff                	xor    %edi,%edi
 875a527:	01 ce                	add    %ecx,%esi
 875a529:	11 d7                	adc    %edx,%edi
 875a52b:	89 f1                	mov    %esi,%ecx
 875a52d:	8b 55 08             	mov    0x8(%ebp),%edx
 875a530:	01 f8                	add    %edi,%eax
 875a532:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875a535:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875a538:	89 45 e0             	mov    %eax,-0x20(%ebp)
 875a53b:	89 72 18             	mov    %esi,0x18(%edx)
 875a53e:	8b 37                	mov    (%edi),%esi
 875a540:	8b 7d 10             	mov    0x10(%ebp),%edi
 875a543:	8b 47 1c             	mov    0x1c(%edi),%eax
 875a546:	31 ff                	xor    %edi,%edi
 875a548:	f7 e6                	mul    %esi
 875a54a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875a54d:	01 4d f0             	add    %ecx,-0x10(%ebp)
 875a550:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875a553:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875a556:	31 d2                	xor    %edx,%edx
 875a558:	8b 45 f4             	mov    -0xc(%ebp),%eax
 875a55b:	31 ff                	xor    %edi,%edi
 875a55d:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 875a560:	8b 75 e0             	mov    -0x20(%ebp),%esi
 875a563:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 875a566:	01 c6                	add    %eax,%esi
 875a568:	89 f1                	mov    %esi,%ecx
 875a56a:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a56d:	11 d7                	adc    %edx,%edi
 875a56f:	89 7d e0             	mov    %edi,-0x20(%ebp)
 875a572:	8b 7e 04             	mov    0x4(%esi),%edi
 875a575:	8b 75 10             	mov    0x10(%ebp),%esi
 875a578:	8b 46 18             	mov    0x18(%esi),%eax
 875a57b:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875a57e:	f7 e7                	mul    %edi
 875a580:	31 ff                	xor    %edi,%edi
 875a582:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875a585:	01 75 e8             	add    %esi,-0x18(%ebp)
 875a588:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875a58b:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875a58e:	31 d2                	xor    %edx,%edx
 875a590:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875a593:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a596:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a599:	31 ff                	xor    %edi,%edi
 875a59b:	01 ce                	add    %ecx,%esi
 875a59d:	11 d7                	adc    %edx,%edi
 875a59f:	89 f1                	mov    %esi,%ecx
 875a5a1:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875a5a4:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a5a7:	01 fa                	add    %edi,%edx
 875a5a9:	8b 7e 08             	mov    0x8(%esi),%edi
 875a5ac:	8b 75 10             	mov    0x10(%ebp),%esi
 875a5af:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875a5b2:	8b 46 14             	mov    0x14(%esi),%eax
 875a5b5:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875a5b8:	f7 e7                	mul    %edi
 875a5ba:	31 ff                	xor    %edi,%edi
 875a5bc:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875a5bf:	01 75 f0             	add    %esi,-0x10(%ebp)
 875a5c2:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875a5c5:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875a5c8:	31 d2                	xor    %edx,%edx
 875a5ca:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875a5cd:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a5d0:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a5d3:	31 ff                	xor    %edi,%edi
 875a5d5:	01 ce                	add    %ecx,%esi
 875a5d7:	11 d7                	adc    %edx,%edi
 875a5d9:	89 f1                	mov    %esi,%ecx
 875a5db:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875a5de:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a5e1:	01 fa                	add    %edi,%edx
 875a5e3:	8b 7e 0c             	mov    0xc(%esi),%edi
 875a5e6:	8b 75 10             	mov    0x10(%ebp),%esi
 875a5e9:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875a5ec:	8b 46 10             	mov    0x10(%esi),%eax
 875a5ef:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875a5f2:	f7 e7                	mul    %edi
 875a5f4:	31 ff                	xor    %edi,%edi
 875a5f6:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875a5f9:	01 75 e8             	add    %esi,-0x18(%ebp)
 875a5fc:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875a5ff:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875a602:	31 d2                	xor    %edx,%edx
 875a604:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875a607:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a60a:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a60d:	31 ff                	xor    %edi,%edi
 875a60f:	01 ce                	add    %ecx,%esi
 875a611:	11 d7                	adc    %edx,%edi
 875a613:	89 f1                	mov    %esi,%ecx
 875a615:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875a618:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a61b:	01 fa                	add    %edi,%edx
 875a61d:	8b 7e 10             	mov    0x10(%esi),%edi
 875a620:	8b 75 10             	mov    0x10(%ebp),%esi
 875a623:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875a626:	8b 46 0c             	mov    0xc(%esi),%eax
 875a629:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875a62c:	f7 e7                	mul    %edi
 875a62e:	31 ff                	xor    %edi,%edi
 875a630:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875a633:	01 75 f0             	add    %esi,-0x10(%ebp)
 875a636:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875a639:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875a63c:	31 d2                	xor    %edx,%edx
 875a63e:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875a641:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a644:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a647:	31 ff                	xor    %edi,%edi
 875a649:	01 ce                	add    %ecx,%esi
 875a64b:	11 d7                	adc    %edx,%edi
 875a64d:	89 f1                	mov    %esi,%ecx
 875a64f:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875a652:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a655:	01 fa                	add    %edi,%edx
 875a657:	8b 7e 14             	mov    0x14(%esi),%edi
 875a65a:	8b 75 10             	mov    0x10(%ebp),%esi
 875a65d:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875a660:	8b 46 08             	mov    0x8(%esi),%eax
 875a663:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875a666:	f7 e7                	mul    %edi
 875a668:	31 ff                	xor    %edi,%edi
 875a66a:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875a66d:	01 75 e8             	add    %esi,-0x18(%ebp)
 875a670:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875a673:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875a676:	31 d2                	xor    %edx,%edx
 875a678:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875a67b:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a67e:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a681:	31 ff                	xor    %edi,%edi
 875a683:	01 ce                	add    %ecx,%esi
 875a685:	11 d7                	adc    %edx,%edi
 875a687:	89 f1                	mov    %esi,%ecx
 875a689:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875a68c:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a68f:	01 fa                	add    %edi,%edx
 875a691:	8b 7e 18             	mov    0x18(%esi),%edi
 875a694:	8b 75 10             	mov    0x10(%ebp),%esi
 875a697:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875a69a:	8b 46 04             	mov    0x4(%esi),%eax
 875a69d:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875a6a0:	f7 e7                	mul    %edi
 875a6a2:	31 ff                	xor    %edi,%edi
 875a6a4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875a6a7:	01 75 f0             	add    %esi,-0x10(%ebp)
 875a6aa:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875a6ad:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875a6b0:	31 d2                	xor    %edx,%edx
 875a6b2:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875a6b5:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a6b8:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a6bb:	31 ff                	xor    %edi,%edi
 875a6bd:	01 ce                	add    %ecx,%esi
 875a6bf:	11 d7                	adc    %edx,%edi
 875a6c1:	89 f1                	mov    %esi,%ecx
 875a6c3:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875a6c6:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a6c9:	01 fa                	add    %edi,%edx
 875a6cb:	8b 7e 1c             	mov    0x1c(%esi),%edi
 875a6ce:	8b 75 10             	mov    0x10(%ebp),%esi
 875a6d1:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875a6d4:	8b 06                	mov    (%esi),%eax
 875a6d6:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875a6d9:	f7 e7                	mul    %edi
 875a6db:	31 ff                	xor    %edi,%edi
 875a6dd:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875a6e0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875a6e3:	01 75 e8             	add    %esi,-0x18(%ebp)
 875a6e6:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875a6e9:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875a6ec:	31 d2                	xor    %edx,%edx
 875a6ee:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875a6f1:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a6f4:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a6f7:	31 ff                	xor    %edi,%edi
 875a6f9:	01 ce                	add    %ecx,%esi
 875a6fb:	11 d7                	adc    %edx,%edi
 875a6fd:	89 f1                	mov    %esi,%ecx
 875a6ff:	8b 55 08             	mov    0x8(%ebp),%edx
 875a702:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875a705:	01 f8                	add    %edi,%eax
 875a707:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875a70a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875a70d:	89 72 1c             	mov    %esi,0x1c(%edx)
 875a710:	8b 77 04             	mov    0x4(%edi),%esi
 875a713:	8b 7d 10             	mov    0x10(%ebp),%edi
 875a716:	8b 47 1c             	mov    0x1c(%edi),%eax
 875a719:	31 ff                	xor    %edi,%edi
 875a71b:	f7 e6                	mul    %esi
 875a71d:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875a720:	01 4d e8             	add    %ecx,-0x18(%ebp)
 875a723:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875a726:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875a729:	31 d2                	xor    %edx,%edx
 875a72b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 875a72e:	31 ff                	xor    %edi,%edi
 875a730:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 875a733:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875a736:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 875a739:	01 c6                	add    %eax,%esi
 875a73b:	89 f1                	mov    %esi,%ecx
 875a73d:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a740:	11 d7                	adc    %edx,%edi
 875a742:	89 7d e0             	mov    %edi,-0x20(%ebp)
 875a745:	8b 7e 08             	mov    0x8(%esi),%edi
 875a748:	8b 75 10             	mov    0x10(%ebp),%esi
 875a74b:	8b 46 18             	mov    0x18(%esi),%eax
 875a74e:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875a751:	f7 e7                	mul    %edi
 875a753:	31 ff                	xor    %edi,%edi
 875a755:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875a758:	01 75 f0             	add    %esi,-0x10(%ebp)
 875a75b:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875a75e:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875a761:	31 d2                	xor    %edx,%edx
 875a763:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875a766:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a769:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a76c:	31 ff                	xor    %edi,%edi
 875a76e:	01 ce                	add    %ecx,%esi
 875a770:	11 d7                	adc    %edx,%edi
 875a772:	89 f1                	mov    %esi,%ecx
 875a774:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875a777:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a77a:	01 fa                	add    %edi,%edx
 875a77c:	8b 7e 0c             	mov    0xc(%esi),%edi
 875a77f:	8b 75 10             	mov    0x10(%ebp),%esi
 875a782:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875a785:	8b 46 14             	mov    0x14(%esi),%eax
 875a788:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875a78b:	f7 e7                	mul    %edi
 875a78d:	31 ff                	xor    %edi,%edi
 875a78f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875a792:	01 75 e8             	add    %esi,-0x18(%ebp)
 875a795:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875a798:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875a79b:	31 d2                	xor    %edx,%edx
 875a79d:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875a7a0:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a7a3:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a7a6:	31 ff                	xor    %edi,%edi
 875a7a8:	01 ce                	add    %ecx,%esi
 875a7aa:	11 d7                	adc    %edx,%edi
 875a7ac:	89 f1                	mov    %esi,%ecx
 875a7ae:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875a7b1:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a7b4:	01 fa                	add    %edi,%edx
 875a7b6:	8b 7e 10             	mov    0x10(%esi),%edi
 875a7b9:	8b 75 10             	mov    0x10(%ebp),%esi
 875a7bc:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875a7bf:	8b 46 10             	mov    0x10(%esi),%eax
 875a7c2:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875a7c5:	f7 e7                	mul    %edi
 875a7c7:	31 ff                	xor    %edi,%edi
 875a7c9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875a7cc:	01 75 f0             	add    %esi,-0x10(%ebp)
 875a7cf:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875a7d2:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875a7d5:	31 d2                	xor    %edx,%edx
 875a7d7:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875a7da:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a7dd:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a7e0:	31 ff                	xor    %edi,%edi
 875a7e2:	01 ce                	add    %ecx,%esi
 875a7e4:	11 d7                	adc    %edx,%edi
 875a7e6:	89 f1                	mov    %esi,%ecx
 875a7e8:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875a7eb:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a7ee:	01 fa                	add    %edi,%edx
 875a7f0:	8b 7e 14             	mov    0x14(%esi),%edi
 875a7f3:	8b 75 10             	mov    0x10(%ebp),%esi
 875a7f6:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875a7f9:	8b 46 0c             	mov    0xc(%esi),%eax
 875a7fc:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875a7ff:	f7 e7                	mul    %edi
 875a801:	31 ff                	xor    %edi,%edi
 875a803:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875a806:	01 75 e8             	add    %esi,-0x18(%ebp)
 875a809:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875a80c:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875a80f:	31 d2                	xor    %edx,%edx
 875a811:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875a814:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a817:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a81a:	31 ff                	xor    %edi,%edi
 875a81c:	01 ce                	add    %ecx,%esi
 875a81e:	11 d7                	adc    %edx,%edi
 875a820:	89 f1                	mov    %esi,%ecx
 875a822:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875a825:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a828:	01 fa                	add    %edi,%edx
 875a82a:	8b 7e 18             	mov    0x18(%esi),%edi
 875a82d:	8b 75 10             	mov    0x10(%ebp),%esi
 875a830:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875a833:	8b 46 08             	mov    0x8(%esi),%eax
 875a836:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875a839:	f7 e7                	mul    %edi
 875a83b:	31 ff                	xor    %edi,%edi
 875a83d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875a840:	01 75 f0             	add    %esi,-0x10(%ebp)
 875a843:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875a846:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875a849:	31 d2                	xor    %edx,%edx
 875a84b:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875a84e:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a851:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a854:	31 ff                	xor    %edi,%edi
 875a856:	01 ce                	add    %ecx,%esi
 875a858:	11 d7                	adc    %edx,%edi
 875a85a:	89 f1                	mov    %esi,%ecx
 875a85c:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875a85f:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a862:	01 fa                	add    %edi,%edx
 875a864:	8b 7e 1c             	mov    0x1c(%esi),%edi
 875a867:	8b 75 10             	mov    0x10(%ebp),%esi
 875a86a:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875a86d:	8b 46 04             	mov    0x4(%esi),%eax
 875a870:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875a873:	f7 e7                	mul    %edi
 875a875:	31 ff                	xor    %edi,%edi
 875a877:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875a87a:	01 75 e8             	add    %esi,-0x18(%ebp)
 875a87d:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875a880:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875a883:	31 d2                	xor    %edx,%edx
 875a885:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875a888:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a88b:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a88e:	31 ff                	xor    %edi,%edi
 875a890:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875a893:	01 ce                	add    %ecx,%esi
 875a895:	11 d7                	adc    %edx,%edi
 875a897:	89 f1                	mov    %esi,%ecx
 875a899:	8b 55 08             	mov    0x8(%ebp),%edx
 875a89c:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875a89f:	01 f8                	add    %edi,%eax
 875a8a1:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875a8a4:	89 45 e0             	mov    %eax,-0x20(%ebp)
 875a8a7:	89 72 20             	mov    %esi,0x20(%edx)
 875a8aa:	8b 77 08             	mov    0x8(%edi),%esi
 875a8ad:	8b 7d 10             	mov    0x10(%ebp),%edi
 875a8b0:	8b 47 1c             	mov    0x1c(%edi),%eax
 875a8b3:	31 ff                	xor    %edi,%edi
 875a8b5:	f7 e6                	mul    %esi
 875a8b7:	8b 75 e0             	mov    -0x20(%ebp),%esi
 875a8ba:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875a8bd:	01 4d f0             	add    %ecx,-0x10(%ebp)
 875a8c0:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875a8c3:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875a8c6:	31 d2                	xor    %edx,%edx
 875a8c8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 875a8cb:	31 ff                	xor    %edi,%edi
 875a8cd:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 875a8d0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 875a8d3:	01 c6                	add    %eax,%esi
 875a8d5:	89 f1                	mov    %esi,%ecx
 875a8d7:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a8da:	11 d7                	adc    %edx,%edi
 875a8dc:	89 7d e0             	mov    %edi,-0x20(%ebp)
 875a8df:	8b 7e 0c             	mov    0xc(%esi),%edi
 875a8e2:	8b 75 10             	mov    0x10(%ebp),%esi
 875a8e5:	8b 46 18             	mov    0x18(%esi),%eax
 875a8e8:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875a8eb:	f7 e7                	mul    %edi
 875a8ed:	31 ff                	xor    %edi,%edi
 875a8ef:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875a8f2:	01 75 e8             	add    %esi,-0x18(%ebp)
 875a8f5:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875a8f8:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875a8fb:	31 d2                	xor    %edx,%edx
 875a8fd:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875a900:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a903:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a906:	31 ff                	xor    %edi,%edi
 875a908:	01 ce                	add    %ecx,%esi
 875a90a:	11 d7                	adc    %edx,%edi
 875a90c:	89 f1                	mov    %esi,%ecx
 875a90e:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875a911:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a914:	01 fa                	add    %edi,%edx
 875a916:	8b 7e 10             	mov    0x10(%esi),%edi
 875a919:	8b 75 10             	mov    0x10(%ebp),%esi
 875a91c:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875a91f:	8b 46 14             	mov    0x14(%esi),%eax
 875a922:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875a925:	f7 e7                	mul    %edi
 875a927:	31 ff                	xor    %edi,%edi
 875a929:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875a92c:	01 75 f0             	add    %esi,-0x10(%ebp)
 875a92f:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875a932:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875a935:	31 d2                	xor    %edx,%edx
 875a937:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875a93a:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a93d:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a940:	31 ff                	xor    %edi,%edi
 875a942:	01 ce                	add    %ecx,%esi
 875a944:	11 d7                	adc    %edx,%edi
 875a946:	89 f1                	mov    %esi,%ecx
 875a948:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875a94b:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a94e:	01 fa                	add    %edi,%edx
 875a950:	8b 7e 14             	mov    0x14(%esi),%edi
 875a953:	8b 75 10             	mov    0x10(%ebp),%esi
 875a956:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875a959:	8b 46 10             	mov    0x10(%esi),%eax
 875a95c:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875a95f:	f7 e7                	mul    %edi
 875a961:	31 ff                	xor    %edi,%edi
 875a963:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875a966:	01 75 e8             	add    %esi,-0x18(%ebp)
 875a969:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875a96c:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875a96f:	31 d2                	xor    %edx,%edx
 875a971:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875a974:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a977:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a97a:	31 ff                	xor    %edi,%edi
 875a97c:	01 ce                	add    %ecx,%esi
 875a97e:	11 d7                	adc    %edx,%edi
 875a980:	89 f1                	mov    %esi,%ecx
 875a982:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875a985:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a988:	01 fa                	add    %edi,%edx
 875a98a:	8b 7e 18             	mov    0x18(%esi),%edi
 875a98d:	8b 75 10             	mov    0x10(%ebp),%esi
 875a990:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875a993:	8b 46 0c             	mov    0xc(%esi),%eax
 875a996:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875a999:	f7 e7                	mul    %edi
 875a99b:	31 ff                	xor    %edi,%edi
 875a99d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875a9a0:	01 75 f0             	add    %esi,-0x10(%ebp)
 875a9a3:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875a9a6:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875a9a9:	31 d2                	xor    %edx,%edx
 875a9ab:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875a9ae:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a9b1:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a9b4:	31 ff                	xor    %edi,%edi
 875a9b6:	01 ce                	add    %ecx,%esi
 875a9b8:	11 d7                	adc    %edx,%edi
 875a9ba:	89 f1                	mov    %esi,%ecx
 875a9bc:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875a9bf:	8b 75 0c             	mov    0xc(%ebp),%esi
 875a9c2:	01 fa                	add    %edi,%edx
 875a9c4:	8b 7e 1c             	mov    0x1c(%esi),%edi
 875a9c7:	8b 75 10             	mov    0x10(%ebp),%esi
 875a9ca:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875a9cd:	8b 46 08             	mov    0x8(%esi),%eax
 875a9d0:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875a9d3:	f7 e7                	mul    %edi
 875a9d5:	31 ff                	xor    %edi,%edi
 875a9d7:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875a9da:	01 75 e8             	add    %esi,-0x18(%ebp)
 875a9dd:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875a9e0:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875a9e3:	31 d2                	xor    %edx,%edx
 875a9e5:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875a9e8:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875a9eb:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875a9ee:	31 ff                	xor    %edi,%edi
 875a9f0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875a9f3:	01 ce                	add    %ecx,%esi
 875a9f5:	11 d7                	adc    %edx,%edi
 875a9f7:	89 f1                	mov    %esi,%ecx
 875a9f9:	8b 55 08             	mov    0x8(%ebp),%edx
 875a9fc:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875a9ff:	01 f8                	add    %edi,%eax
 875aa01:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875aa04:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875aa07:	89 72 24             	mov    %esi,0x24(%edx)
 875aa0a:	8b 77 0c             	mov    0xc(%edi),%esi
 875aa0d:	8b 7d 10             	mov    0x10(%ebp),%edi
 875aa10:	8b 47 1c             	mov    0x1c(%edi),%eax
 875aa13:	31 ff                	xor    %edi,%edi
 875aa15:	f7 e6                	mul    %esi
 875aa17:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875aa1a:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875aa1d:	01 4d e8             	add    %ecx,-0x18(%ebp)
 875aa20:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875aa23:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875aa26:	31 d2                	xor    %edx,%edx
 875aa28:	8b 45 ec             	mov    -0x14(%ebp),%eax
 875aa2b:	31 ff                	xor    %edi,%edi
 875aa2d:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 875aa30:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 875aa33:	01 c6                	add    %eax,%esi
 875aa35:	89 f1                	mov    %esi,%ecx
 875aa37:	8b 75 0c             	mov    0xc(%ebp),%esi
 875aa3a:	11 d7                	adc    %edx,%edi
 875aa3c:	89 7d e0             	mov    %edi,-0x20(%ebp)
 875aa3f:	8b 7e 10             	mov    0x10(%esi),%edi
 875aa42:	8b 75 10             	mov    0x10(%ebp),%esi
 875aa45:	8b 46 18             	mov    0x18(%esi),%eax
 875aa48:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875aa4b:	f7 e7                	mul    %edi
 875aa4d:	31 ff                	xor    %edi,%edi
 875aa4f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875aa52:	01 75 f0             	add    %esi,-0x10(%ebp)
 875aa55:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875aa58:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875aa5b:	31 d2                	xor    %edx,%edx
 875aa5d:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875aa60:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875aa63:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875aa66:	31 ff                	xor    %edi,%edi
 875aa68:	01 ce                	add    %ecx,%esi
 875aa6a:	11 d7                	adc    %edx,%edi
 875aa6c:	89 f1                	mov    %esi,%ecx
 875aa6e:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875aa71:	8b 75 0c             	mov    0xc(%ebp),%esi
 875aa74:	01 fa                	add    %edi,%edx
 875aa76:	8b 7e 14             	mov    0x14(%esi),%edi
 875aa79:	8b 75 10             	mov    0x10(%ebp),%esi
 875aa7c:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875aa7f:	8b 46 14             	mov    0x14(%esi),%eax
 875aa82:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875aa85:	f7 e7                	mul    %edi
 875aa87:	31 ff                	xor    %edi,%edi
 875aa89:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875aa8c:	01 75 e8             	add    %esi,-0x18(%ebp)
 875aa8f:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875aa92:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875aa95:	31 d2                	xor    %edx,%edx
 875aa97:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875aa9a:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875aa9d:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875aaa0:	31 ff                	xor    %edi,%edi
 875aaa2:	01 ce                	add    %ecx,%esi
 875aaa4:	11 d7                	adc    %edx,%edi
 875aaa6:	89 f1                	mov    %esi,%ecx
 875aaa8:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875aaab:	8b 75 0c             	mov    0xc(%ebp),%esi
 875aaae:	01 fa                	add    %edi,%edx
 875aab0:	8b 7e 18             	mov    0x18(%esi),%edi
 875aab3:	8b 75 10             	mov    0x10(%ebp),%esi
 875aab6:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875aab9:	8b 46 10             	mov    0x10(%esi),%eax
 875aabc:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875aabf:	f7 e7                	mul    %edi
 875aac1:	31 ff                	xor    %edi,%edi
 875aac3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875aac6:	01 75 f0             	add    %esi,-0x10(%ebp)
 875aac9:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875aacc:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875aacf:	31 d2                	xor    %edx,%edx
 875aad1:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875aad4:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875aad7:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875aada:	31 ff                	xor    %edi,%edi
 875aadc:	01 ce                	add    %ecx,%esi
 875aade:	11 d7                	adc    %edx,%edi
 875aae0:	89 f1                	mov    %esi,%ecx
 875aae2:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875aae5:	8b 75 0c             	mov    0xc(%ebp),%esi
 875aae8:	01 fa                	add    %edi,%edx
 875aaea:	8b 7e 1c             	mov    0x1c(%esi),%edi
 875aaed:	8b 75 10             	mov    0x10(%ebp),%esi
 875aaf0:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875aaf3:	8b 46 0c             	mov    0xc(%esi),%eax
 875aaf6:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875aaf9:	f7 e7                	mul    %edi
 875aafb:	31 ff                	xor    %edi,%edi
 875aafd:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875ab00:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875ab03:	01 75 e8             	add    %esi,-0x18(%ebp)
 875ab06:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875ab09:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875ab0c:	31 d2                	xor    %edx,%edx
 875ab0e:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875ab11:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875ab14:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875ab17:	31 ff                	xor    %edi,%edi
 875ab19:	01 ce                	add    %ecx,%esi
 875ab1b:	11 d7                	adc    %edx,%edi
 875ab1d:	89 f1                	mov    %esi,%ecx
 875ab1f:	8b 55 08             	mov    0x8(%ebp),%edx
 875ab22:	01 f8                	add    %edi,%eax
 875ab24:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875ab27:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875ab2a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 875ab2d:	89 72 28             	mov    %esi,0x28(%edx)
 875ab30:	8b 77 10             	mov    0x10(%edi),%esi
 875ab33:	8b 7d 10             	mov    0x10(%ebp),%edi
 875ab36:	8b 47 1c             	mov    0x1c(%edi),%eax
 875ab39:	31 ff                	xor    %edi,%edi
 875ab3b:	f7 e6                	mul    %esi
 875ab3d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875ab40:	01 4d f0             	add    %ecx,-0x10(%ebp)
 875ab43:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875ab46:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875ab49:	31 d2                	xor    %edx,%edx
 875ab4b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 875ab4e:	31 ff                	xor    %edi,%edi
 875ab50:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 875ab53:	8b 75 e0             	mov    -0x20(%ebp),%esi
 875ab56:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 875ab59:	01 c6                	add    %eax,%esi
 875ab5b:	89 f1                	mov    %esi,%ecx
 875ab5d:	8b 75 0c             	mov    0xc(%ebp),%esi
 875ab60:	11 d7                	adc    %edx,%edi
 875ab62:	89 7d e0             	mov    %edi,-0x20(%ebp)
 875ab65:	8b 7e 14             	mov    0x14(%esi),%edi
 875ab68:	8b 75 10             	mov    0x10(%ebp),%esi
 875ab6b:	8b 46 18             	mov    0x18(%esi),%eax
 875ab6e:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875ab71:	f7 e7                	mul    %edi
 875ab73:	31 ff                	xor    %edi,%edi
 875ab75:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875ab78:	01 75 e8             	add    %esi,-0x18(%ebp)
 875ab7b:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875ab7e:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875ab81:	31 d2                	xor    %edx,%edx
 875ab83:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875ab86:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875ab89:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875ab8c:	31 ff                	xor    %edi,%edi
 875ab8e:	01 ce                	add    %ecx,%esi
 875ab90:	11 d7                	adc    %edx,%edi
 875ab92:	89 f1                	mov    %esi,%ecx
 875ab94:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875ab97:	8b 75 0c             	mov    0xc(%ebp),%esi
 875ab9a:	01 fa                	add    %edi,%edx
 875ab9c:	8b 7e 18             	mov    0x18(%esi),%edi
 875ab9f:	8b 75 10             	mov    0x10(%ebp),%esi
 875aba2:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875aba5:	8b 46 14             	mov    0x14(%esi),%eax
 875aba8:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875abab:	f7 e7                	mul    %edi
 875abad:	31 ff                	xor    %edi,%edi
 875abaf:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875abb2:	01 75 f0             	add    %esi,-0x10(%ebp)
 875abb5:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875abb8:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875abbb:	31 d2                	xor    %edx,%edx
 875abbd:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875abc0:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875abc3:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875abc6:	31 ff                	xor    %edi,%edi
 875abc8:	01 ce                	add    %ecx,%esi
 875abca:	11 d7                	adc    %edx,%edi
 875abcc:	89 f1                	mov    %esi,%ecx
 875abce:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875abd1:	8b 75 0c             	mov    0xc(%ebp),%esi
 875abd4:	01 fa                	add    %edi,%edx
 875abd6:	8b 7e 1c             	mov    0x1c(%esi),%edi
 875abd9:	8b 75 10             	mov    0x10(%ebp),%esi
 875abdc:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875abdf:	8b 46 10             	mov    0x10(%esi),%eax
 875abe2:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875abe5:	f7 e7                	mul    %edi
 875abe7:	31 ff                	xor    %edi,%edi
 875abe9:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875abec:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875abef:	01 75 e8             	add    %esi,-0x18(%ebp)
 875abf2:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875abf5:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875abf8:	31 d2                	xor    %edx,%edx
 875abfa:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875abfd:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875ac00:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875ac03:	31 ff                	xor    %edi,%edi
 875ac05:	01 ce                	add    %ecx,%esi
 875ac07:	11 d7                	adc    %edx,%edi
 875ac09:	89 f1                	mov    %esi,%ecx
 875ac0b:	8b 55 08             	mov    0x8(%ebp),%edx
 875ac0e:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875ac11:	01 f8                	add    %edi,%eax
 875ac13:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875ac16:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875ac19:	89 72 2c             	mov    %esi,0x2c(%edx)
 875ac1c:	8b 77 14             	mov    0x14(%edi),%esi
 875ac1f:	8b 7d 10             	mov    0x10(%ebp),%edi
 875ac22:	8b 47 1c             	mov    0x1c(%edi),%eax
 875ac25:	31 ff                	xor    %edi,%edi
 875ac27:	f7 e6                	mul    %esi
 875ac29:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875ac2c:	01 4d e8             	add    %ecx,-0x18(%ebp)
 875ac2f:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875ac32:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875ac35:	31 d2                	xor    %edx,%edx
 875ac37:	8b 45 ec             	mov    -0x14(%ebp),%eax
 875ac3a:	31 ff                	xor    %edi,%edi
 875ac3c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 875ac3f:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875ac42:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 875ac45:	01 c6                	add    %eax,%esi
 875ac47:	89 f1                	mov    %esi,%ecx
 875ac49:	8b 75 0c             	mov    0xc(%ebp),%esi
 875ac4c:	11 d7                	adc    %edx,%edi
 875ac4e:	89 7d e0             	mov    %edi,-0x20(%ebp)
 875ac51:	8b 7e 18             	mov    0x18(%esi),%edi
 875ac54:	8b 75 10             	mov    0x10(%ebp),%esi
 875ac57:	8b 46 18             	mov    0x18(%esi),%eax
 875ac5a:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875ac5d:	f7 e7                	mul    %edi
 875ac5f:	31 ff                	xor    %edi,%edi
 875ac61:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875ac64:	01 75 f0             	add    %esi,-0x10(%ebp)
 875ac67:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875ac6a:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875ac6d:	31 d2                	xor    %edx,%edx
 875ac6f:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875ac72:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875ac75:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875ac78:	31 ff                	xor    %edi,%edi
 875ac7a:	01 ce                	add    %ecx,%esi
 875ac7c:	11 d7                	adc    %edx,%edi
 875ac7e:	89 f1                	mov    %esi,%ecx
 875ac80:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875ac83:	8b 75 0c             	mov    0xc(%ebp),%esi
 875ac86:	01 fa                	add    %edi,%edx
 875ac88:	8b 7e 1c             	mov    0x1c(%esi),%edi
 875ac8b:	8b 75 10             	mov    0x10(%ebp),%esi
 875ac8e:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875ac91:	8b 46 14             	mov    0x14(%esi),%eax
 875ac94:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875ac97:	f7 e7                	mul    %edi
 875ac99:	31 ff                	xor    %edi,%edi
 875ac9b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875ac9e:	01 75 e8             	add    %esi,-0x18(%ebp)
 875aca1:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875aca4:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875aca7:	31 d2                	xor    %edx,%edx
 875aca9:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875acac:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875acaf:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875acb2:	31 ff                	xor    %edi,%edi
 875acb4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875acb7:	01 ce                	add    %ecx,%esi
 875acb9:	11 d7                	adc    %edx,%edi
 875acbb:	89 f1                	mov    %esi,%ecx
 875acbd:	8b 55 08             	mov    0x8(%ebp),%edx
 875acc0:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875acc3:	01 f8                	add    %edi,%eax
 875acc5:	89 45 e0             	mov    %eax,-0x20(%ebp)
 875acc8:	8b 45 0c             	mov    0xc(%ebp),%eax
 875accb:	89 72 30             	mov    %esi,0x30(%edx)
 875acce:	8b 75 10             	mov    0x10(%ebp),%esi
 875acd1:	8b 78 18             	mov    0x18(%eax),%edi
 875acd4:	8b 46 1c             	mov    0x1c(%esi),%eax
 875acd7:	8b 75 e0             	mov    -0x20(%ebp),%esi
 875acda:	f7 e7                	mul    %edi
 875acdc:	31 ff                	xor    %edi,%edi
 875acde:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875ace1:	01 4d f0             	add    %ecx,-0x10(%ebp)
 875ace4:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 875ace7:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875acea:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875aced:	31 d2                	xor    %edx,%edx
 875acef:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875acf2:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875acf5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 875acf8:	31 ff                	xor    %edi,%edi
 875acfa:	01 c6                	add    %eax,%esi
 875acfc:	8b 45 0c             	mov    0xc(%ebp),%eax
 875acff:	89 75 e0             	mov    %esi,-0x20(%ebp)
 875ad02:	8b 75 10             	mov    0x10(%ebp),%esi
 875ad05:	11 d7                	adc    %edx,%edi
 875ad07:	89 7d e8             	mov    %edi,-0x18(%ebp)
 875ad0a:	8b 78 1c             	mov    0x1c(%eax),%edi
 875ad0d:	8b 46 18             	mov    0x18(%esi),%eax
 875ad10:	f7 e7                	mul    %edi
 875ad12:	31 ff                	xor    %edi,%edi
 875ad14:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875ad17:	01 4d f0             	add    %ecx,-0x10(%ebp)
 875ad1a:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875ad1d:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875ad20:	31 c9                	xor    %ecx,%ecx
 875ad22:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875ad25:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875ad28:	8b 45 08             	mov    0x8(%ebp),%eax
 875ad2b:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 875ad2e:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 875ad31:	31 ff                	xor    %edi,%edi
 875ad33:	01 d6                	add    %edx,%esi
 875ad35:	8b 55 f0             	mov    -0x10(%ebp),%edx
 875ad38:	11 cf                	adc    %ecx,%edi
 875ad3a:	89 f1                	mov    %esi,%ecx
 875ad3c:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875ad3f:	89 50 34             	mov    %edx,0x34(%eax)
 875ad42:	01 fe                	add    %edi,%esi
 875ad44:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875ad47:	8b 7f 1c             	mov    0x1c(%edi),%edi
 875ad4a:	89 f8                	mov    %edi,%eax
 875ad4c:	8b 7d 10             	mov    0x10(%ebp),%edi
 875ad4f:	f7 67 1c             	mull   0x1c(%edi)
 875ad52:	89 45 d8             	mov    %eax,-0x28(%ebp)
 875ad55:	89 55 dc             	mov    %edx,-0x24(%ebp)
 875ad58:	31 d2                	xor    %edx,%edx
 875ad5a:	01 4d d8             	add    %ecx,-0x28(%ebp)
 875ad5d:	11 55 dc             	adc    %edx,-0x24(%ebp)
 875ad60:	8b 45 dc             	mov    -0x24(%ebp),%eax
 875ad63:	8b 55 08             	mov    0x8(%ebp),%edx
 875ad66:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 875ad69:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 875ad6c:	8d 04 06             	lea    (%esi,%eax,1),%eax
 875ad6f:	89 42 3c             	mov    %eax,0x3c(%edx)
 875ad72:	89 4a 38             	mov    %ecx,0x38(%edx)
 875ad75:	83 c4 28             	add    $0x28,%esp
 875ad78:	5e                   	pop    %esi
 875ad79:	5f                   	pop    %edi
 875ad7a:	5d                   	pop    %ebp
 875ad7b:	c3                   	ret
 875ad7c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::Portable::Multiply8 @ 0x8759f10

/* TaoCrypt::Portable::Multiply8(unsigned int*, unsigned int const*, unsigned int const*) */

void TaoCrypt::Portable::Multiply8(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  *param_1 = (uint)((ulonglong)uVar2 * (ulonglong)uVar1);
  uVar3 = (ulonglong)param_3[1] * (ulonglong)*param_2 +
          ((ulonglong)uVar2 * (ulonglong)uVar1 >> 0x20);
  uVar1 = (uint)(uVar3 >> 0x20);
  lVar4 = (ulonglong)param_2[1] * (ulonglong)*param_3 + (uVar3 & 0xffffffff);
  uVar2 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar17 = (uint)CARRY4(uVar2,uVar1);
  param_1[1] = (uint)lVar4;
  uVar3 = (ulonglong)*param_3 * (ulonglong)param_2[2] + (ulonglong)(uVar2 + uVar1);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar5 = uVar17 + uVar1;
  uVar3 = (ulonglong)param_3[1] * (ulonglong)param_2[1] + (uVar3 & 0xffffffff);
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar6 = uVar2 + uVar5;
  lVar4 = (ulonglong)param_3[2] * (ulonglong)*param_2 + (uVar3 & 0xffffffff);
  uVar18 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar5 = (uint)CARRY4(uVar17,uVar1) + (uint)CARRY4(uVar2,uVar5) + (uint)CARRY4(uVar18,uVar6);
  param_1[2] = (uint)lVar4;
  uVar3 = (ulonglong)param_3[3] * (ulonglong)*param_2 + (ulonglong)(uVar18 + uVar6);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar6 = uVar5 + uVar1;
  uVar3 = (ulonglong)param_3[2] * (ulonglong)param_2[1] + (uVar3 & 0xffffffff);
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar7 = uVar2 + uVar6;
  uVar3 = (ulonglong)param_3[1] * (ulonglong)param_2[2] + (uVar3 & 0xffffffff);
  uVar18 = (uint)(uVar3 >> 0x20);
  uVar8 = uVar18 + uVar7;
  lVar4 = (ulonglong)*param_3 * (ulonglong)param_2[3] + (uVar3 & 0xffffffff);
  uVar17 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar6 = (uint)CARRY4(uVar5,uVar1) + (uint)CARRY4(uVar2,uVar6) + (uint)CARRY4(uVar18,uVar7) +
          (uint)CARRY4(uVar17,uVar8);
  param_1[3] = (uint)lVar4;
  uVar3 = (ulonglong)param_3[4] * (ulonglong)*param_2 + (ulonglong)(uVar17 + uVar8);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar7 = uVar6 + uVar1;
  uVar3 = (ulonglong)param_3[3] * (ulonglong)param_2[1] + (uVar3 & 0xffffffff);
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar8 = uVar2 + uVar7;
  uVar3 = (ulonglong)param_3[2] * (ulonglong)param_2[2] + (uVar3 & 0xffffffff);
  uVar18 = (uint)(uVar3 >> 0x20);
  uVar9 = uVar18 + uVar8;
  uVar3 = (ulonglong)param_3[1] * (ulonglong)param_2[3] + (uVar3 & 0xffffffff);
  uVar17 = (uint)(uVar3 >> 0x20);
  uVar10 = uVar17 + uVar9;
  lVar4 = (ulonglong)*param_3 * (ulonglong)param_2[4] + (uVar3 & 0xffffffff);
  uVar5 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar7 = (uint)CARRY4(uVar6,uVar1) + (uint)CARRY4(uVar2,uVar7) + (uint)CARRY4(uVar18,uVar8) +
          (uint)CARRY4(uVar17,uVar9) + (uint)CARRY4(uVar5,uVar10);
  param_1[4] = (uint)lVar4;
  uVar3 = (ulonglong)param_3[5] * (ulonglong)*param_2 + (ulonglong)(uVar5 + uVar10);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar8 = uVar7 + uVar1;
  uVar3 = (ulonglong)param_3[4] * (ulonglong)param_2[1] + (uVar3 & 0xffffffff);
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar9 = uVar2 + uVar8;
  uVar3 = (ulonglong)param_3[3] * (ulonglong)param_2[2] + (uVar3 & 0xffffffff);
  uVar18 = (uint)(uVar3 >> 0x20);
  uVar10 = uVar18 + uVar9;
  uVar3 = (ulonglong)param_3[2] * (ulonglong)param_2[3] + (uVar3 & 0xffffffff);
  uVar17 = (uint)(uVar3 >> 0x20);
  uVar11 = uVar17 + uVar10;
  uVar3 = (ulonglong)param_3[1] * (ulonglong)param_2[4] + (uVar3 & 0xffffffff);
  uVar5 = (uint)(uVar3 >> 0x20);
  uVar12 = uVar5 + uVar11;
  lVar4 = (ulonglong)*param_3 * (ulonglong)param_2[5] + (uVar3 & 0xffffffff);
  uVar6 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar8 = (uint)CARRY4(uVar7,uVar1) + (uint)CARRY4(uVar2,uVar8) + (uint)CARRY4(uVar18,uVar9) +
          (uint)CARRY4(uVar17,uVar10) + (uint)CARRY4(uVar5,uVar11) + (uint)CARRY4(uVar6,uVar12);
  param_1[5] = (uint)lVar4;
  uVar3 = (ulonglong)param_3[6] * (ulonglong)*param_2 + (ulonglong)(uVar6 + uVar12);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar9 = uVar8 + uVar1;
  uVar3 = (ulonglong)param_3[5] * (ulonglong)param_2[1] + (uVar3 & 0xffffffff);
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar10 = uVar2 + uVar9;
  uVar3 = (ulonglong)param_3[4] * (ulonglong)param_2[2] + (uVar3 & 0xffffffff);
  uVar18 = (uint)(uVar3 >> 0x20);
  uVar11 = uVar18 + uVar10;
  uVar3 = (ulonglong)param_3[3] * (ulonglong)param_2[3] + (uVar3 & 0xffffffff);
  uVar17 = (uint)(uVar3 >> 0x20);
  uVar12 = uVar17 + uVar11;
  uVar3 = (ulonglong)param_3[2] * (ulonglong)param_2[4] + (uVar3 & 0xffffffff);
  uVar5 = (uint)(uVar3 >> 0x20);
  uVar13 = uVar5 + uVar12;
  uVar3 = (ulonglong)param_3[1] * (ulonglong)param_2[5] + (uVar3 & 0xffffffff);
  uVar6 = (uint)(uVar3 >> 0x20);
  uVar14 = uVar6 + uVar13;
  lVar4 = (ulonglong)*param_3 * (ulonglong)param_2[6] + (uVar3 & 0xffffffff);
  uVar7 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar9 = (uint)CARRY4(uVar8,uVar1) + (uint)CARRY4(uVar2,uVar9) + (uint)CARRY4(uVar18,uVar10) +
          (uint)CARRY4(uVar17,uVar11) + (uint)CARRY4(uVar5,uVar12) + (uint)CARRY4(uVar6,uVar13) +
          (uint)CARRY4(uVar7,uVar14);
  param_1[6] = (uint)lVar4;
  uVar3 = (ulonglong)param_3[7] * (ulonglong)*param_2 + (ulonglong)(uVar7 + uVar14);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar10 = uVar9 + uVar1;
  uVar3 = (ulonglong)param_3[6] * (ulonglong)param_2[1] + (uVar3 & 0xffffffff);
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar11 = uVar2 + uVar10;
  uVar3 = (ulonglong)param_3[5] * (ulonglong)param_2[2] + (uVar3 & 0xffffffff);
  uVar18 = (uint)(uVar3 >> 0x20);
  uVar12 = uVar18 + uVar11;
  uVar3 = (ulonglong)param_3[4] * (ulonglong)param_2[3] + (uVar3 & 0xffffffff);
  uVar17 = (uint)(uVar3 >> 0x20);
  uVar13 = uVar17 + uVar12;
  uVar3 = (ulonglong)param_3[3] * (ulonglong)param_2[4] + (uVar3 & 0xffffffff);
  uVar5 = (uint)(uVar3 >> 0x20);
  uVar14 = uVar5 + uVar13;
  uVar3 = (ulonglong)param_3[2] * (ulonglong)param_2[5] + (uVar3 & 0xffffffff);
  uVar6 = (uint)(uVar3 >> 0x20);
  uVar15 = uVar6 + uVar14;
  uVar3 = (ulonglong)param_3[1] * (ulonglong)param_2[6] + (uVar3 & 0xffffffff);
  uVar7 = (uint)(uVar3 >> 0x20);
  uVar16 = uVar7 + uVar15;
  lVar4 = (ulonglong)*param_3 * (ulonglong)param_2[7] + (uVar3 & 0xffffffff);
  uVar8 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar9 = (uint)CARRY4(uVar9,uVar1) + (uint)CARRY4(uVar2,uVar10) + (uint)CARRY4(uVar18,uVar11) +
          (uint)CARRY4(uVar17,uVar12) + (uint)CARRY4(uVar5,uVar13) + (uint)CARRY4(uVar6,uVar14) +
          (uint)CARRY4(uVar7,uVar15) + (uint)CARRY4(uVar8,uVar16);
  param_1[7] = (uint)lVar4;
  uVar3 = (ulonglong)param_3[7] * (ulonglong)param_2[1] + (ulonglong)(uVar8 + uVar16);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar8 = uVar9 + uVar1;
  uVar3 = (ulonglong)param_3[6] * (ulonglong)param_2[2] + (uVar3 & 0xffffffff);
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar10 = uVar2 + uVar8;
  uVar3 = (ulonglong)param_3[5] * (ulonglong)param_2[3] + (uVar3 & 0xffffffff);
  uVar18 = (uint)(uVar3 >> 0x20);
  uVar11 = uVar18 + uVar10;
  uVar3 = (ulonglong)param_3[4] * (ulonglong)param_2[4] + (uVar3 & 0xffffffff);
  uVar17 = (uint)(uVar3 >> 0x20);
  uVar12 = uVar17 + uVar11;
  uVar3 = (ulonglong)param_3[3] * (ulonglong)param_2[5] + (uVar3 & 0xffffffff);
  uVar5 = (uint)(uVar3 >> 0x20);
  uVar13 = uVar5 + uVar12;
  uVar3 = (ulonglong)param_3[2] * (ulonglong)param_2[6] + (uVar3 & 0xffffffff);
  uVar6 = (uint)(uVar3 >> 0x20);
  uVar14 = uVar6 + uVar13;
  lVar4 = (ulonglong)param_3[1] * (ulonglong)param_2[7] + (uVar3 & 0xffffffff);
  uVar7 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar8 = (uint)CARRY4(uVar9,uVar1) + (uint)CARRY4(uVar2,uVar8) + (uint)CARRY4(uVar18,uVar10) +
          (uint)CARRY4(uVar17,uVar11) + (uint)CARRY4(uVar5,uVar12) + (uint)CARRY4(uVar6,uVar13) +
          (uint)CARRY4(uVar7,uVar14);
  param_1[8] = (uint)lVar4;
  uVar3 = (ulonglong)param_3[7] * (ulonglong)param_2[2] + (ulonglong)(uVar7 + uVar14);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar7 = uVar8 + uVar1;
  uVar3 = (ulonglong)param_3[6] * (ulonglong)param_2[3] + (uVar3 & 0xffffffff);
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar9 = uVar2 + uVar7;
  uVar3 = (ulonglong)param_3[5] * (ulonglong)param_2[4] + (uVar3 & 0xffffffff);
  uVar18 = (uint)(uVar3 >> 0x20);
  uVar10 = uVar18 + uVar9;
  uVar3 = (ulonglong)param_3[4] * (ulonglong)param_2[5] + (uVar3 & 0xffffffff);
  uVar17 = (uint)(uVar3 >> 0x20);
  uVar11 = uVar17 + uVar10;
  uVar3 = (ulonglong)param_3[3] * (ulonglong)param_2[6] + (uVar3 & 0xffffffff);
  uVar5 = (uint)(uVar3 >> 0x20);
  uVar12 = uVar5 + uVar11;
  lVar4 = (ulonglong)param_3[2] * (ulonglong)param_2[7] + (uVar3 & 0xffffffff);
  uVar6 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar7 = (uint)CARRY4(uVar8,uVar1) + (uint)CARRY4(uVar2,uVar7) + (uint)CARRY4(uVar18,uVar9) +
          (uint)CARRY4(uVar17,uVar10) + (uint)CARRY4(uVar5,uVar11) + (uint)CARRY4(uVar6,uVar12);
  param_1[9] = (uint)lVar4;
  uVar3 = (ulonglong)param_3[7] * (ulonglong)param_2[3] + (ulonglong)(uVar6 + uVar12);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar6 = uVar7 + uVar1;
  uVar3 = (ulonglong)param_3[6] * (ulonglong)param_2[4] + (uVar3 & 0xffffffff);
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar8 = uVar2 + uVar6;
  uVar3 = (ulonglong)param_3[5] * (ulonglong)param_2[5] + (uVar3 & 0xffffffff);
  uVar18 = (uint)(uVar3 >> 0x20);
  uVar9 = uVar18 + uVar8;
  uVar3 = (ulonglong)param_3[4] * (ulonglong)param_2[6] + (uVar3 & 0xffffffff);
  uVar17 = (uint)(uVar3 >> 0x20);
  uVar10 = uVar17 + uVar9;
  lVar4 = (ulonglong)param_3[3] * (ulonglong)param_2[7] + (uVar3 & 0xffffffff);
  uVar5 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar6 = (uint)CARRY4(uVar7,uVar1) + (uint)CARRY4(uVar2,uVar6) + (uint)CARRY4(uVar18,uVar8) +
          (uint)CARRY4(uVar17,uVar9) + (uint)CARRY4(uVar5,uVar10);
  param_1[10] = (uint)lVar4;
  uVar3 = (ulonglong)param_3[7] * (ulonglong)param_2[4] + (ulonglong)(uVar5 + uVar10);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar5 = uVar6 + uVar1;
  uVar3 = (ulonglong)param_3[6] * (ulonglong)param_2[5] + (uVar3 & 0xffffffff);
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar7 = uVar2 + uVar5;
  uVar3 = (ulonglong)param_3[5] * (ulonglong)param_2[6] + (uVar3 & 0xffffffff);
  uVar18 = (uint)(uVar3 >> 0x20);
  uVar8 = uVar18 + uVar7;
  lVar4 = (ulonglong)param_3[4] * (ulonglong)param_2[7] + (uVar3 & 0xffffffff);
  uVar17 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar5 = (uint)CARRY4(uVar6,uVar1) + (uint)CARRY4(uVar2,uVar5) + (uint)CARRY4(uVar18,uVar7) +
          (uint)CARRY4(uVar17,uVar8);
  param_1[0xb] = (uint)lVar4;
  uVar3 = (ulonglong)param_3[7] * (ulonglong)param_2[5] + (ulonglong)(uVar17 + uVar8);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar17 = uVar5 + uVar1;
  uVar3 = (ulonglong)param_3[6] * (ulonglong)param_2[6] + (uVar3 & 0xffffffff);
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar6 = uVar2 + uVar17;
  lVar4 = (ulonglong)param_3[5] * (ulonglong)param_2[7] + (uVar3 & 0xffffffff);
  uVar18 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar17 = (uint)CARRY4(uVar5,uVar1) + (uint)CARRY4(uVar2,uVar17) + (uint)CARRY4(uVar18,uVar6);
  param_1[0xc] = (uint)lVar4;
  uVar3 = (ulonglong)param_3[7] * (ulonglong)param_2[6] + (ulonglong)(uVar18 + uVar6);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar18 = uVar17 + uVar1;
  lVar4 = (ulonglong)param_3[6] * (ulonglong)param_2[7] + (uVar3 & 0xffffffff);
  uVar2 = (uint)((ulonglong)lVar4 >> 0x20);
  param_1[0xd] = (uint)lVar4;
  lVar4 = (ulonglong)param_2[7] * (ulonglong)param_3[7] + (ulonglong)(uVar2 + uVar18);
  param_1[0xf] = (uint)CARRY4(uVar17,uVar1) + (uint)CARRY4(uVar2,uVar18) +
                 (int)((ulonglong)lVar4 >> 0x20);
  param_1[0xe] = (uint)lVar4;
  return;
}

```

---

## Multiply8Bottom

```asm
// === 0875aeb0 TaoCrypt::Portable::Multiply8Bottom  [0x0875aeb0-0x875b4af] ===
 875aeb0:	55                   	push   %ebp
 875aeb1:	89 e5                	mov    %esp,%ebp
 875aeb3:	57                   	push   %edi
 875aeb4:	31 ff                	xor    %edi,%edi
 875aeb6:	56                   	push   %esi
 875aeb7:	83 ec 30             	sub    $0x30,%esp
 875aeba:	8b 4d 10             	mov    0x10(%ebp),%ecx
 875aebd:	8b 45 0c             	mov    0xc(%ebp),%eax
 875aec0:	8b 30                	mov    (%eax),%esi
 875aec2:	8b 01                	mov    (%ecx),%eax
 875aec4:	f7 e6                	mul    %esi
 875aec6:	89 55 dc             	mov    %edx,-0x24(%ebp)
 875aec9:	89 c6                	mov    %eax,%esi
 875aecb:	8b 55 0c             	mov    0xc(%ebp),%edx
 875aece:	8b 45 08             	mov    0x8(%ebp),%eax
 875aed1:	89 30                	mov    %esi,(%eax)
 875aed3:	8b 32                	mov    (%edx),%esi
 875aed5:	8b 41 04             	mov    0x4(%ecx),%eax
 875aed8:	f7 e6                	mul    %esi
 875aeda:	8b 75 dc             	mov    -0x24(%ebp),%esi
 875aedd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875aee0:	01 75 f0             	add    %esi,-0x10(%ebp)
 875aee3:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875aee6:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875aee9:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875aeec:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875aeef:	8b 55 f4             	mov    -0xc(%ebp),%edx
 875aef2:	8b 7f 04             	mov    0x4(%edi),%edi
 875aef5:	89 d1                	mov    %edx,%ecx
 875aef7:	89 f8                	mov    %edi,%eax
 875aef9:	8b 7d 10             	mov    0x10(%ebp),%edi
 875aefc:	f7 27                	mull   (%edi)
 875aefe:	31 ff                	xor    %edi,%edi
 875af00:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875af03:	01 75 f0             	add    %esi,-0x10(%ebp)
 875af06:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875af09:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875af0c:	31 d2                	xor    %edx,%edx
 875af0e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 875af11:	31 ff                	xor    %edi,%edi
 875af13:	89 c6                	mov    %eax,%esi
 875af15:	01 ce                	add    %ecx,%esi
 875af17:	11 d7                	adc    %edx,%edi
 875af19:	89 f1                	mov    %esi,%ecx
 875af1b:	8b 55 08             	mov    0x8(%ebp),%edx
 875af1e:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875af21:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 875af24:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875af27:	89 72 04             	mov    %esi,0x4(%edx)
 875af2a:	8b 77 08             	mov    0x8(%edi),%esi
 875af2d:	8b 7d 10             	mov    0x10(%ebp),%edi
 875af30:	8b 07                	mov    (%edi),%eax
 875af32:	31 ff                	xor    %edi,%edi
 875af34:	f7 e6                	mul    %esi
 875af36:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 875af39:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875af3c:	01 4d e8             	add    %ecx,-0x18(%ebp)
 875af3f:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875af42:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875af45:	31 d2                	xor    %edx,%edx
 875af47:	8b 45 ec             	mov    -0x14(%ebp),%eax
 875af4a:	31 ff                	xor    %edi,%edi
 875af4c:	89 45 dc             	mov    %eax,-0x24(%ebp)
 875af4f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 875af52:	01 c6                	add    %eax,%esi
 875af54:	89 f1                	mov    %esi,%ecx
 875af56:	8b 75 0c             	mov    0xc(%ebp),%esi
 875af59:	11 d7                	adc    %edx,%edi
 875af5b:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 875af5e:	8b 7e 04             	mov    0x4(%esi),%edi
 875af61:	8b 75 10             	mov    0x10(%ebp),%esi
 875af64:	8b 46 04             	mov    0x4(%esi),%eax
 875af67:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875af6a:	f7 e7                	mul    %edi
 875af6c:	31 ff                	xor    %edi,%edi
 875af6e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875af71:	01 75 f0             	add    %esi,-0x10(%ebp)
 875af74:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875af77:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875af7a:	31 d2                	xor    %edx,%edx
 875af7c:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875af7f:	89 7d dc             	mov    %edi,-0x24(%ebp)
 875af82:	8b 75 dc             	mov    -0x24(%ebp),%esi
 875af85:	31 ff                	xor    %edi,%edi
 875af87:	01 ce                	add    %ecx,%esi
 875af89:	11 d7                	adc    %edx,%edi
 875af8b:	89 f1                	mov    %esi,%ecx
 875af8d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875af90:	8b 75 0c             	mov    0xc(%ebp),%esi
 875af93:	01 fa                	add    %edi,%edx
 875af95:	8b 3e                	mov    (%esi),%edi
 875af97:	8b 75 10             	mov    0x10(%ebp),%esi
 875af9a:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 875af9d:	8b 46 08             	mov    0x8(%esi),%eax
 875afa0:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875afa3:	f7 e7                	mul    %edi
 875afa5:	31 ff                	xor    %edi,%edi
 875afa7:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875afaa:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 875afad:	01 75 e8             	add    %esi,-0x18(%ebp)
 875afb0:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875afb3:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875afb6:	31 d2                	xor    %edx,%edx
 875afb8:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875afbb:	89 7d dc             	mov    %edi,-0x24(%ebp)
 875afbe:	8b 75 dc             	mov    -0x24(%ebp),%esi
 875afc1:	31 ff                	xor    %edi,%edi
 875afc3:	01 ce                	add    %ecx,%esi
 875afc5:	11 d7                	adc    %edx,%edi
 875afc7:	89 f1                	mov    %esi,%ecx
 875afc9:	8b 55 08             	mov    0x8(%ebp),%edx
 875afcc:	01 f8                	add    %edi,%eax
 875afce:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875afd1:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875afd4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 875afd7:	89 72 08             	mov    %esi,0x8(%edx)
 875afda:	8b 37                	mov    (%edi),%esi
 875afdc:	8b 7d 10             	mov    0x10(%ebp),%edi
 875afdf:	8b 47 0c             	mov    0xc(%edi),%eax
 875afe2:	31 ff                	xor    %edi,%edi
 875afe4:	f7 e6                	mul    %esi
 875afe6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875afe9:	01 4d f0             	add    %ecx,-0x10(%ebp)
 875afec:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875afef:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875aff2:	31 d2                	xor    %edx,%edx
 875aff4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 875aff7:	31 ff                	xor    %edi,%edi
 875aff9:	89 45 dc             	mov    %eax,-0x24(%ebp)
 875affc:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 875afff:	8b 45 dc             	mov    -0x24(%ebp),%eax
 875b002:	01 c6                	add    %eax,%esi
 875b004:	89 f1                	mov    %esi,%ecx
 875b006:	8b 75 0c             	mov    0xc(%ebp),%esi
 875b009:	11 d7                	adc    %edx,%edi
 875b00b:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 875b00e:	8b 7e 04             	mov    0x4(%esi),%edi
 875b011:	8b 75 10             	mov    0x10(%ebp),%esi
 875b014:	8b 46 08             	mov    0x8(%esi),%eax
 875b017:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875b01a:	f7 e7                	mul    %edi
 875b01c:	31 ff                	xor    %edi,%edi
 875b01e:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875b021:	01 75 e8             	add    %esi,-0x18(%ebp)
 875b024:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875b027:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875b02a:	31 d2                	xor    %edx,%edx
 875b02c:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875b02f:	89 7d dc             	mov    %edi,-0x24(%ebp)
 875b032:	8b 75 dc             	mov    -0x24(%ebp),%esi
 875b035:	31 ff                	xor    %edi,%edi
 875b037:	01 ce                	add    %ecx,%esi
 875b039:	11 d7                	adc    %edx,%edi
 875b03b:	89 f1                	mov    %esi,%ecx
 875b03d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875b040:	8b 75 0c             	mov    0xc(%ebp),%esi
 875b043:	01 fa                	add    %edi,%edx
 875b045:	8b 7e 08             	mov    0x8(%esi),%edi
 875b048:	8b 75 10             	mov    0x10(%ebp),%esi
 875b04b:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 875b04e:	8b 46 04             	mov    0x4(%esi),%eax
 875b051:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875b054:	f7 e7                	mul    %edi
 875b056:	31 ff                	xor    %edi,%edi
 875b058:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875b05b:	01 75 f0             	add    %esi,-0x10(%ebp)
 875b05e:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875b061:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875b064:	31 d2                	xor    %edx,%edx
 875b066:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875b069:	89 7d dc             	mov    %edi,-0x24(%ebp)
 875b06c:	8b 75 dc             	mov    -0x24(%ebp),%esi
 875b06f:	31 ff                	xor    %edi,%edi
 875b071:	01 ce                	add    %ecx,%esi
 875b073:	11 d7                	adc    %edx,%edi
 875b075:	89 f1                	mov    %esi,%ecx
 875b077:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875b07a:	8b 75 0c             	mov    0xc(%ebp),%esi
 875b07d:	01 fa                	add    %edi,%edx
 875b07f:	8b 7e 0c             	mov    0xc(%esi),%edi
 875b082:	8b 75 10             	mov    0x10(%ebp),%esi
 875b085:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 875b088:	8b 06                	mov    (%esi),%eax
 875b08a:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875b08d:	f7 e7                	mul    %edi
 875b08f:	31 ff                	xor    %edi,%edi
 875b091:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875b094:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 875b097:	01 75 e8             	add    %esi,-0x18(%ebp)
 875b09a:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875b09d:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875b0a0:	31 d2                	xor    %edx,%edx
 875b0a2:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875b0a5:	89 7d dc             	mov    %edi,-0x24(%ebp)
 875b0a8:	8b 75 dc             	mov    -0x24(%ebp),%esi
 875b0ab:	31 ff                	xor    %edi,%edi
 875b0ad:	01 ce                	add    %ecx,%esi
 875b0af:	11 d7                	adc    %edx,%edi
 875b0b1:	89 f1                	mov    %esi,%ecx
 875b0b3:	8b 55 08             	mov    0x8(%ebp),%edx
 875b0b6:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875b0b9:	01 f8                	add    %edi,%eax
 875b0bb:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875b0be:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875b0c1:	89 72 0c             	mov    %esi,0xc(%edx)
 875b0c4:	8b 37                	mov    (%edi),%esi
 875b0c6:	8b 7d 10             	mov    0x10(%ebp),%edi
 875b0c9:	8b 47 10             	mov    0x10(%edi),%eax
 875b0cc:	31 ff                	xor    %edi,%edi
 875b0ce:	f7 e6                	mul    %esi
 875b0d0:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875b0d3:	01 4d e8             	add    %ecx,-0x18(%ebp)
 875b0d6:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875b0d9:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875b0dc:	31 d2                	xor    %edx,%edx
 875b0de:	8b 45 ec             	mov    -0x14(%ebp),%eax
 875b0e1:	31 ff                	xor    %edi,%edi
 875b0e3:	89 45 dc             	mov    %eax,-0x24(%ebp)
 875b0e6:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875b0e9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 875b0ec:	01 c6                	add    %eax,%esi
 875b0ee:	89 f1                	mov    %esi,%ecx
 875b0f0:	8b 75 0c             	mov    0xc(%ebp),%esi
 875b0f3:	11 d7                	adc    %edx,%edi
 875b0f5:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 875b0f8:	8b 7e 04             	mov    0x4(%esi),%edi
 875b0fb:	8b 75 10             	mov    0x10(%ebp),%esi
 875b0fe:	8b 46 0c             	mov    0xc(%esi),%eax
 875b101:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875b104:	f7 e7                	mul    %edi
 875b106:	31 ff                	xor    %edi,%edi
 875b108:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875b10b:	01 75 f0             	add    %esi,-0x10(%ebp)
 875b10e:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875b111:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875b114:	31 d2                	xor    %edx,%edx
 875b116:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875b119:	89 7d dc             	mov    %edi,-0x24(%ebp)
 875b11c:	8b 75 dc             	mov    -0x24(%ebp),%esi
 875b11f:	31 ff                	xor    %edi,%edi
 875b121:	01 ce                	add    %ecx,%esi
 875b123:	11 d7                	adc    %edx,%edi
 875b125:	89 f1                	mov    %esi,%ecx
 875b127:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875b12a:	8b 75 0c             	mov    0xc(%ebp),%esi
 875b12d:	01 fa                	add    %edi,%edx
 875b12f:	8b 7e 08             	mov    0x8(%esi),%edi
 875b132:	8b 75 10             	mov    0x10(%ebp),%esi
 875b135:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 875b138:	8b 46 08             	mov    0x8(%esi),%eax
 875b13b:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875b13e:	f7 e7                	mul    %edi
 875b140:	31 ff                	xor    %edi,%edi
 875b142:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875b145:	01 75 e8             	add    %esi,-0x18(%ebp)
 875b148:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875b14b:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875b14e:	31 d2                	xor    %edx,%edx
 875b150:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875b153:	89 7d dc             	mov    %edi,-0x24(%ebp)
 875b156:	8b 75 dc             	mov    -0x24(%ebp),%esi
 875b159:	31 ff                	xor    %edi,%edi
 875b15b:	01 ce                	add    %ecx,%esi
 875b15d:	11 d7                	adc    %edx,%edi
 875b15f:	89 f1                	mov    %esi,%ecx
 875b161:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875b164:	8b 75 0c             	mov    0xc(%ebp),%esi
 875b167:	01 fa                	add    %edi,%edx
 875b169:	8b 7e 0c             	mov    0xc(%esi),%edi
 875b16c:	8b 75 10             	mov    0x10(%ebp),%esi
 875b16f:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 875b172:	8b 46 04             	mov    0x4(%esi),%eax
 875b175:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875b178:	f7 e7                	mul    %edi
 875b17a:	31 ff                	xor    %edi,%edi
 875b17c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875b17f:	01 75 f0             	add    %esi,-0x10(%ebp)
 875b182:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875b185:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875b188:	31 d2                	xor    %edx,%edx
 875b18a:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875b18d:	89 7d dc             	mov    %edi,-0x24(%ebp)
 875b190:	8b 75 dc             	mov    -0x24(%ebp),%esi
 875b193:	31 ff                	xor    %edi,%edi
 875b195:	01 ce                	add    %ecx,%esi
 875b197:	11 d7                	adc    %edx,%edi
 875b199:	89 f1                	mov    %esi,%ecx
 875b19b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875b19e:	8b 75 0c             	mov    0xc(%ebp),%esi
 875b1a1:	01 fa                	add    %edi,%edx
 875b1a3:	8b 7e 10             	mov    0x10(%esi),%edi
 875b1a6:	8b 75 10             	mov    0x10(%ebp),%esi
 875b1a9:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 875b1ac:	8b 06                	mov    (%esi),%eax
 875b1ae:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875b1b1:	f7 e7                	mul    %edi
 875b1b3:	31 ff                	xor    %edi,%edi
 875b1b5:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875b1b8:	01 75 e8             	add    %esi,-0x18(%ebp)
 875b1bb:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875b1be:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875b1c1:	31 d2                	xor    %edx,%edx
 875b1c3:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875b1c6:	89 7d dc             	mov    %edi,-0x24(%ebp)
 875b1c9:	8b 75 dc             	mov    -0x24(%ebp),%esi
 875b1cc:	31 ff                	xor    %edi,%edi
 875b1ce:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 875b1d1:	01 ce                	add    %ecx,%esi
 875b1d3:	11 d7                	adc    %edx,%edi
 875b1d5:	89 f1                	mov    %esi,%ecx
 875b1d7:	8b 55 08             	mov    0x8(%ebp),%edx
 875b1da:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875b1dd:	01 f8                	add    %edi,%eax
 875b1df:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875b1e2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 875b1e5:	89 72 10             	mov    %esi,0x10(%edx)
 875b1e8:	8b 37                	mov    (%edi),%esi
 875b1ea:	8b 7d 10             	mov    0x10(%ebp),%edi
 875b1ed:	8b 47 14             	mov    0x14(%edi),%eax
 875b1f0:	31 ff                	xor    %edi,%edi
 875b1f2:	f7 e6                	mul    %esi
 875b1f4:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 875b1f7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875b1fa:	01 4d f0             	add    %ecx,-0x10(%ebp)
 875b1fd:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875b200:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875b203:	31 d2                	xor    %edx,%edx
 875b205:	8b 45 f4             	mov    -0xc(%ebp),%eax
 875b208:	31 ff                	xor    %edi,%edi
 875b20a:	89 45 dc             	mov    %eax,-0x24(%ebp)
 875b20d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 875b210:	01 c6                	add    %eax,%esi
 875b212:	89 f1                	mov    %esi,%ecx
 875b214:	8b 75 0c             	mov    0xc(%ebp),%esi
 875b217:	11 d7                	adc    %edx,%edi
 875b219:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 875b21c:	8b 7e 04             	mov    0x4(%esi),%edi
 875b21f:	8b 75 10             	mov    0x10(%ebp),%esi
 875b222:	8b 46 10             	mov    0x10(%esi),%eax
 875b225:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875b228:	f7 e7                	mul    %edi
 875b22a:	31 ff                	xor    %edi,%edi
 875b22c:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875b22f:	01 75 e8             	add    %esi,-0x18(%ebp)
 875b232:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875b235:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875b238:	31 d2                	xor    %edx,%edx
 875b23a:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875b23d:	89 7d dc             	mov    %edi,-0x24(%ebp)
 875b240:	8b 75 dc             	mov    -0x24(%ebp),%esi
 875b243:	31 ff                	xor    %edi,%edi
 875b245:	01 ce                	add    %ecx,%esi
 875b247:	11 d7                	adc    %edx,%edi
 875b249:	89 f1                	mov    %esi,%ecx
 875b24b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875b24e:	8b 75 0c             	mov    0xc(%ebp),%esi
 875b251:	01 fa                	add    %edi,%edx
 875b253:	8b 7e 08             	mov    0x8(%esi),%edi
 875b256:	8b 75 10             	mov    0x10(%ebp),%esi
 875b259:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 875b25c:	8b 46 0c             	mov    0xc(%esi),%eax
 875b25f:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875b262:	f7 e7                	mul    %edi
 875b264:	31 ff                	xor    %edi,%edi
 875b266:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875b269:	01 75 f0             	add    %esi,-0x10(%ebp)
 875b26c:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875b26f:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875b272:	31 d2                	xor    %edx,%edx
 875b274:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875b277:	89 7d dc             	mov    %edi,-0x24(%ebp)
 875b27a:	8b 75 dc             	mov    -0x24(%ebp),%esi
 875b27d:	31 ff                	xor    %edi,%edi
 875b27f:	01 ce                	add    %ecx,%esi
 875b281:	11 d7                	adc    %edx,%edi
 875b283:	89 f1                	mov    %esi,%ecx
 875b285:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875b288:	8b 75 0c             	mov    0xc(%ebp),%esi
 875b28b:	01 fa                	add    %edi,%edx
 875b28d:	8b 7e 0c             	mov    0xc(%esi),%edi
 875b290:	8b 75 10             	mov    0x10(%ebp),%esi
 875b293:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 875b296:	8b 46 08             	mov    0x8(%esi),%eax
 875b299:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875b29c:	f7 e7                	mul    %edi
 875b29e:	31 ff                	xor    %edi,%edi
 875b2a0:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875b2a3:	01 75 e8             	add    %esi,-0x18(%ebp)
 875b2a6:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875b2a9:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875b2ac:	31 d2                	xor    %edx,%edx
 875b2ae:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875b2b1:	89 7d dc             	mov    %edi,-0x24(%ebp)
 875b2b4:	8b 75 dc             	mov    -0x24(%ebp),%esi
 875b2b7:	31 ff                	xor    %edi,%edi
 875b2b9:	01 ce                	add    %ecx,%esi
 875b2bb:	11 d7                	adc    %edx,%edi
 875b2bd:	89 f1                	mov    %esi,%ecx
 875b2bf:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875b2c2:	8b 75 0c             	mov    0xc(%ebp),%esi
 875b2c5:	01 fa                	add    %edi,%edx
 875b2c7:	8b 7e 10             	mov    0x10(%esi),%edi
 875b2ca:	8b 75 10             	mov    0x10(%ebp),%esi
 875b2cd:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 875b2d0:	8b 46 04             	mov    0x4(%esi),%eax
 875b2d3:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875b2d6:	f7 e7                	mul    %edi
 875b2d8:	31 ff                	xor    %edi,%edi
 875b2da:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875b2dd:	01 75 f0             	add    %esi,-0x10(%ebp)
 875b2e0:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875b2e3:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875b2e6:	31 d2                	xor    %edx,%edx
 875b2e8:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875b2eb:	89 7d dc             	mov    %edi,-0x24(%ebp)
 875b2ee:	8b 75 dc             	mov    -0x24(%ebp),%esi
 875b2f1:	31 ff                	xor    %edi,%edi
 875b2f3:	01 ce                	add    %ecx,%esi
 875b2f5:	11 d7                	adc    %edx,%edi
 875b2f7:	89 f1                	mov    %esi,%ecx
 875b2f9:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875b2fc:	8b 75 0c             	mov    0xc(%ebp),%esi
 875b2ff:	01 fa                	add    %edi,%edx
 875b301:	8b 7e 14             	mov    0x14(%esi),%edi
 875b304:	8b 75 10             	mov    0x10(%ebp),%esi
 875b307:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 875b30a:	8b 06                	mov    (%esi),%eax
 875b30c:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875b30f:	f7 e7                	mul    %edi
 875b311:	31 ff                	xor    %edi,%edi
 875b313:	89 45 e8             	mov    %eax,-0x18(%ebp)
 875b316:	01 75 e8             	add    %esi,-0x18(%ebp)
 875b319:	89 55 ec             	mov    %edx,-0x14(%ebp)
 875b31c:	11 7d ec             	adc    %edi,-0x14(%ebp)
 875b31f:	31 d2                	xor    %edx,%edx
 875b321:	8b 7d ec             	mov    -0x14(%ebp),%edi
 875b324:	89 7d dc             	mov    %edi,-0x24(%ebp)
 875b327:	8b 75 dc             	mov    -0x24(%ebp),%esi
 875b32a:	31 ff                	xor    %edi,%edi
 875b32c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 875b32f:	01 ce                	add    %ecx,%esi
 875b331:	11 d7                	adc    %edx,%edi
 875b333:	89 f1                	mov    %esi,%ecx
 875b335:	8b 55 08             	mov    0x8(%ebp),%edx
 875b338:	8b 75 e8             	mov    -0x18(%ebp),%esi
 875b33b:	01 f8                	add    %edi,%eax
 875b33d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 875b340:	8b 45 0c             	mov    0xc(%ebp),%eax
 875b343:	89 72 14             	mov    %esi,0x14(%edx)
 875b346:	8b 75 10             	mov    0x10(%ebp),%esi
 875b349:	8b 38                	mov    (%eax),%edi
 875b34b:	8b 46 18             	mov    0x18(%esi),%eax
 875b34e:	f7 e7                	mul    %edi
 875b350:	31 ff                	xor    %edi,%edi
 875b352:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875b355:	8b 45 0c             	mov    0xc(%ebp),%eax
 875b358:	01 4d f0             	add    %ecx,-0x10(%ebp)
 875b35b:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 875b35e:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875b361:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875b364:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875b367:	8b 7d f4             	mov    -0xc(%ebp),%edi
 875b36a:	8b 40 04             	mov    0x4(%eax),%eax
 875b36d:	01 f9                	add    %edi,%ecx
 875b36f:	8b 7d 10             	mov    0x10(%ebp),%edi
 875b372:	f7 67 14             	mull   0x14(%edi)
 875b375:	31 ff                	xor    %edi,%edi
 875b377:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875b37a:	8b 55 0c             	mov    0xc(%ebp),%edx
 875b37d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875b380:	01 75 f0             	add    %esi,-0x10(%ebp)
 875b383:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875b386:	8b 45 f4             	mov    -0xc(%ebp),%eax
 875b389:	8b 7d 10             	mov    0x10(%ebp),%edi
 875b38c:	8b 52 08             	mov    0x8(%edx),%edx
 875b38f:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875b392:	01 c1                	add    %eax,%ecx
 875b394:	89 d0                	mov    %edx,%eax
 875b396:	f7 67 10             	mull   0x10(%edi)
 875b399:	31 ff                	xor    %edi,%edi
 875b39b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875b39e:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875b3a1:	8b 55 0c             	mov    0xc(%ebp),%edx
 875b3a4:	01 75 f0             	add    %esi,-0x10(%ebp)
 875b3a7:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875b3aa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 875b3ad:	8b 7d 10             	mov    0x10(%ebp),%edi
 875b3b0:	8b 52 0c             	mov    0xc(%edx),%edx
 875b3b3:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875b3b6:	01 c1                	add    %eax,%ecx
 875b3b8:	89 d0                	mov    %edx,%eax
 875b3ba:	f7 67 0c             	mull   0xc(%edi)
 875b3bd:	31 ff                	xor    %edi,%edi
 875b3bf:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875b3c2:	01 75 f0             	add    %esi,-0x10(%ebp)
 875b3c5:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875b3c8:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875b3cb:	8b 55 0c             	mov    0xc(%ebp),%edx
 875b3ce:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875b3d1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 875b3d4:	8b 7a 10             	mov    0x10(%edx),%edi
 875b3d7:	01 c1                	add    %eax,%ecx
 875b3d9:	89 4d e8             	mov    %ecx,-0x18(%ebp)
 875b3dc:	8b 4d 10             	mov    0x10(%ebp),%ecx
 875b3df:	8b 41 08             	mov    0x8(%ecx),%eax
 875b3e2:	f7 e7                	mul    %edi
 875b3e4:	31 ff                	xor    %edi,%edi
 875b3e6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875b3e9:	01 75 f0             	add    %esi,-0x10(%ebp)
 875b3ec:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 875b3ef:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875b3f2:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875b3f5:	8b 75 f4             	mov    -0xc(%ebp),%esi
 875b3f8:	03 75 e8             	add    -0x18(%ebp),%esi
 875b3fb:	89 75 e8             	mov    %esi,-0x18(%ebp)
 875b3fe:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875b401:	8b 77 14             	mov    0x14(%edi),%esi
 875b404:	8b 7d 10             	mov    0x10(%ebp),%edi
 875b407:	8b 47 04             	mov    0x4(%edi),%eax
 875b40a:	31 ff                	xor    %edi,%edi
 875b40c:	f7 e6                	mul    %esi
 875b40e:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875b411:	8b 55 0c             	mov    0xc(%ebp),%edx
 875b414:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875b417:	01 4d f0             	add    %ecx,-0x10(%ebp)
 875b41a:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875b41d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 875b420:	8b 52 18             	mov    0x18(%edx),%edx
 875b423:	8b 7d 10             	mov    0x10(%ebp),%edi
 875b426:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 875b429:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875b42c:	01 c1                	add    %eax,%ecx
 875b42e:	89 d0                	mov    %edx,%eax
 875b430:	f7 27                	mull   (%edi)
 875b432:	31 ff                	xor    %edi,%edi
 875b434:	89 45 f0             	mov    %eax,-0x10(%ebp)
 875b437:	01 75 f0             	add    %esi,-0x10(%ebp)
 875b43a:	8b 75 f0             	mov    -0x10(%ebp),%esi
 875b43d:	89 55 f4             	mov    %edx,-0xc(%ebp)
 875b440:	8b 55 08             	mov    0x8(%ebp),%edx
 875b443:	11 7d f4             	adc    %edi,-0xc(%ebp)
 875b446:	8b 45 f4             	mov    -0xc(%ebp),%eax
 875b449:	8b 7d 10             	mov    0x10(%ebp),%edi
 875b44c:	89 72 18             	mov    %esi,0x18(%edx)
 875b44f:	8b 55 0c             	mov    0xc(%ebp),%edx
 875b452:	01 c1                	add    %eax,%ecx
 875b454:	8b 07                	mov    (%edi),%eax
 875b456:	0f af 42 1c          	imul   0x1c(%edx),%eax
 875b45a:	8d 0c 08             	lea    (%eax,%ecx,1),%ecx
 875b45d:	8b 47 1c             	mov    0x1c(%edi),%eax
 875b460:	0f af 02             	imul   (%edx),%eax
 875b463:	01 c1                	add    %eax,%ecx
 875b465:	8b 47 18             	mov    0x18(%edi),%eax
 875b468:	0f af 42 04          	imul   0x4(%edx),%eax
 875b46c:	01 c1                	add    %eax,%ecx
 875b46e:	8b 47 10             	mov    0x10(%edi),%eax
 875b471:	0f af 42 0c          	imul   0xc(%edx),%eax
 875b475:	01 c1                	add    %eax,%ecx
 875b477:	8b 47 14             	mov    0x14(%edi),%eax
 875b47a:	0f af 42 08          	imul   0x8(%edx),%eax
 875b47e:	01 c1                	add    %eax,%ecx
 875b480:	8b 47 08             	mov    0x8(%edi),%eax
 875b483:	0f af 42 14          	imul   0x14(%edx),%eax
 875b487:	01 c1                	add    %eax,%ecx
 875b489:	8b 47 0c             	mov    0xc(%edi),%eax
 875b48c:	0f af 42 10          	imul   0x10(%edx),%eax
 875b490:	01 c1                	add    %eax,%ecx
 875b492:	8b 47 04             	mov    0x4(%edi),%eax
 875b495:	0f af 42 18          	imul   0x18(%edx),%eax
 875b499:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 875b49c:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875b49f:	89 41 1c             	mov    %eax,0x1c(%ecx)
 875b4a2:	83 c4 30             	add    $0x30,%esp
 875b4a5:	5e                   	pop    %esi
 875b4a6:	5f                   	pop    %edi
 875b4a7:	5d                   	pop    %ebp
 875b4a8:	c3                   	ret
 875b4a9:	90                   	nop
 875b4aa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TaoCrypt::Portable::Multiply8Bottom @ 0x875aeb0

/* TaoCrypt::Portable::Multiply8Bottom(unsigned int*, unsigned int const*, unsigned int const*) */

void TaoCrypt::Portable::Multiply8Bottom(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  
  uVar18 = (uint)((ulonglong)*param_3 * (ulonglong)*param_2 >> 0x20);
  *param_1 = (uint)((ulonglong)*param_3 * (ulonglong)*param_2);
  uVar2 = (uint)((ulonglong)param_3[1] * (ulonglong)*param_2);
  uVar1 = uVar2 + uVar18;
  uVar2 = (int)((ulonglong)param_3[1] * (ulonglong)*param_2 >> 0x20) + (uint)CARRY4(uVar2,uVar18);
  uVar21 = (uint)((ulonglong)param_2[1] * (ulonglong)*param_3);
  uVar18 = (int)((ulonglong)param_2[1] * (ulonglong)*param_3 >> 0x20) + (uint)CARRY4(uVar21,uVar1);
  uVar9 = (uint)CARRY4(uVar18,uVar2);
  param_1[1] = uVar21 + uVar1;
  lVar14 = (ulonglong)*param_3 * (ulonglong)param_2[2] + (ulonglong)(uVar18 + uVar2);
  uVar1 = (uint)lVar14;
  uVar2 = (uint)((ulonglong)lVar14 >> 0x20);
  uVar19 = uVar9 + uVar2;
  uVar21 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[1]);
  uVar18 = (int)((ulonglong)param_3[1] * (ulonglong)param_2[1] >> 0x20) + (uint)CARRY4(uVar21,uVar1)
  ;
  uVar20 = uVar18 + uVar19;
  lVar14 = (ulonglong)param_3[2] * (ulonglong)*param_2 + (ulonglong)(uVar21 + uVar1);
  uVar1 = (uint)((ulonglong)lVar14 >> 0x20);
  uVar21 = uVar1 + uVar20;
  uVar19 = (uint)CARRY4(uVar9,uVar2) + (uint)CARRY4(uVar18,uVar19) + (uint)CARRY4(uVar1,uVar20);
  param_1[2] = (uint)lVar14;
  uVar2 = (uint)((ulonglong)param_3[3] * (ulonglong)*param_2);
  uVar1 = (int)((ulonglong)param_3[3] * (ulonglong)*param_2 >> 0x20) + (uint)CARRY4(uVar2,uVar21);
  uVar20 = uVar19 + uVar1;
  lVar14 = (ulonglong)param_3[2] * (ulonglong)param_2[1] + (ulonglong)(uVar2 + uVar21);
  uVar2 = (uint)lVar14;
  uVar18 = (uint)((ulonglong)lVar14 >> 0x20);
  uVar22 = uVar18 + uVar20;
  uVar21 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[2]);
  uVar9 = (int)((ulonglong)param_3[1] * (ulonglong)param_2[2] >> 0x20) + (uint)CARRY4(uVar21,uVar2);
  uVar23 = uVar9 + uVar22;
  lVar14 = (ulonglong)*param_3 * (ulonglong)param_2[3] + (ulonglong)(uVar21 + uVar2);
  uVar2 = (uint)((ulonglong)lVar14 >> 0x20);
  uVar20 = (uint)CARRY4(uVar19,uVar1) + (uint)CARRY4(uVar18,uVar20) + (uint)CARRY4(uVar9,uVar22) +
           (uint)CARRY4(uVar2,uVar23);
  param_1[3] = (uint)lVar14;
  lVar14 = (ulonglong)param_3[4] * (ulonglong)*param_2 + (ulonglong)(uVar2 + uVar23);
  uVar1 = (uint)lVar14;
  uVar2 = (uint)((ulonglong)lVar14 >> 0x20);
  uVar22 = uVar20 + uVar2;
  uVar9 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[1]);
  uVar18 = (int)((ulonglong)param_3[3] * (ulonglong)param_2[1] >> 0x20) + (uint)CARRY4(uVar9,uVar1);
  uVar23 = uVar18 + uVar22;
  lVar14 = (ulonglong)param_3[2] * (ulonglong)param_2[2] + (ulonglong)(uVar9 + uVar1);
  uVar1 = (uint)lVar14;
  uVar9 = (uint)((ulonglong)lVar14 >> 0x20);
  uVar24 = uVar9 + uVar23;
  uVar19 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[3]);
  uVar21 = (int)((ulonglong)param_3[1] * (ulonglong)param_2[3] >> 0x20) + (uint)CARRY4(uVar19,uVar1)
  ;
  uVar25 = uVar21 + uVar24;
  lVar14 = (ulonglong)*param_3 * (ulonglong)param_2[4] + (ulonglong)(uVar19 + uVar1);
  uVar1 = (uint)((ulonglong)lVar14 >> 0x20);
  uVar19 = uVar1 + uVar25;
  uVar17 = (uint)CARRY4(uVar20,uVar2) + (uint)CARRY4(uVar18,uVar22) + (uint)CARRY4(uVar9,uVar23) +
           (uint)CARRY4(uVar21,uVar24) + (uint)CARRY4(uVar1,uVar25);
  param_1[4] = (uint)lVar14;
  uVar2 = (uint)((ulonglong)param_3[5] * (ulonglong)*param_2);
  uVar1 = (int)((ulonglong)param_3[5] * (ulonglong)*param_2 >> 0x20) + (uint)CARRY4(uVar2,uVar19);
  uVar26 = uVar17 + uVar1;
  lVar14 = (ulonglong)param_3[4] * (ulonglong)param_2[1] + (ulonglong)(uVar2 + uVar19);
  uVar2 = (uint)lVar14;
  uVar18 = (uint)((ulonglong)lVar14 >> 0x20);
  uVar27 = uVar18 + uVar26;
  uVar21 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[2]);
  uVar9 = (int)((ulonglong)param_3[3] * (ulonglong)param_2[2] >> 0x20) + (uint)CARRY4(uVar21,uVar2);
  uVar28 = uVar9 + uVar27;
  lVar14 = (ulonglong)param_3[2] * (ulonglong)param_2[3] + (ulonglong)(uVar21 + uVar2);
  uVar2 = (uint)lVar14;
  uVar21 = (uint)((ulonglong)lVar14 >> 0x20);
  uVar29 = uVar21 + uVar28;
  uVar20 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[4]);
  uVar19 = (int)((ulonglong)param_3[1] * (ulonglong)param_2[4] >> 0x20) + (uint)CARRY4(uVar20,uVar2)
  ;
  uVar30 = uVar19 + uVar29;
  lVar14 = (ulonglong)*param_3 * (ulonglong)param_2[5] + (ulonglong)(uVar20 + uVar2);
  uVar2 = (uint)((ulonglong)lVar14 >> 0x20);
  uVar31 = uVar2 + uVar30;
  param_1[5] = (uint)lVar14;
  uVar24 = *param_2;
  uVar25 = param_3[6];
  uVar10 = (uint)((ulonglong)uVar25 * (ulonglong)uVar24);
  uVar15 = (ulonglong)param_2[1] * (ulonglong)param_3[5] + (ulonglong)(uVar10 + uVar31);
  lVar14 = (ulonglong)param_2[2] * (ulonglong)param_3[4] + (uVar15 & 0xffffffff);
  uVar20 = (uint)lVar14;
  uVar3 = param_2[3];
  uVar4 = param_3[3];
  uVar11 = (uint)((ulonglong)uVar3 * (ulonglong)uVar4);
  uVar22 = uVar11 + uVar20;
  uVar5 = param_2[4];
  uVar6 = param_3[2];
  uVar12 = (uint)((ulonglong)uVar6 * (ulonglong)uVar5);
  lVar16 = (ulonglong)param_3[1] * (ulonglong)param_2[5] + (ulonglong)(uVar12 + uVar22);
  uVar23 = (uint)lVar16;
  uVar7 = param_2[6];
  uVar8 = *param_3;
  uVar13 = (uint)((ulonglong)uVar7 * (ulonglong)uVar8);
  param_1[6] = uVar13 + uVar23;
  param_1[7] = *param_3 * param_2[7] +
               (int)((ulonglong)uVar6 * (ulonglong)uVar5 >> 0x20) + (uint)CARRY4(uVar12,uVar22) +
               (uint)CARRY4(uVar17,uVar1) + (uint)CARRY4(uVar18,uVar26) + (uint)CARRY4(uVar9,uVar27)
               + (uint)CARRY4(uVar21,uVar28) + (uint)CARRY4(uVar19,uVar29) +
               (uint)CARRY4(uVar2,uVar30) +
               (int)((ulonglong)uVar25 * (ulonglong)uVar24 >> 0x20) + (uint)CARRY4(uVar10,uVar31) +
               (int)(uVar15 >> 0x20) + (int)((ulonglong)lVar14 >> 0x20) +
               (int)((ulonglong)uVar3 * (ulonglong)uVar4 >> 0x20) + (uint)CARRY4(uVar11,uVar20) +
               (int)((ulonglong)lVar16 >> 0x20) +
               (int)((ulonglong)uVar7 * (ulonglong)uVar8 >> 0x20) + (uint)CARRY4(uVar13,uVar23) +
               param_3[7] * *param_2 + param_3[6] * param_2[1] + param_3[4] * param_2[3] +
               param_3[5] * param_2[2] + param_3[2] * param_2[5] + param_3[3] * param_2[4] +
               param_3[1] * param_2[6];
  return;
}

```

---

## Square2

```asm
// === 08759b90 TaoCrypt::Portable::Square2  [0x08759b90-0x8759c2f] ===
 8759b90:	55                   	push   %ebp
 8759b91:	89 e5                	mov    %esp,%ebp
 8759b93:	57                   	push   %edi
 8759b94:	56                   	push   %esi
 8759b95:	83 ec 20             	sub    $0x20,%esp
 8759b98:	8b 45 0c             	mov    0xc(%ebp),%eax
 8759b9b:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8759b9e:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8759ba1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8759ba8:	8b 30                	mov    (%eax),%esi
 8759baa:	89 f0                	mov    %esi,%eax
 8759bac:	f7 e6                	mul    %esi
 8759bae:	89 d6                	mov    %edx,%esi
 8759bb0:	8b 55 0c             	mov    0xc(%ebp),%edx
 8759bb3:	89 01                	mov    %eax,(%ecx)
 8759bb5:	8b 12                	mov    (%edx),%edx
 8759bb7:	89 d0                	mov    %edx,%eax
 8759bb9:	f7 67 04             	mull   0x4(%edi)
 8759bbc:	31 ff                	xor    %edi,%edi
 8759bbe:	01 c6                	add    %eax,%esi
 8759bc0:	11 d7                	adc    %edx,%edi
 8759bc2:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8759bc5:	89 55 ec             	mov    %edx,-0x14(%ebp)
 8759bc8:	89 fa                	mov    %edi,%edx
 8759bca:	31 ff                	xor    %edi,%edi
 8759bcc:	03 75 e8             	add    -0x18(%ebp),%esi
 8759bcf:	13 7d ec             	adc    -0x14(%ebp),%edi
 8759bd2:	89 55 e8             	mov    %edx,-0x18(%ebp)
 8759bd5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8759bd8:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8759bdf:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8759be2:	89 7d f0             	mov    %edi,-0x10(%ebp)
 8759be5:	01 45 f0             	add    %eax,-0x10(%ebp)
 8759be8:	11 55 f4             	adc    %edx,-0xc(%ebp)
 8759beb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8759bee:	89 71 04             	mov    %esi,0x4(%ecx)
 8759bf1:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8759bf4:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8759bf7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8759bfa:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 8759bfd:	8b 70 04             	mov    0x4(%eax),%esi
 8759c00:	89 f0                	mov    %esi,%eax
 8759c02:	f7 e6                	mul    %esi
 8759c04:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8759c07:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8759c0a:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8759c0d:	31 d2                	xor    %edx,%edx
 8759c0f:	01 45 f0             	add    %eax,-0x10(%ebp)
 8759c12:	11 55 f4             	adc    %edx,-0xc(%ebp)
 8759c15:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8759c18:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8759c1b:	03 45 e8             	add    -0x18(%ebp),%eax
 8759c1e:	89 51 08             	mov    %edx,0x8(%ecx)
 8759c21:	89 41 0c             	mov    %eax,0xc(%ecx)
 8759c24:	83 c4 20             	add    $0x20,%esp
 8759c27:	5e                   	pop    %esi
 8759c28:	5f                   	pop    %edi
 8759c29:	5d                   	pop    %ebp
 8759c2a:	c3                   	ret
 8759c2b:	90                   	nop
 8759c2c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::Portable::Square2 @ 0x8759b90

/* TaoCrypt::Portable::Square2(unsigned int*, unsigned int const*) */

void TaoCrypt::Portable::Square2(uint *param_1,uint *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (ulonglong)*param_2 * (ulonglong)*param_2;
  *param_1 = (uint)uVar1;
  uVar1 = (ulonglong)*param_2 * (ulonglong)param_2[1] + (uVar1 >> 0x20);
  uVar3 = (uint)(uVar1 >> 0x20);
  lVar2 = (ulonglong)*param_2 * (ulonglong)param_2[1] + (uVar1 & 0xffffffff);
  uVar4 = (uint)((ulonglong)lVar2 >> 0x20);
  param_1[1] = (uint)lVar2;
  lVar2 = (ulonglong)param_2[1] * (ulonglong)param_2[1] + (ulonglong)(uVar4 + uVar3);
  param_1[2] = (uint)lVar2;
  param_1[3] = (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4(uVar4,uVar3);
  return;
}

```

---

## Square4

```asm
// === 08759c30 TaoCrypt::Portable::Square4  [0x08759c30-0x8759f0f] ===
 8759c30:	55                   	push   %ebp
 8759c31:	89 e5                	mov    %esp,%ebp
 8759c33:	57                   	push   %edi
 8759c34:	56                   	push   %esi
 8759c35:	83 ec 20             	sub    $0x20,%esp
 8759c38:	8b 45 0c             	mov    0xc(%ebp),%eax
 8759c3b:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8759c3e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8759c45:	8b 30                	mov    (%eax),%esi
 8759c47:	89 f0                	mov    %esi,%eax
 8759c49:	f7 e6                	mul    %esi
 8759c4b:	89 d6                	mov    %edx,%esi
 8759c4d:	8b 55 08             	mov    0x8(%ebp),%edx
 8759c50:	89 02                	mov    %eax,(%edx)
 8759c52:	8b 0f                	mov    (%edi),%ecx
 8759c54:	8b 47 04             	mov    0x4(%edi),%eax
 8759c57:	31 ff                	xor    %edi,%edi
 8759c59:	f7 e1                	mul    %ecx
 8759c5b:	01 c6                	add    %eax,%esi
 8759c5d:	11 d7                	adc    %edx,%edi
 8759c5f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8759c62:	89 f9                	mov    %edi,%ecx
 8759c64:	31 ff                	xor    %edi,%edi
 8759c66:	89 55 ec             	mov    %edx,-0x14(%ebp)
 8759c69:	03 75 e8             	add    -0x18(%ebp),%esi
 8759c6c:	13 7d ec             	adc    -0x14(%ebp),%edi
 8759c6f:	89 4d e8             	mov    %ecx,-0x18(%ebp)
 8759c72:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8759c75:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8759c7c:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 8759c7f:	89 7d f0             	mov    %edi,-0x10(%ebp)
 8759c82:	01 55 f0             	add    %edx,-0x10(%ebp)
 8759c85:	11 4d f4             	adc    %ecx,-0xc(%ebp)
 8759c88:	31 ff                	xor    %edi,%edi
 8759c8a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8759c8d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8759c90:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8759c93:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8759c96:	8b 45 08             	mov    0x8(%ebp),%eax
 8759c99:	89 70 04             	mov    %esi,0x4(%eax)
 8759c9c:	8b 32                	mov    (%edx),%esi
 8759c9e:	8b 42 08             	mov    0x8(%edx),%eax
 8759ca1:	f7 e6                	mul    %esi
 8759ca3:	89 ce                	mov    %ecx,%esi
 8759ca5:	01 c6                	add    %eax,%esi
 8759ca7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8759caa:	11 d7                	adc    %edx,%edi
 8759cac:	89 75 e8             	mov    %esi,-0x18(%ebp)
 8759caf:	8b 75 e0             	mov    -0x20(%ebp),%esi
 8759cb2:	89 f8                	mov    %edi,%eax
 8759cb4:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8759cb7:	31 ff                	xor    %edi,%edi
 8759cb9:	31 d2                	xor    %edx,%edx
 8759cbb:	01 c6                	add    %eax,%esi
 8759cbd:	11 d7                	adc    %edx,%edi
 8759cbf:	89 f1                	mov    %esi,%ecx
 8759cc1:	8b 75 e8             	mov    -0x18(%ebp),%esi
 8759cc4:	89 7d e0             	mov    %edi,-0x20(%ebp)
 8759cc7:	31 ff                	xor    %edi,%edi
 8759cc9:	03 75 f0             	add    -0x10(%ebp),%esi
 8759ccc:	13 7d f4             	adc    -0xc(%ebp),%edi
 8759ccf:	31 d2                	xor    %edx,%edx
 8759cd1:	89 75 e8             	mov    %esi,-0x18(%ebp)
 8759cd4:	89 fe                	mov    %edi,%esi
 8759cd6:	31 ff                	xor    %edi,%edi
 8759cd8:	01 ce                	add    %ecx,%esi
 8759cda:	11 d7                	adc    %edx,%edi
 8759cdc:	89 f1                	mov    %esi,%ecx
 8759cde:	89 f8                	mov    %edi,%eax
 8759ce0:	31 ff                	xor    %edi,%edi
 8759ce2:	03 45 e0             	add    -0x20(%ebp),%eax
 8759ce5:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8759ce8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8759ceb:	8b 70 04             	mov    0x4(%eax),%esi
 8759cee:	89 f0                	mov    %esi,%eax
 8759cf0:	f7 e6                	mul    %esi
 8759cf2:	8b 75 e8             	mov    -0x18(%ebp),%esi
 8759cf5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8759cf8:	01 75 f0             	add    %esi,-0x10(%ebp)
 8759cfb:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8759cfe:	11 7d f4             	adc    %edi,-0xc(%ebp)
 8759d01:	31 d2                	xor    %edx,%edx
 8759d03:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8759d06:	31 ff                	xor    %edi,%edi
 8759d08:	89 c6                	mov    %eax,%esi
 8759d0a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8759d0d:	01 ce                	add    %ecx,%esi
 8759d0f:	11 d7                	adc    %edx,%edi
 8759d11:	8b 55 08             	mov    0x8(%ebp),%edx
 8759d14:	89 f1                	mov    %esi,%ecx
 8759d16:	01 f8                	add    %edi,%eax
 8759d18:	8b 7d f0             	mov    -0x10(%ebp),%edi
 8759d1b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8759d1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8759d21:	89 7a 08             	mov    %edi,0x8(%edx)
 8759d24:	31 ff                	xor    %edi,%edi
 8759d26:	8b 30                	mov    (%eax),%esi
 8759d28:	8b 40 0c             	mov    0xc(%eax),%eax
 8759d2b:	f7 e6                	mul    %esi
 8759d2d:	89 ce                	mov    %ecx,%esi
 8759d2f:	01 c6                	add    %eax,%esi
 8759d31:	89 75 e8             	mov    %esi,-0x18(%ebp)
 8759d34:	8b 75 e0             	mov    -0x20(%ebp),%esi
 8759d37:	11 d7                	adc    %edx,%edi
 8759d39:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8759d3c:	89 f8                	mov    %edi,%eax
 8759d3e:	31 ff                	xor    %edi,%edi
 8759d40:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8759d43:	31 d2                	xor    %edx,%edx
 8759d45:	01 c6                	add    %eax,%esi
 8759d47:	11 d7                	adc    %edx,%edi
 8759d49:	89 f1                	mov    %esi,%ecx
 8759d4b:	89 7d e0             	mov    %edi,-0x20(%ebp)
 8759d4e:	8b 75 e8             	mov    -0x18(%ebp),%esi
 8759d51:	31 ff                	xor    %edi,%edi
 8759d53:	03 75 f0             	add    -0x10(%ebp),%esi
 8759d56:	13 7d f4             	adc    -0xc(%ebp),%edi
 8759d59:	31 d2                	xor    %edx,%edx
 8759d5b:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8759d62:	89 75 e8             	mov    %esi,-0x18(%ebp)
 8759d65:	89 fe                	mov    %edi,%esi
 8759d67:	31 ff                	xor    %edi,%edi
 8759d69:	01 ce                	add    %ecx,%esi
 8759d6b:	11 d7                	adc    %edx,%edi
 8759d6d:	89 f1                	mov    %esi,%ecx
 8759d6f:	89 f8                	mov    %edi,%eax
 8759d71:	31 ff                	xor    %edi,%edi
 8759d73:	03 45 e0             	add    -0x20(%ebp),%eax
 8759d76:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8759d79:	8b 45 0c             	mov    0xc(%ebp),%eax
 8759d7c:	8b 70 04             	mov    0x4(%eax),%esi
 8759d7f:	8b 40 08             	mov    0x8(%eax),%eax
 8759d82:	f7 e6                	mul    %esi
 8759d84:	8b 75 e8             	mov    -0x18(%ebp),%esi
 8759d87:	01 c6                	add    %eax,%esi
 8759d89:	11 d7                	adc    %edx,%edi
 8759d8b:	89 75 e8             	mov    %esi,-0x18(%ebp)
 8759d8e:	89 fe                	mov    %edi,%esi
 8759d90:	31 ff                	xor    %edi,%edi
 8759d92:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8759d95:	31 d2                	xor    %edx,%edx
 8759d97:	01 ce                	add    %ecx,%esi
 8759d99:	11 d7                	adc    %edx,%edi
 8759d9b:	89 f1                	mov    %esi,%ecx
 8759d9d:	8b 75 e8             	mov    -0x18(%ebp),%esi
 8759da0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8759da3:	89 f8                	mov    %edi,%eax
 8759da5:	31 ff                	xor    %edi,%edi
 8759da7:	03 45 e0             	add    -0x20(%ebp),%eax
 8759daa:	03 75 f0             	add    -0x10(%ebp),%esi
 8759dad:	13 7d f4             	adc    -0xc(%ebp),%edi
 8759db0:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8759db3:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8759db6:	89 4d e8             	mov    %ecx,-0x18(%ebp)
 8759db9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8759dbc:	89 7d f0             	mov    %edi,-0x10(%ebp)
 8759dbf:	01 45 f0             	add    %eax,-0x10(%ebp)
 8759dc2:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8759dc5:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8759dcc:	11 55 f4             	adc    %edx,-0xc(%ebp)
 8759dcf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8759dd2:	03 45 e0             	add    -0x20(%ebp),%eax
 8759dd5:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8759dd8:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8759ddb:	8b 55 08             	mov    0x8(%ebp),%edx
 8759dde:	89 72 0c             	mov    %esi,0xc(%edx)
 8759de1:	8b 77 0c             	mov    0xc(%edi),%esi
 8759de4:	8b 47 04             	mov    0x4(%edi),%eax
 8759de7:	31 ff                	xor    %edi,%edi
 8759de9:	f7 e6                	mul    %esi
 8759deb:	89 ce                	mov    %ecx,%esi
 8759ded:	01 c6                	add    %eax,%esi
 8759def:	89 75 e8             	mov    %esi,-0x18(%ebp)
 8759df2:	8b 75 e0             	mov    -0x20(%ebp),%esi
 8759df5:	11 d7                	adc    %edx,%edi
 8759df7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8759dfa:	89 f8                	mov    %edi,%eax
 8759dfc:	31 ff                	xor    %edi,%edi
 8759dfe:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8759e01:	31 d2                	xor    %edx,%edx
 8759e03:	01 c6                	add    %eax,%esi
 8759e05:	11 d7                	adc    %edx,%edi
 8759e07:	89 f1                	mov    %esi,%ecx
 8759e09:	8b 75 e8             	mov    -0x18(%ebp),%esi
 8759e0c:	89 7d e0             	mov    %edi,-0x20(%ebp)
 8759e0f:	31 ff                	xor    %edi,%edi
 8759e11:	03 75 f0             	add    -0x10(%ebp),%esi
 8759e14:	13 7d f4             	adc    -0xc(%ebp),%edi
 8759e17:	31 d2                	xor    %edx,%edx
 8759e19:	89 75 e8             	mov    %esi,-0x18(%ebp)
 8759e1c:	89 fe                	mov    %edi,%esi
 8759e1e:	31 ff                	xor    %edi,%edi
 8759e20:	01 ce                	add    %ecx,%esi
 8759e22:	11 d7                	adc    %edx,%edi
 8759e24:	8b 55 0c             	mov    0xc(%ebp),%edx
 8759e27:	89 f1                	mov    %esi,%ecx
 8759e29:	89 f8                	mov    %edi,%eax
 8759e2b:	31 ff                	xor    %edi,%edi
 8759e2d:	03 45 e0             	add    -0x20(%ebp),%eax
 8759e30:	8b 72 08             	mov    0x8(%edx),%esi
 8759e33:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8759e36:	89 f0                	mov    %esi,%eax
 8759e38:	f7 e6                	mul    %esi
 8759e3a:	8b 75 e8             	mov    -0x18(%ebp),%esi
 8759e3d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8759e40:	01 75 f0             	add    %esi,-0x10(%ebp)
 8759e43:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8759e46:	11 7d f4             	adc    %edi,-0xc(%ebp)
 8759e49:	31 d2                	xor    %edx,%edx
 8759e4b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8759e4e:	31 ff                	xor    %edi,%edi
 8759e50:	89 c6                	mov    %eax,%esi
 8759e52:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8759e55:	01 ce                	add    %ecx,%esi
 8759e57:	11 d7                	adc    %edx,%edi
 8759e59:	8b 55 08             	mov    0x8(%ebp),%edx
 8759e5c:	89 f1                	mov    %esi,%ecx
 8759e5e:	01 f8                	add    %edi,%eax
 8759e60:	8b 7d f0             	mov    -0x10(%ebp),%edi
 8759e63:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8759e66:	8b 45 0c             	mov    0xc(%ebp),%eax
 8759e69:	89 7a 10             	mov    %edi,0x10(%edx)
 8759e6c:	31 ff                	xor    %edi,%edi
 8759e6e:	8b 70 08             	mov    0x8(%eax),%esi
 8759e71:	8b 40 0c             	mov    0xc(%eax),%eax
 8759e74:	f7 e6                	mul    %esi
 8759e76:	89 ce                	mov    %ecx,%esi
 8759e78:	01 c6                	add    %eax,%esi
 8759e7a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8759e7d:	89 f1                	mov    %esi,%ecx
 8759e7f:	8b 75 e8             	mov    -0x18(%ebp),%esi
 8759e82:	11 d7                	adc    %edx,%edi
 8759e84:	89 f8                	mov    %edi,%eax
 8759e86:	31 ff                	xor    %edi,%edi
 8759e88:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8759e8b:	31 d2                	xor    %edx,%edx
 8759e8d:	01 c6                	add    %eax,%esi
 8759e8f:	11 d7                	adc    %edx,%edi
 8759e91:	89 f2                	mov    %esi,%edx
 8759e93:	89 7d e8             	mov    %edi,-0x18(%ebp)
 8759e96:	89 ce                	mov    %ecx,%esi
 8759e98:	31 ff                	xor    %edi,%edi
 8759e9a:	03 75 f0             	add    -0x10(%ebp),%esi
 8759e9d:	13 7d f4             	adc    -0xc(%ebp),%edi
 8759ea0:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8759ea3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8759ea6:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8759ead:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8759eb0:	89 7d f0             	mov    %edi,-0x10(%ebp)
 8759eb3:	01 45 f0             	add    %eax,-0x10(%ebp)
 8759eb6:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8759eb9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8759ec0:	11 55 f4             	adc    %edx,-0xc(%ebp)
 8759ec3:	31 ff                	xor    %edi,%edi
 8759ec5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8759ec8:	03 45 e8             	add    -0x18(%ebp),%eax
 8759ecb:	8b 55 08             	mov    0x8(%ebp),%edx
 8759ece:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8759ed1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8759ed4:	89 72 14             	mov    %esi,0x14(%edx)
 8759ed7:	8b 70 0c             	mov    0xc(%eax),%esi
 8759eda:	89 f0                	mov    %esi,%eax
 8759edc:	f7 e6                	mul    %esi
 8759ede:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8759ee1:	01 4d f0             	add    %ecx,-0x10(%ebp)
 8759ee4:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8759ee7:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8759eea:	8b 55 08             	mov    0x8(%ebp),%edx
 8759eed:	11 7d f4             	adc    %edi,-0xc(%ebp)
 8759ef0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8759ef3:	89 4a 18             	mov    %ecx,0x18(%edx)
 8759ef6:	03 45 e8             	add    -0x18(%ebp),%eax
 8759ef9:	89 42 1c             	mov    %eax,0x1c(%edx)
 8759efc:	83 c4 20             	add    $0x20,%esp
 8759eff:	5e                   	pop    %esi
 8759f00:	5f                   	pop    %edi
 8759f01:	5d                   	pop    %ebp
 8759f02:	c3                   	ret
 8759f03:	90                   	nop
 8759f04:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8759f0a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TaoCrypt::Portable::Square4 @ 0x8759c30

/* TaoCrypt::Portable::Square4(unsigned int*, unsigned int const*) */

void TaoCrypt::Portable::Square4(uint *param_1,uint *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong local_1c;
  
  uVar1 = (ulonglong)*param_2 * (ulonglong)*param_2;
  *param_1 = (uint)uVar1;
  uVar1 = (ulonglong)param_2[1] * (ulonglong)*param_2 + (uVar1 >> 0x20);
  uVar9 = (uint)(uVar1 >> 0x20);
  lVar2 = (ulonglong)param_2[1] * (ulonglong)*param_2 + (uVar1 & 0xffffffff);
  uVar10 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar5 = (uint)CARRY4(uVar10,uVar9);
  param_1[1] = (uint)lVar2;
  lVar2 = (ulonglong)param_2[2] * (ulonglong)*param_2;
  lVar3 = lVar2 + (ulonglong)(uVar10 + uVar9);
  uVar11 = (uint)((ulonglong)lVar3 >> 0x20);
  uVar9 = (uint)lVar3;
  uVar6 = uVar5 + uVar11;
  uVar7 = uVar9 + (uint)lVar2;
  uVar12 = (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4(uVar9,(uint)lVar2);
  uVar8 = uVar12 + uVar6;
  lVar2 = (ulonglong)param_2[1] * (ulonglong)param_2[1];
  uVar10 = (uint)lVar2;
  uVar9 = (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4(uVar10,uVar7);
  uVar5 = (uint)CARRY4(uVar12,uVar6) + (uint)CARRY4(uVar5,uVar11) + (uint)CARRY4(uVar9,uVar8);
  param_1[2] = uVar10 + uVar7;
  uVar4 = (ulonglong)param_2[3] * (ulonglong)*param_2 + (ulonglong)(uVar9 + uVar8);
  uVar7 = (uint)(uVar4 >> 0x20);
  uVar9 = uVar5 + uVar7;
  local_1c = (ulonglong)param_2[3] * (ulonglong)*param_2 + (uVar4 & 0xffffffff);
  uVar8 = (uint)(local_1c >> 0x20);
  local_1c = local_1c & 0xffffffff;
  uVar10 = uVar8 + uVar9;
  local_1c = (ulonglong)param_2[2] * (ulonglong)param_2[1] + local_1c;
  uVar11 = (uint)(local_1c >> 0x20);
  uVar6 = uVar11 + uVar10;
  lVar2 = (ulonglong)param_2[2] * (ulonglong)param_2[1] + (local_1c & 0xffffffff);
  uVar12 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar10 = (uint)CARRY4(uVar12,uVar6) +
           (uint)CARRY4(uVar11,uVar10) + (uint)CARRY4(uVar8,uVar9) + (uint)CARRY4(uVar5,uVar7);
  param_1[3] = (uint)lVar2;
  uVar1 = (ulonglong)param_2[1] * (ulonglong)param_2[3] + (ulonglong)(uVar12 + uVar6);
  uVar11 = (uint)(uVar1 >> 0x20);
  uVar6 = uVar10 + uVar11;
  lVar2 = (ulonglong)param_2[1] * (ulonglong)param_2[3] + (uVar1 & 0xffffffff);
  uVar7 = (uint)lVar2;
  uVar12 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar8 = uVar12 + uVar6;
  lVar2 = (ulonglong)param_2[2] * (ulonglong)param_2[2];
  uVar5 = (uint)lVar2;
  uVar9 = (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4(uVar5,uVar7);
  uVar10 = (uint)CARRY4(uVar12,uVar6) + (uint)CARRY4(uVar10,uVar11) + (uint)CARRY4(uVar9,uVar8);
  param_1[4] = uVar5 + uVar7;
  uVar1 = (ulonglong)param_2[3] * (ulonglong)param_2[2] + (ulonglong)(uVar9 + uVar8);
  uVar7 = (uint)(uVar1 >> 0x20);
  uVar6 = uVar10 + uVar7;
  lVar2 = (ulonglong)param_2[3] * (ulonglong)param_2[2] + (uVar1 & 0xffffffff);
  uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar9 = uVar8 + uVar6;
  param_1[5] = (uint)lVar2;
  lVar2 = (ulonglong)param_2[3] * (ulonglong)param_2[3];
  uVar5 = (uint)lVar2;
  param_1[6] = uVar5 + uVar9;
  param_1[7] = (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4(uVar5,uVar9) +
               (uint)CARRY4(uVar8,uVar6) + (uint)CARRY4(uVar10,uVar7);
  return;
}

```

---

## Subtract

```asm
// === 08759490 TaoCrypt::Portable::Subtract  [0x08759490-0x875952f] ===
 8759490:	55                   	push   %ebp
 8759491:	31 c0                	xor    %eax,%eax
 8759493:	89 e5                	mov    %esp,%ebp
 8759495:	57                   	push   %edi
 8759496:	56                   	push   %esi
 8759497:	31 f6                	xor    %esi,%esi
 8759499:	83 ec 20             	sub    $0x20,%esp
 875949c:	8b 4d 14             	mov    0x14(%ebp),%ecx
 875949f:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 87594a6:	85 c9                	test   %ecx,%ecx
 87594a8:	75 09                	jne    87594b3 <_ZN8TaoCrypt8Portable8SubtractEPjPKjS3_j+0x23>
 87594aa:	eb 6f                	jmp    875951b <_ZN8TaoCrypt8Portable8SubtractEPjPKjS3_j+0x8b>
 87594ac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87594b0:	89 4d e0             	mov    %ecx,-0x20(%ebp)
 87594b3:	8b 75 0c             	mov    0xc(%ebp),%esi
 87594b6:	31 c9                	xor    %ecx,%ecx
 87594b8:	8b 7d 10             	mov    0x10(%ebp),%edi
 87594bb:	8b 14 86             	mov    (%esi,%eax,4),%edx
 87594be:	8b 34 87             	mov    (%edi,%eax,4),%esi
 87594c1:	31 ff                	xor    %edi,%edi
 87594c3:	29 f2                	sub    %esi,%edx
 87594c5:	8b 75 e0             	mov    -0x20(%ebp),%esi
 87594c8:	19 f9                	sbb    %edi,%ecx
 87594ca:	31 ff                	xor    %edi,%edi
 87594cc:	f7 de                	neg    %esi
 87594ce:	29 f2                	sub    %esi,%edx
 87594d0:	8b 75 08             	mov    0x8(%ebp),%esi
 87594d3:	19 f9                	sbb    %edi,%ecx
 87594d5:	89 d7                	mov    %edx,%edi
 87594d7:	89 4d f4             	mov    %ecx,-0xc(%ebp)
 87594da:	31 c9                	xor    %ecx,%ecx
 87594dc:	89 55 f0             	mov    %edx,-0x10(%ebp)
 87594df:	8b 55 f4             	mov    -0xc(%ebp),%edx
 87594e2:	89 3c 86             	mov    %edi,(%esi,%eax,4)
 87594e5:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87594e8:	89 55 d8             	mov    %edx,-0x28(%ebp)
 87594eb:	8b 54 87 04          	mov    0x4(%edi,%eax,4),%edx
 87594ef:	8b 7d 10             	mov    0x10(%ebp),%edi
 87594f2:	8b 74 87 04          	mov    0x4(%edi,%eax,4),%esi
 87594f6:	31 ff                	xor    %edi,%edi
 87594f8:	29 f2                	sub    %esi,%edx
 87594fa:	19 f9                	sbb    %edi,%ecx
 87594fc:	31 ff                	xor    %edi,%edi
 87594fe:	f7 5d d8             	negl   -0x28(%ebp)
 8759501:	8b 75 d8             	mov    -0x28(%ebp),%esi
 8759504:	29 f2                	sub    %esi,%edx
 8759506:	19 f9                	sbb    %edi,%ecx
 8759508:	8b 7d 08             	mov    0x8(%ebp),%edi
 875950b:	89 ce                	mov    %ecx,%esi
 875950d:	89 54 87 04          	mov    %edx,0x4(%edi,%eax,4)
 8759511:	83 c0 02             	add    $0x2,%eax
 8759514:	39 45 14             	cmp    %eax,0x14(%ebp)
 8759517:	77 97                	ja     87594b0 <_ZN8TaoCrypt8Portable8SubtractEPjPKjS3_j+0x20>
 8759519:	f7 de                	neg    %esi
 875951b:	83 c4 20             	add    $0x20,%esp
 875951e:	89 f0                	mov    %esi,%eax
 8759520:	5e                   	pop    %esi
 8759521:	5f                   	pop    %edi
 8759522:	5d                   	pop    %ebp
 8759523:	c3                   	ret
 8759524:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875952a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TaoCrypt::Portable::Subtract @ 0x8759490

/* TaoCrypt::Portable::Subtract(unsigned int*, unsigned int const*, unsigned int const*, unsigned
   int) */

int TaoCrypt::Portable::Subtract(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int local_24;
  
  uVar1 = 0;
  iVar3 = 0;
  local_24 = 0;
  if (param_4 != 0) {
    do {
      uVar2 = param_2[uVar1] - param_3[uVar1];
      iVar3 = -(uint)(uVar2 < (uint)-local_24) - (uint)(param_2[uVar1] < param_3[uVar1]);
      param_1[uVar1] = uVar2 + local_24;
      uVar2 = param_2[uVar1 + 1] - param_3[uVar1 + 1];
      local_24 = -(uint)(uVar2 < (uint)-iVar3) - (uint)(param_2[uVar1 + 1] < param_3[uVar1 + 1]);
      param_1[uVar1 + 1] = uVar2 + iVar3;
      uVar1 = uVar1 + 2;
    } while (uVar1 < param_4);
    iVar3 = -local_24;
  }
  return iVar3;
}

```

