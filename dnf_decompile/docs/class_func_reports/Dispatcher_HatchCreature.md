# Dispatcher_HatchCreature

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081cd5aa Dispatcher_HatchCreature::check_error  [0x081cd5aa-0x81cd641] ===
 81cd5aa:	55                   	push   %ebp
 81cd5ab:	89 e5                	mov    %esp,%ebp
 81cd5ad:	53                   	push   %ebx
 81cd5ae:	83 ec 24             	sub    $0x24,%esp
 81cd5b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cd5b4:	89 04 24             	mov    %eax,(%esp)
 81cd5b7:	e8 76 2e f5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81cd5bc:	85 c0                	test   %eax,%eax
 81cd5be:	0f 94 c0             	sete   %al
 81cd5c1:	84 c0                	test   %al,%al
 81cd5c3:	74 07                	je     81cd5cc <_ZN24Dispatcher_HatchCreature11check_errorEP5CUserR8MSG_BASE+0x22>
 81cd5c5:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81cd5ca:	eb 6f                	jmp    81cd63b <_ZN24Dispatcher_HatchCreature11check_errorEP5CUserR8MSG_BASE+0x91>
 81cd5cc:	8b 45 10             	mov    0x10(%ebp),%eax
 81cd5cf:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81cd5d2:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81cd5d7:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 81cd5de:	00 
 81cd5df:	8b 55 0c             	mov    0xc(%ebp),%edx
 81cd5e2:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cd5e6:	89 04 24             	mov    %eax,(%esp)
 81cd5e9:	e8 14 b4 0b 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 81cd5ee:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cd5f1:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81cd5f5:	74 05                	je     81cd5fc <_ZN24Dispatcher_HatchCreature11check_errorEP5CUserR8MSG_BASE+0x52>
 81cd5f7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cd5fa:	eb 3f                	jmp    81cd63b <_ZN24Dispatcher_HatchCreature11check_errorEP5CUserR8MSG_BASE+0x91>
 81cd5fc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cd5ff:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81cd603:	0f bf d8             	movswl %ax,%ebx
 81cd606:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cd609:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81cd60d:	0f b6 c0             	movzbl %al,%eax
 81cd610:	89 04 24             	mov    %eax,(%esp)
 81cd613:	e8 2d a2 f2 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81cd618:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81cd61c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cd620:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cd623:	89 04 24             	mov    %eax,(%esp)
 81cd626:	e8 17 93 47 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 81cd62b:	84 c0                	test   %al,%al
 81cd62d:	74 07                	je     81cd636 <_ZN24Dispatcher_HatchCreature11check_errorEP5CUserR8MSG_BASE+0x8c>
 81cd62f:	b8 d5 00 00 00       	mov    $0xd5,%eax
 81cd634:	eb 05                	jmp    81cd63b <_ZN24Dispatcher_HatchCreature11check_errorEP5CUserR8MSG_BASE+0x91>
 81cd636:	b8 00 00 00 00       	mov    $0x0,%eax
 81cd63b:	83 c4 24             	add    $0x24,%esp
 81cd63e:	5b                   	pop    %ebx
 81cd63f:	5d                   	pop    %ebp
 81cd640:	c3                   	ret
 81cd641:	90                   	nop

```

```c
// Dispatcher_HatchCreature::check_error @ 0x81cd5aa

/* Dispatcher_HatchCreature::check_error(CUser*, MSG_BASE&) */

int __thiscall
Dispatcher_HatchCreature::check_error
          (Dispatcher_HatchCreature *this,CUser *param_1,MSG_BASE *param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar3 == 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x14);
    if (iVar3 == 0) {
      sVar1 = *(short *)(param_2 + 0xe);
      iVar3 = GetInvenTypeFromItemSpace(param_2[0xd]);
      cVar2 = CUser::CheckItemLock(param_1,iVar3,(int)sVar1);
      if (cVar2 == '\0') {
        iVar3 = 0;
      }
      else {
        iVar3 = 0xd5;
      }
    }
  }
  return iVar3;
}

