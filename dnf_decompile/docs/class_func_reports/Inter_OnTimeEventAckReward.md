# Inter_OnTimeEventAckReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## SendOnTimeRewardByMail

```asm
// === 084e1578 Inter_OnTimeEventAckReward::SendOnTimeRewardByMail  [0x084e1578-0x84e16f3] ===
 84e1578:	55                   	push   %ebp
 84e1579:	89 e5                	mov    %esp,%ebp
 84e157b:	53                   	push   %ebx
 84e157c:	81 ec 94 01 00 00    	sub    $0x194,%esp
 84e1582:	8b 5d 10             	mov    0x10(%ebp),%ebx
 84e1585:	e8 11 ac be ff       	call   80cc19b <_Z14G_CDataManagerv>
 84e158a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e158e:	89 04 24             	mov    %eax,(%esp)
 84e1591:	e8 9c e4 e7 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84e1596:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e1599:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84e159d:	0f 84 44 01 00 00    	je     84e16e7 <_ZN26Inter_OnTimeEventAckReward22SendOnTimeRewardByMailEjjj+0x16f>
 84e15a3:	8d 45 a2             	lea    -0x5e(%ebp),%eax
 84e15a6:	89 04 24             	mov    %eax,(%esp)
 84e15a9:	e8 a6 a2 be ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 84e15ae:	8b 45 10             	mov    0x10(%ebp),%eax
 84e15b1:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 84e15b4:	8b 5d 14             	mov    0x14(%ebp),%ebx
 84e15b7:	e8 df ab be ff       	call   80cc19b <_Z14G_CDataManagerv>
 84e15bc:	8b 40 0c             	mov    0xc(%eax),%eax
 84e15bf:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84e15c3:	8d 55 a2             	lea    -0x5e(%ebp),%edx
 84e15c6:	89 54 24 08          	mov    %edx,0x8(%esp)
 84e15ca:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e15d1:	00 
 84e15d2:	89 04 24             	mov    %eax,(%esp)
 84e15d5:	e8 de 09 03 00       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 84e15da:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 84e15dd:	85 c0                	test   %eax,%eax
 84e15df:	75 0f                	jne    84e15f0 <_ZN26Inter_OnTimeEventAckReward22SendOnTimeRewardByMailEjjj+0x78>
 84e15e1:	8d 45 a2             	lea    -0x5e(%ebp),%eax
 84e15e4:	89 04 24             	mov    %eax,(%esp)
 84e15e7:	e8 4e 62 c1 ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 84e15ec:	85 c0                	test   %eax,%eax
 84e15ee:	74 07                	je     84e15f7 <_ZN26Inter_OnTimeEventAckReward22SendOnTimeRewardByMailEjjj+0x7f>
 84e15f0:	b8 01 00 00 00       	mov    $0x1,%eax
 84e15f5:	eb 05                	jmp    84e15fc <_ZN26Inter_OnTimeEventAckReward22SendOnTimeRewardByMailEjjj+0x84>
 84e15f7:	b8 00 00 00 00       	mov    $0x0,%eax
 84e15fc:	84 c0                	test   %al,%al
 84e15fe:	0f 84 e6 00 00 00    	je     84e16ea <_ZN26Inter_OnTimeEventAckReward22SendOnTimeRewardByMailEjjj+0x172>
 84e1604:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e160b:	00 
 84e160c:	c7 44 24 08 08 9f c8 	movl   $0x8c89f08,0x8(%esp)
 84e1613:	08 
 84e1614:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84e161b:	00 
 84e161c:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84e1623:	e8 d6 41 5c 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84e1628:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 84e162f:	00 
 84e1630:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e1634:	8d 45 df             	lea    -0x21(%ebp),%eax
 84e1637:	89 04 24             	mov    %eax,(%esp)
 84e163a:	e8 91 c2 b9 ff       	call   807d8d0 <strncpy@plt>
 84e163f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e1646:	00 
 84e1647:	c7 44 24 08 1c 9f c8 	movl   $0x8c89f1c,0x8(%esp)
 84e164e:	08 
 84e164f:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84e1656:	00 
 84e1657:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84e165e:	e8 9b 41 5c 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84e1663:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 84e166a:	00 
 84e166b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e166f:	8d 85 a2 fe ff ff    	lea    -0x15e(%ebp),%eax
 84e1675:	89 04 24             	mov    %eax,(%esp)
 84e1678:	e8 53 c2 b9 ff       	call   807d8d0 <strncpy@plt>
 84e167d:	8d 85 a2 fe ff ff    	lea    -0x15e(%ebp),%eax
 84e1683:	89 04 24             	mov    %eax,(%esp)
 84e1686:	e8 25 cd b9 ff       	call   807e3b0 <strlen@plt>
 84e168b:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 84e1692:	00 
 84e1693:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 84e169a:	00 
 84e169b:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 84e16a2:	00 
 84e16a3:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 84e16aa:	00 
 84e16ab:	89 44 24 14          	mov    %eax,0x14(%esp)
 84e16af:	8d 85 a2 fe ff ff    	lea    -0x15e(%ebp),%eax
 84e16b5:	89 44 24 10          	mov    %eax,0x10(%esp)
 84e16b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e16bc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84e16c0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84e16c7:	00 
 84e16c8:	8d 45 a2             	lea    -0x5e(%ebp),%eax
 84e16cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e16cf:	8d 45 df             	lea    -0x21(%ebp),%eax
 84e16d2:	89 04 24             	mov    %eax,(%esp)
 84e16d5:	e8 0e 3f 07 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 84e16da:	8d 45 a2             	lea    -0x5e(%ebp),%eax
 84e16dd:	89 04 24             	mov    %eax,(%esp)
 84e16e0:	e8 f3 a0 be ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 84e16e5:	eb 04                	jmp    84e16eb <_ZN26Inter_OnTimeEventAckReward22SendOnTimeRewardByMailEjjj+0x173>
 84e16e7:	90                   	nop
 84e16e8:	eb 01                	jmp    84e16eb <_ZN26Inter_OnTimeEventAckReward22SendOnTimeRewardByMailEjjj+0x173>
 84e16ea:	90                   	nop
 84e16eb:	81 c4 94 01 00 00    	add    $0x194,%esp
 84e16f1:	5b                   	pop    %ebx
 84e16f2:	5d                   	pop    %ebp
 84e16f3:	c3                   	ret

```

