# DisPatcher_SetArea

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081c93e8 DisPatcher_SetArea::check_error  [0x081c93e8-0x81c951b] ===
 81c93e8:	55                   	push   %ebp
 81c93e9:	89 e5                	mov    %esp,%ebp
 81c93eb:	53                   	push   %ebx
 81c93ec:	83 ec 24             	sub    $0x24,%esp
 81c93ef:	8b 45 14             	mov    0x14(%ebp),%eax
 81c93f2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81c93f5:	8b 45 10             	mov    0x10(%ebp),%eax
 81c93f8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c93fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c93fe:	89 04 24             	mov    %eax,(%esp)
 81c9401:	e8 86 0f f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c9406:	83 f8 03             	cmp    $0x3,%eax
 81c9409:	0f 95 c0             	setne  %al
 81c940c:	84 c0                	test   %al,%al
 81c940e:	74 0a                	je     81c941a <_ZN18DisPatcher_SetArea11check_errorEP5CUserR8MSG_BASER9ParamBase+0x32>
 81c9410:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81c9415:	e9 fb 00 00 00       	jmp    81c9515 <_ZN18DisPatcher_SetArea11check_errorEP5CUserR8MSG_BASER9ParamBase+0x12d>
 81c941a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c941d:	89 04 24             	mov    %eax,(%esp)
 81c9420:	e8 f9 e3 47 00       	call   864781e <_ZN15CUserCharacInfo19IsBusyDisjointStoreEv>
 81c9425:	84 c0                	test   %al,%al
 81c9427:	74 17                	je     81c9440 <_ZN18DisPatcher_SetArea11check_errorEP5CUserR8MSG_BASER9ParamBase+0x58>
 81c9429:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c942c:	0f b6 50 0d          	movzbl 0xd(%eax),%edx
 81c9430:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c9433:	88 50 08             	mov    %dl,0x8(%eax)
 81c9436:	b8 bf 00 00 00       	mov    $0xbf,%eax
 81c943b:	e9 d5 00 00 00       	jmp    81c9515 <_ZN18DisPatcher_SetArea11check_errorEP5CUserR8MSG_BASER9ParamBase+0x12d>
 81c9440:	e8 a3 b7 3f 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 81c9445:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c9448:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c944c:	89 04 24             	mov    %eax,(%esp)
 81c944f:	e8 0a 19 40 00       	call   85cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>
 81c9454:	84 c0                	test   %al,%al
 81c9456:	74 17                	je     81c946f <_ZN18DisPatcher_SetArea11check_errorEP5CUserR8MSG_BASER9ParamBase+0x87>
 81c9458:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c945b:	0f b6 50 0d          	movzbl 0xd(%eax),%edx
 81c945f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c9462:	88 50 08             	mov    %dl,0x8(%eax)
 81c9465:	b8 3c 00 00 00       	mov    $0x3c,%eax
 81c946a:	e9 a6 00 00 00       	jmp    81c9515 <_ZN18DisPatcher_SetArea11check_errorEP5CUserR8MSG_BASER9ParamBase+0x12d>
 81c946f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9472:	89 04 24             	mov    %eax,(%esp)
 81c9475:	e8 60 0e f1 ff       	call   80da2da <_ZN15CUserCharacInfo16IsCurCharacGhostEv>
 81c947a:	84 c0                	test   %al,%al
 81c947c:	74 17                	je     81c9495 <_ZN18DisPatcher_SetArea11check_errorEP5CUserR8MSG_BASER9ParamBase+0xad>
 81c947e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c9481:	0f b6 50 0d          	movzbl 0xd(%eax),%edx
 81c9485:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c9488:	88 50 08             	mov    %dl,0x8(%eax)
 81c948b:	b8 13 00 00 00       	mov    $0x13,%eax
 81c9490:	e9 80 00 00 00       	jmp    81c9515 <_ZN18DisPatcher_SetArea11check_errorEP5CUserR8MSG_BASER9ParamBase+0x12d>
 81c9495:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9498:	89 04 24             	mov    %eax,(%esp)
 81c949b:	e8 88 7b f3 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81c94a0:	89 c3                	mov    %eax,%ebx
 81c94a2:	e8 00 0f f1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81c94a7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c94ab:	89 04 24             	mov    %eax,(%esp)
 81c94ae:	e8 01 46 50 00       	call   86cdab4 <_ZN9GameWorld15IsForbiddenMoveEPKc>
 81c94b3:	84 c0                	test   %al,%al
 81c94b5:	74 59                	je     81c9510 <_ZN18DisPatcher_SetArea11check_errorEP5CUserR8MSG_BASER9ParamBase+0x128>
 81c94b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c94ba:	89 04 24             	mov    %eax,(%esp)
 81c94bd:	e8 66 7b f3 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81c94c2:	89 c3                	mov    %eax,%ebx
 81c94c4:	e8 de 0e f1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81c94c9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c94cd:	89 04 24             	mov    %eax,(%esp)
 81c94d0:	e8 83 54 50 00       	call   86ce958 <_ZN9GameWorld26GetLeftTimeOfForbiddenMoveEPKc>
 81c94d5:	85 c0                	test   %eax,%eax
 81c94d7:	0f 95 c0             	setne  %al
 81c94da:	84 c0                	test   %al,%al
 81c94dc:	74 14                	je     81c94f2 <_ZN18DisPatcher_SetArea11check_errorEP5CUserR8MSG_BASER9ParamBase+0x10a>
 81c94de:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c94e1:	0f b6 50 0e          	movzbl 0xe(%eax),%edx
 81c94e5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c94e8:	88 50 09             	mov    %dl,0x9(%eax)
 81c94eb:	b8 44 00 00 00       	mov    $0x44,%eax
 81c94f0:	eb 23                	jmp    81c9515 <_ZN18DisPatcher_SetArea11check_errorEP5CUserR8MSG_BASER9ParamBase+0x12d>
 81c94f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c94f5:	89 04 24             	mov    %eax,(%esp)
 81c94f8:	e8 2b 7b f3 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81c94fd:	89 c3                	mov    %eax,%ebx
 81c94ff:	e8 a3 0e f1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81c9504:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c9508:	89 04 24             	mov    %eax,(%esp)
 81c950b:	e8 4a 49 50 00       	call   86cde5a <_ZN9GameWorld10EnableMoveEPKc>
 81c9510:	b8 00 00 00 00       	mov    $0x0,%eax
 81c9515:	83 c4 24             	add    $0x24,%esp
 81c9518:	5b                   	pop    %ebx
 81c9519:	5d                   	pop    %ebp
 81c951a:	c3                   	ret
 81c951b:	90                   	nop

