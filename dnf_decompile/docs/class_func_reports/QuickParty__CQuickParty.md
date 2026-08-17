# QuickParty__CQuickParty

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 18

---

## CQuickParty

```asm
// === 0826952c QuickParty::CQuickParty::CQuickParty  [0x0826952c-0x826953f] ===
 826952c:	55                   	push   %ebp
 826952d:	89 e5                	mov    %esp,%ebp
 826952f:	83 ec 18             	sub    $0x18,%esp
 8269532:	8b 45 08             	mov    0x8(%ebp),%eax
 8269535:	89 04 24             	mov    %eax,(%esp)
 8269538:	e8 09 00 00 00       	call   8269546 <_ZN10QuickParty11CQuickParty4initEv>
 826953d:	c9                   	leave
 826953e:	c3                   	ret
 826953f:	90                   	nop

```

```c
// QuickParty::CQuickParty::CQuickParty @ 0x826952c

/* QuickParty::CQuickParty::CQuickParty() */

void __thiscall QuickParty::CQuickParty::CQuickParty(CQuickParty *this)

{
  init(this);
  return;
}

```

---

## check_timer_key

```asm
// === 082696b0 QuickParty::CQuickParty::check_timer_key  [0x082696b0-0x82696cf] ===
 82696b0:	55                   	push   %ebp
 82696b1:	89 e5                	mov    %esp,%ebp
 82696b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 82696b6:	8d 90 63 ff ff ff    	lea    -0x9d(%eax),%edx
 82696bc:	8b 45 08             	mov    0x8(%ebp),%eax
 82696bf:	83 c2 04             	add    $0x4,%edx
 82696c2:	8b 54 90 0c          	mov    0xc(%eax,%edx,4),%edx
 82696c6:	8b 45 10             	mov    0x10(%ebp),%eax
 82696c9:	39 c2                	cmp    %eax,%edx
 82696cb:	0f 94 c0             	sete   %al
 82696ce:	5d                   	pop    %ebp
 82696cf:	c3                   	ret

```

```c
// QuickParty::CQuickParty::check_timer_key @ 0x82696b0

/* QuickParty::CQuickParty::check_timer_key(TIMER_MESSAGE, int) */

bool __thiscall QuickParty::CQuickParty::check_timer_key(CQuickParty *this,int param_2,int param_3)

{
  return *(int *)(this + (param_2 + -0x99) * 4 + 0xc) == param_3;
}

```

---

## delete_party_index

```asm
// === 0826980e QuickParty::CQuickParty::delete_party_index  [0x0826980e-0x8269855] ===
 826980e:	55                   	push   %ebp
 826980f:	89 e5                	mov    %esp,%ebp
 8269811:	83 ec 10             	sub    $0x10,%esp
 8269814:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 826981b:	eb 26                	jmp    8269843 <_ZN10QuickParty11CQuickParty18delete_party_indexEi+0x35>
 826981d:	8b 55 fc             	mov    -0x4(%ebp),%edx
 8269820:	8b 45 08             	mov    0x8(%ebp),%eax
 8269823:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8269826:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8269829:	75 14                	jne    826983f <_ZN10QuickParty11CQuickParty18delete_party_indexEi+0x31>
 826982b:	8b 55 fc             	mov    -0x4(%ebp),%edx
 826982e:	8b 45 08             	mov    0x8(%ebp),%eax
 8269831:	c7 04 90 ff ff ff ff 	movl   $0xffffffff,(%eax,%edx,4)
 8269838:	b8 01 00 00 00       	mov    $0x1,%eax
 826983d:	eb 14                	jmp    8269853 <_ZN10QuickParty11CQuickParty18delete_party_indexEi+0x45>
 826983f:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 8269843:	83 7d fc 03          	cmpl   $0x3,-0x4(%ebp)
 8269847:	0f 9e c0             	setle  %al
 826984a:	84 c0                	test   %al,%al
 826984c:	75 cf                	jne    826981d <_ZN10QuickParty11CQuickParty18delete_party_indexEi+0xf>
 826984e:	b8 00 00 00 00       	mov    $0x0,%eax
 8269853:	c9                   	leave
 8269854:	c3                   	ret
 8269855:	90                   	nop

```

```c
// QuickParty::CQuickParty::delete_party_index @ 0x826980e

/* QuickParty::CQuickParty::delete_party_index(int) */

undefined4 __thiscall QuickParty::CQuickParty::delete_party_index(CQuickParty *this,int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (3 < local_8) {
      return 0;
    }
    if (*(int *)(this + local_8 * 4) == param_1) break;
    local_8 = local_8 + 1;
  }
  *(undefined4 *)(this + local_8 * 4) = 0xffffffff;
  return 1;
}

```

---

## delete_party_index_08269856

```asm
// === 08269856 QuickParty::CQuickParty::delete_party_index  [0x08269856-0x8269883] ===
 8269856:	55                   	push   %ebp
 8269857:	89 e5                	mov    %esp,%ebp
 8269859:	83 ec 10             	sub    $0x10,%esp
 826985c:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 8269863:	eb 11                	jmp    8269876 <_ZN10QuickParty11CQuickParty18delete_party_indexEv+0x20>
 8269865:	8b 55 fc             	mov    -0x4(%ebp),%edx
 8269868:	8b 45 08             	mov    0x8(%ebp),%eax
 826986b:	c7 04 90 ff ff ff ff 	movl   $0xffffffff,(%eax,%edx,4)
 8269872:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 8269876:	83 7d fc 03          	cmpl   $0x3,-0x4(%ebp)
 826987a:	0f 9e c0             	setle  %al
 826987d:	84 c0                	test   %al,%al
 826987f:	75 e4                	jne    8269865 <_ZN10QuickParty11CQuickParty18delete_party_indexEv+0xf>
 8269881:	c9                   	leave
 8269882:	c3                   	ret
 8269883:	90                   	nop

```

```c
// QuickParty::CQuickParty::delete_party_index @ 0x8269856

/* QuickParty::CQuickParty::delete_party_index() */

void __thiscall QuickParty::CQuickParty::delete_party_index(CQuickParty *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    *(undefined4 *)(this + local_8 * 4) = 0xffffffff;
  }
  return;
}

```