```

---

## process

```asm
// === 081cd446 Dispatcher_HatchCreature::process  [0x081cd446-0x81cd571] ===
 81cd446:	55                   	push   %ebp
 81cd447:	89 e5                	mov    %esp,%ebp
 81cd449:	56                   	push   %esi
 81cd44a:	53                   	push   %ebx
 81cd44b:	83 ec 20             	sub    $0x20,%esp
 81cd44e:	8b 45 14             	mov    0x14(%ebp),%eax
 81cd451:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81cd454:	8b 45 10             	mov    0x10(%ebp),%eax
 81cd457:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cd45b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cd45e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cd462:	8b 45 08             	mov    0x8(%ebp),%eax
 81cd465:	89 04 24             	mov    %eax,(%esp)
 81cd468:	e8 3d 01 00 00       	call   81cd5aa <_ZN24Dispatcher_HatchCreature11check_errorEP5CUserR8MSG_BASE>
 81cd46d:	89 c2                	mov    %eax,%edx
 81cd46f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81cd472:	89 50 04             	mov    %edx,0x4(%eax)
 81cd475:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81cd478:	8b 40 04             	mov    0x4(%eax),%eax
 81cd47b:	85 c0                	test   %eax,%eax
 81cd47d:	7e 0a                	jle    81cd489 <_ZN24Dispatcher_HatchCreature7processEP5CUserR8MSG_BASER9ParamBase+0x43>
 81cd47f:	b8 00 00 00 00       	mov    $0x0,%eax
 81cd484:	e9 e2 00 00 00       	jmp    81cd56b <_ZN24Dispatcher_HatchCreature7processEP5CUserR8MSG_BASER9ParamBase+0x125>
 81cd489:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81cd48c:	8b 40 04             	mov    0x4(%eax),%eax
 81cd48f:	85 c0                	test   %eax,%eax
 81cd491:	79 32                	jns    81cd4c5 <_ZN24Dispatcher_HatchCreature7processEP5CUserR8MSG_BASER9ParamBase+0x7f>
 81cd493:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cd496:	89 04 24             	mov    %eax,(%esp)
 81cd499:	e8 d0 ce f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81cd49e:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81cd4a1:	8b 52 04             	mov    0x4(%edx),%edx
 81cd4a4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cd4a8:	89 54 24 08          	mov    %edx,0x8(%esp)
 81cd4ac:	c7 44 24 04 00 49 bd 	movl   $0x8bd4900,0x4(%esp)
 81cd4b3:	08 
 81cd4b4:	c7 04 24 2c 25 00 00 	movl   $0x252c,(%esp)
 81cd4bb:	e8 17 34 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cd4c0:	e9 a6 00 00 00       	jmp    81cd56b <_ZN24Dispatcher_HatchCreature7processEP5CUserR8MSG_BASER9ParamBase+0x125>
 81cd4c5:	8b 45 10             	mov    0x10(%ebp),%eax
 81cd4c8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81cd4cb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cd4ce:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81cd4d2:	0f bf f0             	movswl %ax,%esi
 81cd4d5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cd4d8:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81cd4dc:	0f b6 c0             	movzbl %al,%eax
 81cd4df:	89 04 24             	mov    %eax,(%esp)
 81cd4e2:	e8 5e a3 f2 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81cd4e7:	89 c3                	mov    %eax,%ebx
 81cd4e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cd4ec:	89 04 24             	mov    %eax,(%esp)
 81cd4ef:	e8 d6 2e fb ff       	call   81803ca <_ZNK15CUserCharacInfo21getCurCharacInvenRefREv>
 81cd4f4:	89 74 24 08          	mov    %esi,0x8(%esp)
 81cd4f8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81cd4fc:	89 04 24             	mov    %eax,(%esp)
 81cd4ff:	e8 da ec 32 00       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 81cd504:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cd507:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81cd50b:	75 2d                	jne    81cd53a <_ZN24Dispatcher_HatchCreature7processEP5CUserR8MSG_BASER9ParamBase+0xf4>
 81cd50d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cd510:	89 04 24             	mov    %eax,(%esp)
 81cd513:	e8 56 ce f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81cd518:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cd51c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cd523:	00 
 81cd524:	c7 44 24 04 00 49 bd 	movl   $0x8bd4900,0x4(%esp)
 81cd52b:	08 
 81cd52c:	c7 04 24 33 25 00 00 	movl   $0x2533,(%esp)
 81cd533:	e8 9f 33 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cd538:	eb 31                	jmp    81cd56b <_ZN24Dispatcher_HatchCreature7processEP5CUserR8MSG_BASER9ParamBase+0x125>
 81cd53a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cd53d:	89 04 24             	mov    %eax,(%esp)
 81cd540:	e8 f5 a2 f2 ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 81cd545:	89 c3                	mov    %eax,%ebx
 81cd547:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cd54a:	89 04 24             	mov    %eax,(%esp)
 81cd54d:	e8 3c cd f0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81cd552:	89 04 24             	mov    %eax,(%esp)
 81cd555:	e8 0e 00 f1 ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 81cd55a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81cd55e:	89 04 24             	mov    %eax,(%esp)
 81cd561:	e8 3a ca 16 00       	call   8339fa0 <_ZN13user_creature12CCreatureMgr5HatchEi>
 81cd566:	b8 00 00 00 00       	mov    $0x0,%eax
 81cd56b:	83 c4 20             	add    $0x20,%esp
 81cd56e:	5b                   	pop    %ebx
 81cd56f:	5e                   	pop    %esi
 81cd570:	5d                   	pop    %ebp
 81cd571:	c3                   	ret

