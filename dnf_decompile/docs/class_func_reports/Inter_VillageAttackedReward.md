# Inter_VillageAttackedReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## _send_reward_item

```asm
// === 084e0390 Inter_VillageAttackedReward::_send_reward_item  [0x084e0390-0x84e05c1] ===
 84e0390:	55                   	push   %ebp
 84e0391:	89 e5                	mov    %esp,%ebp
 84e0393:	57                   	push   %edi
 84e0394:	56                   	push   %esi
 84e0395:	53                   	push   %ebx
 84e0396:	81 ec 9c 01 00 00    	sub    $0x19c,%esp
 84e039c:	8d 45 8d             	lea    -0x73(%ebp),%eax
 84e039f:	89 04 24             	mov    %eax,(%esp)
 84e03a2:	e8 ad b4 be ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 84e03a7:	8b 45 10             	mov    0x10(%ebp),%eax
 84e03aa:	89 45 8f             	mov    %eax,-0x71(%ebp)
 84e03ad:	e8 e9 bd be ff       	call   80cc19b <_Z14G_CDataManagerv>
 84e03b2:	8b 40 0c             	mov    0xc(%eax),%eax
 84e03b5:	8b 55 14             	mov    0x14(%ebp),%edx
 84e03b8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84e03bc:	8d 55 8d             	lea    -0x73(%ebp),%edx
 84e03bf:	89 54 24 08          	mov    %edx,0x8(%esp)
 84e03c3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e03ca:	00 
 84e03cb:	89 04 24             	mov    %eax,(%esp)
 84e03ce:	e8 e5 1b 03 00       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 84e03d3:	8b 45 8f             	mov    -0x71(%ebp),%eax
 84e03d6:	83 f8 ff             	cmp    $0xffffffff,%eax
 84e03d9:	75 38                	jne    84e0413 <_ZN27Inter_VillageAttackedReward17_send_reward_itemEP5CUsermii+0x83>
 84e03db:	8b 45 8f             	mov    -0x71(%ebp),%eax
 84e03de:	89 44 24 14          	mov    %eax,0x14(%esp)
 84e03e2:	c7 44 24 10 ec 9b c8 	movl   $0x8c89bec,0x10(%esp)
 84e03e9:	08 
 84e03ea:	c7 44 24 0c bc 4d 00 	movl   $0x4dbc,0xc(%esp)
 84e03f1:	00 
 84e03f2:	c7 44 24 08 80 ba c8 	movl   $0x8c8ba80,0x8(%esp)
 84e03f9:	08 
 84e03fa:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84e0401:	08 
 84e0402:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84e0409:	e8 fc 37 5f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84e040e:	e9 a4 01 00 00       	jmp    84e05b7 <_ZN27Inter_VillageAttackedReward17_send_reward_itemEP5CUsermii+0x227>
 84e0413:	8b 45 8f             	mov    -0x71(%ebp),%eax
 84e0416:	83 f8 01             	cmp    $0x1,%eax
 84e0419:	75 06                	jne    84e0421 <_ZN27Inter_VillageAttackedReward17_send_reward_itemEP5CUsermii+0x91>
 84e041b:	66 c7 45 98 01 00    	movw   $0x1,-0x68(%ebp)
 84e0421:	8d 95 8d fe ff ff    	lea    -0x173(%ebp),%edx
 84e0427:	bb 00 01 00 00       	mov    $0x100,%ebx
 84e042c:	b8 00 00 00 00       	mov    $0x0,%eax
 84e0431:	89 d1                	mov    %edx,%ecx
 84e0433:	83 e1 01             	and    $0x1,%ecx
 84e0436:	85 c9                	test   %ecx,%ecx
 84e0438:	74 08                	je     84e0442 <_ZN27Inter_VillageAttackedReward17_send_reward_itemEP5CUsermii+0xb2>
 84e043a:	88 02                	mov    %al,(%edx)
 84e043c:	83 c2 01             	add    $0x1,%edx
 84e043f:	83 eb 01             	sub    $0x1,%ebx
 84e0442:	89 d1                	mov    %edx,%ecx
 84e0444:	83 e1 02             	and    $0x2,%ecx
 84e0447:	85 c9                	test   %ecx,%ecx
 84e0449:	74 09                	je     84e0454 <_ZN27Inter_VillageAttackedReward17_send_reward_itemEP5CUsermii+0xc4>
 84e044b:	66 89 02             	mov    %ax,(%edx)
 84e044e:	83 c2 02             	add    $0x2,%edx
 84e0451:	83 eb 02             	sub    $0x2,%ebx
 84e0454:	89 d9                	mov    %ebx,%ecx
 84e0456:	c1 e9 02             	shr    $0x2,%ecx
 84e0459:	89 d7                	mov    %edx,%edi
 84e045b:	f3 ab                	rep stos %eax,%es:(%edi)
 84e045d:	89 fa                	mov    %edi,%edx
 84e045f:	89 d9                	mov    %ebx,%ecx
 84e0461:	83 e1 02             	and    $0x2,%ecx
 84e0464:	85 c9                	test   %ecx,%ecx
 84e0466:	74 06                	je     84e046e <_ZN27Inter_VillageAttackedReward17_send_reward_itemEP5CUsermii+0xde>
 84e0468:	66 89 02             	mov    %ax,(%edx)
 84e046b:	83 c2 02             	add    $0x2,%edx
 84e046e:	89 d9                	mov    %ebx,%ecx
 84e0470:	83 e1 01             	and    $0x1,%ecx
 84e0473:	85 c9                	test   %ecx,%ecx
 84e0475:	74 05                	je     84e047c <_ZN27Inter_VillageAttackedReward17_send_reward_itemEP5CUsermii+0xec>
 84e0477:	88 02                	mov    %al,(%edx)
 84e0479:	83 c2 01             	add    $0x1,%edx
 84e047c:	8d 45 ca             	lea    -0x36(%ebp),%eax
 84e047f:	bb 1e 00 00 00       	mov    $0x1e,%ebx
 84e0484:	ba 00 00 00 00       	mov    $0x0,%edx
 84e0489:	89 c1                	mov    %eax,%ecx
 84e048b:	83 e1 02             	and    $0x2,%ecx
 84e048e:	85 c9                	test   %ecx,%ecx
 84e0490:	74 09                	je     84e049b <_ZN27Inter_VillageAttackedReward17_send_reward_itemEP5CUsermii+0x10b>
 84e0492:	66 89 10             	mov    %dx,(%eax)
 84e0495:	83 c0 02             	add    $0x2,%eax
 84e0498:	83 eb 02             	sub    $0x2,%ebx
 84e049b:	89 de                	mov    %ebx,%esi
 84e049d:	83 e6 fc             	and    $0xfffffffc,%esi
 84e04a0:	b9 00 00 00 00       	mov    $0x0,%ecx
 84e04a5:	89 14 08             	mov    %edx,(%eax,%ecx,1)
 84e04a8:	83 c1 04             	add    $0x4,%ecx
 84e04ab:	39 f1                	cmp    %esi,%ecx
 84e04ad:	72 f6                	jb     84e04a5 <_ZN27Inter_VillageAttackedReward17_send_reward_itemEP5CUsermii+0x115>
 84e04af:	01 c8                	add    %ecx,%eax
 84e04b1:	89 d9                	mov    %ebx,%ecx
 84e04b3:	83 e1 02             	and    $0x2,%ecx
 84e04b6:	85 c9                	test   %ecx,%ecx
 84e04b8:	74 06                	je     84e04c0 <_ZN27Inter_VillageAttackedReward17_send_reward_itemEP5CUsermii+0x130>
 84e04ba:	66 89 10             	mov    %dx,(%eax)
 84e04bd:	83 c0 02             	add    $0x2,%eax
 84e04c0:	89 d9                	mov    %ebx,%ecx
 84e04c2:	83 e1 01             	and    $0x1,%ecx
 84e04c5:	85 c9                	test   %ecx,%ecx
 84e04c7:	74 05                	je     84e04ce <_ZN27Inter_VillageAttackedReward17_send_reward_itemEP5CUsermii+0x13e>
 84e04c9:	88 10                	mov    %dl,(%eax)
 84e04cb:	83 c0 01             	add    $0x1,%eax
 84e04ce:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e04d5:	00 
 84e04d6:	c7 44 24 08 ea 9a c8 	movl   $0x8c89aea,0x8(%esp)
 84e04dd:	08 
 84e04de:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84e04e5:	00 
 84e04e6:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84e04ed:	e8 0c 53 5c 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84e04f2:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 84e04f9:	00 
 84e04fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e04fe:	8d 45 ca             	lea    -0x36(%ebp),%eax
 84e0501:	89 04 24             	mov    %eax,(%esp)
 84e0504:	e8 c7 d3 b9 ff       	call   807d8d0 <strncpy@plt>
 84e0509:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e0510:	00 
 84e0511:	c7 44 24 08 fe 9a c8 	movl   $0x8c89afe,0x8(%esp)
 84e0518:	08 
 84e0519:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84e0520:	00 
 84e0521:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84e0528:	e8 d1 52 5c 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84e052d:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 84e0534:	00 
 84e0535:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e0539:	8d 85 8d fe ff ff    	lea    -0x173(%ebp),%eax
 84e053f:	89 04 24             	mov    %eax,(%esp)
 84e0542:	e8 89 d3 b9 ff       	call   807d8d0 <strncpy@plt>
 84e0547:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e054a:	89 04 24             	mov    %eax,(%esp)
 84e054d:	e8 3e b7 be ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84e0552:	89 c3                	mov    %eax,%ebx
 84e0554:	8d 85 8d fe ff ff    	lea    -0x173(%ebp),%eax
 84e055a:	89 04 24             	mov    %eax,(%esp)
 84e055d:	e8 4e de b9 ff       	call   807e3b0 <strlen@plt>
 84e0562:	89 c6                	mov    %eax,%esi
 84e0564:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e0567:	89 04 24             	mov    %eax,(%esp)
 84e056a:	e8 df b6 be ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84e056f:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 84e0576:	00 
 84e0577:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 84e057e:	00 
 84e057f:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 84e0583:	c7 44 24 18 0c 00 00 	movl   $0xc,0x18(%esp)
 84e058a:	00 
 84e058b:	89 74 24 14          	mov    %esi,0x14(%esp)
 84e058f:	8d 95 8d fe ff ff    	lea    -0x173(%ebp),%edx
 84e0595:	89 54 24 10          	mov    %edx,0x10(%esp)
 84e0599:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84e059d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84e05a4:	00 
 84e05a5:	8d 45 8d             	lea    -0x73(%ebp),%eax
 84e05a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e05ac:	8d 45 ca             	lea    -0x36(%ebp),%eax
 84e05af:	89 04 24             	mov    %eax,(%esp)
 84e05b2:	e8 31 50 07 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 84e05b7:	81 c4 9c 01 00 00    	add    $0x19c,%esp
 84e05bd:	5b                   	pop    %ebx
 84e05be:	5e                   	pop    %esi
 84e05bf:	5f                   	pop    %edi
 84e05c0:	5d                   	pop    %ebp
 84e05c1:	c3                   	ret

```

