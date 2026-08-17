# advancealtar__StageControl

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 16

---

## StageControl

```asm
// === 0812f9a2 advancealtar::StageControl::StageControl  [0x0812f9a2-0x812fa05] ===
 812f9a2:	55                   	push   %ebp
 812f9a3:	89 e5                	mov    %esp,%ebp
 812f9a5:	56                   	push   %esi
 812f9a6:	53                   	push   %ebx
 812f9a7:	83 ec 10             	sub    $0x10,%esp
 812f9aa:	8b 45 08             	mov    0x8(%ebp),%eax
 812f9ad:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%eax)
 812f9b3:	8b 45 08             	mov    0x8(%ebp),%eax
 812f9b6:	8d 90 98 00 00 00    	lea    0x98(%eax),%edx
 812f9bc:	8b 45 08             	mov    0x8(%ebp),%eax
 812f9bf:	83 c0 04             	add    $0x4,%eax
 812f9c2:	89 54 24 04          	mov    %edx,0x4(%esp)
 812f9c6:	89 04 24             	mov    %eax,(%esp)
 812f9c9:	e8 4a e2 ff ff       	call   812dc18 <_ZN12advancealtar9ProcStageC1ERNS_10CharacDataE>
 812f9ce:	8b 45 08             	mov    0x8(%ebp),%eax
 812f9d1:	05 98 00 00 00       	add    $0x98,%eax
 812f9d6:	89 04 24             	mov    %eax,(%esp)
 812f9d9:	e8 46 d6 ff ff       	call   812d024 <_ZN12advancealtar10CharacDataC1Ev>
 812f9de:	eb 1e                	jmp    812f9fe <_ZN12advancealtar12StageControlC1Ev+0x5c>
 812f9e0:	89 d3                	mov    %edx,%ebx
 812f9e2:	89 c6                	mov    %eax,%esi
 812f9e4:	8b 45 08             	mov    0x8(%ebp),%eax
 812f9e7:	83 c0 04             	add    $0x4,%eax
 812f9ea:	89 04 24             	mov    %eax,(%esp)
 812f9ed:	e8 34 e3 ff ff       	call   812dd26 <_ZN12advancealtar9ProcStageD1Ev>
 812f9f2:	89 f0                	mov    %esi,%eax
 812f9f4:	89 da                	mov    %ebx,%edx
 812f9f6:	89 04 24             	mov    %eax,(%esp)
 812f9f9:	e8 52 3d 9b 00       	call   8ae3750 <_Unwind_Resume>
 812f9fe:	83 c4 10             	add    $0x10,%esp
 812fa01:	5b                   	pop    %ebx
 812fa02:	5e                   	pop    %esi
 812fa03:	5d                   	pop    %ebp
 812fa04:	c3                   	ret
 812fa05:	90                   	nop

```

```c
// advancealtar::StageControl::StageControl @ 0x812f9a2

/* advancealtar::StageControl::StageControl() */

void __thiscall advancealtar::StageControl::StageControl(StageControl *this)

{
  *(undefined4 *)this = 0xffffffff;
  ProcStage::ProcStage((ProcStage *)(this + 4),(CharacData *)(this + 0x98));
                    /* try { // try from 0812f9d9 to 0812f9dd has its CatchHandler @ 0812f9e0 */
  CharacData::CharacData((CharacData *)(this + 0x98));
  return;
}

```

---

## destroy

```asm
// === 081300ce advancealtar::StageControl::destroy  [0x081300ce-0x81300f5] ===
 81300ce:	55                   	push   %ebp
 81300cf:	89 e5                	mov    %esp,%ebp
 81300d1:	83 ec 18             	sub    $0x18,%esp
 81300d4:	8b 45 08             	mov    0x8(%ebp),%eax
 81300d7:	89 04 24             	mov    %eax,(%esp)
 81300da:	e8 75 f9 ff ff       	call   812fa54 <_ZN12advancealtar12StageControl5resetEv>
 81300df:	e8 aa c0 f9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 81300e4:	8b 55 08             	mov    0x8(%ebp),%edx
 81300e7:	89 54 24 04          	mov    %edx,0x4(%esp)
 81300eb:	89 04 24             	mov    %eax,(%esp)
 81300ee:	e8 db 5b 16 00       	call   8295cce <_ZN12CGameManager18returnAdvanceAltarEPN12advancealtar12StageControlE>
 81300f3:	c9                   	leave
 81300f4:	c3                   	ret
 81300f5:	90                   	nop

```

```c
// advancealtar::StageControl::destroy @ 0x81300ce

/* advancealtar::StageControl::destroy() */

void __thiscall advancealtar::StageControl::destroy(StageControl *this)

{
  CGameManager *this_00;
  
  reset(this);
  this_00 = (CGameManager *)G_CGameManager();
  CGameManager::returnAdvanceAltar(this_00,this);
  return;
}

```

---

## getCenterCount

```asm
// === 081307a6 advancealtar::StageControl::getCenterCount  [0x081307a6-0x8130901] ===
 81307a6:	55                   	push   %ebp
 81307a7:	89 e5                	mov    %esp,%ebp
 81307a9:	56                   	push   %esi
 81307aa:	53                   	push   %ebx
 81307ab:	83 ec 40             	sub    $0x40,%esp
 81307ae:	8b 45 08             	mov    0x8(%ebp),%eax
 81307b1:	83 c0 04             	add    $0x4,%eax
 81307b4:	89 04 24             	mov    %eax,(%esp)
 81307b7:	e8 a4 40 00 00       	call   8134860 <_ZNK12advancealtar9ProcStage6getMapEv>
 81307bc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81307bf:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81307c3:	75 0a                	jne    81307cf <_ZNK12advancealtar12StageControl14getCenterCountEv+0x29>
 81307c5:	bb 00 00 00 00       	mov    $0x0,%ebx
 81307ca:	e9 26 01 00 00       	jmp    81308f5 <_ZNK12advancealtar12StageControl14getCenterCountEv+0x14f>
 81307cf:	8b 45 08             	mov    0x8(%ebp),%eax
 81307d2:	05 98 00 00 00       	add    $0x98,%eax
 81307d7:	89 04 24             	mov    %eax,(%esp)
 81307da:	e8 35 40 00 00       	call   8134814 <_ZNK12advancealtar10CharacData7getUserEv>
 81307df:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81307e2:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81307e6:	75 0a                	jne    81307f2 <_ZNK12advancealtar12StageControl14getCenterCountEv+0x4c>
 81307e8:	bb 00 00 00 00       	mov    $0x0,%ebx
 81307ed:	e9 03 01 00 00       	jmp    81308f5 <_ZNK12advancealtar12StageControl14getCenterCountEv+0x14f>
 81307f2:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 81307f9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81307fc:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81307ff:	89 54 24 04          	mov    %edx,0x4(%esp)
 8130803:	89 04 24             	mov    %eax,(%esp)
 8130806:	e8 8b 3f 00 00       	call   8134796 <_ZNK4CMap16get_monster_listEv>
 813080b:	83 ec 04             	sub    $0x4,%esp
 813080e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8130811:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8130814:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8130817:	8b 55 f0             	mov    -0x10(%ebp),%edx
 813081a:	89 54 24 04          	mov    %edx,0x4(%esp)
 813081e:	89 04 24             	mov    %eax,(%esp)
 8130821:	e8 62 55 00 00       	call   8135d88 <_ZNKSt4listI11_mapMonsterSaIS0_EE5beginEv>
 8130826:	83 ec 04             	sub    $0x4,%esp
 8130829:	eb 70                	jmp    813089b <_ZNK12advancealtar12StageControl14getCenterCountEv+0xf5>
 813082b:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 8130832:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 8130839:	8d 45 d0             	lea    -0x30(%ebp),%eax
 813083c:	89 04 24             	mov    %eax,(%esp)
 813083f:	e8 da 55 00 00       	call   8135e1e <_ZNKSt20_List_const_iteratorI11_mapMonsterEptEv>
 8130844:	8b 00                	mov    (%eax),%eax
 8130846:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8130849:	8d 8a 60 df 08 00    	lea    0x8df60(%edx),%ecx
 813084f:	8d 55 c8             	lea    -0x38(%ebp),%edx
 8130852:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8130856:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8130859:	89 54 24 08          	mov    %edx,0x8(%esp)
 813085d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8130861:	89 0c 24             	mov    %ecx,(%esp)
 8130864:	e8 81 20 00 00       	call   81328ea <_ZNK12advancealtar25CharacAdvanceAltarManager12getTowerInfoEiRiS1_>
 8130869:	88 45 f7             	mov    %al,-0x9(%ebp)
 813086c:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8130870:	83 f0 01             	xor    $0x1,%eax
 8130873:	84 c0                	test   %al,%al
 8130875:	75 06                	jne    813087d <_ZNK12advancealtar12StageControl14getCenterCountEv+0xd7>
 8130877:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 813087b:	eb 01                	jmp    813087e <_ZNK12advancealtar12StageControl14getCenterCountEv+0xd8>
 813087d:	90                   	nop
 813087e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8130881:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8130888:	00 
 8130889:	8d 55 d0             	lea    -0x30(%ebp),%edx
 813088c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8130890:	89 04 24             	mov    %eax,(%esp)
 8130893:	e8 4e 55 00 00       	call   8135de6 <_ZNSt20_List_const_iteratorI11_mapMonsterEppEi>
 8130898:	83 ec 04             	sub    $0x4,%esp
 813089b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 813089e:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81308a1:	89 54 24 04          	mov    %edx,0x4(%esp)
 81308a5:	89 04 24             	mov    %eax,(%esp)
 81308a8:	e8 01 55 00 00       	call   8135dae <_ZNKSt4listI11_mapMonsterSaIS0_EE3endEv>
 81308ad:	83 ec 04             	sub    $0x4,%esp
 81308b0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81308b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81308b7:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81308ba:	89 04 24             	mov    %eax,(%esp)
 81308bd:	e8 10 55 00 00       	call   8135dd2 <_ZNKSt20_List_const_iteratorI11_mapMonsterEneERKS1_>
 81308c2:	84 c0                	test   %al,%al
 81308c4:	0f 85 61 ff ff ff    	jne    813082b <_ZNK12advancealtar12StageControl14getCenterCountEv+0x85>
 81308ca:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 81308cd:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81308d0:	89 04 24             	mov    %eax,(%esp)
 81308d3:	e8 aa 3e 00 00       	call   8134782 <_ZNSt4listI11_mapMonsterSaIS0_EED1Ev>
 81308d8:	eb 1b                	jmp    81308f5 <_ZNK12advancealtar12StageControl14getCenterCountEv+0x14f>
 81308da:	89 d3                	mov    %edx,%ebx
 81308dc:	89 c6                	mov    %eax,%esi
 81308de:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81308e1:	89 04 24             	mov    %eax,(%esp)
 81308e4:	e8 99 3e 00 00       	call   8134782 <_ZNSt4listI11_mapMonsterSaIS0_EED1Ev>
 81308e9:	89 f0                	mov    %esi,%eax
 81308eb:	89 da                	mov    %ebx,%edx
 81308ed:	89 04 24             	mov    %eax,(%esp)
 81308f0:	e8 5b 2e 9b 00       	call   8ae3750 <_Unwind_Resume>
 81308f5:	89 d8                	mov    %ebx,%eax
 81308f7:	8d 65 f8             	lea    -0x8(%ebp),%esp
 81308fa:	83 c4 00             	add    $0x0,%esp
 81308fd:	5b                   	pop    %ebx
 81308fe:	5e                   	pop    %esi
 81308ff:	5d                   	pop    %ebp
 8130900:	c3                   	ret
 8130901:	90                   	nop

```

```c
// advancealtar::StageControl::getCenterCount @ 0x81307a6

/* advancealtar::StageControl::getCenterCount() const */

int __thiscall advancealtar::StageControl::getCenterCount(StageControl *this)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int local_3c [2];
  _List_const_iterator<_mapMonster> local_34 [4];
  list<_mapMonster,std::allocator<_mapMonster>> local_30 [8];
  _List_const_iterator local_28 [4];
  _List_const_iterator<_mapMonster> local_24 [4];
  int local_20;
  int local_1c;
  int local_18;
  list<_mapMonster,std::allocator<_mapMonster>> *local_14;
  char local_d;
  
  local_20 = ProcStage::getMap((ProcStage *)(this + 4));
  if (local_20 == 0) {
    iVar3 = 0;
  }
  else {
    local_1c = CharacData::getUser((CharacData *)(this + 0x98));
    if (local_1c == 0) {
      iVar3 = 0;
    }
    else {
      local_18 = 0;
      CMap::get_monster_list();
      local_14 = local_30;
                    /* try { // try from 08130821 to 081308ac has its CatchHandler @ 081308da */
      std::list<_mapMonster,std::allocator<_mapMonster>>::begin();
      while( true ) {
        std::list<_mapMonster,std::allocator<_mapMonster>>::end();
        cVar1 = std::_List_const_iterator<_mapMonster>::operator!=(local_34,local_28);
        iVar3 = local_18;
        if (cVar1 == '\0') break;
        local_3c[1] = 0;
        local_3c[0] = 0;
        piVar2 = (int *)std::_List_const_iterator<_mapMonster>::operator->(local_34);
        local_d = CharacAdvanceAltarManager::getTowerInfo
                            ((CharacAdvanceAltarManager *)(local_1c + 0x8df60),*piVar2,local_3c + 1,
                             local_3c);
        if (local_d == '\x01') {
          local_18 = local_18 + 1;
        }
        std::_List_const_iterator<_mapMonster>::operator++(local_24,(int)local_34);
      }
      std::list<_mapMonster,std::allocator<_mapMonster>>::~list(local_30);
    }
  }
  return iVar3;
}

```

