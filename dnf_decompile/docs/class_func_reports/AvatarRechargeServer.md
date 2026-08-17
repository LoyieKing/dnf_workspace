# AvatarRechargeServer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 19

---

## AvatarRechargeServer

```asm
// === 08190200 AvatarRechargeServer::AvatarRechargeServer  [0x08190200-0x8190245] ===
 8190200:	55                   	push   %ebp
 8190201:	89 e5                	mov    %esp,%ebp
 8190203:	83 ec 18             	sub    $0x18,%esp
 8190206:	8b 45 08             	mov    0x8(%ebp),%eax
 8190209:	83 c0 04             	add    $0x4,%eax
 819020c:	89 04 24             	mov    %eax,(%esp)
 819020f:	e8 bc 0b 72 00       	call   88b0dd0 <_ZN4ARAD6SCRIPT14AvatarRechargeC1Ev>
 8190214:	8b 45 08             	mov    0x8(%ebp),%eax
 8190217:	89 04 24             	mov    %eax,(%esp)
 819021a:	e8 87 32 00 00       	call   81934a6 <_ZN4ARAD9SingletonI20AvatarRechargeServerEC1Ev>
 819021f:	8b 45 08             	mov    0x8(%ebp),%eax
 8190222:	89 04 24             	mov    %eax,(%esp)
 8190225:	e8 2a 22 f5 ff       	call   80e2454 <_ZN4ARAD15ScriptInterfaceC1Ev>
 819022a:	8b 45 08             	mov    0x8(%ebp),%eax
 819022d:	c7 00 58 b9 b9 08    	movl   $0x8b9b958,(%eax)
 8190233:	8b 45 08             	mov    0x8(%ebp),%eax
 8190236:	c7 40 54 00 00 00 00 	movl   $0x0,0x54(%eax)
 819023d:	8b 45 08             	mov    0x8(%ebp),%eax
 8190240:	c6 40 58 00          	movb   $0x0,0x58(%eax)
 8190244:	c9                   	leave
 8190245:	c3                   	ret

```

```c
// AvatarRechargeServer::AvatarRechargeServer @ 0x8190200

/* AvatarRechargeServer::AvatarRechargeServer() */

void __thiscall AvatarRechargeServer::AvatarRechargeServer(AvatarRechargeServer *this)

{
  ARAD::SCRIPT::AvatarRecharge::AvatarRecharge((AvatarRecharge *)(this + 4));
  ARAD::Singleton<AvatarRechargeServer>::Singleton();
  ARAD::ScriptInterface::ScriptInterface((ScriptInterface *)this);
  *(undefined ***)this = &PTR_Load_08b9b958;
  *(undefined4 *)(this + 0x54) = 0;
  this[0x58] = (AvatarRechargeServer)0x0;
  return;
}

```

---

## CalcDurability

```asm
// === 0819049a AvatarRechargeServer::CalcDurability  [0x0819049a-0x81905b3] ===
 819049a:	55                   	push   %ebp
 819049b:	89 e5                	mov    %esp,%ebp
 819049d:	56                   	push   %esi
 819049e:	53                   	push   %ebx
 819049f:	83 ec 30             	sub    $0x30,%esp
 81904a2:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 81904a9:	e9 ed 00 00 00       	jmp    819059b <_ZN20AvatarRechargeServer14CalcDurabilityEP5CUseri+0x101>
 81904ae:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81904b1:	89 04 24             	mov    %eax,(%esp)
 81904b4:	e8 f3 dc ef ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 81904b9:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81904c0:	00 
 81904c1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81904c4:	89 04 24             	mov    %eax,(%esp)
 81904c7:	e8 78 e9 fe ff       	call   817ee44 <_ZNSt6vectorIiSaIiEE7reserveEj>
 81904cc:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 81904d3:	eb 29                	jmp    81904fe <_ZN20AvatarRechargeServer14CalcDurabilityEP5CUseri+0x64>
 81904d5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81904d8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81904dc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81904df:	89 44 24 08          	mov    %eax,0x8(%esp)
 81904e3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81904e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81904ea:	8b 45 08             	mov    0x8(%ebp),%eax
 81904ed:	89 04 24             	mov    %eax,(%esp)
 81904f0:	e8 f3 fd ff ff       	call   81902e8 <_ZN20AvatarRechargeServer20CalcDurabilityDetailEP5CUseriRSt6vectorIiSaIiEE>
 81904f5:	83 f0 01             	xor    $0x1,%eax
 81904f8:	84 c0                	test   %al,%al
 81904fa:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 81904fe:	83 7d ec 09          	cmpl   $0x9,-0x14(%ebp)
 8190502:	0f 9e c0             	setle  %al
 8190505:	84 c0                	test   %al,%al
 8190507:	75 cc                	jne    81904d5 <_ZN20AvatarRechargeServer14CalcDurabilityEP5CUseri+0x3b>
 8190509:	8d 45 dc             	lea    -0x24(%ebp),%eax
 819050c:	89 04 24             	mov    %eax,(%esp)
 819050f:	e8 4c c4 f8 ff       	call   811c960 <_ZNKSt6vectorIiSaIiEE5emptyEv>
 8190514:	83 f0 01             	xor    $0x1,%eax
 8190517:	84 c0                	test   %al,%al
 8190519:	74 71                	je     819058c <_ZN20AvatarRechargeServer14CalcDurabilityEP5CUseri+0xf2>
 819051b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8190522:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8190525:	89 04 24             	mov    %eax,(%esp)
 8190528:	e8 93 dc ef ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 819052d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8190530:	eb 30                	jmp    8190562 <_ZN20AvatarRechargeServer14CalcDurabilityEP5CUseri+0xc8>
 8190532:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8190535:	89 44 24 04          	mov    %eax,0x4(%esp)
 8190539:	8d 45 dc             	lea    -0x24(%ebp),%eax
 819053c:	89 04 24             	mov    %eax,(%esp)
 819053f:	e8 98 dc ef ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 8190544:	8b 00                	mov    (%eax),%eax
 8190546:	98                   	cwtl
 8190547:	89 44 24 08          	mov    %eax,0x8(%esp)
 819054b:	8b 45 0c             	mov    0xc(%ebp),%eax
 819054e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8190552:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 8190559:	e8 98 0e 00 00       	call   81913f6 <_ZN20AvatarRechargeServer21UpdateAvatarEnduranceEN5CUser11eSendTargetEPS0_s>
 819055e:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8190562:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8190565:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8190568:	0f 92 c0             	setb   %al
 819056b:	84 c0                	test   %al,%al
 819056d:	75 c3                	jne    8190532 <_ZN20AvatarRechargeServer14CalcDurabilityEP5CUseri+0x98>
 819056f:	eb 1b                	jmp    819058c <_ZN20AvatarRechargeServer14CalcDurabilityEP5CUseri+0xf2>
 8190571:	89 d3                	mov    %edx,%ebx
 8190573:	89 c6                	mov    %eax,%esi
 8190575:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8190578:	89 04 24             	mov    %eax,(%esp)
 819057b:	e8 5a 38 ef ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8190580:	89 f0                	mov    %esi,%eax
 8190582:	89 da                	mov    %ebx,%edx
 8190584:	89 04 24             	mov    %eax,(%esp)
 8190587:	e8 c4 31 95 00       	call   8ae3750 <_Unwind_Resume>
 819058c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 819058f:	89 04 24             	mov    %eax,(%esp)
 8190592:	e8 43 38 ef ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8190597:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 819059b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 819059e:	3b 45 10             	cmp    0x10(%ebp),%eax
 81905a1:	0f 9c c0             	setl   %al
 81905a4:	84 c0                	test   %al,%al
 81905a6:	0f 85 02 ff ff ff    	jne    81904ae <_ZN20AvatarRechargeServer14CalcDurabilityEP5CUseri+0x14>
 81905ac:	83 c4 30             	add    $0x30,%esp
 81905af:	5b                   	pop    %ebx
 81905b0:	5e                   	pop    %esi
 81905b1:	5d                   	pop    %ebp
 81905b2:	c3                   	ret
 81905b3:	90                   	nop

```

```c
// AvatarRechargeServer::CalcDurability @ 0x819049a

/* AvatarRechargeServer::CalcDurability(CUser*, int) */

void __thiscall
AvatarRechargeServer::CalcDurability(AvatarRechargeServer *this,CUser *param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  vector<int,std::allocator<int>> local_28 [12];
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  
  for (local_1c = 0; local_1c < param_2; local_1c = local_1c + 1) {
    std::vector<int,std::allocator<int>>::vector(local_28);
                    /* try { // try from 081904c7 to 0819055d has its CatchHandler @ 08190571 */
    std::vector<int,std::allocator<int>>::reserve(local_28,10);
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      CalcDurabilityDetail(this,param_1,local_18,(vector *)local_28);
    }
    cVar1 = std::vector<int,std::allocator<int>>::empty();
    if (cVar1 != '\x01') {
      local_14 = 0;
      local_10 = std::vector<int,std::allocator<int>>::size(local_28);
      for (; local_14 < local_10; local_14 = local_14 + 1) {
        puVar2 = (undefined4 *)std::vector<int,std::allocator<int>>::operator[](local_28,local_14);
        UpdateAvatarEndurance(2,param_1,(int)(short)*puVar2);
      }
    }
    std::vector<int,std::allocator<int>>::~vector(local_28);
  }
  return;
}

```

---

## CalcDurabilityChangeEquip

```asm
// === 081905b4 AvatarRechargeServer::CalcDurabilityChangeEquip  [0x081905b4-0x8190698] ===
 81905b4:	55                   	push   %ebp
 81905b5:	89 e5                	mov    %esp,%ebp
 81905b7:	56                   	push   %esi
 81905b8:	53                   	push   %ebx
 81905b9:	83 ec 20             	sub    $0x20,%esp
 81905bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81905bf:	89 04 24             	mov    %eax,(%esp)
 81905c2:	e8 c5 9d f4 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81905c7:	83 f8 05             	cmp    $0x5,%eax
 81905ca:	0f 95 c0             	setne  %al
 81905cd:	84 c0                	test   %al,%al
 81905cf:	0f 85 b3 00 00 00    	jne    8190688 <_ZN20AvatarRechargeServer25CalcDurabilityChangeEquipEP5CUseri+0xd4>
 81905d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81905d8:	89 04 24             	mov    %eax,(%esp)
 81905db:	e8 6c 4b 4c 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81905e0:	85 c0                	test   %eax,%eax
 81905e2:	0f 94 c0             	sete   %al
 81905e5:	84 c0                	test   %al,%al
 81905e7:	0f 85 9e 00 00 00    	jne    819068b <_ZN20AvatarRechargeServer25CalcDurabilityChangeEquipEP5CUseri+0xd7>
 81905ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 81905f0:	89 04 24             	mov    %eax,(%esp)
 81905f3:	e8 54 4b 4c 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81905f8:	89 04 24             	mov    %eax,(%esp)
 81905fb:	e8 c8 e3 42 00       	call   85be9c8 <_ZN6CParty19IsUseFatigueDungeonEv>
 8190600:	83 f0 01             	xor    $0x1,%eax
 8190603:	84 c0                	test   %al,%al
 8190605:	0f 85 83 00 00 00    	jne    819068e <_ZN20AvatarRechargeServer25CalcDurabilityChangeEquipEP5CUseri+0xda>
 819060b:	8b 45 0c             	mov    0xc(%ebp),%eax
 819060e:	89 04 24             	mov    %eax,(%esp)
 8190611:	e8 36 4b 4c 00       	call   865514c <_ZN5CUser8GetPartyEv>
 8190616:	89 04 24             	mov    %eax,(%esp)
 8190619:	e8 2c e4 42 00       	call   85bea4a <_ZN6CParty13CheckMapClearEv>
 819061e:	84 c0                	test   %al,%al
 8190620:	75 6f                	jne    8190691 <_ZN20AvatarRechargeServer25CalcDurabilityChangeEquipEP5CUseri+0xdd>
 8190622:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8190625:	89 04 24             	mov    %eax,(%esp)
 8190628:	e8 7f db ef ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 819062d:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8190631:	78 48                	js     819067b <_ZN20AvatarRechargeServer25CalcDurabilityChangeEquipEP5CUseri+0xc7>
 8190633:	83 7d 10 09          	cmpl   $0x9,0x10(%ebp)
 8190637:	7f 42                	jg     819067b <_ZN20AvatarRechargeServer25CalcDurabilityChangeEquipEP5CUseri+0xc7>
 8190639:	8d 45 ec             	lea    -0x14(%ebp),%eax
 819063c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8190640:	8b 45 10             	mov    0x10(%ebp),%eax
 8190643:	89 44 24 08          	mov    %eax,0x8(%esp)
 8190647:	8b 45 0c             	mov    0xc(%ebp),%eax
 819064a:	89 44 24 04          	mov    %eax,0x4(%esp)
 819064e:	8b 45 08             	mov    0x8(%ebp),%eax
 8190651:	89 04 24             	mov    %eax,(%esp)
 8190654:	e8 8f fc ff ff       	call   81902e8 <_ZN20AvatarRechargeServer20CalcDurabilityDetailEP5CUseriRSt6vectorIiSaIiEE>
 8190659:	83 f0 01             	xor    $0x1,%eax
 819065c:	84 c0                	test   %al,%al
 819065e:	eb 1b                	jmp    819067b <_ZN20AvatarRechargeServer25CalcDurabilityChangeEquipEP5CUseri+0xc7>
 8190660:	89 d3                	mov    %edx,%ebx
 8190662:	89 c6                	mov    %eax,%esi
 8190664:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8190667:	89 04 24             	mov    %eax,(%esp)
 819066a:	e8 6b 37 ef ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 819066f:	89 f0                	mov    %esi,%eax
 8190671:	89 da                	mov    %ebx,%edx
 8190673:	89 04 24             	mov    %eax,(%esp)
 8190676:	e8 d5 30 95 00       	call   8ae3750 <_Unwind_Resume>
 819067b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 819067e:	89 04 24             	mov    %eax,(%esp)
 8190681:	e8 54 37 ef ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8190686:	eb 0a                	jmp    8190692 <_ZN20AvatarRechargeServer25CalcDurabilityChangeEquipEP5CUseri+0xde>
 8190688:	90                   	nop
 8190689:	eb 07                	jmp    8190692 <_ZN20AvatarRechargeServer25CalcDurabilityChangeEquipEP5CUseri+0xde>
 819068b:	90                   	nop
 819068c:	eb 04                	jmp    8190692 <_ZN20AvatarRechargeServer25CalcDurabilityChangeEquipEP5CUseri+0xde>
 819068e:	90                   	nop
 819068f:	eb 01                	jmp    8190692 <_ZN20AvatarRechargeServer25CalcDurabilityChangeEquipEP5CUseri+0xde>
 8190691:	90                   	nop
 8190692:	83 c4 20             	add    $0x20,%esp
 8190695:	5b                   	pop    %ebx
 8190696:	5e                   	pop    %esi
 8190697:	5d                   	pop    %ebp
 8190698:	c3                   	ret

```

