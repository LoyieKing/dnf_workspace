# WongWork__CBossPlay

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## InitPlayUser

```asm
// === 0814926e WongWork::CBossPlay::InitPlayUser  [0x0814926e-0x8149381] ===
 814926e:	55                   	push   %ebp
 814926f:	89 e5                	mov    %esp,%ebp
 8149271:	53                   	push   %ebx
 8149272:	83 ec 24             	sub    $0x24,%esp
 8149275:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 814927c:	e9 eb 00 00 00       	jmp    814936c <_ZN8WongWork9CBossPlay12InitPlayUserEii+0xfe>
 8149281:	8b 45 08             	mov    0x8(%ebp),%eax
 8149284:	8b 40 04             	mov    0x4(%eax),%eax
 8149287:	8b 55 f0             	mov    -0x10(%ebp),%edx
 814928a:	89 54 24 04          	mov    %edx,0x4(%esp)
 814928e:	89 04 24             	mov    %eax,(%esp)
 8149291:	e8 ce c4 ff ff       	call   8145764 <_ZN6CParty8get_userEi>
 8149296:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8149299:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 814929d:	74 1c                	je     81492bb <_ZN8WongWork9CBossPlay12InitPlayUserEii+0x4d>
 814929f:	8b 45 08             	mov    0x8(%ebp),%eax
 81492a2:	8b 40 04             	mov    0x4(%eax),%eax
 81492a5:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81492a8:	89 54 24 04          	mov    %edx,0x4(%esp)
 81492ac:	89 04 24             	mov    %eax,(%esp)
 81492af:	e8 b4 c5 ff ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 81492b4:	83 f0 01             	xor    $0x1,%eax
 81492b7:	84 c0                	test   %al,%al
 81492b9:	74 07                	je     81492c2 <_ZN8WongWork9CBossPlay12InitPlayUserEii+0x54>
 81492bb:	b8 01 00 00 00       	mov    $0x1,%eax
 81492c0:	eb 05                	jmp    81492c7 <_ZN8WongWork9CBossPlay12InitPlayUserEii+0x59>
 81492c2:	b8 00 00 00 00       	mov    $0x0,%eax
 81492c7:	84 c0                	test   %al,%al
 81492c9:	0f 85 98 00 00 00    	jne    8149367 <_ZN8WongWork9CBossPlay12InitPlayUserEii+0xf9>
 81492cf:	8b 45 10             	mov    0x10(%ebp),%eax
 81492d2:	0f bf d8             	movswl %ax,%ebx
 81492d5:	8b 45 08             	mov    0x8(%ebp),%eax
 81492d8:	8b 40 04             	mov    0x4(%eax),%eax
 81492db:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81492de:	89 54 24 04          	mov    %edx,0x4(%esp)
 81492e2:	89 04 24             	mov    %eax,(%esp)
 81492e5:	e8 7a c4 ff ff       	call   8145764 <_ZN6CParty8get_userEi>
 81492ea:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81492ee:	89 04 24             	mov    %eax,(%esp)
 81492f1:	e8 b6 17 00 00       	call   814aaac <_ZN5CUser17setBossTowerIndexEs>
 81492f6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81492f9:	89 04 24             	mov    %eax,(%esp)
 81492fc:	e8 5d 17 00 00       	call   814aa5e <_ZN5CUser18getCurCharacQuestWEv>
 8149301:	05 d8 75 00 00       	add    $0x75d8,%eax
 8149306:	89 04 24             	mov    %eax,(%esp)
 8149309:	e8 08 17 00 00       	call   814aa16 <_ZN18_Quest_Authen_Data5resetEv>
 814930e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8149311:	89 04 24             	mov    %eax,(%esp)
 8149314:	e8 45 17 00 00       	call   814aa5e <_ZN5CUser18getCurCharacQuestWEv>
 8149319:	c7 44 24 0c ff ff ff 	movl   $0xffffffff,0xc(%esp)
 8149320:	ff 
 8149321:	8b 55 0c             	mov    0xc(%ebp),%edx
 8149324:	89 54 24 08          	mov    %edx,0x8(%esp)
 8149328:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814932f:	00 
 8149330:	89 04 24             	mov    %eax,(%esp)
 8149333:	e8 78 2a 56 00       	call   86abdb0 <_ZN9UserQuest15set_authen_dataE15QUEST_CONDITIONii>
 8149338:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 814933f:	00 
 8149340:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8149343:	89 04 24             	mov    %eax,(%esp)
 8149346:	e8 67 5a 53 00       	call   867edb2 <_ZN5CUser9set_stateE8ch_state>
 814934b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8149352:	00 
 8149353:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8149356:	89 44 24 04          	mov    %eax,0x4(%esp)
 814935a:	8b 45 08             	mov    0x8(%ebp),%eax
 814935d:	89 04 24             	mov    %eax,(%esp)
 8149360:	e8 7f 14 00 00       	call   814a7e4 <_ZN8WongWork9CBossPlay14setMemberAliveEib>
 8149365:	eb 01                	jmp    8149368 <_ZN8WongWork9CBossPlay12InitPlayUserEii+0xfa>
 8149367:	90                   	nop
 8149368:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 814936c:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 8149370:	0f 9e c0             	setle  %al
 8149373:	84 c0                	test   %al,%al
 8149375:	0f 85 06 ff ff ff    	jne    8149281 <_ZN8WongWork9CBossPlay12InitPlayUserEii+0x13>
 814937b:	83 c4 24             	add    $0x24,%esp
 814937e:	5b                   	pop    %ebx
 814937f:	5d                   	pop    %ebp
 8149380:	c3                   	ret
 8149381:	90                   	nop

```

```c
// WongWork::CBossPlay::InitPlayUser @ 0x814926e

/* WongWork::CBossPlay::InitPlayUser(int, int) */

void __thiscall WongWork::CBossPlay::InitPlayUser(CBossPlay *this,int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  CUser *this_00;
  CUser *this_01;
  int iVar3;
  UserQuest *pUVar4;
  int local_14;
  
  local_14 = 0;
  do {
    if (3 < local_14) {
      return;
    }
    this_00 = (CUser *)CParty::get_user(*(CParty **)(this + 4),local_14);
    if (this_00 == (CUser *)0x0) {
LAB_081492bb:
      bVar1 = true;
    }
    else {
      cVar2 = CParty::checkValidUser(*(CParty **)(this + 4),local_14);
      if (cVar2 != '\x01') goto LAB_081492bb;
      bVar1 = false;
    }
    if (!bVar1) {
      this_01 = (CUser *)CParty::get_user(*(CParty **)(this + 4),local_14);
      CUser::setBossTowerIndex(this_01,(short)param_2);
      iVar3 = CUser::getCurCharacQuestW(this_00);
      _Quest_Authen_Data::reset((_Quest_Authen_Data *)(iVar3 + 0x75d8));
      pUVar4 = (UserQuest *)CUser::getCurCharacQuestW(this_00);
      UserQuest::set_authen_data(pUVar4,0,param_1,0xffffffff);
      CUser::set_state(this_00,0xc);
      setMemberAlive(this,local_14,true);
    }
    local_14 = local_14 + 1;
  } while( true );
}

```

---

## _checkMemberDie

```asm
// === 08149382 WongWork::CBossPlay::_checkMemberDie  [0x08149382-0x81493fd] ===
 8149382:	55                   	push   %ebp
 8149383:	89 e5                	mov    %esp,%ebp
 8149385:	83 ec 28             	sub    $0x28,%esp
 8149388:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 814938f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8149396:	eb 43                	jmp    81493db <_ZN8WongWork9CBossPlay15_checkMemberDieEv+0x59>
 8149398:	8b 55 f4             	mov    -0xc(%ebp),%edx
 814939b:	8b 45 08             	mov    0x8(%ebp),%eax
 814939e:	8b 40 04             	mov    0x4(%eax),%eax
 81493a1:	89 54 24 04          	mov    %edx,0x4(%esp)
 81493a5:	89 04 24             	mov    %eax,(%esp)
 81493a8:	e8 bb c4 ff ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 81493ad:	84 c0                	test   %al,%al
 81493af:	74 1d                	je     81493ce <_ZN8WongWork9CBossPlay15_checkMemberDieEv+0x4c>
 81493b1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81493b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81493b8:	8b 45 08             	mov    0x8(%ebp),%eax
 81493bb:	89 04 24             	mov    %eax,(%esp)
 81493be:	e8 bf c2 ff ff       	call   8145682 <_ZN8WongWork9CBossPlay13isMemberAliveEi>
 81493c3:	84 c0                	test   %al,%al
 81493c5:	74 07                	je     81493ce <_ZN8WongWork9CBossPlay15_checkMemberDieEv+0x4c>
 81493c7:	b8 01 00 00 00       	mov    $0x1,%eax
 81493cc:	eb 05                	jmp    81493d3 <_ZN8WongWork9CBossPlay15_checkMemberDieEv+0x51>
 81493ce:	b8 00 00 00 00       	mov    $0x0,%eax
 81493d3:	84 c0                	test   %al,%al
 81493d5:	75 11                	jne    81493e8 <_ZN8WongWork9CBossPlay15_checkMemberDieEv+0x66>
 81493d7:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81493db:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 81493df:	0f 96 c0             	setbe  %al
 81493e2:	84 c0                	test   %al,%al
 81493e4:	75 b2                	jne    8149398 <_ZN8WongWork9CBossPlay15_checkMemberDieEv+0x16>
 81493e6:	eb 01                	jmp    81493e9 <_ZN8WongWork9CBossPlay15_checkMemberDieEv+0x67>
 81493e8:	90                   	nop
 81493e9:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 81493ed:	75 07                	jne    81493f6 <_ZN8WongWork9CBossPlay15_checkMemberDieEv+0x74>
 81493ef:	b8 01 00 00 00       	mov    $0x1,%eax
 81493f4:	eb 05                	jmp    81493fb <_ZN8WongWork9CBossPlay15_checkMemberDieEv+0x79>
 81493f6:	b8 00 00 00 00       	mov    $0x0,%eax
 81493fb:	c9                   	leave
 81493fc:	c3                   	ret
 81493fd:	90                   	nop

```

```c
// WongWork::CBossPlay::_checkMemberDie @ 0x8149382

/* WongWork::CBossPlay::_checkMemberDie() */

bool __thiscall WongWork::CBossPlay::_checkMemberDie(CBossPlay *this)

{
  bool bVar1;
  char cVar2;
  uint local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar2 = CParty::checkValidUser(*(CParty **)(this + 4),local_10);
    if ((cVar2 == '\0') || (cVar2 = isMemberAlive(this,local_10), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) break;
  }
  return local_10 == 4;
}

```

---

## checkAllMemberReady

```asm
// === 081493fe WongWork::CBossPlay::checkAllMemberReady  [0x081493fe-0x8149465] ===
 81493fe:	55                   	push   %ebp
 81493ff:	89 e5                	mov    %esp,%ebp
 8149401:	83 ec 10             	sub    $0x10,%esp
 8149404:	8b 45 08             	mov    0x8(%ebp),%eax
 8149407:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 814940b:	84 c0                	test   %al,%al
 814940d:	74 07                	je     8149416 <_ZN8WongWork9CBossPlay19checkAllMemberReadyEi+0x18>
 814940f:	b8 01 00 00 00       	mov    $0x1,%eax
 8149414:	eb 4d                	jmp    8149463 <_ZN8WongWork9CBossPlay19checkAllMemberReadyEi+0x65>
 8149416:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 814941d:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 8149424:	eb 2d                	jmp    8149453 <_ZN8WongWork9CBossPlay19checkAllMemberReadyEi+0x55>
 8149426:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8149429:	8b 55 08             	mov    0x8(%ebp),%edx
 814942c:	0f b6 44 02 11       	movzbl 0x11(%edx,%eax,1),%eax
 8149431:	84 c0                	test   %al,%al
 8149433:	74 1a                	je     814944f <_ZN8WongWork9CBossPlay19checkAllMemberReadyEi+0x51>
 8149435:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 8149439:	8b 45 f8             	mov    -0x8(%ebp),%eax
 814943c:	3b 45 0c             	cmp    0xc(%ebp),%eax
 814943f:	75 0e                	jne    814944f <_ZN8WongWork9CBossPlay19checkAllMemberReadyEi+0x51>
 8149441:	8b 45 08             	mov    0x8(%ebp),%eax
 8149444:	c6 40 0c 01          	movb   $0x1,0xc(%eax)
 8149448:	b8 01 00 00 00       	mov    $0x1,%eax
 814944d:	eb 14                	jmp    8149463 <_ZN8WongWork9CBossPlay19checkAllMemberReadyEi+0x65>
 814944f:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 8149453:	83 7d fc 03          	cmpl   $0x3,-0x4(%ebp)
 8149457:	0f 9e c0             	setle  %al
 814945a:	84 c0                	test   %al,%al
 814945c:	75 c8                	jne    8149426 <_ZN8WongWork9CBossPlay19checkAllMemberReadyEi+0x28>
 814945e:	b8 00 00 00 00       	mov    $0x0,%eax
 8149463:	c9                   	leave
 8149464:	c3                   	ret
 8149465:	90                   	nop

```

