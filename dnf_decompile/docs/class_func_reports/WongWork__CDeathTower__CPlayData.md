# WongWork__CDeathTower__CPlayData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## checkAllMemberReady

```asm
// === 08461e7e WongWork::CDeathTower::CPlayData::checkAllMemberReady  [0x08461e7e-0x8461ee5] ===
 8461e7e:	55                   	push   %ebp
 8461e7f:	89 e5                	mov    %esp,%ebp
 8461e81:	83 ec 10             	sub    $0x10,%esp
 8461e84:	8b 45 08             	mov    0x8(%ebp),%eax
 8461e87:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 8461e8b:	84 c0                	test   %al,%al
 8461e8d:	74 07                	je     8461e96 <_ZN8WongWork11CDeathTower9CPlayData19checkAllMemberReadyEi+0x18>
 8461e8f:	b8 01 00 00 00       	mov    $0x1,%eax
 8461e94:	eb 4d                	jmp    8461ee3 <_ZN8WongWork11CDeathTower9CPlayData19checkAllMemberReadyEi+0x65>
 8461e96:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 8461e9d:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 8461ea4:	eb 2d                	jmp    8461ed3 <_ZN8WongWork11CDeathTower9CPlayData19checkAllMemberReadyEi+0x55>
 8461ea6:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8461ea9:	8b 55 08             	mov    0x8(%ebp),%edx
 8461eac:	0f b6 44 02 08       	movzbl 0x8(%edx,%eax,1),%eax
 8461eb1:	84 c0                	test   %al,%al
 8461eb3:	74 1a                	je     8461ecf <_ZN8WongWork11CDeathTower9CPlayData19checkAllMemberReadyEi+0x51>
 8461eb5:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 8461eb9:	8b 45 f8             	mov    -0x8(%ebp),%eax
 8461ebc:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8461ebf:	75 0e                	jne    8461ecf <_ZN8WongWork11CDeathTower9CPlayData19checkAllMemberReadyEi+0x51>
 8461ec1:	8b 45 08             	mov    0x8(%ebp),%eax
 8461ec4:	c6 40 0c 01          	movb   $0x1,0xc(%eax)
 8461ec8:	b8 01 00 00 00       	mov    $0x1,%eax
 8461ecd:	eb 14                	jmp    8461ee3 <_ZN8WongWork11CDeathTower9CPlayData19checkAllMemberReadyEi+0x65>
 8461ecf:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 8461ed3:	83 7d fc 03          	cmpl   $0x3,-0x4(%ebp)
 8461ed7:	0f 9e c0             	setle  %al
 8461eda:	84 c0                	test   %al,%al
 8461edc:	75 c8                	jne    8461ea6 <_ZN8WongWork11CDeathTower9CPlayData19checkAllMemberReadyEi+0x28>
 8461ede:	b8 00 00 00 00       	mov    $0x0,%eax
 8461ee3:	c9                   	leave
 8461ee4:	c3                   	ret
 8461ee5:	90                   	nop

```

```c
// WongWork::CDeathTower::CPlayData::checkAllMemberReady @ 0x8461e7e

/* WongWork::CDeathTower::CPlayData::checkAllMemberReady(int) */

undefined4 __thiscall
WongWork::CDeathTower::CPlayData::checkAllMemberReady(CPlayData *this,int param_1)

{
  undefined4 uVar1;
  int local_c;
  int local_8;
  
  if (this[0xc] == (CPlayData)0x0) {
    local_c = 0;
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      if ((this[local_8 + 8] != (CPlayData)0x0) && (local_c = local_c + 1, local_c == param_1)) {
        this[0xc] = (CPlayData)0x1;
        return 1;
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## checkEnterStartMap

```asm
// === 08461e4a WongWork::CDeathTower::CPlayData::checkEnterStartMap  [0x08461e4a-0x8461e7d] ===
 8461e4a:	55                   	push   %ebp
 8461e4b:	89 e5                	mov    %esp,%ebp
 8461e4d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8461e50:	8b 55 08             	mov    0x8(%ebp),%edx
 8461e53:	0f b6 84 02 28 0a 00 	movzbl 0xa28(%edx,%eax,1),%eax
 8461e5a:	00 
 8461e5b:	83 f0 01             	xor    $0x1,%eax
 8461e5e:	84 c0                	test   %al,%al
 8461e60:	74 15                	je     8461e77 <_ZN8WongWork11CDeathTower9CPlayData18checkEnterStartMapEi+0x2d>
 8461e62:	8b 45 0c             	mov    0xc(%ebp),%eax
 8461e65:	8b 55 08             	mov    0x8(%ebp),%edx
 8461e68:	c6 84 02 28 0a 00 00 	movb   $0x1,0xa28(%edx,%eax,1)
 8461e6f:	01 
 8461e70:	b8 01 00 00 00       	mov    $0x1,%eax
 8461e75:	eb 05                	jmp    8461e7c <_ZN8WongWork11CDeathTower9CPlayData18checkEnterStartMapEi+0x32>
 8461e77:	b8 00 00 00 00       	mov    $0x0,%eax
 8461e7c:	5d                   	pop    %ebp
 8461e7d:	c3                   	ret

```

```c
// WongWork::CDeathTower::CPlayData::checkEnterStartMap @ 0x8461e4a

/* WongWork::CDeathTower::CPlayData::checkEnterStartMap(int) */

bool __thiscall WongWork::CDeathTower::CPlayData::checkEnterStartMap(CPlayData *this,int param_1)

{
  CPlayData CVar1;
  
  CVar1 = this[param_1 + 0xa28];
  if (CVar1 != (CPlayData)0x1) {
    this[param_1 + 0xa28] = (CPlayData)0x1;
  }
  return CVar1 != (CPlayData)0x1;
}

