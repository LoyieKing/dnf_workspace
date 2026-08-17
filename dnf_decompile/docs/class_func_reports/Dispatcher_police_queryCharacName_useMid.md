# Dispatcher_police_queryCharacName_useMid

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 082273ae Dispatcher_police_queryCharacName_useMid::dispatch_sig  [0x082273ae-0x822759b] ===
 82273ae:	55                   	push   %ebp
 82273af:	89 e5                	mov    %esp,%ebp
 82273b1:	56                   	push   %esi
 82273b2:	53                   	push   %ebx
 82273b3:	83 ec 60             	sub    $0x60,%esp
 82273b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82273b9:	89 04 24             	mov    %eax,(%esp)
 82273bc:	e8 cb 2f eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82273c1:	83 f8 02             	cmp    $0x2,%eax
 82273c4:	7e 21                	jle    82273e7 <_ZN40Dispatcher_police_queryCharacName_useMid12dispatch_sigEP5CUserR9PacketBuf+0x39>
 82273c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82273c9:	89 04 24             	mov    %eax,(%esp)
 82273cc:	e8 61 90 ef ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 82273d1:	85 c0                	test   %eax,%eax
 82273d3:	74 12                	je     82273e7 <_ZN40Dispatcher_police_queryCharacName_useMid12dispatch_sigEP5CUserR9PacketBuf+0x39>
 82273d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82273d8:	89 04 24             	mov    %eax,(%esp)
 82273db:	e8 bc e4 f1 ff       	call   814589c <_ZN5CUser8isGMUserEv>
 82273e0:	83 f0 01             	xor    $0x1,%eax
 82273e3:	84 c0                	test   %al,%al
 82273e5:	74 07                	je     82273ee <_ZN40Dispatcher_police_queryCharacName_useMid12dispatch_sigEP5CUserR9PacketBuf+0x40>
 82273e7:	b8 01 00 00 00       	mov    $0x1,%eax
 82273ec:	eb 05                	jmp    82273f3 <_ZN40Dispatcher_police_queryCharacName_useMid12dispatch_sigEP5CUserR9PacketBuf+0x45>
 82273ee:	b8 00 00 00 00       	mov    $0x0,%eax
 82273f3:	84 c0                	test   %al,%al
 82273f5:	74 0a                	je     8227401 <_ZN40Dispatcher_police_queryCharacName_useMid12dispatch_sigEP5CUserR9PacketBuf+0x53>
 82273f7:	b8 00 00 00 00       	mov    $0x0,%eax
 82273fc:	e9 94 01 00 00       	jmp    8227595 <_ZN40Dispatcher_police_queryCharacName_useMid12dispatch_sigEP5CUserR9PacketBuf+0x1e7>
 8227401:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8227404:	89 04 24             	mov    %eax,(%esp)
 8227407:	e8 d6 4e 00 00       	call   822c2e2 <_ZN33Pakcet_FindUserName_use_Charac_noC1Ev>
 822740c:	8b 45 0c             	mov    0xc(%ebp),%eax
 822740f:	89 04 24             	mov    %eax,(%esp)
 8227412:	e8 7f 18 ea ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8227417:	89 45 be             	mov    %eax,-0x42(%ebp)
 822741a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 822741d:	83 c0 0e             	add    $0xe,%eax
 8227420:	89 44 24 04          	mov    %eax,0x4(%esp)
 8227424:	8b 45 10             	mov    0x10(%ebp),%eax
 8227427:	89 04 24             	mov    %eax,(%esp)
 822742a:	e8 11 5e 36 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 822742f:	8b 45 c2             	mov    -0x3e(%ebp),%eax
 8227432:	0f b7 d8             	movzwl %ax,%ebx
 8227435:	e8 6d 2f eb ff       	call   80da3a7 <_Z11G_GameWorldv>
 822743a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 822743e:	89 04 24             	mov    %eax,(%esp)
 8227441:	e8 56 d7 49 00       	call   86c4b9c <_ZN9GameWorld15find_from_worldEt>
 8227446:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8227449:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 822744d:	0f 84 09 01 00 00    	je     822755c <_ZN40Dispatcher_police_queryCharacName_useMid12dispatch_sigEP5CUserR9PacketBuf+0x1ae>
 8227453:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8227456:	89 04 24             	mov    %eax,(%esp)
 8227459:	e8 ca 9b ed ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 822745e:	89 04 24             	mov    %eax,(%esp)
 8227461:	e8 4a 6f e5 ff       	call   807e3b0 <strlen@plt>
 8227466:	89 45 c6             	mov    %eax,-0x3a(%ebp)
 8227469:	8b 45 c6             	mov    -0x3a(%ebp),%eax
 822746c:	83 f8 1d             	cmp    $0x1d,%eax
 822746f:	76 07                	jbe    8227478 <_ZN40Dispatcher_police_queryCharacName_useMid12dispatch_sigEP5CUserR9PacketBuf+0xca>
 8227471:	c7 45 c6 00 00 00 00 	movl   $0x0,-0x3a(%ebp)
 8227478:	8b 45 c6             	mov    -0x3a(%ebp),%eax
 822747b:	85 c0                	test   %eax,%eax
 822747d:	0f 84 0d 01 00 00    	je     8227590 <_ZN40Dispatcher_police_queryCharacName_useMid12dispatch_sigEP5CUserR9PacketBuf+0x1e2>
 8227483:	8b 5d c6             	mov    -0x3a(%ebp),%ebx
 8227486:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8227489:	89 04 24             	mov    %eax,(%esp)
 822748c:	e8 97 9b ed ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8227491:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8227495:	89 44 24 04          	mov    %eax,0x4(%esp)
 8227499:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 822749c:	83 c0 16             	add    $0x16,%eax
 822749f:	89 04 24             	mov    %eax,(%esp)
 82274a2:	e8 29 64 e5 ff       	call   807d8d0 <strncpy@plt>
 82274a7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82274aa:	89 04 24             	mov    %eax,(%esp)
 82274ad:	e8 9a 68 36 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82274b2:	c7 44 24 08 4b 01 00 	movl   $0x14b,0x8(%esp)
 82274b9:	00 
 82274ba:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82274c1:	00 
 82274c2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82274c5:	89 04 24             	mov    %eax,(%esp)
 82274c8:	e8 2f 44 ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82274cd:	8b 45 c2             	mov    -0x3e(%ebp),%eax
 82274d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82274d4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82274d7:	89 04 24             	mov    %eax,(%esp)
 82274da:	e8 5d 44 ea ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82274df:	8b 45 c6             	mov    -0x3a(%ebp),%eax
 82274e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 82274e6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82274e9:	89 04 24             	mov    %eax,(%esp)
 82274ec:	e8 4b 44 ea ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82274f1:	8b 45 c6             	mov    -0x3a(%ebp),%eax
 82274f4:	89 44 24 08          	mov    %eax,0x8(%esp)
 82274f8:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82274fb:	83 c0 16             	add    $0x16,%eax
 82274fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8227502:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8227505:	89 04 24             	mov    %eax,(%esp)
 8227508:	e8 d7 fe f8 ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 822750d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8227514:	00 
 8227515:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8227518:	89 04 24             	mov    %eax,(%esp)
 822751b:	e8 38 44 ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8227520:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8227523:	89 44 24 04          	mov    %eax,0x4(%esp)
 8227527:	8b 45 0c             	mov    0xc(%ebp),%eax
 822752a:	89 04 24             	mov    %eax,(%esp)
 822752d:	e8 88 10 42 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8227532:	eb 1b                	jmp    822754f <_ZN40Dispatcher_police_queryCharacName_useMid12dispatch_sigEP5CUserR9PacketBuf+0x1a1>
 8227534:	89 d3                	mov    %edx,%ebx
 8227536:	89 c6                	mov    %eax,%esi
 8227538:	8d 45 e8             	lea    -0x18(%ebp),%eax
 822753b:	89 04 24             	mov    %eax,(%esp)
 822753e:	e8 3d 69 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8227543:	89 f0                	mov    %esi,%eax
 8227545:	89 da                	mov    %ebx,%edx
 8227547:	89 04 24             	mov    %eax,(%esp)
 822754a:	e8 01 c2 8b 00       	call   8ae3750 <_Unwind_Resume>
 822754f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8227552:	89 04 24             	mov    %eax,(%esp)
 8227555:	e8 26 69 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 822755a:	eb 34                	jmp    8227590 <_ZN40Dispatcher_police_queryCharacName_useMid12dispatch_sigEP5CUserR9PacketBuf+0x1e2>
 822755c:	8d 5d b4             	lea    -0x4c(%ebp),%ebx
 822755f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8227562:	89 04 24             	mov    %eax,(%esp)
 8227565:	e8 26 47 ea ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 822756a:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 8227570:	89 44 24 04          	mov    %eax,0x4(%esp)
 8227574:	89 14 24             	mov    %edx,(%esp)
 8227577:	e8 0e ab ee ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 822757c:	c7 44 24 08 34 00 00 	movl   $0x34,0x8(%esp)
 8227583:	00 
 8227584:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8227588:	89 04 24             	mov    %eax,(%esp)
 822758b:	e8 b4 98 24 00       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 8227590:	b8 00 00 00 00       	mov    $0x0,%eax
 8227595:	83 c4 60             	add    $0x60,%esp
 8227598:	5b                   	pop    %ebx
 8227599:	5e                   	pop    %esi
 822759a:	5d                   	pop    %ebp
 822759b:	c3                   	ret

