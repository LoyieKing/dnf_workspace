# CPowerWarEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## CPowerWarEvent

```asm
// === 08267990 CPowerWarEvent::CPowerWarEvent  [0x08267990-0x82679ab] ===
 8267990:	55                   	push   %ebp
 8267991:	89 e5                	mov    %esp,%ebp
 8267993:	83 ec 18             	sub    $0x18,%esp
 8267996:	8b 45 08             	mov    0x8(%ebp),%eax
 8267999:	89 04 24             	mov    %eax,(%esp)
 826799c:	e8 8b 34 ea ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 82679a1:	8b 45 08             	mov    0x8(%ebp),%eax
 82679a4:	c7 00 e8 12 bf 08    	movl   $0x8bf12e8,(%eax)
 82679aa:	c9                   	leave
 82679ab:	c3                   	ret

```

```c
// CPowerWarEvent::CPowerWarEvent @ 0x8267990

/* CPowerWarEvent::CPowerWarEvent() */

void __thiscall CPowerWarEvent::CPowerWarEvent(CPowerWarEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CPowerWarEvent_08bf12e8;
  return;
}

```

---

## CleanupPowerWarServerMessage

```asm
// === 08268492 CPowerWarEvent::CleanupPowerWarServerMessage  [0x08268492-0x826862e] ===
 8268492:	55                   	push   %ebp
 8268493:	89 e5                	mov    %esp,%ebp
 8268495:	56                   	push   %esi
 8268496:	53                   	push   %ebx
 8268497:	83 ec 30             	sub    $0x30,%esp
 826849a:	e8 ef 3c e6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 826849f:	89 04 24             	mov    %eax,(%esp)
 82684a2:	e8 45 0a 03 00       	call   8298eec <_ZN12CGameManager29GetSharedServerMessageManagerEv>
 82684a7:	89 45 e8             	mov    %eax,-0x18(%ebp)
 82684aa:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 82684ae:	0f 84 74 01 00 00    	je     8268628 <_ZN14CPowerWarEvent28CleanupPowerWarServerMessageEv+0x196>
 82684b4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82684bb:	00 
 82684bc:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82684bf:	89 04 24             	mov    %eax,(%esp)
 82684c2:	e8 45 88 39 00       	call   8600d0c <_ZN27CSharedServerMessageManager21DeleteSpecificMessageEi>
 82684c7:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 82684ce:	00 
 82684cf:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82684d2:	89 04 24             	mov    %eax,(%esp)
 82684d5:	e8 32 88 39 00       	call   8600d0c <_ZN27CSharedServerMessageManager21DeleteSpecificMessageEi>
 82684da:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 82684e1:	00 
 82684e2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82684e5:	89 04 24             	mov    %eax,(%esp)
 82684e8:	e8 1f 88 39 00       	call   8600d0c <_ZN27CSharedServerMessageManager21DeleteSpecificMessageEi>
 82684ed:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82684f0:	89 04 24             	mov    %eax,(%esp)
 82684f3:	e8 54 58 32 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82684f8:	c7 44 24 08 c0 00 00 	movl   $0xc0,0x8(%esp)
 82684ff:	00 
 8268500:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8268507:	00 
 8268508:	8d 45 dc             	lea    -0x24(%ebp),%eax
 826850b:	89 04 24             	mov    %eax,(%esp)
 826850e:	e8 e9 33 e6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8268513:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 826851a:	00 
 826851b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 826851e:	89 04 24             	mov    %eax,(%esp)
 8268521:	e8 fa 33 e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8268526:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 826852d:	00 
 826852e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8268531:	89 04 24             	mov    %eax,(%esp)
 8268534:	e8 e7 33 e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8268539:	c7 45 ec 87 05 bf 08 	movl   $0x8bf0587,-0x14(%ebp)
 8268540:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8268543:	89 04 24             	mov    %eax,(%esp)
 8268546:	e8 65 5e e1 ff       	call   807e3b0 <strlen@plt>
 826854b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 826854e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8268555:	eb 6f                	jmp    82685c6 <_ZN14CPowerWarEvent28CleanupPowerWarServerMessageEv+0x134>
 8268557:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826855a:	83 c0 01             	add    $0x1,%eax
 826855d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8268561:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8268564:	89 04 24             	mov    %eax,(%esp)
 8268567:	e8 b4 33 e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 826856c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826856f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8268573:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8268576:	89 04 24             	mov    %eax,(%esp)
 8268579:	e8 be 33 e6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 826857e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8268581:	89 44 24 08          	mov    %eax,0x8(%esp)
 8268585:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8268588:	89 44 24 04          	mov    %eax,0x4(%esp)
 826858c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 826858f:	89 04 24             	mov    %eax,(%esp)
 8268592:	e8 4d ee f4 ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 8268597:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826859a:	89 44 24 04          	mov    %eax,0x4(%esp)
 826859e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82685a1:	89 04 24             	mov    %eax,(%esp)
 82685a4:	e8 93 33 e6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82685a9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82685ac:	89 44 24 08          	mov    %eax,0x8(%esp)
 82685b0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82685b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 82685b7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82685ba:	89 04 24             	mov    %eax,(%esp)
 82685bd:	e8 22 ee f4 ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 82685c2:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82685c6:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 82685ca:	0f 9e c0             	setle  %al
 82685cd:	84 c0                	test   %al,%al
 82685cf:	75 86                	jne    8268557 <_ZN14CPowerWarEvent28CleanupPowerWarServerMessageEv+0xc5>
 82685d1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82685d8:	00 
 82685d9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82685dc:	89 04 24             	mov    %eax,(%esp)
 82685df:	e8 74 33 e6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82685e4:	e8 be 1d e7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 82685e9:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 82685f0:	00 
 82685f1:	8d 55 dc             	lea    -0x24(%ebp),%edx
 82685f4:	89 54 24 04          	mov    %edx,0x4(%esp)
 82685f8:	89 04 24             	mov    %eax,(%esp)
 82685fb:	e8 84 0b 46 00       	call   86c9184 <_ZN9GameWorld19send_all_with_stateER11PacketGuardi>
 8268600:	eb 1b                	jmp    826861d <_ZN14CPowerWarEvent28CleanupPowerWarServerMessageEv+0x18b>
 8268602:	89 d3                	mov    %edx,%ebx
 8268604:	89 c6                	mov    %eax,%esi
 8268606:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8268609:	89 04 24             	mov    %eax,(%esp)
 826860c:	e8 6f 58 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8268611:	89 f0                	mov    %esi,%eax
 8268613:	89 da                	mov    %ebx,%edx
 8268615:	89 04 24             	mov    %eax,(%esp)
 8268618:	e8 33 b1 87 00       	call   8ae3750 <_Unwind_Resume>
 826861d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8268620:	89 04 24             	mov    %eax,(%esp)
 8268623:	e8 58 58 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8268628:	83 c4 30             	add    $0x30,%esp
 826862b:	5b                   	pop    %ebx
 826862c:	5e                   	pop    %esi
 826862d:	5d                   	pop    %ebp
 826862e:	c3                   	ret

```

```c
// CPowerWarEvent::CleanupPowerWarServerMessage @ 0x8268492

/* CPowerWarEvent::CleanupPowerWarServerMessage() */

void CPowerWarEvent::CleanupPowerWarServerMessage(void)

{
  CGameManager *this;
  GameWorld *this_00;
  PacketGuard local_28 [12];
  CSharedServerMessageManager *local_1c;
  char *local_18;
  size_t local_14;
  int local_10;
  
  this = (CGameManager *)G_CGameManager();
  local_1c = (CSharedServerMessageManager *)CGameManager::GetSharedServerMessageManager(this);
  if (local_1c != (CSharedServerMessageManager *)0x0) {
    CSharedServerMessageManager::DeleteSpecificMessage(local_1c,1);
    CSharedServerMessageManager::DeleteSpecificMessage(local_1c,2);
    CSharedServerMessageManager::DeleteSpecificMessage(local_1c,3);
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 0826850e to 082685ff has its CatchHandler @ 08268602 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0xc0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,3);
    local_18 = "null string";
    local_14 = strlen("null string");
    for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,local_10 + 1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,local_14);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_28,local_18,local_14);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,local_14);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_28,local_18,local_14);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_all_with_state(this_00,local_28,3);
    PacketGuard::~PacketGuard(local_28);
  }
  return;
}

```

---

## EndEvent