---

## gotoStage

```asm
// === 0812fdd4 advancealtar::StageControl::gotoStage  [0x0812fdd4-0x81300cd] ===
 812fdd4:	55                   	push   %ebp
 812fdd5:	89 e5                	mov    %esp,%ebp
 812fdd7:	56                   	push   %esi
 812fdd8:	53                   	push   %ebx
 812fdd9:	83 ec 50             	sub    $0x50,%esp
 812fddc:	e8 c6 a5 fa ff       	call   80da3a7 <_Z11G_GameWorldv>
 812fde1:	8b 55 08             	mov    0x8(%ebp),%edx
 812fde4:	89 54 24 04          	mov    %edx,0x4(%esp)
 812fde8:	89 04 24             	mov    %eax,(%esp)
 812fdeb:	e8 48 d2 59 00       	call   86cd038 <_ZN9GameWorld14getUserVillageEP5CUser>
 812fdf0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 812fdf3:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 812fdf7:	75 4d                	jne    812fe46 <_ZN12advancealtar12StageControl9gotoStageEP5CUser+0x72>
 812fdf9:	8b 45 08             	mov    0x8(%ebp),%eax
 812fdfc:	89 04 24             	mov    %eax,(%esp)
 812fdff:	e8 60 57 51 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 812fe04:	0f be d8             	movsbl %al,%ebx
 812fe07:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 812fe0e:	00 
 812fe0f:	c7 44 24 08 85 05 00 	movl   $0x585,0x8(%esp)
 812fe16:	00 
 812fe17:	c7 44 24 04 a0 d5 b6 	movl   $0x8b6d5a0,0x4(%esp)
 812fe1e:	08 
 812fe1f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 812fe22:	89 04 24             	mov    %eax,(%esp)
 812fe25:	e8 ee f8 41 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 812fe2a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 812fe2e:	c7 44 24 04 39 c7 b6 	movl   $0x8b6c739,0x4(%esp)
 812fe35:	08 
 812fe36:	8d 45 d0             	lea    -0x30(%ebp),%eax
 812fe39:	89 04 24             	mov    %eax,(%esp)
 812fe3c:	e8 47 f9 41 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 812fe41:	e9 81 02 00 00       	jmp    81300c7 <_ZN12advancealtar12StageControl9gotoStageEP5CUser+0x2f3>
 812fe46:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 812fe4d:	00 
 812fe4e:	8b 45 08             	mov    0x8(%ebp),%eax
 812fe51:	89 04 24             	mov    %eax,(%esp)
 812fe54:	e8 65 15 55 00       	call   86813be <_ZN5CUser8get_areaEb>
 812fe59:	89 44 24 04          	mov    %eax,0x4(%esp)
 812fe5d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 812fe60:	89 04 24             	mov    %eax,(%esp)
 812fe63:	e8 3a 3d 59 00       	call   86c3ba2 <_ZN7Village7getAreaEi>
 812fe68:	89 45 f4             	mov    %eax,-0xc(%ebp)
 812fe6b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 812fe6f:	75 54                	jne    812fec5 <_ZN12advancealtar12StageControl9gotoStageEP5CUser+0xf1>
 812fe71:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 812fe78:	00 
 812fe79:	8b 45 08             	mov    0x8(%ebp),%eax
 812fe7c:	89 04 24             	mov    %eax,(%esp)
 812fe7f:	e8 3a 15 55 00       	call   86813be <_ZN5CUser8get_areaEb>
 812fe84:	89 c3                	mov    %eax,%ebx
 812fe86:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 812fe8d:	00 
 812fe8e:	c7 44 24 08 8c 05 00 	movl   $0x58c,0x8(%esp)
 812fe95:	00 
 812fe96:	c7 44 24 04 a0 d5 b6 	movl   $0x8b6d5a0,0x4(%esp)
 812fe9d:	08 
 812fe9e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 812fea1:	89 04 24             	mov    %eax,(%esp)
 812fea4:	e8 6f f8 41 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 812fea9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 812fead:	c7 44 24 04 39 c7 b6 	movl   $0x8b6c739,0x4(%esp)
 812feb4:	08 
 812feb5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 812feb8:	89 04 24             	mov    %eax,(%esp)
 812febb:	e8 c8 f8 41 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 812fec0:	e9 02 02 00 00       	jmp    81300c7 <_ZN12advancealtar12StageControl9gotoStageEP5CUser+0x2f3>
 812fec5:	8b 45 08             	mov    0x8(%ebp),%eax
 812fec8:	89 44 24 04          	mov    %eax,0x4(%esp)
 812fecc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 812fecf:	89 04 24             	mov    %eax,(%esp)
 812fed2:	e8 0d 2d 59 00       	call   86c2be4 <_ZN4Area10erase_userEP5CUser>
 812fed7:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 812feda:	89 04 24             	mov    %eax,(%esp)
 812fedd:	e8 6a de 45 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 812fee2:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 812fee9:	00 
 812feea:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 812fef1:	00 
 812fef2:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 812fef5:	89 04 24             	mov    %eax,(%esp)
 812fef8:	e8 ff b9 f9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 812fefd:	8b 45 08             	mov    0x8(%ebp),%eax
 812ff00:	89 04 24             	mov    %eax,(%esp)
 812ff03:	e8 74 a4 fa ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 812ff08:	0f b7 c0             	movzwl %ax,%eax
 812ff0b:	89 44 24 04          	mov    %eax,0x4(%esp)
 812ff0f:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 812ff12:	89 04 24             	mov    %eax,(%esp)
 812ff15:	e8 8a 9f fa ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 812ff1a:	8b 45 08             	mov    0x8(%ebp),%eax
 812ff1d:	89 04 24             	mov    %eax,(%esp)
 812ff20:	e8 3f 56 51 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 812ff25:	0f be c0             	movsbl %al,%eax
 812ff28:	89 44 24 04          	mov    %eax,0x4(%esp)
 812ff2c:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 812ff2f:	89 04 24             	mov    %eax,(%esp)
 812ff32:	e8 e9 b9 f9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 812ff37:	c7 44 24 04 ff 00 00 	movl   $0xff,0x4(%esp)
 812ff3e:	00 
 812ff3f:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 812ff42:	89 04 24             	mov    %eax,(%esp)
 812ff45:	e8 d6 b9 f9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 812ff4a:	8b 45 08             	mov    0x8(%ebp),%eax
 812ff4d:	89 04 24             	mov    %eax,(%esp)
 812ff50:	e8 d7 49 00 00       	call   813492c <_ZN5CUser8get_posXEv>
 812ff55:	0f b7 c0             	movzwl %ax,%eax
 812ff58:	89 44 24 04          	mov    %eax,0x4(%esp)
 812ff5c:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 812ff5f:	89 04 24             	mov    %eax,(%esp)
 812ff62:	e8 3d 9f fa ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 812ff67:	8b 45 08             	mov    0x8(%ebp),%eax
 812ff6a:	89 04 24             	mov    %eax,(%esp)
 812ff6d:	e8 ca 49 00 00       	call   813493c <_ZN5CUser8get_posYEv>
 812ff72:	0f b7 c0             	movzwl %ax,%eax
 812ff75:	89 44 24 04          	mov    %eax,0x4(%esp)
 812ff79:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 812ff7c:	89 04 24             	mov    %eax,(%esp)
 812ff7f:	e8 20 9f fa ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 812ff84:	8b 45 08             	mov    0x8(%ebp),%eax
 812ff87:	89 04 24             	mov    %eax,(%esp)
 812ff8a:	e8 bd 49 00 00       	call   813494c <_ZN5CUser13get_directionEv>
 812ff8f:	0f be c0             	movsbl %al,%eax
 812ff92:	89 44 24 04          	mov    %eax,0x4(%esp)
 812ff96:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 812ff99:	89 04 24             	mov    %eax,(%esp)
 812ff9c:	e8 7f b9 f9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 812ffa1:	8b 45 08             	mov    0x8(%ebp),%eax
 812ffa4:	89 04 24             	mov    %eax,(%esp)
 812ffa7:	e8 38 be 55 00       	call   868bde4 <_ZN15CUserCharacInfo25get_charac_visible_valuesEv>
 812ffac:	0f be c0             	movsbl %al,%eax
 812ffaf:	89 44 24 04          	mov    %eax,0x4(%esp)
 812ffb3:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 812ffb6:	89 04 24             	mov    %eax,(%esp)
 812ffb9:	e8 62 b9 f9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 812ffbe:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 812ffc5:	00 
 812ffc6:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 812ffc9:	89 04 24             	mov    %eax,(%esp)
 812ffcc:	e8 87 b9 f9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 812ffd1:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 812ffd4:	89 44 24 04          	mov    %eax,0x4(%esp)
 812ffd8:	8b 45 08             	mov    0x8(%ebp),%eax
 812ffdb:	89 04 24             	mov    %eax,(%esp)
 812ffde:	e8 d7 85 51 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 812ffe3:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 812ffe6:	89 04 24             	mov    %eax,(%esp)
 812ffe9:	e8 f8 b8 f9 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 812ffee:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 812fff5:	00 
 812fff6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 812fffd:	00 
 812fffe:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8130001:	89 04 24             	mov    %eax,(%esp)
 8130004:	e8 f3 b8 f9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8130009:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8130010:	00 
 8130011:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8130014:	89 04 24             	mov    %eax,(%esp)
 8130017:	e8 04 b9 f9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 813001c:	8b 45 08             	mov    0x8(%ebp),%eax
 813001f:	89 04 24             	mov    %eax,(%esp)
 8130022:	e8 55 a3 fa ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8130027:	0f b7 c0             	movzwl %ax,%eax
 813002a:	89 44 24 04          	mov    %eax,0x4(%esp)
 813002e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8130031:	89 04 24             	mov    %eax,(%esp)
 8130034:	e8 6b 9e fa ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8130039:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8130040:	00 
 8130041:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8130044:	89 04 24             	mov    %eax,(%esp)
 8130047:	e8 d4 b8 f9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 813004c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8130053:	00 
 8130054:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8130057:	89 04 24             	mov    %eax,(%esp)
 813005a:	e8 f9 b8 f9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 813005f:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8130062:	89 44 24 04          	mov    %eax,0x4(%esp)
 8130066:	8b 45 08             	mov    0x8(%ebp),%eax
 8130069:	89 04 24             	mov    %eax,(%esp)
 813006c:	e8 49 85 51 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8130071:	e8 31 a3 fa ff       	call   80da3a7 <_Z11G_GameWorldv>
 8130076:	8b 55 08             	mov    0x8(%ebp),%edx
 8130079:	89 54 24 08          	mov    %edx,0x8(%esp)
 813007d:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 8130080:	89 54 24 04          	mov    %edx,0x4(%esp)
 8130084:	89 04 24             	mov    %eax,(%esp)
 8130087:	e8 d0 48 00 00       	call   813495c <_ZN9GameWorld8send_allER11PacketGuardP5CUser>
 813008c:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 8130093:	00 
 8130094:	8b 45 08             	mov    0x8(%ebp),%eax
 8130097:	89 04 24             	mov    %eax,(%esp)
 813009a:	e8 13 ed 54 00       	call   867edb2 <_ZN5CUser9set_stateE8ch_state>
 813009f:	eb 1b                	jmp    81300bc <_ZN12advancealtar12StageControl9gotoStageEP5CUser+0x2e8>
 81300a1:	89 d3                	mov    %edx,%ebx
 81300a3:	89 c6                	mov    %eax,%esi
 81300a5:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81300a8:	89 04 24             	mov    %eax,(%esp)
 81300ab:	e8 d0 dd 45 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81300b0:	89 f0                	mov    %esi,%eax
 81300b2:	89 da                	mov    %ebx,%edx
 81300b4:	89 04 24             	mov    %eax,(%esp)
 81300b7:	e8 94 36 9b 00       	call   8ae3750 <_Unwind_Resume>
 81300bc:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81300bf:	89 04 24             	mov    %eax,(%esp)
 81300c2:	e8 b9 dd 45 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81300c7:	83 c4 50             	add    $0x50,%esp
 81300ca:	5b                   	pop    %ebx
 81300cb:	5e                   	pop    %esi
 81300cc:	5d                   	pop    %ebp
 81300cd:	c3                   	ret

```

