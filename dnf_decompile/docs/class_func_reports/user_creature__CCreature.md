# user_creature__CCreature

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 38

---

## CCreature

```asm
// === 0833705e user_creature::CCreature::CCreature  [0x0833705e-0x83370a1] ===
 833705e:	55                   	push   %ebp
 833705f:	89 e5                	mov    %esp,%ebp
 8337061:	83 ec 18             	sub    $0x18,%esp
 8337064:	8b 45 08             	mov    0x8(%ebp),%eax
 8337067:	89 04 24             	mov    %eax,(%esp)
 833706a:	e8 13 9c 00 00       	call   8340c82 <_ZN13user_creature13CCreatureItemC1Ev>
 833706f:	8b 45 08             	mov    0x8(%ebp),%eax
 8337072:	c7 00 c0 f4 c2 08    	movl   $0x8c2f4c0,(%eax)
 8337078:	8b 45 08             	mov    0x8(%ebp),%eax
 833707b:	83 c0 34             	add    $0x34,%eax
 833707e:	89 04 24             	mov    %eax,(%esp)
 8337081:	e8 52 fc ff ff       	call   8336cd8 <_ZN13user_creature8CStomachC1Ev>
 8337086:	8b 45 08             	mov    0x8(%ebp),%eax
 8337089:	83 c0 50             	add    $0x50,%eax
 833708c:	89 04 24             	mov    %eax,(%esp)
 833708f:	e8 a2 65 00 00       	call   833d636 <_ZN13user_creature14COverSkillTimeC1Ev>
 8337094:	8b 45 08             	mov    0x8(%ebp),%eax
 8337097:	89 04 24             	mov    %eax,(%esp)
 833709a:	e8 11 00 00 00       	call   83370b0 <_ZN13user_creature9CCreature5ResetEv>
 833709f:	c9                   	leave
 83370a0:	c3                   	ret
 83370a1:	90                   	nop

```

```c
// user_creature::CCreature::CCreature @ 0x833705e

/* user_creature::CCreature::CCreature() */

void __thiscall user_creature::CCreature::CCreature(CCreature *this)

{
  CCreatureItem::CCreatureItem((CCreatureItem *)this);
  *(undefined ***)this = &PTR_Reset_08c2f4c0;
  CStomach::CStomach((CStomach *)(this + 0x34));
  COverSkillTime::COverSkillTime((COverSkillTime *)(this + 0x50));
  Reset(this);
  return;
}

```

---

## CalculateExp

```asm
// === 083377b6 user_creature::CCreature::CalculateExp  [0x083377b6-0x83378a9] ===
 83377b6:	55                   	push   %ebp
 83377b7:	89 e5                	mov    %esp,%ebp
 83377b9:	83 ec 38             	sub    $0x38,%esp
 83377bc:	b8 00 00 00 00       	mov    $0x0,%eax
 83377c1:	89 45 e8             	mov    %eax,-0x18(%ebp)
 83377c4:	b8 00 00 00 00       	mov    $0x0,%eax
 83377c9:	89 45 ec             	mov    %eax,-0x14(%ebp)
 83377cc:	8b 45 14             	mov    0x14(%ebp),%eax
 83377cf:	89 44 24 08          	mov    %eax,0x8(%esp)
 83377d3:	c7 44 24 04 17 00 00 	movl   $0x17,0x4(%esp)
 83377da:	00 
 83377db:	8b 45 08             	mov    0x8(%ebp),%eax
 83377de:	89 04 24             	mov    %eax,(%esp)
 83377e1:	e8 3e ff ff ff       	call   8337724 <_ZN13user_creature9CCreature9GetAddExpEiP5CUser>
 83377e6:	d9 45 ec             	flds   -0x14(%ebp)
 83377e9:	de c1                	faddp  %st,%st(1)
 83377eb:	d9 5d ec             	fstps  -0x14(%ebp)
 83377ee:	8b 45 14             	mov    0x14(%ebp),%eax
 83377f1:	89 44 24 08          	mov    %eax,0x8(%esp)
 83377f5:	c7 44 24 04 18 00 00 	movl   $0x18,0x4(%esp)
 83377fc:	00 
 83377fd:	8b 45 08             	mov    0x8(%ebp),%eax
 8337800:	89 04 24             	mov    %eax,(%esp)
 8337803:	e8 1c ff ff ff       	call   8337724 <_ZN13user_creature9CCreature9GetAddExpEiP5CUser>
 8337808:	d9 45 ec             	flds   -0x14(%ebp)
 833780b:	de c1                	faddp  %st,%st(1)
 833780d:	d9 5d ec             	fstps  -0x14(%ebp)
 8337810:	8b 45 14             	mov    0x14(%ebp),%eax
 8337813:	89 44 24 08          	mov    %eax,0x8(%esp)
 8337817:	c7 44 24 04 19 00 00 	movl   $0x19,0x4(%esp)
 833781e:	00 
 833781f:	8b 45 08             	mov    0x8(%ebp),%eax
 8337822:	89 04 24             	mov    %eax,(%esp)
 8337825:	e8 fa fe ff ff       	call   8337724 <_ZN13user_creature9CCreature9GetAddExpEiP5CUser>
 833782a:	d9 45 ec             	flds   -0x14(%ebp)
 833782d:	de c1                	faddp  %st,%st(1)
 833782f:	d9 5d ec             	fstps  -0x14(%ebp)
 8337832:	db 45 0c             	fildl  0xc(%ebp)
 8337835:	d8 4d ec             	fmuls  -0x14(%ebp)
 8337838:	d9 05 50 f4 c2 08    	flds   0x8c2f450
 833783e:	de f9                	fdivrp %st,%st(1)
 8337840:	d9 5d e8             	fstps  -0x18(%ebp)
 8337843:	d9 45 e8             	flds   -0x18(%ebp)
 8337846:	d9 7d e6             	fnstcw -0x1a(%ebp)
 8337849:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 833784d:	b4 0c                	mov    $0xc,%ah
 833784f:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 8337853:	d9 6d e4             	fldcw  -0x1c(%ebp)
 8337856:	db 5d e0             	fistpl -0x20(%ebp)
 8337859:	d9 6d e6             	fldcw  -0x1a(%ebp)
 833785c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 833785f:	03 45 0c             	add    0xc(%ebp),%eax
 8337862:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8337865:	8b 45 08             	mov    0x8(%ebp),%eax
 8337868:	8b 40 30             	mov    0x30(%eax),%eax
 833786b:	89 c2                	mov    %eax,%edx
 833786d:	03 55 f0             	add    -0x10(%ebp),%edx
 8337870:	8b 45 08             	mov    0x8(%ebp),%eax
 8337873:	89 50 30             	mov    %edx,0x30(%eax)
 8337876:	8b 45 08             	mov    0x8(%ebp),%eax
 8337879:	8b 40 30             	mov    0x30(%eax),%eax
 833787c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8337880:	8b 45 08             	mov    0x8(%ebp),%eax
 8337883:	89 04 24             	mov    %eax,(%esp)
 8337886:	e8 47 fc ff ff       	call   83374d2 <_ZN13user_creature9CCreature11GetExpLevelEi>
 833788b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 833788e:	8b 45 08             	mov    0x8(%ebp),%eax
 8337891:	8b 40 2c             	mov    0x2c(%eax),%eax
 8337894:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8337897:	7d 06                	jge    833789f <_ZN13user_creature9CCreature12CalculateExpEiRbP5CUser+0xe9>
 8337899:	8b 45 10             	mov    0x10(%ebp),%eax
 833789c:	c6 00 01             	movb   $0x1,(%eax)
 833789f:	8b 45 08             	mov    0x8(%ebp),%eax
 83378a2:	8b 55 f4             	mov    -0xc(%ebp),%edx
 83378a5:	89 50 2c             	mov    %edx,0x2c(%eax)
 83378a8:	c9                   	leave
 83378a9:	c3                   	ret

```

```c
// user_creature::CCreature::CalculateExp @ 0x83377b6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* user_creature::CCreature::CalculateExp(int, bool&, CUser*) */

void __thiscall
user_creature::CCreature::CalculateExp(CCreature *this,int param_1,bool *param_2,CUser *param_3)

{
  int iVar1;
  longdouble lVar2;
  longdouble lVar3;
  longdouble lVar4;
  
  lVar2 = (longdouble)GetAddExp(this,0x17,param_3);
  lVar3 = (longdouble)GetAddExp(this,0x18,param_3);
  lVar4 = (longdouble)GetAddExp(this,0x19,param_3);
  *(int *)(this + 0x30) =
       *(int *)(this + 0x30) +
       (int)ROUND(((float)param_1 *
                  (float)((longdouble)(float)((longdouble)(float)((longdouble)0.0 + lVar2) + lVar3)
                         + lVar4)) / _DAT_08c2f450) + param_1;
  iVar1 = GetExpLevel(this,*(int *)(this + 0x30));
  if (*(int *)(this + 0x2c) < iVar1) {
    *param_2 = true;
  }
  *(int *)(this + 0x2c) = iVar1;
  return;
}

```

---

## CheckDiedCreature

```asm
// === 083384b8 user_creature::CCreature::CheckDiedCreature  [0x083384b8-0x83384ed] ===
 83384b8:	55                   	push   %ebp
 83384b9:	89 e5                	mov    %esp,%ebp
 83384bb:	83 ec 18             	sub    $0x18,%esp
 83384be:	8b 45 08             	mov    0x8(%ebp),%eax
 83384c1:	89 04 24             	mov    %eax,(%esp)
 83384c4:	e8 af ff ff ff       	call   8338478 <_ZN13user_creature9CCreature13IsDieCreatureEv>
 83384c9:	84 c0                	test   %al,%al
 83384cb:	74 19                	je     83384e6 <_ZN13user_creature9CCreature17CheckDiedCreatureEP5CUser+0x2e>
 83384cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 83384d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 83384d4:	8b 45 08             	mov    0x8(%ebp),%eax
 83384d7:	89 04 24             	mov    %eax,(%esp)
 83384da:	e8 57 00 00 00       	call   8338536 <_ZN13user_creature9CCreature3DieEP5CUser>
 83384df:	b8 01 00 00 00       	mov    $0x1,%eax
 83384e4:	eb 05                	jmp    83384eb <_ZN13user_creature9CCreature17CheckDiedCreatureEP5CUser+0x33>
 83384e6:	b8 00 00 00 00       	mov    $0x0,%eax
 83384eb:	c9                   	leave
 83384ec:	c3                   	ret
 83384ed:	90                   	nop

```

```c
// user_creature::CCreature::CheckDiedCreature @ 0x83384b8

/* user_creature::CCreature::CheckDiedCreature(CUser*) */

bool __thiscall user_creature::CCreature::CheckDiedCreature(CCreature *this,CUser *param_1)

{
  char cVar1;
  
  cVar1 = IsDieCreature(this);
  if (cVar1 != '\0') {
    Die(this,param_1);
  }
  return cVar1 != '\0';
}

```

---

## Die

```asm
// === 08338536 user_creature::CCreature::Die  [0x08338536-0x83385a9] ===
 8338536:	55                   	push   %ebp
 8338537:	89 e5                	mov    %esp,%ebp
 8338539:	56                   	push   %esi
 833853a:	53                   	push   %ebx
 833853b:	83 ec 30             	sub    $0x30,%esp
 833853e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8338545:	00 
 8338546:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 833854d:	00 
 833854e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8338551:	89 44 24 04          	mov    %eax,0x4(%esp)
 8338555:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8338558:	89 04 24             	mov    %eax,(%esp)
 833855b:	e8 ca 7d 00 00       	call   834032a <_ZN13user_creature17CPacketRespondentC1EP5CUserii>
 8338560:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8338563:	89 04 24             	mov    %eax,(%esp)
 8338566:	e8 93 81 00 00       	call   83406fe <_ZN13user_creature17CPacketRespondent26MakeNotipacketDiedCreatureEv>
 833856b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833856e:	89 04 24             	mov    %eax,(%esp)
 8338571:	e8 14 7f 00 00       	call   834048a <_ZN13user_creature17CPacketRespondent7SendAllEv>
 8338576:	bb 01 00 00 00       	mov    $0x1,%ebx
 833857b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833857e:	89 04 24             	mov    %eax,(%esp)
 8338581:	e8 e4 7d 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 8338586:	89 d8                	mov    %ebx,%eax
 8338588:	83 c4 30             	add    $0x30,%esp
 833858b:	5b                   	pop    %ebx
 833858c:	5e                   	pop    %esi
 833858d:	5d                   	pop    %ebp
 833858e:	c3                   	ret
 833858f:	89 d3                	mov    %edx,%ebx
 8338591:	89 c6                	mov    %eax,%esi
 8338593:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8338596:	89 04 24             	mov    %eax,(%esp)
 8338599:	e8 cc 7d 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 833859e:	89 f0                	mov    %esi,%eax
 83385a0:	89 da                	mov    %ebx,%edx
 83385a2:	89 04 24             	mov    %eax,(%esp)
 83385a5:	e8 a6 b1 7a 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// user_creature::CCreature::Die @ 0x8338536

/* user_creature::CCreature::Die(CUser*) */

undefined4 __thiscall user_creature::CCreature::Die(CCreature *this,CUser *param_1)

{
  CPacketRespondent local_2c [32];
  
  CPacketRespondent::CPacketRespondent(local_2c,param_1,0,0);
                    /* try { // try from 08338566 to 08338575 has its CatchHandler @ 0833858f */
  CPacketRespondent::MakeNotipacketDiedCreature(local_2c);
  CPacketRespondent::SendAll(local_2c);
  CPacketRespondent::~CPacketRespondent(local_2c);
  return 1;
}

```

---

## Dismantle

```asm
// === 08337382 user_creature::CCreature::Dismantle  [0x08337382-0x83373a9] ===
 8337382:	55                   	push   %ebp
 8337383:	89 e5                	mov    %esp,%ebp
 8337385:	83 ec 18             	sub    $0x18,%esp
 8337388:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 833738f:	00 
 8337390:	8b 45 0c             	mov    0xc(%ebp),%eax
 8337393:	89 44 24 04          	mov    %eax,0x4(%esp)
 8337397:	8b 45 08             	mov    0x8(%ebp),%eax
 833739a:	89 04 24             	mov    %eax,(%esp)
 833739d:	e8 b8 fd ff ff       	call   833715a <_ZN13user_creature9CCreature8SetStateEP5CUserNS_14CREATURE_STATEE>
 83373a2:	b8 01 00 00 00       	mov    $0x1,%eax
 83373a7:	c9                   	leave
 83373a8:	c3                   	ret
 83373a9:	90                   	nop

```

```c
// user_creature::CCreature::Dismantle @ 0x8337382

/* user_creature::CCreature::Dismantle(CUser*) */

undefined4 __thiscall user_creature::CCreature::Dismantle(CCreature *this,CUser *param_1)

{
  SetState(this,param_1,2);
  return 1;
}

```

---

## Equip

```asm
// === 08337330 user_creature::CCreature::Equip  [0x08337330-0x8337381] ===
 8337330:	55                   	push   %ebp
 8337331:	89 e5                	mov    %esp,%ebp
 8337333:	83 ec 18             	sub    $0x18,%esp
 8337336:	8b 45 0c             	mov    0xc(%ebp),%eax
 8337339:	89 04 24             	mov    %eax,(%esp)
 833733c:	e8 27 7a 34 00       	call   867ed68 <_ZN5CUser11is_fightingEv>
 8337341:	84 c0                	test   %al,%al
 8337343:	74 1c                	je     8337361 <_ZN13user_creature9CCreature5EquipEP5CUser+0x31>
 8337345:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 833734c:	00 
 833734d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8337350:	89 44 24 04          	mov    %eax,0x4(%esp)
 8337354:	8b 45 08             	mov    0x8(%ebp),%eax
 8337357:	89 04 24             	mov    %eax,(%esp)
 833735a:	e8 fb fd ff ff       	call   833715a <_ZN13user_creature9CCreature8SetStateEP5CUserNS_14CREATURE_STATEE>
 833735f:	eb 1a                	jmp    833737b <_ZN13user_creature9CCreature5EquipEP5CUser+0x4b>
 8337361:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 8337368:	00 
 8337369:	8b 45 0c             	mov    0xc(%ebp),%eax
 833736c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8337370:	8b 45 08             	mov    0x8(%ebp),%eax
 8337373:	89 04 24             	mov    %eax,(%esp)
 8337376:	e8 df fd ff ff       	call   833715a <_ZN13user_creature9CCreature8SetStateEP5CUserNS_14CREATURE_STATEE>
 833737b:	b8 01 00 00 00       	mov    $0x1,%eax
 8337380:	c9                   	leave
 8337381:	c3                   	ret

```

```c
// user_creature::CCreature::Equip @ 0x8337330

/* user_creature::CCreature::Equip(CUser*) */

undefined4 __thiscall user_creature::CCreature::Equip(CCreature *this,CUser *param_1)

{
  char cVar1;
  
  cVar1 = CUser::is_fighting(param_1);
  if (cVar1 == '\0') {
    SetState(this,param_1,3);
  }
  else {
    SetState(this,param_1,1);
  }
  return 1;
}

```

---

## EventEvolute

```asm
// === 0833db2e user_creature::CCreature::EventEvolute  [0x0833db2e-0x833debb] ===
 833db2e:	55                   	push   %ebp
 833db2f:	89 e5                	mov    %esp,%ebp
 833db31:	56                   	push   %esi
 833db32:	53                   	push   %ebx
 833db33:	81 ec 90 00 00 00    	sub    $0x90,%esp
 833db39:	8b 45 08             	mov    0x8(%ebp),%eax
 833db3c:	8b 40 44             	mov    0x44(%eax),%eax
 833db3f:	85 c0                	test   %eax,%eax
 833db41:	75 63                	jne    833dba6 <_ZN13user_creature9CCreature12EventEvoluteEP5CUserii+0x78>
 833db43:	8b 45 08             	mov    0x8(%ebp),%eax
 833db46:	89 04 24             	mov    %eax,(%esp)
 833db49:	e8 56 14 00 00       	call   833efa4 <_ZN13user_creature13CCreatureItem9GetItemIdEv>
 833db4e:	89 c3                	mov    %eax,%ebx
 833db50:	8b 45 0c             	mov    0xc(%ebp),%eax
 833db53:	89 04 24             	mov    %eax,(%esp)
 833db56:	e8 21 c8 d9 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 833db5b:	0f b7 f0             	movzwl %ax,%esi
 833db5e:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 833db65:	00 
 833db66:	c7 44 24 08 cc 10 00 	movl   $0x10cc,0x8(%esp)
 833db6d:	00 
 833db6e:	c7 44 24 04 20 ea c2 	movl   $0x8c2ea20,0x4(%esp)
 833db75:	08 
 833db76:	8d 45 b0             	lea    -0x50(%ebp),%eax
 833db79:	89 04 24             	mov    %eax,(%esp)
 833db7c:	e8 97 1b 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 833db81:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 833db85:	89 74 24 08          	mov    %esi,0x8(%esp)
 833db89:	c7 44 24 04 10 dc c2 	movl   $0x8c2dc10,0x4(%esp)
 833db90:	08 
 833db91:	8d 45 b0             	lea    -0x50(%ebp),%eax
 833db94:	89 04 24             	mov    %eax,(%esp)
 833db97:	e8 ec 1b 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 833db9c:	bb 00 00 00 00       	mov    $0x0,%ebx
 833dba1:	e9 09 03 00 00       	jmp    833deaf <_ZN13user_creature9CCreature12EventEvoluteEP5CUserii+0x381>
 833dba6:	8b 45 10             	mov    0x10(%ebp),%eax
 833dba9:	89 44 24 04          	mov    %eax,0x4(%esp)
 833dbad:	8b 45 08             	mov    0x8(%ebp),%eax
 833dbb0:	89 04 24             	mov    %eax,(%esp)
 833dbb3:	e8 e4 9a ff ff       	call   833769c <_ZN13user_creature9CCreature13GetCreatureIdEi>
 833dbb8:	89 45 d0             	mov    %eax,-0x30(%ebp)
 833dbbb:	e8 10 90 ff ff       	call   8336bd0 <_ZN13user_creature28GetInstanceCreatureScriptMgrEv>
 833dbc0:	8b 55 d0             	mov    -0x30(%ebp),%edx
 833dbc3:	89 54 24 04          	mov    %edx,0x4(%esp)
 833dbc7:	89 04 24             	mov    %eax,(%esp)
 833dbca:	e8 cb f8 ff ff       	call   833d49a <_ZN13user_creature18CCreatureScriptMgr18FindCreatureScriptEi>
 833dbcf:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 833dbd2:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 833dbd6:	75 0a                	jne    833dbe2 <_ZN13user_creature9CCreature12EventEvoluteEP5CUserii+0xb4>
 833dbd8:	bb 00 00 00 00       	mov    $0x0,%ebx
 833dbdd:	e9 cd 02 00 00       	jmp    833deaf <_ZN13user_creature9CCreature12EventEvoluteEP5CUserii+0x381>
 833dbe2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 833dbe5:	89 04 24             	mov    %eax,(%esp)
 833dbe8:	e8 3b 15 00 00       	call   833f128 <_ZN13user_creature15CCreatureScript9GetItemIdEv>
 833dbed:	89 45 d8             	mov    %eax,-0x28(%ebp)
 833dbf0:	8b 45 08             	mov    0x8(%ebp),%eax
 833dbf3:	0f b6 40 4c          	movzbl 0x4c(%eax),%eax
 833dbf7:	88 45 df             	mov    %al,-0x21(%ebp)
 833dbfa:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 833dbfd:	89 04 24             	mov    %eax,(%esp)
 833dc00:	e8 1b 17 00 00       	call   833f320 <_ZN13user_creature15CCreatureScript18IsItemGrowCreatureEv>
 833dc05:	83 f0 01             	xor    $0x1,%eax
 833dc08:	84 c0                	test   %al,%al
 833dc0a:	74 12                	je     833dc1e <_ZN13user_creature9CCreature12EventEvoluteEP5CUserii+0xf0>
 833dc0c:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 833dc10:	83 f0 01             	xor    $0x1,%eax
 833dc13:	84 c0                	test   %al,%al
 833dc15:	74 07                	je     833dc1e <_ZN13user_creature9CCreature12EventEvoluteEP5CUserii+0xf0>
 833dc17:	b8 01 00 00 00       	mov    $0x1,%eax
 833dc1c:	eb 05                	jmp    833dc23 <_ZN13user_creature9CCreature12EventEvoluteEP5CUserii+0xf5>
 833dc1e:	b8 00 00 00 00       	mov    $0x0,%eax
 833dc23:	84 c0                	test   %al,%al
 833dc25:	74 54                	je     833dc7b <_ZN13user_creature9CCreature12EventEvoluteEP5CUserii+0x14d>
 833dc27:	8b 45 08             	mov    0x8(%ebp),%eax
 833dc2a:	8b 40 30             	mov    0x30(%eax),%eax
 833dc2d:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 833dc30:	8b 45 08             	mov    0x8(%ebp),%eax
 833dc33:	8b 40 44             	mov    0x44(%eax),%eax
 833dc36:	89 04 24             	mov    %eax,(%esp)
 833dc39:	e8 18 17 00 00       	call   833f356 <_ZN13user_creature15CCreatureScript26GetGrowItemCountforLevelUpEv>
 833dc3e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 833dc41:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 833dc45:	75 07                	jne    833dc4e <_ZN13user_creature9CCreature12EventEvoluteEP5CUserii+0x120>
 833dc47:	c7 45 f0 19 00 00 00 	movl   $0x19,-0x10(%ebp)
 833dc4e:	0f b7 45 a6          	movzwl -0x5a(%ebp),%eax
 833dc52:	98                   	cwtl
 833dc53:	89 c2                	mov    %eax,%edx
 833dc55:	c1 fa 1f             	sar    $0x1f,%edx
 833dc58:	f7 7d f0             	idivl  -0x10(%ebp)
 833dc5b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 833dc5e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833dc61:	8d 58 01             	lea    0x1(%eax),%ebx
 833dc64:	e8 32 e5 d8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 833dc69:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 833dc6d:	89 04 24             	mov    %eax,(%esp)
 833dc70:	e8 c7 28 02 00       	call   836053c <_ZNK12CDataManager22get_creature_level_expEi>
 833dc75:	8b 55 08             	mov    0x8(%ebp),%edx
 833dc78:	89 42 30             	mov    %eax,0x30(%edx)
 833dc7b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 833dc7e:	89 44 24 04          	mov    %eax,0x4(%esp)
 833dc82:	8b 45 08             	mov    0x8(%ebp),%eax
 833dc85:	89 04 24             	mov    %eax,(%esp)
 833dc88:	e8 21 99 ff ff       	call   83375ae <_ZN13user_creature9CCreature9SetItemIdEi>
 833dc8d:	e8 09 e5 d8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 833dc92:	8b 55 d8             	mov    -0x28(%ebp),%edx
 833dc95:	89 54 24 04          	mov    %edx,0x4(%esp)
 833dc99:	89 04 24             	mov    %eax,(%esp)
 833dc9c:	e8 91 1d 02 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 833dca1:	89 45 e0             	mov    %eax,-0x20(%ebp)
 833dca4:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 833dca8:	75 0a                	jne    833dcb4 <_ZN13user_creature9CCreature12EventEvoluteEP5CUserii+0x186>
 833dcaa:	bb 00 00 00 00       	mov    $0x0,%ebx
 833dcaf:	e9 fb 01 00 00       	jmp    833deaf <_ZN13user_creature9CCreature12EventEvoluteEP5CUserii+0x381>
 833dcb4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 833dcb7:	89 04 24             	mov    %eax,(%esp)
 833dcba:	e8 a1 2f dd ff       	call   8110c60 <_ZNK5CItem15getUsablePeriodEv>
 833dcbf:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 833dcc2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 833dcc5:	89 04 24             	mov    %eax,(%esp)
 833dcc8:	e8 39 36 db ff       	call   80f1306 <_ZNK5CItem17getExpirationDateEv>
 833dccd:	89 45 e8             	mov    %eax,-0x18(%ebp)
 833dcd0:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 833dcd4:	75 11                	jne    833dce7 <_ZN13user_creature9CCreature12EventEvoluteEP5CUserii+0x1b9>
 833dcd6:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 833dcda:	74 0b                	je     833dce7 <_ZN13user_creature9CCreature12EventEvoluteEP5CUserii+0x1b9>
 833dcdc:	8b 45 08             	mov    0x8(%ebp),%eax
 833dcdf:	8b 55 e8             	mov    -0x18(%ebp),%edx
 833dce2:	89 50 18             	mov    %edx,0x18(%eax)
 833dce5:	eb 16                	jmp    833dcfd <_ZN13user_creature9CCreature12EventEvoluteEP5CUserii+0x1cf>
 833dce7:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 833dceb:	75 10                	jne    833dcfd <_ZN13user_creature9CCreature12EventEvoluteEP5CUserii+0x1cf>
 833dced:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 833dcf1:	75 0a                	jne    833dcfd <_ZN13user_creature9CCreature12EventEvoluteEP5CUserii+0x1cf>
 833dcf3:	8b 45 08             	mov    0x8(%ebp),%eax
 833dcf6:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 833dcfd:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 833dd04:	8b 45 0c             	mov    0xc(%ebp),%eax
 833dd07:	89 04 24             	mov    %eax,(%esp)
 833dd0a:	e8 7f c5 d9 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 833dd0f:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 833dd16:	00 
 833dd17:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 833dd1e:	00 
 833dd1f:	89 04 24             	mov    %eax,(%esp)
 833dd22:	e8 87 e5 1b 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 833dd27:	89 45 ec             	mov    %eax,-0x14(%ebp)
 833dd2a:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 833dd2e:	75 0a                	jne    833dd3a <_ZN13user_creature9CCreature12EventEvoluteEP5CUserii+0x20c>
 833dd30:	bb 00 00 00 00       	mov    $0x0,%ebx
 833dd35:	e9 75 01 00 00       	jmp    833deaf <_ZN13user_creature9CCreature12EventEvoluteEP5CUserii+0x381>
 833dd3a:	8b 45 08             	mov    0x8(%ebp),%eax
 833dd3d:	89 04 24             	mov    %eax,(%esp)
 833dd40:	e8 5f 12 00 00       	call   833efa4 <_ZN13user_creature13CCreatureItem9GetItemIdEv>
 833dd45:	89 c2                	mov    %eax,%edx
 833dd47:	8b 45 ec             	mov    -0x14(%ebp),%eax
 833dd4a:	89 50 02             	mov    %edx,0x2(%eax)
 833dd4d:	8b 45 0c             	mov    0xc(%ebp),%eax
 833dd50:	89 44 24 08          	mov    %eax,0x8(%esp)
 833dd54:	c7 44 24 04 8a 00 00 	movl   $0x8a,0x4(%esp)
 833dd5b:	00 
 833dd5c:	8d 45 a8             	lea    -0x58(%ebp),%eax
 833dd5f:	89 04 24             	mov    %eax,(%esp)
 833dd62:	e8 47 1b 00 00       	call   833f8ae <_ZN13user_creature12CDBMsgSenderC1E19ENUM_INTERNALPACKETP5CUser>
 833dd67:	8b 45 08             	mov    0x8(%ebp),%eax
 833dd6a:	8b 70 30             	mov    0x30(%eax),%esi
 833dd6d:	8b 45 08             	mov    0x8(%ebp),%eax
 833dd70:	89 04 24             	mov    %eax,(%esp)
 833dd73:	e8 2c 12 00 00       	call   833efa4 <_ZN13user_creature13CCreatureItem9GetItemIdEv>
 833dd78:	89 c3                	mov    %eax,%ebx
 833dd7a:	8b 45 08             	mov    0x8(%ebp),%eax
 833dd7d:	89 04 24             	mov    %eax,(%esp)
 833dd80:	e8 39 12 00 00       	call   833efbe <_ZN13user_creature13CCreatureItem6GetUidEv>
 833dd85:	89 74 24 0c          	mov    %esi,0xc(%esp)
 833dd89:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 833dd8d:	89 44 24 04          	mov    %eax,0x4(%esp)
 833dd91:	8d 45 a8             	lea    -0x58(%ebp),%eax
 833dd94:	89 04 24             	mov    %eax,(%esp)
 833dd97:	e8 40 20 00 00       	call   833fddc <_ZN13user_creature12CDBMsgSender20EventEvoluteCreatureEiii>
 833dd9c:	83 f0 01             	xor    $0x1,%eax
 833dd9f:	84 c0                	test   %al,%al
 833dda1:	74 52                	je     833ddf5 <_ZN13user_creature9CCreature12EventEvoluteEP5CUserii+0x2c7>
 833dda3:	8b 45 0c             	mov    0xc(%ebp),%eax
 833dda6:	89 04 24             	mov    %eax,(%esp)
 833dda9:	e8 ce c5 d9 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 833ddae:	0f b7 d8             	movzwl %ax,%ebx
 833ddb1:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 833ddb8:	00 
 833ddb9:	c7 44 24 08 04 11 00 	movl   $0x1104,0x8(%esp)
 833ddc0:	00 
 833ddc1:	c7 44 24 04 20 ea c2 	movl   $0x8c2ea20,0x4(%esp)
 833ddc8:	08 
 833ddc9:	8d 45 c0             	lea    -0x40(%ebp),%eax
 833ddcc:	89 04 24             	mov    %eax,(%esp)
 833ddcf:	e8 44 19 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 833ddd4:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 833ddd8:	c7 44 24 04 27 d8 c2 	movl   $0x8c2d827,0x4(%esp)
 833dddf:	08 
 833dde0:	8d 45 c0             	lea    -0x40(%ebp),%eax
 833dde3:	89 04 24             	mov    %eax,(%esp)
 833dde6:	e8 9d 19 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 833ddeb:	bb 00 00 00 00       	mov    $0x0,%ebx
 833ddf0:	e9 af 00 00 00       	jmp    833dea4 <_ZN13user_creature9CCreature12EventEvoluteEP5CUserii+0x376>
 833ddf5:	8d 45 a8             	lea    -0x58(%ebp),%eax
 833ddf8:	89 04 24             	mov    %eax,(%esp)
 833ddfb:	e8 50 1b 00 00       	call   833f950 <_ZN13user_creature12CDBMsgSender4SendEv>
 833de00:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 833de07:	00 
 833de08:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 833de0f:	00 
 833de10:	8b 45 0c             	mov    0xc(%ebp),%eax
 833de13:	89 44 24 04          	mov    %eax,0x4(%esp)
 833de17:	8d 45 84             	lea    -0x7c(%ebp),%eax
 833de1a:	89 04 24             	mov    %eax,(%esp)
 833de1d:	e8 08 25 00 00       	call   834032a <_ZN13user_creature17CPacketRespondentC1EP5CUserii>
 833de22:	8b 45 14             	mov    0x14(%ebp),%eax
 833de25:	89 44 24 04          	mov    %eax,0x4(%esp)
 833de29:	8d 45 84             	lea    -0x7c(%ebp),%eax
 833de2c:	89 04 24             	mov    %eax,(%esp)
 833de2f:	e8 0e 2a 00 00       	call   8340842 <_ZN13user_creature17CPacketRespondent29MakeNotipacketEvoluteCreatureEi>
 833de34:	8d 45 84             	lea    -0x7c(%ebp),%eax
 833de37:	89 04 24             	mov    %eax,(%esp)
 833de3a:	e8 79 26 00 00       	call   83404b8 <_ZN13user_creature17CPacketRespondent20SendAccordingToPlaceEv>
 833de3f:	c7 44 24 0c 16 00 00 	movl   $0x16,0xc(%esp)
 833de46:	00 
 833de47:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 833de4e:	00 
 833de4f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 833de56:	00 
 833de57:	8b 45 0c             	mov    0xc(%ebp),%eax
 833de5a:	89 04 24             	mov    %eax,(%esp)
 833de5d:	e8 f8 e7 33 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 833de62:	bb 01 00 00 00       	mov    $0x1,%ebx
 833de67:	8d 45 84             	lea    -0x7c(%ebp),%eax
 833de6a:	89 04 24             	mov    %eax,(%esp)
 833de6d:	e8 f8 24 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 833de72:	eb 30                	jmp    833dea4 <_ZN13user_creature9CCreature12EventEvoluteEP5CUserii+0x376>
 833de74:	89 d3                	mov    %edx,%ebx
 833de76:	89 c6                	mov    %eax,%esi
 833de78:	8d 45 84             	lea    -0x7c(%ebp),%eax
 833de7b:	89 04 24             	mov    %eax,(%esp)
 833de7e:	e8 e7 24 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 833de83:	89 f0                	mov    %esi,%eax
 833de85:	89 da                	mov    %ebx,%edx
 833de87:	eb 00                	jmp    833de89 <_ZN13user_creature9CCreature12EventEvoluteEP5CUserii+0x35b>
 833de89:	89 d3                	mov    %edx,%ebx
 833de8b:	89 c6                	mov    %eax,%esi
 833de8d:	8d 45 a8             	lea    -0x58(%ebp),%eax
 833de90:	89 04 24             	mov    %eax,(%esp)
 833de93:	e8 40 1a 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 833de98:	89 f0                	mov    %esi,%eax
 833de9a:	89 da                	mov    %ebx,%edx
 833de9c:	89 04 24             	mov    %eax,(%esp)
 833de9f:	e8 ac 58 7a 00       	call   8ae3750 <_Unwind_Resume>
 833dea4:	8d 45 a8             	lea    -0x58(%ebp),%eax
 833dea7:	89 04 24             	mov    %eax,(%esp)
 833deaa:	e8 29 1a 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 833deaf:	89 d8                	mov    %ebx,%eax
 833deb1:	81 c4 90 00 00 00    	add    $0x90,%esp
 833deb7:	5b                   	pop    %ebx
 833deb8:	5e                   	pop    %esi
 833deb9:	5d                   	pop    %ebp
 833deba:	c3                   	ret
 833debb:	90                   	nop

```

