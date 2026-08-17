# QuickParty__CQuickPartySystemManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 18

---

## CQuickPartySystemManager

```asm
// === 08269bb6 QuickParty::CQuickPartySystemManager::CQuickPartySystemManager  [0x08269bb6-0x8269bf7] ===
 8269bb6:	55                   	push   %ebp
 8269bb7:	89 e5                	mov    %esp,%ebp
 8269bb9:	56                   	push   %esi
 8269bba:	53                   	push   %ebx
 8269bbb:	83 ec 10             	sub    $0x10,%esp
 8269bbe:	8b 45 08             	mov    0x8(%ebp),%eax
 8269bc1:	89 04 24             	mov    %eax,(%esp)
 8269bc4:	e8 ab 1e 00 00       	call   826ba74 <_ZNSt3mapIN10QuickParty23STQuickPartyPoolMap_KeyENS0_24STQuickPartyPoolMap_DataESt4lessIS1_ESaISt4pairIKS1_S2_EEEC1Ev>
 8269bc9:	8b 45 08             	mov    0x8(%ebp),%eax
 8269bcc:	89 04 24             	mov    %eax,(%esp)
 8269bcf:	e8 1a 1f 00 00       	call   826baee <_ZNSt3mapIN10QuickParty23STQuickPartyPoolMap_KeyENS0_24STQuickPartyPoolMap_DataESt4lessIS1_ESaISt4pairIKS1_S2_EEE5clearEv>
 8269bd4:	eb 1b                	jmp    8269bf1 <_ZN10QuickParty24CQuickPartySystemManagerC1Ev+0x3b>
 8269bd6:	89 d3                	mov    %edx,%ebx
 8269bd8:	89 c6                	mov    %eax,%esi
 8269bda:	8b 45 08             	mov    0x8(%ebp),%eax
 8269bdd:	89 04 24             	mov    %eax,(%esp)
 8269be0:	e8 d9 1d 00 00       	call   826b9be <_ZNSt3mapIN10QuickParty23STQuickPartyPoolMap_KeyENS0_24STQuickPartyPoolMap_DataESt4lessIS1_ESaISt4pairIKS1_S2_EEED1Ev>
 8269be5:	89 f0                	mov    %esi,%eax
 8269be7:	89 da                	mov    %ebx,%edx
 8269be9:	89 04 24             	mov    %eax,(%esp)
 8269bec:	e8 5f 9b 87 00       	call   8ae3750 <_Unwind_Resume>
 8269bf1:	83 c4 10             	add    $0x10,%esp
 8269bf4:	5b                   	pop    %ebx
 8269bf5:	5e                   	pop    %esi
 8269bf6:	5d                   	pop    %ebp
 8269bf7:	c3                   	ret

```

```c
// QuickParty::CQuickPartySystemManager::CQuickPartySystemManager @ 0x8269bb6

/* QuickParty::CQuickPartySystemManager::CQuickPartySystemManager() */

void __thiscall
QuickParty::CQuickPartySystemManager::CQuickPartySystemManager(CQuickPartySystemManager *this)

{
  std::
  map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
  ::map((map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
         *)this);
                    /* try { // try from 08269bcf to 08269bd3 has its CatchHandler @ 08269bd6 */
  std::
  map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
  ::clear((map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
           *)this);
  return;
}

```

---

## cancel_quick_party

```asm
// === 0826a386 QuickParty::CQuickPartySystemManager::cancel_quick_party  [0x0826a386-0x826a761] ===
 826a386:	55                   	push   %ebp
 826a387:	89 e5                	mov    %esp,%ebp
 826a389:	53                   	push   %ebx
 826a38a:	83 ec 54             	sub    $0x54,%esp
 826a38d:	8b 45 10             	mov    0x10(%ebp),%eax
 826a390:	88 45 d4             	mov    %al,-0x2c(%ebp)
 826a393:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 826a397:	74 10                	je     826a3a9 <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser+0x23>
 826a399:	8b 45 0c             	mov    0xc(%ebp),%eax
 826a39c:	89 04 24             	mov    %eax,(%esp)
 826a39f:	e8 84 35 fc ff       	call   822d928 <_ZN6CParty21get_quick_party_indexEv>
 826a3a4:	83 f8 ff             	cmp    $0xffffffff,%eax
 826a3a7:	75 07                	jne    826a3b0 <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser+0x2a>
 826a3a9:	b8 01 00 00 00       	mov    $0x1,%eax
 826a3ae:	eb 05                	jmp    826a3b5 <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser+0x2f>
 826a3b0:	b8 00 00 00 00       	mov    $0x0,%eax
 826a3b5:	84 c0                	test   %al,%al
 826a3b7:	0f 84 8e 00 00 00    	je     826a44b <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser+0xc5>
 826a3bd:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 826a3c1:	75 43                	jne    826a406 <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser+0x80>
 826a3c3:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 826a3c7:	74 3d                	je     826a406 <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser+0x80>
 826a3c9:	8b 45 14             	mov    0x14(%ebp),%eax
 826a3cc:	89 04 24             	mov    %eax,(%esp)
 826a3cf:	e8 7a 18 e6 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 826a3d4:	89 44 24 14          	mov    %eax,0x14(%esp)
 826a3d8:	c7 44 24 10 10 54 bf 	movl   $0x8bf5410,0x10(%esp)
 826a3df:	08 
 826a3e0:	c7 44 24 0c e3 01 00 	movl   $0x1e3,0xc(%esp)
 826a3e7:	00 
 826a3e8:	c7 44 24 08 00 66 bf 	movl   $0x8bf6600,0x8(%esp)
 826a3ef:	08 
 826a3f0:	c7 44 24 04 01 54 bf 	movl   $0x8bf5401,0x4(%esp)
 826a3f7:	08 
 826a3f8:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 826a3ff:	e8 06 98 86 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 826a404:	eb 3b                	jmp    826a441 <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser+0xbb>
 826a406:	8b 45 0c             	mov    0xc(%ebp),%eax
 826a409:	89 04 24             	mov    %eax,(%esp)
 826a40c:	e8 17 35 fc ff       	call   822d928 <_ZN6CParty21get_quick_party_indexEv>
 826a411:	89 44 24 14          	mov    %eax,0x14(%esp)
 826a415:	c7 44 24 10 38 54 bf 	movl   $0x8bf5438,0x10(%esp)
 826a41c:	08 
 826a41d:	c7 44 24 0c e5 01 00 	movl   $0x1e5,0xc(%esp)
 826a424:	00 
 826a425:	c7 44 24 08 00 66 bf 	movl   $0x8bf6600,0x8(%esp)
 826a42c:	08 
 826a42d:	c7 44 24 04 01 54 bf 	movl   $0x8bf5401,0x4(%esp)
 826a434:	08 
 826a435:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 826a43c:	e8 c9 97 86 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 826a441:	b8 00 00 00 00       	mov    $0x0,%eax
 826a446:	e9 11 03 00 00       	jmp    826a75c <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser+0x3d6>
 826a44b:	8b 45 0c             	mov    0xc(%ebp),%eax
 826a44e:	89 04 24             	mov    %eax,(%esp)
 826a451:	e8 d2 34 fc ff       	call   822d928 <_ZN6CParty21get_quick_party_indexEv>
 826a456:	89 c3                	mov    %eax,%ebx
 826a458:	e8 31 1d e6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 826a45d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 826a461:	89 04 24             	mov    %eax,(%esp)
 826a464:	e8 09 b1 02 00       	call   8295572 <_ZN12CGameManager13GetQuickPartyEi>
 826a469:	89 45 f0             	mov    %eax,-0x10(%ebp)
 826a46c:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 826a470:	75 36                	jne    826a4a8 <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser+0x122>
 826a472:	c7 44 24 10 20 55 bf 	movl   $0x8bf5520,0x10(%esp)
 826a479:	08 
 826a47a:	c7 44 24 0c ec 01 00 	movl   $0x1ec,0xc(%esp)
 826a481:	00 
 826a482:	c7 44 24 08 00 66 bf 	movl   $0x8bf6600,0x8(%esp)
 826a489:	08 
 826a48a:	c7 44 24 04 01 54 bf 	movl   $0x8bf5401,0x4(%esp)
 826a491:	08 
 826a492:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 826a499:	e8 6c 97 86 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 826a49e:	b8 00 00 00 00       	mov    $0x0,%eax
 826a4a3:	e9 b4 02 00 00       	jmp    826a75c <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser+0x3d6>
 826a4a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 826a4ab:	89 04 24             	mov    %eax,(%esp)
 826a4ae:	e8 69 b3 ed ff       	call   814581c <_ZN6CParty12GetEPLPStateEv>
 826a4b3:	3c 01                	cmp    $0x1,%al
 826a4b5:	7e 0d                	jle    826a4c4 <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser+0x13e>
 826a4b7:	80 7d d4 00          	cmpb   $0x0,-0x2c(%ebp)
 826a4bb:	74 07                	je     826a4c4 <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser+0x13e>
 826a4bd:	b8 01 00 00 00       	mov    $0x1,%eax
 826a4c2:	eb 05                	jmp    826a4c9 <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser+0x143>
 826a4c4:	b8 00 00 00 00       	mov    $0x0,%eax
 826a4c9:	84 c0                	test   %al,%al
 826a4cb:	74 49                	je     826a516 <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser+0x190>
 826a4cd:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 826a4d4:	ff 
 826a4d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 826a4d8:	89 04 24             	mov    %eax,(%esp)
 826a4db:	e8 48 b3 ed ff       	call   8145828 <_ZN6CParty18SetSelectedEPLPCmdEc>
 826a4e0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826a4e3:	89 04 24             	mov    %eax,(%esp)
 826a4e6:	e8 ad 12 00 00       	call   826b798 <_ZN10QuickParty11CQuickParty17get_dungeon_indexEv>
 826a4eb:	98                   	cwtl
 826a4ec:	8b 55 0c             	mov    0xc(%ebp),%edx
 826a4ef:	81 c2 24 0b 00 00    	add    $0xb24,%edx
 826a4f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 826a4f9:	89 14 24             	mov    %edx,(%esp)
 826a4fc:	e8 a3 05 0a 00       	call   830aaa4 <_ZN13CBattle_Field24getRandomBuffDungeonTypeEi>
 826a501:	8b 55 0c             	mov    0xc(%ebp),%edx
 826a504:	81 c2 24 0b 00 00    	add    $0xb24,%edx
 826a50a:	89 44 24 04          	mov    %eax,0x4(%esp)
 826a50e:	89 14 24             	mov    %edx,(%esp)
 826a511:	e8 64 07 0a 00       	call   830ac7a <_ZN13CBattle_Field19setEplpWaitingTimerEN10QuickParty17RandomBuffDungeonE>
 826a516:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826a519:	89 04 24             	mov    %eax,(%esp)
 826a51c:	e8 a9 9f fc ff       	call   82344ca <_ZN10QuickParty23STQuickPartyPoolMap_KeyC1Ev>
 826a521:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826a524:	89 04 24             	mov    %eax,(%esp)
 826a527:	e8 6c 12 00 00       	call   826b798 <_ZN10QuickParty11CQuickParty17get_dungeon_indexEv>
 826a52c:	66 89 45 e8          	mov    %ax,-0x18(%ebp)
 826a530:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826a533:	89 04 24             	mov    %eax,(%esp)
 826a536:	e8 79 12 00 00       	call   826b7b4 <_ZN10QuickParty11CQuickParty16get_dungeon_diffEv>
 826a53b:	88 45 ea             	mov    %al,-0x16(%ebp)
 826a53e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826a541:	89 44 24 08          	mov    %eax,0x8(%esp)
 826a545:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826a548:	89 44 24 04          	mov    %eax,0x4(%esp)
 826a54c:	8b 45 08             	mov    0x8(%ebp),%eax
 826a54f:	89 04 24             	mov    %eax,(%esp)
 826a552:	e8 43 05 00 00       	call   826aa9a <_ZN10QuickParty24CQuickPartySystemManager26remove_quick_party_in_poolEPNS_11CQuickPartyERKNS_23STQuickPartyPoolMap_KeyE>
 826a557:	83 f0 01             	xor    $0x1,%eax
 826a55a:	84 c0                	test   %al,%al
 826a55c:	74 0a                	je     826a568 <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser+0x1e2>
 826a55e:	b8 00 00 00 00       	mov    $0x0,%eax
 826a563:	e9 f4 01 00 00       	jmp    826a75c <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser+0x3d6>
 826a568:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 826a56c:	83 f0 01             	xor    $0x1,%eax
 826a56f:	84 c0                	test   %al,%al
 826a571:	74 13                	je     826a586 <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser+0x200>
 826a573:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 826a57a:	00 
 826a57b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826a57e:	89 04 24             	mov    %eax,(%esp)
 826a581:	e8 6a 12 00 00       	call   826b7f0 <_ZN10QuickParty11CQuickParty28set_change_quick_party_countEb>
 826a586:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 826a58d:	8b 45 0c             	mov    0xc(%ebp),%eax
 826a590:	89 04 24             	mov    %eax,(%esp)
 826a593:	e8 d2 fb 32 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 826a598:	83 f8 01             	cmp    $0x1,%eax
 826a59b:	74 06                	je     826a5a3 <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser+0x21d>
 826a59d:	80 7d d4 00          	cmpb   $0x0,-0x2c(%ebp)
 826a5a1:	74 07                	je     826a5aa <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser+0x224>
 826a5a3:	b8 01 00 00 00       	mov    $0x1,%eax
 826a5a8:	eb 05                	jmp    826a5af <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser+0x229>
 826a5aa:	b8 00 00 00 00       	mov    $0x0,%eax
 826a5af:	84 c0                	test   %al,%al
 826a5b1:	74 52                	je     826a605 <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser+0x27f>
 826a5b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 826a5b6:	89 04 24             	mov    %eax,(%esp)
 826a5b9:	e8 88 32 fc ff       	call   822d846 <_ZN6CParty13GetPartyIndexEv>
 826a5be:	89 44 24 04          	mov    %eax,0x4(%esp)
 826a5c2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826a5c5:	89 04 24             	mov    %eax,(%esp)
 826a5c8:	e8 41 f2 ff ff       	call   826980e <_ZN10QuickParty11CQuickParty18delete_party_indexEi>
 826a5cd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826a5d0:	89 04 24             	mov    %eax,(%esp)
 826a5d3:	e8 e6 f2 ff ff       	call   82698be <_ZN10QuickParty11CQuickParty21get_quick_party_countEv>
 826a5d8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 826a5db:	8b 45 0c             	mov    0xc(%ebp),%eax
 826a5de:	89 04 24             	mov    %eax,(%esp)
 826a5e1:	e8 fe 0d 33 00       	call   859b3e4 <_ZN6CParty21init_quick_party_dataEv>
 826a5e6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 826a5ea:	0f 8f 99 00 00 00    	jg     826a689 <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser+0x303>
 826a5f0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826a5f3:	89 04 24             	mov    %eax,(%esp)
 826a5f6:	e8 cf ef ff ff       	call   82695ca <_ZN10QuickParty11CQuickParty7destroyEv>
 826a5fb:	b8 01 00 00 00       	mov    $0x1,%eax
 826a600:	e9 57 01 00 00       	jmp    826a75c <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser+0x3d6>
 826a605:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826a608:	89 04 24             	mov    %eax,(%esp)
 826a60b:	e8 ae f2 ff ff       	call   82698be <_ZN10QuickParty11CQuickParty21get_quick_party_countEv>
 826a610:	83 e8 01             	sub    $0x1,%eax
 826a613:	89 45 f4             	mov    %eax,-0xc(%ebp)
 826a616:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 826a61a:	7f 6d                	jg     826a689 <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser+0x303>
 826a61c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826a61f:	89 44 24 14          	mov    %eax,0x14(%esp)
 826a623:	c7 44 24 10 4c 55 bf 	movl   $0x8bf554c,0x10(%esp)
 826a62a:	08 
 826a62b:	c7 44 24 0c 16 02 00 	movl   $0x216,0xc(%esp)
 826a632:	00 
 826a633:	c7 44 24 08 00 66 bf 	movl   $0x8bf6600,0x8(%esp)
 826a63a:	08 
 826a63b:	c7 44 24 04 01 54 bf 	movl   $0x8bf5401,0x4(%esp)
 826a642:	08 
 826a643:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 826a64a:	e8 bb 95 86 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 826a64f:	8b 45 0c             	mov    0xc(%ebp),%eax
 826a652:	89 04 24             	mov    %eax,(%esp)
 826a655:	e8 ec 31 fc ff       	call   822d846 <_ZN6CParty13GetPartyIndexEv>
 826a65a:	89 44 24 04          	mov    %eax,0x4(%esp)
 826a65e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826a661:	89 04 24             	mov    %eax,(%esp)
 826a664:	e8 a5 f1 ff ff       	call   826980e <_ZN10QuickParty11CQuickParty18delete_party_indexEi>
 826a669:	8b 45 0c             	mov    0xc(%ebp),%eax
 826a66c:	89 04 24             	mov    %eax,(%esp)
 826a66f:	e8 70 0d 33 00       	call   859b3e4 <_ZN6CParty21init_quick_party_dataEv>
 826a674:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826a677:	89 04 24             	mov    %eax,(%esp)
 826a67a:	e8 4b ef ff ff       	call   82695ca <_ZN10QuickParty11CQuickParty7destroyEv>
 826a67f:	b8 00 00 00 00       	mov    $0x0,%eax
 826a684:	e9 d3 00 00 00       	jmp    826a75c <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser+0x3d6>
 826a689:	8b 55 08             	mov    0x8(%ebp),%edx
 826a68c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 826a68f:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 826a692:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 826a696:	89 54 24 04          	mov    %edx,0x4(%esp)
 826a69a:	89 04 24             	mov    %eax,(%esp)
 826a69d:	e8 8a 15 00 00       	call   826bc2c <_ZNSt3mapIN10QuickParty23STQuickPartyPoolMap_KeyENS0_24STQuickPartyPoolMap_DataESt4lessIS1_ESaISt4pairIKS1_S2_EEE4findERS6_>
 826a6a2:	83 ec 04             	sub    $0x4,%esp
 826a6a5:	8b 55 08             	mov    0x8(%ebp),%edx
 826a6a8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 826a6ab:	89 54 24 04          	mov    %edx,0x4(%esp)
 826a6af:	89 04 24             	mov    %eax,(%esp)
 826a6b2:	e8 a1 15 00 00       	call   826bc58 <_ZNSt3mapIN10QuickParty23STQuickPartyPoolMap_KeyENS0_24STQuickPartyPoolMap_DataESt4lessIS1_ESaISt4pairIKS1_S2_EEE3endEv>
 826a6b7:	83 ec 04             	sub    $0x4,%esp
 826a6ba:	8d 45 ec             	lea    -0x14(%ebp),%eax
 826a6bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 826a6c1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 826a6c4:	89 04 24             	mov    %eax,(%esp)
 826a6c7:	e8 b2 15 00 00       	call   826bc7e <_ZNKSt17_Rb_tree_iteratorISt4pairIKN10QuickParty23STQuickPartyPoolMap_KeyENS1_24STQuickPartyPoolMap_DataEEEneERKS6_>
 826a6cc:	84 c0                	test   %al,%al
 826a6ce:	0f 84 83 00 00 00    	je     826a757 <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser+0x3d1>
 826a6d4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 826a6d7:	89 04 24             	mov    %eax,(%esp)
 826a6da:	e8 b3 15 00 00       	call   826bc92 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN10QuickParty23STQuickPartyPoolMap_KeyENS1_24STQuickPartyPoolMap_DataEEEptEv>
 826a6df:	8d 50 04             	lea    0x4(%eax),%edx
 826a6e2:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 826a6e9:	00 
 826a6ea:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826a6ed:	89 44 24 14          	mov    %eax,0x14(%esp)
 826a6f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826a6f4:	89 44 24 10          	mov    %eax,0x10(%esp)
 826a6f8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 826a6ff:	00 
 826a700:	89 54 24 08          	mov    %edx,0x8(%esp)
 826a704:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826a707:	89 44 24 04          	mov    %eax,0x4(%esp)
 826a70b:	8b 45 08             	mov    0x8(%ebp),%eax
 826a70e:	89 04 24             	mov    %eax,(%esp)
 826a711:	e8 9e 08 00 00       	call   826afb4 <_ZN10QuickParty24CQuickPartySystemManager24push_quick_party_in_poolERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEP6CPartyiPNS_11CQuickPartyEb>
 826a716:	83 f0 01             	xor    $0x1,%eax
 826a719:	84 c0                	test   %al,%al
 826a71b:	74 3a                	je     826a757 <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser+0x3d1>
 826a71d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826a720:	89 44 24 14          	mov    %eax,0x14(%esp)
 826a724:	c7 44 24 10 80 55 bf 	movl   $0x8bf5580,0x10(%esp)
 826a72b:	08 
 826a72c:	c7 44 24 0c 29 02 00 	movl   $0x229,0xc(%esp)
 826a733:	00 
 826a734:	c7 44 24 08 00 66 bf 	movl   $0x8bf6600,0x8(%esp)
 826a73b:	08 
 826a73c:	c7 44 24 04 01 54 bf 	movl   $0x8bf5401,0x4(%esp)
 826a743:	08 
 826a744:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 826a74b:	e8 ba 94 86 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 826a750:	b8 00 00 00 00       	mov    $0x0,%eax
 826a755:	eb 05                	jmp    826a75c <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser+0x3d6>
 826a757:	b8 01 00 00 00       	mov    $0x1,%eax
 826a75c:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 826a75f:	c9                   	leave
 826a760:	c3                   	ret
 826a761:	90                   	nop

```

