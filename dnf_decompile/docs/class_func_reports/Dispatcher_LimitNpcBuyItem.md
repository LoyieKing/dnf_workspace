# Dispatcher_LimitNpcBuyItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081e1172 Dispatcher_LimitNpcBuyItem::check_error  [0x081e1172-0x81e147d] ===
 81e1172:	55                   	push   %ebp
 81e1173:	89 e5                	mov    %esp,%ebp
 81e1175:	56                   	push   %esi
 81e1176:	53                   	push   %ebx
 81e1177:	81 ec f0 00 00 00    	sub    $0xf0,%esp
 81e117d:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81e1181:	75 0a                	jne    81e118d <_ZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASE+0x1b>
 81e1183:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81e1188:	e9 e6 02 00 00       	jmp    81e1473 <_ZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASE+0x301>
 81e118d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e1190:	89 04 24             	mov    %eax,(%esp)
 81e1193:	e8 f4 91 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e1198:	83 f8 02             	cmp    $0x2,%eax
 81e119b:	7e 0f                	jle    81e11ac <_ZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASE+0x3a>
 81e119d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e11a0:	89 04 24             	mov    %eax,(%esp)
 81e11a3:	e8 8a f2 f3 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81e11a8:	85 c0                	test   %eax,%eax
 81e11aa:	75 07                	jne    81e11b3 <_ZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASE+0x41>
 81e11ac:	b8 01 00 00 00       	mov    $0x1,%eax
 81e11b1:	eb 05                	jmp    81e11b8 <_ZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASE+0x46>
 81e11b3:	b8 00 00 00 00       	mov    $0x0,%eax
 81e11b8:	84 c0                	test   %al,%al
 81e11ba:	74 0a                	je     81e11c6 <_ZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASE+0x54>
 81e11bc:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81e11c1:	e9 ad 02 00 00       	jmp    81e1473 <_ZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASE+0x301>
 81e11c6:	8b 45 10             	mov    0x10(%ebp),%eax
 81e11c9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e11cc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e11cf:	8b 70 0d             	mov    0xd(%eax),%esi
 81e11d2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e11d5:	8b 58 11             	mov    0x11(%eax),%ebx
 81e11d8:	e8 be af ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e11dd:	89 74 24 08          	mov    %esi,0x8(%esp)
 81e11e1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e11e5:	89 04 24             	mov    %eax,(%esp)
 81e11e8:	e8 09 42 18 00       	call   83653f6 <_ZN12CDataManager24checkLimitNpcBuyItemListEjm>
 81e11ed:	83 f0 01             	xor    $0x1,%eax
 81e11f0:	84 c0                	test   %al,%al
 81e11f2:	74 7a                	je     81e126e <_ZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASE+0xfc>
 81e11f4:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81e11fb:	ff 
 81e11fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e11ff:	89 04 24             	mov    %eax,(%esp)
 81e1202:	e8 99 cd 46 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81e1207:	89 c6                	mov    %eax,%esi
 81e1209:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e120c:	89 04 24             	mov    %eax,(%esp)
 81e120f:	e8 5a 91 ef ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81e1214:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e121b:	00 
 81e121c:	89 04 24             	mov    %eax,(%esp)
 81e121f:	e8 27 7e f2 ff       	call   810904b <_Z14NumberToStringji>
 81e1224:	89 c3                	mov    %eax,%ebx
 81e1226:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81e122d:	00 
 81e122e:	c7 44 24 08 e1 55 00 	movl   $0x55e1,0x8(%esp)
 81e1235:	00 
 81e1236:	c7 44 24 04 a0 18 bd 	movl   $0x8bd18a0,0x4(%esp)
 81e123d:	08 
 81e123e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e1241:	89 04 24             	mov    %eax,(%esp)
 81e1244:	e8 cf e4 36 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81e1249:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81e124d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81e1251:	c7 44 24 04 80 1a bc 	movl   $0x8bc1a80,0x4(%esp)
 81e1258:	08 
 81e1259:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e125c:	89 04 24             	mov    %eax,(%esp)
 81e125f:	e8 24 e5 36 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81e1264:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81e1269:	e9 05 02 00 00       	jmp    81e1473 <_ZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASE+0x301>
 81e126e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e1271:	89 04 24             	mov    %eax,(%esp)
 81e1274:	e8 85 90 ef ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 81e1279:	84 c0                	test   %al,%al
 81e127b:	74 0a                	je     81e1287 <_ZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASE+0x115>
 81e127d:	b8 13 00 00 00       	mov    $0x13,%eax
 81e1282:	e9 ec 01 00 00       	jmp    81e1473 <_ZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASE+0x301>
 81e1287:	e8 5c 39 3e 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 81e128c:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e128f:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e1293:	89 04 24             	mov    %eax,(%esp)
 81e1296:	e8 c3 9a 3e 00       	call   85cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>
 81e129b:	84 c0                	test   %al,%al
 81e129d:	74 0a                	je     81e12a9 <_ZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASE+0x137>
 81e129f:	b8 3c 00 00 00       	mov    $0x3c,%eax
 81e12a4:	e9 ca 01 00 00       	jmp    81e1473 <_ZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASE+0x301>
 81e12a9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e12ac:	8b 40 0d             	mov    0xd(%eax),%eax
 81e12af:	89 c3                	mov    %eax,%ebx
 81e12b1:	e8 e5 ae ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e12b6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e12ba:	89 04 24             	mov    %eax,(%esp)
 81e12bd:	e8 70 e7 17 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81e12c2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e12c5:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81e12c9:	75 0a                	jne    81e12d5 <_ZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASE+0x163>
 81e12cb:	b8 11 00 00 00       	mov    $0x11,%eax
 81e12d0:	e9 9e 01 00 00       	jmp    81e1473 <_ZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASE+0x301>
 81e12d5:	8d 45 9b             	lea    -0x65(%ebp),%eax
 81e12d8:	89 04 24             	mov    %eax,(%esp)
 81e12db:	e8 74 a5 ee ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 81e12e0:	e8 cd 47 fd ff       	call   81b5ab2 <_ZN23NeedMaterialDataManager11getInstanceEv>
 81e12e5:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81e12e8:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e12ec:	89 04 24             	mov    %eax,(%esp)
 81e12ef:	e8 7c 48 fd ff       	call   81b5b70 <_ZNK23NeedMaterialDataManager15getNeedMaterialEPK5CItem>
 81e12f4:	8b 50 04             	mov    0x4(%eax),%edx
 81e12f7:	8b 00                	mov    (%eax),%eax
 81e12f9:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81e12fc:	89 55 dc             	mov    %edx,-0x24(%ebp)
 81e12ff:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81e1302:	85 c0                	test   %eax,%eax
 81e1304:	74 08                	je     81e130e <_ZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASE+0x19c>
 81e1306:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81e1309:	83 f8 ff             	cmp    $0xffffffff,%eax
 81e130c:	75 0a                	jne    81e1318 <_ZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASE+0x1a6>
 81e130e:	b8 17 00 00 00       	mov    $0x17,%eax
 81e1313:	e9 5b 01 00 00       	jmp    81e1473 <_ZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASE+0x301>
 81e1318:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 81e131b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e131e:	89 04 24             	mov    %eax,(%esp)
 81e1321:	e8 a4 f0 f9 ff       	call   81803ca <_ZNK15CUserCharacInfo21getCurCharacInvenRefREv>
 81e1326:	8d 55 9b             	lea    -0x65(%ebp),%edx
 81e1329:	89 54 24 08          	mov    %edx,0x8(%esp)
 81e132d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e1331:	89 04 24             	mov    %eax,(%esp)
 81e1334:	e8 f3 ab 31 00       	call   84fbf2c <_ZNK10CInventory12GetInvenDataEiR10Inven_Item>
 81e1339:	c1 e8 1f             	shr    $0x1f,%eax
 81e133c:	84 c0                	test   %al,%al
 81e133e:	74 0a                	je     81e134a <_ZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASE+0x1d8>
 81e1340:	b8 15 00 00 00       	mov    $0x15,%eax
 81e1345:	e9 29 01 00 00       	jmp    81e1473 <_ZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASE+0x301>
 81e134a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81e134d:	85 c0                	test   %eax,%eax
 81e134f:	7e 12                	jle    81e1363 <_ZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASE+0x1f1>
 81e1351:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 81e1354:	8d 45 9b             	lea    -0x65(%ebp),%eax
 81e1357:	89 04 24             	mov    %eax,(%esp)
 81e135a:	e8 db 64 f1 ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 81e135f:	39 c3                	cmp    %eax,%ebx
 81e1361:	7e 07                	jle    81e136a <_ZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASE+0x1f8>
 81e1363:	b8 01 00 00 00       	mov    $0x1,%eax
 81e1368:	eb 05                	jmp    81e136f <_ZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASE+0x1fd>
 81e136a:	b8 00 00 00 00       	mov    $0x0,%eax
 81e136f:	84 c0                	test   %al,%al
 81e1371:	74 0a                	je     81e137d <_ZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASE+0x20b>
 81e1373:	b8 16 00 00 00       	mov    $0x16,%eax
 81e1378:	e9 f6 00 00 00       	jmp    81e1473 <_ZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASE+0x301>
 81e137d:	8d 85 5e ff ff ff    	lea    -0xa2(%ebp),%eax
 81e1383:	89 04 24             	mov    %eax,(%esp)
 81e1386:	e8 c9 a4 ee ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 81e138b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e138e:	8b 40 0d             	mov    0xd(%eax),%eax
 81e1391:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 81e1397:	e8 ff ad ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e139c:	8b 40 0c             	mov    0xc(%eax),%eax
 81e139f:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81e13a6:	00 
 81e13a7:	8d 95 5e ff ff ff    	lea    -0xa2(%ebp),%edx
 81e13ad:	89 54 24 08          	mov    %edx,0x8(%esp)
 81e13b1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e13b8:	00 
 81e13b9:	89 04 24             	mov    %eax,(%esp)
 81e13bc:	e8 f7 0b 33 00       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 81e13c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e13c4:	89 04 24             	mov    %eax,(%esp)
 81e13c7:	e8 fe ef f9 ff       	call   81803ca <_ZNK15CUserCharacInfo21getCurCharacInvenRefREv>
 81e13cc:	8b 95 5e ff ff ff    	mov    -0xa2(%ebp),%edx
 81e13d2:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e13d6:	8b 95 62 ff ff ff    	mov    -0x9e(%ebp),%edx
 81e13dc:	89 54 24 08          	mov    %edx,0x8(%esp)
 81e13e0:	8b 95 66 ff ff ff    	mov    -0x9a(%ebp),%edx
 81e13e6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81e13ea:	8b 95 6a ff ff ff    	mov    -0x96(%ebp),%edx
 81e13f0:	89 54 24 10          	mov    %edx,0x10(%esp)
 81e13f4:	8b 95 6e ff ff ff    	mov    -0x92(%ebp),%edx
 81e13fa:	89 54 24 14          	mov    %edx,0x14(%esp)
 81e13fe:	8b 95 72 ff ff ff    	mov    -0x8e(%ebp),%edx
 81e1404:	89 54 24 18          	mov    %edx,0x18(%esp)
 81e1408:	8b 95 76 ff ff ff    	mov    -0x8a(%ebp),%edx
 81e140e:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 81e1412:	8b 95 7a ff ff ff    	mov    -0x86(%ebp),%edx
 81e1418:	89 54 24 20          	mov    %edx,0x20(%esp)
 81e141c:	8b 95 7e ff ff ff    	mov    -0x82(%ebp),%edx
 81e1422:	89 54 24 24          	mov    %edx,0x24(%esp)
 81e1426:	8b 55 82             	mov    -0x7e(%ebp),%edx
 81e1429:	89 54 24 28          	mov    %edx,0x28(%esp)
 81e142d:	8b 55 86             	mov    -0x7a(%ebp),%edx
 81e1430:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 81e1434:	8b 55 8a             	mov    -0x76(%ebp),%edx
 81e1437:	89 54 24 30          	mov    %edx,0x30(%esp)
 81e143b:	8b 55 8e             	mov    -0x72(%ebp),%edx
 81e143e:	89 54 24 34          	mov    %edx,0x34(%esp)
 81e1442:	8b 55 92             	mov    -0x6e(%ebp),%edx
 81e1445:	89 54 24 38          	mov    %edx,0x38(%esp)
 81e1449:	8b 55 96             	mov    -0x6a(%ebp),%edx
 81e144c:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 81e1450:	0f b6 55 9a          	movzbl -0x66(%ebp),%edx
 81e1454:	88 54 24 40          	mov    %dl,0x40(%esp)
 81e1458:	89 04 24             	mov    %eax,(%esp)
 81e145b:	e8 6a 0a 32 00       	call   8501eca <_ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item>
 81e1460:	c1 e8 1f             	shr    $0x1f,%eax
 81e1463:	84 c0                	test   %al,%al
 81e1465:	74 07                	je     81e146e <_ZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASE+0x2fc>
 81e1467:	b8 04 00 00 00       	mov    $0x4,%eax
 81e146c:	eb 05                	jmp    81e1473 <_ZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASE+0x301>
 81e146e:	b8 00 00 00 00       	mov    $0x0,%eax
 81e1473:	81 c4 f0 00 00 00    	add    $0xf0,%esp
 81e1479:	5b                   	pop    %ebx
 81e147a:	5e                   	pop    %esi
 81e147b:	5d                   	pop    %ebp
 81e147c:	c3                   	ret
 81e147d:	90                   	nop