```asm
// === 082681e2 CPowerWarEvent::EndEvent  [0x082681e2-0x8268491] ===
 82681e2:	55                   	push   %ebp
 82681e3:	89 e5                	mov    %esp,%ebp
 82681e5:	56                   	push   %esi
 82681e6:	53                   	push   %ebx
 82681e7:	83 ec 60             	sub    $0x60,%esp
 82681ea:	e8 92 3f e6 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 82681ef:	8b 80 a8 01 00 00    	mov    0x1a8(%eax),%eax
 82681f5:	83 f8 01             	cmp    $0x1,%eax
 82681f8:	74 10                	je     826820a <_ZN14CPowerWarEvent8EndEventEv+0x28>
 82681fa:	e8 82 3f e6 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 82681ff:	8b 80 a8 01 00 00    	mov    0x1a8(%eax),%eax
 8268205:	83 f8 02             	cmp    $0x2,%eax
 8268208:	75 07                	jne    8268211 <_ZN14CPowerWarEvent8EndEventEv+0x2f>
 826820a:	b8 01 00 00 00       	mov    $0x1,%eax
 826820f:	eb 05                	jmp    8268216 <_ZN14CPowerWarEvent8EndEventEv+0x34>
 8268211:	b8 00 00 00 00       	mov    $0x0,%eax
 8268216:	84 c0                	test   %al,%al
 8268218:	0f 85 6b 02 00 00    	jne    8268489 <_ZN14CPowerWarEvent8EndEventEv+0x2a7>
 826821e:	8b 45 08             	mov    0x8(%ebp),%eax
 8268221:	8b 00                	mov    (%eax),%eax
 8268223:	83 c0 34             	add    $0x34,%eax
 8268226:	8b 10                	mov    (%eax),%edx
 8268228:	8b 45 08             	mov    0x8(%ebp),%eax
 826822b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8268232:	00 
 8268233:	89 04 24             	mov    %eax,(%esp)
 8268236:	ff d2                	call   *%edx
 8268238:	84 c0                	test   %al,%al
 826823a:	0f 84 4a 02 00 00    	je     826848a <_ZN14CPowerWarEvent8EndEventEv+0x2a8>
 8268240:	8b 45 08             	mov    0x8(%ebp),%eax
 8268243:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 826824a:	00 
 826824b:	89 04 24             	mov    %eax,(%esp)
 826824e:	e8 8f 02 e6 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8268253:	8b 45 08             	mov    0x8(%ebp),%eax
 8268256:	66 c7 40 0a 00 00    	movw   $0x0,0xa(%eax)
 826825c:	8b 45 08             	mov    0x8(%ebp),%eax
 826825f:	66 c7 40 0c 00 00    	movw   $0x0,0xc(%eax)
 8268265:	e8 31 3f e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 826826a:	83 c0 68             	add    $0x68,%eax
 826826d:	c7 44 24 04 ff 2a 00 	movl   $0x2aff,0x4(%esp)
 8268274:	00 
 8268275:	89 04 24             	mov    %eax,(%esp)
 8268278:	e8 7f 05 00 00       	call   82687fc <_ZN21ServerParameterScript13isDungeonOpenEi>
 826827d:	83 f0 01             	xor    $0x1,%eax
 8268280:	84 c0                	test   %al,%al
 8268282:	0f 84 bd 00 00 00    	je     8268345 <_ZN14CPowerWarEvent8EndEventEv+0x163>
 8268288:	c7 04 24 ff 2a 00 00 	movl   $0x2aff,(%esp)
 826828f:	e8 7e 17 3d 00       	call   8639a12 <_ZN26Timer_DungeonInoutOpenTime21checkDungeonInoutTimeEi>
 8268294:	84 c0                	test   %al,%al
 8268296:	74 75                	je     826830d <_ZN14CPowerWarEvent8EndEventEv+0x12b>
 8268298:	e8 fe 3e e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 826829d:	83 c0 68             	add    $0x68,%eax
 82682a0:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82682a7:	00 
 82682a8:	c7 44 24 04 ff 2a 00 	movl   $0x2aff,0x4(%esp)
 82682af:	00 
 82682b0:	89 04 24             	mov    %eax,(%esp)
 82682b3:	e8 d4 03 00 00       	call   826868c <_ZN21ServerParameterScript14setDungeonOpenEib>
 82682b8:	e8 ea 20 e7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 82682bd:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82682c4:	00 
 82682c5:	c7 44 24 04 ff 2a 00 	movl   $0x2aff,0x4(%esp)
 82682cc:	00 
 82682cd:	89 04 24             	mov    %eax,(%esp)
 82682d0:	e8 79 0b 46 00       	call   86c8e4e <_ZN9GameWorld30send_all_dungeon_inout_messageEib>
 82682d5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82682dc:	00 
 82682dd:	c7 44 24 08 de 00 00 	movl   $0xde,0x8(%esp)
 82682e4:	00 
 82682e5:	c7 44 24 04 20 12 bf 	movl   $0x8bf1220,0x4(%esp)
 82682ec:	08 
 82682ed:	8d 45 b8             	lea    -0x48(%ebp),%eax
 82682f0:	89 04 24             	mov    %eax,(%esp)
 82682f3:	e8 20 74 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82682f8:	c7 44 24 04 d4 04 bf 	movl   $0x8bf04d4,0x4(%esp)
 82682ff:	08 
 8268300:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8268303:	89 04 24             	mov    %eax,(%esp)
 8268306:	e8 7d 74 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 826830b:	eb 6e                	jmp    826837b <_ZN14CPowerWarEvent8EndEventEv+0x199>
 826830d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8268314:	00 
 8268315:	c7 44 24 08 e1 00 00 	movl   $0xe1,0x8(%esp)
 826831c:	00 
 826831d:	c7 44 24 04 20 12 bf 	movl   $0x8bf1220,0x4(%esp)
 8268324:	08 
 8268325:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8268328:	89 04 24             	mov    %eax,(%esp)
 826832b:	e8 e8 73 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8268330:	c7 44 24 04 14 05 bf 	movl   $0x8bf0514,0x4(%esp)
 8268337:	08 
 8268338:	8d 45 c8             	lea    -0x38(%ebp),%eax
 826833b:	89 04 24             	mov    %eax,(%esp)
 826833e:	e8 45 74 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8268343:	eb 36                	jmp    826837b <_ZN14CPowerWarEvent8EndEventEv+0x199>
 8268345:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 826834c:	00 
 826834d:	c7 44 24 08 e4 00 00 	movl   $0xe4,0x8(%esp)
 8268354:	00 
 8268355:	c7 44 24 04 20 12 bf 	movl   $0x8bf1220,0x4(%esp)
 826835c:	08 
 826835d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8268360:	89 04 24             	mov    %eax,(%esp)
 8268363:	e8 b0 73 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8268368:	c7 44 24 04 44 05 bf 	movl   $0x8bf0544,0x4(%esp)
 826836f:	08 
 8268370:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8268373:	89 04 24             	mov    %eax,(%esp)
 8268376:	e8 0d 74 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 826837b:	8d 45 ac             	lea    -0x54(%ebp),%eax
 826837e:	89 04 24             	mov    %eax,(%esp)
 8268381:	e8 c6 59 32 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8268386:	c7 44 24 08 a0 00 00 	movl   $0xa0,0x8(%esp)
 826838d:	00 
 826838e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8268395:	00 
 8268396:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8268399:	89 04 24             	mov    %eax,(%esp)
 826839c:	e8 5b 35 e6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82683a1:	e8 01 20 e7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 82683a6:	8d 55 ac             	lea    -0x54(%ebp),%edx
 82683a9:	89 54 24 04          	mov    %edx,0x4(%esp)
 82683ad:	89 04 24             	mov    %eax,(%esp)
 82683b0:	e8 eb 69 46 00       	call   86ceda0 <_ZN9GameWorld13OnEndPowerWarER11PacketGuard>
 82683b5:	e8 ed 1f e7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 82683ba:	89 04 24             	mov    %eax,(%esp)
 82683bd:	e8 94 6f 46 00       	call   86cf356 <_ZN9GameWorld13CancelPowerUpEv>
 82683c2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82683c9:	00 
 82683ca:	8d 45 ac             	lea    -0x54(%ebp),%eax
 82683cd:	89 04 24             	mov    %eax,(%esp)
 82683d0:	e8 83 35 e6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82683d5:	e8 cd 1f e7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 82683da:	8d 55 ac             	lea    -0x54(%ebp),%edx
 82683dd:	89 54 24 04          	mov    %edx,0x4(%esp)
 82683e1:	89 04 24             	mov    %eax,(%esp)
 82683e4:	e8 2b 08 46 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 82683e9:	8b 45 08             	mov    0x8(%ebp),%eax
 82683ec:	89 04 24             	mov    %eax,(%esp)
 82683ef:	e8 9e 00 00 00       	call   8268492 <_ZN14CPowerWarEvent28CleanupPowerWarServerMessageEv>
 82683f4:	e8 a7 cc fc ff       	call   82350a0 <_ZN11pvp_assault21GetInstanceAssaultMgrEv>
 82683f9:	89 04 24             	mov    %eax,(%esp)
 82683fc:	e8 f3 51 08 00       	call   82ed5f4 <_ZN11pvp_assault11CAssaultMgr19FrocedCloseAssaultsEv>
 8268401:	66 c7 45 a8 00 00    	movw   $0x0,-0x58(%ebp)
 8268407:	66 c7 45 aa 00 00    	movw   $0x0,-0x56(%ebp)
 826840d:	a1 30 f7 41 09       	mov    0x941f730,%eax
 8268412:	8b 55 a8             	mov    -0x58(%ebp),%edx
 8268415:	89 54 24 08          	mov    %edx,0x8(%esp)
 8268419:	c7 44 24 04 35 00 00 	movl   $0x35,0x4(%esp)
 8268420:	00 
 8268421:	89 04 24             	mov    %eax,(%esp)
 8268424:	e8 9d d8 ea ff       	call   8115cc6 <_ZN13CEventManager17TriggerEventStartEi10Word_Param>
 8268429:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8268430:	00 
 8268431:	c7 44 24 08 10 01 00 	movl   $0x110,0x8(%esp)
 8268438:	00 
 8268439:	c7 44 24 04 20 12 bf 	movl   $0x8bf1220,0x4(%esp)
 8268440:	08 
 8268441:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8268444:	89 04 24             	mov    %eax,(%esp)
 8268447:	e8 cc 72 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 826844c:	c7 44 24 04 73 05 bf 	movl   $0x8bf0573,0x4(%esp)
 8268453:	08 
 8268454:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8268457:	89 04 24             	mov    %eax,(%esp)
 826845a:	e8 29 73 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 826845f:	eb 1b                	jmp    826847c <_ZN14CPowerWarEvent8EndEventEv+0x29a>
 8268461:	89 d3                	mov    %edx,%ebx
 8268463:	89 c6                	mov    %eax,%esi
 8268465:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8268468:	89 04 24             	mov    %eax,(%esp)
 826846b:	e8 10 5a 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8268470:	89 f0                	mov    %esi,%eax
 8268472:	89 da                	mov    %ebx,%edx
 8268474:	89 04 24             	mov    %eax,(%esp)
 8268477:	e8 d4 b2 87 00       	call   8ae3750 <_Unwind_Resume>
 826847c:	8d 45 ac             	lea    -0x54(%ebp),%eax
 826847f:	89 04 24             	mov    %eax,(%esp)
 8268482:	e8 f9 59 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8268487:	eb 01                	jmp    826848a <_ZN14CPowerWarEvent8EndEventEv+0x2a8>
 8268489:	90                   	nop
 826848a:	83 c4 60             	add    $0x60,%esp
 826848d:	5b                   	pop    %ebx
 826848e:	5e                   	pop    %esi
 826848f:	5d                   	pop    %ebp
 8268490:	c3                   	ret
 8268491:	90                   	nop

```

