# Inter_VillageAttackedStart

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084df47a Inter_VillageAttackedStart::dispatch_sig  [0x084df47a-0x84df6a3] ===
 84df47a:	55                   	push   %ebp
 84df47b:	89 e5                	mov    %esp,%ebp
 84df47d:	56                   	push   %esi
 84df47e:	53                   	push   %ebx
 84df47f:	83 ec 40             	sub    $0x40,%esp
 84df482:	e8 20 af bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84df487:	89 04 24             	mov    %eax,(%esp)
 84df48a:	e8 8f 1e c1 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 84df48f:	84 c0                	test   %al,%al
 84df491:	74 0a                	je     84df49d <_ZN26Inter_VillageAttackedStart12dispatch_sigEP5CUserPci+0x23>
 84df493:	bb 00 00 00 00       	mov    $0x0,%ebx
 84df498:	e9 fe 01 00 00       	jmp    84df69b <_ZN26Inter_VillageAttackedStart12dispatch_sigEP5CUserPci+0x221>
 84df49d:	e8 df cc be ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84df4a2:	8b 80 a8 01 00 00    	mov    0x1a8(%eax),%eax
 84df4a8:	83 f8 01             	cmp    $0x1,%eax
 84df4ab:	74 10                	je     84df4bd <_ZN26Inter_VillageAttackedStart12dispatch_sigEP5CUserPci+0x43>
 84df4ad:	e8 cf cc be ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84df4b2:	8b 80 a8 01 00 00    	mov    0x1a8(%eax),%eax
 84df4b8:	83 f8 02             	cmp    $0x2,%eax
 84df4bb:	75 07                	jne    84df4c4 <_ZN26Inter_VillageAttackedStart12dispatch_sigEP5CUserPci+0x4a>
 84df4bd:	b8 01 00 00 00       	mov    $0x1,%eax
 84df4c2:	eb 05                	jmp    84df4c9 <_ZN26Inter_VillageAttackedStart12dispatch_sigEP5CUserPci+0x4f>
 84df4c4:	b8 00 00 00 00       	mov    $0x0,%eax
 84df4c9:	84 c0                	test   %al,%al
 84df4cb:	74 0a                	je     84df4d7 <_ZN26Inter_VillageAttackedStart12dispatch_sigEP5CUserPci+0x5d>
 84df4cd:	bb 00 00 00 00       	mov    $0x0,%ebx
 84df4d2:	e9 c4 01 00 00       	jmp    84df69b <_ZN26Inter_VillageAttackedStart12dispatch_sigEP5CUserPci+0x221>
 84df4d7:	e8 bf cc be ff       	call   80cc19b <_Z14G_CDataManagerv>
 84df4dc:	83 c0 68             	add    $0x68,%eax
 84df4df:	c7 44 24 04 ff 2a 00 	movl   $0x2aff,0x4(%esp)
 84df4e6:	00 
 84df4e7:	89 04 24             	mov    %eax,(%esp)
 84df4ea:	e8 0d 93 d8 ff       	call   82687fc <_ZN21ServerParameterScript13isDungeonOpenEi>
 84df4ef:	84 c0                	test   %al,%al
 84df4f1:	74 75                	je     84df568 <_ZN26Inter_VillageAttackedStart12dispatch_sigEP5CUserPci+0xee>
 84df4f3:	e8 a3 cc be ff       	call   80cc19b <_Z14G_CDataManagerv>
 84df4f8:	83 c0 68             	add    $0x68,%eax
 84df4fb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84df502:	00 
 84df503:	c7 44 24 04 ff 2a 00 	movl   $0x2aff,0x4(%esp)
 84df50a:	00 
 84df50b:	89 04 24             	mov    %eax,(%esp)
 84df50e:	e8 79 91 d8 ff       	call   826868c <_ZN21ServerParameterScript14setDungeonOpenEib>
 84df513:	e8 8f ae bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84df518:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84df51f:	00 
 84df520:	c7 44 24 04 ff 2a 00 	movl   $0x2aff,0x4(%esp)
 84df527:	00 
 84df528:	89 04 24             	mov    %eax,(%esp)
 84df52b:	e8 1e 99 1e 00       	call   86c8e4e <_ZN9GameWorld30send_all_dungeon_inout_messageEib>
 84df530:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84df537:	00 
 84df538:	c7 44 24 08 9a 4b 00 	movl   $0x4b9a,0x8(%esp)
 84df53f:	00 
 84df540:	c7 44 24 04 40 bb c8 	movl   $0x8c8bb40,0x4(%esp)
 84df547:	08 
 84df548:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84df54b:	89 04 24             	mov    %eax,(%esp)
 84df54e:	e8 c5 01 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84df553:	c7 44 24 04 38 9a c8 	movl   $0x8c89a38,0x4(%esp)
 84df55a:	08 
 84df55b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84df55e:	89 04 24             	mov    %eax,(%esp)
 84df561:	e8 22 02 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84df566:	eb 36                	jmp    84df59e <_ZN26Inter_VillageAttackedStart12dispatch_sigEP5CUserPci+0x124>
 84df568:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84df56f:	00 
 84df570:	c7 44 24 08 9d 4b 00 	movl   $0x4b9d,0x8(%esp)
 84df577:	00 
 84df578:	c7 44 24 04 40 bb c8 	movl   $0x8c8bb40,0x4(%esp)
 84df57f:	08 
 84df580:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84df583:	89 04 24             	mov    %eax,(%esp)
 84df586:	e8 8d 01 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84df58b:	c7 44 24 04 7c 9a c8 	movl   $0x8c89a7c,0x4(%esp)
 84df592:	08 
 84df593:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84df596:	89 04 24             	mov    %eax,(%esp)
 84df599:	e8 ea 01 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84df59e:	8b 45 10             	mov    0x10(%ebp),%eax
 84df5a1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84df5a4:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84df5a7:	89 04 24             	mov    %eax,(%esp)
 84df5aa:	e8 9d e7 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84df5af:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84df5b2:	89 04 24             	mov    %eax,(%esp)
 84df5b5:	e8 2c c3 be ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84df5ba:	c7 44 24 08 f1 00 00 	movl   $0xf1,0x8(%esp)
 84df5c1:	00 
 84df5c2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84df5c9:	00 
 84df5ca:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84df5cd:	89 04 24             	mov    %eax,(%esp)
 84df5d0:	e8 27 c3 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84df5d5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84df5dc:	00 
 84df5dd:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84df5e0:	89 04 24             	mov    %eax,(%esp)
 84df5e3:	e8 54 c3 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84df5e8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84df5eb:	8b 40 0a             	mov    0xa(%eax),%eax
 84df5ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 84df5f2:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84df5f5:	89 04 24             	mov    %eax,(%esp)
 84df5f8:	e8 3f c3 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84df5fd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84df600:	8b 40 0e             	mov    0xe(%eax),%eax
 84df603:	89 44 24 04          	mov    %eax,0x4(%esp)
 84df607:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84df60a:	89 04 24             	mov    %eax,(%esp)
 84df60d:	e8 2a c3 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84df612:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84df615:	8b 40 12             	mov    0x12(%eax),%eax
 84df618:	89 44 24 04          	mov    %eax,0x4(%esp)
 84df61c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84df61f:	89 04 24             	mov    %eax,(%esp)
 84df622:	e8 15 c3 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84df627:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84df62e:	00 
 84df62f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84df632:	89 04 24             	mov    %eax,(%esp)
 84df635:	e8 02 c3 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84df63a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84df641:	00 
 84df642:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84df645:	89 04 24             	mov    %eax,(%esp)
 84df648:	e8 0b c3 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84df64d:	e8 55 ad bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84df652:	8d 55 c8             	lea    -0x38(%ebp),%edx
 84df655:	89 54 24 04          	mov    %edx,0x4(%esp)
 84df659:	89 04 24             	mov    %eax,(%esp)
 84df65c:	e8 b3 95 1e 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 84df661:	a1 7c f7 41 09       	mov    0x941f77c,%eax
 84df666:	89 04 24             	mov    %eax,(%esp)
 84df669:	e8 b2 53 1d 00       	call   86b4a20 <_ZN16village_attacked18CVillageMonsterMgr22OnStartVillageAttackedEv>
 84df66e:	bb 00 00 00 00       	mov    $0x0,%ebx
 84df673:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84df676:	89 04 24             	mov    %eax,(%esp)
 84df679:	e8 02 e8 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84df67e:	eb 1b                	jmp    84df69b <_ZN26Inter_VillageAttackedStart12dispatch_sigEP5CUserPci+0x221>
 84df680:	89 d3                	mov    %edx,%ebx
 84df682:	89 c6                	mov    %eax,%esi
 84df684:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84df687:	89 04 24             	mov    %eax,(%esp)
 84df68a:	e8 f1 e7 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84df68f:	89 f0                	mov    %esi,%eax
 84df691:	89 da                	mov    %ebx,%edx
 84df693:	89 04 24             	mov    %eax,(%esp)
 84df696:	e8 b5 40 60 00       	call   8ae3750 <_Unwind_Resume>
 84df69b:	89 d8                	mov    %ebx,%eax
 84df69d:	83 c4 40             	add    $0x40,%esp
 84df6a0:	5b                   	pop    %ebx
 84df6a1:	5e                   	pop    %esi
 84df6a2:	5d                   	pop    %ebp
 84df6a3:	c3                   	ret