```

```c
// Dispatcher_LimitNpcBuyItem::check_error @ 0x81e1172

/* Dispatcher_LimitNpcBuyItem::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_LimitNpcBuyItem::check_error
          (Dispatcher_LimitNpcBuyItem *this,CUser *param_1,MSG_BASE *param_2)

{
  ulong uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  CDataManager *pCVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  CPrivateStoreMgr *this_00;
  NeedMaterialDataManager *this_01;
  int *piVar9;
  CInventory *this_02;
  int iVar10;
  undefined2 local_a6;
  undefined2 uStack_a4;
  undefined2 uStack_a2;
  undefined2 uStack_a0;
  undefined4 local_9e;
  undefined4 local_9a;
  undefined4 local_96;
  undefined4 local_92;
  undefined4 local_8e;
  undefined4 local_8a;
  undefined4 local_86;
  undefined4 local_82;
  undefined4 local_7e;
  undefined4 local_7a;
  undefined4 local_76;
  undefined4 local_72;
  undefined4 local_6e;
  undefined1 local_6a;
  Inven_Item local_69 [61];
  int local_2c;
  int local_28;
  cMyTrace local_24 [16];
  MSG_BASE *local_14;
  CItem *local_10;
  
  if (param_1 == (CUser *)0x0) {
    return 0xffffffff;
  }
  iVar4 = CUser::get_state(param_1);
  if ((iVar4 < 3) ||
     (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar4 == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    return 0xffffffff;
  }
  local_14 = param_2;
  uVar1 = *(ulong *)(param_2 + 0xd);
  uVar7 = *(uint *)(param_2 + 0x11);
  pCVar5 = (CDataManager *)G_CDataManager();
  cVar3 = CDataManager::checkLimitNpcBuyItemList(pCVar5,uVar7,uVar1);
  if (cVar3 != '\x01') {
    uVar6 = CUser::get_charac_no(param_1,-1);
    uVar7 = CUser::get_acc_id(param_1);
    uVar8 = NumberToString(uVar7,0);
    cMyTrace::cMyTrace(local_24,"int Dispatcher_LimitNpcBuyItem::check_error(CUser*, MSG_BASE&)",
                       0x55e1,5);
    cMyTrace::operator()
              (local_24,"May be HackUser or Must be HackUser : m_id=%s, charac_no=%u",uVar8,uVar6);
    return 0xffffffff;
  }
  cVar3 = CUser::CheckInTrade(param_1);
  if (cVar3 == '\0') {
    this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
    cVar3 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this_00,param_1);
    if (cVar3 != '\0') {
      return 0x3c;
    }
    iVar4 = *(int *)(local_14 + 0xd);
    pCVar5 = (CDataManager *)G_CDataManager();
    local_10 = (CItem *)CDataManager::find_item(pCVar5,iVar4);
    if (local_10 != (CItem *)0x0) {
      Inven_Item::Inven_Item(local_69);
      this_01 = (NeedMaterialDataManager *)NeedMaterialDataManager::getInstance();
      piVar9 = (int *)NeedMaterialDataManager::getNeedMaterial(this_01,local_10);
      local_28 = piVar9[1];
      iVar4 = *piVar9;
      if ((iVar4 != 0) && (iVar4 != -1)) {
        local_2c = iVar4;
        this_02 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)param_1);
        iVar10 = CInventory::GetInvenData(this_02,iVar4,local_69);
        iVar4 = local_28;
        if (-1 < iVar10) {
          if ((local_28 < 1) || (iVar10 = Inven_Item::get_add_info(local_69), iVar10 < iVar4)) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (bVar2) {
            uVar6 = 0x16;
          }
          else {
            Inven_Item::Inven_Item((Inven_Item *)&local_a6);
            uStack_a4 = (undefined2)*(undefined4 *)(local_14 + 0xd);
            uStack_a2 = (undefined2)((uint)*(undefined4 *)(local_14 + 0xd) >> 0x10);
            iVar4 = G_CDataManager();
            CItemList::create_item(*(CItemList **)(iVar4 + 0xc),0,&local_a6,1);
            uVar6 = CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)param_1);
            iVar4 = CInventory::tryInsertItemIntoInventory
                              (uVar6,CONCAT22(uStack_a4,local_a6),CONCAT22(uStack_a0,uStack_a2),
                               local_9e,local_9a,local_96,local_92,local_8e,local_8a,local_86,
                               local_82,local_7e,local_7a,local_76,local_72,local_6e,local_6a);
            if (iVar4 < 0) {
              uVar6 = 4;
            }
            else {
              uVar6 = 0;
            }
          }
          return uVar6;
        }
        return 0x15;
      }
      return 0x17;
    }
    return 0x11;
  }
  return 0x13;
}

```

---

## process

```asm
// === 081e0ff8 Dispatcher_LimitNpcBuyItem::process  [0x081e0ff8-0x81e10ff] ===
 81e0ff8:	55                   	push   %ebp
 81e0ff9:	89 e5                	mov    %esp,%ebp
 81e0ffb:	53                   	push   %ebx
 81e0ffc:	83 ec 44             	sub    $0x44,%esp
 81e0fff:	8b 45 14             	mov    0x14(%ebp),%eax
 81e1002:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e1005:	8b 45 10             	mov    0x10(%ebp),%eax
 81e1008:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e100c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e100f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e1013:	8b 45 08             	mov    0x8(%ebp),%eax
 81e1016:	89 04 24             	mov    %eax,(%esp)
 81e1019:	e8 54 01 00 00       	call   81e1172 <_ZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASE>
 81e101e:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81e1021:	89 42 04             	mov    %eax,0x4(%edx)
 81e1024:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e1027:	8b 40 04             	mov    0x4(%eax),%eax
 81e102a:	85 c0                	test   %eax,%eax
 81e102c:	7e 0a                	jle    81e1038 <_ZN26Dispatcher_LimitNpcBuyItem7processEP5CUserR8MSG_BASER9ParamBase+0x40>
 81e102e:	b8 00 00 00 00       	mov    $0x0,%eax
 81e1033:	e9 c1 00 00 00       	jmp    81e10f9 <_ZN26Dispatcher_LimitNpcBuyItem7processEP5CUserR8MSG_BASER9ParamBase+0x101>
 81e1038:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e103b:	8b 40 04             	mov    0x4(%eax),%eax
 81e103e:	85 c0                	test   %eax,%eax
 81e1040:	79 2b                	jns    81e106d <_ZN26Dispatcher_LimitNpcBuyItem7processEP5CUserR8MSG_BASER9ParamBase+0x75>
 81e1042:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e1045:	8b 40 04             	mov    0x4(%eax),%eax
 81e1048:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e104f:	00 
 81e1050:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e1054:	c7 44 24 04 e0 18 bd 	movl   $0x8bd18e0,0x4(%esp)
 81e105b:	08 
 81e105c:	c7 04 24 ae 55 00 00 	movl   $0x55ae,(%esp)
 81e1063:	e8 6f f8 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e1068:	e9 8c 00 00 00       	jmp    81e10f9 <_ZN26Dispatcher_LimitNpcBuyItem7processEP5CUserR8MSG_BASER9ParamBase+0x101>
 81e106d:	8b 45 10             	mov    0x10(%ebp),%eax
 81e1070:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e1073:	8d 45 ca             	lea    -0x36(%ebp),%eax
 81e1076:	89 04 24             	mov    %eax,(%esp)
 81e1079:	e8 52 b4 04 00       	call   822c4d0 <_ZN19LimitNpcBuyItemInfoC1Ev>
 81e107e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e1081:	89 04 24             	mov    %eax,(%esp)
 81e1084:	e8 0d 7c ee ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81e1089:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81e108c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e108f:	89 04 24             	mov    %eax,(%esp)
 81e1092:	e8 d7 92 ef ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81e1097:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81e109a:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81e10a1:	ff 
 81e10a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e10a5:	89 04 24             	mov    %eax,(%esp)
 81e10a8:	e8 f3 ce 46 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81e10ad:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81e10b0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e10b3:	8b 40 0d             	mov    0xd(%eax),%eax
 81e10b6:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81e10b9:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%ebp)
 81e10c0:	8d 5d ca             	lea    -0x36(%ebp),%ebx
 81e10c3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e10c6:	89 04 24             	mov    %eax,(%esp)
 81e10c9:	e8 c2 ab ee ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81e10ce:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 81e10d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e10d8:	89 14 24             	mov    %edx,(%esp)
 81e10db:	e8 aa 0f f3 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81e10e0:	c7 44 24 08 26 00 00 	movl   $0x26,0x8(%esp)
 81e10e7:	00 
 81e10e8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e10ec:	89 04 24             	mov    %eax,(%esp)
 81e10ef:	e8 00 fd 28 00       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 81e10f4:	b8 00 00 00 00       	mov    $0x0,%eax
 81e10f9:	83 c4 44             	add    $0x44,%esp
 81e10fc:	5b                   	pop    %ebx
 81e10fd:	5d                   	pop    %ebp
 81e10fe:	c3                   	ret
 81e10ff:	90                   	nop

```

```c
// Dispatcher_LimitNpcBuyItem::process @ 0x81e0ff8

/* Dispatcher_LimitNpcBuyItem::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_LimitNpcBuyItem::process
          (Dispatcher_LimitNpcBuyItem *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  CMonitorServerProxy *this_00;
  LimitNpcBuyItemInfo local_3a [10];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  ParamBase *local_14;
  MSG_BASE *local_10;
  
  local_14 = param_3;
  uVar1 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_14 + 4) = uVar1;
  if (*(int *)(local_14 + 4) < 1) {
    if (*(int *)(local_14 + 4) < 0) {
      uVar1 = LineFunc(0x55ae,
                       "virtual int Dispatcher_LimitNpcBuyItem::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_14 + 4),0);
    }
    else {
      local_10 = param_2;
      LimitNpcBuyItemInfo::LimitNpcBuyItemInfo(local_3a);
      local_30 = CUser::GetUID(param_1);
      local_2c = CUser::get_acc_id(param_1);
      local_28 = CUser::get_charac_no(param_1,-1);
      local_24 = *(undefined4 *)(local_10 + 0xd);
      local_20 = 1;
      uVar1 = CUser::GetServerGroup(param_1);
      this_00 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,uVar1);
      CMonitorServerProxy::SendPacket(this_00,(char *)local_3a,0x26);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## read

```asm
// === 081e0f60 Dispatcher_LimitNpcBuyItem::read  [0x081e0f60-0x81e0ff7] ===
 81e0f60:	55                   	push   %ebp
 81e0f61:	89 e5                	mov    %esp,%ebp
 81e0f63:	83 ec 28             	sub    $0x28,%esp
 81e0f66:	8b 45 10             	mov    0x10(%ebp),%eax
 81e0f69:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e0f6c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e0f6f:	83 c0 0d             	add    $0xd,%eax
 81e0f72:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e0f76:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e0f79:	89 04 24             	mov    %eax,(%esp)
 81e0f7c:	e8 fd c2 3a 00       	call   858d27e <_ZN9PacketBuf7get_intERm>
 81e0f81:	83 f0 01             	xor    $0x1,%eax
 81e0f84:	84 c0                	test   %al,%al
 81e0f86:	74 26                	je     81e0fae <_ZN26Dispatcher_LimitNpcBuyItem4readER9PacketBufR8MSG_BASE+0x4e>
 81e0f88:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e0f8f:	00 
 81e0f90:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e0f97:	00 
 81e0f98:	c7 44 24 04 40 19 bd 	movl   $0x8bd1940,0x4(%esp)
 81e0f9f:	08 
 81e0fa0:	c7 04 24 9a 55 00 00 	movl   $0x559a,(%esp)
 81e0fa7:	e8 2b f9 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e0fac:	eb 47                	jmp    81e0ff5 <_ZN26Dispatcher_LimitNpcBuyItem4readER9PacketBufR8MSG_BASE+0x95>
 81e0fae:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e0fb1:	83 c0 11             	add    $0x11,%eax
 81e0fb4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e0fb8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e0fbb:	89 04 24             	mov    %eax,(%esp)
 81e0fbe:	e8 7d c2 3a 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81e0fc3:	83 f0 01             	xor    $0x1,%eax
 81e0fc6:	84 c0                	test   %al,%al
 81e0fc8:	74 26                	je     81e0ff0 <_ZN26Dispatcher_LimitNpcBuyItem4readER9PacketBufR8MSG_BASE+0x90>
 81e0fca:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e0fd1:	00 
 81e0fd2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e0fd9:	00 
 81e0fda:	c7 44 24 04 40 19 bd 	movl   $0x8bd1940,0x4(%esp)
 81e0fe1:	08 
 81e0fe2:	c7 04 24 9d 55 00 00 	movl   $0x559d,(%esp)
 81e0fe9:	e8 e9 f8 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e0fee:	eb 05                	jmp    81e0ff5 <_ZN26Dispatcher_LimitNpcBuyItem4readER9PacketBufR8MSG_BASE+0x95>
 81e0ff0:	b8 00 00 00 00       	mov    $0x0,%eax
 81e0ff5:	c9                   	leave
 81e0ff6:	c3                   	ret
 81e0ff7:	90                   	nop

```

```c
// Dispatcher_LimitNpcBuyItem::read @ 0x81e0f60

/* Dispatcher_LimitNpcBuyItem::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_LimitNpcBuyItem::read
          (Dispatcher_LimitNpcBuyItem *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(ulong *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x11));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x559d,"virtual int Dispatcher_LimitNpcBuyItem::read(PacketBuf&, MSG_BASE&)",
                       0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x559a,"virtual int Dispatcher_LimitNpcBuyItem::read(PacketBuf&, MSG_BASE&)",0,
                     0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081e1100 Dispatcher_LimitNpcBuyItem::send  [0x081e1100-0x81e1171] ===
 81e1100:	55                   	push   %ebp
 81e1101:	89 e5                	mov    %esp,%ebp
 81e1103:	56                   	push   %esi
 81e1104:	53                   	push   %ebx
 81e1105:	83 ec 20             	sub    $0x20,%esp
 81e1108:	8b 45 10             	mov    0x10(%ebp),%eax
 81e110b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e110e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e1111:	89 04 24             	mov    %eax,(%esp)
 81e1114:	e8 33 cc 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81e1119:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e111c:	8b 40 04             	mov    0x4(%eax),%eax
 81e111f:	85 c0                	test   %eax,%eax
 81e1121:	7e 3d                	jle    81e1160 <_ZN26Dispatcher_LimitNpcBuyItem4sendEP5CUserR9ParamBase+0x60>
 81e1123:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e1126:	8b 40 04             	mov    0x4(%eax),%eax
 81e1129:	0f b6 c0             	movzbl %al,%eax
 81e112c:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e1130:	c7 44 24 04 d1 01 00 	movl   $0x1d1,0x4(%esp)
 81e1137:	00 
 81e1138:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e113b:	89 04 24             	mov    %eax,(%esp)
 81e113e:	e8 ff ad 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e1143:	eb 1b                	jmp    81e1160 <_ZN26Dispatcher_LimitNpcBuyItem4sendEP5CUserR9ParamBase+0x60>
 81e1145:	89 d3                	mov    %edx,%ebx
 81e1147:	89 c6                	mov    %eax,%esi
 81e1149:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e114c:	89 04 24             	mov    %eax,(%esp)
 81e114f:	e8 2c cd 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e1154:	89 f0                	mov    %esi,%eax
 81e1156:	89 da                	mov    %ebx,%edx
 81e1158:	89 04 24             	mov    %eax,(%esp)
 81e115b:	e8 f0 25 90 00       	call   8ae3750 <_Unwind_Resume>
 81e1160:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e1163:	89 04 24             	mov    %eax,(%esp)
 81e1166:	e8 15 cd 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e116b:	83 c4 20             	add    $0x20,%esp
 81e116e:	5b                   	pop    %ebx
 81e116f:	5e                   	pop    %esi
 81e1170:	5d                   	pop    %ebp
 81e1171:	c3                   	ret

```

```c
// Dispatcher_LimitNpcBuyItem::send @ 0x81e1100

/* Dispatcher_LimitNpcBuyItem::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_LimitNpcBuyItem::send(Dispatcher_LimitNpcBuyItem *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
  if (0 < *(int *)(local_10 + 4)) {
                    /* try { // try from 081e113e to 081e1142 has its CatchHandler @ 081e1145 */
    CUser::SendCmdErrorPacket(param_1,0x1d1,*(uint *)(local_10 + 4) & 0xff);
  }
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