```

```c
// DisPatcher_SetArea::check_error @ 0x81c93e8

/* DisPatcher_SetArea::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_SetArea::check_error
          (DisPatcher_SetArea *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CPrivateStoreMgr *this_00;
  char *pcVar4;
  GameWorld *pGVar5;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 == 3) {
    cVar1 = CUserCharacInfo::IsBusyDisjointStore((CUserCharacInfo *)param_1);
    if (cVar1 == '\0') {
      this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
      cVar1 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this_00,param_1);
      if (cVar1 == '\0') {
        cVar1 = CUserCharacInfo::IsCurCharacGhost((CUserCharacInfo *)param_1);
        if (cVar1 == '\0') {
          pcVar4 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
          pGVar5 = (GameWorld *)G_GameWorld();
          cVar1 = GameWorld::IsForbiddenMove(pGVar5,pcVar4);
          if (cVar1 != '\0') {
            pcVar4 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
            pGVar5 = (GameWorld *)G_GameWorld();
            iVar2 = GameWorld::GetLeftTimeOfForbiddenMove(pGVar5,pcVar4);
            if (iVar2 != 0) {
              *(MSG_BASE *)(param_3 + 9) = param_2[0xe];
              return 0x44;
            }
            pcVar4 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
            pGVar5 = (GameWorld *)G_GameWorld();
            GameWorld::EnableMove(pGVar5,pcVar4);
          }
          uVar3 = 0;
        }
        else {
          *(MSG_BASE *)(param_3 + 8) = param_2[0xd];
          uVar3 = 0x13;
        }
      }
      else {
        *(MSG_BASE *)(param_3 + 8) = param_2[0xd];
        uVar3 = 0x3c;
      }
    }
    else {
      *(MSG_BASE *)(param_3 + 8) = param_2[0xd];
      uVar3 = 0xbf;
    }
  }
  else {
    uVar3 = 0x7fffffff;
  }
  return uVar3;
}

```

---

## process

```asm
// === 081c951c DisPatcher_SetArea::process  [0x081c951c-0x81c9655] ===
 81c951c:	55                   	push   %ebp
 81c951d:	89 e5                	mov    %esp,%ebp
 81c951f:	57                   	push   %edi
 81c9520:	56                   	push   %esi
 81c9521:	53                   	push   %ebx
 81c9522:	83 ec 5c             	sub    $0x5c,%esp
 81c9525:	8b 45 10             	mov    0x10(%ebp),%eax
 81c9528:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81c952b:	8b 45 14             	mov    0x14(%ebp),%eax
 81c952e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81c9531:	8b 45 14             	mov    0x14(%ebp),%eax
 81c9534:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c9538:	8b 45 10             	mov    0x10(%ebp),%eax
 81c953b:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c953f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9542:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c9546:	8b 45 08             	mov    0x8(%ebp),%eax
 81c9549:	89 04 24             	mov    %eax,(%esp)
 81c954c:	e8 97 fe ff ff       	call   81c93e8 <_ZN18DisPatcher_SetArea11check_errorEP5CUserR8MSG_BASER9ParamBase>
 81c9551:	89 c2                	mov    %eax,%edx
 81c9553:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c9556:	89 50 04             	mov    %edx,0x4(%eax)
 81c9559:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c955c:	8b 40 04             	mov    0x4(%eax),%eax
 81c955f:	85 c0                	test   %eax,%eax
 81c9561:	7e 0a                	jle    81c956d <_ZN18DisPatcher_SetArea7processEP5CUserR8MSG_BASER9ParamBase+0x51>
 81c9563:	b8 00 00 00 00       	mov    $0x0,%eax
 81c9568:	e9 e1 00 00 00       	jmp    81c964e <_ZN18DisPatcher_SetArea7processEP5CUserR8MSG_BASER9ParamBase+0x132>
 81c956d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c9570:	8b 40 04             	mov    0x4(%eax),%eax
 81c9573:	85 c0                	test   %eax,%eax
 81c9575:	79 32                	jns    81c95a9 <_ZN18DisPatcher_SetArea7processEP5CUserR8MSG_BASER9ParamBase+0x8d>
 81c9577:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c957a:	89 04 24             	mov    %eax,(%esp)
 81c957d:	e8 ec 0d f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c9582:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81c9585:	8b 52 04             	mov    0x4(%edx),%edx
 81c9588:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c958c:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c9590:	c7 44 24 04 60 55 bd 	movl   $0x8bd5560,0x4(%esp)
 81c9597:	08 
 81c9598:	c7 04 24 6d 1c 00 00 	movl   $0x1c6d,(%esp)
 81c959f:	e8 33 73 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c95a4:	e9 a5 00 00 00       	jmp    81c964e <_ZN18DisPatcher_SetArea7processEP5CUserR8MSG_BASER9ParamBase+0x132>
 81c95a9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c95ac:	0f b7 40 16          	movzwl 0x16(%eax),%eax
 81c95b0:	0f b7 f0             	movzwl %ax,%esi
 81c95b3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c95b6:	0f b7 40 14          	movzwl 0x14(%eax),%eax
 81c95ba:	0f b7 c0             	movzwl %ax,%eax
 81c95bd:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81c95c0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c95c3:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 81c95c7:	0f be c0             	movsbl %al,%eax
 81c95ca:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81c95cd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c95d0:	0f b7 40 11          	movzwl 0x11(%eax),%eax
 81c95d4:	0f b7 c0             	movzwl %ax,%eax
 81c95d7:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81c95da:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c95dd:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 81c95e1:	0f b7 c0             	movzwl %ax,%eax
 81c95e4:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81c95e7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c95ea:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81c95ee:	0f be f8             	movsbl %al,%edi
 81c95f1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c95f4:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c95f8:	0f be d8             	movsbl %al,%ebx
 81c95fb:	e8 a7 0d f1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81c9600:	89 c2                	mov    %eax,%edx
 81c9602:	89 74 24 28          	mov    %esi,0x28(%esp)
 81c9606:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81c9609:	89 44 24 24          	mov    %eax,0x24(%esp)
 81c960d:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 81c9614:	00 
 81c9615:	c7 44 24 1c 01 00 00 	movl   $0x1,0x1c(%esp)
 81c961c:	00 
 81c961d:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c9620:	89 44 24 18          	mov    %eax,0x18(%esp)
 81c9624:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81c9627:	89 44 24 14          	mov    %eax,0x14(%esp)
 81c962b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81c962e:	89 44 24 10          	mov    %eax,0x10(%esp)
 81c9632:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 81c9636:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81c963a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c963d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c9641:	89 14 24             	mov    %edx,(%esp)
 81c9644:	e8 3b c4 4f 00       	call   86c5a84 <_ZN9GameWorld9move_areaEP5CUseriiiiibiii>
 81c9649:	b8 00 00 00 00       	mov    $0x0,%eax
 81c964e:	83 c4 5c             	add    $0x5c,%esp
 81c9651:	5b                   	pop    %ebx
 81c9652:	5e                   	pop    %esi
 81c9653:	5f                   	pop    %edi
 81c9654:	5d                   	pop    %ebp
 81c9655:	c3                   	ret

```

```c
// DisPatcher_SetArea::process @ 0x81c951c

/* DisPatcher_SetArea::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_SetArea::process
          (DisPatcher_SetArea *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  MSG_BASE MVar1;
  MSG_BASE MVar2;
  MSG_BASE MVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined4 uVar8;
  uint uVar9;
  GameWorld *this_00;
  
  uVar8 = check_error(this,param_1,param_2,param_3);
  *(undefined4 *)(param_3 + 4) = uVar8;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar9 = CUser::get_acc_id(param_1);
      uVar8 = LineFunc(0x1c6d,
                       "virtual int DisPatcher_SetArea::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(param_3 + 4),uVar9);
    }
    else {
      uVar4 = *(ushort *)(param_2 + 0x16);
      uVar5 = *(ushort *)(param_2 + 0x14);
      MVar1 = param_2[0x13];
      uVar6 = *(ushort *)(param_2 + 0x11);
      uVar7 = *(ushort *)(param_2 + 0xf);
      MVar2 = param_2[0xe];
      MVar3 = param_2[0xd];
      this_00 = (GameWorld *)G_GameWorld();
      GameWorld::move_area
                (this_00,param_1,(int)(char)MVar3,(int)(char)MVar2,(uint)uVar7,(uint)uVar6,
                 (int)(char)MVar1,true,0,(uint)uVar5,(uint)uVar4);
      uVar8 = 0;
    }
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}

```

---

## read

```asm
// === 081c91e6 DisPatcher_SetArea::read  [0x081c91e6-0x81c93e7] ===
 81c91e6:	55                   	push   %ebp
 81c91e7:	89 e5                	mov    %esp,%ebp
 81c91e9:	83 ec 28             	sub    $0x28,%esp
 81c91ec:	8b 45 10             	mov    0x10(%ebp),%eax
 81c91ef:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c91f2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c91f5:	83 c0 0d             	add    $0xd,%eax
 81c91f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c91fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c91ff:	89 04 24             	mov    %eax,(%esp)
 81c9202:	e8 1b 3d 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81c9207:	83 f0 01             	xor    $0x1,%eax
 81c920a:	84 c0                	test   %al,%al
 81c920c:	74 29                	je     81c9237 <_ZN18DisPatcher_SetArea4readER9PacketBufR8MSG_BASE+0x51>
 81c920e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c9215:	00 
 81c9216:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c921d:	00 
 81c921e:	c7 44 24 04 c0 55 bd 	movl   $0x8bd55c0,0x4(%esp)
 81c9225:	08 
 81c9226:	c7 04 24 16 1c 00 00 	movl   $0x1c16,(%esp)
 81c922d:	e8 a5 76 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c9232:	e9 af 01 00 00       	jmp    81c93e6 <_ZN18DisPatcher_SetArea4readER9PacketBufR8MSG_BASE+0x200>
 81c9237:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c923a:	83 c0 0e             	add    $0xe,%eax
 81c923d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c9241:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9244:	89 04 24             	mov    %eax,(%esp)
 81c9247:	e8 d6 3c 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81c924c:	83 f0 01             	xor    $0x1,%eax
 81c924f:	84 c0                	test   %al,%al
 81c9251:	74 29                	je     81c927c <_ZN18DisPatcher_SetArea4readER9PacketBufR8MSG_BASE+0x96>
 81c9253:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c925a:	00 
 81c925b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c9262:	00 
 81c9263:	c7 44 24 04 c0 55 bd 	movl   $0x8bd55c0,0x4(%esp)
 81c926a:	08 
 81c926b:	c7 04 24 17 1c 00 00 	movl   $0x1c17,(%esp)
 81c9272:	e8 60 76 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c9277:	e9 6a 01 00 00       	jmp    81c93e6 <_ZN18DisPatcher_SetArea4readER9PacketBufR8MSG_BASE+0x200>
 81c927c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c927f:	83 c0 0f             	add    $0xf,%eax
 81c9282:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c9286:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9289:	89 04 24             	mov    %eax,(%esp)
 81c928c:	e8 1f 3e 3c 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81c9291:	83 f0 01             	xor    $0x1,%eax
 81c9294:	84 c0                	test   %al,%al
 81c9296:	74 29                	je     81c92c1 <_ZN18DisPatcher_SetArea4readER9PacketBufR8MSG_BASE+0xdb>
 81c9298:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c929f:	00 
 81c92a0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c92a7:	00 
 81c92a8:	c7 44 24 04 c0 55 bd 	movl   $0x8bd55c0,0x4(%esp)
 81c92af:	08 
 81c92b0:	c7 04 24 18 1c 00 00 	movl   $0x1c18,(%esp)
 81c92b7:	e8 1b 76 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c92bc:	e9 25 01 00 00       	jmp    81c93e6 <_ZN18DisPatcher_SetArea4readER9PacketBufR8MSG_BASE+0x200>
 81c92c1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c92c4:	83 c0 11             	add    $0x11,%eax
 81c92c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c92cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c92ce:	89 04 24             	mov    %eax,(%esp)
 81c92d1:	e8 da 3d 3c 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81c92d6:	83 f0 01             	xor    $0x1,%eax
 81c92d9:	84 c0                	test   %al,%al
 81c92db:	74 29                	je     81c9306 <_ZN18DisPatcher_SetArea4readER9PacketBufR8MSG_BASE+0x120>
 81c92dd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c92e4:	00 
 81c92e5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c92ec:	00 
 81c92ed:	c7 44 24 04 c0 55 bd 	movl   $0x8bd55c0,0x4(%esp)
 81c92f4:	08 
 81c92f5:	c7 04 24 19 1c 00 00 	movl   $0x1c19,(%esp)
 81c92fc:	e8 d6 75 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c9301:	e9 e0 00 00 00       	jmp    81c93e6 <_ZN18DisPatcher_SetArea4readER9PacketBufR8MSG_BASE+0x200>
 81c9306:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c9309:	83 c0 13             	add    $0x13,%eax
 81c930c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c9310:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9313:	89 04 24             	mov    %eax,(%esp)
 81c9316:	e8 07 3c 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81c931b:	83 f0 01             	xor    $0x1,%eax
 81c931e:	84 c0                	test   %al,%al
 81c9320:	74 29                	je     81c934b <_ZN18DisPatcher_SetArea4readER9PacketBufR8MSG_BASE+0x165>
 81c9322:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c9329:	00 
 81c932a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c9331:	00 
 81c9332:	c7 44 24 04 c0 55 bd 	movl   $0x8bd55c0,0x4(%esp)
 81c9339:	08 
 81c933a:	c7 04 24 1a 1c 00 00 	movl   $0x1c1a,(%esp)
 81c9341:	e8 91 75 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c9346:	e9 9b 00 00 00       	jmp    81c93e6 <_ZN18DisPatcher_SetArea4readER9PacketBufR8MSG_BASE+0x200>
 81c934b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c934e:	66 c7 40 14 00 00    	movw   $0x0,0x14(%eax)
 81c9354:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c9357:	66 c7 40 16 00 00    	movw   $0x0,0x16(%eax)
 81c935d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c9360:	83 c0 14             	add    $0x14,%eax
 81c9363:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c9367:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c936a:	89 04 24             	mov    %eax,(%esp)
 81c936d:	e8 3e 3d 3c 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81c9372:	83 f0 01             	xor    $0x1,%eax
 81c9375:	84 c0                	test   %al,%al
 81c9377:	74 26                	je     81c939f <_ZN18DisPatcher_SetArea4readER9PacketBufR8MSG_BASE+0x1b9>
 81c9379:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c9380:	00 
 81c9381:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c9388:	00 
 81c9389:	c7 44 24 04 c0 55 bd 	movl   $0x8bd55c0,0x4(%esp)
 81c9390:	08 
 81c9391:	c7 04 24 1f 1c 00 00 	movl   $0x1c1f,(%esp)
 81c9398:	e8 3a 75 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c939d:	eb 47                	jmp    81c93e6 <_ZN18DisPatcher_SetArea4readER9PacketBufR8MSG_BASE+0x200>
 81c939f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c93a2:	83 c0 16             	add    $0x16,%eax
 81c93a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c93a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c93ac:	89 04 24             	mov    %eax,(%esp)
 81c93af:	e8 fc 3c 3c 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81c93b4:	83 f0 01             	xor    $0x1,%eax
 81c93b7:	84 c0                	test   %al,%al
 81c93b9:	74 26                	je     81c93e1 <_ZN18DisPatcher_SetArea4readER9PacketBufR8MSG_BASE+0x1fb>
 81c93bb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c93c2:	00 
 81c93c3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c93ca:	00 
 81c93cb:	c7 44 24 04 c0 55 bd 	movl   $0x8bd55c0,0x4(%esp)
 81c93d2:	08 
 81c93d3:	c7 04 24 20 1c 00 00 	movl   $0x1c20,(%esp)
 81c93da:	e8 f8 74 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c93df:	eb 05                	jmp    81c93e6 <_ZN18DisPatcher_SetArea4readER9PacketBufR8MSG_BASE+0x200>
 81c93e1:	b8 00 00 00 00       	mov    $0x0,%eax
 81c93e6:	c9                   	leave
 81c93e7:	c3                   	ret

```

```c
// DisPatcher_SetArea::read @ 0x81c91e6

/* DisPatcher_SetArea::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_SetArea::read(DisPatcher_SetArea *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xf));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x11));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x13));
          if (cVar1 == '\x01') {
            *(undefined2 *)(param_2 + 0x14) = 0;
            *(undefined2 *)(param_2 + 0x16) = 0;
            cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x14));
            if (cVar1 == '\x01') {
              cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x16));
              if (cVar1 == '\x01') {
                uVar2 = 0;
              }
              else {
                uVar2 = LineFunc(0x1c20,
                                 "virtual int DisPatcher_SetArea::read(PacketBuf&, MSG_BASE&)",0,0);
              }
            }
            else {
              uVar2 = LineFunc(0x1c1f,"virtual int DisPatcher_SetArea::read(PacketBuf&, MSG_BASE&)",
                               0,0);
            }
          }
          else {
            uVar2 = LineFunc(0x1c1a,"virtual int DisPatcher_SetArea::read(PacketBuf&, MSG_BASE&)",0,
                             0);
          }
        }
        else {
          uVar2 = LineFunc(0x1c19,"virtual int DisPatcher_SetArea::read(PacketBuf&, MSG_BASE&)",0,0)
          ;
        }
      }
      else {
        uVar2 = LineFunc(0x1c18,"virtual int DisPatcher_SetArea::read(PacketBuf&, MSG_BASE&)",0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x1c17,"virtual int DisPatcher_SetArea::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x1c16,"virtual int DisPatcher_SetArea::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081c9656 DisPatcher_SetArea::send  [0x081c9656-0x81c97a5] ===
 81c9656:	55                   	push   %ebp
 81c9657:	89 e5                	mov    %esp,%ebp
 81c9659:	56                   	push   %esi
 81c965a:	53                   	push   %ebx
 81c965b:	83 ec 30             	sub    $0x30,%esp
 81c965e:	8b 45 10             	mov    0x10(%ebp),%eax
 81c9661:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c9664:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c9667:	8b 40 04             	mov    0x4(%eax),%eax
 81c966a:	3d ff ff ff 7f       	cmp    $0x7fffffff,%eax
 81c966f:	0f 84 29 01 00 00    	je     81c979e <_ZN18DisPatcher_SetArea4sendEP5CUserR9ParamBase+0x148>
 81c9675:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c9678:	8b 40 04             	mov    0x4(%eax),%eax
 81c967b:	85 c0                	test   %eax,%eax
 81c967d:	0f 84 1c 01 00 00    	je     81c979f <_ZN18DisPatcher_SetArea4sendEP5CUserR9ParamBase+0x149>
 81c9683:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c9686:	89 04 24             	mov    %eax,(%esp)
 81c9689:	e8 be 46 3c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81c968e:	c7 44 24 08 26 00 00 	movl   $0x26,0x8(%esp)
 81c9695:	00 
 81c9696:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c969d:	00 
 81c969e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c96a1:	89 04 24             	mov    %eax,(%esp)
 81c96a4:	e8 53 22 f0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81c96a9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c96b0:	00 
 81c96b1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c96b4:	89 04 24             	mov    %eax,(%esp)
 81c96b7:	e8 64 22 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c96bc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c96bf:	8b 40 04             	mov    0x4(%eax),%eax
 81c96c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c96c6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c96c9:	89 04 24             	mov    %eax,(%esp)
 81c96cc:	e8 4f 22 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c96d1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c96d4:	8b 40 04             	mov    0x4(%eax),%eax
 81c96d7:	83 f8 44             	cmp    $0x44,%eax
 81c96da:	75 5a                	jne    81c9736 <_ZN18DisPatcher_SetArea4sendEP5CUserR9ParamBase+0xe0>
 81c96dc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c96df:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 81c96e3:	0f be c0             	movsbl %al,%eax
 81c96e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c96ea:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c96ed:	89 04 24             	mov    %eax,(%esp)
 81c96f0:	e8 2b 22 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c96f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c96f8:	89 04 24             	mov    %eax,(%esp)
 81c96fb:	e8 28 79 f3 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81c9700:	89 c3                	mov    %eax,%ebx
 81c9702:	e8 a0 0c f1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81c9707:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c970b:	89 04 24             	mov    %eax,(%esp)
 81c970e:	e8 45 52 50 00       	call   86ce958 <_ZN9GameWorld26GetLeftTimeOfForbiddenMoveEPKc>
 81c9713:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81c9716:	ba 73 b2 e7 45       	mov    $0x45e7b273,%edx
 81c971b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c971e:	f7 e2                	mul    %edx
 81c9720:	89 d0                	mov    %edx,%eax
 81c9722:	c1 e8 0e             	shr    $0xe,%eax
 81c9725:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c9729:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c972c:	89 04 24             	mov    %eax,(%esp)
 81c972f:	e8 08 22 f0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81c9734:	eb 19                	jmp    81c974f <_ZN18DisPatcher_SetArea4sendEP5CUserR9ParamBase+0xf9>
 81c9736:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c9739:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 81c973d:	0f be c0             	movsbl %al,%eax
 81c9740:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c9744:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c9747:	89 04 24             	mov    %eax,(%esp)
 81c974a:	e8 d1 21 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c974f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c9756:	00 
 81c9757:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c975a:	89 04 24             	mov    %eax,(%esp)
 81c975d:	e8 f6 21 f0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81c9762:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c9765:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c9769:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c976c:	89 04 24             	mov    %eax,(%esp)
 81c976f:	e8 46 ee 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81c9774:	eb 1b                	jmp    81c9791 <_ZN18DisPatcher_SetArea4sendEP5CUserR9ParamBase+0x13b>
 81c9776:	89 d3                	mov    %edx,%ebx
 81c9778:	89 c6                	mov    %eax,%esi
 81c977a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c977d:	89 04 24             	mov    %eax,(%esp)
 81c9780:	e8 fb 46 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c9785:	89 f0                	mov    %esi,%eax
 81c9787:	89 da                	mov    %ebx,%edx
 81c9789:	89 04 24             	mov    %eax,(%esp)
 81c978c:	e8 bf 9f 91 00       	call   8ae3750 <_Unwind_Resume>
 81c9791:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c9794:	89 04 24             	mov    %eax,(%esp)
 81c9797:	e8 e4 46 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c979c:	eb 01                	jmp    81c979f <_ZN18DisPatcher_SetArea4sendEP5CUserR9ParamBase+0x149>
 81c979e:	90                   	nop
 81c979f:	83 c4 30             	add    $0x30,%esp
 81c97a2:	5b                   	pop    %ebx
 81c97a3:	5e                   	pop    %esi
 81c97a4:	5d                   	pop    %ebp
 81c97a5:	c3                   	ret

```

```c
// DisPatcher_SetArea::send @ 0x81c9656

/* DisPatcher_SetArea::send(CUser*, ParamBase&) */

void __thiscall DisPatcher_SetArea::send(DisPatcher_SetArea *this,CUser *param_1,ParamBase *param_2)

{
  char *pcVar1;
  GameWorld *this_00;
  uint uVar2;
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if ((*(int *)(param_2 + 4) != 0x7fffffff) && (*(int *)(param_2 + 4) != 0)) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081c96a4 to 081c9773 has its CatchHandler @ 081c9776 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x26);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 4));
    if (*(int *)(local_10 + 4) == 0x44) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[9]);
      pcVar1 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      this_00 = (GameWorld *)G_GameWorld();
      uVar2 = GameWorld::GetLeftTimeOfForbiddenMove(this_00,pcVar1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,uVar2 / 60000);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[8]);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return;
}

```

