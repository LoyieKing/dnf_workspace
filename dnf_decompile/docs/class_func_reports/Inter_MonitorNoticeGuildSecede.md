# Inter_MonitorNoticeGuildSecede

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084c957e Inter_MonitorNoticeGuildSecede::dispatch_sig  [0x084c957e-0x84c9767] ===
 84c957e:	55                   	push   %ebp
 84c957f:	89 e5                	mov    %esp,%ebp
 84c9581:	56                   	push   %esi
 84c9582:	53                   	push   %ebx
 84c9583:	83 ec 40             	sub    $0x40,%esp
 84c9586:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c9589:	89 04 24             	mov    %eax,(%esp)
 84c958c:	e8 fb 0d c1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84c9591:	85 c0                	test   %eax,%eax
 84c9593:	0f 94 c0             	sete   %al
 84c9596:	84 c0                	test   %al,%al
 84c9598:	74 0a                	je     84c95a4 <_ZN30Inter_MonitorNoticeGuildSecede12dispatch_sigEP5CUserPci+0x26>
 84c959a:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c959f:	e9 ba 01 00 00       	jmp    84c975e <_ZN30Inter_MonitorNoticeGuildSecede12dispatch_sigEP5CUserPci+0x1e0>
 84c95a4:	8b 45 10             	mov    0x10(%ebp),%eax
 84c95a7:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84c95aa:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84c95b1:	ff 
 84c95b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c95b5:	89 04 24             	mov    %eax,(%esp)
 84c95b8:	e8 e3 49 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84c95bd:	89 c2                	mov    %eax,%edx
 84c95bf:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84c95c2:	8b 40 0e             	mov    0xe(%eax),%eax
 84c95c5:	39 c2                	cmp    %eax,%edx
 84c95c7:	0f 95 c0             	setne  %al
 84c95ca:	84 c0                	test   %al,%al
 84c95cc:	74 57                	je     84c9625 <_ZN30Inter_MonitorNoticeGuildSecede12dispatch_sigEP5CUserPci+0xa7>
 84c95ce:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84c95d1:	8b 58 0e             	mov    0xe(%eax),%ebx
 84c95d4:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84c95db:	ff 
 84c95dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c95df:	89 04 24             	mov    %eax,(%esp)
 84c95e2:	e8 b9 49 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84c95e7:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84c95eb:	89 44 24 14          	mov    %eax,0x14(%esp)
 84c95ef:	c7 44 24 10 c4 79 c8 	movl   $0x8c879c4,0x10(%esp)
 84c95f6:	08 
 84c95f7:	c7 44 24 0c 48 23 00 	movl   $0x2348,0xc(%esp)
 84c95fe:	00 
 84c95ff:	c7 44 24 08 80 db c8 	movl   $0x8c8db80,0x8(%esp)
 84c9606:	08 
 84c9607:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84c960e:	08 
 84c960f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84c9616:	e8 ef a5 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84c961b:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c9620:	e9 39 01 00 00       	jmp    84c975e <_ZN30Inter_MonitorNoticeGuildSecede12dispatch_sigEP5CUserPci+0x1e0>
 84c9625:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84c9628:	89 04 24             	mov    %eax,(%esp)
 84c962b:	e8 1c 47 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84c9630:	c7 44 24 08 3b 00 00 	movl   $0x3b,0x8(%esp)
 84c9637:	00 
 84c9638:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c963f:	00 
 84c9640:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84c9643:	89 04 24             	mov    %eax,(%esp)
 84c9646:	e8 b1 22 c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84c964b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84c964e:	8b 40 12             	mov    0x12(%eax),%eax
 84c9651:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c9655:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84c9658:	89 04 24             	mov    %eax,(%esp)
 84c965b:	e8 dc 22 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84c9660:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84c9663:	8b 40 1a             	mov    0x1a(%eax),%eax
 84c9666:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c966a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84c966d:	89 04 24             	mov    %eax,(%esp)
 84c9670:	e8 c7 22 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84c9675:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84c9678:	0f b7 40 1e          	movzwl 0x1e(%eax),%eax
 84c967c:	0f b7 c0             	movzwl %ax,%eax
 84c967f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c9683:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84c9686:	89 04 24             	mov    %eax,(%esp)
 84c9689:	e8 92 22 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c968e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84c9691:	83 c0 20             	add    $0x20,%eax
 84c9694:	89 04 24             	mov    %eax,(%esp)
 84c9697:	e8 14 4d bb ff       	call   807e3b0 <strlen@plt>
 84c969c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84c969f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c96a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c96a6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84c96a9:	89 04 24             	mov    %eax,(%esp)
 84c96ac:	e8 8b 22 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84c96b1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84c96b4:	8d 50 20             	lea    0x20(%eax),%edx
 84c96b7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c96ba:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c96be:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c96c2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84c96c5:	89 04 24             	mov    %eax,(%esp)
 84c96c8:	e8 17 dd ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84c96cd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84c96d0:	83 c0 37             	add    $0x37,%eax
 84c96d3:	89 04 24             	mov    %eax,(%esp)
 84c96d6:	e8 d5 4c bb ff       	call   807e3b0 <strlen@plt>
 84c96db:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84c96de:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c96e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c96e5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84c96e8:	89 04 24             	mov    %eax,(%esp)
 84c96eb:	e8 4c 22 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84c96f0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84c96f3:	8d 50 37             	lea    0x37(%eax),%edx
 84c96f6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c96f9:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c96fd:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c9701:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84c9704:	89 04 24             	mov    %eax,(%esp)
 84c9707:	e8 d8 dc ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84c970c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c9713:	00 
 84c9714:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84c9717:	89 04 24             	mov    %eax,(%esp)
 84c971a:	e8 39 22 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84c971f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84c9722:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c9726:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c9729:	89 04 24             	mov    %eax,(%esp)
 84c972c:	e8 89 ee 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c9731:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c9736:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84c9739:	89 04 24             	mov    %eax,(%esp)
 84c973c:	e8 3f 47 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84c9741:	eb 1b                	jmp    84c975e <_ZN30Inter_MonitorNoticeGuildSecede12dispatch_sigEP5CUserPci+0x1e0>
 84c9743:	89 d3                	mov    %edx,%ebx
 84c9745:	89 c6                	mov    %eax,%esi
 84c9747:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84c974a:	89 04 24             	mov    %eax,(%esp)
 84c974d:	e8 2e 47 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84c9752:	89 f0                	mov    %esi,%eax
 84c9754:	89 da                	mov    %ebx,%edx
 84c9756:	89 04 24             	mov    %eax,(%esp)
 84c9759:	e8 f2 9f 61 00       	call   8ae3750 <_Unwind_Resume>
 84c975e:	89 d8                	mov    %ebx,%eax
 84c9760:	83 c4 40             	add    $0x40,%esp
 84c9763:	5b                   	pop    %ebx
 84c9764:	5e                   	pop    %esi
 84c9765:	5d                   	pop    %ebp
 84c9766:	c3                   	ret
 84c9767:	90                   	nop