```

---

## generateRewardExp

```asm
// === 08462538 WongWork::CDeathTower::CPlayData::generateRewardExp  [0x08462538-0x8462a25] ===
 8462538:	55                   	push   %ebp
 8462539:	89 e5                	mov    %esp,%ebp
 846253b:	56                   	push   %esi
 846253c:	53                   	push   %ebx
 846253d:	81 ec 30 01 00 00    	sub    $0x130,%esp
 8462543:	8b 45 0c             	mov    0xc(%ebp),%eax
 8462546:	89 44 24 04          	mov    %eax,0x4(%esp)
 846254a:	8b 45 18             	mov    0x18(%ebp),%eax
 846254d:	89 04 24             	mov    %eax,(%esp)
 8462550:	e8 0f 32 ce ff       	call   8145764 <_ZN6CParty8get_userEi>
 8462555:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8462558:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 846255f:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8462562:	89 04 24             	mov    %eax,(%esp)
 8462565:	e8 86 20 dd ff       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 846256a:	89 04 24             	mov    %eax,(%esp)
 846256d:	e8 5c 8f dc ff       	call   822b4ce <_ZNK8CDungeon27limitOfStackableItemInTowerEv>
 8462572:	84 c0                	test   %al,%al
 8462574:	74 75                	je     84625eb <_ZN8WongWork11CDeathTower9CPlayData17generateRewardExpEiijP6CPartyRNS0_11CDungeonMgrE+0xb3>
 8462576:	8b 45 10             	mov    0x10(%ebp),%eax
 8462579:	0f af 45 14          	imul   0x14(%ebp),%eax
 846257d:	ba 00 00 00 00       	mov    $0x0,%edx
 8462582:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 8462588:	89 95 2c ff ff ff    	mov    %edx,-0xd4(%ebp)
 846258e:	df ad 28 ff ff ff    	fildll -0xd8(%ebp)
 8462594:	d9 9d 1c ff ff ff    	fstps  -0xe4(%ebp)
 846259a:	e8 fc 9b c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 846259f:	8b 55 10             	mov    0x10(%ebp),%edx
 84625a2:	81 c2 64 14 00 00    	add    $0x1464,%edx
 84625a8:	d9 44 90 0c          	flds   0xc(%eax,%edx,4)
 84625ac:	d8 8d 1c ff ff ff    	fmuls  -0xe4(%ebp)
 84625b2:	d9 bd 26 ff ff ff    	fnstcw -0xda(%ebp)
 84625b8:	0f b7 85 26 ff ff ff 	movzwl -0xda(%ebp),%eax
 84625bf:	b4 0c                	mov    $0xc,%ah
 84625c1:	66 89 85 24 ff ff ff 	mov    %ax,-0xdc(%ebp)
 84625c8:	d9 ad 24 ff ff ff    	fldcw  -0xdc(%ebp)
 84625ce:	df bd 28 ff ff ff    	fistpll -0xd8(%ebp)
 84625d4:	d9 ad 26 ff ff ff    	fldcw  -0xda(%ebp)
 84625da:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
 84625e0:	8b 95 2c ff ff ff    	mov    -0xd4(%ebp),%edx
 84625e6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84625e9:	eb 73                	jmp    846265e <_ZN8WongWork11CDeathTower9CPlayData17generateRewardExpEiijP6CPartyRNS0_11CDungeonMgrE+0x126>
 84625eb:	8b 45 10             	mov    0x10(%ebp),%eax
 84625ee:	0f af 45 14          	imul   0x14(%ebp),%eax
 84625f2:	ba 00 00 00 00       	mov    $0x0,%edx
 84625f7:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 84625fd:	89 95 2c ff ff ff    	mov    %edx,-0xd4(%ebp)
 8462603:	df ad 28 ff ff ff    	fildll -0xd8(%ebp)
 8462609:	d9 9d 20 ff ff ff    	fstps  -0xe0(%ebp)
 846260f:	e8 87 9b c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8462614:	8b 55 10             	mov    0x10(%ebp),%edx
 8462617:	81 c2 f4 15 00 00    	add    $0x15f4,%edx
 846261d:	d9 44 90 0c          	flds   0xc(%eax,%edx,4)
 8462621:	d8 8d 20 ff ff ff    	fmuls  -0xe0(%ebp)
 8462627:	d9 bd 26 ff ff ff    	fnstcw -0xda(%ebp)
 846262d:	0f b7 85 26 ff ff ff 	movzwl -0xda(%ebp),%eax
 8462634:	b4 0c                	mov    $0xc,%ah
 8462636:	66 89 85 24 ff ff ff 	mov    %ax,-0xdc(%ebp)
 846263d:	d9 ad 24 ff ff ff    	fldcw  -0xdc(%ebp)
 8462643:	df bd 28 ff ff ff    	fistpll -0xd8(%ebp)
 8462649:	d9 ad 26 ff ff ff    	fldcw  -0xda(%ebp)
 846264f:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
 8462655:	8b 95 2c ff ff ff    	mov    -0xd4(%ebp),%edx
 846265b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 846265e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8462661:	3d e0 c8 10 00       	cmp    $0x10c8e0,%eax
 8462666:	76 57                	jbe    84626bf <_ZN8WongWork11CDeathTower9CPlayData17generateRewardExpEiijP6CPartyRNS0_11CDungeonMgrE+0x187>
 8462668:	e8 2e 9b c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 846266d:	8b 55 10             	mov    0x10(%ebp),%edx
 8462670:	81 c2 64 14 00 00    	add    $0x1464,%edx
 8462676:	d9 44 90 0c          	flds   0xc(%eax,%edx,4)
 846267a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 846267d:	dd 5c 24 20          	fstpl  0x20(%esp)
 8462681:	8b 55 14             	mov    0x14(%ebp),%edx
 8462684:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8462688:	8b 55 10             	mov    0x10(%ebp),%edx
 846268b:	89 54 24 18          	mov    %edx,0x18(%esp)
 846268f:	89 44 24 14          	mov    %eax,0x14(%esp)
 8462693:	c7 44 24 10 4c 32 c6 	movl   $0x8c6324c,0x10(%esp)
 846269a:	08 
 846269b:	c7 44 24 0c ff 02 00 	movl   $0x2ff,0xc(%esp)
 84626a2:	00 
 84626a3:	c7 44 24 08 20 40 c6 	movl   $0x8c64020,0x8(%esp)
 84626aa:	08 
 84626ab:	c7 44 24 04 a7 32 c6 	movl   $0x8c632a7,0x4(%esp)
 84626b2:	08 
 84626b3:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84626ba:	e8 4b 15 67 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84626bf:	8d 45 9c             	lea    -0x64(%ebp),%eax
 84626c2:	89 04 24             	mov    %eax,(%esp)
 84626c5:	e8 36 81 ce ff       	call   814a800 <_ZN23stClearRewardBonusExp_tC1Ev>
 84626ca:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 84626d0:	89 04 24             	mov    %eax,(%esp)
 84626d3:	e8 e0 81 ce ff       	call   814a8b8 <_ZN27stClearRewardExpParameter_tC1Ev>
 84626d8:	8b 45 18             	mov    0x18(%ebp),%eax
 84626db:	89 04 24             	mov    %eax,(%esp)
 84626de:	e8 df 82 ce ff       	call   814a9c2 <_ZN6CParty14getAvatarBonusEv>
 84626e3:	d9 9d 44 ff ff ff    	fstps  -0xbc(%ebp)
 84626e9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84626ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 84626f0:	8b 45 18             	mov    0x18(%ebp),%eax
 84626f3:	89 04 24             	mov    %eax,(%esp)
 84626f6:	e8 e7 82 ce ff       	call   814a9e2 <_ZN6CParty16getCreatureBonusEP5CUser>
 84626fb:	d9 9d 48 ff ff ff    	fstps  -0xb8(%ebp)
 8462701:	a1 30 f7 41 09       	mov    0x941f730,%eax
 8462706:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 846270d:	00 
 846270e:	89 04 24             	mov    %eax,(%esp)
 8462711:	e8 82 32 cb ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 8462716:	8b 10                	mov    (%eax),%edx
 8462718:	83 c2 34             	add    $0x34,%edx
 846271b:	8b 0a                	mov    (%edx),%ecx
 846271d:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8462720:	89 54 24 04          	mov    %edx,0x4(%esp)
 8462724:	89 04 24             	mov    %eax,(%esp)
 8462727:	ff d1                	call   *%ecx
 8462729:	84 c0                	test   %al,%al
 846272b:	74 48                	je     8462775 <_ZN8WongWork11CDeathTower9CPlayData17generateRewardExpEiijP6CPartyRNS0_11CDungeonMgrE+0x23d>
 846272d:	a1 30 f7 41 09       	mov    0x941f730,%eax
 8462732:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 8462739:	00 
 846273a:	89 04 24             	mov    %eax,(%esp)
 846273d:	e8 56 32 cb ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 8462742:	89 04 24             	mov    %eax,(%esp)
 8462745:	e8 9a 83 ce ff       	call   814aae4 <_ZN19CPCRoomBurningEvent12GetExpFactorEv>
 846274a:	89 c1                	mov    %eax,%ecx
 846274c:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 8462751:	89 c8                	mov    %ecx,%eax
 8462753:	f7 ea                	imul   %edx
 8462755:	c1 fa 05             	sar    $0x5,%edx
 8462758:	89 c8                	mov    %ecx,%eax
 846275a:	c1 f8 1f             	sar    $0x1f,%eax
 846275d:	89 d1                	mov    %edx,%ecx
 846275f:	29 c1                	sub    %eax,%ecx
 8462761:	89 c8                	mov    %ecx,%eax
 8462763:	89 85 34 ff ff ff    	mov    %eax,-0xcc(%ebp)
 8462769:	db 85 34 ff ff ff    	fildl  -0xcc(%ebp)
 846276f:	d9 9d 4c ff ff ff    	fstps  -0xb4(%ebp)
 8462775:	a1 30 f7 41 09       	mov    0x941f730,%eax
 846277a:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8462781:	00 
 8462782:	89 04 24             	mov    %eax,(%esp)
 8462785:	e8 0e 32 cb ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 846278a:	8b 10                	mov    (%eax),%edx
 846278c:	83 c2 34             	add    $0x34,%edx
 846278f:	8b 12                	mov    (%edx),%edx
 8462791:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8462798:	00 
 8462799:	89 04 24             	mov    %eax,(%esp)
 846279c:	ff d2                	call   *%edx
 846279e:	84 c0                	test   %al,%al
 84627a0:	74 37                	je     84627d9 <_ZN8WongWork11CDeathTower9CPlayData17generateRewardExpEiijP6CPartyRNS0_11CDungeonMgrE+0x2a1>
 84627a2:	a1 30 f7 41 09       	mov    0x941f730,%eax
 84627a7:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84627ae:	00 
 84627af:	89 04 24             	mov    %eax,(%esp)
 84627b2:	e8 e1 31 cb ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 84627b7:	89 04 24             	mov    %eax,(%esp)
 84627ba:	e8 19 83 ce ff       	call   814aad8 <_ZN15CExpDoubleEvent12GetExpFactorEv>
 84627bf:	89 85 34 ff ff ff    	mov    %eax,-0xcc(%ebp)
 84627c5:	db 85 34 ff ff ff    	fildl  -0xcc(%ebp)
 84627cb:	d9 05 b8 40 c6 08    	flds   0x8c640b8
 84627d1:	de f9                	fdivrp %st,%st(1)
 84627d3:	d9 9d 50 ff ff ff    	fstps  -0xb0(%ebp)
 84627d9:	a1 30 f7 41 09       	mov    0x941f730,%eax
 84627de:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 84627e5:	00 
 84627e6:	89 04 24             	mov    %eax,(%esp)
 84627e9:	e8 aa 31 cb ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 84627ee:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84627f1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84627f4:	8b 00                	mov    (%eax),%eax
 84627f6:	83 c0 34             	add    $0x34,%eax
 84627f9:	8b 10                	mov    (%eax),%edx
 84627fb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84627fe:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8462805:	00 
 8462806:	89 04 24             	mov    %eax,(%esp)
 8462809:	ff d2                	call   *%edx
 846280b:	84 c0                	test   %al,%al
 846280d:	74 23                	je     8462832 <_ZN8WongWork11CDeathTower9CPlayData17generateRewardExpEiijP6CPartyRNS0_11CDungeonMgrE+0x2fa>
 846280f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8462812:	89 04 24             	mov    %eax,(%esp)
 8462815:	e8 a0 e4 ca ff       	call   8110cba <_ZN15CUserCharacInfo23getCurCharacUsedFatigueEv>
 846281a:	0f b7 c0             	movzwl %ax,%eax
 846281d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8462821:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8462824:	89 04 24             	mov    %eax,(%esp)
 8462827:	e8 c0 78 ca ff       	call   810a0ec <_ZNK20CBurningFatigueEvent15getBonusExpRateEt>
 846282c:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 8462832:	e8 64 99 c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8462837:	89 04 24             	mov    %eax,(%esp)
 846283a:	e8 b9 7e ce ff       	call   814a6f8 <_ZNK12CDataManager16GetChannelScriptEv>
 846283f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8462842:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8462845:	89 04 24             	mov    %eax,(%esp)
 8462848:	e8 a3 1d dd ff       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 846284d:	89 04 24             	mov    %eax,(%esp)
 8462850:	e8 9b b4 c9 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 8462855:	89 c6                	mov    %eax,%esi
 8462857:	e8 25 99 c6 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 846285c:	89 04 24             	mov    %eax,(%esp)
 846285f:	e8 66 82 ce ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 8462864:	89 c3                	mov    %eax,%ebx
 8462866:	e8 16 99 c6 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 846286b:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 8462871:	0f b6 c0             	movzbl %al,%eax
 8462874:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8462878:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 846287c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8462880:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8462883:	89 04 24             	mov    %eax,(%esp)
 8462886:	e8 b1 a5 47 00       	call   88dce3c <_ZNK16channel_script_t12getBonusRateEhjj>
 846288b:	d9 9d 5c ff ff ff    	fstps  -0xa4(%ebp)
 8462891:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8462894:	89 04 24             	mov    %eax,(%esp)
 8462897:	e8 9a a5 cc ff       	call   812ce36 <_ZNK5CUser22IsHavePremiumAdvantageEv>
 846289c:	84 c0                	test   %al,%al
 846289e:	74 2d                	je     84628cd <_ZN8WongWork11CDeathTower9CPlayData17generateRewardExpEiijP6CPartyRNS0_11CDungeonMgrE+0x395>
 84628a0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84628a3:	89 04 24             	mov    %eax,(%esp)
 84628a6:	e8 7d a5 cc ff       	call   812ce28 <_ZNK5CUser14GetPremiumInfoEv>
 84628ab:	89 04 24             	mov    %eax,(%esp)
 84628ae:	e8 55 81 ce ff       	call   814aa08 <_ZNK8WongWork12CUserPremium19GetAdvantageExpRateEv>
 84628b3:	89 85 34 ff ff ff    	mov    %eax,-0xcc(%ebp)
 84628b9:	db 85 34 ff ff ff    	fildl  -0xcc(%ebp)
 84628bf:	d9 05 b8 40 c6 08    	flds   0x8c640b8
 84628c5:	de f9                	fdivrp %st,%st(1)
 84628c7:	d9 9d 60 ff ff ff    	fstps  -0xa0(%ebp)
 84628cd:	e8 0e 7e ce ff       	call   814a6e0 <_ZN12CServerEvent10GetExpRateEv>
 84628d2:	89 85 34 ff ff ff    	mov    %eax,-0xcc(%ebp)
 84628d8:	db 85 34 ff ff ff    	fildl  -0xcc(%ebp)
 84628de:	d9 05 b8 40 c6 08    	flds   0x8c640b8
 84628e4:	de f9                	fdivrp %st,%st(1)
 84628e6:	d9 9d 64 ff ff ff    	fstps  -0x9c(%ebp)
 84628ec:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84628ef:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84628f3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84628f6:	89 44 24 08          	mov    %eax,0x8(%esp)
 84628fa:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8462901:	00 
 8462902:	8b 45 18             	mov    0x18(%ebp),%eax
 8462905:	89 04 24             	mov    %eax,(%esp)
 8462908:	e8 23 b1 14 00       	call   85ada30 <_ZN6CParty20CalcurateManageBonusEN15ManageBonusType1TEP5CUserj>
 846290d:	d9 9d 78 ff ff ff    	fstps  -0x88(%ebp)
 8462913:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8462916:	89 44 24 10          	mov    %eax,0x10(%esp)
 846291a:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 8462920:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8462924:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8462927:	89 44 24 08          	mov    %eax,0x8(%esp)
 846292b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 846292e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8462932:	8b 45 18             	mov    0x18(%ebp),%eax
 8462935:	89 04 24             	mov    %eax,(%esp)
 8462938:	e8 3b a9 14 00       	call   85ad278 <_ZN6CParty22getClearRewardBonusExpEP5CUserRjRK27stClearRewardExpParameter_tR23stClearRewardBonusExp_t>
 846293d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8462940:	81 7d f0 e0 c8 10 00 	cmpl   $0x10c8e0,-0x10(%ebp)
 8462947:	0f 86 bc 00 00 00    	jbe    8462a09 <_ZN8WongWork11CDeathTower9CPlayData17generateRewardExpEiijP6CPartyRNS0_11CDungeonMgrE+0x4d1>
 846294d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8462950:	89 44 24 14          	mov    %eax,0x14(%esp)
 8462954:	c7 44 24 10 b8 32 c6 	movl   $0x8c632b8,0x10(%esp)
 846295b:	08 
 846295c:	c7 44 24 0c 24 03 00 	movl   $0x324,0xc(%esp)
 8462963:	00 
 8462964:	c7 44 24 08 20 40 c6 	movl   $0x8c64020,0x8(%esp)
 846296b:	08 
 846296c:	c7 44 24 04 a7 32 c6 	movl   $0x8c632a7,0x4(%esp)
 8462973:	08 
 8462974:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 846297b:	e8 8a 12 67 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8462980:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 8462986:	d9 85 64 ff ff ff    	flds   -0x9c(%ebp)
 846298c:	d9 85 60 ff ff ff    	flds   -0xa0(%ebp)
 8462992:	d9 85 5c ff ff ff    	flds   -0xa4(%ebp)
 8462998:	d9 85 50 ff ff ff    	flds   -0xb0(%ebp)
 846299e:	d9 85 4c ff ff ff    	flds   -0xb4(%ebp)
 84629a4:	d9 85 48 ff ff ff    	flds   -0xb8(%ebp)
 84629aa:	d9 85 44 ff ff ff    	flds   -0xbc(%ebp)
 84629b0:	d9 ce                	fxch   %st(6)
 84629b2:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 84629b6:	dd 5c 24 44          	fstpl  0x44(%esp)
 84629ba:	d9 cc                	fxch   %st(4)
 84629bc:	dd 5c 24 3c          	fstpl  0x3c(%esp)
 84629c0:	d9 ca                	fxch   %st(2)
 84629c2:	dd 5c 24 34          	fstpl  0x34(%esp)
 84629c6:	dd 5c 24 2c          	fstpl  0x2c(%esp)
 84629ca:	dd 5c 24 24          	fstpl  0x24(%esp)
 84629ce:	dd 5c 24 1c          	fstpl  0x1c(%esp)
 84629d2:	dd 5c 24 14          	fstpl  0x14(%esp)
 84629d6:	c7 44 24 10 ec 32 c6 	movl   $0x8c632ec,0x10(%esp)
 84629dd:	08 
 84629de:	c7 44 24 0c 2e 03 00 	movl   $0x32e,0xc(%esp)
 84629e5:	00 
 84629e6:	c7 44 24 08 20 40 c6 	movl   $0x8c64020,0x8(%esp)
 84629ed:	08 
 84629ee:	c7 44 24 04 a7 32 c6 	movl   $0x8c632a7,0x4(%esp)
 84629f5:	08 
 84629f6:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84629fd:	e8 08 12 67 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8462a02:	c7 45 f0 e0 c8 10 00 	movl   $0x10c8e0,-0x10(%ebp)
 8462a09:	8b 55 0c             	mov    0xc(%ebp),%edx
 8462a0c:	8b 45 08             	mov    0x8(%ebp),%eax
 8462a0f:	8d 8a 6c 02 00 00    	lea    0x26c(%edx),%ecx
 8462a15:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8462a18:	89 54 88 08          	mov    %edx,0x8(%eax,%ecx,4)
 8462a1c:	81 c4 30 01 00 00    	add    $0x130,%esp
 8462a22:	5b                   	pop    %ebx
 8462a23:	5e                   	pop    %esi
 8462a24:	5d                   	pop    %ebp
 8462a25:	c3                   	ret