```c
// user_creature::CCreature::EventEvolute @ 0x833db2e

/* user_creature::CCreature::EventEvolute(CUser*, int, int) */

bool __thiscall
user_creature::CCreature::EventEvolute(CCreature *this,CUser *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  CDataManager *pCVar5;
  CInventory *this_00;
  int iVar6;
  int iVar7;
  bool bVar8;
  CPacketRespondent local_80 [32];
  undefined4 local_60;
  CDBMsgSender local_5c [8];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  undefined4 local_34;
  CCreatureScript *local_30;
  int local_2c;
  CCreature local_25;
  CItem *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (*(int *)(this + 0x44) == 0) {
    uVar2 = CCreatureItem::GetItemId((CCreatureItem *)this);
    uVar3 = CUser::get_unique_id(param_1);
    cMyTrace::cMyTrace(local_54,"bool user_creature::CCreature::EventEvolute(CUser*, int, int)",
                       0x10cc,5);
    cMyTrace::operator()
              (local_54,
               "cannot event evolute because it haven\'t creature script uid(%d), creature id(%d) \n"
               ,uVar3 & 0xffff,uVar2);
    bVar8 = false;
  }
  else {
    local_34 = GetCreatureId(this,param_2);
    iVar4 = GetInstanceCreatureScriptMgr();
    local_30 = (CCreatureScript *)CCreatureScriptMgr::FindCreatureScript(iVar4);
    if (local_30 == (CCreatureScript *)0x0) {
      bVar8 = false;
    }
    else {
      local_2c = CCreatureScript::GetItemId(local_30);
      local_25 = this[0x4c];
      cVar1 = CCreatureScript::IsItemGrowCreature(local_30);
      if ((cVar1 == '\x01') || (local_25 == (CCreature)0x1)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        local_60 = *(undefined4 *)(this + 0x30);
        local_14 = CCreatureScript::GetGrowItemCountforLevelUp(*(CCreatureScript **)(this + 0x44));
        if (local_14 == 0) {
          local_14 = 0x19;
        }
        local_10 = (int)local_60._2_2_ / local_14;
        iVar4 = local_10 + 1;
        pCVar5 = (CDataManager *)G_CDataManager();
        uVar2 = CDataManager::get_creature_level_exp(pCVar5,iVar4);
        *(undefined4 *)(this + 0x30) = uVar2;
      }
      SetItemId(this,local_2c);
      pCVar5 = (CDataManager *)G_CDataManager();
      local_24 = (CItem *)CDataManager::find_item(pCVar5,local_2c);
      if (local_24 == (CItem *)0x0) {
        bVar8 = false;
      }
      else {
        local_20 = CItem::getUsablePeriod(local_24);
        local_1c = CItem::getExpirationDate(local_24);
        if ((local_20 == 0) && (local_1c != 0)) {
          *(int *)(this + 0x18) = local_1c;
        }
        else if ((local_20 == 0) && (local_1c == 0)) {
          *(undefined4 *)(this + 0x18) = 0;
        }
        local_18 = 0;
        this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        local_18 = CInventory::GetInvenRef(this_00,0,0x16);
        if (local_18 == 0) {
          bVar8 = false;
        }
        else {
          uVar2 = CCreatureItem::GetItemId((CCreatureItem *)this);
          *(undefined4 *)(local_18 + 2) = uVar2;
          CDBMsgSender::CDBMsgSender(local_5c,0x8a,param_1);
          iVar4 = *(int *)(this + 0x30);
          iVar6 = CCreatureItem::GetItemId((CCreatureItem *)this);
          iVar7 = CCreatureItem::GetUid((CCreatureItem *)this);
                    /* try { // try from 0833dd97 to 0833de21 has its CatchHandler @ 0833de89 */
          cVar1 = CDBMsgSender::EventEvoluteCreature(local_5c,iVar7,iVar6,iVar4);
          bVar8 = cVar1 == '\x01';
          if (bVar8) {
            CDBMsgSender::Send(local_5c);
            CPacketRespondent::CPacketRespondent(local_80,param_1,0,0);
                    /* try { // try from 0833de2f to 0833de61 has its CatchHandler @ 0833de74 */
            CPacketRespondent::MakeNotipacketEvoluteCreature(local_80,param_3);
            CPacketRespondent::SendAccordingToPlace(local_80);
            CUser::SendUpdateItemList(param_1,1,3,0x16);
                    /* try { // try from 0833de6d to 0833de71 has its CatchHandler @ 0833de89 */
            CPacketRespondent::~CPacketRespondent(local_80);
          }
          else {
            uVar3 = CUser::get_unique_id(param_1);
            cMyTrace::cMyTrace(local_44,
                               "bool user_creature::CCreature::EventEvolute(CUser*, int, int)",
                               0x1104,5);
            cMyTrace::operator()(local_44,"cannot write db uid(%d)\n",uVar3 & 0xffff);
          }
          CDBMsgSender::~CDBMsgSender(local_5c);
        }
      }
    }
  }
  return bVar8;
}

```

---

## Evolute

```asm
// === 083381ea user_creature::CCreature::Evolute  [0x083381ea-0x8338477] ===
 83381ea:	55                   	push   %ebp
 83381eb:	89 e5                	mov    %esp,%ebp
 83381ed:	56                   	push   %esi
 83381ee:	53                   	push   %ebx
 83381ef:	83 ec 70             	sub    $0x70,%esp
 83381f2:	8b 45 08             	mov    0x8(%ebp),%eax
 83381f5:	8b 40 44             	mov    0x44(%eax),%eax
 83381f8:	85 c0                	test   %eax,%eax
 83381fa:	75 63                	jne    833825f <_ZN13user_creature9CCreature7EvoluteEP5CUser+0x75>
 83381fc:	8b 45 08             	mov    0x8(%ebp),%eax
 83381ff:	89 04 24             	mov    %eax,(%esp)
 8338202:	e8 9d 6d 00 00       	call   833efa4 <_ZN13user_creature13CCreatureItem9GetItemIdEv>
 8338207:	89 c3                	mov    %eax,%ebx
 8338209:	8b 45 0c             	mov    0xc(%ebp),%eax
 833820c:	89 04 24             	mov    %eax,(%esp)
 833820f:	e8 68 21 da ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8338214:	0f b7 f0             	movzwl %ax,%esi
 8338217:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 833821e:	00 
 833821f:	c7 44 24 08 43 07 00 	movl   $0x743,0x8(%esp)
 8338226:	00 
 8338227:	c7 44 24 04 a0 f3 c2 	movl   $0x8c2f3a0,0x4(%esp)
 833822e:	08 
 833822f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8338232:	89 04 24             	mov    %eax,(%esp)
 8338235:	e8 de 74 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 833823a:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 833823e:	89 74 24 08          	mov    %esi,0x8(%esp)
 8338242:	c7 44 24 04 40 d8 c2 	movl   $0x8c2d840,0x4(%esp)
 8338249:	08 
 833824a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 833824d:	89 04 24             	mov    %eax,(%esp)
 8338250:	e8 33 75 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8338255:	bb 00 00 00 00       	mov    $0x0,%ebx
 833825a:	e9 10 02 00 00       	jmp    833846f <_ZN13user_creature9CCreature7EvoluteEP5CUser+0x285>
 833825f:	8b 45 08             	mov    0x8(%ebp),%eax
 8338262:	8b 40 44             	mov    0x44(%eax),%eax
 8338265:	89 04 24             	mov    %eax,(%esp)
 8338268:	e8 d7 6e 00 00       	call   833f144 <_ZN13user_creature15CCreatureScript22GetEvolutionCreatureIdEv>
 833826d:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8338270:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8338274:	75 0a                	jne    8338280 <_ZN13user_creature9CCreature7EvoluteEP5CUser+0x96>
 8338276:	bb 00 00 00 00       	mov    $0x0,%ebx
 833827b:	e9 ef 01 00 00       	jmp    833846f <_ZN13user_creature9CCreature7EvoluteEP5CUser+0x285>
 8338280:	e8 4b e9 ff ff       	call   8336bd0 <_ZN13user_creature28GetInstanceCreatureScriptMgrEv>
 8338285:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8338288:	89 54 24 04          	mov    %edx,0x4(%esp)
 833828c:	89 04 24             	mov    %eax,(%esp)
 833828f:	e8 06 52 00 00       	call   833d49a <_ZN13user_creature18CCreatureScriptMgr18FindCreatureScriptEi>
 8338294:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8338297:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 833829b:	75 0a                	jne    83382a7 <_ZN13user_creature9CCreature7EvoluteEP5CUser+0xbd>
 833829d:	bb 00 00 00 00       	mov    $0x0,%ebx
 83382a2:	e9 c8 01 00 00       	jmp    833846f <_ZN13user_creature9CCreature7EvoluteEP5CUser+0x285>
 83382a7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 83382aa:	89 04 24             	mov    %eax,(%esp)
 83382ad:	e8 76 6e 00 00       	call   833f128 <_ZN13user_creature15CCreatureScript9GetItemIdEv>
 83382b2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 83382b5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 83382b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 83382bc:	8b 45 08             	mov    0x8(%ebp),%eax
 83382bf:	89 04 24             	mov    %eax,(%esp)
 83382c2:	e8 e7 f2 ff ff       	call   83375ae <_ZN13user_creature9CCreature9SetItemIdEi>
 83382c7:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 83382ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 83382d1:	89 04 24             	mov    %eax,(%esp)
 83382d4:	e8 b5 1f da ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 83382d9:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 83382e0:	00 
 83382e1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83382e8:	00 
 83382e9:	89 04 24             	mov    %eax,(%esp)
 83382ec:	e8 bd 3f 1c 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 83382f1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83382f4:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 83382f8:	75 0a                	jne    8338304 <_ZN13user_creature9CCreature7EvoluteEP5CUser+0x11a>
 83382fa:	bb 00 00 00 00       	mov    $0x0,%ebx
 83382ff:	e9 6b 01 00 00       	jmp    833846f <_ZN13user_creature9CCreature7EvoluteEP5CUser+0x285>
 8338304:	8b 45 08             	mov    0x8(%ebp),%eax
 8338307:	89 04 24             	mov    %eax,(%esp)
 833830a:	e8 95 6c 00 00       	call   833efa4 <_ZN13user_creature13CCreatureItem9GetItemIdEv>
 833830f:	89 c2                	mov    %eax,%edx
 8338311:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8338314:	89 50 02             	mov    %edx,0x2(%eax)
 8338317:	8b 45 0c             	mov    0xc(%ebp),%eax
 833831a:	89 44 24 08          	mov    %eax,0x8(%esp)
 833831e:	c7 44 24 04 8a 00 00 	movl   $0x8a,0x4(%esp)
 8338325:	00 
 8338326:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8338329:	89 04 24             	mov    %eax,(%esp)
 833832c:	e8 7d 75 00 00       	call   833f8ae <_ZN13user_creature12CDBMsgSenderC1E19ENUM_INTERNALPACKETP5CUser>
 8338331:	8b 45 08             	mov    0x8(%ebp),%eax
 8338334:	89 04 24             	mov    %eax,(%esp)
 8338337:	e8 68 6c 00 00       	call   833efa4 <_ZN13user_creature13CCreatureItem9GetItemIdEv>
 833833c:	89 c3                	mov    %eax,%ebx
 833833e:	8b 45 08             	mov    0x8(%ebp),%eax
 8338341:	89 04 24             	mov    %eax,(%esp)
 8338344:	e8 75 6c 00 00       	call   833efbe <_ZN13user_creature13CCreatureItem6GetUidEv>
 8338349:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 833834d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8338351:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8338354:	89 04 24             	mov    %eax,(%esp)
 8338357:	e8 18 7a 00 00       	call   833fd74 <_ZN13user_creature12CDBMsgSender15EvoluteCreatureEii>
 833835c:	83 f0 01             	xor    $0x1,%eax
 833835f:	84 c0                	test   %al,%al
 8338361:	74 52                	je     83383b5 <_ZN13user_creature9CCreature7EvoluteEP5CUser+0x1cb>
 8338363:	8b 45 0c             	mov    0xc(%ebp),%eax
 8338366:	89 04 24             	mov    %eax,(%esp)
 8338369:	e8 0e 20 da ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 833836e:	0f b7 d8             	movzwl %ax,%ebx
 8338371:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8338378:	00 
 8338379:	c7 44 24 08 63 07 00 	movl   $0x763,0x8(%esp)
 8338380:	00 
 8338381:	c7 44 24 04 a0 f3 c2 	movl   $0x8c2f3a0,0x4(%esp)
 8338388:	08 
 8338389:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833838c:	89 04 24             	mov    %eax,(%esp)
 833838f:	e8 84 73 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8338394:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8338398:	c7 44 24 04 27 d8 c2 	movl   $0x8c2d827,0x4(%esp)
 833839f:	08 
 83383a0:	8d 45 d8             	lea    -0x28(%ebp),%eax
 83383a3:	89 04 24             	mov    %eax,(%esp)
 83383a6:	e8 dd 73 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83383ab:	bb 00 00 00 00       	mov    $0x0,%ebx
 83383b0:	e9 af 00 00 00       	jmp    8338464 <_ZN13user_creature9CCreature7EvoluteEP5CUser+0x27a>
 83383b5:	8d 45 c0             	lea    -0x40(%ebp),%eax
 83383b8:	89 04 24             	mov    %eax,(%esp)
 83383bb:	e8 90 75 00 00       	call   833f950 <_ZN13user_creature12CDBMsgSender4SendEv>
 83383c0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 83383c7:	00 
 83383c8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83383cf:	00 
 83383d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 83383d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 83383d7:	8d 45 a0             	lea    -0x60(%ebp),%eax
 83383da:	89 04 24             	mov    %eax,(%esp)
 83383dd:	e8 48 7f 00 00       	call   834032a <_ZN13user_creature17CPacketRespondentC1EP5CUserii>
 83383e2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83383e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 83383e9:	8d 45 a0             	lea    -0x60(%ebp),%eax
 83383ec:	89 04 24             	mov    %eax,(%esp)
 83383ef:	e8 4e 84 00 00       	call   8340842 <_ZN13user_creature17CPacketRespondent29MakeNotipacketEvoluteCreatureEi>
 83383f4:	8d 45 a0             	lea    -0x60(%ebp),%eax
 83383f7:	89 04 24             	mov    %eax,(%esp)
 83383fa:	e8 b9 80 00 00       	call   83404b8 <_ZN13user_creature17CPacketRespondent20SendAccordingToPlaceEv>
 83383ff:	c7 44 24 0c 16 00 00 	movl   $0x16,0xc(%esp)
 8338406:	00 
 8338407:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 833840e:	00 
 833840f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8338416:	00 
 8338417:	8b 45 0c             	mov    0xc(%ebp),%eax
 833841a:	89 04 24             	mov    %eax,(%esp)
 833841d:	e8 38 42 34 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 8338422:	bb 01 00 00 00       	mov    $0x1,%ebx
 8338427:	8d 45 a0             	lea    -0x60(%ebp),%eax
 833842a:	89 04 24             	mov    %eax,(%esp)
 833842d:	e8 38 7f 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 8338432:	eb 30                	jmp    8338464 <_ZN13user_creature9CCreature7EvoluteEP5CUser+0x27a>
 8338434:	89 d3                	mov    %edx,%ebx
 8338436:	89 c6                	mov    %eax,%esi
 8338438:	8d 45 a0             	lea    -0x60(%ebp),%eax
 833843b:	89 04 24             	mov    %eax,(%esp)
 833843e:	e8 27 7f 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 8338443:	89 f0                	mov    %esi,%eax
 8338445:	89 da                	mov    %ebx,%edx
 8338447:	eb 00                	jmp    8338449 <_ZN13user_creature9CCreature7EvoluteEP5CUser+0x25f>
 8338449:	89 d3                	mov    %edx,%ebx
 833844b:	89 c6                	mov    %eax,%esi
 833844d:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8338450:	89 04 24             	mov    %eax,(%esp)
 8338453:	e8 80 74 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 8338458:	89 f0                	mov    %esi,%eax
 833845a:	89 da                	mov    %ebx,%edx
 833845c:	89 04 24             	mov    %eax,(%esp)
 833845f:	e8 ec b2 7a 00       	call   8ae3750 <_Unwind_Resume>
 8338464:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8338467:	89 04 24             	mov    %eax,(%esp)
 833846a:	e8 69 74 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 833846f:	89 d8                	mov    %ebx,%eax
 8338471:	83 c4 70             	add    $0x70,%esp
 8338474:	5b                   	pop    %ebx
 8338475:	5e                   	pop    %esi
 8338476:	5d                   	pop    %ebp
 8338477:	c3                   	ret

```

```c
// user_creature::CCreature::Evolute @ 0x83381ea

/* user_creature::CCreature::Evolute(CUser*) */

bool __thiscall user_creature::CCreature::Evolute(CCreature *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  CInventory *this_00;
  int iVar5;
  bool bVar6;
  CPacketRespondent local_64 [32];
  CDBMsgSender local_44 [8];
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  int local_1c;
  CCreatureScript *local_18;
  int local_14;
  int local_10;
  
  if (*(int *)(this + 0x44) == 0) {
    uVar2 = CCreatureItem::GetItemId((CCreatureItem *)this);
    uVar3 = CUser::get_unique_id(param_1);
    cMyTrace::cMyTrace(local_3c,"bool user_creature::CCreature::Evolute(CUser*)",0x743,5);
    cMyTrace::operator()
              (local_3c,
               "cannot evolute because it haven\'t creature script uid(%d), creature id(%d) \n",
               uVar3 & 0xffff,uVar2);
    bVar6 = false;
  }
  else {
    local_1c = CCreatureScript::GetEvolutionCreatureId(*(CCreatureScript **)(this + 0x44));
    if (local_1c == 0) {
      bVar6 = false;
    }
    else {
      iVar4 = GetInstanceCreatureScriptMgr();
      local_18 = (CCreatureScript *)CCreatureScriptMgr::FindCreatureScript(iVar4);
      if (local_18 == (CCreatureScript *)0x0) {
        bVar6 = false;
      }
      else {
        local_14 = CCreatureScript::GetItemId(local_18);
        SetItemId(this,local_14);
        local_10 = 0;
        this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        local_10 = CInventory::GetInvenRef(this_00,0,0x16);
        if (local_10 == 0) {
          bVar6 = false;
        }
        else {
          uVar2 = CCreatureItem::GetItemId((CCreatureItem *)this);
          *(undefined4 *)(local_10 + 2) = uVar2;
          CDBMsgSender::CDBMsgSender(local_44,0x8a,param_1);
          iVar4 = CCreatureItem::GetItemId((CCreatureItem *)this);
          iVar5 = CCreatureItem::GetUid((CCreatureItem *)this);
                    /* try { // try from 08338357 to 083383e1 has its CatchHandler @ 08338449 */
          cVar1 = CDBMsgSender::EvoluteCreature(local_44,iVar5,iVar4);
          bVar6 = cVar1 == '\x01';
          if (bVar6) {
            CDBMsgSender::Send(local_44);
            CPacketRespondent::CPacketRespondent(local_64,param_1,0,0);
                    /* try { // try from 083383ef to 08338421 has its CatchHandler @ 08338434 */
            CPacketRespondent::MakeNotipacketEvoluteCreature(local_64,local_1c);
            CPacketRespondent::SendAccordingToPlace(local_64);
            CUser::SendUpdateItemList(param_1,1,3,0x16);
                    /* try { // try from 0833842d to 08338431 has its CatchHandler @ 08338449 */
            CPacketRespondent::~CPacketRespondent(local_64);
          }
          else {
            uVar3 = CUser::get_unique_id(param_1);
            cMyTrace::cMyTrace(local_2c,"bool user_creature::CCreature::Evolute(CUser*)",0x763,5);
            cMyTrace::operator()(local_2c,"cannot write db uid(%d)\n",uVar3 & 0xffff);
          }
          CDBMsgSender::~CDBMsgSender(local_44);
        }
      }
    }
  }
  return bVar6;
}

```

---

## EvoluteMulty

