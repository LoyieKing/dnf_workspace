# Inter_UpdateServerMessage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084da3e6 Inter_UpdateServerMessage::dispatch_sig  [0x084da3e6-0x84da725] ===
 84da3e6:	55                   	push   %ebp
 84da3e7:	89 e5                	mov    %esp,%ebp
 84da3e9:	57                   	push   %edi
 84da3ea:	56                   	push   %esi
 84da3eb:	53                   	push   %ebx
 84da3ec:	81 ec ec 00 00 00    	sub    $0xec,%esp
 84da3f2:	8b 45 10             	mov    0x10(%ebp),%eax
 84da3f5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84da3f8:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84da3fb:	89 04 24             	mov    %eax,(%esp)
 84da3fe:	e8 49 39 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84da403:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84da406:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84da40a:	0f b6 c0             	movzbl %al,%eax
 84da40d:	85 c0                	test   %eax,%eax
 84da40f:	74 0e                	je     84da41f <_ZN25Inter_UpdateServerMessage12dispatch_sigEP5CUserPci+0x39>
 84da411:	83 f8 01             	cmp    $0x1,%eax
 84da414:	0f 84 fb 00 00 00    	je     84da515 <_ZN25Inter_UpdateServerMessage12dispatch_sigEP5CUserPci+0x12f>
 84da41a:	e9 98 02 00 00       	jmp    84da6b7 <_ZN25Inter_UpdateServerMessage12dispatch_sigEP5CUserPci+0x2d1>
 84da41f:	c7 44 24 08 c0 00 00 	movl   $0xc0,0x8(%esp)
 84da426:	00 
 84da427:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84da42e:	00 
 84da42f:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84da432:	89 04 24             	mov    %eax,(%esp)
 84da435:	e8 c2 14 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84da43a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84da441:	00 
 84da442:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84da445:	89 04 24             	mov    %eax,(%esp)
 84da448:	e8 d3 14 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84da44d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84da454:	00 
 84da455:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84da458:	89 04 24             	mov    %eax,(%esp)
 84da45b:	e8 c0 14 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84da460:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84da463:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 84da467:	0f b6 c0             	movzbl %al,%eax
 84da46a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84da46e:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84da471:	89 04 24             	mov    %eax,(%esp)
 84da474:	e8 a7 14 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84da479:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84da47c:	8b 40 0c             	mov    0xc(%eax),%eax
 84da47f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84da483:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84da486:	89 04 24             	mov    %eax,(%esp)
 84da489:	e8 ae 14 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84da48e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84da491:	8b 40 0c             	mov    0xc(%eax),%eax
 84da494:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84da497:	83 c2 10             	add    $0x10,%edx
 84da49a:	89 44 24 08          	mov    %eax,0x8(%esp)
 84da49e:	89 54 24 04          	mov    %edx,0x4(%esp)
 84da4a2:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84da4a5:	89 04 24             	mov    %eax,(%esp)
 84da4a8:	e8 37 cf cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84da4ad:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84da4b0:	8b 40 44             	mov    0x44(%eax),%eax
 84da4b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84da4b7:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84da4ba:	89 04 24             	mov    %eax,(%esp)
 84da4bd:	e8 7a 14 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84da4c2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84da4c5:	8b 40 44             	mov    0x44(%eax),%eax
 84da4c8:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84da4cb:	83 c2 48             	add    $0x48,%edx
 84da4ce:	89 44 24 08          	mov    %eax,0x8(%esp)
 84da4d2:	89 54 24 04          	mov    %edx,0x4(%esp)
 84da4d6:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84da4d9:	89 04 24             	mov    %eax,(%esp)
 84da4dc:	e8 03 cf cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84da4e1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84da4e8:	00 
 84da4e9:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84da4ec:	89 04 24             	mov    %eax,(%esp)
 84da4ef:	e8 64 14 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84da4f4:	e8 ae fe bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84da4f9:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 84da500:	00 
 84da501:	8d 55 b8             	lea    -0x48(%ebp),%edx
 84da504:	89 54 24 04          	mov    %edx,0x4(%esp)
 84da508:	89 04 24             	mov    %eax,(%esp)
 84da50b:	e8 74 ec 1e 00       	call   86c9184 <_ZN9GameWorld19send_all_with_stateER11PacketGuardi>
 84da510:	e9 d8 01 00 00       	jmp    84da6ed <_ZN25Inter_UpdateServerMessage12dispatch_sigEP5CUserPci+0x307>
 84da515:	8d 85 59 ff ff ff    	lea    -0xa7(%ebp),%eax
 84da51b:	89 04 24             	mov    %eax,(%esp)
 84da51e:	e8 7f ee 00 00       	call   84e93a2 <_ZN34Packet_Monitor_Server_Message_InfoC1Ev>
 84da523:	e8 59 1c bf ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84da528:	89 04 24             	mov    %eax,(%esp)
 84da52b:	e8 9a 05 c7 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 84da530:	88 85 63 ff ff ff    	mov    %al,-0x9d(%ebp)
 84da536:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84da539:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84da53d:	88 85 64 ff ff ff    	mov    %al,-0x9c(%ebp)
 84da543:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84da546:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 84da54a:	88 85 65 ff ff ff    	mov    %al,-0x9b(%ebp)
 84da550:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84da553:	8b 40 0c             	mov    0xc(%eax),%eax
 84da556:	89 85 66 ff ff ff    	mov    %eax,-0x9a(%ebp)
 84da55c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84da55f:	8b 40 44             	mov    0x44(%eax),%eax
 84da562:	89 45 9c             	mov    %eax,-0x64(%ebp)
 84da565:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84da568:	8b 40 5c             	mov    0x5c(%eax),%eax
 84da56b:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 84da56e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84da571:	83 c0 10             	add    $0x10,%eax
 84da574:	c7 44 24 08 32 00 00 	movl   $0x32,0x8(%esp)
 84da57b:	00 
 84da57c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84da580:	8d 85 59 ff ff ff    	lea    -0xa7(%ebp),%eax
 84da586:	83 c0 11             	add    $0x11,%eax
 84da589:	89 04 24             	mov    %eax,(%esp)
 84da58c:	e8 3f 33 ba ff       	call   807d8d0 <strncpy@plt>
 84da591:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84da594:	83 c0 48             	add    $0x48,%eax
 84da597:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 84da59e:	00 
 84da59f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84da5a3:	8d 85 59 ff ff ff    	lea    -0xa7(%ebp),%eax
 84da5a9:	83 c0 47             	add    $0x47,%eax
 84da5ac:	89 04 24             	mov    %eax,(%esp)
 84da5af:	e8 1c 33 ba ff       	call   807d8d0 <strncpy@plt>
 84da5b4:	8d 9d 59 ff ff ff    	lea    -0xa7(%ebp),%ebx
 84da5ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 84da5bd:	89 04 24             	mov    %eax,(%esp)
 84da5c0:	e8 cb 16 bf ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84da5c5:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 84da5cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84da5cf:	89 14 24             	mov    %edx,(%esp)
 84da5d2:	e8 b3 7a c3 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84da5d7:	c7 44 24 08 5f 00 00 	movl   $0x5f,0x8(%esp)
 84da5de:	00 
 84da5df:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84da5e3:	89 04 24             	mov    %eax,(%esp)
 84da5e6:	e8 59 68 f9 ff       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 84da5eb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84da5ee:	8b 78 5c             	mov    0x5c(%eax),%edi
 84da5f1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84da5f4:	83 c0 48             	add    $0x48,%eax
 84da5f7:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 84da5fd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84da600:	8b 40 44             	mov    0x44(%eax),%eax
 84da603:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 84da609:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84da60c:	83 c0 10             	add    $0x10,%eax
 84da60f:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 84da615:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84da618:	8b 40 0c             	mov    0xc(%eax),%eax
 84da61b:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 84da621:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84da624:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 84da628:	0f b6 c0             	movzbl %al,%eax
 84da62b:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 84da631:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84da634:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84da638:	0f b6 f0             	movzbl %al,%esi
 84da63b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84da63e:	8b 58 04             	mov    0x4(%eax),%ebx
 84da641:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84da648:	00 
 84da649:	c7 44 24 08 a0 42 00 	movl   $0x42a0,0x8(%esp)
 84da650:	00 
 84da651:	c7 44 24 04 60 bf c8 	movl   $0x8c8bf60,0x4(%esp)
 84da658:	08 
 84da659:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84da65c:	89 04 24             	mov    %eax,(%esp)
 84da65f:	e8 b4 50 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84da664:	89 7c 24 24          	mov    %edi,0x24(%esp)
 84da668:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 84da66e:	89 44 24 20          	mov    %eax,0x20(%esp)
 84da672:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 84da678:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84da67c:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 84da682:	89 44 24 18          	mov    %eax,0x18(%esp)
 84da686:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 84da68c:	89 44 24 14          	mov    %eax,0x14(%esp)
 84da690:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 84da696:	89 44 24 10          	mov    %eax,0x10(%esp)
 84da69a:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84da69e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84da6a2:	c7 44 24 04 94 96 c8 	movl   $0x8c89694,0x4(%esp)
 84da6a9:	08 
 84da6aa:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84da6ad:	89 04 24             	mov    %eax,(%esp)
 84da6b0:	e8 d3 50 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84da6b5:	eb 36                	jmp    84da6ed <_ZN25Inter_UpdateServerMessage12dispatch_sigEP5CUserPci+0x307>
 84da6b7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84da6be:	00 
 84da6bf:	c7 44 24 08 a6 42 00 	movl   $0x42a6,0x8(%esp)
 84da6c6:	00 
 84da6c7:	c7 44 24 04 60 bf c8 	movl   $0x8c8bf60,0x4(%esp)
 84da6ce:	08 
 84da6cf:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84da6d2:	89 04 24             	mov    %eax,(%esp)
 84da6d5:	e8 3e 50 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84da6da:	c7 44 24 04 24 97 c8 	movl   $0x8c89724,0x4(%esp)
 84da6e1:	08 
 84da6e2:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84da6e5:	89 04 24             	mov    %eax,(%esp)
 84da6e8:	e8 9b 50 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84da6ed:	bb 00 00 00 00       	mov    $0x0,%ebx
 84da6f2:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84da6f5:	89 04 24             	mov    %eax,(%esp)
 84da6f8:	e8 83 37 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84da6fd:	89 d8                	mov    %ebx,%eax
 84da6ff:	81 c4 ec 00 00 00    	add    $0xec,%esp
 84da705:	5b                   	pop    %ebx
 84da706:	5e                   	pop    %esi
 84da707:	5f                   	pop    %edi
 84da708:	5d                   	pop    %ebp
 84da709:	c3                   	ret
 84da70a:	89 d3                	mov    %edx,%ebx
 84da70c:	89 c6                	mov    %eax,%esi
 84da70e:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84da711:	89 04 24             	mov    %eax,(%esp)
 84da714:	e8 67 37 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84da719:	89 f0                	mov    %esi,%eax
 84da71b:	89 da                	mov    %ebx,%edx
 84da71d:	89 04 24             	mov    %eax,(%esp)
 84da720:	e8 2b 90 60 00       	call   8ae3750 <_Unwind_Resume>
 84da725:	90                   	nop

