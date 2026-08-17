# Inter_MonitorNoticeGuildLoginOut

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084c93e4 Inter_MonitorNoticeGuildLoginOut::dispatch_sig  [0x084c93e4-0x84c957d] ===
 84c93e4:	55                   	push   %ebp
 84c93e5:	89 e5                	mov    %esp,%ebp
 84c93e7:	56                   	push   %esi
 84c93e8:	53                   	push   %ebx
 84c93e9:	83 ec 40             	sub    $0x40,%esp
 84c93ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c93ef:	89 04 24             	mov    %eax,(%esp)
 84c93f2:	e8 95 0f c1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84c93f7:	85 c0                	test   %eax,%eax
 84c93f9:	0f 94 c0             	sete   %al
 84c93fc:	84 c0                	test   %al,%al
 84c93fe:	74 0a                	je     84c940a <_ZN32Inter_MonitorNoticeGuildLoginOut12dispatch_sigEP5CUserPci+0x26>
 84c9400:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c9405:	e9 6a 01 00 00       	jmp    84c9574 <_ZN32Inter_MonitorNoticeGuildLoginOut12dispatch_sigEP5CUserPci+0x190>
 84c940a:	8b 45 10             	mov    0x10(%ebp),%eax
 84c940d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84c9410:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84c9417:	ff 
 84c9418:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c941b:	89 04 24             	mov    %eax,(%esp)
 84c941e:	e8 7d 4b 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84c9423:	89 c2                	mov    %eax,%edx
 84c9425:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c9428:	8b 40 0f             	mov    0xf(%eax),%eax
 84c942b:	39 c2                	cmp    %eax,%edx
 84c942d:	0f 95 c0             	setne  %al
 84c9430:	84 c0                	test   %al,%al
 84c9432:	74 57                	je     84c948b <_ZN32Inter_MonitorNoticeGuildLoginOut12dispatch_sigEP5CUserPci+0xa7>
 84c9434:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c9437:	8b 58 0f             	mov    0xf(%eax),%ebx
 84c943a:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84c9441:	ff 
 84c9442:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c9445:	89 04 24             	mov    %eax,(%esp)
 84c9448:	e8 53 4b 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84c944d:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84c9451:	89 44 24 14          	mov    %eax,0x14(%esp)
 84c9455:	c7 44 24 10 60 79 c8 	movl   $0x8c87960,0x10(%esp)
 84c945c:	08 
 84c945d:	c7 44 24 0c 2c 23 00 	movl   $0x232c,0xc(%esp)
 84c9464:	00 
 84c9465:	c7 44 24 08 e0 db c8 	movl   $0x8c8dbe0,0x8(%esp)
 84c946c:	08 
 84c946d:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84c9474:	08 
 84c9475:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84c947c:	e8 89 a7 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84c9481:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c9486:	e9 e9 00 00 00       	jmp    84c9574 <_ZN32Inter_MonitorNoticeGuildLoginOut12dispatch_sigEP5CUserPci+0x190>
 84c948b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c948e:	89 04 24             	mov    %eax,(%esp)
 84c9491:	e8 b6 48 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84c9496:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 84c949d:	00 
 84c949e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c94a5:	00 
 84c94a6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c94a9:	89 04 24             	mov    %eax,(%esp)
 84c94ac:	e8 4b 24 c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84c94b1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c94b4:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84c94b8:	0f be c0             	movsbl %al,%eax
 84c94bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c94bf:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c94c2:	89 04 24             	mov    %eax,(%esp)
 84c94c5:	e8 56 24 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c94ca:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c94cd:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 84c94d1:	0f b6 c0             	movzbl %al,%eax
 84c94d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c94d8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c94db:	89 04 24             	mov    %eax,(%esp)
 84c94de:	e8 3d 24 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c94e3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c94e6:	83 c0 14             	add    $0x14,%eax
 84c94e9:	89 04 24             	mov    %eax,(%esp)
 84c94ec:	e8 bf 4e bb ff       	call   807e3b0 <strlen@plt>
 84c94f1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84c94f4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c94f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c94fb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c94fe:	89 04 24             	mov    %eax,(%esp)
 84c9501:	e8 36 24 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84c9506:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c9509:	8d 50 14             	lea    0x14(%eax),%edx
 84c950c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c950f:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c9513:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c9517:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c951a:	89 04 24             	mov    %eax,(%esp)
 84c951d:	e8 c2 de ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84c9522:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c9529:	00 
 84c952a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c952d:	89 04 24             	mov    %eax,(%esp)
 84c9530:	e8 23 24 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84c9535:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c9538:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c953c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c953f:	89 04 24             	mov    %eax,(%esp)
 84c9542:	e8 73 f0 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c9547:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c954c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c954f:	89 04 24             	mov    %eax,(%esp)
 84c9552:	e8 29 49 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84c9557:	eb 1b                	jmp    84c9574 <_ZN32Inter_MonitorNoticeGuildLoginOut12dispatch_sigEP5CUserPci+0x190>
 84c9559:	89 d3                	mov    %edx,%ebx
 84c955b:	89 c6                	mov    %eax,%esi
 84c955d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c9560:	89 04 24             	mov    %eax,(%esp)
 84c9563:	e8 18 49 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84c9568:	89 f0                	mov    %esi,%eax
 84c956a:	89 da                	mov    %ebx,%edx
 84c956c:	89 04 24             	mov    %eax,(%esp)
 84c956f:	e8 dc a1 61 00       	call   8ae3750 <_Unwind_Resume>
 84c9574:	89 d8                	mov    %ebx,%eax
 84c9576:	83 c4 40             	add    $0x40,%esp
 84c9579:	5b                   	pop    %ebx
 84c957a:	5e                   	pop    %esi
 84c957b:	5d                   	pop    %ebp
 84c957c:	c3                   	ret
 84c957d:	90                   	nop

```

```c
// Inter_MonitorNoticeGuildLoginOut::dispatch_sig @ 0x84c93e4

/* Inter_MonitorNoticeGuildLoginOut::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorNoticeGuildLoginOut::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_14 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_14 + 0xf)) {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084c94ac to 084c9546 has its CatchHandler @ 084c9559 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x40);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(local_14 + 10));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0x13));
      local_10 = strlen((char *)(local_14 + 0x14));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x14),local_10)
      ;
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
    else {
      uVar1 = *(undefined4 *)(local_14 + 0xf);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeGuildLoginOut::dispatch_sig(CUser*, char*, int)",
                 0x232c,
                 "Inter_MonitorNoticeGuildLoginOut::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}

```