```c
// CPowerWarEvent::EndEvent @ 0x82681e2

/* CPowerWarEvent::EndEvent() */

void __thiscall CPowerWarEvent::EndEvent(CPowerWarEvent *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  GameWorld *pGVar4;
  PacketGuard local_58 [12];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  cMyTrace local_1c [16];
  
  iVar3 = G_CEnvironment();
  if (*(int *)(iVar3 + 0x1a8) != 1) {
    iVar3 = G_CEnvironment();
    if (*(int *)(iVar3 + 0x1a8) != 2) {
      bVar1 = false;
      goto LAB_08268216;
    }
  }
  bVar1 = true;
LAB_08268216:
  if (!bVar1) {
    cVar2 = (**(code **)(*(int *)this + 0x34))(this,0);
    if (cVar2 != '\0') {
      CEventBase::SetEventFlag((CEventBase *)this,false);
      *(undefined2 *)(this + 10) = 0;
      *(undefined2 *)(this + 0xc) = 0;
      iVar3 = G_CDataManager();
      cVar2 = ServerParameterScript::isDungeonOpen(iVar3 + 0x68);
      if (cVar2 == '\x01') {
        cMyTrace::cMyTrace(local_2c,"virtual void CPowerWarEvent::EndEvent()",0xe4,0);
        cMyTrace::operator()(local_2c,"ULTIMATE_LOG : ALLEADY ULTIMATE DUNGEON OPEN!!");
      }
      else {
        cVar2 = Timer_DungeonInoutOpenTime::checkDungeonInoutTime(0x2aff);
        if (cVar2 == '\0') {
          cMyTrace::cMyTrace(local_3c,"virtual void CPowerWarEvent::EndEvent()",0xe1,0);
          cMyTrace::operator()(local_3c,"ULTIMATE_LOG : NOT UTIMATE DUNGEON OPEN TIME!!");
        }
        else {
          iVar3 = G_CDataManager();
          ServerParameterScript::setDungeonOpen((ServerParameterScript *)(iVar3 + 0x68),0x2aff,true)
          ;
          pGVar4 = (GameWorld *)G_GameWorld();
          GameWorld::send_all_dungeon_inout_message(pGVar4,0x2aff,true);
          cMyTrace::cMyTrace(local_4c,"virtual void CPowerWarEvent::EndEvent()",0xde,0);
          cMyTrace::operator()
                    (local_4c,"ULTIMATE_LOG : POWER WAR EVENT END!! ULTIMATE DUNGEON OPEN!!");
        }
      }
      PacketGuard::PacketGuard(local_58);
                    /* try { // try from 0826839c to 0826845e has its CatchHandler @ 08268461 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_58,0,0xa0);
      pGVar4 = (GameWorld *)G_GameWorld();
      GameWorld::OnEndPowerWar(pGVar4,local_58);
      pGVar4 = (GameWorld *)G_GameWorld();
      GameWorld::CancelPowerUp(pGVar4);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_58,true);
      pGVar4 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar4,local_58);
      CleanupPowerWarServerMessage();
      pvp_assault::GetInstanceAssaultMgr();
      pvp_assault::CAssaultMgr::FrocedCloseAssaults();
      CEventManager::TriggerEventStart(GlobalData::s_event_manager,0x35,0);
      cMyTrace::cMyTrace(local_1c,"virtual void CPowerWarEvent::EndEvent()",0x110,0);
      cMyTrace::operator()(local_1c,"Power War Event End");
      PacketGuard::~PacketGuard(local_58);
    }
  }
  return;
}

```

---

## StartEvent