---

## destroy

```asm
// === 082695ca QuickParty::CQuickParty::destroy  [0x082695ca-0x8269667] ===
 82695ca:	55                   	push   %ebp
 82695cb:	89 e5                	mov    %esp,%ebp
 82695cd:	56                   	push   %esi
 82695ce:	53                   	push   %ebx
 82695cf:	83 ec 20             	sub    $0x20,%esp
 82695d2:	e8 b7 2b e6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 82695d7:	8b 55 08             	mov    0x8(%ebp),%edx
 82695da:	89 54 24 04          	mov    %edx,0x4(%esp)
 82695de:	89 04 24             	mov    %eax,(%esp)
 82695e1:	e8 22 c0 02 00       	call   8295608 <_ZN12CGameManager13PutQuickPartyEPN10QuickParty11CQuickPartyE>
 82695e6:	e8 a3 2b e6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 82695eb:	05 d4 02 00 00       	add    $0x2d4,%eax
 82695f0:	89 04 24             	mov    %eax,(%esp)
 82695f3:	e8 68 24 00 00       	call   826ba60 <_ZNK9__gnu_cxx8hash_mapIiPN10QuickParty11CQuickPartyENS_4hashIiEESt8equal_toIiESaIS3_EE4sizeEv>
 82695f8:	89 c3                	mov    %eax,%ebx
 82695fa:	e8 8f 2b e6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 82695ff:	05 cc 01 00 00       	add    $0x1cc,%eax
 8269604:	89 04 24             	mov    %eax,(%esp)
 8269607:	e8 34 24 00 00       	call   826ba40 <_ZN10StaticPoolIN10QuickParty11CQuickPartyELi300EE4SizeEv>
 826960c:	89 c6                	mov    %eax,%esi
 826960e:	e8 7b 2b e6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8269613:	05 cc 01 00 00       	add    $0x1cc,%eax
 8269618:	89 04 24             	mov    %eax,(%esp)
 826961b:	e8 2a 24 00 00       	call   826ba4a <_ZN10StaticPoolIN10QuickParty11CQuickPartyELi300EE6RemainEv>
 8269620:	29 c6                	sub    %eax,%esi
 8269622:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8269629:	00 
 826962a:	c7 44 24 08 32 00 00 	movl   $0x32,0x8(%esp)
 8269631:	00 
 8269632:	c7 44 24 04 80 67 bf 	movl   $0x8bf6780,0x4(%esp)
 8269639:	08 
 826963a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826963d:	89 04 24             	mov    %eax,(%esp)
 8269640:	e8 d3 60 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8269645:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8269649:	89 74 24 08          	mov    %esi,0x8(%esp)
 826964d:	c7 44 24 04 80 53 bf 	movl   $0x8bf5380,0x4(%esp)
 8269654:	08 
 8269655:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8269658:	89 04 24             	mov    %eax,(%esp)
 826965b:	e8 28 61 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8269660:	83 c4 20             	add    $0x20,%esp
 8269663:	5b                   	pop    %ebx
 8269664:	5e                   	pop    %esi
 8269665:	5d                   	pop    %ebp
 8269666:	c3                   	ret
 8269667:	90                   	nop

```

```c
// QuickParty::CQuickParty::destroy @ 0x82695ca

/* QuickParty::CQuickParty::destroy() */

void __thiscall QuickParty::CQuickParty::destroy(CQuickParty *this)

{
  CGameManager *this_00;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  cMyTrace local_1c [16];
  
  this_00 = (CGameManager *)G_CGameManager();
  CGameManager::PutQuickParty(this_00,this);
  iVar1 = G_CGameManager();
  uVar2 = __gnu_cxx::
          hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
          ::size((hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
                  *)(iVar1 + 0x2d4));
  G_CGameManager();
  iVar1 = StaticPool<QuickParty::CQuickParty,300>::Size();
  iVar3 = G_CGameManager();
  iVar3 = StaticPool<QuickParty::CQuickParty,300>::Remain
                    ((StaticPool<QuickParty::CQuickParty,300> *)(iVar3 + 0x1cc));
  cMyTrace::cMyTrace(local_1c,"void QuickParty::CQuickParty::destroy()",0x32,0);
  cMyTrace::operator()(local_1c,&DAT_08bf5380,iVar1 - iVar3,uVar2);
  return;
}

```

---

## gen_timer_key

```asm
// === 08269680 QuickParty::CQuickParty::gen_timer_key  [0x08269680-0x82696af] ===
 8269680:	55                   	push   %ebp
 8269681:	89 e5                	mov    %esp,%ebp
 8269683:	53                   	push   %ebx
 8269684:	8b 45 0c             	mov    0xc(%ebp),%eax
 8269687:	2d 9d 00 00 00       	sub    $0x9d,%eax
 826968c:	8b 55 08             	mov    0x8(%ebp),%edx
 826968f:	8d 48 04             	lea    0x4(%eax),%ecx
 8269692:	8b 54 8a 0c          	mov    0xc(%edx,%ecx,4),%edx
 8269696:	8d 5a 01             	lea    0x1(%edx),%ebx
 8269699:	8b 55 08             	mov    0x8(%ebp),%edx
 826969c:	8d 48 04             	lea    0x4(%eax),%ecx
 826969f:	89 5c 8a 0c          	mov    %ebx,0xc(%edx,%ecx,4)
 82696a3:	8b 55 08             	mov    0x8(%ebp),%edx
 82696a6:	83 c0 04             	add    $0x4,%eax
 82696a9:	8b 44 82 0c          	mov    0xc(%edx,%eax,4),%eax
 82696ad:	5b                   	pop    %ebx
 82696ae:	5d                   	pop    %ebp
 82696af:	c3                   	ret

```

```c
// QuickParty::CQuickParty::gen_timer_key @ 0x8269680

/* QuickParty::CQuickParty::gen_timer_key(TIMER_MESSAGE) */

undefined4 __thiscall QuickParty::CQuickParty::gen_timer_key(CQuickParty *this,int param_2)

{
  *(int *)(this + (param_2 + -0x99) * 4 + 0xc) = *(int *)(this + (param_2 + -0x99) * 4 + 0xc) + 1;
  return *(undefined4 *)(this + (param_2 + -0x99) * 4 + 0xc);
}

```