```c
// QuickParty::CQuickPartySystemManager::cancel_quick_party @ 0x826a386

/* QuickParty::CQuickPartySystemManager::cancel_quick_party(CParty*, bool, CUser*) */

undefined4 __thiscall
QuickParty::CQuickPartySystemManager::cancel_quick_party
          (CQuickPartySystemManager *this,CParty *param_1,bool param_2,CUser *param_3)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  STQuickPartyPoolMap_Key local_20 [4];
  undefined2 local_1c;
  undefined1 local_1a;
  map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
  local_18 [4];
  CQuickParty *local_14;
  int local_10;
  
  if ((param_1 == (CParty *)0x0) || (iVar4 = CParty::get_quick_party_index(param_1), iVar4 == -1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    if ((param_1 == (CParty *)0x0) && (param_3 != (CUser *)0x0)) {
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_3);
      LogManager::logFormat
                (1,"QuickParty.cpp",
                 "bool QuickParty::CQuickPartySystemManager::cancel_quick_party(CParty*, bool, CUser*)"
                 ,0x1e3,"QUICK_PARTY_LOG : PARTY IS NULL!! (%d)",uVar5);
    }
    else {
      uVar5 = CParty::get_quick_party_index(param_1);
      LogManager::logFormat
                (1,"QuickParty.cpp",
                 "bool QuickParty::CQuickPartySystemManager::cancel_quick_party(CParty*, bool, CUser*)"
                 ,0x1e5,"QUICK_PARTY_LOG : ABNOMAL QUICK PARTY INDEX (%d)!!",uVar5);
    }
    uVar5 = 0;
  }
  else {
    CParty::get_quick_party_index(param_1);
    iVar4 = G_CGameManager();
    local_14 = (CQuickParty *)CGameManager::GetQuickParty(iVar4);
    if (local_14 == (CQuickParty *)0x0) {
      LogManager::logFormat
                (1,"QuickParty.cpp",
                 "bool QuickParty::CQuickPartySystemManager::cancel_quick_party(CParty*, bool, CUser*)"
                 ,0x1ec,"QUICK_PARTY_LOG : NO EXIST QUICK PARTY!!");
      uVar5 = 0;
    }
    else {
      cVar2 = CParty::GetEPLPState(param_1);
      if ((cVar2 < '\x02') || (!param_2)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        CParty::SetSelectedEPLPCmd(param_1,-1);
        sVar3 = CQuickParty::get_dungeon_index(local_14);
        uVar5 = CBattle_Field::getRandomBuffDungeonType
                          ((CBattle_Field *)(param_1 + 0xb24),(int)sVar3);
        CBattle_Field::setEplpWaitingTimer((CBattle_Field *)(param_1 + 0xb24),uVar5);
      }
      STQuickPartyPoolMap_Key::STQuickPartyPoolMap_Key((STQuickPartyPoolMap_Key *)&local_1c);
      local_1c = CQuickParty::get_dungeon_index(local_14);
      local_1a = CQuickParty::get_dungeon_diff(local_14);
      cVar2 = remove_quick_party_in_pool((CQuickParty *)this,(STQuickPartyPoolMap_Key *)local_14);
      if (cVar2 == '\x01') {
        if (!param_2) {
          CQuickParty::set_change_quick_party_count(local_14,true);
        }
        local_10 = 0;
        iVar4 = CParty::get_member_count(param_1);
        if ((iVar4 == 1) || (param_2)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          iVar4 = CParty::GetPartyIndex(param_1);
          CQuickParty::delete_party_index(local_14,iVar4);
          local_10 = CQuickParty::get_quick_party_count(local_14);
          CParty::init_quick_party_data(param_1);
          if (local_10 < 1) {
            CQuickParty::destroy(local_14);
            return 1;
          }
        }
        else {
          local_10 = CQuickParty::get_quick_party_count(local_14);
          local_10 = local_10 + -1;
          if (local_10 < 1) {
            LogManager::logFormat
                      (1,"QuickParty.cpp",
                       "bool QuickParty::CQuickPartySystemManager::cancel_quick_party(CParty*, bool, CUser*)"
                       ,0x216,"QUICK_PARTY_LOG : QUICK PARTY COUNT ERROR!! (%d)",local_10);
            iVar4 = CParty::GetPartyIndex(param_1);
            CQuickParty::delete_party_index(local_14,iVar4);
            CParty::init_quick_party_data(param_1);
            CQuickParty::destroy(local_14);
            return 0;
          }
        }
        std::
        map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
        ::find(local_20);
        std::
        map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
        ::end(local_18);
        cVar2 = std::
                _Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                ::operator!=((_Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                              *)local_20,(_Rb_tree_iterator *)local_18);
        if (cVar2 != '\0') {
          iVar4 = std::
                  _Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                  ::operator->((_Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                                *)local_20);
          cVar2 = push_quick_party_in_pool
                            (this,(STQuickPartyPoolMap_Key *)&local_1c,
                             (STQuickPartyPoolMap_Data *)(iVar4 + 4),(CParty *)0x0,local_10,local_14
                             ,true);
          if (cVar2 != '\x01') {
            LogManager::logFormat
                      (1,"QuickParty.cpp",
                       "bool QuickParty::CQuickPartySystemManager::cancel_quick_party(CParty*, bool, CUser*)"
                       ,0x229,"QUICK_PARTY_LOG : PUSH ERROR!! (%d)",local_10);
            return 0;
          }
        }
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
    }
  }
  return uVar5;
}

```

---

## check_match_proper_party

```asm
// === 08269e34 QuickParty::CQuickPartySystemManager::check_match_proper_party  [0x08269e34-0x8269f3b] ===
 8269e34:	55                   	push   %ebp
 8269e35:	89 e5                	mov    %esp,%ebp
 8269e37:	53                   	push   %ebx
 8269e38:	83 ec 34             	sub    $0x34,%esp
 8269e3b:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8269e3f:	75 0a                	jne    8269e4b <_ZN10QuickParty24CQuickPartySystemManager24check_match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CParty+0x17>
 8269e41:	b8 01 00 00 00       	mov    $0x1,%eax
 8269e46:	e9 eb 00 00 00       	jmp    8269f36 <_ZN10QuickParty24CQuickPartySystemManager24check_match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CParty+0x102>
 8269e4b:	8b 45 10             	mov    0x10(%ebp),%eax
 8269e4e:	89 04 24             	mov    %eax,(%esp)
 8269e51:	e8 14 03 33 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 8269e56:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8269e59:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8269e5d:	7e 06                	jle    8269e65 <_ZN10QuickParty24CQuickPartySystemManager24check_match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CParty+0x31>
 8269e5f:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 8269e63:	7e 0a                	jle    8269e6f <_ZN10QuickParty24CQuickPartySystemManager24check_match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CParty+0x3b>
 8269e65:	b8 01 00 00 00       	mov    $0x1,%eax
 8269e6a:	e9 c7 00 00 00       	jmp    8269f36 <_ZN10QuickParty24CQuickPartySystemManager24check_match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CParty+0x102>
 8269e6f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8269e72:	0f b7 00             	movzwl (%eax),%eax
 8269e75:	66 85 c0             	test   %ax,%ax
 8269e78:	79 37                	jns    8269eb1 <_ZN10QuickParty24CQuickPartySystemManager24check_match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CParty+0x7d>
 8269e7a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8269e7d:	0f b7 00             	movzwl (%eax),%eax
 8269e80:	98                   	cwtl
 8269e81:	89 44 24 14          	mov    %eax,0x14(%esp)
 8269e85:	c7 44 24 10 d4 53 bf 	movl   $0x8bf53d4,0x10(%esp)
 8269e8c:	08 
 8269e8d:	c7 44 24 0c 6e 01 00 	movl   $0x16e,0xc(%esp)
 8269e94:	00 
 8269e95:	c7 44 24 08 00 67 bf 	movl   $0x8bf6700,0x8(%esp)
 8269e9c:	08 
 8269e9d:	c7 44 24 04 01 54 bf 	movl   $0x8bf5401,0x4(%esp)
 8269ea4:	08 
 8269ea5:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8269eac:	e8 59 9d 86 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8269eb1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8269eb4:	0f b7 00             	movzwl (%eax),%eax
 8269eb7:	0f bf d8             	movswl %ax,%ebx
 8269eba:	e8 dc 22 e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8269ebf:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8269ec3:	89 04 24             	mov    %eax,(%esp)
 8269ec6:	e8 2d 5b 0f 00       	call   835f9f8 <_ZNK12CDataManager12find_dungeonEi>
 8269ecb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8269ece:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8269ed2:	75 07                	jne    8269edb <_ZN10QuickParty24CQuickPartySystemManager24check_match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CParty+0xa7>
 8269ed4:	b8 01 00 00 00       	mov    $0x1,%eax
 8269ed9:	eb 5b                	jmp    8269f36 <_ZN10QuickParty24CQuickPartySystemManager24check_match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CParty+0x102>
 8269edb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8269ede:	89 04 24             	mov    %eax,(%esp)
 8269ee1:	e8 42 1a 00 00       	call   826b928 <_ZNK8CDungeon22get_blood_dungeon_typeEv>
 8269ee6:	3c 02                	cmp    $0x2,%al
 8269ee8:	75 1a                	jne    8269f04 <_ZN10QuickParty24CQuickPartySystemManager24check_match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CParty+0xd0>
 8269eea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8269eed:	89 04 24             	mov    %eax,(%esp)
 8269ef0:	e8 bf 15 fc ff       	call   822b4b4 <_ZNK8CDungeon21get_limit_party_countEv>
 8269ef5:	0f be c0             	movsbl %al,%eax
 8269ef8:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8269efb:	7f 07                	jg     8269f04 <_ZN10QuickParty24CQuickPartySystemManager24check_match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CParty+0xd0>
 8269efd:	b8 01 00 00 00       	mov    $0x1,%eax
 8269f02:	eb 05                	jmp    8269f09 <_ZN10QuickParty24CQuickPartySystemManager24check_match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CParty+0xd5>
 8269f04:	b8 00 00 00 00       	mov    $0x0,%eax
 8269f09:	84 c0                	test   %al,%al
 8269f0b:	74 07                	je     8269f14 <_ZN10QuickParty24CQuickPartySystemManager24check_match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CParty+0xe0>
 8269f0d:	b8 01 00 00 00       	mov    $0x1,%eax
 8269f12:	eb 22                	jmp    8269f36 <_ZN10QuickParty24CQuickPartySystemManager24check_match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CParty+0x102>
 8269f14:	c7 44 24 0c bc 01 00 	movl   $0x1bc,0xc(%esp)
 8269f1b:	00 
 8269f1c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8269f23:	00 
 8269f24:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8269f27:	89 44 24 04          	mov    %eax,0x4(%esp)
 8269f2b:	8b 45 10             	mov    0x10(%ebp),%eax
 8269f2e:	89 04 24             	mov    %eax,(%esp)
 8269f31:	e8 4a 1d 34 00       	call   85abc80 <_ZN6CParty26checkInoutConditionDungeonEPK8CDungeon17ENUM_DUNGEON_MODE14ENUM_CMDPACKET>
 8269f36:	83 c4 34             	add    $0x34,%esp
 8269f39:	5b                   	pop    %ebx
 8269f3a:	5d                   	pop    %ebp
 8269f3b:	c3                   	ret

```

```c
// QuickParty::CQuickPartySystemManager::check_match_proper_party @ 0x8269e34

/* QuickParty::CQuickPartySystemManager::check_match_proper_party(QuickParty::STQuickPartyPoolMap_Key
   const&, CParty*) */

undefined4 __thiscall
QuickParty::CQuickPartySystemManager::check_match_proper_party
          (CQuickPartySystemManager *this,STQuickPartyPoolMap_Key *param_1,CParty *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  CDungeon *this_00;
  undefined4 uVar5;
  
  if (param_2 == (CParty *)0x0) {
    return 1;
  }
  iVar3 = CParty::get_member_count(param_2);
  if ((0 < iVar3) && (iVar3 < 4)) {
    if (*(short *)param_1 < 0) {
      LogManager::logFormat
                (1,"QuickParty.cpp",
                 "ENUM_ERROR QuickParty::CQuickPartySystemManager::check_match_proper_party(const QuickParty::STQuickPartyPoolMap_Key&, CParty*)"
                 ,0x16e,"QUICK_PARTY_LOG : DUNGEON INDEX ERROR!! (%d)",(int)*(short *)param_1);
    }
    iVar4 = G_CDataManager();
    this_00 = (CDungeon *)CDataManager::find_dungeon(iVar4);
    if (this_00 != (CDungeon *)0x0) {
      cVar2 = CDungeon::get_blood_dungeon_type(this_00);
      if ((cVar2 == '\x02') && (cVar2 = CDungeon::get_limit_party_count(this_00), cVar2 <= iVar3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        uVar5 = 1;
      }
      else {
        uVar5 = CParty::checkInoutConditionDungeon(param_2,this_00,0,0x1bc);
      }
      return uVar5;
    }
    return 1;
  }
  return 1;
}

```

---

## check_quick_party_min_count

```asm
// === 0826ab9e QuickParty::CQuickPartySystemManager::check_quick_party_min_count  [0x0826ab9e-0x826ace9] ===
 826ab9e:	55                   	push   %ebp
 826ab9f:	89 e5                	mov    %esp,%ebp
 826aba1:	83 ec 38             	sub    $0x38,%esp
 826aba4:	8b 45 0c             	mov    0xc(%ebp),%eax
 826aba7:	0f b7 00             	movzwl (%eax),%eax
 826abaa:	98                   	cwtl
 826abab:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 826abae:	8b 45 0c             	mov    0xc(%ebp),%eax
 826abb1:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 826abb5:	0f be c0             	movsbl %al,%eax
 826abb8:	89 45 e8             	mov    %eax,-0x18(%ebp)
 826abbb:	e8 db 15 e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 826abc0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 826abc3:	89 54 24 04          	mov    %edx,0x4(%esp)
 826abc7:	89 04 24             	mov    %eax,(%esp)
 826abca:	e8 29 4e 0f 00       	call   835f9f8 <_ZNK12CDataManager12find_dungeonEi>
 826abcf:	89 45 ec             	mov    %eax,-0x14(%ebp)
 826abd2:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 826abd6:	75 0a                	jne    826abe2 <_ZN10QuickParty24CQuickPartySystemManager27check_quick_party_min_countERKNS_23STQuickPartyPoolMap_KeyEi+0x44>
 826abd8:	b8 00 00 00 00       	mov    $0x0,%eax
 826abdd:	e9 06 01 00 00       	jmp    826ace8 <_ZN10QuickParty24CQuickPartySystemManager27check_quick_party_min_countERKNS_23STQuickPartyPoolMap_KeyEi+0x14a>
 826abe2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 826abe5:	89 04 24             	mov    %eax,(%esp)
 826abe8:	e8 3b 0d 00 00       	call   826b928 <_ZNK8CDungeon22get_blood_dungeon_typeEv>
 826abed:	3c 02                	cmp    $0x2,%al
 826abef:	0f 94 c0             	sete   %al
 826abf2:	84 c0                	test   %al,%al
 826abf4:	74 26                	je     826ac1c <_ZN10QuickParty24CQuickPartySystemManager27check_quick_party_min_countERKNS_23STQuickPartyPoolMap_KeyEi+0x7e>
 826abf6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 826abf9:	89 04 24             	mov    %eax,(%esp)
 826abfc:	e8 b3 08 fc ff       	call   822b4b4 <_ZNK8CDungeon21get_limit_party_countEv>
 826ac01:	0f be c0             	movsbl %al,%eax
 826ac04:	3b 45 10             	cmp    0x10(%ebp),%eax
 826ac07:	0f 95 c0             	setne  %al
 826ac0a:	84 c0                	test   %al,%al
 826ac0c:	0f 84 d1 00 00 00    	je     826ace3 <_ZN10QuickParty24CQuickPartySystemManager27check_quick_party_min_countERKNS_23STQuickPartyPoolMap_KeyEi+0x145>
 826ac12:	b8 00 00 00 00       	mov    $0x0,%eax
 826ac17:	e9 cc 00 00 00       	jmp    826ace8 <_ZN10QuickParty24CQuickPartySystemManager27check_quick_party_min_countERKNS_23STQuickPartyPoolMap_KeyEi+0x14a>
 826ac1c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 826ac1f:	89 04 24             	mov    %eax,(%esp)
 826ac22:	e8 11 0d 00 00       	call   826b938 <_ZNK8CDungeon22get_dimension_possibleEv>
 826ac27:	84 c0                	test   %al,%al
 826ac29:	0f 9f c0             	setg   %al
 826ac2c:	84 c0                	test   %al,%al
 826ac2e:	74 29                	je     826ac59 <_ZN10QuickParty24CQuickPartySystemManager27check_quick_party_min_countERKNS_23STQuickPartyPoolMap_KeyEi+0xbb>
 826ac30:	8b 45 ec             	mov    -0x14(%ebp),%eax
 826ac33:	89 04 24             	mov    %eax,(%esp)
 826ac36:	e8 09 0d 00 00       	call   826b944 <_ZNK8CDungeon26get_dimension_min_partymemEv>
 826ac3b:	0f be c0             	movsbl %al,%eax
 826ac3e:	83 c0 01             	add    $0x1,%eax
 826ac41:	3b 45 10             	cmp    0x10(%ebp),%eax
 826ac44:	0f 9f c0             	setg   %al
 826ac47:	84 c0                	test   %al,%al
 826ac49:	0f 84 94 00 00 00    	je     826ace3 <_ZN10QuickParty24CQuickPartySystemManager27check_quick_party_min_countERKNS_23STQuickPartyPoolMap_KeyEi+0x145>
 826ac4f:	b8 00 00 00 00       	mov    $0x0,%eax
 826ac54:	e9 8f 00 00 00       	jmp    826ace8 <_ZN10QuickParty24CQuickPartySystemManager27check_quick_party_min_countERKNS_23STQuickPartyPoolMap_KeyEi+0x14a>
 826ac59:	c7 45 f0 ff ff ff ff 	movl   $0xffffffff,-0x10(%ebp)
 826ac60:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
 826ac67:	8b 45 ec             	mov    -0x14(%ebp),%eax
 826ac6a:	0f b6 80 9c 08 00 00 	movzbl 0x89c(%eax),%eax
 826ac71:	84 c0                	test   %al,%al
 826ac73:	74 09                	je     826ac7e <_ZN10QuickParty24CQuickPartySystemManager27check_quick_party_min_countERKNS_23STQuickPartyPoolMap_KeyEi+0xe0>
 826ac75:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 826ac7c:	eb 07                	jmp    826ac85 <_ZN10QuickParty24CQuickPartySystemManager27check_quick_party_min_countERKNS_23STQuickPartyPoolMap_KeyEi+0xe7>
 826ac7e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 826ac85:	e8 04 15 e6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 826ac8a:	89 04 24             	mov    %eax,(%esp)
 826ac8d:	e8 92 e1 02 00       	call   8298e24 <_ZN12CGameManager26GetQuickPartyRewardManagerEv>
 826ac92:	85 c0                	test   %eax,%eax
 826ac94:	0f 95 c0             	setne  %al
 826ac97:	84 c0                	test   %al,%al
 826ac99:	74 26                	je     826acc1 <_ZN10QuickParty24CQuickPartySystemManager27check_quick_party_min_countERKNS_23STQuickPartyPoolMap_KeyEi+0x123>
 826ac9b:	e8 ee 14 e6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 826aca0:	89 04 24             	mov    %eax,(%esp)
 826aca3:	e8 7c e1 02 00       	call   8298e24 <_ZN12CGameManager26GetQuickPartyRewardManagerEv>
 826aca8:	8b 55 e8             	mov    -0x18(%ebp),%edx
 826acab:	89 54 24 08          	mov    %edx,0x8(%esp)
 826acaf:	8b 55 f4             	mov    -0xc(%ebp),%edx
 826acb2:	89 54 24 04          	mov    %edx,0x4(%esp)
 826acb6:	89 04 24             	mov    %eax,(%esp)
 826acb9:	e8 e4 2b 00 00       	call   826d8a2 <_ZN10QuickParty24CQuickPartyRewardManager28getRequireQuickPartyMinCountEii>
 826acbe:	89 45 f0             	mov    %eax,-0x10(%ebp)
 826acc1:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 826acc5:	74 0f                	je     826acd6 <_ZN10QuickParty24CQuickPartySystemManager27check_quick_party_min_countERKNS_23STQuickPartyPoolMap_KeyEi+0x138>
 826acc7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826acca:	3b 45 10             	cmp    0x10(%ebp),%eax
 826accd:	7e 07                	jle    826acd6 <_ZN10QuickParty24CQuickPartySystemManager27check_quick_party_min_countERKNS_23STQuickPartyPoolMap_KeyEi+0x138>
 826accf:	b8 00 00 00 00       	mov    $0x0,%eax
 826acd4:	eb 12                	jmp    826ace8 <_ZN10QuickParty24CQuickPartySystemManager27check_quick_party_min_countERKNS_23STQuickPartyPoolMap_KeyEi+0x14a>
 826acd6:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 826acda:	7f 07                	jg     826ace3 <_ZN10QuickParty24CQuickPartySystemManager27check_quick_party_min_countERKNS_23STQuickPartyPoolMap_KeyEi+0x145>
 826acdc:	b8 00 00 00 00       	mov    $0x0,%eax
 826ace1:	eb 05                	jmp    826ace8 <_ZN10QuickParty24CQuickPartySystemManager27check_quick_party_min_countERKNS_23STQuickPartyPoolMap_KeyEi+0x14a>
 826ace3:	b8 01 00 00 00       	mov    $0x1,%eax
 826ace8:	c9                   	leave
 826ace9:	c3                   	ret

```

```c
// QuickParty::CQuickPartySystemManager::check_quick_party_min_count @ 0x826ab9e

/* QuickParty::CQuickPartySystemManager::check_quick_party_min_count(QuickParty::STQuickPartyPoolMap_Key
   const&, int) */

undefined4 __thiscall
QuickParty::CQuickPartySystemManager::check_quick_party_min_count
          (CQuickPartySystemManager *this,STQuickPartyPoolMap_Key *param_1,int param_2)

{
  STQuickPartyPoolMap_Key SVar1;
  char cVar2;
  int iVar3;
  CDungeon *this_00;
  CGameManager *pCVar4;
  CQuickPartyRewardManager *this_01;
  int local_14;
  uint local_10;
  
  SVar1 = param_1[2];
  iVar3 = G_CDataManager();
  this_00 = (CDungeon *)CDataManager::find_dungeon(iVar3);
  if (this_00 == (CDungeon *)0x0) {
    return 0;
  }
  cVar2 = CDungeon::get_blood_dungeon_type(this_00);
  if (cVar2 == '\x02') {
    cVar2 = CDungeon::get_limit_party_count(this_00);
    if (cVar2 != param_2) {
      return 0;
    }
  }
  else {
    cVar2 = CDungeon::get_dimension_possible(this_00);
    if (cVar2 < '\x01') {
      local_14 = -1;
      local_10 = (uint)(this_00[0x89c] != (CDungeon)0x0);
      pCVar4 = (CGameManager *)G_CGameManager();
      iVar3 = CGameManager::GetQuickPartyRewardManager(pCVar4);
      if (iVar3 != 0) {
        pCVar4 = (CGameManager *)G_CGameManager();
        this_01 = (CQuickPartyRewardManager *)CGameManager::GetQuickPartyRewardManager(pCVar4);
        local_14 = CQuickPartyRewardManager::getRequireQuickPartyMinCount
                             (this_01,local_10,(int)(char)SVar1);
      }
      if ((local_14 != -1) && (param_2 < local_14)) {
        return 0;
      }
      if (param_2 < 2) {
        return 0;
      }
    }
    else {
      cVar2 = CDungeon::get_dimension_min_partymem(this_00);
      if (param_2 < cVar2 + 1) {
        return 0;
      }
    }
  }
  return 1;
}

```

---

## direct_entrance_quick_party