```c
// Inter_OnTimeEventAckReward::SendOnTimeRewardByMail @ 0x84e1578

/* Inter_OnTimeEventAckReward::SendOnTimeRewardByMail(unsigned int, unsigned int, unsigned int) */

void __thiscall
Inter_OnTimeEventAckReward::SendOnTimeRewardByMail
          (Inter_OnTimeEventAckReward *this,uint param_1,uint param_2,uint param_3)

{
  bool bVar1;
  CDataManager *this_00;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  char local_162 [256];
  Inven_Item local_62 [2];
  uint local_60;
  char local_25 [21];
  int local_10;
  
  this_00 = (CDataManager *)G_CDataManager();
  local_10 = CDataManager::find_item(this_00,param_2);
  if (local_10 != 0) {
    Inven_Item::Inven_Item(local_62);
    local_60 = param_2;
    iVar2 = G_CDataManager();
    CItemList::create_item(*(CItemList **)(iVar2 + 0xc),0,local_62,param_3);
    if ((local_60 == 0) && (iVar2 = Inven_Item::get_add_info(local_62), iVar2 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      pcVar3 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_132",(bool *)0x0);
      strncpy(local_25,pcVar3,0x14);
      pcVar3 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_134",(bool *)0x0);
      strncpy(local_162,pcVar3,0xff);
      sVar4 = strlen(local_162);
      WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                (local_25,local_62,0,param_1,local_162,sVar4,0,0,0,0);
      Inven_Item::reset(local_62);
    }
  }
  return;
}

```

---

## dispatch_sig

