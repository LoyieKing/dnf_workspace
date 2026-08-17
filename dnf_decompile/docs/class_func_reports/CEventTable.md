# CEventTable

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## CEventTable

```asm
// === 0811a0c8 CEventTable::CEventTable  [0x0811a0c8-0x811a0cd] ===
 811a0c8:	55                   	push   %ebp
 811a0c9:	89 e5                	mov    %esp,%ebp
 811a0cb:	5d                   	pop    %ebp
 811a0cc:	c3                   	ret
 811a0cd:	90                   	nop

```

```c
// CEventTable::CEventTable @ 0x811a0c8

/* CEventTable::CEventTable() */

void __thiscall CEventTable::CEventTable(CEventTable *this)

{
  return;
}

```

---

## GetEventBase

```asm
// === 0811a0de CEventTable::GetEventBase  [0x0811a0de-0x811a11d] ===
 811a0de:	55                   	push   %ebp
 811a0df:	89 e5                	mov    %esp,%ebp
 811a0e1:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 811a0e5:	78 0a                	js     811a0f1 <_ZN11CEventTable12GetEventBaseEi+0x13>
 811a0e7:	e8 e8 ff ff ff       	call   811a0d4 <_ZN11CEventTable18GetEventTableCountEv>
 811a0ec:	3b 45 08             	cmp    0x8(%ebp),%eax
 811a0ef:	7f 07                	jg     811a0f8 <_ZN11CEventTable12GetEventBaseEi+0x1a>
 811a0f1:	b8 01 00 00 00       	mov    $0x1,%eax
 811a0f6:	eb 05                	jmp    811a0fd <_ZN11CEventTable12GetEventBaseEi+0x1f>
 811a0f8:	b8 00 00 00 00       	mov    $0x0,%eax
 811a0fd:	84 c0                	test   %al,%al
 811a0ff:	74 07                	je     811a108 <_ZN11CEventTable12GetEventBaseEi+0x2a>
 811a101:	b8 00 00 00 00       	mov    $0x0,%eax
 811a106:	eb 13                	jmp    811a11b <_ZN11CEventTable12GetEventBaseEi+0x3d>
 811a108:	8b 55 08             	mov    0x8(%ebp),%edx
 811a10b:	89 d0                	mov    %edx,%eax
 811a10d:	c1 e0 02             	shl    $0x2,%eax
 811a110:	01 d0                	add    %edx,%eax
 811a112:	c1 e0 02             	shl    $0x2,%eax
 811a115:	8b 80 68 fa 36 09    	mov    0x936fa68(%eax),%eax
 811a11b:	5d                   	pop    %ebp
 811a11c:	c3                   	ret
 811a11d:	90                   	nop

```

```c
// CEventTable::GetEventBase @ 0x811a0de

/* CEventTable::GetEventBase(int) */

undefined4 CEventTable::GetEventBase(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (-1 < param_1) {
    iVar2 = GetEventTableCount();
    if (param_1 < iVar2) {
      bVar1 = false;
      goto LAB_0811a0fd;
    }
  }
  bVar1 = true;
LAB_0811a0fd:
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(events + param_1 * 0x14 + 8);
  }
  return uVar3;
}

```

---

## GetEventId

```asm
// === 0811a11e CEventTable::GetEventId  [0x0811a11e-0x811a15c] ===
 811a11e:	55                   	push   %ebp
 811a11f:	89 e5                	mov    %esp,%ebp
 811a121:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 811a125:	78 0a                	js     811a131 <_ZN11CEventTable10GetEventIdEi+0x13>
 811a127:	e8 a8 ff ff ff       	call   811a0d4 <_ZN11CEventTable18GetEventTableCountEv>
 811a12c:	3b 45 08             	cmp    0x8(%ebp),%eax
 811a12f:	7f 07                	jg     811a138 <_ZN11CEventTable10GetEventIdEi+0x1a>
 811a131:	b8 01 00 00 00       	mov    $0x1,%eax
 811a136:	eb 05                	jmp    811a13d <_ZN11CEventTable10GetEventIdEi+0x1f>
 811a138:	b8 00 00 00 00       	mov    $0x0,%eax
 811a13d:	84 c0                	test   %al,%al
 811a13f:	74 07                	je     811a148 <_ZN11CEventTable10GetEventIdEi+0x2a>
 811a141:	b8 00 00 00 00       	mov    $0x0,%eax
 811a146:	eb 13                	jmp    811a15b <_ZN11CEventTable10GetEventIdEi+0x3d>
 811a148:	8b 55 08             	mov    0x8(%ebp),%edx
 811a14b:	89 d0                	mov    %edx,%eax
 811a14d:	c1 e0 02             	shl    $0x2,%eax
 811a150:	01 d0                	add    %edx,%eax
 811a152:	c1 e0 02             	shl    $0x2,%eax
 811a155:	8b 80 60 fa 36 09    	mov    0x936fa60(%eax),%eax
 811a15b:	5d                   	pop    %ebp
 811a15c:	c3                   	ret

```

```c
// CEventTable::GetEventId @ 0x811a11e

/* CEventTable::GetEventId(int) */

undefined4 CEventTable::GetEventId(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (-1 < param_1) {
    iVar2 = GetEventTableCount();
    if (param_1 < iVar2) {
      bVar1 = false;
      goto LAB_0811a13d;
    }
  }
  bVar1 = true;
LAB_0811a13d:
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(events + param_1 * 0x14);
  }
  return uVar3;
}

```

---

## GetEventTableCount