```asm
// === 08338950 user_creature::CCreature::EvoluteMulty  [0x08338950-0x8338bf9] ===
 8338950:	55                   	push   %ebp
 8338951:	89 e5                	mov    %esp,%ebp
 8338953:	56                   	push   %esi
 8338954:	53                   	push   %ebx
 8338955:	83 ec 70             	sub    $0x70,%esp
 8338958:	8b 45 08             	mov    0x8(%ebp),%eax
 833895b:	8b 40 44             	mov    0x44(%eax),%eax
 833895e:	85 c0                	test   %eax,%eax
 8338960:	75 63                	jne    83389c5 <_ZN13user_creature9CCreature12EvoluteMultyEP5CUseri+0x75>
 8338962:	8b 45 08             	mov    0x8(%ebp),%eax
 8338965:	89 04 24             	mov    %eax,(%esp)
 8338968:	e8 37 66 00 00       	call   833efa4 <_ZN13user_creature13CCreatureItem9GetItemIdEv>
 833896d:	89 c3                	mov    %eax,%ebx
 833896f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8338972:	89 04 24             	mov    %eax,(%esp)
 8338975:	e8 02 1a da ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 833897a:	0f b7 f0             	movzwl %ax,%esi
 833897d:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8338984:	00 
 8338985:	c7 44 24 08 43 08 00 	movl   $0x843,0x8(%esp)
 833898c:	00 
 833898d:	c7 44 24 04 60 f3 c2 	movl   $0x8c2f360,0x4(%esp)
 8338994:	08 
 8338995:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8338998:	89 04 24             	mov    %eax,(%esp)
 833899b:	e8 78 6d 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83389a0:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 83389a4:	89 74 24 08          	mov    %esi,0x8(%esp)
 83389a8:	c7 44 24 04 40 d8 c2 	movl   $0x8c2d840,0x4(%esp)
 83389af:	08 
 83389b0:	8d 45 c8             	lea    -0x38(%ebp),%eax
 83389b3:	89 04 24             	mov    %eax,(%esp)
 83389b6:	e8 cd 6d 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83389bb:	bb 00 00 00 00       	mov    $0x0,%ebx
 83389c0:	e9 2b 02 00 00       	jmp    8338bf0 <_ZN13user_creature9CCreature12EvoluteMultyEP5CUseri+0x2a0>
 83389c5:	8b 45 08             	mov    0x8(%ebp),%eax
 83389c8:	8b 40 44             	mov    0x44(%eax),%eax
 83389cb:	8b 55 10             	mov    0x10(%ebp),%edx
 83389ce:	89 54 24 04          	mov    %edx,0x4(%esp)
 83389d2:	89 04 24             	mov    %eax,(%esp)
 83389d5:	e8 06 68 00 00       	call   833f1e0 <_ZN13user_creature15CCreatureScript20isEvoluationCreatureEi>
 83389da:	83 f0 01             	xor    $0x1,%eax
 83389dd:	84 c0                	test   %al,%al
 83389df:	74 0a                	je     83389eb <_ZN13user_creature9CCreature12EvoluteMultyEP5CUseri+0x9b>
 83389e1:	bb 00 00 00 00       	mov    $0x0,%ebx
 83389e6:	e9 05 02 00 00       	jmp    8338bf0 <_ZN13user_creature9CCreature12EvoluteMultyEP5CUseri+0x2a0>
 83389eb:	8b 45 10             	mov    0x10(%ebp),%eax
 83389ee:	89 45 e8             	mov    %eax,-0x18(%ebp)
 83389f1:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 83389f5:	75 0a                	jne    8338a01 <_ZN13user_creature9CCreature12EvoluteMultyEP5CUseri+0xb1>
 83389f7:	bb 00 00 00 00       	mov    $0x0,%ebx
 83389fc:	e9 ef 01 00 00       	jmp    8338bf0 <_ZN13user_creature9CCreature12EvoluteMultyEP5CUseri+0x2a0>
 8338a01:	e8 ca e1 ff ff       	call   8336bd0 <_ZN13user_creature28GetInstanceCreatureScriptMgrEv>
 8338a06:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8338a09:	89 54 24 04          	mov    %edx,0x4(%esp)
 8338a0d:	89 04 24             	mov    %eax,(%esp)
 8338a10:	e8 85 4a 00 00       	call   833d49a <_ZN13user_creature18CCreatureScriptMgr18FindCreatureScriptEi>
 8338a15:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8338a18:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8338a1c:	75 0a                	jne    8338a28 <_ZN13user_creature9CCreature12EvoluteMultyEP5CUseri+0xd8>
 8338a1e:	bb 00 00 00 00       	mov    $0x0,%ebx
 8338a23:	e9 c8 01 00 00       	jmp    8338bf0 <_ZN13user_creature9CCreature12EvoluteMultyEP5CUseri+0x2a0>
 8338a28:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8338a2b:	89 04 24             	mov    %eax,(%esp)
 8338a2e:	e8 f5 66 00 00       	call   833f128 <_ZN13user_creature15CCreatureScript9GetItemIdEv>
 8338a33:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8338a36:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8338a39:	89 44 24 04          	mov    %eax,0x4(%esp)
 8338a3d:	8b 45 08             	mov    0x8(%ebp),%eax
 8338a40:	89 04 24             	mov    %eax,(%esp)
 8338a43:	e8 66 eb ff ff       	call   83375ae <_ZN13user_creature9CCreature9SetItemIdEi>
 8338a48:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8338a4f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8338a52:	89 04 24             	mov    %eax,(%esp)
 8338a55:	e8 34 18 da ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8338a5a:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 8338a61:	00 
 8338a62:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8338a69:	00 
 8338a6a:	89 04 24             	mov    %eax,(%esp)
 8338a6d:	e8 3c 38 1c 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 8338a72:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8338a75:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8338a79:	75 0a                	jne    8338a85 <_ZN13user_creature9CCreature12EvoluteMultyEP5CUseri+0x135>
 8338a7b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8338a80:	e9 6b 01 00 00       	jmp    8338bf0 <_ZN13user_creature9CCreature12EvoluteMultyEP5CUseri+0x2a0>
 8338a85:	8b 45 08             	mov    0x8(%ebp),%eax
 8338a88:	89 04 24             	mov    %eax,(%esp)
 8338a8b:	e8 14 65 00 00       	call   833efa4 <_ZN13user_creature13CCreatureItem9GetItemIdEv>
 8338a90:	89 c2                	mov    %eax,%edx
 8338a92:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8338a95:	89 50 02             	mov    %edx,0x2(%eax)
 8338a98:	8b 45 0c             	mov    0xc(%ebp),%eax
 8338a9b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8338a9f:	c7 44 24 04 8a 00 00 	movl   $0x8a,0x4(%esp)
 8338aa6:	00 
 8338aa7:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8338aaa:	89 04 24             	mov    %eax,(%esp)
 8338aad:	e8 fc 6d 00 00       	call   833f8ae <_ZN13user_creature12CDBMsgSenderC1E19ENUM_INTERNALPACKETP5CUser>
 8338ab2:	8b 45 08             	mov    0x8(%ebp),%eax
 8338ab5:	89 04 24             	mov    %eax,(%esp)
 8338ab8:	e8 e7 64 00 00       	call   833efa4 <_ZN13user_creature13CCreatureItem9GetItemIdEv>
 8338abd:	89 c3                	mov    %eax,%ebx
 8338abf:	8b 45 08             	mov    0x8(%ebp),%eax
 8338ac2:	89 04 24             	mov    %eax,(%esp)
 8338ac5:	e8 f4 64 00 00       	call   833efbe <_ZN13user_creature13CCreatureItem6GetUidEv>
 8338aca:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8338ace:	89 44 24 04          	mov    %eax,0x4(%esp)
 8338ad2:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8338ad5:	89 04 24             	mov    %eax,(%esp)
 8338ad8:	e8 97 72 00 00       	call   833fd74 <_ZN13user_creature12CDBMsgSender15EvoluteCreatureEii>
 8338add:	83 f0 01             	xor    $0x1,%eax
 8338ae0:	84 c0                	test   %al,%al
 8338ae2:	74 52                	je     8338b36 <_ZN13user_creature9CCreature12EvoluteMultyEP5CUseri+0x1e6>
 8338ae4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8338ae7:	89 04 24             	mov    %eax,(%esp)
 8338aea:	e8 8d 18 da ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8338aef:	0f b7 d8             	movzwl %ax,%ebx
 8338af2:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8338af9:	00 
 8338afa:	c7 44 24 08 66 08 00 	movl   $0x866,0x8(%esp)
 8338b01:	00 
 8338b02:	c7 44 24 04 60 f3 c2 	movl   $0x8c2f360,0x4(%esp)
 8338b09:	08 
 8338b0a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8338b0d:	89 04 24             	mov    %eax,(%esp)
 8338b10:	e8 03 6c 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8338b15:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8338b19:	c7 44 24 04 27 d8 c2 	movl   $0x8c2d827,0x4(%esp)
 8338b20:	08 
 8338b21:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8338b24:	89 04 24             	mov    %eax,(%esp)
 8338b27:	e8 5c 6c 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8338b2c:	bb 00 00 00 00       	mov    $0x0,%ebx
 8338b31:	e9 af 00 00 00       	jmp    8338be5 <_ZN13user_creature9CCreature12EvoluteMultyEP5CUseri+0x295>
 8338b36:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8338b39:	89 04 24             	mov    %eax,(%esp)
 8338b3c:	e8 0f 6e 00 00       	call   833f950 <_ZN13user_creature12CDBMsgSender4SendEv>
 8338b41:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8338b48:	00 
 8338b49:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8338b50:	00 
 8338b51:	8b 45 0c             	mov    0xc(%ebp),%eax
 8338b54:	89 44 24 04          	mov    %eax,0x4(%esp)
 8338b58:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8338b5b:	89 04 24             	mov    %eax,(%esp)
 8338b5e:	e8 c7 77 00 00       	call   834032a <_ZN13user_creature17CPacketRespondentC1EP5CUserii>
 8338b63:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8338b66:	89 44 24 04          	mov    %eax,0x4(%esp)
 8338b6a:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8338b6d:	89 04 24             	mov    %eax,(%esp)
 8338b70:	e8 cd 7c 00 00       	call   8340842 <_ZN13user_creature17CPacketRespondent29MakeNotipacketEvoluteCreatureEi>
 8338b75:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8338b78:	89 04 24             	mov    %eax,(%esp)
 8338b7b:	e8 38 79 00 00       	call   83404b8 <_ZN13user_creature17CPacketRespondent20SendAccordingToPlaceEv>
 8338b80:	c7 44 24 0c 16 00 00 	movl   $0x16,0xc(%esp)
 8338b87:	00 
 8338b88:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 8338b8f:	00 
 8338b90:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8338b97:	00 
 8338b98:	8b 45 0c             	mov    0xc(%ebp),%eax
 8338b9b:	89 04 24             	mov    %eax,(%esp)
 8338b9e:	e8 b7 3a 34 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 8338ba3:	bb 01 00 00 00       	mov    $0x1,%ebx
 8338ba8:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8338bab:	89 04 24             	mov    %eax,(%esp)
 8338bae:	e8 b7 77 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 8338bb3:	eb 30                	jmp    8338be5 <_ZN13user_creature9CCreature12EvoluteMultyEP5CUseri+0x295>
 8338bb5:	89 d3                	mov    %edx,%ebx
 8338bb7:	89 c6                	mov    %eax,%esi
 8338bb9:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8338bbc:	89 04 24             	mov    %eax,(%esp)
 8338bbf:	e8 a6 77 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 8338bc4:	89 f0                	mov    %esi,%eax
 8338bc6:	89 da                	mov    %ebx,%edx
 8338bc8:	eb 00                	jmp    8338bca <_ZN13user_creature9CCreature12EvoluteMultyEP5CUseri+0x27a>
 8338bca:	89 d3                	mov    %edx,%ebx
 8338bcc:	89 c6                	mov    %eax,%esi
 8338bce:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8338bd1:	89 04 24             	mov    %eax,(%esp)
 8338bd4:	e8 ff 6c 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 8338bd9:	89 f0                	mov    %esi,%eax
 8338bdb:	89 da                	mov    %ebx,%edx
 8338bdd:	89 04 24             	mov    %eax,(%esp)
 8338be0:	e8 6b ab 7a 00       	call   8ae3750 <_Unwind_Resume>
 8338be5:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8338be8:	89 04 24             	mov    %eax,(%esp)
 8338beb:	e8 e8 6c 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 8338bf0:	89 d8                	mov    %ebx,%eax
 8338bf2:	83 c4 70             	add    $0x70,%esp
 8338bf5:	5b                   	pop    %ebx
 8338bf6:	5e                   	pop    %esi
 8338bf7:	5d                   	pop    %ebp
 8338bf8:	c3                   	ret
 8338bf9:	90                   	nop

```

```c
// user_creature::CCreature::EvoluteMulty @ 0x8338950

/* user_creature::CCreature::EvoluteMulty(CUser*, int) */

bool __thiscall user_creature::CCreature::EvoluteMulty(CCreature *this,CUser *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  CInventory *this_00;
  int iVar5;
  bool bVar6;
  CPacketRespondent local_64 [32];
  CDBMsgSender local_44 [8];
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  int local_1c;
  CCreatureScript *local_18;
  int local_14;
  int local_10;
  
  if (*(int *)(this + 0x44) == 0) {
    uVar2 = CCreatureItem::GetItemId((CCreatureItem *)this);
    uVar3 = CUser::get_unique_id(param_1);
    cMyTrace::cMyTrace(local_3c,"bool user_creature::CCreature::EvoluteMulty(CUser*, int)",0x843,5);
    cMyTrace::operator()
              (local_3c,
               "cannot evolute because it haven\'t creature script uid(%d), creature id(%d) \n",
               uVar3 & 0xffff,uVar2);
    bVar6 = false;
  }
  else {
    cVar1 = CCreatureScript::isEvoluationCreature(*(CCreatureScript **)(this + 0x44),param_2);
    if (cVar1 == '\x01') {
      local_1c = param_2;
      if (param_2 == 0) {
        bVar6 = false;
      }
      else {
        iVar4 = GetInstanceCreatureScriptMgr();
        local_18 = (CCreatureScript *)CCreatureScriptMgr::FindCreatureScript(iVar4);
        if (local_18 == (CCreatureScript *)0x0) {
          bVar6 = false;
        }
        else {
          local_14 = CCreatureScript::GetItemId(local_18);
          SetItemId(this,local_14);
          local_10 = 0;
          this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          local_10 = CInventory::GetInvenRef(this_00,0,0x16);
          if (local_10 == 0) {
            bVar6 = false;
          }
          else {
            uVar2 = CCreatureItem::GetItemId((CCreatureItem *)this);
            *(undefined4 *)(local_10 + 2) = uVar2;
            CDBMsgSender::CDBMsgSender(local_44,0x8a,param_1);
            iVar4 = CCreatureItem::GetItemId((CCreatureItem *)this);
            iVar5 = CCreatureItem::GetUid((CCreatureItem *)this);
                    /* try { // try from 08338ad8 to 08338b62 has its CatchHandler @ 08338bca */
            cVar1 = CDBMsgSender::EvoluteCreature(local_44,iVar5,iVar4);
            bVar6 = cVar1 == '\x01';
            if (bVar6) {
              CDBMsgSender::Send(local_44);
              CPacketRespondent::CPacketRespondent(local_64,param_1,0,0);
                    /* try { // try from 08338b70 to 08338ba2 has its CatchHandler @ 08338bb5 */
              CPacketRespondent::MakeNotipacketEvoluteCreature(local_64,local_1c);
              CPacketRespondent::SendAccordingToPlace(local_64);
              CUser::SendUpdateItemList(param_1,1,3,0x16);
                    /* try { // try from 08338bae to 08338bb2 has its CatchHandler @ 08338bca */
              CPacketRespondent::~CPacketRespondent(local_64);
            }
            else {
              uVar3 = CUser::get_unique_id(param_1);
              cMyTrace::cMyTrace(local_2c,"bool user_creature::CCreature::EvoluteMulty(CUser*, int)"
                                 ,0x866,5);
              cMyTrace::operator()(local_2c,"cannot write db uid(%d)\n",uVar3 & 0xffff);
            }
            CDBMsgSender::~CDBMsgSender(local_44);
          }
        }
      }
    }
    else {
      bVar6 = false;
    }
  }
  return bVar6;
}

```

---

## GainExp

```asm
// === 083378fc user_creature::CCreature::GainExp  [0x083378fc-0x83379bf] ===
 83378fc:	55                   	push   %ebp
 83378fd:	89 e5                	mov    %esp,%ebp
 83378ff:	53                   	push   %ebx
 8337900:	83 ec 14             	sub    $0x14,%esp
 8337903:	8b 45 08             	mov    0x8(%ebp),%eax
 8337906:	8b 40 44             	mov    0x44(%eax),%eax
 8337909:	85 c0                	test   %eax,%eax
 833790b:	75 0a                	jne    8337917 <_ZN13user_creature9CCreature7GainExpEiP5CUser+0x1b>
 833790d:	b8 00 00 00 00       	mov    $0x0,%eax
 8337912:	e9 a2 00 00 00       	jmp    83379b9 <_ZN13user_creature9CCreature7GainExpEiP5CUser+0xbd>
 8337917:	8b 45 08             	mov    0x8(%ebp),%eax
 833791a:	8b 40 44             	mov    0x44(%eax),%eax
 833791d:	89 04 24             	mov    %eax,(%esp)
 8337920:	e8 25 7a 00 00       	call   833f34a <_ZN13user_creature15CCreatureScript27GetTypeSelectEvolutionLevelEv>
 8337925:	83 f8 ff             	cmp    $0xffffffff,%eax
 8337928:	0f 95 c0             	setne  %al
 833792b:	84 c0                	test   %al,%al
 833792d:	74 24                	je     8337953 <_ZN13user_creature9CCreature7GainExpEiP5CUser+0x57>
 833792f:	8b 45 08             	mov    0x8(%ebp),%eax
 8337932:	8b 58 2c             	mov    0x2c(%eax),%ebx
 8337935:	8b 45 08             	mov    0x8(%ebp),%eax
 8337938:	8b 40 44             	mov    0x44(%eax),%eax
 833793b:	89 04 24             	mov    %eax,(%esp)
 833793e:	e8 07 7a 00 00       	call   833f34a <_ZN13user_creature15CCreatureScript27GetTypeSelectEvolutionLevelEv>
 8337943:	39 c3                	cmp    %eax,%ebx
 8337945:	0f 9d c0             	setge  %al
 8337948:	84 c0                	test   %al,%al
 833794a:	74 07                	je     8337953 <_ZN13user_creature9CCreature7GainExpEiP5CUser+0x57>
 833794c:	b8 00 00 00 00       	mov    $0x0,%eax
 8337951:	eb 66                	jmp    83379b9 <_ZN13user_creature9CCreature7GainExpEiP5CUser+0xbd>
 8337953:	8b 45 08             	mov    0x8(%ebp),%eax
 8337956:	8b 58 2c             	mov    0x2c(%eax),%ebx
 8337959:	8b 45 08             	mov    0x8(%ebp),%eax
 833795c:	8b 40 44             	mov    0x44(%eax),%eax
 833795f:	89 04 24             	mov    %eax,(%esp)
 8337962:	e8 e5 78 00 00       	call   833f24c <_ZN13user_creature15CCreatureScript11GetMaxLevelEv>
 8337967:	39 c3                	cmp    %eax,%ebx
 8337969:	0f 9d c0             	setge  %al
 833796c:	84 c0                	test   %al,%al
 833796e:	74 07                	je     8337977 <_ZN13user_creature9CCreature7GainExpEiP5CUser+0x7b>
 8337970:	b8 00 00 00 00       	mov    $0x0,%eax
 8337975:	eb 42                	jmp    83379b9 <_ZN13user_creature9CCreature7GainExpEiP5CUser+0xbd>
 8337977:	8b 45 08             	mov    0x8(%ebp),%eax
 833797a:	0f b6 40 4c          	movzbl 0x4c(%eax),%eax
 833797e:	83 f0 01             	xor    $0x1,%eax
 8337981:	84 c0                	test   %al,%al
 8337983:	74 1b                	je     83379a0 <_ZN13user_creature9CCreature7GainExpEiP5CUser+0xa4>
 8337985:	8b 45 10             	mov    0x10(%ebp),%eax
 8337988:	89 44 24 08          	mov    %eax,0x8(%esp)
 833798c:	8b 45 0c             	mov    0xc(%ebp),%eax
 833798f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8337993:	8b 45 08             	mov    0x8(%ebp),%eax
 8337996:	89 04 24             	mov    %eax,(%esp)
 8337999:	e8 22 00 00 00       	call   83379c0 <_ZN13user_creature9CCreature19GainItemExpCreatureEiP5CUser>
 833799e:	eb 19                	jmp    83379b9 <_ZN13user_creature9CCreature7GainExpEiP5CUser+0xbd>
 83379a0:	8b 45 10             	mov    0x10(%ebp),%eax
 83379a3:	89 44 24 08          	mov    %eax,0x8(%esp)
 83379a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 83379aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 83379ae:	8b 45 08             	mov    0x8(%ebp),%eax
 83379b1:	89 04 24             	mov    %eax,(%esp)
 83379b4:	e8 03 02 00 00       	call   8337bbc <_ZN13user_creature9CCreature15GainExpCreatureEiP5CUser>
 83379b9:	83 c4 14             	add    $0x14,%esp
 83379bc:	5b                   	pop    %ebx
 83379bd:	5d                   	pop    %ebp
 83379be:	c3                   	ret
 83379bf:	90                   	nop

```

```c
// user_creature::CCreature::GainExp @ 0x83378fc

/* user_creature::CCreature::GainExp(int, CUser*) */

undefined4 __thiscall user_creature::CCreature::GainExp(CCreature *this,int param_1,CUser *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(this + 0x44) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = CCreatureScript::GetTypeSelectEvolutionLevel(*(CCreatureScript **)(this + 0x44));
    if ((iVar2 != -1) &&
       (iVar2 = *(int *)(this + 0x2c),
       iVar3 = CCreatureScript::GetTypeSelectEvolutionLevel(*(CCreatureScript **)(this + 0x44)),
       iVar3 <= iVar2)) {
      return 0;
    }
    iVar2 = *(int *)(this + 0x2c);
    iVar3 = CCreatureScript::GetMaxLevel(*(CCreatureScript **)(this + 0x44));
    if (iVar2 < iVar3) {
      if (this[0x4c] == (CCreature)0x1) {
        uVar1 = GainExpCreature(this,param_1,param_2);
      }
      else {
        uVar1 = GainItemExpCreature(this,param_1,param_2);
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

```

---

## GainExpCreature

```asm
// === 08337bbc user_creature::CCreature::GainExpCreature  [0x08337bbc-0x8337d57] ===
 8337bbc:	55                   	push   %ebp
 8337bbd:	89 e5                	mov    %esp,%ebp
 8337bbf:	56                   	push   %esi
 8337bc0:	53                   	push   %ebx
 8337bc1:	83 ec 50             	sub    $0x50,%esp
 8337bc4:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 8337bc8:	8b 45 08             	mov    0x8(%ebp),%eax
 8337bcb:	0f b6 40 4c          	movzbl 0x4c(%eax),%eax
 8337bcf:	83 f0 01             	xor    $0x1,%eax
 8337bd2:	84 c0                	test   %al,%al
 8337bd4:	74 0a                	je     8337be0 <_ZN13user_creature9CCreature15GainExpCreatureEiP5CUser+0x24>
 8337bd6:	b8 00 00 00 00       	mov    $0x0,%eax
 8337bdb:	e9 71 01 00 00       	jmp    8337d51 <_ZN13user_creature9CCreature15GainExpCreatureEiP5CUser+0x195>
 8337be0:	8b 45 08             	mov    0x8(%ebp),%eax
 8337be3:	0f b6 40 4c          	movzbl 0x4c(%eax),%eax
 8337be7:	0f b6 d0             	movzbl %al,%edx
 8337bea:	8b 45 08             	mov    0x8(%ebp),%eax
 8337bed:	8b 40 3c             	mov    0x3c(%eax),%eax
 8337bf0:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8337bf3:	83 c1 34             	add    $0x34,%ecx
 8337bf6:	89 54 24 08          	mov    %edx,0x8(%esp)
 8337bfa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8337bfe:	89 0c 24             	mov    %ecx,(%esp)
 8337c01:	e8 f6 f0 ff ff       	call   8336cfc <_ZN13user_creature8CStomach15GetStomachValueENS_14CREATURE_STATEEb>
 8337c06:	d9 7d c6             	fnstcw -0x3a(%ebp)
 8337c09:	0f b7 45 c6          	movzwl -0x3a(%ebp),%eax
 8337c0d:	b4 0c                	mov    $0xc,%ah
 8337c0f:	66 89 45 c4          	mov    %ax,-0x3c(%ebp)
 8337c13:	d9 6d c4             	fldcw  -0x3c(%ebp)
 8337c16:	db 5d f4             	fistpl -0xc(%ebp)
 8337c19:	d9 6d c6             	fldcw  -0x3a(%ebp)
 8337c1c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8337c20:	7f 0a                	jg     8337c2c <_ZN13user_creature9CCreature15GainExpCreatureEiP5CUser+0x70>
 8337c22:	b8 00 00 00 00       	mov    $0x0,%eax
 8337c27:	e9 25 01 00 00       	jmp    8337d51 <_ZN13user_creature9CCreature15GainExpCreatureEiP5CUser+0x195>
 8337c2c:	8b 45 10             	mov    0x10(%ebp),%eax
 8337c2f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8337c33:	8d 45 f3             	lea    -0xd(%ebp),%eax
 8337c36:	89 44 24 08          	mov    %eax,0x8(%esp)
 8337c3a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8337c3d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8337c41:	8b 45 08             	mov    0x8(%ebp),%eax
 8337c44:	89 04 24             	mov    %eax,(%esp)
 8337c47:	e8 6a fb ff ff       	call   83377b6 <_ZN13user_creature9CCreature12CalculateExpEiRbP5CUser>
 8337c4c:	8b 45 08             	mov    0x8(%ebp),%eax
 8337c4f:	8b 58 2c             	mov    0x2c(%eax),%ebx
 8337c52:	8b 45 08             	mov    0x8(%ebp),%eax
 8337c55:	8b 40 44             	mov    0x44(%eax),%eax
 8337c58:	89 04 24             	mov    %eax,(%esp)
 8337c5b:	e8 ec 75 00 00       	call   833f24c <_ZN13user_creature15CCreatureScript11GetMaxLevelEv>
 8337c60:	39 c3                	cmp    %eax,%ebx
 8337c62:	7c 08                	jl     8337c6c <_ZN13user_creature9CCreature15GainExpCreatureEiP5CUser+0xb0>
 8337c64:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8337c68:	84 c0                	test   %al,%al
 8337c6a:	74 07                	je     8337c73 <_ZN13user_creature9CCreature15GainExpCreatureEiP5CUser+0xb7>
 8337c6c:	b8 01 00 00 00       	mov    $0x1,%eax
 8337c71:	eb 05                	jmp    8337c78 <_ZN13user_creature9CCreature15GainExpCreatureEiP5CUser+0xbc>
 8337c73:	b8 00 00 00 00       	mov    $0x0,%eax
 8337c78:	84 c0                	test   %al,%al
 8337c7a:	74 7b                	je     8337cf7 <_ZN13user_creature9CCreature15GainExpCreatureEiP5CUser+0x13b>
 8337c7c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8337c83:	00 
 8337c84:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8337c8b:	00 
 8337c8c:	8b 45 10             	mov    0x10(%ebp),%eax
 8337c8f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8337c93:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8337c96:	89 04 24             	mov    %eax,(%esp)
 8337c99:	e8 8c 86 00 00       	call   834032a <_ZN13user_creature17CPacketRespondentC1EP5CUserii>
 8337c9e:	8b 45 08             	mov    0x8(%ebp),%eax
 8337ca1:	89 04 24             	mov    %eax,(%esp)
 8337ca4:	e8 21 74 00 00       	call   833f0ca <_ZN13user_creature9CCreature14IsGrowCreatureEv>
 8337ca9:	0f b6 c8             	movzbl %al,%ecx
 8337cac:	8b 45 08             	mov    0x8(%ebp),%eax
 8337caf:	8b 50 2c             	mov    0x2c(%eax),%edx
 8337cb2:	8b 45 08             	mov    0x8(%ebp),%eax
 8337cb5:	8b 40 30             	mov    0x30(%eax),%eax
 8337cb8:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8337cbc:	89 54 24 08          	mov    %edx,0x8(%esp)
 8337cc0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8337cc4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8337cc7:	89 04 24             	mov    %eax,(%esp)
 8337cca:	e8 91 8a 00 00       	call   8340760 <_ZN13user_creature17CPacketRespondent29MakeNotipacketGainExpCreatureEiib>
 8337ccf:	eb 1b                	jmp    8337cec <_ZN13user_creature9CCreature15GainExpCreatureEiP5CUser+0x130>
 8337cd1:	89 d3                	mov    %edx,%ebx
 8337cd3:	89 c6                	mov    %eax,%esi
 8337cd5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8337cd8:	89 04 24             	mov    %eax,(%esp)
 8337cdb:	e8 8a 86 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 8337ce0:	89 f0                	mov    %esi,%eax
 8337ce2:	89 da                	mov    %ebx,%edx
 8337ce4:	89 04 24             	mov    %eax,(%esp)
 8337ce7:	e8 64 ba 7a 00       	call   8ae3750 <_Unwind_Resume>
 8337cec:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8337cef:	89 04 24             	mov    %eax,(%esp)
 8337cf2:	e8 73 86 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 8337cf7:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8337cfb:	84 c0                	test   %al,%al
 8337cfd:	74 1d                	je     8337d1c <_ZN13user_creature9CCreature15GainExpCreatureEiP5CUser+0x160>
 8337cff:	8b 45 10             	mov    0x10(%ebp),%eax
 8337d02:	89 44 24 04          	mov    %eax,0x4(%esp)
 8337d06:	8b 45 08             	mov    0x8(%ebp),%eax
 8337d09:	89 04 24             	mov    %eax,(%esp)
 8337d0c:	e8 eb 03 00 00       	call   83380fc <_ZNK13user_creature9CCreature13IsAbleEvoluteEP5CUser>
 8337d11:	84 c0                	test   %al,%al
 8337d13:	74 07                	je     8337d1c <_ZN13user_creature9CCreature15GainExpCreatureEiP5CUser+0x160>
 8337d15:	b8 01 00 00 00       	mov    $0x1,%eax
 8337d1a:	eb 05                	jmp    8337d21 <_ZN13user_creature9CCreature15GainExpCreatureEiP5CUser+0x165>
 8337d1c:	b8 00 00 00 00       	mov    $0x0,%eax
 8337d21:	84 c0                	test   %al,%al
 8337d23:	74 20                	je     8337d45 <_ZN13user_creature9CCreature15GainExpCreatureEiP5CUser+0x189>
 8337d25:	8b 45 10             	mov    0x10(%ebp),%eax
 8337d28:	89 44 24 04          	mov    %eax,0x4(%esp)
 8337d2c:	8b 45 08             	mov    0x8(%ebp),%eax
 8337d2f:	89 04 24             	mov    %eax,(%esp)
 8337d32:	e8 b3 04 00 00       	call   83381ea <_ZN13user_creature9CCreature7EvoluteEP5CUser>
 8337d37:	83 f0 01             	xor    $0x1,%eax
 8337d3a:	84 c0                	test   %al,%al
 8337d3c:	74 07                	je     8337d45 <_ZN13user_creature9CCreature15GainExpCreatureEiP5CUser+0x189>
 8337d3e:	b8 00 00 00 00       	mov    $0x0,%eax
 8337d43:	eb 0c                	jmp    8337d51 <_ZN13user_creature9CCreature15GainExpCreatureEiP5CUser+0x195>
 8337d45:	8b 45 08             	mov    0x8(%ebp),%eax
 8337d48:	c6 40 40 01          	movb   $0x1,0x40(%eax)
 8337d4c:	b8 01 00 00 00       	mov    $0x1,%eax
 8337d51:	83 c4 50             	add    $0x50,%esp
 8337d54:	5b                   	pop    %ebx
 8337d55:	5e                   	pop    %esi
 8337d56:	5d                   	pop    %ebp
 8337d57:	c3                   	ret

```

```c
// user_creature::CCreature::GainExpCreature @ 0x8337bbc

/* user_creature::CCreature::GainExpCreature(int, CUser*) */

undefined4 __thiscall
user_creature::CCreature::GainExpCreature(CCreature *this,int param_1,CUser *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longdouble lVar5;
  CPacketRespondent local_34 [35];
  bool local_11;
  int local_10;
  
  local_11 = false;
  if (this[0x4c] != (CCreature)0x1) {
    return 0;
  }
  lVar5 = (longdouble)
          CStomach::GetStomachValue
                    ((CStomach *)(this + 0x34),*(undefined4 *)(this + 0x3c),this[0x4c]);
  local_10 = (int)ROUND(lVar5);
  if (0 < local_10) {
    CalculateExp(this,param_1,&local_11,param_2);
    iVar1 = *(int *)(this + 0x2c);
    iVar4 = CCreatureScript::GetMaxLevel(*(CCreatureScript **)(this + 0x44));
    if ((iVar1 < iVar4) || (local_11 != false)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      CPacketRespondent::CPacketRespondent(local_34,param_2,0,0);
      bVar2 = (bool)IsGrowCreature(this);
                    /* try { // try from 08337cca to 08337cce has its CatchHandler @ 08337cd1 */
      CPacketRespondent::MakeNotipacketGainExpCreature
                (local_34,*(int *)(this + 0x30),*(int *)(this + 0x2c),bVar2);
      CPacketRespondent::~CPacketRespondent(local_34);
    }
    if ((local_11 == false) || (cVar3 = IsAbleEvolute(this,param_2), cVar3 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (cVar3 = Evolute(this,param_2), cVar3 != '\x01')) {
      return 0;
    }
    this[0x40] = (CCreature)0x1;
    return 1;
  }
  return 0;
}

```

---

## GainItemExpCreature