```c
// AvatarRechargeServer::CalcDurabilityChangeEquip @ 0x81905b4

/* AvatarRechargeServer::CalcDurabilityChangeEquip(CUser*, int) */

void __thiscall
AvatarRechargeServer::CalcDurabilityChangeEquip
          (AvatarRechargeServer *this,CUser *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  CParty *pCVar3;
  vector<int,std::allocator<int>> local_18 [12];
  
  iVar2 = CUser::get_state(param_1);
  if ((iVar2 == 5) && (iVar2 = CUser::GetParty(param_1), iVar2 != 0)) {
    pCVar3 = (CParty *)CUser::GetParty(param_1);
    cVar1 = CParty::IsUseFatigueDungeon(pCVar3);
    if (cVar1 == '\x01') {
      pCVar3 = (CParty *)CUser::GetParty(param_1);
      cVar1 = CParty::CheckMapClear(pCVar3);
      if (cVar1 == '\0') {
        std::vector<int,std::allocator<int>>::vector(local_18);
        if ((-1 < param_2) && (param_2 < 10)) {
                    /* try { // try from 08190654 to 08190658 has its CatchHandler @ 08190660 */
          CalcDurabilityDetail(this,param_1,param_2,(vector *)local_18);
        }
        std::vector<int,std::allocator<int>>::~vector(local_18);
      }
    }
  }
  return;
}

```

---

## CalcDurabilityDetail

```asm
// === 081902e8 AvatarRechargeServer::CalcDurabilityDetail  [0x081902e8-0x8190415] ===
 81902e8:	55                   	push   %ebp
 81902e9:	89 e5                	mov    %esp,%ebp
 81902eb:	53                   	push   %ebx
 81902ec:	83 ec 24             	sub    $0x24,%esp
 81902ef:	8b 5d 10             	mov    0x10(%ebp),%ebx
 81902f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81902f5:	89 04 24             	mov    %eax,(%esp)
 81902f8:	e8 0d 31 00 00       	call   819340a <_ZN15CUserCharacInfo21getCurCharacInvenRefWEv>
 81902fd:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8190301:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8190308:	00 
 8190309:	89 04 24             	mov    %eax,(%esp)
 819030c:	e8 9d bf 36 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 8190311:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8190314:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8190317:	89 04 24             	mov    %eax,(%esp)
 819031a:	e8 47 ea f8 ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 819031f:	84 c0                	test   %al,%al
 8190321:	75 0c                	jne    819032f <_ZN20AvatarRechargeServer20CalcDurabilityDetailEP5CUseriRSt6vectorIiSaIiEE+0x47>
 8190323:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8190326:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 819032a:	66 85 c0             	test   %ax,%ax
 819032d:	75 07                	jne    8190336 <_ZN20AvatarRechargeServer20CalcDurabilityDetailEP5CUseriRSt6vectorIiSaIiEE+0x4e>
 819032f:	b8 01 00 00 00       	mov    $0x1,%eax
 8190334:	eb 05                	jmp    819033b <_ZN20AvatarRechargeServer20CalcDurabilityDetailEP5CUseriRSt6vectorIiSaIiEE+0x53>
 8190336:	b8 00 00 00 00       	mov    $0x0,%eax
 819033b:	84 c0                	test   %al,%al
 819033d:	74 0a                	je     8190349 <_ZN20AvatarRechargeServer20CalcDurabilityDetailEP5CUseriRSt6vectorIiSaIiEE+0x61>
 819033f:	b8 00 00 00 00       	mov    $0x0,%eax
 8190344:	e9 c6 00 00 00       	jmp    819040f <_ZN20AvatarRechargeServer20CalcDurabilityDetailEP5CUseriRSt6vectorIiSaIiEE+0x127>
 8190349:	8b 45 0c             	mov    0xc(%ebp),%eax
 819034c:	89 04 24             	mov    %eax,(%esp)
 819034f:	e8 3a 9f f4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8190354:	89 04 24             	mov    %eax,(%esp)
 8190357:	e8 10 09 f8 ff       	call   8110c6c <_ZN10CInventory17GetAvatarItemMgrWEv>
 819035c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 819035f:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
 8190365:	8b 45 08             	mov    0x8(%ebp),%eax
 8190368:	0f b6 40 58          	movzbl 0x58(%eax),%eax
 819036c:	83 f0 01             	xor    $0x1,%eax
 819036f:	84 c0                	test   %al,%al
 8190371:	74 1b                	je     819038e <_ZN20AvatarRechargeServer20CalcDurabilityDetailEP5CUseriRSt6vectorIiSaIiEE+0xa6>
 8190373:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8190376:	8b 40 07             	mov    0x7(%eax),%eax
 8190379:	89 44 24 04          	mov    %eax,0x4(%esp)
 819037d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8190380:	89 04 24             	mov    %eax,(%esp)
 8190383:	e8 16 9c 16 00       	call   82f9f9e <_ZN8WongWork14CAvatarItemMgr19GetEmblemReduceRateEi>
 8190388:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 819038c:	eb 0a                	jmp    8190398 <_ZN20AvatarRechargeServer20CalcDurabilityDetailEP5CUseriRSt6vectorIiSaIiEE+0xb0>
 819038e:	8b 45 08             	mov    0x8(%ebp),%eax
 8190391:	8b 40 54             	mov    0x54(%eax),%eax
 8190394:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 8190398:	66 83 7d f6 00       	cmpw   $0x0,-0xa(%ebp)
 819039d:	7e 6b                	jle    819040a <_ZN20AvatarRechargeServer20CalcDurabilityDetailEP5CUseriRSt6vectorIiSaIiEE+0x122>
 819039f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81903a2:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 81903a6:	66 85 c0             	test   %ax,%ax
 81903a9:	74 5f                	je     819040a <_ZN20AvatarRechargeServer20CalcDurabilityDetailEP5CUseriRSt6vectorIiSaIiEE+0x122>
 81903ab:	c7 04 24 e8 03 00 00 	movl   $0x3e8,(%esp)
 81903b2:	e8 d0 17 52 00       	call   86b1b87 <_Z12get_rand_inti>
 81903b7:	0f bf 55 f6          	movswl -0xa(%ebp),%edx
 81903bb:	39 d0                	cmp    %edx,%eax
 81903bd:	0f 9c c0             	setl   %al
 81903c0:	84 c0                	test   %al,%al
 81903c2:	74 46                	je     819040a <_ZN20AvatarRechargeServer20CalcDurabilityDetailEP5CUseriRSt6vectorIiSaIiEE+0x122>
 81903c4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81903c7:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 81903cb:	8d 50 ff             	lea    -0x1(%eax),%edx
 81903ce:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81903d1:	66 89 50 0f          	mov    %dx,0xf(%eax)
 81903d5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81903d8:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 81903dc:	0f b7 d0             	movzwl %ax,%edx
 81903df:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81903e2:	8b 40 07             	mov    0x7(%eax),%eax
 81903e5:	89 54 24 08          	mov    %edx,0x8(%esp)
 81903e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81903ed:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81903f0:	89 04 24             	mov    %eax,(%esp)
 81903f3:	e8 10 9c 16 00       	call   82fa008 <_ZN8WongWork14CAvatarItemMgr15UpdateEnduranceEii>
 81903f8:	8d 45 10             	lea    0x10(%ebp),%eax
 81903fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81903ff:	8b 45 14             	mov    0x14(%ebp),%eax
 8190402:	89 04 24             	mov    %eax,(%esp)
 8190405:	e8 1c 0d f8 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 819040a:	b8 01 00 00 00       	mov    $0x1,%eax
 819040f:	83 c4 24             	add    $0x24,%esp
 8190412:	5b                   	pop    %ebx
 8190413:	5d                   	pop    %ebp
 8190414:	c3                   	ret
 8190415:	90                   	nop

```

```c
// AvatarRechargeServer::CalcDurabilityDetail @ 0x81902e8

/* AvatarRechargeServer::CalcDurabilityDetail(CUser*, int, std::vector<int, std::allocator<int> >&)
    */

undefined4 __thiscall
AvatarRechargeServer::CalcDurabilityDetail
          (AvatarRechargeServer *this,CUser *param_1,int param_2,vector *param_3)

{
  bool bVar1;
  char cVar2;
  CInventory *pCVar3;
  Inven_Item *this_00;
  undefined4 uVar4;
  CAvatarItemMgr *this_01;
  int iVar5;
  short local_e;
  
  iVar5 = param_2;
  pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefW((CUserCharacInfo *)param_1);
  this_00 = (Inven_Item *)CInventory::GetInvenRef(pCVar3,0,iVar5);
  cVar2 = Inven_Item::isEmpty(this_00);
  if ((cVar2 == '\0') && (*(short *)(this_00 + 0xf) != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = 0;
  }
  else {
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    this_01 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrW(pCVar3);
    if (this[0x58] == (AvatarRechargeServer)0x1) {
      local_e = (short)*(undefined4 *)(this + 0x54);
    }
    else {
      local_e = WongWork::CAvatarItemMgr::GetEmblemReduceRate((int)this_01);
    }
    if ((0 < local_e) && (*(short *)(this_00 + 0xf) != 0)) {
      iVar5 = get_rand_int(1000);
      if (iVar5 < local_e) {
        *(short *)(this_00 + 0xf) = *(short *)(this_00 + 0xf) + -1;
        WongWork::CAvatarItemMgr::UpdateEndurance
                  (this_01,*(int *)(this_00 + 7),(uint)*(ushort *)(this_00 + 0xf));
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)param_3,&param_2);
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}

```

---

## CheckConditionUseRecharge