```c
// WongWork::CBossPlay::checkAllMemberReady @ 0x81493fe

/* WongWork::CBossPlay::checkAllMemberReady(int) */

undefined4 __thiscall WongWork::CBossPlay::checkAllMemberReady(CBossPlay *this,int param_1)

{
  undefined4 uVar1;
  int local_c;
  int local_8;
  
  if (this[0xc] == (CBossPlay)0x0) {
    local_c = 0;
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      if ((this[local_8 + 0x11] != (CBossPlay)0x0) && (local_c = local_c + 1, local_c == param_1)) {
        this[0xc] = (CBossPlay)0x1;
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

## generateRewardExp

```asm
// === 08149e20 WongWork::CBossPlay::generateRewardExp  [0x08149e20-0x814a220] ===
 8149e20:	55                   	push   %ebp
 8149e21:	89 e5                	mov    %esp,%ebp
 8149e23:	57                   	push   %edi
 8149e24:	56                   	push   %esi
 8149e25:	53                   	push   %ebx
 8149e26:	81 ec 3c 01 00 00    	sub    $0x13c,%esp
 8149e2c:	8b 45 08             	mov    0x8(%ebp),%eax
 8149e2f:	8b 40 04             	mov    0x4(%eax),%eax
 8149e32:	8b 55 0c             	mov    0xc(%ebp),%edx
 8149e35:	89 54 24 04          	mov    %edx,0x4(%esp)
 8149e39:	89 04 24             	mov    %eax,(%esp)
 8149e3c:	e8 23 b9 ff ff       	call   8145764 <_ZN6CParty8get_userEi>
 8149e41:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8149e44:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8149e48:	75 0a                	jne    8149e54 <_ZN8WongWork9CBossPlay17generateRewardExpEijjPK8CDungeon+0x34>
 8149e4a:	b8 00 00 00 00       	mov    $0x0,%eax
 8149e4f:	e9 c2 03 00 00       	jmp    814a216 <_ZN8WongWork9CBossPlay17generateRewardExpEijjPK8CDungeon+0x3f6>
 8149e54:	8b 45 10             	mov    0x10(%ebp),%eax
 8149e57:	0f af 45 14          	imul   0x14(%ebp),%eax
 8149e5b:	ba 00 00 00 00       	mov    $0x0,%edx
 8149e60:	89 85 18 ff ff ff    	mov    %eax,-0xe8(%ebp)
 8149e66:	89 95 1c ff ff ff    	mov    %edx,-0xe4(%ebp)
 8149e6c:	df ad 18 ff ff ff    	fildll -0xe8(%ebp)
 8149e72:	d9 9d 10 ff ff ff    	fstps  -0xf0(%ebp)
 8149e78:	8b 45 18             	mov    0x18(%ebp),%eax
 8149e7b:	89 04 24             	mov    %eax,(%esp)
 8149e7e:	e8 6d 3e fb ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 8149e83:	89 c3                	mov    %eax,%ebx
 8149e85:	e8 11 23 f8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8149e8a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8149e8e:	89 04 24             	mov    %eax,(%esp)
 8149e91:	e8 42 b7 ff ff       	call   81455d8 <_ZN12CDataManager14GetTowerScriptEj>
 8149e96:	8b 55 10             	mov    0x10(%ebp),%edx
 8149e99:	d9 44 90 04          	flds   0x4(%eax,%edx,4)
 8149e9d:	d8 8d 10 ff ff ff    	fmuls  -0xf0(%ebp)
 8149ea3:	d9 bd 16 ff ff ff    	fnstcw -0xea(%ebp)
 8149ea9:	0f b7 85 16 ff ff ff 	movzwl -0xea(%ebp),%eax
 8149eb0:	b4 0c                	mov    $0xc,%ah
 8149eb2:	66 89 85 14 ff ff ff 	mov    %ax,-0xec(%ebp)
 8149eb9:	d9 ad 14 ff ff ff    	fldcw  -0xec(%ebp)
 8149ebf:	df bd 18 ff ff ff    	fistpll -0xe8(%ebp)
 8149ec5:	d9 ad 16 ff ff ff    	fldcw  -0xea(%ebp)
 8149ecb:	8b 85 18 ff ff ff    	mov    -0xe8(%ebp),%eax
 8149ed1:	8b 95 1c ff ff ff    	mov    -0xe4(%ebp),%edx
 8149ed7:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8149eda:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8149edd:	89 04 24             	mov    %eax,(%esp)
 8149ee0:	e8 1b 09 00 00       	call   814a800 <_ZN23stClearRewardBonusExp_tC1Ev>
 8149ee5:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 8149eeb:	89 04 24             	mov    %eax,(%esp)
 8149eee:	e8 c5 09 00 00       	call   814a8b8 <_ZN27stClearRewardExpParameter_tC1Ev>
 8149ef3:	8b 45 08             	mov    0x8(%ebp),%eax
 8149ef6:	8b 40 04             	mov    0x4(%eax),%eax
 8149ef9:	89 04 24             	mov    %eax,(%esp)
 8149efc:	e8 c1 0a 00 00       	call   814a9c2 <_ZN6CParty14getAvatarBonusEv>
 8149f01:	d9 9d 3c ff ff ff    	fstps  -0xc4(%ebp)
 8149f07:	8b 45 08             	mov    0x8(%ebp),%eax
 8149f0a:	8b 40 04             	mov    0x4(%eax),%eax
 8149f0d:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8149f10:	89 54 24 04          	mov    %edx,0x4(%esp)
 8149f14:	89 04 24             	mov    %eax,(%esp)
 8149f17:	e8 c6 0a 00 00       	call   814a9e2 <_ZN6CParty16getCreatureBonusEP5CUser>
 8149f1c:	d9 9d 40 ff ff ff    	fstps  -0xc0(%ebp)
 8149f22:	e8 b9 07 00 00       	call   814a6e0 <_ZN12CServerEvent10GetExpRateEv>
 8149f27:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
 8149f2d:	db 85 24 ff ff ff    	fildl  -0xdc(%ebp)
 8149f33:	d9 05 7c 50 b7 08    	flds   0x8b7507c
 8149f39:	de f9                	fdivrp %st,%st(1)
 8149f3b:	d9 9d 5c ff ff ff    	fstps  -0xa4(%ebp)
 8149f41:	8b 45 18             	mov    0x18(%ebp),%eax
 8149f44:	89 04 24             	mov    %eax,(%esp)
 8149f47:	e8 a4 3d fb ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 8149f4c:	89 c7                	mov    %eax,%edi
 8149f4e:	e8 2e 22 f8 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8149f53:	89 04 24             	mov    %eax,(%esp)
 8149f56:	e8 6f 0b 00 00       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 8149f5b:	89 c6                	mov    %eax,%esi
 8149f5d:	e8 1f 22 f8 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8149f62:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 8149f68:	0f b6 d8             	movzbl %al,%ebx
 8149f6b:	e8 2b 22 f8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8149f70:	89 04 24             	mov    %eax,(%esp)
 8149f73:	e8 80 07 00 00       	call   814a6f8 <_ZNK12CDataManager16GetChannelScriptEv>
 8149f78:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8149f7c:	89 74 24 08          	mov    %esi,0x8(%esp)
 8149f80:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8149f84:	89 04 24             	mov    %eax,(%esp)
 8149f87:	e8 b0 2e 79 00       	call   88dce3c <_ZNK16channel_script_t12getBonusRateEhjj>
 8149f8c:	d9 9d 54 ff ff ff    	fstps  -0xac(%ebp)
 8149f92:	a1 30 f7 41 09       	mov    0x941f730,%eax
 8149f97:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 8149f9e:	00 
 8149f9f:	89 04 24             	mov    %eax,(%esp)
 8149fa2:	e8 f1 b9 fc ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 8149fa7:	8b 10                	mov    (%eax),%edx
 8149fa9:	83 c2 34             	add    $0x34,%edx
 8149fac:	8b 0a                	mov    (%edx),%ecx
 8149fae:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8149fb1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8149fb5:	89 04 24             	mov    %eax,(%esp)
 8149fb8:	ff d1                	call   *%ecx
 8149fba:	84 c0                	test   %al,%al
 8149fbc:	74 48                	je     814a006 <_ZN8WongWork9CBossPlay17generateRewardExpEijjPK8CDungeon+0x1e6>
 8149fbe:	a1 30 f7 41 09       	mov    0x941f730,%eax
 8149fc3:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 8149fca:	00 
 8149fcb:	89 04 24             	mov    %eax,(%esp)
 8149fce:	e8 c5 b9 fc ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 8149fd3:	89 04 24             	mov    %eax,(%esp)
 8149fd6:	e8 09 0b 00 00       	call   814aae4 <_ZN19CPCRoomBurningEvent12GetExpFactorEv>
 8149fdb:	89 c1                	mov    %eax,%ecx
 8149fdd:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 8149fe2:	89 c8                	mov    %ecx,%eax
 8149fe4:	f7 ea                	imul   %edx
 8149fe6:	c1 fa 05             	sar    $0x5,%edx
 8149fe9:	89 c8                	mov    %ecx,%eax
 8149feb:	c1 f8 1f             	sar    $0x1f,%eax
 8149fee:	89 d1                	mov    %edx,%ecx
 8149ff0:	29 c1                	sub    %eax,%ecx
 8149ff2:	89 c8                	mov    %ecx,%eax
 8149ff4:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
 8149ffa:	db 85 24 ff ff ff    	fildl  -0xdc(%ebp)
 814a000:	d9 9d 44 ff ff ff    	fstps  -0xbc(%ebp)
 814a006:	a1 30 f7 41 09       	mov    0x941f730,%eax
 814a00b:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 814a012:	00 
 814a013:	89 04 24             	mov    %eax,(%esp)
 814a016:	e8 7d b9 fc ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 814a01b:	8b 10                	mov    (%eax),%edx
 814a01d:	83 c2 34             	add    $0x34,%edx
 814a020:	8b 12                	mov    (%edx),%edx
 814a022:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814a029:	00 
 814a02a:	89 04 24             	mov    %eax,(%esp)
 814a02d:	ff d2                	call   *%edx
 814a02f:	84 c0                	test   %al,%al
 814a031:	74 37                	je     814a06a <_ZN8WongWork9CBossPlay17generateRewardExpEijjPK8CDungeon+0x24a>
 814a033:	a1 30 f7 41 09       	mov    0x941f730,%eax
 814a038:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 814a03f:	00 
 814a040:	89 04 24             	mov    %eax,(%esp)
 814a043:	e8 50 b9 fc ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 814a048:	89 04 24             	mov    %eax,(%esp)
 814a04b:	e8 88 0a 00 00       	call   814aad8 <_ZN15CExpDoubleEvent12GetExpFactorEv>
 814a050:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
 814a056:	db 85 24 ff ff ff    	fildl  -0xdc(%ebp)
 814a05c:	d9 05 7c 50 b7 08    	flds   0x8b7507c
 814a062:	de f9                	fdivrp %st,%st(1)
 814a064:	d9 9d 48 ff ff ff    	fstps  -0xb8(%ebp)
 814a06a:	a1 30 f7 41 09       	mov    0x941f730,%eax
 814a06f:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 814a076:	00 
 814a077:	89 04 24             	mov    %eax,(%esp)
 814a07a:	e8 19 b9 fc ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 814a07f:	8b 10                	mov    (%eax),%edx
 814a081:	83 c2 34             	add    $0x34,%edx
 814a084:	8b 12                	mov    (%edx),%edx
 814a086:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814a08d:	00 
 814a08e:	89 04 24             	mov    %eax,(%esp)
 814a091:	ff d2                	call   *%edx
 814a093:	84 c0                	test   %al,%al
 814a095:	74 35                	je     814a0cc <_ZN8WongWork9CBossPlay17generateRewardExpEijjPK8CDungeon+0x2ac>
 814a097:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814a09a:	89 04 24             	mov    %eax,(%esp)
 814a09d:	e8 18 6c fc ff       	call   8110cba <_ZN15CUserCharacInfo23getCurCharacUsedFatigueEv>
 814a0a2:	0f b7 d8             	movzwl %ax,%ebx
 814a0a5:	a1 30 f7 41 09       	mov    0x941f730,%eax
 814a0aa:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 814a0b1:	00 
 814a0b2:	89 04 24             	mov    %eax,(%esp)
 814a0b5:	e8 de b8 fc ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 814a0ba:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 814a0be:	89 04 24             	mov    %eax,(%esp)
 814a0c1:	e8 26 00 fc ff       	call   810a0ec <_ZNK20CBurningFatigueEvent15getBonusExpRateEt>
 814a0c6:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 814a0cc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814a0cf:	89 04 24             	mov    %eax,(%esp)
 814a0d2:	e8 5f 2d fe ff       	call   812ce36 <_ZNK5CUser22IsHavePremiumAdvantageEv>
 814a0d7:	84 c0                	test   %al,%al
 814a0d9:	74 2d                	je     814a108 <_ZN8WongWork9CBossPlay17generateRewardExpEijjPK8CDungeon+0x2e8>
 814a0db:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814a0de:	89 04 24             	mov    %eax,(%esp)
 814a0e1:	e8 42 2d fe ff       	call   812ce28 <_ZNK5CUser14GetPremiumInfoEv>
 814a0e6:	89 04 24             	mov    %eax,(%esp)
 814a0e9:	e8 1a 09 00 00       	call   814aa08 <_ZNK8WongWork12CUserPremium19GetAdvantageExpRateEv>
 814a0ee:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
 814a0f4:	db 85 24 ff ff ff    	fildl  -0xdc(%ebp)
 814a0fa:	d9 05 7c 50 b7 08    	flds   0x8b7507c
 814a100:	de f9                	fdivrp %st,%st(1)
 814a102:	d9 9d 58 ff ff ff    	fstps  -0xa8(%ebp)
 814a108:	8b 45 08             	mov    0x8(%ebp),%eax
 814a10b:	8b 40 04             	mov    0x4(%eax),%eax
 814a10e:	8d 55 94             	lea    -0x6c(%ebp),%edx
 814a111:	89 54 24 10          	mov    %edx,0x10(%esp)
 814a115:	8d 95 34 ff ff ff    	lea    -0xcc(%ebp),%edx
 814a11b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 814a11f:	8d 55 dc             	lea    -0x24(%ebp),%edx
 814a122:	89 54 24 08          	mov    %edx,0x8(%esp)
 814a126:	8b 55 e0             	mov    -0x20(%ebp),%edx
 814a129:	89 54 24 04          	mov    %edx,0x4(%esp)
 814a12d:	89 04 24             	mov    %eax,(%esp)
 814a130:	e8 43 31 46 00       	call   85ad278 <_ZN6CParty22getClearRewardBonusExpEP5CUserRjRK27stClearRewardExpParameter_tR23stClearRewardBonusExp_t>
 814a135:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 814a138:	81 7d e4 e0 c8 10 00 	cmpl   $0x10c8e0,-0x1c(%ebp)
 814a13f:	0f 86 bc 00 00 00    	jbe    814a201 <_ZN8WongWork9CBossPlay17generateRewardExpEijjPK8CDungeon+0x3e1>
 814a145:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 814a148:	89 44 24 14          	mov    %eax,0x14(%esp)
 814a14c:	c7 44 24 10 38 43 b7 	movl   $0x8b74338,0x10(%esp)
 814a153:	08 
 814a154:	c7 44 24 0c 59 01 00 	movl   $0x159,0xc(%esp)
 814a15b:	00 
 814a15c:	c7 44 24 08 00 50 b7 	movl   $0x8b75000,0x8(%esp)
 814a163:	08 
 814a164:	c7 44 24 04 6c 43 b7 	movl   $0x8b7436c,0x4(%esp)
 814a16b:	08 
 814a16c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 814a173:	e8 92 9a 98 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 814a178:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 814a17e:	d9 85 5c ff ff ff    	flds   -0xa4(%ebp)
 814a184:	d9 85 58 ff ff ff    	flds   -0xa8(%ebp)
 814a18a:	d9 85 54 ff ff ff    	flds   -0xac(%ebp)
 814a190:	d9 85 48 ff ff ff    	flds   -0xb8(%ebp)
 814a196:	d9 85 44 ff ff ff    	flds   -0xbc(%ebp)
 814a19c:	d9 85 40 ff ff ff    	flds   -0xc0(%ebp)
 814a1a2:	d9 85 3c ff ff ff    	flds   -0xc4(%ebp)
 814a1a8:	d9 ce                	fxch   %st(6)
 814a1aa:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 814a1ae:	dd 5c 24 44          	fstpl  0x44(%esp)
 814a1b2:	d9 cc                	fxch   %st(4)
 814a1b4:	dd 5c 24 3c          	fstpl  0x3c(%esp)
 814a1b8:	d9 ca                	fxch   %st(2)
 814a1ba:	dd 5c 24 34          	fstpl  0x34(%esp)
 814a1be:	dd 5c 24 2c          	fstpl  0x2c(%esp)
 814a1c2:	dd 5c 24 24          	fstpl  0x24(%esp)
 814a1c6:	dd 5c 24 1c          	fstpl  0x1c(%esp)
 814a1ca:	dd 5c 24 14          	fstpl  0x14(%esp)
 814a1ce:	c7 44 24 10 8c 43 b7 	movl   $0x8b7438c,0x10(%esp)
 814a1d5:	08 
 814a1d6:	c7 44 24 0c 63 01 00 	movl   $0x163,0xc(%esp)
 814a1dd:	00 
 814a1de:	c7 44 24 08 00 50 b7 	movl   $0x8b75000,0x8(%esp)
 814a1e5:	08 
 814a1e6:	c7 44 24 04 6c 43 b7 	movl   $0x8b7436c,0x4(%esp)
 814a1ed:	08 
 814a1ee:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 814a1f5:	e8 10 9a 98 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 814a1fa:	c7 45 e4 e0 c8 10 00 	movl   $0x10c8e0,-0x1c(%ebp)
 814a201:	8b 55 0c             	mov    0xc(%ebp),%edx
 814a204:	8b 45 08             	mov    0x8(%ebp),%eax
 814a207:	8d 4a 04             	lea    0x4(%edx),%ecx
 814a20a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 814a20d:	89 54 88 08          	mov    %edx,0x8(%eax,%ecx,4)
 814a211:	b8 01 00 00 00       	mov    $0x1,%eax
 814a216:	81 c4 3c 01 00 00    	add    $0x13c,%esp
 814a21c:	5b                   	pop    %ebx
 814a21d:	5e                   	pop    %esi
 814a21e:	5f                   	pop    %edi
 814a21f:	5d                   	pop    %ebp
 814a220:	c3                   	ret

