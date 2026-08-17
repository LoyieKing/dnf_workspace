# TaoCrypt__PentiumOptimized

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## Add

```asm
// === 0875b4b0 TaoCrypt::PentiumOptimized::Add  [0x0875b4b0-0x875b4d7] ===
 875b4b0:	55                   	push   %ebp
 875b4b1:	89 e5                	mov    %esp,%ebp
 875b4b3:	83 ec 08             	sub    $0x8,%esp
 875b4b6:	89 34 24             	mov    %esi,(%esp)
 875b4b9:	8b 55 0c             	mov    0xc(%ebp),%edx
 875b4bc:	89 7c 24 04          	mov    %edi,0x4(%esp)
 875b4c0:	8b 75 14             	mov    0x14(%ebp),%esi
 875b4c3:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875b4c6:	53                   	push   %ebx
 875b4c7:	8b 5d 10             	mov    0x10(%ebp),%ebx
 875b4ca:	55                   	push   %ebp
 875b4cb:	29 d1                	sub    %edx,%ecx
 875b4cd:	31 c0                	xor    %eax,%eax
 875b4cf:	29 f0                	sub    %esi,%eax
 875b4d1:	8d 1c b3             	lea    (%ebx,%esi,4),%ebx
 875b4d4:	d1 f8                	sar    $1,%eax
 875b4d6:	74 1e                	je     875b4f6 <loopendAdd>

```

```c
// TaoCrypt::PentiumOptimized::Add @ 0x875b4b0

/* TaoCrypt::PentiumOptimized::Add(unsigned int*, unsigned int const*, unsigned int const*, unsigned
   int) */

bool TaoCrypt::PentiumOptimized::Add(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  bool bVar7;
  
  bVar7 = (-param_4 & 1) != 0;
  puVar5 = param_2;
  for (iVar6 = (int)-param_4 >> 1; iVar6 != 0; iVar6 = iVar6 + 1) {
    uVar1 = (uint)bVar7;
    uVar3 = *puVar5 + param_3[param_4 + iVar6 * 2];
    uVar2 = (uint)(CARRY4(*puVar5,param_3[param_4 + iVar6 * 2]) || CARRY4(uVar3,uVar1));
    uVar4 = puVar5[1] + param_3[param_4 + iVar6 * 2 + 1];
    bVar7 = CARRY4(puVar5[1],param_3[param_4 + iVar6 * 2 + 1]) || CARRY4(uVar4,uVar2);
    *(uint *)((int)puVar5 + ((int)param_1 - (int)param_2)) = uVar3 + uVar1;
    *(uint *)((int)puVar5 + ((int)param_1 - (int)param_2) + 4) = uVar4 + uVar2;
    puVar5 = puVar5 + 2;
  }
  return bVar7;
}

```

---

## Multiply4

```asm
// === 0875b670 TaoCrypt::PentiumOptimized::Multiply4  [0x0875b670-0x875b7af] ===
 875b670:	55                   	push   %ebp
 875b671:	89 e5                	mov    %esp,%ebp
 875b673:	83 ec 08             	sub    $0x8,%esp
 875b676:	89 34 24             	mov    %esi,(%esp)
 875b679:	8b 4d 10             	mov    0x10(%ebp),%ecx
 875b67c:	89 7c 24 04          	mov    %edi,0x4(%esp)
 875b680:	8b 75 0c             	mov    0xc(%ebp),%esi
 875b683:	53                   	push   %ebx
 875b684:	55                   	push   %ebp
 875b685:	ff 75 08             	push   0x8(%ebp)
 875b688:	31 ed                	xor    %ebp,%ebp
 875b68a:	31 ff                	xor    %edi,%edi
 875b68c:	31 db                	xor    %ebx,%ebx
 875b68e:	8b 01                	mov    (%ecx),%eax
 875b690:	f7 26                	mull   (%esi)
 875b692:	01 c5                	add    %eax,%ebp
 875b694:	11 d7                	adc    %edx,%edi
 875b696:	10 fb                	adc    %bh,%bl
 875b698:	89 fa                	mov    %edi,%edx
 875b69a:	8b 3c 24             	mov    (%esp),%edi
 875b69d:	89 2f                	mov    %ebp,(%edi)
 875b69f:	89 d5                	mov    %edx,%ebp
 875b6a1:	89 df                	mov    %ebx,%edi
 875b6a3:	31 db                	xor    %ebx,%ebx
 875b6a5:	8b 01                	mov    (%ecx),%eax
 875b6a7:	f7 66 04             	mull   0x4(%esi)
 875b6aa:	01 c5                	add    %eax,%ebp
 875b6ac:	11 d7                	adc    %edx,%edi
 875b6ae:	10 fb                	adc    %bh,%bl
 875b6b0:	8b 41 04             	mov    0x4(%ecx),%eax
 875b6b3:	f7 26                	mull   (%esi)
 875b6b5:	01 c5                	add    %eax,%ebp
 875b6b7:	11 d7                	adc    %edx,%edi
 875b6b9:	10 fb                	adc    %bh,%bl
 875b6bb:	89 fa                	mov    %edi,%edx
 875b6bd:	8b 3c 24             	mov    (%esp),%edi
 875b6c0:	89 6f 04             	mov    %ebp,0x4(%edi)
 875b6c3:	89 d5                	mov    %edx,%ebp
 875b6c5:	89 df                	mov    %ebx,%edi
 875b6c7:	31 db                	xor    %ebx,%ebx
 875b6c9:	8b 01                	mov    (%ecx),%eax
 875b6cb:	f7 66 08             	mull   0x8(%esi)
 875b6ce:	01 c5                	add    %eax,%ebp
 875b6d0:	11 d7                	adc    %edx,%edi
 875b6d2:	10 fb                	adc    %bh,%bl
 875b6d4:	8b 41 04             	mov    0x4(%ecx),%eax
 875b6d7:	f7 66 04             	mull   0x4(%esi)
 875b6da:	01 c5                	add    %eax,%ebp
 875b6dc:	11 d7                	adc    %edx,%edi
 875b6de:	10 fb                	adc    %bh,%bl
 875b6e0:	8b 41 08             	mov    0x8(%ecx),%eax
 875b6e3:	f7 26                	mull   (%esi)
 875b6e5:	01 c5                	add    %eax,%ebp
 875b6e7:	11 d7                	adc    %edx,%edi
 875b6e9:	10 fb                	adc    %bh,%bl
 875b6eb:	89 fa                	mov    %edi,%edx
 875b6ed:	8b 3c 24             	mov    (%esp),%edi
 875b6f0:	89 6f 08             	mov    %ebp,0x8(%edi)
 875b6f3:	89 d5                	mov    %edx,%ebp
 875b6f5:	89 df                	mov    %ebx,%edi
 875b6f7:	31 db                	xor    %ebx,%ebx
 875b6f9:	8b 01                	mov    (%ecx),%eax
 875b6fb:	f7 66 0c             	mull   0xc(%esi)
 875b6fe:	01 c5                	add    %eax,%ebp
 875b700:	11 d7                	adc    %edx,%edi
 875b702:	10 fb                	adc    %bh,%bl
 875b704:	8b 41 04             	mov    0x4(%ecx),%eax
 875b707:	f7 66 08             	mull   0x8(%esi)
 875b70a:	01 c5                	add    %eax,%ebp
 875b70c:	11 d7                	adc    %edx,%edi
 875b70e:	10 fb                	adc    %bh,%bl
 875b710:	8b 41 08             	mov    0x8(%ecx),%eax
 875b713:	f7 66 04             	mull   0x4(%esi)
 875b716:	01 c5                	add    %eax,%ebp
 875b718:	11 d7                	adc    %edx,%edi
 875b71a:	10 fb                	adc    %bh,%bl
 875b71c:	8b 41 0c             	mov    0xc(%ecx),%eax
 875b71f:	f7 26                	mull   (%esi)
 875b721:	01 c5                	add    %eax,%ebp
 875b723:	11 d7                	adc    %edx,%edi
 875b725:	10 fb                	adc    %bh,%bl
 875b727:	89 fa                	mov    %edi,%edx
 875b729:	8b 3c 24             	mov    (%esp),%edi
 875b72c:	89 6f 0c             	mov    %ebp,0xc(%edi)
 875b72f:	89 d5                	mov    %edx,%ebp
 875b731:	89 df                	mov    %ebx,%edi
 875b733:	31 db                	xor    %ebx,%ebx
 875b735:	8b 41 04             	mov    0x4(%ecx),%eax
 875b738:	f7 66 0c             	mull   0xc(%esi)
 875b73b:	01 c5                	add    %eax,%ebp
 875b73d:	11 d7                	adc    %edx,%edi
 875b73f:	10 fb                	adc    %bh,%bl
 875b741:	8b 41 08             	mov    0x8(%ecx),%eax
 875b744:	f7 66 08             	mull   0x8(%esi)
 875b747:	01 c5                	add    %eax,%ebp
 875b749:	11 d7                	adc    %edx,%edi
 875b74b:	10 fb                	adc    %bh,%bl
 875b74d:	8b 41 0c             	mov    0xc(%ecx),%eax
 875b750:	f7 66 04             	mull   0x4(%esi)
 875b753:	01 c5                	add    %eax,%ebp
 875b755:	11 d7                	adc    %edx,%edi
 875b757:	10 fb                	adc    %bh,%bl
 875b759:	89 fa                	mov    %edi,%edx
 875b75b:	8b 3c 24             	mov    (%esp),%edi
 875b75e:	89 6f 10             	mov    %ebp,0x10(%edi)
 875b761:	89 d5                	mov    %edx,%ebp
 875b763:	89 df                	mov    %ebx,%edi
 875b765:	31 db                	xor    %ebx,%ebx
 875b767:	8b 41 08             	mov    0x8(%ecx),%eax
 875b76a:	f7 66 0c             	mull   0xc(%esi)
 875b76d:	01 c5                	add    %eax,%ebp
 875b76f:	11 d7                	adc    %edx,%edi
 875b771:	10 fb                	adc    %bh,%bl
 875b773:	8b 41 0c             	mov    0xc(%ecx),%eax
 875b776:	f7 66 08             	mull   0x8(%esi)
 875b779:	01 c5                	add    %eax,%ebp
 875b77b:	11 d7                	adc    %edx,%edi
 875b77d:	10 fb                	adc    %bh,%bl
 875b77f:	89 fa                	mov    %edi,%edx
 875b781:	8b 3c 24             	mov    (%esp),%edi
 875b784:	89 6f 14             	mov    %ebp,0x14(%edi)
 875b787:	89 d5                	mov    %edx,%ebp
 875b789:	89 df                	mov    %ebx,%edi
 875b78b:	31 db                	xor    %ebx,%ebx
 875b78d:	8b 41 0c             	mov    0xc(%ecx),%eax
 875b790:	f7 66 0c             	mull   0xc(%esi)
 875b793:	01 c5                	add    %eax,%ebp
 875b795:	11 fa                	adc    %edi,%edx
 875b797:	8b 3c 24             	mov    (%esp),%edi
 875b79a:	89 6f 18             	mov    %ebp,0x18(%edi)
 875b79d:	89 57 1c             	mov    %edx,0x1c(%edi)
 875b7a0:	83 c4 04             	add    $0x4,%esp
 875b7a3:	5d                   	pop    %ebp
 875b7a4:	5b                   	pop    %ebx
 875b7a5:	8b 34 24             	mov    (%esp),%esi
 875b7a8:	8b 7c 24 04          	mov    0x4(%esp),%edi
 875b7ac:	89 ec                	mov    %ebp,%esp
 875b7ae:	5d                   	pop    %ebp
 875b7af:	c3                   	ret

```

