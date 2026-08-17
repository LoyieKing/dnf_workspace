# Inter_MonitorNoticeOtherChannelChat

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084cb1ac Inter_MonitorNoticeOtherChannelChat::dispatch_sig  [0x084cb1ac-0x84cb725] ===
 84cb1ac:	55                   	push   %ebp
 84cb1ad:	89 e5                	mov    %esp,%ebp
 84cb1af:	56                   	push   %esi
 84cb1b0:	53                   	push   %ebx
 84cb1b1:	83 ec 70             	sub    $0x70,%esp
 84cb1b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cb1b7:	89 04 24             	mov    %eax,(%esp)
 84cb1ba:	e8 cd f1 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84cb1bf:	85 c0                	test   %eax,%eax
 84cb1c1:	0f 94 c0             	sete   %al
 84cb1c4:	84 c0                	test   %al,%al
 84cb1c6:	74 0a                	je     84cb1d2 <_ZN35Inter_MonitorNoticeOtherChannelChat12dispatch_sigEP5CUserPci+0x26>
 84cb1c8:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cb1cd:	e9 4b 05 00 00       	jmp    84cb71d <_ZN35Inter_MonitorNoticeOtherChannelChat12dispatch_sigEP5CUserPci+0x571>
 84cb1d2:	8b 45 10             	mov    0x10(%ebp),%eax
 84cb1d5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84cb1d8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb1db:	0f b6 40 35          	movzbl 0x35(%eax),%eax
 84cb1df:	3c 01                	cmp    $0x1,%al
 84cb1e1:	0f 85 23 01 00 00    	jne    84cb30a <_ZN35Inter_MonitorNoticeOtherChannelChat12dispatch_sigEP5CUserPci+0x15e>
 84cb1e7:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84cb1ea:	89 04 24             	mov    %eax,(%esp)
 84cb1ed:	e8 5a 2b 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84cb1f2:	c7 44 24 08 41 00 00 	movl   $0x41,0x8(%esp)
 84cb1f9:	00 
 84cb1fa:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cb201:	00 
 84cb202:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84cb205:	89 04 24             	mov    %eax,(%esp)
 84cb208:	e8 ef 06 c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84cb20d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb210:	8b 40 0a             	mov    0xa(%eax),%eax
 84cb213:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cb217:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84cb21a:	89 04 24             	mov    %eax,(%esp)
 84cb21d:	e8 fe 06 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cb222:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 84cb229:	00 
 84cb22a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84cb22d:	89 04 24             	mov    %eax,(%esp)
 84cb230:	e8 eb 06 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cb235:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb238:	83 c0 17             	add    $0x17,%eax
 84cb23b:	89 04 24             	mov    %eax,(%esp)
 84cb23e:	e8 6d 31 bb ff       	call   807e3b0 <strlen@plt>
 84cb243:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84cb246:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cb249:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cb24d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84cb250:	89 04 24             	mov    %eax,(%esp)
 84cb253:	e8 e4 06 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cb258:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb25b:	8d 50 17             	lea    0x17(%eax),%edx
 84cb25e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cb261:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cb265:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cb269:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84cb26c:	89 04 24             	mov    %eax,(%esp)
 84cb26f:	e8 70 c1 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84cb274:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cb27b:	00 
 84cb27c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84cb27f:	89 04 24             	mov    %eax,(%esp)
 84cb282:	e8 99 06 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cb287:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cb28e:	00 
 84cb28f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84cb292:	89 04 24             	mov    %eax,(%esp)
 84cb295:	e8 a2 06 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cb29a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84cb2a1:	00 
 84cb2a2:	c7 44 24 04 40 6f c8 	movl   $0x8c86f40,0x4(%esp)
 84cb2a9:	08 
 84cb2aa:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84cb2ad:	89 04 24             	mov    %eax,(%esp)
 84cb2b0:	e8 bb 04 d6 ff       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 84cb2b5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cb2bc:	00 
 84cb2bd:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84cb2c0:	89 04 24             	mov    %eax,(%esp)
 84cb2c3:	e8 90 06 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84cb2c8:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84cb2cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cb2cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cb2d2:	89 04 24             	mov    %eax,(%esp)
 84cb2d5:	e8 e0 d2 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84cb2da:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cb2df:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84cb2e2:	89 04 24             	mov    %eax,(%esp)
 84cb2e5:	e8 96 2b 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cb2ea:	e9 2e 04 00 00       	jmp    84cb71d <_ZN35Inter_MonitorNoticeOtherChannelChat12dispatch_sigEP5CUserPci+0x571>
 84cb2ef:	89 d3                	mov    %edx,%ebx
 84cb2f1:	89 c6                	mov    %eax,%esi
 84cb2f3:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84cb2f6:	89 04 24             	mov    %eax,(%esp)
 84cb2f9:	e8 82 2b 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cb2fe:	89 f0                	mov    %esi,%eax
 84cb300:	89 da                	mov    %ebx,%edx
 84cb302:	89 04 24             	mov    %eax,(%esp)
 84cb305:	e8 46 84 61 00       	call   8ae3750 <_Unwind_Resume>
 84cb30a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb30d:	0f b6 40 35          	movzbl 0x35(%eax),%eax
 84cb311:	3c 02                	cmp    $0x2,%al
 84cb313:	0f 85 23 01 00 00    	jne    84cb43c <_ZN35Inter_MonitorNoticeOtherChannelChat12dispatch_sigEP5CUserPci+0x290>
 84cb319:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84cb31c:	89 04 24             	mov    %eax,(%esp)
 84cb31f:	e8 28 2a 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84cb324:	c7 44 24 08 41 00 00 	movl   $0x41,0x8(%esp)
 84cb32b:	00 
 84cb32c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cb333:	00 
 84cb334:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84cb337:	89 04 24             	mov    %eax,(%esp)
 84cb33a:	e8 bd 05 c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84cb33f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb342:	8b 40 0a             	mov    0xa(%eax),%eax
 84cb345:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cb349:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84cb34c:	89 04 24             	mov    %eax,(%esp)
 84cb34f:	e8 cc 05 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cb354:	c7 44 24 04 4d 00 00 	movl   $0x4d,0x4(%esp)
 84cb35b:	00 
 84cb35c:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84cb35f:	89 04 24             	mov    %eax,(%esp)
 84cb362:	e8 b9 05 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cb367:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb36a:	83 c0 17             	add    $0x17,%eax
 84cb36d:	89 04 24             	mov    %eax,(%esp)
 84cb370:	e8 3b 30 bb ff       	call   807e3b0 <strlen@plt>
 84cb375:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84cb378:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cb37b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cb37f:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84cb382:	89 04 24             	mov    %eax,(%esp)
 84cb385:	e8 b2 05 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cb38a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb38d:	8d 50 17             	lea    0x17(%eax),%edx
 84cb390:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cb393:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cb397:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cb39b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84cb39e:	89 04 24             	mov    %eax,(%esp)
 84cb3a1:	e8 3e c0 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84cb3a6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cb3ad:	00 
 84cb3ae:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84cb3b1:	89 04 24             	mov    %eax,(%esp)
 84cb3b4:	e8 67 05 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cb3b9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cb3c0:	00 
 84cb3c1:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84cb3c4:	89 04 24             	mov    %eax,(%esp)
 84cb3c7:	e8 70 05 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cb3cc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84cb3d3:	00 
 84cb3d4:	c7 44 24 04 40 6f c8 	movl   $0x8c86f40,0x4(%esp)
 84cb3db:	08 
 84cb3dc:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84cb3df:	89 04 24             	mov    %eax,(%esp)
 84cb3e2:	e8 89 03 d6 ff       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 84cb3e7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cb3ee:	00 
 84cb3ef:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84cb3f2:	89 04 24             	mov    %eax,(%esp)
 84cb3f5:	e8 5e 05 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84cb3fa:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84cb3fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cb401:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cb404:	89 04 24             	mov    %eax,(%esp)
 84cb407:	e8 ae d1 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84cb40c:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cb411:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84cb414:	89 04 24             	mov    %eax,(%esp)
 84cb417:	e8 64 2a 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cb41c:	e9 fc 02 00 00       	jmp    84cb71d <_ZN35Inter_MonitorNoticeOtherChannelChat12dispatch_sigEP5CUserPci+0x571>
 84cb421:	89 d3                	mov    %edx,%ebx
 84cb423:	89 c6                	mov    %eax,%esi
 84cb425:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84cb428:	89 04 24             	mov    %eax,(%esp)
 84cb42b:	e8 50 2a 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cb430:	89 f0                	mov    %esi,%eax
 84cb432:	89 da                	mov    %ebx,%edx
 84cb434:	89 04 24             	mov    %eax,(%esp)
 84cb437:	e8 14 83 61 00       	call   8ae3750 <_Unwind_Resume>
 84cb43c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb43f:	0f b6 40 35          	movzbl 0x35(%eax),%eax
 84cb443:	3c 03                	cmp    $0x3,%al
 84cb445:	0f 85 23 01 00 00    	jne    84cb56e <_ZN35Inter_MonitorNoticeOtherChannelChat12dispatch_sigEP5CUserPci+0x3c2>
 84cb44b:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84cb44e:	89 04 24             	mov    %eax,(%esp)
 84cb451:	e8 f6 28 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84cb456:	c7 44 24 08 41 00 00 	movl   $0x41,0x8(%esp)
 84cb45d:	00 
 84cb45e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cb465:	00 
 84cb466:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84cb469:	89 04 24             	mov    %eax,(%esp)
 84cb46c:	e8 8b 04 c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84cb471:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb474:	8b 40 0a             	mov    0xa(%eax),%eax
 84cb477:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cb47b:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84cb47e:	89 04 24             	mov    %eax,(%esp)
 84cb481:	e8 9a 04 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cb486:	c7 44 24 04 5a 00 00 	movl   $0x5a,0x4(%esp)
 84cb48d:	00 
 84cb48e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84cb491:	89 04 24             	mov    %eax,(%esp)
 84cb494:	e8 87 04 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cb499:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb49c:	83 c0 17             	add    $0x17,%eax
 84cb49f:	89 04 24             	mov    %eax,(%esp)
 84cb4a2:	e8 09 2f bb ff       	call   807e3b0 <strlen@plt>
 84cb4a7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84cb4aa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cb4ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cb4b1:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84cb4b4:	89 04 24             	mov    %eax,(%esp)
 84cb4b7:	e8 80 04 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cb4bc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb4bf:	8d 50 17             	lea    0x17(%eax),%edx
 84cb4c2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cb4c5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cb4c9:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cb4cd:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84cb4d0:	89 04 24             	mov    %eax,(%esp)
 84cb4d3:	e8 0c bf ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84cb4d8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cb4df:	00 
 84cb4e0:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84cb4e3:	89 04 24             	mov    %eax,(%esp)
 84cb4e6:	e8 35 04 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cb4eb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cb4f2:	00 
 84cb4f3:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84cb4f6:	89 04 24             	mov    %eax,(%esp)
 84cb4f9:	e8 3e 04 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cb4fe:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84cb505:	00 
 84cb506:	c7 44 24 04 40 6f c8 	movl   $0x8c86f40,0x4(%esp)
 84cb50d:	08 
 84cb50e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84cb511:	89 04 24             	mov    %eax,(%esp)
 84cb514:	e8 57 02 d6 ff       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 84cb519:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cb520:	00 
 84cb521:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84cb524:	89 04 24             	mov    %eax,(%esp)
 84cb527:	e8 2c 04 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84cb52c:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84cb52f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cb533:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cb536:	89 04 24             	mov    %eax,(%esp)
 84cb539:	e8 7c d0 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84cb53e:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cb543:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84cb546:	89 04 24             	mov    %eax,(%esp)
 84cb549:	e8 32 29 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cb54e:	e9 ca 01 00 00       	jmp    84cb71d <_ZN35Inter_MonitorNoticeOtherChannelChat12dispatch_sigEP5CUserPci+0x571>
 84cb553:	89 d3                	mov    %edx,%ebx
 84cb555:	89 c6                	mov    %eax,%esi
 84cb557:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84cb55a:	89 04 24             	mov    %eax,(%esp)
 84cb55d:	e8 1e 29 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cb562:	89 f0                	mov    %esi,%eax
 84cb564:	89 da                	mov    %ebx,%edx
 84cb566:	89 04 24             	mov    %eax,(%esp)
 84cb569:	e8 e2 81 61 00       	call   8ae3750 <_Unwind_Resume>
 84cb56e:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cb575:	ff 
 84cb576:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cb579:	89 04 24             	mov    %eax,(%esp)
 84cb57c:	e8 1f 2a 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cb581:	89 c2                	mov    %eax,%edx
 84cb583:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb586:	8b 40 13             	mov    0x13(%eax),%eax
 84cb589:	39 c2                	cmp    %eax,%edx
 84cb58b:	0f 95 c0             	setne  %al
 84cb58e:	84 c0                	test   %al,%al
 84cb590:	74 57                	je     84cb5e9 <_ZN35Inter_MonitorNoticeOtherChannelChat12dispatch_sigEP5CUserPci+0x43d>
 84cb592:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb595:	8b 58 13             	mov    0x13(%eax),%ebx
 84cb598:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cb59f:	ff 
 84cb5a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cb5a3:	89 04 24             	mov    %eax,(%esp)
 84cb5a6:	e8 f5 29 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cb5ab:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84cb5af:	89 44 24 14          	mov    %eax,0x14(%esp)
 84cb5b3:	c7 44 24 10 10 81 c8 	movl   $0x8c88110,0x10(%esp)
 84cb5ba:	08 
 84cb5bb:	c7 44 24 0c ee 25 00 	movl   $0x25ee,0xc(%esp)
 84cb5c2:	00 
 84cb5c3:	c7 44 24 08 40 d6 c8 	movl   $0x8c8d640,0x8(%esp)
 84cb5ca:	08 
 84cb5cb:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84cb5d2:	08 
 84cb5d3:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84cb5da:	e8 2b 86 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84cb5df:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cb5e4:	e9 34 01 00 00       	jmp    84cb71d <_ZN35Inter_MonitorNoticeOtherChannelChat12dispatch_sigEP5CUserPci+0x571>
 84cb5e9:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cb5ec:	89 04 24             	mov    %eax,(%esp)
 84cb5ef:	e8 58 27 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84cb5f4:	c7 44 24 08 41 00 00 	movl   $0x41,0x8(%esp)
 84cb5fb:	00 
 84cb5fc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cb603:	00 
 84cb604:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cb607:	89 04 24             	mov    %eax,(%esp)
 84cb60a:	e8 ed 02 c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84cb60f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb612:	8b 40 0a             	mov    0xa(%eax),%eax
 84cb615:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cb619:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cb61c:	89 04 24             	mov    %eax,(%esp)
 84cb61f:	e8 fc 02 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cb624:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cb62b:	00 
 84cb62c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cb62f:	89 04 24             	mov    %eax,(%esp)
 84cb632:	e8 e9 02 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cb637:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb63a:	83 c0 17             	add    $0x17,%eax
 84cb63d:	89 04 24             	mov    %eax,(%esp)
 84cb640:	e8 6b 2d bb ff       	call   807e3b0 <strlen@plt>
 84cb645:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84cb648:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84cb64b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cb64f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cb652:	89 04 24             	mov    %eax,(%esp)
 84cb655:	e8 e2 02 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cb65a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb65d:	8d 50 17             	lea    0x17(%eax),%edx
 84cb660:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84cb663:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cb667:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cb66b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cb66e:	89 04 24             	mov    %eax,(%esp)
 84cb671:	e8 6e bd ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84cb676:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb679:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 84cb67d:	0f be c0             	movsbl %al,%eax
 84cb680:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cb684:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cb687:	89 04 24             	mov    %eax,(%esp)
 84cb68a:	e8 91 02 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cb68f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb692:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 84cb696:	0f b6 c0             	movzbl %al,%eax
 84cb699:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cb69d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cb6a0:	89 04 24             	mov    %eax,(%esp)
 84cb6a3:	e8 94 02 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cb6a8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb6ab:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 84cb6af:	0f b6 c0             	movzbl %al,%eax
 84cb6b2:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84cb6b5:	83 c2 37             	add    $0x37,%edx
 84cb6b8:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cb6bc:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cb6c0:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cb6c3:	89 04 24             	mov    %eax,(%esp)
 84cb6c6:	e8 19 bd ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84cb6cb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cb6d2:	00 
 84cb6d3:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cb6d6:	89 04 24             	mov    %eax,(%esp)
 84cb6d9:	e8 7a 02 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84cb6de:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cb6e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cb6e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cb6e8:	89 04 24             	mov    %eax,(%esp)
 84cb6eb:	e8 ca ce 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84cb6f0:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cb6f5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cb6f8:	89 04 24             	mov    %eax,(%esp)
 84cb6fb:	e8 80 27 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cb700:	eb 1b                	jmp    84cb71d <_ZN35Inter_MonitorNoticeOtherChannelChat12dispatch_sigEP5CUserPci+0x571>
 84cb702:	89 d3                	mov    %edx,%ebx
 84cb704:	89 c6                	mov    %eax,%esi
 84cb706:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cb709:	89 04 24             	mov    %eax,(%esp)
 84cb70c:	e8 6f 27 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cb711:	89 f0                	mov    %esi,%eax
 84cb713:	89 da                	mov    %ebx,%edx
 84cb715:	89 04 24             	mov    %eax,(%esp)
 84cb718:	e8 33 80 61 00       	call   8ae3750 <_Unwind_Resume>
 84cb71d:	89 d8                	mov    %ebx,%eax
 84cb71f:	83 c4 70             	add    $0x70,%esp
 84cb722:	5b                   	pop    %ebx
 84cb723:	5e                   	pop    %esi
 84cb724:	5d                   	pop    %ebp
 84cb725:	c3                   	ret