```

```c
// WongWork::CDeathTower::CPlayData::generateRewardExp @ 0x8462538

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WongWork::CDeathTower::CPlayData::generateRewardExp(int, int, unsigned int, CParty*,
   WongWork::CDeathTower::CDungeonMgr&) */

void __thiscall
WongWork::CDeathTower::CPlayData::generateRewardExp
          (CPlayData *this,int param_1,int param_2,uint param_3,CParty *param_4,CDungeonMgr *param_5
          )

{
  double dVar1;
  char cVar2;
  ushort uVar3;
  CDungeon *pCVar4;
  int iVar5;
  int *piVar6;
  CPCRoomBurningEvent *this_00;
  CExpDoubleEvent *this_01;
  CDataManager *this_02;
  uint uVar7;
  CEnvironment *this_03;
  uint uVar8;
  CUserPremium *this_04;
  longdouble lVar9;
  ulonglong local_dc;
  stClearRewardExpParameter_t local_c8 [8];
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined4 local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_8c;
  stClearRewardBonusExp_t local_68 [72];
  uint local_20;
  CUser *local_1c;
  CBurningFatigueEvent *local_18;
  uint local_14;
  channel_script_t *local_10;
  
  local_1c = (CUser *)CParty::get_user(param_4,param_1);
  local_20 = 0;
  pCVar4 = (CDungeon *)CDungeonMgr::getDungeon(param_5);
  cVar2 = CDungeon::limitOfStackableItemInTower(pCVar4);
  if (cVar2 == '\0') {
    local_dc = (ulonglong)(param_2 * param_3);
    iVar5 = G_CDataManager();
    local_dc._0_4_ =
         (uint)(longlong)ROUND(*(float *)(iVar5 + 0xc + (param_2 + 0x15f4) * 4) * (float)local_dc);
    local_20 = (uint)local_dc;
  }
  else {
    local_dc = (ulonglong)(param_2 * param_3);
    iVar5 = G_CDataManager();
    local_dc._0_4_ =
         (uint)(longlong)ROUND(*(float *)(iVar5 + 0xc + (param_2 + 0x1464) * 4) * (float)local_dc);
    local_20 = (uint)local_dc;
  }
  if (1100000 < local_20) {
    iVar5 = G_CDataManager();
    dVar1 = (double)*(float *)(iVar5 + 0xc + (param_2 + 0x1464) * 4);
    LogManager::logFormat
              (1,"DeathTower.cpp",
               "void WongWork::CDeathTower::CPlayData::generateRewardExp(int, int, unsigned int, CParty*, WongWork::CDeathTower::CDungeonMgr&)"
               ,0x2ff,
               "BLOOD_LOG : EROOR DEATHTOWER REWARD EXP(%u), LAST STAGE(%d), BASE EXP(%u), EXP WEIGHT(%f)\n"
               ,local_20,param_2,param_3,SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  }
  stClearRewardBonusExp_t::stClearRewardBonusExp_t(local_68);
  stClearRewardExpParameter_t::stClearRewardExpParameter_t(local_c8);
  lVar9 = (longdouble)CParty::getAvatarBonus(param_4);
  local_c0 = (float)lVar9;
  lVar9 = (longdouble)CParty::getCreatureBonus(param_4,local_1c);
  local_bc = (float)lVar9;
  piVar6 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,8);
  cVar2 = (**(code **)(*piVar6 + 0x34))(piVar6,local_1c);
  if (cVar2 != '\0') {
    this_00 = (CPCRoomBurningEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,8);
    iVar5 = CPCRoomBurningEvent::GetExpFactor(this_00);
    local_b8 = (float)(iVar5 / 100);
  }
  piVar6 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,3);
  cVar2 = (**(code **)(*piVar6 + 0x34))(piVar6,0);
  if (cVar2 != '\0') {
    this_01 = (CExpDoubleEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,3);
    iVar5 = CExpDoubleEvent::GetExpFactor(this_01);
    local_b4 = (float)iVar5 / _DAT_08c640b8;
  }
  local_18 = (CBurningFatigueEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xf);
  cVar2 = (**(code **)(*(int *)local_18 + 0x34))(local_18,0);
  if (cVar2 != '\0') {
    uVar3 = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)local_1c);
    local_ac = CBurningFatigueEvent::getBonusExpRate(local_18,uVar3);
  }
  this_02 = (CDataManager *)G_CDataManager();
  local_10 = (channel_script_t *)CDataManager::GetChannelScript(this_02);
  pCVar4 = (CDungeon *)CDungeonMgr::getDungeon(param_5);
  uVar7 = CDungeon::get_index(pCVar4);
  this_03 = (CEnvironment *)G_CEnvironment();
  uVar8 = CEnvironment::get_channel_no(this_03);
  iVar5 = G_CEnvironment();
  lVar9 = (longdouble)
          channel_script_t::getBonusRate(local_10,(uchar)*(undefined4 *)(iVar5 + 0x378),uVar8,uVar7)
  ;
  local_a8 = (float)lVar9;
  cVar2 = CUser::IsHavePremiumAdvantage(local_1c);
  if (cVar2 != '\0') {
    this_04 = (CUserPremium *)CUser::GetPremiumInfo(local_1c);
    iVar5 = CUserPremium::GetAdvantageExpRate(this_04);
    local_a4 = (float)iVar5 / _DAT_08c640b8;
  }
  iVar5 = CServerEvent::GetExpRate();
  local_a0 = (float)iVar5 / _DAT_08c640b8;
  lVar9 = (longdouble)CParty::CalcurateManageBonus(param_4,0,local_1c,local_20);
  local_8c = (float)lVar9;
  local_14 = CParty::getClearRewardBonusExp(param_4,local_1c,&local_20,local_c8,local_68);
  if (1100000 < local_14) {
    LogManager::logFormat
              (1,"DeathTower.cpp",
               "void WongWork::CDeathTower::CPlayData::generateRewardExp(int, int, unsigned int, CParty*, WongWork::CDeathTower::CDungeonMgr&)"
               ,0x324,"BLOOD_LOG : EROOR DEATHTOWER CLEAR REWARD EXP(%u)\n",local_14);
    LogManager::logFormat
              (1,"DeathTower.cpp",
               "void WongWork::CDeathTower::CPlayData::generateRewardExp(int, int, unsigned int, CParty*, WongWork::CDeathTower::CDungeonMgr&)"
               ,0x32e,"BLOOD_LOG : DEATHTOWER EXP PARAMETER : %f, %f, %f, %f, %f, %f, %f, %d\n",
               (double)local_c0,SUB84((double)local_bc,0),(int)((ulonglong)(double)local_bc >> 0x20)
               ,SUB84((double)local_b8,0),(int)((ulonglong)(double)local_b8 >> 0x20),
               (double)local_b4,(double)local_a8,(double)local_a4,(double)local_a0,local_ac);
    local_14 = 1100000;
  }
  *(uint *)(this + (param_1 + 0x26c) * 4 + 8) = local_14;
  return;
}

