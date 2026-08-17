# game_master__CAddItemByMail

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084ac2e2 game_master::CAddItemByMail::execute  [0x084ac2e2-0x84ac58b] ===
 84ac2e2:	55                   	push   %ebp
 84ac2e3:	89 e5                	mov    %esp,%ebp
 84ac2e5:	57                   	push   %edi
 84ac2e6:	56                   	push   %esi
 84ac2e7:	53                   	push   %ebx
 84ac2e8:	81 ec ac 01 00 00    	sub    $0x1ac,%esp
 84ac2ee:	8b 45 08             	mov    0x8(%ebp),%eax
 84ac2f1:	89 04 24             	mov    %eax,(%esp)
 84ac2f4:	e8 c1 7c 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84ac2f9:	89 45 d0             	mov    %eax,-0x30(%ebp)
 84ac2fc:	8b 45 08             	mov    0x8(%ebp),%eax
 84ac2ff:	8b 58 08             	mov    0x8(%eax),%ebx
 84ac302:	e8 94 fe c1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84ac307:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84ac30b:	89 04 24             	mov    %eax,(%esp)
 84ac30e:	e8 1f 37 eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84ac313:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84ac316:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 84ac31a:	0f 84 5d 02 00 00    	je     84ac57d <_ZN11game_master14CAddItemByMail7executeEv+0x29b>
 84ac320:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 84ac327:	8d 95 7e fe ff ff    	lea    -0x182(%ebp),%edx
 84ac32d:	bb 00 01 00 00       	mov    $0x100,%ebx
 84ac332:	b8 00 00 00 00       	mov    $0x0,%eax
 84ac337:	89 d1                	mov    %edx,%ecx
 84ac339:	83 e1 02             	and    $0x2,%ecx
 84ac33c:	85 c9                	test   %ecx,%ecx
 84ac33e:	74 09                	je     84ac349 <_ZN11game_master14CAddItemByMail7executeEv+0x67>
 84ac340:	66 89 02             	mov    %ax,(%edx)
 84ac343:	83 c2 02             	add    $0x2,%edx
 84ac346:	83 eb 02             	sub    $0x2,%ebx
 84ac349:	89 d9                	mov    %ebx,%ecx
 84ac34b:	c1 e9 02             	shr    $0x2,%ecx
 84ac34e:	89 d7                	mov    %edx,%edi
 84ac350:	f3 ab                	rep stos %eax,%es:(%edi)
 84ac352:	89 fa                	mov    %edi,%edx
 84ac354:	89 d9                	mov    %ebx,%ecx
 84ac356:	83 e1 02             	and    $0x2,%ecx
 84ac359:	85 c9                	test   %ecx,%ecx
 84ac35b:	74 06                	je     84ac363 <_ZN11game_master14CAddItemByMail7executeEv+0x81>
 84ac35d:	66 89 02             	mov    %ax,(%edx)
 84ac360:	83 c2 02             	add    $0x2,%edx
 84ac363:	89 d9                	mov    %ebx,%ecx
 84ac365:	83 e1 01             	and    $0x1,%ecx
 84ac368:	85 c9                	test   %ecx,%ecx
 84ac36a:	74 05                	je     84ac371 <_ZN11game_master14CAddItemByMail7executeEv+0x8f>
 84ac36c:	88 02                	mov    %al,(%edx)
 84ac36e:	83 c2 01             	add    $0x1,%edx
 84ac371:	8d 45 bb             	lea    -0x45(%ebp),%eax
 84ac374:	ba 15 00 00 00       	mov    $0x15,%edx
 84ac379:	b9 00 00 00 00       	mov    $0x0,%ecx
 84ac37e:	89 c3                	mov    %eax,%ebx
 84ac380:	83 e3 01             	and    $0x1,%ebx
 84ac383:	85 db                	test   %ebx,%ebx
 84ac385:	74 08                	je     84ac38f <_ZN11game_master14CAddItemByMail7executeEv+0xad>
 84ac387:	88 08                	mov    %cl,(%eax)
 84ac389:	83 c0 01             	add    $0x1,%eax
 84ac38c:	83 ea 01             	sub    $0x1,%edx
 84ac38f:	89 c3                	mov    %eax,%ebx
 84ac391:	83 e3 02             	and    $0x2,%ebx
 84ac394:	85 db                	test   %ebx,%ebx
 84ac396:	74 09                	je     84ac3a1 <_ZN11game_master14CAddItemByMail7executeEv+0xbf>
 84ac398:	66 89 08             	mov    %cx,(%eax)
 84ac39b:	83 c0 02             	add    $0x2,%eax
 84ac39e:	83 ea 02             	sub    $0x2,%edx
 84ac3a1:	89 d6                	mov    %edx,%esi
 84ac3a3:	83 e6 fc             	and    $0xfffffffc,%esi
 84ac3a6:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ac3ab:	89 0c 18             	mov    %ecx,(%eax,%ebx,1)
 84ac3ae:	83 c3 04             	add    $0x4,%ebx
 84ac3b1:	39 f3                	cmp    %esi,%ebx
 84ac3b3:	72 f6                	jb     84ac3ab <_ZN11game_master14CAddItemByMail7executeEv+0xc9>
 84ac3b5:	01 d8                	add    %ebx,%eax
 84ac3b7:	89 d3                	mov    %edx,%ebx
 84ac3b9:	83 e3 02             	and    $0x2,%ebx
 84ac3bc:	85 db                	test   %ebx,%ebx
 84ac3be:	74 06                	je     84ac3c6 <_ZN11game_master14CAddItemByMail7executeEv+0xe4>
 84ac3c0:	66 89 08             	mov    %cx,(%eax)
 84ac3c3:	83 c0 02             	add    $0x2,%eax
 84ac3c6:	83 e2 01             	and    $0x1,%edx
 84ac3c9:	85 d2                	test   %edx,%edx
 84ac3cb:	74 05                	je     84ac3d2 <_ZN11game_master14CAddItemByMail7executeEv+0xf0>
 84ac3cd:	88 08                	mov    %cl,(%eax)
 84ac3cf:	83 c0 01             	add    $0x1,%eax
 84ac3d2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84ac3d9:	00 
 84ac3da:	c7 44 24 08 ce fc c7 	movl   $0x8c7fcce,0x8(%esp)
 84ac3e1:	08 
 84ac3e2:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84ac3e9:	00 
 84ac3ea:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84ac3f1:	e8 08 94 5f 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84ac3f6:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 84ac3fd:	00 
 84ac3fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ac402:	8d 85 7e fe ff ff    	lea    -0x182(%ebp),%eax
 84ac408:	89 04 24             	mov    %eax,(%esp)
 84ac40b:	e8 c0 14 bd ff       	call   807d8d0 <strncpy@plt>
 84ac410:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84ac417:	00 
 84ac418:	c7 44 24 08 e2 fc c7 	movl   $0x8c7fce2,0x8(%esp)
 84ac41f:	08 
 84ac420:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84ac427:	00 
 84ac428:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84ac42f:	e8 ca 93 5f 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84ac434:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 84ac43b:	00 
 84ac43c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ac440:	8d 45 bb             	lea    -0x45(%ebp),%eax
 84ac443:	89 04 24             	mov    %eax,(%esp)
 84ac446:	e8 85 14 bd ff       	call   807d8d0 <strncpy@plt>
 84ac44b:	8b 45 08             	mov    0x8(%ebp),%eax
 84ac44e:	8b 40 08             	mov    0x8(%eax),%eax
 84ac451:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84ac454:	c7 45 dc 01 00 00 00 	movl   $0x1,-0x24(%ebp)
 84ac45b:	8d 85 7e ff ff ff    	lea    -0x82(%ebp),%eax
 84ac461:	89 04 24             	mov    %eax,(%esp)
 84ac464:	e8 eb f3 c1 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 84ac469:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84ac470:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 84ac474:	75 0b                	jne    84ac481 <_ZN11game_master14CAddItemByMail7executeEv+0x19f>
 84ac476:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84ac479:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84ac47c:	e9 88 00 00 00       	jmp    84ac509 <_ZN11game_master14CAddItemByMail7executeEv+0x227>
 84ac481:	83 7d d8 01          	cmpl   $0x1,-0x28(%ebp)
 84ac485:	75 2a                	jne    84ac4b1 <_ZN11game_master14CAddItemByMail7executeEv+0x1cf>
 84ac487:	c7 45 80 01 00 00 00 	movl   $0x1,-0x80(%ebp)
 84ac48e:	c6 85 7f ff ff ff 02 	movb   $0x2,-0x81(%ebp)
 84ac495:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84ac498:	89 45 85             	mov    %eax,-0x7b(%ebp)
 84ac49b:	66 c7 45 89 01 00    	movw   $0x1,-0x77(%ebp)
 84ac4a1:	8d 85 7e ff ff ff    	lea    -0x82(%ebp),%eax
 84ac4a7:	89 04 24             	mov    %eax,(%esp)
 84ac4aa:	e8 e3 f3 c1 ff       	call   80cb892 <_ZN10Inven_Item13ResetItemAttrEv>
 84ac4af:	eb 58                	jmp    84ac509 <_ZN11game_master14CAddItemByMail7executeEv+0x227>
 84ac4b1:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 84ac4b4:	e8 e2 fc c1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84ac4b9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84ac4bd:	89 04 24             	mov    %eax,(%esp)
 84ac4c0:	e8 6d 35 eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84ac4c5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84ac4c8:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84ac4cc:	0f 84 ae 00 00 00    	je     84ac580 <_ZN11game_master14CAddItemByMail7executeEv+0x29e>
 84ac4d2:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84ac4d5:	89 45 80             	mov    %eax,-0x80(%ebp)
 84ac4d8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84ac4db:	8b 00                	mov    (%eax),%eax
 84ac4dd:	83 c0 08             	add    $0x8,%eax
 84ac4e0:	8b 10                	mov    (%eax),%edx
 84ac4e2:	8d 85 7e ff ff ff    	lea    -0x82(%ebp),%eax
 84ac4e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ac4ec:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84ac4ef:	89 04 24             	mov    %eax,(%esp)
 84ac4f2:	ff d2                	call   *%edx
 84ac4f4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84ac4f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ac4fb:	8d 85 7e ff ff ff    	lea    -0x82(%ebp),%eax
 84ac501:	89 04 24             	mov    %eax,(%esp)
 84ac504:	e8 7b f3 c1 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 84ac509:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84ac50c:	89 04 24             	mov    %eax,(%esp)
 84ac50f:	e8 7c f7 c1 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84ac514:	89 c3                	mov    %eax,%ebx
 84ac516:	8d 85 7e fe ff ff    	lea    -0x182(%ebp),%eax
 84ac51c:	89 04 24             	mov    %eax,(%esp)
 84ac51f:	e8 8c 1e bd ff       	call   807e3b0 <strlen@plt>
 84ac524:	89 c6                	mov    %eax,%esi
 84ac526:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84ac529:	89 04 24             	mov    %eax,(%esp)
 84ac52c:	e8 1d f7 c1 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84ac531:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84ac534:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 84ac53b:	00 
 84ac53c:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 84ac543:	00 
 84ac544:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 84ac548:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 84ac54f:	00 
 84ac550:	89 74 24 14          	mov    %esi,0x14(%esp)
 84ac554:	8d 8d 7e fe ff ff    	lea    -0x182(%ebp),%ecx
 84ac55a:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84ac55e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84ac562:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ac566:	8d 85 7e ff ff ff    	lea    -0x82(%ebp),%eax
 84ac56c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ac570:	8d 45 bb             	lea    -0x45(%ebp),%eax
 84ac573:	89 04 24             	mov    %eax,(%esp)
 84ac576:	e8 6d 90 0a 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 84ac57b:	eb 04                	jmp    84ac581 <_ZN11game_master14CAddItemByMail7executeEv+0x29f>
 84ac57d:	90                   	nop
 84ac57e:	eb 01                	jmp    84ac581 <_ZN11game_master14CAddItemByMail7executeEv+0x29f>
 84ac580:	90                   	nop
 84ac581:	81 c4 ac 01 00 00    	add    $0x1ac,%esp
 84ac587:	5b                   	pop    %ebx
 84ac588:	5e                   	pop    %esi
 84ac589:	5f                   	pop    %edi
 84ac58a:	5d                   	pop    %ebp
 84ac58b:	c3                   	ret