```

```c
// Dispatcher_HatchCreature::process @ 0x81cd446

/* Dispatcher_HatchCreature::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_HatchCreature::process
          (Dispatcher_HatchCreature *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  CInventory *pCVar5;
  Inven_Item *this_00;
  
  uVar2 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar2;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar3 = CUser::get_acc_id(param_1);
      uVar2 = LineFunc(0x252c,
                       "virtual int Dispatcher_HatchCreature::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),uVar3);
    }
    else {
      sVar1 = *(short *)(param_2 + 0xe);
      iVar4 = GetInvenTypeFromItemSpace(param_2[0xd]);
      pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)param_1);
      this_00 = (Inven_Item *)CInventory::GetInvenRef(pCVar5,iVar4,(int)sVar1);
      if (this_00 == (Inven_Item *)0x0) {
        uVar3 = CUser::get_acc_id(param_1);
        uVar2 = LineFunc(0x2533,
                         "virtual int Dispatcher_HatchCreature::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0,uVar3);
      }
      else {
        Inven_Item::get_add_info(this_00);
        pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        iVar4 = CInventory::GetCreatureMgrW(pCVar5);
        user_creature::CCreatureMgr::Hatch(iVar4);
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## read

```asm
// === 081cd3ae Dispatcher_HatchCreature::read  [0x081cd3ae-0x81cd445] ===
 81cd3ae:	55                   	push   %ebp
 81cd3af:	89 e5                	mov    %esp,%ebp
 81cd3b1:	83 ec 28             	sub    $0x28,%esp
 81cd3b4:	8b 45 10             	mov    0x10(%ebp),%eax
 81cd3b7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cd3ba:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cd3bd:	83 c0 0d             	add    $0xd,%eax
 81cd3c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cd3c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cd3c7:	89 04 24             	mov    %eax,(%esp)
 81cd3ca:	e8 a1 fb 3b 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81cd3cf:	83 f0 01             	xor    $0x1,%eax
 81cd3d2:	84 c0                	test   %al,%al
 81cd3d4:	74 26                	je     81cd3fc <_ZN24Dispatcher_HatchCreature4readER9PacketBufR8MSG_BASE+0x4e>
 81cd3d6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cd3dd:	00 
 81cd3de:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cd3e5:	00 
 81cd3e6:	c7 44 24 04 60 49 bd 	movl   $0x8bd4960,0x4(%esp)
 81cd3ed:	08 
 81cd3ee:	c7 04 24 18 25 00 00 	movl   $0x2518,(%esp)
 81cd3f5:	e8 dd 34 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cd3fa:	eb 47                	jmp    81cd443 <_ZN24Dispatcher_HatchCreature4readER9PacketBufR8MSG_BASE+0x95>
 81cd3fc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cd3ff:	83 c0 0e             	add    $0xe,%eax
 81cd402:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cd406:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cd409:	89 04 24             	mov    %eax,(%esp)
 81cd40c:	e8 af fb 3b 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81cd411:	83 f0 01             	xor    $0x1,%eax
 81cd414:	84 c0                	test   %al,%al
 81cd416:	74 26                	je     81cd43e <_ZN24Dispatcher_HatchCreature4readER9PacketBufR8MSG_BASE+0x90>
 81cd418:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cd41f:	00 
 81cd420:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cd427:	00 
 81cd428:	c7 44 24 04 60 49 bd 	movl   $0x8bd4960,0x4(%esp)
 81cd42f:	08 
 81cd430:	c7 04 24 1b 25 00 00 	movl   $0x251b,(%esp)
 81cd437:	e8 9b 34 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cd43c:	eb 05                	jmp    81cd443 <_ZN24Dispatcher_HatchCreature4readER9PacketBufR8MSG_BASE+0x95>
 81cd43e:	b8 00 00 00 00       	mov    $0x0,%eax
 81cd443:	c9                   	leave
 81cd444:	c3                   	ret
 81cd445:	90                   	nop

```

```c
// Dispatcher_HatchCreature::read @ 0x81cd3ae

/* Dispatcher_HatchCreature::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_HatchCreature::read(Dispatcher_HatchCreature *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x251b,"virtual int Dispatcher_HatchCreature::read(PacketBuf&, MSG_BASE&)",0,
                       0);
    }
  }
  else {
    uVar2 = LineFunc(0x2518,"virtual int Dispatcher_HatchCreature::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}

```

---

## send

```asm
// === 081cd572 Dispatcher_HatchCreature::send  [0x081cd572-0x81cd5a9] ===
 81cd572:	55                   	push   %ebp
 81cd573:	89 e5                	mov    %esp,%ebp
 81cd575:	83 ec 28             	sub    $0x28,%esp
 81cd578:	8b 45 10             	mov    0x10(%ebp),%eax
 81cd57b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cd57e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cd581:	8b 40 04             	mov    0x4(%eax),%eax
 81cd584:	85 c0                	test   %eax,%eax
 81cd586:	74 20                	je     81cd5a8 <_ZN24Dispatcher_HatchCreature4sendEP5CUserR9ParamBase+0x36>
 81cd588:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cd58b:	8b 40 04             	mov    0x4(%eax),%eax
 81cd58e:	0f b6 c0             	movzbl %al,%eax
 81cd591:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cd595:	c7 44 24 04 69 00 00 	movl   $0x69,0x4(%esp)
 81cd59c:	00 
 81cd59d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cd5a0:	89 04 24             	mov    %eax,(%esp)
 81cd5a3:	e8 9a e9 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81cd5a8:	c9                   	leave
 81cd5a9:	c3                   	ret

```

```c
// Dispatcher_HatchCreature::send @ 0x81cd572

/* Dispatcher_HatchCreature::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_HatchCreature::send(Dispatcher_HatchCreature *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    CUser::SendCmdErrorPacket(param_1,0x69,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