```

---

## generateRewardItem

```asm
// === 08461fc0 WongWork::CDeathTower::CPlayData::generateRewardItem  [0x08461fc0-0x8462537] ===
 8461fc0:	55                   	push   %ebp
 8461fc1:	89 e5                	mov    %esp,%ebp
 8461fc3:	57                   	push   %edi
 8461fc4:	56                   	push   %esi
 8461fc5:	53                   	push   %ebx
 8461fc6:	81 ec 6c 01 00 00    	sub    $0x16c,%esp
 8461fcc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8461fcf:	8b 55 08             	mov    0x8(%ebp),%edx
 8461fd2:	69 c0 68 02 00 00    	imul   $0x268,%eax,%eax
 8461fd8:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8461fdb:	8d 50 18             	lea    0x18(%eax),%edx
 8461fde:	8b 45 10             	mov    0x10(%ebp),%eax
 8461fe1:	89 02                	mov    %eax,(%edx)
 8461fe3:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8461fea:	e9 2d 05 00 00       	jmp    846251c <_ZN8WongWork11CDeathTower9CPlayData18generateRewardItemEiiRKNS0_11CDungeonMgrEjjP6CParty+0x55c>
 8461fef:	8d 85 c0 fe ff ff    	lea    -0x140(%ebp),%eax
 8461ff5:	89 04 24             	mov    %eax,(%esp)
 8461ff8:	e8 09 87 ce ff       	call   814a706 <_ZN8WongWork19stGenerateRefData_tC1Ev>
 8461ffd:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8462003:	89 04 24             	mov    %eax,(%esp)
 8462006:	e8 fb 8a ce ff       	call   814ab06 <_ZN8WongWork18stGenerateResult_tC1Ev>
 846200b:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
 846200f:	74 20                	je     8462031 <_ZN8WongWork11CDeathTower9CPlayData18generateRewardItemEiiRKNS0_11CDungeonMgrEjjP6CParty+0x71>
 8462011:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8462018:	00 
 8462019:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 846201f:	83 c0 0c             	add    $0xc,%eax
 8462022:	89 44 24 04          	mov    %eax,0x4(%esp)
 8462026:	8b 45 20             	mov    0x20(%ebp),%eax
 8462029:	89 04 24             	mov    %eax,(%esp)
 846202c:	e8 8d 41 15 00       	call   85b61be <_ZN6CParty12GetLuckPointEP10CLuckPointb>
 8462031:	c7 04 24 e8 03 00 00 	movl   $0x3e8,(%esp)
 8462038:	e8 4a fb 24 00       	call   86b1b87 <_Z12get_rand_inti>
 846203d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8462040:	e8 56 a1 c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8462045:	8b 80 20 5e 00 00    	mov    0x5e20(%eax),%eax
 846204b:	0f af 45 1c          	imul   0x1c(%ebp),%eax
 846204f:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 8462052:	0f 97 c0             	seta   %al
 8462055:	84 c0                	test   %al,%al
 8462057:	0f 84 42 02 00 00    	je     846229f <_ZN8WongWork11CDeathTower9CPlayData18generateRewardItemEiiRKNS0_11CDungeonMgrEjjP6CParty+0x2df>
 846205d:	c6 85 f5 fe ff ff 00 	movb   $0x0,-0x10b(%ebp)
 8462064:	8b 45 18             	mov    0x18(%ebp),%eax
 8462067:	88 85 f4 fe ff ff    	mov    %al,-0x10c(%ebp)
 846206d:	c6 85 f6 fe ff ff 01 	movb   $0x1,-0x10a(%ebp)
 8462074:	c7 85 f8 fe ff ff 01 	movl   $0x1,-0x108(%ebp)
 846207b:	00 00 00 
 846207e:	66 c7 85 fc fe ff ff 	movw   $0x1,-0x104(%ebp)
 8462085:	01 00 
 8462087:	66 c7 85 fe fe ff ff 	movw   $0x1,-0x102(%ebp)
 846208e:	01 00 
 8462090:	66 c7 85 00 ff ff ff 	movw   $0x1,-0x100(%ebp)
 8462097:	01 00 
 8462099:	66 c7 85 02 ff ff ff 	movw   $0x1,-0xfe(%ebp)
 84620a0:	01 00 
 84620a2:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 84620a8:	89 04 24             	mov    %eax,(%esp)
 84620ab:	e8 56 8a ce ff       	call   814ab06 <_ZN8WongWork18stGenerateResult_tC1Ev>
 84620b0:	e8 e6 a0 c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84620b5:	89 04 24             	mov    %eax,(%esp)
 84620b8:	e8 2d 86 ce ff       	call   814a6ea <_ZN12CDataManager16getItemGeneratorEv>
 84620bd:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84620c4:	00 
 84620c5:	89 04 24             	mov    %eax,(%esp)
 84620c8:	e8 03 87 ce ff       	call   814a7d0 <_ZN8WongWork17CItemGeneratorMgr12getGeneratorENS0_15eGenerateType_tE>
 84620cd:	8b 10                	mov    (%eax),%edx
 84620cf:	83 c2 0c             	add    $0xc,%edx
 84620d2:	8b 0a                	mov    (%edx),%ecx
 84620d4:	8d 95 48 ff ff ff    	lea    -0xb8(%ebp),%edx
 84620da:	89 54 24 08          	mov    %edx,0x8(%esp)
 84620de:	8d 95 c0 fe ff ff    	lea    -0x140(%ebp),%edx
 84620e4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84620e8:	89 04 24             	mov    %eax,(%esp)
 84620eb:	ff d1                	call   *%ecx
 84620ed:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
 84620f1:	0f 84 95 00 00 00    	je     846218c <_ZN8WongWork11CDeathTower9CPlayData18generateRewardItemEiiRKNS0_11CDungeonMgrEjjP6CParty+0x1cc>
 84620f7:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84620fa:	8d 95 48 ff ff ff    	lea    -0xb8(%ebp),%edx
 8462100:	89 54 24 04          	mov    %edx,0x4(%esp)
 8462104:	89 04 24             	mov    %eax,(%esp)
 8462107:	e8 f8 8b ce ff       	call   814ad04 <_ZNSt6vectorI10Inven_ItemSaIS0_EE5beginEv>
 846210c:	83 ec 04             	sub    $0x4,%esp
 846210f:	8b 45 20             	mov    0x20(%ebp),%eax
 8462112:	89 44 24 04          	mov    %eax,0x4(%esp)
 8462116:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8462119:	89 04 24             	mov    %eax,(%esp)
 846211c:	e8 55 78 00 00       	call   8469976 <_ZN10QuickParty16RewardData_ParamC1EP6CParty>
 8462121:	8b 45 14             	mov    0x14(%ebp),%eax
 8462124:	89 04 24             	mov    %eax,(%esp)
 8462127:	e8 c4 24 dd ff       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 846212c:	89 04 24             	mov    %eax,(%esp)
 846212f:	e8 bc bb c9 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 8462134:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8462137:	8d 45 a8             	lea    -0x58(%ebp),%eax
 846213a:	89 04 24             	mov    %eax,(%esp)
 846213d:	e8 84 78 00 00       	call   84699c6 <_ZN10QuickParty17RewardData_ResultC1Ev>
 8462142:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8462145:	89 04 24             	mov    %eax,(%esp)
 8462148:	e8 db 8b ce ff       	call   814ad28 <_ZNK9__gnu_cxx17__normal_iteratorIP10Inven_ItemSt6vectorIS1_SaIS1_EEEdeEv>
 846214d:	8b 40 07             	mov    0x7(%eax),%eax
 8462150:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8462153:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8462156:	89 44 24 10          	mov    %eax,0x10(%esp)
 846215a:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 846215d:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8462160:	89 44 24 08          	mov    %eax,0x8(%esp)
 8462164:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8462168:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 846216f:	00 
 8462170:	8b 45 20             	mov    0x20(%ebp),%eax
 8462173:	89 04 24             	mov    %eax,(%esp)
 8462176:	e8 17 98 13 00       	call   859b992 <_ZN6CParty16set_basic_rewardEN10QuickParty15BasicRewardTypeENS0_16RewardData_ParamERNS0_17RewardData_ResultE>
 846217b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 846217e:	89 04 24             	mov    %eax,(%esp)
 8462181:	e8 a2 8b ce ff       	call   814ad28 <_ZNK9__gnu_cxx17__normal_iteratorIP10Inven_ItemSt6vectorIS1_SaIS1_EEEdeEv>
 8462186:	8b 55 a8             	mov    -0x58(%ebp),%edx
 8462189:	89 50 07             	mov    %edx,0x7(%eax)
 846218c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 846218f:	8d 95 48 ff ff ff    	lea    -0xb8(%ebp),%edx
 8462195:	89 54 24 04          	mov    %edx,0x4(%esp)
 8462199:	89 04 24             	mov    %eax,(%esp)
 846219c:	e8 63 8b ce ff       	call   814ad04 <_ZNSt6vectorI10Inven_ItemSaIS0_EE5beginEv>
 84621a1:	83 ec 04             	sub    $0x4,%esp
 84621a4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84621a7:	89 04 24             	mov    %eax,(%esp)
 84621aa:	e8 79 8b ce ff       	call   814ad28 <_ZNK9__gnu_cxx17__normal_iteratorIP10Inven_ItemSt6vectorIS1_SaIS1_EEEdeEv>
 84621af:	8b 55 0c             	mov    0xc(%ebp),%edx
 84621b2:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 84621b5:	6b c9 3d             	imul   $0x3d,%ecx,%ecx
 84621b8:	69 d2 68 02 00 00    	imul   $0x268,%edx,%edx
 84621be:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 84621c1:	83 c2 10             	add    $0x10,%edx
 84621c4:	03 55 08             	add    0x8(%ebp),%edx
 84621c7:	83 c2 0c             	add    $0xc,%edx
 84621ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 84621ce:	89 14 24             	mov    %edx,(%esp)
 84621d1:	e8 58 84 ce ff       	call   814a62e <_ZN10Inven_Item7setCopyERKS_>
 84621d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84621d9:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84621dc:	6b d2 3d             	imul   $0x3d,%edx,%edx
 84621df:	69 c0 68 02 00 00    	imul   $0x268,%eax,%eax
 84621e5:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84621e8:	83 c0 10             	add    $0x10,%eax
 84621eb:	03 45 08             	add    0x8(%ebp),%eax
 84621ee:	83 c0 0c             	add    $0xc,%eax
 84621f1:	89 04 24             	mov    %eax,(%esp)
 84621f4:	e8 41 56 c9 ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 84621f9:	89 85 b0 fe ff ff    	mov    %eax,-0x150(%ebp)
 84621ff:	db 85 b0 fe ff ff    	fildl  -0x150(%ebp)
 8462205:	d9 9d ac fe ff ff    	fstps  -0x154(%ebp)
 846220b:	e8 8b 9f c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8462210:	d9 80 2c 5e 00 00    	flds   0x5e2c(%eax)
 8462216:	d8 8d ac fe ff ff    	fmuls  -0x154(%ebp)
 846221c:	d9 bd b6 fe ff ff    	fnstcw -0x14a(%ebp)
 8462222:	0f b7 85 b6 fe ff ff 	movzwl -0x14a(%ebp),%eax
 8462229:	b4 0c                	mov    $0xc,%ah
 846222b:	66 89 85 b4 fe ff ff 	mov    %ax,-0x14c(%ebp)
 8462232:	d9 ad b4 fe ff ff    	fldcw  -0x14c(%ebp)
 8462238:	db 9d b0 fe ff ff    	fistpl -0x150(%ebp)
 846223e:	d9 ad b6 fe ff ff    	fldcw  -0x14a(%ebp)
 8462244:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 846224a:	8b 55 0c             	mov    0xc(%ebp),%edx
 846224d:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8462250:	6b c9 3d             	imul   $0x3d,%ecx,%ecx
 8462253:	69 d2 68 02 00 00    	imul   $0x268,%edx,%edx
 8462259:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 846225c:	83 c2 10             	add    $0x10,%edx
 846225f:	03 55 08             	add    0x8(%ebp),%edx
 8462262:	83 c2 0c             	add    $0xc,%edx
 8462265:	89 44 24 04          	mov    %eax,0x4(%esp)
 8462269:	89 14 24             	mov    %edx,(%esp)
 846226c:	e8 13 96 c6 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 8462271:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 8462277:	89 04 24             	mov    %eax,(%esp)
 846227a:	e8 cd 88 ce ff       	call   814ab4c <_ZN8WongWork18stGenerateResult_tD1Ev>
 846227f:	e9 37 02 00 00       	jmp    84624bb <_ZN8WongWork11CDeathTower9CPlayData18generateRewardItemEiiRKNS0_11CDungeonMgrEjjP6CParty+0x4fb>
 8462284:	89 d3                	mov    %edx,%ebx
 8462286:	89 c6                	mov    %eax,%esi
 8462288:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 846228e:	89 04 24             	mov    %eax,(%esp)
 8462291:	e8 b6 88 ce ff       	call   814ab4c <_ZN8WongWork18stGenerateResult_tD1Ev>
 8462296:	89 f0                	mov    %esi,%eax
 8462298:	89 da                	mov    %ebx,%edx
 846229a:	e9 23 02 00 00       	jmp    84624c2 <_ZN8WongWork11CDeathTower9CPlayData18generateRewardItemEiiRKNS0_11CDungeonMgrEjjP6CParty+0x502>
 846229f:	e8 f7 9e c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84622a4:	8b 80 24 5e 00 00    	mov    0x5e24(%eax),%eax
 84622aa:	0f af 45 1c          	imul   0x1c(%ebp),%eax
 84622ae:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 84622b1:	0f 97 c0             	seta   %al
 84622b4:	84 c0                	test   %al,%al
 84622b6:	0f 84 ff 01 00 00    	je     84624bb <_ZN8WongWork11CDeathTower9CPlayData18generateRewardItemEiiRKNS0_11CDungeonMgrEjjP6CParty+0x4fb>
 84622bc:	c6 85 f5 fe ff ff 00 	movb   $0x0,-0x10b(%ebp)
 84622c3:	8b 45 18             	mov    0x18(%ebp),%eax
 84622c6:	88 85 f4 fe ff ff    	mov    %al,-0x10c(%ebp)
 84622cc:	b8 00 00 80 3f       	mov    $0x3f800000,%eax
 84622d1:	89 85 f8 fe ff ff    	mov    %eax,-0x108(%ebp)
 84622d7:	8b 45 14             	mov    0x14(%ebp),%eax
 84622da:	89 04 24             	mov    %eax,(%esp)
 84622dd:	e8 0e 23 dd ff       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 84622e2:	89 85 00 ff ff ff    	mov    %eax,-0x100(%ebp)
 84622e8:	c7 85 fc fe ff ff 00 	movl   $0x0,-0x104(%ebp)
 84622ef:	00 00 00 
 84622f2:	e8 a4 9e c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84622f7:	89 04 24             	mov    %eax,(%esp)
 84622fa:	e8 eb 83 ce ff       	call   814a6ea <_ZN12CDataManager16getItemGeneratorEv>
 84622ff:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8462306:	00 
 8462307:	89 04 24             	mov    %eax,(%esp)
 846230a:	e8 c1 84 ce ff       	call   814a7d0 <_ZN8WongWork17CItemGeneratorMgr12getGeneratorENS0_15eGenerateType_tE>
 846230f:	8b 10                	mov    (%eax),%edx
 8462311:	83 c2 08             	add    $0x8,%edx
 8462314:	8b 0a                	mov    (%edx),%ecx
 8462316:	8d 95 78 ff ff ff    	lea    -0x88(%ebp),%edx
 846231c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8462320:	8d 95 c0 fe ff ff    	lea    -0x140(%ebp),%edx
 8462326:	89 54 24 04          	mov    %edx,0x4(%esp)
 846232a:	89 04 24             	mov    %eax,(%esp)
 846232d:	ff d1                	call   *%ecx
 846232f:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8462335:	89 04 24             	mov    %eax,(%esp)
 8462338:	e8 f5 89 ce ff       	call   814ad32 <_ZNKSt6vectorI10Inven_ItemSaIS0_EE5emptyEv>
 846233d:	83 f0 01             	xor    $0x1,%eax
 8462340:	84 c0                	test   %al,%al
 8462342:	0f 84 73 01 00 00    	je     84624bb <_ZN8WongWork11CDeathTower9CPlayData18generateRewardItemEiiRKNS0_11CDungeonMgrEjjP6CParty+0x4fb>
 8462348:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 846234b:	8d 95 78 ff ff ff    	lea    -0x88(%ebp),%edx
 8462351:	89 54 24 04          	mov    %edx,0x4(%esp)
 8462355:	89 04 24             	mov    %eax,(%esp)
 8462358:	e8 a7 89 ce ff       	call   814ad04 <_ZNSt6vectorI10Inven_ItemSaIS0_EE5beginEv>
 846235d:	83 ec 04             	sub    $0x4,%esp
 8462360:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8462363:	89 04 24             	mov    %eax,(%esp)
 8462366:	e8 bd 89 ce ff       	call   814ad28 <_ZNK9__gnu_cxx17__normal_iteratorIP10Inven_ItemSt6vectorIS1_SaIS1_EEEdeEv>
 846236b:	8b 55 0c             	mov    0xc(%ebp),%edx
 846236e:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8462371:	6b c9 3d             	imul   $0x3d,%ecx,%ecx
 8462374:	69 d2 68 02 00 00    	imul   $0x268,%edx,%edx
 846237a:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 846237d:	83 c2 10             	add    $0x10,%edx
 8462380:	03 55 08             	add    0x8(%ebp),%edx
 8462383:	83 c2 0c             	add    $0xc,%edx
 8462386:	89 44 24 04          	mov    %eax,0x4(%esp)
 846238a:	89 14 24             	mov    %edx,(%esp)
 846238d:	e8 9c 82 ce ff       	call   814a62e <_ZN10Inven_Item7setCopyERKS_>
 8462392:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8462395:	8d 95 78 ff ff ff    	lea    -0x88(%ebp),%edx
 846239b:	89 54 24 04          	mov    %edx,0x4(%esp)
 846239f:	89 04 24             	mov    %eax,(%esp)
 84623a2:	e8 5d 89 ce ff       	call   814ad04 <_ZNSt6vectorI10Inven_ItemSaIS0_EE5beginEv>
 84623a7:	83 ec 04             	sub    $0x4,%esp
 84623aa:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84623ad:	89 04 24             	mov    %eax,(%esp)
 84623b0:	e8 73 89 ce ff       	call   814ad28 <_ZNK9__gnu_cxx17__normal_iteratorIP10Inven_ItemSt6vectorIS1_SaIS1_EEEdeEv>
 84623b5:	8b 10                	mov    (%eax),%edx
 84623b7:	89 95 0b ff ff ff    	mov    %edx,-0xf5(%ebp)
 84623bd:	8b 50 04             	mov    0x4(%eax),%edx
 84623c0:	89 95 0f ff ff ff    	mov    %edx,-0xf1(%ebp)
 84623c6:	8b 50 08             	mov    0x8(%eax),%edx
 84623c9:	89 95 13 ff ff ff    	mov    %edx,-0xed(%ebp)
 84623cf:	8b 50 0c             	mov    0xc(%eax),%edx
 84623d2:	89 95 17 ff ff ff    	mov    %edx,-0xe9(%ebp)
 84623d8:	8b 50 10             	mov    0x10(%eax),%edx
 84623db:	89 95 1b ff ff ff    	mov    %edx,-0xe5(%ebp)
 84623e1:	8b 50 14             	mov    0x14(%eax),%edx
 84623e4:	89 95 1f ff ff ff    	mov    %edx,-0xe1(%ebp)
 84623ea:	8b 50 18             	mov    0x18(%eax),%edx
 84623ed:	89 95 23 ff ff ff    	mov    %edx,-0xdd(%ebp)
 84623f3:	8b 50 1c             	mov    0x1c(%eax),%edx
 84623f6:	89 95 27 ff ff ff    	mov    %edx,-0xd9(%ebp)
 84623fc:	8b 50 20             	mov    0x20(%eax),%edx
 84623ff:	89 95 2b ff ff ff    	mov    %edx,-0xd5(%ebp)
 8462405:	8b 50 24             	mov    0x24(%eax),%edx
 8462408:	89 95 2f ff ff ff    	mov    %edx,-0xd1(%ebp)
 846240e:	8b 50 28             	mov    0x28(%eax),%edx
 8462411:	89 95 33 ff ff ff    	mov    %edx,-0xcd(%ebp)
 8462417:	8b 50 2c             	mov    0x2c(%eax),%edx
 846241a:	89 95 37 ff ff ff    	mov    %edx,-0xc9(%ebp)
 8462420:	8b 50 30             	mov    0x30(%eax),%edx
 8462423:	89 95 3b ff ff ff    	mov    %edx,-0xc5(%ebp)
 8462429:	8b 50 34             	mov    0x34(%eax),%edx
 846242c:	89 95 3f ff ff ff    	mov    %edx,-0xc1(%ebp)
 8462432:	8b 50 38             	mov    0x38(%eax),%edx
 8462435:	89 95 43 ff ff ff    	mov    %edx,-0xbd(%ebp)
 846243b:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 846243f:	88 85 47 ff ff ff    	mov    %al,-0xb9(%ebp)
 8462445:	8b 85 0d ff ff ff    	mov    -0xf3(%ebp),%eax
 846244b:	89 c3                	mov    %eax,%ebx
 846244d:	e8 49 9d c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8462452:	8b 40 0c             	mov    0xc(%eax),%eax
 8462455:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8462459:	89 04 24             	mov    %eax,(%esp)
 846245c:	e8 29 fa 0a 00       	call   8511e8a <_ZN9CItemList9find_itemEi>
 8462461:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8462464:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8462468:	75 07                	jne    8462471 <_ZN8WongWork11CDeathTower9CPlayData18generateRewardItemEiiRKNS0_11CDungeonMgrEjjP6CParty+0x4b1>
 846246a:	bb 00 00 00 00       	mov    $0x0,%ebx
 846246f:	eb 69                	jmp    84624da <_ZN8WongWork11CDeathTower9CPlayData18generateRewardItemEiiRKNS0_11CDungeonMgrEjjP6CParty+0x51a>
 8462471:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8462474:	89 04 24             	mov    %eax,(%esp)
 8462477:	e8 d8 e7 ca ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 846247c:	89 c3                	mov    %eax,%ebx
 846247e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8462481:	89 04 24             	mov    %eax,(%esp)
 8462484:	e8 4d ee c8 ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 8462489:	89 c7                	mov    %eax,%edi
 846248b:	0f b6 85 0c ff ff ff 	movzbl -0xf4(%ebp),%eax
 8462492:	0f b6 f0             	movzbl %al,%esi
 8462495:	8b 45 0c             	mov    0xc(%ebp),%eax
 8462498:	89 44 24 04          	mov    %eax,0x4(%esp)
 846249c:	8b 45 20             	mov    0x20(%ebp),%eax
 846249f:	89 04 24             	mov    %eax,(%esp)
 84624a2:	e8 bd 32 ce ff       	call   8145764 <_ZN6CParty8get_userEi>
 84624a7:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84624ab:	89 7c 24 08          	mov    %edi,0x8(%esp)
 84624af:	89 74 24 04          	mov    %esi,0x4(%esp)
 84624b3:	89 04 24             	mov    %eax,(%esp)
 84624b6:	e8 c9 e5 0e 00       	call   8550a84 <_ZN10CLuckPoint12UseLuckPointEP5CUseriii>
 84624bb:	bb 01 00 00 00       	mov    $0x1,%ebx
 84624c0:	eb 18                	jmp    84624da <_ZN8WongWork11CDeathTower9CPlayData18generateRewardItemEiiRKNS0_11CDungeonMgrEjjP6CParty+0x51a>
 84624c2:	89 d3                	mov    %edx,%ebx
 84624c4:	89 c6                	mov    %eax,%esi
 84624c6:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84624cc:	89 04 24             	mov    %eax,(%esp)
 84624cf:	e8 78 86 ce ff       	call   814ab4c <_ZN8WongWork18stGenerateResult_tD1Ev>
 84624d4:	89 f0                	mov    %esi,%eax
 84624d6:	89 da                	mov    %ebx,%edx
 84624d8:	eb 24                	jmp    84624fe <_ZN8WongWork11CDeathTower9CPlayData18generateRewardItemEiiRKNS0_11CDungeonMgrEjjP6CParty+0x53e>
 84624da:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84624e0:	89 04 24             	mov    %eax,(%esp)
 84624e3:	e8 64 86 ce ff       	call   814ab4c <_ZN8WongWork18stGenerateResult_tD1Ev>
 84624e8:	85 db                	test   %ebx,%ebx
 84624ea:	8d 85 c0 fe ff ff    	lea    -0x140(%ebp),%eax
 84624f0:	89 04 24             	mov    %eax,(%esp)
 84624f3:	e8 f8 85 ce ff       	call   814aaf0 <_ZN8WongWork19stGenerateRefData_tD1Ev>
 84624f8:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 84624fc:	eb 1e                	jmp    846251c <_ZN8WongWork11CDeathTower9CPlayData18generateRewardItemEiiRKNS0_11CDungeonMgrEjjP6CParty+0x55c>
 84624fe:	89 d3                	mov    %edx,%ebx
 8462500:	89 c6                	mov    %eax,%esi
 8462502:	8d 85 c0 fe ff ff    	lea    -0x140(%ebp),%eax
 8462508:	89 04 24             	mov    %eax,(%esp)
 846250b:	e8 e0 85 ce ff       	call   814aaf0 <_ZN8WongWork19stGenerateRefData_tD1Ev>
 8462510:	89 f0                	mov    %esi,%eax
 8462512:	89 da                	mov    %ebx,%edx
 8462514:	89 04 24             	mov    %eax,(%esp)
 8462517:	e8 34 12 68 00       	call   8ae3750 <_Unwind_Resume>
 846251c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 846251f:	3b 45 10             	cmp    0x10(%ebp),%eax
 8462522:	0f 9c c0             	setl   %al
 8462525:	84 c0                	test   %al,%al
 8462527:	0f 85 c2 fa ff ff    	jne    8461fef <_ZN8WongWork11CDeathTower9CPlayData18generateRewardItemEiiRKNS0_11CDungeonMgrEjjP6CParty+0x2f>
 846252d:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8462530:	83 c4 00             	add    $0x0,%esp
 8462533:	5b                   	pop    %ebx
 8462534:	5e                   	pop    %esi
 8462535:	5f                   	pop    %edi
 8462536:	5d                   	pop    %ebp
 8462537:	c3                   	ret