```asm
// === 082679fa CPowerWarEvent::StartEvent  [0x082679fa-0x8267de9] ===
 82679fa:	55                   	push   %ebp
 82679fb:	89 e5                	mov    %esp,%ebp
 82679fd:	57                   	push   %edi
 82679fe:	56                   	push   %esi
 82679ff:	53                   	push   %ebx
 8267a00:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 8267a06:	e8 76 47 e6 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8267a0b:	8b 80 a8 01 00 00    	mov    0x1a8(%eax),%eax
 8267a11:	83 f8 01             	cmp    $0x1,%eax
 8267a14:	74 10                	je     8267a26 <_ZN14CPowerWarEvent10StartEventEv+0x2c>
 8267a16:	e8 66 47 e6 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8267a1b:	8b 80 a8 01 00 00    	mov    0x1a8(%eax),%eax
 8267a21:	83 f8 02             	cmp    $0x2,%eax
 8267a24:	75 07                	jne    8267a2d <_ZN14CPowerWarEvent10StartEventEv+0x33>
 8267a26:	b8 01 00 00 00       	mov    $0x1,%eax
 8267a2b:	eb 05                	jmp    8267a32 <_ZN14CPowerWarEvent10StartEventEv+0x38>
 8267a2d:	b8 00 00 00 00       	mov    $0x0,%eax
 8267a32:	84 c0                	test   %al,%al
 8267a34:	74 52                	je     8267a88 <_ZN14CPowerWarEvent10StartEventEv+0x8e>
 8267a36:	8d 45 a6             	lea    -0x5a(%ebp),%eax
 8267a39:	89 04 24             	mov    %eax,(%esp)
 8267a3c:	e8 59 0e 00 00       	call   826889a <_ZN24Packet_Monitor_Event_EndC1Ev>
 8267a41:	c7 45 b0 1e 00 00 00 	movl   $0x1e,-0x50(%ebp)
 8267a48:	e8 34 47 e6 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8267a4d:	89 04 24             	mov    %eax,(%esp)
 8267a50:	e8 8b f2 e9 ff       	call   8106ce0 <_ZN12CEnvironment16get_server_groupEv>
 8267a55:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8267a58:	8d 5d a6             	lea    -0x5a(%ebp),%ebx
 8267a5b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8267a5e:	a1 28 be 40 09       	mov    0x940be28,%eax
 8267a63:	89 54 24 04          	mov    %edx,0x4(%esp)
 8267a67:	89 04 24             	mov    %eax,(%esp)
 8267a6a:	e8 1b a6 ea ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8267a6f:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 8267a76:	00 
 8267a77:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8267a7b:	89 04 24             	mov    %eax,(%esp)
 8267a7e:	e8 c1 93 20 00       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 8267a83:	e9 56 03 00 00       	jmp    8267dde <_ZN14CPowerWarEvent10StartEventEv+0x3e4>
 8267a88:	8b 45 08             	mov    0x8(%ebp),%eax
 8267a8b:	8b 00                	mov    (%eax),%eax
 8267a8d:	83 c0 34             	add    $0x34,%eax
 8267a90:	8b 10                	mov    (%eax),%edx
 8267a92:	8b 45 08             	mov    0x8(%ebp),%eax
 8267a95:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8267a9c:	00 
 8267a9d:	89 04 24             	mov    %eax,(%esp)
 8267aa0:	ff d2                	call   *%edx
 8267aa2:	83 f0 01             	xor    $0x1,%eax
 8267aa5:	84 c0                	test   %al,%al
 8267aa7:	0f 84 31 03 00 00    	je     8267dde <_ZN14CPowerWarEvent10StartEventEv+0x3e4>
 8267aad:	8b 45 08             	mov    0x8(%ebp),%eax
 8267ab0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8267ab7:	00 
 8267ab8:	89 04 24             	mov    %eax,(%esp)
 8267abb:	e8 22 0a e6 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8267ac0:	e8 d6 46 e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8267ac5:	83 c0 68             	add    $0x68,%eax
 8267ac8:	c7 44 24 04 ff 2a 00 	movl   $0x2aff,0x4(%esp)
 8267acf:	00 
 8267ad0:	89 04 24             	mov    %eax,(%esp)
 8267ad3:	e8 24 0d 00 00       	call   82687fc <_ZN21ServerParameterScript13isDungeonOpenEi>
 8267ad8:	84 c0                	test   %al,%al
 8267ada:	74 75                	je     8267b51 <_ZN14CPowerWarEvent10StartEventEv+0x157>
 8267adc:	e8 ba 46 e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8267ae1:	83 c0 68             	add    $0x68,%eax
 8267ae4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8267aeb:	00 
 8267aec:	c7 44 24 04 ff 2a 00 	movl   $0x2aff,0x4(%esp)
 8267af3:	00 
 8267af4:	89 04 24             	mov    %eax,(%esp)
 8267af7:	e8 90 0b 00 00       	call   826868c <_ZN21ServerParameterScript14setDungeonOpenEib>
 8267afc:	e8 a6 28 e7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8267b01:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8267b08:	00 
 8267b09:	c7 44 24 04 ff 2a 00 	movl   $0x2aff,0x4(%esp)
 8267b10:	00 
 8267b11:	89 04 24             	mov    %eax,(%esp)
 8267b14:	e8 35 13 46 00       	call   86c8e4e <_ZN9GameWorld30send_all_dungeon_inout_messageEib>
 8267b19:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8267b20:	00 
 8267b21:	c7 44 24 08 3a 00 00 	movl   $0x3a,0x8(%esp)
 8267b28:	00 
 8267b29:	c7 44 24 04 a0 12 bf 	movl   $0x8bf12a0,0x4(%esp)
 8267b30:	08 
 8267b31:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8267b34:	89 04 24             	mov    %eax,(%esp)
 8267b37:	e8 dc 7b 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8267b3c:	c7 44 24 04 44 04 bf 	movl   $0x8bf0444,0x4(%esp)
 8267b43:	08 
 8267b44:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8267b47:	89 04 24             	mov    %eax,(%esp)
 8267b4a:	e8 39 7c 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8267b4f:	eb 36                	jmp    8267b87 <_ZN14CPowerWarEvent10StartEventEv+0x18d>
 8267b51:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8267b58:	00 
 8267b59:	c7 44 24 08 3d 00 00 	movl   $0x3d,0x8(%esp)
 8267b60:	00 
 8267b61:	c7 44 24 04 a0 12 bf 	movl   $0x8bf12a0,0x4(%esp)
 8267b68:	08 
 8267b69:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8267b6c:	89 04 24             	mov    %eax,(%esp)
 8267b6f:	e8 a4 7b 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8267b74:	c7 44 24 04 80 04 bf 	movl   $0x8bf0480,0x4(%esp)
 8267b7b:	08 
 8267b7c:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8267b7f:	89 04 24             	mov    %eax,(%esp)
 8267b82:	e8 01 7c 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8267b87:	a1 50 be 40 09       	mov    0x940be50,%eax
 8267b8c:	89 04 24             	mov    %eax,(%esp)
 8267b8f:	e8 28 6f 21 00       	call   847eabc <_ZN13CPowerManager4InitEv>
 8267b94:	e8 0e 28 e7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8267b99:	89 04 24             	mov    %eax,(%esp)
 8267b9c:	e8 97 75 46 00       	call   86cf138 <_ZN9GameWorld26CleanupPowerWarVillToStartEv>
 8267ba1:	e8 f5 45 e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8267ba6:	8b 80 ac a6 00 00    	mov    0xa6ac(%eax),%eax
 8267bac:	89 45 90             	mov    %eax,-0x70(%ebp)
 8267baf:	e8 e7 45 e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8267bb4:	8b 80 b0 a6 00 00    	mov    0xa6b0(%eax),%eax
 8267bba:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8267bbd:	e8 d9 45 e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8267bc2:	8b b8 a8 a6 00 00    	mov    0xa6a8(%eax),%edi
 8267bc8:	e8 ce 45 e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8267bcd:	8b b0 a4 a6 00 00    	mov    0xa6a4(%eax),%esi
 8267bd3:	e8 c3 45 e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8267bd8:	8b 80 34 a6 00 00    	mov    0xa634(%eax),%eax
 8267bde:	0f b7 d8             	movzwl %ax,%ebx
 8267be1:	a1 2c be 40 09       	mov    0x940be2c,%eax
 8267be6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8267bed:	00 
 8267bee:	89 04 24             	mov    %eax,(%esp)
 8267bf1:	e8 c2 57 eb ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8267bf6:	8b 55 90             	mov    -0x70(%ebp),%edx
 8267bf9:	89 54 24 14          	mov    %edx,0x14(%esp)
 8267bfd:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8267c00:	89 54 24 10          	mov    %edx,0x10(%esp)
 8267c04:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8267c08:	89 74 24 08          	mov    %esi,0x8(%esp)
 8267c0c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8267c10:	89 04 24             	mov    %eax,(%esp)
 8267c13:	e8 b6 63 20 00       	call   846dfce <_ZN17CGuildServerProxy15SendPowerWarCfgEtiiii>
 8267c18:	8d 45 98             	lea    -0x68(%ebp),%eax
 8267c1b:	89 04 24             	mov    %eax,(%esp)
 8267c1e:	e8 29 61 32 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8267c23:	c7 44 24 08 9f 00 00 	movl   $0x9f,0x8(%esp)
 8267c2a:	00 
 8267c2b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8267c32:	00 
 8267c33:	8d 45 98             	lea    -0x68(%ebp),%eax
 8267c36:	89 04 24             	mov    %eax,(%esp)
 8267c39:	e8 be 3c e6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8267c3e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8267c45:	00 
 8267c46:	8d 45 98             	lea    -0x68(%ebp),%eax
 8267c49:	89 04 24             	mov    %eax,(%esp)
 8267c4c:	e8 07 3d e6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8267c51:	e8 51 27 e7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8267c56:	8d 55 98             	lea    -0x68(%ebp),%edx
 8267c59:	89 54 24 04          	mov    %edx,0x4(%esp)
 8267c5d:	89 04 24             	mov    %eax,(%esp)
 8267c60:	e8 af 0f 46 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 8267c65:	e8 31 45 e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8267c6a:	8b 98 58 a6 00 00    	mov    0xa658(%eax),%ebx
 8267c70:	e8 07 e8 e8 ff       	call   80f647c <_Z12G_TimerQueuev>
 8267c75:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8267c7c:	00 
 8267c7d:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8267c84:	00 
 8267c85:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8267c89:	c7 44 24 0c 7b 00 00 	movl   $0x7b,0xc(%esp)
 8267c90:	00 
 8267c91:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8267c98:	00 
 8267c99:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8267ca0:	00 
 8267ca1:	89 04 24             	mov    %eax,(%esp)
 8267ca4:	e8 6d 91 3c 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8267ca9:	e8 ed 44 e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8267cae:	8b 80 70 a6 00 00    	mov    0xa670(%eax),%eax
 8267cb4:	c1 e0 02             	shl    $0x2,%eax
 8267cb7:	89 c2                	mov    %eax,%edx
 8267cb9:	c1 e2 04             	shl    $0x4,%edx
 8267cbc:	89 d3                	mov    %edx,%ebx
 8267cbe:	29 c3                	sub    %eax,%ebx
 8267cc0:	e8 b7 e7 e8 ff       	call   80f647c <_Z12G_TimerQueuev>
 8267cc5:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8267ccc:	00 
 8267ccd:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8267cd4:	00 
 8267cd5:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8267cd9:	c7 44 24 0c 7c 00 00 	movl   $0x7c,0xc(%esp)
 8267ce0:	00 
 8267ce1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8267ce8:	00 
 8267ce9:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8267cf0:	00 
 8267cf1:	89 04 24             	mov    %eax,(%esp)
 8267cf4:	e8 1d 91 3c 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8267cf9:	e8 9d 44 e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8267cfe:	8b 80 70 a6 00 00    	mov    0xa670(%eax),%eax
 8267d04:	c1 e0 02             	shl    $0x2,%eax
 8267d07:	89 c2                	mov    %eax,%edx
 8267d09:	c1 e2 04             	shl    $0x4,%edx
 8267d0c:	29 c2                	sub    %eax,%edx
 8267d0e:	a1 50 be 40 09       	mov    0x940be50,%eax
 8267d13:	89 54 24 04          	mov    %edx,0x4(%esp)
 8267d17:	89 04 24             	mov    %eax,(%esp)
 8267d1a:	e8 9f 0b 00 00       	call   82688be <_ZN13CPowerManager20SetPowerUpRemainTimeEi>
 8267d1f:	a1 50 be 40 09       	mov    0x940be50,%eax
 8267d24:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8267d2b:	00 
 8267d2c:	89 04 24             	mov    %eax,(%esp)
 8267d2f:	e8 98 0b 00 00       	call   82688cc <_ZN13CPowerManager21SetPowerUpTimerPeriodEi>
 8267d34:	e8 43 e7 e8 ff       	call   80f647c <_Z12G_TimerQueuev>
 8267d39:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8267d40:	00 
 8267d41:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8267d48:	00 
 8267d49:	c7 44 24 10 05 00 00 	movl   $0x5,0x10(%esp)
 8267d50:	00 
 8267d51:	c7 44 24 0c 7d 00 00 	movl   $0x7d,0xc(%esp)
 8267d58:	00 
 8267d59:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8267d60:	00 
 8267d61:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8267d68:	00 
 8267d69:	89 04 24             	mov    %eax,(%esp)
 8267d6c:	e8 a5 90 3c 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8267d71:	e8 0b 44 e6 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8267d76:	8b 98 b0 01 00 00    	mov    0x1b0(%eax),%ebx
 8267d7c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8267d83:	00 
 8267d84:	c7 44 24 08 70 00 00 	movl   $0x70,0x8(%esp)
 8267d8b:	00 
 8267d8c:	c7 44 24 04 a0 12 bf 	movl   $0x8bf12a0,0x4(%esp)
 8267d93:	08 
 8267d94:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8267d97:	89 04 24             	mov    %eax,(%esp)
 8267d9a:	e8 79 79 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8267d9f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8267da3:	c7 44 24 04 b0 04 bf 	movl   $0x8bf04b0,0x4(%esp)
 8267daa:	08 
 8267dab:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8267dae:	89 04 24             	mov    %eax,(%esp)
 8267db1:	e8 d2 79 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8267db6:	eb 1b                	jmp    8267dd3 <_ZN14CPowerWarEvent10StartEventEv+0x3d9>
 8267db8:	89 d3                	mov    %edx,%ebx
 8267dba:	89 c6                	mov    %eax,%esi
 8267dbc:	8d 45 98             	lea    -0x68(%ebp),%eax
 8267dbf:	89 04 24             	mov    %eax,(%esp)
 8267dc2:	e8 b9 60 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8267dc7:	89 f0                	mov    %esi,%eax
 8267dc9:	89 da                	mov    %ebx,%edx
 8267dcb:	89 04 24             	mov    %eax,(%esp)
 8267dce:	e8 7d b9 87 00       	call   8ae3750 <_Unwind_Resume>
 8267dd3:	8d 45 98             	lea    -0x68(%ebp),%eax
 8267dd6:	89 04 24             	mov    %eax,(%esp)
 8267dd9:	e8 a2 60 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8267dde:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 8267de4:	5b                   	pop    %ebx
 8267de5:	5e                   	pop    %esi
 8267de6:	5f                   	pop    %edi
 8267de7:	5d                   	pop    %ebp
 8267de8:	c3                   	ret
 8267de9:	90                   	nop

```