```asm
// === 0811a0d4 CEventTable::GetEventTableCount  [0x0811a0d4-0x811a0dd] ===
 811a0d4:	55                   	push   %ebp
 811a0d5:	89 e5                	mov    %esp,%ebp
 811a0d7:	b8 4f 00 00 00       	mov    $0x4f,%eax
 811a0dc:	5d                   	pop    %ebp
 811a0dd:	c3                   	ret

```

```c
// CEventTable::GetEventTableCount @ 0x811a0d4

/* CEventTable::GetEventTableCount() */

undefined4 CEventTable::GetEventTableCount(void)

{
  return 0x4f;
}

```

---

## InsertEventTable

```asm
// === 0811a4d4 CEventTable::InsertEventTable  [0x0811a4d4-0x811a7a3] ===
 811a4d4:	55                   	push   %ebp
 811a4d5:	89 e5                	mov    %esp,%ebp
 811a4d7:	57                   	push   %edi
 811a4d8:	56                   	push   %esi
 811a4d9:	53                   	push   %ebx
 811a4da:	81 ec 5c 01 00 00    	sub    $0x15c,%esp
 811a4e0:	8b 45 08             	mov    0x8(%ebp),%eax
 811a4e3:	89 04 24             	mov    %eax,(%esp)
 811a4e6:	e8 75 24 00 00       	call   811c960 <_ZNKSt6vectorIiSaIiEE5emptyEv>
 811a4eb:	83 f0 01             	xor    $0x1,%eax
 811a4ee:	84 c0                	test   %al,%al
 811a4f0:	0f 84 9c 02 00 00    	je     811a792 <_ZN11CEventTable16InsertEventTableERSt6vectorIiSaIiEE+0x2be>
 811a4f6:	8d 95 d1 fe ff ff    	lea    -0x12f(%ebp),%edx
 811a4fc:	bb ff 00 00 00       	mov    $0xff,%ebx
 811a501:	b8 00 00 00 00       	mov    $0x0,%eax
 811a506:	89 d1                	mov    %edx,%ecx
 811a508:	83 e1 01             	and    $0x1,%ecx
 811a50b:	85 c9                	test   %ecx,%ecx
 811a50d:	74 08                	je     811a517 <_ZN11CEventTable16InsertEventTableERSt6vectorIiSaIiEE+0x43>
 811a50f:	88 02                	mov    %al,(%edx)
 811a511:	83 c2 01             	add    $0x1,%edx
 811a514:	83 eb 01             	sub    $0x1,%ebx
 811a517:	89 d1                	mov    %edx,%ecx
 811a519:	83 e1 02             	and    $0x2,%ecx
 811a51c:	85 c9                	test   %ecx,%ecx
 811a51e:	74 09                	je     811a529 <_ZN11CEventTable16InsertEventTableERSt6vectorIiSaIiEE+0x55>
 811a520:	66 89 02             	mov    %ax,(%edx)
 811a523:	83 c2 02             	add    $0x2,%edx
 811a526:	83 eb 02             	sub    $0x2,%ebx
 811a529:	89 d9                	mov    %ebx,%ecx
 811a52b:	c1 e9 02             	shr    $0x2,%ecx
 811a52e:	89 d7                	mov    %edx,%edi
 811a530:	f3 ab                	rep stos %eax,%es:(%edi)
 811a532:	89 fa                	mov    %edi,%edx
 811a534:	89 d9                	mov    %ebx,%ecx
 811a536:	83 e1 02             	and    $0x2,%ecx
 811a539:	85 c9                	test   %ecx,%ecx
 811a53b:	74 06                	je     811a543 <_ZN11CEventTable16InsertEventTableERSt6vectorIiSaIiEE+0x6f>
 811a53d:	66 89 02             	mov    %ax,(%edx)
 811a540:	83 c2 02             	add    $0x2,%edx
 811a543:	89 d9                	mov    %ebx,%ecx
 811a545:	83 e1 01             	and    $0x1,%ecx
 811a548:	85 c9                	test   %ecx,%ecx
 811a54a:	74 05                	je     811a551 <_ZN11CEventTable16InsertEventTableERSt6vectorIiSaIiEE+0x7d>
 811a54c:	88 02                	mov    %al,(%edx)
 811a54e:	83 c2 01             	add    $0x1,%edx
 811a551:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 811a554:	89 04 24             	mov    %eax,(%esp)
 811a557:	e8 74 c0 5e 00       	call   87065d0 <_ZNSsC1Ev>
 811a55c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 811a55f:	8b 55 08             	mov    0x8(%ebp),%edx
 811a562:	89 54 24 04          	mov    %edx,0x4(%esp)
 811a566:	89 04 24             	mov    %eax,(%esp)
 811a569:	e8 da 3c f7 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 811a56e:	83 ec 04             	sub    $0x4,%esp
 811a571:	e9 26 01 00 00       	jmp    811a69c <_ZN11CEventTable16InsertEventTableERSt6vectorIiSaIiEE+0x1c8>
 811a576:	8d 45 d0             	lea    -0x30(%ebp),%eax
 811a579:	89 04 24             	mov    %eax,(%esp)
 811a57c:	e8 4b 42 f7 ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 811a581:	8b 10                	mov    (%eax),%edx
 811a583:	89 d0                	mov    %edx,%eax
 811a585:	c1 e0 02             	shl    $0x2,%eax
 811a588:	01 d0                	add    %edx,%eax
 811a58a:	c1 e0 02             	shl    $0x2,%eax
 811a58d:	8b 80 70 fa 36 09    	mov    0x936fa70(%eax),%eax
 811a593:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 811a59a:	00 
 811a59b:	89 44 24 08          	mov    %eax,0x8(%esp)
 811a59f:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 811a5a6:	00 
 811a5a7:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 811a5ae:	e8 4b b2 98 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 811a5b3:	89 c3                	mov    %eax,%ebx
 811a5b5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 811a5b8:	89 04 24             	mov    %eax,(%esp)
 811a5bb:	e8 0c 42 f7 ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 811a5c0:	8b 10                	mov    (%eax),%edx
 811a5c2:	89 d0                	mov    %edx,%eax
 811a5c4:	c1 e0 02             	shl    $0x2,%eax
 811a5c7:	01 d0                	add    %edx,%eax
 811a5c9:	c1 e0 02             	shl    $0x2,%eax
 811a5cc:	8b 80 6c fa 36 09    	mov    0x936fa6c(%eax),%eax
 811a5d2:	89 85 c4 fe ff ff    	mov    %eax,-0x13c(%ebp)
 811a5d8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 811a5db:	89 04 24             	mov    %eax,(%esp)
 811a5de:	e8 e9 41 f7 ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 811a5e3:	8b 10                	mov    (%eax),%edx
 811a5e5:	89 d0                	mov    %edx,%eax
 811a5e7:	c1 e0 02             	shl    $0x2,%eax
 811a5ea:	01 d0                	add    %edx,%eax
 811a5ec:	c1 e0 02             	shl    $0x2,%eax
 811a5ef:	8b b8 64 fa 36 09    	mov    0x936fa64(%eax),%edi
 811a5f5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 811a5f8:	89 04 24             	mov    %eax,(%esp)
 811a5fb:	e8 cc 41 f7 ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 811a600:	8b 10                	mov    (%eax),%edx
 811a602:	89 d0                	mov    %edx,%eax
 811a604:	c1 e0 02             	shl    $0x2,%eax
 811a607:	01 d0                	add    %edx,%eax
 811a609:	c1 e0 02             	shl    $0x2,%eax
 811a60c:	8b 80 60 fa 36 09    	mov    0x936fa60(%eax),%eax
 811a612:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 811a616:	8b 95 c4 fe ff ff    	mov    -0x13c(%ebp),%edx
 811a61c:	89 54 24 10          	mov    %edx,0x10(%esp)
 811a620:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 811a624:	89 44 24 08          	mov    %eax,0x8(%esp)
 811a628:	c7 44 24 04 44 08 b5 	movl   $0x8b50844,0x4(%esp)
 811a62f:	08 
 811a630:	8d 85 d1 fe ff ff    	lea    -0x12f(%ebp),%eax
 811a636:	89 04 24             	mov    %eax,(%esp)
 811a639:	e8 02 3e f6 ff       	call   807e440 <sprintf@plt>
 811a63e:	8d 85 d1 fe ff ff    	lea    -0x12f(%ebp),%eax
 811a644:	89 44 24 04          	mov    %eax,0x4(%esp)
 811a648:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 811a64b:	89 04 24             	mov    %eax,(%esp)
 811a64e:	e8 dd d9 5e 00       	call   8708030 <_ZNSspLEPKc>
 811a653:	8d 45 d0             	lea    -0x30(%ebp),%eax
 811a656:	89 04 24             	mov    %eax,(%esp)
 811a659:	e8 2e 03 fd ff       	call   80ea98c <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv>
 811a65e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 811a661:	8b 55 08             	mov    0x8(%ebp),%edx
 811a664:	89 54 24 04          	mov    %edx,0x4(%esp)
 811a668:	89 04 24             	mov    %eax,(%esp)
 811a66b:	e8 fc 3b f7 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 811a670:	83 ec 04             	sub    $0x4,%esp
 811a673:	8d 45 dc             	lea    -0x24(%ebp),%eax
 811a676:	89 44 24 04          	mov    %eax,0x4(%esp)
 811a67a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 811a67d:	89 04 24             	mov    %eax,(%esp)
 811a680:	e8 dd fd fc ff       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 811a685:	84 c0                	test   %al,%al
 811a687:	74 13                	je     811a69c <_ZN11CEventTable16InsertEventTableERSt6vectorIiSaIiEE+0x1c8>
 811a689:	c7 44 24 04 56 08 b5 	movl   $0x8b50856,0x4(%esp)
 811a690:	08 
 811a691:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 811a694:	89 04 24             	mov    %eax,(%esp)
 811a697:	e8 94 d9 5e 00       	call   8708030 <_ZNSspLEPKc>
 811a69c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 811a69f:	8b 55 08             	mov    0x8(%ebp),%edx
 811a6a2:	89 54 24 04          	mov    %edx,0x4(%esp)
 811a6a6:	89 04 24             	mov    %eax,(%esp)
 811a6a9:	e8 be 3b f7 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 811a6ae:	83 ec 04             	sub    $0x4,%esp
 811a6b1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 811a6b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 811a6b8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 811a6bb:	89 04 24             	mov    %eax,(%esp)
 811a6be:	e8 9f fd fc ff       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 811a6c3:	84 c0                	test   %al,%al
 811a6c5:	0f 85 ab fe ff ff    	jne    811a576 <_ZN11CEventTable16InsertEventTableERSt6vectorIiSaIiEE+0xa2>
 811a6cb:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 811a6d0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 811a6d7:	00 
 811a6d8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 811a6df:	00 
 811a6e0:	89 04 24             	mov    %eax,(%esp)
 811a6e3:	e8 56 ab 2d 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 811a6e8:	89 45 e0             	mov    %eax,-0x20(%ebp)
 811a6eb:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 811a6ef:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 811a6f2:	89 04 24             	mov    %eax,(%esp)
 811a6f5:	e8 f6 bd 5e 00       	call   87064f0 <_ZNKSs5c_strEv>
 811a6fa:	89 44 24 08          	mov    %eax,0x8(%esp)
 811a6fe:	c7 44 24 04 58 08 b5 	movl   $0x8b50858,0x4(%esp)
 811a705:	08 
 811a706:	8b 45 e0             	mov    -0x20(%ebp),%eax
 811a709:	89 04 24             	mov    %eax,(%esp)
 811a70c:	e8 af 9a 2d 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 811a711:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 811a718:	00 
 811a719:	8b 45 e0             	mov    -0x20(%ebp),%eax
 811a71c:	89 04 24             	mov    %eax,(%esp)
 811a71f:	e8 02 9c 2d 00       	call   83f4326 <_ZN5MySQL4execEb>
 811a724:	88 45 e7             	mov    %al,-0x19(%ebp)
 811a727:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 811a72b:	83 f0 01             	xor    $0x1,%eax
 811a72e:	84 c0                	test   %al,%al
 811a730:	74 2f                	je     811a761 <_ZN11CEventTable16InsertEventTableERSt6vectorIiSaIiEE+0x28d>
 811a732:	8b 45 e0             	mov    -0x20(%ebp),%eax
 811a735:	89 04 24             	mov    %eax,(%esp)
 811a738:	e8 3d 12 00 00       	call   811b97a <_ZN5MySQL10getDBErrorEv>
 811a73d:	3d 26 04 00 00       	cmp    $0x426,%eax
 811a742:	0f 94 c0             	sete   %al
 811a745:	84 c0                	test   %al,%al
 811a747:	74 0c                	je     811a755 <_ZN11CEventTable16InsertEventTableERSt6vectorIiSaIiEE+0x281>
 811a749:	be 00 00 00 00       	mov    $0x0,%esi
 811a74e:	bb 00 00 00 00       	mov    $0x0,%ebx
 811a753:	eb 2e                	jmp    811a783 <_ZN11CEventTable16InsertEventTableERSt6vectorIiSaIiEE+0x2af>
 811a755:	be 00 00 00 00       	mov    $0x0,%esi
 811a75a:	bb 00 00 00 00       	mov    $0x0,%ebx
 811a75f:	eb 22                	jmp    811a783 <_ZN11CEventTable16InsertEventTableERSt6vectorIiSaIiEE+0x2af>
 811a761:	bb 01 00 00 00       	mov    $0x1,%ebx
 811a766:	eb 1b                	jmp    811a783 <_ZN11CEventTable16InsertEventTableERSt6vectorIiSaIiEE+0x2af>
 811a768:	89 d3                	mov    %edx,%ebx
 811a76a:	89 c6                	mov    %eax,%esi
 811a76c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 811a76f:	89 04 24             	mov    %eax,(%esp)
 811a772:	e8 69 d4 5e 00       	call   8707be0 <_ZNSsD1Ev>
 811a777:	89 f0                	mov    %esi,%eax
 811a779:	89 da                	mov    %ebx,%edx
 811a77b:	89 04 24             	mov    %eax,(%esp)
 811a77e:	e8 cd 8f 9c 00       	call   8ae3750 <_Unwind_Resume>
 811a783:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 811a786:	89 04 24             	mov    %eax,(%esp)
 811a789:	e8 52 d4 5e 00       	call   8707be0 <_ZNSsD1Ev>
 811a78e:	85 db                	test   %ebx,%ebx
 811a790:	74 05                	je     811a797 <_ZN11CEventTable16InsertEventTableERSt6vectorIiSaIiEE+0x2c3>
 811a792:	be 01 00 00 00       	mov    $0x1,%esi
 811a797:	89 f0                	mov    %esi,%eax
 811a799:	8d 65 f4             	lea    -0xc(%ebp),%esp
 811a79c:	83 c4 00             	add    $0x0,%esp
 811a79f:	5b                   	pop    %ebx
 811a7a0:	5e                   	pop    %esi
 811a7a1:	5f                   	pop    %edi
 811a7a2:	5d                   	pop    %ebp
 811a7a3:	c3                   	ret

```