```

```c
// Inter_UpdateServerMessage::dispatch_sig @ 0x84da3e6

/* Inter_UpdateServerMessage::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_UpdateServerMessage::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  GameWorld *this;
  CEnvironment *this_00;
  undefined4 uVar6;
  CMonitorServerProxy *this_01;
  int iVar7;
  int iVar8;
  Packet_Monitor_Server_Message_Info local_ab [10];
  undefined1 local_a1;
  undefined1 local_a0;
  undefined1 local_9f;
  undefined4 local_9e;
  char acStack_9a [50];
  undefined4 local_68;
  char acStack_64 [20];
  undefined4 local_50;
  PacketGuard local_4c [12];
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  int local_20;
  
  local_20 = param_3;
  PacketGuard::PacketGuard(local_4c);
  if (*(char *)(local_20 + 8) == '\0') {
                    /* try { // try from 084da435 to 084da6ec has its CatchHandler @ 084da70a */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_4c,0,0xc0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,(uint)*(byte *)(local_20 + 9));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_4c,*(int *)(local_20 + 0xc));
    InterfacePacketBuf::put_str
              ((InterfacePacketBuf *)local_4c,(char *)(local_20 + 0x10),*(int *)(local_20 + 0xc));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_4c,*(int *)(local_20 + 0x44));
    InterfacePacketBuf::put_str
              ((InterfacePacketBuf *)local_4c,(char *)(local_20 + 0x48),*(int *)(local_20 + 0x44));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_4c,true);
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_all_with_state(this,local_4c,3);
  }
  else if (*(char *)(local_20 + 8) == '\x01') {
    Packet_Monitor_Server_Message_Info::Packet_Monitor_Server_Message_Info(local_ab);
    this_00 = (CEnvironment *)G_CEnvironment();
    local_a1 = CEnvironment::get_channel_no(this_00);
    local_a0 = *(undefined1 *)(local_20 + 8);
    local_9f = *(undefined1 *)(local_20 + 9);
    local_9e = *(undefined4 *)(local_20 + 0xc);
    local_68 = *(undefined4 *)(local_20 + 0x44);
    local_50 = *(undefined4 *)(local_20 + 0x5c);
    strncpy(acStack_9a,(char *)(local_20 + 0x10),0x32);
    strncpy(acStack_64,(char *)(local_20 + 0x48),0x14);
    uVar6 = CUser::GetServerGroup((CUser *)param_2);
    this_01 = (CMonitorServerProxy *)
              CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                        (GlobalData::s_monitor_proxy_mgr,uVar6);
    CMonitorServerProxy::SendTcpPacket(this_01,(char *)local_ab,0x5f);
    uVar6 = *(undefined4 *)(local_20 + 0x5c);
    iVar7 = local_20 + 0x48;
    uVar3 = *(undefined4 *)(local_20 + 0x44);
    iVar8 = local_20 + 0x10;
    uVar4 = *(undefined4 *)(local_20 + 0xc);
    bVar1 = *(byte *)(local_20 + 9);
    bVar2 = *(byte *)(local_20 + 8);
    uVar5 = *(undefined4 *)(local_20 + 4);
    cMyTrace::cMyTrace(local_40,
                       "virtual int Inter_UpdateServerMessage::dispatch_sig(CUser*, char*, int)",
                       0x42a0,0);
    cMyTrace::operator()
              (local_40,
               "SERVER_MESSAGE : Send ServerMessage to monitor server(source_channel:%d, kind:%d, index:%d, msg_len:%d, msg:%s, name_len:%d, name:%s, time:%d"
               ,uVar5,(uint)bVar2,(uint)bVar1,uVar4,iVar8,uVar3,iVar7,uVar6);
  }
  else {
    cMyTrace::cMyTrace(local_30,
                       "virtual int Inter_UpdateServerMessage::dispatch_sig(CUser*, char*, int)",
                       0x42a6,0);
    cMyTrace::operator()(local_30,"SERVER_MESSAGE : NOT EXIST SHARE TYPE");
  }
  PacketGuard::~PacketGuard(local_4c);
  return 0;
}

```