```

```c
// WongWork::CDeathTower::CPlayData::generateRewardItem @ 0x8461fc0

/* WongWork::CDeathTower::CPlayData::generateRewardItem(int, int, WongWork::CDeathTower::CDungeonMgr
   const&, unsigned int, unsigned int, CParty*) */

void __thiscall
WongWork::CDeathTower::CPlayData::generateRewardItem
          (CPlayData *this,int param_1,int param_2,CDungeonMgr *param_3,uint param_4,uint param_5,
          CParty *param_6)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  CDataManager *pCVar5;
  CItemGeneratorMgr *pCVar6;
  int *piVar7;
  CDungeon *this_00;
  Inven_Item *pIVar8;
  int iVar9;
  undefined4 *puVar10;
  CUser *pCVar11;
  stGenerateRefData_t local_144 [52];
  undefined1 local_110;
  undefined1 local_10f;
  undefined1 local_10e;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_f9;
  byte bStack_f8;
  undefined2 uStack_f7;
  undefined2 local_f5;
  undefined2 uStack_f3;
  undefined4 local_f1;
  undefined4 local_ed;
  undefined4 local_e9;
  undefined4 local_e5;
  undefined4 local_e1;
  undefined4 local_dd;
  undefined4 local_d9;
  undefined4 local_d5;
  undefined4 local_d1;
  undefined4 local_cd;
  undefined4 local_c9;
  undefined4 local_c5;
  undefined4 local_c1;
  undefined1 local_bd;
  stGenerateResult_t local_bc [48];
  stGenerateResult_t local_8c [12];
  CLuckPoint aCStack_80 [36];
  undefined4 local_5c [7];
  undefined4 local_40;
  undefined4 local_3c;
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_38 [4];
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_34 [4];
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_30 [4];
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_2c [4];
  int local_28;
  uint local_24;
  CItem *local_20;
  
  *(int *)(this + param_1 * 0x268 + 0x18) = param_2;
  for (local_28 = 0; local_28 < param_2; local_28 = local_28 + 1) {
    stGenerateRefData_t::stGenerateRefData_t(local_144);
                    /* try { // try from 08462006 to 0846200a has its CatchHandler @ 084624fe */
    stGenerateResult_t::stGenerateResult_t(local_8c);
    if (param_6 != (CParty *)0x0) {
                    /* try { // try from 0846202c to 084620af has its CatchHandler @ 084624c2 */
      CParty::GetLuckPoint(param_6,aCStack_80,false);
    }
    local_24 = get_rand_int(1000);
    iVar3 = G_CDataManager();
    uVar4 = *(int *)(iVar3 + 0x5e20) * param_5;
    if (uVar4 < local_24 || uVar4 - local_24 == 0) {
                    /* try { // try from 0846229f to 084624ba has its CatchHandler @ 084624c2 */
      iVar3 = G_CDataManager();
      uVar4 = *(int *)(iVar3 + 0x5e24) * param_5;
      if (local_24 <= uVar4 && uVar4 - local_24 != 0) {
        local_10f = 0;
        local_10c = 0x3f800000;
        local_110 = (char)param_4;
        local_104 = CDungeonMgr::getDungeon(param_3);
        local_108 = 0;
        pCVar5 = (CDataManager *)G_CDataManager();
        pCVar6 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar5);
        piVar7 = (int *)CItemGeneratorMgr::getGenerator(pCVar6,2);
        (**(code **)(*piVar7 + 8))(piVar7,local_144,local_8c);
        cVar2 = std::vector<Inven_Item,std::allocator<Inven_Item>>::empty();
        if (cVar2 != '\x01') {
          std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
          pIVar8 = (Inven_Item *)
                   __gnu_cxx::
                   __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                   ::operator*(local_30);
          Inven_Item::setCopy((Inven_Item *)(this + local_28 * 0x3d + param_1 * 0x268 + 0x1c),pIVar8
                             );
          std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
          puVar10 = (undefined4 *)
                    __gnu_cxx::
                    __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                    ::operator*(local_2c);
          uVar1 = *puVar10;
          local_f9 = (undefined1)uVar1;
          bStack_f8 = (byte)((uint)uVar1 >> 8);
          uStack_f7 = (undefined2)((uint)uVar1 >> 0x10);
          local_f5 = (undefined2)puVar10[1];
          uStack_f3 = (undefined2)((uint)puVar10[1] >> 0x10);
          local_f1 = puVar10[2];
          local_ed = puVar10[3];
          local_e9 = puVar10[4];
          local_e5 = puVar10[5];
          local_e1 = puVar10[6];
          local_dd = puVar10[7];
          local_d9 = puVar10[8];
          local_d5 = puVar10[9];
          local_d1 = puVar10[10];
          local_cd = puVar10[0xb];
          local_c9 = puVar10[0xc];
          local_c5 = puVar10[0xd];
          local_c1 = puVar10[0xe];
          local_bd = *(undefined1 *)(puVar10 + 0xf);
          iVar3 = CONCAT22(local_f5,uStack_f7);
          iVar9 = G_CDataManager();
          local_20 = (CItem *)CItemList::find_item(*(CItemList **)(iVar9 + 0xc),iVar3);
          if (local_20 != (CItem *)0x0) {
            iVar3 = CItem::get_grade(local_20);
            iVar9 = CItem::get_rarity(local_20);
            uVar4 = (uint)bStack_f8;
            pCVar11 = (CUser *)CParty::get_user(param_6,param_1);
            CLuckPoint::UseLuckPoint(pCVar11,uVar4,iVar9,iVar3);
          }
        }
      }
    }
    else {
      local_10f = 0;
      local_10e = 1;
      local_10c = 1;
      local_108 = 0x10001;
      local_104 = 0x10001;
      local_110 = (char)param_4;
      stGenerateResult_t::stGenerateResult_t(local_bc);
                    /* try { // try from 084620b0 to 0846220f has its CatchHandler @ 08462284 */
      pCVar5 = (CDataManager *)G_CDataManager();
      pCVar6 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar5);
      piVar7 = (int *)CItemGeneratorMgr::getGenerator(pCVar6,2);
      (**(code **)(*piVar7 + 0xc))(piVar7,local_144,local_bc);
      if (param_6 != (CParty *)0x0) {
        std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
        QuickParty::RewardData_Param::RewardData_Param((RewardData_Param *)&local_40,param_6);
        this_00 = (CDungeon *)CDungeonMgr::getDungeon(param_3);
        local_3c = CDungeon::get_index(this_00);
        QuickParty::RewardData_Result::RewardData_Result((RewardData_Result *)local_5c);
        iVar3 = __gnu_cxx::
                __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
                operator*(local_38);
        local_5c[0] = *(undefined4 *)(iVar3 + 7);
        CParty::set_basic_reward(param_6,0xb,local_40,local_3c,local_5c);
        iVar3 = __gnu_cxx::
                __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
                operator*(local_38);
        *(undefined4 *)(iVar3 + 7) = local_5c[0];
      }
      std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
      pIVar8 = (Inven_Item *)
               __gnu_cxx::
               __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
               operator*(local_34);
      Inven_Item::setCopy((Inven_Item *)(this + local_28 * 0x3d + param_1 * 0x268 + 0x1c),pIVar8);
      iVar3 = Inven_Item::get_add_info
                        ((Inven_Item *)(this + local_28 * 0x3d + param_1 * 0x268 + 0x1c));
      iVar9 = G_CDataManager();
      Inven_Item::set_add_info
                ((Inven_Item *)(this + local_28 * 0x3d + param_1 * 0x268 + 0x1c),
                 (int)ROUND(*(float *)(iVar9 + 0x5e2c) * (float)iVar3));
                    /* try { // try from 0846227a to 0846227e has its CatchHandler @ 084624c2 */
      stGenerateResult_t::~stGenerateResult_t(local_bc);
    }
                    /* try { // try from 084624e3 to 084624e7 has its CatchHandler @ 084624fe */
    stGenerateResult_t::~stGenerateResult_t(local_8c);
    stGenerateRefData_t::~stGenerateRefData_t(local_144);
  }
  return;
}