---

## get_matching_quick_party_master_unique_id

```asm
// === 08269936 QuickParty::CQuickParty::get_matching_quick_party_master_unique_id  [0x08269936-0x8269a8d] ===
 8269936:	55                   	push   %ebp
 8269937:	89 e5                	mov    %esp,%ebp
 8269939:	83 ec 48             	sub    $0x48,%esp
 826993c:	c7 45 d0 ff ff ff ff 	movl   $0xffffffff,-0x30(%ebp)
 8269943:	66 c7 45 d6 ff ff    	movw   $0xffff,-0x2a(%ebp)
 8269949:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8269950:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8269957:	eb 6a                	jmp    82699c3 <_ZN10QuickParty11CQuickParty41get_matching_quick_party_master_unique_idEv+0x8d>
 8269959:	8b 45 dc             	mov    -0x24(%ebp),%eax
 826995c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8269960:	8b 45 08             	mov    0x8(%ebp),%eax
 8269963:	89 04 24             	mov    %eax,(%esp)
 8269966:	e8 81 fe ff ff       	call   82697ec <_ZN10QuickParty11CQuickParty15get_party_indexEi>
 826996b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 826996e:	e8 1b 28 e6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8269973:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8269976:	89 54 24 04          	mov    %edx,0x4(%esp)
 826997a:	89 04 24             	mov    %eax,(%esp)
 826997d:	e8 b0 b5 02 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 8269982:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8269985:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 8269989:	74 33                	je     82699be <_ZN10QuickParty11CQuickParty41get_matching_quick_party_master_unique_idEv+0x88>
 826998b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 826998e:	89 04 24             	mov    %eax,(%esp)
 8269991:	e8 86 be ed ff       	call   814581c <_ZN6CParty12GetEPLPStateEv>
 8269996:	3c 01                	cmp    $0x1,%al
 8269998:	0f 9f c0             	setg   %al
 826999b:	84 c0                	test   %al,%al
 826999d:	74 08                	je     82699a7 <_ZN10QuickParty11CQuickParty41get_matching_quick_party_master_unique_idEv+0x71>
 826999f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82699a2:	89 45 d0             	mov    %eax,-0x30(%ebp)
 82699a5:	eb 27                	jmp    82699ce <_ZN10QuickParty11CQuickParty41get_matching_quick_party_master_unique_idEv+0x98>
 82699a7:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82699aa:	89 04 24             	mov    %eax,(%esp)
 82699ad:	e8 a0 3f fc ff       	call   822d952 <_ZN6CParty14is_quick_partyEv>
 82699b2:	84 c0                	test   %al,%al
 82699b4:	74 09                	je     82699bf <_ZN10QuickParty11CQuickParty41get_matching_quick_party_master_unique_idEv+0x89>
 82699b6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82699b9:	89 45 d0             	mov    %eax,-0x30(%ebp)
 82699bc:	eb 01                	jmp    82699bf <_ZN10QuickParty11CQuickParty41get_matching_quick_party_master_unique_idEv+0x89>
 82699be:	90                   	nop
 82699bf:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 82699c3:	83 7d dc 03          	cmpl   $0x3,-0x24(%ebp)
 82699c7:	0f 9e c0             	setle  %al
 82699ca:	84 c0                	test   %al,%al
 82699cc:	75 8b                	jne    8269959 <_ZN10QuickParty11CQuickParty41get_matching_quick_party_master_unique_idEv+0x23>
 82699ce:	83 7d d0 ff          	cmpl   $0xffffffff,-0x30(%ebp)
 82699d2:	75 52                	jne    8269a26 <_ZN10QuickParty11CQuickParty41get_matching_quick_party_master_unique_idEv+0xf0>
 82699d4:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 82699db:	eb 3e                	jmp    8269a1b <_ZN10QuickParty11CQuickParty41get_matching_quick_party_master_unique_idEv+0xe5>
 82699dd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82699e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82699e4:	8b 45 08             	mov    0x8(%ebp),%eax
 82699e7:	89 04 24             	mov    %eax,(%esp)
 82699ea:	e8 fd fd ff ff       	call   82697ec <_ZN10QuickParty11CQuickParty15get_party_indexEi>
 82699ef:	89 45 e8             	mov    %eax,-0x18(%ebp)
 82699f2:	e8 97 27 e6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 82699f7:	8b 55 e8             	mov    -0x18(%ebp),%edx
 82699fa:	89 54 24 04          	mov    %edx,0x4(%esp)
 82699fe:	89 04 24             	mov    %eax,(%esp)
 8269a01:	e8 2c b5 02 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 8269a06:	85 c0                	test   %eax,%eax
 8269a08:	0f 95 c0             	setne  %al
 8269a0b:	84 c0                	test   %al,%al
 8269a0d:	74 08                	je     8269a17 <_ZN10QuickParty11CQuickParty41get_matching_quick_party_master_unique_idEv+0xe1>
 8269a0f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8269a12:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8269a15:	eb 0f                	jmp    8269a26 <_ZN10QuickParty11CQuickParty41get_matching_quick_party_master_unique_idEv+0xf0>
 8269a17:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8269a1b:	83 7d e4 03          	cmpl   $0x3,-0x1c(%ebp)
 8269a1f:	0f 9e c0             	setle  %al
 8269a22:	84 c0                	test   %al,%al
 8269a24:	75 b7                	jne    82699dd <_ZN10QuickParty11CQuickParty41get_matching_quick_party_master_unique_idEv+0xa7>
 8269a26:	83 7d d0 ff          	cmpl   $0xffffffff,-0x30(%ebp)
 8269a2a:	74 5b                	je     8269a87 <_ZN10QuickParty11CQuickParty41get_matching_quick_party_master_unique_idEv+0x151>
 8269a2c:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 8269a30:	78 55                	js     8269a87 <_ZN10QuickParty11CQuickParty41get_matching_quick_party_master_unique_idEv+0x151>
 8269a32:	83 7d d0 03          	cmpl   $0x3,-0x30(%ebp)
 8269a36:	7f 4f                	jg     8269a87 <_ZN10QuickParty11CQuickParty41get_matching_quick_party_master_unique_idEv+0x151>
 8269a38:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8269a3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8269a3f:	8b 45 08             	mov    0x8(%ebp),%eax
 8269a42:	89 04 24             	mov    %eax,(%esp)
 8269a45:	e8 a2 fd ff ff       	call   82697ec <_ZN10QuickParty11CQuickParty15get_party_indexEi>
 8269a4a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8269a4d:	e8 3c 27 e6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8269a52:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8269a55:	89 54 24 04          	mov    %edx,0x4(%esp)
 8269a59:	89 04 24             	mov    %eax,(%esp)
 8269a5c:	e8 d1 b4 02 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 8269a61:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8269a64:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8269a68:	74 1d                	je     8269a87 <_ZN10QuickParty11CQuickParty41get_matching_quick_party_master_unique_idEv+0x151>
 8269a6a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8269a6d:	89 04 24             	mov    %eax,(%esp)
 8269a70:	e8 0b bd ed ff       	call   8145780 <_ZN6CParty10getManagerEv>
 8269a75:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8269a78:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8269a7b:	89 04 24             	mov    %eax,(%esp)
 8269a7e:	e8 f9 08 e7 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8269a83:	66 89 45 d6          	mov    %ax,-0x2a(%ebp)
 8269a87:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 8269a8b:	c9                   	leave
 8269a8c:	c3                   	ret
 8269a8d:	90                   	nop

```