```

```c
// Inter_MonitorNoticeOtherChannelChat::dispatch_sig @ 0x84cb1ac

/* Inter_MonitorNoticeOtherChannelChat::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_MonitorNoticeOtherChannelChat::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_50 [12];
  PacketGuard local_44 [12];
  PacketGuard local_38 [12];
  PacketGuard local_2c [12];
  int local_20;
  size_t local_1c;
  size_t local_18;
  size_t local_14;
  size_t local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_20 = param_3;
    if (*(char *)(param_3 + 0x35) == '\x01') {
      PacketGuard::PacketGuard(local_38);
                    /* try { // try from 084cb208 to 084cb2d9 has its CatchHandler @ 084cb2ef */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_38,0,0x41);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,*(int *)(local_20 + 10));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,0x15);
      local_18 = strlen((char *)(local_20 + 0x17));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_38,local_18);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_38,(char *)(local_20 + 0x17),local_18)
      ;
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_38,0);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_38,"",0);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_38,true);
      CUser::Send((CUser *)param_2,local_38);
      PacketGuard::~PacketGuard(local_38);
    }
    else if (*(char *)(param_3 + 0x35) == '\x02') {
      PacketGuard::PacketGuard(local_44);
                    /* try { // try from 084cb33a to 084cb40b has its CatchHandler @ 084cb421 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_44,0,0x41);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_44,*(int *)(local_20 + 10));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_44,0x4d);
      local_14 = strlen((char *)(local_20 + 0x17));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_44,local_14);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_44,(char *)(local_20 + 0x17),local_14)
      ;
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_44,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_44,0);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_44,"",0);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_44,true);
      CUser::Send((CUser *)param_2,local_44);
      PacketGuard::~PacketGuard(local_44);
    }
    else if (*(char *)(param_3 + 0x35) == '\x03') {
      PacketGuard::PacketGuard(local_50);
                    /* try { // try from 084cb46c to 084cb53d has its CatchHandler @ 084cb553 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0x41);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,*(int *)(local_20 + 10));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0x5a);
      local_10 = strlen((char *)(local_20 + 0x17));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_50,(char *)(local_20 + 0x17),local_10)
      ;
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,0);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_50,"",0);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
      CUser::Send((CUser *)param_2,local_50);
      PacketGuard::~PacketGuard(local_50);
    }
    else {
      iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
      if (iVar2 == *(int *)(local_20 + 0x13)) {
        PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 084cb60a to 084cb6ef has its CatchHandler @ 084cb702 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0x41);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,*(int *)(local_20 + 10));
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
        local_1c = strlen((char *)(local_20 + 0x17));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,local_1c);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_2c,(char *)(local_20 + 0x17),local_1c);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(int)*(char *)(local_20 + 0xe));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,(uint)*(byte *)(local_20 + 0x36))
        ;
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_2c,(char *)(local_20 + 0x37),
                   (uint)*(byte *)(local_20 + 0x36));
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
        CUser::Send((CUser *)param_2,local_2c);
        PacketGuard::~PacketGuard(local_2c);
      }
      else {
        uVar1 = *(undefined4 *)(local_20 + 0x13);
        uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_MonitorNoticeOtherChannelChat::dispatch_sig(CUser*, char*, int)"
                   ,0x25ee,
                   "Inter_MonitorNoticeBuddyChat::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                   ,uVar3,uVar1);
      }
    }
  }
  return 0;
}

```