```asm
// === 083379c0 user_creature::CCreature::GainItemExpCreature  [0x083379c0-0x8337bbb] ===
 83379c0:	55                   	push   %ebp
 83379c1:	89 e5                	mov    %esp,%ebp
 83379c3:	56                   	push   %esi
 83379c4:	53                   	push   %ebx
 83379c5:	83 ec 40             	sub    $0x40,%esp
 83379c8:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 83379cc:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 83379d3:	8b 45 08             	mov    0x8(%ebp),%eax
 83379d6:	0f b6 40 4c          	movzbl 0x4c(%eax),%eax
 83379da:	84 c0                	test   %al,%al
 83379dc:	74 0a                	je     83379e8 <_ZN13user_creature9CCreature19GainItemExpCreatureEiP5CUser+0x28>
 83379de:	b8 00 00 00 00       	mov    $0x0,%eax
 83379e3:	e9 cd 01 00 00       	jmp    8337bb5 <_ZN13user_creature9CCreature19GainItemExpCreatureEiP5CUser+0x1f5>
 83379e8:	8b 45 08             	mov    0x8(%ebp),%eax
 83379eb:	8b 40 44             	mov    0x44(%eax),%eax
 83379ee:	8b 55 0c             	mov    0xc(%ebp),%edx
 83379f1:	89 54 24 04          	mov    %edx,0x4(%esp)
 83379f5:	89 04 24             	mov    %eax,(%esp)
 83379f8:	e8 bf 78 00 00       	call   833f2bc <_ZN13user_creature15CCreatureScript15validItem_ATypeEi>
 83379fd:	84 c0                	test   %al,%al
 83379ff:	74 22                	je     8337a23 <_ZN13user_creature9CCreature19GainItemExpCreatureEiP5CUser+0x63>
 8337a01:	8b 45 08             	mov    0x8(%ebp),%eax
 8337a04:	0f b6 40 4d          	movzbl 0x4d(%eax),%eax
 8337a08:	88 45 f6             	mov    %al,-0xa(%ebp)
 8337a0b:	80 45 f6 01          	addb   $0x1,-0xa(%ebp)
 8337a0f:	80 7d f6 0a          	cmpb   $0xa,-0xa(%ebp)
 8337a13:	7e 04                	jle    8337a19 <_ZN13user_creature9CCreature19GainItemExpCreatureEiP5CUser+0x59>
 8337a15:	c6 45 f6 0a          	movb   $0xa,-0xa(%ebp)
 8337a19:	0f b6 55 f6          	movzbl -0xa(%ebp),%edx
 8337a1d:	8b 45 08             	mov    0x8(%ebp),%eax
 8337a20:	88 50 4d             	mov    %dl,0x4d(%eax)
 8337a23:	8b 45 08             	mov    0x8(%ebp),%eax
 8337a26:	8b 40 44             	mov    0x44(%eax),%eax
 8337a29:	8b 55 0c             	mov    0xc(%ebp),%edx
 8337a2c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8337a30:	89 04 24             	mov    %eax,(%esp)
 8337a33:	e8 b6 78 00 00       	call   833f2ee <_ZN13user_creature15CCreatureScript15validItem_BTypeEi>
 8337a38:	84 c0                	test   %al,%al
 8337a3a:	74 22                	je     8337a5e <_ZN13user_creature9CCreature19GainItemExpCreatureEiP5CUser+0x9e>
 8337a3c:	8b 45 08             	mov    0x8(%ebp),%eax
 8337a3f:	0f b6 40 4d          	movzbl 0x4d(%eax),%eax
 8337a43:	88 45 f7             	mov    %al,-0x9(%ebp)
 8337a46:	80 6d f7 01          	subb   $0x1,-0x9(%ebp)
 8337a4a:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 8337a4e:	79 04                	jns    8337a54 <_ZN13user_creature9CCreature19GainItemExpCreatureEiP5CUser+0x94>
 8337a50:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 8337a54:	0f b6 55 f7          	movzbl -0x9(%ebp),%edx
 8337a58:	8b 45 08             	mov    0x8(%ebp),%eax
 8337a5b:	88 50 4d             	mov    %dl,0x4d(%eax)
 8337a5e:	8b 45 08             	mov    0x8(%ebp),%eax
 8337a61:	8b 40 30             	mov    0x30(%eax),%eax
 8337a64:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8337a67:	8b 45 08             	mov    0x8(%ebp),%eax
 8337a6a:	0f b6 40 4d          	movzbl 0x4d(%eax),%eax
 8337a6e:	88 45 e8             	mov    %al,-0x18(%ebp)
 8337a71:	0f b7 45 ea          	movzwl -0x16(%ebp),%eax
 8337a75:	83 c0 01             	add    $0x1,%eax
 8337a78:	66 89 45 ea          	mov    %ax,-0x16(%ebp)
 8337a7c:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8337a7f:	8b 45 08             	mov    0x8(%ebp),%eax
 8337a82:	89 50 30             	mov    %edx,0x30(%eax)
 8337a85:	0f b7 45 ea          	movzwl -0x16(%ebp),%eax
 8337a89:	98                   	cwtl
 8337a8a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8337a8e:	8b 45 08             	mov    0x8(%ebp),%eax
 8337a91:	89 04 24             	mov    %eax,(%esp)
 8337a94:	e8 39 fa ff ff       	call   83374d2 <_ZN13user_creature9CCreature11GetExpLevelEi>
 8337a99:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8337a9c:	8b 45 08             	mov    0x8(%ebp),%eax
 8337a9f:	8b 40 2c             	mov    0x2c(%eax),%eax
 8337aa2:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8337aa5:	7d 04                	jge    8337aab <_ZN13user_creature9CCreature19GainItemExpCreatureEiP5CUser+0xeb>
 8337aa7:	c6 45 ef 01          	movb   $0x1,-0x11(%ebp)
 8337aab:	8b 45 08             	mov    0x8(%ebp),%eax
 8337aae:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8337ab1:	89 50 2c             	mov    %edx,0x2c(%eax)
 8337ab4:	8b 45 08             	mov    0x8(%ebp),%eax
 8337ab7:	8b 58 2c             	mov    0x2c(%eax),%ebx
 8337aba:	8b 45 08             	mov    0x8(%ebp),%eax
 8337abd:	8b 40 44             	mov    0x44(%eax),%eax
 8337ac0:	89 04 24             	mov    %eax,(%esp)
 8337ac3:	e8 84 77 00 00       	call   833f24c <_ZN13user_creature15CCreatureScript11GetMaxLevelEv>
 8337ac8:	39 c3                	cmp    %eax,%ebx
 8337aca:	7c 06                	jl     8337ad2 <_ZN13user_creature9CCreature19GainItemExpCreatureEiP5CUser+0x112>
 8337acc:	80 7d ef 00          	cmpb   $0x0,-0x11(%ebp)
 8337ad0:	74 07                	je     8337ad9 <_ZN13user_creature9CCreature19GainItemExpCreatureEiP5CUser+0x119>
 8337ad2:	b8 01 00 00 00       	mov    $0x1,%eax
 8337ad7:	eb 05                	jmp    8337ade <_ZN13user_creature9CCreature19GainItemExpCreatureEiP5CUser+0x11e>
 8337ad9:	b8 00 00 00 00       	mov    $0x0,%eax
 8337ade:	84 c0                	test   %al,%al
 8337ae0:	74 7b                	je     8337b5d <_ZN13user_creature9CCreature19GainItemExpCreatureEiP5CUser+0x19d>
 8337ae2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8337ae9:	00 
 8337aea:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8337af1:	00 
 8337af2:	8b 45 10             	mov    0x10(%ebp),%eax
 8337af5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8337af9:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8337afc:	89 04 24             	mov    %eax,(%esp)
 8337aff:	e8 26 88 00 00       	call   834032a <_ZN13user_creature17CPacketRespondentC1EP5CUserii>
 8337b04:	8b 45 08             	mov    0x8(%ebp),%eax
 8337b07:	89 04 24             	mov    %eax,(%esp)
 8337b0a:	e8 bb 75 00 00       	call   833f0ca <_ZN13user_creature9CCreature14IsGrowCreatureEv>
 8337b0f:	0f b6 c8             	movzbl %al,%ecx
 8337b12:	8b 45 08             	mov    0x8(%ebp),%eax
 8337b15:	8b 50 2c             	mov    0x2c(%eax),%edx
 8337b18:	8b 45 08             	mov    0x8(%ebp),%eax
 8337b1b:	8b 40 30             	mov    0x30(%eax),%eax
 8337b1e:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8337b22:	89 54 24 08          	mov    %edx,0x8(%esp)
 8337b26:	89 44 24 04          	mov    %eax,0x4(%esp)
 8337b2a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8337b2d:	89 04 24             	mov    %eax,(%esp)
 8337b30:	e8 2b 8c 00 00       	call   8340760 <_ZN13user_creature17CPacketRespondent29MakeNotipacketGainExpCreatureEiib>
 8337b35:	eb 1b                	jmp    8337b52 <_ZN13user_creature9CCreature19GainItemExpCreatureEiP5CUser+0x192>
 8337b37:	89 d3                	mov    %edx,%ebx
 8337b39:	89 c6                	mov    %eax,%esi
 8337b3b:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8337b3e:	89 04 24             	mov    %eax,(%esp)
 8337b41:	e8 24 88 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 8337b46:	89 f0                	mov    %esi,%eax
 8337b48:	89 da                	mov    %ebx,%edx
 8337b4a:	89 04 24             	mov    %eax,(%esp)
 8337b4d:	e8 fe bb 7a 00       	call   8ae3750 <_Unwind_Resume>
 8337b52:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8337b55:	89 04 24             	mov    %eax,(%esp)
 8337b58:	e8 0d 88 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 8337b5d:	80 7d ef 00          	cmpb   $0x0,-0x11(%ebp)
 8337b61:	74 1d                	je     8337b80 <_ZN13user_creature9CCreature19GainItemExpCreatureEiP5CUser+0x1c0>
 8337b63:	8b 45 10             	mov    0x10(%ebp),%eax
 8337b66:	89 44 24 04          	mov    %eax,0x4(%esp)
 8337b6a:	8b 45 08             	mov    0x8(%ebp),%eax
 8337b6d:	89 04 24             	mov    %eax,(%esp)
 8337b70:	e8 e3 01 00 00       	call   8337d58 <_ZN13user_creature9CCreature19IsAbleSelectEvoluteEP5CUser>
 8337b75:	84 c0                	test   %al,%al
 8337b77:	74 07                	je     8337b80 <_ZN13user_creature9CCreature19GainItemExpCreatureEiP5CUser+0x1c0>
 8337b79:	b8 01 00 00 00       	mov    $0x1,%eax
 8337b7e:	eb 05                	jmp    8337b85 <_ZN13user_creature9CCreature19GainItemExpCreatureEiP5CUser+0x1c5>
 8337b80:	b8 00 00 00 00       	mov    $0x0,%eax
 8337b85:	84 c0                	test   %al,%al
 8337b87:	74 20                	je     8337ba9 <_ZN13user_creature9CCreature19GainItemExpCreatureEiP5CUser+0x1e9>
 8337b89:	8b 45 10             	mov    0x10(%ebp),%eax
 8337b8c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8337b90:	8b 45 08             	mov    0x8(%ebp),%eax
 8337b93:	89 04 24             	mov    %eax,(%esp)
 8337b96:	e8 ad 02 00 00       	call   8337e48 <_ZN13user_creature9CCreature13SelectEvoluteEP5CUser>
 8337b9b:	83 f0 01             	xor    $0x1,%eax
 8337b9e:	84 c0                	test   %al,%al
 8337ba0:	74 07                	je     8337ba9 <_ZN13user_creature9CCreature19GainItemExpCreatureEiP5CUser+0x1e9>
 8337ba2:	b8 00 00 00 00       	mov    $0x0,%eax
 8337ba7:	eb 0c                	jmp    8337bb5 <_ZN13user_creature9CCreature19GainItemExpCreatureEiP5CUser+0x1f5>
 8337ba9:	8b 45 08             	mov    0x8(%ebp),%eax
 8337bac:	c6 40 40 01          	movb   $0x1,0x40(%eax)
 8337bb0:	b8 01 00 00 00       	mov    $0x1,%eax
 8337bb5:	83 c4 40             	add    $0x40,%esp
 8337bb8:	5b                   	pop    %ebx
 8337bb9:	5e                   	pop    %esi
 8337bba:	5d                   	pop    %ebp
 8337bbb:	c3                   	ret

```

```c
// user_creature::CCreature::GainItemExpCreature @ 0x83379c0

/* user_creature::CCreature::GainItemExpCreature(int, CUser*) */

undefined4 __thiscall
user_creature::CCreature::GainItemExpCreature(CCreature *this,int param_1,CUser *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  CPacketRespondent local_3c [32];
  undefined4 local_1c;
  char local_15;
  int local_14;
  CCreature local_e;
  CCreature local_d;
  
  local_15 = '\0';
  local_14 = 0;
  if (this[0x4c] != (CCreature)0x0) {
    return 0;
  }
  cVar3 = CCreatureScript::validItem_AType(*(CCreatureScript **)(this + 0x44),param_1);
  if (cVar3 != '\0') {
    local_e = (CCreature)((char)this[0x4d] + '\x01');
    if ('\n' < (char)local_e) {
      local_e = (CCreature)0xa;
    }
    this[0x4d] = local_e;
  }
  cVar3 = CCreatureScript::validItem_BType(*(CCreatureScript **)(this + 0x44),param_1);
  if (cVar3 != '\0') {
    local_d = (CCreature)((char)this[0x4d] + -1);
    if ((char)local_d < '\0') {
      local_d = (CCreature)0x0;
    }
    this[0x4d] = local_d;
  }
  local_1c = CONCAT31((int3)((uint)*(undefined4 *)(this + 0x30) >> 8),this[0x4d]);
  uVar2 = local_1c;
  local_1c._2_2_ = (short)((uint)*(undefined4 *)(this + 0x30) >> 0x10);
  local_1c._2_2_ = local_1c._2_2_ + 1;
  local_1c._0_2_ = (undefined2)uVar2;
  *(undefined4 *)(this + 0x30) = local_1c;
  local_14 = GetExpLevel(this,(int)local_1c._2_2_);
  if (*(int *)(this + 0x2c) < local_14) {
    local_15 = '\x01';
  }
  *(int *)(this + 0x2c) = local_14;
  iVar1 = *(int *)(this + 0x2c);
  iVar5 = CCreatureScript::GetMaxLevel(*(CCreatureScript **)(this + 0x44));
  if ((iVar1 < iVar5) || (local_15 != '\0')) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    CPacketRespondent::CPacketRespondent(local_3c,param_2,0,0);
    bVar4 = (bool)IsGrowCreature(this);
                    /* try { // try from 08337b30 to 08337b34 has its CatchHandler @ 08337b37 */
    CPacketRespondent::MakeNotipacketGainExpCreature
              (local_3c,*(int *)(this + 0x30),*(int *)(this + 0x2c),bVar4);
    CPacketRespondent::~CPacketRespondent(local_3c);
  }
  if ((local_15 == '\0') || (cVar3 = IsAbleSelectEvolute(this,param_2), cVar3 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((bVar4) && (cVar3 = SelectEvolute(this,param_2), cVar3 != '\x01')) {
    return 0;
  }
  this[0x40] = (CCreature)0x1;
  return 1;
}

```

---

## GetAddExp

```asm
// === 08337724 user_creature::CCreature::GetAddExp  [0x08337724-0x83377b5] ===
 8337724:	55                   	push   %ebp
 8337725:	89 e5                	mov    %esp,%ebp
 8337727:	83 ec 38             	sub    $0x38,%esp
 833772a:	b8 00 00 00 00       	mov    $0x0,%eax
 833772f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8337732:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8337739:	8b 45 0c             	mov    0xc(%ebp),%eax
 833773c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8337740:	8b 45 08             	mov    0x8(%ebp),%eax
 8337743:	89 04 24             	mov    %eax,(%esp)
 8337746:	e8 ab ff ff ff       	call   83376f6 <_ZN13user_creature9CCreature19IsAvailableArtifactEi>
 833774b:	84 c0                	test   %al,%al
 833774d:	74 5b                	je     83377aa <_ZN13user_creature9CCreature9GetAddExpEiP5CUser+0x86>
 833774f:	8b 45 10             	mov    0x10(%ebp),%eax
 8337752:	89 04 24             	mov    %eax,(%esp)
 8337755:	e8 34 2b da ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 833775a:	8d 90 e8 06 00 00    	lea    0x6e8(%eax),%edx
 8337760:	8b 45 0c             	mov    0xc(%ebp),%eax
 8337763:	89 44 24 04          	mov    %eax,0x4(%esp)
 8337767:	89 14 24             	mov    %edx,(%esp)
 833776a:	e8 e7 46 00 00       	call   833be56 <_ZN13user_creature12CCreatureMgr11GetArtifactEi>
 833776f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8337772:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8337776:	74 32                	je     83377aa <_ZN13user_creature9CCreature9GetAddExpEiP5CUser+0x86>
 8337778:	8b 45 f0             	mov    -0x10(%ebp),%eax
 833777b:	89 04 24             	mov    %eax,(%esp)
 833777e:	e8 8f f8 ff ff       	call   8337012 <_ZN13user_creature9CArtifact23GetCreatureMinimumLevelEv>
 8337783:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8337786:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 833778a:	74 10                	je     833779c <_ZN13user_creature9CCreature9GetAddExpEiP5CUser+0x78>
 833778c:	8b 45 08             	mov    0x8(%ebp),%eax
 833778f:	8b 40 2c             	mov    0x2c(%eax),%eax
 8337792:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8337795:	7d 05                	jge    833779c <_ZN13user_creature9CCreature9GetAddExpEiP5CUser+0x78>
 8337797:	8b 45 e8             	mov    -0x18(%ebp),%eax
 833779a:	eb 11                	jmp    83377ad <_ZN13user_creature9CCreature9GetAddExpEiP5CUser+0x89>
 833779c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 833779f:	89 04 24             	mov    %eax,(%esp)
 83377a2:	e8 21 f8 ff ff       	call   8336fc8 <_ZN13user_creature9CArtifact19GetExperienceAmountEv>
 83377a7:	d9 5d e8             	fstps  -0x18(%ebp)
 83377aa:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83377ad:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 83377b0:	d9 45 e4             	flds   -0x1c(%ebp)
 83377b3:	c9                   	leave
 83377b4:	c3                   	ret
 83377b5:	90                   	nop

```

```c
// user_creature::CCreature::GetAddExp @ 0x8337724

/* user_creature::CCreature::GetAddExp(int, CUser*) */

longdouble __thiscall
user_creature::CCreature::GetAddExp(CCreature *this,int param_1,CUser *param_2)

{
  char cVar1;
  int iVar2;
  CArtifact *this_00;
  longdouble lVar3;
  float local_1c;
  
  local_1c = 0.0;
  cVar1 = IsAvailableArtifact(this,param_1);
  if (cVar1 != '\0') {
    iVar2 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
    this_00 = (CArtifact *)CCreatureMgr::GetArtifact((CCreatureMgr *)(iVar2 + 0x6e8),param_1);
    if (this_00 != (CArtifact *)0x0) {
      iVar2 = CArtifact::GetCreatureMinimumLevel(this_00);
      if ((iVar2 == 0) || (iVar2 <= *(int *)(this + 0x2c))) {
        lVar3 = (longdouble)CArtifact::GetExperienceAmount(this_00);
        local_1c = (float)lVar3;
      }
      else {
        local_1c = 0.0;
      }
    }
  }
  return (longdouble)local_1c;
}

```

---

## GetCreatureId

```asm
// === 0833769c user_creature::CCreature::GetCreatureId  [0x0833769c-0x83376f5] ===
 833769c:	55                   	push   %ebp
 833769d:	89 e5                	mov    %esp,%ebp
 833769f:	83 ec 28             	sub    $0x28,%esp
 83376a2:	e8 f4 4a d9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 83376a7:	8b 55 0c             	mov    0xc(%ebp),%edx
 83376aa:	89 54 24 04          	mov    %edx,0x4(%esp)
 83376ae:	89 04 24             	mov    %eax,(%esp)
 83376b1:	e8 7c 83 02 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 83376b6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83376b9:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 83376bd:	75 07                	jne    83376c6 <_ZN13user_creature9CCreature13GetCreatureIdEi+0x2a>
 83376bf:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 83376c4:	eb 2d                	jmp    83376f3 <_ZN13user_creature9CCreature13GetCreatureIdEi+0x57>
 83376c6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83376c9:	89 04 24             	mov    %eax,(%esp)
 83376cc:	e8 29 9c db ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 83376d1:	84 c0                	test   %al,%al
 83376d3:	74 07                	je     83376dc <_ZN13user_creature9CCreature13GetCreatureIdEi+0x40>
 83376d5:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 83376da:	eb 17                	jmp    83376f3 <_ZN13user_creature9CCreature13GetCreatureIdEi+0x57>
 83376dc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83376df:	89 04 24             	mov    %eax,(%esp)
 83376e2:	e8 d7 77 00 00       	call   833eebe <_ZNK10CEquipItem20get_creature_speciesEv>
 83376e7:	8b 55 08             	mov    0x8(%ebp),%edx
 83376ea:	89 42 48             	mov    %eax,0x48(%edx)
 83376ed:	8b 45 08             	mov    0x8(%ebp),%eax
 83376f0:	8b 40 48             	mov    0x48(%eax),%eax
 83376f3:	c9                   	leave
 83376f4:	c3                   	ret
 83376f5:	90                   	nop

```

```c
// user_creature::CCreature::GetCreatureId @ 0x833769c

/* user_creature::CCreature::GetCreatureId(int) */

undefined4 __thiscall user_creature::CCreature::GetCreatureId(CCreature *this,int param_1)

{
  char cVar1;
  CDataManager *this_00;
  CItem *this_01;
  undefined4 uVar2;
  
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,param_1);
  if (this_01 == (CItem *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = CItem::is_stackable(this_01);
    if (cVar1 == '\0') {
      uVar2 = CEquipItem::get_creature_species((CEquipItem *)this_01);
      *(undefined4 *)(this + 0x48) = uVar2;
      uVar2 = *(undefined4 *)(this + 0x48);
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

```

---

## GetExpLevel

```asm
// === 083374d2 user_creature::CCreature::GetExpLevel  [0x083374d2-0x833756d] ===
 83374d2:	55                   	push   %ebp
 83374d3:	89 e5                	mov    %esp,%ebp
 83374d5:	83 ec 28             	sub    $0x28,%esp
 83374d8:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 83374df:	8b 45 08             	mov    0x8(%ebp),%eax
 83374e2:	0f b6 40 4c          	movzbl 0x4c(%eax),%eax
 83374e6:	83 f0 01             	xor    $0x1,%eax
 83374e9:	84 c0                	test   %al,%al
 83374eb:	74 31                	je     833751e <_ZN13user_creature9CCreature11GetExpLevelEi+0x4c>
 83374ed:	8b 45 08             	mov    0x8(%ebp),%eax
 83374f0:	8b 40 44             	mov    0x44(%eax),%eax
 83374f3:	89 04 24             	mov    %eax,(%esp)
 83374f6:	e8 5b 7e 00 00       	call   833f356 <_ZN13user_creature15CCreatureScript26GetGrowItemCountforLevelUpEv>
 83374fb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83374fe:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8337502:	75 07                	jne    833750b <_ZN13user_creature9CCreature11GetExpLevelEi+0x39>
 8337504:	c7 45 f4 19 00 00 00 	movl   $0x19,-0xc(%ebp)
 833750b:	8b 45 0c             	mov    0xc(%ebp),%eax
 833750e:	89 c2                	mov    %eax,%edx
 8337510:	c1 fa 1f             	sar    $0x1f,%edx
 8337513:	f7 7d f4             	idivl  -0xc(%ebp)
 8337516:	83 c0 01             	add    $0x1,%eax
 8337519:	89 45 f0             	mov    %eax,-0x10(%ebp)
 833751c:	eb 17                	jmp    8337535 <_ZN13user_creature9CCreature11GetExpLevelEi+0x63>
 833751e:	e8 78 4c d9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8337523:	8b 55 0c             	mov    0xc(%ebp),%edx
 8337526:	89 54 24 04          	mov    %edx,0x4(%esp)
 833752a:	89 04 24             	mov    %eax,(%esp)
 833752d:	e8 30 90 02 00       	call   8360562 <_ZNK12CDataManager22get_creature_exp_levelEi>
 8337532:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8337535:	8b 45 08             	mov    0x8(%ebp),%eax
 8337538:	8b 40 44             	mov    0x44(%eax),%eax
 833753b:	85 c0                	test   %eax,%eax
 833753d:	74 29                	je     8337568 <_ZN13user_creature9CCreature11GetExpLevelEi+0x96>
 833753f:	8b 45 08             	mov    0x8(%ebp),%eax
 8337542:	8b 40 44             	mov    0x44(%eax),%eax
 8337545:	89 04 24             	mov    %eax,(%esp)
 8337548:	e8 ff 7c 00 00       	call   833f24c <_ZN13user_creature15CCreatureScript11GetMaxLevelEv>
 833754d:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8337550:	0f 9c c0             	setl   %al
 8337553:	84 c0                	test   %al,%al
 8337555:	74 11                	je     8337568 <_ZN13user_creature9CCreature11GetExpLevelEi+0x96>
 8337557:	8b 45 08             	mov    0x8(%ebp),%eax
 833755a:	8b 40 44             	mov    0x44(%eax),%eax
 833755d:	89 04 24             	mov    %eax,(%esp)
 8337560:	e8 e7 7c 00 00       	call   833f24c <_ZN13user_creature15CCreatureScript11GetMaxLevelEv>
 8337565:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8337568:	8b 45 f0             	mov    -0x10(%ebp),%eax
 833756b:	c9                   	leave
 833756c:	c3                   	ret
 833756d:	90                   	nop

```

```c
// user_creature::CCreature::GetExpLevel @ 0x83374d2

/* user_creature::CCreature::GetExpLevel(int) */

int __thiscall user_creature::CCreature::GetExpLevel(CCreature *this,int param_1)

{
  CDataManager *this_00;
  int iVar1;
  int local_14;
  int local_10;
  
  if (this[0x4c] == (CCreature)0x1) {
    this_00 = (CDataManager *)G_CDataManager();
    local_14 = CDataManager::get_creature_exp_level(this_00,param_1);
  }
  else {
    local_10 = CCreatureScript::GetGrowItemCountforLevelUp(*(CCreatureScript **)(this + 0x44));
    if (local_10 == 0) {
      local_10 = 0x19;
    }
    local_14 = param_1 / local_10 + 1;
  }
  if (*(int *)(this + 0x44) != 0) {
    iVar1 = CCreatureScript::GetMaxLevel(*(CCreatureScript **)(this + 0x44));
    if (iVar1 < local_14) {
      local_14 = CCreatureScript::GetMaxLevel(*(CCreatureScript **)(this + 0x44));
    }
  }
  return local_14;
}

```

---

## GetLearnOverSkillLevel

```asm
// === 08338c78 user_creature::CCreature::GetLearnOverSkillLevel  [0x08338c78-0x8338c9f] ===
 8338c78:	55                   	push   %ebp
 8338c79:	89 e5                	mov    %esp,%ebp
 8338c7b:	83 ec 18             	sub    $0x18,%esp
 8338c7e:	8b 45 08             	mov    0x8(%ebp),%eax
 8338c81:	8b 40 44             	mov    0x44(%eax),%eax
 8338c84:	85 c0                	test   %eax,%eax
 8338c86:	75 07                	jne    8338c8f <_ZN13user_creature9CCreature22GetLearnOverSkillLevelEv+0x17>
 8338c88:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8338c8d:	eb 0e                	jmp    8338c9d <_ZN13user_creature9CCreature22GetLearnOverSkillLevelEv+0x25>
 8338c8f:	8b 45 08             	mov    0x8(%ebp),%eax
 8338c92:	8b 40 44             	mov    0x44(%eax),%eax
 8338c95:	89 04 24             	mov    %eax,(%esp)
 8338c98:	e8 d3 65 00 00       	call   833f270 <_ZN13user_creature15CCreatureScript22GetLearnOverSkillLevelEv>
 8338c9d:	c9                   	leave
 8338c9e:	c3                   	ret
 8338c9f:	90                   	nop

```

```c
// user_creature::CCreature::GetLearnOverSkillLevel @ 0x8338c78

/* user_creature::CCreature::GetLearnOverSkillLevel() */

undefined4 __thiscall user_creature::CCreature::GetLearnOverSkillLevel(CCreature *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x44) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = CCreatureScript::GetLearnOverSkillLevel(*(CCreatureScript **)(this + 0x44));
  }
  return uVar1;
}

```

---

## GetOverSkillRecoveryTime

```asm
// === 08338c50 user_creature::CCreature::GetOverSkillRecoveryTime  [0x08338c50-0x8338c77] ===
 8338c50:	55                   	push   %ebp
 8338c51:	89 e5                	mov    %esp,%ebp
 8338c53:	83 ec 18             	sub    $0x18,%esp
 8338c56:	8b 45 08             	mov    0x8(%ebp),%eax
 8338c59:	8b 40 44             	mov    0x44(%eax),%eax
 8338c5c:	85 c0                	test   %eax,%eax
 8338c5e:	75 07                	jne    8338c67 <_ZN13user_creature9CCreature24GetOverSkillRecoveryTimeEv+0x17>
 8338c60:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8338c65:	eb 0e                	jmp    8338c75 <_ZN13user_creature9CCreature24GetOverSkillRecoveryTimeEv+0x25>
 8338c67:	8b 45 08             	mov    0x8(%ebp),%eax
 8338c6a:	8b 40 44             	mov    0x44(%eax),%eax
 8338c6d:	89 04 24             	mov    %eax,(%esp)
 8338c70:	e8 ef 65 00 00       	call   833f264 <_ZN13user_creature15CCreatureScript24GetOverSkillRecoveryTimeEv>
 8338c75:	c9                   	leave
 8338c76:	c3                   	ret
 8338c77:	90                   	nop

```

```c
// user_creature::CCreature::GetOverSkillRecoveryTime @ 0x8338c50

/* user_creature::CCreature::GetOverSkillRecoveryTime() */

undefined4 __thiscall user_creature::CCreature::GetOverSkillRecoveryTime(CCreature *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x44) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = CCreatureScript::GetOverSkillRecoveryTime(*(CCreatureScript **)(this + 0x44));
  }
  return uVar1;
}

```

---

## GetSkillRecoveryTime