```

```c
// WongWork::CBossPlay::generateRewardExp @ 0x8149e20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WongWork::CBossPlay::generateRewardExp(int, unsigned int, unsigned int, CDungeon const*) */

undefined4 __thiscall
WongWork::CBossPlay::generateRewardExp
          (CBossPlay *this,int param_1,uint param_2,uint param_3,CDungeon *param_4)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  CDataManager *pCVar5;
  int iVar6;
  CEnvironment *this_00;
  uint uVar7;
  channel_script_t *this_01;
  int *piVar8;
  CPCRoomBurningEvent *this_02;
  CExpDoubleEvent *this_03;
  CBurningFatigueEvent *this_04;
  CUserPremium *this_05;
  longdouble lVar9;
  ulonglong local_ec;
  stClearRewardExpParameter_t local_d0 [8];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  stClearRewardBonusExp_t local_70 [72];
  uint local_28;
  CUser *local_24;
  uint local_20;
  
  local_24 = (CUser *)CParty::get_user(*(CParty **)(this + 4),param_1);
  if (local_24 == (CUser *)0x0) {
    uVar3 = 0;
  }
  else {
    local_ec = (ulonglong)(param_2 * param_3);
    uVar4 = CDungeon::get_index(param_4);
    pCVar5 = (CDataManager *)G_CDataManager();
    iVar6 = CDataManager::GetTowerScript(pCVar5,uVar4);
    local_ec._0_4_ = (uint)(longlong)ROUND(*(float *)(iVar6 + 4 + param_2 * 4) * (float)local_ec);
    local_28 = (uint)local_ec;
    stClearRewardBonusExp_t::stClearRewardBonusExp_t(local_70);
    stClearRewardExpParameter_t::stClearRewardExpParameter_t(local_d0);
    lVar9 = (longdouble)CParty::getAvatarBonus(*(CParty **)(this + 4));
    local_c8 = (float)lVar9;
    lVar9 = (longdouble)CParty::getCreatureBonus(*(CParty **)(this + 4),local_24);
    local_c4 = (float)lVar9;
    iVar6 = CServerEvent::GetExpRate();
    local_a8 = (float)iVar6 / _DAT_08b7507c;
    uVar4 = CDungeon::get_index(param_4);
    this_00 = (CEnvironment *)G_CEnvironment();
    uVar7 = CEnvironment::get_channel_no(this_00);
    iVar6 = G_CEnvironment();
    uVar3 = *(undefined4 *)(iVar6 + 0x378);
    pCVar5 = (CDataManager *)G_CDataManager();
    this_01 = (channel_script_t *)CDataManager::GetChannelScript(pCVar5);
    lVar9 = (longdouble)channel_script_t::getBonusRate(this_01,(uchar)uVar3,uVar7,uVar4);
    local_b0 = (float)lVar9;
    piVar8 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,8);
    cVar1 = (**(code **)(*piVar8 + 0x34))(piVar8,local_24);
    if (cVar1 != '\0') {
      this_02 = (CPCRoomBurningEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,8);
      iVar6 = CPCRoomBurningEvent::GetExpFactor(this_02);
      local_c0 = (float)(iVar6 / 100);
    }
    piVar8 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,3);
    cVar1 = (**(code **)(*piVar8 + 0x34))(piVar8,0);
    if (cVar1 != '\0') {
      this_03 = (CExpDoubleEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,3);
      iVar6 = CExpDoubleEvent::GetExpFactor(this_03);
      local_bc = (float)iVar6 / _DAT_08b7507c;
    }
    piVar8 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xf);
    cVar1 = (**(code **)(*piVar8 + 0x34))(piVar8,0);
    if (cVar1 != '\0') {
      uVar2 = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)local_24);
      this_04 = (CBurningFatigueEvent *)
                CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xf);
      local_b4 = CBurningFatigueEvent::getBonusExpRate(this_04,uVar2);
    }
    cVar1 = CUser::IsHavePremiumAdvantage(local_24);
    if (cVar1 != '\0') {
      this_05 = (CUserPremium *)CUser::GetPremiumInfo(local_24);
      iVar6 = CUserPremium::GetAdvantageExpRate(this_05);
      local_ac = (float)iVar6 / _DAT_08b7507c;
    }
    local_20 = CParty::getClearRewardBonusExp
                         (*(CParty **)(this + 4),local_24,&local_28,local_d0,local_70);
    if (1100000 < local_20) {
      LogManager::logFormat
                (1,"localglobal/global_PlayUser.cpp",
                 "virtual bool WongWork::CBossPlay::generateRewardExp(int, unsigned int, unsigned int, const CDungeon*)"
                 ,0x159,"BOSS_LOG : EROOR BOSSTOWER CLEAR REWARD EXP(%u)\n",local_20);
      LogManager::logFormat
                (1,"localglobal/global_PlayUser.cpp",
                 "virtual bool WongWork::CBossPlay::generateRewardExp(int, unsigned int, unsigned int, const CDungeon*)"
                 ,0x163,"BOSS_LOG : BOSSTOWER EXP PARAMETER : %f, %f, %f, %f, %f, %f, %f, %d\n",
                 (double)local_c8,(double)local_c4,(double)local_c0,(double)local_bc,
                 (double)local_b0,(double)local_ac,(double)local_a8,local_b4);
      local_20 = 1100000;
    }
    *(uint *)(this + (param_1 + 4) * 4 + 8) = local_20;
    uVar3 = 1;
  }
  return uVar3;
}