```

```c
// Dispatcher_police_queryCharacName_useMid::dispatch_sig @ 0x82273ae

/* Dispatcher_police_queryCharacName_useMid::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_police_queryCharacName_useMid::dispatch_sig
          (Dispatcher_police_queryCharacName_useMid *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  uint uVar2;
  size_t __n;
  char cVar3;
  int iVar4;
  GameWorld *this_00;
  char *pcVar5;
  undefined4 uVar6;
  CMonitorServerProxy *this_01;
  Pakcet_FindUserName_use_Charac_no local_50 [10];
  undefined4 local_46;
  uint local_42;
  size_t local_3e;
  char acStack_3a [30];
  PacketGuard local_1c [12];
  CUserCharacInfo *local_10;
  
  iVar4 = CUser::get_state(param_1);
  if (((iVar4 < 3) ||
      (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar4 == 0)) ||
     (cVar3 = CUser::isGMUser(param_1), cVar3 != '\x01')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    Pakcet_FindUserName_use_Charac_no::Pakcet_FindUserName_use_Charac_no(local_50);
    local_46 = CUser::GetUID(param_1);
    PacketBuf::get_int(param_2,&local_42);
    uVar2 = local_42;
    this_00 = (GameWorld *)G_GameWorld();
    local_10 = (CUserCharacInfo *)GameWorld::find_from_world(this_00,(ushort)uVar2);
    if (local_10 == (CUserCharacInfo *)0x0) {
      uVar6 = CUser::GetServerGroup(param_1);
      this_01 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,uVar6);
      CMonitorServerProxy::SendTcpPacket(this_01,(char *)local_50,0x34);
    }
    else {
      pcVar5 = (char *)CUserCharacInfo::getCurCharacName(local_10);
      local_3e = strlen(pcVar5);
      if (0x1d < local_3e) {
        local_3e = 0;
      }
      __n = local_3e;
      if (local_3e != 0) {
        pcVar5 = (char *)CUserCharacInfo::getCurCharacName(local_10);
        strncpy(acStack_3a,pcVar5,__n);
        PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 082274c8 to 08227531 has its CatchHandler @ 08227534 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x14b);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,local_42);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,local_3e);
        InterfacePacketBuf::put_str((InterfacePacketBuf *)local_1c,acStack_3a,local_3e);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
        CUser::Send(param_1,local_1c);
        PacketGuard::~PacketGuard(local_1c);
      }
    }
  }
  return 0;
}

```

