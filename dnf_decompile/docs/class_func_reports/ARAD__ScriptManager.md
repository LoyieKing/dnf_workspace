# ARAD__ScriptManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## DestroyScript

```asm
// === 081a12f8 ARAD::ScriptManager::DestroyScript  [0x081a12f8-0x81a136b] ===
 81a12f8:	55                   	push   %ebp
 81a12f9:	89 e5                	mov    %esp,%ebp
 81a12fb:	83 ec 28             	sub    $0x28,%esp
 81a12fe:	8b 55 08             	mov    0x8(%ebp),%edx
 81a1301:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81a1304:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a1308:	89 04 24             	mov    %eax,(%esp)
 81a130b:	e8 46 02 00 00       	call   81a1556 <_ZNKSt3setIPN4ARAD15ScriptInterfaceESt4lessIS2_ESaIS2_EE5beginEv>
 81a1310:	83 ec 04             	sub    $0x4,%esp
 81a1313:	8b 55 08             	mov    0x8(%ebp),%edx
 81a1316:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a1319:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a131d:	89 04 24             	mov    %eax,(%esp)
 81a1320:	e8 57 02 00 00       	call   81a157c <_ZNKSt3setIPN4ARAD15ScriptInterfaceESt4lessIS2_ESaIS2_EE3endEv>
 81a1325:	83 ec 04             	sub    $0x4,%esp
 81a1328:	eb 24                	jmp    81a134e <_ZN4ARAD13ScriptManager13DestroyScriptEv+0x56>
 81a132a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81a132d:	89 04 24             	mov    %eax,(%esp)
 81a1330:	e8 81 02 00 00       	call   81a15b6 <_ZNKSt23_Rb_tree_const_iteratorIPN4ARAD15ScriptInterfaceEEdeEv>
 81a1335:	8b 00                	mov    (%eax),%eax
 81a1337:	8b 10                	mov    (%eax),%edx
 81a1339:	83 c2 04             	add    $0x4,%edx
 81a133c:	8b 12                	mov    (%edx),%edx
 81a133e:	89 04 24             	mov    %eax,(%esp)
 81a1341:	ff d2                	call   *%edx
 81a1343:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81a1346:	89 04 24             	mov    %eax,(%esp)
 81a1349:	e8 76 02 00 00       	call   81a15c4 <_ZNSt23_Rb_tree_const_iteratorIPN4ARAD15ScriptInterfaceEEppEv>
 81a134e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a1351:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a1355:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81a1358:	89 04 24             	mov    %eax,(%esp)
 81a135b:	e8 42 02 00 00       	call   81a15a2 <_ZNKSt23_Rb_tree_const_iteratorIPN4ARAD15ScriptInterfaceEEneERKS3_>
 81a1360:	84 c0                	test   %al,%al
 81a1362:	75 c6                	jne    81a132a <_ZN4ARAD13ScriptManager13DestroyScriptEv+0x32>
 81a1364:	b8 01 00 00 00       	mov    $0x1,%eax
 81a1369:	c9                   	leave
 81a136a:	c3                   	ret
 81a136b:	90                   	nop

```

