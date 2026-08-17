# APSystem__CUserProc

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## CheckAndSendToMessageAllUser

```asm
// === 08122564 APSystem::CUserProc::CheckAndSendToMessageAllUser  [0x08122564-0x812256b] ===
 8122564:	55                   	push   %ebp
 8122565:	89 e5                	mov    %esp,%ebp
 8122567:	83 ec 20             	sub    $0x20,%esp
 812256a:	c9                   	leave
 812256b:	c3                   	ret

```

```c
// APSystem::CUserProc::CheckAndSendToMessageAllUser @ 0x8122564

/* APSystem::CUserProc::CheckAndSendToMessageAllUser(unsigned int, unsigned int, char const*) */

void APSystem::CUserProc::CheckAndSendToMessageAllUser(uint param_1,uint param_2,char *param_3)

{
  return;
}

```

---

## ClearActionAndSendtoUser

```asm
// === 08122390 APSystem::CUserProc::ClearActionAndSendtoUser  [0x08122390-0x8122397] ===
 8122390:	55                   	push   %ebp
 8122391:	89 e5                	mov    %esp,%ebp
 8122393:	83 ec 10             	sub    $0x10,%esp
 8122396:	c9                   	leave
 8122397:	c3                   	ret

```

```c
// APSystem::CUserProc::ClearActionAndSendtoUser @ 0x8122390

/* APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int,
   ENUM_PACKETCLASS) */

void APSystem::CUserProc::ClearActionAndSendtoUser(void)

{
  return;
}

```

---

## GM_Reset

```asm
// === 081225d2 APSystem::CUserProc::GM_Reset  [0x081225d2-0x81225ed] ===
 81225d2:	55                   	push   %ebp
 81225d3:	89 e5                	mov    %esp,%ebp
 81225d5:	83 ec 04             	sub    $0x4,%esp
 81225d8:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 81225dc:	74 0d                	je     81225eb <_ZN8APSystem9CUserProc8GM_ResetEP5CUser+0x19>
 81225de:	8b 45 08             	mov    0x8(%ebp),%eax
 81225e1:	89 04 24             	mov    %eax,(%esp)
 81225e4:	e8 a1 fd ff ff       	call   812238a <_ZN8APSystem9CUserProc33SetTodayActionAndCheckMedalRewardEP5CUser>
 81225e9:	eb 01                	jmp    81225ec <_ZN8APSystem9CUserProc8GM_ResetEP5CUser+0x1a>
 81225eb:	90                   	nop
 81225ec:	c9                   	leave
 81225ed:	c3                   	ret

```

```c
// APSystem::CUserProc::GM_Reset @ 0x81225d2

/* APSystem::CUserProc::GM_Reset(CUser*) */

void APSystem::CUserProc::GM_Reset(CUser *param_1)

{
  if (param_1 != (CUser *)0x0) {
    SetTodayActionAndCheckMedalReward(param_1);
  }
  return;
}

```

---

## GM_Set

```asm
// === 081225ee APSystem::CUserProc::GM_Set  [0x081225ee-0x8122629] ===
 81225ee:	55                   	push   %ebp
 81225ef:	89 e5                	mov    %esp,%ebp
 81225f1:	83 ec 18             	sub    $0x18,%esp
 81225f4:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 81225f8:	74 2c                	je     8122626 <_ZN8APSystem9CUserProc6GM_SetEP5CUserj+0x38>
 81225fa:	8b 45 08             	mov    0x8(%ebp),%eax
 81225fd:	8d 90 64 d2 08 00    	lea    0x8d264(%eax),%edx
 8122603:	8b 45 0c             	mov    0xc(%ebp),%eax
 8122606:	89 44 24 08          	mov    %eax,0x8(%esp)
 812260a:	8b 45 08             	mov    0x8(%ebp),%eax
 812260d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8122611:	89 14 24             	mov    %edx,(%esp)
 8122614:	e8 25 f5 ff ff       	call   8121b3e <_ZN8APSystem19CActionPointManager6GM_SetER5CUserj>
 8122619:	8b 45 08             	mov    0x8(%ebp),%eax
 812261c:	89 04 24             	mov    %eax,(%esp)
 812261f:	e8 7c fe ff ff       	call   81224a0 <_ZN8APSystem9CUserProc19SendActionListStateER5CUser>
 8122624:	eb 01                	jmp    8122627 <_ZN8APSystem9CUserProc6GM_SetEP5CUserj+0x39>
 8122626:	90                   	nop
 8122627:	c9                   	leave
 8122628:	c3                   	ret
 8122629:	90                   	nop

```