```asm
// === 08338c28 user_creature::CCreature::GetSkillRecoveryTime  [0x08338c28-0x8338c4f] ===
 8338c28:	55                   	push   %ebp
 8338c29:	89 e5                	mov    %esp,%ebp
 8338c2b:	83 ec 18             	sub    $0x18,%esp
 8338c2e:	8b 45 08             	mov    0x8(%ebp),%eax
 8338c31:	8b 40 44             	mov    0x44(%eax),%eax
 8338c34:	85 c0                	test   %eax,%eax
 8338c36:	75 07                	jne    8338c3f <_ZN13user_creature9CCreature20GetSkillRecoveryTimeEv+0x17>
 8338c38:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8338c3d:	eb 0e                	jmp    8338c4d <_ZN13user_creature9CCreature20GetSkillRecoveryTimeEv+0x25>
 8338c3f:	8b 45 08             	mov    0x8(%ebp),%eax
 8338c42:	8b 40 44             	mov    0x44(%eax),%eax
 8338c45:	89 04 24             	mov    %eax,(%esp)
 8338c48:	e8 0b 66 00 00       	call   833f258 <_ZN13user_creature15CCreatureScript20GetSkillRecoveryTimeEv>
 8338c4d:	c9                   	leave
 8338c4e:	c3                   	ret
 8338c4f:	90                   	nop

```

```c
// user_creature::CCreature::GetSkillRecoveryTime @ 0x8338c28

/* user_creature::CCreature::GetSkillRecoveryTime() */

undefined4 __thiscall user_creature::CCreature::GetSkillRecoveryTime(CCreature *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x44) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = CCreatureScript::GetSkillRecoveryTime(*(CCreatureScript **)(this + 0x44));
  }
  return uVar1;
}

```

---

## GetStomach

```asm
// === 083384ee user_creature::CCreature::GetStomach  [0x083384ee-0x8338535] ===
 83384ee:	55                   	push   %ebp
 83384ef:	89 e5                	mov    %esp,%ebp
 83384f1:	83 ec 28             	sub    $0x28,%esp
 83384f4:	8b 45 08             	mov    0x8(%ebp),%eax
 83384f7:	0f b6 40 4c          	movzbl 0x4c(%eax),%eax
 83384fb:	0f b6 d0             	movzbl %al,%edx
 83384fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8338501:	8b 40 3c             	mov    0x3c(%eax),%eax
 8338504:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8338507:	83 c1 34             	add    $0x34,%ecx
 833850a:	89 54 24 08          	mov    %edx,0x8(%esp)
 833850e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8338512:	89 0c 24             	mov    %ecx,(%esp)
 8338515:	e8 e2 e7 ff ff       	call   8336cfc <_ZN13user_creature8CStomach15GetStomachValueENS_14CREATURE_STATEEb>
 833851a:	d9 7d f6             	fnstcw -0xa(%ebp)
 833851d:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
 8338521:	b4 0c                	mov    $0xc,%ah
 8338523:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 8338527:	d9 6d f4             	fldcw  -0xc(%ebp)
 833852a:	db 5d f0             	fistpl -0x10(%ebp)
 833852d:	d9 6d f6             	fldcw  -0xa(%ebp)
 8338530:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8338533:	c9                   	leave
 8338534:	c3                   	ret
 8338535:	90                   	nop

```

```c
// user_creature::CCreature::GetStomach @ 0x83384ee

/* user_creature::CCreature::GetStomach() */

int __thiscall user_creature::CCreature::GetStomach(CCreature *this)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)
          CStomach::GetStomachValue
                    ((CStomach *)(this + 0x34),*(undefined4 *)(this + 0x3c),this[0x4c]);
  return (int)ROUND(lVar1);
}

```

---

## IsAbleEvolute

```asm
// === 083380fc user_creature::CCreature::IsAbleEvolute  [0x083380fc-0x83381e9] ===
 83380fc:	55                   	push   %ebp
 83380fd:	89 e5                	mov    %esp,%ebp
 83380ff:	56                   	push   %esi
 8338100:	53                   	push   %ebx
 8338101:	83 ec 20             	sub    $0x20,%esp
 8338104:	8b 45 08             	mov    0x8(%ebp),%eax
 8338107:	8b 40 44             	mov    0x44(%eax),%eax
 833810a:	85 c0                	test   %eax,%eax
 833810c:	75 0a                	jne    8338118 <_ZNK13user_creature9CCreature13IsAbleEvoluteEP5CUser+0x1c>
 833810e:	b8 00 00 00 00       	mov    $0x0,%eax
 8338113:	e9 cb 00 00 00       	jmp    83381e3 <_ZNK13user_creature9CCreature13IsAbleEvoluteEP5CUser+0xe7>
 8338118:	8b 45 08             	mov    0x8(%ebp),%eax
 833811b:	8b 40 44             	mov    0x44(%eax),%eax
 833811e:	89 04 24             	mov    %eax,(%esp)
 8338121:	e8 1a 71 00 00       	call   833f240 <_ZN13user_creature15CCreatureScript17GetEvolutionLevelEv>
 8338126:	85 c0                	test   %eax,%eax
 8338128:	0f 94 c0             	sete   %al
 833812b:	84 c0                	test   %al,%al
 833812d:	74 0a                	je     8338139 <_ZNK13user_creature9CCreature13IsAbleEvoluteEP5CUser+0x3d>
 833812f:	b8 00 00 00 00       	mov    $0x0,%eax
 8338134:	e9 aa 00 00 00       	jmp    83381e3 <_ZNK13user_creature9CCreature13IsAbleEvoluteEP5CUser+0xe7>
 8338139:	8b 45 08             	mov    0x8(%ebp),%eax
 833813c:	8b 40 44             	mov    0x44(%eax),%eax
 833813f:	89 04 24             	mov    %eax,(%esp)
 8338142:	e8 f9 70 00 00       	call   833f240 <_ZN13user_creature15CCreatureScript17GetEvolutionLevelEv>
 8338147:	8b 55 08             	mov    0x8(%ebp),%edx
 833814a:	8b 52 2c             	mov    0x2c(%edx),%edx
 833814d:	39 d0                	cmp    %edx,%eax
 833814f:	0f 9f c0             	setg   %al
 8338152:	84 c0                	test   %al,%al
 8338154:	74 0a                	je     8338160 <_ZNK13user_creature9CCreature13IsAbleEvoluteEP5CUser+0x64>
 8338156:	b8 00 00 00 00       	mov    $0x0,%eax
 833815b:	e9 83 00 00 00       	jmp    83381e3 <_ZNK13user_creature9CCreature13IsAbleEvoluteEP5CUser+0xe7>
 8338160:	8b 45 08             	mov    0x8(%ebp),%eax
 8338163:	8b 40 44             	mov    0x44(%eax),%eax
 8338166:	89 04 24             	mov    %eax,(%esp)
 8338169:	e8 c6 6f 00 00       	call   833f134 <_ZN13user_creature15CCreatureScript21IsExistEvolutionQuestEv>
 833816e:	84 c0                	test   %al,%al
 8338170:	74 6c                	je     83381de <_ZNK13user_creature9CCreature13IsAbleEvoluteEP5CUser+0xe2>
 8338172:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8338176:	74 5f                	je     83381d7 <_ZNK13user_creature9CCreature13IsAbleEvoluteEP5CUser+0xdb>
 8338178:	8d 45 ec             	lea    -0x14(%ebp),%eax
 833817b:	89 04 24             	mov    %eax,(%esp)
 833817e:	e8 c9 5b 25 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8338183:	8d 5d ec             	lea    -0x14(%ebp),%ebx
 8338186:	8b 45 0c             	mov    0xc(%ebp),%eax
 8338189:	89 04 24             	mov    %eax,(%esp)
 833818c:	e8 15 27 e6 ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 8338191:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8338195:	89 04 24             	mov    %eax,(%esp)
 8338198:	e8 0b 3a 37 00       	call   86abba8 <_ZNK9UserQuest14get_quest_infoEPc>
 833819d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 83381a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 83381a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 83381a7:	89 04 24             	mov    %eax,(%esp)
 83381aa:	e8 0b 04 31 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 83381af:	eb 1b                	jmp    83381cc <_ZNK13user_creature9CCreature13IsAbleEvoluteEP5CUser+0xd0>
 83381b1:	89 d3                	mov    %edx,%ebx
 83381b3:	89 c6                	mov    %eax,%esi
 83381b5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 83381b8:	89 04 24             	mov    %eax,(%esp)
 83381bb:	e8 c0 5c 25 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 83381c0:	89 f0                	mov    %esi,%eax
 83381c2:	89 da                	mov    %ebx,%edx
 83381c4:	89 04 24             	mov    %eax,(%esp)
 83381c7:	e8 84 b5 7a 00       	call   8ae3750 <_Unwind_Resume>
 83381cc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 83381cf:	89 04 24             	mov    %eax,(%esp)
 83381d2:	e8 a9 5c 25 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 83381d7:	b8 00 00 00 00       	mov    $0x0,%eax
 83381dc:	eb 05                	jmp    83381e3 <_ZNK13user_creature9CCreature13IsAbleEvoluteEP5CUser+0xe7>
 83381de:	b8 01 00 00 00       	mov    $0x1,%eax
 83381e3:	83 c4 20             	add    $0x20,%esp
 83381e6:	5b                   	pop    %ebx
 83381e7:	5e                   	pop    %esi
 83381e8:	5d                   	pop    %ebp
 83381e9:	c3                   	ret

```

```c
// user_creature::CCreature::IsAbleEvolute @ 0x83380fc

/* user_creature::CCreature::IsAbleEvolute(CUser*) const */

undefined4 __thiscall user_creature::CCreature::IsAbleEvolute(CCreature *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  UserQuest *this_00;
  PacketGuard local_18 [12];
  
  if (*(int *)(this + 0x44) == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = CCreatureScript::GetEvolutionLevel(*(CCreatureScript **)(this + 0x44));
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      iVar3 = CCreatureScript::GetEvolutionLevel(*(CCreatureScript **)(this + 0x44));
      if (*(int *)(this + 0x2c) < iVar3) {
        uVar2 = 0;
      }
      else {
        cVar1 = CCreatureScript::IsExistEvolutionQuest(*(CCreatureScript **)(this + 0x44));
        if (cVar1 == '\0') {
          uVar2 = 1;
        }
        else {
          if (param_1 != (CUser *)0x0) {
            PacketGuard::PacketGuard(local_18);
            this_00 = (UserQuest *)CUser::getCurCharacQuestR(param_1);
                    /* try { // try from 08338198 to 083381ae has its CatchHandler @ 083381b1 */
            UserQuest::get_quest_info(this_00,(char *)local_18);
            CUser::Send(param_1,local_18);
            PacketGuard::~PacketGuard(local_18);
          }
          uVar2 = 0;
        }
      }
    }
  }
  return uVar2;
}

```

---

## IsAbleSelectEvolute

```asm
// === 08337d58 user_creature::CCreature::IsAbleSelectEvolute  [0x08337d58-0x8337e47] ===
 8337d58:	55                   	push   %ebp
 8337d59:	89 e5                	mov    %esp,%ebp
 8337d5b:	56                   	push   %esi
 8337d5c:	53                   	push   %ebx
 8337d5d:	83 ec 20             	sub    $0x20,%esp
 8337d60:	8b 45 08             	mov    0x8(%ebp),%eax
 8337d63:	8b 40 44             	mov    0x44(%eax),%eax
 8337d66:	85 c0                	test   %eax,%eax
 8337d68:	75 0a                	jne    8337d74 <_ZN13user_creature9CCreature19IsAbleSelectEvoluteEP5CUser+0x1c>
 8337d6a:	b8 00 00 00 00       	mov    $0x0,%eax
 8337d6f:	e9 cc 00 00 00       	jmp    8337e40 <_ZN13user_creature9CCreature19IsAbleSelectEvoluteEP5CUser+0xe8>
 8337d74:	8b 45 08             	mov    0x8(%ebp),%eax
 8337d77:	8b 40 44             	mov    0x44(%eax),%eax
 8337d7a:	89 04 24             	mov    %eax,(%esp)
 8337d7d:	e8 c8 75 00 00       	call   833f34a <_ZN13user_creature15CCreatureScript27GetTypeSelectEvolutionLevelEv>
 8337d82:	83 f8 ff             	cmp    $0xffffffff,%eax
 8337d85:	0f 94 c0             	sete   %al
 8337d88:	84 c0                	test   %al,%al
 8337d8a:	74 0a                	je     8337d96 <_ZN13user_creature9CCreature19IsAbleSelectEvoluteEP5CUser+0x3e>
 8337d8c:	b8 00 00 00 00       	mov    $0x0,%eax
 8337d91:	e9 aa 00 00 00       	jmp    8337e40 <_ZN13user_creature9CCreature19IsAbleSelectEvoluteEP5CUser+0xe8>
 8337d96:	8b 45 08             	mov    0x8(%ebp),%eax
 8337d99:	8b 40 44             	mov    0x44(%eax),%eax
 8337d9c:	89 04 24             	mov    %eax,(%esp)
 8337d9f:	e8 a6 75 00 00       	call   833f34a <_ZN13user_creature15CCreatureScript27GetTypeSelectEvolutionLevelEv>
 8337da4:	8b 55 08             	mov    0x8(%ebp),%edx
 8337da7:	8b 52 2c             	mov    0x2c(%edx),%edx
 8337daa:	39 d0                	cmp    %edx,%eax
 8337dac:	0f 9f c0             	setg   %al
 8337daf:	84 c0                	test   %al,%al
 8337db1:	74 0a                	je     8337dbd <_ZN13user_creature9CCreature19IsAbleSelectEvoluteEP5CUser+0x65>
 8337db3:	b8 00 00 00 00       	mov    $0x0,%eax
 8337db8:	e9 83 00 00 00       	jmp    8337e40 <_ZN13user_creature9CCreature19IsAbleSelectEvoluteEP5CUser+0xe8>
 8337dbd:	8b 45 08             	mov    0x8(%ebp),%eax
 8337dc0:	8b 40 44             	mov    0x44(%eax),%eax
 8337dc3:	89 04 24             	mov    %eax,(%esp)
 8337dc6:	e8 69 73 00 00       	call   833f134 <_ZN13user_creature15CCreatureScript21IsExistEvolutionQuestEv>
 8337dcb:	84 c0                	test   %al,%al
 8337dcd:	74 6c                	je     8337e3b <_ZN13user_creature9CCreature19IsAbleSelectEvoluteEP5CUser+0xe3>
 8337dcf:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8337dd3:	74 5f                	je     8337e34 <_ZN13user_creature9CCreature19IsAbleSelectEvoluteEP5CUser+0xdc>
 8337dd5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8337dd8:	89 04 24             	mov    %eax,(%esp)
 8337ddb:	e8 6c 5f 25 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8337de0:	8d 5d ec             	lea    -0x14(%ebp),%ebx
 8337de3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8337de6:	89 04 24             	mov    %eax,(%esp)
 8337de9:	e8 b8 2a e6 ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 8337dee:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8337df2:	89 04 24             	mov    %eax,(%esp)
 8337df5:	e8 ae 3d 37 00       	call   86abba8 <_ZNK9UserQuest14get_quest_infoEPc>
 8337dfa:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8337dfd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8337e01:	8b 45 0c             	mov    0xc(%ebp),%eax
 8337e04:	89 04 24             	mov    %eax,(%esp)
 8337e07:	e8 ae 07 31 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8337e0c:	eb 1b                	jmp    8337e29 <_ZN13user_creature9CCreature19IsAbleSelectEvoluteEP5CUser+0xd1>
 8337e0e:	89 d3                	mov    %edx,%ebx
 8337e10:	89 c6                	mov    %eax,%esi
 8337e12:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8337e15:	89 04 24             	mov    %eax,(%esp)
 8337e18:	e8 63 60 25 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8337e1d:	89 f0                	mov    %esi,%eax
 8337e1f:	89 da                	mov    %ebx,%edx
 8337e21:	89 04 24             	mov    %eax,(%esp)
 8337e24:	e8 27 b9 7a 00       	call   8ae3750 <_Unwind_Resume>
 8337e29:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8337e2c:	89 04 24             	mov    %eax,(%esp)
 8337e2f:	e8 4c 60 25 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8337e34:	b8 00 00 00 00       	mov    $0x0,%eax
 8337e39:	eb 05                	jmp    8337e40 <_ZN13user_creature9CCreature19IsAbleSelectEvoluteEP5CUser+0xe8>
 8337e3b:	b8 01 00 00 00       	mov    $0x1,%eax
 8337e40:	83 c4 20             	add    $0x20,%esp
 8337e43:	5b                   	pop    %ebx
 8337e44:	5e                   	pop    %esi
 8337e45:	5d                   	pop    %ebp
 8337e46:	c3                   	ret
 8337e47:	90                   	nop

```

```c
// user_creature::CCreature::IsAbleSelectEvolute @ 0x8337d58

/* user_creature::CCreature::IsAbleSelectEvolute(CUser*) */

undefined4 __thiscall user_creature::CCreature::IsAbleSelectEvolute(CCreature *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  UserQuest *this_00;
  PacketGuard local_18 [12];
  
  if (*(int *)(this + 0x44) == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = CCreatureScript::GetTypeSelectEvolutionLevel(*(CCreatureScript **)(this + 0x44));
    if (iVar3 == -1) {
      uVar2 = 0;
    }
    else {
      iVar3 = CCreatureScript::GetTypeSelectEvolutionLevel(*(CCreatureScript **)(this + 0x44));
      if (*(int *)(this + 0x2c) < iVar3) {
        uVar2 = 0;
      }
      else {
        cVar1 = CCreatureScript::IsExistEvolutionQuest(*(CCreatureScript **)(this + 0x44));
        if (cVar1 == '\0') {
          uVar2 = 1;
        }
        else {
          if (param_1 != (CUser *)0x0) {
            PacketGuard::PacketGuard(local_18);
            this_00 = (UserQuest *)CUser::getCurCharacQuestR(param_1);
                    /* try { // try from 08337df5 to 08337e0b has its CatchHandler @ 08337e0e */
            UserQuest::get_quest_info(this_00,(char *)local_18);
            CUser::Send(param_1,local_18);
            PacketGuard::~PacketGuard(local_18);
          }
          uVar2 = 0;
        }
      }
    }
  }
  return uVar2;
}

```

---

## IsAvailableArtifact

```asm
// === 083376f6 user_creature::CCreature::IsAvailableArtifact  [0x083376f6-0x8337723] ===
 83376f6:	55                   	push   %ebp
 83376f7:	89 e5                	mov    %esp,%ebp
 83376f9:	83 ec 18             	sub    $0x18,%esp
 83376fc:	8b 45 08             	mov    0x8(%ebp),%eax
 83376ff:	8b 40 44             	mov    0x44(%eax),%eax
 8337702:	85 c0                	test   %eax,%eax
 8337704:	75 07                	jne    833770d <_ZN13user_creature9CCreature19IsAvailableArtifactEi+0x17>
 8337706:	b8 00 00 00 00       	mov    $0x0,%eax
 833770b:	eb 15                	jmp    8337722 <_ZN13user_creature9CCreature19IsAvailableArtifactEi+0x2c>
 833770d:	8b 45 08             	mov    0x8(%ebp),%eax
 8337710:	8b 40 44             	mov    0x44(%eax),%eax
 8337713:	8b 55 0c             	mov    0xc(%ebp),%edx
 8337716:	89 54 24 04          	mov    %edx,0x4(%esp)
 833771a:	89 04 24             	mov    %eax,(%esp)
 833771d:	e8 16 54 00 00       	call   833cb38 <_ZN13user_creature15CCreatureScript23IsAvailableArtifactSlotEi>
 8337722:	c9                   	leave
 8337723:	c3                   	ret

```

```c
// user_creature::CCreature::IsAvailableArtifact @ 0x83376f6

/* user_creature::CCreature::IsAvailableArtifact(int) */

undefined4 __thiscall user_creature::CCreature::IsAvailableArtifact(CCreature *this,int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x44) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CCreatureScript::IsAvailableArtifactSlot(*(CCreatureScript **)(this + 0x44),param_1);
  }
  return uVar1;
}

```

---

## IsDieCreature

```asm
// === 08338478 user_creature::CCreature::IsDieCreature  [0x08338478-0x83384b7] ===
 8338478:	55                   	push   %ebp
 8338479:	89 e5                	mov    %esp,%ebp
 833847b:	83 ec 28             	sub    $0x28,%esp
 833847e:	8b 45 08             	mov    0x8(%ebp),%eax
 8338481:	0f b6 40 4c          	movzbl 0x4c(%eax),%eax
 8338485:	0f b6 d0             	movzbl %al,%edx
 8338488:	8b 45 08             	mov    0x8(%ebp),%eax
 833848b:	8b 40 3c             	mov    0x3c(%eax),%eax
 833848e:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8338491:	83 c1 34             	add    $0x34,%ecx
 8338494:	89 54 24 08          	mov    %edx,0x8(%esp)
 8338498:	89 44 24 04          	mov    %eax,0x4(%esp)
 833849c:	89 0c 24             	mov    %ecx,(%esp)
 833849f:	e8 58 e8 ff ff       	call   8336cfc <_ZN13user_creature8CStomach15GetStomachValueENS_14CREATURE_STATEEb>
 83384a4:	d9 5d f4             	fstps  -0xc(%ebp)
 83384a7:	d9 45 f4             	flds   -0xc(%ebp)
 83384aa:	d9 e8                	fld1
 83384ac:	da e9                	fucompp
 83384ae:	df e0                	fnstsw %ax
 83384b0:	f6 c4 45             	test   $0x45,%ah
 83384b3:	0f 94 c0             	sete   %al
 83384b6:	c9                   	leave
 83384b7:	c3                   	ret

```

```c
// user_creature::CCreature::IsDieCreature @ 0x8338478

/* user_creature::CCreature::IsDieCreature() */

undefined4 __thiscall user_creature::CCreature::IsDieCreature(CCreature *this)

{
  float fVar1;
  undefined2 extraout_var;
  ushort uVar2;
  longdouble lVar3;
  
  lVar3 = (longdouble)
          CStomach::GetStomachValue
                    ((CStomach *)(this + 0x34),*(undefined4 *)(this + 0x3c),this[0x4c]);
  fVar1 = (float)lVar3;
  uVar2 = (ushort)(1.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 | (ushort)(fVar1 == 1.0) << 0xe;
  return CONCAT31((int3)(CONCAT22(extraout_var,uVar2) >> 8),(char)(uVar2 >> 8) == '\0');
}

```

---

## IsEventEvolutionCreature

```asm
// === 08338bfa user_creature::CCreature::IsEventEvolutionCreature  [0x08338bfa-0x8338c27] ===
 8338bfa:	55                   	push   %ebp
 8338bfb:	89 e5                	mov    %esp,%ebp
 8338bfd:	83 ec 18             	sub    $0x18,%esp
 8338c00:	8b 45 08             	mov    0x8(%ebp),%eax
 8338c03:	8b 40 44             	mov    0x44(%eax),%eax
 8338c06:	85 c0                	test   %eax,%eax
 8338c08:	74 17                	je     8338c21 <_ZN13user_creature9CCreature24IsEventEvolutionCreatureEi+0x27>
 8338c0a:	8b 45 08             	mov    0x8(%ebp),%eax
 8338c0d:	8b 40 44             	mov    0x44(%eax),%eax
 8338c10:	8b 55 0c             	mov    0xc(%ebp),%edx
 8338c13:	89 54 24 04          	mov    %edx,0x4(%esp)
 8338c17:	89 04 24             	mov    %eax,(%esp)
 8338c1a:	e8 31 65 00 00       	call   833f150 <_ZN13user_creature15CCreatureScript25validEventEvlouteCreatureEi>
 8338c1f:	eb 05                	jmp    8338c26 <_ZN13user_creature9CCreature24IsEventEvolutionCreatureEi+0x2c>
 8338c21:	b8 00 00 00 00       	mov    $0x0,%eax
 8338c26:	c9                   	leave
 8338c27:	c3                   	ret

```

```c
// user_creature::CCreature::IsEventEvolutionCreature @ 0x8338bfa

/* user_creature::CCreature::IsEventEvolutionCreature(int) */

undefined4 __thiscall
user_creature::CCreature::IsEventEvolutionCreature(CCreature *this,int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x44) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CCreatureScript::validEventEvlouteCreature(*(CCreatureScript **)(this + 0x44),param_1);
  }
  return uVar1;
}

```

---

## IsEvolutionCreature

```asm
// === 083388ec user_creature::CCreature::IsEvolutionCreature  [0x083388ec-0x8338921] ===
 83388ec:	55                   	push   %ebp
 83388ed:	89 e5                	mov    %esp,%ebp
 83388ef:	83 ec 18             	sub    $0x18,%esp
 83388f2:	8b 45 08             	mov    0x8(%ebp),%eax
 83388f5:	8b 40 44             	mov    0x44(%eax),%eax
 83388f8:	85 c0                	test   %eax,%eax
 83388fa:	74 1f                	je     833891b <_ZN13user_creature9CCreature19IsEvolutionCreatureEi+0x2f>
 83388fc:	8b 45 08             	mov    0x8(%ebp),%eax
 83388ff:	8b 40 44             	mov    0x44(%eax),%eax
 8338902:	89 04 24             	mov    %eax,(%esp)
 8338905:	e8 3a 68 00 00       	call   833f144 <_ZN13user_creature15CCreatureScript22GetEvolutionCreatureIdEv>
 833890a:	3b 45 0c             	cmp    0xc(%ebp),%eax
 833890d:	0f 94 c0             	sete   %al
 8338910:	84 c0                	test   %al,%al
 8338912:	74 07                	je     833891b <_ZN13user_creature9CCreature19IsEvolutionCreatureEi+0x2f>
 8338914:	b8 01 00 00 00       	mov    $0x1,%eax
 8338919:	eb 05                	jmp    8338920 <_ZN13user_creature9CCreature19IsEvolutionCreatureEi+0x34>
 833891b:	b8 00 00 00 00       	mov    $0x0,%eax
 8338920:	c9                   	leave
 8338921:	c3                   	ret

```

```c
// user_creature::CCreature::IsEvolutionCreature @ 0x83388ec

/* user_creature::CCreature::IsEvolutionCreature(int) */

undefined4 __thiscall user_creature::CCreature::IsEvolutionCreature(CCreature *this,int param_1)

{
  int iVar1;
  
  if ((*(int *)(this + 0x44) != 0) &&
     (iVar1 = CCreatureScript::GetEvolutionCreatureId(*(CCreatureScript **)(this + 0x44)),
     iVar1 == param_1)) {
    return 1;
  }
  return 0;
}

```

---

## IsEvolutionCreatureMulty

```asm
// === 08338922 user_creature::CCreature::IsEvolutionCreatureMulty  [0x08338922-0x833894f] ===
 8338922:	55                   	push   %ebp
 8338923:	89 e5                	mov    %esp,%ebp
 8338925:	83 ec 18             	sub    $0x18,%esp
 8338928:	8b 45 08             	mov    0x8(%ebp),%eax
 833892b:	8b 40 44             	mov    0x44(%eax),%eax
 833892e:	85 c0                	test   %eax,%eax
 8338930:	74 17                	je     8338949 <_ZN13user_creature9CCreature24IsEvolutionCreatureMultyEi+0x27>
 8338932:	8b 45 08             	mov    0x8(%ebp),%eax
 8338935:	8b 40 44             	mov    0x44(%eax),%eax
 8338938:	8b 55 0c             	mov    0xc(%ebp),%edx
 833893b:	89 54 24 04          	mov    %edx,0x4(%esp)
 833893f:	89 04 24             	mov    %eax,(%esp)
 8338942:	e8 99 68 00 00       	call   833f1e0 <_ZN13user_creature15CCreatureScript20isEvoluationCreatureEi>
 8338947:	eb 05                	jmp    833894e <_ZN13user_creature9CCreature24IsEvolutionCreatureMultyEi+0x2c>
 8338949:	b8 00 00 00 00       	mov    $0x0,%eax
 833894e:	c9                   	leave
 833894f:	c3                   	ret

```

```c
// user_creature::CCreature::IsEvolutionCreatureMulty @ 0x8338922

/* user_creature::CCreature::IsEvolutionCreatureMulty(int) */

undefined4 __thiscall
user_creature::CCreature::IsEvolutionCreatureMulty(CCreature *this,int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x44) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CCreatureScript::isEvoluationCreature(*(CCreatureScript **)(this + 0x44),param_1);
  }
  return uVar1;
}

```

---

## ItemEvolute