```asm
// === 081906e2 AvatarRechargeServer::CheckConditionUseRecharge  [0x081906e2-0x8190a6f] ===
 81906e2:	55                   	push   %ebp
 81906e3:	89 e5                	mov    %esp,%ebp
 81906e5:	53                   	push   %ebx
 81906e6:	83 ec 44             	sub    $0x44,%esp
 81906e9:	8b 45 10             	mov    0x10(%ebp),%eax
 81906ec:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 81906f0:	0f b7 d8             	movzwl %ax,%ebx
 81906f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81906f6:	89 04 24             	mov    %eax,(%esp)
 81906f9:	e8 80 9b f4 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81906fe:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8190702:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8190709:	00 
 819070a:	89 04 24             	mov    %eax,(%esp)
 819070d:	e8 cc ba 36 00       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 8190712:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8190715:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8190719:	74 0f                	je     819072a <_ZN20AvatarRechargeServer25CheckConditionUseRechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE+0x48>
 819071b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 819071e:	89 04 24             	mov    %eax,(%esp)
 8190721:	e8 40 e6 f8 ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 8190726:	84 c0                	test   %al,%al
 8190728:	74 07                	je     8190731 <_ZN20AvatarRechargeServer25CheckConditionUseRechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE+0x4f>
 819072a:	b8 01 00 00 00       	mov    $0x1,%eax
 819072f:	eb 05                	jmp    8190736 <_ZN20AvatarRechargeServer25CheckConditionUseRechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE+0x54>
 8190731:	b8 00 00 00 00       	mov    $0x0,%eax
 8190736:	84 c0                	test   %al,%al
 8190738:	74 46                	je     8190780 <_ZN20AvatarRechargeServer25CheckConditionUseRechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE+0x9e>
 819073a:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 8190741:	00 
 8190742:	c7 44 24 04 4d 02 00 	movl   $0x24d,0x4(%esp)
 8190749:	00 
 819074a:	8b 45 0c             	mov    0xc(%ebp),%eax
 819074d:	89 04 24             	mov    %eax,(%esp)
 8190750:	e8 ed b7 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8190755:	8b 45 10             	mov    0x10(%ebp),%eax
 8190758:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 819075c:	0f b7 c0             	movzwl %ax,%eax
 819075f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8190763:	8b 45 0c             	mov    0xc(%ebp),%eax
 8190766:	89 44 24 04          	mov    %eax,0x4(%esp)
 819076a:	c7 04 24 65 a3 b9 08 	movl   $0x8b9a365,(%esp)
 8190771:	e8 2e 74 00 00       	call   8197ba4 <_ZN4ARAD11PRINT_ERROR7isEmptyEPcP5CUsert>
 8190776:	b8 00 00 00 00       	mov    $0x0,%eax
 819077b:	e9 eb 02 00 00       	jmp    8190a6b <_ZN20AvatarRechargeServer25CheckConditionUseRechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE+0x389>
 8190780:	8b 45 08             	mov    0x8(%ebp),%eax
 8190783:	8d 50 08             	lea    0x8(%eax),%edx
 8190786:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8190789:	89 54 24 04          	mov    %edx,0x4(%esp)
 819078d:	89 04 24             	mov    %eax,(%esp)
 8190790:	e8 85 cb f3 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 8190795:	83 ec 04             	sub    $0x4,%esp
 8190798:	8b 45 ec             	mov    -0x14(%ebp),%eax
 819079b:	8b 40 02             	mov    0x2(%eax),%eax
 819079e:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81907a1:	8b 45 08             	mov    0x8(%ebp),%eax
 81907a4:	8d 48 08             	lea    0x8(%eax),%ecx
 81907a7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81907aa:	8d 55 e8             	lea    -0x18(%ebp),%edx
 81907ad:	89 54 24 08          	mov    %edx,0x8(%esp)
 81907b1:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81907b5:	89 04 24             	mov    %eax,(%esp)
 81907b8:	e8 31 cb f3 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 81907bd:	83 ec 04             	sub    $0x4,%esp
 81907c0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81907c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81907c7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81907ca:	89 04 24             	mov    %eax,(%esp)
 81907cd:	e8 1e 71 f3 ff       	call   80c78f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEeqERKS3_>
 81907d2:	84 c0                	test   %al,%al
 81907d4:	74 6a                	je     8190840 <_ZN20AvatarRechargeServer25CheckConditionUseRechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE+0x15e>
 81907d6:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 81907dd:	00 
 81907de:	c7 44 24 04 4d 02 00 	movl   $0x24d,0x4(%esp)
 81907e5:	00 
 81907e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81907e9:	89 04 24             	mov    %eax,(%esp)
 81907ec:	e8 51 b7 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81907f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81907f4:	89 04 24             	mov    %eax,(%esp)
 81907f7:	e8 52 b4 f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81907fc:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81907ff:	8b 52 02             	mov    0x2(%edx),%edx
 8190802:	89 44 24 18          	mov    %eax,0x18(%esp)
 8190806:	89 54 24 14          	mov    %edx,0x14(%esp)
 819080a:	c7 44 24 10 7c a3 b9 	movl   $0x8b9a37c,0x10(%esp)
 8190811:	08 
 8190812:	c7 44 24 0c ad 00 00 	movl   $0xad,0xc(%esp)
 8190819:	00 
 819081a:	c7 44 24 08 a0 b8 b9 	movl   $0x8b9b8a0,0x8(%esp)
 8190821:	08 
 8190822:	c7 44 24 04 c4 a3 b9 	movl   $0x8b9a3c4,0x4(%esp)
 8190829:	08 
 819082a:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8190831:	e8 d4 33 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8190836:	b8 00 00 00 00       	mov    $0x0,%eax
 819083b:	e9 2b 02 00 00       	jmp    8190a6b <_ZN20AvatarRechargeServer25CheckConditionUseRechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE+0x389>
 8190840:	8b 45 10             	mov    0x10(%ebp),%eax
 8190843:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8190847:	0f b7 c0             	movzwl %ax,%eax
 819084a:	89 44 24 08          	mov    %eax,0x8(%esp)
 819084e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8190855:	00 
 8190856:	8b 45 0c             	mov    0xc(%ebp),%eax
 8190859:	89 04 24             	mov    %eax,(%esp)
 819085c:	e8 e1 60 4b 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 8190861:	84 c0                	test   %al,%al
 8190863:	74 46                	je     81908ab <_ZN20AvatarRechargeServer25CheckConditionUseRechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE+0x1c9>
 8190865:	c7 44 24 08 d5 00 00 	movl   $0xd5,0x8(%esp)
 819086c:	00 
 819086d:	c7 44 24 04 4d 02 00 	movl   $0x24d,0x4(%esp)
 8190874:	00 
 8190875:	8b 45 0c             	mov    0xc(%ebp),%eax
 8190878:	89 04 24             	mov    %eax,(%esp)
 819087b:	e8 c2 b6 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8190880:	8b 45 10             	mov    0x10(%ebp),%eax
 8190883:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8190887:	0f b7 c0             	movzwl %ax,%eax
 819088a:	89 44 24 08          	mov    %eax,0x8(%esp)
 819088e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8190891:	89 44 24 04          	mov    %eax,0x4(%esp)
 8190895:	c7 04 24 65 a3 b9 08 	movl   $0x8b9a365,(%esp)
 819089c:	e8 5c 73 00 00       	call   8197bfd <_ZN4ARAD11PRINT_ERROR13CheckItemLockEPcP5CUsert>
 81908a1:	b8 00 00 00 00       	mov    $0x0,%eax
 81908a6:	e9 c0 01 00 00       	jmp    8190a6b <_ZN20AvatarRechargeServer25CheckConditionUseRechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE+0x389>
 81908ab:	8b 45 10             	mov    0x10(%ebp),%eax
 81908ae:	0f b7 00             	movzwl (%eax),%eax
 81908b1:	0f b7 d8             	movzwl %ax,%ebx
 81908b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81908b7:	89 04 24             	mov    %eax,(%esp)
 81908ba:	e8 bf 99 f4 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81908bf:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81908c3:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81908ca:	00 
 81908cb:	89 04 24             	mov    %eax,(%esp)
 81908ce:	e8 0b b9 36 00       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 81908d3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81908d6:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81908da:	74 0f                	je     81908eb <_ZN20AvatarRechargeServer25CheckConditionUseRechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE+0x209>
 81908dc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81908df:	89 04 24             	mov    %eax,(%esp)
 81908e2:	e8 7f e4 f8 ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 81908e7:	84 c0                	test   %al,%al
 81908e9:	74 07                	je     81908f2 <_ZN20AvatarRechargeServer25CheckConditionUseRechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE+0x210>
 81908eb:	b8 01 00 00 00       	mov    $0x1,%eax
 81908f0:	eb 05                	jmp    81908f7 <_ZN20AvatarRechargeServer25CheckConditionUseRechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE+0x215>
 81908f2:	b8 00 00 00 00       	mov    $0x0,%eax
 81908f7:	84 c0                	test   %al,%al
 81908f9:	74 45                	je     8190940 <_ZN20AvatarRechargeServer25CheckConditionUseRechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE+0x25e>
 81908fb:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 8190902:	00 
 8190903:	c7 44 24 04 4d 02 00 	movl   $0x24d,0x4(%esp)
 819090a:	00 
 819090b:	8b 45 0c             	mov    0xc(%ebp),%eax
 819090e:	89 04 24             	mov    %eax,(%esp)
 8190911:	e8 2c b6 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8190916:	8b 45 10             	mov    0x10(%ebp),%eax
 8190919:	0f b7 00             	movzwl (%eax),%eax
 819091c:	0f b7 c0             	movzwl %ax,%eax
 819091f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8190923:	8b 45 0c             	mov    0xc(%ebp),%eax
 8190926:	89 44 24 04          	mov    %eax,0x4(%esp)
 819092a:	c7 04 24 65 a3 b9 08 	movl   $0x8b9a365,(%esp)
 8190931:	e8 6e 72 00 00       	call   8197ba4 <_ZN4ARAD11PRINT_ERROR7isEmptyEPcP5CUsert>
 8190936:	b8 00 00 00 00       	mov    $0x0,%eax
 819093b:	e9 2b 01 00 00       	jmp    8190a6b <_ZN20AvatarRechargeServer25CheckConditionUseRechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE+0x389>
 8190940:	8b 45 10             	mov    0x10(%ebp),%eax
 8190943:	0f b7 00             	movzwl (%eax),%eax
 8190946:	0f b7 c0             	movzwl %ax,%eax
 8190949:	89 44 24 08          	mov    %eax,0x8(%esp)
 819094d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8190954:	00 
 8190955:	8b 45 0c             	mov    0xc(%ebp),%eax
 8190958:	89 04 24             	mov    %eax,(%esp)
 819095b:	e8 e2 5f 4b 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 8190960:	84 c0                	test   %al,%al
 8190962:	74 45                	je     81909a9 <_ZN20AvatarRechargeServer25CheckConditionUseRechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE+0x2c7>
 8190964:	c7 44 24 08 d5 00 00 	movl   $0xd5,0x8(%esp)
 819096b:	00 
 819096c:	c7 44 24 04 4d 02 00 	movl   $0x24d,0x4(%esp)
 8190973:	00 
 8190974:	8b 45 0c             	mov    0xc(%ebp),%eax
 8190977:	89 04 24             	mov    %eax,(%esp)
 819097a:	e8 c3 b5 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 819097f:	8b 45 10             	mov    0x10(%ebp),%eax
 8190982:	0f b7 00             	movzwl (%eax),%eax
 8190985:	0f b7 c0             	movzwl %ax,%eax
 8190988:	89 44 24 08          	mov    %eax,0x8(%esp)
 819098c:	8b 45 0c             	mov    0xc(%ebp),%eax
 819098f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8190993:	c7 04 24 65 a3 b9 08 	movl   $0x8b9a365,(%esp)
 819099a:	e8 5e 72 00 00       	call   8197bfd <_ZN4ARAD11PRINT_ERROR13CheckItemLockEPcP5CUsert>
 819099f:	b8 00 00 00 00       	mov    $0x0,%eax
 81909a4:	e9 c2 00 00 00       	jmp    8190a6b <_ZN20AvatarRechargeServer25CheckConditionUseRechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE+0x389>
 81909a9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81909ac:	8b 58 07             	mov    0x7(%eax),%ebx
 81909af:	8b 45 0c             	mov    0xc(%ebp),%eax
 81909b2:	89 04 24             	mov    %eax,(%esp)
 81909b5:	e8 c4 98 f4 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81909ba:	89 04 24             	mov    %eax,(%esp)
 81909bd:	e8 b4 cb f4 ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 81909c2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81909c6:	89 04 24             	mov    %eax,(%esp)
 81909c9:	e8 2a 8f 16 00       	call   82f98f8 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi>
 81909ce:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81909d1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81909d4:	89 04 24             	mov    %eax,(%esp)
 81909d7:	e8 bd fc ff ff       	call   8190699 <_ZL14getSocketCountPK20stAvatarEmblemInfo_t>
 81909dc:	8b 55 08             	mov    0x8(%ebp),%edx
 81909df:	8b 52 04             	mov    0x4(%edx),%edx
 81909e2:	0f af d0             	imul   %eax,%edx
 81909e5:	8b 45 10             	mov    0x10(%ebp),%eax
 81909e8:	89 50 08             	mov    %edx,0x8(%eax)
 81909eb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81909ee:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 81909f2:	0f b7 d0             	movzwl %ax,%edx
 81909f5:	8b 45 10             	mov    0x10(%ebp),%eax
 81909f8:	8b 40 08             	mov    0x8(%eax),%eax
 81909fb:	39 c2                	cmp    %eax,%edx
 81909fd:	7c 67                	jl     8190a66 <_ZN20AvatarRechargeServer25CheckConditionUseRechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE+0x384>
 81909ff:	c7 44 24 08 d8 00 00 	movl   $0xd8,0x8(%esp)
 8190a06:	00 
 8190a07:	c7 44 24 04 4d 02 00 	movl   $0x24d,0x4(%esp)
 8190a0e:	00 
 8190a0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8190a12:	89 04 24             	mov    %eax,(%esp)
 8190a15:	e8 28 b5 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8190a1a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8190a1d:	89 04 24             	mov    %eax,(%esp)
 8190a20:	e8 29 b2 f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8190a25:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8190a28:	8b 52 07             	mov    0x7(%edx),%edx
 8190a2b:	89 44 24 18          	mov    %eax,0x18(%esp)
 8190a2f:	89 54 24 14          	mov    %edx,0x14(%esp)
 8190a33:	c7 44 24 10 ec a3 b9 	movl   $0x8b9a3ec,0x10(%esp)
 8190a3a:	08 
 8190a3b:	c7 44 24 0c cd 00 00 	movl   $0xcd,0xc(%esp)
 8190a42:	00 
 8190a43:	c7 44 24 08 a0 b8 b9 	movl   $0x8b9b8a0,0x8(%esp)
 8190a4a:	08 
 8190a4b:	c7 44 24 04 c4 a3 b9 	movl   $0x8b9a3c4,0x4(%esp)
 8190a52:	08 
 8190a53:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8190a5a:	e8 ab 31 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8190a5f:	b8 00 00 00 00       	mov    $0x0,%eax
 8190a64:	eb 05                	jmp    8190a6b <_ZN20AvatarRechargeServer25CheckConditionUseRechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE+0x389>
 8190a66:	b8 01 00 00 00       	mov    $0x1,%eax
 8190a6b:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8190a6e:	c9                   	leave
 8190a6f:	c3                   	ret

```

```c
// AvatarRechargeServer::CheckConditionUseRecharge @ 0x81906e2

/* AvatarRechargeServer::CheckConditionUseRecharge(CUser*, arad::SigAradUseAvatarRecharge*) */

undefined4 __thiscall
AvatarRechargeServer::CheckConditionUseRecharge
          (AvatarRechargeServer *this,CUser *param_1,SigAradUseAvatarRecharge *param_2)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  CInventory *pCVar4;
  undefined4 uVar5;
  CAvatarItemMgr *this_00;
  int iVar6;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_24 [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_20 [4];
  undefined4 local_1c;
  Inven_Item *local_18;
  Inven_Item *local_14;
  stAvatarEmblemInfo_t *local_10;
  
  uVar1 = *(ushort *)(param_2 + 2);
  pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  local_18 = (Inven_Item *)CInventory::GetInvenRef(pCVar4,1,(uint)uVar1);
  if ((local_18 == (Inven_Item *)0x0) || (cVar3 = Inven_Item::isEmpty(local_18), cVar3 != '\0')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    CUser::SendCmdErrorPacket(param_1,0x24d,0x16);
    ARAD::PRINT_ERROR::isEmpty("USE AVATAR RECHANGE",param_1,*(ushort *)(param_2 + 2));
    return 0;
  }
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_24);
  local_1c = *(undefined4 *)(local_18 + 2);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_20);
  cVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                    (local_20,(_Rb_tree_iterator *)local_24);
  if (cVar3 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0x24d,0x11);
    uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    LogManager::logFormat
              (1,"localjapan/Arad_EmblemReformServer.cpp",
               "bool AvatarRechargeServer::CheckConditionUseRecharge(CUser*, arad::SigAradUseAvatarRecharge*)"
               ,0xad,"USE AVATAR RECHANGE : [item_id:%d] isn\'t RechargeStone [charac_no:%d]",
               *(undefined4 *)(local_18 + 2),uVar5);
    return 0;
  }
  cVar3 = CUser::CheckItemLock(param_1,1,(uint)*(ushort *)(param_2 + 2));
  if (cVar3 == '\0') {
    uVar1 = *(ushort *)param_2;
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    local_14 = (Inven_Item *)CInventory::GetInvenRef(pCVar4,2,(uint)uVar1);
    if ((local_14 == (Inven_Item *)0x0) || (cVar3 = Inven_Item::isEmpty(local_14), cVar3 != '\0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      CUser::SendCmdErrorPacket(param_1,0x24d,0x16);
      ARAD::PRINT_ERROR::isEmpty("USE AVATAR RECHANGE",param_1,*(ushort *)param_2);
      uVar5 = 0;
    }
    else {
      cVar3 = CUser::CheckItemLock(param_1,1,(uint)*(ushort *)param_2);
      if (cVar3 == '\0') {
        iVar6 = *(int *)(local_14 + 7);
        pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        this_00 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar4);
        local_10 = (stAvatarEmblemInfo_t *)
                   WongWork::CAvatarItemMgr::getJewelSocketData(this_00,iVar6);
        iVar6 = getSocketCount(local_10);
        *(int *)(param_2 + 8) = *(int *)(this + 4) * iVar6;
        if ((int)(uint)*(ushort *)(local_14 + 0xf) < *(int *)(param_2 + 8)) {
          uVar5 = 1;
        }
        else {
          CUser::SendCmdErrorPacket(param_1,0x24d,0xd8);
          uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          LogManager::logFormat
                    (1,"localjapan/Arad_EmblemReformServer.cpp",
                     "bool AvatarRechargeServer::CheckConditionUseRecharge(CUser*, arad::SigAradUseAvatarRecharge*)"
                     ,0xcd,"USE AVATAR RECHANGE : already max endurance [ui_id:%d] [charac_no:%d]",
                     *(undefined4 *)(local_14 + 7),uVar5);
          uVar5 = 0;
        }
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x24d,0xd5);
        ARAD::PRINT_ERROR::CheckItemLock("USE AVATAR RECHANGE",param_1,*(ushort *)param_2);
        uVar5 = 0;
      }
    }
    return uVar5;
  }
  CUser::SendCmdErrorPacket(param_1,0x24d,0xd5);
  ARAD::PRINT_ERROR::CheckItemLock("USE AVATAR RECHANGE",param_1,*(ushort *)(param_2 + 2));
  return 0;
}

```

---

## Destroy

```asm
// === 081902de AvatarRechargeServer::Destroy  [0x081902de-0x81902e7] ===
 81902de:	55                   	push   %ebp
 81902df:	89 e5                	mov    %esp,%ebp
 81902e1:	b8 01 00 00 00       	mov    $0x1,%eax
 81902e6:	5d                   	pop    %ebp
 81902e7:	c3                   	ret

```