```c
// advancealtar::StageControl::gotoStage @ 0x812fdd4

/* advancealtar::StageControl::gotoStage(CUser*) */

void advancealtar::StageControl::gotoStage(CUser *param_1)

{
  char cVar1;
  GameWorld *pGVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  PacketGuard local_40 [12];
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  Village *local_14;
  Area *local_10;
  
  pGVar2 = (GameWorld *)G_GameWorld();
  local_14 = (Village *)GameWorld::getUserVillage(pGVar2,param_1);
  if (local_14 == (Village *)0x0) {
    cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    cMyTrace::cMyTrace(local_34,"static void advancealtar::StageControl::gotoStage(CUser*)",0x585,5)
    ;
    cMyTrace::operator()(local_34,"%d",(int)cVar1);
  }
  else {
    iVar3 = CUser::get_area(param_1,false);
    local_10 = (Area *)Village::getArea(local_14,iVar3);
    if (local_10 == (Area *)0x0) {
      uVar4 = CUser::get_area(param_1,false);
      cMyTrace::cMyTrace(local_24,"static void advancealtar::StageControl::gotoStage(CUser*)",0x58c,
                         5);
      cMyTrace::operator()(local_24,"%d",uVar4);
    }
    else {
      Area::erase_user(local_10,param_1);
      PacketGuard::PacketGuard(local_40);
                    /* try { // try from 0812fef8 to 0813009e has its CatchHandler @ 081300a1 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,0,0x17);
      uVar5 = CUser::get_unique_id(param_1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_40,uVar5 & 0xffff);
      cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,(int)cVar1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,0xff);
      uVar5 = CUser::get_posX(param_1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_40,uVar5 & 0xffff);
      uVar5 = CUser::get_posY(param_1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_40,uVar5 & 0xffff);
      cVar1 = CUser::get_direction(param_1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,(int)cVar1);
      cVar1 = CUserCharacInfo::get_charac_visible_values((CUserCharacInfo *)param_1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,(int)cVar1);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
      CUser::Send(param_1,local_40);
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_40);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,0,3);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,1);
      uVar5 = CUser::get_unique_id(param_1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_40,uVar5 & 0xffff);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,1);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
      CUser::Send(param_1,local_40);
      pGVar2 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar2,local_40,param_1);
      CUser::set_state(param_1,0xd);
      PacketGuard::~PacketGuard(local_40);
    }
  }
  return;
}

```

---

## leaveUser

```asm
// === 0812fc4e advancealtar::StageControl::leaveUser  [0x0812fc4e-0x812fdd3] ===
 812fc4e:	55                   	push   %ebp
 812fc4f:	89 e5                	mov    %esp,%ebp
 812fc51:	56                   	push   %esi
 812fc52:	53                   	push   %ebx
 812fc53:	83 ec 20             	sub    $0x20,%esp
 812fc56:	8b 45 08             	mov    0x8(%ebp),%eax
 812fc59:	05 98 00 00 00       	add    $0x98,%eax
 812fc5e:	89 04 24             	mov    %eax,(%esp)
 812fc61:	e8 ae 4b 00 00       	call   8134814 <_ZNK12advancealtar10CharacData7getUserEv>
 812fc66:	89 45 f4             	mov    %eax,-0xc(%ebp)
 812fc69:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 812fc6d:	75 0a                	jne    812fc79 <_ZN12advancealtar12StageControl9leaveUserEv+0x2b>
 812fc6f:	bb 00 00 00 00       	mov    $0x0,%ebx
 812fc74:	e9 51 01 00 00       	jmp    812fdca <_ZN12advancealtar12StageControl9leaveUserEv+0x17c>
 812fc79:	8b 45 f4             	mov    -0xc(%ebp),%eax
 812fc7c:	89 04 24             	mov    %eax,(%esp)
 812fc7f:	e8 ae 07 ff ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 812fc84:	85 c0                	test   %eax,%eax
 812fc86:	0f 94 c0             	sete   %al
 812fc89:	84 c0                	test   %al,%al
 812fc8b:	74 0a                	je     812fc97 <_ZN12advancealtar12StageControl9leaveUserEv+0x49>
 812fc8d:	bb 00 00 00 00       	mov    $0x0,%ebx
 812fc92:	e9 33 01 00 00       	jmp    812fdca <_ZN12advancealtar12StageControl9leaveUserEv+0x17c>
 812fc97:	8b 45 08             	mov    0x8(%ebp),%eax
 812fc9a:	89 04 24             	mov    %eax,(%esp)
 812fc9d:	e8 0c 4c 00 00       	call   81348ae <_ZN12advancealtar12StageControl12getProcStageEv>
 812fca2:	89 44 24 04          	mov    %eax,0x4(%esp)
 812fca6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 812fca9:	89 04 24             	mov    %eax,(%esp)
 812fcac:	e8 0b 3e 00 00       	call   8133abc <_ZN12advancealtar10HistoryLog12leaveDungeonER5CUserRKNS_9ProcStageE>
 812fcb1:	e8 f1 a6 fa ff       	call   80da3a7 <_Z11G_GameWorldv>
 812fcb6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 812fcb9:	89 54 24 04          	mov    %edx,0x4(%esp)
 812fcbd:	89 04 24             	mov    %eax,(%esp)
 812fcc0:	e8 51 6d 59 00       	call   86c6a16 <_ZN9GameWorld16out_from_dungeonEP5CUser>
 812fcc5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812fcc8:	89 04 24             	mov    %eax,(%esp)
 812fccb:	e8 7c e0 45 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 812fcd0:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 812fcd7:	00 
 812fcd8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 812fcdf:	00 
 812fce0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812fce3:	89 04 24             	mov    %eax,(%esp)
 812fce6:	e8 11 bc f9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 812fceb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 812fcf2:	00 
 812fcf3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812fcf6:	89 04 24             	mov    %eax,(%esp)
 812fcf9:	e8 22 bc f9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 812fcfe:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 812fd05:	00 
 812fd06:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812fd09:	89 04 24             	mov    %eax,(%esp)
 812fd0c:	e8 93 a1 fa ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 812fd11:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812fd14:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 812fd1b:	00 
 812fd1c:	89 44 24 04          	mov    %eax,0x4(%esp)
 812fd20:	8b 45 f4             	mov    -0xc(%ebp),%eax
 812fd23:	89 04 24             	mov    %eax,(%esp)
 812fd26:	e8 23 a7 52 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 812fd2b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 812fd32:	00 
 812fd33:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812fd36:	89 04 24             	mov    %eax,(%esp)
 812fd39:	e8 1a bc f9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 812fd3e:	e8 64 a6 fa ff       	call   80da3a7 <_Z11G_GameWorldv>
 812fd43:	8b 55 f4             	mov    -0xc(%ebp),%edx
 812fd46:	89 54 24 08          	mov    %edx,0x8(%esp)
 812fd4a:	8d 55 e8             	lea    -0x18(%ebp),%edx
 812fd4d:	89 54 24 04          	mov    %edx,0x4(%esp)
 812fd51:	89 04 24             	mov    %eax,(%esp)
 812fd54:	e8 03 4c 00 00       	call   813495c <_ZN9GameWorld8send_allER11PacketGuardP5CUser>
 812fd59:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 812fd60:	00 
 812fd61:	8b 45 f4             	mov    -0xc(%ebp),%eax
 812fd64:	89 04 24             	mov    %eax,(%esp)
 812fd67:	e8 00 de 52 00       	call   865db6c <_ZN5CUser14send_itemspaceEi>
 812fd6c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 812fd6f:	89 04 24             	mov    %eax,(%esp)
 812fd72:	e8 07 a5 fa ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 812fd77:	89 04 24             	mov    %eax,(%esp)
 812fd7a:	e8 0f b2 3c 00       	call   84faf8e <_ZNK10CInventory21SendItemLockListInvenEv>
 812fd7f:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 812fd86:	ff 
 812fd87:	8b 45 f4             	mov    -0xc(%ebp),%eax
 812fd8a:	89 04 24             	mov    %eax,(%esp)
 812fd8d:	e8 7c 4b 00 00       	call   813490e <_ZN5CUser20setAdvanceAltarIndexEs>
 812fd92:	8b 45 08             	mov    0x8(%ebp),%eax
 812fd95:	89 04 24             	mov    %eax,(%esp)
 812fd98:	e8 31 03 00 00       	call   81300ce <_ZN12advancealtar12StageControl7destroyEv>
 812fd9d:	bb 01 00 00 00       	mov    $0x1,%ebx
 812fda2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812fda5:	89 04 24             	mov    %eax,(%esp)
 812fda8:	e8 d3 e0 45 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 812fdad:	eb 1b                	jmp    812fdca <_ZN12advancealtar12StageControl9leaveUserEv+0x17c>
 812fdaf:	89 d3                	mov    %edx,%ebx
 812fdb1:	89 c6                	mov    %eax,%esi
 812fdb3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812fdb6:	89 04 24             	mov    %eax,(%esp)
 812fdb9:	e8 c2 e0 45 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 812fdbe:	89 f0                	mov    %esi,%eax
 812fdc0:	89 da                	mov    %ebx,%edx
 812fdc2:	89 04 24             	mov    %eax,(%esp)
 812fdc5:	e8 86 39 9b 00       	call   8ae3750 <_Unwind_Resume>
 812fdca:	89 d8                	mov    %ebx,%eax
 812fdcc:	83 c4 20             	add    $0x20,%esp
 812fdcf:	5b                   	pop    %ebx
 812fdd0:	5e                   	pop    %esi
 812fdd1:	5d                   	pop    %ebp
 812fdd2:	c3                   	ret
 812fdd3:	90                   	nop

```

```c
// advancealtar::StageControl::leaveUser @ 0x812fc4e

/* advancealtar::StageControl::leaveUser() */

undefined4 __thiscall advancealtar::StageControl::leaveUser(StageControl *this)

{
  int iVar1;
  ProcStage *pPVar2;
  GameWorld *pGVar3;
  CInventory *this_00;
  undefined4 uVar4;
  PacketGuard local_1c [12];
  CUserCharacInfo *local_10;
  
  local_10 = (CUserCharacInfo *)CharacData::getUser((CharacData *)(this + 0x98));
  if (local_10 == (CUserCharacInfo *)0x0) {
    uVar4 = 0;
  }
  else {
    iVar1 = CUserCharacInfo::getCurCharacR(local_10);
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      pPVar2 = (ProcStage *)getProcStage(this);
      HistoryLog::leaveDungeon((CUser *)local_10,pPVar2);
      pGVar3 = (GameWorld *)G_GameWorld();
      GameWorld::out_from_dungeon(pGVar3,(CUser *)local_10);
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0812fce6 to 0812fd9c has its CatchHandler @ 0812fdaf */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,1);
      CUser::make_basic_info((CUser *)local_10,(char *)local_1c,'\0');
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      pGVar3 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar3,local_1c,(CUser *)local_10);
      CUser::send_itemspace((CUser *)local_10,0);
      this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(local_10);
      CInventory::SendItemLockListInven(this_00);
      CUser::setAdvanceAltarIndex((CUser *)local_10,-1);
      destroy(this);
      uVar4 = 1;
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return uVar4;
}

```

---

## onClearReward