```c
// Inter_VillageAttackedReward::_send_reward_item @ 0x84e0390

/* WARNING: Removing unreachable block (ram,0x084e04c9) */
/* Inter_VillageAttackedReward::_send_reward_item(CUser*, unsigned long, int, int) */

void Inter_VillageAttackedReward::_send_reward_item
               (CUser *param_1,ulong param_2,int param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  bool bVar9;
  byte bVar10;
  char local_177;
  char local_176 [255];
  Inven_Item local_77 [2];
  int local_75;
  undefined2 local_6c;
  char local_3a [42];
  
  bVar10 = 0;
  Inven_Item::Inven_Item(local_77);
  local_75 = param_3;
  iVar2 = G_CDataManager();
  CItemList::create_item(*(CItemList **)(iVar2 + 0xc),0,local_77,param_4);
  if (local_75 == -1) {
    LogManager::logFormat
              (1,"InterDispatcher.cpp",
               "void Inter_VillageAttackedReward::_send_reward_item(CUser*, itemIndexOnlyServer_t, int, int)"
               ,0x4dbc,"VillageAttackedReward Invalid Item Index [item:%u]",0xffffffff);
  }
  else {
    if (local_75 == 1) {
      local_6c = 1;
    }
    pcVar7 = &local_177;
    uVar8 = 0x100;
    bVar9 = ((uint)pcVar7 & 1) != 0;
    if (bVar9) {
      local_177 = '\0';
      pcVar7 = local_176;
      uVar8 = 0xff;
    }
    if (((uint)pcVar7 & 2) != 0) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7 = pcVar7 + 2;
      uVar8 = uVar8 - 2;
    }
    for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + ((uint)bVar10 * -2 + 1) * 4;
    }
    if ((uVar8 & 2) != 0) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7 = pcVar7 + 2;
    }
    if (bVar9) {
      *pcVar7 = '\0';
    }
    pcVar7 = local_3a;
    uVar8 = 0x1e;
    bVar9 = ((uint)pcVar7 & 2) != 0;
    if (bVar9) {
      local_3a[0] = '\0';
      local_3a[1] = '\0';
      pcVar7 = local_3a + 2;
      uVar8 = 0x1c;
    }
    uVar6 = 0;
    do {
      pcVar1 = pcVar7 + uVar6;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar6 = uVar6 + 4;
    } while (uVar6 < (uVar8 & 0xfffffffc));
    if (!bVar9) {
      (pcVar7 + uVar6)[0] = '\0';
      (pcVar7 + uVar6)[1] = '\0';
    }
    pcVar7 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_124",(bool *)0x0);
    strncpy(local_3a,pcVar7,0x1d);
    pcVar7 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_125",(bool *)0x0);
    strncpy(&local_177,pcVar7,0xff);
    uVar3 = CUser::GetServerGroup((CUser *)param_2);
    sVar4 = strlen(&local_177);
    uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
              (local_3a,local_77,0,uVar5,&local_177,sVar4,0xc,uVar3,0,0);
  }
  return;
}

```