```c
// AvatarRechargeServer::Destroy @ 0x81902de

/* AvatarRechargeServer::Destroy() */

undefined4 AvatarRechargeServer::Destroy(void)

{
  return 1;
}

```

---

## GetRateFromEmblemGrade

```asm
// === 0819114c AvatarRechargeServer::GetRateFromEmblemGrade  [0x0819114c-0x81911b5] ===
 819114c:	55                   	push   %ebp
 819114d:	89 e5                	mov    %esp,%ebp
 819114f:	83 ec 28             	sub    $0x28,%esp
 8191152:	8b 45 08             	mov    0x8(%ebp),%eax
 8191155:	8d 48 38             	lea    0x38(%eax),%ecx
 8191158:	8d 45 f0             	lea    -0x10(%ebp),%eax
 819115b:	8d 55 0c             	lea    0xc(%ebp),%edx
 819115e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8191162:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8191166:	89 04 24             	mov    %eax,(%esp)
 8191169:	e8 80 c1 f3 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 819116e:	83 ec 04             	sub    $0x4,%esp
 8191171:	8b 45 08             	mov    0x8(%ebp),%eax
 8191174:	8d 50 38             	lea    0x38(%eax),%edx
 8191177:	8d 45 f4             	lea    -0xc(%ebp),%eax
 819117a:	89 54 24 04          	mov    %edx,0x4(%esp)
 819117e:	89 04 24             	mov    %eax,(%esp)
 8191181:	e8 94 c1 f3 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 8191186:	83 ec 04             	sub    $0x4,%esp
 8191189:	8d 45 f4             	lea    -0xc(%ebp),%eax
 819118c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8191190:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8191193:	89 04 24             	mov    %eax,(%esp)
 8191196:	e8 2d 92 f4 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 819119b:	84 c0                	test   %al,%al
 819119d:	74 10                	je     81911af <_ZN20AvatarRechargeServer22GetRateFromEmblemGradeEi+0x63>
 819119f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81911a2:	89 04 24             	mov    %eax,(%esp)
 81911a5:	e8 96 c1 f3 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 81911aa:	8b 40 04             	mov    0x4(%eax),%eax
 81911ad:	eb 05                	jmp    81911b4 <_ZN20AvatarRechargeServer22GetRateFromEmblemGradeEi+0x68>
 81911af:	b8 00 00 00 00       	mov    $0x0,%eax
 81911b4:	c9                   	leave
 81911b5:	c3                   	ret

```

```c
// AvatarRechargeServer::GetRateFromEmblemGrade @ 0x819114c

/* AvatarRechargeServer::GetRateFromEmblemGrade(int) */

undefined4 AvatarRechargeServer::GetRateFromEmblemGrade(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## GmChangeEnduranceReduceRate

```asm
// === 08191318 AvatarRechargeServer::GmChangeEnduranceReduceRate  [0x08191318-0x8191363] ===
 8191318:	55                   	push   %ebp
 8191319:	89 e5                	mov    %esp,%ebp
 819131b:	53                   	push   %ebx
 819131c:	83 ec 24             	sub    $0x24,%esp
 819131f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8191322:	88 45 f4             	mov    %al,-0xc(%ebp)
 8191325:	8b 45 08             	mov    0x8(%ebp),%eax
 8191328:	89 04 24             	mov    %eax,(%esp)
 819132b:	e8 6c 45 fb ff       	call   814589c <_ZN5CUser8isGMUserEv>
 8191330:	83 f0 01             	xor    $0x1,%eax
 8191333:	84 c0                	test   %al,%al
 8191335:	75 25                	jne    819135c <_ZN20AvatarRechargeServer27GmChangeEnduranceReduceRateEP5CUserbi+0x44>
 8191337:	0f b6 5d f4          	movzbl -0xc(%ebp),%ebx
 819133b:	e8 62 22 00 00       	call   81935a2 <_ZN4ARAD9SingletonI20AvatarRechargeServerE3GetEv>
 8191340:	8b 55 10             	mov    0x10(%ebp),%edx
 8191343:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8191347:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 819134b:	8b 55 08             	mov    0x8(%ebp),%edx
 819134e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8191352:	89 04 24             	mov    %eax,(%esp)
 8191355:	e8 0a 00 00 00       	call   8191364 <_ZN20AvatarRechargeServer24GmSetEnduranceReduceRateEP5CUserbi>
 819135a:	eb 01                	jmp    819135d <_ZN20AvatarRechargeServer27GmChangeEnduranceReduceRateEP5CUserbi+0x45>
 819135c:	90                   	nop
 819135d:	83 c4 24             	add    $0x24,%esp
 8191360:	5b                   	pop    %ebx
 8191361:	5d                   	pop    %ebp
 8191362:	c3                   	ret
 8191363:	90                   	nop

```

```c
// AvatarRechargeServer::GmChangeEnduranceReduceRate @ 0x8191318

/* AvatarRechargeServer::GmChangeEnduranceReduceRate(CUser*, bool, int) */

void AvatarRechargeServer::GmChangeEnduranceReduceRate(CUser *param_1,bool param_2,int param_3)

{
  char cVar1;
  AvatarRechargeServer *this;
  
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 == '\x01') {
    this = (AvatarRechargeServer *)ARAD::Singleton<AvatarRechargeServer>::Get();
    GmSetEnduranceReduceRate(this,param_1,param_2,param_3);
  }
  return;
}

```

---

## GmReduceEndurance

```asm
// === 081911b6 AvatarRechargeServer::GmReduceEndurance  [0x081911b6-0x8191317] ===
 81911b6:	55                   	push   %ebp
 81911b7:	89 e5                	mov    %esp,%ebp
 81911b9:	53                   	push   %ebx
 81911ba:	83 ec 44             	sub    $0x44,%esp
 81911bd:	8b 55 0c             	mov    0xc(%ebp),%edx
 81911c0:	8b 45 10             	mov    0x10(%ebp),%eax
 81911c3:	66 89 55 d4          	mov    %dx,-0x2c(%ebp)
 81911c7:	66 89 45 d0          	mov    %ax,-0x30(%ebp)
 81911cb:	66 83 7d d4 00       	cmpw   $0x0,-0x2c(%ebp)
 81911d0:	0f 88 34 01 00 00    	js     819130a <_ZN20AvatarRechargeServer17GmReduceEnduranceEP5CUserss+0x154>
 81911d6:	66 83 7d d4 09       	cmpw   $0x9,-0x2c(%ebp)
 81911db:	0f 8f 2c 01 00 00    	jg     819130d <_ZN20AvatarRechargeServer17GmReduceEnduranceEP5CUserss+0x157>
 81911e1:	0f bf 5d d4          	movswl -0x2c(%ebp),%ebx
 81911e5:	8b 45 08             	mov    0x8(%ebp),%eax
 81911e8:	89 04 24             	mov    %eax,(%esp)
 81911eb:	e8 9e 90 f4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81911f0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81911f4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81911fb:	00 
 81911fc:	89 04 24             	mov    %eax,(%esp)
 81911ff:	e8 aa b0 36 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 8191204:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8191207:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 819120b:	74 0f                	je     819121c <_ZN20AvatarRechargeServer17GmReduceEnduranceEP5CUserss+0x66>
 819120d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8191210:	89 04 24             	mov    %eax,(%esp)
 8191213:	e8 4e db f8 ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 8191218:	84 c0                	test   %al,%al
 819121a:	74 07                	je     8191223 <_ZN20AvatarRechargeServer17GmReduceEnduranceEP5CUserss+0x6d>
 819121c:	b8 01 00 00 00       	mov    $0x1,%eax
 8191221:	eb 05                	jmp    8191228 <_ZN20AvatarRechargeServer17GmReduceEnduranceEP5CUserss+0x72>
 8191223:	b8 00 00 00 00       	mov    $0x0,%eax
 8191228:	84 c0                	test   %al,%al
 819122a:	0f 85 e0 00 00 00    	jne    8191310 <_ZN20AvatarRechargeServer17GmReduceEnduranceEP5CUserss+0x15a>
 8191230:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8191233:	8b 58 07             	mov    0x7(%eax),%ebx
 8191236:	8b 45 08             	mov    0x8(%ebp),%eax
 8191239:	89 04 24             	mov    %eax,(%esp)
 819123c:	e8 3d 90 f4 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8191241:	89 04 24             	mov    %eax,(%esp)
 8191244:	e8 2d c3 f4 ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 8191249:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 819124d:	89 04 24             	mov    %eax,(%esp)
 8191250:	e8 a3 86 16 00       	call   82f98f8 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi>
 8191255:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8191258:	8b 45 e8             	mov    -0x18(%ebp),%eax
 819125b:	89 04 24             	mov    %eax,(%esp)
 819125e:	e8 36 f4 ff ff       	call   8190699 <_ZL14getSocketCountPK20stAvatarEmblemInfo_t>
 8191263:	89 c3                	mov    %eax,%ebx
 8191265:	e8 38 23 00 00       	call   81935a2 <_ZN4ARAD9SingletonI20AvatarRechargeServerE3GetEv>
 819126a:	83 c0 04             	add    $0x4,%eax
 819126d:	89 04 24             	mov    %eax,(%esp)
 8191270:	e8 9f 00 72 00       	call   88b1314 <_ZN4ARAD6SCRIPT14AvatarRecharge23getAvatarRecharageLimitEv>
 8191275:	0f af c3             	imul   %ebx,%eax
 8191278:	89 45 ec             	mov    %eax,-0x14(%ebp)
 819127b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 819127e:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 8191282:	0f b7 d0             	movzwl %ax,%edx
 8191285:	0f bf 45 d0          	movswl -0x30(%ebp),%eax
 8191289:	8d 04 02             	lea    (%edx,%eax,1),%eax
 819128c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 819128f:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8191293:	79 09                	jns    819129e <_ZN20AvatarRechargeServer17GmReduceEnduranceEP5CUserss+0xe8>
 8191295:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 819129c:	eb 0e                	jmp    81912ac <_ZN20AvatarRechargeServer17GmReduceEnduranceEP5CUserss+0xf6>
 819129e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81912a1:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 81912a4:	7e 06                	jle    81912ac <_ZN20AvatarRechargeServer17GmReduceEnduranceEP5CUserss+0xf6>
 81912a6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81912a9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81912ac:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81912af:	89 c2                	mov    %eax,%edx
 81912b1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81912b4:	66 89 50 0f          	mov    %dx,0xf(%eax)
 81912b8:	0f bf 45 d4          	movswl -0x2c(%ebp),%eax
 81912bc:	89 44 24 08          	mov    %eax,0x8(%esp)
 81912c0:	8b 45 08             	mov    0x8(%ebp),%eax
 81912c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81912c7:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81912ce:	e8 23 01 00 00       	call   81913f6 <_ZN20AvatarRechargeServer21UpdateAvatarEnduranceEN5CUser11eSendTargetEPS0_s>
 81912d3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81912d6:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 81912da:	0f b7 d0             	movzwl %ax,%edx
 81912dd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81912e0:	8b 40 07             	mov    0x7(%eax),%eax
 81912e3:	89 54 24 04          	mov    %edx,0x4(%esp)
 81912e7:	89 04 24             	mov    %eax,(%esp)
 81912ea:	e8 bf fb ff ff       	call   8190eae <_ZN20AvatarRechargeServer23SaveAvatarEnduranceUnitEii>
 81912ef:	c7 45 f4 25 a5 b9 08 	movl   $0x8b9a525,-0xc(%ebp)
 81912f6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81912f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81912fd:	8b 45 08             	mov    0x8(%ebp),%eax
 8191300:	89 04 24             	mov    %eax,(%esp)
 8191303:	e8 f8 69 00 00       	call   8197d00 <_ZN4ARAD19notifySystemMessageEP5CUserPc>
 8191308:	eb 07                	jmp    8191311 <_ZN20AvatarRechargeServer17GmReduceEnduranceEP5CUserss+0x15b>
 819130a:	90                   	nop
 819130b:	eb 04                	jmp    8191311 <_ZN20AvatarRechargeServer17GmReduceEnduranceEP5CUserss+0x15b>
 819130d:	90                   	nop
 819130e:	eb 01                	jmp    8191311 <_ZN20AvatarRechargeServer17GmReduceEnduranceEP5CUserss+0x15b>
 8191310:	90                   	nop
 8191311:	83 c4 44             	add    $0x44,%esp
 8191314:	5b                   	pop    %ebx
 8191315:	5d                   	pop    %ebp
 8191316:	c3                   	ret
 8191317:	90                   	nop

```

```c
// AvatarRechargeServer::GmReduceEndurance @ 0x81911b6

/* AvatarRechargeServer::GmReduceEndurance(CUser*, short, short) */

void AvatarRechargeServer::GmReduceEndurance(CUser *param_1,short param_2,short param_3)

{
  bool bVar1;
  char cVar2;
  CInventory *pCVar3;
  Inven_Item *this;
  CAvatarItemMgr *this_00;
  stAvatarEmblemInfo_t *psVar4;
  int iVar5;
  int iVar6;
  int local_14;
  
  if ((-1 < param_2) && (param_2 < 10)) {
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    this = (Inven_Item *)CInventory::GetInvenRef(pCVar3,0,(int)param_2);
    if ((this == (Inven_Item *)0x0) || (cVar2 = Inven_Item::isEmpty(this), cVar2 != '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      iVar5 = *(int *)(this + 7);
      pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      this_00 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar3);
      psVar4 = (stAvatarEmblemInfo_t *)WongWork::CAvatarItemMgr::getJewelSocketData(this_00,iVar5);
      iVar5 = getSocketCount(psVar4);
      iVar6 = ARAD::Singleton<AvatarRechargeServer>::Get();
      iVar6 = ARAD::SCRIPT::AvatarRecharge::getAvatarRecharageLimit((AvatarRecharge *)(iVar6 + 4));
      local_14 = (uint)*(ushort *)(this + 0xf) + (int)param_3;
      if (local_14 < 0) {
        local_14 = 0;
      }
      else if (iVar6 * iVar5 < local_14) {
        local_14 = iVar6 * iVar5;
      }
      *(short *)(this + 0xf) = (short)local_14;
      UpdateAvatarEndurance(1,param_1,(int)param_2);
      SaveAvatarEnduranceUnit(*(int *)(this + 7),(uint)*(ushort *)(this + 0xf));
      ARAD::notifySystemMessage(param_1,"succ avatar Endurance change");
    }
  }
  return;
}