```asm
// === 081305f6 advancealtar::StageControl::onClearReward  [0x081305f6-0x8130643] ===
 81305f6:	55                   	push   %ebp
 81305f7:	89 e5                	mov    %esp,%ebp
 81305f9:	83 ec 18             	sub    $0x18,%esp
 81305fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81305ff:	85 c0                	test   %eax,%eax
 8130601:	78 37                	js     813063a <_ZN12advancealtar12StageControl13onClearRewardENS_12StageEndType1TE+0x44>
 8130603:	83 f8 02             	cmp    $0x2,%eax
 8130606:	7e 35                	jle    813063d <_ZN12advancealtar12StageControl13onClearRewardENS_12StageEndType1TE+0x47>
 8130608:	83 f8 03             	cmp    $0x3,%eax
 813060b:	75 33                	jne    8130640 <_ZN12advancealtar12StageControl13onClearRewardENS_12StageEndType1TE+0x4a>
 813060d:	90                   	nop
 813060e:	8b 45 08             	mov    0x8(%ebp),%eax
 8130611:	83 c0 04             	add    $0x4,%eax
 8130614:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 813061b:	00 
 813061c:	89 04 24             	mov    %eax,(%esp)
 813061f:	e8 20 42 00 00       	call   8134844 <_ZN12advancealtar9ProcStage8setStateENS0_5State1TE>
 8130624:	8b 45 08             	mov    0x8(%ebp),%eax
 8130627:	8b 00                	mov    (%eax),%eax
 8130629:	8b 55 0c             	mov    0xc(%ebp),%edx
 813062c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8130630:	89 04 24             	mov    %eax,(%esp)
 8130633:	e8 b4 f2 ff ff       	call   812f8ec <_ZN12advancealtar18Timer_StageControl15RegistTimerEPLPEiNS_12StageEndType1TE>
 8130638:	eb 07                	jmp    8130641 <_ZN12advancealtar12StageControl13onClearRewardENS_12StageEndType1TE+0x4b>
 813063a:	90                   	nop
 813063b:	eb 04                	jmp    8130641 <_ZN12advancealtar12StageControl13onClearRewardENS_12StageEndType1TE+0x4b>
 813063d:	90                   	nop
 813063e:	eb 01                	jmp    8130641 <_ZN12advancealtar12StageControl13onClearRewardENS_12StageEndType1TE+0x4b>
 8130640:	90                   	nop
 8130641:	c9                   	leave
 8130642:	c3                   	ret
 8130643:	90                   	nop

```

```c
// advancealtar::StageControl::onClearReward @ 0x81305f6

/* advancealtar::StageControl::onClearReward(advancealtar::StageEndType::T) */

void __thiscall advancealtar::StageControl::onClearReward(StageControl *this,int param_2)

{
  if (((-1 < param_2) && (2 < param_2)) && (param_2 == 3)) {
    ProcStage::setState((ProcStage *)(this + 4),6);
    Timer_StageControl::RegistTimerEPLP(*(undefined4 *)this,3);
  }
  return;
}

```

---

## onEplp

```asm
// === 08130644 advancealtar::StageControl::onEplp  [0x08130644-0x8130691] ===
 8130644:	55                   	push   %ebp
 8130645:	89 e5                	mov    %esp,%ebp
 8130647:	83 ec 28             	sub    $0x28,%esp
 813064a:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 813064e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8130651:	85 c0                	test   %eax,%eax
 8130653:	78 16                	js     813066b <_ZN12advancealtar12StageControl6onEplpENS_12StageEndType1TE+0x27>
 8130655:	83 f8 02             	cmp    $0x2,%eax
 8130658:	7e 07                	jle    8130661 <_ZN12advancealtar12StageControl6onEplpENS_12StageEndType1TE+0x1d>
 813065a:	83 f8 03             	cmp    $0x3,%eax
 813065d:	74 08                	je     8130667 <_ZN12advancealtar12StageControl6onEplpENS_12StageEndType1TE+0x23>
 813065f:	eb 0a                	jmp    813066b <_ZN12advancealtar12StageControl6onEplpENS_12StageEndType1TE+0x27>
 8130661:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 8130665:	eb 04                	jmp    813066b <_ZN12advancealtar12StageControl6onEplpENS_12StageEndType1TE+0x27>
 8130667:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 813066b:	8b 45 0c             	mov    0xc(%ebp),%eax
 813066e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8130672:	8b 45 08             	mov    0x8(%ebp),%eax
 8130675:	89 04 24             	mov    %eax,(%esp)
 8130678:	e8 41 00 00 00       	call   81306be <_ZN12advancealtar12StageControl8sendEplpENS_12StageEndType1TE>
 813067d:	8b 45 08             	mov    0x8(%ebp),%eax
 8130680:	89 04 24             	mov    %eax,(%esp)
 8130683:	e8 32 42 00 00       	call   81348ba <_ZNK12advancealtar12StageControl8getIndexEv>
 8130688:	89 04 24             	mov    %eax,(%esp)
 813068b:	e8 c6 f2 ff ff       	call   812f956 <_ZN12advancealtar18Timer_StageControl28RegistTimerEPLPReturnVillageEi>
 8130690:	c9                   	leave
 8130691:	c3                   	ret

```

```c
// advancealtar::StageControl::onEplp @ 0x8130644

/* advancealtar::StageControl::onEplp(advancealtar::StageEndType::T) */

void __thiscall advancealtar::StageControl::onEplp(StageControl *this,undefined4 param_2)

{
  int iVar1;
  
  sendEplp(this,param_2);
  iVar1 = getIndex(this);
  Timer_StageControl::RegistTimerEPLPReturnVillage(iVar1);
  return;
}

```

---

## onEplpReturnVillage

```asm
// === 08130692 advancealtar::StageControl::onEplpReturnVillage  [0x08130692-0x81306bd] ===
 8130692:	55                   	push   %ebp
 8130693:	89 e5                	mov    %esp,%ebp
 8130695:	83 ec 18             	sub    $0x18,%esp
 8130698:	8b 45 08             	mov    0x8(%ebp),%eax
 813069b:	83 c0 04             	add    $0x4,%eax
 813069e:	89 04 24             	mov    %eax,(%esp)
 81306a1:	e8 92 41 00 00       	call   8134838 <_ZNK12advancealtar9ProcStage8getStateEv>
 81306a6:	83 f8 06             	cmp    $0x6,%eax
 81306a9:	0f 94 c0             	sete   %al
 81306ac:	84 c0                	test   %al,%al
 81306ae:	74 0b                	je     81306bb <_ZN12advancealtar12StageControl19onEplpReturnVillageEv+0x29>
 81306b0:	8b 45 08             	mov    0x8(%ebp),%eax
 81306b3:	89 04 24             	mov    %eax,(%esp)
 81306b6:	e8 93 f5 ff ff       	call   812fc4e <_ZN12advancealtar12StageControl9leaveUserEv>
 81306bb:	c9                   	leave
 81306bc:	c3                   	ret
 81306bd:	90                   	nop

```

```c
// advancealtar::StageControl::onEplpReturnVillage @ 0x8130692

/* advancealtar::StageControl::onEplpReturnVillage() */

void __thiscall advancealtar::StageControl::onEplpReturnVillage(StageControl *this)

{
  int iVar1;
  
  iVar1 = ProcStage::getState((ProcStage *)(this + 4));
  if (iVar1 == 6) {
    leaveUser(this);
  }
  return;
}

```

---

## onTimer

```asm
// === 0812fbfa advancealtar::StageControl::onTimer  [0x0812fbfa-0x812fc4d] ===
 812fbfa:	55                   	push   %ebp
 812fbfb:	89 e5                	mov    %esp,%ebp
 812fbfd:	83 ec 18             	sub    $0x18,%esp
 812fc00:	8b 45 0c             	mov    0xc(%ebp),%eax
 812fc03:	3d a9 00 00 00       	cmp    $0xa9,%eax
 812fc08:	74 22                	je     812fc2c <_ZN12advancealtar12StageControl7onTimerE13TIMER_MESSAGENS_12StageEndType1TE+0x32>
 812fc0a:	3d aa 00 00 00       	cmp    $0xaa,%eax
 812fc0f:	74 2f                	je     812fc40 <_ZN12advancealtar12StageControl7onTimerE13TIMER_MESSAGENS_12StageEndType1TE+0x46>
 812fc11:	3d a8 00 00 00       	cmp    $0xa8,%eax
 812fc16:	75 33                	jne    812fc4b <_ZN12advancealtar12StageControl7onTimerE13TIMER_MESSAGENS_12StageEndType1TE+0x51>
 812fc18:	8b 45 10             	mov    0x10(%ebp),%eax
 812fc1b:	89 44 24 04          	mov    %eax,0x4(%esp)
 812fc1f:	8b 45 08             	mov    0x8(%ebp),%eax
 812fc22:	89 04 24             	mov    %eax,(%esp)
 812fc25:	e8 cc 09 00 00       	call   81305f6 <_ZN12advancealtar12StageControl13onClearRewardENS_12StageEndType1TE>
 812fc2a:	eb 1f                	jmp    812fc4b <_ZN12advancealtar12StageControl7onTimerE13TIMER_MESSAGENS_12StageEndType1TE+0x51>
 812fc2c:	8b 45 10             	mov    0x10(%ebp),%eax
 812fc2f:	89 44 24 04          	mov    %eax,0x4(%esp)
 812fc33:	8b 45 08             	mov    0x8(%ebp),%eax
 812fc36:	89 04 24             	mov    %eax,(%esp)
 812fc39:	e8 06 0a 00 00       	call   8130644 <_ZN12advancealtar12StageControl6onEplpENS_12StageEndType1TE>
 812fc3e:	eb 0b                	jmp    812fc4b <_ZN12advancealtar12StageControl7onTimerE13TIMER_MESSAGENS_12StageEndType1TE+0x51>
 812fc40:	8b 45 08             	mov    0x8(%ebp),%eax
 812fc43:	89 04 24             	mov    %eax,(%esp)
 812fc46:	e8 47 0a 00 00       	call   8130692 <_ZN12advancealtar12StageControl19onEplpReturnVillageEv>
 812fc4b:	c9                   	leave
 812fc4c:	c3                   	ret
 812fc4d:	90                   	nop

```

```c
// advancealtar::StageControl::onTimer @ 0x812fbfa

/* advancealtar::StageControl::onTimer(TIMER_MESSAGE, advancealtar::StageEndType::T) */

void __thiscall
advancealtar::StageControl::onTimer(StageControl *this,int param_2,undefined4 param_3)

{
  if (param_2 == 0xa9) {
    onEplp(this,param_3);
  }
  else if (param_2 == 0xaa) {
    onEplpReturnVillage(this);
  }
  else if (param_2 == 0xa8) {
    onClearReward(this,param_3);
  }
  return;
}

```

---

## onTimerStageTick

```asm
// === 0812fb98 advancealtar::StageControl::onTimerStageTick  [0x0812fb98-0x812fbf9] ===
 812fb98:	55                   	push   %ebp
 812fb99:	89 e5                	mov    %esp,%ebp
 812fb9b:	83 ec 18             	sub    $0x18,%esp
 812fb9e:	8b 45 08             	mov    0x8(%ebp),%eax
 812fba1:	83 c0 04             	add    $0x4,%eax
 812fba4:	89 04 24             	mov    %eax,(%esp)
 812fba7:	e8 8c 4c 00 00       	call   8134838 <_ZNK12advancealtar9ProcStage8getStateEv>
 812fbac:	83 f8 03             	cmp    $0x3,%eax
 812fbaf:	74 13                	je     812fbc4 <_ZN12advancealtar12StageControl16onTimerStageTickEv+0x2c>
 812fbb1:	8b 45 08             	mov    0x8(%ebp),%eax
 812fbb4:	83 c0 04             	add    $0x4,%eax
 812fbb7:	89 04 24             	mov    %eax,(%esp)
 812fbba:	e8 79 4c 00 00       	call   8134838 <_ZNK12advancealtar9ProcStage8getStateEv>
 812fbbf:	83 f8 04             	cmp    $0x4,%eax
 812fbc2:	75 07                	jne    812fbcb <_ZN12advancealtar12StageControl16onTimerStageTickEv+0x33>
 812fbc4:	b8 01 00 00 00       	mov    $0x1,%eax
 812fbc9:	eb 05                	jmp    812fbd0 <_ZN12advancealtar12StageControl16onTimerStageTickEv+0x38>
 812fbcb:	b8 00 00 00 00       	mov    $0x0,%eax
 812fbd0:	84 c0                	test   %al,%al
 812fbd2:	74 1e                	je     812fbf2 <_ZN12advancealtar12StageControl16onTimerStageTickEv+0x5a>
 812fbd4:	8b 45 08             	mov    0x8(%ebp),%eax
 812fbd7:	05 98 00 00 00       	add    $0x98,%eax
 812fbdc:	89 04 24             	mov    %eax,(%esp)
 812fbdf:	e8 d2 d4 ff ff       	call   812d0b6 <_ZN12advancealtar10CharacData6upGageEv>
 812fbe4:	8b 45 08             	mov    0x8(%ebp),%eax
 812fbe7:	83 c0 04             	add    $0x4,%eax
 812fbea:	89 04 24             	mov    %eax,(%esp)
 812fbed:	e8 e4 e4 ff ff       	call   812e0d6 <_ZN12advancealtar9ProcStage12procTimeLineEv>
 812fbf2:	b8 01 00 00 00       	mov    $0x1,%eax
 812fbf7:	c9                   	leave
 812fbf8:	c3                   	ret
 812fbf9:	90                   	nop

```