```c
// QuickParty::CQuickParty::get_matching_quick_party_master_unique_id @ 0x8269936

/* QuickParty::CQuickParty::get_matching_quick_party_master_unique_id() */

undefined2 __thiscall
QuickParty::CQuickParty::get_matching_quick_party_master_unique_id(CQuickParty *this)

{
  char cVar1;
  int iVar2;
  CParty *pCVar3;
  CUser *this_00;
  undefined4 local_34;
  undefined2 local_2e;
  undefined4 local_28;
  undefined4 local_20;
  
  local_34 = -1;
  local_2e = 0xffff;
  for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
    get_party_index(this,local_28);
    iVar2 = G_CGameManager();
    pCVar3 = (CParty *)CGameManager::GetParty(iVar2);
    if (pCVar3 != (CParty *)0x0) {
      cVar1 = CParty::GetEPLPState(pCVar3);
      if ('\x01' < cVar1) {
        local_34 = local_28;
        break;
      }
      cVar1 = CParty::is_quick_party(pCVar3);
      if (cVar1 != '\0') {
        local_34 = local_28;
      }
    }
  }
  if (local_34 == -1) {
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      get_party_index(this,local_20);
      iVar2 = G_CGameManager();
      iVar2 = CGameManager::GetParty(iVar2);
      if (iVar2 != 0) {
        local_34 = local_20;
        break;
      }
    }
  }
  if (((local_34 != -1) && (-1 < local_34)) && (local_34 < 4)) {
    get_party_index(this,local_34);
    iVar2 = G_CGameManager();
    pCVar3 = (CParty *)CGameManager::GetParty(iVar2);
    if (pCVar3 != (CParty *)0x0) {
      this_00 = (CUser *)CParty::getManager(pCVar3);
      local_2e = CUser::get_unique_id(this_00);
    }
  }
  return local_2e;
}

```

---

## get_party_index

```asm
// === 082697ec QuickParty::CQuickParty::get_party_index  [0x082697ec-0x826980d] ===
 82697ec:	55                   	push   %ebp
 82697ed:	89 e5                	mov    %esp,%ebp
 82697ef:	83 7d 0c 03          	cmpl   $0x3,0xc(%ebp)
 82697f3:	7f 06                	jg     82697fb <_ZN10QuickParty11CQuickParty15get_party_indexEi+0xf>
 82697f5:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 82697f9:	79 07                	jns    8269802 <_ZN10QuickParty11CQuickParty15get_party_indexEi+0x16>
 82697fb:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8269800:	eb 09                	jmp    826980b <_ZN10QuickParty11CQuickParty15get_party_indexEi+0x1f>
 8269802:	8b 55 0c             	mov    0xc(%ebp),%edx
 8269805:	8b 45 08             	mov    0x8(%ebp),%eax
 8269808:	8b 04 90             	mov    (%eax,%edx,4),%eax
 826980b:	5d                   	pop    %ebp
 826980c:	c3                   	ret
 826980d:	90                   	nop

```

```c
// QuickParty::CQuickParty::get_party_index @ 0x82697ec

/* QuickParty::CQuickParty::get_party_index(int) */

undefined4 __thiscall QuickParty::CQuickParty::get_party_index(CQuickParty *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 4) && (-1 < param_1)) {
    uVar1 = *(undefined4 *)(this + param_1 * 4);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

```

---

## get_party_object

```asm
// === 082696d0 QuickParty::CQuickParty::get_party_object  [0x082696d0-0x826972b] ===
 82696d0:	55                   	push   %ebp
 82696d1:	89 e5                	mov    %esp,%ebp
 82696d3:	53                   	push   %ebx
 82696d4:	83 ec 24             	sub    $0x24,%esp
 82696d7:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 82696db:	78 06                	js     82696e3 <_ZN10QuickParty11CQuickParty16get_party_objectEi+0x13>
 82696dd:	83 7d 0c 03          	cmpl   $0x3,0xc(%ebp)
 82696e1:	7e 07                	jle    82696ea <_ZN10QuickParty11CQuickParty16get_party_objectEi+0x1a>
 82696e3:	b8 00 00 00 00       	mov    $0x0,%eax
 82696e8:	eb 3b                	jmp    8269725 <_ZN10QuickParty11CQuickParty16get_party_objectEi+0x55>
 82696ea:	8b 55 0c             	mov    0xc(%ebp),%edx
 82696ed:	8b 45 08             	mov    0x8(%ebp),%eax
 82696f0:	8b 04 90             	mov    (%eax,%edx,4),%eax
 82696f3:	83 f8 ff             	cmp    $0xffffffff,%eax
 82696f6:	74 28                	je     8269720 <_ZN10QuickParty11CQuickParty16get_party_objectEi+0x50>
 82696f8:	8b 55 0c             	mov    0xc(%ebp),%edx
 82696fb:	8b 45 08             	mov    0x8(%ebp),%eax
 82696fe:	8b 1c 90             	mov    (%eax,%edx,4),%ebx
 8269701:	e8 88 2a e6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8269706:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 826970a:	89 04 24             	mov    %eax,(%esp)
 826970d:	e8 20 b8 02 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 8269712:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8269715:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8269719:	74 05                	je     8269720 <_ZN10QuickParty11CQuickParty16get_party_objectEi+0x50>
 826971b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826971e:	eb 05                	jmp    8269725 <_ZN10QuickParty11CQuickParty16get_party_objectEi+0x55>
 8269720:	b8 00 00 00 00       	mov    $0x0,%eax
 8269725:	83 c4 24             	add    $0x24,%esp
 8269728:	5b                   	pop    %ebx
 8269729:	5d                   	pop    %ebp
 826972a:	c3                   	ret
 826972b:	90                   	nop

```