```

---

## generateRewardItem

```asm
// === 08149914 WongWork::CBossPlay::generateRewardItem  [0x08149914-0x8149e1f] ===
 8149914:	55                   	push   %ebp
 8149915:	89 e5                	mov    %esp,%ebp
 8149917:	57                   	push   %edi
 8149918:	56                   	push   %esi
 8149919:	53                   	push   %ebx
 814991a:	81 ec 3c 01 00 00    	sub    $0x13c,%esp
 8149920:	8b 45 0c             	mov    0xc(%ebp),%eax
 8149923:	8b 55 08             	mov    0x8(%ebp),%edx
 8149926:	69 c0 68 02 00 00    	imul   $0x268,%eax,%eax
 814992c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 814992f:	8d 50 28             	lea    0x28(%eax),%edx
 8149932:	8b 45 10             	mov    0x10(%ebp),%eax
 8149935:	89 02                	mov    %eax,(%edx)
 8149937:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 814993e:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8149945:	b8 00 00 00 00       	mov    $0x0,%eax
 814994a:	89 45 d8             	mov    %eax,-0x28(%ebp)
 814994d:	8b 45 20             	mov    0x20(%ebp),%eax
 8149950:	89 04 24             	mov    %eax,(%esp)
 8149953:	e8 98 43 fb ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 8149958:	89 c3                	mov    %eax,%ebx
 814995a:	e8 3c 28 f8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 814995f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8149963:	89 04 24             	mov    %eax,(%esp)
 8149966:	e8 6d bc ff ff       	call   81455d8 <_ZN12CDataManager14GetTowerScriptEj>
 814996b:	8b 80 88 0c 00 00    	mov    0xc88(%eax),%eax
 8149971:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8149974:	8b 45 20             	mov    0x20(%ebp),%eax
 8149977:	89 04 24             	mov    %eax,(%esp)
 814997a:	e8 71 43 fb ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 814997f:	89 c3                	mov    %eax,%ebx
 8149981:	e8 15 28 f8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8149986:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 814998a:	89 04 24             	mov    %eax,(%esp)
 814998d:	e8 46 bc ff ff       	call   81455d8 <_ZN12CDataManager14GetTowerScriptEj>
 8149992:	8b 80 8c 0c 00 00    	mov    0xc8c(%eax),%eax
 8149998:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 814999b:	8b 45 20             	mov    0x20(%ebp),%eax
 814999e:	89 04 24             	mov    %eax,(%esp)
 81499a1:	e8 4a 43 fb ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 81499a6:	89 c3                	mov    %eax,%ebx
 81499a8:	e8 ee 27 f8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81499ad:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81499b1:	89 04 24             	mov    %eax,(%esp)
 81499b4:	e8 1f bc ff ff       	call   81455d8 <_ZN12CDataManager14GetTowerScriptEj>
 81499b9:	8b 80 94 0c 00 00    	mov    0xc94(%eax),%eax
 81499bf:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81499c2:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 81499c9:	e9 31 04 00 00       	jmp    8149dff <_ZN8WongWork9CBossPlay18generateRewardItemEiij23ENUM_DUNGEON_DIFFICULTYjPK8CDungeon+0x4eb>
 81499ce:	8d 85 dc fe ff ff    	lea    -0x124(%ebp),%eax
 81499d4:	89 04 24             	mov    %eax,(%esp)
 81499d7:	e8 2a 0d 00 00       	call   814a706 <_ZN8WongWork19stGenerateRefData_tC1Ev>
 81499dc:	8d 45 94             	lea    -0x6c(%ebp),%eax
 81499df:	89 04 24             	mov    %eax,(%esp)
 81499e2:	e8 1f 11 00 00       	call   814ab06 <_ZN8WongWork18stGenerateResult_tC1Ev>
 81499e7:	c7 04 24 e8 03 00 00 	movl   $0x3e8,(%esp)
 81499ee:	e8 94 81 56 00       	call   86b1b87 <_Z12get_rand_inti>
 81499f3:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81499f6:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81499f9:	0f af 45 1c          	imul   0x1c(%ebp),%eax
 81499fd:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 8149a00:	0f 86 9e 01 00 00    	jbe    8149ba4 <_ZN8WongWork9CBossPlay18generateRewardItemEiij23ENUM_DUNGEON_DIFFICULTYjPK8CDungeon+0x290>
 8149a06:	8b 45 18             	mov    0x18(%ebp),%eax
 8149a09:	88 85 11 ff ff ff    	mov    %al,-0xef(%ebp)
 8149a0f:	8b 45 14             	mov    0x14(%ebp),%eax
 8149a12:	88 85 10 ff ff ff    	mov    %al,-0xf0(%ebp)
 8149a18:	8b 45 08             	mov    0x8(%ebp),%eax
 8149a1b:	8b 40 04             	mov    0x4(%eax),%eax
 8149a1e:	89 04 24             	mov    %eax,(%esp)
 8149a21:	e8 44 07 45 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 8149a26:	88 85 12 ff ff ff    	mov    %al,-0xee(%ebp)
 8149a2c:	c7 85 14 ff ff ff 01 	movl   $0x1,-0xec(%ebp)
 8149a33:	00 00 00 
 8149a36:	66 c7 85 18 ff ff ff 	movw   $0x1,-0xe8(%ebp)
 8149a3d:	01 00 
 8149a3f:	66 c7 85 1a ff ff ff 	movw   $0x1,-0xe6(%ebp)
 8149a46:	01 00 
 8149a48:	66 c7 85 1c ff ff ff 	movw   $0x1,-0xe4(%ebp)
 8149a4f:	01 00 
 8149a51:	66 c7 85 1e ff ff ff 	movw   $0x1,-0xe2(%ebp)
 8149a58:	01 00 
 8149a5a:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 8149a60:	89 04 24             	mov    %eax,(%esp)
 8149a63:	e8 9e 10 00 00       	call   814ab06 <_ZN8WongWork18stGenerateResult_tC1Ev>
 8149a68:	e8 2e 27 f8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8149a6d:	89 04 24             	mov    %eax,(%esp)
 8149a70:	e8 75 0c 00 00       	call   814a6ea <_ZN12CDataManager16getItemGeneratorEv>
 8149a75:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8149a7c:	00 
 8149a7d:	89 04 24             	mov    %eax,(%esp)
 8149a80:	e8 4b 0d 00 00       	call   814a7d0 <_ZN8WongWork17CItemGeneratorMgr12getGeneratorENS0_15eGenerateType_tE>
 8149a85:	8b 10                	mov    (%eax),%edx
 8149a87:	83 c2 0c             	add    $0xc,%edx
 8149a8a:	8b 0a                	mov    (%edx),%ecx
 8149a8c:	8d 95 64 ff ff ff    	lea    -0x9c(%ebp),%edx
 8149a92:	89 54 24 08          	mov    %edx,0x8(%esp)
 8149a96:	8d 95 dc fe ff ff    	lea    -0x124(%ebp),%edx
 8149a9c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8149aa0:	89 04 24             	mov    %eax,(%esp)
 8149aa3:	ff d1                	call   *%ecx
 8149aa5:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8149aa8:	8d 95 64 ff ff ff    	lea    -0x9c(%ebp),%edx
 8149aae:	89 54 24 04          	mov    %edx,0x4(%esp)
 8149ab2:	89 04 24             	mov    %eax,(%esp)
 8149ab5:	e8 4a 12 00 00       	call   814ad04 <_ZNSt6vectorI10Inven_ItemSaIS0_EE5beginEv>
 8149aba:	83 ec 04             	sub    $0x4,%esp
 8149abd:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8149ac0:	89 04 24             	mov    %eax,(%esp)
 8149ac3:	e8 60 12 00 00       	call   814ad28 <_ZNK9__gnu_cxx17__normal_iteratorIP10Inven_ItemSt6vectorIS1_SaIS1_EEEdeEv>
 8149ac8:	8b 55 0c             	mov    0xc(%ebp),%edx
 8149acb:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8149ace:	6b c9 3d             	imul   $0x3d,%ecx,%ecx
 8149ad1:	69 d2 68 02 00 00    	imul   $0x268,%edx,%edx
 8149ad7:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8149ada:	83 c2 20             	add    $0x20,%edx
 8149add:	03 55 08             	add    0x8(%ebp),%edx
 8149ae0:	83 c2 0c             	add    $0xc,%edx
 8149ae3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8149ae7:	89 14 24             	mov    %edx,(%esp)
 8149aea:	e8 3f 0b 00 00       	call   814a62e <_ZN10Inven_Item7setCopyERKS_>
 8149aef:	8b 45 0c             	mov    0xc(%ebp),%eax
 8149af2:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8149af5:	6b d2 3d             	imul   $0x3d,%edx,%edx
 8149af8:	69 c0 68 02 00 00    	imul   $0x268,%eax,%eax
 8149afe:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8149b01:	83 c0 20             	add    $0x20,%eax
 8149b04:	03 45 08             	add    0x8(%ebp),%eax
 8149b07:	83 c0 0c             	add    $0xc,%eax
 8149b0a:	89 04 24             	mov    %eax,(%esp)
 8149b0d:	e8 28 dd fa ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 8149b12:	89 85 d4 fe ff ff    	mov    %eax,-0x12c(%ebp)
 8149b18:	db 85 d4 fe ff ff    	fildl  -0x12c(%ebp)
 8149b1e:	d8 4d d8             	fmuls  -0x28(%ebp)
 8149b21:	d9 bd d2 fe ff ff    	fnstcw -0x12e(%ebp)
 8149b27:	0f b7 85 d2 fe ff ff 	movzwl -0x12e(%ebp),%eax
 8149b2e:	b4 0c                	mov    $0xc,%ah
 8149b30:	66 89 85 d0 fe ff ff 	mov    %ax,-0x130(%ebp)
 8149b37:	d9 ad d0 fe ff ff    	fldcw  -0x130(%ebp)
 8149b3d:	db 9d d4 fe ff ff    	fistpl -0x12c(%ebp)
 8149b43:	d9 ad d2 fe ff ff    	fldcw  -0x12e(%ebp)
 8149b49:	8b 85 d4 fe ff ff    	mov    -0x12c(%ebp),%eax
 8149b4f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8149b52:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8149b55:	6b c9 3d             	imul   $0x3d,%ecx,%ecx
 8149b58:	69 d2 68 02 00 00    	imul   $0x268,%edx,%edx
 8149b5e:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8149b61:	83 c2 20             	add    $0x20,%edx
 8149b64:	03 55 08             	add    0x8(%ebp),%edx
 8149b67:	83 c2 0c             	add    $0xc,%edx
 8149b6a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8149b6e:	89 14 24             	mov    %edx,(%esp)
 8149b71:	e8 0e 1d f8 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 8149b76:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 8149b7c:	89 04 24             	mov    %eax,(%esp)
 8149b7f:	e8 c8 0f 00 00       	call   814ab4c <_ZN8WongWork18stGenerateResult_tD1Ev>
 8149b84:	e9 1b 02 00 00       	jmp    8149da4 <_ZN8WongWork9CBossPlay18generateRewardItemEiij23ENUM_DUNGEON_DIFFICULTYjPK8CDungeon+0x490>
 8149b89:	89 d3                	mov    %edx,%ebx
 8149b8b:	89 c6                	mov    %eax,%esi
 8149b8d:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 8149b93:	89 04 24             	mov    %eax,(%esp)
 8149b96:	e8 b1 0f 00 00       	call   814ab4c <_ZN8WongWork18stGenerateResult_tD1Ev>
 8149b9b:	89 f0                	mov    %esi,%eax
 8149b9d:	89 da                	mov    %ebx,%edx
 8149b9f:	e9 07 02 00 00       	jmp    8149dab <_ZN8WongWork9CBossPlay18generateRewardItemEiij23ENUM_DUNGEON_DIFFICULTYjPK8CDungeon+0x497>
 8149ba4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8149ba7:	0f af 45 1c          	imul   0x1c(%ebp),%eax
 8149bab:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 8149bae:	0f 86 f0 01 00 00    	jbe    8149da4 <_ZN8WongWork9CBossPlay18generateRewardItemEiij23ENUM_DUNGEON_DIFFICULTYjPK8CDungeon+0x490>
 8149bb4:	8b 45 18             	mov    0x18(%ebp),%eax
 8149bb7:	88 85 11 ff ff ff    	mov    %al,-0xef(%ebp)
 8149bbd:	8b 45 14             	mov    0x14(%ebp),%eax
 8149bc0:	88 85 10 ff ff ff    	mov    %al,-0xf0(%ebp)
 8149bc6:	b8 00 00 80 3f       	mov    $0x3f800000,%eax
 8149bcb:	89 85 14 ff ff ff    	mov    %eax,-0xec(%ebp)
 8149bd1:	8b 45 20             	mov    0x20(%ebp),%eax
 8149bd4:	89 85 1c ff ff ff    	mov    %eax,-0xe4(%ebp)
 8149bda:	c7 85 18 ff ff ff 00 	movl   $0x0,-0xe8(%ebp)
 8149be1:	00 00 00 
 8149be4:	e8 b2 25 f8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8149be9:	89 04 24             	mov    %eax,(%esp)
 8149bec:	e8 f9 0a 00 00       	call   814a6ea <_ZN12CDataManager16getItemGeneratorEv>
 8149bf1:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8149bf8:	00 
 8149bf9:	89 04 24             	mov    %eax,(%esp)
 8149bfc:	e8 cf 0b 00 00       	call   814a7d0 <_ZN8WongWork17CItemGeneratorMgr12getGeneratorENS0_15eGenerateType_tE>
 8149c01:	8b 10                	mov    (%eax),%edx
 8149c03:	83 c2 08             	add    $0x8,%edx
 8149c06:	8b 0a                	mov    (%edx),%ecx
 8149c08:	8d 55 94             	lea    -0x6c(%ebp),%edx
 8149c0b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8149c0f:	8d 95 dc fe ff ff    	lea    -0x124(%ebp),%edx
 8149c15:	89 54 24 04          	mov    %edx,0x4(%esp)
 8149c19:	89 04 24             	mov    %eax,(%esp)
 8149c1c:	ff d1                	call   *%ecx
 8149c1e:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8149c21:	89 04 24             	mov    %eax,(%esp)
 8149c24:	e8 09 11 00 00       	call   814ad32 <_ZNKSt6vectorI10Inven_ItemSaIS0_EE5emptyEv>
 8149c29:	83 f0 01             	xor    $0x1,%eax
 8149c2c:	84 c0                	test   %al,%al
 8149c2e:	0f 84 70 01 00 00    	je     8149da4 <_ZN8WongWork9CBossPlay18generateRewardItemEiij23ENUM_DUNGEON_DIFFICULTYjPK8CDungeon+0x490>
 8149c34:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8149c37:	8d 55 94             	lea    -0x6c(%ebp),%edx
 8149c3a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8149c3e:	89 04 24             	mov    %eax,(%esp)
 8149c41:	e8 be 10 00 00       	call   814ad04 <_ZNSt6vectorI10Inven_ItemSaIS0_EE5beginEv>
 8149c46:	83 ec 04             	sub    $0x4,%esp
 8149c49:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8149c4c:	89 04 24             	mov    %eax,(%esp)
 8149c4f:	e8 d4 10 00 00       	call   814ad28 <_ZNK9__gnu_cxx17__normal_iteratorIP10Inven_ItemSt6vectorIS1_SaIS1_EEEdeEv>
 8149c54:	8b 55 0c             	mov    0xc(%ebp),%edx
 8149c57:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8149c5a:	6b c9 3d             	imul   $0x3d,%ecx,%ecx
 8149c5d:	69 d2 68 02 00 00    	imul   $0x268,%edx,%edx
 8149c63:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8149c66:	83 c2 20             	add    $0x20,%edx
 8149c69:	03 55 08             	add    0x8(%ebp),%edx
 8149c6c:	83 c2 0c             	add    $0xc,%edx
 8149c6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8149c73:	89 14 24             	mov    %edx,(%esp)
 8149c76:	e8 b3 09 00 00       	call   814a62e <_ZN10Inven_Item7setCopyERKS_>
 8149c7b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8149c7e:	8d 55 94             	lea    -0x6c(%ebp),%edx
 8149c81:	89 54 24 04          	mov    %edx,0x4(%esp)
 8149c85:	89 04 24             	mov    %eax,(%esp)
 8149c88:	e8 77 10 00 00       	call   814ad04 <_ZNSt6vectorI10Inven_ItemSaIS0_EE5beginEv>
 8149c8d:	83 ec 04             	sub    $0x4,%esp
 8149c90:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8149c93:	89 04 24             	mov    %eax,(%esp)
 8149c96:	e8 8d 10 00 00       	call   814ad28 <_ZNK9__gnu_cxx17__normal_iteratorIP10Inven_ItemSt6vectorIS1_SaIS1_EEEdeEv>
 8149c9b:	8b 10                	mov    (%eax),%edx
 8149c9d:	89 95 27 ff ff ff    	mov    %edx,-0xd9(%ebp)
 8149ca3:	8b 50 04             	mov    0x4(%eax),%edx
 8149ca6:	89 95 2b ff ff ff    	mov    %edx,-0xd5(%ebp)
 8149cac:	8b 50 08             	mov    0x8(%eax),%edx
 8149caf:	89 95 2f ff ff ff    	mov    %edx,-0xd1(%ebp)
 8149cb5:	8b 50 0c             	mov    0xc(%eax),%edx
 8149cb8:	89 95 33 ff ff ff    	mov    %edx,-0xcd(%ebp)
 8149cbe:	8b 50 10             	mov    0x10(%eax),%edx
 8149cc1:	89 95 37 ff ff ff    	mov    %edx,-0xc9(%ebp)
 8149cc7:	8b 50 14             	mov    0x14(%eax),%edx
 8149cca:	89 95 3b ff ff ff    	mov    %edx,-0xc5(%ebp)
 8149cd0:	8b 50 18             	mov    0x18(%eax),%edx
 8149cd3:	89 95 3f ff ff ff    	mov    %edx,-0xc1(%ebp)
 8149cd9:	8b 50 1c             	mov    0x1c(%eax),%edx
 8149cdc:	89 95 43 ff ff ff    	mov    %edx,-0xbd(%ebp)
 8149ce2:	8b 50 20             	mov    0x20(%eax),%edx
 8149ce5:	89 95 47 ff ff ff    	mov    %edx,-0xb9(%ebp)
 8149ceb:	8b 50 24             	mov    0x24(%eax),%edx
 8149cee:	89 95 4b ff ff ff    	mov    %edx,-0xb5(%ebp)
 8149cf4:	8b 50 28             	mov    0x28(%eax),%edx
 8149cf7:	89 95 4f ff ff ff    	mov    %edx,-0xb1(%ebp)
 8149cfd:	8b 50 2c             	mov    0x2c(%eax),%edx
 8149d00:	89 95 53 ff ff ff    	mov    %edx,-0xad(%ebp)
 8149d06:	8b 50 30             	mov    0x30(%eax),%edx
 8149d09:	89 95 57 ff ff ff    	mov    %edx,-0xa9(%ebp)
 8149d0f:	8b 50 34             	mov    0x34(%eax),%edx
 8149d12:	89 95 5b ff ff ff    	mov    %edx,-0xa5(%ebp)
 8149d18:	8b 50 38             	mov    0x38(%eax),%edx
 8149d1b:	89 95 5f ff ff ff    	mov    %edx,-0xa1(%ebp)
 8149d21:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 8149d25:	88 85 63 ff ff ff    	mov    %al,-0x9d(%ebp)
 8149d2b:	8b 85 29 ff ff ff    	mov    -0xd7(%ebp),%eax
 8149d31:	89 c3                	mov    %eax,%ebx
 8149d33:	e8 63 24 f8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8149d38:	8b 40 0c             	mov    0xc(%eax),%eax
 8149d3b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8149d3f:	89 04 24             	mov    %eax,(%esp)
 8149d42:	e8 43 81 3c 00       	call   8511e8a <_ZN9CItemList9find_itemEi>
 8149d47:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8149d4a:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8149d4e:	75 07                	jne    8149d57 <_ZN8WongWork9CBossPlay18generateRewardItemEiij23ENUM_DUNGEON_DIFFICULTYjPK8CDungeon+0x443>
 8149d50:	bb 00 00 00 00       	mov    $0x0,%ebx
 8149d55:	eb 69                	jmp    8149dc0 <_ZN8WongWork9CBossPlay18generateRewardItemEiij23ENUM_DUNGEON_DIFFICULTYjPK8CDungeon+0x4ac>
 8149d57:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8149d5a:	89 04 24             	mov    %eax,(%esp)
 8149d5d:	e8 f2 6e fc ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 8149d62:	89 c3                	mov    %eax,%ebx
 8149d64:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8149d67:	89 04 24             	mov    %eax,(%esp)
 8149d6a:	e8 67 75 fa ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 8149d6f:	89 c7                	mov    %eax,%edi
 8149d71:	0f b6 85 28 ff ff ff 	movzbl -0xd8(%ebp),%eax
 8149d78:	0f b6 f0             	movzbl %al,%esi
 8149d7b:	8b 45 08             	mov    0x8(%ebp),%eax
 8149d7e:	8b 40 04             	mov    0x4(%eax),%eax
 8149d81:	8b 55 0c             	mov    0xc(%ebp),%edx
 8149d84:	89 54 24 04          	mov    %edx,0x4(%esp)
 8149d88:	89 04 24             	mov    %eax,(%esp)
 8149d8b:	e8 d4 b9 ff ff       	call   8145764 <_ZN6CParty8get_userEi>
 8149d90:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8149d94:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8149d98:	89 74 24 04          	mov    %esi,0x4(%esp)
 8149d9c:	89 04 24             	mov    %eax,(%esp)
 8149d9f:	e8 e0 6c 40 00       	call   8550a84 <_ZN10CLuckPoint12UseLuckPointEP5CUseriii>
 8149da4:	bb 01 00 00 00       	mov    $0x1,%ebx
 8149da9:	eb 15                	jmp    8149dc0 <_ZN8WongWork9CBossPlay18generateRewardItemEiij23ENUM_DUNGEON_DIFFICULTYjPK8CDungeon+0x4ac>
 8149dab:	89 d3                	mov    %edx,%ebx
 8149dad:	89 c6                	mov    %eax,%esi
 8149daf:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8149db2:	89 04 24             	mov    %eax,(%esp)
 8149db5:	e8 92 0d 00 00       	call   814ab4c <_ZN8WongWork18stGenerateResult_tD1Ev>
 8149dba:	89 f0                	mov    %esi,%eax
 8149dbc:	89 da                	mov    %ebx,%edx
 8149dbe:	eb 21                	jmp    8149de1 <_ZN8WongWork9CBossPlay18generateRewardItemEiij23ENUM_DUNGEON_DIFFICULTYjPK8CDungeon+0x4cd>
 8149dc0:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8149dc3:	89 04 24             	mov    %eax,(%esp)
 8149dc6:	e8 81 0d 00 00       	call   814ab4c <_ZN8WongWork18stGenerateResult_tD1Ev>
 8149dcb:	85 db                	test   %ebx,%ebx
 8149dcd:	8d 85 dc fe ff ff    	lea    -0x124(%ebp),%eax
 8149dd3:	89 04 24             	mov    %eax,(%esp)
 8149dd6:	e8 15 0d 00 00       	call   814aaf0 <_ZN8WongWork19stGenerateRefData_tD1Ev>
 8149ddb:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 8149ddf:	eb 1e                	jmp    8149dff <_ZN8WongWork9CBossPlay18generateRewardItemEiij23ENUM_DUNGEON_DIFFICULTYjPK8CDungeon+0x4eb>
 8149de1:	89 d3                	mov    %edx,%ebx
 8149de3:	89 c6                	mov    %eax,%esi
 8149de5:	8d 85 dc fe ff ff    	lea    -0x124(%ebp),%eax
 8149deb:	89 04 24             	mov    %eax,(%esp)
 8149dee:	e8 fd 0c 00 00       	call   814aaf0 <_ZN8WongWork19stGenerateRefData_tD1Ev>
 8149df3:	89 f0                	mov    %esi,%eax
 8149df5:	89 da                	mov    %ebx,%edx
 8149df7:	89 04 24             	mov    %eax,(%esp)
 8149dfa:	e8 51 99 99 00       	call   8ae3750 <_Unwind_Resume>
 8149dff:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8149e02:	3b 45 10             	cmp    0x10(%ebp),%eax
 8149e05:	0f 9c c0             	setl   %al
 8149e08:	84 c0                	test   %al,%al
 8149e0a:	0f 85 be fb ff ff    	jne    81499ce <_ZN8WongWork9CBossPlay18generateRewardItemEiij23ENUM_DUNGEON_DIFFICULTYjPK8CDungeon+0xba>
 8149e10:	b8 01 00 00 00       	mov    $0x1,%eax
 8149e15:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8149e18:	83 c4 00             	add    $0x0,%esp
 8149e1b:	5b                   	pop    %ebx
 8149e1c:	5e                   	pop    %esi
 8149e1d:	5f                   	pop    %edi
 8149e1e:	5d                   	pop    %ebp
 8149e1f:	c3                   	ret