---

## dispatch_sig

```asm
// === 084dfea6 Inter_VillageAttackedReward::dispatch_sig  [0x084dfea6-0x84e038f] ===
 84dfea6:	55                   	push   %ebp
 84dfea7:	89 e5                	mov    %esp,%ebp
 84dfea9:	57                   	push   %edi
 84dfeaa:	56                   	push   %esi
 84dfeab:	53                   	push   %ebx
 84dfeac:	81 ec ec 01 00 00    	sub    $0x1ec,%esp
 84dfeb2:	e8 f0 a4 bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84dfeb7:	89 04 24             	mov    %eax,(%esp)
 84dfeba:	e8 5f 14 c1 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 84dfebf:	84 c0                	test   %al,%al
 84dfec1:	74 0a                	je     84dfecd <_ZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPci+0x27>
 84dfec3:	b8 00 00 00 00       	mov    $0x0,%eax
 84dfec8:	e9 b8 04 00 00       	jmp    84e0385 <_ZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPci+0x4df>
 84dfecd:	e8 af c2 be ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84dfed2:	8b 80 a8 01 00 00    	mov    0x1a8(%eax),%eax
 84dfed8:	83 f8 01             	cmp    $0x1,%eax
 84dfedb:	74 10                	je     84dfeed <_ZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPci+0x47>
 84dfedd:	e8 9f c2 be ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84dfee2:	8b 80 a8 01 00 00    	mov    0x1a8(%eax),%eax
 84dfee8:	83 f8 02             	cmp    $0x2,%eax
 84dfeeb:	75 07                	jne    84dfef4 <_ZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPci+0x4e>
 84dfeed:	b8 01 00 00 00       	mov    $0x1,%eax
 84dfef2:	eb 05                	jmp    84dfef9 <_ZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPci+0x53>
 84dfef4:	b8 00 00 00 00       	mov    $0x0,%eax
 84dfef9:	84 c0                	test   %al,%al
 84dfefb:	74 0a                	je     84dff07 <_ZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPci+0x61>
 84dfefd:	b8 00 00 00 00       	mov    $0x0,%eax
 84dff02:	e9 7e 04 00 00       	jmp    84e0385 <_ZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPci+0x4df>
 84dff07:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84dff0b:	75 0a                	jne    84dff17 <_ZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPci+0x71>
 84dff0d:	b8 00 00 00 00       	mov    $0x0,%eax
 84dff12:	e9 6e 04 00 00       	jmp    84e0385 <_ZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPci+0x4df>
 84dff17:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dff1a:	89 04 24             	mov    %eax,(%esp)
 84dff1d:	e8 10 05 c4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84dff22:	85 c0                	test   %eax,%eax
 84dff24:	0f 94 c0             	sete   %al
 84dff27:	84 c0                	test   %al,%al
 84dff29:	74 0a                	je     84dff35 <_ZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPci+0x8f>
 84dff2b:	b8 00 00 00 00       	mov    $0x0,%eax
 84dff30:	e9 50 04 00 00       	jmp    84e0385 <_ZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPci+0x4df>
 84dff35:	8b 45 10             	mov    0x10(%ebp),%eax
 84dff38:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84dff3b:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84dff42:	ff 
 84dff43:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dff46:	89 04 24             	mov    %eax,(%esp)
 84dff49:	e8 52 e0 16 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84dff4e:	89 c2                	mov    %eax,%edx
 84dff50:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84dff53:	8b 40 0e             	mov    0xe(%eax),%eax
 84dff56:	39 c2                	cmp    %eax,%edx
 84dff58:	0f 95 c0             	setne  %al
 84dff5b:	84 c0                	test   %al,%al
 84dff5d:	74 0a                	je     84dff69 <_ZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPci+0xc3>
 84dff5f:	b8 00 00 00 00       	mov    $0x0,%eax
 84dff64:	e9 1c 04 00 00       	jmp    84e0385 <_ZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPci+0x4df>
 84dff69:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84dff6c:	8b 40 16             	mov    0x16(%eax),%eax
 84dff6f:	83 f8 05             	cmp    $0x5,%eax
 84dff72:	0f 84 ac 01 00 00    	je     84e0124 <_ZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPci+0x27e>
 84dff78:	83 f8 06             	cmp    $0x6,%eax
 84dff7b:	0f 84 a5 02 00 00    	je     84e0226 <_ZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPci+0x380>
 84dff81:	83 f8 03             	cmp    $0x3,%eax
 84dff84:	0f 85 f6 03 00 00    	jne    84e0380 <_ZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPci+0x4da>
 84dff8a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dff91:	00 
 84dff92:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dff95:	89 04 24             	mov    %eax,(%esp)
 84dff98:	e8 b3 c8 00 00       	call   84ec850 <_ZN5CUser24SetVillageAttackedRewardEb>
 84dff9d:	8d 85 4f ff ff ff    	lea    -0xb1(%ebp),%eax
 84dffa3:	89 04 24             	mov    %eax,(%esp)
 84dffa6:	e8 a9 b8 be ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 84dffab:	c7 85 51 ff ff ff 01 	movl   $0x1,-0xaf(%ebp)
 84dffb2:	00 00 00 
 84dffb5:	e8 e1 c1 be ff       	call   80cc19b <_Z14G_CDataManagerv>
 84dffba:	8b 40 0c             	mov    0xc(%eax),%eax
 84dffbd:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84dffc4:	00 
 84dffc5:	8d 95 4f ff ff ff    	lea    -0xb1(%ebp),%edx
 84dffcb:	89 54 24 08          	mov    %edx,0x8(%esp)
 84dffcf:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84dffd6:	00 
 84dffd7:	89 04 24             	mov    %eax,(%esp)
 84dffda:	e8 d9 1f 03 00       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 84dffdf:	66 c7 85 5a ff ff ff 	movw   $0x1,-0xa6(%ebp)
 84dffe6:	01 00 
 84dffe8:	8b 85 51 ff ff ff    	mov    -0xaf(%ebp),%eax
 84dffee:	83 f8 ff             	cmp    $0xffffffff,%eax
 84dfff1:	75 40                	jne    84e0033 <_ZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPci+0x18d>
 84dfff3:	8b 85 51 ff ff ff    	mov    -0xaf(%ebp),%eax
 84dfff9:	89 44 24 14          	mov    %eax,0x14(%esp)
 84dfffd:	c7 44 24 10 ac 9a c8 	movl   $0x8c89aac,0x10(%esp)
 84e0004:	08 
 84e0005:	c7 44 24 0c 5f 4d 00 	movl   $0x4d5f,0xc(%esp)
 84e000c:	00 
 84e000d:	c7 44 24 08 e0 ba c8 	movl   $0x8c8bae0,0x8(%esp)
 84e0014:	08 
 84e0015:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84e001c:	08 
 84e001d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84e0024:	e8 e1 3b 5f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84e0029:	b8 00 00 00 00       	mov    $0x0,%eax
 84e002e:	e9 52 03 00 00       	jmp    84e0385 <_ZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPci+0x4df>
 84e0033:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e003a:	00 
 84e003b:	c7 44 24 08 ea 9a c8 	movl   $0x8c89aea,0x8(%esp)
 84e0042:	08 
 84e0043:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84e004a:	00 
 84e004b:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84e0052:	e8 a7 57 5c 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84e0057:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 84e005e:	00 
 84e005f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e0063:	8d 45 ab             	lea    -0x55(%ebp),%eax
 84e0066:	89 04 24             	mov    %eax,(%esp)
 84e0069:	e8 62 d8 b9 ff       	call   807d8d0 <strncpy@plt>
 84e006e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e0075:	00 
 84e0076:	c7 44 24 08 fe 9a c8 	movl   $0x8c89afe,0x8(%esp)
 84e007d:	08 
 84e007e:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84e0085:	00 
 84e0086:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84e008d:	e8 6c 57 5c 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84e0092:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 84e0099:	00 
 84e009a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e009e:	8d 85 4f fe ff ff    	lea    -0x1b1(%ebp),%eax
 84e00a4:	89 04 24             	mov    %eax,(%esp)
 84e00a7:	e8 24 d8 b9 ff       	call   807d8d0 <strncpy@plt>
 84e00ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e00af:	89 04 24             	mov    %eax,(%esp)
 84e00b2:	e8 d9 bb be ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84e00b7:	89 c3                	mov    %eax,%ebx
 84e00b9:	8d 85 4f fe ff ff    	lea    -0x1b1(%ebp),%eax
 84e00bf:	89 04 24             	mov    %eax,(%esp)
 84e00c2:	e8 e9 e2 b9 ff       	call   807e3b0 <strlen@plt>
 84e00c7:	89 c6                	mov    %eax,%esi
 84e00c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e00cc:	89 04 24             	mov    %eax,(%esp)
 84e00cf:	e8 7a bb be ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84e00d4:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 84e00db:	00 
 84e00dc:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 84e00e3:	00 
 84e00e4:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 84e00e8:	c7 44 24 18 1e 00 00 	movl   $0x1e,0x18(%esp)
 84e00ef:	00 
 84e00f0:	89 74 24 14          	mov    %esi,0x14(%esp)
 84e00f4:	8d 95 4f fe ff ff    	lea    -0x1b1(%ebp),%edx
 84e00fa:	89 54 24 10          	mov    %edx,0x10(%esp)
 84e00fe:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84e0102:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84e0109:	00 
 84e010a:	8d 85 4f ff ff ff    	lea    -0xb1(%ebp),%eax
 84e0110:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e0114:	8d 45 ab             	lea    -0x55(%ebp),%eax
 84e0117:	89 04 24             	mov    %eax,(%esp)
 84e011a:	e8 c9 54 07 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 84e011f:	e9 5c 02 00 00       	jmp    84e0380 <_ZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPci+0x4da>
 84e0124:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84e0127:	8b 40 12             	mov    0x12(%eax),%eax
 84e012a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e0131:	00 
 84e0132:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84e0139:	00 
 84e013a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e013e:	8d 45 9c             	lea    -0x64(%ebp),%eax
 84e0141:	89 04 24             	mov    %eax,(%esp)
 84e0144:	e8 ff cf 00 00       	call   84ed148 <_ZN28Arad_VillageAttackRewardItem4DataC1Eimi>
 84e0149:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84e014c:	8b 58 12             	mov    0x12(%eax),%ebx
 84e014f:	e8 a6 7d cb ff       	call   8197efa <_ZN4ARAD9SingletonINS_16Arad_DataManagerEE3GetEv>
 84e0154:	89 04 24             	mov    %eax,(%esp)
 84e0157:	e8 18 d0 00 00       	call   84ed174 <_ZN4ARAD16Arad_DataManager26getAradVillageAttackRewardEv>
 84e015c:	8d 55 9c             	lea    -0x64(%ebp),%edx
 84e015f:	89 54 24 08          	mov    %edx,0x8(%esp)
 84e0163:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e0167:	89 04 24             	mov    %eax,(%esp)
 84e016a:	e8 cd 3c cc ff       	call   81a3e3c <_ZN28Arad_VillageAttackRewardItem16find_reward_itemEiRNS_4DataE>
 84e016f:	84 c0                	test   %al,%al
 84e0171:	0f 84 08 02 00 00    	je     84e037f <_ZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPci+0x4d9>
 84e0177:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e017e:	00 
 84e017f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e0182:	89 04 24             	mov    %eax,(%esp)
 84e0185:	e8 c6 c6 00 00       	call   84ec850 <_ZN5CUser24SetVillageAttackedRewardEb>
 84e018a:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 84e018d:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 84e0190:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84e0193:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84e0197:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84e019b:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e019f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e01a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e01a6:	8b 45 08             	mov    0x8(%ebp),%eax
 84e01a9:	89 04 24             	mov    %eax,(%esp)
 84e01ac:	e8 df 01 00 00       	call   84e0390 <_ZN27Inter_VillageAttackedReward17_send_reward_itemEP5CUsermii>
 84e01b1:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 84e01b4:	89 85 40 fe ff ff    	mov    %eax,-0x1c0(%ebp)
 84e01ba:	8b 7d a0             	mov    -0x60(%ebp),%edi
 84e01bd:	8b 75 9c             	mov    -0x64(%ebp),%esi
 84e01c0:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84e01c7:	ff 
 84e01c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e01cb:	89 04 24             	mov    %eax,(%esp)
 84e01ce:	e8 cd dd 16 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84e01d3:	89 c3                	mov    %eax,%ebx
 84e01d5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e01dc:	00 
 84e01dd:	c7 44 24 08 7b 4d 00 	movl   $0x4d7b,0x8(%esp)
 84e01e4:	00 
 84e01e5:	c7 44 24 04 e0 ba c8 	movl   $0x8c8bae0,0x4(%esp)
 84e01ec:	08 
 84e01ed:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84e01f0:	89 04 24             	mov    %eax,(%esp)
 84e01f3:	e8 20 f5 06 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84e01f8:	8b 85 40 fe ff ff    	mov    -0x1c0(%ebp),%eax
 84e01fe:	89 44 24 14          	mov    %eax,0x14(%esp)
 84e0202:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84e0206:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84e020a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84e020e:	c7 44 24 04 14 9b c8 	movl   $0x8c89b14,0x4(%esp)
 84e0215:	08 
 84e0216:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84e0219:	89 04 24             	mov    %eax,(%esp)
 84e021c:	e8 67 f5 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e0221:	e9 5a 01 00 00       	jmp    84e0380 <_ZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPci+0x4da>
 84e0226:	8d 45 8c             	lea    -0x74(%ebp),%eax
 84e0229:	89 04 24             	mov    %eax,(%esp)
 84e022c:	e8 27 40 cc ff       	call   81a4258 <_ZN28Arad_VillageAttackRewardItem8RankDataC1Ev>
 84e0231:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84e0234:	8b 40 12             	mov    0x12(%eax),%eax
 84e0237:	0f bf d8             	movswl %ax,%ebx
 84e023a:	e8 bb 7c cb ff       	call   8197efa <_ZN4ARAD9SingletonINS_16Arad_DataManagerEE3GetEv>
 84e023f:	89 04 24             	mov    %eax,(%esp)
 84e0242:	e8 2d cf 00 00       	call   84ed174 <_ZN4ARAD16Arad_DataManager26getAradVillageAttackRewardEv>
 84e0247:	8d 55 8c             	lea    -0x74(%ebp),%edx
 84e024a:	89 54 24 08          	mov    %edx,0x8(%esp)
 84e024e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e0252:	89 04 24             	mov    %eax,(%esp)
 84e0255:	e8 96 3c cc ff       	call   81a3ef0 <_ZN28Arad_VillageAttackRewardItem24find_ranking_reward_itemEsRNS_8RankDataE>
 84e025a:	84 c0                	test   %al,%al
 84e025c:	0f 84 e0 00 00 00    	je     84e0342 <_ZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPci+0x49c>
 84e0262:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84e0269:	e9 c3 00 00 00       	jmp    84e0331 <_ZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPci+0x48b>
 84e026e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e0271:	8b 44 85 8c          	mov    -0x74(%ebp,%eax,4),%eax
 84e0275:	85 c0                	test   %eax,%eax
 84e0277:	0f 84 af 00 00 00    	je     84e032c <_ZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPci+0x486>
 84e027d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84e0280:	8b 48 12             	mov    0x12(%eax),%ecx
 84e0283:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e0286:	8b 54 85 94          	mov    -0x6c(%ebp,%eax,4),%edx
 84e028a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e028d:	8b 44 85 8c          	mov    -0x74(%ebp,%eax,4),%eax
 84e0291:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84e0295:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84e0299:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e029d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e02a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e02a4:	8b 45 08             	mov    0x8(%ebp),%eax
 84e02a7:	89 04 24             	mov    %eax,(%esp)
 84e02aa:	e8 e1 00 00 00       	call   84e0390 <_ZN27Inter_VillageAttackedReward17_send_reward_itemEP5CUsermii>
 84e02af:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e02b2:	8b 44 85 94          	mov    -0x6c(%ebp,%eax,4),%eax
 84e02b6:	89 85 44 fe ff ff    	mov    %eax,-0x1bc(%ebp)
 84e02bc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e02bf:	8b 7c 85 8c          	mov    -0x74(%ebp,%eax,4),%edi
 84e02c3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84e02c6:	8b 70 12             	mov    0x12(%eax),%esi
 84e02c9:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84e02d0:	ff 
 84e02d1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e02d4:	89 04 24             	mov    %eax,(%esp)
 84e02d7:	e8 c4 dc 16 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84e02dc:	89 c3                	mov    %eax,%ebx
 84e02de:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e02e5:	00 
 84e02e6:	c7 44 24 08 8c 4d 00 	movl   $0x4d8c,0x8(%esp)
 84e02ed:	00 
 84e02ee:	c7 44 24 04 e0 ba c8 	movl   $0x8c8bae0,0x4(%esp)
 84e02f5:	08 
 84e02f6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84e02f9:	89 04 24             	mov    %eax,(%esp)
 84e02fc:	e8 17 f4 06 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84e0301:	8b 85 44 fe ff ff    	mov    -0x1bc(%ebp),%eax
 84e0307:	89 44 24 14          	mov    %eax,0x14(%esp)
 84e030b:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84e030f:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84e0313:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84e0317:	c7 44 24 04 68 9b c8 	movl   $0x8c89b68,0x4(%esp)
 84e031e:	08 
 84e031f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84e0322:	89 04 24             	mov    %eax,(%esp)
 84e0325:	e8 5e f4 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e032a:	eb 01                	jmp    84e032d <_ZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPci+0x487>
 84e032c:	90                   	nop
 84e032d:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 84e0331:	83 7d e4 01          	cmpl   $0x1,-0x1c(%ebp)
 84e0335:	0f 9e c0             	setle  %al
 84e0338:	84 c0                	test   %al,%al
 84e033a:	0f 85 2e ff ff ff    	jne    84e026e <_ZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPci+0x3c8>
 84e0340:	eb 3e                	jmp    84e0380 <_ZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPci+0x4da>
 84e0342:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84e0345:	8b 40 12             	mov    0x12(%eax),%eax
 84e0348:	89 44 24 14          	mov    %eax,0x14(%esp)
 84e034c:	c7 44 24 10 bc 9b c8 	movl   $0x8c89bbc,0x10(%esp)
 84e0353:	08 
 84e0354:	c7 44 24 0c 92 4d 00 	movl   $0x4d92,0xc(%esp)
 84e035b:	00 
 84e035c:	c7 44 24 08 e0 ba c8 	movl   $0x8c8bae0,0x8(%esp)
 84e0363:	08 
 84e0364:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84e036b:	08 
 84e036c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84e0373:	e8 92 38 5f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84e0378:	b8 00 00 00 00       	mov    $0x0,%eax
 84e037d:	eb 06                	jmp    84e0385 <_ZN27Inter_VillageAttackedReward12dispatch_sigEP5CUserPci+0x4df>
 84e037f:	90                   	nop
 84e0380:	b8 00 00 00 00       	mov    $0x0,%eax
 84e0385:	81 c4 ec 01 00 00    	add    $0x1ec,%esp
 84e038b:	5b                   	pop    %ebx
 84e038c:	5e                   	pop    %esi
 84e038d:	5f                   	pop    %edi
 84e038e:	5d                   	pop    %ebp
 84e038f:	c3                   	ret

```