```c
// APSystem::CUserProc::GM_Set @ 0x81225ee

/* APSystem::CUserProc::GM_Set(CUser*, unsigned int) */

void APSystem::CUserProc::GM_Set(CUser *param_1,uint param_2)

{
  if (param_1 != (CUser *)0x0) {
    CActionPointManager::GM_Set((CActionPointManager *)(param_1 + 0x8d264),param_1,param_2);
    SendActionListState(param_1);
  }
  return;
}

```

---

## GetTodayRewardAndSendPostal

```asm
// === 0812255c APSystem::CUserProc::GetTodayRewardAndSendPostal  [0x0812255c-0x8122563] ===
 812255c:	55                   	push   %ebp
 812255d:	89 e5                	mov    %esp,%ebp
 812255f:	83 ec 10             	sub    $0x10,%esp
 8122562:	c9                   	leave
 8122563:	c3                   	ret

```

```c
// APSystem::CUserProc::GetTodayRewardAndSendPostal @ 0x812255c

/* APSystem::CUserProc::GetTodayRewardAndSendPostal(CUser*,
   APSystem::_SIG_LOAD_ACTION_POINT::_TodayRewardItem) */

void APSystem::CUserProc::GetTodayRewardAndSendPostal(void)

{
  return;
}

```

---

## SendActionClear

```asm
// === 081223b4 APSystem::CUserProc::SendActionClear  [0x081223b4-0x812249f] ===
 81223b4:	55                   	push   %ebp
 81223b5:	89 e5                	mov    %esp,%ebp
 81223b7:	56                   	push   %esi
 81223b8:	53                   	push   %ebx
 81223b9:	83 ec 40             	sub    $0x40,%esp
 81223bc:	8b 55 0c             	mov    0xc(%ebp),%edx
 81223bf:	8b 45 14             	mov    0x14(%ebp),%eax
 81223c2:	66 89 55 d4          	mov    %dx,-0x2c(%ebp)
 81223c6:	88 45 d0             	mov    %al,-0x30(%ebp)
 81223c9:	8d 45 ed             	lea    -0x13(%ebp),%eax
 81223cc:	89 04 24             	mov    %eax,(%esp)
 81223cf:	e8 d6 06 00 00       	call   8122aaa <_ZN8APSystem30_MSG_ACTION_POINT_ACTION_CLEARC1Ev>
 81223d4:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 81223d8:	66 89 45 f5          	mov    %ax,-0xb(%ebp)
 81223dc:	8b 45 10             	mov    0x10(%ebp),%eax
 81223df:	89 45 ed             	mov    %eax,-0x13(%ebp)
 81223e2:	0f b6 45 d0          	movzbl -0x30(%ebp),%eax
 81223e6:	88 45 f7             	mov    %al,-0x9(%ebp)
 81223e9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81223ec:	89 04 24             	mov    %eax,(%esp)
 81223ef:	e8 58 b9 46 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81223f4:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 81223f8:	75 1d                	jne    8122417 <_ZN8APSystem9CUserProc15SendActionClearER5CUsertNS_17_ActionGroupIndexEb16ENUM_PACKETCLASS+0x63>
 81223fa:	c7 44 24 08 f3 01 00 	movl   $0x1f3,0x8(%esp)
 8122401:	00 
 8122402:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8122409:	00 
 812240a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 812240d:	89 04 24             	mov    %eax,(%esp)
 8122410:	e8 e7 94 fa ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8122415:	eb 1b                	jmp    8122432 <_ZN8APSystem9CUserProc15SendActionClearER5CUsertNS_17_ActionGroupIndexEb16ENUM_PACKETCLASS+0x7e>
 8122417:	c7 44 24 08 28 02 00 	movl   $0x228,0x8(%esp)
 812241e:	00 
 812241f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8122426:	00 
 8122427:	8d 45 e0             	lea    -0x20(%ebp),%eax
 812242a:	89 04 24             	mov    %eax,(%esp)
 812242d:	e8 ca 94 fa ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8122432:	8d 45 ed             	lea    -0x13(%ebp),%eax
 8122435:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 812243c:	00 
 812243d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8122441:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8122444:	89 04 24             	mov    %eax,(%esp)
 8122447:	e8 bc ba ff ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 812244c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8122453:	00 
 8122454:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8122457:	89 04 24             	mov    %eax,(%esp)
 812245a:	e8 f9 94 fa ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 812245f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8122462:	89 44 24 04          	mov    %eax,0x4(%esp)
 8122466:	8b 45 08             	mov    0x8(%ebp),%eax
 8122469:	89 04 24             	mov    %eax,(%esp)
 812246c:	e8 49 61 52 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8122471:	eb 1b                	jmp    812248e <_ZN8APSystem9CUserProc15SendActionClearER5CUsertNS_17_ActionGroupIndexEb16ENUM_PACKETCLASS+0xda>
 8122473:	89 d3                	mov    %edx,%ebx
 8122475:	89 c6                	mov    %eax,%esi
 8122477:	8d 45 e0             	lea    -0x20(%ebp),%eax
 812247a:	89 04 24             	mov    %eax,(%esp)
 812247d:	e8 fe b9 46 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8122482:	89 f0                	mov    %esi,%eax
 8122484:	89 da                	mov    %ebx,%edx
 8122486:	89 04 24             	mov    %eax,(%esp)
 8122489:	e8 c2 12 9c 00       	call   8ae3750 <_Unwind_Resume>
 812248e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8122491:	89 04 24             	mov    %eax,(%esp)
 8122494:	e8 e7 b9 46 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8122499:	83 c4 40             	add    $0x40,%esp
 812249c:	5b                   	pop    %ebx
 812249d:	5e                   	pop    %esi
 812249e:	5d                   	pop    %ebp
 812249f:	c3                   	ret

```