```c
// CEventTable::InsertEventTable @ 0x811a4d4

/* CEventTable::InsertEventTable(std::vector<int, std::allocator<int> >&) */

undefined4 CEventTable::InsertEventTable(vector *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  bool bVar10;
  byte bVar11;
  char local_133;
  char local_132 [254];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_34 [4];
  string local_30 [4];
  __normal_iterator local_2c [4];
  __normal_iterator local_28 [4];
  MySQL *local_24;
  char local_1d;
  
  bVar11 = 0;
  cVar2 = std::vector<int,std::allocator<int>>::empty();
  if (cVar2 != '\x01') {
    pcVar8 = &local_133;
    uVar9 = 0xff;
    bVar10 = ((uint)pcVar8 & 1) != 0;
    if (bVar10) {
      local_133 = '\0';
      pcVar8 = local_132;
      uVar9 = 0xfe;
    }
    if (((uint)pcVar8 & 2) != 0) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8 = pcVar8 + 2;
      uVar9 = uVar9 - 2;
    }
    for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
    }
    if ((uVar9 & 2) != 0) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8 = pcVar8 + 2;
    }
    if (!bVar10) {
      *pcVar8 = '\0';
    }
    std::string::string(local_30);
                    /* try { // try from 0811a569 to 0811a723 has its CatchHandler @ 0811a768 */
    std::vector<int,std::allocator<int>>::begin();
    while( true ) {
      std::vector<int,std::allocator<int>>::end();
      bVar10 = __gnu_cxx::operator!=(local_34,local_2c);
      if (!bVar10) break;
      piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                      operator*(local_34);
      uVar4 = RDARScriptStringManager::findString
                        ((RDARScriptStringManager *)g_scriptStringManager_,4,
                         *(char **)(events + *piVar3 * 0x14 + 0x10),(bool *)0x0);
      piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                      operator*(local_34);
      uVar5 = *(undefined4 *)(events + *piVar3 * 0x14 + 0xc);
      piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                      operator*(local_34);
      uVar1 = *(undefined4 *)(events + *piVar3 * 0x14 + 4);
      piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                      operator*(local_34);
      sprintf(&local_133,"(%d,%d,\'%s\',\'%s\')",*(undefined4 *)(events + *piVar3 * 0x14),uVar1,
              uVar5,uVar4);
      std::string::operator+=(local_30,&local_133);
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++(local_34);
      std::vector<int,std::allocator<int>>::end();
      bVar10 = __gnu_cxx::operator!=(local_34,local_28);
      if (bVar10) {
        std::string::operator+=(local_30,",");
      }
    }
    local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    local_1d = 0;
    uVar5 = std::string::c_str(local_30);
    MySQL::set_query(local_24,
                     "inSert into dnf_event_info(event_id, apply_type, event_name, event_explain) values%s"
                     ,uVar5);
    local_1d = MySQL::exec(local_24,true);
    if (local_1d == '\x01') {
      bVar10 = true;
    }
    else {
      iVar6 = MySQL::getDBError(local_24);
      if (iVar6 == 0x426) {
        unaff_ESI = 0;
        bVar10 = false;
      }
      else {
        unaff_ESI = 0;
        bVar10 = false;
      }
    }
    std::string::~string(local_30);
    if (!bVar10) {
      return unaff_ESI;
    }
  }
  return 1;
}

```