```c
// TaoCrypt::PentiumOptimized::Multiply4 @ 0x875b670

/* TaoCrypt::PentiumOptimized::Multiply4(unsigned int*, unsigned int const*, unsigned int const*) */

void TaoCrypt::PentiumOptimized::Multiply4(uint *param_1,uint *param_2,uint *param_3)

{
  longlong lVar1;
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
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  
  uVar6 = (uint)((ulonglong)*param_3 * (ulonglong)*param_2 >> 0x20);
  *param_1 = (uint)((ulonglong)*param_3 * (ulonglong)*param_2);
  lVar1 = (ulonglong)*param_3 * (ulonglong)param_2[1];
  lVar2 = lVar1 + (ulonglong)uVar6;
  uVar11 = (uint)lVar2;
  uVar13 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar7 = (uint)((ulonglong)param_3[1] * (ulonglong)*param_2 >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[1] * (ulonglong)*param_2);
  uVar4 = (uint)CARRY4(uVar11,uVar3);
  uVar5 = uVar13 + uVar7;
  uVar14 = uVar5 + uVar4;
  uVar10 = (uint)(byte)(CARRY4((uint)((ulonglong)lVar1 >> 0x20),(uint)CARRY4(uVar6,(uint)lVar1)) +
                       (CARRY4(uVar13,uVar7) || CARRY4(uVar5,uVar4)));
  param_1[1] = uVar11 + uVar3;
  uVar8 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[2] >> 0x20);
  uVar4 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[2]);
  uVar3 = uVar14 + uVar4;
  uVar4 = (uint)CARRY4(uVar14,uVar4);
  uVar6 = uVar10 + uVar8;
  uVar15 = uVar6 + uVar4;
  uVar14 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[1] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[1]);
  uVar12 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar7 = uVar15 + uVar14;
  uVar16 = uVar7 + uVar5;
  uVar9 = (uint)((ulonglong)param_3[2] * (ulonglong)*param_2 >> 0x20);
  uVar13 = (uint)((ulonglong)param_3[2] * (ulonglong)*param_2);
  uVar3 = (uint)CARRY4(uVar12,uVar13);
  uVar11 = uVar16 + uVar9;
  uVar17 = uVar11 + uVar3;
  uVar16 = (uint)(byte)((CARRY4(uVar10,uVar8) || CARRY4(uVar6,uVar4)) +
                        (CARRY4(uVar15,uVar14) || CARRY4(uVar7,uVar5)) +
                       (CARRY4(uVar16,uVar9) || CARRY4(uVar11,uVar3)));
  param_1[2] = uVar12 + uVar13;
  uVar9 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[3] >> 0x20);
  uVar4 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[3]);
  uVar3 = uVar17 + uVar4;
  uVar4 = (uint)CARRY4(uVar17,uVar4);
  uVar7 = uVar16 + uVar9;
  uVar18 = uVar7 + uVar4;
  uVar10 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[2] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[2]);
  uVar6 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar11 = uVar18 + uVar10;
  uVar19 = uVar11 + uVar5;
  uVar12 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[1] >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[1]);
  uVar17 = uVar6 + uVar3;
  uVar3 = (uint)CARRY4(uVar6,uVar3);
  uVar13 = uVar19 + uVar12;
  uVar20 = uVar13 + uVar3;
  uVar15 = (uint)((ulonglong)param_3[3] * (ulonglong)*param_2 >> 0x20);
  uVar14 = (uint)((ulonglong)param_3[3] * (ulonglong)*param_2);
  uVar6 = (uint)CARRY4(uVar17,uVar14);
  uVar8 = uVar20 + uVar15;
  uVar21 = uVar8 + uVar6;
  uVar10 = (uint)(byte)((CARRY4(uVar16,uVar9) || CARRY4(uVar7,uVar4)) +
                        (CARRY4(uVar18,uVar10) || CARRY4(uVar11,uVar5)) +
                        (CARRY4(uVar19,uVar12) || CARRY4(uVar13,uVar3)) +
                       (CARRY4(uVar20,uVar15) || CARRY4(uVar8,uVar6)));
  param_1[3] = uVar17 + uVar14;
  uVar8 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[3] >> 0x20);
  uVar4 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[3]);
  uVar3 = uVar21 + uVar4;
  uVar4 = (uint)CARRY4(uVar21,uVar4);
  uVar6 = uVar10 + uVar8;
  uVar15 = uVar6 + uVar4;
  uVar14 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[2] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[2]);
  uVar12 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar7 = uVar15 + uVar14;
  uVar16 = uVar7 + uVar5;
  uVar9 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[1] >> 0x20);
  uVar13 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[1]);
  uVar3 = (uint)CARRY4(uVar12,uVar13);
  uVar11 = uVar16 + uVar9;
  uVar17 = uVar11 + uVar3;
  uVar8 = (uint)(byte)((CARRY4(uVar10,uVar8) || CARRY4(uVar6,uVar4)) +
                       (CARRY4(uVar15,uVar14) || CARRY4(uVar7,uVar5)) +
                      (CARRY4(uVar16,uVar9) || CARRY4(uVar11,uVar3)));
  param_1[4] = uVar12 + uVar13;
  uVar11 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[3] >> 0x20);
  uVar4 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[3]);
  uVar14 = uVar17 + uVar4;
  uVar4 = (uint)CARRY4(uVar17,uVar4);
  uVar3 = uVar8 + uVar11;
  uVar9 = uVar3 + uVar4;
  uVar13 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[2] >> 0x20);
  uVar7 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[2]);
  uVar5 = (uint)CARRY4(uVar14,uVar7);
  uVar6 = uVar9 + uVar13;
  param_1[5] = uVar14 + uVar7;
  *(ulonglong *)(param_1 + 6) =
       (ulonglong)param_3[3] * (ulonglong)param_2[3] +
       (ulonglong)
       CONCAT14((CARRY4(uVar8,uVar11) || CARRY4(uVar3,uVar4)) +
                (CARRY4(uVar9,uVar13) || CARRY4(uVar6,uVar5)),uVar6 + uVar5);
  return;
}

```

---

## Multiply8