```

```c
// WongWork::CBossPlay::generateRewardItem @ 0x8149914

/* WongWork::CBossPlay::generateRewardItem(int, int, unsigned int, ENUM_DUNGEON_DIFFICULTY, unsigned
   int, CDungeon const*) */

undefined4 __thiscall
WongWork::CBossPlay::generateRewardItem
          (CBossPlay *this,int param_1,int param_2,undefined1 param_3,undefined1 param_5,int param_6
          ,CDungeon *param_7)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  CDataManager *pCVar4;
  int iVar5;
  CItemGeneratorMgr *pCVar6;
  int *piVar7;
  Inven_Item *pIVar8;
  undefined4 *puVar9;
  int iVar10;
  CUser *pCVar11;
  stGenerateRefData_t local_128 [52];
  undefined1 local_f4;
  undefined1 local_f3;
  undefined1 local_f2;
  undefined4 local_f0;
  undefined4 local_ec;
  CDungeon *local_e8;
  undefined1 local_dd;
  byte bStack_dc;
  undefined2 uStack_db;
  undefined2 local_d9;
  undefined2 uStack_d7;
  undefined4 local_d5;
  undefined4 local_d1;
  undefined4 local_cd;
  undefined4 local_c9;
  undefined4 local_c5;
  undefined4 local_c1;
  undefined4 local_bd;
  undefined4 local_b9;
  undefined4 local_b5;
  undefined4 local_b1;
  undefined4 local_ad;
  undefined4 local_a9;
  undefined4 local_a5;
  undefined1 local_a1;
  stGenerateResult_t local_a0 [48];
  stGenerateResult_t local_70 [48];
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_40 [4];
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_3c [4];
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_38 [4];
  int local_34;
  int local_30;
  float local_2c;
  int local_28;
  uint local_24;
  CItem *local_20;
  
  *(int *)(this + param_1 * 0x268 + 0x28) = param_2;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0.0;
  uVar3 = CDungeon::get_index(param_7);
  pCVar4 = (CDataManager *)G_CDataManager();
  iVar5 = CDataManager::GetTowerScript(pCVar4,uVar3);
  local_34 = *(int *)(iVar5 + 0xc88);
  uVar3 = CDungeon::get_index(param_7);
  pCVar4 = (CDataManager *)G_CDataManager();
  iVar5 = CDataManager::GetTowerScript(pCVar4,uVar3);
  local_30 = *(int *)(iVar5 + 0xc8c);
  uVar3 = CDungeon::get_index(param_7);
  pCVar4 = (CDataManager *)G_CDataManager();
  iVar5 = CDataManager::GetTowerScript(pCVar4,uVar3);
  local_2c = *(float *)(iVar5 + 0xc94);
  for (local_28 = 0; local_28 < param_2; local_28 = local_28 + 1) {
    stGenerateRefData_t::stGenerateRefData_t(local_128);
                    /* try { // try from 081499e2 to 081499e6 has its CatchHandler @ 08149de1 */
    stGenerateResult_t::stGenerateResult_t(local_70);
                    /* try { // try from 081499ee to 08149a67 has its CatchHandler @ 08149dab */
    local_24 = get_rand_int(1000);
    if ((uint)(local_34 * param_6) < local_24 || local_34 * param_6 - local_24 == 0) {
      if (local_24 <= (uint)(local_30 * param_6) && local_30 * param_6 - local_24 != 0) {
        local_f0 = 0x3f800000;
        local_e8 = param_7;
        local_ec = 0;
        local_f4 = param_3;
        local_f3 = param_5;
                    /* try { // try from 08149be4 to 08149da3 has its CatchHandler @ 08149dab */
        pCVar4 = (CDataManager *)G_CDataManager();
        pCVar6 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar4);
        piVar7 = (int *)CItemGeneratorMgr::getGenerator(pCVar6,2);
        (**(code **)(*piVar7 + 8))(piVar7,local_128,local_70);
        cVar2 = std::vector<Inven_Item,std::allocator<Inven_Item>>::empty();
        if (cVar2 != '\x01') {
          std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
          pIVar8 = (Inven_Item *)
                   __gnu_cxx::
                   __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                   ::operator*(local_3c);
          Inven_Item::setCopy((Inven_Item *)(this + local_28 * 0x3d + param_1 * 0x268 + 0x2c),pIVar8
                             );
          std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
          puVar9 = (undefined4 *)
                   __gnu_cxx::
                   __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                   ::operator*(local_38);
          uVar1 = *puVar9;
          local_dd = (undefined1)uVar1;
          bStack_dc = (byte)((uint)uVar1 >> 8);
          uStack_db = (undefined2)((uint)uVar1 >> 0x10);
          local_d9 = (undefined2)puVar9[1];
          uStack_d7 = (undefined2)((uint)puVar9[1] >> 0x10);
          local_d5 = puVar9[2];
          local_d1 = puVar9[3];
          local_cd = puVar9[4];
          local_c9 = puVar9[5];
          local_c5 = puVar9[6];
          local_c1 = puVar9[7];
          local_bd = puVar9[8];
          local_b9 = puVar9[9];
          local_b5 = puVar9[10];
          local_b1 = puVar9[0xb];
          local_ad = puVar9[0xc];
          local_a9 = puVar9[0xd];
          local_a5 = puVar9[0xe];
          local_a1 = *(undefined1 *)(puVar9 + 0xf);
          iVar5 = CONCAT22(local_d9,uStack_db);
          iVar10 = G_CDataManager();
          local_20 = (CItem *)CItemList::find_item(*(CItemList **)(iVar10 + 0xc),iVar5);
          if (local_20 != (CItem *)0x0) {
            iVar5 = CItem::get_grade(local_20);
            iVar10 = CItem::get_rarity(local_20);
            uVar3 = (uint)bStack_dc;
            pCVar11 = (CUser *)CParty::get_user(*(CParty **)(this + 4),param_1);
            CLuckPoint::UseLuckPoint(pCVar11,uVar3,iVar10,iVar5);
          }
        }
      }
    }
    else {
      local_f4 = param_3;
      local_f3 = param_5;
      local_f2 = CParty::get_member_count(*(CParty **)(this + 4));
      local_f0 = 1;
      local_ec = 0x10001;
      local_e8 = (CDungeon *)0x10001;
      stGenerateResult_t::stGenerateResult_t(local_a0);
                    /* try { // try from 08149a68 to 08149ab9 has its CatchHandler @ 08149b89 */
      pCVar4 = (CDataManager *)G_CDataManager();
      pCVar6 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar4);
      piVar7 = (int *)CItemGeneratorMgr::getGenerator(pCVar6,2);
      (**(code **)(*piVar7 + 0xc))(piVar7,local_128,local_a0);
      std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
      pIVar8 = (Inven_Item *)
               __gnu_cxx::
               __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
               operator*(local_40);
      Inven_Item::setCopy((Inven_Item *)(this + local_28 * 0x3d + param_1 * 0x268 + 0x2c),pIVar8);
      iVar5 = Inven_Item::get_add_info
                        ((Inven_Item *)(this + local_28 * 0x3d + param_1 * 0x268 + 0x2c));
      Inven_Item::set_add_info
                ((Inven_Item *)(this + local_28 * 0x3d + param_1 * 0x268 + 0x2c),
                 (int)ROUND((float)iVar5 * local_2c));
                    /* try { // try from 08149b7f to 08149b83 has its CatchHandler @ 08149dab */
      stGenerateResult_t::~stGenerateResult_t(local_a0);
    }
                    /* try { // try from 08149dc6 to 08149dca has its CatchHandler @ 08149de1 */
    stGenerateResult_t::~stGenerateResult_t(local_70);
    stGenerateRefData_t::~stGenerateRefData_t(local_128);
  }
  return 1;
}