```

```c
// Inter_VillageAttackedStart::dispatch_sig @ 0x84df47a

/* Inter_VillageAttackedStart::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_VillageAttackedStart::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  GameWorld *pGVar3;
  int iVar4;
  PacketGuard local_3c [12];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  int local_10;
  
  pGVar3 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsIntegratedPvPBaseChannel(pGVar3);
  if (cVar2 == '\0') {
    iVar4 = G_CEnvironment();
    if ((*(int *)(iVar4 + 0x1a8) == 1) || (iVar4 = G_CEnvironment(), *(int *)(iVar4 + 0x1a8) == 2))
    {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      iVar4 = G_CDataManager();
      cVar2 = ServerParameterScript::isDungeonOpen(iVar4 + 0x68);
      if (cVar2 == '\0') {
        cMyTrace::cMyTrace(local_20,
                           "virtual int Inter_VillageAttackedStart::dispatch_sig(CUser*, char*, int)"
                           ,0x4b9d,0);
        cMyTrace::operator()(local_20,"ULTIMATE_LOG : ALLEADY ULTIMATE DUNGEON CLOSE!!");
      }
      else {
        iVar4 = G_CDataManager();
        ServerParameterScript::setDungeonOpen((ServerParameterScript *)(iVar4 + 0x68),0x2aff,false);
        pGVar3 = (GameWorld *)G_GameWorld();
        GameWorld::send_all_dungeon_inout_message(pGVar3,0x2aff,false);
        cMyTrace::cMyTrace(local_30,
                           "virtual int Inter_VillageAttackedStart::dispatch_sig(CUser*, char*, int)"
                           ,0x4b9a,0);
        cMyTrace::operator()
                  (local_30,"ULTIMATE_LOG : VILLAGE ATTACKTED START!! ULTIMATE DUNGEON CLOSE!!");
      }
      local_10 = param_3;
      PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 084df5b5 to 084df66d has its CatchHandler @ 084df680 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_3c);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0xf1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,*(int *)(local_10 + 10));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,*(int *)(local_10 + 0xe));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,*(int *)(local_10 + 0x12));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,0);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
      pGVar3 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar3,local_3c);
      village_attacked::CVillageMonsterMgr::OnStartVillageAttacked(GlobalData::s_villageMonsterMgr);
      PacketGuard::~PacketGuard(local_3c);
    }
  }
  return 0;
}

```