```asm
// === 0875b7b0 TaoCrypt::PentiumOptimized::Multiply8  [0x0875b7b0-0x875bb9f] ===
 875b7b0:	55                   	push   %ebp
 875b7b1:	89 e5                	mov    %esp,%ebp
 875b7b3:	83 ec 08             	sub    $0x8,%esp
 875b7b6:	89 34 24             	mov    %esi,(%esp)
 875b7b9:	8b 4d 10             	mov    0x10(%ebp),%ecx
 875b7bc:	89 7c 24 04          	mov    %edi,0x4(%esp)
 875b7c0:	8b 75 0c             	mov    0xc(%ebp),%esi
 875b7c3:	53                   	push   %ebx
 875b7c4:	55                   	push   %ebp
 875b7c5:	ff 75 08             	push   0x8(%ebp)
 875b7c8:	31 ed                	xor    %ebp,%ebp
 875b7ca:	31 ff                	xor    %edi,%edi
 875b7cc:	31 db                	xor    %ebx,%ebx
 875b7ce:	8b 01                	mov    (%ecx),%eax
 875b7d0:	f7 26                	mull   (%esi)
 875b7d2:	01 c5                	add    %eax,%ebp
 875b7d4:	11 d7                	adc    %edx,%edi
 875b7d6:	10 fb                	adc    %bh,%bl
 875b7d8:	89 fa                	mov    %edi,%edx
 875b7da:	8b 3c 24             	mov    (%esp),%edi
 875b7dd:	89 2f                	mov    %ebp,(%edi)
 875b7df:	89 d5                	mov    %edx,%ebp
 875b7e1:	89 df                	mov    %ebx,%edi
 875b7e3:	31 db                	xor    %ebx,%ebx
 875b7e5:	8b 01                	mov    (%ecx),%eax
 875b7e7:	f7 66 04             	mull   0x4(%esi)
 875b7ea:	01 c5                	add    %eax,%ebp
 875b7ec:	11 d7                	adc    %edx,%edi
 875b7ee:	10 fb                	adc    %bh,%bl
 875b7f0:	8b 41 04             	mov    0x4(%ecx),%eax
 875b7f3:	f7 26                	mull   (%esi)
 875b7f5:	01 c5                	add    %eax,%ebp
 875b7f7:	11 d7                	adc    %edx,%edi
 875b7f9:	10 fb                	adc    %bh,%bl
 875b7fb:	89 fa                	mov    %edi,%edx
 875b7fd:	8b 3c 24             	mov    (%esp),%edi
 875b800:	89 6f 04             	mov    %ebp,0x4(%edi)
 875b803:	89 d5                	mov    %edx,%ebp
 875b805:	89 df                	mov    %ebx,%edi
 875b807:	31 db                	xor    %ebx,%ebx
 875b809:	8b 01                	mov    (%ecx),%eax
 875b80b:	f7 66 08             	mull   0x8(%esi)
 875b80e:	01 c5                	add    %eax,%ebp
 875b810:	11 d7                	adc    %edx,%edi
 875b812:	10 fb                	adc    %bh,%bl
 875b814:	8b 41 04             	mov    0x4(%ecx),%eax
 875b817:	f7 66 04             	mull   0x4(%esi)
 875b81a:	01 c5                	add    %eax,%ebp
 875b81c:	11 d7                	adc    %edx,%edi
 875b81e:	10 fb                	adc    %bh,%bl
 875b820:	8b 41 08             	mov    0x8(%ecx),%eax
 875b823:	f7 26                	mull   (%esi)
 875b825:	01 c5                	add    %eax,%ebp
 875b827:	11 d7                	adc    %edx,%edi
 875b829:	10 fb                	adc    %bh,%bl
 875b82b:	89 fa                	mov    %edi,%edx
 875b82d:	8b 3c 24             	mov    (%esp),%edi
 875b830:	89 6f 08             	mov    %ebp,0x8(%edi)
 875b833:	89 d5                	mov    %edx,%ebp
 875b835:	89 df                	mov    %ebx,%edi
 875b837:	31 db                	xor    %ebx,%ebx
 875b839:	8b 01                	mov    (%ecx),%eax
 875b83b:	f7 66 0c             	mull   0xc(%esi)
 875b83e:	01 c5                	add    %eax,%ebp
 875b840:	11 d7                	adc    %edx,%edi
 875b842:	10 fb                	adc    %bh,%bl
 875b844:	8b 41 04             	mov    0x4(%ecx),%eax
 875b847:	f7 66 08             	mull   0x8(%esi)
 875b84a:	01 c5                	add    %eax,%ebp
 875b84c:	11 d7                	adc    %edx,%edi
 875b84e:	10 fb                	adc    %bh,%bl
 875b850:	8b 41 08             	mov    0x8(%ecx),%eax
 875b853:	f7 66 04             	mull   0x4(%esi)
 875b856:	01 c5                	add    %eax,%ebp
 875b858:	11 d7                	adc    %edx,%edi
 875b85a:	10 fb                	adc    %bh,%bl
 875b85c:	8b 41 0c             	mov    0xc(%ecx),%eax
 875b85f:	f7 26                	mull   (%esi)
 875b861:	01 c5                	add    %eax,%ebp
 875b863:	11 d7                	adc    %edx,%edi
 875b865:	10 fb                	adc    %bh,%bl
 875b867:	89 fa                	mov    %edi,%edx
 875b869:	8b 3c 24             	mov    (%esp),%edi
 875b86c:	89 6f 0c             	mov    %ebp,0xc(%edi)
 875b86f:	89 d5                	mov    %edx,%ebp
 875b871:	89 df                	mov    %ebx,%edi
 875b873:	31 db                	xor    %ebx,%ebx
 875b875:	8b 01                	mov    (%ecx),%eax
 875b877:	f7 66 10             	mull   0x10(%esi)
 875b87a:	01 c5                	add    %eax,%ebp
 875b87c:	11 d7                	adc    %edx,%edi
 875b87e:	10 fb                	adc    %bh,%bl
 875b880:	8b 41 04             	mov    0x4(%ecx),%eax
 875b883:	f7 66 0c             	mull   0xc(%esi)
 875b886:	01 c5                	add    %eax,%ebp
 875b888:	11 d7                	adc    %edx,%edi
 875b88a:	10 fb                	adc    %bh,%bl
 875b88c:	8b 41 08             	mov    0x8(%ecx),%eax
 875b88f:	f7 66 08             	mull   0x8(%esi)
 875b892:	01 c5                	add    %eax,%ebp
 875b894:	11 d7                	adc    %edx,%edi
 875b896:	10 fb                	adc    %bh,%bl
 875b898:	8b 41 0c             	mov    0xc(%ecx),%eax
 875b89b:	f7 66 04             	mull   0x4(%esi)
 875b89e:	01 c5                	add    %eax,%ebp
 875b8a0:	11 d7                	adc    %edx,%edi
 875b8a2:	10 fb                	adc    %bh,%bl
 875b8a4:	8b 41 10             	mov    0x10(%ecx),%eax
 875b8a7:	f7 26                	mull   (%esi)
 875b8a9:	01 c5                	add    %eax,%ebp
 875b8ab:	11 d7                	adc    %edx,%edi
 875b8ad:	10 fb                	adc    %bh,%bl
 875b8af:	89 fa                	mov    %edi,%edx
 875b8b1:	8b 3c 24             	mov    (%esp),%edi
 875b8b4:	89 6f 10             	mov    %ebp,0x10(%edi)
 875b8b7:	89 d5                	mov    %edx,%ebp
 875b8b9:	89 df                	mov    %ebx,%edi
 875b8bb:	31 db                	xor    %ebx,%ebx
 875b8bd:	8b 01                	mov    (%ecx),%eax
 875b8bf:	f7 66 14             	mull   0x14(%esi)
 875b8c2:	01 c5                	add    %eax,%ebp
 875b8c4:	11 d7                	adc    %edx,%edi
 875b8c6:	10 fb                	adc    %bh,%bl
 875b8c8:	8b 41 04             	mov    0x4(%ecx),%eax
 875b8cb:	f7 66 10             	mull   0x10(%esi)
 875b8ce:	01 c5                	add    %eax,%ebp
 875b8d0:	11 d7                	adc    %edx,%edi
 875b8d2:	10 fb                	adc    %bh,%bl
 875b8d4:	8b 41 08             	mov    0x8(%ecx),%eax
 875b8d7:	f7 66 0c             	mull   0xc(%esi)
 875b8da:	01 c5                	add    %eax,%ebp
 875b8dc:	11 d7                	adc    %edx,%edi
 875b8de:	10 fb                	adc    %bh,%bl
 875b8e0:	8b 41 0c             	mov    0xc(%ecx),%eax
 875b8e3:	f7 66 08             	mull   0x8(%esi)
 875b8e6:	01 c5                	add    %eax,%ebp
 875b8e8:	11 d7                	adc    %edx,%edi
 875b8ea:	10 fb                	adc    %bh,%bl
 875b8ec:	8b 41 10             	mov    0x10(%ecx),%eax
 875b8ef:	f7 66 04             	mull   0x4(%esi)
 875b8f2:	01 c5                	add    %eax,%ebp
 875b8f4:	11 d7                	adc    %edx,%edi
 875b8f6:	10 fb                	adc    %bh,%bl
 875b8f8:	8b 41 14             	mov    0x14(%ecx),%eax
 875b8fb:	f7 26                	mull   (%esi)
 875b8fd:	01 c5                	add    %eax,%ebp
 875b8ff:	11 d7                	adc    %edx,%edi
 875b901:	10 fb                	adc    %bh,%bl
 875b903:	89 fa                	mov    %edi,%edx
 875b905:	8b 3c 24             	mov    (%esp),%edi
 875b908:	89 6f 14             	mov    %ebp,0x14(%edi)
 875b90b:	89 d5                	mov    %edx,%ebp
 875b90d:	89 df                	mov    %ebx,%edi
 875b90f:	31 db                	xor    %ebx,%ebx
 875b911:	8b 01                	mov    (%ecx),%eax
 875b913:	f7 66 18             	mull   0x18(%esi)
 875b916:	01 c5                	add    %eax,%ebp
 875b918:	11 d7                	adc    %edx,%edi
 875b91a:	10 fb                	adc    %bh,%bl
 875b91c:	8b 41 04             	mov    0x4(%ecx),%eax
 875b91f:	f7 66 14             	mull   0x14(%esi)
 875b922:	01 c5                	add    %eax,%ebp
 875b924:	11 d7                	adc    %edx,%edi
 875b926:	10 fb                	adc    %bh,%bl
 875b928:	8b 41 08             	mov    0x8(%ecx),%eax
 875b92b:	f7 66 10             	mull   0x10(%esi)
 875b92e:	01 c5                	add    %eax,%ebp
 875b930:	11 d7                	adc    %edx,%edi
 875b932:	10 fb                	adc    %bh,%bl
 875b934:	8b 41 0c             	mov    0xc(%ecx),%eax
 875b937:	f7 66 0c             	mull   0xc(%esi)
 875b93a:	01 c5                	add    %eax,%ebp
 875b93c:	11 d7                	adc    %edx,%edi
 875b93e:	10 fb                	adc    %bh,%bl
 875b940:	8b 41 10             	mov    0x10(%ecx),%eax
 875b943:	f7 66 08             	mull   0x8(%esi)
 875b946:	01 c5                	add    %eax,%ebp
 875b948:	11 d7                	adc    %edx,%edi
 875b94a:	10 fb                	adc    %bh,%bl
 875b94c:	8b 41 14             	mov    0x14(%ecx),%eax
 875b94f:	f7 66 04             	mull   0x4(%esi)
 875b952:	01 c5                	add    %eax,%ebp
 875b954:	11 d7                	adc    %edx,%edi
 875b956:	10 fb                	adc    %bh,%bl
 875b958:	8b 41 18             	mov    0x18(%ecx),%eax
 875b95b:	f7 26                	mull   (%esi)
 875b95d:	01 c5                	add    %eax,%ebp
 875b95f:	11 d7                	adc    %edx,%edi
 875b961:	10 fb                	adc    %bh,%bl
 875b963:	89 fa                	mov    %edi,%edx
 875b965:	8b 3c 24             	mov    (%esp),%edi
 875b968:	89 6f 18             	mov    %ebp,0x18(%edi)
 875b96b:	89 d5                	mov    %edx,%ebp
 875b96d:	89 df                	mov    %ebx,%edi
 875b96f:	31 db                	xor    %ebx,%ebx
 875b971:	8b 01                	mov    (%ecx),%eax
 875b973:	f7 66 1c             	mull   0x1c(%esi)
 875b976:	01 c5                	add    %eax,%ebp
 875b978:	11 d7                	adc    %edx,%edi
 875b97a:	10 fb                	adc    %bh,%bl
 875b97c:	8b 41 04             	mov    0x4(%ecx),%eax
 875b97f:	f7 66 18             	mull   0x18(%esi)
 875b982:	01 c5                	add    %eax,%ebp
 875b984:	11 d7                	adc    %edx,%edi
 875b986:	10 fb                	adc    %bh,%bl
 875b988:	8b 41 08             	mov    0x8(%ecx),%eax
 875b98b:	f7 66 14             	mull   0x14(%esi)
 875b98e:	01 c5                	add    %eax,%ebp
 875b990:	11 d7                	adc    %edx,%edi
 875b992:	10 fb                	adc    %bh,%bl
 875b994:	8b 41 0c             	mov    0xc(%ecx),%eax
 875b997:	f7 66 10             	mull   0x10(%esi)
 875b99a:	01 c5                	add    %eax,%ebp
 875b99c:	11 d7                	adc    %edx,%edi
 875b99e:	10 fb                	adc    %bh,%bl
 875b9a0:	8b 41 10             	mov    0x10(%ecx),%eax
 875b9a3:	f7 66 0c             	mull   0xc(%esi)
 875b9a6:	01 c5                	add    %eax,%ebp
 875b9a8:	11 d7                	adc    %edx,%edi
 875b9aa:	10 fb                	adc    %bh,%bl
 875b9ac:	8b 41 14             	mov    0x14(%ecx),%eax
 875b9af:	f7 66 08             	mull   0x8(%esi)
 875b9b2:	01 c5                	add    %eax,%ebp
 875b9b4:	11 d7                	adc    %edx,%edi
 875b9b6:	10 fb                	adc    %bh,%bl
 875b9b8:	8b 41 18             	mov    0x18(%ecx),%eax
 875b9bb:	f7 66 04             	mull   0x4(%esi)
 875b9be:	01 c5                	add    %eax,%ebp
 875b9c0:	11 d7                	adc    %edx,%edi
 875b9c2:	10 fb                	adc    %bh,%bl
 875b9c4:	8b 41 1c             	mov    0x1c(%ecx),%eax
 875b9c7:	f7 26                	mull   (%esi)
 875b9c9:	01 c5                	add    %eax,%ebp
 875b9cb:	11 d7                	adc    %edx,%edi
 875b9cd:	10 fb                	adc    %bh,%bl
 875b9cf:	89 fa                	mov    %edi,%edx
 875b9d1:	8b 3c 24             	mov    (%esp),%edi
 875b9d4:	89 6f 1c             	mov    %ebp,0x1c(%edi)
 875b9d7:	89 d5                	mov    %edx,%ebp
 875b9d9:	89 df                	mov    %ebx,%edi
 875b9db:	31 db                	xor    %ebx,%ebx
 875b9dd:	8b 41 04             	mov    0x4(%ecx),%eax
 875b9e0:	f7 66 1c             	mull   0x1c(%esi)
 875b9e3:	01 c5                	add    %eax,%ebp
 875b9e5:	11 d7                	adc    %edx,%edi
 875b9e7:	10 fb                	adc    %bh,%bl
 875b9e9:	8b 41 08             	mov    0x8(%ecx),%eax
 875b9ec:	f7 66 18             	mull   0x18(%esi)
 875b9ef:	01 c5                	add    %eax,%ebp
 875b9f1:	11 d7                	adc    %edx,%edi
 875b9f3:	10 fb                	adc    %bh,%bl
 875b9f5:	8b 41 0c             	mov    0xc(%ecx),%eax
 875b9f8:	f7 66 14             	mull   0x14(%esi)
 875b9fb:	01 c5                	add    %eax,%ebp
 875b9fd:	11 d7                	adc    %edx,%edi
 875b9ff:	10 fb                	adc    %bh,%bl
 875ba01:	8b 41 10             	mov    0x10(%ecx),%eax
 875ba04:	f7 66 10             	mull   0x10(%esi)
 875ba07:	01 c5                	add    %eax,%ebp
 875ba09:	11 d7                	adc    %edx,%edi
 875ba0b:	10 fb                	adc    %bh,%bl
 875ba0d:	8b 41 14             	mov    0x14(%ecx),%eax
 875ba10:	f7 66 0c             	mull   0xc(%esi)
 875ba13:	01 c5                	add    %eax,%ebp
 875ba15:	11 d7                	adc    %edx,%edi
 875ba17:	10 fb                	adc    %bh,%bl
 875ba19:	8b 41 18             	mov    0x18(%ecx),%eax
 875ba1c:	f7 66 08             	mull   0x8(%esi)
 875ba1f:	01 c5                	add    %eax,%ebp
 875ba21:	11 d7                	adc    %edx,%edi
 875ba23:	10 fb                	adc    %bh,%bl
 875ba25:	8b 41 1c             	mov    0x1c(%ecx),%eax
 875ba28:	f7 66 04             	mull   0x4(%esi)
 875ba2b:	01 c5                	add    %eax,%ebp
 875ba2d:	11 d7                	adc    %edx,%edi
 875ba2f:	10 fb                	adc    %bh,%bl
 875ba31:	89 fa                	mov    %edi,%edx
 875ba33:	8b 3c 24             	mov    (%esp),%edi
 875ba36:	89 6f 20             	mov    %ebp,0x20(%edi)
 875ba39:	89 d5                	mov    %edx,%ebp
 875ba3b:	89 df                	mov    %ebx,%edi
 875ba3d:	31 db                	xor    %ebx,%ebx
 875ba3f:	8b 41 08             	mov    0x8(%ecx),%eax
 875ba42:	f7 66 1c             	mull   0x1c(%esi)
 875ba45:	01 c5                	add    %eax,%ebp
 875ba47:	11 d7                	adc    %edx,%edi
 875ba49:	10 fb                	adc    %bh,%bl
 875ba4b:	8b 41 0c             	mov    0xc(%ecx),%eax
 875ba4e:	f7 66 18             	mull   0x18(%esi)
 875ba51:	01 c5                	add    %eax,%ebp
 875ba53:	11 d7                	adc    %edx,%edi
 875ba55:	10 fb                	adc    %bh,%bl
 875ba57:	8b 41 10             	mov    0x10(%ecx),%eax
 875ba5a:	f7 66 14             	mull   0x14(%esi)
 875ba5d:	01 c5                	add    %eax,%ebp
 875ba5f:	11 d7                	adc    %edx,%edi
 875ba61:	10 fb                	adc    %bh,%bl
 875ba63:	8b 41 14             	mov    0x14(%ecx),%eax
 875ba66:	f7 66 10             	mull   0x10(%esi)
 875ba69:	01 c5                	add    %eax,%ebp
 875ba6b:	11 d7                	adc    %edx,%edi
 875ba6d:	10 fb                	adc    %bh,%bl
 875ba6f:	8b 41 18             	mov    0x18(%ecx),%eax
 875ba72:	f7 66 0c             	mull   0xc(%esi)
 875ba75:	01 c5                	add    %eax,%ebp
 875ba77:	11 d7                	adc    %edx,%edi
 875ba79:	10 fb                	adc    %bh,%bl
 875ba7b:	8b 41 1c             	mov    0x1c(%ecx),%eax
 875ba7e:	f7 66 08             	mull   0x8(%esi)
 875ba81:	01 c5                	add    %eax,%ebp
 875ba83:	11 d7                	adc    %edx,%edi
 875ba85:	10 fb                	adc    %bh,%bl
 875ba87:	89 fa                	mov    %edi,%edx
 875ba89:	8b 3c 24             	mov    (%esp),%edi
 875ba8c:	89 6f 24             	mov    %ebp,0x24(%edi)
 875ba8f:	89 d5                	mov    %edx,%ebp
 875ba91:	89 df                	mov    %ebx,%edi
 875ba93:	31 db                	xor    %ebx,%ebx
 875ba95:	8b 41 0c             	mov    0xc(%ecx),%eax
 875ba98:	f7 66 1c             	mull   0x1c(%esi)
 875ba9b:	01 c5                	add    %eax,%ebp
 875ba9d:	11 d7                	adc    %edx,%edi
 875ba9f:	10 fb                	adc    %bh,%bl
 875baa1:	8b 41 10             	mov    0x10(%ecx),%eax
 875baa4:	f7 66 18             	mull   0x18(%esi)
 875baa7:	01 c5                	add    %eax,%ebp
 875baa9:	11 d7                	adc    %edx,%edi
 875baab:	10 fb                	adc    %bh,%bl
 875baad:	8b 41 14             	mov    0x14(%ecx),%eax
 875bab0:	f7 66 14             	mull   0x14(%esi)
 875bab3:	01 c5                	add    %eax,%ebp
 875bab5:	11 d7                	adc    %edx,%edi
 875bab7:	10 fb                	adc    %bh,%bl
 875bab9:	8b 41 18             	mov    0x18(%ecx),%eax
 875babc:	f7 66 10             	mull   0x10(%esi)
 875babf:	01 c5                	add    %eax,%ebp
 875bac1:	11 d7                	adc    %edx,%edi
 875bac3:	10 fb                	adc    %bh,%bl
 875bac5:	8b 41 1c             	mov    0x1c(%ecx),%eax
 875bac8:	f7 66 0c             	mull   0xc(%esi)
 875bacb:	01 c5                	add    %eax,%ebp
 875bacd:	11 d7                	adc    %edx,%edi
 875bacf:	10 fb                	adc    %bh,%bl
 875bad1:	89 fa                	mov    %edi,%edx
 875bad3:	8b 3c 24             	mov    (%esp),%edi
 875bad6:	89 6f 28             	mov    %ebp,0x28(%edi)
 875bad9:	89 d5                	mov    %edx,%ebp
 875badb:	89 df                	mov    %ebx,%edi
 875badd:	31 db                	xor    %ebx,%ebx
 875badf:	8b 41 10             	mov    0x10(%ecx),%eax
 875bae2:	f7 66 1c             	mull   0x1c(%esi)
 875bae5:	01 c5                	add    %eax,%ebp
 875bae7:	11 d7                	adc    %edx,%edi
 875bae9:	10 fb                	adc    %bh,%bl
 875baeb:	8b 41 14             	mov    0x14(%ecx),%eax
 875baee:	f7 66 18             	mull   0x18(%esi)
 875baf1:	01 c5                	add    %eax,%ebp
 875baf3:	11 d7                	adc    %edx,%edi
 875baf5:	10 fb                	adc    %bh,%bl
 875baf7:	8b 41 18             	mov    0x18(%ecx),%eax
 875bafa:	f7 66 14             	mull   0x14(%esi)
 875bafd:	01 c5                	add    %eax,%ebp
 875baff:	11 d7                	adc    %edx,%edi
 875bb01:	10 fb                	adc    %bh,%bl
 875bb03:	8b 41 1c             	mov    0x1c(%ecx),%eax
 875bb06:	f7 66 10             	mull   0x10(%esi)
 875bb09:	01 c5                	add    %eax,%ebp
 875bb0b:	11 d7                	adc    %edx,%edi
 875bb0d:	10 fb                	adc    %bh,%bl
 875bb0f:	89 fa                	mov    %edi,%edx
 875bb11:	8b 3c 24             	mov    (%esp),%edi
 875bb14:	89 6f 2c             	mov    %ebp,0x2c(%edi)
 875bb17:	89 d5                	mov    %edx,%ebp
 875bb19:	89 df                	mov    %ebx,%edi
 875bb1b:	31 db                	xor    %ebx,%ebx
 875bb1d:	8b 41 14             	mov    0x14(%ecx),%eax
 875bb20:	f7 66 1c             	mull   0x1c(%esi)
 875bb23:	01 c5                	add    %eax,%ebp
 875bb25:	11 d7                	adc    %edx,%edi
 875bb27:	10 fb                	adc    %bh,%bl
 875bb29:	8b 41 18             	mov    0x18(%ecx),%eax
 875bb2c:	f7 66 18             	mull   0x18(%esi)
 875bb2f:	01 c5                	add    %eax,%ebp
 875bb31:	11 d7                	adc    %edx,%edi
 875bb33:	10 fb                	adc    %bh,%bl
 875bb35:	8b 41 1c             	mov    0x1c(%ecx),%eax
 875bb38:	f7 66 14             	mull   0x14(%esi)
 875bb3b:	01 c5                	add    %eax,%ebp
 875bb3d:	11 d7                	adc    %edx,%edi
 875bb3f:	10 fb                	adc    %bh,%bl
 875bb41:	89 fa                	mov    %edi,%edx
 875bb43:	8b 3c 24             	mov    (%esp),%edi
 875bb46:	89 6f 30             	mov    %ebp,0x30(%edi)
 875bb49:	89 d5                	mov    %edx,%ebp
 875bb4b:	89 df                	mov    %ebx,%edi
 875bb4d:	31 db                	xor    %ebx,%ebx
 875bb4f:	8b 41 18             	mov    0x18(%ecx),%eax
 875bb52:	f7 66 1c             	mull   0x1c(%esi)
 875bb55:	01 c5                	add    %eax,%ebp
 875bb57:	11 d7                	adc    %edx,%edi
 875bb59:	10 fb                	adc    %bh,%bl
 875bb5b:	8b 41 1c             	mov    0x1c(%ecx),%eax
 875bb5e:	f7 66 18             	mull   0x18(%esi)
 875bb61:	01 c5                	add    %eax,%ebp
 875bb63:	11 d7                	adc    %edx,%edi
 875bb65:	10 fb                	adc    %bh,%bl
 875bb67:	89 fa                	mov    %edi,%edx
 875bb69:	8b 3c 24             	mov    (%esp),%edi
 875bb6c:	89 6f 34             	mov    %ebp,0x34(%edi)
 875bb6f:	89 d5                	mov    %edx,%ebp
 875bb71:	89 df                	mov    %ebx,%edi
 875bb73:	31 db                	xor    %ebx,%ebx
 875bb75:	8b 41 1c             	mov    0x1c(%ecx),%eax
 875bb78:	f7 66 1c             	mull   0x1c(%esi)
 875bb7b:	01 c5                	add    %eax,%ebp
 875bb7d:	11 fa                	adc    %edi,%edx
 875bb7f:	8b 3c 24             	mov    (%esp),%edi
 875bb82:	89 6f 38             	mov    %ebp,0x38(%edi)
 875bb85:	89 57 3c             	mov    %edx,0x3c(%edi)
 875bb88:	83 c4 04             	add    $0x4,%esp
 875bb8b:	5d                   	pop    %ebp
 875bb8c:	5b                   	pop    %ebx
 875bb8d:	8b 34 24             	mov    (%esp),%esi
 875bb90:	8b 7c 24 04          	mov    0x4(%esp),%edi
 875bb94:	89 ec                	mov    %ebp,%esp
 875bb96:	5d                   	pop    %ebp
 875bb97:	c3                   	ret
 875bb98:	90                   	nop
 875bb99:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::PentiumOptimized::Multiply8 @ 0x875b7b0

/* TaoCrypt::PentiumOptimized::Multiply8(unsigned int*, unsigned int const*, unsigned int const*) */

void TaoCrypt::PentiumOptimized::Multiply8(uint *param_1,uint *param_2,uint *param_3)

{
  longlong lVar1;
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
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
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
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  
  uVar6 = (uint)((ulonglong)*param_3 * (ulonglong)*param_2 >> 0x20);
  *param_1 = (uint)((ulonglong)*param_3 * (ulonglong)*param_2);
  lVar1 = (ulonglong)*param_3 * (ulonglong)param_2[1];
  lVar2 = lVar1 + (ulonglong)uVar6;
  uVar11 = (uint)lVar2;
  uVar13 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar7 = (uint)((ulonglong)param_3[1] * (ulonglong)*param_2 >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[1] * (ulonglong)*param_2);
  uVar4 = (uint)CARRY4(uVar11,uVar3);
  uVar5 = uVar13 + uVar7;
  uVar14 = uVar5 + uVar4;
  uVar10 = (uint)(byte)(CARRY4((uint)((ulonglong)lVar1 >> 0x20),(uint)CARRY4(uVar6,(uint)lVar1)) +
                       (CARRY4(uVar13,uVar7) || CARRY4(uVar5,uVar4)));
  param_1[1] = uVar11 + uVar3;
  uVar8 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[2] >> 0x20);
  uVar4 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[2]);
  uVar3 = uVar14 + uVar4;
  uVar4 = (uint)CARRY4(uVar14,uVar4);
  uVar6 = uVar10 + uVar8;
  uVar15 = uVar6 + uVar4;
  uVar14 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[1] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[1]);
  uVar12 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar7 = uVar15 + uVar14;
  uVar16 = uVar7 + uVar5;
  uVar9 = (uint)((ulonglong)param_3[2] * (ulonglong)*param_2 >> 0x20);
  uVar13 = (uint)((ulonglong)param_3[2] * (ulonglong)*param_2);
  uVar3 = (uint)CARRY4(uVar12,uVar13);
  uVar11 = uVar16 + uVar9;
  uVar17 = uVar11 + uVar3;
  uVar16 = (uint)(byte)((CARRY4(uVar10,uVar8) || CARRY4(uVar6,uVar4)) +
                        (CARRY4(uVar15,uVar14) || CARRY4(uVar7,uVar5)) +
                       (CARRY4(uVar16,uVar9) || CARRY4(uVar11,uVar3)));
  param_1[2] = uVar12 + uVar13;
  uVar9 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[3] >> 0x20);
  uVar4 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[3]);
  uVar3 = uVar17 + uVar4;
  uVar4 = (uint)CARRY4(uVar17,uVar4);
  uVar7 = uVar16 + uVar9;
  uVar18 = uVar7 + uVar4;
  uVar10 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[2] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[2]);
  uVar6 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar11 = uVar18 + uVar10;
  uVar19 = uVar11 + uVar5;
  uVar12 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[1] >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[1]);
  uVar17 = uVar6 + uVar3;
  uVar3 = (uint)CARRY4(uVar6,uVar3);
  uVar13 = uVar19 + uVar12;
  uVar20 = uVar13 + uVar3;
  uVar15 = (uint)((ulonglong)param_3[3] * (ulonglong)*param_2 >> 0x20);
  uVar14 = (uint)((ulonglong)param_3[3] * (ulonglong)*param_2);
  uVar6 = (uint)CARRY4(uVar17,uVar14);
  uVar8 = uVar20 + uVar15;
  uVar21 = uVar8 + uVar6;
  uVar19 = (uint)(byte)((CARRY4(uVar16,uVar9) || CARRY4(uVar7,uVar4)) +
                        (CARRY4(uVar18,uVar10) || CARRY4(uVar11,uVar5)) +
                        (CARRY4(uVar19,uVar12) || CARRY4(uVar13,uVar3)) +
                       (CARRY4(uVar20,uVar15) || CARRY4(uVar8,uVar6)));
  param_1[3] = uVar17 + uVar14;
  uVar12 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[4] >> 0x20);
  uVar4 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[4]);
  uVar3 = uVar21 + uVar4;
  uVar4 = (uint)CARRY4(uVar21,uVar4);
  uVar11 = uVar19 + uVar12;
  uVar21 = uVar11 + uVar4;
  uVar15 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[3] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[3]);
  uVar6 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar13 = uVar21 + uVar15;
  uVar22 = uVar13 + uVar5;
  uVar16 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[2] >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[2]);
  uVar7 = uVar6 + uVar3;
  uVar3 = (uint)CARRY4(uVar6,uVar3);
  uVar8 = uVar22 + uVar16;
  uVar23 = uVar8 + uVar3;
  uVar17 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[1] >> 0x20);
  uVar6 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[1]);
  uVar20 = uVar7 + uVar6;
  uVar6 = (uint)CARRY4(uVar7,uVar6);
  uVar14 = uVar23 + uVar17;
  uVar24 = uVar14 + uVar6;
  uVar18 = (uint)((ulonglong)param_3[4] * (ulonglong)*param_2 >> 0x20);
  uVar10 = (uint)((ulonglong)param_3[4] * (ulonglong)*param_2);
  uVar7 = (uint)CARRY4(uVar20,uVar10);
  uVar9 = uVar24 + uVar18;
  uVar25 = uVar9 + uVar7;
  uVar22 = (uint)(byte)((CARRY4(uVar19,uVar12) || CARRY4(uVar11,uVar4)) +
                        (CARRY4(uVar21,uVar15) || CARRY4(uVar13,uVar5)) +
                        (CARRY4(uVar22,uVar16) || CARRY4(uVar8,uVar3)) +
                        (CARRY4(uVar23,uVar17) || CARRY4(uVar14,uVar6)) +
                       (CARRY4(uVar24,uVar18) || CARRY4(uVar9,uVar7)));
  param_1[4] = uVar20 + uVar10;
  uVar16 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[5] >> 0x20);
  uVar4 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[5]);
  uVar3 = uVar25 + uVar4;
  uVar4 = (uint)CARRY4(uVar25,uVar4);
  uVar13 = uVar22 + uVar16;
  uVar24 = uVar13 + uVar4;
  uVar17 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[4] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[4]);
  uVar6 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar8 = uVar24 + uVar17;
  uVar25 = uVar8 + uVar5;
  uVar18 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[3] >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[3]);
  uVar7 = uVar6 + uVar3;
  uVar3 = (uint)CARRY4(uVar6,uVar3);
  uVar14 = uVar25 + uVar18;
  uVar26 = uVar14 + uVar3;
  uVar19 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[2] >> 0x20);
  uVar6 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[2]);
  uVar11 = uVar7 + uVar6;
  uVar6 = (uint)CARRY4(uVar7,uVar6);
  uVar9 = uVar26 + uVar19;
  uVar27 = uVar9 + uVar6;
  uVar20 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[1] >> 0x20);
  uVar7 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[1]);
  uVar23 = uVar11 + uVar7;
  uVar7 = (uint)CARRY4(uVar11,uVar7);
  uVar10 = uVar27 + uVar20;
  uVar28 = uVar10 + uVar7;
  uVar21 = (uint)((ulonglong)param_3[5] * (ulonglong)*param_2 >> 0x20);
  uVar15 = (uint)((ulonglong)param_3[5] * (ulonglong)*param_2);
  uVar11 = (uint)CARRY4(uVar23,uVar15);
  uVar12 = uVar28 + uVar21;
  uVar29 = uVar12 + uVar11;
  uVar25 = (uint)(byte)((CARRY4(uVar22,uVar16) || CARRY4(uVar13,uVar4)) +
                        (CARRY4(uVar24,uVar17) || CARRY4(uVar8,uVar5)) +
                        (CARRY4(uVar25,uVar18) || CARRY4(uVar14,uVar3)) +
                        (CARRY4(uVar26,uVar19) || CARRY4(uVar9,uVar6)) +
                        (CARRY4(uVar27,uVar20) || CARRY4(uVar10,uVar7)) +
                       (CARRY4(uVar28,uVar21) || CARRY4(uVar12,uVar11)));
  param_1[5] = uVar23 + uVar15;
  uVar18 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[6] >> 0x20);
  uVar4 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[6]);
  uVar3 = uVar29 + uVar4;
  uVar4 = (uint)CARRY4(uVar29,uVar4);
  uVar8 = uVar25 + uVar18;
  uVar27 = uVar8 + uVar4;
  uVar19 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[5] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[5]);
  uVar6 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar14 = uVar27 + uVar19;
  uVar28 = uVar14 + uVar5;
  uVar20 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[4] >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[4]);
  uVar7 = uVar6 + uVar3;
  uVar3 = (uint)CARRY4(uVar6,uVar3);
  uVar9 = uVar28 + uVar20;
  uVar29 = uVar9 + uVar3;
  uVar21 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[3] >> 0x20);
  uVar6 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[3]);
  uVar11 = uVar7 + uVar6;
  uVar6 = (uint)CARRY4(uVar7,uVar6);
  uVar10 = uVar29 + uVar21;
  uVar30 = uVar10 + uVar6;
  uVar22 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[2] >> 0x20);
  uVar7 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[2]);
  uVar13 = uVar11 + uVar7;
  uVar7 = (uint)CARRY4(uVar11,uVar7);
  uVar12 = uVar30 + uVar22;
  uVar31 = uVar12 + uVar7;
  uVar23 = (uint)((ulonglong)param_3[5] * (ulonglong)param_2[1] >> 0x20);
  uVar11 = (uint)((ulonglong)param_3[5] * (ulonglong)param_2[1]);
  uVar26 = uVar13 + uVar11;
  uVar11 = (uint)CARRY4(uVar13,uVar11);
  uVar15 = uVar31 + uVar23;
  uVar32 = uVar15 + uVar11;
  uVar24 = (uint)((ulonglong)param_3[6] * (ulonglong)*param_2 >> 0x20);
  uVar17 = (uint)((ulonglong)param_3[6] * (ulonglong)*param_2);
  uVar13 = (uint)CARRY4(uVar26,uVar17);
  uVar16 = uVar32 + uVar24;
  uVar33 = uVar16 + uVar13;
  uVar28 = (uint)(byte)((CARRY4(uVar25,uVar18) || CARRY4(uVar8,uVar4)) +
                        (CARRY4(uVar27,uVar19) || CARRY4(uVar14,uVar5)) +
                        (CARRY4(uVar28,uVar20) || CARRY4(uVar9,uVar3)) +
                        (CARRY4(uVar29,uVar21) || CARRY4(uVar10,uVar6)) +
                        (CARRY4(uVar30,uVar22) || CARRY4(uVar12,uVar7)) +
                        (CARRY4(uVar31,uVar23) || CARRY4(uVar15,uVar11)) +
                       (CARRY4(uVar32,uVar24) || CARRY4(uVar16,uVar13)));
  param_1[6] = uVar26 + uVar17;
  uVar20 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[7] >> 0x20);
  uVar4 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[7]);
  uVar3 = uVar33 + uVar4;
  uVar4 = (uint)CARRY4(uVar33,uVar4);
  uVar14 = uVar28 + uVar20;
  uVar30 = uVar14 + uVar4;
  uVar21 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[6] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[6]);
  uVar6 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar9 = uVar30 + uVar21;
  uVar31 = uVar9 + uVar5;
  uVar22 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[5] >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[5]);
  uVar7 = uVar6 + uVar3;
  uVar3 = (uint)CARRY4(uVar6,uVar3);
  uVar10 = uVar31 + uVar22;
  uVar32 = uVar10 + uVar3;
  uVar23 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[4] >> 0x20);
  uVar6 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[4]);
  uVar11 = uVar7 + uVar6;
  uVar6 = (uint)CARRY4(uVar7,uVar6);
  uVar12 = uVar32 + uVar23;
  uVar33 = uVar12 + uVar6;
  uVar24 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[3] >> 0x20);
  uVar7 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[3]);
  uVar13 = uVar11 + uVar7;
  uVar7 = (uint)CARRY4(uVar11,uVar7);
  uVar15 = uVar33 + uVar24;
  uVar34 = uVar15 + uVar7;
  uVar25 = (uint)((ulonglong)param_3[5] * (ulonglong)param_2[2] >> 0x20);
  uVar11 = (uint)((ulonglong)param_3[5] * (ulonglong)param_2[2]);
  uVar8 = uVar13 + uVar11;
  uVar11 = (uint)CARRY4(uVar13,uVar11);
  uVar16 = uVar34 + uVar25;
  uVar35 = uVar16 + uVar11;
  uVar26 = (uint)((ulonglong)param_3[6] * (ulonglong)param_2[1] >> 0x20);
  uVar13 = (uint)((ulonglong)param_3[6] * (ulonglong)param_2[1]);
  uVar29 = uVar8 + uVar13;
  uVar13 = (uint)CARRY4(uVar8,uVar13);
  uVar17 = uVar35 + uVar26;
  uVar36 = uVar17 + uVar13;
  uVar27 = (uint)((ulonglong)param_3[7] * (ulonglong)*param_2 >> 0x20);
  uVar19 = (uint)((ulonglong)param_3[7] * (ulonglong)*param_2);
  uVar8 = (uint)CARRY4(uVar29,uVar19);
  uVar18 = uVar36 + uVar27;
  uVar37 = uVar18 + uVar8;
  uVar25 = (uint)(byte)((CARRY4(uVar28,uVar20) || CARRY4(uVar14,uVar4)) +
                        (CARRY4(uVar30,uVar21) || CARRY4(uVar9,uVar5)) +
                        (CARRY4(uVar31,uVar22) || CARRY4(uVar10,uVar3)) +
                        (CARRY4(uVar32,uVar23) || CARRY4(uVar12,uVar6)) +
                        (CARRY4(uVar33,uVar24) || CARRY4(uVar15,uVar7)) +
                        (CARRY4(uVar34,uVar25) || CARRY4(uVar16,uVar11)) +
                        (CARRY4(uVar35,uVar26) || CARRY4(uVar17,uVar13)) +
                       (CARRY4(uVar36,uVar27) || CARRY4(uVar18,uVar8)));
  param_1[7] = uVar29 + uVar19;
  uVar18 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[7] >> 0x20);
  uVar4 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[7]);
  uVar3 = uVar37 + uVar4;
  uVar4 = (uint)CARRY4(uVar37,uVar4);
  uVar8 = uVar25 + uVar18;
  uVar27 = uVar8 + uVar4;
  uVar19 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[6] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[6]);
  uVar6 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar14 = uVar27 + uVar19;
  uVar28 = uVar14 + uVar5;
  uVar20 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[5] >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[5]);
  uVar7 = uVar6 + uVar3;
  uVar3 = (uint)CARRY4(uVar6,uVar3);
  uVar9 = uVar28 + uVar20;
  uVar29 = uVar9 + uVar3;
  uVar21 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[4] >> 0x20);
  uVar6 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[4]);
  uVar11 = uVar7 + uVar6;
  uVar6 = (uint)CARRY4(uVar7,uVar6);
  uVar10 = uVar29 + uVar21;
  uVar30 = uVar10 + uVar6;
  uVar22 = (uint)((ulonglong)param_3[5] * (ulonglong)param_2[3] >> 0x20);
  uVar7 = (uint)((ulonglong)param_3[5] * (ulonglong)param_2[3]);
  uVar13 = uVar11 + uVar7;
  uVar7 = (uint)CARRY4(uVar11,uVar7);
  uVar12 = uVar30 + uVar22;
  uVar31 = uVar12 + uVar7;
  uVar23 = (uint)((ulonglong)param_3[6] * (ulonglong)param_2[2] >> 0x20);
  uVar11 = (uint)((ulonglong)param_3[6] * (ulonglong)param_2[2]);
  uVar26 = uVar13 + uVar11;
  uVar11 = (uint)CARRY4(uVar13,uVar11);
  uVar15 = uVar31 + uVar23;
  uVar32 = uVar15 + uVar11;
  uVar24 = (uint)((ulonglong)param_3[7] * (ulonglong)param_2[1] >> 0x20);
  uVar17 = (uint)((ulonglong)param_3[7] * (ulonglong)param_2[1]);
  uVar13 = (uint)CARRY4(uVar26,uVar17);
  uVar16 = uVar32 + uVar24;
  uVar33 = uVar16 + uVar13;
  uVar22 = (uint)(byte)((CARRY4(uVar25,uVar18) || CARRY4(uVar8,uVar4)) +
                        (CARRY4(uVar27,uVar19) || CARRY4(uVar14,uVar5)) +
                        (CARRY4(uVar28,uVar20) || CARRY4(uVar9,uVar3)) +
                        (CARRY4(uVar29,uVar21) || CARRY4(uVar10,uVar6)) +
                        (CARRY4(uVar30,uVar22) || CARRY4(uVar12,uVar7)) +
                        (CARRY4(uVar31,uVar23) || CARRY4(uVar15,uVar11)) +
                       (CARRY4(uVar32,uVar24) || CARRY4(uVar16,uVar13)));
  param_1[8] = uVar26 + uVar17;
  uVar16 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[7] >> 0x20);
  uVar4 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[7]);
  uVar3 = uVar33 + uVar4;
  uVar4 = (uint)CARRY4(uVar33,uVar4);
  uVar13 = uVar22 + uVar16;
  uVar24 = uVar13 + uVar4;
  uVar17 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[6] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[6]);
  uVar6 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar8 = uVar24 + uVar17;
  uVar25 = uVar8 + uVar5;
  uVar18 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[5] >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[5]);
  uVar7 = uVar6 + uVar3;
  uVar3 = (uint)CARRY4(uVar6,uVar3);
  uVar14 = uVar25 + uVar18;
  uVar26 = uVar14 + uVar3;
  uVar19 = (uint)((ulonglong)param_3[5] * (ulonglong)param_2[4] >> 0x20);
  uVar6 = (uint)((ulonglong)param_3[5] * (ulonglong)param_2[4]);
  uVar11 = uVar7 + uVar6;
  uVar6 = (uint)CARRY4(uVar7,uVar6);
  uVar9 = uVar26 + uVar19;
  uVar27 = uVar9 + uVar6;
  uVar20 = (uint)((ulonglong)param_3[6] * (ulonglong)param_2[3] >> 0x20);
  uVar7 = (uint)((ulonglong)param_3[6] * (ulonglong)param_2[3]);
  uVar23 = uVar11 + uVar7;
  uVar7 = (uint)CARRY4(uVar11,uVar7);
  uVar10 = uVar27 + uVar20;
  uVar28 = uVar10 + uVar7;
  uVar21 = (uint)((ulonglong)param_3[7] * (ulonglong)param_2[2] >> 0x20);
  uVar15 = (uint)((ulonglong)param_3[7] * (ulonglong)param_2[2]);
  uVar11 = (uint)CARRY4(uVar23,uVar15);
  uVar12 = uVar28 + uVar21;
  uVar29 = uVar12 + uVar11;
  uVar19 = (uint)(byte)((CARRY4(uVar22,uVar16) || CARRY4(uVar13,uVar4)) +
                        (CARRY4(uVar24,uVar17) || CARRY4(uVar8,uVar5)) +
                        (CARRY4(uVar25,uVar18) || CARRY4(uVar14,uVar3)) +
                        (CARRY4(uVar26,uVar19) || CARRY4(uVar9,uVar6)) +
                        (CARRY4(uVar27,uVar20) || CARRY4(uVar10,uVar7)) +
                       (CARRY4(uVar28,uVar21) || CARRY4(uVar12,uVar11)));
  param_1[9] = uVar23 + uVar15;
  uVar12 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[7] >> 0x20);
  uVar4 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[7]);
  uVar3 = uVar29 + uVar4;
  uVar4 = (uint)CARRY4(uVar29,uVar4);
  uVar11 = uVar19 + uVar12;
  uVar21 = uVar11 + uVar4;
  uVar15 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[6] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[6]);
  uVar6 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar13 = uVar21 + uVar15;
  uVar22 = uVar13 + uVar5;
  uVar16 = (uint)((ulonglong)param_3[5] * (ulonglong)param_2[5] >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[5] * (ulonglong)param_2[5]);
  uVar7 = uVar6 + uVar3;
  uVar3 = (uint)CARRY4(uVar6,uVar3);
  uVar8 = uVar22 + uVar16;
  uVar23 = uVar8 + uVar3;
  uVar17 = (uint)((ulonglong)param_3[6] * (ulonglong)param_2[4] >> 0x20);
  uVar6 = (uint)((ulonglong)param_3[6] * (ulonglong)param_2[4]);
  uVar20 = uVar7 + uVar6;
  uVar6 = (uint)CARRY4(uVar7,uVar6);
  uVar14 = uVar23 + uVar17;
  uVar24 = uVar14 + uVar6;
  uVar18 = (uint)((ulonglong)param_3[7] * (ulonglong)param_2[3] >> 0x20);
  uVar10 = (uint)((ulonglong)param_3[7] * (ulonglong)param_2[3]);
  uVar7 = (uint)CARRY4(uVar20,uVar10);
  uVar9 = uVar24 + uVar18;
  uVar25 = uVar9 + uVar7;
  uVar16 = (uint)(byte)((CARRY4(uVar19,uVar12) || CARRY4(uVar11,uVar4)) +
                        (CARRY4(uVar21,uVar15) || CARRY4(uVar13,uVar5)) +
                        (CARRY4(uVar22,uVar16) || CARRY4(uVar8,uVar3)) +
                        (CARRY4(uVar23,uVar17) || CARRY4(uVar14,uVar6)) +
                       (CARRY4(uVar24,uVar18) || CARRY4(uVar9,uVar7)));
  param_1[10] = uVar20 + uVar10;
  uVar9 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[7] >> 0x20);
  uVar4 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[7]);
  uVar3 = uVar25 + uVar4;
  uVar4 = (uint)CARRY4(uVar25,uVar4);
  uVar7 = uVar16 + uVar9;
  uVar18 = uVar7 + uVar4;
  uVar10 = (uint)((ulonglong)param_3[5] * (ulonglong)param_2[6] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[5] * (ulonglong)param_2[6]);
  uVar6 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar11 = uVar18 + uVar10;
  uVar19 = uVar11 + uVar5;
  uVar12 = (uint)((ulonglong)param_3[6] * (ulonglong)param_2[5] >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[6] * (ulonglong)param_2[5]);
  uVar17 = uVar6 + uVar3;
  uVar3 = (uint)CARRY4(uVar6,uVar3);
  uVar13 = uVar19 + uVar12;
  uVar20 = uVar13 + uVar3;
  uVar15 = (uint)((ulonglong)param_3[7] * (ulonglong)param_2[4] >> 0x20);
  uVar14 = (uint)((ulonglong)param_3[7] * (ulonglong)param_2[4]);
  uVar6 = (uint)CARRY4(uVar17,uVar14);
  uVar8 = uVar20 + uVar15;
  uVar21 = uVar8 + uVar6;
  uVar10 = (uint)(byte)((CARRY4(uVar16,uVar9) || CARRY4(uVar7,uVar4)) +
                        (CARRY4(uVar18,uVar10) || CARRY4(uVar11,uVar5)) +
                        (CARRY4(uVar19,uVar12) || CARRY4(uVar13,uVar3)) +
                       (CARRY4(uVar20,uVar15) || CARRY4(uVar8,uVar6)));
  param_1[0xb] = uVar17 + uVar14;
  uVar8 = (uint)((ulonglong)param_3[5] * (ulonglong)param_2[7] >> 0x20);
  uVar4 = (uint)((ulonglong)param_3[5] * (ulonglong)param_2[7]);
  uVar3 = uVar21 + uVar4;
  uVar4 = (uint)CARRY4(uVar21,uVar4);
  uVar6 = uVar10 + uVar8;
  uVar15 = uVar6 + uVar4;
  uVar14 = (uint)((ulonglong)param_3[6] * (ulonglong)param_2[6] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[6] * (ulonglong)param_2[6]);
  uVar12 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar7 = uVar15 + uVar14;
  uVar16 = uVar7 + uVar5;
  uVar9 = (uint)((ulonglong)param_3[7] * (ulonglong)param_2[5] >> 0x20);
  uVar13 = (uint)((ulonglong)param_3[7] * (ulonglong)param_2[5]);
  uVar3 = (uint)CARRY4(uVar12,uVar13);
  uVar11 = uVar16 + uVar9;
  uVar17 = uVar11 + uVar3;
  uVar8 = (uint)(byte)((CARRY4(uVar10,uVar8) || CARRY4(uVar6,uVar4)) +
                       (CARRY4(uVar15,uVar14) || CARRY4(uVar7,uVar5)) +
                      (CARRY4(uVar16,uVar9) || CARRY4(uVar11,uVar3)));
  param_1[0xc] = uVar12 + uVar13;
  uVar11 = (uint)((ulonglong)param_3[6] * (ulonglong)param_2[7] >> 0x20);
  uVar4 = (uint)((ulonglong)param_3[6] * (ulonglong)param_2[7]);
  uVar14 = uVar17 + uVar4;
  uVar4 = (uint)CARRY4(uVar17,uVar4);
  uVar3 = uVar8 + uVar11;
  uVar9 = uVar3 + uVar4;
  uVar13 = (uint)((ulonglong)param_3[7] * (ulonglong)param_2[6] >> 0x20);
  uVar7 = (uint)((ulonglong)param_3[7] * (ulonglong)param_2[6]);
  uVar5 = (uint)CARRY4(uVar14,uVar7);
  uVar6 = uVar9 + uVar13;
  param_1[0xd] = uVar14 + uVar7;
  *(ulonglong *)(param_1 + 0xe) =
       (ulonglong)param_3[7] * (ulonglong)param_2[7] +
       (ulonglong)
       CONCAT14((CARRY4(uVar8,uVar11) || CARRY4(uVar3,uVar4)) +
                (CARRY4(uVar9,uVar13) || CARRY4(uVar6,uVar5)),uVar6 + uVar5);
  return;
}

```