```

---

## GmSetEnduranceReduceRate

```asm
// === 08191364 AvatarRechargeServer::GmSetEnduranceReduceRate  [0x08191364-0x81913f5] ===
 8191364:	55                   	push   %ebp
 8191365:	89 e5                	mov    %esp,%ebp
 8191367:	83 ec 38             	sub    $0x38,%esp
 819136a:	8b 45 10             	mov    0x10(%ebp),%eax
 819136d:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8191370:	8b 45 08             	mov    0x8(%ebp),%eax
 8191373:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 8191377:	88 50 58             	mov    %dl,0x58(%eax)
 819137a:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 819137e:	74 51                	je     81913d1 <_ZN20AvatarRechargeServer24GmSetEnduranceReduceRateEP5CUserbi+0x6d>
 8191380:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8191384:	79 09                	jns    819138f <_ZN20AvatarRechargeServer24GmSetEnduranceReduceRateEP5CUserbi+0x2b>
 8191386:	c7 45 14 00 00 00 00 	movl   $0x0,0x14(%ebp)
 819138d:	eb 1e                	jmp    81913ad <_ZN20AvatarRechargeServer24GmSetEnduranceReduceRateEP5CUserbi+0x49>
 819138f:	83 7d 14 64          	cmpl   $0x64,0x14(%ebp)
 8191393:	7e 09                	jle    819139e <_ZN20AvatarRechargeServer24GmSetEnduranceReduceRateEP5CUserbi+0x3a>
 8191395:	c7 45 14 e8 03 00 00 	movl   $0x3e8,0x14(%ebp)
 819139c:	eb 0f                	jmp    81913ad <_ZN20AvatarRechargeServer24GmSetEnduranceReduceRateEP5CUserbi+0x49>
 819139e:	8b 55 14             	mov    0x14(%ebp),%edx
 81913a1:	89 d0                	mov    %edx,%eax
 81913a3:	c1 e0 02             	shl    $0x2,%eax
 81913a6:	01 d0                	add    %edx,%eax
 81913a8:	01 c0                	add    %eax,%eax
 81913aa:	89 45 14             	mov    %eax,0x14(%ebp)
 81913ad:	8b 45 08             	mov    0x8(%ebp),%eax
 81913b0:	8b 55 14             	mov    0x14(%ebp),%edx
 81913b3:	89 50 54             	mov    %edx,0x54(%eax)
 81913b6:	c7 45 f0 44 a5 b9 08 	movl   $0x8b9a544,-0x10(%ebp)
 81913bd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81913c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81913c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81913c7:	89 04 24             	mov    %eax,(%esp)
 81913ca:	e8 31 69 00 00       	call   8197d00 <_ZN4ARAD19notifySystemMessageEP5CUserPc>
 81913cf:	eb 23                	jmp    81913f4 <_ZN20AvatarRechargeServer24GmSetEnduranceReduceRateEP5CUserbi+0x90>
 81913d1:	8b 45 08             	mov    0x8(%ebp),%eax
 81913d4:	c7 40 54 00 00 00 00 	movl   $0x0,0x54(%eax)
 81913db:	c7 45 f4 7c a5 b9 08 	movl   $0x8b9a57c,-0xc(%ebp)
 81913e2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81913e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81913e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81913ec:	89 04 24             	mov    %eax,(%esp)
 81913ef:	e8 0c 69 00 00       	call   8197d00 <_ZN4ARAD19notifySystemMessageEP5CUserPc>
 81913f4:	c9                   	leave
 81913f5:	c3                   	ret

```

```c
// AvatarRechargeServer::GmSetEnduranceReduceRate @ 0x8191364

/* AvatarRechargeServer::GmSetEnduranceReduceRate(CUser*, bool, int) */

void __thiscall
AvatarRechargeServer::GmSetEnduranceReduceRate
          (AvatarRechargeServer *this,CUser *param_1,bool param_2,int param_3)

{
  this[0x58] = (AvatarRechargeServer)param_2;
  if (param_2) {
    if (param_3 < 0) {
      param_3 = 0;
    }
    else if (param_3 < 0x65) {
      param_3 = param_3 * 10;
    }
    else {
      param_3 = 1000;
    }
    *(int *)(this + 0x54) = param_3;
    ARAD::notifySystemMessage(param_1,"succ avatar Endurance reduce rate mode on! change rate");
  }
  else {
    *(undefined4 *)(this + 0x54) = 0;
    ARAD::notifySystemMessage(param_1,"avatar Endurance reduce rate mode off");
  }
  return;
}

```

---

## Load

```asm
// === 0819026c AvatarRechargeServer::Load  [0x0819026c-0x81902dd] ===
 819026c:	55                   	push   %ebp
 819026d:	89 e5                	mov    %esp,%ebp
 819026f:	83 ec 38             	sub    $0x38,%esp
 8190272:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8190279:	00 
 819027a:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8190281:	00 
 8190282:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 8190289:	00 
 819028a:	c7 44 24 08 22 00 00 	movl   $0x22,0x8(%esp)
 8190291:	00 
 8190292:	c7 44 24 04 00 b9 b9 	movl   $0x8b9b900,0x4(%esp)
 8190299:	08 
 819029a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819029d:	89 04 24             	mov    %eax,(%esp)
 81902a0:	e8 a1 f4 3b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 81902a5:	c7 44 24 04 40 a3 b9 	movl   $0x8b9a340,0x4(%esp)
 81902ac:	08 
 81902ad:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81902b0:	89 04 24             	mov    %eax,(%esp)
 81902b3:	e8 d0 f4 3b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81902b8:	8b 45 08             	mov    0x8(%ebp),%eax
 81902bb:	83 c0 04             	add    $0x4,%eax
 81902be:	89 04 24             	mov    %eax,(%esp)
 81902c1:	e8 f4 0b 72 00       	call   88b0eba <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv>
 81902c6:	85 c0                	test   %eax,%eax
 81902c8:	0f 95 c0             	setne  %al
 81902cb:	84 c0                	test   %al,%al
 81902cd:	74 07                	je     81902d6 <_ZN20AvatarRechargeServer4LoadEv+0x6a>
 81902cf:	b8 00 00 00 00       	mov    $0x0,%eax
 81902d4:	eb 05                	jmp    81902db <_ZN20AvatarRechargeServer4LoadEv+0x6f>
 81902d6:	b8 01 00 00 00       	mov    $0x1,%eax
 81902db:	c9                   	leave
 81902dc:	c3                   	ret
 81902dd:	90                   	nop

```

```c
// AvatarRechargeServer::Load @ 0x819026c

/* AvatarRechargeServer::Load() */

bool __thiscall AvatarRechargeServer::Load(AvatarRechargeServer *this)

{
  int iVar1;
  cMyTrace local_1c [24];
  
  cMyTrace::cMyTrace(local_1c,"virtual bool AvatarRechargeServer::Load()",0x22,9,true,false);
  cMyTrace::operator()(local_1c,"\t- Loading Avatar Recharge script - ");
  iVar1 = ARAD::SCRIPT::AvatarRecharge::loadScript((AvatarRecharge *)(this + 4));
  return iVar1 == 0;
}

```

---

## Recharge

```asm
// === 08190a70 AvatarRechargeServer::Recharge  [0x08190a70-0x8190de9] ===
 8190a70:	55                   	push   %ebp
 8190a71:	89 e5                	mov    %esp,%ebp
 8190a73:	57                   	push   %edi
 8190a74:	56                   	push   %esi
 8190a75:	53                   	push   %ebx
 8190a76:	83 ec 7c             	sub    $0x7c,%esp
 8190a79:	8b 45 10             	mov    0x10(%ebp),%eax
 8190a7c:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8190a80:	0f b7 d8             	movzwl %ax,%ebx
 8190a83:	8b 45 0c             	mov    0xc(%ebp),%eax
 8190a86:	89 04 24             	mov    %eax,(%esp)
 8190a89:	e8 f0 97 f4 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8190a8e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8190a92:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8190a99:	00 
 8190a9a:	89 04 24             	mov    %eax,(%esp)
 8190a9d:	e8 3c b7 36 00       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 8190aa2:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8190aa5:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8190aa8:	8b 40 02             	mov    0x2(%eax),%eax
 8190aab:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8190aae:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 8190ab2:	74 0f                	je     8190ac3 <_ZN20AvatarRechargeServer8RechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE+0x53>
 8190ab4:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8190ab7:	89 04 24             	mov    %eax,(%esp)
 8190aba:	e8 a7 e2 f8 ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 8190abf:	84 c0                	test   %al,%al
 8190ac1:	74 07                	je     8190aca <_ZN20AvatarRechargeServer8RechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE+0x5a>
 8190ac3:	b8 01 00 00 00       	mov    $0x1,%eax
 8190ac8:	eb 05                	jmp    8190acf <_ZN20AvatarRechargeServer8RechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE+0x5f>
 8190aca:	b8 00 00 00 00       	mov    $0x0,%eax
 8190acf:	84 c0                	test   %al,%al
 8190ad1:	74 46                	je     8190b19 <_ZN20AvatarRechargeServer8RechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE+0xa9>
 8190ad3:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 8190ada:	00 
 8190adb:	c7 44 24 04 4d 02 00 	movl   $0x24d,0x4(%esp)
 8190ae2:	00 
 8190ae3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8190ae6:	89 04 24             	mov    %eax,(%esp)
 8190ae9:	e8 54 b4 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8190aee:	8b 45 10             	mov    0x10(%ebp),%eax
 8190af1:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8190af5:	0f b7 c0             	movzwl %ax,%eax
 8190af8:	89 44 24 08          	mov    %eax,0x8(%esp)
 8190afc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8190aff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8190b03:	c7 04 24 65 a3 b9 08 	movl   $0x8b9a365,(%esp)
 8190b0a:	e8 95 70 00 00       	call   8197ba4 <_ZN4ARAD11PRINT_ERROR7isEmptyEPcP5CUsert>
 8190b0f:	b8 00 00 00 00       	mov    $0x0,%eax
 8190b14:	e9 c8 02 00 00       	jmp    8190de1 <_ZN20AvatarRechargeServer8RechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE+0x371>
 8190b19:	8b 45 10             	mov    0x10(%ebp),%eax
 8190b1c:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8190b20:	0f b7 d8             	movzwl %ax,%ebx
 8190b23:	8b 45 0c             	mov    0xc(%ebp),%eax
 8190b26:	89 04 24             	mov    %eax,(%esp)
 8190b29:	e8 60 97 f4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8190b2e:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8190b35:	00 
 8190b36:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 8190b3d:	00 
 8190b3e:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8190b45:	00 
 8190b46:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8190b4a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8190b51:	00 
 8190b52:	89 04 24             	mov    %eax,(%esp)
 8190b55:	e8 b2 34 37 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 8190b5a:	83 f0 01             	xor    $0x1,%eax
 8190b5d:	84 c0                	test   %al,%al
 8190b5f:	74 46                	je     8190ba7 <_ZN20AvatarRechargeServer8RechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE+0x137>
 8190b61:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 8190b68:	00 
 8190b69:	c7 44 24 04 4d 02 00 	movl   $0x24d,0x4(%esp)
 8190b70:	00 
 8190b71:	8b 45 0c             	mov    0xc(%ebp),%eax
 8190b74:	89 04 24             	mov    %eax,(%esp)
 8190b77:	e8 c6 b3 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8190b7c:	8b 45 10             	mov    0x10(%ebp),%eax
 8190b7f:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8190b83:	0f b7 c0             	movzwl %ax,%eax
 8190b86:	89 44 24 08          	mov    %eax,0x8(%esp)
 8190b8a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8190b8d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8190b91:	c7 04 24 65 a3 b9 08 	movl   $0x8b9a365,(%esp)
 8190b98:	e8 b9 70 00 00       	call   8197c56 <_ZN4ARAD11PRINT_ERROR11delete_itemEPcP5CUsert>
 8190b9d:	b8 00 00 00 00       	mov    $0x0,%eax
 8190ba2:	e9 3a 02 00 00       	jmp    8190de1 <_ZN20AvatarRechargeServer8RechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE+0x371>
 8190ba7:	8b 45 10             	mov    0x10(%ebp),%eax
 8190baa:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8190bae:	0f b7 c0             	movzwl %ax,%eax
 8190bb1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8190bb5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8190bbc:	00 
 8190bbd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8190bc4:	00 
 8190bc5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8190bc8:	89 04 24             	mov    %eax,(%esp)
 8190bcb:	e8 8a ba 4e 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 8190bd0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8190bd3:	89 04 24             	mov    %eax,(%esp)
 8190bd6:	e8 73 b0 f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8190bdb:	89 c3                	mov    %eax,%ebx
 8190bdd:	8b 45 10             	mov    0x10(%ebp),%eax
 8190be0:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8190be4:	0f b7 f0             	movzwl %ax,%esi
 8190be7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8190bee:	00 
 8190bef:	c7 44 24 08 e8 00 00 	movl   $0xe8,0x8(%esp)
 8190bf6:	00 
 8190bf7:	c7 44 24 04 40 b8 b9 	movl   $0x8b9b840,0x4(%esp)
 8190bfe:	08 
 8190bff:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8190c02:	89 04 24             	mov    %eax,(%esp)
 8190c05:	e8 0e eb 3b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8190c0a:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8190c0e:	89 74 24 08          	mov    %esi,0x8(%esp)
 8190c12:	c7 44 24 04 34 a4 b9 	movl   $0x8b9a434,0x4(%esp)
 8190c19:	08 
 8190c1a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8190c1d:	89 04 24             	mov    %eax,(%esp)
 8190c20:	e8 63 eb 3b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8190c25:	8b 45 10             	mov    0x10(%ebp),%eax
 8190c28:	0f b7 00             	movzwl (%eax),%eax
 8190c2b:	0f b7 d8             	movzwl %ax,%ebx
 8190c2e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8190c31:	89 04 24             	mov    %eax,(%esp)
 8190c34:	e8 55 96 f4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8190c39:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8190c3d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8190c44:	00 
 8190c45:	89 04 24             	mov    %eax,(%esp)
 8190c48:	e8 61 b6 36 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 8190c4d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8190c50:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8190c53:	89 04 24             	mov    %eax,(%esp)
 8190c56:	e8 0b e1 f8 ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 8190c5b:	84 c0                	test   %al,%al
 8190c5d:	74 45                	je     8190ca4 <_ZN20AvatarRechargeServer8RechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE+0x234>
 8190c5f:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 8190c66:	00 
 8190c67:	c7 44 24 04 4d 02 00 	movl   $0x24d,0x4(%esp)
 8190c6e:	00 
 8190c6f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8190c72:	89 04 24             	mov    %eax,(%esp)
 8190c75:	e8 c8 b2 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8190c7a:	8b 45 10             	mov    0x10(%ebp),%eax
 8190c7d:	0f b7 00             	movzwl (%eax),%eax
 8190c80:	0f b7 c0             	movzwl %ax,%eax
 8190c83:	89 44 24 08          	mov    %eax,0x8(%esp)
 8190c87:	8b 45 0c             	mov    0xc(%ebp),%eax
 8190c8a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8190c8e:	c7 04 24 65 a3 b9 08 	movl   $0x8b9a365,(%esp)
 8190c95:	e8 0a 6f 00 00       	call   8197ba4 <_ZN4ARAD11PRINT_ERROR7isEmptyEPcP5CUsert>
 8190c9a:	b8 00 00 00 00       	mov    $0x0,%eax
 8190c9f:	e9 3d 01 00 00       	jmp    8190de1 <_ZN20AvatarRechargeServer8RechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE+0x371>
 8190ca4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8190ca7:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 8190cab:	0f b7 d8             	movzwl %ax,%ebx
 8190cae:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8190cb1:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8190cb4:	8b 45 08             	mov    0x8(%ebp),%eax
 8190cb7:	8d 50 08             	lea    0x8(%eax),%edx
 8190cba:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8190cbd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8190cc1:	89 14 24             	mov    %edx,(%esp)
 8190cc4:	e8 e3 27 00 00       	call   81934ac <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEixERS3_>
 8190cc9:	8b 00                	mov    (%eax),%eax
 8190ccb:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8190cce:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8190cd1:	8b 45 10             	mov    0x10(%ebp),%eax
 8190cd4:	8b 40 08             	mov    0x8(%eax),%eax
 8190cd7:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8190cda:	7d 09                	jge    8190ce5 <_ZN20AvatarRechargeServer8RechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE+0x275>
 8190cdc:	8b 45 10             	mov    0x10(%ebp),%eax
 8190cdf:	8b 40 08             	mov    0x8(%eax),%eax
 8190ce2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8190ce5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8190ce8:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 8190cec:	0f b7 c0             	movzwl %ax,%eax
 8190cef:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8190cf2:	29 c2                	sub    %eax,%edx
 8190cf4:	8b 45 10             	mov    0x10(%ebp),%eax
 8190cf7:	89 50 04             	mov    %edx,0x4(%eax)
 8190cfa:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8190cfd:	89 c2                	mov    %eax,%edx
 8190cff:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8190d02:	66 89 50 0f          	mov    %dx,0xf(%eax)
 8190d06:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8190d09:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 8190d0d:	0f b7 d0             	movzwl %ax,%edx
 8190d10:	8b 45 10             	mov    0x10(%ebp),%eax
 8190d13:	89 50 0c             	mov    %edx,0xc(%eax)
 8190d16:	8b 45 10             	mov    0x10(%ebp),%eax
 8190d19:	0f b7 00             	movzwl (%eax),%eax
 8190d1c:	0f b7 c0             	movzwl %ax,%eax
 8190d1f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8190d23:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8190d2a:	00 
 8190d2b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8190d32:	00 
 8190d33:	8b 45 0c             	mov    0xc(%ebp),%eax
 8190d36:	89 04 24             	mov    %eax,(%esp)
 8190d39:	e8 1c b9 4e 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 8190d3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8190d41:	89 04 24             	mov    %eax,(%esp)
 8190d44:	e8 05 af f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8190d49:	89 c3                	mov    %eax,%ebx
 8190d4b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8190d4e:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 8190d52:	0f b7 c0             	movzwl %ax,%eax
 8190d55:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8190d58:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8190d5b:	8b 78 02             	mov    0x2(%eax),%edi
 8190d5e:	8b 45 10             	mov    0x10(%ebp),%eax
 8190d61:	0f b7 00             	movzwl (%eax),%eax
 8190d64:	0f b7 f0             	movzwl %ax,%esi
 8190d67:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8190d6e:	00 
 8190d6f:	c7 44 24 08 fe 00 00 	movl   $0xfe,0x8(%esp)
 8190d76:	00 
 8190d77:	c7 44 24 04 40 b8 b9 	movl   $0x8b9b840,0x4(%esp)
 8190d7e:	08 
 8190d7f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8190d82:	89 04 24             	mov    %eax,(%esp)
 8190d85:	e8 8e e9 3b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8190d8a:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8190d8e:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8190d91:	89 44 24 10          	mov    %eax,0x10(%esp)
 8190d95:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8190d99:	89 74 24 08          	mov    %esi,0x8(%esp)
 8190d9d:	c7 44 24 04 7c a4 b9 	movl   $0x8b9a47c,0x4(%esp)
 8190da4:	08 
 8190da5:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8190da8:	89 04 24             	mov    %eax,(%esp)
 8190dab:	e8 d8 e9 3b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8190db0:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8190db3:	89 04 24             	mov    %eax,(%esp)
 8190db6:	e8 3b 26 00 00       	call   81933f6 <_ZN4arad26SigAradAvatarEnduranceSaveC1Ev>
 8190dbb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8190dbe:	8b 40 07             	mov    0x7(%eax),%eax
 8190dc1:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8190dc4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8190dc7:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 8190dcb:	0f b7 c0             	movzwl %ax,%eax
 8190dce:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8190dd1:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8190dd4:	89 04 24             	mov    %eax,(%esp)
 8190dd7:	e8 0e 00 00 00       	call   8190dea <_ZN20AvatarRechargeServer23SaveAvatarEnduranceUnitERN4arad26SigAradAvatarEnduranceSaveE>
 8190ddc:	b8 01 00 00 00       	mov    $0x1,%eax
 8190de1:	83 c4 7c             	add    $0x7c,%esp
 8190de4:	5b                   	pop    %ebx
 8190de5:	5e                   	pop    %esi
 8190de6:	5f                   	pop    %edi
 8190de7:	5d                   	pop    %ebp
 8190de8:	c3                   	ret
 8190de9:	90                   	nop