```

```c
// game_master::CAddItemByMail::execute @ 0x84ac2e2

/* WARNING: Removing unreachable block (ram,0x084ac36c) */
/* game_master::CAddItemByMail::execute() */

void __thiscall game_master::CAddItemByMail::execute(CAddItemByMail *this)

{
  char *pcVar1;
  int iVar2;
  CDataManager *pCVar3;
  char *pcVar4;
  undefined4 uVar5;
  size_t sVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  byte bVar11;
  char local_186 [256];
  Inven_Item local_86;
  undefined1 local_85;
  int local_84;
  int local_7f;
  undefined2 local_7b;
  char local_49;
  char local_48 [20];
  CUser *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  
  bVar11 = 0;
  local_34 = (CUser *)CCommand::GetUser((CCommand *)this);
  iVar2 = *(int *)(this + 8);
  pCVar3 = (CDataManager *)G_CDataManager();
  local_30 = CDataManager::find_item(pCVar3,iVar2);
  if (local_30 != 0) {
    local_2c = 0;
    pcVar4 = local_186;
    uVar8 = 0x100;
    bVar10 = ((uint)pcVar4 & 2) != 0;
    if (bVar10) {
      local_186[0] = '\0';
      local_186[1] = '\0';
      pcVar4 = local_186 + 2;
      uVar8 = 0xfe;
    }
    for (uVar8 = uVar8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4 = pcVar4 + ((uint)bVar11 * -2 + 1) * 4;
    }
    if (bVar10) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
    }
    pcVar4 = &local_49;
    uVar8 = 0x15;
    bVar10 = ((uint)pcVar4 & 1) != 0;
    if (bVar10) {
      local_49 = '\0';
      pcVar4 = local_48;
      uVar8 = 0x14;
    }
    if (((uint)pcVar4 & 2) != 0) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4 = pcVar4 + 2;
      uVar8 = uVar8 - 2;
    }
    uVar9 = 0;
    do {
      pcVar1 = pcVar4 + uVar9;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar9 = uVar9 + 4;
    } while (uVar9 < (uVar8 & 0xfffffffc));
    pcVar4 = pcVar4 + uVar9;
    if ((uVar8 & 2) != 0) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4 = pcVar4 + 2;
    }
    if (!bVar10) {
      *pcVar4 = '\0';
    }
    pcVar4 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_144",(bool *)0x0);
    strncpy(local_186,pcVar4,0xff);
    pcVar4 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_143",(bool *)0x0);
    strncpy(&local_49,pcVar4,0x14);
    local_2c = *(int *)(this + 8);
    local_28 = 1;
    Inven_Item::Inven_Item(&local_86);
    iVar2 = local_2c;
    local_24 = 0;
    if (local_2c == 0) {
      local_24 = local_28;
    }
    else if (local_2c == 1) {
      local_84 = 1;
      local_85 = 2;
      local_7f = local_28;
      local_7b = 1;
      Inven_Item::ResetItemAttr(&local_86);
    }
    else {
      pCVar3 = (CDataManager *)G_CDataManager();
      local_20 = (int *)CDataManager::find_item(pCVar3,iVar2);
      if (local_20 == (int *)0x0) {
        return;
      }
      local_84 = local_2c;
      (**(code **)(*local_20 + 8))(local_20,&local_86);
      Inven_Item::set_add_info(&local_86,local_28);
    }
    uVar5 = CUser::GetServerGroup(local_34);
    sVar6 = strlen(local_186);
    uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)local_34);
    WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
              (&local_49,&local_86,local_24,uVar7,local_186,sVar6,0,uVar5,0,0);
  }
  return;
}