```asm
// === 0826a762 QuickParty::CQuickPartySystemManager::direct_entrance_quick_party  [0x0826a762-0x826a971] ===
 826a762:	55                   	push   %ebp
 826a763:	89 e5                	mov    %esp,%ebp
 826a765:	56                   	push   %esi
 826a766:	53                   	push   %ebx
 826a767:	83 ec 30             	sub    $0x30,%esp
 826a76a:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 826a76e:	75 0a                	jne    826a77a <_ZN10QuickParty24CQuickPartySystemManager27direct_entrance_quick_partyEP5CUser+0x18>
 826a770:	bb 01 00 00 00       	mov    $0x1,%ebx
 826a775:	e9 ee 01 00 00       	jmp    826a968 <_ZN10QuickParty24CQuickPartySystemManager27direct_entrance_quick_partyEP5CUser+0x206>
 826a77a:	8b 45 0c             	mov    0xc(%ebp),%eax
 826a77d:	89 04 24             	mov    %eax,(%esp)
 826a780:	e8 c7 a9 3e 00       	call   865514c <_ZN5CUser8GetPartyEv>
 826a785:	89 45 e8             	mov    %eax,-0x18(%ebp)
 826a788:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 826a78c:	75 0a                	jne    826a798 <_ZN10QuickParty24CQuickPartySystemManager27direct_entrance_quick_partyEP5CUser+0x36>
 826a78e:	bb 01 00 00 00       	mov    $0x1,%ebx
 826a793:	e9 d0 01 00 00       	jmp    826a968 <_ZN10QuickParty24CQuickPartySystemManager27direct_entrance_quick_partyEP5CUser+0x206>
 826a798:	8b 45 e8             	mov    -0x18(%ebp),%eax
 826a79b:	89 04 24             	mov    %eax,(%esp)
 826a79e:	e8 85 31 fc ff       	call   822d928 <_ZN6CParty21get_quick_party_indexEv>
 826a7a3:	89 c3                	mov    %eax,%ebx
 826a7a5:	e8 e4 19 e6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 826a7aa:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 826a7ae:	89 04 24             	mov    %eax,(%esp)
 826a7b1:	e8 bc ad 02 00       	call   8295572 <_ZN12CGameManager13GetQuickPartyEi>
 826a7b6:	89 45 ec             	mov    %eax,-0x14(%ebp)
 826a7b9:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 826a7bd:	75 0a                	jne    826a7c9 <_ZN10QuickParty24CQuickPartySystemManager27direct_entrance_quick_partyEP5CUser+0x67>
 826a7bf:	bb 01 00 00 00       	mov    $0x1,%ebx
 826a7c4:	e9 9f 01 00 00       	jmp    826a968 <_ZN10QuickParty24CQuickPartySystemManager27direct_entrance_quick_partyEP5CUser+0x206>
 826a7c9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 826a7cc:	89 04 24             	mov    %eax,(%esp)
 826a7cf:	e8 ea f0 ff ff       	call   82698be <_ZN10QuickParty11CQuickParty21get_quick_party_countEv>
 826a7d4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 826a7d7:	83 7d f0 01          	cmpl   $0x1,-0x10(%ebp)
 826a7db:	7f 1a                	jg     826a7f7 <_ZN10QuickParty24CQuickPartySystemManager27direct_entrance_quick_partyEP5CUser+0x95>
 826a7dd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 826a7e0:	89 04 24             	mov    %eax,(%esp)
 826a7e3:	e8 72 0f 00 00       	call   826b75a <_ZN10QuickParty11CQuickParty22get_first_matching_cntEv>
 826a7e8:	0f be c0             	movsbl %al,%eax
 826a7eb:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 826a7ee:	75 07                	jne    826a7f7 <_ZN10QuickParty24CQuickPartySystemManager27direct_entrance_quick_partyEP5CUser+0x95>
 826a7f0:	b8 01 00 00 00       	mov    $0x1,%eax
 826a7f5:	eb 05                	jmp    826a7fc <_ZN10QuickParty24CQuickPartySystemManager27direct_entrance_quick_partyEP5CUser+0x9a>
 826a7f7:	b8 00 00 00 00       	mov    $0x0,%eax
 826a7fc:	84 c0                	test   %al,%al
 826a7fe:	74 0a                	je     826a80a <_ZN10QuickParty24CQuickPartySystemManager27direct_entrance_quick_partyEP5CUser+0xa8>
 826a800:	bb f5 00 00 00       	mov    $0xf5,%ebx
 826a805:	e9 5e 01 00 00       	jmp    826a968 <_ZN10QuickParty24CQuickPartySystemManager27direct_entrance_quick_partyEP5CUser+0x206>
 826a80a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 826a80d:	89 04 24             	mov    %eax,(%esp)
 826a810:	e8 45 0f 00 00       	call   826b75a <_ZN10QuickParty11CQuickParty22get_first_matching_cntEv>
 826a815:	0f be c0             	movsbl %al,%eax
 826a818:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 826a81b:	7c 19                	jl     826a836 <_ZN10QuickParty24CQuickPartySystemManager27direct_entrance_quick_partyEP5CUser+0xd4>
 826a81d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 826a820:	89 04 24             	mov    %eax,(%esp)
 826a823:	e8 bc 0f 00 00       	call   826b7e4 <_ZN10QuickParty11CQuickParty27is_change_quick_party_countEv>
 826a828:	83 f0 01             	xor    $0x1,%eax
 826a82b:	84 c0                	test   %al,%al
 826a82d:	74 07                	je     826a836 <_ZN10QuickParty24CQuickPartySystemManager27direct_entrance_quick_partyEP5CUser+0xd4>
 826a82f:	b8 01 00 00 00       	mov    $0x1,%eax
 826a834:	eb 05                	jmp    826a83b <_ZN10QuickParty24CQuickPartySystemManager27direct_entrance_quick_partyEP5CUser+0xd9>
 826a836:	b8 00 00 00 00       	mov    $0x0,%eax
 826a83b:	84 c0                	test   %al,%al
 826a83d:	0f 84 d5 00 00 00    	je     826a918 <_ZN10QuickParty24CQuickPartySystemManager27direct_entrance_quick_partyEP5CUser+0x1b6>
 826a843:	8b 45 ec             	mov    -0x14(%ebp),%eax
 826a846:	89 04 24             	mov    %eax,(%esp)
 826a849:	e8 de ee ff ff       	call   826972c <_ZN10QuickParty11CQuickParty16get_party_objectEv>
 826a84e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 826a851:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 826a855:	75 0a                	jne    826a861 <_ZN10QuickParty24CQuickPartySystemManager27direct_entrance_quick_partyEP5CUser+0xff>
 826a857:	bb 01 00 00 00       	mov    $0x1,%ebx
 826a85c:	e9 07 01 00 00       	jmp    826a968 <_ZN10QuickParty24CQuickPartySystemManager27direct_entrance_quick_partyEP5CUser+0x206>
 826a861:	e8 28 19 e6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 826a866:	89 04 24             	mov    %eax,(%esp)
 826a869:	e8 52 e5 02 00       	call   8298dc0 <_ZN12CGameManager26GetQuickPartySystemManagerEv>
 826a86e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 826a875:	00 
 826a876:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 826a87d:	00 
 826a87e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 826a881:	89 54 24 04          	mov    %edx,0x4(%esp)
 826a885:	89 04 24             	mov    %eax,(%esp)
 826a888:	e8 f9 fa ff ff       	call   826a386 <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser>
 826a88d:	84 c0                	test   %al,%al
 826a88f:	0f 84 83 00 00 00    	je     826a918 <_ZN10QuickParty24CQuickPartySystemManager27direct_entrance_quick_partyEP5CUser+0x1b6>
 826a895:	8d 45 d8             	lea    -0x28(%ebp),%eax
 826a898:	89 04 24             	mov    %eax,(%esp)
 826a89b:	e8 ac 34 32 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 826a8a0:	8d 45 d8             	lea    -0x28(%ebp),%eax
 826a8a3:	89 04 24             	mov    %eax,(%esp)
 826a8a6:	e8 3b 10 e6 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 826a8ab:	c7 44 24 08 7f 01 00 	movl   $0x17f,0x8(%esp)
 826a8b2:	00 
 826a8b3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 826a8ba:	00 
 826a8bb:	8d 45 d8             	lea    -0x28(%ebp),%eax
 826a8be:	89 04 24             	mov    %eax,(%esp)
 826a8c1:	e8 36 10 e6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 826a8c6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 826a8cd:	00 
 826a8ce:	8d 45 d8             	lea    -0x28(%ebp),%eax
 826a8d1:	89 04 24             	mov    %eax,(%esp)
 826a8d4:	e8 7f 10 e6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 826a8d9:	8d 45 d8             	lea    -0x28(%ebp),%eax
 826a8dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 826a8e0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826a8e3:	89 04 24             	mov    %eax,(%esp)
 826a8e6:	e8 63 28 33 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 826a8eb:	bb 01 00 00 00       	mov    $0x1,%ebx
 826a8f0:	8d 45 d8             	lea    -0x28(%ebp),%eax
 826a8f3:	89 04 24             	mov    %eax,(%esp)
 826a8f6:	e8 85 35 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 826a8fb:	eb 6b                	jmp    826a968 <_ZN10QuickParty24CQuickPartySystemManager27direct_entrance_quick_partyEP5CUser+0x206>
 826a8fd:	89 d3                	mov    %edx,%ebx
 826a8ff:	89 c6                	mov    %eax,%esi
 826a901:	8d 45 d8             	lea    -0x28(%ebp),%eax
 826a904:	89 04 24             	mov    %eax,(%esp)
 826a907:	e8 74 35 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 826a90c:	89 f0                	mov    %esi,%eax
 826a90e:	89 da                	mov    %ebx,%edx
 826a910:	89 04 24             	mov    %eax,(%esp)
 826a913:	e8 38 8e 87 00       	call   8ae3750 <_Unwind_Resume>
 826a918:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 826a91b:	89 04 24             	mov    %eax,(%esp)
 826a91e:	e8 a7 9b fc ff       	call   82344ca <_ZN10QuickParty23STQuickPartyPoolMap_KeyC1Ev>
 826a923:	8b 45 ec             	mov    -0x14(%ebp),%eax
 826a926:	89 04 24             	mov    %eax,(%esp)
 826a929:	e8 6a 0e 00 00       	call   826b798 <_ZN10QuickParty11CQuickParty17get_dungeon_indexEv>
 826a92e:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 826a932:	8b 45 ec             	mov    -0x14(%ebp),%eax
 826a935:	89 04 24             	mov    %eax,(%esp)
 826a938:	e8 77 0e 00 00       	call   826b7b4 <_ZN10QuickParty11CQuickParty16get_dungeon_diffEv>
 826a93d:	88 45 e6             	mov    %al,-0x1a(%ebp)
 826a940:	e8 49 18 e6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 826a945:	89 04 24             	mov    %eax,(%esp)
 826a948:	e8 73 e4 02 00       	call   8298dc0 <_ZN12CGameManager26GetQuickPartySystemManagerEv>
 826a94d:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 826a950:	89 54 24 08          	mov    %edx,0x8(%esp)
 826a954:	8b 55 ec             	mov    -0x14(%ebp),%edx
 826a957:	89 54 24 04          	mov    %edx,0x4(%esp)
 826a95b:	89 04 24             	mov    %eax,(%esp)
 826a95e:	e8 0f 00 00 00       	call   826a972 <_ZN10QuickParty24CQuickPartySystemManager10start_gameEPNS_11CQuickPartyERKNS_23STQuickPartyPoolMap_KeyE>
 826a963:	bb 00 00 00 00       	mov    $0x0,%ebx
 826a968:	89 d8                	mov    %ebx,%eax
 826a96a:	83 c4 30             	add    $0x30,%esp
 826a96d:	5b                   	pop    %ebx
 826a96e:	5e                   	pop    %esi
 826a96f:	5d                   	pop    %ebp
 826a970:	c3                   	ret
 826a971:	90                   	nop

```

```c
// QuickParty::CQuickPartySystemManager::direct_entrance_quick_party @ 0x826a762

/* QuickParty::CQuickPartySystemManager::direct_entrance_quick_party(CUser*) */

undefined4 __thiscall
QuickParty::CQuickPartySystemManager::direct_entrance_quick_party
          (CQuickPartySystemManager *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CGameManager *pCVar4;
  CQuickPartySystemManager *pCVar5;
  PacketGuard local_2c [12];
  undefined2 local_20;
  undefined1 local_1e;
  CParty *local_1c;
  CQuickParty *local_18;
  int local_14;
  CParty *local_10;
  
  if (param_1 == (CUser *)0x0) {
    return 1;
  }
  local_1c = (CParty *)CUser::GetParty(param_1);
  if (local_1c == (CParty *)0x0) {
    return 1;
  }
  CParty::get_quick_party_index(local_1c);
  iVar3 = G_CGameManager();
  local_18 = (CQuickParty *)CGameManager::GetQuickParty(iVar3);
  if (local_18 == (CQuickParty *)0x0) {
    return 1;
  }
  local_14 = CQuickParty::get_quick_party_count(local_18);
  if ((local_14 < 2) && (cVar2 = CQuickParty::get_first_matching_cnt(local_18), cVar2 == local_14))
  {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    cVar2 = CQuickParty::get_first_matching_cnt(local_18);
    if ((cVar2 < local_14) ||
       (cVar2 = CQuickParty::is_change_quick_party_count(local_18), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_10 = (CParty *)CQuickParty::get_party_object(local_18);
      if (local_10 == (CParty *)0x0) {
        return 1;
      }
      pCVar4 = (CGameManager *)G_CGameManager();
      pCVar5 = (CQuickPartySystemManager *)CGameManager::GetQuickPartySystemManager(pCVar4);
      cVar2 = cancel_quick_party(pCVar5,local_10,true,(CUser *)0x0);
      if (cVar2 != '\0') {
        PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 0826a8a6 to 0826a8ea has its CatchHandler @ 0826a8fd */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_2c);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0x17f);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
        CParty::send_to_party(local_10,local_2c);
        PacketGuard::~PacketGuard(local_2c);
        return 1;
      }
    }
    STQuickPartyPoolMap_Key::STQuickPartyPoolMap_Key((STQuickPartyPoolMap_Key *)&local_20);
    local_20 = CQuickParty::get_dungeon_index(local_18);
    local_1e = CQuickParty::get_dungeon_diff(local_18);
    pCVar4 = (CGameManager *)G_CGameManager();
    pCVar5 = (CQuickPartySystemManager *)CGameManager::GetQuickPartySystemManager(pCVar4);
    start_game(pCVar5,local_18,(STQuickPartyPoolMap_Key *)&local_20);
    return 0;
  }
  return 0xf5;
}

```

---

## find_quick_party_in_pool

```asm
// === 0826a9fe QuickParty::CQuickPartySystemManager::find_quick_party_in_pool  [0x0826a9fe-0x826aa99] ===
 826a9fe:	55                   	push   %ebp
 826a9ff:	89 e5                	mov    %esp,%ebp
 826aa01:	83 ec 38             	sub    $0x38,%esp
 826aa04:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 826aa0b:	eb 6f                	jmp    826aa7c <_ZN10QuickParty24CQuickPartySystemManager24find_quick_party_in_poolERSt4listIiSaIiEE+0x7e>
 826aa0d:	8b 45 0c             	mov    0xc(%ebp),%eax
 826aa10:	89 04 24             	mov    %eax,(%esp)
 826aa13:	e8 88 12 00 00       	call   826bca0 <_ZNSt4listIiSaIiEE5frontEv>
 826aa18:	8b 00                	mov    (%eax),%eax
 826aa1a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 826aa1d:	8b 45 0c             	mov    0xc(%ebp),%eax
 826aa20:	89 04 24             	mov    %eax,(%esp)
 826aa23:	e8 a0 12 00 00       	call   826bcc8 <_ZNSt4listIiSaIiEE9pop_frontEv>
 826aa28:	e8 61 17 e6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 826aa2d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 826aa30:	89 54 24 04          	mov    %edx,0x4(%esp)
 826aa34:	89 04 24             	mov    %eax,(%esp)
 826aa37:	e8 36 ab 02 00       	call   8295572 <_ZN12CGameManager13GetQuickPartyEi>
 826aa3c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 826aa3f:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 826aa43:	75 4f                	jne    826aa94 <_ZN10QuickParty24CQuickPartySystemManager24find_quick_party_in_poolERSt4listIiSaIiEE+0x96>
 826aa45:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 826aa4c:	00 
 826aa4d:	c7 44 24 08 9c 02 00 	movl   $0x29c,0x8(%esp)
 826aa54:	00 
 826aa55:	c7 44 24 04 80 65 bf 	movl   $0x8bf6580,0x4(%esp)
 826aa5c:	08 
 826aa5d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 826aa60:	89 04 24             	mov    %eax,(%esp)
 826aa63:	e8 b0 4c 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 826aa68:	c7 44 24 04 a4 55 bf 	movl   $0x8bf55a4,0x4(%esp)
 826aa6f:	08 
 826aa70:	8d 45 e0             	lea    -0x20(%ebp),%eax
 826aa73:	89 04 24             	mov    %eax,(%esp)
 826aa76:	e8 0d 4d 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 826aa7b:	90                   	nop
 826aa7c:	8b 45 0c             	mov    0xc(%ebp),%eax
 826aa7f:	89 04 24             	mov    %eax,(%esp)
 826aa82:	e8 2f c9 fc ff       	call   82373b6 <_ZNKSt4listIiSaIiEE5emptyEv>
 826aa87:	83 f0 01             	xor    $0x1,%eax
 826aa8a:	84 c0                	test   %al,%al
 826aa8c:	0f 85 7b ff ff ff    	jne    826aa0d <_ZN10QuickParty24CQuickPartySystemManager24find_quick_party_in_poolERSt4listIiSaIiEE+0xf>
 826aa92:	eb 01                	jmp    826aa95 <_ZN10QuickParty24CQuickPartySystemManager24find_quick_party_in_poolERSt4listIiSaIiEE+0x97>
 826aa94:	90                   	nop
 826aa95:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826aa98:	c9                   	leave
 826aa99:	c3                   	ret

```

```c
// QuickParty::CQuickPartySystemManager::find_quick_party_in_pool @ 0x826a9fe

/* QuickParty::CQuickPartySystemManager::find_quick_party_in_pool(std::list<int, std::allocator<int>
   >&) */

int __thiscall
QuickParty::CQuickPartySystemManager::find_quick_party_in_pool
          (CQuickPartySystemManager *this,list *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  cMyTrace local_24 [16];
  int local_14;
  undefined4 local_10;
  
  local_14 = 0;
  while( true ) {
    cVar1 = std::list<int,std::allocator<int>>::empty((list<int,std::allocator<int>> *)param_1);
    if (cVar1 == '\x01') {
      return local_14;
    }
    puVar2 = (undefined4 *)std::list<int,std::allocator<int>>::front();
    local_10 = *puVar2;
    std::list<int,std::allocator<int>>::pop_front((list<int,std::allocator<int>> *)param_1);
    iVar3 = G_CGameManager();
    local_14 = CGameManager::GetQuickParty(iVar3);
    if (local_14 != 0) break;
    cMyTrace::cMyTrace(local_24,
                       "QuickParty::CQuickParty* QuickParty::CQuickPartySystemManager::find_quick_party_in_pool(QuickParty::LIST_QUICK_PARTY&)"
                       ,0x29c,5);
    cMyTrace::operator()(local_24,"QUICK_PARTY_LOG : NO INTENDED ROUTINE!!");
  }
  return local_14;
}

```

---

## init_quick_party_pool

```asm
// === 08269c0c QuickParty::CQuickPartySystemManager::init_quick_party_pool  [0x08269c0c-0x8269e33] ===
 8269c0c:	55                   	push   %ebp
 8269c0d:	89 e5                	mov    %esp,%ebp
 8269c0f:	56                   	push   %esi
 8269c10:	53                   	push   %ebx
 8269c11:	81 ec 90 00 00 00    	sub    $0x90,%esp
 8269c17:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8269c1b:	0f 84 02 02 00 00    	je     8269e23 <_ZN10QuickParty24CQuickPartySystemManager21init_quick_party_poolEPK8CDungeon+0x217>
 8269c21:	e8 68 25 e6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8269c26:	89 04 24             	mov    %eax,(%esp)
 8269c29:	e8 f6 f1 02 00       	call   8298e24 <_ZN12CGameManager26GetQuickPartyRewardManagerEv>
 8269c2e:	89 04 24             	mov    %eax,(%esp)
 8269c31:	e8 60 3c 00 00       	call   826d896 <_ZN10QuickParty24CQuickPartyRewardManager20get_dungeon_idx_listEv>
 8269c36:	8d 55 a0             	lea    -0x60(%ebp),%edx
 8269c39:	89 44 24 04          	mov    %eax,0x4(%esp)
 8269c3d:	89 14 24             	mov    %edx,(%esp)
 8269c40:	e8 09 37 e6 ff       	call   80cd34e <_ZNKSt6vectorIiSaIiEE5beginEv>
 8269c45:	83 ec 04             	sub    $0x4,%esp
 8269c48:	e8 41 25 e6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8269c4d:	89 04 24             	mov    %eax,(%esp)
 8269c50:	e8 cf f1 02 00       	call   8298e24 <_ZN12CGameManager26GetQuickPartyRewardManagerEv>
 8269c55:	89 04 24             	mov    %eax,(%esp)
 8269c58:	e8 39 3c 00 00       	call   826d896 <_ZN10QuickParty24CQuickPartyRewardManager20get_dungeon_idx_listEv>
 8269c5d:	8d 55 9c             	lea    -0x64(%ebp),%edx
 8269c60:	89 44 24 04          	mov    %eax,0x4(%esp)
 8269c64:	89 14 24             	mov    %edx,(%esp)
 8269c67:	e8 0e 37 e6 ff       	call   80cd37a <_ZNKSt6vectorIiSaIiEE3endEv>
 8269c6c:	83 ec 04             	sub    $0x4,%esp
 8269c6f:	eb 32                	jmp    8269ca3 <_ZN10QuickParty24CQuickPartySystemManager21init_quick_party_poolEPK8CDungeon+0x97>
 8269c71:	8b 45 0c             	mov    0xc(%ebp),%eax
 8269c74:	89 04 24             	mov    %eax,(%esp)
 8269c77:	e8 74 40 e9 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 8269c7c:	89 c3                	mov    %eax,%ebx
 8269c7e:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8269c81:	89 04 24             	mov    %eax,(%esp)
 8269c84:	e8 93 fd e8 ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 8269c89:	8b 00                	mov    (%eax),%eax
 8269c8b:	39 c3                	cmp    %eax,%ebx
 8269c8d:	0f 94 c0             	sete   %al
 8269c90:	84 c0                	test   %al,%al
 8269c92:	0f 85 8e 01 00 00    	jne    8269e26 <_ZN10QuickParty24CQuickPartySystemManager21init_quick_party_poolEPK8CDungeon+0x21a>
 8269c98:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8269c9b:	89 04 24             	mov    %eax,(%esp)
 8269c9e:	e8 63 fd e8 ff       	call   80f9a06 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEv>
 8269ca3:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8269ca6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8269caa:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8269cad:	89 04 24             	mov    %eax,(%esp)
 8269cb0:	e8 71 fd e8 ff       	call   80f9a26 <_ZN9__gnu_cxxneIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8269cb5:	84 c0                	test   %al,%al
 8269cb7:	75 b8                	jne    8269c71 <_ZN10QuickParty24CQuickPartySystemManager21init_quick_party_poolEPK8CDungeon+0x65>
 8269cb9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8269cbc:	89 04 24             	mov    %eax,(%esp)
 8269cbf:	e8 36 18 fc ff       	call   822b4fa <_ZNK8CDungeon23isTowerOfDespairDungeonEv>
 8269cc4:	84 c0                	test   %al,%al
 8269cc6:	0f 85 5d 01 00 00    	jne    8269e29 <_ZN10QuickParty24CQuickPartySystemManager21init_quick_party_poolEPK8CDungeon+0x21d>
 8269ccc:	8d 45 98             	lea    -0x68(%ebp),%eax
 8269ccf:	89 04 24             	mov    %eax,(%esp)
 8269cd2:	e8 f3 a7 fc ff       	call   82344ca <_ZN10QuickParty23STQuickPartyPoolMap_KeyC1Ev>
 8269cd7:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8269cdd:	89 04 24             	mov    %eax,(%esp)
 8269ce0:	e8 6f 1b 00 00       	call   826b854 <_ZN10QuickParty24STQuickPartyPoolMap_DataC1Ev>
 8269ce5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8269ce8:	89 04 24             	mov    %eax,(%esp)
 8269ceb:	e8 00 40 e9 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 8269cf0:	66 89 45 98          	mov    %ax,-0x68(%ebp)
 8269cf4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8269cfb:	e9 e4 00 00 00       	jmp    8269de4 <_ZN10QuickParty24CQuickPartySystemManager21init_quick_party_poolEPK8CDungeon+0x1d8>
 8269d00:	8b 45 0c             	mov    0xc(%ebp),%eax
 8269d03:	89 04 24             	mov    %eax,(%esp)
 8269d06:	e8 b5 17 fc ff       	call   822b4c0 <_ZNK8CDungeon14getDungeonKindEv>
 8269d0b:	83 f8 01             	cmp    $0x1,%eax
 8269d0e:	74 1e                	je     8269d2e <_ZN10QuickParty24CQuickPartySystemManager21init_quick_party_poolEPK8CDungeon+0x122>
 8269d10:	8b 45 0c             	mov    0xc(%ebp),%eax
 8269d13:	89 04 24             	mov    %eax,(%esp)
 8269d16:	e8 0d 1c 00 00       	call   826b928 <_ZNK8CDungeon22get_blood_dungeon_typeEv>
 8269d1b:	84 c0                	test   %al,%al
 8269d1d:	7f 0f                	jg     8269d2e <_ZN10QuickParty24CQuickPartySystemManager21init_quick_party_poolEPK8CDungeon+0x122>
 8269d1f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8269d22:	89 04 24             	mov    %eax,(%esp)
 8269d25:	e8 26 1c 00 00       	call   826b950 <_ZNK8CDungeon18getQuestNpcDungeonEv>
 8269d2a:	84 c0                	test   %al,%al
 8269d2c:	74 07                	je     8269d35 <_ZN10QuickParty24CQuickPartySystemManager21init_quick_party_poolEPK8CDungeon+0x129>
 8269d2e:	b8 01 00 00 00       	mov    $0x1,%eax
 8269d33:	eb 05                	jmp    8269d3a <_ZN10QuickParty24CQuickPartySystemManager21init_quick_party_poolEPK8CDungeon+0x12e>
 8269d35:	b8 00 00 00 00       	mov    $0x0,%eax
 8269d3a:	84 c0                	test   %al,%al
 8269d3c:	74 0a                	je     8269d48 <_ZN10QuickParty24CQuickPartySystemManager21init_quick_party_poolEPK8CDungeon+0x13c>
 8269d3e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8269d42:	0f 85 97 00 00 00    	jne    8269ddf <_ZN10QuickParty24CQuickPartySystemManager21init_quick_party_poolEPK8CDungeon+0x1d3>
 8269d48:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8269d4b:	88 45 9a             	mov    %al,-0x66(%ebp)
 8269d4e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8269d51:	8d 95 78 ff ff ff    	lea    -0x88(%ebp),%edx
 8269d57:	89 54 24 08          	mov    %edx,0x8(%esp)
 8269d5b:	8d 55 98             	lea    -0x68(%ebp),%edx
 8269d5e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8269d62:	89 04 24             	mov    %eax,(%esp)
 8269d65:	e8 97 1d 00 00       	call   826bb01 <_ZSt9make_pairIRN10QuickParty23STQuickPartyPoolMap_KeyERNS0_24STQuickPartyPoolMap_DataEESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 8269d6a:	83 ec 04             	sub    $0x4,%esp
 8269d6d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8269d70:	89 44 24 04          	mov    %eax,0x4(%esp)
 8269d74:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8269d77:	89 04 24             	mov    %eax,(%esp)
 8269d7a:	e8 41 1e 00 00       	call   826bbc0 <_ZNSt4pairIKN10QuickParty23STQuickPartyPoolMap_KeyENS0_24STQuickPartyPoolMap_DataEEC1IS1_S3_EEOS_IT_T0_E>
 8269d7f:	8b 55 08             	mov    0x8(%ebp),%edx
 8269d82:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8269d85:	8d 4d ac             	lea    -0x54(%ebp),%ecx
 8269d88:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8269d8c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8269d90:	89 04 24             	mov    %eax,(%esp)
 8269d93:	e8 68 1e 00 00       	call   826bc00 <_ZNSt3mapIN10QuickParty23STQuickPartyPoolMap_KeyENS0_24STQuickPartyPoolMap_DataESt4lessIS1_ESaISt4pairIKS1_S2_EEE6insertERKS7_>
 8269d98:	83 ec 04             	sub    $0x4,%esp
 8269d9b:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8269d9e:	89 04 24             	mov    %eax,(%esp)
 8269da1:	e8 70 1c 00 00       	call   826ba16 <_ZNSt4pairIKN10QuickParty23STQuickPartyPoolMap_KeyENS0_24STQuickPartyPoolMap_DataEED1Ev>
 8269da6:	eb 2a                	jmp    8269dd2 <_ZN10QuickParty24CQuickPartySystemManager21init_quick_party_poolEPK8CDungeon+0x1c6>
 8269da8:	89 d3                	mov    %edx,%ebx
 8269daa:	89 c6                	mov    %eax,%esi
 8269dac:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8269daf:	89 04 24             	mov    %eax,(%esp)
 8269db2:	e8 5f 1c 00 00       	call   826ba16 <_ZNSt4pairIKN10QuickParty23STQuickPartyPoolMap_KeyENS0_24STQuickPartyPoolMap_DataEED1Ev>
 8269db7:	89 f0                	mov    %esi,%eax
 8269db9:	89 da                	mov    %ebx,%edx
 8269dbb:	eb 00                	jmp    8269dbd <_ZN10QuickParty24CQuickPartySystemManager21init_quick_party_poolEPK8CDungeon+0x1b1>
 8269dbd:	89 d3                	mov    %edx,%ebx
 8269dbf:	89 c6                	mov    %eax,%esi
 8269dc1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8269dc4:	89 04 24             	mov    %eax,(%esp)
 8269dc7:	e8 34 1c 00 00       	call   826ba00 <_ZNSt4pairIN10QuickParty23STQuickPartyPoolMap_KeyENS0_24STQuickPartyPoolMap_DataEED1Ev>
 8269dcc:	89 f0                	mov    %esi,%eax
 8269dce:	89 da                	mov    %ebx,%edx
 8269dd0:	eb 23                	jmp    8269df5 <_ZN10QuickParty24CQuickPartySystemManager21init_quick_party_poolEPK8CDungeon+0x1e9>
 8269dd2:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8269dd5:	89 04 24             	mov    %eax,(%esp)
 8269dd8:	e8 23 1c 00 00       	call   826ba00 <_ZNSt4pairIN10QuickParty23STQuickPartyPoolMap_KeyENS0_24STQuickPartyPoolMap_DataEED1Ev>
 8269ddd:	eb 01                	jmp    8269de0 <_ZN10QuickParty24CQuickPartySystemManager21init_quick_party_poolEPK8CDungeon+0x1d4>
 8269ddf:	90                   	nop
 8269de0:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8269de4:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 8269de8:	0f 9e c0             	setle  %al
 8269deb:	84 c0                	test   %al,%al
 8269ded:	0f 85 0d ff ff ff    	jne    8269d00 <_ZN10QuickParty24CQuickPartySystemManager21init_quick_party_poolEPK8CDungeon+0xf4>
 8269df3:	eb 1e                	jmp    8269e13 <_ZN10QuickParty24CQuickPartySystemManager21init_quick_party_poolEPK8CDungeon+0x207>
 8269df5:	89 d3                	mov    %edx,%ebx
 8269df7:	89 c6                	mov    %eax,%esi
 8269df9:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8269dff:	89 04 24             	mov    %eax,(%esp)
 8269e02:	e8 cb 1b 00 00       	call   826b9d2 <_ZN10QuickParty24STQuickPartyPoolMap_DataD1Ev>
 8269e07:	89 f0                	mov    %esi,%eax
 8269e09:	89 da                	mov    %ebx,%edx
 8269e0b:	89 04 24             	mov    %eax,(%esp)
 8269e0e:	e8 3d 99 87 00       	call   8ae3750 <_Unwind_Resume>
 8269e13:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8269e19:	89 04 24             	mov    %eax,(%esp)
 8269e1c:	e8 b1 1b 00 00       	call   826b9d2 <_ZN10QuickParty24STQuickPartyPoolMap_DataD1Ev>
 8269e21:	eb 07                	jmp    8269e2a <_ZN10QuickParty24CQuickPartySystemManager21init_quick_party_poolEPK8CDungeon+0x21e>
 8269e23:	90                   	nop
 8269e24:	eb 04                	jmp    8269e2a <_ZN10QuickParty24CQuickPartySystemManager21init_quick_party_poolEPK8CDungeon+0x21e>
 8269e26:	90                   	nop
 8269e27:	eb 01                	jmp    8269e2a <_ZN10QuickParty24CQuickPartySystemManager21init_quick_party_poolEPK8CDungeon+0x21e>
 8269e29:	90                   	nop
 8269e2a:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8269e2d:	83 c4 00             	add    $0x0,%esp
 8269e30:	5b                   	pop    %ebx
 8269e31:	5e                   	pop    %esi
 8269e32:	5d                   	pop    %ebp
 8269e33:	c3                   	ret

```