---

## Multiply8Bottom

```asm
// === 0875bba0 TaoCrypt::PentiumOptimized::Multiply8Bottom  [0x0875bba0-0x875bdbf] ===
 875bba0:	55                   	push   %ebp
 875bba1:	89 e5                	mov    %esp,%ebp
 875bba3:	83 ec 08             	sub    $0x8,%esp
 875bba6:	89 34 24             	mov    %esi,(%esp)
 875bba9:	8b 4d 10             	mov    0x10(%ebp),%ecx
 875bbac:	89 7c 24 04          	mov    %edi,0x4(%esp)
 875bbb0:	8b 75 0c             	mov    0xc(%ebp),%esi
 875bbb3:	53                   	push   %ebx
 875bbb4:	55                   	push   %ebp
 875bbb5:	ff 75 08             	push   0x8(%ebp)
 875bbb8:	31 ed                	xor    %ebp,%ebp
 875bbba:	31 ff                	xor    %edi,%edi
 875bbbc:	31 db                	xor    %ebx,%ebx
 875bbbe:	8b 01                	mov    (%ecx),%eax
 875bbc0:	f7 26                	mull   (%esi)
 875bbc2:	01 c5                	add    %eax,%ebp
 875bbc4:	11 d7                	adc    %edx,%edi
 875bbc6:	10 fb                	adc    %bh,%bl
 875bbc8:	89 fa                	mov    %edi,%edx
 875bbca:	8b 3c 24             	mov    (%esp),%edi
 875bbcd:	89 2f                	mov    %ebp,(%edi)
 875bbcf:	89 d5                	mov    %edx,%ebp
 875bbd1:	89 df                	mov    %ebx,%edi
 875bbd3:	31 db                	xor    %ebx,%ebx
 875bbd5:	8b 01                	mov    (%ecx),%eax
 875bbd7:	f7 66 04             	mull   0x4(%esi)
 875bbda:	01 c5                	add    %eax,%ebp
 875bbdc:	11 d7                	adc    %edx,%edi
 875bbde:	10 fb                	adc    %bh,%bl
 875bbe0:	8b 41 04             	mov    0x4(%ecx),%eax
 875bbe3:	f7 26                	mull   (%esi)
 875bbe5:	01 c5                	add    %eax,%ebp
 875bbe7:	11 d7                	adc    %edx,%edi
 875bbe9:	10 fb                	adc    %bh,%bl
 875bbeb:	89 fa                	mov    %edi,%edx
 875bbed:	8b 3c 24             	mov    (%esp),%edi
 875bbf0:	89 6f 04             	mov    %ebp,0x4(%edi)
 875bbf3:	89 d5                	mov    %edx,%ebp
 875bbf5:	89 df                	mov    %ebx,%edi
 875bbf7:	31 db                	xor    %ebx,%ebx
 875bbf9:	8b 01                	mov    (%ecx),%eax
 875bbfb:	f7 66 08             	mull   0x8(%esi)
 875bbfe:	01 c5                	add    %eax,%ebp
 875bc00:	11 d7                	adc    %edx,%edi
 875bc02:	10 fb                	adc    %bh,%bl
 875bc04:	8b 41 04             	mov    0x4(%ecx),%eax
 875bc07:	f7 66 04             	mull   0x4(%esi)
 875bc0a:	01 c5                	add    %eax,%ebp
 875bc0c:	11 d7                	adc    %edx,%edi
 875bc0e:	10 fb                	adc    %bh,%bl
 875bc10:	8b 41 08             	mov    0x8(%ecx),%eax
 875bc13:	f7 26                	mull   (%esi)
 875bc15:	01 c5                	add    %eax,%ebp
 875bc17:	11 d7                	adc    %edx,%edi
 875bc19:	10 fb                	adc    %bh,%bl
 875bc1b:	89 fa                	mov    %edi,%edx
 875bc1d:	8b 3c 24             	mov    (%esp),%edi
 875bc20:	89 6f 08             	mov    %ebp,0x8(%edi)
 875bc23:	89 d5                	mov    %edx,%ebp
 875bc25:	89 df                	mov    %ebx,%edi
 875bc27:	31 db                	xor    %ebx,%ebx
 875bc29:	8b 01                	mov    (%ecx),%eax
 875bc2b:	f7 66 0c             	mull   0xc(%esi)
 875bc2e:	01 c5                	add    %eax,%ebp
 875bc30:	11 d7                	adc    %edx,%edi
 875bc32:	10 fb                	adc    %bh,%bl
 875bc34:	8b 41 04             	mov    0x4(%ecx),%eax
 875bc37:	f7 66 08             	mull   0x8(%esi)
 875bc3a:	01 c5                	add    %eax,%ebp
 875bc3c:	11 d7                	adc    %edx,%edi
 875bc3e:	10 fb                	adc    %bh,%bl
 875bc40:	8b 41 08             	mov    0x8(%ecx),%eax
 875bc43:	f7 66 04             	mull   0x4(%esi)
 875bc46:	01 c5                	add    %eax,%ebp
 875bc48:	11 d7                	adc    %edx,%edi
 875bc4a:	10 fb                	adc    %bh,%bl
 875bc4c:	8b 41 0c             	mov    0xc(%ecx),%eax
 875bc4f:	f7 26                	mull   (%esi)
 875bc51:	01 c5                	add    %eax,%ebp
 875bc53:	11 d7                	adc    %edx,%edi
 875bc55:	10 fb                	adc    %bh,%bl
 875bc57:	89 fa                	mov    %edi,%edx
 875bc59:	8b 3c 24             	mov    (%esp),%edi
 875bc5c:	89 6f 0c             	mov    %ebp,0xc(%edi)
 875bc5f:	89 d5                	mov    %edx,%ebp
 875bc61:	89 df                	mov    %ebx,%edi
 875bc63:	31 db                	xor    %ebx,%ebx
 875bc65:	8b 01                	mov    (%ecx),%eax
 875bc67:	f7 66 10             	mull   0x10(%esi)
 875bc6a:	01 c5                	add    %eax,%ebp
 875bc6c:	11 d7                	adc    %edx,%edi
 875bc6e:	10 fb                	adc    %bh,%bl
 875bc70:	8b 41 04             	mov    0x4(%ecx),%eax
 875bc73:	f7 66 0c             	mull   0xc(%esi)
 875bc76:	01 c5                	add    %eax,%ebp
 875bc78:	11 d7                	adc    %edx,%edi
 875bc7a:	10 fb                	adc    %bh,%bl
 875bc7c:	8b 41 08             	mov    0x8(%ecx),%eax
 875bc7f:	f7 66 08             	mull   0x8(%esi)
 875bc82:	01 c5                	add    %eax,%ebp
 875bc84:	11 d7                	adc    %edx,%edi
 875bc86:	10 fb                	adc    %bh,%bl
 875bc88:	8b 41 0c             	mov    0xc(%ecx),%eax
 875bc8b:	f7 66 04             	mull   0x4(%esi)
 875bc8e:	01 c5                	add    %eax,%ebp
 875bc90:	11 d7                	adc    %edx,%edi
 875bc92:	10 fb                	adc    %bh,%bl
 875bc94:	8b 41 10             	mov    0x10(%ecx),%eax
 875bc97:	f7 26                	mull   (%esi)
 875bc99:	01 c5                	add    %eax,%ebp
 875bc9b:	11 d7                	adc    %edx,%edi
 875bc9d:	10 fb                	adc    %bh,%bl
 875bc9f:	89 fa                	mov    %edi,%edx
 875bca1:	8b 3c 24             	mov    (%esp),%edi
 875bca4:	89 6f 10             	mov    %ebp,0x10(%edi)
 875bca7:	89 d5                	mov    %edx,%ebp
 875bca9:	89 df                	mov    %ebx,%edi
 875bcab:	31 db                	xor    %ebx,%ebx
 875bcad:	8b 01                	mov    (%ecx),%eax
 875bcaf:	f7 66 14             	mull   0x14(%esi)
 875bcb2:	01 c5                	add    %eax,%ebp
 875bcb4:	11 d7                	adc    %edx,%edi
 875bcb6:	10 fb                	adc    %bh,%bl
 875bcb8:	8b 41 04             	mov    0x4(%ecx),%eax
 875bcbb:	f7 66 10             	mull   0x10(%esi)
 875bcbe:	01 c5                	add    %eax,%ebp
 875bcc0:	11 d7                	adc    %edx,%edi
 875bcc2:	10 fb                	adc    %bh,%bl
 875bcc4:	8b 41 08             	mov    0x8(%ecx),%eax
 875bcc7:	f7 66 0c             	mull   0xc(%esi)
 875bcca:	01 c5                	add    %eax,%ebp
 875bccc:	11 d7                	adc    %edx,%edi
 875bcce:	10 fb                	adc    %bh,%bl
 875bcd0:	8b 41 0c             	mov    0xc(%ecx),%eax
 875bcd3:	f7 66 08             	mull   0x8(%esi)
 875bcd6:	01 c5                	add    %eax,%ebp
 875bcd8:	11 d7                	adc    %edx,%edi
 875bcda:	10 fb                	adc    %bh,%bl
 875bcdc:	8b 41 10             	mov    0x10(%ecx),%eax
 875bcdf:	f7 66 04             	mull   0x4(%esi)
 875bce2:	01 c5                	add    %eax,%ebp
 875bce4:	11 d7                	adc    %edx,%edi
 875bce6:	10 fb                	adc    %bh,%bl
 875bce8:	8b 41 14             	mov    0x14(%ecx),%eax
 875bceb:	f7 26                	mull   (%esi)
 875bced:	01 c5                	add    %eax,%ebp
 875bcef:	11 d7                	adc    %edx,%edi
 875bcf1:	10 fb                	adc    %bh,%bl
 875bcf3:	89 fa                	mov    %edi,%edx
 875bcf5:	8b 3c 24             	mov    (%esp),%edi
 875bcf8:	89 6f 14             	mov    %ebp,0x14(%edi)
 875bcfb:	89 d5                	mov    %edx,%ebp
 875bcfd:	89 df                	mov    %ebx,%edi
 875bcff:	31 db                	xor    %ebx,%ebx
 875bd01:	8b 01                	mov    (%ecx),%eax
 875bd03:	f7 66 18             	mull   0x18(%esi)
 875bd06:	01 c5                	add    %eax,%ebp
 875bd08:	11 d7                	adc    %edx,%edi
 875bd0a:	10 fb                	adc    %bh,%bl
 875bd0c:	8b 41 04             	mov    0x4(%ecx),%eax
 875bd0f:	f7 66 14             	mull   0x14(%esi)
 875bd12:	01 c5                	add    %eax,%ebp
 875bd14:	11 d7                	adc    %edx,%edi
 875bd16:	10 fb                	adc    %bh,%bl
 875bd18:	8b 41 08             	mov    0x8(%ecx),%eax
 875bd1b:	f7 66 10             	mull   0x10(%esi)
 875bd1e:	01 c5                	add    %eax,%ebp
 875bd20:	11 d7                	adc    %edx,%edi
 875bd22:	10 fb                	adc    %bh,%bl
 875bd24:	8b 41 0c             	mov    0xc(%ecx),%eax
 875bd27:	f7 66 0c             	mull   0xc(%esi)
 875bd2a:	01 c5                	add    %eax,%ebp
 875bd2c:	11 d7                	adc    %edx,%edi
 875bd2e:	10 fb                	adc    %bh,%bl
 875bd30:	8b 41 10             	mov    0x10(%ecx),%eax
 875bd33:	f7 66 08             	mull   0x8(%esi)
 875bd36:	01 c5                	add    %eax,%ebp
 875bd38:	11 d7                	adc    %edx,%edi
 875bd3a:	10 fb                	adc    %bh,%bl
 875bd3c:	8b 41 14             	mov    0x14(%ecx),%eax
 875bd3f:	f7 66 04             	mull   0x4(%esi)
 875bd42:	01 c5                	add    %eax,%ebp
 875bd44:	11 d7                	adc    %edx,%edi
 875bd46:	10 fb                	adc    %bh,%bl
 875bd48:	8b 41 18             	mov    0x18(%ecx),%eax
 875bd4b:	f7 26                	mull   (%esi)
 875bd4d:	01 c5                	add    %eax,%ebp
 875bd4f:	11 d7                	adc    %edx,%edi
 875bd51:	10 fb                	adc    %bh,%bl
 875bd53:	89 fa                	mov    %edi,%edx
 875bd55:	8b 3c 24             	mov    (%esp),%edi
 875bd58:	89 6f 18             	mov    %ebp,0x18(%edi)
 875bd5b:	89 d5                	mov    %edx,%ebp
 875bd5d:	89 df                	mov    %ebx,%edi
 875bd5f:	31 db                	xor    %ebx,%ebx
 875bd61:	8b 01                	mov    (%ecx),%eax
 875bd63:	0f af 46 1c          	imul   0x1c(%esi),%eax
 875bd67:	01 c5                	add    %eax,%ebp
 875bd69:	8b 41 04             	mov    0x4(%ecx),%eax
 875bd6c:	0f af 46 18          	imul   0x18(%esi),%eax
 875bd70:	01 c5                	add    %eax,%ebp
 875bd72:	8b 41 08             	mov    0x8(%ecx),%eax
 875bd75:	0f af 46 14          	imul   0x14(%esi),%eax
 875bd79:	01 c5                	add    %eax,%ebp
 875bd7b:	8b 41 0c             	mov    0xc(%ecx),%eax
 875bd7e:	0f af 46 10          	imul   0x10(%esi),%eax
 875bd82:	01 c5                	add    %eax,%ebp
 875bd84:	8b 41 10             	mov    0x10(%ecx),%eax
 875bd87:	0f af 46 0c          	imul   0xc(%esi),%eax
 875bd8b:	01 c5                	add    %eax,%ebp
 875bd8d:	8b 41 14             	mov    0x14(%ecx),%eax
 875bd90:	0f af 46 08          	imul   0x8(%esi),%eax
 875bd94:	01 c5                	add    %eax,%ebp
 875bd96:	8b 41 18             	mov    0x18(%ecx),%eax
 875bd99:	0f af 46 04          	imul   0x4(%esi),%eax
 875bd9d:	01 c5                	add    %eax,%ebp
 875bd9f:	8b 41 1c             	mov    0x1c(%ecx),%eax
 875bda2:	0f af 06             	imul   (%esi),%eax
 875bda5:	01 c5                	add    %eax,%ebp
 875bda7:	89 fa                	mov    %edi,%edx
 875bda9:	8b 3c 24             	mov    (%esp),%edi
 875bdac:	89 6f 1c             	mov    %ebp,0x1c(%edi)
 875bdaf:	83 c4 04             	add    $0x4,%esp
 875bdb2:	5d                   	pop    %ebp
 875bdb3:	5b                   	pop    %ebx
 875bdb4:	8b 34 24             	mov    (%esp),%esi
 875bdb7:	8b 7c 24 04          	mov    0x4(%esp),%edi
 875bdbb:	89 ec                	mov    %ebp,%esp
 875bdbd:	5d                   	pop    %ebp
 875bdbe:	c3                   	ret
 875bdbf:	90                   	nop

```