```c
// advancealtar::StageControl::onTimerStageTick @ 0x812fb98

/* advancealtar::StageControl::onTimerStageTick() */

undefined4 __thiscall advancealtar::StageControl::onTimerStageTick(StageControl *this)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = ProcStage::getState((ProcStage *)(this + 4));
  if (iVar2 != 3) {
    iVar2 = ProcStage::getState((ProcStage *)(this + 4));
    if (iVar2 != 4) {
      bVar1 = false;
      goto LAB_0812fbd0;
    }
  }
  bVar1 = true;
LAB_0812fbd0:
  if (bVar1) {
    CharacData::upGage((CharacData *)(this + 0x98));
    ProcStage::procTimeLine((ProcStage *)(this + 4));
  }
  return 1;
}

```

---

## reset

```asm
// === 0812fa54 advancealtar::StageControl::reset  [0x0812fa54-0x812fa79] ===
 812fa54:	55                   	push   %ebp
 812fa55:	89 e5                	mov    %esp,%ebp
 812fa57:	83 ec 18             	sub    $0x18,%esp
 812fa5a:	8b 45 08             	mov    0x8(%ebp),%eax
 812fa5d:	83 c0 04             	add    $0x4,%eax
 812fa60:	89 04 24             	mov    %eax,(%esp)
 812fa63:	e8 32 e3 ff ff       	call   812dd9a <_ZN12advancealtar9ProcStage8resetAllEv>
 812fa68:	8b 45 08             	mov    0x8(%ebp),%eax
 812fa6b:	05 98 00 00 00       	add    $0x98,%eax
 812fa70:	89 04 24             	mov    %eax,(%esp)
 812fa73:	e8 00 d6 ff ff       	call   812d078 <_ZN12advancealtar10CharacData5resetEv>
 812fa78:	c9                   	leave
 812fa79:	c3                   	ret

```

```c
// advancealtar::StageControl::reset @ 0x812fa54

/* advancealtar::StageControl::reset() */

void __thiscall advancealtar::StageControl::reset(StageControl *this)

{
  ProcStage::resetAll((ProcStage *)(this + 4));
  CharacData::reset((CharacData *)(this + 0x98));
  return;
}

```

---

## selectStage

```asm
// === 0812fa7a advancealtar::StageControl::selectStage  [0x0812fa7a-0x812fb97] ===
 812fa7a:	55                   	push   %ebp
 812fa7b:	89 e5                	mov    %esp,%ebp
 812fa7d:	83 ec 28             	sub    $0x28,%esp
 812fa80:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 812fa84:	75 0a                	jne    812fa90 <_ZN12advancealtar12StageControl11selectStageEP5CUseriNS_15StageDifficulty1TE+0x16>
 812fa86:	b8 03 00 00 00       	mov    $0x3,%eax
 812fa8b:	e9 06 01 00 00       	jmp    812fb96 <_ZN12advancealtar12StageControl11selectStageEP5CUseriNS_15StageDifficulty1TE+0x11c>
 812fa90:	8b 45 0c             	mov    0xc(%ebp),%eax
 812fa93:	05 60 df 08 00       	add    $0x8df60,%eax
 812fa98:	89 04 24             	mov    %eax,(%esp)
 812fa9b:	e8 4c 18 00 00       	call   81312ec <_ZNK12advancealtar25CharacAdvanceAltarManager17isAvailableTciketEv>
 812faa0:	83 f0 01             	xor    $0x1,%eax
 812faa3:	84 c0                	test   %al,%al
 812faa5:	74 0a                	je     812fab1 <_ZN12advancealtar12StageControl11selectStageEP5CUseriNS_15StageDifficulty1TE+0x37>
 812faa7:	b8 f5 00 00 00       	mov    $0xf5,%eax
 812faac:	e9 e5 00 00 00       	jmp    812fb96 <_ZN12advancealtar12StageControl11selectStageEP5CUseriNS_15StageDifficulty1TE+0x11c>
 812fab1:	8b 45 0c             	mov    0xc(%ebp),%eax
 812fab4:	8d 90 60 df 08 00    	lea    0x8df60(%eax),%edx
 812faba:	8b 45 10             	mov    0x10(%ebp),%eax
 812fabd:	89 44 24 04          	mov    %eax,0x4(%esp)
 812fac1:	89 14 24             	mov    %edx,(%esp)
 812fac4:	e8 51 18 00 00       	call   813131a <_ZNK12advancealtar25CharacAdvanceAltarManager12isEnterStageEi>
 812fac9:	83 f0 01             	xor    $0x1,%eax
 812facc:	84 c0                	test   %al,%al
 812face:	74 0a                	je     812fada <_ZN12advancealtar12StageControl11selectStageEP5CUseriNS_15StageDifficulty1TE+0x60>
 812fad0:	b8 08 00 00 00       	mov    $0x8,%eax
 812fad5:	e9 bc 00 00 00       	jmp    812fb96 <_ZN12advancealtar12StageControl11selectStageEP5CUseriNS_15StageDifficulty1TE+0x11c>
 812fada:	8b 45 0c             	mov    0xc(%ebp),%eax
 812fadd:	05 60 df 08 00       	add    $0x8df60,%eax
 812fae2:	89 04 24             	mov    %eax,(%esp)
 812fae5:	e8 e6 17 00 00       	call   81312d0 <_ZNK12advancealtar25CharacAdvanceAltarManager19getCurrentRidableIdEv>
 812faea:	8b 55 08             	mov    0x8(%ebp),%edx
 812faed:	89 82 98 00 00 00    	mov    %eax,0x98(%edx)
 812faf3:	8b 45 08             	mov    0x8(%ebp),%eax
 812faf6:	8d 90 98 00 00 00    	lea    0x98(%eax),%edx
 812fafc:	8b 45 0c             	mov    0xc(%ebp),%eax
 812faff:	89 44 24 04          	mov    %eax,0x4(%esp)
 812fb03:	89 14 24             	mov    %edx,(%esp)
 812fb06:	e8 fb 4c 00 00       	call   8134806 <_ZN12advancealtar10CharacData7setUserEP5CUser>
 812fb0b:	8b 45 08             	mov    0x8(%ebp),%eax
 812fb0e:	05 98 00 00 00       	add    $0x98,%eax
 812fb13:	89 04 24             	mov    %eax,(%esp)
 812fb16:	e8 2b d7 ff ff       	call   812d246 <_ZN12advancealtar10CharacData11setSlotItemEv>
 812fb1b:	8b 45 08             	mov    0x8(%ebp),%eax
 812fb1e:	83 c0 04             	add    $0x4,%eax
 812fb21:	89 04 24             	mov    %eax,(%esp)
 812fb24:	e8 71 e2 ff ff       	call   812dd9a <_ZN12advancealtar9ProcStage8resetAllEv>
 812fb29:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 812fb30:	8b 45 08             	mov    0x8(%ebp),%eax
 812fb33:	8d 50 04             	lea    0x4(%eax),%edx
 812fb36:	8b 45 14             	mov    0x14(%ebp),%eax
 812fb39:	89 44 24 08          	mov    %eax,0x8(%esp)
 812fb3d:	8b 45 10             	mov    0x10(%ebp),%eax
 812fb40:	89 44 24 04          	mov    %eax,0x4(%esp)
 812fb44:	89 14 24             	mov    %edx,(%esp)
 812fb47:	e8 24 e3 ff ff       	call   812de70 <_ZN12advancealtar9ProcStage10startStageEiNS_15StageDifficulty1TE>
 812fb4c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 812fb4f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 812fb53:	74 05                	je     812fb5a <_ZN12advancealtar12StageControl11selectStageEP5CUseriNS_15StageDifficulty1TE+0xe0>
 812fb55:	8b 45 f4             	mov    -0xc(%ebp),%eax
 812fb58:	eb 3c                	jmp    812fb96 <_ZN12advancealtar12StageControl11selectStageEP5CUseriNS_15StageDifficulty1TE+0x11c>
 812fb5a:	8b 45 08             	mov    0x8(%ebp),%eax
 812fb5d:	89 04 24             	mov    %eax,(%esp)
 812fb60:	e8 91 05 00 00       	call   81300f6 <_ZN12advancealtar12StageControl13sendStageInfoEv>
 812fb65:	8b 45 08             	mov    0x8(%ebp),%eax
 812fb68:	89 04 24             	mov    %eax,(%esp)
 812fb6b:	e8 70 06 00 00       	call   81301e0 <_ZN12advancealtar12StageControl11sendMapInfoEv>
 812fb70:	8b 45 08             	mov    0x8(%ebp),%eax
 812fb73:	83 c0 04             	add    $0x4,%eax
 812fb76:	89 04 24             	mov    %eax,(%esp)
 812fb79:	e8 ce fb ff ff       	call   812f74c <_ZN12advancealtar9ProcStage28setNotSurvivalModeFirstRoundEv>
 812fb7e:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 812fb85:	00 
 812fb86:	8b 45 0c             	mov    0xc(%ebp),%eax
 812fb89:	89 04 24             	mov    %eax,(%esp)
 812fb8c:	e8 21 f2 54 00       	call   867edb2 <_ZN5CUser9set_stateE8ch_state>
 812fb91:	b8 00 00 00 00       	mov    $0x0,%eax
 812fb96:	c9                   	leave
 812fb97:	c3                   	ret

```

```c
// advancealtar::StageControl::selectStage @ 0x812fa7a

/* advancealtar::StageControl::selectStage(CUser*, int, advancealtar::StageDifficulty::T) */

int __thiscall
advancealtar::StageControl::selectStage
          (StageControl *this,CUser *param_1,undefined4 param_2,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == (CUser *)0x0) {
    iVar2 = 3;
  }
  else {
    cVar1 = CharacAdvanceAltarManager::isAvailableTciket
                      ((CharacAdvanceAltarManager *)(param_1 + 0x8df60));
    if (cVar1 == '\x01') {
      cVar1 = CharacAdvanceAltarManager::isEnterStage((int)(param_1 + 0x8df60));
      if (cVar1 == '\x01') {
        uVar3 = CharacAdvanceAltarManager::getCurrentRidableId
                          ((CharacAdvanceAltarManager *)(param_1 + 0x8df60));
        *(undefined4 *)(this + 0x98) = uVar3;
        CharacData::setUser((CharacData *)(this + 0x98),param_1);
        CharacData::setSlotItem((CharacData *)(this + 0x98));
        ProcStage::resetAll((ProcStage *)(this + 4));
        iVar2 = ProcStage::startStage((ProcStage *)(this + 4),param_2,param_4);
        if (iVar2 == 0) {
          sendStageInfo(this);
          sendMapInfo(this);
          ProcStage::setNotSurvivalModeFirstRound((ProcStage *)(this + 4));
          CUser::set_state(param_1,0xd);
          iVar2 = 0;
        }
      }
      else {
        iVar2 = 8;
      }
    }
    else {
      iVar2 = 0xf5;
    }
  }
  return iVar2;
}

```

---

## sendEplp