```c
// QuickParty::CQuickPartySystemManager::init_quick_party_pool @ 0x8269c0c

/* QuickParty::CQuickPartySystemManager::init_quick_party_pool(CDungeon const*) */

void __thiscall
QuickParty::CQuickPartySystemManager::init_quick_party_pool
          (CQuickPartySystemManager *this,CDungeon *param_1)

{
  bool bVar1;
  char cVar2;
  CGameManager *pCVar3;
  CQuickPartyRewardManager *pCVar4;
  int *piVar5;
  int iVar6;
  STQuickPartyPoolMap_Data local_8c [32];
  undefined2 local_6c;
  undefined1 local_6a;
  __normal_iterator local_68 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_64 [4];
  pair local_60 [8];
  pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data> local_58 [36]
  ;
  STQuickPartyPoolMap_Key local_34 [36];
  int local_10;
  
  if (param_1 != (CDungeon *)0x0) {
    pCVar3 = (CGameManager *)G_CGameManager();
    pCVar4 = (CQuickPartyRewardManager *)CGameManager::GetQuickPartyRewardManager(pCVar3);
    CQuickPartyRewardManager::get_dungeon_idx_list(pCVar4);
    std::vector<int,std::allocator<int>>::begin();
    pCVar3 = (CGameManager *)G_CGameManager();
    pCVar4 = (CQuickPartyRewardManager *)CGameManager::GetQuickPartyRewardManager(pCVar3);
    CQuickPartyRewardManager::get_dungeon_idx_list(pCVar4);
    std::vector<int,std::allocator<int>>::end();
    while (bVar1 = __gnu_cxx::operator!=(local_64,local_68), bVar1) {
      iVar6 = CDungeon::get_index(param_1);
      piVar5 = (int *)__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                      ::operator*(local_64);
      if (iVar6 == *piVar5) {
        return;
      }
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                (local_64);
    }
    cVar2 = CDungeon::isTowerOfDespairDungeon(param_1);
    if (cVar2 == '\0') {
      STQuickPartyPoolMap_Key::STQuickPartyPoolMap_Key((STQuickPartyPoolMap_Key *)&local_6c);
      STQuickPartyPoolMap_Data::STQuickPartyPoolMap_Data(local_8c);
      local_6c = CDungeon::get_index(param_1);
      for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
        iVar6 = CDungeon::getDungeonKind(param_1);
        if (((iVar6 == 1) || (cVar2 = CDungeon::get_blood_dungeon_type(param_1), '\0' < cVar2)) ||
           (cVar2 = CDungeon::getQuestNpcDungeon(param_1), cVar2 != '\0')) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if ((!bVar1) || (local_10 == 0)) {
          local_6a = (undefined1)local_10;
                    /* try { // try from 08269d65 to 08269d69 has its CatchHandler @ 08269df5 */
          std::make_pair<QuickParty::STQuickPartyPoolMap_Key&,QuickParty::STQuickPartyPoolMap_Data&>
                    (local_34,(STQuickPartyPoolMap_Data *)&local_6c);
                    /* try { // try from 08269d7a to 08269d7e has its CatchHandler @ 08269dbd */
          std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>
          ::pair<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data>
                    (local_58,local_34);
                    /* try { // try from 08269d93 to 08269d97 has its CatchHandler @ 08269da8 */
          std::
          map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
          ::insert(local_60);
                    /* try { // try from 08269da1 to 08269da5 has its CatchHandler @ 08269dbd */
          std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>
          ::~pair(local_58);
                    /* try { // try from 08269dd8 to 08269ddc has its CatchHandler @ 08269df5 */
          std::pair<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data>::~pair
                    ((pair<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data>
                      *)local_34);
        }
      }
      STQuickPartyPoolMap_Data::~STQuickPartyPoolMap_Data(local_8c);
    }
  }
  return;
}

```

---

## insert_timer_waiting_party_matching

```asm
// === 0826acea QuickParty::CQuickPartySystemManager::insert_timer_waiting_party_matching  [0x0826acea-0x826ad4f] ===
 826acea:	55                   	push   %ebp
 826aceb:	89 e5                	mov    %esp,%ebp
 826aced:	56                   	push   %esi
 826acee:	53                   	push   %ebx
 826acef:	83 ec 20             	sub    $0x20,%esp
 826acf2:	c7 44 24 04 9e 00 00 	movl   $0x9e,0x4(%esp)
 826acf9:	00 
 826acfa:	8b 45 0c             	mov    0xc(%ebp),%eax
 826acfd:	89 04 24             	mov    %eax,(%esp)
 826ad00:	e8 7b e9 ff ff       	call   8269680 <_ZN10QuickParty11CQuickParty13gen_timer_keyE13TIMER_MESSAGE>
 826ad05:	89 c3                	mov    %eax,%ebx
 826ad07:	8b 45 0c             	mov    0xc(%ebp),%eax
 826ad0a:	89 04 24             	mov    %eax,(%esp)
 826ad0d:	e8 3c 0a 00 00       	call   826b74e <_ZNK10QuickParty11CQuickParty21get_quick_party_indexEv>
 826ad12:	89 c6                	mov    %eax,%esi
 826ad14:	e8 63 b7 e8 ff       	call   80f647c <_Z12G_TimerQueuev>
 826ad19:	c7 44 24 18 9e 00 00 	movl   $0x9e,0x18(%esp)
 826ad20:	00 
 826ad21:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 826ad25:	c7 44 24 10 14 00 00 	movl   $0x14,0x10(%esp)
 826ad2c:	00 
 826ad2d:	c7 44 24 0c 9e 00 00 	movl   $0x9e,0xc(%esp)
 826ad34:	00 
 826ad35:	89 74 24 08          	mov    %esi,0x8(%esp)
 826ad39:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 826ad40:	00 
 826ad41:	89 04 24             	mov    %eax,(%esp)
 826ad44:	e8 cd 60 3c 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 826ad49:	83 c4 20             	add    $0x20,%esp
 826ad4c:	5b                   	pop    %ebx
 826ad4d:	5e                   	pop    %esi
 826ad4e:	5d                   	pop    %ebp
 826ad4f:	c3                   	ret

```

```c
// QuickParty::CQuickPartySystemManager::insert_timer_waiting_party_matching @ 0x826acea

/* QuickParty::CQuickPartySystemManager::insert_timer_waiting_party_matching(QuickParty::CQuickParty*)
    */

void __thiscall
QuickParty::CQuickPartySystemManager::insert_timer_waiting_party_matching
          (CQuickPartySystemManager *this,CQuickParty *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  TimerQueue *pTVar3;
  
  uVar1 = CQuickParty::gen_timer_key(param_1,0x9e);
  uVar2 = CQuickParty::get_quick_party_index(param_1);
  pTVar3 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar3,1,uVar2,0x9e,0x14,uVar1,0x9e);
  return;
}

```

---

## insert_timer_waiting_start_game

```asm
// === 0826ad50 QuickParty::CQuickPartySystemManager::insert_timer_waiting_start_game  [0x0826ad50-0x826adb5] ===
 826ad50:	55                   	push   %ebp
 826ad51:	89 e5                	mov    %esp,%ebp
 826ad53:	56                   	push   %esi
 826ad54:	53                   	push   %ebx
 826ad55:	83 ec 20             	sub    $0x20,%esp
 826ad58:	c7 44 24 04 2d 00 00 	movl   $0x2d,0x4(%esp)
 826ad5f:	00 
 826ad60:	8b 45 0c             	mov    0xc(%ebp),%eax
 826ad63:	89 04 24             	mov    %eax,(%esp)
 826ad66:	e8 0b 01 33 00       	call   859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>
 826ad6b:	89 c6                	mov    %eax,%esi
 826ad6d:	8b 45 0c             	mov    0xc(%ebp),%eax
 826ad70:	89 04 24             	mov    %eax,(%esp)
 826ad73:	e8 ce 2a fc ff       	call   822d846 <_ZN6CParty13GetPartyIndexEv>
 826ad78:	89 c3                	mov    %eax,%ebx
 826ad7a:	e8 fd b6 e8 ff       	call   80f647c <_Z12G_TimerQueuev>
 826ad7f:	c7 44 24 18 2d 00 00 	movl   $0x2d,0x18(%esp)
 826ad86:	00 
 826ad87:	89 74 24 14          	mov    %esi,0x14(%esp)
 826ad8b:	c7 44 24 10 5a 00 00 	movl   $0x5a,0x10(%esp)
 826ad92:	00 
 826ad93:	c7 44 24 0c 2d 00 00 	movl   $0x2d,0xc(%esp)
 826ad9a:	00 
 826ad9b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 826ad9f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 826ada6:	00 
 826ada7:	89 04 24             	mov    %eax,(%esp)
 826adaa:	e8 67 60 3c 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 826adaf:	83 c4 20             	add    $0x20,%esp
 826adb2:	5b                   	pop    %ebx
 826adb3:	5e                   	pop    %esi
 826adb4:	5d                   	pop    %ebp
 826adb5:	c3                   	ret

```

```c
// QuickParty::CQuickPartySystemManager::insert_timer_waiting_start_game @ 0x826ad50

/* QuickParty::CQuickPartySystemManager::insert_timer_waiting_start_game(CParty*) */

void __thiscall
QuickParty::CQuickPartySystemManager::insert_timer_waiting_start_game
          (CQuickPartySystemManager *this,CParty *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  TimerQueue *pTVar3;
  
  uVar1 = CParty::gen_timer_key(param_1,0x2d);
  uVar2 = CParty::GetPartyIndex(param_1);
  pTVar3 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar3,1,uVar2,0x2d,0x5a,uVar1,0x2d);
  return;
}

```

---

## make_quick_party

```asm
// === 0826b222 QuickParty::CQuickPartySystemManager::make_quick_party  [0x0826b222-0x826b589] ===
 826b222:	55                   	push   %ebp
 826b223:	89 e5                	mov    %esp,%ebp
 826b225:	56                   	push   %esi
 826b226:	53                   	push   %ebx
 826b227:	83 ec 60             	sub    $0x60,%esp
 826b22a:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 826b22e:	75 0a                	jne    826b23a <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0x18>
 826b230:	bb 00 00 00 00       	mov    $0x0,%ebx
 826b235:	e9 44 03 00 00       	jmp    826b57e <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0x35c>
 826b23a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 826b23d:	89 04 24             	mov    %eax,(%esp)
 826b240:	e8 d3 0b 00 00       	call   826be18 <_ZNSt4listIP5CUserSaIS1_EEC1Ev>
 826b245:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 826b24c:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 826b253:	eb 6a                	jmp    826b2bf <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0x9d>
 826b255:	8b 45 d8             	mov    -0x28(%ebp),%eax
 826b258:	89 44 24 04          	mov    %eax,0x4(%esp)
 826b25c:	8b 45 0c             	mov    0xc(%ebp),%eax
 826b25f:	89 04 24             	mov    %eax,(%esp)
 826b262:	e8 85 e5 ff ff       	call   82697ec <_ZN10QuickParty11CQuickParty15get_party_indexEi>
 826b267:	89 45 dc             	mov    %eax,-0x24(%ebp)
 826b26a:	e8 1f 0f e6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 826b26f:	8b 55 dc             	mov    -0x24(%ebp),%edx
 826b272:	89 54 24 04          	mov    %edx,0x4(%esp)
 826b276:	89 04 24             	mov    %eax,(%esp)
 826b279:	e8 b4 9c 02 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 826b27e:	89 45 d0             	mov    %eax,-0x30(%ebp)
 826b281:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 826b285:	74 33                	je     826b2ba <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0x98>
 826b287:	8b 45 d0             	mov    -0x30(%ebp),%eax
 826b28a:	89 04 24             	mov    %eax,(%esp)
 826b28d:	e8 8a a5 ed ff       	call   814581c <_ZN6CParty12GetEPLPStateEv>
 826b292:	3c 01                	cmp    $0x1,%al
 826b294:	0f 9f c0             	setg   %al
 826b297:	84 c0                	test   %al,%al
 826b299:	74 08                	je     826b2a3 <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0x81>
 826b29b:	8b 45 d0             	mov    -0x30(%ebp),%eax
 826b29e:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 826b2a1:	eb 27                	jmp    826b2ca <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0xa8>
 826b2a3:	8b 45 d0             	mov    -0x30(%ebp),%eax
 826b2a6:	89 04 24             	mov    %eax,(%esp)
 826b2a9:	e8 a4 26 fc ff       	call   822d952 <_ZN6CParty14is_quick_partyEv>
 826b2ae:	84 c0                	test   %al,%al
 826b2b0:	74 09                	je     826b2bb <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0x99>
 826b2b2:	8b 45 d0             	mov    -0x30(%ebp),%eax
 826b2b5:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 826b2b8:	eb 01                	jmp    826b2bb <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0x99>
 826b2ba:	90                   	nop
 826b2bb:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 826b2bf:	83 7d d8 03          	cmpl   $0x3,-0x28(%ebp)
 826b2c3:	0f 9e c0             	setle  %al
 826b2c6:	84 c0                	test   %al,%al
 826b2c8:	75 8b                	jne    826b255 <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0x33>
 826b2ca:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 826b2ce:	0f 85 94 00 00 00    	jne    826b368 <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0x146>
 826b2d4:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 826b2db:	eb 36                	jmp    826b313 <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0xf1>
 826b2dd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 826b2e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 826b2e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 826b2e7:	89 04 24             	mov    %eax,(%esp)
 826b2ea:	e8 fd e4 ff ff       	call   82697ec <_ZN10QuickParty11CQuickParty15get_party_indexEi>
 826b2ef:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 826b2f2:	e8 97 0e e6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 826b2f7:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 826b2fa:	89 54 24 04          	mov    %edx,0x4(%esp)
 826b2fe:	89 04 24             	mov    %eax,(%esp)
 826b301:	e8 2c 9c 02 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 826b306:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 826b309:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 826b30d:	75 11                	jne    826b320 <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0xfe>
 826b30f:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 826b313:	83 7d e0 03          	cmpl   $0x3,-0x20(%ebp)
 826b317:	0f 9e c0             	setle  %al
 826b31a:	84 c0                	test   %al,%al
 826b31c:	75 bf                	jne    826b2dd <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0xbb>
 826b31e:	eb 01                	jmp    826b321 <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0xff>
 826b320:	90                   	nop
 826b321:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 826b325:	75 41                	jne    826b368 <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0x146>
 826b327:	8b 45 0c             	mov    0xc(%ebp),%eax
 826b32a:	89 04 24             	mov    %eax,(%esp)
 826b32d:	e8 98 e2 ff ff       	call   82695ca <_ZN10QuickParty11CQuickParty7destroyEv>
 826b332:	c7 44 24 10 0c 56 bf 	movl   $0x8bf560c,0x10(%esp)
 826b339:	08 
 826b33a:	c7 44 24 0c d0 03 00 	movl   $0x3d0,0xc(%esp)
 826b341:	00 
 826b342:	c7 44 24 08 00 63 bf 	movl   $0x8bf6300,0x8(%esp)
 826b349:	08 
 826b34a:	c7 44 24 04 01 54 bf 	movl   $0x8bf5401,0x4(%esp)
 826b351:	08 
 826b352:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 826b359:	e8 ac 88 86 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 826b35e:	bb 00 00 00 00       	mov    $0x0,%ebx
 826b363:	e9 0b 02 00 00       	jmp    826b573 <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0x351>
 826b368:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 826b36f:	00 
 826b370:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 826b373:	89 04 24             	mov    %eax,(%esp)
 826b376:	e8 fd 05 00 00       	call   826b978 <_ZN6CParty9set_stateEc>
 826b37b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 826b382:	00 
 826b383:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 826b386:	89 04 24             	mov    %eax,(%esp)
 826b389:	e8 a8 25 fc ff       	call   822d936 <_ZN6CParty15set_quick_partyEb>
 826b38e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 826b395:	00 
 826b396:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 826b399:	89 04 24             	mov    %eax,(%esp)
 826b39c:	e8 b1 24 fc ff       	call   822d852 <_ZN6CParty12setDungIndexEt>
 826b3a1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 826b3a8:	00 
 826b3a9:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 826b3ac:	89 04 24             	mov    %eax,(%esp)
 826b3af:	e8 bc 24 fc ff       	call   822d870 <_ZN6CParty12setDungDiffiEh>
 826b3b4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 826b3b7:	89 04 24             	mov    %eax,(%esp)
 826b3ba:	e8 cd 24 fc ff       	call   822d88c <_ZN6CParty13IsAutoCreatedEv>
 826b3bf:	84 c0                	test   %al,%al
 826b3c1:	74 42                	je     826b405 <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0x1e3>
 826b3c3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 826b3ca:	00 
 826b3cb:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 826b3ce:	89 04 24             	mov    %eax,(%esp)
 826b3d1:	e8 8a 05 00 00       	call   826b960 <_ZN6CParty13SetSinglePlayEb>
 826b3d6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 826b3dd:	00 
 826b3de:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 826b3e1:	89 04 24             	mov    %eax,(%esp)
 826b3e4:	e8 a7 05 00 00       	call   826b990 <_ZN6CParty14SetAutoCreatedEb>
 826b3e9:	e8 b9 ef e6 ff       	call   80da3a7 <_Z11G_GameWorldv>
 826b3ee:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 826b3f5:	00 
 826b3f6:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 826b3f9:	89 54 24 04          	mov    %edx,0x4(%esp)
 826b3fd:	89 04 24             	mov    %eax,(%esp)
 826b400:	e8 85 d3 45 00       	call   86c878a <_ZN9GameWorld22send_party_info_to_allEP6CPartyi>
 826b405:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 826b40c:	e9 b4 00 00 00       	jmp    826b4c5 <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0x2a3>
 826b411:	8b 45 e8             	mov    -0x18(%ebp),%eax
 826b414:	89 44 24 04          	mov    %eax,0x4(%esp)
 826b418:	8b 45 0c             	mov    0xc(%ebp),%eax
 826b41b:	89 04 24             	mov    %eax,(%esp)
 826b41e:	e8 c9 e3 ff ff       	call   82697ec <_ZN10QuickParty11CQuickParty15get_party_indexEi>
 826b423:	89 45 ec             	mov    %eax,-0x14(%ebp)
 826b426:	83 7d ec ff          	cmpl   $0xffffffff,-0x14(%ebp)
 826b42a:	0f 84 8a 00 00 00    	je     826b4ba <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0x298>
 826b430:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 826b437:	e8 52 0d e6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 826b43c:	8b 55 ec             	mov    -0x14(%ebp),%edx
 826b43f:	89 54 24 04          	mov    %edx,0x4(%esp)
 826b443:	89 04 24             	mov    %eax,(%esp)
 826b446:	e8 e7 9a 02 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 826b44b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 826b44e:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 826b452:	74 69                	je     826b4bd <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0x29b>
 826b454:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826b457:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 826b45a:	74 64                	je     826b4c0 <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0x29e>
 826b45c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 826b463:	eb 48                	jmp    826b4ad <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0x28b>
 826b465:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826b468:	89 44 24 04          	mov    %eax,0x4(%esp)
 826b46c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826b46f:	89 04 24             	mov    %eax,(%esp)
 826b472:	e8 f1 a3 ed ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 826b477:	83 f0 01             	xor    $0x1,%eax
 826b47a:	84 c0                	test   %al,%al
 826b47c:	75 2a                	jne    826b4a8 <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0x286>
 826b47e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826b481:	89 44 24 04          	mov    %eax,0x4(%esp)
 826b485:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826b488:	89 04 24             	mov    %eax,(%esp)
 826b48b:	e8 d4 a2 ed ff       	call   8145764 <_ZN6CParty8get_userEi>
 826b490:	8d 55 c8             	lea    -0x38(%ebp),%edx
 826b493:	89 54 24 08          	mov    %edx,0x8(%esp)
 826b497:	89 44 24 04          	mov    %eax,0x4(%esp)
 826b49b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826b49e:	89 04 24             	mov    %eax,(%esp)
 826b4a1:	e8 86 00 33 00       	call   859b52c <_ZN6CParty28delete_party_for_quick_partyEP5CUserRSt4listIS1_SaIS1_EE>
 826b4a6:	eb 01                	jmp    826b4a9 <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0x287>
 826b4a8:	90                   	nop
 826b4a9:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 826b4ad:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 826b4b1:	0f 9e c0             	setle  %al
 826b4b4:	84 c0                	test   %al,%al
 826b4b6:	75 ad                	jne    826b465 <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0x243>
 826b4b8:	eb 07                	jmp    826b4c1 <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0x29f>
 826b4ba:	90                   	nop
 826b4bb:	eb 04                	jmp    826b4c1 <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0x29f>
 826b4bd:	90                   	nop
 826b4be:	eb 01                	jmp    826b4c1 <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0x29f>
 826b4c0:	90                   	nop
 826b4c1:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 826b4c5:	83 7d e8 03          	cmpl   $0x3,-0x18(%ebp)
 826b4c9:	0f 9e c0             	setle  %al
 826b4cc:	84 c0                	test   %al,%al
 826b4ce:	0f 85 3d ff ff ff    	jne    826b411 <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0x1ef>
 826b4d4:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 826b4d7:	8d 55 c8             	lea    -0x38(%ebp),%edx
 826b4da:	89 54 24 04          	mov    %edx,0x4(%esp)
 826b4de:	89 04 24             	mov    %eax,(%esp)
 826b4e1:	e8 9c 09 00 00       	call   826be82 <_ZNSt4listIP5CUserSaIS1_EE5beginEv>
 826b4e6:	83 ec 04             	sub    $0x4,%esp
 826b4e9:	8d 45 c0             	lea    -0x40(%ebp),%eax
 826b4ec:	8d 55 c8             	lea    -0x38(%ebp),%edx
 826b4ef:	89 54 24 04          	mov    %edx,0x4(%esp)
 826b4f3:	89 04 24             	mov    %eax,(%esp)
 826b4f6:	e8 ad 09 00 00       	call   826bea8 <_ZNSt4listIP5CUserSaIS1_EE3endEv>
 826b4fb:	83 ec 04             	sub    $0x4,%esp
 826b4fe:	eb 27                	jmp    826b527 <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0x305>
 826b500:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 826b503:	89 04 24             	mov    %eax,(%esp)
 826b506:	e8 e9 09 00 00       	call   826bef4 <_ZNKSt14_List_iteratorIP5CUserEdeEv>
 826b50b:	8b 00                	mov    (%eax),%eax
 826b50d:	89 44 24 04          	mov    %eax,0x4(%esp)
 826b511:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 826b514:	89 04 24             	mov    %eax,(%esp)
 826b517:	e8 9a fd 32 00       	call   859b2b6 <_ZN6CParty9join_userEP5CUser>
 826b51c:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 826b51f:	89 04 24             	mov    %eax,(%esp)
 826b522:	e8 b9 09 00 00       	call   826bee0 <_ZNSt14_List_iteratorIP5CUserEppEv>
 826b527:	8d 45 c0             	lea    -0x40(%ebp),%eax
 826b52a:	89 44 24 04          	mov    %eax,0x4(%esp)
 826b52e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 826b531:	89 04 24             	mov    %eax,(%esp)
 826b534:	e8 93 09 00 00       	call   826becc <_ZNKSt14_List_iteratorIP5CUserEneERKS2_>
 826b539:	84 c0                	test   %al,%al
 826b53b:	75 c3                	jne    826b500 <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0x2de>
 826b53d:	8b 45 0c             	mov    0xc(%ebp),%eax
 826b540:	89 04 24             	mov    %eax,(%esp)
 826b543:	e8 82 e0 ff ff       	call   82695ca <_ZN10QuickParty11CQuickParty7destroyEv>
 826b548:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 826b54b:	89 04 24             	mov    %eax,(%esp)
 826b54e:	e8 91 fe 32 00       	call   859b3e4 <_ZN6CParty21init_quick_party_dataEv>
 826b553:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 826b556:	eb 1b                	jmp    826b573 <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE+0x351>
 826b558:	89 d3                	mov    %edx,%ebx
 826b55a:	89 c6                	mov    %eax,%esi
 826b55c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 826b55f:	89 04 24             	mov    %eax,(%esp)
 826b562:	e8 c5 04 00 00       	call   826ba2c <_ZNSt4listIP5CUserSaIS1_EED1Ev>
 826b567:	89 f0                	mov    %esi,%eax
 826b569:	89 da                	mov    %ebx,%edx
 826b56b:	89 04 24             	mov    %eax,(%esp)
 826b56e:	e8 dd 81 87 00       	call   8ae3750 <_Unwind_Resume>
 826b573:	8d 45 c8             	lea    -0x38(%ebp),%eax
 826b576:	89 04 24             	mov    %eax,(%esp)
 826b579:	e8 ae 04 00 00       	call   826ba2c <_ZNSt4listIP5CUserSaIS1_EED1Ev>
 826b57e:	89 d8                	mov    %ebx,%eax
 826b580:	8d 65 f8             	lea    -0x8(%ebp),%esp
 826b583:	83 c4 00             	add    $0x0,%esp
 826b586:	5b                   	pop    %ebx
 826b587:	5e                   	pop    %esi
 826b588:	5d                   	pop    %ebp
 826b589:	c3                   	ret

```