```c
// QuickParty::CQuickParty::get_party_object @ 0x82696d0

/* QuickParty::CQuickParty::get_party_object(int) */

int __thiscall QuickParty::CQuickParty::get_party_object(CQuickParty *this,int param_1)

{
  int iVar1;
  
  if (((-1 < param_1) && (param_1 < 4)) && (*(int *)(this + param_1 * 4) != -1)) {
    iVar1 = G_CGameManager();
    iVar1 = CGameManager::GetParty(iVar1);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  return 0;
}

```

---

## get_party_object_0826972c

```asm
// === 0826972c QuickParty::CQuickParty::get_party_object  [0x0826972c-0x826978b] ===
 826972c:	55                   	push   %ebp
 826972d:	89 e5                	mov    %esp,%ebp
 826972f:	53                   	push   %ebx
 8269730:	83 ec 24             	sub    $0x24,%esp
 8269733:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 826973a:	eb 3a                	jmp    8269776 <_ZN10QuickParty11CQuickParty16get_party_objectEv+0x4a>
 826973c:	8b 55 f0             	mov    -0x10(%ebp),%edx
 826973f:	8b 45 08             	mov    0x8(%ebp),%eax
 8269742:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8269745:	83 f8 ff             	cmp    $0xffffffff,%eax
 8269748:	74 28                	je     8269772 <_ZN10QuickParty11CQuickParty16get_party_objectEv+0x46>
 826974a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 826974d:	8b 45 08             	mov    0x8(%ebp),%eax
 8269750:	8b 1c 90             	mov    (%eax,%edx,4),%ebx
 8269753:	e8 36 2a e6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8269758:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 826975c:	89 04 24             	mov    %eax,(%esp)
 826975f:	e8 ce b7 02 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 8269764:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8269767:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 826976b:	74 05                	je     8269772 <_ZN10QuickParty11CQuickParty16get_party_objectEv+0x46>
 826976d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8269770:	eb 14                	jmp    8269786 <_ZN10QuickParty11CQuickParty16get_party_objectEv+0x5a>
 8269772:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8269776:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 826977a:	0f 9e c0             	setle  %al
 826977d:	84 c0                	test   %al,%al
 826977f:	75 bb                	jne    826973c <_ZN10QuickParty11CQuickParty16get_party_objectEv+0x10>
 8269781:	b8 00 00 00 00       	mov    $0x0,%eax
 8269786:	83 c4 24             	add    $0x24,%esp
 8269789:	5b                   	pop    %ebx
 826978a:	5d                   	pop    %ebp
 826978b:	c3                   	ret

```

```c
// QuickParty::CQuickParty::get_party_object @ 0x826972c

/* QuickParty::CQuickParty::get_party_object() */

int __thiscall QuickParty::CQuickParty::get_party_object(CQuickParty *this)

{
  int iVar1;
  int local_14;
  
  local_14 = 0;
  do {
    if (3 < local_14) {
      return 0;
    }
    if (*(int *)(this + local_14 * 4) != -1) {
      iVar1 = G_CGameManager();
      iVar1 = CGameManager::GetParty(iVar1);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}

```

---

## get_quick_party_count

```asm
// === 082698be QuickParty::CQuickParty::get_quick_party_count  [0x082698be-0x8269935] ===
 82698be:	55                   	push   %ebp
 82698bf:	89 e5                	mov    %esp,%ebp
 82698c1:	53                   	push   %ebx
 82698c2:	83 ec 24             	sub    $0x24,%esp
 82698c5:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 82698cc:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 82698d3:	eb 4c                	jmp    8269921 <_ZN10QuickParty11CQuickParty21get_quick_party_countEv+0x63>
 82698d5:	8b 55 ec             	mov    -0x14(%ebp),%edx
 82698d8:	8b 45 08             	mov    0x8(%ebp),%eax
 82698db:	8b 04 90             	mov    (%eax,%edx,4),%eax
 82698de:	83 f8 ff             	cmp    $0xffffffff,%eax
 82698e1:	74 3a                	je     826991d <_ZN10QuickParty11CQuickParty21get_quick_party_countEv+0x5f>
 82698e3:	8b 55 ec             	mov    -0x14(%ebp),%edx
 82698e6:	8b 45 08             	mov    0x8(%ebp),%eax
 82698e9:	8b 1c 90             	mov    (%eax,%edx,4),%ebx
 82698ec:	e8 9d 28 e6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 82698f1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82698f5:	89 04 24             	mov    %eax,(%esp)
 82698f8:	e8 35 b6 02 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 82698fd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8269900:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8269904:	74 16                	je     826991c <_ZN10QuickParty11CQuickParty21get_quick_party_countEv+0x5e>
 8269906:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8269909:	89 04 24             	mov    %eax,(%esp)
 826990c:	e8 59 08 33 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 8269911:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8269914:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8269917:	01 45 e8             	add    %eax,-0x18(%ebp)
 826991a:	eb 01                	jmp    826991d <_ZN10QuickParty11CQuickParty21get_quick_party_countEv+0x5f>
 826991c:	90                   	nop
 826991d:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8269921:	83 7d ec 03          	cmpl   $0x3,-0x14(%ebp)
 8269925:	0f 9e c0             	setle  %al
 8269928:	84 c0                	test   %al,%al
 826992a:	75 a9                	jne    82698d5 <_ZN10QuickParty11CQuickParty21get_quick_party_countEv+0x17>
 826992c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 826992f:	83 c4 24             	add    $0x24,%esp
 8269932:	5b                   	pop    %ebx
 8269933:	5d                   	pop    %ebp
 8269934:	c3                   	ret
 8269935:	90                   	nop

```