```asm
// === 081306be advancealtar::StageControl::sendEplp  [0x081306be-0x81307a5] ===
 81306be:	55                   	push   %ebp
 81306bf:	89 e5                	mov    %esp,%ebp
 81306c1:	56                   	push   %esi
 81306c2:	53                   	push   %ebx
 81306c3:	83 ec 30             	sub    $0x30,%esp
 81306c6:	8b 45 08             	mov    0x8(%ebp),%eax
 81306c9:	05 98 00 00 00       	add    $0x98,%eax
 81306ce:	89 04 24             	mov    %eax,(%esp)
 81306d1:	e8 3e 41 00 00       	call   8134814 <_ZNK12advancealtar10CharacData7getUserEv>
 81306d6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81306d9:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81306dd:	0f 84 ba 00 00 00    	je     813079d <_ZN12advancealtar12StageControl8sendEplpENS_12StageEndType1TE+0xdf>
 81306e3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81306e6:	05 60 df 08 00       	add    $0x8df60,%eax
 81306eb:	89 04 24             	mov    %eax,(%esp)
 81306ee:	e8 f9 0b 00 00       	call   81312ec <_ZNK12advancealtar25CharacAdvanceAltarManager17isAvailableTciketEv>
 81306f3:	88 45 f7             	mov    %al,-0x9(%ebp)
 81306f6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81306f9:	89 04 24             	mov    %eax,(%esp)
 81306fc:	e8 51 40 00 00       	call   8134752 <_ZN16NOTIPacketStruct26_NotiAdvanceAltarEplpStateC1Ev>
 8130701:	8b 45 0c             	mov    0xc(%ebp),%eax
 8130704:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8130707:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 813070b:	88 45 ec             	mov    %al,-0x14(%ebp)
 813070e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8130711:	89 04 24             	mov    %eax,(%esp)
 8130714:	e8 33 d6 45 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8130719:	c7 44 24 08 0e 02 00 	movl   $0x20e,0x8(%esp)
 8130720:	00 
 8130721:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8130728:	00 
 8130729:	8d 45 dc             	lea    -0x24(%ebp),%eax
 813072c:	89 04 24             	mov    %eax,(%esp)
 813072f:	e8 c8 b1 f9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8130734:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8130737:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 813073e:	00 
 813073f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8130743:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8130746:	89 04 24             	mov    %eax,(%esp)
 8130749:	e8 ba d7 fe ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 813074e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8130755:	00 
 8130756:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8130759:	89 04 24             	mov    %eax,(%esp)
 813075c:	e8 f7 b1 f9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8130761:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8130764:	89 44 24 04          	mov    %eax,0x4(%esp)
 8130768:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813076b:	89 04 24             	mov    %eax,(%esp)
 813076e:	e8 47 7e 51 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8130773:	eb 1b                	jmp    8130790 <_ZN12advancealtar12StageControl8sendEplpENS_12StageEndType1TE+0xd2>
 8130775:	89 d3                	mov    %edx,%ebx
 8130777:	89 c6                	mov    %eax,%esi
 8130779:	8d 45 dc             	lea    -0x24(%ebp),%eax
 813077c:	89 04 24             	mov    %eax,(%esp)
 813077f:	e8 fc d6 45 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8130784:	89 f0                	mov    %esi,%eax
 8130786:	89 da                	mov    %ebx,%edx
 8130788:	89 04 24             	mov    %eax,(%esp)
 813078b:	e8 c0 2f 9b 00       	call   8ae3750 <_Unwind_Resume>
 8130790:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8130793:	89 04 24             	mov    %eax,(%esp)
 8130796:	e8 e5 d6 45 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 813079b:	eb 01                	jmp    813079e <_ZN12advancealtar12StageControl8sendEplpENS_12StageEndType1TE+0xe0>
 813079d:	90                   	nop
 813079e:	83 c4 30             	add    $0x30,%esp
 81307a1:	5b                   	pop    %ebx
 81307a2:	5e                   	pop    %esi
 81307a3:	5d                   	pop    %ebp
 81307a4:	c3                   	ret
 81307a5:	90                   	nop

```

```c
// advancealtar::StageControl::sendEplp @ 0x81306be

/* advancealtar::StageControl::sendEplp(advancealtar::StageEndType::T) */

void __thiscall advancealtar::StageControl::sendEplp(StageControl *this,undefined4 param_2)

{
  PacketGuard local_28 [12];
  undefined4 local_1c;
  undefined1 local_18;
  CUser *local_14;
  undefined1 local_d;
  
  local_14 = (CUser *)CharacData::getUser((CharacData *)(this + 0x98));
  if (local_14 != (CUser *)0x0) {
    local_d = CharacAdvanceAltarManager::isAvailableTciket
                        ((CharacAdvanceAltarManager *)(local_14 + 0x8df60));
    NOTIPacketStruct::_NotiAdvanceAltarEplpState::_NotiAdvanceAltarEplpState
              ((_NotiAdvanceAltarEplpState *)&local_1c);
    local_1c = param_2;
    local_18 = local_d;
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 0813072f to 08130772 has its CatchHandler @ 08130775 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x20e);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_28,(char *)&local_1c,8);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    CUser::Send(local_14,local_28);
    PacketGuard::~PacketGuard(local_28);
  }
  return;
}

```

---

## sendMapInfo