```c
// QuickParty::CQuickPartySystemManager::make_quick_party @ 0x826b222

/* QuickParty::CQuickPartySystemManager::make_quick_party(QuickParty::CQuickParty*) */

CParty * __thiscall
QuickParty::CQuickPartySystemManager::make_quick_party
          (CQuickPartySystemManager *this,CQuickParty *param_1)

{
  char cVar1;
  GameWorld *this_00;
  int iVar2;
  CUser *pCVar3;
  undefined4 *puVar4;
  CParty *pCVar5;
  _List_iterator local_44 [4];
  _List_iterator<CUser*> local_40 [4];
  list<CUser*,std::allocator<CUser*>> local_3c [8];
  CParty *local_34;
  CParty *local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  CParty *local_14;
  int local_10;
  
  if (param_1 == (CQuickParty *)0x0) {
    return (CParty *)0x0;
  }
  std::list<CUser*,std::allocator<CUser*>>::list(local_3c);
  local_30 = (CParty *)0x0;
  for (local_2c = 0; local_2c < 4; local_2c = local_2c + 1) {
    local_28 = CQuickParty::get_party_index(param_1,local_2c);
                    /* try { // try from 0826b26a to 0826b552 has its CatchHandler @ 0826b558 */
    iVar2 = G_CGameManager();
    local_34 = (CParty *)CGameManager::GetParty(iVar2);
    if (local_34 != (CParty *)0x0) {
      cVar1 = CParty::GetEPLPState(local_34);
      if ('\x01' < cVar1) {
        local_30 = local_34;
        break;
      }
      cVar1 = CParty::is_quick_party(local_34);
      if (cVar1 != '\0') {
        local_30 = local_34;
      }
    }
  }
  if (local_30 == (CParty *)0x0) {
    for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
      local_20 = CQuickParty::get_party_index(param_1,local_24);
      iVar2 = G_CGameManager();
      local_30 = (CParty *)CGameManager::GetParty(iVar2);
      if (local_30 != (CParty *)0x0) break;
    }
    if (local_30 == (CParty *)0x0) {
      CQuickParty::destroy(param_1);
      LogManager::logFormat
                (1,"QuickParty.cpp",
                 "CParty* QuickParty::CQuickPartySystemManager::make_quick_party(QuickParty::CQuickParty*)"
                 ,0x3d0,"QUICK_PARTY_LOG : PARTY IS NULL!!");
      pCVar5 = (CParty *)0x0;
      goto LAB_0826b573;
    }
  }
  CParty::set_state(local_30,'\x01');
  CParty::set_quick_party(local_30,true);
  CParty::setDungIndex(local_30,1);
  CParty::setDungDiffi(local_30,'\0');
  cVar1 = CParty::IsAutoCreated(local_30);
  if (cVar1 != '\0') {
    CParty::SetSinglePlay(local_30,false);
    CParty::SetAutoCreated(local_30,false);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_party_info_to_all(this_00,local_30,0);
  }
  for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
    local_18 = CQuickParty::get_party_index(param_1,local_1c);
    if (local_18 != -1) {
      local_14 = (CParty *)0x0;
      iVar2 = G_CGameManager();
      local_14 = (CParty *)CGameManager::GetParty(iVar2);
      if ((local_14 != (CParty *)0x0) && (local_14 != local_30)) {
        for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
          cVar1 = CParty::checkValidUser(local_14,local_10);
          if (cVar1 == '\x01') {
            pCVar3 = (CUser *)CParty::get_user(local_14,local_10);
            CParty::delete_party_for_quick_party(local_14,pCVar3,(list *)local_3c);
          }
        }
      }
    }
  }
  std::list<CUser*,std::allocator<CUser*>>::begin();
  std::list<CUser*,std::allocator<CUser*>>::end();
  while (cVar1 = std::_List_iterator<CUser*>::operator!=(local_40,local_44), cVar1 != '\0') {
    puVar4 = (undefined4 *)std::_List_iterator<CUser*>::operator*(local_40);
    CParty::join_user(local_30,(CUser *)*puVar4);
    std::_List_iterator<CUser*>::operator++(local_40);
  }
  CQuickParty::destroy(param_1);
  CParty::init_quick_party_data(local_30);
  pCVar5 = local_30;
LAB_0826b573:
  std::list<CUser*,std::allocator<CUser*>>::~list(local_3c);
  return pCVar5;
}

```

---

## match_proper_party

```asm
// === 08269f3c QuickParty::CQuickPartySystemManager::match_proper_party  [0x08269f3c-0x826a385] ===
 8269f3c:	55                   	push   %ebp
 8269f3d:	89 e5                	mov    %esp,%ebp
 8269f3f:	53                   	push   %ebx
 8269f40:	83 ec 74             	sub    $0x74,%esp
 8269f43:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8269f47:	74 10                	je     8269f59 <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser+0x1d>
 8269f49:	8b 45 10             	mov    0x10(%ebp),%eax
 8269f4c:	89 04 24             	mov    %eax,(%esp)
 8269f4f:	e8 d4 39 fc ff       	call   822d928 <_ZN6CParty21get_quick_party_indexEv>
 8269f54:	83 f8 ff             	cmp    $0xffffffff,%eax
 8269f57:	74 07                	je     8269f60 <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser+0x24>
 8269f59:	b8 01 00 00 00       	mov    $0x1,%eax
 8269f5e:	eb 05                	jmp    8269f65 <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser+0x29>
 8269f60:	b8 00 00 00 00       	mov    $0x0,%eax
 8269f65:	84 c0                	test   %al,%al
 8269f67:	0f 84 8e 00 00 00    	je     8269ffb <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser+0xbf>
 8269f6d:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8269f71:	75 43                	jne    8269fb6 <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser+0x7a>
 8269f73:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8269f77:	74 3d                	je     8269fb6 <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser+0x7a>
 8269f79:	8b 45 14             	mov    0x14(%ebp),%eax
 8269f7c:	89 04 24             	mov    %eax,(%esp)
 8269f7f:	e8 ca 1c e6 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8269f84:	89 44 24 14          	mov    %eax,0x14(%esp)
 8269f88:	c7 44 24 10 10 54 bf 	movl   $0x8bf5410,0x10(%esp)
 8269f8f:	08 
 8269f90:	c7 44 24 0c 86 01 00 	movl   $0x186,0xc(%esp)
 8269f97:	00 
 8269f98:	c7 44 24 08 60 66 bf 	movl   $0x8bf6660,0x8(%esp)
 8269f9f:	08 
 8269fa0:	c7 44 24 04 01 54 bf 	movl   $0x8bf5401,0x4(%esp)
 8269fa7:	08 
 8269fa8:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8269faf:	e8 56 9c 86 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8269fb4:	eb 3b                	jmp    8269ff1 <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser+0xb5>
 8269fb6:	8b 45 10             	mov    0x10(%ebp),%eax
 8269fb9:	89 04 24             	mov    %eax,(%esp)
 8269fbc:	e8 67 39 fc ff       	call   822d928 <_ZN6CParty21get_quick_party_indexEv>
 8269fc1:	89 44 24 14          	mov    %eax,0x14(%esp)
 8269fc5:	c7 44 24 10 38 54 bf 	movl   $0x8bf5438,0x10(%esp)
 8269fcc:	08 
 8269fcd:	c7 44 24 0c 88 01 00 	movl   $0x188,0xc(%esp)
 8269fd4:	00 
 8269fd5:	c7 44 24 08 60 66 bf 	movl   $0x8bf6660,0x8(%esp)
 8269fdc:	08 
 8269fdd:	c7 44 24 04 01 54 bf 	movl   $0x8bf5401,0x4(%esp)
 8269fe4:	08 
 8269fe5:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8269fec:	e8 19 9c 86 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8269ff1:	b8 12 00 00 00       	mov    $0x12,%eax
 8269ff6:	e9 85 03 00 00       	jmp    826a380 <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser+0x444>
 8269ffb:	8b 45 10             	mov    0x10(%ebp),%eax
 8269ffe:	89 44 24 08          	mov    %eax,0x8(%esp)
 826a002:	8b 45 0c             	mov    0xc(%ebp),%eax
 826a005:	89 44 24 04          	mov    %eax,0x4(%esp)
 826a009:	8b 45 08             	mov    0x8(%ebp),%eax
 826a00c:	89 04 24             	mov    %eax,(%esp)
 826a00f:	e8 20 fe ff ff       	call   8269e34 <_ZN10QuickParty24CQuickPartySystemManager24check_match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CParty>
 826a014:	89 45 dc             	mov    %eax,-0x24(%ebp)
 826a017:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 826a01b:	74 08                	je     826a025 <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser+0xe9>
 826a01d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 826a020:	e9 5b 03 00 00       	jmp    826a380 <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser+0x444>
 826a025:	8b 45 10             	mov    0x10(%ebp),%eax
 826a028:	89 04 24             	mov    %eax,(%esp)
 826a02b:	e8 3a 01 33 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 826a030:	89 45 e0             	mov    %eax,-0x20(%ebp)
 826a033:	8b 45 0c             	mov    0xc(%ebp),%eax
 826a036:	0f b7 00             	movzwl (%eax),%eax
 826a039:	0f bf d8             	movswl %ax,%ebx
 826a03c:	e8 5a 21 e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 826a041:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 826a045:	89 04 24             	mov    %eax,(%esp)
 826a048:	e8 ab 59 0f 00       	call   835f9f8 <_ZNK12CDataManager12find_dungeonEi>
 826a04d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 826a050:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 826a054:	75 0a                	jne    826a060 <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser+0x124>
 826a056:	b8 01 00 00 00       	mov    $0x1,%eax
 826a05b:	e9 20 03 00 00       	jmp    826a380 <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser+0x444>
 826a060:	c7 45 e8 04 00 00 00 	movl   $0x4,-0x18(%ebp)
 826a067:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 826a06a:	89 04 24             	mov    %eax,(%esp)
 826a06d:	e8 b6 18 00 00       	call   826b928 <_ZNK8CDungeon22get_blood_dungeon_typeEv>
 826a072:	3c 02                	cmp    $0x2,%al
 826a074:	0f 94 c0             	sete   %al
 826a077:	84 c0                	test   %al,%al
 826a079:	74 11                	je     826a08c <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser+0x150>
 826a07b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 826a07e:	89 04 24             	mov    %eax,(%esp)
 826a081:	e8 2e 14 fc ff       	call   822b4b4 <_ZNK8CDungeon21get_limit_party_countEv>
 826a086:	0f be c0             	movsbl %al,%eax
 826a089:	89 45 e8             	mov    %eax,-0x18(%ebp)
 826a08c:	8b 55 08             	mov    0x8(%ebp),%edx
 826a08f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 826a092:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 826a095:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 826a099:	89 54 24 04          	mov    %edx,0x4(%esp)
 826a09d:	89 04 24             	mov    %eax,(%esp)
 826a0a0:	e8 87 1b 00 00       	call   826bc2c <_ZNSt3mapIN10QuickParty23STQuickPartyPoolMap_KeyENS0_24STQuickPartyPoolMap_DataESt4lessIS1_ESaISt4pairIKS1_S2_EEE4findERS6_>
 826a0a5:	83 ec 04             	sub    $0x4,%esp
 826a0a8:	8b 55 08             	mov    0x8(%ebp),%edx
 826a0ab:	8d 45 b8             	lea    -0x48(%ebp),%eax
 826a0ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 826a0b2:	89 04 24             	mov    %eax,(%esp)
 826a0b5:	e8 9e 1b 00 00       	call   826bc58 <_ZNSt3mapIN10QuickParty23STQuickPartyPoolMap_KeyENS0_24STQuickPartyPoolMap_DataESt4lessIS1_ESaISt4pairIKS1_S2_EEE3endEv>
 826a0ba:	83 ec 04             	sub    $0x4,%esp
 826a0bd:	8d 45 b8             	lea    -0x48(%ebp),%eax
 826a0c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 826a0c4:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 826a0c7:	89 04 24             	mov    %eax,(%esp)
 826a0ca:	e8 af 1b 00 00       	call   826bc7e <_ZNKSt17_Rb_tree_iteratorISt4pairIKN10QuickParty23STQuickPartyPoolMap_KeyENS1_24STQuickPartyPoolMap_DataEEEneERKS6_>
 826a0cf:	84 c0                	test   %al,%al
 826a0d1:	0f 84 6e 02 00 00    	je     826a345 <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser+0x409>
 826a0d7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 826a0da:	8b 55 e8             	mov    -0x18(%ebp),%edx
 826a0dd:	89 d1                	mov    %edx,%ecx
 826a0df:	29 c1                	sub    %eax,%ecx
 826a0e1:	89 c8                	mov    %ecx,%eax
 826a0e3:	89 45 ec             	mov    %eax,-0x14(%ebp)
 826a0e6:	e9 fc 01 00 00       	jmp    826a2e7 <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser+0x3ab>
 826a0eb:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 826a0ee:	89 04 24             	mov    %eax,(%esp)
 826a0f1:	e8 9c 1b 00 00       	call   826bc92 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN10QuickParty23STQuickPartyPoolMap_KeyENS1_24STQuickPartyPoolMap_DataEEEptEv>
 826a0f6:	8b 55 ec             	mov    -0x14(%ebp),%edx
 826a0f9:	c1 e2 03             	shl    $0x3,%edx
 826a0fc:	01 d0                	add    %edx,%eax
 826a0fe:	83 c0 04             	add    $0x4,%eax
 826a101:	89 04 24             	mov    %eax,(%esp)
 826a104:	e8 6d ba fc ff       	call   8235b76 <_ZNKSt4listIiSaIiEE4sizeEv>
 826a109:	85 c0                	test   %eax,%eax
 826a10b:	0f 95 c0             	setne  %al
 826a10e:	84 c0                	test   %al,%al
 826a110:	0f 84 cd 01 00 00    	je     826a2e3 <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser+0x3a7>
 826a116:	8b 45 e0             	mov    -0x20(%ebp),%eax
 826a119:	8b 55 ec             	mov    -0x14(%ebp),%edx
 826a11c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 826a11f:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 826a122:	0f 85 66 01 00 00    	jne    826a28e <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser+0x352>
 826a128:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 826a12f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 826a132:	89 04 24             	mov    %eax,(%esp)
 826a135:	e8 58 1b 00 00       	call   826bc92 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN10QuickParty23STQuickPartyPoolMap_KeyENS1_24STQuickPartyPoolMap_DataEEEptEv>
 826a13a:	8b 55 ec             	mov    -0x14(%ebp),%edx
 826a13d:	c1 e2 03             	shl    $0x3,%edx
 826a140:	01 d0                	add    %edx,%eax
 826a142:	83 c0 04             	add    $0x4,%eax
 826a145:	89 44 24 04          	mov    %eax,0x4(%esp)
 826a149:	8b 45 08             	mov    0x8(%ebp),%eax
 826a14c:	89 04 24             	mov    %eax,(%esp)
 826a14f:	e8 aa 08 00 00       	call   826a9fe <_ZN10QuickParty24CQuickPartySystemManager24find_quick_party_in_poolERSt4listIiSaIiEE>
 826a154:	89 45 f0             	mov    %eax,-0x10(%ebp)
 826a157:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 826a15b:	0f 84 81 01 00 00    	je     826a2e2 <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser+0x3a6>
 826a161:	8b 45 10             	mov    0x10(%ebp),%eax
 826a164:	89 04 24             	mov    %eax,(%esp)
 826a167:	e8 da 36 fc ff       	call   822d846 <_ZN6CParty13GetPartyIndexEv>
 826a16c:	89 44 24 04          	mov    %eax,0x4(%esp)
 826a170:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826a173:	89 04 24             	mov    %eax,(%esp)
 826a176:	e8 11 f6 ff ff       	call   826978c <_ZN10QuickParty11CQuickParty15set_party_indexEi>
 826a17b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826a17e:	89 04 24             	mov    %eax,(%esp)
 826a181:	e8 38 f7 ff ff       	call   82698be <_ZN10QuickParty11CQuickParty21get_quick_party_countEv>
 826a186:	89 45 f4             	mov    %eax,-0xc(%ebp)
 826a189:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826a18c:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 826a18f:	0f 84 dd 00 00 00    	je     826a272 <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser+0x336>
 826a195:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826a198:	89 04 24             	mov    %eax,(%esp)
 826a19b:	e8 ae 15 00 00       	call   826b74e <_ZNK10QuickParty11CQuickParty21get_quick_party_indexEv>
 826a1a0:	89 c3                	mov    %eax,%ebx
 826a1a2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 826a1a9:	00 
 826a1aa:	c7 44 24 08 b4 01 00 	movl   $0x1b4,0x8(%esp)
 826a1b1:	00 
 826a1b2:	c7 44 24 04 60 66 bf 	movl   $0x8bf6660,0x4(%esp)
 826a1b9:	08 
 826a1ba:	8d 45 bc             	lea    -0x44(%ebp),%eax
 826a1bd:	89 04 24             	mov    %eax,(%esp)
 826a1c0:	e8 53 55 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 826a1c5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826a1c8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 826a1cc:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 826a1d0:	c7 44 24 04 6c 54 bf 	movl   $0x8bf546c,0x4(%esp)
 826a1d7:	08 
 826a1d8:	8d 45 bc             	lea    -0x44(%ebp),%eax
 826a1db:	89 04 24             	mov    %eax,(%esp)
 826a1de:	e8 a5 55 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 826a1e3:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 826a1e6:	89 04 24             	mov    %eax,(%esp)
 826a1e9:	e8 a4 1a 00 00       	call   826bc92 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN10QuickParty23STQuickPartyPoolMap_KeyENS1_24STQuickPartyPoolMap_DataEEEptEv>
 826a1ee:	8d 50 04             	lea    0x4(%eax),%edx
 826a1f1:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 826a1f8:	00 
 826a1f9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826a1fc:	89 44 24 14          	mov    %eax,0x14(%esp)
 826a200:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826a203:	89 44 24 10          	mov    %eax,0x10(%esp)
 826a207:	8b 45 10             	mov    0x10(%ebp),%eax
 826a20a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 826a20e:	89 54 24 08          	mov    %edx,0x8(%esp)
 826a212:	8b 45 0c             	mov    0xc(%ebp),%eax
 826a215:	89 44 24 04          	mov    %eax,0x4(%esp)
 826a219:	8b 45 08             	mov    0x8(%ebp),%eax
 826a21c:	89 04 24             	mov    %eax,(%esp)
 826a21f:	e8 90 0d 00 00       	call   826afb4 <_ZN10QuickParty24CQuickPartySystemManager24push_quick_party_in_poolERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEP6CPartyiPNS_11CQuickPartyEb>
 826a224:	83 f0 01             	xor    $0x1,%eax
 826a227:	84 c0                	test   %al,%al
 826a229:	74 3d                	je     826a268 <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser+0x32c>
 826a22b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826a22e:	89 44 24 14          	mov    %eax,0x14(%esp)
 826a232:	c7 44 24 10 c8 54 bf 	movl   $0x8bf54c8,0x10(%esp)
 826a239:	08 
 826a23a:	c7 44 24 0c bc 01 00 	movl   $0x1bc,0xc(%esp)
 826a241:	00 
 826a242:	c7 44 24 08 60 66 bf 	movl   $0x8bf6660,0x8(%esp)
 826a249:	08 
 826a24a:	c7 44 24 04 01 54 bf 	movl   $0x8bf5401,0x4(%esp)
 826a251:	08 
 826a252:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 826a259:	e8 ac 99 86 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 826a25e:	b8 01 00 00 00       	mov    $0x1,%eax
 826a263:	e9 18 01 00 00       	jmp    826a380 <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser+0x444>
 826a268:	b8 00 00 00 00       	mov    $0x0,%eax
 826a26d:	e9 0e 01 00 00       	jmp    826a380 <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser+0x444>
 826a272:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826a275:	89 44 24 04          	mov    %eax,0x4(%esp)
 826a279:	8b 45 08             	mov    0x8(%ebp),%eax
 826a27c:	89 04 24             	mov    %eax,(%esp)
 826a27f:	e8 06 13 00 00       	call   826b58a <_ZN10QuickParty24CQuickPartySystemManager10start_gameEPNS_11CQuickPartyE>
 826a284:	b8 00 00 00 00       	mov    $0x0,%eax
 826a289:	e9 f2 00 00 00       	jmp    826a380 <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser+0x444>
 826a28e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 826a291:	89 04 24             	mov    %eax,(%esp)
 826a294:	e8 f9 19 00 00       	call   826bc92 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN10QuickParty23STQuickPartyPoolMap_KeyENS1_24STQuickPartyPoolMap_DataEEEptEv>
 826a299:	8d 50 04             	lea    0x4(%eax),%edx
 826a29c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 826a29f:	89 44 24 14          	mov    %eax,0x14(%esp)
 826a2a3:	8b 45 10             	mov    0x10(%ebp),%eax
 826a2a6:	89 44 24 10          	mov    %eax,0x10(%esp)
 826a2aa:	8b 45 ec             	mov    -0x14(%ebp),%eax
 826a2ad:	89 44 24 0c          	mov    %eax,0xc(%esp)
 826a2b1:	89 54 24 08          	mov    %edx,0x8(%esp)
 826a2b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 826a2b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 826a2bc:	8b 45 08             	mov    0x8(%ebp),%eax
 826a2bf:	89 04 24             	mov    %eax,(%esp)
 826a2c2:	e8 ef 0a 00 00       	call   826adb6 <_ZN10QuickParty24CQuickPartySystemManager18regist_quick_partyERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEiP6CPartyi>
 826a2c7:	83 f0 01             	xor    $0x1,%eax
 826a2ca:	84 c0                	test   %al,%al
 826a2cc:	74 0a                	je     826a2d8 <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser+0x39c>
 826a2ce:	b8 01 00 00 00       	mov    $0x1,%eax
 826a2d3:	e9 a8 00 00 00       	jmp    826a380 <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser+0x444>
 826a2d8:	b8 00 00 00 00       	mov    $0x0,%eax
 826a2dd:	e9 9e 00 00 00       	jmp    826a380 <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser+0x444>
 826a2e2:	90                   	nop
 826a2e3:	83 6d ec 01          	subl   $0x1,-0x14(%ebp)
 826a2e7:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 826a2eb:	0f 9f c0             	setg   %al
 826a2ee:	84 c0                	test   %al,%al
 826a2f0:	0f 85 f5 fd ff ff    	jne    826a0eb <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser+0x1af>
 826a2f6:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 826a2f9:	89 04 24             	mov    %eax,(%esp)
 826a2fc:	e8 91 19 00 00       	call   826bc92 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN10QuickParty23STQuickPartyPoolMap_KeyENS1_24STQuickPartyPoolMap_DataEEEptEv>
 826a301:	8d 50 04             	lea    0x4(%eax),%edx
 826a304:	8b 45 e0             	mov    -0x20(%ebp),%eax
 826a307:	89 44 24 14          	mov    %eax,0x14(%esp)
 826a30b:	8b 45 10             	mov    0x10(%ebp),%eax
 826a30e:	89 44 24 10          	mov    %eax,0x10(%esp)
 826a312:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 826a319:	00 
 826a31a:	89 54 24 08          	mov    %edx,0x8(%esp)
 826a31e:	8b 45 0c             	mov    0xc(%ebp),%eax
 826a321:	89 44 24 04          	mov    %eax,0x4(%esp)
 826a325:	8b 45 08             	mov    0x8(%ebp),%eax
 826a328:	89 04 24             	mov    %eax,(%esp)
 826a32b:	e8 86 0a 00 00       	call   826adb6 <_ZN10QuickParty24CQuickPartySystemManager18regist_quick_partyERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEiP6CPartyi>
 826a330:	83 f0 01             	xor    $0x1,%eax
 826a333:	84 c0                	test   %al,%al
 826a335:	74 07                	je     826a33e <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser+0x402>
 826a337:	b8 01 00 00 00       	mov    $0x1,%eax
 826a33c:	eb 42                	jmp    826a380 <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser+0x444>
 826a33e:	b8 00 00 00 00       	mov    $0x0,%eax
 826a343:	eb 3b                	jmp    826a380 <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser+0x444>
 826a345:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 826a34c:	00 
 826a34d:	c7 44 24 08 d6 01 00 	movl   $0x1d6,0x8(%esp)
 826a354:	00 
 826a355:	c7 44 24 04 60 66 bf 	movl   $0x8bf6660,0x4(%esp)
 826a35c:	08 
 826a35d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 826a360:	89 04 24             	mov    %eax,(%esp)
 826a363:	e8 b0 53 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 826a368:	c7 44 24 04 f8 54 bf 	movl   $0x8bf54f8,0x4(%esp)
 826a36f:	08 
 826a370:	8d 45 cc             	lea    -0x34(%ebp),%eax
 826a373:	89 04 24             	mov    %eax,(%esp)
 826a376:	e8 0d 54 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 826a37b:	b8 01 00 00 00       	mov    $0x1,%eax
 826a380:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 826a383:	c9                   	leave
 826a384:	c3                   	ret
 826a385:	90                   	nop

```

