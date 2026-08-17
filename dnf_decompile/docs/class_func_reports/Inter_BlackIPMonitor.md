# Inter_BlackIPMonitor

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d8650 Inter_BlackIPMonitor::dispatch_sig  [0x084d8650-0x84d879f] ===
 84d8650:	55                   	push   %ebp
 84d8651:	89 e5                	mov    %esp,%ebp
 84d8653:	57                   	push   %edi
 84d8654:	56                   	push   %esi
 84d8655:	53                   	push   %ebx
 84d8656:	83 ec 5c             	sub    $0x5c,%esp
 84d8659:	8b 45 10             	mov    0x10(%ebp),%eax
 84d865c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84d865f:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84d8666:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d8669:	0f b6 80 84 0c 00 00 	movzbl 0xc84(%eax),%eax
 84d8670:	84 c0                	test   %al,%al
 84d8672:	74 0d                	je     84d8681 <_ZN20Inter_BlackIPMonitor12dispatch_sigEP5CUserPci+0x31>
 84d8674:	a1 d8 f7 41 09       	mov    0x941f7d8,%eax
 84d8679:	89 04 24             	mov    %eax,(%esp)
 84d867c:	e8 91 de dc ff       	call   82a6512 <_ZN8WongWork15CBlackIPMonitor5resetEv>
 84d8681:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84d8688:	e9 96 00 00 00       	jmp    84d8723 <_ZN20Inter_BlackIPMonitor12dispatch_sigEP5CUserPci+0xd3>
 84d868d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84d8690:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d8693:	01 d2                	add    %edx,%edx
 84d8695:	83 c2 01             	add    $0x1,%edx
 84d8698:	c1 e2 04             	shl    $0x4,%edx
 84d869b:	01 d0                	add    %edx,%eax
 84d869d:	83 c0 10             	add    $0x10,%eax
 84d86a0:	8b 00                	mov    (%eax),%eax
 84d86a2:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 84d86a5:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84d86a8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d86ab:	01 d2                	add    %edx,%edx
 84d86ad:	83 c2 01             	add    $0x1,%edx
 84d86b0:	c1 e2 04             	shl    $0x4,%edx
 84d86b3:	01 d0                	add    %edx,%eax
 84d86b5:	83 c0 0c             	add    $0xc,%eax
 84d86b8:	8b 38                	mov    (%eax),%edi
 84d86ba:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84d86bd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d86c0:	01 d2                	add    %edx,%edx
 84d86c2:	83 c2 01             	add    $0x1,%edx
 84d86c5:	c1 e2 04             	shl    $0x4,%edx
 84d86c8:	01 d0                	add    %edx,%eax
 84d86ca:	83 c0 08             	add    $0x8,%eax
 84d86cd:	8b 30                	mov    (%eax),%esi
 84d86cf:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84d86d2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d86d5:	01 d2                	add    %edx,%edx
 84d86d7:	83 c2 01             	add    $0x1,%edx
 84d86da:	c1 e2 04             	shl    $0x4,%edx
 84d86dd:	01 d0                	add    %edx,%eax
 84d86df:	83 c0 04             	add    $0x4,%eax
 84d86e2:	8b 00                	mov    (%eax),%eax
 84d86e4:	89 c3                	mov    %eax,%ebx
 84d86e6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d86e9:	c1 e0 05             	shl    $0x5,%eax
 84d86ec:	03 45 e0             	add    -0x20(%ebp),%eax
 84d86ef:	83 c0 04             	add    $0x4,%eax
 84d86f2:	89 04 24             	mov    %eax,(%esp)
 84d86f5:	e8 36 5e ba ff       	call   807e530 <inet_addr@plt>
 84d86fa:	8b 15 d8 f7 41 09    	mov    0x941f7d8,%edx
 84d8700:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 84d8703:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 84d8707:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84d870b:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84d870f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84d8713:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d8717:	89 14 24             	mov    %edx,(%esp)
 84d871a:	e8 35 33 01 00       	call   84eba54 <_ZN8WongWork15CBlackIPMonitor11insertNewIPEjNS_31ENUM_BLACKIPMONITOR_PUNISH_TYPEEjll>
 84d871f:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 84d8723:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d8726:	8b 00                	mov    (%eax),%eax
 84d8728:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 84d872b:	0f 9f c0             	setg   %al
 84d872e:	84 c0                	test   %al,%al
 84d8730:	0f 85 57 ff ff ff    	jne    84d868d <_ZN20Inter_BlackIPMonitor12dispatch_sigEP5CUserPci+0x3d>
 84d8736:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d8739:	8d 50 ff             	lea    -0x1(%eax),%edx
 84d873c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d873f:	01 d2                	add    %edx,%edx
 84d8741:	83 c2 01             	add    $0x1,%edx
 84d8744:	c1 e2 04             	shl    $0x4,%edx
 84d8747:	01 d0                	add    %edx,%eax
 84d8749:	83 c0 0c             	add    $0xc,%eax
 84d874c:	8b 00                	mov    (%eax),%eax
 84d874e:	a3 dc f7 41 09       	mov    %eax,0x941f7dc
 84d8753:	8b 1d dc f7 41 09    	mov    0x941f7dc,%ebx
 84d8759:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d8760:	00 
 84d8761:	c7 44 24 08 5b 3f 00 	movl   $0x3f5b,0x8(%esp)
 84d8768:	00 
 84d8769:	c7 44 24 04 00 c2 c8 	movl   $0x8c8c200,0x4(%esp)
 84d8770:	08 
 84d8771:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84d8774:	89 04 24             	mov    %eax,(%esp)
 84d8777:	e8 9c 6f 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84d877c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84d8780:	c7 44 24 04 14 94 c8 	movl   $0x8c89414,0x4(%esp)
 84d8787:	08 
 84d8788:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84d878b:	89 04 24             	mov    %eax,(%esp)
 84d878e:	e8 f5 6f 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84d8793:	b8 00 00 00 00       	mov    $0x0,%eax
 84d8798:	83 c4 5c             	add    $0x5c,%esp
 84d879b:	5b                   	pop    %ebx
 84d879c:	5e                   	pop    %esi
 84d879d:	5f                   	pop    %edi
 84d879e:	5d                   	pop    %ebp
 84d879f:	c3                   	ret