```c
// CPowerWarEvent::StartEvent @ 0x82679fa

/* CPowerWarEvent::StartEvent() */

void __thiscall CPowerWarEvent::StartEvent(CPowerWarEvent *this)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  CEnvironment *this_00;
  CMonitorServerProxy *this_01;
  GameWorld *pGVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  CGuildServerProxy *this_02;
  TimerQueue *pTVar10;
  PacketGuard local_6c [14];
  Packet_Monitor_Event_End local_5e [10];
  undefined4 local_54;
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  undefined4 local_20;
  
  iVar4 = G_CEnvironment();
  if (*(int *)(iVar4 + 0x1a8) != 1) {
    iVar4 = G_CEnvironment();
    if (*(int *)(iVar4 + 0x1a8) != 2) {
      bVar2 = false;
      goto LAB_08267a32;
    }
  }
  bVar2 = true;
LAB_08267a32:
  if (bVar2) {
    Packet_Monitor_Event_End::Packet_Monitor_Event_End(local_5e);
    local_54 = 0x1e;
    this_00 = (CEnvironment *)G_CEnvironment();
    local_20 = CEnvironment::get_server_group(this_00);
    this_01 = (CMonitorServerProxy *)
              CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                        (GlobalData::s_monitor_proxy_mgr,local_20);
    CMonitorServerProxy::SendTcpPacket(this_01,(char *)local_5e,0xe);
  }
  else {
    cVar3 = (**(code **)(*(int *)this + 0x34))(this,0);
    if (cVar3 != '\x01') {
      CEventBase::SetEventFlag((CEventBase *)this,true);
      iVar4 = G_CDataManager();
      cVar3 = ServerParameterScript::isDungeonOpen(iVar4 + 0x68);
      if (cVar3 == '\0') {
        cMyTrace::cMyTrace(local_40,"virtual void CPowerWarEvent::StartEvent()",0x3d,0);
        cMyTrace::operator()(local_40,"ULTIMATE_LOG : ALLEADY ULTIMATE DUNGEON CLOSE!!");
      }
      else {
        iVar4 = G_CDataManager();
        ServerParameterScript::setDungeonOpen((ServerParameterScript *)(iVar4 + 0x68),0x2aff,false);
        pGVar5 = (GameWorld *)G_GameWorld();
        GameWorld::send_all_dungeon_inout_message(pGVar5,0x2aff,false);
        cMyTrace::cMyTrace(local_50,"virtual void CPowerWarEvent::StartEvent()",0x3a,0);
        cMyTrace::operator()(local_50,"ULTIMATE_LOG : POWER WAR START!! ULTIMATE DUNGEON CLOSE!!");
      }
      CPowerManager::Init(GlobalData::s_power_manager);
      pGVar5 = (GameWorld *)G_GameWorld();
      GameWorld::CleanupPowerWarVillToStart(pGVar5);
      iVar4 = G_CDataManager();
      iVar4 = *(int *)(iVar4 + 0xa6ac);
      iVar6 = G_CDataManager();
      iVar6 = *(int *)(iVar6 + 0xa6b0);
      iVar7 = G_CDataManager();
      iVar7 = *(int *)(iVar7 + 0xa6a8);
      iVar8 = G_CDataManager();
      iVar8 = *(int *)(iVar8 + 0xa6a4);
      iVar9 = G_CDataManager();
      uVar1 = *(undefined4 *)(iVar9 + 0xa634);
      this_02 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,0);
      CGuildServerProxy::SendPowerWarCfg(this_02,(ushort)uVar1,iVar8,iVar7,iVar6,iVar4);
      PacketGuard::PacketGuard(local_6c);
                    /* try { // try from 08267c39 to 08267db5 has its CatchHandler @ 08267db8 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_6c,0,0x9f);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_6c,true);
      pGVar5 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar5,local_6c);
      iVar4 = G_CDataManager();
      uVar1 = *(undefined4 *)(iVar4 + 0xa658);
      pTVar10 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar10,0,0,0x7b,uVar1,0,0);
      iVar4 = G_CDataManager();
      iVar4 = *(int *)(iVar4 + 0xa670);
      pTVar10 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar10,2,0,0x7c,iVar4 * 0x3c,0,0);
      iVar4 = G_CDataManager();
      CPowerManager::SetPowerUpRemainTime
                (GlobalData::s_power_manager,*(int *)(iVar4 + 0xa670) * 0x3c);
      CPowerManager::SetPowerUpTimerPeriod(GlobalData::s_power_manager,0);
      pTVar10 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar10,2,0,0x7d,5,0,0);
      iVar4 = G_CEnvironment();
      uVar1 = *(undefined4 *)(iVar4 + 0x1b0);
      cMyTrace::cMyTrace(local_30,"virtual void CPowerWarEvent::StartEvent()",0x70,0);
      cMyTrace::operator()(local_30,"Power War Event Start! server(%d)",uVar1);
      PacketGuard::~PacketGuard(local_6c);
    }
  }
  return;
}

```