```

---

## getLiveMemberCount

```asm
// === 08149466 WongWork::CBossPlay::getLiveMemberCount  [0x08149466-0x81494a3] ===
 8149466:	55                   	push   %ebp
 8149467:	89 e5                	mov    %esp,%ebp
 8149469:	83 ec 10             	sub    $0x10,%esp
 814946c:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 8149473:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 814947a:	eb 17                	jmp    8149493 <_ZN8WongWork9CBossPlay18getLiveMemberCountEv+0x2d>
 814947c:	8b 45 fc             	mov    -0x4(%ebp),%eax
 814947f:	8b 55 08             	mov    0x8(%ebp),%edx
 8149482:	0f b6 44 02 0d       	movzbl 0xd(%edx,%eax,1),%eax
 8149487:	84 c0                	test   %al,%al
 8149489:	74 04                	je     814948f <_ZN8WongWork9CBossPlay18getLiveMemberCountEv+0x29>
 814948b:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 814948f:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 8149493:	83 7d fc 03          	cmpl   $0x3,-0x4(%ebp)
 8149497:	0f 9e c0             	setle  %al
 814949a:	84 c0                	test   %al,%al
 814949c:	75 de                	jne    814947c <_ZN8WongWork9CBossPlay18getLiveMemberCountEv+0x16>
 814949e:	8b 45 f8             	mov    -0x8(%ebp),%eax
 81494a1:	c9                   	leave
 81494a2:	c3                   	ret
 81494a3:	90                   	nop

```

```c
// WongWork::CBossPlay::getLiveMemberCount @ 0x8149466

/* WongWork::CBossPlay::getLiveMemberCount() */

int __thiscall WongWork::CBossPlay::getLiveMemberCount(CBossPlay *this)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    if (this[local_8 + 0xd] != (CBossPlay)0x0) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}