```c
// QuickParty::CQuickParty::get_quick_party_count @ 0x82698be

/* QuickParty::CQuickParty::get_quick_party_count() */

int __thiscall QuickParty::CQuickParty::get_quick_party_count(CQuickParty *this)

{
  int iVar1;
  CParty *this_00;
  int local_1c;
  int local_18;
  
  local_1c = 0;
  for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
    if (*(int *)(this + local_18 * 4) != -1) {
      iVar1 = G_CGameManager();
      this_00 = (CParty *)CGameManager::GetParty(iVar1);
      if (this_00 != (CParty *)0x0) {
        iVar1 = CParty::get_member_count(this_00);
        local_1c = local_1c + iVar1;
      }
    }
  }
  return local_1c;
}

```

---

## get_timer_key

```asm
// === 08269668 QuickParty::CQuickParty::get_timer_key  [0x08269668-0x826967f] ===
 8269668:	55                   	push   %ebp
 8269669:	89 e5                	mov    %esp,%ebp
 826966b:	8b 45 0c             	mov    0xc(%ebp),%eax
 826966e:	8d 90 63 ff ff ff    	lea    -0x9d(%eax),%edx
 8269674:	8b 45 08             	mov    0x8(%ebp),%eax
 8269677:	83 c2 04             	add    $0x4,%edx
 826967a:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 826967e:	5d                   	pop    %ebp
 826967f:	c3                   	ret

```

```c
// QuickParty::CQuickParty::get_timer_key @ 0x8269668

/* QuickParty::CQuickParty::get_timer_key(TIMER_MESSAGE) */

undefined4 __thiscall QuickParty::CQuickParty::get_timer_key(CQuickParty *this,int param_2)

{
  return *(undefined4 *)(this + (param_2 + -0x99) * 4 + 0xc);
}

```

---

## init

```asm
// === 08269546 QuickParty::CQuickParty::init  [0x08269546-0x82695c9] ===
 8269546:	55                   	push   %ebp
 8269547:	89 e5                	mov    %esp,%ebp
 8269549:	83 ec 28             	sub    $0x28,%esp
 826954c:	8b 45 08             	mov    0x8(%ebp),%eax
 826954f:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8269556:	00 
 8269557:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 826955e:	ff 
 826955f:	89 04 24             	mov    %eax,(%esp)
 8269562:	e8 59 47 e1 ff       	call   807dcc0 <memset@plt>
 8269567:	8b 45 08             	mov    0x8(%ebp),%eax
 826956a:	c7 40 10 ff ff ff ff 	movl   $0xffffffff,0x10(%eax)
 8269571:	8b 45 08             	mov    0x8(%ebp),%eax
 8269574:	c6 40 14 00          	movb   $0x0,0x14(%eax)
 8269578:	8b 45 08             	mov    0x8(%ebp),%eax
 826957b:	66 c7 40 16 00 00    	movw   $0x0,0x16(%eax)
 8269581:	8b 45 08             	mov    0x8(%ebp),%eax
 8269584:	c6 40 18 ff          	movb   $0xff,0x18(%eax)
 8269588:	8b 45 08             	mov    0x8(%ebp),%eax
 826958b:	c6 40 19 ff          	movb   $0xff,0x19(%eax)
 826958f:	c7 45 f4 9d 00 00 00 	movl   $0x9d,-0xc(%ebp)
 8269596:	eb 1b                	jmp    82695b3 <_ZN10QuickParty11CQuickParty4initEv+0x6d>
 8269598:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826959b:	8d 90 63 ff ff ff    	lea    -0x9d(%eax),%edx
 82695a1:	8b 45 08             	mov    0x8(%ebp),%eax
 82695a4:	83 c2 04             	add    $0x4,%edx
 82695a7:	c7 44 90 0c 00 00 00 	movl   $0x0,0xc(%eax,%edx,4)
 82695ae:	00 
 82695af:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82695b3:	81 7d f4 9e 00 00 00 	cmpl   $0x9e,-0xc(%ebp)
 82695ba:	0f 9e c0             	setle  %al
 82695bd:	84 c0                	test   %al,%al
 82695bf:	75 d7                	jne    8269598 <_ZN10QuickParty11CQuickParty4initEv+0x52>
 82695c1:	8b 45 08             	mov    0x8(%ebp),%eax
 82695c4:	c6 40 24 00          	movb   $0x0,0x24(%eax)
 82695c8:	c9                   	leave
 82695c9:	c3                   	ret

```

```c
// QuickParty::CQuickParty::init @ 0x8269546

/* QuickParty::CQuickParty::init() */

void __thiscall QuickParty::CQuickParty::init(CQuickParty *this)

{
  int local_10;
  
  memset(this,-1,0x10);
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  this[0x14] = (CQuickParty)0x0;
  *(undefined2 *)(this + 0x16) = 0;
  this[0x18] = (CQuickParty)0xff;
  this[0x19] = (CQuickParty)0xff;
  for (local_10 = 0x9d; local_10 < 0x9f; local_10 = local_10 + 1) {
    *(undefined4 *)(this + (local_10 + -0x99) * 4 + 0xc) = 0;
  }
  this[0x24] = (CQuickParty)0x0;
  return;
}

```

---

## is_empty_quick_party