```

---

## parse

```asm
// === 084ac2aa game_master::CAddItemByMail::parse  [0x084ac2aa-0x84ac2e1] ===
 84ac2aa:	55                   	push   %ebp
 84ac2ab:	89 e5                	mov    %esp,%ebp
 84ac2ad:	83 ec 18             	sub    $0x18,%esp
 84ac2b0:	8b 45 08             	mov    0x8(%ebp),%eax
 84ac2b3:	8b 40 04             	mov    0x4(%eax),%eax
 84ac2b6:	83 c0 0c             	add    $0xc,%eax
 84ac2b9:	89 04 24             	mov    %eax,(%esp)
 84ac2bc:	e8 a7 2d df ff       	call   829f068 <_Z4trimRSs>
 84ac2c1:	8b 45 08             	mov    0x8(%ebp),%eax
 84ac2c4:	8b 40 04             	mov    0x4(%eax),%eax
 84ac2c7:	83 c0 0c             	add    $0xc,%eax
 84ac2ca:	89 04 24             	mov    %eax,(%esp)
 84ac2cd:	e8 1e a2 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84ac2d2:	89 04 24             	mov    %eax,(%esp)
 84ac2d5:	e8 16 24 bd ff       	call   807e6f0 <atoi@plt>
 84ac2da:	8b 55 08             	mov    0x8(%ebp),%edx
 84ac2dd:	89 42 08             	mov    %eax,0x8(%edx)
 84ac2e0:	c9                   	leave
 84ac2e1:	c3                   	ret

```

```c
// game_master::CAddItemByMail::parse @ 0x84ac2aa

/* game_master::CAddItemByMail::parse() */

void __thiscall game_master::CAddItemByMail::parse(CAddItemByMail *this)

{
  char *__nptr;
  int iVar1;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  __nptr = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
  iVar1 = atoi(__nptr);
  *(int *)(this + 8) = iVar1;
  return;
}

```