```c
// TaoCrypt::PentiumOptimized::Multiply8Bottom @ 0x875bba0

/* TaoCrypt::PentiumOptimized::Multiply8Bottom(unsigned int*, unsigned int const*, unsigned int
   const*) */

void TaoCrypt::PentiumOptimized::Multiply8Bottom(uint *param_1,uint *param_2,uint *param_3)

{
  longlong lVar1;
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
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
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
  
  uVar6 = (uint)((ulonglong)*param_3 * (ulonglong)*param_2 >> 0x20);
  *param_1 = (uint)((ulonglong)*param_3 * (ulonglong)*param_2);
  lVar1 = (ulonglong)*param_3 * (ulonglong)param_2[1];
  lVar2 = lVar1 + (ulonglong)uVar6;
  uVar11 = (uint)lVar2;
  uVar13 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar7 = (uint)((ulonglong)param_3[1] * (ulonglong)*param_2 >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[1] * (ulonglong)*param_2);
  uVar4 = (uint)CARRY4(uVar11,uVar3);
  uVar5 = uVar13 + uVar7;
  uVar14 = uVar5 + uVar4;
  uVar10 = (uint)(byte)(CARRY4((uint)((ulonglong)lVar1 >> 0x20),(uint)CARRY4(uVar6,(uint)lVar1)) +
                       (CARRY4(uVar13,uVar7) || CARRY4(uVar5,uVar4)));
  param_1[1] = uVar11 + uVar3;
  uVar8 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[2] >> 0x20);
  uVar4 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[2]);
  uVar3 = uVar14 + uVar4;
  uVar4 = (uint)CARRY4(uVar14,uVar4);
  uVar6 = uVar10 + uVar8;
  uVar15 = uVar6 + uVar4;
  uVar14 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[1] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[1]);
  uVar12 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar7 = uVar15 + uVar14;
  uVar16 = uVar7 + uVar5;
  uVar9 = (uint)((ulonglong)param_3[2] * (ulonglong)*param_2 >> 0x20);
  uVar13 = (uint)((ulonglong)param_3[2] * (ulonglong)*param_2);
  uVar3 = (uint)CARRY4(uVar12,uVar13);
  uVar11 = uVar16 + uVar9;
  uVar17 = uVar11 + uVar3;
  uVar16 = (uint)(byte)((CARRY4(uVar10,uVar8) || CARRY4(uVar6,uVar4)) +
                        (CARRY4(uVar15,uVar14) || CARRY4(uVar7,uVar5)) +
                       (CARRY4(uVar16,uVar9) || CARRY4(uVar11,uVar3)));
  param_1[2] = uVar12 + uVar13;
  uVar9 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[3] >> 0x20);
  uVar4 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[3]);
  uVar3 = uVar17 + uVar4;
  uVar4 = (uint)CARRY4(uVar17,uVar4);
  uVar7 = uVar16 + uVar9;
  uVar18 = uVar7 + uVar4;
  uVar10 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[2] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[2]);
  uVar6 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar11 = uVar18 + uVar10;
  uVar19 = uVar11 + uVar5;
  uVar12 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[1] >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[1]);
  uVar17 = uVar6 + uVar3;
  uVar3 = (uint)CARRY4(uVar6,uVar3);
  uVar13 = uVar19 + uVar12;
  uVar20 = uVar13 + uVar3;
  uVar15 = (uint)((ulonglong)param_3[3] * (ulonglong)*param_2 >> 0x20);
  uVar14 = (uint)((ulonglong)param_3[3] * (ulonglong)*param_2);
  uVar6 = (uint)CARRY4(uVar17,uVar14);
  uVar8 = uVar20 + uVar15;
  uVar21 = uVar8 + uVar6;
  uVar19 = (uint)(byte)((CARRY4(uVar16,uVar9) || CARRY4(uVar7,uVar4)) +
                        (CARRY4(uVar18,uVar10) || CARRY4(uVar11,uVar5)) +
                        (CARRY4(uVar19,uVar12) || CARRY4(uVar13,uVar3)) +
                       (CARRY4(uVar20,uVar15) || CARRY4(uVar8,uVar6)));
  param_1[3] = uVar17 + uVar14;
  uVar12 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[4] >> 0x20);
  uVar4 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[4]);
  uVar3 = uVar21 + uVar4;
  uVar4 = (uint)CARRY4(uVar21,uVar4);
  uVar11 = uVar19 + uVar12;
  uVar21 = uVar11 + uVar4;
  uVar15 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[3] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[3]);
  uVar6 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar13 = uVar21 + uVar15;
  uVar22 = uVar13 + uVar5;
  uVar16 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[2] >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[2]);
  uVar7 = uVar6 + uVar3;
  uVar3 = (uint)CARRY4(uVar6,uVar3);
  uVar8 = uVar22 + uVar16;
  uVar23 = uVar8 + uVar3;
  uVar17 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[1] >> 0x20);
  uVar6 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[1]);
  uVar20 = uVar7 + uVar6;
  uVar6 = (uint)CARRY4(uVar7,uVar6);
  uVar14 = uVar23 + uVar17;
  uVar24 = uVar14 + uVar6;
  uVar18 = (uint)((ulonglong)param_3[4] * (ulonglong)*param_2 >> 0x20);
  uVar10 = (uint)((ulonglong)param_3[4] * (ulonglong)*param_2);
  uVar7 = (uint)CARRY4(uVar20,uVar10);
  uVar9 = uVar24 + uVar18;
  uVar25 = uVar9 + uVar7;
  uVar22 = (uint)(byte)((CARRY4(uVar19,uVar12) || CARRY4(uVar11,uVar4)) +
                        (CARRY4(uVar21,uVar15) || CARRY4(uVar13,uVar5)) +
                        (CARRY4(uVar22,uVar16) || CARRY4(uVar8,uVar3)) +
                        (CARRY4(uVar23,uVar17) || CARRY4(uVar14,uVar6)) +
                       (CARRY4(uVar24,uVar18) || CARRY4(uVar9,uVar7)));
  param_1[4] = uVar20 + uVar10;
  uVar16 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[5] >> 0x20);
  uVar4 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[5]);
  uVar3 = uVar25 + uVar4;
  uVar4 = (uint)CARRY4(uVar25,uVar4);
  uVar13 = uVar22 + uVar16;
  uVar24 = uVar13 + uVar4;
  uVar17 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[4] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[4]);
  uVar6 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar8 = uVar24 + uVar17;
  uVar25 = uVar8 + uVar5;
  uVar18 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[3] >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[3]);
  uVar7 = uVar6 + uVar3;
  uVar3 = (uint)CARRY4(uVar6,uVar3);
  uVar14 = uVar25 + uVar18;
  uVar26 = uVar14 + uVar3;
  uVar19 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[2] >> 0x20);
  uVar6 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[2]);
  uVar11 = uVar7 + uVar6;
  uVar6 = (uint)CARRY4(uVar7,uVar6);
  uVar9 = uVar26 + uVar19;
  uVar27 = uVar9 + uVar6;
  uVar20 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[1] >> 0x20);
  uVar7 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[1]);
  uVar23 = uVar11 + uVar7;
  uVar7 = (uint)CARRY4(uVar11,uVar7);
  uVar10 = uVar27 + uVar20;
  uVar28 = uVar10 + uVar7;
  uVar21 = (uint)((ulonglong)param_3[5] * (ulonglong)*param_2 >> 0x20);
  uVar15 = (uint)((ulonglong)param_3[5] * (ulonglong)*param_2);
  uVar11 = (uint)CARRY4(uVar23,uVar15);
  uVar12 = uVar28 + uVar21;
  param_1[5] = uVar23 + uVar15;
  lVar1 = (ulonglong)*param_3 * (ulonglong)param_2[6] +
          (ulonglong)
          CONCAT14((CARRY4(uVar22,uVar16) || CARRY4(uVar13,uVar4)) +
                   (CARRY4(uVar24,uVar17) || CARRY4(uVar8,uVar5)) +
                   (CARRY4(uVar25,uVar18) || CARRY4(uVar14,uVar3)) +
                   (CARRY4(uVar26,uVar19) || CARRY4(uVar9,uVar6)) +
                   (CARRY4(uVar27,uVar20) || CARRY4(uVar10,uVar7)) +
                   (CARRY4(uVar28,uVar21) || CARRY4(uVar12,uVar11)),uVar12 + uVar11) +
          (ulonglong)param_3[1] * (ulonglong)param_2[5] +
          (ulonglong)param_3[2] * (ulonglong)param_2[4] +
          (ulonglong)param_3[3] * (ulonglong)param_2[3] +
          (ulonglong)param_3[4] * (ulonglong)param_2[2] +
          (ulonglong)param_3[5] * (ulonglong)param_2[1] +
          (ulonglong)param_3[6] * (ulonglong)*param_2;
  param_1[6] = (uint)lVar1;
  param_1[7] = (int)((ulonglong)lVar1 >> 0x20) + *param_3 * param_2[7] + param_3[1] * param_2[6] +
               param_3[2] * param_2[5] + param_3[3] * param_2[4] + param_3[4] * param_2[3] +
               param_3[5] * param_2[2] + param_3[6] * param_2[1] + param_3[7] * *param_2;
  return;
}

```