```asm
// === 08338ca0 user_creature::CCreature::ItemEvolute  [0x08338ca0-0x8338f35] ===
 8338ca0:	55                   	push   %ebp
 8338ca1:	89 e5                	mov    %esp,%ebp
 8338ca3:	56                   	push   %esi
 8338ca4:	53                   	push   %ebx
 8338ca5:	83 ec 70             	sub    $0x70,%esp
 8338ca8:	8b 45 08             	mov    0x8(%ebp),%eax
 8338cab:	8b 40 44             	mov    0x44(%eax),%eax
 8338cae:	85 c0                	test   %eax,%eax
 8338cb0:	75 63                	jne    8338d15 <_ZN13user_creature9CCreature11ItemEvoluteEP5CUseri+0x75>
 8338cb2:	8b 45 08             	mov    0x8(%ebp),%eax
 8338cb5:	89 04 24             	mov    %eax,(%esp)
 8338cb8:	e8 e7 62 00 00       	call   833efa4 <_ZN13user_creature13CCreatureItem9GetItemIdEv>
 8338cbd:	89 c3                	mov    %eax,%ebx
 8338cbf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8338cc2:	89 04 24             	mov    %eax,(%esp)
 8338cc5:	e8 b2 16 da ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8338cca:	0f b7 f0             	movzwl %ax,%esi
 8338ccd:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8338cd4:	00 
 8338cd5:	c7 44 24 08 9b 08 00 	movl   $0x89b,0x8(%esp)
 8338cdc:	00 
 8338cdd:	c7 44 24 04 20 f3 c2 	movl   $0x8c2f320,0x4(%esp)
 8338ce4:	08 
 8338ce5:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8338ce8:	89 04 24             	mov    %eax,(%esp)
 8338ceb:	e8 28 6a 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8338cf0:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8338cf4:	89 74 24 08          	mov    %esi,0x8(%esp)
 8338cf8:	c7 44 24 04 40 d8 c2 	movl   $0x8c2d840,0x4(%esp)
 8338cff:	08 
 8338d00:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8338d03:	89 04 24             	mov    %eax,(%esp)
 8338d06:	e8 7d 6a 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8338d0b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8338d10:	e9 17 02 00 00       	jmp    8338f2c <_ZN13user_creature9CCreature11ItemEvoluteEP5CUseri+0x28c>
 8338d15:	8b 45 08             	mov    0x8(%ebp),%eax
 8338d18:	8b 40 44             	mov    0x44(%eax),%eax
 8338d1b:	8b 55 10             	mov    0x10(%ebp),%edx
 8338d1e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8338d22:	89 04 24             	mov    %eax,(%esp)
 8338d25:	e8 ae 3d 00 00       	call   833cad8 <_ZN13user_creature15CCreatureScript26GetItemEvolutionCreatureIdEi>
 8338d2a:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8338d2d:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8338d31:	75 0a                	jne    8338d3d <_ZN13user_creature9CCreature11ItemEvoluteEP5CUseri+0x9d>
 8338d33:	bb 00 00 00 00       	mov    $0x0,%ebx
 8338d38:	e9 ef 01 00 00       	jmp    8338f2c <_ZN13user_creature9CCreature11ItemEvoluteEP5CUseri+0x28c>
 8338d3d:	e8 8e de ff ff       	call   8336bd0 <_ZN13user_creature28GetInstanceCreatureScriptMgrEv>
 8338d42:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8338d45:	89 54 24 04          	mov    %edx,0x4(%esp)
 8338d49:	89 04 24             	mov    %eax,(%esp)
 8338d4c:	e8 49 47 00 00       	call   833d49a <_ZN13user_creature18CCreatureScriptMgr18FindCreatureScriptEi>
 8338d51:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8338d54:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8338d58:	75 0a                	jne    8338d64 <_ZN13user_creature9CCreature11ItemEvoluteEP5CUseri+0xc4>
 8338d5a:	bb 00 00 00 00       	mov    $0x0,%ebx
 8338d5f:	e9 c8 01 00 00       	jmp    8338f2c <_ZN13user_creature9CCreature11ItemEvoluteEP5CUseri+0x28c>
 8338d64:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8338d67:	89 04 24             	mov    %eax,(%esp)
 8338d6a:	e8 b9 63 00 00       	call   833f128 <_ZN13user_creature15CCreatureScript9GetItemIdEv>
 8338d6f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8338d72:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8338d75:	89 44 24 04          	mov    %eax,0x4(%esp)
 8338d79:	8b 45 08             	mov    0x8(%ebp),%eax
 8338d7c:	89 04 24             	mov    %eax,(%esp)
 8338d7f:	e8 2a e8 ff ff       	call   83375ae <_ZN13user_creature9CCreature9SetItemIdEi>
 8338d84:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8338d8b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8338d8e:	89 04 24             	mov    %eax,(%esp)
 8338d91:	e8 f8 14 da ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8338d96:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 8338d9d:	00 
 8338d9e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8338da5:	00 
 8338da6:	89 04 24             	mov    %eax,(%esp)
 8338da9:	e8 00 35 1c 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 8338dae:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8338db1:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8338db5:	75 0a                	jne    8338dc1 <_ZN13user_creature9CCreature11ItemEvoluteEP5CUseri+0x121>
 8338db7:	bb 00 00 00 00       	mov    $0x0,%ebx
 8338dbc:	e9 6b 01 00 00       	jmp    8338f2c <_ZN13user_creature9CCreature11ItemEvoluteEP5CUseri+0x28c>
 8338dc1:	8b 45 08             	mov    0x8(%ebp),%eax
 8338dc4:	89 04 24             	mov    %eax,(%esp)
 8338dc7:	e8 d8 61 00 00       	call   833efa4 <_ZN13user_creature13CCreatureItem9GetItemIdEv>
 8338dcc:	89 c2                	mov    %eax,%edx
 8338dce:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8338dd1:	89 50 02             	mov    %edx,0x2(%eax)
 8338dd4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8338dd7:	89 44 24 08          	mov    %eax,0x8(%esp)
 8338ddb:	c7 44 24 04 8a 00 00 	movl   $0x8a,0x4(%esp)
 8338de2:	00 
 8338de3:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8338de6:	89 04 24             	mov    %eax,(%esp)
 8338de9:	e8 c0 6a 00 00       	call   833f8ae <_ZN13user_creature12CDBMsgSenderC1E19ENUM_INTERNALPACKETP5CUser>
 8338dee:	8b 45 08             	mov    0x8(%ebp),%eax
 8338df1:	89 04 24             	mov    %eax,(%esp)
 8338df4:	e8 ab 61 00 00       	call   833efa4 <_ZN13user_creature13CCreatureItem9GetItemIdEv>
 8338df9:	89 c3                	mov    %eax,%ebx
 8338dfb:	8b 45 08             	mov    0x8(%ebp),%eax
 8338dfe:	89 04 24             	mov    %eax,(%esp)
 8338e01:	e8 b8 61 00 00       	call   833efbe <_ZN13user_creature13CCreatureItem6GetUidEv>
 8338e06:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8338e0a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8338e0e:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8338e11:	89 04 24             	mov    %eax,(%esp)
 8338e14:	e8 5b 6f 00 00       	call   833fd74 <_ZN13user_creature12CDBMsgSender15EvoluteCreatureEii>
 8338e19:	83 f0 01             	xor    $0x1,%eax
 8338e1c:	84 c0                	test   %al,%al
 8338e1e:	74 52                	je     8338e72 <_ZN13user_creature9CCreature11ItemEvoluteEP5CUseri+0x1d2>
 8338e20:	8b 45 0c             	mov    0xc(%ebp),%eax
 8338e23:	89 04 24             	mov    %eax,(%esp)
 8338e26:	e8 51 15 da ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8338e2b:	0f b7 d8             	movzwl %ax,%ebx
 8338e2e:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8338e35:	00 
 8338e36:	c7 44 24 08 bb 08 00 	movl   $0x8bb,0x8(%esp)
 8338e3d:	00 
 8338e3e:	c7 44 24 04 20 f3 c2 	movl   $0x8c2f320,0x4(%esp)
 8338e45:	08 
 8338e46:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8338e49:	89 04 24             	mov    %eax,(%esp)
 8338e4c:	e8 c7 68 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8338e51:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8338e55:	c7 44 24 04 27 d8 c2 	movl   $0x8c2d827,0x4(%esp)
 8338e5c:	08 
 8338e5d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8338e60:	89 04 24             	mov    %eax,(%esp)
 8338e63:	e8 20 69 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8338e68:	bb 00 00 00 00       	mov    $0x0,%ebx
 8338e6d:	e9 af 00 00 00       	jmp    8338f21 <_ZN13user_creature9CCreature11ItemEvoluteEP5CUseri+0x281>
 8338e72:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8338e75:	89 04 24             	mov    %eax,(%esp)
 8338e78:	e8 d3 6a 00 00       	call   833f950 <_ZN13user_creature12CDBMsgSender4SendEv>
 8338e7d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8338e84:	00 
 8338e85:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8338e8c:	00 
 8338e8d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8338e90:	89 44 24 04          	mov    %eax,0x4(%esp)
 8338e94:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8338e97:	89 04 24             	mov    %eax,(%esp)
 8338e9a:	e8 8b 74 00 00       	call   834032a <_ZN13user_creature17CPacketRespondentC1EP5CUserii>
 8338e9f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8338ea2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8338ea6:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8338ea9:	89 04 24             	mov    %eax,(%esp)
 8338eac:	e8 91 79 00 00       	call   8340842 <_ZN13user_creature17CPacketRespondent29MakeNotipacketEvoluteCreatureEi>
 8338eb1:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8338eb4:	89 04 24             	mov    %eax,(%esp)
 8338eb7:	e8 fc 75 00 00       	call   83404b8 <_ZN13user_creature17CPacketRespondent20SendAccordingToPlaceEv>
 8338ebc:	c7 44 24 0c 16 00 00 	movl   $0x16,0xc(%esp)
 8338ec3:	00 
 8338ec4:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 8338ecb:	00 
 8338ecc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8338ed3:	00 
 8338ed4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8338ed7:	89 04 24             	mov    %eax,(%esp)
 8338eda:	e8 7b 37 34 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 8338edf:	bb 01 00 00 00       	mov    $0x1,%ebx
 8338ee4:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8338ee7:	89 04 24             	mov    %eax,(%esp)
 8338eea:	e8 7b 74 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 8338eef:	eb 30                	jmp    8338f21 <_ZN13user_creature9CCreature11ItemEvoluteEP5CUseri+0x281>
 8338ef1:	89 d3                	mov    %edx,%ebx
 8338ef3:	89 c6                	mov    %eax,%esi
 8338ef5:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8338ef8:	89 04 24             	mov    %eax,(%esp)
 8338efb:	e8 6a 74 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 8338f00:	89 f0                	mov    %esi,%eax
 8338f02:	89 da                	mov    %ebx,%edx
 8338f04:	eb 00                	jmp    8338f06 <_ZN13user_creature9CCreature11ItemEvoluteEP5CUseri+0x266>
 8338f06:	89 d3                	mov    %edx,%ebx
 8338f08:	89 c6                	mov    %eax,%esi
 8338f0a:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8338f0d:	89 04 24             	mov    %eax,(%esp)
 8338f10:	e8 c3 69 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 8338f15:	89 f0                	mov    %esi,%eax
 8338f17:	89 da                	mov    %ebx,%edx
 8338f19:	89 04 24             	mov    %eax,(%esp)
 8338f1c:	e8 2f a8 7a 00       	call   8ae3750 <_Unwind_Resume>
 8338f21:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8338f24:	89 04 24             	mov    %eax,(%esp)
 8338f27:	e8 ac 69 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 8338f2c:	89 d8                	mov    %ebx,%eax
 8338f2e:	83 c4 70             	add    $0x70,%esp
 8338f31:	5b                   	pop    %ebx
 8338f32:	5e                   	pop    %esi
 8338f33:	5d                   	pop    %ebp
 8338f34:	c3                   	ret
 8338f35:	90                   	nop

```

```c
// user_creature::CCreature::ItemEvolute @ 0x8338ca0

/* user_creature::CCreature::ItemEvolute(CUser*, int) */

bool __thiscall user_creature::CCreature::ItemEvolute(CCreature *this,CUser *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  CInventory *this_00;
  int iVar5;
  bool bVar6;
  CPacketRespondent local_64 [32];
  CDBMsgSender local_44 [8];
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  int local_1c;
  CCreatureScript *local_18;
  int local_14;
  int local_10;
  
  if (*(int *)(this + 0x44) == 0) {
    uVar2 = CCreatureItem::GetItemId((CCreatureItem *)this);
    uVar3 = CUser::get_unique_id(param_1);
    cMyTrace::cMyTrace(local_3c,"bool user_creature::CCreature::ItemEvolute(CUser*, int)",0x89b,5);
    cMyTrace::operator()
              (local_3c,
               "cannot evolute because it haven\'t creature script uid(%d), creature id(%d) \n",
               uVar3 & 0xffff,uVar2);
    bVar6 = false;
  }
  else {
    local_1c = CCreatureScript::GetItemEvolutionCreatureId
                         (*(CCreatureScript **)(this + 0x44),param_2);
    if (local_1c == 0) {
      bVar6 = false;
    }
    else {
      iVar4 = GetInstanceCreatureScriptMgr();
      local_18 = (CCreatureScript *)CCreatureScriptMgr::FindCreatureScript(iVar4);
      if (local_18 == (CCreatureScript *)0x0) {
        bVar6 = false;
      }
      else {
        local_14 = CCreatureScript::GetItemId(local_18);
        SetItemId(this,local_14);
        local_10 = 0;
        this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        local_10 = CInventory::GetInvenRef(this_00,0,0x16);
        if (local_10 == 0) {
          bVar6 = false;
        }
        else {
          uVar2 = CCreatureItem::GetItemId((CCreatureItem *)this);
          *(undefined4 *)(local_10 + 2) = uVar2;
          CDBMsgSender::CDBMsgSender(local_44,0x8a,param_1);
          iVar4 = CCreatureItem::GetItemId((CCreatureItem *)this);
          iVar5 = CCreatureItem::GetUid((CCreatureItem *)this);
                    /* try { // try from 08338e14 to 08338e9e has its CatchHandler @ 08338f06 */
          cVar1 = CDBMsgSender::EvoluteCreature(local_44,iVar5,iVar4);
          bVar6 = cVar1 == '\x01';
          if (bVar6) {
            CDBMsgSender::Send(local_44);
            CPacketRespondent::CPacketRespondent(local_64,param_1,0,0);
                    /* try { // try from 08338eac to 08338ede has its CatchHandler @ 08338ef1 */
            CPacketRespondent::MakeNotipacketEvoluteCreature(local_64,local_1c);
            CPacketRespondent::SendAccordingToPlace(local_64);
            CUser::SendUpdateItemList(param_1,1,3,0x16);
                    /* try { // try from 08338eea to 08338eee has its CatchHandler @ 08338f06 */
            CPacketRespondent::~CPacketRespondent(local_64);
          }
          else {
            uVar3 = CUser::get_unique_id(param_1);
            cMyTrace::cMyTrace(local_2c,"bool user_creature::CCreature::ItemEvolute(CUser*, int)",
                               0x8bb,5);
            cMyTrace::operator()(local_2c,"cannot write db uid(%d)\n",uVar3 & 0xffff);
          }
          CDBMsgSender::~CDBMsgSender(local_44);
        }
      }
    }
  }
  return bVar6;
}

```

---

## LoadCreatureItem

```asm
// === 083385aa user_creature::CCreature::LoadCreatureItem  [0x083385aa-0x83387f5] ===
 83385aa:	55                   	push   %ebp
 83385ab:	89 e5                	mov    %esp,%ebp
 83385ad:	53                   	push   %ebx
 83385ae:	83 ec 34             	sub    $0x34,%esp
 83385b1:	8b 45 14             	mov    0x14(%ebp),%eax
 83385b4:	0f b6 40 27          	movzbl 0x27(%eax),%eax
 83385b8:	84 c0                	test   %al,%al
 83385ba:	74 15                	je     83385d1 <_ZN13user_creature9CCreature16LoadCreatureItemEPNS_12CCreatureMgrEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFOP5CUser+0x27>
 83385bc:	8b 45 10             	mov    0x10(%ebp),%eax
 83385bf:	89 04 24             	mov    %eax,(%esp)
 83385c2:	e8 11 32 d9 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 83385c7:	b8 00 00 00 00       	mov    $0x0,%eax
 83385cc:	e9 1f 02 00 00       	jmp    83387f0 <_ZN13user_creature9CCreature16LoadCreatureItemEPNS_12CCreatureMgrEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFOP5CUser+0x246>
 83385d1:	8b 45 14             	mov    0x14(%ebp),%eax
 83385d4:	8b 50 20             	mov    0x20(%eax),%edx
 83385d7:	8b 45 08             	mov    0x8(%ebp),%eax
 83385da:	89 50 30             	mov    %edx,0x30(%eax)
 83385dd:	8b 45 10             	mov    0x10(%ebp),%eax
 83385e0:	8b 40 02             	mov    0x2(%eax),%eax
 83385e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 83385e7:	8b 45 08             	mov    0x8(%ebp),%eax
 83385ea:	89 04 24             	mov    %eax,(%esp)
 83385ed:	e8 bc ef ff ff       	call   83375ae <_ZN13user_creature9CCreature9SetItemIdEi>
 83385f2:	8b 45 14             	mov    0x14(%ebp),%eax
 83385f5:	8b 50 04             	mov    0x4(%eax),%edx
 83385f8:	8b 45 08             	mov    0x8(%ebp),%eax
 83385fb:	89 50 0c             	mov    %edx,0xc(%eax)
 83385fe:	8b 45 14             	mov    0x14(%ebp),%eax
 8338601:	8b 10                	mov    (%eax),%edx
 8338603:	8b 45 08             	mov    0x8(%ebp),%eax
 8338606:	89 50 10             	mov    %edx,0x10(%eax)
 8338609:	8b 45 14             	mov    0x14(%ebp),%eax
 833860c:	0f b6 40 24          	movzbl 0x24(%eax),%eax
 8338610:	0f be d0             	movsbl %al,%edx
 8338613:	8b 45 08             	mov    0x8(%ebp),%eax
 8338616:	89 50 08             	mov    %edx,0x8(%eax)
 8338619:	8b 45 14             	mov    0x14(%ebp),%eax
 833861c:	8b 40 18             	mov    0x18(%eax),%eax
 833861f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8338622:	db 45 e4             	fildl  -0x1c(%ebp)
 8338625:	8b 45 08             	mov    0x8(%ebp),%eax
 8338628:	83 c0 34             	add    $0x34,%eax
 833862b:	d9 5c 24 04          	fstps  0x4(%esp)
 833862f:	89 04 24             	mov    %eax,(%esp)
 8338632:	e8 bf 68 00 00       	call   833eef6 <_ZN13user_creature8CStomach15SetStomachValueEf>
 8338637:	8b 45 14             	mov    0x14(%ebp),%eax
 833863a:	8d 50 08             	lea    0x8(%eax),%edx
 833863d:	8b 45 08             	mov    0x8(%ebp),%eax
 8338640:	83 c0 1c             	add    $0x1c,%eax
 8338643:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 833864a:	00 
 833864b:	89 54 24 04          	mov    %edx,0x4(%esp)
 833864f:	89 04 24             	mov    %eax,(%esp)
 8338652:	e8 79 52 d4 ff       	call   807d8d0 <strncpy@plt>
 8338657:	8b 45 08             	mov    0x8(%ebp),%eax
 833865a:	0f b6 40 4c          	movzbl 0x4c(%eax),%eax
 833865e:	83 f0 01             	xor    $0x1,%eax
 8338661:	84 c0                	test   %al,%al
 8338663:	74 2c                	je     8338691 <_ZN13user_creature9CCreature16LoadCreatureItemEPNS_12CCreatureMgrEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFOP5CUser+0xe7>
 8338665:	8b 45 08             	mov    0x8(%ebp),%eax
 8338668:	8b 40 30             	mov    0x30(%eax),%eax
 833866b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 833866e:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
 8338672:	98                   	cwtl
 8338673:	89 44 24 04          	mov    %eax,0x4(%esp)
 8338677:	8b 45 08             	mov    0x8(%ebp),%eax
 833867a:	89 04 24             	mov    %eax,(%esp)
 833867d:	e8 50 ee ff ff       	call   83374d2 <_ZN13user_creature9CCreature11GetExpLevelEi>
 8338682:	8b 55 08             	mov    0x8(%ebp),%edx
 8338685:	89 42 2c             	mov    %eax,0x2c(%edx)
 8338688:	8b 45 14             	mov    0x14(%ebp),%eax
 833868b:	c6 40 30 00          	movb   $0x0,0x30(%eax)
 833868f:	eb 22                	jmp    83386b3 <_ZN13user_creature9CCreature16LoadCreatureItemEPNS_12CCreatureMgrEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFOP5CUser+0x109>
 8338691:	8b 45 08             	mov    0x8(%ebp),%eax
 8338694:	8b 40 30             	mov    0x30(%eax),%eax
 8338697:	89 44 24 04          	mov    %eax,0x4(%esp)
 833869b:	8b 45 08             	mov    0x8(%ebp),%eax
 833869e:	89 04 24             	mov    %eax,(%esp)
 83386a1:	e8 2c ee ff ff       	call   83374d2 <_ZN13user_creature9CCreature11GetExpLevelEi>
 83386a6:	8b 55 08             	mov    0x8(%ebp),%edx
 83386a9:	89 42 2c             	mov    %eax,0x2c(%edx)
 83386ac:	8b 45 14             	mov    0x14(%ebp),%eax
 83386af:	c6 40 30 01          	movb   $0x1,0x30(%eax)
 83386b3:	8b 45 08             	mov    0x8(%ebp),%eax
 83386b6:	89 04 24             	mov    %eax,(%esp)
 83386b9:	e8 b0 ee ff ff       	call   833756e <_ZN13user_creature9CCreature10isMaxLevelEv>
 83386be:	8b 55 14             	mov    0x14(%ebp),%edx
 83386c1:	88 42 31             	mov    %al,0x31(%edx)
 83386c4:	8b 45 14             	mov    0x14(%ebp),%eax
 83386c7:	0f b6 40 26          	movzbl 0x26(%eax),%eax
 83386cb:	84 c0                	test   %al,%al
 83386cd:	0f 95 c2             	setne  %dl
 83386d0:	8b 45 08             	mov    0x8(%ebp),%eax
 83386d3:	88 50 14             	mov    %dl,0x14(%eax)
 83386d6:	8b 45 14             	mov    0x14(%ebp),%eax
 83386d9:	0f b6 50 27          	movzbl 0x27(%eax),%edx
 83386dd:	8b 45 08             	mov    0x8(%ebp),%eax
 83386e0:	88 50 15             	mov    %dl,0x15(%eax)
 83386e3:	8b 45 14             	mov    0x14(%ebp),%eax
 83386e6:	8b 50 28             	mov    0x28(%eax),%edx
 83386e9:	8b 45 08             	mov    0x8(%ebp),%eax
 83386ec:	89 50 18             	mov    %edx,0x18(%eax)
 83386ef:	8b 45 08             	mov    0x8(%ebp),%eax
 83386f2:	0f b6 40 4c          	movzbl 0x4c(%eax),%eax
 83386f6:	84 c0                	test   %al,%al
 83386f8:	74 0e                	je     8338708 <_ZN13user_creature9CCreature16LoadCreatureItemEPNS_12CCreatureMgrEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFOP5CUser+0x15e>
 83386fa:	8b 45 08             	mov    0x8(%ebp),%eax
 83386fd:	83 c0 34             	add    $0x34,%eax
 8338700:	89 04 24             	mov    %eax,(%esp)
 8338703:	e8 44 e7 ff ff       	call   8336e4c <_ZN13user_creature8CStomach6ResumeEv>
 8338708:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 833870f:	00 
 8338710:	8b 45 18             	mov    0x18(%ebp),%eax
 8338713:	89 44 24 04          	mov    %eax,0x4(%esp)
 8338717:	8b 45 08             	mov    0x8(%ebp),%eax
 833871a:	89 04 24             	mov    %eax,(%esp)
 833871d:	e8 38 ea ff ff       	call   833715a <_ZN13user_creature9CCreature8SetStateEP5CUserNS_14CREATURE_STATEE>
 8338722:	8b 45 08             	mov    0x8(%ebp),%eax
 8338725:	c6 40 40 01          	movb   $0x1,0x40(%eax)
 8338729:	8b 45 14             	mov    0x14(%ebp),%eax
 833872c:	8b 00                	mov    (%eax),%eax
 833872e:	3d ee 00 00 00       	cmp    $0xee,%eax
 8338733:	75 23                	jne    8338758 <_ZN13user_creature9CCreature16LoadCreatureItemEPNS_12CCreatureMgrEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFOP5CUser+0x1ae>
 8338735:	8b 45 08             	mov    0x8(%ebp),%eax
 8338738:	89 44 24 04          	mov    %eax,0x4(%esp)
 833873c:	8b 45 0c             	mov    0xc(%ebp),%eax
 833873f:	89 04 24             	mov    %eax,(%esp)
 8338742:	e8 af 0b 00 00       	call   83392f6 <_ZN13user_creature12CCreatureMgr5EquipEPNS_9CCreatureE>
 8338747:	83 f0 01             	xor    $0x1,%eax
 833874a:	84 c0                	test   %al,%al
 833874c:	74 0a                	je     8338758 <_ZN13user_creature9CCreature16LoadCreatureItemEPNS_12CCreatureMgrEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFOP5CUser+0x1ae>
 833874e:	b8 00 00 00 00       	mov    $0x0,%eax
 8338753:	e9 98 00 00 00       	jmp    83387f0 <_ZN13user_creature9CCreature16LoadCreatureItemEPNS_12CCreatureMgrEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFOP5CUser+0x246>
 8338758:	8b 45 14             	mov    0x14(%ebp),%eax
 833875b:	8b 50 04             	mov    0x4(%eax),%edx
 833875e:	8b 45 08             	mov    0x8(%ebp),%eax
 8338761:	89 54 24 08          	mov    %edx,0x8(%esp)
 8338765:	89 44 24 04          	mov    %eax,0x4(%esp)
 8338769:	8b 45 0c             	mov    0xc(%ebp),%eax
 833876c:	89 04 24             	mov    %eax,(%esp)
 833876f:	e8 0a 20 00 00       	call   833a77e <_ZN13user_creature12CCreatureMgr20RegisterCreatureItemEPNS_13CCreatureItemEi>
 8338774:	83 f0 01             	xor    $0x1,%eax
 8338777:	84 c0                	test   %al,%al
 8338779:	74 07                	je     8338782 <_ZN13user_creature9CCreature16LoadCreatureItemEPNS_12CCreatureMgrEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFOP5CUser+0x1d8>
 833877b:	b8 00 00 00 00       	mov    $0x0,%eax
 8338780:	eb 6e                	jmp    83387f0 <_ZN13user_creature9CCreature16LoadCreatureItemEPNS_12CCreatureMgrEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFOP5CUser+0x246>
 8338782:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8338789:	8b 45 08             	mov    0x8(%ebp),%eax
 833878c:	89 04 24             	mov    %eax,(%esp)
 833878f:	e8 36 68 00 00       	call   833efca <_ZN13user_creature13CCreatureItem9GetSlotNoEv>
 8338794:	89 c3                	mov    %eax,%ebx
 8338796:	8b 45 18             	mov    0x18(%ebp),%eax
 8338799:	89 04 24             	mov    %eax,(%esp)
 833879c:	e8 ed 1a da ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 83387a1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 83387a5:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 83387ac:	00 
 83387ad:	89 04 24             	mov    %eax,(%esp)
 83387b0:	e8 f9 3a 1c 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 83387b5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83387b8:	8b 45 08             	mov    0x8(%ebp),%eax
 83387bb:	8b 40 0c             	mov    0xc(%eax),%eax
 83387be:	89 44 24 04          	mov    %eax,0x4(%esp)
 83387c2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83387c5:	89 04 24             	mov    %eax,(%esp)
 83387c8:	e8 b7 30 d9 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 83387cd:	8b 45 08             	mov    0x8(%ebp),%eax
 83387d0:	8b 40 3c             	mov    0x3c(%eax),%eax
 83387d3:	8b 55 08             	mov    0x8(%ebp),%edx
 83387d6:	83 c2 34             	add    $0x34,%edx
 83387d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 83387dd:	89 14 24             	mov    %edx,(%esp)
 83387e0:	e8 09 e6 ff ff       	call   8336dee <_ZN13user_creature8CStomach13IsSaveStomachENS_14CREATURE_STATEE>
 83387e5:	8b 55 08             	mov    0x8(%ebp),%edx
 83387e8:	88 42 40             	mov    %al,0x40(%edx)
 83387eb:	b8 01 00 00 00       	mov    $0x1,%eax
 83387f0:	83 c4 34             	add    $0x34,%esp
 83387f3:	5b                   	pop    %ebx
 83387f4:	5d                   	pop    %ebp
 83387f5:	c3                   	ret

```

```c
// user_creature::CCreature::LoadCreatureItem @ 0x83385aa

/* user_creature::CCreature::LoadCreatureItem(user_creature::CCreatureMgr*, Inven_Item*,
   SIG_CREATURE_ITEM_DETAIL_INFO*, CUser*) */

undefined4 __thiscall
user_creature::CCreature::LoadCreatureItem
          (CCreature *this,CCreatureMgr *param_1,Inven_Item *param_2,
          SIG_CREATURE_ITEM_DETAIL_INFO *param_3,CUser *param_4)

{
  SIG_CREATURE_ITEM_DETAIL_INFO SVar1;
  char cVar2;
  CCreature CVar3;
  undefined4 uVar4;
  int iVar5;
  CInventory *this_00;
  Inven_Item *this_01;
  short sStack_12;
  
  if (param_3[0x27] == (SIG_CREATURE_ITEM_DETAIL_INFO)0x0) {
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_3 + 0x20);
    SetItemId(this,*(int *)(param_2 + 2));
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)param_3;
    *(int *)(this + 8) = (int)(char)param_3[0x24];
    CStomach::SetStomachValue((CStomach *)(this + 0x34),(float)*(int *)(param_3 + 0x18));
    strncpy((char *)(this + 0x1c),(char *)(param_3 + 8),0xc);
    if (this[0x4c] == (CCreature)0x1) {
      uVar4 = GetExpLevel(this,*(int *)(this + 0x30));
      *(undefined4 *)(this + 0x2c) = uVar4;
      param_3[0x30] = (SIG_CREATURE_ITEM_DETAIL_INFO)0x1;
    }
    else {
      sStack_12 = (short)((uint)*(undefined4 *)(this + 0x30) >> 0x10);
      uVar4 = GetExpLevel(this,(int)sStack_12);
      *(undefined4 *)(this + 0x2c) = uVar4;
      param_3[0x30] = (SIG_CREATURE_ITEM_DETAIL_INFO)0x0;
    }
    SVar1 = (SIG_CREATURE_ITEM_DETAIL_INFO)isMaxLevel(this);
    param_3[0x31] = SVar1;
    this[0x14] = (CCreature)(param_3[0x26] != (SIG_CREATURE_ITEM_DETAIL_INFO)0x0);
    this[0x15] = *(CCreature *)(param_3 + 0x27);
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_3 + 0x28);
    if (this[0x4c] != (CCreature)0x0) {
      CStomach::Resume((CStomach *)(this + 0x34));
    }
    SetState(this,param_4,2);
    this[0x40] = (CCreature)0x1;
    if ((*(int *)param_3 == 0xee) && (cVar2 = CCreatureMgr::Equip(param_1,this), cVar2 != '\x01')) {
      return 0;
    }
    cVar2 = CCreatureMgr::RegisterCreatureItem(param_1,(CCreatureItem *)this,*(int *)(param_3 + 4));
    if (cVar2 == '\x01') {
      iVar5 = CCreatureItem::GetSlotNo((CCreatureItem *)this);
      this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_4);
      this_01 = (Inven_Item *)CInventory::GetInvenRef(this_00,3,iVar5);
      Inven_Item::set_add_info(this_01,*(int *)(this + 0xc));
      CVar3 = (CCreature)
              CStomach::IsSaveStomach((CStomach *)(this + 0x34),*(undefined4 *)(this + 0x3c));
      this[0x40] = CVar3;
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    Inven_Item::reset(param_2);
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## RenameCreature

```asm
// === 083373aa user_creature::CCreature::RenameCreature  [0x083373aa-0x83373d3] ===
 83373aa:	55                   	push   %ebp
 83373ab:	89 e5                	mov    %esp,%ebp
 83373ad:	83 ec 18             	sub    $0x18,%esp
 83373b0:	8b 45 08             	mov    0x8(%ebp),%eax
 83373b3:	8d 50 1c             	lea    0x1c(%eax),%edx
 83373b6:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 83373bd:	00 
 83373be:	8b 45 0c             	mov    0xc(%ebp),%eax
 83373c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 83373c5:	89 14 24             	mov    %edx,(%esp)
 83373c8:	e8 03 65 d4 ff       	call   807d8d0 <strncpy@plt>
 83373cd:	b8 01 00 00 00       	mov    $0x1,%eax
 83373d2:	c9                   	leave
 83373d3:	c3                   	ret

