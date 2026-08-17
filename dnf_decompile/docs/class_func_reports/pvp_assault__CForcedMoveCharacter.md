# pvp_assault__CForcedMoveCharacter

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## ForcedMove

```asm
// === 082e567c pvp_assault::CForcedMoveCharacter::ForcedMove  [0x082e567c-0x82e5893] ===
 82e567c:	55                   	push   %ebp
 82e567d:	89 e5                	mov    %esp,%ebp
 82e567f:	57                   	push   %edi
 82e5680:	56                   	push   %esi
 82e5681:	53                   	push   %ebx
 82e5682:	83 ec 5c             	sub    $0x5c,%esp
 82e5685:	8b 45 08             	mov    0x8(%ebp),%eax
 82e5688:	8b 40 08             	mov    0x8(%eax),%eax
 82e568b:	85 c0                	test   %eax,%eax
 82e568d:	0f 84 f9 01 00 00    	je     82e588c <_ZN11pvp_assault20CForcedMoveCharacter10ForcedMoveEv+0x210>
 82e5693:	8b 45 08             	mov    0x8(%ebp),%eax
 82e5696:	8b 40 08             	mov    0x8(%eax),%eax
 82e5699:	89 04 24             	mov    %eax,(%esp)
 82e569c:	e8 c3 fe 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82e56a1:	0f be d0             	movsbl %al,%edx
 82e56a4:	8b 45 08             	mov    0x8(%ebp),%eax
 82e56a7:	8b 40 0c             	mov    0xc(%eax),%eax
 82e56aa:	39 c2                	cmp    %eax,%edx
 82e56ac:	75 20                	jne    82e56ce <_ZN11pvp_assault20CForcedMoveCharacter10ForcedMoveEv+0x52>
 82e56ae:	8b 45 08             	mov    0x8(%ebp),%eax
 82e56b1:	8b 40 08             	mov    0x8(%eax),%eax
 82e56b4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82e56bb:	00 
 82e56bc:	89 04 24             	mov    %eax,(%esp)
 82e56bf:	e8 fa bc 39 00       	call   86813be <_ZN5CUser8get_areaEb>
 82e56c4:	8b 55 08             	mov    0x8(%ebp),%edx
 82e56c7:	8b 52 10             	mov    0x10(%edx),%edx
 82e56ca:	39 d0                	cmp    %edx,%eax
 82e56cc:	74 07                	je     82e56d5 <_ZN11pvp_assault20CForcedMoveCharacter10ForcedMoveEv+0x59>
 82e56ce:	b8 01 00 00 00       	mov    $0x1,%eax
 82e56d3:	eb 05                	jmp    82e56da <_ZN11pvp_assault20CForcedMoveCharacter10ForcedMoveEv+0x5e>
 82e56d5:	b8 00 00 00 00       	mov    $0x0,%eax
 82e56da:	84 c0                	test   %al,%al
 82e56dc:	74 7d                	je     82e575b <_ZN11pvp_assault20CForcedMoveCharacter10ForcedMoveEv+0xdf>
 82e56de:	8b 45 08             	mov    0x8(%ebp),%eax
 82e56e1:	8b 40 1c             	mov    0x1c(%eax),%eax
 82e56e4:	89 45 cc             	mov    %eax,-0x34(%ebp)
 82e56e7:	8b 45 08             	mov    0x8(%ebp),%eax
 82e56ea:	8b 40 18             	mov    0x18(%eax),%eax
 82e56ed:	89 45 d0             	mov    %eax,-0x30(%ebp)
 82e56f0:	8b 45 08             	mov    0x8(%ebp),%eax
 82e56f3:	8b 40 14             	mov    0x14(%eax),%eax
 82e56f6:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 82e56f9:	8b 45 08             	mov    0x8(%ebp),%eax
 82e56fc:	8b 78 10             	mov    0x10(%eax),%edi
 82e56ff:	8b 45 08             	mov    0x8(%ebp),%eax
 82e5702:	8b 70 0c             	mov    0xc(%eax),%esi
 82e5705:	8b 45 08             	mov    0x8(%ebp),%eax
 82e5708:	8b 58 08             	mov    0x8(%eax),%ebx
 82e570b:	e8 97 4c df ff       	call   80da3a7 <_Z11G_GameWorldv>
 82e5710:	c7 44 24 28 00 00 00 	movl   $0x0,0x28(%esp)
 82e5717:	00 
 82e5718:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 82e571f:	00 
 82e5720:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 82e5727:	00 
 82e5728:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 82e572f:	00 
 82e5730:	8b 55 cc             	mov    -0x34(%ebp),%edx
 82e5733:	89 54 24 18          	mov    %edx,0x18(%esp)
 82e5737:	8b 55 d0             	mov    -0x30(%ebp),%edx
 82e573a:	89 54 24 14          	mov    %edx,0x14(%esp)
 82e573e:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 82e5741:	89 54 24 10          	mov    %edx,0x10(%esp)
 82e5745:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 82e5749:	89 74 24 08          	mov    %esi,0x8(%esp)
 82e574d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82e5751:	89 04 24             	mov    %eax,(%esp)
 82e5754:	e8 2b 03 3e 00       	call   86c5a84 <_ZN9GameWorld9move_areaEP5CUseriiiiibiii>
 82e5759:	eb 35                	jmp    82e5790 <_ZN11pvp_assault20CForcedMoveCharacter10ForcedMoveEv+0x114>
 82e575b:	8b 45 08             	mov    0x8(%ebp),%eax
 82e575e:	8b 40 1c             	mov    0x1c(%eax),%eax
 82e5761:	0f be d8             	movsbl %al,%ebx
 82e5764:	8b 45 08             	mov    0x8(%ebp),%eax
 82e5767:	8b 40 18             	mov    0x18(%eax),%eax
 82e576a:	0f b7 c8             	movzwl %ax,%ecx
 82e576d:	8b 45 08             	mov    0x8(%ebp),%eax
 82e5770:	8b 40 14             	mov    0x14(%eax),%eax
 82e5773:	0f b7 d0             	movzwl %ax,%edx
 82e5776:	8b 45 08             	mov    0x8(%ebp),%eax
 82e5779:	8b 40 08             	mov    0x8(%eax),%eax
 82e577c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 82e5780:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 82e5784:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e5788:	89 04 24             	mov    %eax,(%esp)
 82e578b:	e8 9a b6 00 00       	call   82f0e2a <_ZN5CUser12set_positionEttc>
 82e5790:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82e5793:	89 04 24             	mov    %eax,(%esp)
 82e5796:	e8 b1 85 2a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82e579b:	c7 44 24 08 8a 00 00 	movl   $0x8a,0x8(%esp)
 82e57a2:	00 
 82e57a3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82e57aa:	00 
 82e57ab:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82e57ae:	89 04 24             	mov    %eax,(%esp)
 82e57b1:	e8 46 61 de ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82e57b6:	8b 45 08             	mov    0x8(%ebp),%eax
 82e57b9:	8b 40 08             	mov    0x8(%eax),%eax
 82e57bc:	89 04 24             	mov    %eax,(%esp)
 82e57bf:	e8 b8 4b df ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 82e57c4:	0f b7 c0             	movzwl %ax,%eax
 82e57c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e57cb:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82e57ce:	89 04 24             	mov    %eax,(%esp)
 82e57d1:	e8 ce 46 df ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82e57d6:	8b 45 08             	mov    0x8(%ebp),%eax
 82e57d9:	8b 40 14             	mov    0x14(%eax),%eax
 82e57dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e57e0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82e57e3:	89 04 24             	mov    %eax,(%esp)
 82e57e6:	e8 b9 46 df ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82e57eb:	8b 45 08             	mov    0x8(%ebp),%eax
 82e57ee:	8b 40 18             	mov    0x18(%eax),%eax
 82e57f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e57f5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82e57f8:	89 04 24             	mov    %eax,(%esp)
 82e57fb:	e8 a4 46 df ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82e5800:	8b 45 08             	mov    0x8(%ebp),%eax
 82e5803:	8b 40 1c             	mov    0x1c(%eax),%eax
 82e5806:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e580a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82e580d:	89 04 24             	mov    %eax,(%esp)
 82e5810:	e8 0b 61 de ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82e5815:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82e581c:	00 
 82e581d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82e5820:	89 04 24             	mov    %eax,(%esp)
 82e5823:	e8 30 61 de ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82e5828:	8b 45 08             	mov    0x8(%ebp),%eax
 82e582b:	8b 40 0c             	mov    0xc(%eax),%eax
 82e582e:	85 c0                	test   %eax,%eax
 82e5830:	75 0a                	jne    82e583c <_ZN11pvp_assault20CForcedMoveCharacter10ForcedMoveEv+0x1c0>
 82e5832:	8b 45 08             	mov    0x8(%ebp),%eax
 82e5835:	8b 40 10             	mov    0x10(%eax),%eax
 82e5838:	85 c0                	test   %eax,%eax
 82e583a:	74 28                	je     82e5864 <_ZN11pvp_assault20CForcedMoveCharacter10ForcedMoveEv+0x1e8>
 82e583c:	8b 45 08             	mov    0x8(%ebp),%eax
 82e583f:	8b 70 10             	mov    0x10(%eax),%esi
 82e5842:	8b 45 08             	mov    0x8(%ebp),%eax
 82e5845:	8b 58 0c             	mov    0xc(%eax),%ebx
 82e5848:	e8 5a 4b df ff       	call   80da3a7 <_Z11G_GameWorldv>
 82e584d:	8d 55 dc             	lea    -0x24(%ebp),%edx
 82e5850:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82e5854:	89 74 24 08          	mov    %esi,0x8(%esp)
 82e5858:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82e585c:	89 04 24             	mov    %eax,(%esp)
 82e585f:	e8 04 29 3e 00       	call   86c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>
 82e5864:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82e5867:	89 04 24             	mov    %eax,(%esp)
 82e586a:	e8 11 86 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82e586f:	eb 1b                	jmp    82e588c <_ZN11pvp_assault20CForcedMoveCharacter10ForcedMoveEv+0x210>
 82e5871:	89 d3                	mov    %edx,%ebx
 82e5873:	89 c6                	mov    %eax,%esi
 82e5875:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82e5878:	89 04 24             	mov    %eax,(%esp)
 82e587b:	e8 00 86 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82e5880:	89 f0                	mov    %esi,%eax
 82e5882:	89 da                	mov    %ebx,%edx
 82e5884:	89 04 24             	mov    %eax,(%esp)
 82e5887:	e8 c4 de 7f 00       	call   8ae3750 <_Unwind_Resume>
 82e588c:	83 c4 5c             	add    $0x5c,%esp
 82e588f:	5b                   	pop    %ebx
 82e5890:	5e                   	pop    %esi
 82e5891:	5f                   	pop    %edi
 82e5892:	5d                   	pop    %ebp
 82e5893:	c3                   	ret

```