```asm
// === 08269884 QuickParty::CQuickParty::is_empty_quick_party  [0x08269884-0x82698bd] ===
 8269884:	55                   	push   %ebp
 8269885:	89 e5                	mov    %esp,%ebp
 8269887:	83 ec 10             	sub    $0x10,%esp
 826988a:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 8269891:	eb 19                	jmp    82698ac <_ZN10QuickParty11CQuickParty20is_empty_quick_partyEv+0x28>
 8269893:	8b 55 fc             	mov    -0x4(%ebp),%edx
 8269896:	8b 45 08             	mov    0x8(%ebp),%eax
 8269899:	8b 04 90             	mov    (%eax,%edx,4),%eax
 826989c:	83 f8 ff             	cmp    $0xffffffff,%eax
 826989f:	74 07                	je     82698a8 <_ZN10QuickParty11CQuickParty20is_empty_quick_partyEv+0x24>
 82698a1:	b8 00 00 00 00       	mov    $0x0,%eax
 82698a6:	eb 14                	jmp    82698bc <_ZN10QuickParty11CQuickParty20is_empty_quick_partyEv+0x38>
 82698a8:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 82698ac:	83 7d fc 03          	cmpl   $0x3,-0x4(%ebp)
 82698b0:	0f 9e c0             	setle  %al
 82698b3:	84 c0                	test   %al,%al
 82698b5:	75 dc                	jne    8269893 <_ZN10QuickParty11CQuickParty20is_empty_quick_partyEv+0xf>
 82698b7:	b8 01 00 00 00       	mov    $0x1,%eax
 82698bc:	c9                   	leave
 82698bd:	c3                   	ret

```

```c
// QuickParty::CQuickParty::is_empty_quick_party @ 0x8269884

/* QuickParty::CQuickParty::is_empty_quick_party() */

undefined4 __thiscall QuickParty::CQuickParty::is_empty_quick_party(CQuickParty *this)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (3 < local_8) {
      return 1;
    }
    if (*(int *)(this + local_8 * 4) != -1) break;
    local_8 = local_8 + 1;
  }
  return 0;
}

```

---

## send_matching_update_quick_party

```asm
// === 08269a8e QuickParty::CQuickParty::send_matching_update_quick_party  [0x08269a8e-0x8269bb5] ===
 8269a8e:	55                   	push   %ebp
 8269a8f:	89 e5                	mov    %esp,%ebp
 8269a91:	56                   	push   %esi
 8269a92:	53                   	push   %ebx
 8269a93:	83 ec 40             	sub    $0x40,%esp
 8269a96:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8269a99:	8b 55 10             	mov    0x10(%ebp),%edx
 8269a9c:	8b 45 14             	mov    0x14(%ebp),%eax
 8269a9f:	88 4d d4             	mov    %cl,-0x2c(%ebp)
 8269aa2:	66 89 55 d0          	mov    %dx,-0x30(%ebp)
 8269aa6:	88 45 cc             	mov    %al,-0x34(%ebp)
 8269aa9:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8269ab0:	e9 eb 00 00 00       	jmp    8269ba0 <_ZN10QuickParty11CQuickParty32send_matching_update_quick_partyEctb+0x112>
 8269ab5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8269ab8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8269abc:	8b 45 08             	mov    0x8(%ebp),%eax
 8269abf:	89 04 24             	mov    %eax,(%esp)
 8269ac2:	e8 09 fc ff ff       	call   82696d0 <_ZN10QuickParty11CQuickParty16get_party_objectEi>
 8269ac7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8269aca:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8269ace:	0f 84 c7 00 00 00    	je     8269b9b <_ZN10QuickParty11CQuickParty32send_matching_update_quick_partyEctb+0x10d>
 8269ad4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8269ad7:	89 04 24             	mov    %eax,(%esp)
 8269ada:	e8 6d 42 32 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8269adf:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8269ae2:	89 04 24             	mov    %eax,(%esp)
 8269ae5:	e8 fc 1d e6 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8269aea:	c7 44 24 08 80 01 00 	movl   $0x180,0x8(%esp)
 8269af1:	00 
 8269af2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8269af9:	00 
 8269afa:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8269afd:	89 04 24             	mov    %eax,(%esp)
 8269b00:	e8 f7 1d e6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8269b05:	0f be 45 d4          	movsbl -0x2c(%ebp),%eax
 8269b09:	89 44 24 04          	mov    %eax,0x4(%esp)
 8269b0d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8269b10:	89 04 24             	mov    %eax,(%esp)
 8269b13:	e8 08 1e e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8269b18:	0f b7 45 d0          	movzwl -0x30(%ebp),%eax
 8269b1c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8269b20:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8269b23:	89 04 24             	mov    %eax,(%esp)
 8269b26:	e8 79 03 e7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8269b2b:	80 7d cc 00          	cmpb   $0x0,-0x34(%ebp)
 8269b2f:	74 07                	je     8269b38 <_ZN10QuickParty11CQuickParty32send_matching_update_quick_partyEctb+0xaa>
 8269b31:	b8 01 00 00 00       	mov    $0x1,%eax
 8269b36:	eb 05                	jmp    8269b3d <_ZN10QuickParty11CQuickParty32send_matching_update_quick_partyEctb+0xaf>
 8269b38:	b8 00 00 00 00       	mov    $0x0,%eax
 8269b3d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8269b41:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8269b44:	89 04 24             	mov    %eax,(%esp)
 8269b47:	e8 d4 1d e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8269b4c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8269b53:	00 
 8269b54:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8269b57:	89 04 24             	mov    %eax,(%esp)
 8269b5a:	e8 f9 1d e6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8269b5f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8269b62:	89 44 24 04          	mov    %eax,0x4(%esp)
 8269b66:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8269b69:	89 04 24             	mov    %eax,(%esp)
 8269b6c:	e8 dd 35 33 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 8269b71:	eb 1b                	jmp    8269b8e <_ZN10QuickParty11CQuickParty32send_matching_update_quick_partyEctb+0x100>
 8269b73:	89 d3                	mov    %edx,%ebx
 8269b75:	89 c6                	mov    %eax,%esi
 8269b77:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8269b7a:	89 04 24             	mov    %eax,(%esp)
 8269b7d:	e8 fe 42 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8269b82:	89 f0                	mov    %esi,%eax
 8269b84:	89 da                	mov    %ebx,%edx
 8269b86:	89 04 24             	mov    %eax,(%esp)
 8269b89:	e8 c2 9b 87 00       	call   8ae3750 <_Unwind_Resume>
 8269b8e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8269b91:	89 04 24             	mov    %eax,(%esp)
 8269b94:	e8 e7 42 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8269b99:	eb 01                	jmp    8269b9c <_ZN10QuickParty11CQuickParty32send_matching_update_quick_partyEctb+0x10e>
 8269b9b:	90                   	nop
 8269b9c:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8269ba0:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 8269ba4:	0f 9e c0             	setle  %al
 8269ba7:	84 c0                	test   %al,%al
 8269ba9:	0f 85 06 ff ff ff    	jne    8269ab5 <_ZN10QuickParty11CQuickParty32send_matching_update_quick_partyEctb+0x27>
 8269baf:	83 c4 40             	add    $0x40,%esp
 8269bb2:	5b                   	pop    %ebx
 8269bb3:	5e                   	pop    %esi
 8269bb4:	5d                   	pop    %ebp
 8269bb5:	c3                   	ret

```