```c
// QuickParty::CQuickPartySystemManager::match_proper_party @ 0x8269f3c

/* QuickParty::CQuickPartySystemManager::match_proper_party(QuickParty::STQuickPartyPoolMap_Key
   const&, CParty*, CUser*) */

int __thiscall
QuickParty::CQuickPartySystemManager::match_proper_party
          (CQuickPartySystemManager *this,STQuickPartyPoolMap_Key *param_1,CParty *param_2,
          CUser *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  STQuickPartyPoolMap_Key local_50 [4];
  map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
  local_4c [4];
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  int local_28;
  int local_24;
  CDungeon *local_20;
  int local_1c;
  int local_18;
  CQuickParty *local_14;
  int local_10;
  
  if ((param_2 == (CParty *)0x0) || (iVar3 = CParty::get_quick_party_index(param_2), iVar3 != -1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    if ((param_2 == (CParty *)0x0) && (param_3 != (CUser *)0x0)) {
      uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_3);
      LogManager::logFormat
                (1,"QuickParty.cpp",
                 "ENUM_ERROR QuickParty::CQuickPartySystemManager::match_proper_party(const QuickParty::STQuickPartyPoolMap_Key&, CParty*, CUser*)"
                 ,0x186,"QUICK_PARTY_LOG : PARTY IS NULL!! (%d)",uVar4);
    }
    else {
      uVar4 = CParty::get_quick_party_index(param_2);
      LogManager::logFormat
                (1,"QuickParty.cpp",
                 "ENUM_ERROR QuickParty::CQuickPartySystemManager::match_proper_party(const QuickParty::STQuickPartyPoolMap_Key&, CParty*, CUser*)"
                 ,0x188,"QUICK_PARTY_LOG : ABNOMAL QUICK PARTY INDEX (%d)!!",uVar4);
    }
    local_28 = 0x12;
  }
  else {
    local_28 = check_match_proper_party(this,param_1,param_2);
    if (local_28 == 0) {
      local_24 = CParty::get_member_count(param_2);
      iVar3 = G_CDataManager();
      local_20 = (CDungeon *)CDataManager::find_dungeon(iVar3);
      if (local_20 == (CDungeon *)0x0) {
        local_28 = 1;
      }
      else {
        local_1c = 4;
        cVar2 = CDungeon::get_blood_dungeon_type(local_20);
        if (cVar2 == '\x02') {
          cVar2 = CDungeon::get_limit_party_count(local_20);
          local_1c = (int)cVar2;
        }
        std::
        map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
        ::find(local_50);
        std::
        map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
        ::end(local_4c);
        cVar2 = std::
                _Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                ::operator!=((_Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                              *)local_50,(_Rb_tree_iterator *)local_4c);
        if (cVar2 == '\0') {
          cMyTrace::cMyTrace(local_38,
                             "ENUM_ERROR QuickParty::CQuickPartySystemManager::match_proper_party(const QuickParty::STQuickPartyPoolMap_Key&, CParty*, CUser*)"
                             ,0x1d6,5);
          cMyTrace::operator()(local_38,"QUICK_PARTY_LOG : NO EXIST KEY DATA!!");
          local_28 = 1;
        }
        else {
          for (local_18 = local_1c - local_24; 0 < local_18; local_18 = local_18 + -1) {
            std::
            _Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
            ::operator->((_Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                          *)local_50);
            iVar3 = std::list<int,std::allocator<int>>::size();
            if (iVar3 != 0) {
              if (local_18 + local_24 != local_1c) {
                iVar3 = std::
                        _Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                        ::operator->((_Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                                      *)local_50);
                cVar2 = regist_quick_party(this,param_1,(STQuickPartyPoolMap_Data *)(iVar3 + 4),
                                           local_18,param_2,local_24);
                if (cVar2 != '\x01') {
                  return 1;
                }
                return 0;
              }
              local_14 = (CQuickParty *)0x0;
              iVar3 = std::
                      _Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                      ::operator->((_Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                                    *)local_50);
              local_14 = (CQuickParty *)
                         find_quick_party_in_pool(this,(list *)(iVar3 + local_18 * 8 + 4));
              if (local_14 != (CQuickParty *)0x0) {
                iVar3 = CParty::GetPartyIndex(param_2);
                CQuickParty::set_party_index(local_14,iVar3);
                local_10 = CQuickParty::get_quick_party_count(local_14);
                if (local_10 == local_1c) {
                  start_game(this,local_14);
                  return 0;
                }
                uVar4 = CQuickParty::get_quick_party_index(local_14);
                cMyTrace::cMyTrace(local_48,
                                   "ENUM_ERROR QuickParty::CQuickPartySystemManager::match_proper_party(const QuickParty::STQuickPartyPoolMap_Key&, CParty*, CUser*)"
                                   ,0x1b4,0);
                cMyTrace::operator()
                          (local_48,
                           "QUICK_PARTY_LOG : REPUSH QUICK PARTY IN POOL!! QUICK_PARTY_INDEX(%d), QUICK_PARTY_COUNT(%d)"
                           ,uVar4,local_10);
                iVar3 = std::
                        _Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                        ::operator->((_Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                                      *)local_50);
                cVar2 = push_quick_party_in_pool
                                  (this,param_1,(STQuickPartyPoolMap_Data *)(iVar3 + 4),param_2,
                                   local_10,local_14,true);
                if (cVar2 != '\x01') {
                  LogManager::logFormat
                            (1,"QuickParty.cpp",
                             "ENUM_ERROR QuickParty::CQuickPartySystemManager::match_proper_party(const QuickParty::STQuickPartyPoolMap_Key&, CParty*, CUser*)"
                             ,0x1bc,"QUICK_PARTY_LOG : ABNOMAL QUICK PARTY!! (%d)",local_10);
                  return 1;
                }
                return 0;
              }
            }
          }
          iVar3 = std::
                  _Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                  ::operator->((_Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                                *)local_50);
          cVar2 = regist_quick_party(this,param_1,(STQuickPartyPoolMap_Data *)(iVar3 + 4),0,param_2,
                                     local_24);
          if (cVar2 == '\x01') {
            local_28 = 0;
          }
          else {
            local_28 = 1;
          }
        }
      }
    }
  }
  return local_28;
}

```

---

## pop_quick_party_in_pool

```asm
// === 0826ae64 QuickParty::CQuickPartySystemManager::pop_quick_party_in_pool  [0x0826ae64-0x826afb3] ===
 826ae64:	55                   	push   %ebp
 826ae65:	89 e5                	mov    %esp,%ebp
 826ae67:	83 ec 38             	sub    $0x38,%esp
 826ae6a:	83 7d 14 03          	cmpl   $0x3,0x14(%ebp)
 826ae6e:	7f 06                	jg     826ae76 <_ZN10QuickParty24CQuickPartySystemManager23pop_quick_party_in_poolERiRNS_24STQuickPartyPoolMap_DataEiii+0x12>
 826ae70:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 826ae74:	79 0a                	jns    826ae80 <_ZN10QuickParty24CQuickPartySystemManager23pop_quick_party_in_poolERiRNS_24STQuickPartyPoolMap_DataEiii+0x1c>
 826ae76:	b8 00 00 00 00       	mov    $0x0,%eax
 826ae7b:	e9 32 01 00 00       	jmp    826afb2 <_ZN10QuickParty24CQuickPartySystemManager23pop_quick_party_in_poolERiRNS_24STQuickPartyPoolMap_DataEiii+0x14e>
 826ae80:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 826ae87:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 826ae8b:	75 57                	jne    826aee4 <_ZN10QuickParty24CQuickPartySystemManager23pop_quick_party_in_poolERiRNS_24STQuickPartyPoolMap_DataEiii+0x80>
 826ae8d:	e8 fc 12 e6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 826ae92:	89 04 24             	mov    %eax,(%esp)
 826ae95:	e8 b6 a5 02 00       	call   8295450 <_ZN12CGameManager13GetQuickPartyEv>
 826ae9a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 826ae9d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 826aea1:	75 0a                	jne    826aead <_ZN10QuickParty24CQuickPartySystemManager23pop_quick_party_in_poolERiRNS_24STQuickPartyPoolMap_DataEiii+0x49>
 826aea3:	b8 00 00 00 00       	mov    $0x0,%eax
 826aea8:	e9 05 01 00 00       	jmp    826afb2 <_ZN10QuickParty24CQuickPartySystemManager23pop_quick_party_in_poolERiRNS_24STQuickPartyPoolMap_DataEiii+0x14e>
 826aead:	8b 45 18             	mov    0x18(%ebp),%eax
 826aeb0:	89 44 24 04          	mov    %eax,0x4(%esp)
 826aeb4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826aeb7:	89 04 24             	mov    %eax,(%esp)
 826aeba:	e8 cd e8 ff ff       	call   826978c <_ZN10QuickParty11CQuickParty15set_party_indexEi>
 826aebf:	8b 45 0c             	mov    0xc(%ebp),%eax
 826aec2:	8b 55 1c             	mov    0x1c(%ebp),%edx
 826aec5:	89 10                	mov    %edx,(%eax)
 826aec7:	8b 45 1c             	mov    0x1c(%ebp),%eax
 826aeca:	0f be c0             	movsbl %al,%eax
 826aecd:	89 44 24 04          	mov    %eax,0x4(%esp)
 826aed1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826aed4:	89 04 24             	mov    %eax,(%esp)
 826aed7:	e8 8a 08 00 00       	call   826b766 <_ZN10QuickParty11CQuickParty22set_first_matching_cntEc>
 826aedc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826aedf:	e9 ce 00 00 00       	jmp    826afb2 <_ZN10QuickParty24CQuickPartySystemManager23pop_quick_party_in_poolERiRNS_24STQuickPartyPoolMap_DataEiii+0x14e>
 826aee4:	8b 45 14             	mov    0x14(%ebp),%eax
 826aee7:	c1 e0 03             	shl    $0x3,%eax
 826aeea:	03 45 10             	add    0x10(%ebp),%eax
 826aeed:	89 44 24 04          	mov    %eax,0x4(%esp)
 826aef1:	8b 45 08             	mov    0x8(%ebp),%eax
 826aef4:	89 04 24             	mov    %eax,(%esp)
 826aef7:	e8 02 fb ff ff       	call   826a9fe <_ZN10QuickParty24CQuickPartySystemManager24find_quick_party_in_poolERSt4listIiSaIiEE>
 826aefc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 826aeff:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 826af03:	0f 85 84 00 00 00    	jne    826af8d <_ZN10QuickParty24CQuickPartySystemManager23pop_quick_party_in_poolERiRNS_24STQuickPartyPoolMap_DataEiii+0x129>
 826af09:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 826af10:	00 
 826af11:	c7 44 24 08 52 03 00 	movl   $0x352,0x8(%esp)
 826af18:	00 
 826af19:	c7 44 24 04 40 64 bf 	movl   $0x8bf6440,0x4(%esp)
 826af20:	08 
 826af21:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 826af24:	89 04 24             	mov    %eax,(%esp)
 826af27:	e8 ec 47 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 826af2c:	c7 44 24 04 a4 55 bf 	movl   $0x8bf55a4,0x4(%esp)
 826af33:	08 
 826af34:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 826af37:	89 04 24             	mov    %eax,(%esp)
 826af3a:	e8 49 48 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 826af3f:	e8 4a 12 e6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 826af44:	89 04 24             	mov    %eax,(%esp)
 826af47:	e8 04 a5 02 00       	call   8295450 <_ZN12CGameManager13GetQuickPartyEv>
 826af4c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 826af4f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 826af53:	75 07                	jne    826af5c <_ZN10QuickParty24CQuickPartySystemManager23pop_quick_party_in_poolERiRNS_24STQuickPartyPoolMap_DataEiii+0xf8>
 826af55:	b8 00 00 00 00       	mov    $0x0,%eax
 826af5a:	eb 56                	jmp    826afb2 <_ZN10QuickParty24CQuickPartySystemManager23pop_quick_party_in_poolERiRNS_24STQuickPartyPoolMap_DataEiii+0x14e>
 826af5c:	8b 45 18             	mov    0x18(%ebp),%eax
 826af5f:	89 44 24 04          	mov    %eax,0x4(%esp)
 826af63:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826af66:	89 04 24             	mov    %eax,(%esp)
 826af69:	e8 1e e8 ff ff       	call   826978c <_ZN10QuickParty11CQuickParty15set_party_indexEi>
 826af6e:	8b 45 0c             	mov    0xc(%ebp),%eax
 826af71:	8b 55 1c             	mov    0x1c(%ebp),%edx
 826af74:	89 10                	mov    %edx,(%eax)
 826af76:	8b 45 1c             	mov    0x1c(%ebp),%eax
 826af79:	0f be c0             	movsbl %al,%eax
 826af7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 826af80:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826af83:	89 04 24             	mov    %eax,(%esp)
 826af86:	e8 db 07 00 00       	call   826b766 <_ZN10QuickParty11CQuickParty22set_first_matching_cntEc>
 826af8b:	eb 22                	jmp    826afaf <_ZN10QuickParty24CQuickPartySystemManager23pop_quick_party_in_poolERiRNS_24STQuickPartyPoolMap_DataEiii+0x14b>
 826af8d:	8b 45 18             	mov    0x18(%ebp),%eax
 826af90:	89 44 24 04          	mov    %eax,0x4(%esp)
 826af94:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826af97:	89 04 24             	mov    %eax,(%esp)
 826af9a:	e8 ed e7 ff ff       	call   826978c <_ZN10QuickParty11CQuickParty15set_party_indexEi>
 826af9f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826afa2:	89 04 24             	mov    %eax,(%esp)
 826afa5:	e8 14 e9 ff ff       	call   82698be <_ZN10QuickParty11CQuickParty21get_quick_party_countEv>
 826afaa:	8b 55 0c             	mov    0xc(%ebp),%edx
 826afad:	89 02                	mov    %eax,(%edx)
 826afaf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826afb2:	c9                   	leave
 826afb3:	c3                   	ret

```

```c
// QuickParty::CQuickPartySystemManager::pop_quick_party_in_pool @ 0x826ae64

/* QuickParty::CQuickPartySystemManager::pop_quick_party_in_pool(int&,
   QuickParty::STQuickPartyPoolMap_Data&, int, int, int) */

CQuickParty * __thiscall
QuickParty::CQuickPartySystemManager::pop_quick_party_in_pool
          (CQuickPartySystemManager *this,int *param_1,STQuickPartyPoolMap_Data *param_2,int param_3
          ,int param_4,int param_5)

{
  CGameManager *pCVar1;
  int iVar2;
  cMyTrace local_20 [16];
  CQuickParty *local_10;
  
  if ((param_3 < 4) && (-1 < param_3)) {
    local_10 = (CQuickParty *)0x0;
    if (param_3 == 0) {
      pCVar1 = (CGameManager *)G_CGameManager();
      local_10 = (CQuickParty *)CGameManager::GetQuickParty(pCVar1);
      if (local_10 == (CQuickParty *)0x0) {
        local_10 = (CQuickParty *)0x0;
      }
      else {
        CQuickParty::set_party_index(local_10,param_4);
        *param_1 = param_5;
        CQuickParty::set_first_matching_cnt(local_10,(char)param_5);
      }
    }
    else {
      local_10 = (CQuickParty *)find_quick_party_in_pool(this,(list *)(param_2 + param_3 * 8));
      if (local_10 == (CQuickParty *)0x0) {
        cMyTrace::cMyTrace(local_20,
                           "QuickParty::CQuickParty* QuickParty::CQuickPartySystemManager::pop_quick_party_in_pool(int&, QuickParty::STQuickPartyPoolMap_Data&, int, int, int)"
                           ,0x352,5);
        cMyTrace::operator()(local_20,"QUICK_PARTY_LOG : NO INTENDED ROUTINE!!");
        pCVar1 = (CGameManager *)G_CGameManager();
        local_10 = (CQuickParty *)CGameManager::GetQuickParty(pCVar1);
        if (local_10 == (CQuickParty *)0x0) {
          local_10 = (CQuickParty *)0x0;
        }
        else {
          CQuickParty::set_party_index(local_10,param_4);
          *param_1 = param_5;
          CQuickParty::set_first_matching_cnt(local_10,(char)param_5);
        }
      }
      else {
        CQuickParty::set_party_index(local_10,param_4);
        iVar2 = CQuickParty::get_quick_party_count(local_10);
        *param_1 = iVar2;
      }
    }
  }
  else {
    local_10 = (CQuickParty *)0x0;
  }
  return local_10;
}

```