```asm
// === 081301e0 advancealtar::StageControl::sendMapInfo  [0x081301e0-0x81305f5] ===
 81301e0:	55                   	push   %ebp
 81301e1:	89 e5                	mov    %esp,%ebp
 81301e3:	56                   	push   %esi
 81301e4:	53                   	push   %ebx
 81301e5:	81 ec 90 00 00 00    	sub    $0x90,%esp
 81301eb:	8b 45 08             	mov    0x8(%ebp),%eax
 81301ee:	05 98 00 00 00       	add    $0x98,%eax
 81301f3:	89 04 24             	mov    %eax,(%esp)
 81301f6:	e8 19 46 00 00       	call   8134814 <_ZNK12advancealtar10CharacData7getUserEv>
 81301fb:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81301fe:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 8130202:	0f 84 dd 03 00 00    	je     81305e5 <_ZN12advancealtar12StageControl11sendMapInfoEv+0x405>
 8130208:	8b 45 08             	mov    0x8(%ebp),%eax
 813020b:	83 c0 04             	add    $0x4,%eax
 813020e:	89 04 24             	mov    %eax,(%esp)
 8130211:	e8 4a 46 00 00       	call   8134860 <_ZNK12advancealtar9ProcStage6getMapEv>
 8130216:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8130219:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 813021d:	0f 84 c5 03 00 00    	je     81305e8 <_ZN12advancealtar12StageControl11sendMapInfoEv+0x408>
 8130223:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8130226:	89 04 24             	mov    %eax,(%esp)
 8130229:	e8 ce 44 00 00       	call   81346fc <_ZN16NOTIPacketStruct24_NotiAdvanceAltarMapInfoC1Ev>
 813022e:	8b 45 08             	mov    0x8(%ebp),%eax
 8130231:	83 c0 04             	add    $0x4,%eax
 8130234:	89 04 24             	mov    %eax,(%esp)
 8130237:	e8 16 46 00 00       	call   8134852 <_ZNK12advancealtar9ProcStage11getTimeLineEv>
 813023c:	89 45 dc             	mov    %eax,-0x24(%ebp)
 813023f:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8130243:	0f 84 a2 03 00 00    	je     81305eb <_ZN12advancealtar12StageControl11sendMapInfoEv+0x40b>
 8130249:	8b 45 08             	mov    0x8(%ebp),%eax
 813024c:	83 c0 04             	add    $0x4,%eax
 813024f:	89 04 24             	mov    %eax,(%esp)
 8130252:	e8 ad e8 ff ff       	call   812eb04 <_ZNK12advancealtar9ProcStage12getStageTypeEv>
 8130257:	89 45 a8             	mov    %eax,-0x58(%ebp)
 813025a:	8b 45 08             	mov    0x8(%ebp),%eax
 813025d:	83 c0 04             	add    $0x4,%eax
 8130260:	89 04 24             	mov    %eax,(%esp)
 8130263:	e8 10 46 00 00       	call   8134878 <_ZNK12advancealtar9ProcStage25getCurrentSurvivalRoundNoEv>
 8130268:	89 45 ac             	mov    %eax,-0x54(%ebp)
 813026b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 813026e:	89 04 24             	mov    %eax,(%esp)
 8130271:	e8 00 45 00 00       	call   8134776 <_ZNK4CMap9get_indexEv>
 8130276:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8130279:	8b 45 dc             	mov    -0x24(%ebp),%eax
 813027c:	8b 40 0c             	mov    0xc(%eax),%eax
 813027f:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8130282:	8b 45 08             	mov    0x8(%ebp),%eax
 8130285:	83 c0 04             	add    $0x4,%eax
 8130288:	89 04 24             	mov    %eax,(%esp)
 813028b:	e8 04 46 00 00       	call   8134894 <_ZNK12advancealtar9ProcStage16getMapBasisLevelEv>
 8130290:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8130293:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8130296:	89 04 24             	mov    %eax,(%esp)
 8130299:	e8 ae da 45 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 813029e:	c7 44 24 08 0a 02 00 	movl   $0x20a,0x8(%esp)
 81302a5:	00 
 81302a6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81302ad:	00 
 81302ae:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81302b1:	89 04 24             	mov    %eax,(%esp)
 81302b4:	e8 43 b6 f9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81302b9:	8d 45 a8             	lea    -0x58(%ebp),%eax
 81302bc:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 81302c3:	00 
 81302c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81302c8:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81302cb:	89 04 24             	mov    %eax,(%esp)
 81302ce:	e8 35 dc fe ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 81302d3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81302d6:	83 c0 10             	add    $0x10,%eax
 81302d9:	89 04 24             	mov    %eax,(%esp)
 81302dc:	e8 c3 59 00 00       	call   8135ca4 <_ZNKSt6vectorIN12advancealtar13_PhaseSummaryESaIS1_EE4sizeEv>
 81302e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81302e5:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81302e8:	89 04 24             	mov    %eax,(%esp)
 81302eb:	e8 4c b6 f9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81302f0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81302f3:	8d 50 10             	lea    0x10(%eax),%edx
 81302f6:	8d 45 98             	lea    -0x68(%ebp),%eax
 81302f9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81302fd:	89 04 24             	mov    %eax,(%esp)
 8130300:	e8 c1 59 00 00       	call   8135cc6 <_ZNKSt6vectorIN12advancealtar13_PhaseSummaryESaIS1_EE5beginEv>
 8130305:	83 ec 04             	sub    $0x4,%esp
 8130308:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 813030f:	eb 49                	jmp    813035a <_ZN12advancealtar12StageControl11sendMapInfoEv+0x17a>
 8130311:	8d 45 98             	lea    -0x68(%ebp),%eax
 8130314:	89 04 24             	mov    %eax,(%esp)
 8130317:	e8 62 5a 00 00       	call   8135d7e <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar13_PhaseSummaryESt6vectorIS2_SaIS2_EEEdeEv>
 813031c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 813031f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8130322:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8130329:	00 
 813032a:	89 44 24 04          	mov    %eax,0x4(%esp)
 813032e:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8130331:	89 04 24             	mov    %eax,(%esp)
 8130334:	e8 cf db fe ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 8130339:	8d 45 c0             	lea    -0x40(%ebp),%eax
 813033c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8130343:	00 
 8130344:	8d 55 98             	lea    -0x68(%ebp),%edx
 8130347:	89 54 24 04          	mov    %edx,0x4(%esp)
 813034b:	89 04 24             	mov    %eax,(%esp)
 813034e:	e8 f7 59 00 00       	call   8135d4a <_ZN9__gnu_cxx17__normal_iteratorIPKN12advancealtar13_PhaseSummaryESt6vectorIS2_SaIS2_EEEppEi>
 8130353:	83 ec 04             	sub    $0x4,%esp
 8130356:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 813035a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 813035d:	8d 50 10             	lea    0x10(%eax),%edx
 8130360:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8130363:	89 54 24 04          	mov    %edx,0x4(%esp)
 8130367:	89 04 24             	mov    %eax,(%esp)
 813036a:	e8 83 59 00 00       	call   8135cf2 <_ZNKSt6vectorIN12advancealtar13_PhaseSummaryESaIS1_EE3endEv>
 813036f:	83 ec 04             	sub    $0x4,%esp
 8130372:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8130375:	89 44 24 04          	mov    %eax,0x4(%esp)
 8130379:	8d 45 98             	lea    -0x68(%ebp),%eax
 813037c:	89 04 24             	mov    %eax,(%esp)
 813037f:	e8 9a 59 00 00       	call   8135d1e <_ZN9__gnu_cxxneIPKN12advancealtar13_PhaseSummaryESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8130384:	84 c0                	test   %al,%al
 8130386:	75 89                	jne    8130311 <_ZN12advancealtar12StageControl11sendMapInfoEv+0x131>
 8130388:	8b 45 08             	mov    0x8(%ebp),%eax
 813038b:	83 c0 04             	add    $0x4,%eax
 813038e:	89 04 24             	mov    %eax,(%esp)
 8130391:	e8 6e e7 ff ff       	call   812eb04 <_ZNK12advancealtar9ProcStage12getStageTypeEv>
 8130396:	83 f8 01             	cmp    $0x1,%eax
 8130399:	75 12                	jne    81303ad <_ZN12advancealtar12StageControl11sendMapInfoEv+0x1cd>
 813039b:	8b 45 08             	mov    0x8(%ebp),%eax
 813039e:	83 c0 04             	add    $0x4,%eax
 81303a1:	89 04 24             	mov    %eax,(%esp)
 81303a4:	e8 63 f3 ff ff       	call   812f70c <_ZNK12advancealtar9ProcStage24isSurvivalModeFirstRoundEv>
 81303a9:	84 c0                	test   %al,%al
 81303ab:	74 07                	je     81303b4 <_ZN12advancealtar12StageControl11sendMapInfoEv+0x1d4>
 81303ad:	b8 01 00 00 00       	mov    $0x1,%eax
 81303b2:	eb 05                	jmp    81303b9 <_ZN12advancealtar12StageControl11sendMapInfoEv+0x1d9>
 81303b4:	b8 00 00 00 00       	mov    $0x0,%eax
 81303b9:	84 c0                	test   %al,%al
 81303bb:	0f 84 af 01 00 00    	je     8130570 <_ZN12advancealtar12StageControl11sendMapInfoEv+0x390>
 81303c1:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81303c4:	8b 55 d8             	mov    -0x28(%ebp),%edx
 81303c7:	89 54 24 04          	mov    %edx,0x4(%esp)
 81303cb:	89 04 24             	mov    %eax,(%esp)
 81303ce:	e8 c3 43 00 00       	call   8134796 <_ZNK4CMap16get_monster_listEv>
 81303d3:	83 ec 04             	sub    $0x4,%esp
 81303d6:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81303d9:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81303dc:	8b 45 08             	mov    0x8(%ebp),%eax
 81303df:	89 04 24             	mov    %eax,(%esp)
 81303e2:	e8 bf 03 00 00       	call   81307a6 <_ZNK12advancealtar12StageControl14getCenterCountEv>
 81303e7:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81303ea:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81303ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 81303f1:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81303f4:	89 04 24             	mov    %eax,(%esp)
 81303f7:	e8 40 b5 f9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81303fc:	8d 45 94             	lea    -0x6c(%ebp),%eax
 81303ff:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8130402:	89 54 24 04          	mov    %edx,0x4(%esp)
 8130406:	89 04 24             	mov    %eax,(%esp)
 8130409:	e8 7a 59 00 00       	call   8135d88 <_ZNKSt4listI11_mapMonsterSaIS0_EE5beginEv>
 813040e:	83 ec 04             	sub    $0x4,%esp
 8130411:	e9 07 01 00 00       	jmp    813051d <_ZN12advancealtar12StageControl11sendMapInfoEv+0x33d>
 8130416:	8d 45 87             	lea    -0x79(%ebp),%eax
 8130419:	89 04 24             	mov    %eax,(%esp)
 813041c:	e8 0d 40 00 00       	call   813442e <_ZN12advancealtar18_MapMonsterSummaryC1Ev>
 8130421:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8130424:	89 04 24             	mov    %eax,(%esp)
 8130427:	e8 f2 59 00 00       	call   8135e1e <_ZNKSt20_List_const_iteratorI11_mapMonsterEptEv>
 813042c:	8b 40 2c             	mov    0x2c(%eax),%eax
 813042f:	89 45 87             	mov    %eax,-0x79(%ebp)
 8130432:	66 c7 45 8b 00 00    	movw   $0x0,-0x75(%ebp)
 8130438:	c7 45 80 00 00 00 00 	movl   $0x0,-0x80(%ebp)
 813043f:	c7 85 7c ff ff ff 00 	movl   $0x0,-0x84(%ebp)
 8130446:	00 00 00 
 8130449:	8d 45 94             	lea    -0x6c(%ebp),%eax
 813044c:	89 04 24             	mov    %eax,(%esp)
 813044f:	e8 ca 59 00 00       	call   8135e1e <_ZNKSt20_List_const_iteratorI11_mapMonsterEptEv>
 8130454:	8b 00                	mov    (%eax),%eax
 8130456:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8130459:	8d 8a 60 df 08 00    	lea    0x8df60(%edx),%ecx
 813045f:	8d 95 7c ff ff ff    	lea    -0x84(%ebp),%edx
 8130465:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8130469:	8d 55 80             	lea    -0x80(%ebp),%edx
 813046c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8130470:	89 44 24 04          	mov    %eax,0x4(%esp)
 8130474:	89 0c 24             	mov    %ecx,(%esp)
 8130477:	e8 6e 24 00 00       	call   81328ea <_ZNK12advancealtar25CharacAdvanceAltarManager12getTowerInfoEiRiS1_>
 813047c:	88 45 f3             	mov    %al,-0xd(%ebp)
 813047f:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8130483:	83 f0 01             	xor    $0x1,%eax
 8130486:	84 c0                	test   %al,%al
 8130488:	75 75                	jne    81304ff <_ZN12advancealtar12StageControl11sendMapInfoEv+0x31f>
 813048a:	8b 45 80             	mov    -0x80(%ebp),%eax
 813048d:	66 89 45 8d          	mov    %ax,-0x73(%ebp)
 8130491:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 8130497:	88 45 8f             	mov    %al,-0x71(%ebp)
 813049a:	8d 45 94             	lea    -0x6c(%ebp),%eax
 813049d:	89 04 24             	mov    %eax,(%esp)
 81304a0:	e8 79 59 00 00       	call   8135e1e <_ZNKSt20_List_const_iteratorI11_mapMonsterEptEv>
 81304a5:	8b 40 18             	mov    0x18(%eax),%eax
 81304a8:	88 45 90             	mov    %al,-0x70(%ebp)
 81304ab:	8d 45 94             	lea    -0x6c(%ebp),%eax
 81304ae:	89 04 24             	mov    %eax,(%esp)
 81304b1:	e8 68 59 00 00       	call   8135e1e <_ZNKSt20_List_const_iteratorI11_mapMonsterEptEv>
 81304b6:	8b 40 20             	mov    0x20(%eax),%eax
 81304b9:	88 45 91             	mov    %al,-0x6f(%ebp)
 81304bc:	8d 45 94             	lea    -0x6c(%ebp),%eax
 81304bf:	89 04 24             	mov    %eax,(%esp)
 81304c2:	e8 57 59 00 00       	call   8135e1e <_ZNKSt20_List_const_iteratorI11_mapMonsterEptEv>
 81304c7:	0f b6 40 1c          	movzbl 0x1c(%eax),%eax
 81304cb:	88 45 92             	mov    %al,-0x6e(%ebp)
 81304ce:	8b 45 08             	mov    0x8(%ebp),%eax
 81304d1:	8d 50 04             	lea    0x4(%eax),%edx
 81304d4:	8d 45 87             	lea    -0x79(%ebp),%eax
 81304d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81304db:	89 14 24             	mov    %edx,(%esp)
 81304de:	e8 8b dc ff ff       	call   812e16e <_ZN12advancealtar9ProcStage20addCreatedMapMonsterERNS_18_MapMonsterSummaryE>
 81304e3:	8d 45 87             	lea    -0x79(%ebp),%eax
 81304e6:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 81304ed:	00 
 81304ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 81304f2:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81304f5:	89 04 24             	mov    %eax,(%esp)
 81304f8:	e8 0b da fe ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 81304fd:	eb 01                	jmp    8130500 <_ZN12advancealtar12StageControl11sendMapInfoEv+0x320>
 81304ff:	90                   	nop
 8130500:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8130503:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 813050a:	00 
 813050b:	8d 55 94             	lea    -0x6c(%ebp),%edx
 813050e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8130512:	89 04 24             	mov    %eax,(%esp)
 8130515:	e8 cc 58 00 00       	call   8135de6 <_ZNSt20_List_const_iteratorI11_mapMonsterEppEi>
 813051a:	83 ec 04             	sub    $0x4,%esp
 813051d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8130520:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8130523:	89 54 24 04          	mov    %edx,0x4(%esp)
 8130527:	89 04 24             	mov    %eax,(%esp)
 813052a:	e8 7f 58 00 00       	call   8135dae <_ZNKSt4listI11_mapMonsterSaIS0_EE3endEv>
 813052f:	83 ec 04             	sub    $0x4,%esp
 8130532:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8130535:	89 44 24 04          	mov    %eax,0x4(%esp)
 8130539:	8d 45 94             	lea    -0x6c(%ebp),%eax
 813053c:	89 04 24             	mov    %eax,(%esp)
 813053f:	e8 8e 58 00 00       	call   8135dd2 <_ZNKSt20_List_const_iteratorI11_mapMonsterEneERKS1_>
 8130544:	84 c0                	test   %al,%al
 8130546:	0f 85 ca fe ff ff    	jne    8130416 <_ZN12advancealtar12StageControl11sendMapInfoEv+0x236>
 813054c:	eb 15                	jmp    8130563 <_ZN12advancealtar12StageControl11sendMapInfoEv+0x383>
 813054e:	89 d3                	mov    %edx,%ebx
 8130550:	89 c6                	mov    %eax,%esi
 8130552:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8130555:	89 04 24             	mov    %eax,(%esp)
 8130558:	e8 25 42 00 00       	call   8134782 <_ZNSt4listI11_mapMonsterSaIS0_EED1Ev>
 813055d:	89 f0                	mov    %esi,%eax
 813055f:	89 da                	mov    %ebx,%edx
 8130561:	eb 5a                	jmp    81305bd <_ZN12advancealtar12StageControl11sendMapInfoEv+0x3dd>
 8130563:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8130566:	89 04 24             	mov    %eax,(%esp)
 8130569:	e8 14 42 00 00       	call   8134782 <_ZNSt4listI11_mapMonsterSaIS0_EED1Ev>
 813056e:	eb 19                	jmp    8130589 <_ZN12advancealtar12StageControl11sendMapInfoEv+0x3a9>
 8130570:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8130577:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813057a:	89 44 24 04          	mov    %eax,0x4(%esp)
 813057e:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8130581:	89 04 24             	mov    %eax,(%esp)
 8130584:	e8 b3 b3 f9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8130589:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8130590:	00 
 8130591:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8130594:	89 04 24             	mov    %eax,(%esp)
 8130597:	e8 bc b3 f9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 813059c:	8b 45 08             	mov    0x8(%ebp),%eax
 813059f:	05 98 00 00 00       	add    $0x98,%eax
 81305a4:	89 04 24             	mov    %eax,(%esp)
 81305a7:	e8 68 42 00 00       	call   8134814 <_ZNK12advancealtar10CharacData7getUserEv>
 81305ac:	8d 55 9c             	lea    -0x64(%ebp),%edx
 81305af:	89 54 24 04          	mov    %edx,0x4(%esp)
 81305b3:	89 04 24             	mov    %eax,(%esp)
 81305b6:	e8 ff 7f 51 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81305bb:	eb 1b                	jmp    81305d8 <_ZN12advancealtar12StageControl11sendMapInfoEv+0x3f8>
 81305bd:	89 d3                	mov    %edx,%ebx
 81305bf:	89 c6                	mov    %eax,%esi
 81305c1:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81305c4:	89 04 24             	mov    %eax,(%esp)
 81305c7:	e8 b4 d8 45 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81305cc:	89 f0                	mov    %esi,%eax
 81305ce:	89 da                	mov    %ebx,%edx
 81305d0:	89 04 24             	mov    %eax,(%esp)
 81305d3:	e8 78 31 9b 00       	call   8ae3750 <_Unwind_Resume>
 81305d8:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81305db:	89 04 24             	mov    %eax,(%esp)
 81305de:	e8 9d d8 45 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81305e3:	eb 07                	jmp    81305ec <_ZN12advancealtar12StageControl11sendMapInfoEv+0x40c>
 81305e5:	90                   	nop
 81305e6:	eb 04                	jmp    81305ec <_ZN12advancealtar12StageControl11sendMapInfoEv+0x40c>
 81305e8:	90                   	nop
 81305e9:	eb 01                	jmp    81305ec <_ZN12advancealtar12StageControl11sendMapInfoEv+0x40c>
 81305eb:	90                   	nop
 81305ec:	8d 65 f8             	lea    -0x8(%ebp),%esp
 81305ef:	83 c4 00             	add    $0x0,%esp
 81305f2:	5b                   	pop    %ebx
 81305f3:	5e                   	pop    %esi
 81305f4:	5d                   	pop    %ebp
 81305f5:	c3                   	ret

```