---

## StartEvent_08267dea

```asm
// === 08267dea CPowerWarEvent::StartEvent  [0x08267dea-0x82681e1] ===
 8267dea:	55                   	push   %ebp
 8267deb:	89 e5                	mov    %esp,%ebp
 8267ded:	57                   	push   %edi
 8267dee:	56                   	push   %esi
 8267def:	53                   	push   %ebx
 8267df0:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 8267df6:	e8 86 43 e6 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8267dfb:	8b 80 a8 01 00 00    	mov    0x1a8(%eax),%eax
 8267e01:	83 f8 01             	cmp    $0x1,%eax
 8267e04:	74 10                	je     8267e16 <_ZN14CPowerWarEvent10StartEventE10Word_Param+0x2c>
 8267e06:	e8 76 43 e6 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8267e0b:	8b 80 a8 01 00 00    	mov    0x1a8(%eax),%eax
 8267e11:	83 f8 02             	cmp    $0x2,%eax
 8267e14:	75 07                	jne    8267e1d <_ZN14CPowerWarEvent10StartEventE10Word_Param+0x33>
 8267e16:	b8 01 00 00 00       	mov    $0x1,%eax
 8267e1b:	eb 05                	jmp    8267e22 <_ZN14CPowerWarEvent10StartEventE10Word_Param+0x38>
 8267e1d:	b8 00 00 00 00       	mov    $0x0,%eax
 8267e22:	84 c0                	test   %al,%al
 8267e24:	74 52                	je     8267e78 <_ZN14CPowerWarEvent10StartEventE10Word_Param+0x8e>
 8267e26:	8d 45 a6             	lea    -0x5a(%ebp),%eax
 8267e29:	89 04 24             	mov    %eax,(%esp)
 8267e2c:	e8 69 0a 00 00       	call   826889a <_ZN24Packet_Monitor_Event_EndC1Ev>
 8267e31:	c7 45 b0 1e 00 00 00 	movl   $0x1e,-0x50(%ebp)
 8267e38:	e8 44 43 e6 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8267e3d:	89 04 24             	mov    %eax,(%esp)
 8267e40:	e8 9b ee e9 ff       	call   8106ce0 <_ZN12CEnvironment16get_server_groupEv>
 8267e45:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8267e48:	8d 5d a6             	lea    -0x5a(%ebp),%ebx
 8267e4b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8267e4e:	a1 28 be 40 09       	mov    0x940be28,%eax
 8267e53:	89 54 24 04          	mov    %edx,0x4(%esp)
 8267e57:	89 04 24             	mov    %eax,(%esp)
 8267e5a:	e8 2b a2 ea ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8267e5f:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 8267e66:	00 
 8267e67:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8267e6b:	89 04 24             	mov    %eax,(%esp)
 8267e6e:	e8 d1 8f 20 00       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 8267e73:	e9 5f 03 00 00       	jmp    82681d7 <_ZN14CPowerWarEvent10StartEventE10Word_Param+0x3ed>
 8267e78:	8b 45 08             	mov    0x8(%ebp),%eax
 8267e7b:	8b 00                	mov    (%eax),%eax
 8267e7d:	83 c0 34             	add    $0x34,%eax
 8267e80:	8b 10                	mov    (%eax),%edx
 8267e82:	8b 45 08             	mov    0x8(%ebp),%eax
 8267e85:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8267e8c:	00 
 8267e8d:	89 04 24             	mov    %eax,(%esp)
 8267e90:	ff d2                	call   *%edx
 8267e92:	83 f0 01             	xor    $0x1,%eax
 8267e95:	84 c0                	test   %al,%al
 8267e97:	0f 84 3a 03 00 00    	je     82681d7 <_ZN14CPowerWarEvent10StartEventE10Word_Param+0x3ed>
 8267e9d:	8b 45 08             	mov    0x8(%ebp),%eax
 8267ea0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8267ea7:	00 
 8267ea8:	89 04 24             	mov    %eax,(%esp)
 8267eab:	e8 32 06 e6 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8267eb0:	8b 45 08             	mov    0x8(%ebp),%eax
 8267eb3:	8b 55 0c             	mov    0xc(%ebp),%edx
 8267eb6:	89 50 0a             	mov    %edx,0xa(%eax)
 8267eb9:	e8 dd 42 e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8267ebe:	83 c0 68             	add    $0x68,%eax
 8267ec1:	c7 44 24 04 ff 2a 00 	movl   $0x2aff,0x4(%esp)
 8267ec8:	00 
 8267ec9:	89 04 24             	mov    %eax,(%esp)
 8267ecc:	e8 2b 09 00 00       	call   82687fc <_ZN21ServerParameterScript13isDungeonOpenEi>
 8267ed1:	84 c0                	test   %al,%al
 8267ed3:	74 75                	je     8267f4a <_ZN14CPowerWarEvent10StartEventE10Word_Param+0x160>
 8267ed5:	e8 c1 42 e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8267eda:	83 c0 68             	add    $0x68,%eax
 8267edd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8267ee4:	00 
 8267ee5:	c7 44 24 04 ff 2a 00 	movl   $0x2aff,0x4(%esp)
 8267eec:	00 
 8267eed:	89 04 24             	mov    %eax,(%esp)
 8267ef0:	e8 97 07 00 00       	call   826868c <_ZN21ServerParameterScript14setDungeonOpenEib>
 8267ef5:	e8 ad 24 e7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8267efa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8267f01:	00 
 8267f02:	c7 44 24 04 ff 2a 00 	movl   $0x2aff,0x4(%esp)
 8267f09:	00 
 8267f0a:	89 04 24             	mov    %eax,(%esp)
 8267f0d:	e8 3c 0f 46 00       	call   86c8e4e <_ZN9GameWorld30send_all_dungeon_inout_messageEib>
 8267f12:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8267f19:	00 
 8267f1a:	c7 44 24 08 8f 00 00 	movl   $0x8f,0x8(%esp)
 8267f21:	00 
 8267f22:	c7 44 24 04 60 12 bf 	movl   $0x8bf1260,0x4(%esp)
 8267f29:	08 
 8267f2a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8267f2d:	89 04 24             	mov    %eax,(%esp)
 8267f30:	e8 e3 77 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8267f35:	c7 44 24 04 44 04 bf 	movl   $0x8bf0444,0x4(%esp)
 8267f3c:	08 
 8267f3d:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8267f40:	89 04 24             	mov    %eax,(%esp)
 8267f43:	e8 40 78 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8267f48:	eb 36                	jmp    8267f80 <_ZN14CPowerWarEvent10StartEventE10Word_Param+0x196>
 8267f4a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8267f51:	00 
 8267f52:	c7 44 24 08 92 00 00 	movl   $0x92,0x8(%esp)
 8267f59:	00 
 8267f5a:	c7 44 24 04 60 12 bf 	movl   $0x8bf1260,0x4(%esp)
 8267f61:	08 
 8267f62:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8267f65:	89 04 24             	mov    %eax,(%esp)
 8267f68:	e8 ab 77 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8267f6d:	c7 44 24 04 80 04 bf 	movl   $0x8bf0480,0x4(%esp)
 8267f74:	08 
 8267f75:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8267f78:	89 04 24             	mov    %eax,(%esp)
 8267f7b:	e8 08 78 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8267f80:	a1 50 be 40 09       	mov    0x940be50,%eax
 8267f85:	89 04 24             	mov    %eax,(%esp)
 8267f88:	e8 2f 6b 21 00       	call   847eabc <_ZN13CPowerManager4InitEv>
 8267f8d:	e8 15 24 e7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8267f92:	89 04 24             	mov    %eax,(%esp)
 8267f95:	e8 9e 71 46 00       	call   86cf138 <_ZN9GameWorld26CleanupPowerWarVillToStartEv>
 8267f9a:	e8 fc 41 e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8267f9f:	8b 80 ac a6 00 00    	mov    0xa6ac(%eax),%eax
 8267fa5:	89 45 90             	mov    %eax,-0x70(%ebp)
 8267fa8:	e8 ee 41 e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8267fad:	8b 80 b0 a6 00 00    	mov    0xa6b0(%eax),%eax
 8267fb3:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8267fb6:	e8 e0 41 e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8267fbb:	8b b8 a8 a6 00 00    	mov    0xa6a8(%eax),%edi
 8267fc1:	e8 d5 41 e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8267fc6:	8b b0 a4 a6 00 00    	mov    0xa6a4(%eax),%esi
 8267fcc:	e8 ca 41 e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8267fd1:	8b 80 34 a6 00 00    	mov    0xa634(%eax),%eax
 8267fd7:	0f b7 d8             	movzwl %ax,%ebx
 8267fda:	a1 2c be 40 09       	mov    0x940be2c,%eax
 8267fdf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8267fe6:	00 
 8267fe7:	89 04 24             	mov    %eax,(%esp)
 8267fea:	e8 c9 53 eb ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8267fef:	8b 55 90             	mov    -0x70(%ebp),%edx
 8267ff2:	89 54 24 14          	mov    %edx,0x14(%esp)
 8267ff6:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8267ff9:	89 54 24 10          	mov    %edx,0x10(%esp)
 8267ffd:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8268001:	89 74 24 08          	mov    %esi,0x8(%esp)
 8268005:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8268009:	89 04 24             	mov    %eax,(%esp)
 826800c:	e8 bd 5f 20 00       	call   846dfce <_ZN17CGuildServerProxy15SendPowerWarCfgEtiiii>
 8268011:	8d 45 98             	lea    -0x68(%ebp),%eax
 8268014:	89 04 24             	mov    %eax,(%esp)
 8268017:	e8 30 5d 32 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 826801c:	c7 44 24 08 9f 00 00 	movl   $0x9f,0x8(%esp)
 8268023:	00 
 8268024:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 826802b:	00 
 826802c:	8d 45 98             	lea    -0x68(%ebp),%eax
 826802f:	89 04 24             	mov    %eax,(%esp)
 8268032:	e8 c5 38 e6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8268037:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 826803e:	00 
 826803f:	8d 45 98             	lea    -0x68(%ebp),%eax
 8268042:	89 04 24             	mov    %eax,(%esp)
 8268045:	e8 0e 39 e6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 826804a:	e8 58 23 e7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 826804f:	8d 55 98             	lea    -0x68(%ebp),%edx
 8268052:	89 54 24 04          	mov    %edx,0x4(%esp)
 8268056:	89 04 24             	mov    %eax,(%esp)
 8268059:	e8 b6 0b 46 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 826805e:	e8 38 41 e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8268063:	8b 98 58 a6 00 00    	mov    0xa658(%eax),%ebx
 8268069:	e8 0e e4 e8 ff       	call   80f647c <_Z12G_TimerQueuev>
 826806e:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8268075:	00 
 8268076:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 826807d:	00 
 826807e:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8268082:	c7 44 24 0c 7b 00 00 	movl   $0x7b,0xc(%esp)
 8268089:	00 
 826808a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8268091:	00 
 8268092:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8268099:	00 
 826809a:	89 04 24             	mov    %eax,(%esp)
 826809d:	e8 74 8d 3c 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 82680a2:	e8 f4 40 e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 82680a7:	8b 80 70 a6 00 00    	mov    0xa670(%eax),%eax
 82680ad:	c1 e0 02             	shl    $0x2,%eax
 82680b0:	89 c2                	mov    %eax,%edx
 82680b2:	c1 e2 04             	shl    $0x4,%edx
 82680b5:	89 d3                	mov    %edx,%ebx
 82680b7:	29 c3                	sub    %eax,%ebx
 82680b9:	e8 be e3 e8 ff       	call   80f647c <_Z12G_TimerQueuev>
 82680be:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 82680c5:	00 
 82680c6:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 82680cd:	00 
 82680ce:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 82680d2:	c7 44 24 0c 7c 00 00 	movl   $0x7c,0xc(%esp)
 82680d9:	00 
 82680da:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82680e1:	00 
 82680e2:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 82680e9:	00 
 82680ea:	89 04 24             	mov    %eax,(%esp)
 82680ed:	e8 24 8d 3c 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 82680f2:	e8 a4 40 e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 82680f7:	8b 80 70 a6 00 00    	mov    0xa670(%eax),%eax
 82680fd:	c1 e0 02             	shl    $0x2,%eax
 8268100:	89 c2                	mov    %eax,%edx
 8268102:	c1 e2 04             	shl    $0x4,%edx
 8268105:	29 c2                	sub    %eax,%edx
 8268107:	a1 50 be 40 09       	mov    0x940be50,%eax
 826810c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8268110:	89 04 24             	mov    %eax,(%esp)
 8268113:	e8 a6 07 00 00       	call   82688be <_ZN13CPowerManager20SetPowerUpRemainTimeEi>
 8268118:	a1 50 be 40 09       	mov    0x940be50,%eax
 826811d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8268124:	00 
 8268125:	89 04 24             	mov    %eax,(%esp)
 8268128:	e8 9f 07 00 00       	call   82688cc <_ZN13CPowerManager21SetPowerUpTimerPeriodEi>
 826812d:	e8 4a e3 e8 ff       	call   80f647c <_Z12G_TimerQueuev>
 8268132:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8268139:	00 
 826813a:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8268141:	00 
 8268142:	c7 44 24 10 05 00 00 	movl   $0x5,0x10(%esp)
 8268149:	00 
 826814a:	c7 44 24 0c 7d 00 00 	movl   $0x7d,0xc(%esp)
 8268151:	00 
 8268152:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8268159:	00 
 826815a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8268161:	00 
 8268162:	89 04 24             	mov    %eax,(%esp)
 8268165:	e8 ac 8c 3c 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 826816a:	e8 12 40 e6 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 826816f:	8b 98 b0 01 00 00    	mov    0x1b0(%eax),%ebx
 8268175:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 826817c:	00 
 826817d:	c7 44 24 08 c6 00 00 	movl   $0xc6,0x8(%esp)
 8268184:	00 
 8268185:	c7 44 24 04 60 12 bf 	movl   $0x8bf1260,0x4(%esp)
 826818c:	08 
 826818d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8268190:	89 04 24             	mov    %eax,(%esp)
 8268193:	e8 80 75 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8268198:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 826819c:	c7 44 24 04 b0 04 bf 	movl   $0x8bf04b0,0x4(%esp)
 82681a3:	08 
 82681a4:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82681a7:	89 04 24             	mov    %eax,(%esp)
 82681aa:	e8 d9 75 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82681af:	eb 1b                	jmp    82681cc <_ZN14CPowerWarEvent10StartEventE10Word_Param+0x3e2>
 82681b1:	89 d3                	mov    %edx,%ebx
 82681b3:	89 c6                	mov    %eax,%esi
 82681b5:	8d 45 98             	lea    -0x68(%ebp),%eax
 82681b8:	89 04 24             	mov    %eax,(%esp)
 82681bb:	e8 c0 5c 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82681c0:	89 f0                	mov    %esi,%eax
 82681c2:	89 da                	mov    %ebx,%edx
 82681c4:	89 04 24             	mov    %eax,(%esp)
 82681c7:	e8 84 b5 87 00       	call   8ae3750 <_Unwind_Resume>
 82681cc:	8d 45 98             	lea    -0x68(%ebp),%eax
 82681cf:	89 04 24             	mov    %eax,(%esp)
 82681d2:	e8 a9 5c 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82681d7:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 82681dd:	5b                   	pop    %ebx
 82681de:	5e                   	pop    %esi
 82681df:	5f                   	pop    %edi
 82681e0:	5d                   	pop    %ebp
 82681e1:	c3                   	ret

```