---

## push_quick_party_in_pool

```asm
// === 0826afb4 QuickParty::CQuickPartySystemManager::push_quick_party_in_pool  [0x0826afb4-0x826b221] ===
 826afb4:	55                   	push   %ebp
 826afb5:	89 e5                	mov    %esp,%ebp
 826afb7:	56                   	push   %esi
 826afb8:	53                   	push   %ebx
 826afb9:	83 ec 60             	sub    $0x60,%esp
 826afbc:	8b 45 20             	mov    0x20(%ebp),%eax
 826afbf:	88 45 c4             	mov    %al,-0x3c(%ebp)
 826afc2:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 826afc6:	74 10                	je     826afd8 <_ZN10QuickParty24CQuickPartySystemManager24push_quick_party_in_poolERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEP6CPartyiPNS_11CQuickPartyEb+0x24>
 826afc8:	83 7d 18 03          	cmpl   $0x3,0x18(%ebp)
 826afcc:	7f 0a                	jg     826afd8 <_ZN10QuickParty24CQuickPartySystemManager24push_quick_party_in_poolERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEP6CPartyiPNS_11CQuickPartyEb+0x24>
 826afce:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 826afd2:	0f 8f 1c 01 00 00    	jg     826b0f4 <_ZN10QuickParty24CQuickPartySystemManager24push_quick_party_in_poolERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEP6CPartyiPNS_11CQuickPartyEb+0x140>
 826afd8:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 826afdc:	0f 84 d5 00 00 00    	je     826b0b7 <_ZN10QuickParty24CQuickPartySystemManager24push_quick_party_in_poolERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEP6CPartyiPNS_11CQuickPartyEb+0x103>
 826afe2:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 826afe9:	e9 af 00 00 00       	jmp    826b09d <_ZN10QuickParty24CQuickPartySystemManager24push_quick_party_in_poolERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEP6CPartyiPNS_11CQuickPartyEb+0xe9>
 826afee:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826aff1:	89 44 24 04          	mov    %eax,0x4(%esp)
 826aff5:	8b 45 1c             	mov    0x1c(%ebp),%eax
 826aff8:	89 04 24             	mov    %eax,(%esp)
 826affb:	e8 d0 e6 ff ff       	call   82696d0 <_ZN10QuickParty11CQuickParty16get_party_objectEi>
 826b000:	89 45 f4             	mov    %eax,-0xc(%ebp)
 826b003:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 826b007:	0f 84 8b 00 00 00    	je     826b098 <_ZN10QuickParty24CQuickPartySystemManager24push_quick_party_in_poolERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEP6CPartyiPNS_11CQuickPartyEb+0xe4>
 826b00d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826b010:	89 04 24             	mov    %eax,(%esp)
 826b013:	e8 cc 03 33 00       	call   859b3e4 <_ZN6CParty21init_quick_party_dataEv>
 826b018:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 826b01b:	89 04 24             	mov    %eax,(%esp)
 826b01e:	e8 29 2d 32 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 826b023:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 826b026:	89 04 24             	mov    %eax,(%esp)
 826b029:	e8 b8 08 e6 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 826b02e:	c7 44 24 08 7f 01 00 	movl   $0x17f,0x8(%esp)
 826b035:	00 
 826b036:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 826b03d:	00 
 826b03e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 826b041:	89 04 24             	mov    %eax,(%esp)
 826b044:	e8 b3 08 e6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 826b049:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 826b050:	00 
 826b051:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 826b054:	89 04 24             	mov    %eax,(%esp)
 826b057:	e8 fc 08 e6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 826b05c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 826b05f:	89 44 24 04          	mov    %eax,0x4(%esp)
 826b063:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826b066:	89 04 24             	mov    %eax,(%esp)
 826b069:	e8 e0 20 33 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 826b06e:	eb 1b                	jmp    826b08b <_ZN10QuickParty24CQuickPartySystemManager24push_quick_party_in_poolERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEP6CPartyiPNS_11CQuickPartyEb+0xd7>
 826b070:	89 d3                	mov    %edx,%ebx
 826b072:	89 c6                	mov    %eax,%esi
 826b074:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 826b077:	89 04 24             	mov    %eax,(%esp)
 826b07a:	e8 01 2e 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 826b07f:	89 f0                	mov    %esi,%eax
 826b081:	89 da                	mov    %ebx,%edx
 826b083:	89 04 24             	mov    %eax,(%esp)
 826b086:	e8 c5 86 87 00       	call   8ae3750 <_Unwind_Resume>
 826b08b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 826b08e:	89 04 24             	mov    %eax,(%esp)
 826b091:	e8 ea 2d 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 826b096:	eb 01                	jmp    826b099 <_ZN10QuickParty24CQuickPartySystemManager24push_quick_party_in_poolERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEP6CPartyiPNS_11CQuickPartyEb+0xe5>
 826b098:	90                   	nop
 826b099:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 826b09d:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 826b0a1:	0f 9e c0             	setle  %al
 826b0a4:	84 c0                	test   %al,%al
 826b0a6:	0f 85 42 ff ff ff    	jne    826afee <_ZN10QuickParty24CQuickPartySystemManager24push_quick_party_in_poolERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEP6CPartyiPNS_11CQuickPartyEb+0x3a>
 826b0ac:	8b 45 1c             	mov    0x1c(%ebp),%eax
 826b0af:	89 04 24             	mov    %eax,(%esp)
 826b0b2:	e8 13 e5 ff ff       	call   82695ca <_ZN10QuickParty11CQuickParty7destroyEv>
 826b0b7:	8b 45 18             	mov    0x18(%ebp),%eax
 826b0ba:	89 44 24 14          	mov    %eax,0x14(%esp)
 826b0be:	c7 44 24 10 cc 55 bf 	movl   $0x8bf55cc,0x10(%esp)
 826b0c5:	08 
 826b0c6:	c7 44 24 0c 83 03 00 	movl   $0x383,0xc(%esp)
 826b0cd:	00 
 826b0ce:	c7 44 24 08 60 63 bf 	movl   $0x8bf6360,0x8(%esp)
 826b0d5:	08 
 826b0d6:	c7 44 24 04 01 54 bf 	movl   $0x8bf5401,0x4(%esp)
 826b0dd:	08 
 826b0de:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 826b0e5:	e8 20 8b 86 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 826b0ea:	b8 00 00 00 00       	mov    $0x0,%eax
 826b0ef:	e9 26 01 00 00       	jmp    826b21a <_ZN10QuickParty24CQuickPartySystemManager24push_quick_party_in_poolERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEP6CPartyiPNS_11CQuickPartyEb+0x266>
 826b0f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 826b0f7:	0f b7 00             	movzwl (%eax),%eax
 826b0fa:	98                   	cwtl
 826b0fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 826b0ff:	8b 45 1c             	mov    0x1c(%ebp),%eax
 826b102:	89 04 24             	mov    %eax,(%esp)
 826b105:	e8 74 06 00 00       	call   826b77e <_ZN10QuickParty11CQuickParty17set_dungeon_indexEs>
 826b10a:	8b 45 0c             	mov    0xc(%ebp),%eax
 826b10d:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 826b111:	0f be c0             	movsbl %al,%eax
 826b114:	89 44 24 04          	mov    %eax,0x4(%esp)
 826b118:	8b 45 1c             	mov    0x1c(%ebp),%eax
 826b11b:	89 04 24             	mov    %eax,(%esp)
 826b11e:	e8 81 06 00 00       	call   826b7a4 <_ZN10QuickParty11CQuickParty16set_dungeon_diffEi>
 826b123:	8b 45 18             	mov    0x18(%ebp),%eax
 826b126:	89 44 24 04          	mov    %eax,0x4(%esp)
 826b12a:	8b 45 1c             	mov    0x1c(%ebp),%eax
 826b12d:	89 04 24             	mov    %eax,(%esp)
 826b130:	e8 8f 06 00 00       	call   826b7c4 <_ZN10QuickParty11CQuickParty14set_pool_indexEi>
 826b135:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 826b139:	74 1a                	je     826b155 <_ZN10QuickParty24CQuickPartySystemManager24push_quick_party_in_poolERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEP6CPartyiPNS_11CQuickPartyEb+0x1a1>
 826b13b:	8b 45 1c             	mov    0x1c(%ebp),%eax
 826b13e:	89 04 24             	mov    %eax,(%esp)
 826b141:	e8 08 06 00 00       	call   826b74e <_ZNK10QuickParty11CQuickParty21get_quick_party_indexEv>
 826b146:	89 44 24 04          	mov    %eax,0x4(%esp)
 826b14a:	8b 45 14             	mov    0x14(%ebp),%eax
 826b14d:	89 04 24             	mov    %eax,(%esp)
 826b150:	e8 57 08 00 00       	call   826b9ac <_ZN6CParty21set_quick_party_indexEi>
 826b155:	8b 45 1c             	mov    0x1c(%ebp),%eax
 826b158:	89 04 24             	mov    %eax,(%esp)
 826b15b:	e8 ee 05 00 00       	call   826b74e <_ZNK10QuickParty11CQuickParty21get_quick_party_indexEv>
 826b160:	89 45 e0             	mov    %eax,-0x20(%ebp)
 826b163:	8b 45 18             	mov    0x18(%ebp),%eax
 826b166:	c1 e0 03             	shl    $0x3,%eax
 826b169:	03 45 10             	add    0x10(%ebp),%eax
 826b16c:	8d 55 e0             	lea    -0x20(%ebp),%edx
 826b16f:	89 54 24 04          	mov    %edx,0x4(%esp)
 826b173:	89 04 24             	mov    %eax,(%esp)
 826b176:	e8 57 0c 00 00       	call   826bdd2 <_ZNSt4listIiSaIiEE9push_backEOi>
 826b17b:	80 7d c4 00          	cmpb   $0x0,-0x3c(%ebp)
 826b17f:	74 12                	je     826b193 <_ZN10QuickParty24CQuickPartySystemManager24push_quick_party_in_poolERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEP6CPartyiPNS_11CQuickPartyEb+0x1df>
 826b181:	8b 45 1c             	mov    0x1c(%ebp),%eax
 826b184:	89 44 24 04          	mov    %eax,0x4(%esp)
 826b188:	8b 45 08             	mov    0x8(%ebp),%eax
 826b18b:	89 04 24             	mov    %eax,(%esp)
 826b18e:	e8 57 fb ff ff       	call   826acea <_ZN10QuickParty24CQuickPartySystemManager35insert_timer_waiting_party_matchingEPNS_11CQuickPartyE>
 826b193:	8b 45 1c             	mov    0x1c(%ebp),%eax
 826b196:	89 04 24             	mov    %eax,(%esp)
 826b199:	e8 98 e7 ff ff       	call   8269936 <_ZN10QuickParty11CQuickParty41get_matching_quick_party_master_unique_idEv>
 826b19e:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 826b1a2:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 826b1a6:	8b 45 1c             	mov    0x1c(%ebp),%eax
 826b1a9:	89 04 24             	mov    %eax,(%esp)
 826b1ac:	e8 0d e7 ff ff       	call   82698be <_ZN10QuickParty11CQuickParty21get_quick_party_countEv>
 826b1b1:	89 45 e8             	mov    %eax,-0x18(%ebp)
 826b1b4:	8b 45 1c             	mov    0x1c(%ebp),%eax
 826b1b7:	89 04 24             	mov    %eax,(%esp)
 826b1ba:	e8 9b 05 00 00       	call   826b75a <_ZN10QuickParty11CQuickParty22get_first_matching_cntEv>
 826b1bf:	0f be c0             	movsbl %al,%eax
 826b1c2:	89 45 ec             	mov    %eax,-0x14(%ebp)
 826b1c5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 826b1c8:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 826b1cb:	7c 0f                	jl     826b1dc <_ZN10QuickParty24CQuickPartySystemManager24push_quick_party_in_poolERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEP6CPartyiPNS_11CQuickPartyEb+0x228>
 826b1cd:	8b 45 1c             	mov    0x1c(%ebp),%eax
 826b1d0:	89 04 24             	mov    %eax,(%esp)
 826b1d3:	e8 0c 06 00 00       	call   826b7e4 <_ZN10QuickParty11CQuickParty27is_change_quick_party_countEv>
 826b1d8:	84 c0                	test   %al,%al
 826b1da:	74 07                	je     826b1e3 <_ZN10QuickParty24CQuickPartySystemManager24push_quick_party_in_poolERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEP6CPartyiPNS_11CQuickPartyEb+0x22f>
 826b1dc:	b8 01 00 00 00       	mov    $0x1,%eax
 826b1e1:	eb 05                	jmp    826b1e8 <_ZN10QuickParty24CQuickPartySystemManager24push_quick_party_in_poolERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEP6CPartyiPNS_11CQuickPartyEb+0x234>
 826b1e3:	b8 00 00 00 00       	mov    $0x0,%eax
 826b1e8:	84 c0                	test   %al,%al
 826b1ea:	74 04                	je     826b1f0 <_ZN10QuickParty24CQuickPartySystemManager24push_quick_party_in_poolERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEP6CPartyiPNS_11CQuickPartyEb+0x23c>
 826b1ec:	c6 45 e7 01          	movb   $0x1,-0x19(%ebp)
 826b1f0:	0f b6 4d e7          	movzbl -0x19(%ebp),%ecx
 826b1f4:	0f b7 55 e4          	movzwl -0x1c(%ebp),%edx
 826b1f8:	8b 45 18             	mov    0x18(%ebp),%eax
 826b1fb:	0f be c0             	movsbl %al,%eax
 826b1fe:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 826b202:	89 54 24 08          	mov    %edx,0x8(%esp)
 826b206:	89 44 24 04          	mov    %eax,0x4(%esp)
 826b20a:	8b 45 1c             	mov    0x1c(%ebp),%eax
 826b20d:	89 04 24             	mov    %eax,(%esp)
 826b210:	e8 79 e8 ff ff       	call   8269a8e <_ZN10QuickParty11CQuickParty32send_matching_update_quick_partyEctb>
 826b215:	b8 01 00 00 00       	mov    $0x1,%eax
 826b21a:	83 c4 60             	add    $0x60,%esp
 826b21d:	5b                   	pop    %ebx
 826b21e:	5e                   	pop    %esi
 826b21f:	5d                   	pop    %ebp
 826b220:	c3                   	ret
 826b221:	90                   	nop

```

```c
// QuickParty::CQuickPartySystemManager::push_quick_party_in_pool @ 0x826afb4

/* QuickParty::CQuickPartySystemManager::push_quick_party_in_pool(QuickParty::STQuickPartyPoolMap_Key
   const&, QuickParty::STQuickPartyPoolMap_Data&, CParty*, int, QuickParty::CQuickParty*, bool) */

undefined4 __thiscall
QuickParty::CQuickPartySystemManager::push_quick_party_in_pool
          (CQuickPartySystemManager *this,STQuickPartyPoolMap_Key *param_1,
          STQuickPartyPoolMap_Data *param_2,CParty *param_3,int param_4,CQuickParty *param_5,
          bool param_6)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  PacketGuard local_30 [12];
  int local_24;
  ushort local_20;
  bool local_1d;
  int local_1c;
  int local_18;
  int local_14;
  CParty *local_10;
  
  if (((param_5 != (CQuickParty *)0x0) && (param_4 < 4)) && (0 < param_4)) {
    CQuickParty::set_dungeon_index(param_5,*(short *)param_1);
    CQuickParty::set_dungeon_diff(param_5,(int)(char)param_1[2]);
    CQuickParty::set_pool_index(param_5,param_4);
    if (param_3 != (CParty *)0x0) {
      iVar3 = CQuickParty::get_quick_party_index(param_5);
      CParty::set_quick_party_index(param_3,iVar3);
    }
    local_24 = CQuickParty::get_quick_party_index(param_5);
    std::list<int,std::allocator<int>>::push_back
              ((list<int,std::allocator<int>> *)(param_2 + param_4 * 8),&local_24);
    if (param_6) {
      insert_timer_waiting_party_matching(this,param_5);
    }
    local_20 = CQuickParty::get_matching_quick_party_master_unique_id(param_5);
    local_1d = false;
    local_1c = CQuickParty::get_quick_party_count(param_5);
    cVar2 = CQuickParty::get_first_matching_cnt(param_5);
    local_18 = (int)cVar2;
    if ((local_18 < local_1c) ||
       (cVar2 = CQuickParty::is_change_quick_party_count(param_5), cVar2 != '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      local_1d = true;
    }
    CQuickParty::send_matching_update_quick_party(param_5,(char)param_4,local_20,local_1d);
    return 1;
  }
  if (param_5 != (CQuickParty *)0x0) {
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      local_10 = (CParty *)CQuickParty::get_party_object(param_5,local_14);
      if (local_10 != (CParty *)0x0) {
        CParty::init_quick_party_data(local_10);
        PacketGuard::PacketGuard(local_30);
                    /* try { // try from 0826b029 to 0826b06d has its CatchHandler @ 0826b070 */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_30);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x17f);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
        CParty::send_to_party(local_10,local_30);
        PacketGuard::~PacketGuard(local_30);
      }
    }
    CQuickParty::destroy(param_5);
  }
  LogManager::logFormat
            (1,"QuickParty.cpp",
             "bool QuickParty::CQuickPartySystemManager::push_quick_party_in_pool(const QuickParty::STQuickPartyPoolMap_Key&, QuickParty::STQuickPartyPoolMap_Data&, CParty*, int, QuickParty::CQuickParty*, bool)"
             ,899,"QUICK_PARTY_LOG : ABNOMAL QUICK PARTY!! REGIST POOL INDEX(%d)",param_4);
  return 0;
}

```

---

## regist_quick_party

```asm
// === 0826adb6 QuickParty::CQuickPartySystemManager::regist_quick_party  [0x0826adb6-0x826ae63] ===
 826adb6:	55                   	push   %ebp
 826adb7:	89 e5                	mov    %esp,%ebp
 826adb9:	83 ec 38             	sub    $0x38,%esp
 826adbc:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 826adc0:	75 0a                	jne    826adcc <_ZN10QuickParty24CQuickPartySystemManager18regist_quick_partyERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEiP6CPartyi+0x16>
 826adc2:	b8 00 00 00 00       	mov    $0x0,%eax
 826adc7:	e9 96 00 00 00       	jmp    826ae62 <_ZN10QuickParty24CQuickPartySystemManager18regist_quick_partyERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEiP6CPartyi+0xac>
 826adcc:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 826add3:	8b 45 18             	mov    0x18(%ebp),%eax
 826add6:	89 04 24             	mov    %eax,(%esp)
 826add9:	e8 68 2a fc ff       	call   822d846 <_ZN6CParty13GetPartyIndexEv>
 826adde:	8b 55 1c             	mov    0x1c(%ebp),%edx
 826ade1:	89 54 24 14          	mov    %edx,0x14(%esp)
 826ade5:	89 44 24 10          	mov    %eax,0x10(%esp)
 826ade9:	8b 45 14             	mov    0x14(%ebp),%eax
 826adec:	89 44 24 0c          	mov    %eax,0xc(%esp)
 826adf0:	8b 45 10             	mov    0x10(%ebp),%eax
 826adf3:	89 44 24 08          	mov    %eax,0x8(%esp)
 826adf7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 826adfa:	89 44 24 04          	mov    %eax,0x4(%esp)
 826adfe:	8b 45 08             	mov    0x8(%ebp),%eax
 826ae01:	89 04 24             	mov    %eax,(%esp)
 826ae04:	e8 5b 00 00 00       	call   826ae64 <_ZN10QuickParty24CQuickPartySystemManager23pop_quick_party_in_poolERiRNS_24STQuickPartyPoolMap_DataEiii>
 826ae09:	89 45 f4             	mov    %eax,-0xc(%ebp)
 826ae0c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 826ae10:	75 07                	jne    826ae19 <_ZN10QuickParty24CQuickPartySystemManager18regist_quick_partyERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEiP6CPartyi+0x63>
 826ae12:	b8 00 00 00 00       	mov    $0x0,%eax
 826ae17:	eb 49                	jmp    826ae62 <_ZN10QuickParty24CQuickPartySystemManager18regist_quick_partyERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEiP6CPartyi+0xac>
 826ae19:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826ae1c:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 826ae23:	00 
 826ae24:	8b 55 f4             	mov    -0xc(%ebp),%edx
 826ae27:	89 54 24 14          	mov    %edx,0x14(%esp)
 826ae2b:	89 44 24 10          	mov    %eax,0x10(%esp)
 826ae2f:	8b 45 18             	mov    0x18(%ebp),%eax
 826ae32:	89 44 24 0c          	mov    %eax,0xc(%esp)
 826ae36:	8b 45 10             	mov    0x10(%ebp),%eax
 826ae39:	89 44 24 08          	mov    %eax,0x8(%esp)
 826ae3d:	8b 45 0c             	mov    0xc(%ebp),%eax
 826ae40:	89 44 24 04          	mov    %eax,0x4(%esp)
 826ae44:	8b 45 08             	mov    0x8(%ebp),%eax
 826ae47:	89 04 24             	mov    %eax,(%esp)
 826ae4a:	e8 65 01 00 00       	call   826afb4 <_ZN10QuickParty24CQuickPartySystemManager24push_quick_party_in_poolERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEP6CPartyiPNS_11CQuickPartyEb>
 826ae4f:	83 f0 01             	xor    $0x1,%eax
 826ae52:	84 c0                	test   %al,%al
 826ae54:	74 07                	je     826ae5d <_ZN10QuickParty24CQuickPartySystemManager18regist_quick_partyERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEiP6CPartyi+0xa7>
 826ae56:	b8 00 00 00 00       	mov    $0x0,%eax
 826ae5b:	eb 05                	jmp    826ae62 <_ZN10QuickParty24CQuickPartySystemManager18regist_quick_partyERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEiP6CPartyi+0xac>
 826ae5d:	b8 01 00 00 00       	mov    $0x1,%eax
 826ae62:	c9                   	leave
 826ae63:	c3                   	ret

```

```c
// QuickParty::CQuickPartySystemManager::regist_quick_party @ 0x826adb6

/* QuickParty::CQuickPartySystemManager::regist_quick_party(QuickParty::STQuickPartyPoolMap_Key
   const&, QuickParty::STQuickPartyPoolMap_Data&, int, CParty*, int) */

undefined4 __thiscall
QuickParty::CQuickPartySystemManager::regist_quick_party
          (CQuickPartySystemManager *this,STQuickPartyPoolMap_Key *param_1,
          STQuickPartyPoolMap_Data *param_2,int param_3,CParty *param_4,int param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int local_14;
  CQuickParty *local_10;
  
  if (param_4 == (CParty *)0x0) {
    uVar2 = 0;
  }
  else {
    local_14 = 0;
    iVar3 = CParty::GetPartyIndex(param_4);
    local_10 = (CQuickParty *)pop_quick_party_in_pool(this,&local_14,param_2,param_3,iVar3,param_5);
    if (local_10 == (CQuickParty *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = push_quick_party_in_pool(this,param_1,param_2,param_4,local_14,local_10,true);
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

```

---

## remove_quick_party_in_pool