```c
// pvp_assault::CForcedMoveCharacter::ForcedMove @ 0x82e567c

/* pvp_assault::CForcedMoveCharacter::ForcedMove() */

void __thiscall pvp_assault::CForcedMoveCharacter::ForcedMove(CForcedMoveCharacter *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CUser *pCVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  GameWorld *pGVar9;
  uint uVar10;
  PacketGuard local_28 [24];
  
  if (*(int *)(this + 8) != 0) {
    cVar7 = CUserCharacInfo::getCurCharacVill(*(CUserCharacInfo **)(this + 8));
    if (((int)cVar7 == *(int *)(this + 0xc)) &&
       (iVar8 = CUser::get_area(*(CUser **)(this + 8),false), iVar8 == *(int *)(this + 0x10))) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      iVar8 = *(int *)(this + 0x1c);
      iVar1 = *(int *)(this + 0x18);
      iVar2 = *(int *)(this + 0x14);
      iVar3 = *(int *)(this + 0x10);
      iVar4 = *(int *)(this + 0xc);
      pCVar5 = *(CUser **)(this + 8);
      pGVar9 = (GameWorld *)G_GameWorld();
      GameWorld::move_area(pGVar9,pCVar5,iVar4,iVar3,iVar2,iVar1,iVar8,false,0,0,0);
    }
    else {
      CUser::set_position(*(CUser **)(this + 8),(ushort)*(undefined4 *)(this + 0x14),
                          (ushort)*(undefined4 *)(this + 0x18),(char)*(undefined4 *)(this + 0x1c));
    }
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 082e57b1 to 082e5863 has its CatchHandler @ 082e5871 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x8a);
    uVar10 = CUser::get_unique_id(*(CUser **)(this + 8));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,uVar10 & 0xffff);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,*(int *)(this + 0x14));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,*(int *)(this + 0x18));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,*(int *)(this + 0x1c));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    if ((*(int *)(this + 0xc) != 0) || (*(int *)(this + 0x10) != 0)) {
      iVar8 = *(int *)(this + 0x10);
      iVar1 = *(int *)(this + 0xc);
      pGVar9 = (GameWorld *)G_GameWorld();
      GameWorld::send_to_area(pGVar9,iVar1,iVar8,local_28);
    }
    PacketGuard::~PacketGuard(local_28);
    return;
  }
  return;
}

```