```c
// CPowerWarEvent::StartEvent @ 0x8267dea

/* CPowerWarEvent::StartEvent(Word_Param) */

void __thiscall CPowerWarEvent::StartEvent(CPowerWarEvent *this,undefined4 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  CEnvironment *this_00;
  CMonitorServerProxy *this_01;
  GameWorld *pGVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  CGuildServerProxy *this_02;
  TimerQueue *pTVar10;
  PacketGuard local_6c [14];
  Packet_Monitor_Event_End local_5e [10];
  undefined4 local_54;
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  undefined4 local_20;
  
  iVar4 = G_CEnvironment();
  if (*(int *)(iVar4 + 0x1a8) != 1) {
    iVar4 = G_CEnvironment();
    if (*(int *)(iVar4 + 0x1a8) != 2) {
      bVar2 = false;
      goto LAB_08267e22;
    }
  }
  bVar2 = true;
LAB_08267e22:
  if (bVar2) {
    Packet_Monitor_Event_End::Packet_Monitor_Event_End(local_5e);
    local_54 = 0x1e;
    this_00 = (CEnvironment *)G_CEnvironment();
    local_20 = CEnvironment::get_server_group(this_00);
    this_01 = (CMonitorServerProxy *)
              CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                        (GlobalData::s_monitor_proxy_mgr,local_20);
    CMonitorServerProxy::SendTcpPacket(this_01,(char *)local_5e,0xe);
  }
  else {
    cVar3 = (**(code **)(*(int *)this + 0x34))(this,0);
    if (cVar3 != '\x01') {
      CEventBase::SetEventFlag((CEventBase *)this,true);
      *(undefined4 *)(this + 10) = param_2;
      iVar4 = G_CDataManager();
      cVar3 = ServerParameterScript::isDungeonOpen(iVar4 + 0x68);
      if (cVar3 == '\0') {
        cMyTrace::cMyTrace(local_40,"virtual void CPowerWarEvent::StartEvent(Word_Param)",0x92,0);
        cMyTrace::operator()(local_40,"ULTIMATE_LOG : ALLEADY ULTIMATE DUNGEON CLOSE!!");
      }
      else {
        iVar4 = G_CDataManager();
        ServerParameterScript::setDungeonOpen((ServerParameterScript *)(iVar4 + 0x68),0x2aff,false);
        pGVar5 = (GameWorld *)G_GameWorld();
        GameWorld::send_all_dungeon_inout_message(pGVar5,0x2aff,false);
        cMyTrace::cMyTrace(local_50,"virtual void CPowerWarEvent::StartEvent(Word_Param)",0x8f,0);
        cMyTrace::operator()(local_50,"ULTIMATE_LOG : POWER WAR START!! ULTIMATE DUNGEON CLOSE!!");
      }
      CPowerManager::Init(GlobalData::s_power_manager);
      pGVar5 = (GameWorld *)G_GameWorld();
      GameWorld::CleanupPowerWarVillToStart(pGVar5);
      iVar4 = G_CDataManager();
      iVar4 = *(int *)(iVar4 + 0xa6ac);
      iVar6 = G_CDataManager();
      iVar6 = *(int *)(iVar6 + 0xa6b0);
      iVar7 = G_CDataManager();
      iVar7 = *(int *)(iVar7 + 0xa6a8);
      iVar8 = G_CDataManager();
      iVar8 = *(int *)(iVar8 + 0xa6a4);
      iVar9 = G_CDataManager();
      uVar1 = *(undefined4 *)(iVar9 + 0xa634);
      this_02 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,0);
      CGuildServerProxy::SendPowerWarCfg(this_02,(ushort)uVar1,iVar8,iVar7,iVar6,iVar4);
      PacketGuard::PacketGuard(local_6c);
                    /* try { // try from 08268032 to 082681ae has its CatchHandler @ 082681b1 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_6c,0,0x9f);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_6c,true);
      pGVar5 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar5,local_6c);
      iVar4 = G_CDataManager();
      uVar1 = *(undefined4 *)(iVar4 + 0xa658);
      pTVar10 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar10,0,0,0x7b,uVar1,0,0);
      iVar4 = G_CDataManager();
      iVar4 = *(int *)(iVar4 + 0xa670);
      pTVar10 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar10,2,0,0x7c,iVar4 * 0x3c,0,0);
      iVar4 = G_CDataManager();
      CPowerManager::SetPowerUpRemainTime
                (GlobalData::s_power_manager,*(int *)(iVar4 + 0xa670) * 0x3c);
      CPowerManager::SetPowerUpTimerPeriod(GlobalData::s_power_manager,0);
      pTVar10 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar10,2,0,0x7d,5,0,0);
      iVar4 = G_CEnvironment();
      uVar1 = *(undefined4 *)(iVar4 + 0x1b0);
      cMyTrace::cMyTrace(local_30,"virtual void CPowerWarEvent::StartEvent(Word_Param)",0xc6,0);
      cMyTrace::operator()(local_30,"Power War Event Start! server(%d)",uVar1);
      PacketGuard::~PacketGuard(local_6c);
    }
  }
  return;
}

```