```c
// APSystem::CUserProc::SendActionClear @ 0x81223b4

/* APSystem::CUserProc::SendActionClear(CUser&, unsigned short, APSystem::_ActionGroupIndex, bool,
   ENUM_PACKETCLASS) */

void APSystem::CUserProc::SendActionClear
               (CUser *param_1,undefined2 param_2,undefined4 param_3,undefined1 param_4,int param_5)

{
  PacketGuard local_24 [13];
  undefined4 local_17 [2];
  undefined2 local_f;
  undefined1 local_d;
  
  _MSG_ACTION_POINT_ACTION_CLEAR::_MSG_ACTION_POINT_ACTION_CLEAR
            ((_MSG_ACTION_POINT_ACTION_CLEAR *)local_17);
  local_17[0] = param_3;
  local_f = param_2;
  local_d = param_4;
  PacketGuard::PacketGuard(local_24);
  if (param_5 == 0) {
                    /* try { // try from 08122410 to 08122470 has its CatchHandler @ 08122473 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,499);
  }
  else {
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x228);
  }
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_24,(char *)local_17,0xb);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
  CUser::Send(param_1,local_24);
  PacketGuard::~PacketGuard(local_24);
  return;
}

```

---

## SendActionListState

```asm
// === 08122398 APSystem::CUserProc::SendActionListState  [0x08122398-0x81223b3] ===
 8122398:	55                   	push   %ebp
 8122399:	89 e5                	mov    %esp,%ebp
 812239b:	83 ec 18             	sub    $0x18,%esp
 812239e:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 81223a2:	74 0d                	je     81223b1 <_ZN8APSystem9CUserProc19SendActionListStateEP5CUser+0x19>
 81223a4:	8b 45 08             	mov    0x8(%ebp),%eax
 81223a7:	89 04 24             	mov    %eax,(%esp)
 81223aa:	e8 f1 00 00 00       	call   81224a0 <_ZN8APSystem9CUserProc19SendActionListStateER5CUser>
 81223af:	eb 01                	jmp    81223b2 <_ZN8APSystem9CUserProc19SendActionListStateEP5CUser+0x1a>
 81223b1:	90                   	nop
 81223b2:	c9                   	leave
 81223b3:	c3                   	ret

```