```

```c
// user_creature::CCreature::RenameCreature @ 0x83373aa

/* user_creature::CCreature::RenameCreature(char const*) */

undefined4 __thiscall user_creature::CCreature::RenameCreature(CCreature *this,char *param_1)

{
  strncpy((char *)(this + 0x1c),param_1,0xc);
  return 1;
}

```

---

## Reset

```asm
// === 083370b0 user_creature::CCreature::Reset  [0x083370b0-0x8337159] ===
 83370b0:	55                   	push   %ebp
 83370b1:	89 e5                	mov    %esp,%ebp
 83370b3:	83 ec 18             	sub    $0x18,%esp
 83370b6:	8b 45 08             	mov    0x8(%ebp),%eax
 83370b9:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
 83370c0:	8b 45 08             	mov    0x8(%ebp),%eax
 83370c3:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 83370ca:	8b 45 08             	mov    0x8(%ebp),%eax
 83370cd:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 83370d4:	8b 45 08             	mov    0x8(%ebp),%eax
 83370d7:	c7 40 3c 02 00 00 00 	movl   $0x2,0x3c(%eax)
 83370de:	8b 45 08             	mov    0x8(%ebp),%eax
 83370e1:	c6 40 40 00          	movb   $0x0,0x40(%eax)
 83370e5:	8b 45 08             	mov    0x8(%ebp),%eax
 83370e8:	c7 40 44 00 00 00 00 	movl   $0x0,0x44(%eax)
 83370ef:	8b 45 08             	mov    0x8(%ebp),%eax
 83370f2:	c7 40 48 00 00 00 00 	movl   $0x0,0x48(%eax)
 83370f9:	8b 45 08             	mov    0x8(%ebp),%eax
 83370fc:	c7 40 2c 01 00 00 00 	movl   $0x1,0x2c(%eax)
 8337103:	8b 45 08             	mov    0x8(%ebp),%eax
 8337106:	c7 40 30 00 00 00 00 	movl   $0x0,0x30(%eax)
 833710d:	8b 45 08             	mov    0x8(%ebp),%eax
 8337110:	c6 40 14 00          	movb   $0x0,0x14(%eax)
 8337114:	8b 45 08             	mov    0x8(%ebp),%eax
 8337117:	c6 40 4c 01          	movb   $0x1,0x4c(%eax)
 833711b:	8b 45 08             	mov    0x8(%ebp),%eax
 833711e:	c6 40 4d 05          	movb   $0x5,0x4d(%eax)
 8337122:	8b 45 08             	mov    0x8(%ebp),%eax
 8337125:	83 c0 1c             	add    $0x1c,%eax
 8337128:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 833712f:	00 
 8337130:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8337137:	00 
 8337138:	89 04 24             	mov    %eax,(%esp)
 833713b:	e8 80 6b d4 ff       	call   807dcc0 <memset@plt>
 8337140:	8b 45 08             	mov    0x8(%ebp),%eax
 8337143:	8d 50 34             	lea    0x34(%eax),%edx
 8337146:	b8 00 00 00 00       	mov    $0x0,%eax
 833714b:	89 44 24 04          	mov    %eax,0x4(%esp)
 833714f:	89 14 24             	mov    %edx,(%esp)
 8337152:	e8 9f 7d 00 00       	call   833eef6 <_ZN13user_creature8CStomach15SetStomachValueEf>
 8337157:	c9                   	leave
 8337158:	c3                   	ret
 8337159:	90                   	nop

```

```c
// user_creature::CCreature::Reset @ 0x83370b0

/* user_creature::CCreature::Reset() */

void __thiscall user_creature::CCreature::Reset(CCreature *this)

{
  *(undefined4 *)(this + 8) = 1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x3c) = 2;
  this[0x40] = (CCreature)0x0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x2c) = 1;
  *(undefined4 *)(this + 0x30) = 0;
  this[0x14] = (CCreature)0x0;
  this[0x4c] = (CCreature)0x1;
  this[0x4d] = (CCreature)0x5;
  memset(this + 0x1c,0,0xd);
  CStomach::SetStomachValue((CStomach *)(this + 0x34),0.0);
  return;
}

```

---

## SaveCreatureItem

```asm
// === 083387f6 user_creature::CCreature::SaveCreatureItem  [0x083387f6-0x83388eb] ===
 83387f6:	55                   	push   %ebp
 83387f7:	89 e5                	mov    %esp,%ebp
 83387f9:	83 ec 28             	sub    $0x28,%esp
 83387fc:	8b 45 08             	mov    0x8(%ebp),%eax
 83387ff:	0f b6 40 4c          	movzbl 0x4c(%eax),%eax
 8338803:	0f b6 d0             	movzbl %al,%edx
 8338806:	8b 45 08             	mov    0x8(%ebp),%eax
 8338809:	8b 40 3c             	mov    0x3c(%eax),%eax
 833880c:	8b 4d 08             	mov    0x8(%ebp),%ecx
 833880f:	83 c1 34             	add    $0x34,%ecx
 8338812:	89 54 24 08          	mov    %edx,0x8(%esp)
 8338816:	89 44 24 04          	mov    %eax,0x4(%esp)
 833881a:	89 0c 24             	mov    %ecx,(%esp)
 833881d:	e8 da e4 ff ff       	call   8336cfc <_ZN13user_creature8CStomach15GetStomachValueENS_14CREATURE_STATEEb>
 8338822:	d9 7d f6             	fnstcw -0xa(%ebp)
 8338825:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
 8338829:	b4 0c                	mov    $0xc,%ah
 833882b:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 833882f:	d9 6d f4             	fldcw  -0xc(%ebp)
 8338832:	db 5d f0             	fistpl -0x10(%ebp)
 8338835:	d9 6d f6             	fldcw  -0xa(%ebp)
 8338838:	8b 55 f0             	mov    -0x10(%ebp),%edx
 833883b:	8b 45 10             	mov    0x10(%ebp),%eax
 833883e:	89 50 18             	mov    %edx,0x18(%eax)
 8338841:	8b 45 08             	mov    0x8(%ebp),%eax
 8338844:	8b 50 30             	mov    0x30(%eax),%edx
 8338847:	8b 45 10             	mov    0x10(%ebp),%eax
 833884a:	89 50 20             	mov    %edx,0x20(%eax)
 833884d:	8b 45 08             	mov    0x8(%ebp),%eax
 8338850:	8b 50 0c             	mov    0xc(%eax),%edx
 8338853:	8b 45 10             	mov    0x10(%ebp),%eax
 8338856:	89 50 04             	mov    %edx,0x4(%eax)
 8338859:	8b 45 08             	mov    0x8(%ebp),%eax
 833885c:	8b 40 3c             	mov    0x3c(%eax),%eax
 833885f:	8b 55 08             	mov    0x8(%ebp),%edx
 8338862:	83 c2 34             	add    $0x34,%edx
 8338865:	89 44 24 04          	mov    %eax,0x4(%esp)
 8338869:	89 14 24             	mov    %edx,(%esp)
 833886c:	e8 7d e5 ff ff       	call   8336dee <_ZN13user_creature8CStomach13IsSaveStomachENS_14CREATURE_STATEE>
 8338871:	8b 55 08             	mov    0x8(%ebp),%edx
 8338874:	88 42 40             	mov    %al,0x40(%edx)
 8338877:	8b 45 08             	mov    0x8(%ebp),%eax
 833887a:	89 04 24             	mov    %eax,(%esp)
 833887d:	e8 22 67 00 00       	call   833efa4 <_ZN13user_creature13CCreatureItem9GetItemIdEv>
 8338882:	89 c2                	mov    %eax,%edx
 8338884:	8b 45 0c             	mov    0xc(%ebp),%eax
 8338887:	89 50 02             	mov    %edx,0x2(%eax)
 833888a:	8b 45 08             	mov    0x8(%ebp),%eax
 833888d:	89 04 24             	mov    %eax,(%esp)
 8338890:	e8 35 67 00 00       	call   833efca <_ZN13user_creature13CCreatureItem9GetSlotNoEv>
 8338895:	8b 55 10             	mov    0x10(%ebp),%edx
 8338898:	89 02                	mov    %eax,(%edx)
 833889a:	8b 45 08             	mov    0x8(%ebp),%eax
 833889d:	8b 40 08             	mov    0x8(%eax),%eax
 83388a0:	89 c2                	mov    %eax,%edx
 83388a2:	8b 45 10             	mov    0x10(%ebp),%eax
 83388a5:	88 50 24             	mov    %dl,0x24(%eax)
 83388a8:	8b 45 08             	mov    0x8(%ebp),%eax
 83388ab:	8d 50 1c             	lea    0x1c(%eax),%edx
 83388ae:	8b 45 10             	mov    0x10(%ebp),%eax
 83388b1:	83 c0 08             	add    $0x8,%eax
 83388b4:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 83388bb:	00 
 83388bc:	89 54 24 04          	mov    %edx,0x4(%esp)
 83388c0:	89 04 24             	mov    %eax,(%esp)
 83388c3:	e8 08 50 d4 ff       	call   807d8d0 <strncpy@plt>
 83388c8:	8b 45 08             	mov    0x8(%ebp),%eax
 83388cb:	0f b6 40 14          	movzbl 0x14(%eax),%eax
 83388cf:	89 c2                	mov    %eax,%edx
 83388d1:	8b 45 10             	mov    0x10(%ebp),%eax
 83388d4:	88 50 26             	mov    %dl,0x26(%eax)
 83388d7:	8b 45 08             	mov    0x8(%ebp),%eax
 83388da:	0f b6 50 15          	movzbl 0x15(%eax),%edx
 83388de:	8b 45 10             	mov    0x10(%ebp),%eax
 83388e1:	88 50 27             	mov    %dl,0x27(%eax)
 83388e4:	b8 01 00 00 00       	mov    $0x1,%eax
 83388e9:	c9                   	leave
 83388ea:	c3                   	ret
 83388eb:	90                   	nop

```

```c
// user_creature::CCreature::SaveCreatureItem @ 0x83387f6

/* user_creature::CCreature::SaveCreatureItem(Inven_Item*, SIG_CREATURE_ITEM_DETAIL_INFO*, CUser*)
    */

undefined4
user_creature::CCreature::SaveCreatureItem
          (Inven_Item *param_1,SIG_CREATURE_ITEM_DETAIL_INFO *param_2,CUser *param_3)

{
  Inven_Item IVar1;
  undefined4 uVar2;
  longdouble lVar3;
  
  lVar3 = (longdouble)
          CStomach::GetStomachValue
                    ((CStomach *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x3c),param_1[0x4c]);
  *(int *)(param_3 + 0x18) = (int)ROUND(lVar3);
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 0xc);
  IVar1 = (Inven_Item)
          CStomach::IsSaveStomach((CStomach *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x3c));
  param_1[0x40] = IVar1;
  uVar2 = CCreatureItem::GetItemId((CCreatureItem *)param_1);
  *(undefined4 *)(param_2 + 2) = uVar2;
  uVar2 = CCreatureItem::GetSlotNo((CCreatureItem *)param_1);
  *(undefined4 *)param_3 = uVar2;
  param_3[0x24] = SUB41(*(undefined4 *)(param_1 + 8),0);
  strncpy((char *)(param_3 + 8),(char *)(param_1 + 0x1c),0xc);
  *(Inven_Item *)(param_3 + 0x26) = param_1[0x14];
  *(Inven_Item *)(param_3 + 0x27) = param_1[0x15];
  return 1;
}

```

---

## SelectEvolute

```asm
// === 08337e48 user_creature::CCreature::SelectEvolute  [0x08337e48-0x83380fb] ===
 8337e48:	55                   	push   %ebp
 8337e49:	89 e5                	mov    %esp,%ebp
 8337e4b:	56                   	push   %esi
 8337e4c:	53                   	push   %ebx
 8337e4d:	83 ec 70             	sub    $0x70,%esp
 8337e50:	8b 45 08             	mov    0x8(%ebp),%eax
 8337e53:	8b 40 44             	mov    0x44(%eax),%eax
 8337e56:	85 c0                	test   %eax,%eax
 8337e58:	75 63                	jne    8337ebd <_ZN13user_creature9CCreature13SelectEvoluteEP5CUser+0x75>
 8337e5a:	8b 45 08             	mov    0x8(%ebp),%eax
 8337e5d:	89 04 24             	mov    %eax,(%esp)
 8337e60:	e8 3f 71 00 00       	call   833efa4 <_ZN13user_creature13CCreatureItem9GetItemIdEv>
 8337e65:	89 c3                	mov    %eax,%ebx
 8337e67:	8b 45 0c             	mov    0xc(%ebp),%eax
 8337e6a:	89 04 24             	mov    %eax,(%esp)
 8337e6d:	e8 0a 25 da ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8337e72:	0f b7 f0             	movzwl %ax,%esi
 8337e75:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8337e7c:	00 
 8337e7d:	c7 44 24 08 a2 06 00 	movl   $0x6a2,0x8(%esp)
 8337e84:	00 
 8337e85:	c7 44 24 04 e0 f3 c2 	movl   $0x8c2f3e0,0x4(%esp)
 8337e8c:	08 
 8337e8d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8337e90:	89 04 24             	mov    %eax,(%esp)
 8337e93:	e8 80 78 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8337e98:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8337e9c:	89 74 24 08          	mov    %esi,0x8(%esp)
 8337ea0:	c7 44 24 04 d4 d7 c2 	movl   $0x8c2d7d4,0x4(%esp)
 8337ea7:	08 
 8337ea8:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8337eab:	89 04 24             	mov    %eax,(%esp)
 8337eae:	e8 d5 78 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8337eb3:	bb 00 00 00 00       	mov    $0x0,%ebx
 8337eb8:	e9 35 02 00 00       	jmp    83380f2 <_ZN13user_creature9CCreature13SelectEvoluteEP5CUser+0x2aa>
 8337ebd:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8337ec4:	8b 45 08             	mov    0x8(%ebp),%eax
 8337ec7:	0f b6 40 4d          	movzbl 0x4d(%eax),%eax
 8337ecb:	3c 04                	cmp    $0x4,%al
 8337ecd:	76 13                	jbe    8337ee2 <_ZN13user_creature9CCreature13SelectEvoluteEP5CUser+0x9a>
 8337ecf:	8b 45 08             	mov    0x8(%ebp),%eax
 8337ed2:	8b 40 44             	mov    0x44(%eax),%eax
 8337ed5:	89 04 24             	mov    %eax,(%esp)
 8337ed8:	e8 85 74 00 00       	call   833f362 <_ZN13user_creature15CCreatureScript17GET_ATypeCreatureEv>
 8337edd:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8337ee0:	eb 11                	jmp    8337ef3 <_ZN13user_creature9CCreature13SelectEvoluteEP5CUser+0xab>
 8337ee2:	8b 45 08             	mov    0x8(%ebp),%eax
 8337ee5:	8b 40 44             	mov    0x44(%eax),%eax
 8337ee8:	89 04 24             	mov    %eax,(%esp)
 8337eeb:	e8 7e 74 00 00       	call   833f36e <_ZN13user_creature15CCreatureScript17GET_BTypeCreatureEv>
 8337ef0:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8337ef3:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
 8337ef7:	75 0a                	jne    8337f03 <_ZN13user_creature9CCreature13SelectEvoluteEP5CUser+0xbb>
 8337ef9:	bb 00 00 00 00       	mov    $0x0,%ebx
 8337efe:	e9 ef 01 00 00       	jmp    83380f2 <_ZN13user_creature9CCreature13SelectEvoluteEP5CUser+0x2aa>
 8337f03:	e8 c8 ec ff ff       	call   8336bd0 <_ZN13user_creature28GetInstanceCreatureScriptMgrEv>
 8337f08:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8337f0b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8337f0f:	89 04 24             	mov    %eax,(%esp)
 8337f12:	e8 83 55 00 00       	call   833d49a <_ZN13user_creature18CCreatureScriptMgr18FindCreatureScriptEi>
 8337f17:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8337f1a:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8337f1e:	75 0a                	jne    8337f2a <_ZN13user_creature9CCreature13SelectEvoluteEP5CUser+0xe2>
 8337f20:	bb 00 00 00 00       	mov    $0x0,%ebx
 8337f25:	e9 c8 01 00 00       	jmp    83380f2 <_ZN13user_creature9CCreature13SelectEvoluteEP5CUser+0x2aa>
 8337f2a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8337f2d:	89 04 24             	mov    %eax,(%esp)
 8337f30:	e8 f3 71 00 00       	call   833f128 <_ZN13user_creature15CCreatureScript9GetItemIdEv>
 8337f35:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8337f38:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8337f3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8337f3f:	8b 45 08             	mov    0x8(%ebp),%eax
 8337f42:	89 04 24             	mov    %eax,(%esp)
 8337f45:	e8 64 f6 ff ff       	call   83375ae <_ZN13user_creature9CCreature9SetItemIdEi>
 8337f4a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8337f51:	8b 45 0c             	mov    0xc(%ebp),%eax
 8337f54:	89 04 24             	mov    %eax,(%esp)
 8337f57:	e8 32 23 da ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8337f5c:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 8337f63:	00 
 8337f64:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8337f6b:	00 
 8337f6c:	89 04 24             	mov    %eax,(%esp)
 8337f6f:	e8 3a 43 1c 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 8337f74:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8337f77:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8337f7b:	75 0a                	jne    8337f87 <_ZN13user_creature9CCreature13SelectEvoluteEP5CUser+0x13f>
 8337f7d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8337f82:	e9 6b 01 00 00       	jmp    83380f2 <_ZN13user_creature9CCreature13SelectEvoluteEP5CUser+0x2aa>
 8337f87:	8b 45 08             	mov    0x8(%ebp),%eax
 8337f8a:	89 04 24             	mov    %eax,(%esp)
 8337f8d:	e8 12 70 00 00       	call   833efa4 <_ZN13user_creature13CCreatureItem9GetItemIdEv>
 8337f92:	89 c2                	mov    %eax,%edx
 8337f94:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8337f97:	89 50 02             	mov    %edx,0x2(%eax)
 8337f9a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8337f9d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8337fa1:	c7 44 24 04 8a 00 00 	movl   $0x8a,0x4(%esp)
 8337fa8:	00 
 8337fa9:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8337fac:	89 04 24             	mov    %eax,(%esp)
 8337faf:	e8 fa 78 00 00       	call   833f8ae <_ZN13user_creature12CDBMsgSenderC1E19ENUM_INTERNALPACKETP5CUser>
 8337fb4:	8b 45 08             	mov    0x8(%ebp),%eax
 8337fb7:	89 04 24             	mov    %eax,(%esp)
 8337fba:	e8 e5 6f 00 00       	call   833efa4 <_ZN13user_creature13CCreatureItem9GetItemIdEv>
 8337fbf:	89 c3                	mov    %eax,%ebx
 8337fc1:	8b 45 08             	mov    0x8(%ebp),%eax
 8337fc4:	89 04 24             	mov    %eax,(%esp)
 8337fc7:	e8 f2 6f 00 00       	call   833efbe <_ZN13user_creature13CCreatureItem6GetUidEv>
 8337fcc:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8337fd0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8337fd4:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8337fd7:	89 04 24             	mov    %eax,(%esp)
 8337fda:	e8 95 7d 00 00       	call   833fd74 <_ZN13user_creature12CDBMsgSender15EvoluteCreatureEii>
 8337fdf:	83 f0 01             	xor    $0x1,%eax
 8337fe2:	84 c0                	test   %al,%al
 8337fe4:	74 52                	je     8338038 <_ZN13user_creature9CCreature13SelectEvoluteEP5CUser+0x1f0>
 8337fe6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8337fe9:	89 04 24             	mov    %eax,(%esp)
 8337fec:	e8 8b 23 da ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8337ff1:	0f b7 d8             	movzwl %ax,%ebx
 8337ff4:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8337ffb:	00 
 8337ffc:	c7 44 24 08 c9 06 00 	movl   $0x6c9,0x8(%esp)
 8338003:	00 
 8338004:	c7 44 24 04 e0 f3 c2 	movl   $0x8c2f3e0,0x4(%esp)
 833800b:	08 
 833800c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833800f:	89 04 24             	mov    %eax,(%esp)
 8338012:	e8 01 77 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8338017:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 833801b:	c7 44 24 04 27 d8 c2 	movl   $0x8c2d827,0x4(%esp)
 8338022:	08 
 8338023:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8338026:	89 04 24             	mov    %eax,(%esp)
 8338029:	e8 5a 77 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 833802e:	bb 00 00 00 00       	mov    $0x0,%ebx
 8338033:	e9 af 00 00 00       	jmp    83380e7 <_ZN13user_creature9CCreature13SelectEvoluteEP5CUser+0x29f>
 8338038:	8d 45 c0             	lea    -0x40(%ebp),%eax
 833803b:	89 04 24             	mov    %eax,(%esp)
 833803e:	e8 0d 79 00 00       	call   833f950 <_ZN13user_creature12CDBMsgSender4SendEv>
 8338043:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 833804a:	00 
 833804b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8338052:	00 
 8338053:	8b 45 0c             	mov    0xc(%ebp),%eax
 8338056:	89 44 24 04          	mov    %eax,0x4(%esp)
 833805a:	8d 45 a0             	lea    -0x60(%ebp),%eax
 833805d:	89 04 24             	mov    %eax,(%esp)
 8338060:	e8 c5 82 00 00       	call   834032a <_ZN13user_creature17CPacketRespondentC1EP5CUserii>
 8338065:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8338068:	89 44 24 04          	mov    %eax,0x4(%esp)
 833806c:	8d 45 a0             	lea    -0x60(%ebp),%eax
 833806f:	89 04 24             	mov    %eax,(%esp)
 8338072:	e8 cb 87 00 00       	call   8340842 <_ZN13user_creature17CPacketRespondent29MakeNotipacketEvoluteCreatureEi>
 8338077:	8d 45 a0             	lea    -0x60(%ebp),%eax
 833807a:	89 04 24             	mov    %eax,(%esp)
 833807d:	e8 36 84 00 00       	call   83404b8 <_ZN13user_creature17CPacketRespondent20SendAccordingToPlaceEv>
 8338082:	c7 44 24 0c 16 00 00 	movl   $0x16,0xc(%esp)
 8338089:	00 
 833808a:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 8338091:	00 
 8338092:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8338099:	00 
 833809a:	8b 45 0c             	mov    0xc(%ebp),%eax
 833809d:	89 04 24             	mov    %eax,(%esp)
 83380a0:	e8 b5 45 34 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 83380a5:	bb 01 00 00 00       	mov    $0x1,%ebx
 83380aa:	8d 45 a0             	lea    -0x60(%ebp),%eax
 83380ad:	89 04 24             	mov    %eax,(%esp)
 83380b0:	e8 b5 82 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 83380b5:	eb 30                	jmp    83380e7 <_ZN13user_creature9CCreature13SelectEvoluteEP5CUser+0x29f>
 83380b7:	89 d3                	mov    %edx,%ebx
 83380b9:	89 c6                	mov    %eax,%esi
 83380bb:	8d 45 a0             	lea    -0x60(%ebp),%eax
 83380be:	89 04 24             	mov    %eax,(%esp)
 83380c1:	e8 a4 82 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 83380c6:	89 f0                	mov    %esi,%eax
 83380c8:	89 da                	mov    %ebx,%edx
 83380ca:	eb 00                	jmp    83380cc <_ZN13user_creature9CCreature13SelectEvoluteEP5CUser+0x284>
 83380cc:	89 d3                	mov    %edx,%ebx
 83380ce:	89 c6                	mov    %eax,%esi
 83380d0:	8d 45 c0             	lea    -0x40(%ebp),%eax
 83380d3:	89 04 24             	mov    %eax,(%esp)
 83380d6:	e8 fd 77 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 83380db:	89 f0                	mov    %esi,%eax
 83380dd:	89 da                	mov    %ebx,%edx
 83380df:	89 04 24             	mov    %eax,(%esp)
 83380e2:	e8 69 b6 7a 00       	call   8ae3750 <_Unwind_Resume>
 83380e7:	8d 45 c0             	lea    -0x40(%ebp),%eax
 83380ea:	89 04 24             	mov    %eax,(%esp)
 83380ed:	e8 e6 77 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 83380f2:	89 d8                	mov    %ebx,%eax
 83380f4:	83 c4 70             	add    $0x70,%esp
 83380f7:	5b                   	pop    %ebx
 83380f8:	5e                   	pop    %esi
 83380f9:	5d                   	pop    %ebp
 83380fa:	c3                   	ret
 83380fb:	90                   	nop

```

```c
// user_creature::CCreature::SelectEvolute @ 0x8337e48

/* user_creature::CCreature::SelectEvolute(CUser*) */

bool __thiscall user_creature::CCreature::SelectEvolute(CCreature *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  CInventory *this_00;
  int iVar5;
  bool bVar6;
  CPacketRespondent local_64 [32];
  CDBMsgSender local_44 [8];
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  int local_1c;
  CCreatureScript *local_18;
  int local_14;
  int local_10;
  
  if (*(int *)(this + 0x44) == 0) {
    uVar2 = CCreatureItem::GetItemId((CCreatureItem *)this);
    uVar3 = CUser::get_unique_id(param_1);
    cMyTrace::cMyTrace(local_3c,"bool user_creature::CCreature::SelectEvolute(CUser*)",0x6a2,5);
    cMyTrace::operator()
              (local_3c,
               "cannot selectevolute because it haven\'t creature script uid(%d), creature id(%d) \n"
               ,uVar3 & 0xffff,uVar2);
    bVar6 = false;
  }
  else {
    local_1c = 0;
    if ((byte)this[0x4d] < 5) {
      local_1c = CCreatureScript::GET_BTypeCreature(*(CCreatureScript **)(this + 0x44));
    }
    else {
      local_1c = CCreatureScript::GET_ATypeCreature(*(CCreatureScript **)(this + 0x44));
    }
    if (local_1c == -1) {
      bVar6 = false;
    }
    else {
      iVar4 = GetInstanceCreatureScriptMgr();
      local_18 = (CCreatureScript *)CCreatureScriptMgr::FindCreatureScript(iVar4);
      if (local_18 == (CCreatureScript *)0x0) {
        bVar6 = false;
      }
      else {
        local_14 = CCreatureScript::GetItemId(local_18);
        SetItemId(this,local_14);
        local_10 = 0;
        this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        local_10 = CInventory::GetInvenRef(this_00,0,0x16);
        if (local_10 == 0) {
          bVar6 = false;
        }
        else {
          uVar2 = CCreatureItem::GetItemId((CCreatureItem *)this);
          *(undefined4 *)(local_10 + 2) = uVar2;
          CDBMsgSender::CDBMsgSender(local_44,0x8a,param_1);
          iVar4 = CCreatureItem::GetItemId((CCreatureItem *)this);
          iVar5 = CCreatureItem::GetUid((CCreatureItem *)this);
                    /* try { // try from 08337fda to 08338064 has its CatchHandler @ 083380cc */
          cVar1 = CDBMsgSender::EvoluteCreature(local_44,iVar5,iVar4);
          bVar6 = cVar1 == '\x01';
          if (bVar6) {
            CDBMsgSender::Send(local_44);
            CPacketRespondent::CPacketRespondent(local_64,param_1,0,0);
                    /* try { // try from 08338072 to 083380a4 has its CatchHandler @ 083380b7 */
            CPacketRespondent::MakeNotipacketEvoluteCreature(local_64,local_1c);
            CPacketRespondent::SendAccordingToPlace(local_64);
            CUser::SendUpdateItemList(param_1,1,3,0x16);
                    /* try { // try from 083380b0 to 083380b4 has its CatchHandler @ 083380cc */
            CPacketRespondent::~CPacketRespondent(local_64);
          }
          else {
            uVar3 = CUser::get_unique_id(param_1);
            cMyTrace::cMyTrace(local_2c,"bool user_creature::CCreature::SelectEvolute(CUser*)",0x6c9
                               ,5);
            cMyTrace::operator()(local_2c,"cannot write db uid(%d)\n",uVar3 & 0xffff);
          }
          CDBMsgSender::~CDBMsgSender(local_44);
        }
      }
    }
  }
  return bVar6;
}