```

---

## makeStartMemberInfo

```asm
// === 08461d02 WongWork::CDeathTower::CPlayData::makeStartMemberInfo  [0x08461d02-0x8461e49] ===
 8461d02:	55                   	push   %ebp
 8461d03:	89 e5                	mov    %esp,%ebp
 8461d05:	53                   	push   %ebx
 8461d06:	83 ec 24             	sub    $0x24,%esp
 8461d09:	8b 45 08             	mov    0x8(%ebp),%eax
 8461d0c:	05 cc 09 00 00       	add    $0x9cc,%eax
 8461d11:	c7 44 24 08 5c 00 00 	movl   $0x5c,0x8(%esp)
 8461d18:	00 
 8461d19:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8461d20:	00 
 8461d21:	89 04 24             	mov    %eax,(%esp)
 8461d24:	e8 97 bf c1 ff       	call   807dcc0 <memset@plt>
 8461d29:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8461d30:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8461d37:	e9 e3 00 00 00       	jmp    8461e1f <_ZN8WongWork11CDeathTower9CPlayData19makeStartMemberInfoEP6CParty+0x11d>
 8461d3c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8461d43:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8461d46:	89 44 24 04          	mov    %eax,0x4(%esp)
 8461d4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8461d4d:	89 04 24             	mov    %eax,(%esp)
 8461d50:	e8 0f 3a ce ff       	call   8145764 <_ZN6CParty8get_userEi>
 8461d55:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8461d58:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8461d5c:	74 19                	je     8461d77 <_ZN8WongWork11CDeathTower9CPlayData19makeStartMemberInfoEP6CParty+0x75>
 8461d5e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8461d61:	89 44 24 04          	mov    %eax,0x4(%esp)
 8461d65:	8b 45 0c             	mov    0xc(%ebp),%eax
 8461d68:	89 04 24             	mov    %eax,(%esp)
 8461d6b:	e8 f8 3a ce ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8461d70:	83 f0 01             	xor    $0x1,%eax
 8461d73:	84 c0                	test   %al,%al
 8461d75:	74 07                	je     8461d7e <_ZN8WongWork11CDeathTower9CPlayData19makeStartMemberInfoEP6CParty+0x7c>
 8461d77:	b8 01 00 00 00       	mov    $0x1,%eax
 8461d7c:	eb 05                	jmp    8461d83 <_ZN8WongWork11CDeathTower9CPlayData19makeStartMemberInfoEP6CParty+0x81>
 8461d7e:	b8 00 00 00 00       	mov    $0x0,%eax
 8461d83:	84 c0                	test   %al,%al
 8461d85:	0f 85 8f 00 00 00    	jne    8461e1a <_ZN8WongWork11CDeathTower9CPlayData19makeStartMemberInfoEP6CParty+0x118>
 8461d8b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8461d8e:	89 04 24             	mov    %eax,(%esp)
 8461d91:	e8 92 f2 c9 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8461d96:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8461d99:	6b d2 17             	imul   $0x17,%edx,%edx
 8461d9c:	81 c2 c0 09 00 00    	add    $0x9c0,%edx
 8461da2:	03 55 08             	add    0x8(%ebp),%edx
 8461da5:	83 c2 0c             	add    $0xc,%edx
 8461da8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8461dac:	89 14 24             	mov    %edx,(%esp)
 8461daf:	e8 3c c1 c1 ff       	call   807def0 <strcpy@plt>
 8461db4:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 8461db7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8461dba:	89 04 24             	mov    %eax,(%esp)
 8461dbd:	e8 f6 84 c7 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8461dc2:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8461dc5:	6b d3 17             	imul   $0x17,%ebx,%edx
 8461dc8:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8461dcb:	81 c2 d0 09 00 00    	add    $0x9d0,%edx
 8461dd1:	88 42 10             	mov    %al,0x10(%edx)
 8461dd4:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 8461dd7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8461dda:	89 04 24             	mov    %eax,(%esp)
 8461ddd:	e8 3e c1 c9 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8461de2:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8461de5:	6b d3 17             	imul   $0x17,%ebx,%edx
 8461de8:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8461deb:	81 c2 d0 09 00 00    	add    $0x9d0,%edx
 8461df1:	88 42 11             	mov    %al,0x11(%edx)
 8461df4:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 8461df7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8461dfa:	89 04 24             	mov    %eax,(%esp)
 8461dfd:	e8 1a 56 cf ff       	call   815741c <_ZNK15CUserCharacInfo20getCurCharacGrowTypeEv>
 8461e02:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8461e05:	6b d3 17             	imul   $0x17,%ebx,%edx
 8461e08:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8461e0b:	81 c2 d0 09 00 00    	add    $0x9d0,%edx
 8461e11:	88 42 12             	mov    %al,0x12(%edx)
 8461e14:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8461e18:	eb 01                	jmp    8461e1b <_ZN8WongWork11CDeathTower9CPlayData19makeStartMemberInfoEP6CParty+0x119>
 8461e1a:	90                   	nop
 8461e1b:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8461e1f:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 8461e23:	0f 9e c0             	setle  %al
 8461e26:	84 c0                	test   %al,%al
 8461e28:	0f 85 0e ff ff ff    	jne    8461d3c <_ZN8WongWork11CDeathTower9CPlayData19makeStartMemberInfoEP6CParty+0x3a>
 8461e2e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8461e31:	89 04 24             	mov    %eax,(%esp)
 8461e34:	e8 31 83 13 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 8461e39:	89 c2                	mov    %eax,%edx
 8461e3b:	8b 45 08             	mov    0x8(%ebp),%eax
 8461e3e:	89 90 c8 09 00 00    	mov    %edx,0x9c8(%eax)
 8461e44:	83 c4 24             	add    $0x24,%esp
 8461e47:	5b                   	pop    %ebx
 8461e48:	5d                   	pop    %ebp
 8461e49:	c3                   	ret