```c
// ARAD::ScriptManager::DestroyScript @ 0x81a12f8

/* ARAD::ScriptManager::DestroyScript() */

undefined4 ARAD::ScriptManager::DestroyScript(void)

{
  char cVar1;
  undefined4 *puVar2;
  set<ARAD::ScriptInterface*,std::less<ARAD::ScriptInterface*>,std::allocator<ARAD::ScriptInterface*>>
  local_14 [4];
  set<ARAD::ScriptInterface*,std::less<ARAD::ScriptInterface*>,std::allocator<ARAD::ScriptInterface*>>
  local_10 [12];
  
  std::
  set<ARAD::ScriptInterface*,std::less<ARAD::ScriptInterface*>,std::allocator<ARAD::ScriptInterface*>>
  ::begin(local_10);
  std::
  set<ARAD::ScriptInterface*,std::less<ARAD::ScriptInterface*>,std::allocator<ARAD::ScriptInterface*>>
  ::end(local_14);
  while( true ) {
    cVar1 = std::_Rb_tree_const_iterator<ARAD::ScriptInterface*>::operator!=
                      ((_Rb_tree_const_iterator<ARAD::ScriptInterface*> *)local_10,
                       (_Rb_tree_const_iterator *)local_14);
    if (cVar1 == '\0') break;
    puVar2 = (undefined4 *)
             std::_Rb_tree_const_iterator<ARAD::ScriptInterface*>::operator*
                       ((_Rb_tree_const_iterator<ARAD::ScriptInterface*> *)local_10);
    (**(code **)(*(int *)*puVar2 + 4))((int *)*puVar2);
    std::_Rb_tree_const_iterator<ARAD::ScriptInterface*>::operator++
              ((_Rb_tree_const_iterator<ARAD::ScriptInterface*> *)local_10);
  }
  return 1;
}

```

---

## Init

```asm
// === 081a13f6 ARAD::ScriptManager::Init  [0x081a13f6-0x81a14f9] ===
 81a13f6:	55                   	push   %ebp
 81a13f7:	89 e5                	mov    %esp,%ebp
 81a13f9:	83 ec 18             	sub    $0x18,%esp
 81a13fc:	e8 a3 dc fd ff       	call   817f0a4 <_ZN4ARAD9SingletonI29AvatarFixedHiddenOptionServerE3GetEv>
 81a1401:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 81a1408:	00 
 81a1409:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a140d:	8b 45 08             	mov    0x8(%ebp),%eax
 81a1410:	89 04 24             	mov    %eax,(%esp)
 81a1413:	e8 54 ff ff ff       	call   81a136c <_ZN4ARAD13ScriptManager12RegistScriptEPNS_15ScriptInterfaceEi>
 81a1418:	e8 85 21 ff ff       	call   81935a2 <_ZN4ARAD9SingletonI20AvatarRechargeServerE3GetEv>
 81a141d:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 81a1424:	00 
 81a1425:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a1429:	8b 45 08             	mov    0x8(%ebp),%eax
 81a142c:	89 04 24             	mov    %eax,(%esp)
 81a142f:	e8 38 ff ff ff       	call   81a136c <_ZN4ARAD13ScriptManager12RegistScriptEPNS_15ScriptInterfaceEi>
 81a1434:	e8 3d 23 ff ff       	call   8193776 <_ZN4ARAD9SingletonI20EmblemCompoundServerE3GetEv>
 81a1439:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 81a1440:	00 
 81a1441:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a1445:	8b 45 08             	mov    0x8(%ebp),%eax
 81a1448:	89 04 24             	mov    %eax,(%esp)
 81a144b:	e8 1c ff ff ff       	call   81a136c <_ZN4ARAD13ScriptManager12RegistScriptEPNS_15ScriptInterfaceEi>
 81a1450:	e8 9a 9b ff ff       	call   819afef <_ZN4ARAD9SingletonI19AvatarConvertServerE3GetEv>
 81a1455:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 81a145c:	00 
 81a145d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a1461:	8b 45 08             	mov    0x8(%ebp),%eax
 81a1464:	89 04 24             	mov    %eax,(%esp)
 81a1467:	e8 00 ff ff ff       	call   81a136c <_ZN4ARAD13ScriptManager12RegistScriptEPNS_15ScriptInterfaceEi>
 81a146c:	e8 dc 12 f4 ff       	call   80e274d <_ZN4ARAD9SingletonIN19CerashopAddRestrict7ManagerEE3GetEv>
 81a1471:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 81a1478:	00 
 81a1479:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a147d:	8b 45 08             	mov    0x8(%ebp),%eax
 81a1480:	89 04 24             	mov    %eax,(%esp)
 81a1483:	e8 e4 fe ff ff       	call   81a136c <_ZN4ARAD13ScriptManager12RegistScriptEPNS_15ScriptInterfaceEi>
 81a1488:	e8 db 68 fa ff       	call   8147d68 <_ZN4ARAD9SingletonI25LevelupSupportEventMangerE3GetEv>
 81a148d:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 81a1494:	00 
 81a1495:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a1499:	8b 45 08             	mov    0x8(%ebp),%eax
 81a149c:	89 04 24             	mov    %eax,(%esp)
 81a149f:	e8 c8 fe ff ff       	call   81a136c <_ZN4ARAD13ScriptManager12RegistScriptEPNS_15ScriptInterfaceEi>
 81a14a4:	e8 51 6a ff ff       	call   8197efa <_ZN4ARAD9SingletonINS_16Arad_DataManagerEE3GetEv>
 81a14a9:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 81a14b0:	00 
 81a14b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a14b5:	8b 45 08             	mov    0x8(%ebp),%eax
 81a14b8:	89 04 24             	mov    %eax,(%esp)
 81a14bb:	e8 ac fe ff ff       	call   81a136c <_ZN4ARAD13ScriptManager12RegistScriptEPNS_15ScriptInterfaceEi>
 81a14c0:	e8 42 34 fc ff       	call   8164907 <_ZN4ARAD9SingletonI26CreateDnfEventSciprtServerE3GetEv>
 81a14c5:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 81a14cc:	00 
 81a14cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a14d1:	8b 45 08             	mov    0x8(%ebp),%eax
 81a14d4:	89 04 24             	mov    %eax,(%esp)
 81a14d7:	e8 90 fe ff ff       	call   81a136c <_ZN4ARAD13ScriptManager12RegistScriptEPNS_15ScriptInterfaceEi>
 81a14dc:	e8 9b 01 00 00       	call   81a167c <_ZN4ARAD9SingletonI28LevelupSupport2ndEventMangerE3GetEv>
 81a14e1:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 81a14e8:	00 
 81a14e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a14ed:	8b 45 08             	mov    0x8(%ebp),%eax
 81a14f0:	89 04 24             	mov    %eax,(%esp)
 81a14f3:	e8 74 fe ff ff       	call   81a136c <_ZN4ARAD13ScriptManager12RegistScriptEPNS_15ScriptInterfaceEi>
 81a14f8:	c9                   	leave
 81a14f9:	c3                   	ret

```