```

---

## handleDieUser

```asm
// === 081494a4 WongWork::CBossPlay::handleDieUser  [0x081494a4-0x8149723] ===
 81494a4:	55                   	push   %ebp
 81494a5:	89 e5                	mov    %esp,%ebp
 81494a7:	56                   	push   %esi
 81494a8:	53                   	push   %ebx
 81494a9:	83 ec 30             	sub    $0x30,%esp
 81494ac:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81494b3:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81494ba:	e9 4a 02 00 00       	jmp    8149709 <_ZN8WongWork9CBossPlay13handleDieUserEP5CUser+0x265>
 81494bf:	8b 45 08             	mov    0x8(%ebp),%eax
 81494c2:	8b 40 04             	mov    0x4(%eax),%eax
 81494c5:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81494c8:	89 54 24 04          	mov    %edx,0x4(%esp)
 81494cc:	89 04 24             	mov    %eax,(%esp)
 81494cf:	e8 94 c3 ff ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 81494d4:	84 c0                	test   %al,%al
 81494d6:	0f 84 29 02 00 00    	je     8149705 <_ZN8WongWork9CBossPlay13handleDieUserEP5CUser+0x261>
 81494dc:	8b 45 08             	mov    0x8(%ebp),%eax
 81494df:	8b 40 04             	mov    0x4(%eax),%eax
 81494e2:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81494e5:	89 54 24 04          	mov    %edx,0x4(%esp)
 81494e9:	89 04 24             	mov    %eax,(%esp)
 81494ec:	e8 73 c2 ff ff       	call   8145764 <_ZN6CParty8get_userEi>
 81494f1:	3b 45 0c             	cmp    0xc(%ebp),%eax
 81494f4:	0f 94 c0             	sete   %al
 81494f7:	84 c0                	test   %al,%al
 81494f9:	0f 84 06 02 00 00    	je     8149705 <_ZN8WongWork9CBossPlay13handleDieUserEP5CUser+0x261>
 81494ff:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8149502:	89 44 24 04          	mov    %eax,0x4(%esp)
 8149506:	8b 45 08             	mov    0x8(%ebp),%eax
 8149509:	89 04 24             	mov    %eax,(%esp)
 814950c:	e8 71 c1 ff ff       	call   8145682 <_ZN8WongWork9CBossPlay13isMemberAliveEi>
 8149511:	83 f0 01             	xor    $0x1,%eax
 8149514:	84 c0                	test   %al,%al
 8149516:	74 25                	je     814953d <_ZN8WongWork9CBossPlay13handleDieUserEP5CUser+0x99>
 8149518:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 814951f:	00 
 8149520:	c7 44 24 04 2b 00 00 	movl   $0x2b,0x4(%esp)
 8149527:	00 
 8149528:	8b 45 0c             	mov    0xc(%ebp),%eax
 814952b:	89 04 24             	mov    %eax,(%esp)
 814952e:	e8 0f 2a 53 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8149533:	b8 00 00 00 00       	mov    $0x0,%eax
 8149538:	e9 e0 01 00 00       	jmp    814971d <_ZN8WongWork9CBossPlay13handleDieUserEP5CUser+0x279>
 814953d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8149544:	00 
 8149545:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8149548:	89 44 24 04          	mov    %eax,0x4(%esp)
 814954c:	8b 45 08             	mov    0x8(%ebp),%eax
 814954f:	89 04 24             	mov    %eax,(%esp)
 8149552:	e8 8d 12 00 00       	call   814a7e4 <_ZN8WongWork9CBossPlay14setMemberAliveEib>
 8149557:	8d 45 e8             	lea    -0x18(%ebp),%eax
 814955a:	89 04 24             	mov    %eax,(%esp)
 814955d:	e8 ea 47 44 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8149562:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 8149569:	00 
 814956a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8149571:	00 
 8149572:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8149575:	89 04 24             	mov    %eax,(%esp)
 8149578:	e8 7f 23 f8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 814957d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8149580:	89 04 24             	mov    %eax,(%esp)
 8149583:	e8 f4 0d f9 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8149588:	0f b7 c0             	movzwl %ax,%eax
 814958b:	89 44 24 04          	mov    %eax,0x4(%esp)
 814958f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8149592:	89 04 24             	mov    %eax,(%esp)
 8149595:	e8 0a 09 f9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 814959a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81495a1:	00 
 81495a2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81495a5:	89 04 24             	mov    %eax,(%esp)
 81495a8:	e8 73 23 f8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81495ad:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81495b4:	00 
 81495b5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81495b8:	89 04 24             	mov    %eax,(%esp)
 81495bb:	e8 98 23 f8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81495c0:	8b 45 08             	mov    0x8(%ebp),%eax
 81495c3:	8b 40 04             	mov    0x4(%eax),%eax
 81495c6:	8d 55 e8             	lea    -0x18(%ebp),%edx
 81495c9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81495cd:	89 04 24             	mov    %eax,(%esp)
 81495d0:	e8 79 3b 45 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 81495d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81495d8:	89 04 24             	mov    %eax,(%esp)
 81495db:	e8 ac 14 00 00       	call   814aa8c <_ZN5CUser14GetRevivalTimeEv>
 81495e0:	89 c3                	mov    %eax,%ebx
 81495e2:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81495e9:	e8 b0 26 f8 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 81495ee:	39 c3                	cmp    %eax,%ebx
 81495f0:	0f 9f c0             	setg   %al
 81495f3:	84 c0                	test   %al,%al
 81495f5:	0f 84 fd 00 00 00    	je     81496f8 <_ZN8WongWork9CBossPlay13handleDieUserEP5CUser+0x254>
 81495fb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8149602:	00 
 8149603:	8b 45 0c             	mov    0xc(%ebp),%eax
 8149606:	89 04 24             	mov    %eax,(%esp)
 8149609:	e8 6c 14 00 00       	call   814aa7a <_ZN5CUser14SetRevivalTimeEl>
 814960e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8149615:	00 
 8149616:	8b 45 0c             	mov    0xc(%ebp),%eax
 8149619:	89 04 24             	mov    %eax,(%esp)
 814961c:	e8 79 14 00 00       	call   814aa9a <_ZN5CUser19SetUseAPCPotionTimeEl>
 8149621:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8149628:	00 
 8149629:	8b 45 f4             	mov    -0xc(%ebp),%eax
 814962c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8149630:	8b 45 08             	mov    0x8(%ebp),%eax
 8149633:	89 04 24             	mov    %eax,(%esp)
 8149636:	e8 a9 11 00 00       	call   814a7e4 <_ZN8WongWork9CBossPlay14setMemberAliveEib>
 814963b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 814963e:	89 04 24             	mov    %eax,(%esp)
 8149641:	e8 06 47 44 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8149646:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 814964d:	00 
 814964e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8149655:	00 
 8149656:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8149659:	89 04 24             	mov    %eax,(%esp)
 814965c:	e8 9b 22 f8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8149661:	8b 45 0c             	mov    0xc(%ebp),%eax
 8149664:	89 04 24             	mov    %eax,(%esp)
 8149667:	e8 10 0d f9 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 814966c:	0f b7 c0             	movzwl %ax,%eax
 814966f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8149673:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8149676:	89 04 24             	mov    %eax,(%esp)
 8149679:	e8 26 08 f9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 814967e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8149685:	00 
 8149686:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8149689:	89 04 24             	mov    %eax,(%esp)
 814968c:	e8 8f 22 f8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8149691:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8149698:	00 
 8149699:	8d 45 dc             	lea    -0x24(%ebp),%eax
 814969c:	89 04 24             	mov    %eax,(%esp)
 814969f:	e8 b4 22 f8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81496a4:	8b 45 08             	mov    0x8(%ebp),%eax
 81496a7:	8b 40 04             	mov    0x4(%eax),%eax
 81496aa:	8d 55 dc             	lea    -0x24(%ebp),%edx
 81496ad:	89 54 24 04          	mov    %edx,0x4(%esp)
 81496b1:	89 04 24             	mov    %eax,(%esp)
 81496b4:	e8 95 3a 45 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 81496b9:	eb 15                	jmp    81496d0 <_ZN8WongWork9CBossPlay13handleDieUserEP5CUser+0x22c>
 81496bb:	89 d3                	mov    %edx,%ebx
 81496bd:	89 c6                	mov    %eax,%esi
 81496bf:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81496c2:	89 04 24             	mov    %eax,(%esp)
 81496c5:	e8 b6 47 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81496ca:	89 f0                	mov    %esi,%eax
 81496cc:	89 da                	mov    %ebx,%edx
 81496ce:	eb 0d                	jmp    81496dd <_ZN8WongWork9CBossPlay13handleDieUserEP5CUser+0x239>
 81496d0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81496d3:	89 04 24             	mov    %eax,(%esp)
 81496d6:	e8 a5 47 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81496db:	eb 1b                	jmp    81496f8 <_ZN8WongWork9CBossPlay13handleDieUserEP5CUser+0x254>
 81496dd:	89 d3                	mov    %edx,%ebx
 81496df:	89 c6                	mov    %eax,%esi
 81496e1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81496e4:	89 04 24             	mov    %eax,(%esp)
 81496e7:	e8 94 47 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81496ec:	89 f0                	mov    %esi,%eax
 81496ee:	89 da                	mov    %ebx,%edx
 81496f0:	89 04 24             	mov    %eax,(%esp)
 81496f3:	e8 58 a0 99 00       	call   8ae3750 <_Unwind_Resume>
 81496f8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81496fb:	89 04 24             	mov    %eax,(%esp)
 81496fe:	e8 7d 47 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8149703:	eb 13                	jmp    8149718 <_ZN8WongWork9CBossPlay13handleDieUserEP5CUser+0x274>
 8149705:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8149709:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 814970d:	0f 9e c0             	setle  %al
 8149710:	84 c0                	test   %al,%al
 8149712:	0f 85 a7 fd ff ff    	jne    81494bf <_ZN8WongWork9CBossPlay13handleDieUserEP5CUser+0x1b>
 8149718:	b8 01 00 00 00       	mov    $0x1,%eax
 814971d:	83 c4 30             	add    $0x30,%esp
 8149720:	5b                   	pop    %ebx
 8149721:	5e                   	pop    %esi
 8149722:	5d                   	pop    %ebp
 8149723:	c3                   	ret

```

```c
// WongWork::CBossPlay::handleDieUser @ 0x81494a4

/* WongWork::CBossPlay::handleDieUser(CUser*) */

undefined4 __thiscall WongWork::CBossPlay::handleDieUser(CBossPlay *this,CUser *param_1)

{
  char cVar1;
  CUser *pCVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  PacketGuard local_28 [12];
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (3 < local_10) {
      return 1;
    }
    cVar1 = CParty::checkValidUser(*(CParty **)(this + 4),local_10);
    if ((cVar1 != '\0') &&
       (pCVar2 = (CUser *)CParty::get_user(*(CParty **)(this + 4),local_10), pCVar2 == param_1))
    break;
    local_10 = local_10 + 1;
  }
  cVar1 = isMemberAlive(this,local_10);
  if (cVar1 == '\x01') {
    setMemberAlive(this,local_10,false);
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08149578 to 08149645 has its CatchHandler @ 081496dd */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x20);
    uVar3 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar3 & 0xffff);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CParty::send_to_party(*(CParty **)(this + 4),local_1c);
    iVar4 = CUser::GetRevivalTime(param_1);
    iVar5 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    if (iVar5 < iVar4) {
      CUser::SetRevivalTime(param_1,0);
      CUser::SetUseAPCPotionTime(param_1,0);
      setMemberAlive(this,local_10,true);
      PacketGuard::PacketGuard(local_28);
                    /* try { // try from 0814965c to 081496b8 has its CatchHandler @ 081496bb */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x20);
      uVar3 = CUser::get_unique_id(param_1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,uVar3 & 0xffff);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,2);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
      CParty::send_to_party(*(CParty **)(this + 4),local_28);
                    /* try { // try from 081496d6 to 081496da has its CatchHandler @ 081496dd */
      PacketGuard::~PacketGuard(local_28);
    }
    PacketGuard::~PacketGuard(local_1c);
    return 1;
  }
  CUser::SendCmdErrorPacket(param_1,0x2b,0x12);
  return 0;
}