```

```c
// WongWork::CDeathTower::CPlayData::makeStartMemberInfo @ 0x8461d02

/* WongWork::CDeathTower::CPlayData::makeStartMemberInfo(CParty*) */

void __thiscall
WongWork::CDeathTower::CPlayData::makeStartMemberInfo(CPlayData *this,CParty *param_1)

{
  bool bVar1;
  char cVar2;
  CPlayData CVar3;
  CUserCharacInfo *this_00;
  char *__src;
  undefined4 uVar4;
  int local_18;
  int local_14;
  
  memset(this + 0x9cc,0,0x5c);
  local_18 = 0;
  local_14 = 0;
  do {
    if (3 < local_14) {
      uVar4 = CParty::get_member_count(param_1);
      *(undefined4 *)(this + 0x9c8) = uVar4;
      return;
    }
    this_00 = (CUserCharacInfo *)CParty::get_user(param_1,local_14);
    if (this_00 == (CUserCharacInfo *)0x0) {
LAB_08461d77:
      bVar1 = true;
    }
    else {
      cVar2 = CParty::checkValidUser(param_1,local_14);
      if (cVar2 != '\x01') goto LAB_08461d77;
      bVar1 = false;
    }
    if (!bVar1) {
      __src = (char *)CUserCharacInfo::getCurCharacName(this_00);
      strcpy((char *)(this + local_18 * 0x17 + 0x9cc),__src);
      CVar3 = (CPlayData)CUserCharacInfo::get_charac_level(this_00);
      this[local_18 * 0x17 + 0x9e0] = CVar3;
      CVar3 = (CPlayData)CUserCharacInfo::get_charac_job(this_00);
      this[local_18 * 0x17 + 0x9e1] = CVar3;
      CVar3 = (CPlayData)CUserCharacInfo::getCurCharacGrowType(this_00);
      this[local_18 * 0x17 + 0x9e2] = CVar3;
      local_18 = local_18 + 1;
    }
    local_14 = local_14 + 1;
  } while( true );
}