```c
// advancealtar::StageControl::sendMapInfo @ 0x81301e0

/* advancealtar::StageControl::sendMapInfo() */

void __thiscall advancealtar::StageControl::sendMapInfo(StageControl *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  CUser *this_00;
  int local_88 [2];
  undefined4 local_7d;
  undefined2 local_79;
  undefined2 local_77;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  _List_const_iterator<_mapMonster> local_70 [4];
  __normal_iterator<advancealtar::_PhaseSummary_const*,std::vector<advancealtar::_PhaseSummary,std::allocator<advancealtar::_PhaseSummary>>>
  local_6c [4];
  PacketGuard local_68 [12];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  __normal_iterator local_48 [4];
  __normal_iterator<advancealtar::_PhaseSummary_const*,std::vector<advancealtar::_PhaseSummary,std::allocator<advancealtar::_PhaseSummary>>>
  local_44 [4];
  list<_mapMonster,std::allocator<_mapMonster>> local_40 [8];
  _List_const_iterator local_38 [4];
  _List_const_iterator<_mapMonster> local_34 [4];
  int local_30;
  CMap *local_2c;
  int local_28;
  int local_24;
  char *local_20;
  list<_mapMonster,std::allocator<_mapMonster>> *local_1c;
  int local_18;
  char local_11;
  undefined4 local_10;
  
  local_30 = CharacData::getUser((CharacData *)(this + 0x98));
  if ((local_30 != 0) &&
     (local_2c = (CMap *)ProcStage::getMap((ProcStage *)(this + 4)), local_2c != (CMap *)0x0)) {
    NOTIPacketStruct::_NotiAdvanceAltarMapInfo::_NotiAdvanceAltarMapInfo
              ((_NotiAdvanceAltarMapInfo *)&local_5c);
    local_28 = ProcStage::getTimeLine((ProcStage *)(this + 4));
    if (local_28 != 0) {
      local_5c = ProcStage::getStageType((ProcStage *)(this + 4));
      local_58 = ProcStage::getCurrentSurvivalRoundNo((ProcStage *)(this + 4));
      local_54 = CMap::get_index(local_2c);
      local_50 = *(undefined4 *)(local_28 + 0xc);
      local_4c = ProcStage::getMapBasisLevel((ProcStage *)(this + 4));
      PacketGuard::PacketGuard(local_68);
                    /* try { // try from 081302b4 to 081303d2 has its CatchHandler @ 081305bd */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_68,0,0x20a);
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_68,(char *)&local_5c,0x14);
      iVar3 = std::vector<advancealtar::_PhaseSummary,std::allocator<advancealtar::_PhaseSummary>>::
              size((vector<advancealtar::_PhaseSummary,std::allocator<advancealtar::_PhaseSummary>>
                    *)(local_28 + 0x10));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_68,iVar3);
      std::vector<advancealtar::_PhaseSummary,std::allocator<advancealtar::_PhaseSummary>>::begin();
      local_24 = 0;
      while( true ) {
        std::vector<advancealtar::_PhaseSummary,std::allocator<advancealtar::_PhaseSummary>>::end();
        bVar1 = __gnu_cxx::operator!=(local_6c,local_48);
        if (!bVar1) break;
        local_20 = (char *)__gnu_cxx::
                           __normal_iterator<advancealtar::_PhaseSummary_const*,std::vector<advancealtar::_PhaseSummary,std::allocator<advancealtar::_PhaseSummary>>>
                           ::operator*(local_6c);
        InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_68,local_20,0xc);
        __gnu_cxx::
        __normal_iterator<advancealtar::_PhaseSummary_const*,std::vector<advancealtar::_PhaseSummary,std::allocator<advancealtar::_PhaseSummary>>>
        ::operator++(local_44,(int)local_6c);
        local_24 = local_24 + 1;
      }
      iVar3 = ProcStage::getStageType((ProcStage *)(this + 4));
      if ((iVar3 == 1) &&
         (cVar2 = ProcStage::isSurvivalModeFirstRound((ProcStage *)(this + 4)), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        CMap::get_monster_list();
        local_1c = local_40;
                    /* try { // try from 081303e2 to 0813052e has its CatchHandler @ 0813054e */
        local_18 = getCenterCount(this);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_68,local_18);
        std::list<_mapMonster,std::allocator<_mapMonster>>::begin();
        while( true ) {
          std::list<_mapMonster,std::allocator<_mapMonster>>::end();
          cVar2 = std::_List_const_iterator<_mapMonster>::operator!=(local_70,local_38);
          if (cVar2 == '\0') break;
          _MapMonsterSummary::_MapMonsterSummary((_MapMonsterSummary *)&local_7d);
          iVar3 = std::_List_const_iterator<_mapMonster>::operator->(local_70);
          local_7d = *(undefined4 *)(iVar3 + 0x2c);
          local_79 = 0;
          local_88[1] = 0;
          local_88[0] = 0;
          piVar4 = (int *)std::_List_const_iterator<_mapMonster>::operator->(local_70);
          local_11 = CharacAdvanceAltarManager::getTowerInfo
                               ((CharacAdvanceAltarManager *)(local_30 + 0x8df60),*piVar4,
                                local_88 + 1,local_88);
          if (local_11 == '\x01') {
            local_77 = (undefined2)local_88[1];
            local_75 = (undefined1)local_88[0];
            iVar3 = std::_List_const_iterator<_mapMonster>::operator->(local_70);
            local_74 = (undefined1)*(undefined4 *)(iVar3 + 0x18);
            iVar3 = std::_List_const_iterator<_mapMonster>::operator->(local_70);
            local_73 = (undefined1)*(undefined4 *)(iVar3 + 0x20);
            iVar3 = std::_List_const_iterator<_mapMonster>::operator->(local_70);
            local_72 = *(undefined1 *)(iVar3 + 0x1c);
            ProcStage::addCreatedMapMonster((ProcStage *)(this + 4),(_MapMonsterSummary *)&local_7d)
            ;
            InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_68,(char *)&local_7d,0xd);
          }
          std::_List_const_iterator<_mapMonster>::operator++(local_34,(int)local_70);
        }
                    /* try { // try from 08130569 to 081305ba has its CatchHandler @ 081305bd */
        std::list<_mapMonster,std::allocator<_mapMonster>>::~list(local_40);
      }
      else {
        local_10 = 0;
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_68,0);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_68,true);
      this_00 = (CUser *)CharacData::getUser((CharacData *)(this + 0x98));
      CUser::Send(this_00,local_68);
      PacketGuard::~PacketGuard(local_68);
    }
  }
  return;
}

```

---

## sendStageInfo

```asm
// === 081300f6 advancealtar::StageControl::sendStageInfo  [0x081300f6-0x81301df] ===
 81300f6:	55                   	push   %ebp
 81300f7:	89 e5                	mov    %esp,%ebp
 81300f9:	56                   	push   %esi
 81300fa:	53                   	push   %ebx
 81300fb:	83 ec 30             	sub    $0x30,%esp
 81300fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8130101:	05 98 00 00 00       	add    $0x98,%eax
 8130106:	89 04 24             	mov    %eax,(%esp)
 8130109:	e8 06 47 00 00       	call   8134814 <_ZNK12advancealtar10CharacData7getUserEv>
 813010e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8130111:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8130115:	0f 84 bc 00 00 00    	je     81301d7 <_ZN12advancealtar12StageControl13sendStageInfoEv+0xe1>
 813011b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 813011e:	89 04 24             	mov    %eax,(%esp)
 8130121:	e8 b2 45 00 00       	call   81346d8 <_ZN16NOTIPacketStruct26_NotiAdvanceAltarStageInfoC1Ev>
 8130126:	8b 45 08             	mov    0x8(%ebp),%eax
 8130129:	83 c0 04             	add    $0x4,%eax
 813012c:	89 04 24             	mov    %eax,(%esp)
 813012f:	e8 f2 e9 ff ff       	call   812eb26 <_ZNK12advancealtar9ProcStage13getStageIndexEv>
 8130134:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8130137:	8b 45 08             	mov    0x8(%ebp),%eax
 813013a:	83 c0 04             	add    $0x4,%eax
 813013d:	89 04 24             	mov    %eax,(%esp)
 8130140:	e8 27 47 00 00       	call   813486c <_ZNK12advancealtar9ProcStage18getStageDifficultyEv>
 8130145:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8130148:	8d 45 e0             	lea    -0x20(%ebp),%eax
 813014b:	89 04 24             	mov    %eax,(%esp)
 813014e:	e8 f9 db 45 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8130153:	c7 44 24 08 09 02 00 	movl   $0x209,0x8(%esp)
 813015a:	00 
 813015b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8130162:	00 
 8130163:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8130166:	89 04 24             	mov    %eax,(%esp)
 8130169:	e8 8e b7 f9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 813016e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8130171:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 8130178:	00 
 8130179:	89 44 24 04          	mov    %eax,0x4(%esp)
 813017d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8130180:	89 04 24             	mov    %eax,(%esp)
 8130183:	e8 80 dd fe ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 8130188:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 813018f:	00 
 8130190:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8130193:	89 04 24             	mov    %eax,(%esp)
 8130196:	e8 bd b7 f9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 813019b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 813019e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81301a2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81301a5:	89 04 24             	mov    %eax,(%esp)
 81301a8:	e8 0d 84 51 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81301ad:	eb 1b                	jmp    81301ca <_ZN12advancealtar12StageControl13sendStageInfoEv+0xd4>
 81301af:	89 d3                	mov    %edx,%ebx
 81301b1:	89 c6                	mov    %eax,%esi
 81301b3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81301b6:	89 04 24             	mov    %eax,(%esp)
 81301b9:	e8 c2 dc 45 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81301be:	89 f0                	mov    %esi,%eax
 81301c0:	89 da                	mov    %ebx,%edx
 81301c2:	89 04 24             	mov    %eax,(%esp)
 81301c5:	e8 86 35 9b 00       	call   8ae3750 <_Unwind_Resume>
 81301ca:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81301cd:	89 04 24             	mov    %eax,(%esp)
 81301d0:	e8 ab dc 45 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81301d5:	eb 01                	jmp    81301d8 <_ZN12advancealtar12StageControl13sendStageInfoEv+0xe2>
 81301d7:	90                   	nop
 81301d8:	83 c4 30             	add    $0x30,%esp
 81301db:	5b                   	pop    %ebx
 81301dc:	5e                   	pop    %esi
 81301dd:	5d                   	pop    %ebp
 81301de:	c3                   	ret
 81301df:	90                   	nop

```

```c
// advancealtar::StageControl::sendStageInfo @ 0x81300f6

/* advancealtar::StageControl::sendStageInfo() */

void __thiscall advancealtar::StageControl::sendStageInfo(StageControl *this)

{
  PacketGuard local_24 [12];
  undefined4 local_18;
  undefined4 local_14;
  CUser *local_10;
  
  local_10 = (CUser *)CharacData::getUser((CharacData *)(this + 0x98));
  if (local_10 != (CUser *)0x0) {
    NOTIPacketStruct::_NotiAdvanceAltarStageInfo::_NotiAdvanceAltarStageInfo
              ((_NotiAdvanceAltarStageInfo *)&local_18);
    local_18 = ProcStage::getStageIndex((ProcStage *)(this + 4));
    local_14 = ProcStage::getStageDifficulty((ProcStage *)(this + 4));
    PacketGuard::PacketGuard(local_24);
                    /* try { // try from 08130169 to 081301ac has its CatchHandler @ 081301af */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x209);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_24,(char *)&local_18,8);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
    CUser::Send(local_10,local_24);
    PacketGuard::~PacketGuard(local_24);
  }
  return;
}

```

---

## ~StageControl

```asm
// === 0812fa06 advancealtar::StageControl::~StageControl  [0x0812fa06-0x812fa53] ===
 812fa06:	55                   	push   %ebp
 812fa07:	89 e5                	mov    %esp,%ebp
 812fa09:	56                   	push   %esi
 812fa0a:	53                   	push   %ebx
 812fa0b:	83 ec 10             	sub    $0x10,%esp
 812fa0e:	8b 45 08             	mov    0x8(%ebp),%eax
 812fa11:	05 98 00 00 00       	add    $0x98,%eax
 812fa16:	89 04 24             	mov    %eax,(%esp)
 812fa19:	e8 44 d6 ff ff       	call   812d062 <_ZN12advancealtar10CharacDataD1Ev>
 812fa1e:	eb 1e                	jmp    812fa3e <_ZN12advancealtar12StageControlD1Ev+0x38>
 812fa20:	89 d3                	mov    %edx,%ebx
 812fa22:	89 c6                	mov    %eax,%esi
 812fa24:	8b 45 08             	mov    0x8(%ebp),%eax
 812fa27:	83 c0 04             	add    $0x4,%eax
 812fa2a:	89 04 24             	mov    %eax,(%esp)
 812fa2d:	e8 f4 e2 ff ff       	call   812dd26 <_ZN12advancealtar9ProcStageD1Ev>
 812fa32:	89 f0                	mov    %esi,%eax
 812fa34:	89 da                	mov    %ebx,%edx
 812fa36:	89 04 24             	mov    %eax,(%esp)
 812fa39:	e8 12 3d 9b 00       	call   8ae3750 <_Unwind_Resume>
 812fa3e:	8b 45 08             	mov    0x8(%ebp),%eax
 812fa41:	83 c0 04             	add    $0x4,%eax
 812fa44:	89 04 24             	mov    %eax,(%esp)
 812fa47:	e8 da e2 ff ff       	call   812dd26 <_ZN12advancealtar9ProcStageD1Ev>
 812fa4c:	83 c4 10             	add    $0x10,%esp
 812fa4f:	5b                   	pop    %ebx
 812fa50:	5e                   	pop    %esi
 812fa51:	5d                   	pop    %ebp
 812fa52:	c3                   	ret
 812fa53:	90                   	nop

```

```c
// advancealtar::StageControl::~StageControl @ 0x812fa06

/* advancealtar::StageControl::~StageControl() */

void __thiscall advancealtar::StageControl::~StageControl(StageControl *this)

{
                    /* try { // try from 0812fa19 to 0812fa1d has its CatchHandler @ 0812fa20 */
  CharacData::~CharacData((CharacData *)(this + 0x98));
  ProcStage::~ProcStage((ProcStage *)(this + 4));
  return;
}

```