```c
// QuickParty::CQuickParty::send_matching_update_quick_party @ 0x8269a8e

/* QuickParty::CQuickParty::send_matching_update_quick_party(char, unsigned short, bool) */

void __thiscall
QuickParty::CQuickParty::send_matching_update_quick_party
          (CQuickParty *this,char param_1,ushort param_2,bool param_3)

{
  PacketGuard local_20 [12];
  int local_14;
  CParty *local_10;
  
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    local_10 = (CParty *)get_party_object(this,local_14);
    if (local_10 != (CParty *)0x0) {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 08269ae5 to 08269b70 has its CatchHandler @ 08269b73 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x180);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)param_1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,(uint)param_2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)param_3);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CParty::send_to_party(local_10,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
  }
  return;
}

```

---

## set_party_index

```asm
// === 0826978c QuickParty::CQuickParty::set_party_index  [0x0826978c-0x82697c7] ===
 826978c:	55                   	push   %ebp
 826978d:	89 e5                	mov    %esp,%ebp
 826978f:	83 ec 10             	sub    $0x10,%esp
 8269792:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 8269799:	eb 20                	jmp    82697bb <_ZN10QuickParty11CQuickParty15set_party_indexEi+0x2f>
 826979b:	8b 55 fc             	mov    -0x4(%ebp),%edx
 826979e:	8b 45 08             	mov    0x8(%ebp),%eax
 82697a1:	8b 04 90             	mov    (%eax,%edx,4),%eax
 82697a4:	83 f8 ff             	cmp    $0xffffffff,%eax
 82697a7:	75 0e                	jne    82697b7 <_ZN10QuickParty11CQuickParty15set_party_indexEi+0x2b>
 82697a9:	8b 55 fc             	mov    -0x4(%ebp),%edx
 82697ac:	8b 45 08             	mov    0x8(%ebp),%eax
 82697af:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 82697b2:	89 0c 90             	mov    %ecx,(%eax,%edx,4)
 82697b5:	eb 0f                	jmp    82697c6 <_ZN10QuickParty11CQuickParty15set_party_indexEi+0x3a>
 82697b7:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 82697bb:	83 7d fc 03          	cmpl   $0x3,-0x4(%ebp)
 82697bf:	0f 9e c0             	setle  %al
 82697c2:	84 c0                	test   %al,%al
 82697c4:	75 d5                	jne    826979b <_ZN10QuickParty11CQuickParty15set_party_indexEi+0xf>
 82697c6:	c9                   	leave
 82697c7:	c3                   	ret

```

```c
// QuickParty::CQuickParty::set_party_index @ 0x826978c

/* QuickParty::CQuickParty::set_party_index(int) */

void __thiscall QuickParty::CQuickParty::set_party_index(CQuickParty *this,int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (3 < local_8) {
      return;
    }
    if (*(int *)(this + local_8 * 4) == -1) break;
    local_8 = local_8 + 1;
  }
  *(int *)(this + local_8 * 4) = param_1;
  return;
}

```

---

## set_party_index_082697c8

```asm
// === 082697c8 QuickParty::CQuickParty::set_party_index  [0x082697c8-0x82697eb] ===
 82697c8:	55                   	push   %ebp
 82697c9:	89 e5                	mov    %esp,%ebp
 82697cb:	83 7d 0c 03          	cmpl   $0x3,0xc(%ebp)
 82697cf:	7f 14                	jg     82697e5 <_ZN10QuickParty11CQuickParty15set_party_indexEii+0x1d>
 82697d1:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 82697d5:	78 11                	js     82697e8 <_ZN10QuickParty11CQuickParty15set_party_indexEii+0x20>
 82697d7:	8b 55 0c             	mov    0xc(%ebp),%edx
 82697da:	8b 45 08             	mov    0x8(%ebp),%eax
 82697dd:	8b 4d 10             	mov    0x10(%ebp),%ecx
 82697e0:	89 0c 90             	mov    %ecx,(%eax,%edx,4)
 82697e3:	eb 04                	jmp    82697e9 <_ZN10QuickParty11CQuickParty15set_party_indexEii+0x21>
 82697e5:	90                   	nop
 82697e6:	eb 01                	jmp    82697e9 <_ZN10QuickParty11CQuickParty15set_party_indexEii+0x21>
 82697e8:	90                   	nop
 82697e9:	5d                   	pop    %ebp
 82697ea:	c3                   	ret
 82697eb:	90                   	nop

```

```c
// QuickParty::CQuickParty::set_party_index @ 0x82697c8

/* QuickParty::CQuickParty::set_party_index(int, int) */

void __thiscall QuickParty::CQuickParty::set_party_index(CQuickParty *this,int param_1,int param_2)

{
  if ((param_1 < 4) && (-1 < param_1)) {
    *(int *)(this + param_1 * 4) = param_2;
  }
  return;
}

```

---

## ~CQuickParty

```asm
// === 08269540 QuickParty::CQuickParty::~CQuickParty  [0x08269540-0x8269545] ===
 8269540:	55                   	push   %ebp
 8269541:	89 e5                	mov    %esp,%ebp
 8269543:	5d                   	pop    %ebp
 8269544:	c3                   	ret
 8269545:	90                   	nop

```

```c
// QuickParty::CQuickParty::~CQuickParty @ 0x8269540

/* QuickParty::CQuickParty::~CQuickParty() */

void __thiscall QuickParty::CQuickParty::~CQuickParty(CQuickParty *this)

{
  return;
}

```