```

---

## SetItemId

```asm
// === 083375ae user_creature::CCreature::SetItemId  [0x083375ae-0x833769b] ===
 83375ae:	55                   	push   %ebp
 83375af:	89 e5                	mov    %esp,%ebp
 83375b1:	83 ec 38             	sub    $0x38,%esp
 83375b4:	8b 45 08             	mov    0x8(%ebp),%eax
 83375b7:	8b 55 0c             	mov    0xc(%ebp),%edx
 83375ba:	89 54 24 04          	mov    %edx,0x4(%esp)
 83375be:	89 04 24             	mov    %eax,(%esp)
 83375c1:	e8 ea 79 00 00       	call   833efb0 <_ZN13user_creature13CCreatureItem9SetItemIdEi>
 83375c6:	8b 45 08             	mov    0x8(%ebp),%eax
 83375c9:	89 04 24             	mov    %eax,(%esp)
 83375cc:	e8 d3 79 00 00       	call   833efa4 <_ZN13user_creature13CCreatureItem9GetItemIdEv>
 83375d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 83375d5:	8b 45 08             	mov    0x8(%ebp),%eax
 83375d8:	89 04 24             	mov    %eax,(%esp)
 83375db:	e8 bc 00 00 00       	call   833769c <_ZN13user_creature9CCreature13GetCreatureIdEi>
 83375e0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83375e3:	e8 e8 f5 ff ff       	call   8336bd0 <_ZN13user_creature28GetInstanceCreatureScriptMgrEv>
 83375e8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 83375eb:	89 54 24 04          	mov    %edx,0x4(%esp)
 83375ef:	89 04 24             	mov    %eax,(%esp)
 83375f2:	e8 a3 5e 00 00       	call   833d49a <_ZN13user_creature18CCreatureScriptMgr18FindCreatureScriptEi>
 83375f7:	8b 55 08             	mov    0x8(%ebp),%edx
 83375fa:	89 42 44             	mov    %eax,0x44(%edx)
 83375fd:	8b 45 08             	mov    0x8(%ebp),%eax
 8337600:	8b 40 44             	mov    0x44(%eax),%eax
 8337603:	85 c0                	test   %eax,%eax
 8337605:	75 38                	jne    833763f <_ZN13user_creature9CCreature9SetItemIdEi+0x91>
 8337607:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 833760e:	00 
 833760f:	c7 44 24 08 6c 05 00 	movl   $0x56c,0x8(%esp)
 8337616:	00 
 8337617:	c7 44 24 04 20 f4 c2 	movl   $0x8c2f420,0x4(%esp)
 833761e:	08 
 833761f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8337622:	89 04 24             	mov    %eax,(%esp)
 8337625:	e8 ee 80 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 833762a:	c7 44 24 04 ac d7 c2 	movl   $0x8c2d7ac,0x4(%esp)
 8337631:	08 
 8337632:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8337635:	89 04 24             	mov    %eax,(%esp)
 8337638:	e8 4b 81 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 833763d:	eb 5a                	jmp    8337699 <_ZN13user_creature9CCreature9SetItemIdEi+0xeb>
 833763f:	8b 45 08             	mov    0x8(%ebp),%eax
 8337642:	8b 40 44             	mov    0x44(%eax),%eax
 8337645:	89 04 24             	mov    %eax,(%esp)
 8337648:	e8 d3 7c 00 00       	call   833f320 <_ZN13user_creature15CCreatureScript18IsItemGrowCreatureEv>
 833764d:	84 c0                	test   %al,%al
 833764f:	74 09                	je     833765a <_ZN13user_creature9CCreature9SetItemIdEi+0xac>
 8337651:	8b 45 08             	mov    0x8(%ebp),%eax
 8337654:	c6 40 4c 00          	movb   $0x0,0x4c(%eax)
 8337658:	eb 07                	jmp    8337661 <_ZN13user_creature9CCreature9SetItemIdEi+0xb3>
 833765a:	8b 45 08             	mov    0x8(%ebp),%eax
 833765d:	c6 40 4c 01          	movb   $0x1,0x4c(%eax)
 8337661:	8b 45 08             	mov    0x8(%ebp),%eax
 8337664:	0f b6 40 4c          	movzbl 0x4c(%eax),%eax
 8337668:	83 f0 01             	xor    $0x1,%eax
 833766b:	84 c0                	test   %al,%al
 833766d:	74 2a                	je     8337699 <_ZN13user_creature9CCreature9SetItemIdEi+0xeb>
 833766f:	8b 45 08             	mov    0x8(%ebp),%eax
 8337672:	8b 40 30             	mov    0x30(%eax),%eax
 8337675:	85 c0                	test   %eax,%eax
 8337677:	75 20                	jne    8337699 <_ZN13user_creature9CCreature9SetItemIdEi+0xeb>
 8337679:	8b 45 08             	mov    0x8(%ebp),%eax
 833767c:	8b 40 30             	mov    0x30(%eax),%eax
 833767f:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8337682:	c6 45 e0 05          	movb   $0x5,-0x20(%ebp)
 8337686:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8337689:	8b 45 08             	mov    0x8(%ebp),%eax
 833768c:	89 50 30             	mov    %edx,0x30(%eax)
 833768f:	0f b6 55 e0          	movzbl -0x20(%ebp),%edx
 8337693:	8b 45 08             	mov    0x8(%ebp),%eax
 8337696:	88 50 4d             	mov    %dl,0x4d(%eax)
 8337699:	c9                   	leave
 833769a:	c3                   	ret
 833769b:	90                   	nop

```

```c
// user_creature::CCreature::SetItemId @ 0x83375ae

/* user_creature::CCreature::SetItemId(int) */

void __thiscall user_creature::CCreature::SetItemId(CCreature *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_24;
  cMyTrace local_20 [16];
  undefined4 local_10;
  
  CCreatureItem::SetItemId((CCreatureItem *)this,param_1);
  iVar2 = CCreatureItem::GetItemId((CCreatureItem *)this);
  local_10 = GetCreatureId(this,iVar2);
  iVar2 = GetInstanceCreatureScriptMgr();
  uVar3 = CCreatureScriptMgr::FindCreatureScript(iVar2);
  *(undefined4 *)(this + 0x44) = uVar3;
  if (*(int *)(this + 0x44) == 0) {
    cMyTrace::cMyTrace(local_20,"void user_creature::CCreature::SetItemId(int)",0x56c,5);
    cMyTrace::operator()(local_20,"cannot find  creature script memory\n");
  }
  else {
    cVar1 = CCreatureScript::IsItemGrowCreature(*(CCreatureScript **)(this + 0x44));
    if (cVar1 == '\0') {
      this[0x4c] = (CCreature)0x1;
    }
    else {
      this[0x4c] = (CCreature)0x0;
    }
    if ((this[0x4c] != (CCreature)0x1) && (*(int *)(this + 0x30) == 0)) {
      local_24 = CONCAT31((int3)((uint)*(undefined4 *)(this + 0x30) >> 8),5);
      *(undefined4 *)(this + 0x30) = local_24;
      this[0x4d] = (CCreature)0x5;
    }
  }
  return;
}

```

---

## SetState

```asm
// === 0833715a user_creature::CCreature::SetState  [0x0833715a-0x833732f] ===
 833715a:	55                   	push   %ebp
 833715b:	89 e5                	mov    %esp,%ebp
 833715d:	57                   	push   %edi
 833715e:	56                   	push   %esi
 833715f:	53                   	push   %ebx
 8337160:	83 ec 6c             	sub    $0x6c,%esp
 8337163:	8b 45 08             	mov    0x8(%ebp),%eax
 8337166:	0f b6 40 4c          	movzbl 0x4c(%eax),%eax
 833716a:	0f b6 d0             	movzbl %al,%edx
 833716d:	8b 45 08             	mov    0x8(%ebp),%eax
 8337170:	8b 40 3c             	mov    0x3c(%eax),%eax
 8337173:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8337176:	83 c1 34             	add    $0x34,%ecx
 8337179:	89 54 24 08          	mov    %edx,0x8(%esp)
 833717d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8337181:	89 0c 24             	mov    %ecx,(%esp)
 8337184:	e8 73 fb ff ff       	call   8336cfc <_ZN13user_creature8CStomach15GetStomachValueENS_14CREATURE_STATEEb>
 8337189:	d9 5d e0             	fstps  -0x20(%ebp)
 833718c:	8b 45 08             	mov    0x8(%ebp),%eax
 833718f:	8b 40 3c             	mov    0x3c(%eax),%eax
 8337192:	3b 45 10             	cmp    0x10(%ebp),%eax
 8337195:	0f 84 93 00 00 00    	je     833722e <_ZN13user_creature9CCreature8SetStateEP5CUserNS_14CREATURE_STATEE+0xd4>
 833719b:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 833719f:	0f 85 89 00 00 00    	jne    833722e <_ZN13user_creature9CCreature8SetStateEP5CUserNS_14CREATURE_STATEE+0xd4>
 83371a5:	8b 45 08             	mov    0x8(%ebp),%eax
 83371a8:	0f b6 40 4c          	movzbl 0x4c(%eax),%eax
 83371ac:	84 c0                	test   %al,%al
 83371ae:	74 7e                	je     833722e <_ZN13user_creature9CCreature8SetStateEP5CUserNS_14CREATURE_STATEE+0xd4>
 83371b0:	d9 45 e0             	flds   -0x20(%ebp)
 83371b3:	dd 05 60 f4 c2 08    	fldl   0x8c2f460
 83371b9:	de c9                	fmulp  %st,%st(1)
 83371bb:	d9 7d b6             	fnstcw -0x4a(%ebp)
 83371be:	0f b7 45 b6          	movzwl -0x4a(%ebp),%eax
 83371c2:	b4 0c                	mov    $0xc,%ah
 83371c4:	66 89 45 b4          	mov    %ax,-0x4c(%ebp)
 83371c8:	d9 6d b4             	fldcw  -0x4c(%ebp)
 83371cb:	db 5d e4             	fistpl -0x1c(%ebp)
 83371ce:	d9 6d b6             	fldcw  -0x4a(%ebp)
 83371d1:	8b 45 0c             	mov    0xc(%ebp),%eax
 83371d4:	89 04 24             	mov    %eax,(%esp)
 83371d7:	e8 72 4a d9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 83371dc:	89 c6                	mov    %eax,%esi
 83371de:	8b 45 0c             	mov    0xc(%ebp),%eax
 83371e1:	89 04 24             	mov    %eax,(%esp)
 83371e4:	e8 93 31 da ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 83371e9:	0f b7 f8             	movzwl %ax,%edi
 83371ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 83371ef:	89 04 24             	mov    %eax,(%esp)
 83371f2:	e8 9f 1a d9 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 83371f7:	89 c3                	mov    %eax,%ebx
 83371f9:	e8 7e f2 db ff       	call   80f647c <_Z12G_TimerQueuev>
 83371fe:	89 74 24 18          	mov    %esi,0x18(%esp)
 8337202:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8337206:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8337209:	89 54 24 10          	mov    %edx,0x10(%esp)
 833720d:	c7 44 24 0c 5c 00 00 	movl   $0x5c,0xc(%esp)
 8337214:	00 
 8337215:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8337219:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8337220:	00 
 8337221:	89 04 24             	mov    %eax,(%esp)
 8337224:	e8 ed 9b 2f 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8337229:	e9 ea 00 00 00       	jmp    8337318 <_ZN13user_creature9CCreature8SetStateEP5CUserNS_14CREATURE_STATEE+0x1be>
 833722e:	8b 45 08             	mov    0x8(%ebp),%eax
 8337231:	8b 40 3c             	mov    0x3c(%eax),%eax
 8337234:	3b 45 10             	cmp    0x10(%ebp),%eax
 8337237:	0f 84 db 00 00 00    	je     8337318 <_ZN13user_creature9CCreature8SetStateEP5CUserNS_14CREATURE_STATEE+0x1be>
 833723d:	83 7d 10 03          	cmpl   $0x3,0x10(%ebp)
 8337241:	0f 85 d1 00 00 00    	jne    8337318 <_ZN13user_creature9CCreature8SetStateEP5CUserNS_14CREATURE_STATEE+0x1be>
 8337247:	8b 45 08             	mov    0x8(%ebp),%eax
 833724a:	0f b6 40 4c          	movzbl 0x4c(%eax),%eax
 833724e:	84 c0                	test   %al,%al
 8337250:	0f 84 c2 00 00 00    	je     8337318 <_ZN13user_creature9CCreature8SetStateEP5CUserNS_14CREATURE_STATEE+0x1be>
 8337256:	8b 45 08             	mov    0x8(%ebp),%eax
 8337259:	89 04 24             	mov    %eax,(%esp)
 833725c:	e8 17 12 00 00       	call   8338478 <_ZN13user_creature9CCreature13IsDieCreatureEv>
 8337261:	84 c0                	test   %al,%al
 8337263:	0f 84 af 00 00 00    	je     8337318 <_ZN13user_creature9CCreature8SetStateEP5CUserNS_14CREATURE_STATEE+0x1be>
 8337269:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8337270:	00 
 8337271:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8337278:	00 
 8337279:	8b 45 0c             	mov    0xc(%ebp),%eax
 833727c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8337280:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8337283:	89 04 24             	mov    %eax,(%esp)
 8337286:	e8 9f 90 00 00       	call   834032a <_ZN13user_creature17CPacketRespondentC1EP5CUserii>
 833728b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 833728e:	89 04 24             	mov    %eax,(%esp)
 8337291:	e8 20 96 00 00       	call   83408b6 <_ZN13user_creature17CPacketRespondent29MakeNotipacketRevivalCreatureEv>
 8337296:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8337299:	89 04 24             	mov    %eax,(%esp)
 833729c:	e8 e9 91 00 00       	call   834048a <_ZN13user_creature17CPacketRespondent7SendAllEv>
 83372a1:	8b 45 08             	mov    0x8(%ebp),%eax
 83372a4:	8d 50 34             	lea    0x34(%eax),%edx
 83372a7:	b8 00 00 80 3f       	mov    $0x3f800000,%eax
 83372ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 83372b0:	89 14 24             	mov    %edx,(%esp)
 83372b3:	e8 3e 7c 00 00       	call   833eef6 <_ZN13user_creature8CStomach15SetStomachValueEf>
 83372b8:	8d 45 c0             	lea    -0x40(%ebp),%eax
 83372bb:	89 04 24             	mov    %eax,(%esp)
 83372be:	e8 23 46 d9 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 83372c3:	8b 45 08             	mov    0x8(%ebp),%eax
 83372c6:	89 04 24             	mov    %eax,(%esp)
 83372c9:	e8 f0 7c 00 00       	call   833efbe <_ZN13user_creature13CCreatureItem6GetUidEv>
 83372ce:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 83372d5:	00 
 83372d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 83372da:	8d 45 c0             	lea    -0x40(%ebp),%eax
 83372dd:	89 04 24             	mov    %eax,(%esp)
 83372e0:	e8 33 96 00 00       	call   8340918 <_ZN13user_creature17CPacketRespondent27MakeNotipacketCreatureStateEii>
 83372e5:	8d 45 c0             	lea    -0x40(%ebp),%eax
 83372e8:	89 04 24             	mov    %eax,(%esp)
 83372eb:	e8 f0 90 00 00       	call   83403e0 <_ZN13user_creature17CPacketRespondent4SendEv>
 83372f0:	eb 1b                	jmp    833730d <_ZN13user_creature9CCreature8SetStateEP5CUserNS_14CREATURE_STATEE+0x1b3>
 83372f2:	89 d3                	mov    %edx,%ebx
 83372f4:	89 c6                	mov    %eax,%esi
 83372f6:	8d 45 c0             	lea    -0x40(%ebp),%eax
 83372f9:	89 04 24             	mov    %eax,(%esp)
 83372fc:	e8 69 90 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 8337301:	89 f0                	mov    %esi,%eax
 8337303:	89 da                	mov    %ebx,%edx
 8337305:	89 04 24             	mov    %eax,(%esp)
 8337308:	e8 43 c4 7a 00       	call   8ae3750 <_Unwind_Resume>
 833730d:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8337310:	89 04 24             	mov    %eax,(%esp)
 8337313:	e8 52 90 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 8337318:	8b 45 08             	mov    0x8(%ebp),%eax
 833731b:	8b 55 10             	mov    0x10(%ebp),%edx
 833731e:	89 50 3c             	mov    %edx,0x3c(%eax)
 8337321:	8b 45 08             	mov    0x8(%ebp),%eax
 8337324:	c6 40 40 01          	movb   $0x1,0x40(%eax)
 8337328:	83 c4 6c             	add    $0x6c,%esp
 833732b:	5b                   	pop    %ebx
 833732c:	5e                   	pop    %esi
 833732d:	5f                   	pop    %edi
 833732e:	5d                   	pop    %ebp
 833732f:	c3                   	ret

```

```c
// user_creature::CCreature::SetState @ 0x833715a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* user_creature::CCreature::SetState(CUser*, user_creature::CREATURE_STATE) */

void __thiscall
user_creature::CCreature::SetState(CCreature *this,CUserCharacInfo *param_1,int param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  TimerQueue *pTVar5;
  int iVar6;
  longdouble lVar7;
  CPacketRespondent local_44 [32];
  float local_24;
  int local_20;
  
  lVar7 = (longdouble)
          CStomach::GetStomachValue
                    ((CStomach *)(this + 0x34),*(undefined4 *)(this + 0x3c),this[0x4c]);
  local_24 = (float)lVar7;
  if (((*(int *)(this + 0x3c) == param_3) || (param_3 != 1)) || (this[0x4c] == (CCreature)0x0)) {
    if (((*(int *)(this + 0x3c) != param_3) && (param_3 == 3)) && (this[0x4c] != (CCreature)0x0)) {
      cVar1 = IsDieCreature(this);
      if (cVar1 != '\0') {
        CPacketRespondent::CPacketRespondent(local_44,(CUser *)param_1,0,0);
                    /* try { // try from 08337291 to 083372ef has its CatchHandler @ 083372f2 */
        CPacketRespondent::MakeNotipacketRevivalCreature(local_44);
        CPacketRespondent::SendAll(local_44);
        CStomach::SetStomachValue((CStomach *)(this + 0x34),1.0);
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_44);
        iVar6 = CCreatureItem::GetUid((CCreatureItem *)this);
        CPacketRespondent::MakeNotipacketCreatureState(local_44,iVar6,1);
        CPacketRespondent::Send(local_44);
        CPacketRespondent::~CPacketRespondent(local_44);
      }
    }
  }
  else {
    local_20 = (int)ROUND((float)_DAT_08c2f460 * local_24);
    uVar3 = CUserCharacInfo::getCurCharacNo(param_1);
    uVar2 = CUser::get_unique_id((CUser *)param_1);
    uVar4 = CUser::GetUID((CUser *)param_1);
    pTVar5 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar5,0,uVar4,0x5c,local_20,uVar2,uVar3);
  }
  *(int *)(this + 0x3c) = param_3;
  this[0x40] = (CCreature)0x1;
  return;
}

```

---

## UseFeed

```asm
// === 083373d4 user_creature::CCreature::UseFeed  [0x083373d4-0x83374d1] ===
 83373d4:	55                   	push   %ebp
 83373d5:	89 e5                	mov    %esp,%ebp
 83373d7:	56                   	push   %esi
 83373d8:	53                   	push   %ebx
 83373d9:	83 ec 40             	sub    $0x40,%esp
 83373dc:	8b 45 08             	mov    0x8(%ebp),%eax
 83373df:	0f b6 40 4c          	movzbl 0x4c(%eax),%eax
 83373e3:	83 f0 01             	xor    $0x1,%eax
 83373e6:	84 c0                	test   %al,%al
 83373e8:	74 0a                	je     83373f4 <_ZN13user_creature9CCreature7UseFeedEP5CUserRi+0x20>
 83373ea:	bb 00 00 00 00       	mov    $0x0,%ebx
 83373ef:	e9 d4 00 00 00       	jmp    83374c8 <_ZN13user_creature9CCreature7UseFeedEP5CUserRi+0xf4>
 83373f4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 83373fb:	00 
 83373fc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8337403:	00 
 8337404:	8b 45 0c             	mov    0xc(%ebp),%eax
 8337407:	89 44 24 04          	mov    %eax,0x4(%esp)
 833740b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833740e:	89 04 24             	mov    %eax,(%esp)
 8337411:	e8 14 8f 00 00       	call   834032a <_ZN13user_creature17CPacketRespondentC1EP5CUserii>
 8337416:	8b 45 08             	mov    0x8(%ebp),%eax
 8337419:	89 04 24             	mov    %eax,(%esp)
 833741c:	e8 57 10 00 00       	call   8338478 <_ZN13user_creature9CCreature13IsDieCreatureEv>
 8337421:	84 c0                	test   %al,%al
 8337423:	74 16                	je     833743b <_ZN13user_creature9CCreature7UseFeedEP5CUserRi+0x67>
 8337425:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8337428:	89 04 24             	mov    %eax,(%esp)
 833742b:	e8 86 94 00 00       	call   83408b6 <_ZN13user_creature17CPacketRespondent29MakeNotipacketRevivalCreatureEv>
 8337430:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8337433:	89 04 24             	mov    %eax,(%esp)
 8337436:	e8 4f 90 00 00       	call   834048a <_ZN13user_creature17CPacketRespondent7SendAllEv>
 833743b:	8b 45 08             	mov    0x8(%ebp),%eax
 833743e:	8d 50 34             	lea    0x34(%eax),%edx
 8337441:	b8 00 00 f0 41       	mov    $0x41f00000,%eax
 8337446:	89 44 24 04          	mov    %eax,0x4(%esp)
 833744a:	89 14 24             	mov    %edx,(%esp)
 833744d:	e8 14 fa ff ff       	call   8336e66 <_ZN13user_creature8CStomach14IncrementValueEf>
 8337452:	d9 7d d6             	fnstcw -0x2a(%ebp)
 8337455:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 8337459:	b4 0c                	mov    $0xc,%ah
 833745b:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 833745f:	d9 6d d4             	fldcw  -0x2c(%ebp)
 8337462:	db 5d d0             	fistpl -0x30(%ebp)
 8337465:	d9 6d d6             	fldcw  -0x2a(%ebp)
 8337468:	8b 55 d0             	mov    -0x30(%ebp),%edx
 833746b:	8b 45 10             	mov    0x10(%ebp),%eax
 833746e:	89 10                	mov    %edx,(%eax)
 8337470:	8b 45 10             	mov    0x10(%ebp),%eax
 8337473:	8b 18                	mov    (%eax),%ebx
 8337475:	8b 45 08             	mov    0x8(%ebp),%eax
 8337478:	89 04 24             	mov    %eax,(%esp)
 833747b:	e8 3e 7b 00 00       	call   833efbe <_ZN13user_creature13CCreatureItem6GetUidEv>
 8337480:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8337484:	89 44 24 04          	mov    %eax,0x4(%esp)
 8337488:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833748b:	89 04 24             	mov    %eax,(%esp)
 833748e:	e8 85 94 00 00       	call   8340918 <_ZN13user_creature17CPacketRespondent27MakeNotipacketCreatureStateEii>
 8337493:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8337496:	89 04 24             	mov    %eax,(%esp)
 8337499:	e8 42 8f 00 00       	call   83403e0 <_ZN13user_creature17CPacketRespondent4SendEv>
 833749e:	89 c3                	mov    %eax,%ebx
 83374a0:	8d 45 d8             	lea    -0x28(%ebp),%eax
 83374a3:	89 04 24             	mov    %eax,(%esp)
 83374a6:	e8 bf 8e 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 83374ab:	eb 1b                	jmp    83374c8 <_ZN13user_creature9CCreature7UseFeedEP5CUserRi+0xf4>
 83374ad:	89 d3                	mov    %edx,%ebx
 83374af:	89 c6                	mov    %eax,%esi
 83374b1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 83374b4:	89 04 24             	mov    %eax,(%esp)
 83374b7:	e8 ae 8e 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 83374bc:	89 f0                	mov    %esi,%eax
 83374be:	89 da                	mov    %ebx,%edx
 83374c0:	89 04 24             	mov    %eax,(%esp)
 83374c3:	e8 88 c2 7a 00       	call   8ae3750 <_Unwind_Resume>
 83374c8:	89 d8                	mov    %ebx,%eax
 83374ca:	83 c4 40             	add    $0x40,%esp
 83374cd:	5b                   	pop    %ebx
 83374ce:	5e                   	pop    %esi
 83374cf:	5d                   	pop    %ebp
 83374d0:	c3                   	ret
 83374d1:	90                   	nop

```

```c
// user_creature::CCreature::UseFeed @ 0x83373d4

/* user_creature::CCreature::UseFeed(CUser*, int&) */

undefined4 __thiscall user_creature::CCreature::UseFeed(CCreature *this,CUser *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longdouble lVar5;
  CPacketRespondent local_2c [32];
  
  if (this[0x4c] == (CCreature)0x1) {
    CPacketRespondent::CPacketRespondent(local_2c,param_1,0,0);
    cVar2 = IsDieCreature(this);
    if (cVar2 != '\0') {
                    /* try { // try from 0833742b to 0833749d has its CatchHandler @ 083374ad */
      CPacketRespondent::MakeNotipacketRevivalCreature(local_2c);
      CPacketRespondent::SendAll(local_2c);
    }
    lVar5 = (longdouble)CStomach::IncrementValue((CStomach *)(this + 0x34),30.0);
    *param_2 = (int)ROUND(lVar5);
    iVar1 = *param_2;
    iVar3 = CCreatureItem::GetUid((CCreatureItem *)this);
    CPacketRespondent::MakeNotipacketCreatureState(local_2c,iVar3,iVar1);
    uVar4 = CPacketRespondent::Send(local_2c);
    CPacketRespondent::~CPacketRespondent(local_2c);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## isMaxLevel

```asm
// === 0833756e user_creature::CCreature::isMaxLevel  [0x0833756e-0x83375ad] ===
 833756e:	55                   	push   %ebp
 833756f:	89 e5                	mov    %esp,%ebp
 8337571:	53                   	push   %ebx
 8337572:	83 ec 14             	sub    $0x14,%esp
 8337575:	8b 45 08             	mov    0x8(%ebp),%eax
 8337578:	8b 40 44             	mov    0x44(%eax),%eax
 833757b:	85 c0                	test   %eax,%eax
 833757d:	74 24                	je     83375a3 <_ZN13user_creature9CCreature10isMaxLevelEv+0x35>
 833757f:	8b 45 08             	mov    0x8(%ebp),%eax
 8337582:	8b 58 2c             	mov    0x2c(%eax),%ebx
 8337585:	8b 45 08             	mov    0x8(%ebp),%eax
 8337588:	8b 40 44             	mov    0x44(%eax),%eax
 833758b:	89 04 24             	mov    %eax,(%esp)
 833758e:	e8 b9 7c 00 00       	call   833f24c <_ZN13user_creature15CCreatureScript11GetMaxLevelEv>
 8337593:	39 c3                	cmp    %eax,%ebx
 8337595:	0f 9d c0             	setge  %al
 8337598:	84 c0                	test   %al,%al
 833759a:	74 07                	je     83375a3 <_ZN13user_creature9CCreature10isMaxLevelEv+0x35>
 833759c:	b8 01 00 00 00       	mov    $0x1,%eax
 83375a1:	eb 05                	jmp    83375a8 <_ZN13user_creature9CCreature10isMaxLevelEv+0x3a>
 83375a3:	b8 00 00 00 00       	mov    $0x0,%eax
 83375a8:	83 c4 14             	add    $0x14,%esp
 83375ab:	5b                   	pop    %ebx
 83375ac:	5d                   	pop    %ebp
 83375ad:	c3                   	ret

```

```c
// user_creature::CCreature::isMaxLevel @ 0x833756e

/* user_creature::CCreature::isMaxLevel() */

undefined4 __thiscall user_creature::CCreature::isMaxLevel(CCreature *this)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(this + 0x44) != 0) &&
     (iVar1 = *(int *)(this + 0x2c),
     iVar2 = CCreatureScript::GetMaxLevel(*(CCreatureScript **)(this + 0x44)), iVar2 <= iVar1)) {
    return 1;
  }
  return 0;
}

```

---

## vaildItemExp

```asm
// === 083378aa user_creature::CCreature::vaildItemExp  [0x083378aa-0x83378fb] ===
 83378aa:	55                   	push   %ebp
 83378ab:	89 e5                	mov    %esp,%ebp
 83378ad:	83 ec 18             	sub    $0x18,%esp
 83378b0:	8b 45 08             	mov    0x8(%ebp),%eax
 83378b3:	8b 40 3c             	mov    0x3c(%eax),%eax
 83378b6:	83 f8 02             	cmp    $0x2,%eax
 83378b9:	75 07                	jne    83378c2 <_ZN13user_creature9CCreature12vaildItemExpEi+0x18>
 83378bb:	b8 00 00 00 00       	mov    $0x0,%eax
 83378c0:	eb 37                	jmp    83378f9 <_ZN13user_creature9CCreature12vaildItemExpEi+0x4f>
 83378c2:	8b 45 08             	mov    0x8(%ebp),%eax
 83378c5:	0f b6 40 4c          	movzbl 0x4c(%eax),%eax
 83378c9:	84 c0                	test   %al,%al
 83378cb:	74 07                	je     83378d4 <_ZN13user_creature9CCreature12vaildItemExpEi+0x2a>
 83378cd:	b8 00 00 00 00       	mov    $0x0,%eax
 83378d2:	eb 25                	jmp    83378f9 <_ZN13user_creature9CCreature12vaildItemExpEi+0x4f>
 83378d4:	8b 45 08             	mov    0x8(%ebp),%eax
 83378d7:	8b 40 44             	mov    0x44(%eax),%eax
 83378da:	8b 55 0c             	mov    0xc(%ebp),%edx
 83378dd:	89 54 24 04          	mov    %edx,0x4(%esp)
 83378e1:	89 04 24             	mov    %eax,(%esp)
 83378e4:	e8 97 79 00 00       	call   833f280 <_ZN13user_creature15CCreatureScript12validItemExpEi>
 83378e9:	84 c0                	test   %al,%al
 83378eb:	74 07                	je     83378f4 <_ZN13user_creature9CCreature12vaildItemExpEi+0x4a>
 83378ed:	b8 01 00 00 00       	mov    $0x1,%eax
 83378f2:	eb 05                	jmp    83378f9 <_ZN13user_creature9CCreature12vaildItemExpEi+0x4f>
 83378f4:	b8 00 00 00 00       	mov    $0x0,%eax
 83378f9:	c9                   	leave
 83378fa:	c3                   	ret
 83378fb:	90                   	nop

```

```c
// user_creature::CCreature::vaildItemExp @ 0x83378aa

/* user_creature::CCreature::vaildItemExp(int) */

undefined4 __thiscall user_creature::CCreature::vaildItemExp(CCreature *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)(this + 0x3c) == 2) {
    uVar2 = 0;
  }
  else if (this[0x4c] == (CCreature)0x0) {
    cVar1 = CCreatureScript::validItemExp(*(CCreatureScript **)(this + 0x44),param_1);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## ~CCreature

```asm
// === 083370a2 user_creature::CCreature::~CCreature  [0x083370a2-0x83370af] ===
 83370a2:	55                   	push   %ebp
 83370a3:	89 e5                	mov    %esp,%ebp
 83370a5:	8b 45 08             	mov    0x8(%ebp),%eax
 83370a8:	c7 00 c0 f4 c2 08    	movl   $0x8c2f4c0,(%eax)
 83370ae:	5d                   	pop    %ebp
 83370af:	c3                   	ret

```

```c
// user_creature::CCreature::~CCreature @ 0x83370a2

/* user_creature::CCreature::~CCreature() */

void __thiscall user_creature::CCreature::~CCreature(CCreature *this)

{
  *(undefined ***)this = &PTR_Reset_08c2f4c0;
  return;
}

```

