# Inter_ReportMannerless

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d24a2 Inter_ReportMannerless::dispatch_sig  [0x084d24a2-0x84d271d] ===
 84d24a2:	55                   	push   %ebp
 84d24a3:	89 e5                	mov    %esp,%ebp
 84d24a5:	56                   	push   %esi
 84d24a6:	53                   	push   %ebx
 84d24a7:	83 ec 30             	sub    $0x30,%esp
 84d24aa:	8b 45 10             	mov    0x10(%ebp),%eax
 84d24ad:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d24b0:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 84d24b4:	75 0a                	jne    84d24c0 <_ZN22Inter_ReportMannerless12dispatch_sigEP5CUserPci+0x1e>
 84d24b6:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d24bb:	e9 55 02 00 00       	jmp    84d2715 <_ZN22Inter_ReportMannerless12dispatch_sigEP5CUserPci+0x273>
 84d24c0:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84d24c7:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84d24cb:	74 24                	je     84d24f1 <_ZN22Inter_ReportMannerless12dispatch_sigEP5CUserPci+0x4f>
 84d24cd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d24d0:	8b 70 0e             	mov    0xe(%eax),%esi
 84d24d3:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84d24da:	ff 
 84d24db:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d24de:	89 04 24             	mov    %eax,(%esp)
 84d24e1:	e8 ba ba 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84d24e6:	39 c6                	cmp    %eax,%esi
 84d24e8:	74 07                	je     84d24f1 <_ZN22Inter_ReportMannerless12dispatch_sigEP5CUserPci+0x4f>
 84d24ea:	b8 01 00 00 00       	mov    $0x1,%eax
 84d24ef:	eb 05                	jmp    84d24f6 <_ZN22Inter_ReportMannerless12dispatch_sigEP5CUserPci+0x54>
 84d24f1:	b8 00 00 00 00       	mov    $0x0,%eax
 84d24f6:	84 c0                	test   %al,%al
 84d24f8:	74 1c                	je     84d2516 <_ZN22Inter_ReportMannerless12dispatch_sigEP5CUserPci+0x74>
 84d24fa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d24fd:	8b 70 1e             	mov    0x1e(%eax),%esi
 84d2500:	e8 89 9c bf ff       	call   80cc18e <_Z14G_CGameManagerv>
 84d2505:	89 74 24 04          	mov    %esi,0x4(%esp)
 84d2509:	89 04 24             	mov    %eax,(%esp)
 84d250c:	e8 b5 23 dc ff       	call   82948c6 <_ZN12CGameManager14GetUserByAccIdEj>
 84d2511:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d2514:	eb 06                	jmp    84d251c <_ZN22Inter_ReportMannerless12dispatch_sigEP5CUserPci+0x7a>
 84d2516:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d2519:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d251c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d251f:	0f b6 80 5e 01 00 00 	movzbl 0x15e(%eax),%eax
 84d2526:	3c 6f                	cmp    $0x6f,%al
 84d2528:	75 35                	jne    84d255f <_ZN22Inter_ReportMannerless12dispatch_sigEP5CUserPci+0xbd>
 84d252a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84d252e:	75 0a                	jne    84d253a <_ZN22Inter_ReportMannerless12dispatch_sigEP5CUserPci+0x98>
 84d2530:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d2535:	e9 db 01 00 00       	jmp    84d2715 <_ZN22Inter_ReportMannerless12dispatch_sigEP5CUserPci+0x273>
 84d253a:	c7 44 24 08 62 00 00 	movl   $0x62,0x8(%esp)
 84d2541:	00 
 84d2542:	c7 44 24 04 8c 00 00 	movl   $0x8c,0x4(%esp)
 84d2549:	00 
 84d254a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d254d:	89 04 24             	mov    %eax,(%esp)
 84d2550:	e8 ed 99 1a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84d2555:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d255a:	e9 b6 01 00 00       	jmp    84d2715 <_ZN22Inter_ReportMannerless12dispatch_sigEP5CUserPci+0x273>
 84d255f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d2562:	0f b6 80 5e 01 00 00 	movzbl 0x15e(%eax),%eax
 84d2569:	3c 63                	cmp    $0x63,%al
 84d256b:	75 35                	jne    84d25a2 <_ZN22Inter_ReportMannerless12dispatch_sigEP5CUserPci+0x100>
 84d256d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84d2571:	75 0a                	jne    84d257d <_ZN22Inter_ReportMannerless12dispatch_sigEP5CUserPci+0xdb>
 84d2573:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d2578:	e9 98 01 00 00       	jmp    84d2715 <_ZN22Inter_ReportMannerless12dispatch_sigEP5CUserPci+0x273>
 84d257d:	c7 44 24 08 5f 00 00 	movl   $0x5f,0x8(%esp)
 84d2584:	00 
 84d2585:	c7 44 24 04 8c 00 00 	movl   $0x8c,0x4(%esp)
 84d258c:	00 
 84d258d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d2590:	89 04 24             	mov    %eax,(%esp)
 84d2593:	e8 aa 99 1a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84d2598:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d259d:	e9 73 01 00 00       	jmp    84d2715 <_ZN22Inter_ReportMannerless12dispatch_sigEP5CUserPci+0x273>
 84d25a2:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84d25a7:	c7 44 24 08 6d 32 00 	movl   $0x326d,0x8(%esp)
 84d25ae:	00 
 84d25af:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84d25b6:	08 
 84d25b7:	89 04 24             	mov    %eax,(%esp)
 84d25ba:	e8 c7 d4 db ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84d25bf:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84d25c6:	00 
 84d25c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d25cb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d25ce:	89 04 24             	mov    %eax,(%esp)
 84d25d1:	e8 50 66 bf ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84d25d6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d25d9:	89 04 24             	mov    %eax,(%esp)
 84d25dc:	e8 65 66 bf ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84d25e1:	c7 44 24 04 ca 00 00 	movl   $0xca,0x4(%esp)
 84d25e8:	00 
 84d25e9:	89 04 24             	mov    %eax,(%esp)
 84d25ec:	e8 65 66 bf ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84d25f1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d25f4:	89 04 24             	mov    %eax,(%esp)
 84d25f7:	e8 4a 66 bf ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84d25fc:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84d2603:	ff 
 84d2604:	89 04 24             	mov    %eax,(%esp)
 84d2607:	e8 4a 66 bf ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84d260c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d260f:	89 04 24             	mov    %eax,(%esp)
 84d2612:	e8 37 66 bf ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84d2617:	c7 44 24 08 5f 01 00 	movl   $0x15f,0x8(%esp)
 84d261e:	00 
 84d261f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84d2622:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d2626:	89 04 24             	mov    %eax,(%esp)
 84d2629:	e8 24 c0 c0 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84d262e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84d2633:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84d2636:	89 54 24 08          	mov    %edx,0x8(%esp)
 84d263a:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84d2641:	00 
 84d2642:	89 04 24             	mov    %eax,(%esp)
 84d2645:	e8 94 e9 09 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84d264a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84d264e:	75 0f                	jne    84d265f <_ZN22Inter_ReportMannerless12dispatch_sigEP5CUserPci+0x1bd>
 84d2650:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d2655:	be 00 00 00 00       	mov    $0x0,%esi
 84d265a:	e9 a2 00 00 00       	jmp    84d2701 <_ZN22Inter_ReportMannerless12dispatch_sigEP5CUserPci+0x25f>
 84d265f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84d2662:	89 04 24             	mov    %eax,(%esp)
 84d2665:	e8 e2 b6 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d266a:	c7 44 24 08 8c 00 00 	movl   $0x8c,0x8(%esp)
 84d2671:	00 
 84d2672:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d2679:	00 
 84d267a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84d267d:	89 04 24             	mov    %eax,(%esp)
 84d2680:	e8 77 92 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d2685:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d268c:	00 
 84d268d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84d2690:	89 04 24             	mov    %eax,(%esp)
 84d2693:	e8 88 92 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d2698:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d269f:	00 
 84d26a0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84d26a3:	89 04 24             	mov    %eax,(%esp)
 84d26a6:	e8 ad 92 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d26ab:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84d26ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d26b2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d26b5:	89 04 24             	mov    %eax,(%esp)
 84d26b8:	e8 fd 5e 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d26bd:	eb 15                	jmp    84d26d4 <_ZN22Inter_ReportMannerless12dispatch_sigEP5CUserPci+0x232>
 84d26bf:	89 d3                	mov    %edx,%ebx
 84d26c1:	89 c6                	mov    %eax,%esi
 84d26c3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84d26c6:	89 04 24             	mov    %eax,(%esp)
 84d26c9:	e8 b2 b7 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d26ce:	89 f0                	mov    %esi,%eax
 84d26d0:	89 da                	mov    %ebx,%edx
 84d26d2:	eb 12                	jmp    84d26e6 <_ZN22Inter_ReportMannerless12dispatch_sigEP5CUserPci+0x244>
 84d26d4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84d26d7:	89 04 24             	mov    %eax,(%esp)
 84d26da:	e8 a1 b7 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d26df:	be 01 00 00 00       	mov    $0x1,%esi
 84d26e4:	eb 1b                	jmp    84d2701 <_ZN22Inter_ReportMannerless12dispatch_sigEP5CUserPci+0x25f>
 84d26e6:	89 d3                	mov    %edx,%ebx
 84d26e8:	89 c6                	mov    %eax,%esi
 84d26ea:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d26ed:	89 04 24             	mov    %eax,(%esp)
 84d26f0:	e8 dd a1 14 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84d26f5:	89 f0                	mov    %esi,%eax
 84d26f7:	89 da                	mov    %ebx,%edx
 84d26f9:	89 04 24             	mov    %eax,(%esp)
 84d26fc:	e8 4f 10 61 00       	call   8ae3750 <_Unwind_Resume>
 84d2701:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d2704:	89 04 24             	mov    %eax,(%esp)
 84d2707:	e8 c6 a1 14 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84d270c:	85 f6                	test   %esi,%esi
 84d270e:	74 05                	je     84d2715 <_ZN22Inter_ReportMannerless12dispatch_sigEP5CUserPci+0x273>
 84d2710:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d2715:	89 d8                	mov    %ebx,%eax
 84d2717:	83 c4 30             	add    $0x30,%esp
 84d271a:	5b                   	pop    %ebx
 84d271b:	5e                   	pop    %esi
 84d271c:	5d                   	pop    %ebp
 84d271d:	c3                   	ret