```c
// ARAD::ScriptManager::Init @ 0x81a13f6

/* ARAD::ScriptManager::Init() */

void __thiscall ARAD::ScriptManager::Init(ScriptManager *this)

{
  ScriptInterface *pSVar1;
  
  pSVar1 = (ScriptInterface *)Singleton<AvatarFixedHiddenOptionServer>::Get();
  RegistScript(this,pSVar1,0x13);
  pSVar1 = (ScriptInterface *)Singleton<AvatarRechargeServer>::Get();
  RegistScript(this,pSVar1,0x13);
  pSVar1 = (ScriptInterface *)Singleton<EmblemCompoundServer>::Get();
  RegistScript(this,pSVar1,0x13);
  pSVar1 = (ScriptInterface *)Singleton<AvatarConvertServer>::Get();
  RegistScript(this,pSVar1,0x13);
  pSVar1 = (ScriptInterface *)Singleton<CerashopAddRestrict::Manager>::Get();
  RegistScript(this,pSVar1,0x13);
  pSVar1 = (ScriptInterface *)Singleton<LevelupSupportEventManger>::Get();
  RegistScript(this,pSVar1,0x13);
  pSVar1 = (ScriptInterface *)Singleton<ARAD::Arad_DataManager>::Get();
  RegistScript(this,pSVar1,0x13);
  pSVar1 = (ScriptInterface *)Singleton<CreateDnfEventSciprtServer>::Get();
  RegistScript(this,pSVar1,0x13);
  pSVar1 = (ScriptInterface *)Singleton<LevelupSupport2ndEventManger>::Get();
  RegistScript(this,pSVar1,0x13);
  return;
}

```

---

## LoadScript