```

```c
// Inter_MonitorNoticeGuildSecede::dispatch_sig @ 0x84c957e

/* Inter_MonitorNoticeGuildSecede::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorNoticeGuildSecede::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_24 [12];
  int local_18;
  size_t local_14;
  size_t local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_18 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_18 + 0xe)) {
      PacketGuard::PacketGuard(local_24);
                    /* try { // try from 084c9646 to 084c9730 has its CatchHandler @ 084c9743 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x3b);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,*(int *)(local_18 + 0x12));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,*(int *)(local_18 + 0x1a));
      InterfacePacketBuf::put_byte
                ((InterfacePacketBuf *)local_24,(uint)*(ushort *)(local_18 + 0x1e));
      local_14 = strlen((char *)(local_18 + 0x20));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_14);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_24,(char *)(local_18 + 0x20),local_14)
      ;
      local_10 = strlen((char *)(local_18 + 0x37));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_24,(char *)(local_18 + 0x37),local_10)
      ;
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
      CUser::Send((CUser *)param_2,local_24);
      PacketGuard::~PacketGuard(local_24);
    }
    else {
      uVar1 = *(undefined4 *)(local_18 + 0xe);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeGuildSecede::dispatch_sig(CUser*, char*, int)",
                 0x2348,
                 "Inter_MonitorNoticeGuildSecede::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}

```