```

---

## reset

```asm
// === 08461f18 WongWork::CDeathTower::CPlayData::reset  [0x08461f18-0x8461fbf] ===
 8461f18:	55                   	push   %ebp
 8461f19:	89 e5                	mov    %esp,%ebp
 8461f1b:	83 ec 28             	sub    $0x28,%esp
 8461f1e:	8b 45 08             	mov    0x8(%ebp),%eax
 8461f21:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 8461f28:	8b 45 08             	mov    0x8(%ebp),%eax
 8461f2b:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 8461f32:	8b 45 08             	mov    0x8(%ebp),%eax
 8461f35:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8461f3b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8461f42:	eb 48                	jmp    8461f8c <_ZN8WongWork11CDeathTower9CPlayData5resetEv+0x74>
 8461f44:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8461f47:	8b 55 08             	mov    0x8(%ebp),%edx
 8461f4a:	c6 44 02 04 00       	movb   $0x0,0x4(%edx,%eax,1)
 8461f4f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8461f52:	8b 55 08             	mov    0x8(%ebp),%edx
 8461f55:	c6 44 02 08 00       	movb   $0x0,0x8(%edx,%eax,1)
 8461f5a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8461f5d:	69 c0 68 02 00 00    	imul   $0x268,%eax,%eax
 8461f63:	83 c0 10             	add    $0x10,%eax
 8461f66:	03 45 08             	add    0x8(%ebp),%eax
 8461f69:	83 c0 08             	add    $0x8,%eax
 8461f6c:	89 04 24             	mov    %eax,(%esp)
 8461f6f:	e8 40 fd ff ff       	call   8461cb4 <_ZN8WongWork11CDeathTower9CPlayData14stRewardItem_t5resetEv>
 8461f74:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8461f77:	8b 45 08             	mov    0x8(%ebp),%eax
 8461f7a:	81 c2 6c 02 00 00    	add    $0x26c,%edx
 8461f80:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 8461f87:	00 
 8461f88:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8461f8c:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 8461f90:	0f 9e c0             	setle  %al
 8461f93:	84 c0                	test   %al,%al
 8461f95:	75 ad                	jne    8461f44 <_ZN8WongWork11CDeathTower9CPlayData5resetEv+0x2c>
 8461f97:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8461f9e:	eb 12                	jmp    8461fb2 <_ZN8WongWork11CDeathTower9CPlayData5resetEv+0x9a>
 8461fa0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8461fa3:	8b 55 08             	mov    0x8(%ebp),%edx
 8461fa6:	c6 84 02 28 0a 00 00 	movb   $0x0,0xa28(%edx,%eax,1)
 8461fad:	00 
 8461fae:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8461fb2:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 8461fb6:	0f 9e c0             	setle  %al
 8461fb9:	84 c0                	test   %al,%al
 8461fbb:	75 e3                	jne    8461fa0 <_ZN8WongWork11CDeathTower9CPlayData5resetEv+0x88>
 8461fbd:	c9                   	leave
 8461fbe:	c3                   	ret
 8461fbf:	90                   	nop

```

```c
// WongWork::CDeathTower::CPlayData::reset @ 0x8461f18

/* WongWork::CDeathTower::CPlayData::reset() */

void __thiscall WongWork::CDeathTower::CPlayData::reset(CPlayData *this)

{
  int local_14;
  int local_10;
  
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)this = 0;
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    this[local_14 + 4] = (CPlayData)0x0;
    this[local_14 + 8] = (CPlayData)0x0;
    stRewardItem_t::reset((stRewardItem_t *)(this + local_14 * 0x268 + 0x18));
    *(undefined4 *)(this + (local_14 + 0x26c) * 4 + 8) = 0;
  }
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    this[local_10 + 0xa28] = (CPlayData)0x0;
  }
  return;
}

```

---

## resetMemberReady

```asm
// === 08461ee6 WongWork::CDeathTower::CPlayData::resetMemberReady  [0x08461ee6-0x8461f17] ===
 8461ee6:	55                   	push   %ebp
 8461ee7:	89 e5                	mov    %esp,%ebp
 8461ee9:	83 ec 10             	sub    $0x10,%esp
 8461eec:	8b 45 08             	mov    0x8(%ebp),%eax
 8461eef:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
 8461ef3:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 8461efa:	eb 0f                	jmp    8461f0b <_ZN8WongWork11CDeathTower9CPlayData16resetMemberReadyEv+0x25>
 8461efc:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8461eff:	8b 55 08             	mov    0x8(%ebp),%edx
 8461f02:	c6 44 02 08 00       	movb   $0x0,0x8(%edx,%eax,1)
 8461f07:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 8461f0b:	83 7d fc 03          	cmpl   $0x3,-0x4(%ebp)
 8461f0f:	0f 9e c0             	setle  %al
 8461f12:	84 c0                	test   %al,%al
 8461f14:	75 e6                	jne    8461efc <_ZN8WongWork11CDeathTower9CPlayData16resetMemberReadyEv+0x16>
 8461f16:	c9                   	leave
 8461f17:	c3                   	ret

```

```c
// WongWork::CDeathTower::CPlayData::resetMemberReady @ 0x8461ee6

/* WongWork::CDeathTower::CPlayData::resetMemberReady() */

void __thiscall WongWork::CDeathTower::CPlayData::resetMemberReady(CPlayData *this)

{
  int local_8;
  
  this[0xc] = (CPlayData)0x0;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    this[local_8 + 8] = (CPlayData)0x0;
  }
  return;
}

```