---

## Subtract

```asm
// === 0875b510 TaoCrypt::PentiumOptimized::Subtract  [0x0875b510-0x875b537] ===
 875b510:	55                   	push   %ebp
 875b511:	89 e5                	mov    %esp,%ebp
 875b513:	83 ec 08             	sub    $0x8,%esp
 875b516:	89 34 24             	mov    %esi,(%esp)
 875b519:	8b 55 0c             	mov    0xc(%ebp),%edx
 875b51c:	89 7c 24 04          	mov    %edi,0x4(%esp)
 875b520:	8b 75 14             	mov    0x14(%ebp),%esi
 875b523:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875b526:	53                   	push   %ebx
 875b527:	8b 5d 10             	mov    0x10(%ebp),%ebx
 875b52a:	55                   	push   %ebp
 875b52b:	29 d1                	sub    %edx,%ecx
 875b52d:	31 c0                	xor    %eax,%eax
 875b52f:	29 f0                	sub    %esi,%eax
 875b531:	8d 1c b3             	lea    (%ebx,%esi,4),%ebx
 875b534:	d1 f8                	sar    $1,%eax
 875b536:	74 1e                	je     875b556 <loopendSub>

```

```c
// TaoCrypt::PentiumOptimized::Subtract @ 0x875b510

/* TaoCrypt::PentiumOptimized::Subtract(unsigned int*, unsigned int const*, unsigned int const*,
   unsigned int) */

bool TaoCrypt::PentiumOptimized::Subtract(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  bool bVar7;
  
  bVar7 = (-param_4 & 1) != 0;
  puVar5 = param_2;
  for (iVar6 = (int)-param_4 >> 1; iVar6 != 0; iVar6 = iVar6 + 1) {
    uVar1 = (uint)bVar7;
    uVar3 = *puVar5 - param_3[param_4 + iVar6 * 2];
    uVar2 = (uint)(*puVar5 < param_3[param_4 + iVar6 * 2] || uVar3 < uVar1);
    uVar4 = puVar5[1] - param_3[param_4 + iVar6 * 2 + 1];
    bVar7 = puVar5[1] < param_3[param_4 + iVar6 * 2 + 1] || uVar4 < uVar2;
    *(uint *)((int)puVar5 + ((int)param_1 - (int)param_2)) = uVar3 - uVar1;
    *(uint *)((int)puVar5 + ((int)param_1 - (int)param_2) + 4) = uVar4 - uVar2;
    puVar5 = puVar5 + 2;
  }
  return bVar7;
}

```