```

---

## handleLeaveUser

```asm
// === 08149724 WongWork::CBossPlay::handleLeaveUser  [0x08149724-0x8149913] ===
 8149724:	55                   	push   %ebp
 8149725:	89 e5                	mov    %esp,%ebp
 8149727:	56                   	push   %esi
 8149728:	53                   	push   %ebx
 8149729:	83 ec 30             	sub    $0x30,%esp
 814972c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8149733:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 814973a:	e9 e9 00 00 00       	jmp    8149828 <_ZN8WongWork9CBossPlay15handleLeaveUserEP5CUser+0x104>
 814973f:	8b 45 08             	mov    0x8(%ebp),%eax
 8149742:	8b 40 04             	mov    0x4(%eax),%eax
 8149745:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8149748:	89 54 24 04          	mov    %edx,0x4(%esp)
 814974c:	89 04 24             	mov    %eax,(%esp)
 814974f:	e8 14 c1 ff ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8149754:	84 c0                	test   %al,%al
 8149756:	0f 84 c8 00 00 00    	je     8149824 <_ZN8WongWork9CBossPlay15handleLeaveUserEP5CUser+0x100>
 814975c:	8b 45 08             	mov    0x8(%ebp),%eax
 814975f:	8b 40 04             	mov    0x4(%eax),%eax
 8149762:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8149765:	89 54 24 04          	mov    %edx,0x4(%esp)
 8149769:	89 04 24             	mov    %eax,(%esp)
 814976c:	e8 f3 bf ff ff       	call   8145764 <_ZN6CParty8get_userEi>
 8149771:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8149774:	0f 94 c0             	sete   %al
 8149777:	84 c0                	test   %al,%al
 8149779:	0f 84 a5 00 00 00    	je     8149824 <_ZN8WongWork9CBossPlay15handleLeaveUserEP5CUser+0x100>
 814977f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8149782:	8b 45 08             	mov    0x8(%ebp),%eax
 8149785:	81 c2 74 02 00 00    	add    $0x274,%edx
 814978b:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 814978f:	85 c0                	test   %eax,%eax
 8149791:	75 17                	jne    81497aa <_ZN8WongWork9CBossPlay15handleLeaveUserEP5CUser+0x86>
 8149793:	8b 45 0c             	mov    0xc(%ebp),%eax
 8149796:	89 04 24             	mov    %eax,(%esp)
 8149799:	e8 ee 0b f9 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 814979e:	83 f8 0c             	cmp    $0xc,%eax
 81497a1:	75 07                	jne    81497aa <_ZN8WongWork9CBossPlay15handleLeaveUserEP5CUser+0x86>
 81497a3:	b8 01 00 00 00       	mov    $0x1,%eax
 81497a8:	eb 05                	jmp    81497af <_ZN8WongWork9CBossPlay15handleLeaveUserEP5CUser+0x8b>
 81497aa:	b8 00 00 00 00       	mov    $0x0,%eax
 81497af:	84 c0                	test   %al,%al
 81497b1:	74 3a                	je     81497ed <_ZN8WongWork9CBossPlay15handleLeaveUserEP5CUser+0xc9>
 81497b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81497b6:	89 04 24             	mov    %eax,(%esp)
 81497b9:	e8 9c 01 fb ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81497be:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81497c5:	00 
 81497c6:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81497cd:	00 
 81497ce:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81497d5:	00 
 81497d6:	c7 44 24 08 3a 01 00 	movl   $0x13a,0x8(%esp)
 81497dd:	00 
 81497de:	8b 55 0c             	mov    0xc(%ebp),%edx
 81497e1:	89 54 24 04          	mov    %edx,0x4(%esp)
 81497e5:	89 04 24             	mov    %eax,(%esp)
 81497e8:	e8 91 f4 fa ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81497ed:	8b 45 08             	mov    0x8(%ebp),%eax
 81497f0:	8b 40 04             	mov    0x4(%eax),%eax
 81497f3:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 81497fa:	00 
 81497fb:	8b 55 0c             	mov    0xc(%ebp),%edx
 81497fe:	89 54 24 04          	mov    %edx,0x4(%esp)
 8149802:	89 04 24             	mov    %eax,(%esp)
 8149805:	e8 0a 29 45 00       	call   859c114 <_ZN6CParty10leave_userEP5CUser20ENUM_PARTY_INFO_TYPE>
 814980a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8149811:	00 
 8149812:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8149815:	89 44 24 04          	mov    %eax,0x4(%esp)
 8149819:	8b 45 08             	mov    0x8(%ebp),%eax
 814981c:	89 04 24             	mov    %eax,(%esp)
 814981f:	e8 c0 0f 00 00       	call   814a7e4 <_ZN8WongWork9CBossPlay14setMemberAliveEib>
 8149824:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8149828:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 814982c:	0f 9e c0             	setle  %al
 814982f:	84 c0                	test   %al,%al
 8149831:	0f 85 08 ff ff ff    	jne    814973f <_ZN8WongWork9CBossPlay15handleLeaveUserEP5CUser+0x1b>
 8149837:	e8 6b 0b f9 ff       	call   80da3a7 <_Z11G_GameWorldv>
 814983c:	8b 55 0c             	mov    0xc(%ebp),%edx
 814983f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8149843:	89 04 24             	mov    %eax,(%esp)
 8149846:	e8 cb d1 57 00       	call   86c6a16 <_ZN9GameWorld16out_from_dungeonEP5CUser>
 814984b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 814984e:	89 04 24             	mov    %eax,(%esp)
 8149851:	e8 f6 44 44 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8149856:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 814985d:	00 
 814985e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8149865:	00 
 8149866:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8149869:	89 04 24             	mov    %eax,(%esp)
 814986c:	e8 8b 20 f8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8149871:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8149878:	00 
 8149879:	8d 45 e8             	lea    -0x18(%ebp),%eax
 814987c:	89 04 24             	mov    %eax,(%esp)
 814987f:	e8 9c 20 f8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8149884:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814988b:	00 
 814988c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 814988f:	89 04 24             	mov    %eax,(%esp)
 8149892:	e8 0d 06 f9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8149897:	8d 45 e8             	lea    -0x18(%ebp),%eax
 814989a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81498a1:	00 
 81498a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81498a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81498a9:	89 04 24             	mov    %eax,(%esp)
 81498ac:	e8 9d 0b 51 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 81498b1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81498b8:	00 
 81498b9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81498bc:	89 04 24             	mov    %eax,(%esp)
 81498bf:	e8 94 20 f8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81498c4:	e8 de 0a f9 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81498c9:	8b 55 0c             	mov    0xc(%ebp),%edx
 81498cc:	89 54 24 08          	mov    %edx,0x8(%esp)
 81498d0:	8d 55 e8             	lea    -0x18(%ebp),%edx
 81498d3:	89 54 24 04          	mov    %edx,0x4(%esp)
 81498d7:	89 04 24             	mov    %eax,(%esp)
 81498da:	e8 7d b0 fe ff       	call   813495c <_ZN9GameWorld8send_allER11PacketGuardP5CUser>
 81498df:	bb 01 00 00 00       	mov    $0x1,%ebx
 81498e4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81498e7:	89 04 24             	mov    %eax,(%esp)
 81498ea:	e8 91 45 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81498ef:	89 d8                	mov    %ebx,%eax
 81498f1:	83 c4 30             	add    $0x30,%esp
 81498f4:	5b                   	pop    %ebx
 81498f5:	5e                   	pop    %esi
 81498f6:	5d                   	pop    %ebp
 81498f7:	c3                   	ret
 81498f8:	89 d3                	mov    %edx,%ebx
 81498fa:	89 c6                	mov    %eax,%esi
 81498fc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81498ff:	89 04 24             	mov    %eax,(%esp)
 8149902:	e8 79 45 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8149907:	89 f0                	mov    %esi,%eax
 8149909:	89 da                	mov    %ebx,%edx
 814990b:	89 04 24             	mov    %eax,(%esp)
 814990e:	e8 3d 9e 99 00       	call   8ae3750 <_Unwind_Resume>
 8149913:	90                   	nop

```

```c
// WongWork::CBossPlay::handleLeaveUser @ 0x8149724

/* WongWork::CBossPlay::handleLeaveUser(CUser*) */

undefined4 __thiscall WongWork::CBossPlay::handleLeaveUser(CBossPlay *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  CUser *pCVar3;
  int iVar4;
  CHackAnalyzer *pCVar5;
  GameWorld *pGVar6;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = 0;
  do {
    if (3 < local_10) {
      pGVar6 = (GameWorld *)G_GameWorld();
      GameWorld::out_from_dungeon(pGVar6,param_1);
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0814986c to 081498de has its CatchHandler @ 081498f8 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,1);
      CUser::make_basic_info(param_1,(char *)local_1c,'\0');
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      pGVar6 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar6,local_1c,param_1);
      PacketGuard::~PacketGuard(local_1c);
      return 1;
    }
    cVar2 = CParty::checkValidUser(*(CParty **)(this + 4),local_10);
    if (cVar2 != '\0') {
      pCVar3 = (CUser *)CParty::get_user(*(CParty **)(this + 4),local_10);
      if (pCVar3 == param_1) {
        if (*(int *)(this + (local_10 + 0x274) * 4 + 8) == 0) {
          iVar4 = CUser::get_state(param_1);
          if (iVar4 != 0xc) goto LAB_081497aa;
          bVar1 = true;
        }
        else {
LAB_081497aa:
          bVar1 = false;
        }
        if (bVar1) {
          pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
          CHackAnalyzer::addServerHackCnt(pCVar5,param_1,0x13a,1,0,0);
        }
        CParty::leave_user(*(CParty **)(this + 4),param_1,2);
        setMemberAlive(this,local_10,false);
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}

```

---

## reset

```asm
// === 08149120 WongWork::CBossPlay::reset  [0x08149120-0x814926d] ===
 8149120:	55                   	push   %ebp
 8149121:	89 e5                	mov    %esp,%ebp
 8149123:	83 ec 28             	sub    $0x28,%esp
 8149126:	8b 45 08             	mov    0x8(%ebp),%eax
 8149129:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8149130:	8b 45 08             	mov    0x8(%ebp),%eax
 8149133:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 814913a:	8b 45 08             	mov    0x8(%ebp),%eax
 814913d:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
 8149141:	8b 45 08             	mov    0x8(%ebp),%eax
 8149144:	83 c0 0d             	add    $0xd,%eax
 8149147:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 814914e:	00 
 814914f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8149156:	00 
 8149157:	89 04 24             	mov    %eax,(%esp)
 814915a:	e8 61 4b f3 ff       	call   807dcc0 <memset@plt>
 814915f:	8b 45 08             	mov    0x8(%ebp),%eax
 8149162:	83 c0 11             	add    $0x11,%eax
 8149165:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 814916c:	00 
 814916d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8149174:	00 
 8149175:	89 04 24             	mov    %eax,(%esp)
 8149178:	e8 43 4b f3 ff       	call   807dcc0 <memset@plt>
 814917d:	8b 45 08             	mov    0x8(%ebp),%eax
 8149180:	83 c0 18             	add    $0x18,%eax
 8149183:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 814918a:	00 
 814918b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8149192:	00 
 8149193:	89 04 24             	mov    %eax,(%esp)
 8149196:	e8 25 4b f3 ff       	call   807dcc0 <memset@plt>
 814919b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81491a2:	eb 78                	jmp    814921c <_ZN8WongWork9CBossPlay5resetEv+0xfc>
 81491a4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81491ab:	eb 60                	jmp    814920d <_ZN8WongWork9CBossPlay5resetEv+0xed>
 81491ad:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81491b0:	8b 55 08             	mov    0x8(%ebp),%edx
 81491b3:	69 c0 68 02 00 00    	imul   $0x268,%eax,%eax
 81491b9:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81491bc:	83 c0 28             	add    $0x28,%eax
 81491bf:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 81491c5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81491c8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81491cb:	6b d2 3d             	imul   $0x3d,%edx,%edx
 81491ce:	69 c0 68 02 00 00    	imul   $0x268,%eax,%eax
 81491d4:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81491d7:	83 c0 20             	add    $0x20,%eax
 81491da:	03 45 08             	add    0x8(%ebp),%eax
 81491dd:	83 c0 0c             	add    $0xc,%eax
 81491e0:	89 04 24             	mov    %eax,(%esp)
 81491e3:	e8 f0 25 f8 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 81491e8:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81491eb:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 81491ee:	8b 45 08             	mov    0x8(%ebp),%eax
 81491f1:	6b c9 3d             	imul   $0x3d,%ecx,%ecx
 81491f4:	69 d2 68 02 00 00    	imul   $0x268,%edx,%edx
 81491fa:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 81491fd:	01 d0                	add    %edx,%eax
 81491ff:	83 c0 20             	add    $0x20,%eax
 8149202:	c7 40 0e ff ff ff ff 	movl   $0xffffffff,0xe(%eax)
 8149209:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 814920d:	83 7d f4 09          	cmpl   $0x9,-0xc(%ebp)
 8149211:	0f 9e c0             	setle  %al
 8149214:	84 c0                	test   %al,%al
 8149216:	75 95                	jne    81491ad <_ZN8WongWork9CBossPlay5resetEv+0x8d>
 8149218:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 814921c:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 8149220:	0f 9e c0             	setle  %al
 8149223:	84 c0                	test   %al,%al
 8149225:	0f 85 79 ff ff ff    	jne    81491a4 <_ZN8WongWork9CBossPlay5resetEv+0x84>
 814922b:	8b 45 08             	mov    0x8(%ebp),%eax
 814922e:	05 c8 09 00 00       	add    $0x9c8,%eax
 8149233:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 814923a:	00 
 814923b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8149242:	00 
 8149243:	89 04 24             	mov    %eax,(%esp)
 8149246:	e8 75 4a f3 ff       	call   807dcc0 <memset@plt>
 814924b:	8b 45 08             	mov    0x8(%ebp),%eax
 814924e:	05 d8 09 00 00       	add    $0x9d8,%eax
 8149253:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 814925a:	00 
 814925b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8149262:	00 
 8149263:	89 04 24             	mov    %eax,(%esp)
 8149266:	e8 55 4a f3 ff       	call   807dcc0 <memset@plt>
 814926b:	c9                   	leave
 814926c:	c3                   	ret
 814926d:	90                   	nop

```

```c
// WongWork::CBossPlay::reset @ 0x8149120

/* WongWork::CBossPlay::reset() */

void __thiscall WongWork::CBossPlay::reset(CBossPlay *this)

{
  int local_14;
  int local_10;
  
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0xc] = (CBossPlay)0x0;
  memset(this + 0xd,0,4);
  memset(this + 0x11,0,4);
  memset(this + 0x18,0,0x10);
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    for (local_10 = 0; local_10 < 10; local_10 = local_10 + 1) {
      *(undefined4 *)(this + local_14 * 0x268 + 0x28) = 0;
      Inven_Item::reset((Inven_Item *)(this + local_10 * 0x3d + local_14 * 0x268 + 0x2c));
      *(undefined4 *)(this + local_10 * 0x3d + local_14 * 0x268 + 0x2e) = 0xffffffff;
    }
  }
  memset(this + 0x9c8,0,0x10);
  memset(this + 0x9d8,0,0x10);
  return;
}

```