```asm
// === 081a11dc ARAD::ScriptManager::LoadScript  [0x081a11dc-0x81a12f7] ===
 81a11dc:	55                   	push   %ebp
 81a11dd:	89 e5                	mov    %esp,%ebp
 81a11df:	83 ec 58             	sub    $0x58,%esp
 81a11e2:	8b 45 08             	mov    0x8(%ebp),%eax
 81a11e5:	89 04 24             	mov    %eax,(%esp)
 81a11e8:	e8 09 02 00 00       	call   81a13f6 <_ZN4ARAD13ScriptManager4InitEv>
 81a11ed:	8b 55 08             	mov    0x8(%ebp),%edx
 81a11f0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81a11f3:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a11f7:	89 04 24             	mov    %eax,(%esp)
 81a11fa:	e8 57 03 00 00       	call   81a1556 <_ZNKSt3setIPN4ARAD15ScriptInterfaceESt4lessIS2_ESaIS2_EE5beginEv>
 81a11ff:	83 ec 04             	sub    $0x4,%esp
 81a1202:	8b 55 08             	mov    0x8(%ebp),%edx
 81a1205:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81a1208:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a120c:	89 04 24             	mov    %eax,(%esp)
 81a120f:	e8 68 03 00 00       	call   81a157c <_ZNKSt3setIPN4ARAD15ScriptInterfaceESt4lessIS2_ESaIS2_EE3endEv>
 81a1214:	83 ec 04             	sub    $0x4,%esp
 81a1217:	e9 bb 00 00 00       	jmp    81a12d7 <_ZN4ARAD13ScriptManager10LoadScriptEv+0xfb>
 81a121c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81a121f:	89 04 24             	mov    %eax,(%esp)
 81a1222:	e8 8f 03 00 00       	call   81a15b6 <_ZNKSt23_Rb_tree_const_iteratorIPN4ARAD15ScriptInterfaceEEdeEv>
 81a1227:	8b 00                	mov    (%eax),%eax
 81a1229:	8b 10                	mov    (%eax),%edx
 81a122b:	8b 12                	mov    (%edx),%edx
 81a122d:	89 04 24             	mov    %eax,(%esp)
 81a1230:	ff d2                	call   *%edx
 81a1232:	83 f0 01             	xor    $0x1,%eax
 81a1235:	84 c0                	test   %al,%al
 81a1237:	74 4d                	je     81a1286 <_ZN4ARAD13ScriptManager10LoadScriptEv+0xaa>
 81a1239:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81a1240:	00 
 81a1241:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 81a1248:	00 
 81a1249:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 81a1250:	00 
 81a1251:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 81a1258:	00 
 81a1259:	c7 44 24 04 20 c6 ba 	movl   $0x8bac620,0x4(%esp)
 81a1260:	08 
 81a1261:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81a1264:	89 04 24             	mov    %eax,(%esp)
 81a1267:	e8 da e4 3a 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 81a126c:	c7 44 24 04 c0 b9 ba 	movl   $0x8bab9c0,0x4(%esp)
 81a1273:	08 
 81a1274:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81a1277:	89 04 24             	mov    %eax,(%esp)
 81a127a:	e8 09 e5 3a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81a127f:	b8 00 00 00 00       	mov    $0x0,%eax
 81a1284:	eb 70                	jmp    81a12f6 <_ZN4ARAD13ScriptManager10LoadScriptEv+0x11a>
 81a1286:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81a128d:	00 
 81a128e:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81a1295:	00 
 81a1296:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 81a129d:	00 
 81a129e:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 81a12a5:	00 
 81a12a6:	c7 44 24 04 20 c6 ba 	movl   $0x8bac620,0x4(%esp)
 81a12ad:	08 
 81a12ae:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a12b1:	89 04 24             	mov    %eax,(%esp)
 81a12b4:	e8 8d e4 3a 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 81a12b9:	c7 44 24 04 c5 b9 ba 	movl   $0x8bab9c5,0x4(%esp)
 81a12c0:	08 
 81a12c1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a12c4:	89 04 24             	mov    %eax,(%esp)
 81a12c7:	e8 bc e4 3a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81a12cc:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81a12cf:	89 04 24             	mov    %eax,(%esp)
 81a12d2:	e8 ed 02 00 00       	call   81a15c4 <_ZNSt23_Rb_tree_const_iteratorIPN4ARAD15ScriptInterfaceEEppEv>
 81a12d7:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81a12da:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a12de:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81a12e1:	89 04 24             	mov    %eax,(%esp)
 81a12e4:	e8 b9 02 00 00       	call   81a15a2 <_ZNKSt23_Rb_tree_const_iteratorIPN4ARAD15ScriptInterfaceEEneERKS3_>
 81a12e9:	84 c0                	test   %al,%al
 81a12eb:	0f 85 2b ff ff ff    	jne    81a121c <_ZN4ARAD13ScriptManager10LoadScriptEv+0x40>
 81a12f1:	b8 01 00 00 00       	mov    $0x1,%eax
 81a12f6:	c9                   	leave
 81a12f7:	c3                   	ret

```