```asm
// === 084e11ec Inter_OnTimeEventAckReward::dispatch_sig  [0x084e11ec-0x84e1577] ===
 84e11ec:	55                   	push   %ebp
 84e11ed:	89 e5                	mov    %esp,%ebp
 84e11ef:	57                   	push   %edi
 84e11f0:	56                   	push   %esi
 84e11f1:	53                   	push   %ebx
 84e11f2:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 84e11f8:	8b 45 10             	mov    0x10(%ebp),%eax
 84e11fb:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84e11fe:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e1201:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 84e1205:	0f bf d8             	movswl %ax,%ebx
 84e1208:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e120f:	00 
 84e1210:	c7 44 24 08 2d 50 00 	movl   $0x502d,0x8(%esp)
 84e1217:	00 
 84e1218:	c7 44 24 04 20 b9 c8 	movl   $0x8c8b920,0x4(%esp)
 84e121f:	08 
 84e1220:	8d 45 94             	lea    -0x6c(%ebp),%eax
 84e1223:	89 04 24             	mov    %eax,(%esp)
 84e1226:	e8 ed e4 06 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84e122b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84e122f:	c7 44 24 04 98 9d c8 	movl   $0x8c89d98,0x4(%esp)
 84e1236:	08 
 84e1237:	8d 45 94             	lea    -0x6c(%ebp),%eax
 84e123a:	89 04 24             	mov    %eax,(%esp)
 84e123d:	e8 46 e5 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e1242:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84e1246:	75 0a                	jne    84e1252 <_ZN26Inter_OnTimeEventAckReward12dispatch_sigEP5CUserPci+0x66>
 84e1248:	b8 00 00 00 00       	mov    $0x0,%eax
 84e124d:	e9 1a 03 00 00       	jmp    84e156c <_ZN26Inter_OnTimeEventAckReward12dispatch_sigEP5CUserPci+0x380>
 84e1252:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e1255:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 84e1259:	66 85 c0             	test   %ax,%ax
 84e125c:	0f 84 af 00 00 00    	je     84e1311 <_ZN26Inter_OnTimeEventAckReward12dispatch_sigEP5CUserPci+0x125>
 84e1262:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e1265:	89 04 24             	mov    %eax,(%esp)
 84e1268:	e8 1f 91 bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e126d:	83 f8 02             	cmp    $0x2,%eax
 84e1270:	0f 9f c0             	setg   %al
 84e1273:	84 c0                	test   %al,%al
 84e1275:	74 21                	je     84e1298 <_ZN26Inter_OnTimeEventAckReward12dispatch_sigEP5CUserPci+0xac>
 84e1277:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e127a:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 84e127e:	0f b6 c0             	movzbl %al,%eax
 84e1281:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e1285:	c7 44 24 04 20 01 00 	movl   $0x120,0x4(%esp)
 84e128c:	00 
 84e128d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e1290:	89 04 24             	mov    %eax,(%esp)
 84e1293:	e8 aa ac 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84e1298:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e129b:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 84e129f:	0f bf f8             	movswl %ax,%edi
 84e12a2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e12a5:	8b 70 10             	mov    0x10(%eax),%esi
 84e12a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e12ab:	89 04 24             	mov    %eax,(%esp)
 84e12ae:	e8 bb 90 bf ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84e12b3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e12ba:	00 
 84e12bb:	89 04 24             	mov    %eax,(%esp)
 84e12be:	e8 88 7d c2 ff       	call   810904b <_Z14NumberToStringji>
 84e12c3:	89 c3                	mov    %eax,%ebx
 84e12c5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e12cc:	00 
 84e12cd:	c7 44 24 08 3a 50 00 	movl   $0x503a,0x8(%esp)
 84e12d4:	00 
 84e12d5:	c7 44 24 04 20 b9 c8 	movl   $0x8c8b920,0x4(%esp)
 84e12dc:	08 
 84e12dd:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84e12e0:	89 04 24             	mov    %eax,(%esp)
 84e12e3:	e8 30 e4 06 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84e12e8:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84e12ec:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84e12f0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84e12f4:	c7 44 24 04 cc 9d c8 	movl   $0x8c89dcc,0x4(%esp)
 84e12fb:	08 
 84e12fc:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84e12ff:	89 04 24             	mov    %eax,(%esp)
 84e1302:	e8 81 e4 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e1307:	b8 00 00 00 00       	mov    $0x0,%eax
 84e130c:	e9 5b 02 00 00       	jmp    84e156c <_ZN26Inter_OnTimeEventAckReward12dispatch_sigEP5CUserPci+0x380>
 84e1311:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84e1315:	74 1f                	je     84e1336 <_ZN26Inter_OnTimeEventAckReward12dispatch_sigEP5CUserPci+0x14a>
 84e1317:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e131a:	89 04 24             	mov    %eax,(%esp)
 84e131d:	e8 10 f1 c3 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84e1322:	85 c0                	test   %eax,%eax
 84e1324:	74 10                	je     84e1336 <_ZN26Inter_OnTimeEventAckReward12dispatch_sigEP5CUserPci+0x14a>
 84e1326:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e1329:	89 04 24             	mov    %eax,(%esp)
 84e132c:	e8 5b 90 bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e1331:	83 f8 02             	cmp    $0x2,%eax
 84e1334:	7f 11                	jg     84e1347 <_ZN26Inter_OnTimeEventAckReward12dispatch_sigEP5CUserPci+0x15b>
 84e1336:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e1339:	8b 40 10             	mov    0x10(%eax),%eax
 84e133c:	85 c0                	test   %eax,%eax
 84e133e:	74 07                	je     84e1347 <_ZN26Inter_OnTimeEventAckReward12dispatch_sigEP5CUserPci+0x15b>
 84e1340:	b8 01 00 00 00       	mov    $0x1,%eax
 84e1345:	eb 05                	jmp    84e134c <_ZN26Inter_OnTimeEventAckReward12dispatch_sigEP5CUserPci+0x160>
 84e1347:	b8 00 00 00 00       	mov    $0x0,%eax
 84e134c:	84 c0                	test   %al,%al
 84e134e:	0f 84 bd 00 00 00    	je     84e1411 <_ZN26Inter_OnTimeEventAckReward12dispatch_sigEP5CUserPci+0x225>
 84e1354:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e1357:	8b 48 18             	mov    0x18(%eax),%ecx
 84e135a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e135d:	8b 50 14             	mov    0x14(%eax),%edx
 84e1360:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e1363:	8b 40 10             	mov    0x10(%eax),%eax
 84e1366:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84e136a:	89 54 24 08          	mov    %edx,0x8(%esp)
 84e136e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e1372:	8b 45 08             	mov    0x8(%ebp),%eax
 84e1375:	89 04 24             	mov    %eax,(%esp)
 84e1378:	e8 fb 01 00 00       	call   84e1578 <_ZN26Inter_OnTimeEventAckReward22SendOnTimeRewardByMailEjjj>
 84e137d:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 84e1384:	00 
 84e1385:	c7 44 24 04 20 01 00 	movl   $0x120,0x4(%esp)
 84e138c:	00 
 84e138d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e1390:	89 04 24             	mov    %eax,(%esp)
 84e1393:	e8 aa ab 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84e1398:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e139b:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 84e139f:	0f bf f8             	movswl %ax,%edi
 84e13a2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e13a5:	8b 70 10             	mov    0x10(%eax),%esi
 84e13a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e13ab:	89 04 24             	mov    %eax,(%esp)
 84e13ae:	e8 bb 8f bf ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84e13b3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e13ba:	00 
 84e13bb:	89 04 24             	mov    %eax,(%esp)
 84e13be:	e8 88 7c c2 ff       	call   810904b <_Z14NumberToStringji>
 84e13c3:	89 c3                	mov    %eax,%ebx
 84e13c5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e13cc:	00 
 84e13cd:	c7 44 24 08 49 50 00 	movl   $0x5049,0x8(%esp)
 84e13d4:	00 
 84e13d5:	c7 44 24 04 20 b9 c8 	movl   $0x8c8b920,0x4(%esp)
 84e13dc:	08 
 84e13dd:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84e13e0:	89 04 24             	mov    %eax,(%esp)
 84e13e3:	e8 30 e3 06 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84e13e8:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84e13ec:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84e13f0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84e13f4:	c7 44 24 04 1c 9e c8 	movl   $0x8c89e1c,0x4(%esp)
 84e13fb:	08 
 84e13fc:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84e13ff:	89 04 24             	mov    %eax,(%esp)
 84e1402:	e8 81 e3 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e1407:	b8 00 00 00 00       	mov    $0x0,%eax
 84e140c:	e9 5b 01 00 00       	jmp    84e156c <_ZN26Inter_OnTimeEventAckReward12dispatch_sigEP5CUserPci+0x380>
 84e1411:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e1414:	8b 58 10             	mov    0x10(%eax),%ebx
 84e1417:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84e141e:	ff 
 84e141f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e1422:	89 04 24             	mov    %eax,(%esp)
 84e1425:	e8 76 cb 16 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84e142a:	39 c3                	cmp    %eax,%ebx
 84e142c:	0f 95 c0             	setne  %al
 84e142f:	84 c0                	test   %al,%al
 84e1431:	74 0a                	je     84e143d <_ZN26Inter_OnTimeEventAckReward12dispatch_sigEP5CUserPci+0x251>
 84e1433:	b8 00 00 00 00       	mov    $0x0,%eax
 84e1438:	e9 2f 01 00 00       	jmp    84e156c <_ZN26Inter_OnTimeEventAckReward12dispatch_sigEP5CUserPci+0x380>
 84e143d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e1440:	8b 50 18             	mov    0x18(%eax),%edx
 84e1443:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e1446:	8b 40 14             	mov    0x14(%eax),%eax
 84e1449:	89 54 24 08          	mov    %edx,0x8(%esp)
 84e144d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e1451:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e1454:	89 04 24             	mov    %eax,(%esp)
 84e1457:	e8 d4 07 1a 00       	call   8681c30 <_ZN5CUser23InsertOnTimeEventRewardEjj>
 84e145c:	83 f0 01             	xor    $0x1,%eax
 84e145f:	84 c0                	test   %al,%al
 84e1461:	0f 84 91 00 00 00    	je     84e14f8 <_ZN26Inter_OnTimeEventAckReward12dispatch_sigEP5CUserPci+0x30c>
 84e1467:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 84e146e:	00 
 84e146f:	c7 44 24 04 20 01 00 	movl   $0x120,0x4(%esp)
 84e1476:	00 
 84e1477:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e147a:	89 04 24             	mov    %eax,(%esp)
 84e147d:	e8 c0 aa 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84e1482:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e1485:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 84e1489:	0f bf f8             	movswl %ax,%edi
 84e148c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e148f:	8b 70 10             	mov    0x10(%eax),%esi
 84e1492:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e1495:	89 04 24             	mov    %eax,(%esp)
 84e1498:	e8 d1 8e bf ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84e149d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e14a4:	00 
 84e14a5:	89 04 24             	mov    %eax,(%esp)
 84e14a8:	e8 9e 7b c2 ff       	call   810904b <_Z14NumberToStringji>
 84e14ad:	89 c3                	mov    %eax,%ebx
 84e14af:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e14b6:	00 
 84e14b7:	c7 44 24 08 5a 50 00 	movl   $0x505a,0x8(%esp)
 84e14be:	00 
 84e14bf:	c7 44 24 04 20 b9 c8 	movl   $0x8c8b920,0x4(%esp)
 84e14c6:	08 
 84e14c7:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84e14ca:	89 04 24             	mov    %eax,(%esp)
 84e14cd:	e8 46 e2 06 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84e14d2:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84e14d6:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84e14da:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84e14de:	c7 44 24 04 6c 9e c8 	movl   $0x8c89e6c,0x4(%esp)
 84e14e5:	08 
 84e14e6:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84e14e9:	89 04 24             	mov    %eax,(%esp)
 84e14ec:	e8 97 e2 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e14f1:	b8 00 00 00 00       	mov    $0x0,%eax
 84e14f6:	eb 74                	jmp    84e156c <_ZN26Inter_OnTimeEventAckReward12dispatch_sigEP5CUserPci+0x380>
 84e14f8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e14fb:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 84e14ff:	0f bf f8             	movswl %ax,%edi
 84e1502:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e1505:	8b 70 10             	mov    0x10(%eax),%esi
 84e1508:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e150b:	89 04 24             	mov    %eax,(%esp)
 84e150e:	e8 5b 8e bf ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84e1513:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e151a:	00 
 84e151b:	89 04 24             	mov    %eax,(%esp)
 84e151e:	e8 28 7b c2 ff       	call   810904b <_Z14NumberToStringji>
 84e1523:	89 c3                	mov    %eax,%ebx
 84e1525:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e152c:	00 
 84e152d:	c7 44 24 08 5d 50 00 	movl   $0x505d,0x8(%esp)
 84e1534:	00 
 84e1535:	c7 44 24 04 20 b9 c8 	movl   $0x8c8b920,0x4(%esp)
 84e153c:	08 
 84e153d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84e1540:	89 04 24             	mov    %eax,(%esp)
 84e1543:	e8 d0 e1 06 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84e1548:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84e154c:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84e1550:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84e1554:	c7 44 24 04 bc 9e c8 	movl   $0x8c89ebc,0x4(%esp)
 84e155b:	08 
 84e155c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84e155f:	89 04 24             	mov    %eax,(%esp)
 84e1562:	e8 21 e2 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e1567:	b8 00 00 00 00       	mov    $0x0,%eax
 84e156c:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 84e1572:	5b                   	pop    %ebx
 84e1573:	5e                   	pop    %esi
 84e1574:	5f                   	pop    %edi
 84e1575:	5d                   	pop    %ebp
 84e1576:	c3                   	ret
 84e1577:	90                   	nop

```