---

## ~CPowerWarEvent

```asm
// === 082679ac CPowerWarEvent::~CPowerWarEvent  [0x082679ac-0x82679db] ===
 82679ac:	55                   	push   %ebp
 82679ad:	89 e5                	mov    %esp,%ebp
 82679af:	83 ec 18             	sub    $0x18,%esp
 82679b2:	8b 45 08             	mov    0x8(%ebp),%eax
 82679b5:	c7 00 e8 12 bf 08    	movl   $0x8bf12e8,(%eax)
 82679bb:	8b 45 08             	mov    0x8(%ebp),%eax
 82679be:	89 04 24             	mov    %eax,(%esp)
 82679c1:	e8 8c 34 ea ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 82679c6:	b8 00 00 00 00       	mov    $0x0,%eax
 82679cb:	84 c0                	test   %al,%al
 82679cd:	74 0b                	je     82679da <_ZN14CPowerWarEventD1Ev+0x2e>
 82679cf:	8b 45 08             	mov    0x8(%ebp),%eax
 82679d2:	89 04 24             	mov    %eax,(%esp)
 82679d5:	e8 16 cb 4b 00       	call   87244f0 <_ZdlPv>
 82679da:	c9                   	leave
 82679db:	c3                   	ret

```

```c
// CPowerWarEvent::~CPowerWarEvent @ 0x82679ac

/* WARNING: Removing unreachable block (ram,0x082679cf) */
/* CPowerWarEvent::~CPowerWarEvent() */

void __thiscall CPowerWarEvent::~CPowerWarEvent(CPowerWarEvent *this)

{
  *(undefined ***)this = &PTR__CPowerWarEvent_08bf12e8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CPowerWarEvent_082679dc

```asm
// === 082679dc CPowerWarEvent::~CPowerWarEvent  [0x082679dc-0x82679f9] ===
 82679dc:	55                   	push   %ebp
 82679dd:	89 e5                	mov    %esp,%ebp
 82679df:	83 ec 18             	sub    $0x18,%esp
 82679e2:	8b 45 08             	mov    0x8(%ebp),%eax
 82679e5:	89 04 24             	mov    %eax,(%esp)
 82679e8:	e8 bf ff ff ff       	call   82679ac <_ZN14CPowerWarEventD1Ev>
 82679ed:	8b 45 08             	mov    0x8(%ebp),%eax
 82679f0:	89 04 24             	mov    %eax,(%esp)
 82679f3:	e8 f8 ca 4b 00       	call   87244f0 <_ZdlPv>
 82679f8:	c9                   	leave
 82679f9:	c3                   	ret

```

```c
// CPowerWarEvent::~CPowerWarEvent @ 0x82679dc

/* CPowerWarEvent::~CPowerWarEvent() */

void __thiscall CPowerWarEvent::~CPowerWarEvent(CPowerWarEvent *this)

{
  ~CPowerWarEvent(this);
  operator_delete(this);
  return;
}

```