```

```c
// AvatarRechargeServer::Recharge @ 0x8190a70

/* AvatarRechargeServer::Recharge(CUser*, arad::SigAradUseAvatarRecharge*) */

undefined4 __thiscall
AvatarRechargeServer::Recharge
          (AvatarRechargeServer *this,CUser *param_1,SigAradUseAvatarRecharge *param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  ushort uVar3;
  bool bVar4;
  char cVar5;
  CInventory *pCVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 local_58;
  uint local_54;
  cMyTrace local_50 [16];
  int local_40;
  cMyTrace local_3c [16];
  Inven_Item *local_2c;
  int local_28;
  Inven_Item *local_24;
  int local_20;
  
  uVar1 = *(ushort *)(param_2 + 2);
  pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  local_2c = (Inven_Item *)CInventory::GetInvenRef(pCVar6,1,(uint)uVar1);
  local_28 = *(int *)(local_2c + 2);
  if (local_2c != (Inven_Item *)0x0) {
    cVar5 = Inven_Item::isEmpty(local_2c);
    if (cVar5 == '\0') {
      bVar4 = false;
      goto LAB_08190acf;
    }
  }
  bVar4 = true;
LAB_08190acf:
  if (bVar4) {
    CUser::SendCmdErrorPacket(param_1,0x24d,0x16);
    ARAD::PRINT_ERROR::isEmpty("USE AVATAR RECHANGE",param_1,*(ushort *)(param_2 + 2));
    uVar7 = 0;
  }
  else {
    uVar2 = *(undefined2 *)(param_2 + 2);
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar5 = CInventory::delete_item(pCVar6,1,uVar2,1,3,1);
    if (cVar5 == '\x01') {
      CUser::SendUpdateItemList(param_1,1,0,*(undefined2 *)(param_2 + 2));
      uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      uVar1 = *(ushort *)(param_2 + 2);
      cMyTrace::cMyTrace(local_50,
                         "bool AvatarRechargeServer::Recharge(CUser*, arad::SigAradUseAvatarRecharge*)"
                         ,0xe8,0);
      cMyTrace::operator()
                (local_50,"USE AVATAR RECHANGE : delete_item() success. [slot:%d] [charac_no:%d]",
                 (uint)uVar1,uVar7);
      uVar1 = *(ushort *)param_2;
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      local_24 = (Inven_Item *)CInventory::GetInvenRef(pCVar6,2,(uint)uVar1);
      cVar5 = Inven_Item::isEmpty(local_24);
      if (cVar5 == '\0') {
        uVar1 = *(ushort *)(local_24 + 0xf);
        local_40 = local_28;
        piVar8 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                        operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                    *)(this + 8),&local_40);
        local_20 = (uint)uVar1 + *piVar8;
        if (*(int *)(param_2 + 8) < local_20) {
          local_20 = *(int *)(param_2 + 8);
        }
        *(uint *)(param_2 + 4) = local_20 - (uint)*(ushort *)(local_24 + 0xf);
        *(short *)(local_24 + 0xf) = (short)local_20;
        *(uint *)(param_2 + 0xc) = (uint)*(ushort *)(local_24 + 0xf);
        CUser::SendUpdateItemList(param_1,1,1,*(undefined2 *)param_2);
        uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        uVar1 = *(ushort *)(local_24 + 0xf);
        uVar7 = *(undefined4 *)(local_24 + 2);
        uVar3 = *(ushort *)param_2;
        cMyTrace::cMyTrace(local_3c,
                           "bool AvatarRechargeServer::Recharge(CUser*, arad::SigAradUseAvatarRecharge*)"
                           ,0xfe,0);
        cMyTrace::operator()
                  (local_3c,
                   "USE AVATAR RECHARGE : success [slot:%d] [item_id:%d] [Endurance:%d] [charac_no:%d]"
                   ,(uint)uVar3,uVar7,(uint)uVar1,uVar9);
        arad::SigAradAvatarEnduranceSave::SigAradAvatarEnduranceSave
                  ((SigAradAvatarEnduranceSave *)&local_58);
        local_58 = *(undefined4 *)(local_24 + 7);
        local_54 = (uint)*(ushort *)(local_24 + 0xf);
        SaveAvatarEnduranceUnit((SigAradAvatarEnduranceSave *)&local_58);
        uVar7 = 1;
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x24d,0x16);
        ARAD::PRINT_ERROR::isEmpty("USE AVATAR RECHANGE",param_1,*(ushort *)param_2);
        uVar7 = 0;
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x24d,0x13);
      ARAD::PRINT_ERROR::delete_item("USE AVATAR RECHANGE",param_1,*(ushort *)(param_2 + 2));
      uVar7 = 0;
    }
  }
  return uVar7;
}

```

---

## SaveAvatarEnduranceUnit

```asm
// === 08190dea AvatarRechargeServer::SaveAvatarEnduranceUnit  [0x08190dea-0x8190ead] ===
 8190dea:	55                   	push   %ebp
 8190deb:	89 e5                	mov    %esp,%ebp
 8190ded:	56                   	push   %esi
 8190dee:	53                   	push   %ebx
 8190def:	83 ec 20             	sub    $0x20,%esp
 8190df2:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8190df7:	c7 44 24 08 0f 01 00 	movl   $0x10f,0x8(%esp)
 8190dfe:	00 
 8190dff:	c7 44 24 04 c4 a3 b9 	movl   $0x8b9a3c4,0x4(%esp)
 8190e06:	08 
 8190e07:	89 04 24             	mov    %eax,(%esp)
 8190e0a:	e8 77 ec 0f 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8190e0f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8190e16:	00 
 8190e17:	89 44 24 04          	mov    %eax,0x4(%esp)
 8190e1b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8190e1e:	89 04 24             	mov    %eax,(%esp)
 8190e21:	e8 00 7e f3 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8190e26:	c7 44 24 08 ff ff ff 	movl   $0xffffffff,0x8(%esp)
 8190e2d:	ff 
 8190e2e:	c7 44 24 04 31 00 00 	movl   $0x31,0x4(%esp)
 8190e35:	00 
 8190e36:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8190e39:	89 04 24             	mov    %eax,(%esp)
 8190e3c:	e8 75 69 00 00       	call   81977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>
 8190e41:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8190e44:	89 04 24             	mov    %eax,(%esp)
 8190e47:	e8 02 7e f3 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8190e4c:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 8190e53:	00 
 8190e54:	8b 55 08             	mov    0x8(%ebp),%edx
 8190e57:	89 54 24 04          	mov    %edx,0x4(%esp)
 8190e5b:	89 04 24             	mov    %eax,(%esp)
 8190e5e:	e8 ef d7 f4 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8190e63:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8190e68:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8190e6b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8190e6f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8190e76:	00 
 8190e77:	89 04 24             	mov    %eax,(%esp)
 8190e7a:	e8 5f 01 3e 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8190e7f:	eb 1b                	jmp    8190e9c <_ZN20AvatarRechargeServer23SaveAvatarEnduranceUnitERN4arad26SigAradAvatarEnduranceSaveE+0xb2>
 8190e81:	89 d3                	mov    %edx,%ebx
 8190e83:	89 c6                	mov    %eax,%esi
 8190e85:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8190e88:	89 04 24             	mov    %eax,(%esp)
 8190e8b:	e8 42 ba 48 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8190e90:	89 f0                	mov    %esi,%eax
 8190e92:	89 da                	mov    %ebx,%edx
 8190e94:	89 04 24             	mov    %eax,(%esp)
 8190e97:	e8 b4 28 95 00       	call   8ae3750 <_Unwind_Resume>
 8190e9c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8190e9f:	89 04 24             	mov    %eax,(%esp)
 8190ea2:	e8 2b ba 48 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8190ea7:	83 c4 20             	add    $0x20,%esp
 8190eaa:	5b                   	pop    %ebx
 8190eab:	5e                   	pop    %esi
 8190eac:	5d                   	pop    %ebp
 8190ead:	c3                   	ret

```

```c
// AvatarRechargeServer::SaveAvatarEnduranceUnit @ 0x8190dea

/* AvatarRechargeServer::SaveAvatarEnduranceUnit(arad::SigAradAvatarEnduranceSave&) */

void AvatarRechargeServer::SaveAvatarEnduranceUnit(SigAradAvatarEnduranceSave *param_1)

{
  Stream *pSVar1;
  CStreamGuard *this;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"localjapan/Arad_EmblemReformServer.cpp",
                               0x10f);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
                    /* try { // try from 08190e3c to 08190e7e has its CatchHandler @ 08190e81 */
  ARAD::DISPATCHER::make_internal_stream_jpn(local_14,0x31,0xffffffff);
  this = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(this,param_1,8);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

---

## SaveAvatarEnduranceUnit_08190eae

```asm
// === 08190eae AvatarRechargeServer::SaveAvatarEnduranceUnit  [0x08190eae-0x8190ed7] ===
 8190eae:	55                   	push   %ebp
 8190eaf:	89 e5                	mov    %esp,%ebp
 8190eb1:	83 ec 28             	sub    $0x28,%esp
 8190eb4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8190eb7:	89 04 24             	mov    %eax,(%esp)
 8190eba:	e8 37 25 00 00       	call   81933f6 <_ZN4arad26SigAradAvatarEnduranceSaveC1Ev>
 8190ebf:	8b 45 08             	mov    0x8(%ebp),%eax
 8190ec2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8190ec5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8190ec8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8190ecb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8190ece:	89 04 24             	mov    %eax,(%esp)
 8190ed1:	e8 14 ff ff ff       	call   8190dea <_ZN20AvatarRechargeServer23SaveAvatarEnduranceUnitERN4arad26SigAradAvatarEnduranceSaveE>
 8190ed6:	c9                   	leave
 8190ed7:	c3                   	ret

```