---

## VerifyEventTable

```asm
// === 0811a1e0 CEventTable::VerifyEventTable  [0x0811a1e0-0x811a4d3] ===
 811a1e0:	55                   	push   %ebp
 811a1e1:	89 e5                	mov    %esp,%ebp
 811a1e3:	57                   	push   %edi
 811a1e4:	56                   	push   %esi
 811a1e5:	53                   	push   %ebx
 811a1e6:	81 ec 7c 01 00 00    	sub    $0x17c,%esp
 811a1ec:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 811a1f1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 811a1f8:	00 
 811a1f9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 811a200:	00 
 811a201:	89 04 24             	mov    %eax,(%esp)
 811a204:	e8 35 b0 2d 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 811a209:	89 45 dc             	mov    %eax,-0x24(%ebp)
 811a20c:	c6 45 e3 00          	movb   $0x0,-0x1d(%ebp)
 811a210:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 811a217:	8d 95 91 fe ff ff    	lea    -0x16f(%ebp),%edx
 811a21d:	bb ff 00 00 00       	mov    $0xff,%ebx
 811a222:	b8 00 00 00 00       	mov    $0x0,%eax
 811a227:	89 d1                	mov    %edx,%ecx
 811a229:	83 e1 01             	and    $0x1,%ecx
 811a22c:	85 c9                	test   %ecx,%ecx
 811a22e:	74 08                	je     811a238 <_ZN11CEventTable16VerifyEventTableERSt6vectorIiSaIiEE+0x58>
 811a230:	88 02                	mov    %al,(%edx)
 811a232:	83 c2 01             	add    $0x1,%edx
 811a235:	83 eb 01             	sub    $0x1,%ebx
 811a238:	89 d1                	mov    %edx,%ecx
 811a23a:	83 e1 02             	and    $0x2,%ecx
 811a23d:	85 c9                	test   %ecx,%ecx
 811a23f:	74 09                	je     811a24a <_ZN11CEventTable16VerifyEventTableERSt6vectorIiSaIiEE+0x6a>
 811a241:	66 89 02             	mov    %ax,(%edx)
 811a244:	83 c2 02             	add    $0x2,%edx
 811a247:	83 eb 02             	sub    $0x2,%ebx
 811a24a:	89 d9                	mov    %ebx,%ecx
 811a24c:	c1 e9 02             	shr    $0x2,%ecx
 811a24f:	89 d7                	mov    %edx,%edi
 811a251:	f3 ab                	rep stos %eax,%es:(%edi)
 811a253:	89 fa                	mov    %edi,%edx
 811a255:	89 d9                	mov    %ebx,%ecx
 811a257:	83 e1 02             	and    $0x2,%ecx
 811a25a:	85 c9                	test   %ecx,%ecx
 811a25c:	74 06                	je     811a264 <_ZN11CEventTable16VerifyEventTableERSt6vectorIiSaIiEE+0x84>
 811a25e:	66 89 02             	mov    %ax,(%edx)
 811a261:	83 c2 02             	add    $0x2,%edx
 811a264:	89 d9                	mov    %ebx,%ecx
 811a266:	83 e1 01             	and    $0x1,%ecx
 811a269:	85 c9                	test   %ecx,%ecx
 811a26b:	74 05                	je     811a272 <_ZN11CEventTable16VerifyEventTableERSt6vectorIiSaIiEE+0x92>
 811a26d:	88 02                	mov    %al,(%edx)
 811a26f:	83 c2 01             	add    $0x1,%edx
 811a272:	c6 45 b7 00          	movb   $0x0,-0x49(%ebp)
 811a276:	c7 45 b0 ff ff ff ff 	movl   $0xffffffff,-0x50(%ebp)
 811a27d:	8d 45 98             	lea    -0x68(%ebp),%eax
 811a280:	89 04 24             	mov    %eax,(%esp)
 811a283:	e8 dc c9 fa ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 811a288:	c7 44 24 04 14 08 b5 	movl   $0x8b50814,0x4(%esp)
 811a28f:	08 
 811a290:	8b 45 dc             	mov    -0x24(%ebp),%eax
 811a293:	89 04 24             	mov    %eax,(%esp)
 811a296:	e8 25 9f 2d 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 811a29b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 811a2a2:	00 
 811a2a3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 811a2a6:	89 04 24             	mov    %eax,(%esp)
 811a2a9:	e8 78 a0 2d 00       	call   83f4326 <_ZN5MySQL4execEb>
 811a2ae:	88 45 e3             	mov    %al,-0x1d(%ebp)
 811a2b1:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 811a2b5:	83 f0 01             	xor    $0x1,%eax
 811a2b8:	84 c0                	test   %al,%al
 811a2ba:	74 0a                	je     811a2c6 <_ZN11CEventTable16VerifyEventTableERSt6vectorIiSaIiEE+0xe6>
 811a2bc:	bb 00 00 00 00       	mov    $0x0,%ebx
 811a2c1:	e9 f6 01 00 00       	jmp    811a4bc <_ZN11CEventTable16VerifyEventTableERSt6vectorIiSaIiEE+0x2dc>
 811a2c6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 811a2c9:	89 04 24             	mov    %eax,(%esp)
 811a2cc:	e8 9b 80 fc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 811a2d1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 811a2d4:	c7 45 94 00 00 00 00 	movl   $0x0,-0x6c(%ebp)
 811a2db:	c7 45 94 00 00 00 00 	movl   $0x0,-0x6c(%ebp)
 811a2e2:	e9 23 01 00 00       	jmp    811a40a <_ZN11CEventTable16VerifyEventTableERSt6vectorIiSaIiEE+0x22a>
 811a2e7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 811a2ea:	89 04 24             	mov    %eax,(%esp)
 811a2ed:	e8 ca a1 2d 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 811a2f2:	88 45 e3             	mov    %al,-0x1d(%ebp)
 811a2f5:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 811a2f9:	83 f0 01             	xor    $0x1,%eax
 811a2fc:	84 c0                	test   %al,%al
 811a2fe:	0f 85 19 01 00 00    	jne    811a41d <_ZN11CEventTable16VerifyEventTableERSt6vectorIiSaIiEE+0x23d>
 811a304:	8d 45 b8             	lea    -0x48(%ebp),%eax
 811a307:	89 44 24 08          	mov    %eax,0x8(%esp)
 811a30b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 811a312:	00 
 811a313:	8b 45 dc             	mov    -0x24(%ebp),%eax
 811a316:	89 04 24             	mov    %eax,(%esp)
 811a319:	e8 0e c6 ff ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 811a31e:	88 45 e3             	mov    %al,-0x1d(%ebp)
 811a321:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 811a325:	83 f0 01             	xor    $0x1,%eax
 811a328:	84 c0                	test   %al,%al
 811a32a:	74 0a                	je     811a336 <_ZN11CEventTable16VerifyEventTableERSt6vectorIiSaIiEE+0x156>
 811a32c:	bb 00 00 00 00       	mov    $0x0,%ebx
 811a331:	e9 86 01 00 00       	jmp    811a4bc <_ZN11CEventTable16VerifyEventTableERSt6vectorIiSaIiEE+0x2dc>
 811a336:	c7 44 24 0c ff 00 00 	movl   $0xff,0xc(%esp)
 811a33d:	00 
 811a33e:	8d 85 91 fe ff ff    	lea    -0x16f(%ebp),%eax
 811a344:	89 44 24 08          	mov    %eax,0x8(%esp)
 811a348:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 811a34f:	00 
 811a350:	8b 45 dc             	mov    -0x24(%ebp),%eax
 811a353:	89 04 24             	mov    %eax,(%esp)
 811a356:	e8 8f 2a fd ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 811a35b:	88 45 e3             	mov    %al,-0x1d(%ebp)
 811a35e:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 811a362:	83 f0 01             	xor    $0x1,%eax
 811a365:	84 c0                	test   %al,%al
 811a367:	74 0a                	je     811a373 <_ZN11CEventTable16VerifyEventTableERSt6vectorIiSaIiEE+0x193>
 811a369:	bb 00 00 00 00       	mov    $0x0,%ebx
 811a36e:	e9 49 01 00 00       	jmp    811a4bc <_ZN11CEventTable16VerifyEventTableERSt6vectorIiSaIiEE+0x2dc>
 811a373:	8b 45 b8             	mov    -0x48(%ebp),%eax
 811a376:	8d 55 b7             	lea    -0x49(%ebp),%edx
 811a379:	89 54 24 08          	mov    %edx,0x8(%esp)
 811a37d:	8d 95 91 fe ff ff    	lea    -0x16f(%ebp),%edx
 811a383:	89 54 24 04          	mov    %edx,0x4(%esp)
 811a387:	89 04 24             	mov    %eax,(%esp)
 811a38a:	e8 ce fd ff ff       	call   811a15d <_Z15_FindEventTableiPKcRb>
 811a38f:	89 45 b0             	mov    %eax,-0x50(%ebp)
 811a392:	8b 45 b0             	mov    -0x50(%ebp),%eax
 811a395:	f7 d0                	not    %eax
 811a397:	c1 e8 1f             	shr    $0x1f,%eax
 811a39a:	84 c0                	test   %al,%al
 811a39c:	74 63                	je     811a401 <_ZN11CEventTable16VerifyEventTableERSt6vectorIiSaIiEE+0x221>
 811a39e:	0f b6 45 b7          	movzbl -0x49(%ebp),%eax
 811a3a2:	84 c0                	test   %al,%al
 811a3a4:	74 0a                	je     811a3b0 <_ZN11CEventTable16VerifyEventTableERSt6vectorIiSaIiEE+0x1d0>
 811a3a6:	bb 00 00 00 00       	mov    $0x0,%ebx
 811a3ab:	e9 0c 01 00 00       	jmp    811a4bc <_ZN11CEventTable16VerifyEventTableERSt6vectorIiSaIiEE+0x2dc>
 811a3b0:	c7 45 d4 01 00 00 00 	movl   $0x1,-0x2c(%ebp)
 811a3b7:	8d 45 cc             	lea    -0x34(%ebp),%eax
 811a3ba:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 811a3bd:	89 54 24 08          	mov    %edx,0x8(%esp)
 811a3c1:	8d 55 b0             	lea    -0x50(%ebp),%edx
 811a3c4:	89 54 24 04          	mov    %edx,0x4(%esp)
 811a3c8:	89 04 24             	mov    %eax,(%esp)
 811a3cb:	e8 c9 33 fc ff       	call   80dd799 <_ZSt9make_pairIRiiESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 811a3d0:	83 ec 04             	sub    $0x4,%esp
 811a3d3:	8d 45 cc             	lea    -0x34(%ebp),%eax
 811a3d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 811a3da:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 811a3dd:	89 04 24             	mov    %eax,(%esp)
 811a3e0:	e8 3b c9 fa ff       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 811a3e5:	8d 45 bc             	lea    -0x44(%ebp),%eax
 811a3e8:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 811a3eb:	89 54 24 08          	mov    %edx,0x8(%esp)
 811a3ef:	8d 55 98             	lea    -0x68(%ebp),%edx
 811a3f2:	89 54 24 04          	mov    %edx,0x4(%esp)
 811a3f6:	89 04 24             	mov    %eax,(%esp)
 811a3f9:	e8 52 c9 fa ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 811a3fe:	83 ec 04             	sub    $0x4,%esp
 811a401:	8b 45 94             	mov    -0x6c(%ebp),%eax
 811a404:	83 c0 01             	add    $0x1,%eax
 811a407:	89 45 94             	mov    %eax,-0x6c(%ebp)
 811a40a:	8b 45 94             	mov    -0x6c(%ebp),%eax
 811a40d:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 811a410:	0f 9c c0             	setl   %al
 811a413:	84 c0                	test   %al,%al
 811a415:	0f 85 cc fe ff ff    	jne    811a2e7 <_ZN11CEventTable16VerifyEventTableERSt6vectorIiSaIiEE+0x107>
 811a41b:	eb 01                	jmp    811a41e <_ZN11CEventTable16VerifyEventTableERSt6vectorIiSaIiEE+0x23e>
 811a41d:	90                   	nop
 811a41e:	c7 45 94 00 00 00 00 	movl   $0x0,-0x6c(%ebp)
 811a425:	eb 62                	jmp    811a489 <_ZN11CEventTable16VerifyEventTableERSt6vectorIiSaIiEE+0x2a9>
 811a427:	8d 45 90             	lea    -0x70(%ebp),%eax
 811a42a:	8d 55 94             	lea    -0x6c(%ebp),%edx
 811a42d:	89 54 24 08          	mov    %edx,0x8(%esp)
 811a431:	8d 55 98             	lea    -0x68(%ebp),%edx
 811a434:	89 54 24 04          	mov    %edx,0x4(%esp)
 811a438:	89 04 24             	mov    %eax,(%esp)
 811a43b:	e8 ae 2e fb ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 811a440:	83 ec 04             	sub    $0x4,%esp
 811a443:	8d 45 d8             	lea    -0x28(%ebp),%eax
 811a446:	8d 55 98             	lea    -0x68(%ebp),%edx
 811a449:	89 54 24 04          	mov    %edx,0x4(%esp)
 811a44d:	89 04 24             	mov    %eax,(%esp)
 811a450:	e8 c5 2e fb ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 811a455:	83 ec 04             	sub    $0x4,%esp
 811a458:	8d 45 d8             	lea    -0x28(%ebp),%eax
 811a45b:	89 44 24 04          	mov    %eax,0x4(%esp)
 811a45f:	8d 45 90             	lea    -0x70(%ebp),%eax
 811a462:	89 04 24             	mov    %eax,(%esp)
 811a465:	e8 86 d4 fa ff       	call   80c78f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEeqERKS3_>
 811a46a:	84 c0                	test   %al,%al
 811a46c:	74 12                	je     811a480 <_ZN11CEventTable16VerifyEventTableERSt6vectorIiSaIiEE+0x2a0>
 811a46e:	8d 45 94             	lea    -0x6c(%ebp),%eax
 811a471:	89 44 24 04          	mov    %eax,0x4(%esp)
 811a475:	8b 45 08             	mov    0x8(%ebp),%eax
 811a478:	89 04 24             	mov    %eax,(%esp)
 811a47b:	e8 a6 6c ff ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 811a480:	8b 45 94             	mov    -0x6c(%ebp),%eax
 811a483:	83 c0 01             	add    $0x1,%eax
 811a486:	89 45 94             	mov    %eax,-0x6c(%ebp)
 811a489:	e8 46 fc ff ff       	call   811a0d4 <_ZN11CEventTable18GetEventTableCountEv>
 811a48e:	8b 55 94             	mov    -0x6c(%ebp),%edx
 811a491:	39 d0                	cmp    %edx,%eax
 811a493:	0f 9f c0             	setg   %al
 811a496:	84 c0                	test   %al,%al
 811a498:	75 8d                	jne    811a427 <_ZN11CEventTable16VerifyEventTableERSt6vectorIiSaIiEE+0x247>
 811a49a:	bb 01 00 00 00       	mov    $0x1,%ebx
 811a49f:	eb 1b                	jmp    811a4bc <_ZN11CEventTable16VerifyEventTableERSt6vectorIiSaIiEE+0x2dc>
 811a4a1:	89 d3                	mov    %edx,%ebx
 811a4a3:	89 c6                	mov    %eax,%esi
 811a4a5:	8d 45 98             	lea    -0x68(%ebp),%eax
 811a4a8:	89 04 24             	mov    %eax,(%esp)
 811a4ab:	e8 16 c6 fa ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 811a4b0:	89 f0                	mov    %esi,%eax
 811a4b2:	89 da                	mov    %ebx,%edx
 811a4b4:	89 04 24             	mov    %eax,(%esp)
 811a4b7:	e8 94 92 9c 00       	call   8ae3750 <_Unwind_Resume>
 811a4bc:	8d 45 98             	lea    -0x68(%ebp),%eax
 811a4bf:	89 04 24             	mov    %eax,(%esp)
 811a4c2:	e8 ff c5 fa ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 811a4c7:	89 d8                	mov    %ebx,%eax
 811a4c9:	8d 65 f4             	lea    -0xc(%ebp),%esp
 811a4cc:	83 c4 00             	add    $0x0,%esp
 811a4cf:	5b                   	pop    %ebx
 811a4d0:	5e                   	pop    %esi
 811a4d1:	5f                   	pop    %edi
 811a4d2:	5d                   	pop    %ebp
 811a4d3:	c3                   	ret

```