```c
// APSystem::CUserProc::SendActionListState @ 0x8122398

/* APSystem::CUserProc::SendActionListState(CUser*) */

void APSystem::CUserProc::SendActionListState(CUser *param_1)

{
  if (param_1 != (CUser *)0x0) {
    SendActionListState(param_1);
  }
  return;
}

```

---

## SendActionListState_081224a0

```asm
// === 081224a0 APSystem::CUserProc::SendActionListState  [0x081224a0-0x81224ab] ===
 81224a0:	55                   	push   %ebp
 81224a1:	89 e5                	mov    %esp,%ebp
 81224a3:	81 ec 20 0d 00 00    	sub    $0xd20,%esp
 81224a9:	c9                   	leave
 81224aa:	c3                   	ret
 81224ab:	90                   	nop

```

```c
// APSystem::CUserProc::SendActionListState @ 0x81224a0

/* APSystem::CUserProc::SendActionListState(CUser&) */

void APSystem::CUserProc::SendActionListState(CUser *param_1)

{
  return;
}

```

---

## SendGetRewardItem

```asm
// === 081224ac APSystem::CUserProc::SendGetRewardItem  [0x081224ac-0x812255b] ===
 81224ac:	55                   	push   %ebp
 81224ad:	89 e5                	mov    %esp,%ebp
 81224af:	56                   	push   %esi
 81224b0:	53                   	push   %ebx
 81224b1:	83 ec 40             	sub    $0x40,%esp
 81224b4:	8b 45 10             	mov    0x10(%ebp),%eax
 81224b7:	88 45 d4             	mov    %al,-0x2c(%ebp)
 81224ba:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81224bd:	89 04 24             	mov    %eax,(%esp)
 81224c0:	e8 87 b8 46 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81224c5:	c7 44 24 08 29 02 00 	movl   $0x229,0x8(%esp)
 81224cc:	00 
 81224cd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81224d4:	00 
 81224d5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81224d8:	89 04 24             	mov    %eax,(%esp)
 81224db:	e8 1c 94 fa ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81224e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81224e3:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81224e6:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 81224ea:	88 45 e7             	mov    %al,-0x19(%ebp)
 81224ed:	8d 45 e7             	lea    -0x19(%ebp),%eax
 81224f0:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 81224f7:	00 
 81224f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81224fc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81224ff:	89 04 24             	mov    %eax,(%esp)
 8122502:	e8 01 ba ff ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 8122507:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 812250e:	00 
 812250f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8122512:	89 04 24             	mov    %eax,(%esp)
 8122515:	e8 3e 94 fa ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 812251a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 812251d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8122521:	8b 45 08             	mov    0x8(%ebp),%eax
 8122524:	89 04 24             	mov    %eax,(%esp)
 8122527:	e8 8e 60 52 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 812252c:	eb 1b                	jmp    8122549 <_ZN8APSystem9CUserProc17SendGetRewardItemER5CUserNS_22_SIG_LOAD_ACTION_POINT16_TodayRewardItemEb+0x9d>
 812252e:	89 d3                	mov    %edx,%ebx
 8122530:	89 c6                	mov    %eax,%esi
 8122532:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8122535:	89 04 24             	mov    %eax,(%esp)
 8122538:	e8 43 b9 46 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 812253d:	89 f0                	mov    %esi,%eax
 812253f:	89 da                	mov    %ebx,%edx
 8122541:	89 04 24             	mov    %eax,(%esp)
 8122544:	e8 07 12 9c 00       	call   8ae3750 <_Unwind_Resume>
 8122549:	8d 45 ec             	lea    -0x14(%ebp),%eax
 812254c:	89 04 24             	mov    %eax,(%esp)
 812254f:	e8 2c b9 46 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8122554:	83 c4 40             	add    $0x40,%esp
 8122557:	5b                   	pop    %ebx
 8122558:	5e                   	pop    %esi
 8122559:	5d                   	pop    %ebp
 812255a:	c3                   	ret
 812255b:	90                   	nop

```