```c
// AvatarRechargeServer::SaveAvatarEnduranceUnit @ 0x8190eae

/* AvatarRechargeServer::SaveAvatarEnduranceUnit(int, int) */

void AvatarRechargeServer::SaveAvatarEnduranceUnit(int param_1,int param_2)

{
  int local_14;
  int local_10;
  
  arad::SigAradAvatarEnduranceSave::SigAradAvatarEnduranceSave
            ((SigAradAvatarEnduranceSave *)&local_14);
  local_14 = param_1;
  local_10 = param_2;
  SaveAvatarEnduranceUnit((SigAradAvatarEnduranceSave *)&local_14);
  return;
}

```

---

## SendDurability

```asm
// === 08190416 AvatarRechargeServer::SendDurability  [0x08190416-0x8190499] ===
 8190416:	55                   	push   %ebp
 8190417:	89 e5                	mov    %esp,%ebp
 8190419:	83 ec 38             	sub    $0x38,%esp
 819041c:	8b 4d 10             	mov    0x10(%ebp),%ecx
 819041f:	8b 55 14             	mov    0x14(%ebp),%edx
 8190422:	8b 45 18             	mov    0x18(%ebp),%eax
 8190425:	88 4d e4             	mov    %cl,-0x1c(%ebp)
 8190428:	66 89 55 e0          	mov    %dx,-0x20(%ebp)
 819042c:	88 45 dc             	mov    %al,-0x24(%ebp)
 819042f:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8190433:	74 5f                	je     8190494 <_ZN20AvatarRechargeServer14SendDurabilityEP5CUsercsci+0x7e>
 8190435:	8b 45 0c             	mov    0xc(%ebp),%eax
 8190438:	89 04 24             	mov    %eax,(%esp)
 819043b:	e8 4c 9f f4 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8190440:	83 f8 05             	cmp    $0x5,%eax
 8190443:	0f 95 c0             	setne  %al
 8190446:	84 c0                	test   %al,%al
 8190448:	75 4d                	jne    8190497 <_ZN20AvatarRechargeServer14SendDurabilityEP5CUsercsci+0x81>
 819044a:	80 7d e4 01          	cmpb   $0x1,-0x1c(%ebp)
 819044e:	75 48                	jne    8190498 <_ZN20AvatarRechargeServer14SendDurabilityEP5CUsercsci+0x82>
 8190450:	80 7d dc 03          	cmpb   $0x3,-0x24(%ebp)
 8190454:	75 42                	jne    8190498 <_ZN20AvatarRechargeServer14SendDurabilityEP5CUsercsci+0x82>
 8190456:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 819045d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8190460:	89 04 24             	mov    %eax,(%esp)
 8190463:	e8 e4 4c 4c 00       	call   865514c <_ZN5CUser8GetPartyEv>
 8190468:	85 c0                	test   %eax,%eax
 819046a:	0f 95 c0             	setne  %al
 819046d:	84 c0                	test   %al,%al
 819046f:	74 07                	je     8190478 <_ZN20AvatarRechargeServer14SendDurabilityEP5CUsercsci+0x62>
 8190471:	c7 45 f4 02 00 00 00 	movl   $0x2,-0xc(%ebp)
 8190478:	8b 45 1c             	mov    0x1c(%ebp),%eax
 819047b:	98                   	cwtl
 819047c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8190480:	8b 45 0c             	mov    0xc(%ebp),%eax
 8190483:	89 44 24 04          	mov    %eax,0x4(%esp)
 8190487:	8b 45 f4             	mov    -0xc(%ebp),%eax
 819048a:	89 04 24             	mov    %eax,(%esp)
 819048d:	e8 64 0f 00 00       	call   81913f6 <_ZN20AvatarRechargeServer21UpdateAvatarEnduranceEN5CUser11eSendTargetEPS0_s>
 8190492:	eb 04                	jmp    8190498 <_ZN20AvatarRechargeServer14SendDurabilityEP5CUsercsci+0x82>
 8190494:	90                   	nop
 8190495:	eb 01                	jmp    8190498 <_ZN20AvatarRechargeServer14SendDurabilityEP5CUsercsci+0x82>
 8190497:	90                   	nop
 8190498:	c9                   	leave
 8190499:	c3                   	ret

```

```c
// AvatarRechargeServer::SendDurability @ 0x8190416

/* AvatarRechargeServer::SendDurability(CUser*, char, short, char, int) */

void __thiscall
AvatarRechargeServer::SendDurability
          (AvatarRechargeServer *this,CUser *param_1,char param_2,short param_3,char param_4,
          int param_5)

{
  int iVar1;
  undefined4 local_10;
  
  if ((((param_1 != (CUser *)0x0) && (iVar1 = CUser::get_state(param_1), iVar1 == 5)) &&
      (param_2 == '\x01')) && (param_4 == '\x03')) {
    local_10 = 1;
    iVar1 = CUser::GetParty(param_1);
    if (iVar1 != 0) {
      local_10 = 2;
    }
    UpdateAvatarEndurance(local_10,param_1,(int)(short)param_5);
  }
  return;
}

```

---

## Test

```asm
// === 08190266 AvatarRechargeServer::Test  [0x08190266-0x819026b] ===
 8190266:	55                   	push   %ebp
 8190267:	89 e5                	mov    %esp,%ebp
 8190269:	5d                   	pop    %ebp
 819026a:	c3                   	ret
 819026b:	90                   	nop

```

```c
// AvatarRechargeServer::Test @ 0x8190266

/* AvatarRechargeServer::Test() */

void AvatarRechargeServer::Test(void)

{
  return;
}

```

---

## UpdateAvatarEndurance

```asm
// === 081913f6 AvatarRechargeServer::UpdateAvatarEndurance  [0x081913f6-0x819155d] ===
 81913f6:	55                   	push   %ebp
 81913f7:	89 e5                	mov    %esp,%ebp
 81913f9:	56                   	push   %esi
 81913fa:	53                   	push   %ebx
 81913fb:	83 ec 30             	sub    $0x30,%esp
 81913fe:	8b 45 10             	mov    0x10(%ebp),%eax
 8191401:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 8191405:	66 83 7d e4 00       	cmpw   $0x0,-0x1c(%ebp)
 819140a:	0f 88 3f 01 00 00    	js     819154f <_ZN20AvatarRechargeServer21UpdateAvatarEnduranceEN5CUser11eSendTargetEPS0_s+0x159>
 8191410:	66 83 7d e4 09       	cmpw   $0x9,-0x1c(%ebp)
 8191415:	0f 8f 37 01 00 00    	jg     8191552 <_ZN20AvatarRechargeServer21UpdateAvatarEnduranceEN5CUser11eSendTargetEPS0_s+0x15c>
 819141b:	0f bf 5d e4          	movswl -0x1c(%ebp),%ebx
 819141f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8191422:	89 04 24             	mov    %eax,(%esp)
 8191425:	e8 64 8e f4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 819142a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 819142e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8191435:	00 
 8191436:	89 04 24             	mov    %eax,(%esp)
 8191439:	e8 70 ae 36 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 819143e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8191441:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8191445:	74 0f                	je     8191456 <_ZN20AvatarRechargeServer21UpdateAvatarEnduranceEN5CUser11eSendTargetEPS0_s+0x60>
 8191447:	8b 45 f4             	mov    -0xc(%ebp),%eax
 819144a:	89 04 24             	mov    %eax,(%esp)
 819144d:	e8 14 d9 f8 ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 8191452:	84 c0                	test   %al,%al
 8191454:	74 07                	je     819145d <_ZN20AvatarRechargeServer21UpdateAvatarEnduranceEN5CUser11eSendTargetEPS0_s+0x67>
 8191456:	b8 01 00 00 00       	mov    $0x1,%eax
 819145b:	eb 05                	jmp    8191462 <_ZN20AvatarRechargeServer21UpdateAvatarEnduranceEN5CUser11eSendTargetEPS0_s+0x6c>
 819145d:	b8 00 00 00 00       	mov    $0x0,%eax
 8191462:	84 c0                	test   %al,%al
 8191464:	0f 85 eb 00 00 00    	jne    8191555 <_ZN20AvatarRechargeServer21UpdateAvatarEnduranceEN5CUser11eSendTargetEPS0_s+0x15f>
 819146a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819146d:	89 04 24             	mov    %eax,(%esp)
 8191470:	e8 d7 c8 3f 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8191475:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8191478:	89 04 24             	mov    %eax,(%esp)
 819147b:	e8 66 a4 f3 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8191480:	c7 44 24 08 20 02 00 	movl   $0x220,0x8(%esp)
 8191487:	00 
 8191488:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 819148f:	00 
 8191490:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8191493:	89 04 24             	mov    %eax,(%esp)
 8191496:	e8 61 a4 f3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 819149b:	8b 45 0c             	mov    0xc(%ebp),%eax
 819149e:	89 04 24             	mov    %eax,(%esp)
 81914a1:	e8 d6 8e f4 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 81914a6:	0f b7 c0             	movzwl %ax,%eax
 81914a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81914ad:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81914b0:	89 04 24             	mov    %eax,(%esp)
 81914b3:	e8 ec 89 f4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81914b8:	0f bf 45 e4          	movswl -0x1c(%ebp),%eax
 81914bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81914c0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81914c3:	89 04 24             	mov    %eax,(%esp)
 81914c6:	e8 d9 89 f4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81914cb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81914ce:	8b 40 02             	mov    0x2(%eax),%eax
 81914d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81914d5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81914d8:	89 04 24             	mov    %eax,(%esp)
 81914db:	e8 5c a4 f3 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81914e0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81914e3:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 81914e7:	0f b7 c0             	movzwl %ax,%eax
 81914ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 81914ee:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81914f1:	89 04 24             	mov    %eax,(%esp)
 81914f4:	e8 ab 89 f4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81914f9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8191500:	00 
 8191501:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8191504:	89 04 24             	mov    %eax,(%esp)
 8191507:	e8 4c a4 f3 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 819150c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819150f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8191513:	8b 45 08             	mov    0x8(%ebp),%eax
 8191516:	89 44 24 04          	mov    %eax,0x4(%esp)
 819151a:	8b 45 0c             	mov    0xc(%ebp),%eax
 819151d:	89 04 24             	mov    %eax,(%esp)
 8191520:	e8 d9 a3 4e 00       	call   867b8fe <_ZN5CUser10SendPacketENS_11eSendTargetER11PacketGuard>
 8191525:	eb 1b                	jmp    8191542 <_ZN20AvatarRechargeServer21UpdateAvatarEnduranceEN5CUser11eSendTargetEPS0_s+0x14c>
 8191527:	89 d3                	mov    %edx,%ebx
 8191529:	89 c6                	mov    %eax,%esi
 819152b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819152e:	89 04 24             	mov    %eax,(%esp)
 8191531:	e8 4a c9 3f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8191536:	89 f0                	mov    %esi,%eax
 8191538:	89 da                	mov    %ebx,%edx
 819153a:	89 04 24             	mov    %eax,(%esp)
 819153d:	e8 0e 22 95 00       	call   8ae3750 <_Unwind_Resume>
 8191542:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8191545:	89 04 24             	mov    %eax,(%esp)
 8191548:	e8 33 c9 3f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 819154d:	eb 07                	jmp    8191556 <_ZN20AvatarRechargeServer21UpdateAvatarEnduranceEN5CUser11eSendTargetEPS0_s+0x160>
 819154f:	90                   	nop
 8191550:	eb 04                	jmp    8191556 <_ZN20AvatarRechargeServer21UpdateAvatarEnduranceEN5CUser11eSendTargetEPS0_s+0x160>
 8191552:	90                   	nop
 8191553:	eb 01                	jmp    8191556 <_ZN20AvatarRechargeServer21UpdateAvatarEnduranceEN5CUser11eSendTargetEPS0_s+0x160>
 8191555:	90                   	nop
 8191556:	83 c4 30             	add    $0x30,%esp
 8191559:	5b                   	pop    %ebx
 819155a:	5e                   	pop    %esi
 819155b:	5d                   	pop    %ebp
 819155c:	c3                   	ret
 819155d:	90                   	nop

```

```c
// AvatarRechargeServer::UpdateAvatarEndurance @ 0x81913f6

/* AvatarRechargeServer::UpdateAvatarEndurance(CUser::eSendTarget, CUser*, short) */

void AvatarRechargeServer::UpdateAvatarEndurance(undefined4 param_1,CUser *param_2,short param_3)

{
  bool bVar1;
  char cVar2;
  CInventory *this;
  uint uVar3;
  PacketGuard local_1c [12];
  Inven_Item *local_10;
  
  if ((-1 < param_3) && (param_3 < 10)) {
    this = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
    local_10 = (Inven_Item *)CInventory::GetInvenRef(this,0,(int)param_3);
    if ((local_10 == (Inven_Item *)0x0) || (cVar2 = Inven_Item::isEmpty(local_10), cVar2 != '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0819147b to 08191524 has its CatchHandler @ 08191527 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x220);
      uVar3 = CUser::get_unique_id(param_2);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar3 & 0xffff);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)param_3);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 2));
      InterfacePacketBuf::put_short
                ((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(local_10 + 0xf));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::SendPacket(param_2,param_1,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return;
}

```

---

## UseEmblem