```

```c
// Inter_ReportMannerless::dispatch_sig @ 0x84d24a2

/* Inter_ReportMannerless::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReportMannerless::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  CGameManager *this;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  undefined4 unaff_EBX;
  bool bVar6;
  PacketGuard local_28 [12];
  CStreamGuard local_1c [8];
  void *local_14;
  CUser *local_10;
  
  local_14 = (void *)param_3;
  if (param_3 != 0) {
    local_10 = (CUser *)0x0;
    if ((param_2 == (char *)0x0) ||
       (iVar1 = *(int *)(param_3 + 0xe), iVar3 = CUser::get_charac_no((CUser *)param_2,-1),
       iVar1 == iVar3)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      uVar2 = *(uint *)((int)local_14 + 0x1e);
      this = (CGameManager *)G_CGameManager();
      local_10 = (CUser *)CGameManager::GetUserByAccId(this,uVar2);
    }
    else {
      local_10 = (CUser *)param_2;
    }
    if (*(char *)((int)local_14 + 0x15e) == 'o') {
      if (local_10 == (CUser *)0x0) {
        unaff_EBX = 0;
      }
      else {
        CUser::SendCmdErrorPacket(local_10,0x8c,0x62);
        unaff_EBX = 0;
      }
    }
    else if (*(char *)((int)local_14 + 0x15e) == 'c') {
      if (local_10 == (CUser *)0x0) {
        unaff_EBX = 0;
      }
      else {
        CUser::SendCmdErrorPacket(local_10,0x8c,0x5f);
        unaff_EBX = 0;
      }
    }
    else {
      pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0x326d)
      ;
      CStreamGuard::CStreamGuard(local_1c,pSVar4,true);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 084d25ec to 084d2669 has its CatchHandler @ 084d26e6 */
      CStreamGuard::operator<<(pCVar5,0xca);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
      CStreamGuard::operator<<(pCVar5,-1);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
      CStreamGuard::put_binary(pCVar5,local_14,0x15f);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_1c);
      bVar6 = local_10 != (CUser *)0x0;
      if (bVar6) {
        PacketGuard::PacketGuard(local_28);
                    /* try { // try from 084d2680 to 084d26bc has its CatchHandler @ 084d26bf */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x8c);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
        CUser::Send(local_10,local_28);
                    /* try { // try from 084d26da to 084d26de has its CatchHandler @ 084d26e6 */
        PacketGuard::~PacketGuard(local_28);
      }
      else {
        unaff_EBX = 0;
      }
      CStreamGuard::~CStreamGuard(local_1c);
      if (bVar6) {
        unaff_EBX = 0;
      }
    }
    return unaff_EBX;
  }
  return 0;
}

```