```

```c
// Inter_BlackIPMonitor::dispatch_sig @ 0x84d8650

/* Inter_BlackIPMonitor::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_BlackIPMonitor::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  in_addr_t iVar5;
  cMyTrace local_34 [16];
  int *local_24;
  int local_20;
  
  local_24 = (int *)param_3;
  local_20 = 0;
  if (*(char *)(param_3 + 0xc84) != '\0') {
    WongWork::CBlackIPMonitor::reset(GlobalData::g_blackIPMonitor);
  }
  for (local_20 = 0; local_20 < *local_24; local_20 = local_20 + 1) {
    iVar4 = local_24[(local_20 * 2 + 1) * 4 + 4];
    iVar1 = local_24[(local_20 * 2 + 1) * 4 + 3];
    iVar2 = local_24[(local_20 * 2 + 1) * 4 + 2];
    iVar3 = local_24[(local_20 * 2 + 1) * 4 + 1];
    iVar5 = inet_addr((char *)(local_24 + local_20 * 8 + 1));
    WongWork::CBlackIPMonitor::insertNewIP
              (GlobalData::g_blackIPMonitor,iVar5,iVar3,iVar2,iVar1,iVar4);
  }
  iVar4 = local_24[((local_20 + -1) * 2 + 1) * 4 + 3];
  GlobalData::g_IPMonitorLastDBAccessTime = iVar4;
  cMyTrace::cMyTrace(local_34,"virtual int Inter_BlackIPMonitor::dispatch_sig(CUser*, char*, int)",
                     0x3f5b,0);
  cMyTrace::operator()(local_34,"IPMonitorPunish LAST LOAD TIME : %d",iVar4);
  return 0;
}

```