```c
// Inter_OnTimeEventAckReward::dispatch_sig @ 0x84e11ec

/* Inter_OnTimeEventAckReward::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_OnTimeEventAckReward::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  short sVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  cMyTrace local_70 [16];
  cMyTrace local_60 [16];
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  int local_20;
  
  local_20 = param_3;
  sVar1 = *(short *)(param_3 + 10);
  cMyTrace::cMyTrace(local_70,
                     "virtual int Inter_OnTimeEventAckReward::dispatch_sig(CUser*, char*, int)",
                     0x502d,0);
  cMyTrace::operator()(local_70,"[ON_TIME_EVENT] Request Reward Ack(result_no:%u)",(int)sVar1);
  if (param_2 != (char *)0x0) {
    if (*(short *)(local_20 + 10) == 0) {
      if ((((param_2 == (char *)0x0) ||
           (iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar5 == 0)) ||
          (iVar5 = CUser::get_state((CUser *)param_2), iVar5 < 3)) &&
         (*(int *)(local_20 + 0x10) != 0)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        SendOnTimeRewardByMail
                  ((Inter_OnTimeEventAckReward *)param_1,*(uint *)(local_20 + 0x10),
                   *(uint *)(local_20 + 0x14),*(uint *)(local_20 + 0x18));
        CUser::SendCmdErrorPacket((CUser *)param_2,0x120,0x11);
        sVar1 = *(short *)(local_20 + 10);
        uVar2 = *(undefined4 *)(local_20 + 0x10);
        uVar6 = CUser::get_acc_id((CUser *)param_2);
        uVar7 = NumberToString(uVar6,0);
        cMyTrace::cMyTrace(local_50,
                           "virtual int Inter_OnTimeEventAckReward::dispatch_sig(CUser*, char*, int)"
                           ,0x5049,0);
        cMyTrace::operator()
                  (local_50,
                   "[ON_TIME_EVENT] Request Reward Ack:err_logout(m_id:%s,char_no:%u,result_no:%u)",
                   uVar7,uVar2,(int)sVar1);
      }
      else {
        iVar5 = *(int *)(local_20 + 0x10);
        iVar8 = CUser::get_charac_no((CUser *)param_2,-1);
        if (iVar5 == iVar8) {
          cVar4 = CUser::InsertOnTimeEventReward
                            ((CUser *)param_2,*(uint *)(local_20 + 0x14),*(uint *)(local_20 + 0x18))
          ;
          if (cVar4 == '\x01') {
            sVar1 = *(short *)(local_20 + 10);
            uVar2 = *(undefined4 *)(local_20 + 0x10);
            uVar6 = CUser::get_acc_id((CUser *)param_2);
            uVar7 = NumberToString(uVar6,0);
            cMyTrace::cMyTrace(local_30,
                               "virtual int Inter_OnTimeEventAckReward::dispatch_sig(CUser*, char*, int)"
                               ,0x505d,0);
            cMyTrace::operator()
                      (local_30,
                       "[ON_TIME_EVENT] Request Reward Ack:success(m_id:%s,char_no:%u,result_no:%u)"
                       ,uVar7,uVar2,(int)sVar1);
          }
          else {
            CUser::SendCmdErrorPacket((CUser *)param_2,0x120,0x11);
            sVar1 = *(short *)(local_20 + 10);
            uVar2 = *(undefined4 *)(local_20 + 0x10);
            uVar6 = CUser::get_acc_id((CUser *)param_2);
            uVar7 = NumberToString(uVar6,0);
            cMyTrace::cMyTrace(local_40,
                               "virtual int Inter_OnTimeEventAckReward::dispatch_sig(CUser*, char*, int)"
                               ,0x505a,0);
            cMyTrace::operator()
                      (local_40,
                       "[ON_TIME_EVENT] Request Reward Ack:err_item(m_id:%s,char_no:%u,result_no:%u)"
                       ,uVar7,uVar2,(int)sVar1);
          }
        }
      }
    }
    else {
      iVar5 = CUser::get_state((CUser *)param_2);
      if (2 < iVar5) {
        CUser::SendCmdErrorPacket((CUser *)param_2,0x120,(char)*(undefined2 *)(local_20 + 10));
      }
      sVar1 = *(short *)(local_20 + 10);
      uVar2 = *(undefined4 *)(local_20 + 0x10);
      uVar6 = CUser::get_acc_id((CUser *)param_2);
      uVar7 = NumberToString(uVar6,0);
      cMyTrace::cMyTrace(local_60,
                         "virtual int Inter_OnTimeEventAckReward::dispatch_sig(CUser*, char*, int)",
                         0x503a,0);
      cMyTrace::operator()
                (local_60,
                 "[ON_TIME_EVENT] Request Reward Ack:err_wrong(m_id:%s,char_no:%u,result_no:%u)",
                 uVar7,uVar2,(int)sVar1);
    }
  }
  return 0;
}

```

