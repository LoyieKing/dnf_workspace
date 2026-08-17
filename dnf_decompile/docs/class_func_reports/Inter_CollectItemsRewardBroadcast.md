# Inter_CollectItemsRewardBroadcast

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e7598 Inter_CollectItemsRewardBroadcast::dispatch_sig  [0x084e7598-0x84e770b] ===
 84e7598:	55                   	push   %ebp
 84e7599:	89 e5                	mov    %esp,%ebp
 84e759b:	56                   	push   %esi
 84e759c:	53                   	push   %ebx
 84e759d:	83 ec 30             	sub    $0x30,%esp
 84e75a0:	8b 45 10             	mov    0x10(%ebp),%eax
 84e75a3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e75a6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e75a9:	89 04 24             	mov    %eax,(%esp)
 84e75ac:	e8 9b 67 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e75b1:	c7 44 24 08 56 00 00 	movl   $0x56,0x8(%esp)
 84e75b8:	00 
 84e75b9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e75c0:	00 
 84e75c1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e75c4:	89 04 24             	mov    %eax,(%esp)
 84e75c7:	e8 30 43 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e75cc:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 84e75d3:	00 
 84e75d4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e75d7:	89 04 24             	mov    %eax,(%esp)
 84e75da:	e8 41 43 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e75df:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e75e2:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84e75e6:	0f b6 c0             	movzbl %al,%eax
 84e75e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e75ed:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e75f0:	89 04 24             	mov    %eax,(%esp)
 84e75f3:	e8 28 43 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e75f8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e75fb:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84e75ff:	0f b6 c0             	movzbl %al,%eax
 84e7602:	83 f8 02             	cmp    $0x2,%eax
 84e7605:	75 52                	jne    84e7659 <_ZN33Inter_CollectItemsRewardBroadcast12dispatch_sigEP5CUserPci+0xc1>
 84e7607:	a1 f4 f7 41 09       	mov    0x941f7f4,%eax
 84e760c:	c7 44 24 04 64 00 00 	movl   $0x64,0x4(%esp)
 84e7613:	00 
 84e7614:	89 04 24             	mov    %eax,(%esp)
 84e7617:	e8 88 5e 00 00       	call   84ed4a4 <_ZN9CTimeGate8SetLevelEi>
 84e761c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e761f:	89 04 24             	mov    %eax,(%esp)
 84e7622:	e8 5f 92 00 00       	call   84f0886 <_ZN23CUserResetTimeGateQuestC1Ev>
 84e7627:	e8 7b 2d bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84e762c:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 84e762f:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e7633:	89 04 24             	mov    %eax,(%esp)
 84e7636:	e8 cd 1c 1e 00       	call   86c9308 <_ZN9GameWorld11modify_userEP13CUserModifier>
 84e763b:	a1 f4 f7 41 09       	mov    0x941f7f4,%eax
 84e7640:	89 04 24             	mov    %eax,(%esp)
 84e7643:	e8 50 5e 00 00       	call   84ed498 <_ZNK9CTimeGate11getNpcIndexEv>
 84e7648:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e764c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e764f:	89 04 24             	mov    %eax,(%esp)
 84e7652:	e8 4d 28 bf ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84e7657:	eb 13                	jmp    84e766c <_ZN33Inter_CollectItemsRewardBroadcast12dispatch_sigEP5CUserPci+0xd4>
 84e7659:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e7660:	00 
 84e7661:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e7664:	89 04 24             	mov    %eax,(%esp)
 84e7667:	e8 38 28 bf ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84e766c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e766f:	83 c0 14             	add    $0x14,%eax
 84e7672:	89 04 24             	mov    %eax,(%esp)
 84e7675:	e8 36 6d b9 ff       	call   807e3b0 <strlen@plt>
 84e767a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e767e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e7681:	89 04 24             	mov    %eax,(%esp)
 84e7684:	e8 b3 42 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e7689:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e768c:	83 c0 14             	add    $0x14,%eax
 84e768f:	89 04 24             	mov    %eax,(%esp)
 84e7692:	e8 19 6d b9 ff       	call   807e3b0 <strlen@plt>
 84e7697:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84e769a:	83 c2 14             	add    $0x14,%edx
 84e769d:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e76a1:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e76a5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e76a8:	89 04 24             	mov    %eax,(%esp)
 84e76ab:	e8 34 fd cc ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e76b0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e76b7:	00 
 84e76b8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e76bb:	89 04 24             	mov    %eax,(%esp)
 84e76be:	e8 95 42 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e76c3:	e8 df 2c bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84e76c8:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84e76cb:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e76cf:	89 04 24             	mov    %eax,(%esp)
 84e76d2:	e8 3d 15 1e 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 84e76d7:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e76dc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e76df:	89 04 24             	mov    %eax,(%esp)
 84e76e2:	e8 99 67 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e76e7:	89 d8                	mov    %ebx,%eax
 84e76e9:	83 c4 30             	add    $0x30,%esp
 84e76ec:	5b                   	pop    %ebx
 84e76ed:	5e                   	pop    %esi
 84e76ee:	5d                   	pop    %ebp
 84e76ef:	c3                   	ret
 84e76f0:	89 d3                	mov    %edx,%ebx
 84e76f2:	89 c6                	mov    %eax,%esi
 84e76f4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e76f7:	89 04 24             	mov    %eax,(%esp)
 84e76fa:	e8 81 67 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e76ff:	89 f0                	mov    %esi,%eax
 84e7701:	89 da                	mov    %ebx,%edx
 84e7703:	89 04 24             	mov    %eax,(%esp)
 84e7706:	e8 45 c0 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e770b:	90                   	nop

```

```c
// Inter_CollectItemsRewardBroadcast::dispatch_sig @ 0x84e7598

/* Inter_CollectItemsRewardBroadcast::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_CollectItemsRewardBroadcast::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  GameWorld *pGVar1;
  int iVar2;
  size_t sVar3;
  CUserResetTimeGateQuest local_20 [4];
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e75c7 to 084e76d6 has its CatchHandler @ 084e76f0 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x56);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0xb);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0x12));
  if (*(char *)(local_10 + 0x12) == '\x02') {
    CTimeGate::SetLevel(GlobalData::s_timeGate_,100);
    CUserResetTimeGateQuest::CUserResetTimeGateQuest(local_20);
    pGVar1 = (GameWorld *)G_GameWorld();
    GameWorld::modify_user(pGVar1,(CUserModifier *)local_20);
    iVar2 = CTimeGate::getNpcIndex(GlobalData::s_timeGate_);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,iVar2);
  }
  else {
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,0);
  }
  sVar3 = strlen((char *)(local_10 + 0x14));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,sVar3);
  sVar3 = strlen((char *)(local_10 + 0x14));
  InterfacePacketBuf::put_str((InterfacePacketBuf *)local_1c,(char *)(local_10 + 0x14),sVar3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  pGVar1 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(pGVar1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return 0;
}

```