```c
// ARAD::ScriptManager::LoadScript @ 0x81a11dc

/* ARAD::ScriptManager::LoadScript() */

undefined4 __thiscall ARAD::ScriptManager::LoadScript(ScriptManager *this)

{
  char cVar1;
  undefined4 *puVar2;
  set<ARAD::ScriptInterface*,std::less<ARAD::ScriptInterface*>,std::allocator<ARAD::ScriptInterface*>>
  local_34 [4];
  set<ARAD::ScriptInterface*,std::less<ARAD::ScriptInterface*>,std::allocator<ARAD::ScriptInterface*>>
  local_30 [4];
  cMyTrace local_2c [16];
  cMyTrace local_1c [24];
  
  Init(this);
  std::
  set<ARAD::ScriptInterface*,std::less<ARAD::ScriptInterface*>,std::allocator<ARAD::ScriptInterface*>>
  ::begin(local_30);
  std::
  set<ARAD::ScriptInterface*,std::less<ARAD::ScriptInterface*>,std::allocator<ARAD::ScriptInterface*>>
  ::end(local_34);
  while( true ) {
    cVar1 = std::_Rb_tree_const_iterator<ARAD::ScriptInterface*>::operator!=
                      ((_Rb_tree_const_iterator<ARAD::ScriptInterface*> *)local_30,
                       (_Rb_tree_const_iterator *)local_34);
    if (cVar1 == '\0') {
      return 1;
    }
    puVar2 = (undefined4 *)
             std::_Rb_tree_const_iterator<ARAD::ScriptInterface*>::operator*
                       ((_Rb_tree_const_iterator<ARAD::ScriptInterface*> *)local_30);
    cVar1 = (*(code *)**(undefined4 **)*puVar2)((undefined4 *)*puVar2);
    if (cVar1 != '\x01') break;
    cMyTrace::cMyTrace(local_1c,"bool ARAD::ScriptManager::LoadScript()",0x15,9,false,true);
    cMyTrace::operator()(local_1c,"Success");
    std::_Rb_tree_const_iterator<ARAD::ScriptInterface*>::operator++
              ((_Rb_tree_const_iterator<ARAD::ScriptInterface*> *)local_30);
  }
  cMyTrace::cMyTrace(local_2c,"bool ARAD::ScriptManager::LoadScript()",0x12,9,true,true);
  cMyTrace::operator()(local_2c,"Fail");
  return 0;
}

```

---

## RegistScript