```asm
// === 08190ed8 AvatarRechargeServer::UseEmblem  [0x08190ed8-0x819114b] ===
 8190ed8:	55                   	push   %ebp
 8190ed9:	89 e5                	mov    %esp,%ebp
 8190edb:	57                   	push   %edi
 8190edc:	56                   	push   %esi
 8190edd:	53                   	push   %ebx
 8190ede:	83 ec 7c             	sub    $0x7c,%esp
 8190ee1:	8b 45 18             	mov    0x18(%ebp),%eax
 8190ee4:	66 89 45 a4          	mov    %ax,-0x5c(%ebp)
 8190ee8:	8b 45 14             	mov    0x14(%ebp),%eax
 8190eeb:	8b 58 07             	mov    0x7(%eax),%ebx
 8190eee:	8b 45 0c             	mov    0xc(%ebp),%eax
 8190ef1:	89 04 24             	mov    %eax,(%esp)
 8190ef4:	e8 85 93 f4 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8190ef9:	89 04 24             	mov    %eax,(%esp)
 8190efc:	e8 75 c6 f4 ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 8190f01:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8190f05:	89 04 24             	mov    %eax,(%esp)
 8190f08:	e8 eb 89 16 00       	call   82f98f8 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi>
 8190f0d:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8190f10:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8190f13:	89 04 24             	mov    %eax,(%esp)
 8190f16:	e8 7e f7 ff ff       	call   8190699 <_ZL14getSocketCountPK20stAvatarEmblemInfo_t>
 8190f1b:	8b 55 08             	mov    0x8(%ebp),%edx
 8190f1e:	8b 52 04             	mov    0x4(%edx),%edx
 8190f21:	0f af c2             	imul   %edx,%eax
 8190f24:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8190f27:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 8190f2e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8190f31:	89 04 24             	mov    %eax,(%esp)
 8190f34:	e8 5f 99 f6 ff       	call   80fa898 <_ZNSt17_Rb_tree_iteratorISt4pairIKiiEEC1Ev>
 8190f39:	8b 45 08             	mov    0x8(%ebp),%eax
 8190f3c:	8d 50 20             	lea    0x20(%eax),%edx
 8190f3f:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8190f42:	89 54 24 04          	mov    %edx,0x4(%esp)
 8190f46:	89 04 24             	mov    %eax,(%esp)
 8190f49:	e8 cc c3 f3 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 8190f4e:	83 ec 04             	sub    $0x4,%esp
 8190f51:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8190f58:	8b 45 10             	mov    0x10(%ebp),%eax
 8190f5b:	89 04 24             	mov    %eax,(%esp)
 8190f5e:	e8 5d d2 ef ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 8190f63:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8190f66:	eb 5f                	jmp    8190fc7 <_ZN20AvatarRechargeServer9UseEmblemEP5CUserRSt6vectorIiSaIiEEP10Inven_Items+0xef>
 8190f68:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8190f6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8190f6f:	8b 45 10             	mov    0x10(%ebp),%eax
 8190f72:	89 04 24             	mov    %eax,(%esp)
 8190f75:	e8 62 d2 ef ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 8190f7a:	8b 55 08             	mov    0x8(%ebp),%edx
 8190f7d:	8d 4a 20             	lea    0x20(%edx),%ecx
 8190f80:	8d 55 a0             	lea    -0x60(%ebp),%edx
 8190f83:	89 44 24 08          	mov    %eax,0x8(%esp)
 8190f87:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8190f8b:	89 14 24             	mov    %edx,(%esp)
 8190f8e:	e8 5b c3 f3 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 8190f93:	83 ec 04             	sub    $0x4,%esp
 8190f96:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8190f99:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8190f9c:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8190f9f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8190fa3:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8190fa6:	89 04 24             	mov    %eax,(%esp)
 8190fa9:	e8 1a 94 f4 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 8190fae:	84 c0                	test   %al,%al
 8190fb0:	74 11                	je     8190fc3 <_ZN20AvatarRechargeServer9UseEmblemEP5CUserRSt6vectorIiSaIiEEP10Inven_Items+0xeb>
 8190fb2:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8190fb5:	89 04 24             	mov    %eax,(%esp)
 8190fb8:	e8 83 c3 f3 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 8190fbd:	8b 40 04             	mov    0x4(%eax),%eax
 8190fc0:	01 45 d0             	add    %eax,-0x30(%ebp)
 8190fc3:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8190fc7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8190fca:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8190fcd:	0f 92 c0             	setb   %al
 8190fd0:	84 c0                	test   %al,%al
 8190fd2:	75 94                	jne    8190f68 <_ZN20AvatarRechargeServer9UseEmblemEP5CUserRSt6vectorIiSaIiEEP10Inven_Items+0x90>
 8190fd4:	0f bf 5d a4          	movswl -0x5c(%ebp),%ebx
 8190fd8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8190fdb:	89 04 24             	mov    %eax,(%esp)
 8190fde:	e8 ab 92 f4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8190fe3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8190fe7:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8190fee:	00 
 8190fef:	89 04 24             	mov    %eax,(%esp)
 8190ff2:	e8 b7 b2 36 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 8190ff7:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8190ffa:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 8190ffe:	74 0f                	je     819100f <_ZN20AvatarRechargeServer9UseEmblemEP5CUserRSt6vectorIiSaIiEEP10Inven_Items+0x137>
 8191000:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8191003:	89 04 24             	mov    %eax,(%esp)
 8191006:	e8 5b dd f8 ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 819100b:	84 c0                	test   %al,%al
 819100d:	74 07                	je     8191016 <_ZN20AvatarRechargeServer9UseEmblemEP5CUserRSt6vectorIiSaIiEEP10Inven_Items+0x13e>
 819100f:	b8 01 00 00 00       	mov    $0x1,%eax
 8191014:	eb 05                	jmp    819101b <_ZN20AvatarRechargeServer9UseEmblemEP5CUserRSt6vectorIiSaIiEEP10Inven_Items+0x143>
 8191016:	b8 00 00 00 00       	mov    $0x0,%eax
 819101b:	84 c0                	test   %al,%al
 819101d:	74 28                	je     8191047 <_ZN20AvatarRechargeServer9UseEmblemEP5CUserRSt6vectorIiSaIiEEP10Inven_Items+0x16f>
 819101f:	0f b7 45 a4          	movzwl -0x5c(%ebp),%eax
 8191023:	0f b7 c0             	movzwl %ax,%eax
 8191026:	89 44 24 08          	mov    %eax,0x8(%esp)
 819102a:	8b 45 0c             	mov    0xc(%ebp),%eax
 819102d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8191031:	c7 04 24 65 a3 b9 08 	movl   $0x8b9a365,(%esp)
 8191038:	e8 67 6b 00 00       	call   8197ba4 <_ZN4ARAD11PRINT_ERROR7isEmptyEPcP5CUsert>
 819103d:	b8 00 00 00 00       	mov    $0x0,%eax
 8191042:	e9 f9 00 00 00       	jmp    8191140 <_ZN20AvatarRechargeServer9UseEmblemEP5CUserRSt6vectorIiSaIiEEP10Inven_Items+0x268>
 8191047:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 819104a:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 819104e:	0f b7 c0             	movzwl %ax,%eax
 8191051:	03 45 d0             	add    -0x30(%ebp),%eax
 8191054:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8191057:	8b 45 d8             	mov    -0x28(%ebp),%eax
 819105a:	3b 45 cc             	cmp    -0x34(%ebp),%eax
 819105d:	7e 06                	jle    8191065 <_ZN20AvatarRechargeServer9UseEmblemEP5CUserRSt6vectorIiSaIiEEP10Inven_Items+0x18d>
 819105f:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8191062:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8191065:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8191068:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 819106c:	0f b7 c0             	movzwl %ax,%eax
 819106f:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8191072:	89 d1                	mov    %edx,%ecx
 8191074:	29 c1                	sub    %eax,%ecx
 8191076:	89 c8                	mov    %ecx,%eax
 8191078:	89 45 dc             	mov    %eax,-0x24(%ebp)
 819107b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 819107e:	89 c2                	mov    %eax,%edx
 8191080:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8191083:	66 89 50 0f          	mov    %dx,0xf(%eax)
 8191087:	0f bf 45 a4          	movswl -0x5c(%ebp),%eax
 819108b:	89 44 24 08          	mov    %eax,0x8(%esp)
 819108f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8191092:	89 44 24 04          	mov    %eax,0x4(%esp)
 8191096:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 819109d:	e8 54 03 00 00       	call   81913f6 <_ZN20AvatarRechargeServer21UpdateAvatarEnduranceEN5CUser11eSendTargetEPS0_s>
 81910a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81910a5:	89 04 24             	mov    %eax,(%esp)
 81910a8:	e8 a1 ab f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81910ad:	89 c3                	mov    %eax,%ebx
 81910af:	8b 45 14             	mov    0x14(%ebp),%eax
 81910b2:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 81910b6:	0f b7 c0             	movzwl %ax,%eax
 81910b9:	89 45 9c             	mov    %eax,-0x64(%ebp)
 81910bc:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81910bf:	8b 78 02             	mov    0x2(%eax),%edi
 81910c2:	0f bf 75 a4          	movswl -0x5c(%ebp),%esi
 81910c6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81910cd:	00 
 81910ce:	c7 44 24 08 42 01 00 	movl   $0x142,0x8(%esp)
 81910d5:	00 
 81910d6:	c7 44 24 04 c0 b7 b9 	movl   $0x8b9b7c0,0x4(%esp)
 81910dd:	08 
 81910de:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81910e1:	89 04 24             	mov    %eax,(%esp)
 81910e4:	e8 2f e6 3b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81910e9:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 81910ed:	8b 45 9c             	mov    -0x64(%ebp),%eax
 81910f0:	89 44 24 10          	mov    %eax,0x10(%esp)
 81910f4:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 81910f8:	89 74 24 08          	mov    %esi,0x8(%esp)
 81910fc:	c7 44 24 04 d0 a4 b9 	movl   $0x8b9a4d0,0x4(%esp)
 8191103:	08 
 8191104:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8191107:	89 04 24             	mov    %eax,(%esp)
 819110a:	e8 79 e6 3b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 819110f:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8191112:	89 04 24             	mov    %eax,(%esp)
 8191115:	e8 dc 22 00 00       	call   81933f6 <_ZN4arad26SigAradAvatarEnduranceSaveC1Ev>
 819111a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 819111d:	8b 40 07             	mov    0x7(%eax),%eax
 8191120:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8191123:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8191126:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 819112a:	0f b7 c0             	movzwl %ax,%eax
 819112d:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8191130:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8191133:	89 04 24             	mov    %eax,(%esp)
 8191136:	e8 af fc ff ff       	call   8190dea <_ZN20AvatarRechargeServer23SaveAvatarEnduranceUnitERN4arad26SigAradAvatarEnduranceSaveE>
 819113b:	b8 01 00 00 00       	mov    $0x1,%eax
 8191140:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8191143:	83 c4 00             	add    $0x0,%esp
 8191146:	5b                   	pop    %ebx
 8191147:	5e                   	pop    %esi
 8191148:	5f                   	pop    %edi
 8191149:	5d                   	pop    %ebp
 819114a:	c3                   	ret
 819114b:	90                   	nop

```

```c
// AvatarRechargeServer::UseEmblem @ 0x8190ed8

/* AvatarRechargeServer::UseEmblem(CUser*, std::vector<int, std::allocator<int> >&, Inven_Item*,
   short) */

undefined4 __thiscall
AvatarRechargeServer::UseEmblem
          (AvatarRechargeServer *this,CUser *param_1,vector *param_2,Inven_Item *param_3,
          short param_4)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  CInventory *pCVar4;
  CAvatarItemMgr *this_00;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int local_64;
  ushort local_60;
  undefined4 local_5c;
  uint local_58;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_54 [4];
  int local_50;
  cMyTrace local_4c [16];
  stAvatarEmblemInfo_t *local_3c;
  int local_38;
  int local_34;
  Inven_Item *local_30;
  int local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  
  local_60 = param_4;
  iVar7 = *(int *)(param_3 + 7);
  pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  this_00 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar4);
  local_3c = (stAvatarEmblemInfo_t *)WongWork::CAvatarItemMgr::getJewelSocketData(this_00,iVar7);
  local_38 = getSocketCount(local_3c);
  local_38 = local_38 * *(int *)(this + 4);
  local_34 = 0;
  std::_Rb_tree_iterator<std::pair<int_const,int>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_50);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_54);
  local_24 = 0;
  local_20 = std::vector<int,std::allocator<int>>::size((vector<int,std::allocator<int>> *)param_2);
  for (; local_24 < local_20; local_24 = local_24 + 1) {
    std::vector<int,std::allocator<int>>::operator[]
              ((vector<int,std::allocator<int>> *)param_2,local_24);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find(&local_64);
    local_50 = local_64;
    cVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_50,
                       (_Rb_tree_iterator *)local_54);
    if (cVar3 != '\0') {
      iVar7 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_50);
      local_34 = local_34 + *(int *)(iVar7 + 4);
    }
  }
  iVar7 = (int)(short)local_60;
  pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  local_30 = (Inven_Item *)CInventory::GetInvenRef(pCVar4,2,iVar7);
  if (local_30 != (Inven_Item *)0x0) {
    cVar3 = Inven_Item::isEmpty(local_30);
    if (cVar3 == '\0') {
      bVar2 = false;
      goto LAB_0819101b;
    }
  }
  bVar2 = true;
LAB_0819101b:
  if (bVar2) {
    ARAD::PRINT_ERROR::isEmpty("USE AVATAR RECHANGE",param_1,local_60);
    uVar5 = 0;
  }
  else {
    local_2c = (uint)*(ushort *)(local_30 + 0xf) + local_34;
    if (local_38 < local_2c) {
      local_2c = local_38;
    }
    local_28 = local_2c - (uint)*(ushort *)(local_30 + 0xf);
    *(short *)(local_30 + 0xf) = (short)local_2c;
    UpdateAvatarEndurance(1,param_1,(int)(short)local_60);
    uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    uVar1 = *(ushort *)(param_3 + 0xf);
    uVar5 = *(undefined4 *)(local_30 + 2);
    iVar7 = (int)(short)local_60;
    cMyTrace::cMyTrace(local_4c,
                       "bool AvatarRechargeServer::UseEmblem(CUser*, std::vector<int, std::allocator<int> >&, Inven_Item*, short int)"
                       ,0x142,0);
    cMyTrace::operator()
              (local_4c,
               "USE EMBLEM + RECHARGE : success [slot:%d] [item_id:%d] [Endurance:%d] [charac_no:%d]"
               ,iVar7,uVar5,(uint)uVar1,uVar6);
    arad::SigAradAvatarEnduranceSave::SigAradAvatarEnduranceSave
              ((SigAradAvatarEnduranceSave *)&local_5c);
    local_5c = *(undefined4 *)(local_30 + 7);
    local_58 = (uint)*(ushort *)(local_30 + 0xf);
    SaveAvatarEnduranceUnit((SigAradAvatarEnduranceSave *)&local_5c);
    uVar5 = 1;
  }
  return uVar5;
}

```

---

## ~AvatarRechargeServer

```asm
// === 08190246 AvatarRechargeServer::~AvatarRechargeServer  [0x08190246-0x8190265] ===
 8190246:	55                   	push   %ebp
 8190247:	89 e5                	mov    %esp,%ebp
 8190249:	83 ec 18             	sub    $0x18,%esp
 819024c:	8b 45 08             	mov    0x8(%ebp),%eax
 819024f:	c7 00 58 b9 b9 08    	movl   $0x8b9b958,(%eax)
 8190255:	8b 45 08             	mov    0x8(%ebp),%eax
 8190258:	83 c0 04             	add    $0x4,%eax
 819025b:	89 04 24             	mov    %eax,(%esp)
 819025e:	e8 e3 0b 72 00       	call   88b0e46 <_ZN4ARAD6SCRIPT14AvatarRechargeD1Ev>
 8190263:	c9                   	leave
 8190264:	c3                   	ret
 8190265:	90                   	nop

```

```c
// AvatarRechargeServer::~AvatarRechargeServer @ 0x8190246

/* AvatarRechargeServer::~AvatarRechargeServer() */

void __thiscall AvatarRechargeServer::~AvatarRechargeServer(AvatarRechargeServer *this)

{
  *(undefined ***)this = &PTR_Load_08b9b958;
  ARAD::SCRIPT::AvatarRecharge::~AvatarRecharge((AvatarRecharge *)(this + 4));
  return;
}

```