```asm
// === 0826aa9a QuickParty::CQuickPartySystemManager::remove_quick_party_in_pool  [0x0826aa9a-0x826ab9d] ===
 826aa9a:	55                   	push   %ebp
 826aa9b:	89 e5                	mov    %esp,%ebp
 826aa9d:	83 ec 38             	sub    $0x38,%esp
 826aaa0:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 826aaa4:	75 0a                	jne    826aab0 <_ZN10QuickParty24CQuickPartySystemManager26remove_quick_party_in_poolEPNS_11CQuickPartyERKNS_23STQuickPartyPoolMap_KeyE+0x16>
 826aaa6:	b8 00 00 00 00       	mov    $0x0,%eax
 826aaab:	e9 ec 00 00 00       	jmp    826ab9c <_ZN10QuickParty24CQuickPartySystemManager26remove_quick_party_in_poolEPNS_11CQuickPartyERKNS_23STQuickPartyPoolMap_KeyE+0x102>
 826aab0:	8b 45 0c             	mov    0xc(%ebp),%eax
 826aab3:	89 04 24             	mov    %eax,(%esp)
 826aab6:	e8 19 0d 00 00       	call   826b7d4 <_ZN10QuickParty11CQuickParty14get_pool_indexEv>
 826aabb:	88 45 f7             	mov    %al,-0x9(%ebp)
 826aabe:	80 7d f7 03          	cmpb   $0x3,-0x9(%ebp)
 826aac2:	7f 06                	jg     826aaca <_ZN10QuickParty24CQuickPartySystemManager26remove_quick_party_in_poolEPNS_11CQuickPartyERKNS_23STQuickPartyPoolMap_KeyE+0x30>
 826aac4:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 826aac8:	79 0a                	jns    826aad4 <_ZN10QuickParty24CQuickPartySystemManager26remove_quick_party_in_poolEPNS_11CQuickPartyERKNS_23STQuickPartyPoolMap_KeyE+0x3a>
 826aaca:	b8 00 00 00 00       	mov    $0x0,%eax
 826aacf:	e9 c8 00 00 00       	jmp    826ab9c <_ZN10QuickParty24CQuickPartySystemManager26remove_quick_party_in_poolEPNS_11CQuickPartyERKNS_23STQuickPartyPoolMap_KeyE+0x102>
 826aad4:	8b 55 08             	mov    0x8(%ebp),%edx
 826aad7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 826aada:	8b 4d 10             	mov    0x10(%ebp),%ecx
 826aadd:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 826aae1:	89 54 24 04          	mov    %edx,0x4(%esp)
 826aae5:	89 04 24             	mov    %eax,(%esp)
 826aae8:	e8 3f 11 00 00       	call   826bc2c <_ZNSt3mapIN10QuickParty23STQuickPartyPoolMap_KeyENS0_24STQuickPartyPoolMap_DataESt4lessIS1_ESaISt4pairIKS1_S2_EEE4findERS6_>
 826aaed:	83 ec 04             	sub    $0x4,%esp
 826aaf0:	8b 55 08             	mov    0x8(%ebp),%edx
 826aaf3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 826aaf6:	89 54 24 04          	mov    %edx,0x4(%esp)
 826aafa:	89 04 24             	mov    %eax,(%esp)
 826aafd:	e8 56 11 00 00       	call   826bc58 <_ZNSt3mapIN10QuickParty23STQuickPartyPoolMap_KeyENS0_24STQuickPartyPoolMap_DataESt4lessIS1_ESaISt4pairIKS1_S2_EEE3endEv>
 826ab02:	83 ec 04             	sub    $0x4,%esp
 826ab05:	8d 45 dc             	lea    -0x24(%ebp),%eax
 826ab08:	89 44 24 04          	mov    %eax,0x4(%esp)
 826ab0c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 826ab0f:	89 04 24             	mov    %eax,(%esp)
 826ab12:	e8 67 11 00 00       	call   826bc7e <_ZNKSt17_Rb_tree_iteratorISt4pairIKN10QuickParty23STQuickPartyPoolMap_KeyENS1_24STQuickPartyPoolMap_DataEEEneERKS6_>
 826ab17:	84 c0                	test   %al,%al
 826ab19:	74 3b                	je     826ab56 <_ZN10QuickParty24CQuickPartySystemManager26remove_quick_party_in_poolEPNS_11CQuickPartyERKNS_23STQuickPartyPoolMap_KeyE+0xbc>
 826ab1b:	8b 45 0c             	mov    0xc(%ebp),%eax
 826ab1e:	89 04 24             	mov    %eax,(%esp)
 826ab21:	e8 28 0c 00 00       	call   826b74e <_ZNK10QuickParty11CQuickParty21get_quick_party_indexEv>
 826ab26:	89 45 e0             	mov    %eax,-0x20(%ebp)
 826ab29:	8d 45 d8             	lea    -0x28(%ebp),%eax
 826ab2c:	89 04 24             	mov    %eax,(%esp)
 826ab2f:	e8 5e 11 00 00       	call   826bc92 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN10QuickParty23STQuickPartyPoolMap_KeyENS1_24STQuickPartyPoolMap_DataEEEptEv>
 826ab34:	0f be 55 f7          	movsbl -0x9(%ebp),%edx
 826ab38:	c1 e2 03             	shl    $0x3,%edx
 826ab3b:	01 d0                	add    %edx,%eax
 826ab3d:	8d 50 04             	lea    0x4(%eax),%edx
 826ab40:	8d 45 e0             	lea    -0x20(%ebp),%eax
 826ab43:	89 44 24 04          	mov    %eax,0x4(%esp)
 826ab47:	89 14 24             	mov    %edx,(%esp)
 826ab4a:	e8 a9 11 00 00       	call   826bcf8 <_ZNSt4listIiSaIiEE6removeERKi>
 826ab4f:	b8 01 00 00 00       	mov    $0x1,%eax
 826ab54:	eb 46                	jmp    826ab9c <_ZN10QuickParty24CQuickPartySystemManager26remove_quick_party_in_poolEPNS_11CQuickPartyERKNS_23STQuickPartyPoolMap_KeyE+0x102>
 826ab56:	8b 45 0c             	mov    0xc(%ebp),%eax
 826ab59:	89 04 24             	mov    %eax,(%esp)
 826ab5c:	e8 69 ea ff ff       	call   82695ca <_ZN10QuickParty11CQuickParty7destroyEv>
 826ab61:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 826ab68:	00 
 826ab69:	c7 44 24 08 ba 02 00 	movl   $0x2ba,0x8(%esp)
 826ab70:	00 
 826ab71:	c7 44 24 04 e0 64 bf 	movl   $0x8bf64e0,0x4(%esp)
 826ab78:	08 
 826ab79:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 826ab7c:	89 04 24             	mov    %eax,(%esp)
 826ab7f:	e8 94 4b 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 826ab84:	c7 44 24 04 f8 54 bf 	movl   $0x8bf54f8,0x4(%esp)
 826ab8b:	08 
 826ab8c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 826ab8f:	89 04 24             	mov    %eax,(%esp)
 826ab92:	e8 f1 4b 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 826ab97:	b8 00 00 00 00       	mov    $0x0,%eax
 826ab9c:	c9                   	leave
 826ab9d:	c3                   	ret

```

```c
// QuickParty::CQuickPartySystemManager::remove_quick_party_in_pool @ 0x826aa9a

/* QuickParty::CQuickPartySystemManager::remove_quick_party_in_pool(QuickParty::CQuickParty*,
   QuickParty::STQuickPartyPoolMap_Key const&) */

undefined4
QuickParty::CQuickPartySystemManager::remove_quick_party_in_pool
          (CQuickParty *param_1,STQuickPartyPoolMap_Key *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  STQuickPartyPoolMap_Key local_2c [4];
  map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
  local_28 [4];
  int local_24;
  cMyTrace local_20 [19];
  char local_d;
  
  if (param_2 == (STQuickPartyPoolMap_Key *)0x0) {
    uVar2 = 0;
  }
  else {
    local_d = CQuickParty::get_pool_index((CQuickParty *)param_2);
    if ((local_d < '\x04') && (-1 < local_d)) {
      std::
      map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
      ::find(local_2c);
      std::
      map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
      ::end(local_28);
      cVar1 = std::
              _Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
              ::operator!=((_Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                            *)local_2c,(_Rb_tree_iterator *)local_28);
      if (cVar1 == '\0') {
        CQuickParty::destroy((CQuickParty *)param_2);
        cMyTrace::cMyTrace(local_20,
                           "bool QuickParty::CQuickPartySystemManager::remove_quick_party_in_pool(QuickParty::CQuickParty*, const QuickParty::STQuickPartyPoolMap_Key&)"
                           ,0x2ba,5);
        cMyTrace::operator()(local_20,"QUICK_PARTY_LOG : NO EXIST KEY DATA!!");
        uVar2 = 0;
      }
      else {
        local_24 = CQuickParty::get_quick_party_index((CQuickParty *)param_2);
        iVar3 = std::
                _Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                ::operator->((_Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                              *)local_2c);
        std::list<int,std::allocator<int>>::remove
                  ((list<int,std::allocator<int>> *)(iVar3 + local_d * 8 + 4),&local_24);
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## start_game

```asm
// === 0826a972 QuickParty::CQuickPartySystemManager::start_game  [0x0826a972-0x826a9fd] ===
 826a972:	55                   	push   %ebp
 826a973:	89 e5                	mov    %esp,%ebp
 826a975:	83 ec 18             	sub    $0x18,%esp
 826a978:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 826a97c:	75 07                	jne    826a985 <_ZN10QuickParty24CQuickPartySystemManager10start_gameEPNS_11CQuickPartyERKNS_23STQuickPartyPoolMap_KeyE+0x13>
 826a97e:	b8 00 00 00 00       	mov    $0x0,%eax
 826a983:	eb 77                	jmp    826a9fc <_ZN10QuickParty24CQuickPartySystemManager10start_gameEPNS_11CQuickPartyERKNS_23STQuickPartyPoolMap_KeyE+0x8a>
 826a985:	8b 45 0c             	mov    0xc(%ebp),%eax
 826a988:	89 04 24             	mov    %eax,(%esp)
 826a98b:	e8 2e ef ff ff       	call   82698be <_ZN10QuickParty11CQuickParty21get_quick_party_countEv>
 826a990:	89 44 24 08          	mov    %eax,0x8(%esp)
 826a994:	8b 45 10             	mov    0x10(%ebp),%eax
 826a997:	89 44 24 04          	mov    %eax,0x4(%esp)
 826a99b:	8b 45 08             	mov    0x8(%ebp),%eax
 826a99e:	89 04 24             	mov    %eax,(%esp)
 826a9a1:	e8 f8 01 00 00       	call   826ab9e <_ZN10QuickParty24CQuickPartySystemManager27check_quick_party_min_countERKNS_23STQuickPartyPoolMap_KeyEi>
 826a9a6:	83 f0 01             	xor    $0x1,%eax
 826a9a9:	84 c0                	test   %al,%al
 826a9ab:	74 07                	je     826a9b4 <_ZN10QuickParty24CQuickPartySystemManager10start_gameEPNS_11CQuickPartyERKNS_23STQuickPartyPoolMap_KeyE+0x42>
 826a9ad:	b8 00 00 00 00       	mov    $0x0,%eax
 826a9b2:	eb 48                	jmp    826a9fc <_ZN10QuickParty24CQuickPartySystemManager10start_gameEPNS_11CQuickPartyERKNS_23STQuickPartyPoolMap_KeyE+0x8a>
 826a9b4:	e8 d5 17 e6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 826a9b9:	89 04 24             	mov    %eax,(%esp)
 826a9bc:	e8 ff e3 02 00       	call   8298dc0 <_ZN12CGameManager26GetQuickPartySystemManagerEv>
 826a9c1:	8b 55 10             	mov    0x10(%ebp),%edx
 826a9c4:	89 54 24 08          	mov    %edx,0x8(%esp)
 826a9c8:	8b 55 0c             	mov    0xc(%ebp),%edx
 826a9cb:	89 54 24 04          	mov    %edx,0x4(%esp)
 826a9cf:	89 04 24             	mov    %eax,(%esp)
 826a9d2:	e8 c3 00 00 00       	call   826aa9a <_ZN10QuickParty24CQuickPartySystemManager26remove_quick_party_in_poolEPNS_11CQuickPartyERKNS_23STQuickPartyPoolMap_KeyE>
 826a9d7:	83 f0 01             	xor    $0x1,%eax
 826a9da:	84 c0                	test   %al,%al
 826a9dc:	74 07                	je     826a9e5 <_ZN10QuickParty24CQuickPartySystemManager10start_gameEPNS_11CQuickPartyERKNS_23STQuickPartyPoolMap_KeyE+0x73>
 826a9de:	b8 00 00 00 00       	mov    $0x0,%eax
 826a9e3:	eb 17                	jmp    826a9fc <_ZN10QuickParty24CQuickPartySystemManager10start_gameEPNS_11CQuickPartyERKNS_23STQuickPartyPoolMap_KeyE+0x8a>
 826a9e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 826a9e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 826a9ec:	8b 45 08             	mov    0x8(%ebp),%eax
 826a9ef:	89 04 24             	mov    %eax,(%esp)
 826a9f2:	e8 93 0b 00 00       	call   826b58a <_ZN10QuickParty24CQuickPartySystemManager10start_gameEPNS_11CQuickPartyE>
 826a9f7:	b8 01 00 00 00       	mov    $0x1,%eax
 826a9fc:	c9                   	leave
 826a9fd:	c3                   	ret

```

```c
// QuickParty::CQuickPartySystemManager::start_game @ 0x826a972

/* QuickParty::CQuickPartySystemManager::start_game(QuickParty::CQuickParty*,
   QuickParty::STQuickPartyPoolMap_Key const&) */

undefined4 __thiscall
QuickParty::CQuickPartySystemManager::start_game
          (CQuickPartySystemManager *this,CQuickParty *param_1,STQuickPartyPoolMap_Key *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CGameManager *this_00;
  CQuickParty *pCVar4;
  
  if (param_1 == (CQuickParty *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar3 = CQuickParty::get_quick_party_count(param_1);
    cVar1 = check_quick_party_min_count(this,param_2,iVar3);
    if (cVar1 == '\x01') {
      this_00 = (CGameManager *)G_CGameManager();
      pCVar4 = (CQuickParty *)CGameManager::GetQuickPartySystemManager(this_00);
      cVar1 = remove_quick_party_in_pool(pCVar4,(STQuickPartyPoolMap_Key *)param_1);
      if (cVar1 == '\x01') {
        start_game(this,param_1);
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## start_game_0826b58a

```asm
// === 0826b58a QuickParty::CQuickPartySystemManager::start_game  [0x0826b58a-0x826b6f1] ===
 826b58a:	55                   	push   %ebp
 826b58b:	89 e5                	mov    %esp,%ebp
 826b58d:	83 ec 38             	sub    $0x38,%esp
 826b590:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 826b594:	75 31                	jne    826b5c7 <_ZN10QuickParty24CQuickPartySystemManager10start_gameEPNS_11CQuickPartyE+0x3d>
 826b596:	c7 44 24 10 30 56 bf 	movl   $0x8bf5630,0x10(%esp)
 826b59d:	08 
 826b59e:	c7 44 24 0c 0c 04 00 	movl   $0x40c,0xc(%esp)
 826b5a5:	00 
 826b5a6:	c7 44 24 08 a0 62 bf 	movl   $0x8bf62a0,0x8(%esp)
 826b5ad:	08 
 826b5ae:	c7 44 24 04 01 54 bf 	movl   $0x8bf5401,0x4(%esp)
 826b5b5:	08 
 826b5b6:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 826b5bd:	e8 48 86 86 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 826b5c2:	e9 29 01 00 00       	jmp    826b6f0 <_ZN10QuickParty24CQuickPartySystemManager10start_gameEPNS_11CQuickPartyE+0x166>
 826b5c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 826b5ca:	89 04 24             	mov    %eax,(%esp)
 826b5cd:	e8 ec e2 ff ff       	call   82698be <_ZN10QuickParty11CQuickParty21get_quick_party_countEv>
 826b5d2:	83 f8 01             	cmp    $0x1,%eax
 826b5d5:	0f 9e c0             	setle  %al
 826b5d8:	84 c0                	test   %al,%al
 826b5da:	74 31                	je     826b60d <_ZN10QuickParty24CQuickPartySystemManager10start_gameEPNS_11CQuickPartyE+0x83>
 826b5dc:	c7 44 24 10 58 56 bf 	movl   $0x8bf5658,0x10(%esp)
 826b5e3:	08 
 826b5e4:	c7 44 24 0c 12 04 00 	movl   $0x412,0xc(%esp)
 826b5eb:	00 
 826b5ec:	c7 44 24 08 a0 62 bf 	movl   $0x8bf62a0,0x8(%esp)
 826b5f3:	08 
 826b5f4:	c7 44 24 04 01 54 bf 	movl   $0x8bf5401,0x4(%esp)
 826b5fb:	08 
 826b5fc:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 826b603:	e8 02 86 86 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 826b608:	e9 e3 00 00 00       	jmp    826b6f0 <_ZN10QuickParty24CQuickPartySystemManager10start_gameEPNS_11CQuickPartyE+0x166>
 826b60d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 826b614:	8b 45 0c             	mov    0xc(%ebp),%eax
 826b617:	89 44 24 04          	mov    %eax,0x4(%esp)
 826b61b:	8b 45 08             	mov    0x8(%ebp),%eax
 826b61e:	89 04 24             	mov    %eax,(%esp)
 826b621:	e8 fc fb ff ff       	call   826b222 <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE>
 826b626:	89 45 f4             	mov    %eax,-0xc(%ebp)
 826b629:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 826b62d:	75 31                	jne    826b660 <_ZN10QuickParty24CQuickPartySystemManager10start_gameEPNS_11CQuickPartyE+0xd6>
 826b62f:	c7 44 24 10 98 56 bf 	movl   $0x8bf5698,0x10(%esp)
 826b636:	08 
 826b637:	c7 44 24 0c 1e 04 00 	movl   $0x41e,0xc(%esp)
 826b63e:	00 
 826b63f:	c7 44 24 08 a0 62 bf 	movl   $0x8bf62a0,0x8(%esp)
 826b646:	08 
 826b647:	c7 44 24 04 01 54 bf 	movl   $0x8bf5401,0x4(%esp)
 826b64e:	08 
 826b64f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 826b656:	e8 af 85 86 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 826b65b:	e9 90 00 00 00       	jmp    826b6f0 <_ZN10QuickParty24CQuickPartySystemManager10start_gameEPNS_11CQuickPartyE+0x166>
 826b660:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826b663:	89 44 24 04          	mov    %eax,0x4(%esp)
 826b667:	8b 45 08             	mov    0x8(%ebp),%eax
 826b66a:	89 04 24             	mov    %eax,(%esp)
 826b66d:	e8 de f6 ff ff       	call   826ad50 <_ZN10QuickParty24CQuickPartySystemManager31insert_timer_waiting_start_gameEP6CParty>
 826b672:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826b675:	89 04 24             	mov    %eax,(%esp)
 826b678:	e8 a7 16 33 00       	call   859cd24 <_ZN6CParty24send_party_realtime_infoEv>
 826b67d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826b680:	89 04 24             	mov    %eax,(%esp)
 826b683:	e8 1a 18 33 00       	call   859cea2 <_ZN6CParty17send_party_ipinfoEv>
 826b688:	e8 1a ed e6 ff       	call   80da3a7 <_Z11G_GameWorldv>
 826b68d:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 826b694:	00 
 826b695:	8b 55 f4             	mov    -0xc(%ebp),%edx
 826b698:	89 54 24 04          	mov    %edx,0x4(%esp)
 826b69c:	89 04 24             	mov    %eax,(%esp)
 826b69f:	e8 e6 d0 45 00       	call   86c878a <_ZN9GameWorld22send_party_info_to_allEP6CPartyi>
 826b6a4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 826b6ab:	00 
 826b6ac:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 826b6b3:	00 
 826b6b4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826b6b7:	89 04 24             	mov    %eax,(%esp)
 826b6ba:	e8 7f 00 33 00       	call   859b73e <_ZN6CParty32send_quick_party_matching_resultEbP5CUser>
 826b6bf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826b6c2:	89 04 24             	mov    %eax,(%esp)
 826b6c5:	e8 52 a1 ed ff       	call   814581c <_ZN6CParty12GetEPLPStateEv>
 826b6ca:	3c 01                	cmp    $0x1,%al
 826b6cc:	0f 9e c0             	setle  %al
 826b6cf:	84 c0                	test   %al,%al
 826b6d1:	74 1c                	je     826b6ef <_ZN10QuickParty24CQuickPartySystemManager10start_gameEPNS_11CQuickPartyE+0x165>
 826b6d3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826b6d6:	89 04 24             	mov    %eax,(%esp)
 826b6d9:	e8 a2 a0 ed ff       	call   8145780 <_ZN6CParty10getManagerEv>
 826b6de:	89 44 24 04          	mov    %eax,0x4(%esp)
 826b6e2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826b6e5:	89 04 24             	mov    %eax,(%esp)
 826b6e8:	e8 2b 20 33 00       	call   859d718 <_ZN6CParty10game_startEP5CUser>
 826b6ed:	eb 01                	jmp    826b6f0 <_ZN10QuickParty24CQuickPartySystemManager10start_gameEPNS_11CQuickPartyE+0x166>
 826b6ef:	90                   	nop
 826b6f0:	c9                   	leave
 826b6f1:	c3                   	ret

```

```c
// QuickParty::CQuickPartySystemManager::start_game @ 0x826b58a

/* QuickParty::CQuickPartySystemManager::start_game(QuickParty::CQuickParty*) */

void __thiscall
QuickParty::CQuickPartySystemManager::start_game
          (CQuickPartySystemManager *this,CQuickParty *param_1)

{
  char cVar1;
  int iVar2;
  CParty *this_00;
  GameWorld *this_01;
  CUser *pCVar3;
  
  if (param_1 == (CQuickParty *)0x0) {
    LogManager::logFormat
              (1,"QuickParty.cpp",
               "void QuickParty::CQuickPartySystemManager::start_game(QuickParty::CQuickParty*)",
               0x40c,"QUICK_PARTY_LOG : QUICK PARTY IS NULL!!");
  }
  else {
    iVar2 = CQuickParty::get_quick_party_count(param_1);
    if (iVar2 < 2) {
      LogManager::logFormat
                (1,"QuickParty.cpp",
                 "void QuickParty::CQuickPartySystemManager::start_game(QuickParty::CQuickParty*)",
                 0x412,"QUICK_PARTY_LOG : NO START!! BECAUSE OF QUICK PARTY COUNT 1 !!");
    }
    else {
      this_00 = (CParty *)make_quick_party(this,param_1);
      if (this_00 == (CParty *)0x0) {
        LogManager::logFormat
                  (1,"QuickParty.cpp",
                   "void QuickParty::CQuickPartySystemManager::start_game(QuickParty::CQuickParty*)"
                   ,0x41e,"QUICK_PARTY_LOG : NO EXIST PARTY!!");
      }
      else {
        insert_timer_waiting_start_game(this,this_00);
        CParty::send_party_realtime_info(this_00);
        CParty::send_party_ipinfo(this_00);
        this_01 = (GameWorld *)G_GameWorld();
        GameWorld::send_party_info_to_all(this_01,this_00,2);
        CParty::send_quick_party_matching_result(this_00,true,(CUser *)0x0);
        cVar1 = CParty::GetEPLPState(this_00);
        if (cVar1 < '\x02') {
          pCVar3 = (CUser *)CParty::getManager(this_00);
          CParty::game_start(this_00,pCVar3);
        }
      }
    }
  }
  return;
}

```

---

## ~CQuickPartySystemManager

```asm
// === 08269bf8 QuickParty::CQuickPartySystemManager::~CQuickPartySystemManager  [0x08269bf8-0x8269c0b] ===
 8269bf8:	55                   	push   %ebp
 8269bf9:	89 e5                	mov    %esp,%ebp
 8269bfb:	83 ec 18             	sub    $0x18,%esp
 8269bfe:	8b 45 08             	mov    0x8(%ebp),%eax
 8269c01:	89 04 24             	mov    %eax,(%esp)
 8269c04:	e8 b5 1d 00 00       	call   826b9be <_ZNSt3mapIN10QuickParty23STQuickPartyPoolMap_KeyENS0_24STQuickPartyPoolMap_DataESt4lessIS1_ESaISt4pairIKS1_S2_EEED1Ev>
 8269c09:	c9                   	leave
 8269c0a:	c3                   	ret
 8269c0b:	90                   	nop

```

```c
// QuickParty::CQuickPartySystemManager::~CQuickPartySystemManager @ 0x8269bf8

/* QuickParty::CQuickPartySystemManager::~CQuickPartySystemManager() */

void __thiscall
QuickParty::CQuickPartySystemManager::~CQuickPartySystemManager(CQuickPartySystemManager *this)

{
  std::
  map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
  ::~map((map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
          *)this);
  return;
}

```