```c
// Inter_VillageAttackedReward::dispatch_sig @ 0x84dfea6

/* Inter_VillageAttackedReward::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_VillageAttackedReward::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  GameWorld *this;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  size_t sVar6;
  undefined4 uVar7;
  Arad_DataManager *pAVar8;
  Arad_VillageAttackRewardItem *pAVar9;
  undefined4 uVar10;
  char local_1b5 [256];
  Inven_Item local_b5 [2];
  int local_b3;
  undefined2 local_aa;
  RankData local_78 [8];
  int aiStack_70 [2];
  undefined4 local_68;
  int local_64;
  int local_60;
  char local_59 [21];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  int local_24;
  int local_20;
  
  this = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsIntegratedPvPBaseChannel(this);
  if (cVar2 == '\0') {
    iVar3 = G_CEnvironment();
    if ((*(int *)(iVar3 + 0x1a8) == 1) || (iVar3 = G_CEnvironment(), *(int *)(iVar3 + 0x1a8) == 2))
    {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (((!bVar1) && (param_2 != (char *)0x0)) &&
       (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar3 != 0)) {
      local_24 = param_3;
      iVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      if (iVar3 == *(int *)(local_24 + 0xe)) {
        iVar3 = *(int *)(local_24 + 0x16);
        if (iVar3 == 5) {
          Arad_VillageAttackRewardItem::Data::Data((Data *)&local_68,*(int *)(local_24 + 0x12),0,0);
          iVar3 = *(int *)(local_24 + 0x12);
          pAVar8 = (Arad_DataManager *)ARAD::Singleton<ARAD::Arad_DataManager>::Get();
          pAVar9 = (Arad_VillageAttackRewardItem *)
                   ARAD::Arad_DataManager::getAradVillageAttackReward(pAVar8);
          cVar2 = Arad_VillageAttackRewardItem::find_reward_item(pAVar9,iVar3,(Data *)&local_68);
          if (cVar2 != '\0') {
            CUser::SetVillageAttackedReward((CUser *)param_2,true);
            _send_reward_item(param_1,(ulong)param_2,local_64,local_60);
            uVar5 = CUser::get_charac_no((CUser *)param_2,-1);
            cMyTrace::cMyTrace(local_44,
                               "virtual int Inter_VillageAttackedReward::dispatch_sig(CUser*, char*, int)"
                               ,0x4d7b,0);
            cMyTrace::operator()
                      (local_44,
                       "VillageAttacked Reward WinPoint Item Index. [charac:%u][win:%d][item:%u][count:%d]"
                       ,uVar5,local_68,local_64,local_60);
          }
        }
        else if (iVar3 == 6) {
          Arad_VillageAttackRewardItem::RankData::RankData(local_78);
          uVar5 = *(undefined4 *)(local_24 + 0x12);
          pAVar8 = (Arad_DataManager *)ARAD::Singleton<ARAD::Arad_DataManager>::Get();
          pAVar9 = (Arad_VillageAttackRewardItem *)
                   ARAD::Arad_DataManager::getAradVillageAttackReward(pAVar8);
          cVar2 = Arad_VillageAttackRewardItem::find_ranking_reward_item
                            (pAVar9,(short)uVar5,local_78);
          if (cVar2 == '\0') {
            LogManager::logFormat
                      (1,"InterDispatcher.cpp",
                       "virtual int Inter_VillageAttackedReward::dispatch_sig(CUser*, char*, int)",
                       0x4d92,"VillageAttackedReward Invalid Rank. [rank:%d]",
                       *(undefined4 *)(local_24 + 0x12));
          }
          else {
            for (local_20 = 0; local_20 < 2; local_20 = local_20 + 1) {
              if (*(int *)(local_78 + local_20 * 4) != 0) {
                _send_reward_item(param_1,(ulong)param_2,*(int *)(local_78 + local_20 * 4),
                                  aiStack_70[local_20]);
                iVar3 = aiStack_70[local_20];
                uVar5 = *(undefined4 *)(local_78 + local_20 * 4);
                uVar7 = *(undefined4 *)(local_24 + 0x12);
                uVar10 = CUser::get_charac_no((CUser *)param_2,-1);
                cMyTrace::cMyTrace(local_34,
                                   "virtual int Inter_VillageAttackedReward::dispatch_sig(CUser*, char*, int)"
                                   ,0x4d8c,0);
                cMyTrace::operator()
                          (local_34,
                           "VillageAttacked Reward Ranker Item Index. [charac:%u][rank:%d][item:%u][count:%d]"
                           ,uVar10,uVar7,uVar5,iVar3);
              }
            }
          }
        }
        else if (iVar3 == 3) {
          CUser::SetVillageAttackedReward((CUser *)param_2,true);
          Inven_Item::Inven_Item(local_b5);
          local_b3 = 1;
          iVar3 = G_CDataManager();
          CItemList::create_item(*(CItemList **)(iVar3 + 0xc),3,local_b5,1);
          local_aa = 1;
          if (local_b3 == -1) {
            LogManager::logFormat
                      (1,"InterDispatcher.cpp",
                       "virtual int Inter_VillageAttackedReward::dispatch_sig(CUser*, char*, int)",
                       0x4d5f,"Inter_VillageAttackedReward::dispatch_sig() error item_id(%d)",
                       0xffffffff);
          }
          else {
            pcVar4 = (char *)RDARScriptStringManager::findString
                                       ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                        "game_server_msg_124",(bool *)0x0);
            strncpy(local_59,pcVar4,0x14);
            pcVar4 = (char *)RDARScriptStringManager::findString
                                       ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                        "game_server_msg_125",(bool *)0x0);
            strncpy(local_1b5,pcVar4,0xff);
            uVar5 = CUser::GetServerGroup((CUser *)param_2);
            sVar6 = strlen(local_1b5);
            uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
            WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                      (local_59,local_b5,0,uVar7,local_1b5,sVar6,0x1e,uVar5,0,0);
          }
        }
      }
    }
  }
  return 0;
}

```