```asm
// === 081a136c ARAD::ScriptManager::RegistScript  [0x081a136c-0x81a13f5] ===
 81a136c:	55                   	push   %ebp
 81a136d:	89 e5                	mov    %esp,%ebp
 81a136f:	83 ec 28             	sub    $0x28,%esp
 81a1372:	8b 55 08             	mov    0x8(%ebp),%edx
 81a1375:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a1378:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a137c:	89 04 24             	mov    %eax,(%esp)
 81a137f:	e8 f8 01 00 00       	call   81a157c <_ZNKSt3setIPN4ARAD15ScriptInterfaceESt4lessIS2_ESaIS2_EE3endEv>
 81a1384:	83 ec 04             	sub    $0x4,%esp
 81a1387:	8b 55 08             	mov    0x8(%ebp),%edx
 81a138a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81a138d:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 81a1390:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81a1394:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a1398:	89 04 24             	mov    %eax,(%esp)
 81a139b:	e8 42 02 00 00       	call   81a15e2 <_ZNSt3setIPN4ARAD15ScriptInterfaceESt4lessIS2_ESaIS2_EE4findERKS2_>
 81a13a0:	83 ec 04             	sub    $0x4,%esp
 81a13a3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a13a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a13aa:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81a13ad:	89 04 24             	mov    %eax,(%esp)
 81a13b0:	e8 6b 02 00 00       	call   81a1620 <_ZNKSt23_Rb_tree_const_iteratorIPN4ARAD15ScriptInterfaceEEeqERKS3_>
 81a13b5:	84 c0                	test   %al,%al
 81a13b7:	74 1e                	je     81a13d7 <_ZN4ARAD13ScriptManager12RegistScriptEPNS_15ScriptInterfaceEi+0x6b>
 81a13b9:	8b 55 08             	mov    0x8(%ebp),%edx
 81a13bc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a13bf:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 81a13c2:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81a13c6:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a13ca:	89 04 24             	mov    %eax,(%esp)
 81a13cd:	e8 62 02 00 00       	call   81a1634 <_ZNSt3setIPN4ARAD15ScriptInterfaceESt4lessIS2_ESaIS2_EE6insertERKS2_>
 81a13d2:	83 ec 04             	sub    $0x4,%esp
 81a13d5:	c9                   	leave
 81a13d6:	c3                   	ret
 81a13d7:	8b 45 10             	mov    0x10(%ebp),%eax
 81a13da:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a13de:	c7 04 24 d0 b9 ba 08 	movl   $0x8bab9d0,(%esp)
 81a13e5:	e8 76 c7 ed ff       	call   807db60 <printf@plt>
 81a13ea:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 81a13f1:	e8 ca cd ed ff       	call   807e1c0 <exit@plt>

```

```c
// ARAD::ScriptManager::RegistScript @ 0x81a136c

/* ARAD::ScriptManager::RegistScript(ARAD::ScriptInterface*, int) */

void __thiscall
ARAD::ScriptManager::RegistScript(ScriptManager *this,ScriptInterface *param_1,int param_2)

{
  char cVar1;
  ScriptInterface **ppSVar2;
  set<ARAD::ScriptInterface*,std::less<ARAD::ScriptInterface*>,std::allocator<ARAD::ScriptInterface*>>
  local_1c [4];
  _Rb_tree_const_iterator<ARAD::ScriptInterface*> local_18 [4];
  ScriptInterface *local_14 [4];
  
  std::
  set<ARAD::ScriptInterface*,std::less<ARAD::ScriptInterface*>,std::allocator<ARAD::ScriptInterface*>>
  ::end(local_1c);
  ppSVar2 = &param_1;
  std::
  set<ARAD::ScriptInterface*,std::less<ARAD::ScriptInterface*>,std::allocator<ARAD::ScriptInterface*>>
  ::find((ScriptInterface **)local_18);
  cVar1 = std::_Rb_tree_const_iterator<ARAD::ScriptInterface*>::operator==
                    (local_18,(_Rb_tree_const_iterator *)local_1c);
  if (cVar1 != '\0') {
    std::
    set<ARAD::ScriptInterface*,std::less<ARAD::ScriptInterface*>,std::allocator<ARAD::ScriptInterface*>>
    ::insert(local_14);
    return;
  }
  printf("Arad_ScriptManager::RegistScript() Duplicate Class : Line(%d)",param_2,ppSVar2);
                    /* WARNING: Subroutine does not return */
  exit(0);
}

```