```c
// CEventTable::VerifyEventTable @ 0x811a1e0

/* CEventTable::VerifyEventTable(std::vector<int, std::allocator<int> >&) */

undefined4 CEventTable::VerifyEventTable(vector *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  byte bVar8;
  char local_173;
  char local_172 [254];
  _Rb_tree_iterator<std::pair<int_const,int>> local_74 [4];
  int local_70;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_6c [24];
  int local_54;
  bool local_4d;
  int local_4c;
  pair local_48 [8];
  pair<int_const,int> local_40 [8];
  int local_38 [2];
  undefined4 local_30;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_2c [4];
  MySQL *local_28;
  char local_21;
  int local_20;
  
  bVar8 = 0;
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  local_21 = 0;
  local_4c = 0;
  pcVar4 = &local_173;
  uVar5 = 0xff;
  bVar7 = ((uint)pcVar4 & 1) != 0;
  if (bVar7) {
    local_173 = '\0';
    pcVar4 = local_172;
    uVar5 = 0xfe;
  }
  if (((uint)pcVar4 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
    uVar5 = uVar5 - 2;
  }
  for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar8 * -2 + 1) * 4;
  }
  if ((uVar5 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
  }
  if (!bVar7) {
    *pcVar4 = '\0';
  }
  local_4d = false;
  local_54 = -1;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(local_6c);
                    /* try { // try from 0811a296 to 0811a47f has its CatchHandler @ 0811a4a1 */
  MySQL::set_query(local_28,"seLect event_id, event_name from dnf_event_info");
  local_21 = MySQL::exec(local_28,true);
  if (local_21 == '\x01') {
    local_20 = MySQL::get_n_rows(local_28);
    local_70 = 0;
    while ((local_70 < local_20 && (local_21 = MySQL::fetch(local_28), local_21 == '\x01'))) {
      local_21 = MySQL::get_int(local_28,0,&local_4c);
      if (local_21 != '\x01') {
        uVar6 = 0;
        goto LAB_0811a4bc;
      }
      local_21 = MySQL::get_str(local_28,1,&local_173,0xff);
      if (local_21 != '\x01') {
        uVar6 = 0;
        goto LAB_0811a4bc;
      }
      local_54 = _FindEventTable(local_4c,&local_173,&local_4d);
      if (-1 < local_54) {
        if (local_4d != false) {
          uVar6 = 0;
          goto LAB_0811a4bc;
        }
        local_30 = 1;
        std::make_pair<int&,int>(local_38,&local_54);
        std::pair<int_const,int>::pair<int,int>(local_40,(pair *)local_38);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_48);
      }
      local_70 = local_70 + 1;
    }
    local_70 = 0;
    while (iVar2 = GetEventTableCount(), local_70 < iVar2) {
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                ((int *)local_74);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_2c);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                        (local_74,(_Rb_tree_iterator *)local_2c);
      if (cVar1 != '\0') {
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)param_1,&local_70);
      }
      local_70 = local_70 + 1;
    }
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
LAB_0811a4bc:
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map(local_6c);
  return uVar6;
}

```

---

## ~CEventTable

```asm
// === 0811a0ce CEventTable::~CEventTable  [0x0811a0ce-0x811a0d3] ===
 811a0ce:	55                   	push   %ebp
 811a0cf:	89 e5                	mov    %esp,%ebp
 811a0d1:	5d                   	pop    %ebp
 811a0d2:	c3                   	ret
 811a0d3:	90                   	nop

```

```c
// CEventTable::~CEventTable @ 0x811a0ce

/* CEventTable::~CEventTable() */

void __thiscall CEventTable::~CEventTable(CEventTable *this)

{
  return;
}

```