```c
// APSystem::CUserProc::SendGetRewardItem @ 0x81224ac

/* APSystem::CUserProc::SendGetRewardItem(CUser&,
   APSystem::_SIG_LOAD_ACTION_POINT::_TodayRewardItem, bool) */

void APSystem::CUserProc::SendGetRewardItem(CUser *param_1,undefined4 param_2,char param_3)

{
  char local_1d;
  undefined4 local_1c;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 081224db to 0812252b has its CatchHandler @ 0812252e */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0x229);
  local_1c = param_2;
  local_1d = param_3;
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_18,&local_1d,5);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## SendToMessageAllUser

```asm
// === 08122572 APSystem::CUserProc::SendToMessageAllUser  [0x08122572-0x81225d1] ===
 8122572:	55                   	push   %ebp
 8122573:	89 e5                	mov    %esp,%ebp
 8122575:	81 ec 28 04 00 00    	sub    $0x428,%esp
 812257b:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 812257f:	74 4a                	je     81225cb <_ZN8APSystem9CUserProc20SendToMessageAllUserEPKcS2_+0x59>
 8122581:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8122585:	74 47                	je     81225ce <_ZN8APSystem9CUserProc20SendToMessageAllUserEPKcS2_+0x5c>
 8122587:	8b 45 08             	mov    0x8(%ebp),%eax
 812258a:	89 44 24 08          	mov    %eax,0x8(%esp)
 812258e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8122591:	89 44 24 04          	mov    %eax,0x4(%esp)
 8122595:	8d 85 e8 fb ff ff    	lea    -0x418(%ebp),%eax
 812259b:	89 04 24             	mov    %eax,(%esp)
 812259e:	e8 9d be f5 ff       	call   807e440 <sprintf@plt>
 81225a3:	c7 45 e8 a0 d4 b5 08 	movl   $0x8b5d4a0,-0x18(%ebp)
 81225aa:	8d 85 e8 fb ff ff    	lea    -0x418(%ebp),%eax
 81225b0:	89 04 24             	mov    %eax,(%esp)
 81225b3:	e8 f8 bd f5 ff       	call   807e3b0 <strlen@plt>
 81225b8:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81225bb:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81225c2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81225c9:	eb 04                	jmp    81225cf <_ZN8APSystem9CUserProc20SendToMessageAllUserEPKcS2_+0x5d>
 81225cb:	90                   	nop
 81225cc:	eb 01                	jmp    81225cf <_ZN8APSystem9CUserProc20SendToMessageAllUserEPKcS2_+0x5d>
 81225ce:	90                   	nop
 81225cf:	c9                   	leave
 81225d0:	c3                   	ret
 81225d1:	90                   	nop

```

```c
// APSystem::CUserProc::SendToMessageAllUser @ 0x8122572

/* APSystem::CUserProc::SendToMessageAllUser(char const*, char const*) */

void APSystem::CUserProc::SendToMessageAllUser(char *param_1,char *param_2)

{
  char local_41c [1024];
  undefined *local_1c;
  
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    sprintf(local_41c,param_2,param_1);
    local_1c = &DAT_08b5d4a0;
    strlen(local_41c);
  }
  return;
}

```

---

## SetTodayActionAndCheckMedalReward

```asm
// === 0812238a APSystem::CUserProc::SetTodayActionAndCheckMedalReward  [0x0812238a-0x812238f] ===
 812238a:	55                   	push   %ebp
 812238b:	89 e5                	mov    %esp,%ebp
 812238d:	5d                   	pop    %ebp
 812238e:	c3                   	ret
 812238f:	90                   	nop

```

```c
// APSystem::CUserProc::SetTodayActionAndCheckMedalReward @ 0x812238a

/* APSystem::CUserProc::SetTodayActionAndCheckMedalReward(CUser*) */

void APSystem::CUserProc::SetTodayActionAndCheckMedalReward(CUser *param_1)

{
  return;
}

```

---

## UpdateActionPoint

```asm
// === 0812256c APSystem::CUserProc::UpdateActionPoint  [0x0812256c-0x8122571] ===
 812256c:	55                   	push   %ebp
 812256d:	89 e5                	mov    %esp,%ebp
 812256f:	5d                   	pop    %ebp
 8122570:	c3                   	ret
 8122571:	90                   	nop

```

```c
// APSystem::CUserProc::UpdateActionPoint @ 0x812256c

/* APSystem::CUserProc::UpdateActionPoint(CUser*) */

void APSystem::CUserProc::UpdateActionPoint(CUser *param_1)

{
  return;
}

```

