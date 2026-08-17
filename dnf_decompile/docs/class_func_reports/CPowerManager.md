# CPowerManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 25

---

## CPowerManager

```asm
// === 0847e998 CPowerManager::CPowerManager  [0x0847e998-0x847eabb] ===
 847e998:	55                   	push   %ebp
 847e999:	89 e5                	mov    %esp,%ebp
 847e99b:	56                   	push   %esi
 847e99c:	53                   	push   %ebx
 847e99d:	83 ec 10             	sub    $0x10,%esp
 847e9a0:	8b 45 08             	mov    0x8(%ebp),%eax
 847e9a3:	c6 00 00             	movb   $0x0,(%eax)
 847e9a6:	8b 45 08             	mov    0x8(%ebp),%eax
 847e9a9:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 847e9b0:	8b 45 08             	mov    0x8(%ebp),%eax
 847e9b3:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 847e9ba:	8b 45 08             	mov    0x8(%ebp),%eax
 847e9bd:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 847e9c4:	8b 45 08             	mov    0x8(%ebp),%eax
 847e9c7:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 847e9ce:	8b 45 08             	mov    0x8(%ebp),%eax
 847e9d1:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 847e9d8:	8b 45 08             	mov    0x8(%ebp),%eax
 847e9db:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 847e9e2:	8b 45 08             	mov    0x8(%ebp),%eax
 847e9e5:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 847e9ec:	8b 45 08             	mov    0x8(%ebp),%eax
 847e9ef:	83 c0 28             	add    $0x28,%eax
 847e9f2:	89 c3                	mov    %eax,%ebx
 847e9f4:	be 02 00 00 00       	mov    $0x2,%esi
 847e9f9:	eb 11                	jmp    847ea0c <_ZN13CPowerManagerC1Ev+0x74>
 847e9fb:	89 1c 24             	mov    %ebx,(%esp)
 847e9fe:	e8 9b 25 00 00       	call   8480f9e <_ZN26STPowerWarStatueRankerInfoC1Ev>
 847ea03:	81 c3 84 00 00 00    	add    $0x84,%ebx
 847ea09:	83 ee 01             	sub    $0x1,%esi
 847ea0c:	83 fe ff             	cmp    $0xffffffff,%esi
 847ea0f:	0f 95 c0             	setne  %al
 847ea12:	84 c0                	test   %al,%al
 847ea14:	75 e5                	jne    847e9fb <_ZN13CPowerManagerC1Ev+0x63>
 847ea16:	8b 45 08             	mov    0x8(%ebp),%eax
 847ea19:	05 b4 01 00 00       	add    $0x1b4,%eax
 847ea1e:	89 04 24             	mov    %eax,(%esp)
 847ea21:	e8 f8 17 00 00       	call   848021e <_ZN12CPowerWarLogC1Ev>
 847ea26:	8b 45 08             	mov    0x8(%ebp),%eax
 847ea29:	05 f0 01 00 00       	add    $0x1f0,%eax
 847ea2e:	89 04 24             	mov    %eax,(%esp)
 847ea31:	e8 24 1e 00 00       	call   848085a <_ZN18CPowerWarPacketLogC1Ev>
 847ea36:	8b 45 08             	mov    0x8(%ebp),%eax
 847ea39:	83 c0 24             	add    $0x24,%eax
 847ea3c:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 847ea43:	00 
 847ea44:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 847ea4b:	00 
 847ea4c:	89 04 24             	mov    %eax,(%esp)
 847ea4f:	e8 6c f2 bf ff       	call   807dcc0 <memset@plt>
 847ea54:	8b 45 08             	mov    0x8(%ebp),%eax
 847ea57:	83 c0 28             	add    $0x28,%eax
 847ea5a:	c7 44 24 08 8c 01 00 	movl   $0x18c,0x8(%esp)
 847ea61:	00 
 847ea62:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 847ea69:	00 
 847ea6a:	89 04 24             	mov    %eax,(%esp)
 847ea6d:	e8 4e f2 bf ff       	call   807dcc0 <memset@plt>
 847ea72:	8b 45 08             	mov    0x8(%ebp),%eax
 847ea75:	05 b4 01 00 00       	add    $0x1b4,%eax
 847ea7a:	89 04 24             	mov    %eax,(%esp)
 847ea7d:	e8 b0 17 00 00       	call   8480232 <_ZN12CPowerWarLog5ResetEv>
 847ea82:	8b 45 08             	mov    0x8(%ebp),%eax
 847ea85:	05 f0 01 00 00       	add    $0x1f0,%eax
 847ea8a:	89 04 24             	mov    %eax,(%esp)
 847ea8d:	e8 4c 1e 00 00       	call   84808de <_ZN18CPowerWarPacketLog5ResetEv>
 847ea92:	eb 20                	jmp    847eab4 <_ZN13CPowerManagerC1Ev+0x11c>
 847ea94:	89 d3                	mov    %edx,%ebx
 847ea96:	89 c6                	mov    %eax,%esi
 847ea98:	8b 45 08             	mov    0x8(%ebp),%eax
 847ea9b:	05 f0 01 00 00       	add    $0x1f0,%eax
 847eaa0:	89 04 24             	mov    %eax,(%esp)
 847eaa3:	e8 f4 1d 00 00       	call   848089c <_ZN18CPowerWarPacketLogD1Ev>
 847eaa8:	89 f0                	mov    %esi,%eax
 847eaaa:	89 da                	mov    %ebx,%edx
 847eaac:	89 04 24             	mov    %eax,(%esp)
 847eaaf:	e8 9c 4c 66 00       	call   8ae3750 <_Unwind_Resume>
 847eab4:	83 c4 10             	add    $0x10,%esp
 847eab7:	5b                   	pop    %ebx
 847eab8:	5e                   	pop    %esi
 847eab9:	5d                   	pop    %ebp
 847eaba:	c3                   	ret
 847eabb:	90                   	nop

```

```c
// CPowerManager::CPowerManager @ 0x847e998

/* CPowerManager::CPowerManager() */

void __thiscall CPowerManager::CPowerManager(CPowerManager *this)

{
  STPowerWarStatueRankerInfo *this_00;
  int iVar1;
  
  *this = (CPowerManager)0x0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  this_00 = (STPowerWarStatueRankerInfo *)(this + 0x28);
  for (iVar1 = 2; iVar1 != -1; iVar1 = iVar1 + -1) {
    STPowerWarStatueRankerInfo::STPowerWarStatueRankerInfo(this_00);
    this_00 = this_00 + 0x84;
  }
  CPowerWarLog::CPowerWarLog((CPowerWarLog *)(this + 0x1b4));
  CPowerWarPacketLog::CPowerWarPacketLog((CPowerWarPacketLog *)(this + 0x1f0));
  memset(this + 0x24,0,4);
  memset(this + 0x28,0,0x18c);
  CPowerWarLog::Reset((CPowerWarLog *)(this + 0x1b4));
                    /* try { // try from 0847ea8d to 0847ea91 has its CatchHandler @ 0847ea94 */
  CPowerWarPacketLog::Reset((CPowerWarPacketLog *)(this + 0x1f0));
  return;
}

```

---

## CheckCompleteDBLoadStatueInfo

```asm
// === 0847f1b0 CPowerManager::CheckCompleteDBLoadStatueInfo  [0x0847f1b0-0x847f1ff] ===
 847f1b0:	55                   	push   %ebp
 847f1b1:	89 e5                	mov    %esp,%ebp
 847f1b3:	83 ec 10             	sub    $0x10,%esp
 847f1b6:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 847f1bd:	eb 2c                	jmp    847f1eb <_ZN13CPowerManager29CheckCompleteDBLoadStatueInfoEv+0x3b>
 847f1bf:	8b 45 fc             	mov    -0x4(%ebp),%eax
 847f1c2:	8b 55 08             	mov    0x8(%ebp),%edx
 847f1c5:	c1 e0 02             	shl    $0x2,%eax
 847f1c8:	89 c1                	mov    %eax,%ecx
 847f1ca:	c1 e1 05             	shl    $0x5,%ecx
 847f1cd:	01 c8                	add    %ecx,%eax
 847f1cf:	8d 04 02             	lea    (%edx,%eax,1),%eax
 847f1d2:	83 c0 20             	add    $0x20,%eax
 847f1d5:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 847f1d9:	83 f0 01             	xor    $0x1,%eax
 847f1dc:	84 c0                	test   %al,%al
 847f1de:	74 07                	je     847f1e7 <_ZN13CPowerManager29CheckCompleteDBLoadStatueInfoEv+0x37>
 847f1e0:	b8 00 00 00 00       	mov    $0x0,%eax
 847f1e5:	eb 16                	jmp    847f1fd <_ZN13CPowerManager29CheckCompleteDBLoadStatueInfoEv+0x4d>
 847f1e7:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 847f1eb:	8b 45 fc             	mov    -0x4(%ebp),%eax
 847f1ee:	83 f8 02             	cmp    $0x2,%eax
 847f1f1:	0f 96 c0             	setbe  %al
 847f1f4:	84 c0                	test   %al,%al
 847f1f6:	75 c7                	jne    847f1bf <_ZN13CPowerManager29CheckCompleteDBLoadStatueInfoEv+0xf>
 847f1f8:	b8 01 00 00 00       	mov    $0x1,%eax
 847f1fd:	c9                   	leave
 847f1fe:	c3                   	ret
 847f1ff:	90                   	nop

```

```c
// CPowerManager::CheckCompleteDBLoadStatueInfo @ 0x847f1b0

/* CPowerManager::CheckCompleteDBLoadStatueInfo() */

undefined4 __thiscall CPowerManager::CheckCompleteDBLoadStatueInfo(CPowerManager *this)

{
  uint local_8;
  
  local_8 = 0;
  while( true ) {
    if (2 < local_8) {
      return 1;
    }
    if (this[local_8 * 0x84 + 0x28] != (CPowerManager)0x1) break;
    local_8 = local_8 + 1;
  }
  return 0;
}

```

---

## CheckPowerWarEnterLimit

```asm
// === 0847fa7c CPowerManager::CheckPowerWarEnterLimit  [0x0847fa7c-0x847fb01] ===
 847fa7c:	55                   	push   %ebp
 847fa7d:	89 e5                	mov    %esp,%ebp
 847fa7f:	83 ec 28             	sub    $0x28,%esp
 847fa82:	e8 14 c7 c4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 847fa87:	8b 80 8c a6 00 00    	mov    0xa68c(%eax),%eax
 847fa8d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 847fa90:	e8 06 c7 c4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 847fa95:	8b 80 90 a6 00 00    	mov    0xa690(%eax),%eax
 847fa9b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 847fa9e:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 847faa2:	75 07                	jne    847faab <_ZN13CPowerManager23CheckPowerWarEnterLimitEP5CUser+0x2f>
 847faa4:	c7 45 f0 1e 00 00 00 	movl   $0x1e,-0x10(%ebp)
 847faab:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 847faaf:	75 07                	jne    847fab8 <_ZN13CPowerManager23CheckPowerWarEnterLimitEP5CUser+0x3c>
 847fab1:	c7 45 f4 0f 00 00 00 	movl   $0xf,-0xc(%ebp)
 847fab8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 847fabb:	89 44 24 08          	mov    %eax,0x8(%esp)
 847fabf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 847fac2:	89 44 24 04          	mov    %eax,0x4(%esp)
 847fac6:	8b 45 0c             	mov    0xc(%ebp),%eax
 847fac9:	89 04 24             	mov    %eax,(%esp)
 847facc:	e8 6d 01 1d 00       	call   864fc3e <_ZN5CUser19CheckLimitMiniumAgeEiRi>
 847fad1:	83 f0 01             	xor    $0x1,%eax
 847fad4:	84 c0                	test   %al,%al
 847fad6:	74 07                	je     847fadf <_ZN13CPowerManager23CheckPowerWarEnterLimitEP5CUser+0x63>
 847fad8:	b8 5f 00 00 00       	mov    $0x5f,%eax
 847fadd:	eb 21                	jmp    847fb00 <_ZN13CPowerManager23CheckPowerWarEnterLimitEP5CUser+0x84>
 847fadf:	8b 45 0c             	mov    0xc(%ebp),%eax
 847fae2:	89 04 24             	mov    %eax,(%esp)
 847fae5:	e8 ce a7 c5 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 847faea:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 847faed:	0f 9c c0             	setl   %al
 847faf0:	84 c0                	test   %al,%al
 847faf2:	74 07                	je     847fafb <_ZN13CPowerManager23CheckPowerWarEnterLimitEP5CUser+0x7f>
 847faf4:	b8 0e 00 00 00       	mov    $0xe,%eax
 847faf9:	eb 05                	jmp    847fb00 <_ZN13CPowerManager23CheckPowerWarEnterLimitEP5CUser+0x84>
 847fafb:	b8 00 00 00 00       	mov    $0x0,%eax
 847fb00:	c9                   	leave
 847fb01:	c3                   	ret

```

```c
// CPowerManager::CheckPowerWarEnterLimit @ 0x847fa7c

/* CPowerManager::CheckPowerWarEnterLimit(CUser*) */

undefined4 __thiscall CPowerManager::CheckPowerWarEnterLimit(CPowerManager *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_18;
  int local_14;
  int local_10;
  
  iVar2 = G_CDataManager();
  local_14 = *(int *)(iVar2 + 0xa68c);
  iVar2 = G_CDataManager();
  local_10 = *(int *)(iVar2 + 0xa690);
  if (local_14 == 0) {
    local_14 = 0x1e;
  }
  if (local_10 == 0) {
    local_10 = 0xf;
  }
  cVar1 = CUser::CheckLimitMiniumAge(param_1,local_10,&local_18);
  if (cVar1 == '\x01') {
    iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    if (iVar2 < local_14) {
      uVar3 = 0xe;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0x5f;
  }
  return uVar3;
}

```

---

## ClearMVPInfo

```asm
// === 0847f5de CPowerManager::ClearMVPInfo  [0x0847f5de-0x847f8dd] ===
 847f5de:	55                   	push   %ebp
 847f5df:	89 e5                	mov    %esp,%ebp
 847f5e1:	56                   	push   %esi
 847f5e2:	53                   	push   %ebx
 847f5e3:	83 ec 60             	sub    $0x60,%esp
 847f5e6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 847f5ed:	00 
 847f5ee:	c7 44 24 08 43 01 00 	movl   $0x143,0x8(%esp)
 847f5f5:	00 
 847f5f6:	c7 44 24 04 40 2f c7 	movl   $0x8c72f40,0x4(%esp)
 847f5fd:	08 
 847f5fe:	8d 45 c8             	lea    -0x38(%ebp),%eax
 847f601:	89 04 24             	mov    %eax,(%esp)
 847f604:	e8 0f 01 0d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 847f609:	c7 44 24 04 f0 1d c7 	movl   $0x8c71df0,0x4(%esp)
 847f610:	08 
 847f611:	8d 45 c8             	lea    -0x38(%ebp),%eax
 847f614:	89 04 24             	mov    %eax,(%esp)
 847f617:	e8 6c 01 0d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 847f61c:	8b 45 08             	mov    0x8(%ebp),%eax
 847f61f:	83 c0 28             	add    $0x28,%eax
 847f622:	c7 44 24 08 8c 01 00 	movl   $0x18c,0x8(%esp)
 847f629:	00 
 847f62a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 847f631:	00 
 847f632:	89 04 24             	mov    %eax,(%esp)
 847f635:	e8 86 e6 bf ff       	call   807dcc0 <memset@plt>
 847f63a:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847f63f:	c7 44 24 08 49 01 00 	movl   $0x149,0x8(%esp)
 847f646:	00 
 847f647:	c7 44 24 04 23 1d c7 	movl   $0x8c71d23,0x4(%esp)
 847f64e:	08 
 847f64f:	89 04 24             	mov    %eax,(%esp)
 847f652:	e8 2f 04 e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847f657:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847f65e:	00 
 847f65f:	89 44 24 04          	mov    %eax,0x4(%esp)
 847f663:	8d 45 c0             	lea    -0x40(%ebp),%eax
 847f666:	89 04 24             	mov    %eax,(%esp)
 847f669:	e8 b8 95 c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847f66e:	8d 45 c0             	lea    -0x40(%ebp),%eax
 847f671:	89 04 24             	mov    %eax,(%esp)
 847f674:	e8 cd 95 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847f679:	c7 44 24 04 a5 01 00 	movl   $0x1a5,0x4(%esp)
 847f680:	00 
 847f681:	89 04 24             	mov    %eax,(%esp)
 847f684:	e8 cd 95 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847f689:	8d 45 c0             	lea    -0x40(%ebp),%eax
 847f68c:	89 04 24             	mov    %eax,(%esp)
 847f68f:	e8 b2 95 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847f694:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 847f69b:	ff 
 847f69c:	89 04 24             	mov    %eax,(%esp)
 847f69f:	e8 b2 95 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847f6a4:	e8 d8 ca c4 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 847f6a9:	8b 98 78 03 00 00    	mov    0x378(%eax),%ebx
 847f6af:	8d 45 c0             	lea    -0x40(%ebp),%eax
 847f6b2:	89 04 24             	mov    %eax,(%esp)
 847f6b5:	e8 8c 95 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847f6ba:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847f6be:	89 04 24             	mov    %eax,(%esp)
 847f6c1:	e8 90 95 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847f6c6:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847f6cb:	8d 55 c0             	lea    -0x40(%ebp),%edx
 847f6ce:	89 54 24 08          	mov    %edx,0x8(%esp)
 847f6d2:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 847f6d9:	00 
 847f6da:	89 04 24             	mov    %eax,(%esp)
 847f6dd:	e8 fc 18 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847f6e2:	e8 9a ca c4 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 847f6e7:	8b 98 78 03 00 00    	mov    0x378(%eax),%ebx
 847f6ed:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 847f6f4:	00 
 847f6f5:	c7 44 24 08 52 01 00 	movl   $0x152,0x8(%esp)
 847f6fc:	00 
 847f6fd:	c7 44 24 04 40 2f c7 	movl   $0x8c72f40,0x4(%esp)
 847f704:	08 
 847f705:	8d 45 d8             	lea    -0x28(%ebp),%eax
 847f708:	89 04 24             	mov    %eax,(%esp)
 847f70b:	e8 08 00 0d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 847f710:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847f714:	c7 44 24 04 00 1e c7 	movl   $0x8c71e00,0x4(%esp)
 847f71b:	08 
 847f71c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 847f71f:	89 04 24             	mov    %eax,(%esp)
 847f722:	e8 61 00 0d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 847f727:	e8 62 ca c4 ff       	call   80cc18e <_Z14G_CGameManagerv>
 847f72c:	89 04 24             	mov    %eax,(%esp)
 847f72f:	e8 b8 97 e1 ff       	call   8298eec <_ZN12CGameManager29GetSharedServerMessageManagerEv>
 847f734:	89 45 e8             	mov    %eax,-0x18(%ebp)
 847f737:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 847f73b:	0f 84 8b 01 00 00    	je     847f8cc <_ZN13CPowerManager12ClearMVPInfoEv+0x2ee>
 847f741:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847f748:	00 
 847f749:	8b 45 e8             	mov    -0x18(%ebp),%eax
 847f74c:	89 04 24             	mov    %eax,(%esp)
 847f74f:	e8 b8 15 18 00       	call   8600d0c <_ZN27CSharedServerMessageManager21DeleteSpecificMessageEi>
 847f754:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 847f75b:	00 
 847f75c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 847f75f:	89 04 24             	mov    %eax,(%esp)
 847f762:	e8 a5 15 18 00       	call   8600d0c <_ZN27CSharedServerMessageManager21DeleteSpecificMessageEi>
 847f767:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 847f76e:	00 
 847f76f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 847f772:	89 04 24             	mov    %eax,(%esp)
 847f775:	e8 92 15 18 00       	call   8600d0c <_ZN27CSharedServerMessageManager21DeleteSpecificMessageEi>
 847f77a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 847f77d:	89 04 24             	mov    %eax,(%esp)
 847f780:	e8 c7 e5 10 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 847f785:	c7 44 24 08 c0 00 00 	movl   $0xc0,0x8(%esp)
 847f78c:	00 
 847f78d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 847f794:	00 
 847f795:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 847f798:	89 04 24             	mov    %eax,(%esp)
 847f79b:	e8 5c c1 c4 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 847f7a0:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 847f7a7:	00 
 847f7a8:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 847f7ab:	89 04 24             	mov    %eax,(%esp)
 847f7ae:	e8 6d c1 c4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 847f7b3:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 847f7ba:	00 
 847f7bb:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 847f7be:	89 04 24             	mov    %eax,(%esp)
 847f7c1:	e8 5a c1 c4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 847f7c6:	c7 45 ec 43 1e c7 08 	movl   $0x8c71e43,-0x14(%ebp)
 847f7cd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 847f7d0:	89 04 24             	mov    %eax,(%esp)
 847f7d3:	e8 d8 eb bf ff       	call   807e3b0 <strlen@plt>
 847f7d8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 847f7db:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 847f7e2:	eb 6f                	jmp    847f853 <_ZN13CPowerManager12ClearMVPInfoEv+0x275>
 847f7e4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 847f7e7:	83 c0 01             	add    $0x1,%eax
 847f7ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 847f7ee:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 847f7f1:	89 04 24             	mov    %eax,(%esp)
 847f7f4:	e8 27 c1 c4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 847f7f9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 847f7fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 847f800:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 847f803:	89 04 24             	mov    %eax,(%esp)
 847f806:	e8 31 c1 c4 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 847f80b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 847f80e:	89 44 24 08          	mov    %eax,0x8(%esp)
 847f812:	8b 45 ec             	mov    -0x14(%ebp),%eax
 847f815:	89 44 24 04          	mov    %eax,0x4(%esp)
 847f819:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 847f81c:	89 04 24             	mov    %eax,(%esp)
 847f81f:	e8 c0 7b d3 ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 847f824:	8b 45 f0             	mov    -0x10(%ebp),%eax
 847f827:	89 44 24 04          	mov    %eax,0x4(%esp)
 847f82b:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 847f82e:	89 04 24             	mov    %eax,(%esp)
 847f831:	e8 06 c1 c4 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 847f836:	8b 45 f0             	mov    -0x10(%ebp),%eax
 847f839:	89 44 24 08          	mov    %eax,0x8(%esp)
 847f83d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 847f840:	89 44 24 04          	mov    %eax,0x4(%esp)
 847f844:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 847f847:	89 04 24             	mov    %eax,(%esp)
 847f84a:	e8 95 7b d3 ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 847f84f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 847f853:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 847f857:	0f 9e c0             	setle  %al
 847f85a:	84 c0                	test   %al,%al
 847f85c:	75 86                	jne    847f7e4 <_ZN13CPowerManager12ClearMVPInfoEv+0x206>
 847f85e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847f865:	00 
 847f866:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 847f869:	89 04 24             	mov    %eax,(%esp)
 847f86c:	e8 e7 c0 c4 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 847f871:	e8 31 ab c5 ff       	call   80da3a7 <_Z11G_GameWorldv>
 847f876:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 847f87d:	00 
 847f87e:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 847f881:	89 54 24 04          	mov    %edx,0x4(%esp)
 847f885:	89 04 24             	mov    %eax,(%esp)
 847f888:	e8 f7 98 24 00       	call   86c9184 <_ZN9GameWorld19send_all_with_stateER11PacketGuardi>
 847f88d:	eb 15                	jmp    847f8a4 <_ZN13CPowerManager12ClearMVPInfoEv+0x2c6>
 847f88f:	89 d3                	mov    %edx,%ebx
 847f891:	89 c6                	mov    %eax,%esi
 847f893:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 847f896:	89 04 24             	mov    %eax,(%esp)
 847f899:	e8 e2 e5 10 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 847f89e:	89 f0                	mov    %esi,%eax
 847f8a0:	89 da                	mov    %ebx,%edx
 847f8a2:	eb 0d                	jmp    847f8b1 <_ZN13CPowerManager12ClearMVPInfoEv+0x2d3>
 847f8a4:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 847f8a7:	89 04 24             	mov    %eax,(%esp)
 847f8aa:	e8 d1 e5 10 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 847f8af:	eb 1b                	jmp    847f8cc <_ZN13CPowerManager12ClearMVPInfoEv+0x2ee>
 847f8b1:	89 d3                	mov    %edx,%ebx
 847f8b3:	89 c6                	mov    %eax,%esi
 847f8b5:	8d 45 c0             	lea    -0x40(%ebp),%eax
 847f8b8:	89 04 24             	mov    %eax,(%esp)
 847f8bb:	e8 12 d0 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847f8c0:	89 f0                	mov    %esi,%eax
 847f8c2:	89 da                	mov    %ebx,%edx
 847f8c4:	89 04 24             	mov    %eax,(%esp)
 847f8c7:	e8 84 3e 66 00       	call   8ae3750 <_Unwind_Resume>
 847f8cc:	8d 45 c0             	lea    -0x40(%ebp),%eax
 847f8cf:	89 04 24             	mov    %eax,(%esp)
 847f8d2:	e8 fb cf 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847f8d7:	83 c4 60             	add    $0x60,%esp
 847f8da:	5b                   	pop    %ebx
 847f8db:	5e                   	pop    %esi
 847f8dc:	5d                   	pop    %ebp
 847f8dd:	c3                   	ret

```

```c
// CPowerManager::ClearMVPInfo @ 0x847f5de

/* CPowerManager::ClearMVPInfo() */

void __thiscall CPowerManager::ClearMVPInfo(CPowerManager *this)

{
  undefined4 uVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  CGameManager *this_00;
  GameWorld *this_01;
  PacketGuard local_50 [12];
  CStreamGuard local_44 [8];
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  CSharedServerMessageManager *local_1c;
  char *local_18;
  size_t local_14;
  int local_10;
  
  cMyTrace::cMyTrace(local_3c,"void CPowerManager::ClearMVPInfo()",0x143,0);
  cMyTrace::operator()(local_3c,"CLEAR MVP INFO");
  memset(this + 0x28,0,0x18c);
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DNF_PowerManager.cpp",0x149);
  CStreamGuard::CStreamGuard(local_44,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_44);
                    /* try { // try from 0847f684 to 0847f784 has its CatchHandler @ 0847f8b1 */
  CStreamGuard::operator<<(pCVar3,0x1a5);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_44);
  CStreamGuard::operator<<(pCVar3,-1);
  iVar4 = G_CEnvironment();
  iVar4 = *(int *)(iVar4 + 0x378);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_44);
  CStreamGuard::operator<<(pCVar3,iVar4);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_44);
  iVar4 = G_CEnvironment();
  uVar1 = *(undefined4 *)(iVar4 + 0x378);
  cMyTrace::cMyTrace(local_2c,"void CPowerManager::ClearMVPInfo()",0x152,0);
  cMyTrace::operator()
            (local_2c,"PUT DB MSG - E_DELETE_POWER_WAR_STATUE_MESSAGE / server_group : %d",uVar1);
  this_00 = (CGameManager *)G_CGameManager();
  local_1c = (CSharedServerMessageManager *)CGameManager::GetSharedServerMessageManager(this_00);
  if (local_1c != (CSharedServerMessageManager *)0x0) {
    CSharedServerMessageManager::DeleteSpecificMessage(local_1c,1);
    CSharedServerMessageManager::DeleteSpecificMessage(local_1c,2);
    CSharedServerMessageManager::DeleteSpecificMessage(local_1c,3);
    PacketGuard::PacketGuard(local_50);
                    /* try { // try from 0847f79b to 0847f88c has its CatchHandler @ 0847f88f */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0xc0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,3);
    local_18 = "null string";
    local_14 = strlen("null string");
    for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,local_10 + 1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,local_14);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_50,local_18,local_14);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,local_14);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_50,local_18,local_14);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
    this_01 = (GameWorld *)G_GameWorld();
    GameWorld::send_all_with_state(this_01,local_50,3);
                    /* try { // try from 0847f8aa to 0847f8ae has its CatchHandler @ 0847f8b1 */
    PacketGuard::~PacketGuard(local_50);
  }
  CStreamGuard::~CStreamGuard(local_44);
  return;
}

```

---

## DecreasePowerUserCount

```asm
// === 0848013c CPowerManager::DecreasePowerUserCount  [0x0848013c-0x84801a1] ===
 848013c:	55                   	push   %ebp
 848013d:	89 e5                	mov    %esp,%ebp
 848013f:	83 ec 04             	sub    $0x4,%esp
 8480142:	8b 45 0c             	mov    0xc(%ebp),%eax
 8480145:	88 45 fc             	mov    %al,-0x4(%ebp)
 8480148:	80 7d fc 01          	cmpb   $0x1,-0x4(%ebp)
 848014c:	74 06                	je     8480154 <_ZN13CPowerManager22DecreasePowerUserCountEc+0x18>
 848014e:	80 7d fc 03          	cmpb   $0x3,-0x4(%ebp)
 8480152:	75 25                	jne    8480179 <_ZN13CPowerManager22DecreasePowerUserCountEc+0x3d>
 8480154:	8b 45 08             	mov    0x8(%ebp),%eax
 8480157:	8b 40 14             	mov    0x14(%eax),%eax
 848015a:	8d 50 ff             	lea    -0x1(%eax),%edx
 848015d:	8b 45 08             	mov    0x8(%ebp),%eax
 8480160:	89 50 14             	mov    %edx,0x14(%eax)
 8480163:	8b 45 08             	mov    0x8(%ebp),%eax
 8480166:	8b 40 14             	mov    0x14(%eax),%eax
 8480169:	85 c0                	test   %eax,%eax
 848016b:	79 31                	jns    848019e <_ZN13CPowerManager22DecreasePowerUserCountEc+0x62>
 848016d:	8b 45 08             	mov    0x8(%ebp),%eax
 8480170:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 8480177:	eb 26                	jmp    848019f <_ZN13CPowerManager22DecreasePowerUserCountEc+0x63>
 8480179:	8b 45 08             	mov    0x8(%ebp),%eax
 848017c:	8b 40 18             	mov    0x18(%eax),%eax
 848017f:	8d 50 ff             	lea    -0x1(%eax),%edx
 8480182:	8b 45 08             	mov    0x8(%ebp),%eax
 8480185:	89 50 18             	mov    %edx,0x18(%eax)
 8480188:	8b 45 08             	mov    0x8(%ebp),%eax
 848018b:	8b 40 18             	mov    0x18(%eax),%eax
 848018e:	85 c0                	test   %eax,%eax
 8480190:	79 0d                	jns    848019f <_ZN13CPowerManager22DecreasePowerUserCountEc+0x63>
 8480192:	8b 45 08             	mov    0x8(%ebp),%eax
 8480195:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 848019c:	eb 01                	jmp    848019f <_ZN13CPowerManager22DecreasePowerUserCountEc+0x63>
 848019e:	90                   	nop
 848019f:	c9                   	leave
 84801a0:	c3                   	ret
 84801a1:	90                   	nop

```

```c
// CPowerManager::DecreasePowerUserCount @ 0x848013c

/* CPowerManager::DecreasePowerUserCount(char) */

void __thiscall CPowerManager::DecreasePowerUserCount(CPowerManager *this,char param_1)

{
  if ((param_1 == '\x01') || (param_1 == '\x03')) {
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + -1;
    if (*(int *)(this + 0x14) < 0) {
      *(undefined4 *)(this + 0x14) = 0;
    }
  }
  else {
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
    if (*(int *)(this + 0x18) < 0) {
      *(undefined4 *)(this + 0x18) = 0;
    }
  }
  return;
}

```

---

## GetPowerUserCount

```asm
// === 084801da CPowerManager::GetPowerUserCount  [0x084801da-0x84801fb] ===
 84801da:	55                   	push   %ebp
 84801db:	89 e5                	mov    %esp,%ebp
 84801dd:	83 ec 04             	sub    $0x4,%esp
 84801e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84801e3:	88 45 fc             	mov    %al,-0x4(%ebp)
 84801e6:	80 7d fc 01          	cmpb   $0x1,-0x4(%ebp)
 84801ea:	75 08                	jne    84801f4 <_ZN13CPowerManager17GetPowerUserCountEc+0x1a>
 84801ec:	8b 45 08             	mov    0x8(%ebp),%eax
 84801ef:	8b 40 14             	mov    0x14(%eax),%eax
 84801f2:	eb 06                	jmp    84801fa <_ZN13CPowerManager17GetPowerUserCountEc+0x20>
 84801f4:	8b 45 08             	mov    0x8(%ebp),%eax
 84801f7:	8b 40 18             	mov    0x18(%eax),%eax
 84801fa:	c9                   	leave
 84801fb:	c3                   	ret

```

```c
// CPowerManager::GetPowerUserCount @ 0x84801da

/* CPowerManager::GetPowerUserCount(char) */

undefined4 __thiscall CPowerManager::GetPowerUserCount(CPowerManager *this,char param_1)

{
  undefined4 uVar1;
  
  if (param_1 == '\x01') {
    uVar1 = *(undefined4 *)(this + 0x14);
  }
  else {
    uVar1 = *(undefined4 *)(this + 0x18);
  }
  return uVar1;
}

```

---

## GetPowerWarGhostTime

```asm
// === 08480e92 CPowerManager::GetPowerWarGhostTime  [0x08480e92-0x8480ec7] ===
 8480e92:	55                   	push   %ebp
 8480e93:	89 e5                	mov    %esp,%ebp
 8480e95:	83 ec 28             	sub    $0x28,%esp
 8480e98:	e8 fe b2 c4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8480e9d:	8b 80 3c a6 00 00    	mov    0xa63c(%eax),%eax
 8480ea3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8480ea6:	db 45 e4             	fildl  -0x1c(%ebp)
 8480ea9:	d8 4d 10             	fmuls  0x10(%ebp)
 8480eac:	d9 7d e2             	fnstcw -0x1e(%ebp)
 8480eaf:	0f b7 45 e2          	movzwl -0x1e(%ebp),%eax
 8480eb3:	b4 0c                	mov    $0xc,%ah
 8480eb5:	66 89 45 e0          	mov    %ax,-0x20(%ebp)
 8480eb9:	d9 6d e0             	fldcw  -0x20(%ebp)
 8480ebc:	db 5d f4             	fistpl -0xc(%ebp)
 8480ebf:	d9 6d e2             	fldcw  -0x1e(%ebp)
 8480ec2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8480ec5:	c9                   	leave
 8480ec6:	c3                   	ret
 8480ec7:	90                   	nop

```

```c
// CPowerManager::GetPowerWarGhostTime @ 0x8480e92

/* CPowerManager::GetPowerWarGhostTime(CUser*, float) */

int __thiscall CPowerManager::GetPowerWarGhostTime(CPowerManager *this,CUser *param_1,float param_2)

{
  int iVar1;
  
  iVar1 = G_CDataManager();
  return (int)ROUND((float)*(int *)(iVar1 + 0xa63c) * param_2);
}

```

---

## GetPowerWarPoint

```asm
// === 08480e78 CPowerManager::GetPowerWarPoint  [0x08480e78-0x8480e91] ===
 8480e78:	55                   	push   %ebp
 8480e79:	89 e5                	mov    %esp,%ebp
 8480e7b:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 8480e7f:	75 08                	jne    8480e89 <_ZN13CPowerManager16GetPowerWarPointE20ENUM_POWER_SIDE_TYPE+0x11>
 8480e81:	8b 45 08             	mov    0x8(%ebp),%eax
 8480e84:	8b 40 04             	mov    0x4(%eax),%eax
 8480e87:	eb 06                	jmp    8480e8f <_ZN13CPowerManager16GetPowerWarPointE20ENUM_POWER_SIDE_TYPE+0x17>
 8480e89:	8b 45 08             	mov    0x8(%ebp),%eax
 8480e8c:	8b 40 08             	mov    0x8(%eax),%eax
 8480e8f:	5d                   	pop    %ebp
 8480e90:	c3                   	ret
 8480e91:	90                   	nop

```

```c
// CPowerManager::GetPowerWarPoint @ 0x8480e78

/* CPowerManager::GetPowerWarPoint(ENUM_POWER_SIDE_TYPE) */

undefined4 __thiscall CPowerManager::GetPowerWarPoint(CPowerManager *this,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 1) {
    uVar1 = *(undefined4 *)(this + 4);
  }
  else {
    uVar1 = *(undefined4 *)(this + 8);
  }
  return uVar1;
}

```

---

## GetPowerWarPointInChannel

```asm
// === 084801fc CPowerManager::GetPowerWarPointInChannel  [0x084801fc-0x848021d] ===
 84801fc:	55                   	push   %ebp
 84801fd:	89 e5                	mov    %esp,%ebp
 84801ff:	83 ec 04             	sub    $0x4,%esp
 8480202:	8b 45 0c             	mov    0xc(%ebp),%eax
 8480205:	88 45 fc             	mov    %al,-0x4(%ebp)
 8480208:	80 7d fc 01          	cmpb   $0x1,-0x4(%ebp)
 848020c:	75 08                	jne    8480216 <_ZN13CPowerManager25GetPowerWarPointInChannelEc+0x1a>
 848020e:	8b 45 08             	mov    0x8(%ebp),%eax
 8480211:	8b 40 0c             	mov    0xc(%eax),%eax
 8480214:	eb 06                	jmp    848021c <_ZN13CPowerManager25GetPowerWarPointInChannelEc+0x20>
 8480216:	8b 45 08             	mov    0x8(%ebp),%eax
 8480219:	8b 40 10             	mov    0x10(%eax),%eax
 848021c:	c9                   	leave
 848021d:	c3                   	ret

```

```c
// CPowerManager::GetPowerWarPointInChannel @ 0x84801fc

/* CPowerManager::GetPowerWarPointInChannel(char) */

undefined4 __thiscall CPowerManager::GetPowerWarPointInChannel(CPowerManager *this,char param_1)

{
  undefined4 uVar1;
  
  if (param_1 == '\x01') {
    uVar1 = *(undefined4 *)(this + 0xc);
  }
  else {
    uVar1 = *(undefined4 *)(this + 0x10);
  }
  return uVar1;
}

```

---

## GetPowerWarResponPenalty

```asm
// === 08480ec8 CPowerManager::GetPowerWarResponPenalty  [0x08480ec8-0x8480f41] ===
 8480ec8:	55                   	push   %ebp
 8480ec9:	89 e5                	mov    %esp,%ebp
 8480ecb:	53                   	push   %ebx
 8480ecc:	83 ec 44             	sub    $0x44,%esp
 8480ecf:	b8 00 00 80 3f       	mov    $0x3f800000,%eax
 8480ed4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8480ed7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8480eda:	89 04 24             	mov    %eax,(%esp)
 8480edd:	e8 d2 01 00 00       	call   84810b4 <_ZN15CUserCharacInfo26GetCurCharacChaosStateTimeEv>
 8480ee2:	89 c3                	mov    %eax,%ebx
 8480ee4:	e8 b2 b2 c4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8480ee9:	8b 80 40 a6 00 00    	mov    0xa640(%eax),%eax
 8480eef:	39 c3                	cmp    %eax,%ebx
 8480ef1:	0f 92 c0             	setb   %al
 8480ef4:	84 c0                	test   %al,%al
 8480ef6:	74 3b                	je     8480f33 <_ZN13CPowerManager24GetPowerWarResponPenaltyEP5CUser+0x6b>
 8480ef8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8480efb:	89 04 24             	mov    %eax,(%esp)
 8480efe:	e8 b1 01 00 00       	call   84810b4 <_ZN15CUserCharacInfo26GetCurCharacChaosStateTimeEv>
 8480f03:	ba 00 00 00 00       	mov    $0x0,%edx
 8480f08:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8480f0b:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 8480f0e:	df 6d e0             	fildll -0x20(%ebp)
 8480f11:	d9 5d d8             	fstps  -0x28(%ebp)
 8480f14:	e8 82 b2 c4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8480f19:	8b 80 40 a6 00 00    	mov    0xa640(%eax),%eax
 8480f1f:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8480f22:	db 45 dc             	fildl  -0x24(%ebp)
 8480f25:	d8 7d d8             	fdivrs -0x28(%ebp)
 8480f28:	d9 05 d0 2f c7 08    	flds   0x8c72fd0
 8480f2e:	de e1                	fsubp  %st,%st(1)
 8480f30:	d9 5d f4             	fstps  -0xc(%ebp)
 8480f33:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8480f36:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8480f39:	d9 45 d4             	flds   -0x2c(%ebp)
 8480f3c:	83 c4 44             	add    $0x44,%esp
 8480f3f:	5b                   	pop    %ebx
 8480f40:	5d                   	pop    %ebp
 8480f41:	c3                   	ret

```

```c
// CPowerManager::GetPowerWarResponPenalty @ 0x8480ec8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CPowerManager::GetPowerWarResponPenalty(CUser*) */

longdouble __thiscall CPowerManager::GetPowerWarResponPenalty(CPowerManager *this,CUser *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 local_10;
  
  local_10 = 1.0;
  uVar1 = CUserCharacInfo::GetCurCharacChaosStateTime((CUserCharacInfo *)param_1);
  iVar2 = G_CDataManager();
  if (uVar1 < *(uint *)(iVar2 + 0xa640)) {
    uVar1 = CUserCharacInfo::GetCurCharacChaosStateTime((CUserCharacInfo *)param_1);
    iVar2 = G_CDataManager();
    local_10 = _DAT_08c72fd0 - (float)uVar1 / (float)*(int *)(iVar2 + 0xa640);
  }
  return (longdouble)local_10;
}

```

---

## GetRankingByCharacNo

```asm
// === 0847eba0 CPowerManager::GetRankingByCharacNo  [0x0847eba0-0x847ebeb] ===
 847eba0:	55                   	push   %ebp
 847eba1:	89 e5                	mov    %esp,%ebp
 847eba3:	83 ec 10             	sub    $0x10,%esp
 847eba6:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 847ebad:	eb 29                	jmp    847ebd8 <_ZN13CPowerManager20GetRankingByCharacNoEj+0x38>
 847ebaf:	8b 45 fc             	mov    -0x4(%ebp),%eax
 847ebb2:	8b 55 08             	mov    0x8(%ebp),%edx
 847ebb5:	c1 e0 02             	shl    $0x2,%eax
 847ebb8:	89 c1                	mov    %eax,%ecx
 847ebba:	c1 e1 05             	shl    $0x5,%ecx
 847ebbd:	01 c8                	add    %ecx,%eax
 847ebbf:	8d 04 02             	lea    (%edx,%eax,1),%eax
 847ebc2:	83 c0 2c             	add    $0x2c,%eax
 847ebc5:	8b 00                	mov    (%eax),%eax
 847ebc7:	3b 45 0c             	cmp    0xc(%ebp),%eax
 847ebca:	75 08                	jne    847ebd4 <_ZN13CPowerManager20GetRankingByCharacNoEj+0x34>
 847ebcc:	8b 45 fc             	mov    -0x4(%ebp),%eax
 847ebcf:	83 c0 01             	add    $0x1,%eax
 847ebd2:	eb 16                	jmp    847ebea <_ZN13CPowerManager20GetRankingByCharacNoEj+0x4a>
 847ebd4:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 847ebd8:	8b 45 fc             	mov    -0x4(%ebp),%eax
 847ebdb:	83 f8 02             	cmp    $0x2,%eax
 847ebde:	0f 96 c0             	setbe  %al
 847ebe1:	84 c0                	test   %al,%al
 847ebe3:	75 ca                	jne    847ebaf <_ZN13CPowerManager20GetRankingByCharacNoEj+0xf>
 847ebe5:	b8 00 00 00 00       	mov    $0x0,%eax
 847ebea:	c9                   	leave
 847ebeb:	c3                   	ret

```

```c
// CPowerManager::GetRankingByCharacNo @ 0x847eba0

/* CPowerManager::GetRankingByCharacNo(unsigned int) */

int __thiscall CPowerManager::GetRankingByCharacNo(CPowerManager *this,uint param_1)

{
  uint local_8;
  
  local_8 = 0;
  while( true ) {
    if (2 < local_8) {
      return 0;
    }
    if (*(uint *)(this + local_8 * 0x84 + 0x2c) == param_1) break;
    local_8 = local_8 + 1;
  }
  return local_8 + 1;
}

```

---

## IncreaePowerWarPointInChannel

```asm
// === 084801a2 CPowerManager::IncreaePowerWarPointInChannel  [0x084801a2-0x84801d9] ===
 84801a2:	55                   	push   %ebp
 84801a3:	89 e5                	mov    %esp,%ebp
 84801a5:	83 ec 04             	sub    $0x4,%esp
 84801a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84801ab:	88 45 fc             	mov    %al,-0x4(%ebp)
 84801ae:	80 7d fc 01          	cmpb   $0x1,-0x4(%ebp)
 84801b2:	75 13                	jne    84801c7 <_ZN13CPowerManager29IncreaePowerWarPointInChannelEci+0x25>
 84801b4:	8b 45 08             	mov    0x8(%ebp),%eax
 84801b7:	8b 40 0c             	mov    0xc(%eax),%eax
 84801ba:	89 c2                	mov    %eax,%edx
 84801bc:	03 55 10             	add    0x10(%ebp),%edx
 84801bf:	8b 45 08             	mov    0x8(%ebp),%eax
 84801c2:	89 50 0c             	mov    %edx,0xc(%eax)
 84801c5:	eb 11                	jmp    84801d8 <_ZN13CPowerManager29IncreaePowerWarPointInChannelEci+0x36>
 84801c7:	8b 45 08             	mov    0x8(%ebp),%eax
 84801ca:	8b 40 10             	mov    0x10(%eax),%eax
 84801cd:	89 c2                	mov    %eax,%edx
 84801cf:	03 55 10             	add    0x10(%ebp),%edx
 84801d2:	8b 45 08             	mov    0x8(%ebp),%eax
 84801d5:	89 50 10             	mov    %edx,0x10(%eax)
 84801d8:	c9                   	leave
 84801d9:	c3                   	ret

```

```c
// CPowerManager::IncreaePowerWarPointInChannel @ 0x84801a2

/* CPowerManager::IncreaePowerWarPointInChannel(char, int) */

void __thiscall
CPowerManager::IncreaePowerWarPointInChannel(CPowerManager *this,char param_1,int param_2)

{
  if (param_1 == '\x01') {
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + param_2;
  }
  else {
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + param_2;
  }
  return;
}

```

---

## IncreasePowerUserCount

```asm
// === 08480102 CPowerManager::IncreasePowerUserCount  [0x08480102-0x848013b] ===
 8480102:	55                   	push   %ebp
 8480103:	89 e5                	mov    %esp,%ebp
 8480105:	83 ec 04             	sub    $0x4,%esp
 8480108:	8b 45 0c             	mov    0xc(%ebp),%eax
 848010b:	88 45 fc             	mov    %al,-0x4(%ebp)
 848010e:	80 7d fc 01          	cmpb   $0x1,-0x4(%ebp)
 8480112:	74 06                	je     848011a <_ZN13CPowerManager22IncreasePowerUserCountEc+0x18>
 8480114:	80 7d fc 03          	cmpb   $0x3,-0x4(%ebp)
 8480118:	75 11                	jne    848012b <_ZN13CPowerManager22IncreasePowerUserCountEc+0x29>
 848011a:	8b 45 08             	mov    0x8(%ebp),%eax
 848011d:	8b 40 14             	mov    0x14(%eax),%eax
 8480120:	8d 50 01             	lea    0x1(%eax),%edx
 8480123:	8b 45 08             	mov    0x8(%ebp),%eax
 8480126:	89 50 14             	mov    %edx,0x14(%eax)
 8480129:	eb 0f                	jmp    848013a <_ZN13CPowerManager22IncreasePowerUserCountEc+0x38>
 848012b:	8b 45 08             	mov    0x8(%ebp),%eax
 848012e:	8b 40 18             	mov    0x18(%eax),%eax
 8480131:	8d 50 01             	lea    0x1(%eax),%edx
 8480134:	8b 45 08             	mov    0x8(%ebp),%eax
 8480137:	89 50 18             	mov    %edx,0x18(%eax)
 848013a:	c9                   	leave
 848013b:	c3                   	ret

```

```c
// CPowerManager::IncreasePowerUserCount @ 0x8480102

/* CPowerManager::IncreasePowerUserCount(char) */

void __thiscall CPowerManager::IncreasePowerUserCount(CPowerManager *this,char param_1)

{
  if ((param_1 == '\x01') || (param_1 == '\x03')) {
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  }
  else {
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
  }
  return;
}

```

---

## Init

```asm
// === 0847eabc CPowerManager::Init  [0x0847eabc-0x847eb75] ===
 847eabc:	55                   	push   %ebp
 847eabd:	89 e5                	mov    %esp,%ebp
 847eabf:	83 ec 18             	sub    $0x18,%esp
 847eac2:	8b 45 08             	mov    0x8(%ebp),%eax
 847eac5:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 847eacc:	8b 45 08             	mov    0x8(%ebp),%eax
 847eacf:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 847ead6:	8b 45 08             	mov    0x8(%ebp),%eax
 847ead9:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 847eae0:	8b 45 08             	mov    0x8(%ebp),%eax
 847eae3:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 847eaea:	8b 45 08             	mov    0x8(%ebp),%eax
 847eaed:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 847eaf4:	8b 45 08             	mov    0x8(%ebp),%eax
 847eaf7:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 847eafe:	8b 45 08             	mov    0x8(%ebp),%eax
 847eb01:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 847eb08:	8b 45 08             	mov    0x8(%ebp),%eax
 847eb0b:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 847eb12:	8b 45 08             	mov    0x8(%ebp),%eax
 847eb15:	83 c0 24             	add    $0x24,%eax
 847eb18:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 847eb1f:	00 
 847eb20:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 847eb27:	00 
 847eb28:	89 04 24             	mov    %eax,(%esp)
 847eb2b:	e8 90 f1 bf ff       	call   807dcc0 <memset@plt>
 847eb30:	8b 45 08             	mov    0x8(%ebp),%eax
 847eb33:	83 c0 28             	add    $0x28,%eax
 847eb36:	c7 44 24 08 8c 01 00 	movl   $0x18c,0x8(%esp)
 847eb3d:	00 
 847eb3e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 847eb45:	00 
 847eb46:	89 04 24             	mov    %eax,(%esp)
 847eb49:	e8 72 f1 bf ff       	call   807dcc0 <memset@plt>
 847eb4e:	8b 45 08             	mov    0x8(%ebp),%eax
 847eb51:	05 b4 01 00 00       	add    $0x1b4,%eax
 847eb56:	89 04 24             	mov    %eax,(%esp)
 847eb59:	e8 d4 16 00 00       	call   8480232 <_ZN12CPowerWarLog5ResetEv>
 847eb5e:	8b 45 08             	mov    0x8(%ebp),%eax
 847eb61:	05 f0 01 00 00       	add    $0x1f0,%eax
 847eb66:	89 04 24             	mov    %eax,(%esp)
 847eb69:	e8 70 1d 00 00       	call   84808de <_ZN18CPowerWarPacketLog5ResetEv>
 847eb6e:	b8 01 00 00 00       	mov    $0x1,%eax
 847eb73:	c9                   	leave
 847eb74:	c3                   	ret
 847eb75:	90                   	nop

```

```c
// CPowerManager::Init @ 0x847eabc

/* CPowerManager::Init() */

undefined4 __thiscall CPowerManager::Init(CPowerManager *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  memset(this + 0x24,0,4);
  memset(this + 0x28,0,0x18c);
  CPowerWarLog::Reset((CPowerWarLog *)(this + 0x1b4));
  CPowerWarPacketLog::Reset((CPowerWarPacketLog *)(this + 0x1f0));
  return 1;
}

```

---

## IsAbleToRevival

```asm
// === 0847f952 CPowerManager::IsAbleToRevival  [0x0847f952-0x847fa2d] ===
 847f952:	55                   	push   %ebp
 847f953:	89 e5                	mov    %esp,%ebp
 847f955:	53                   	push   %ebx
 847f956:	83 ec 44             	sub    $0x44,%esp
 847f959:	b8 00 00 80 3f       	mov    $0x3f800000,%eax
 847f95e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 847f961:	8b 45 0c             	mov    0xc(%ebp),%eax
 847f964:	89 04 24             	mov    %eax,(%esp)
 847f967:	e8 48 17 00 00       	call   84810b4 <_ZN15CUserCharacInfo26GetCurCharacChaosStateTimeEv>
 847f96c:	89 c3                	mov    %eax,%ebx
 847f96e:	e8 28 c8 c4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 847f973:	8b 80 40 a6 00 00    	mov    0xa640(%eax),%eax
 847f979:	39 c3                	cmp    %eax,%ebx
 847f97b:	0f 92 c0             	setb   %al
 847f97e:	84 c0                	test   %al,%al
 847f980:	74 3b                	je     847f9bd <_ZN13CPowerManager15IsAbleToRevivalEP5CUserjRi+0x6b>
 847f982:	8b 45 0c             	mov    0xc(%ebp),%eax
 847f985:	89 04 24             	mov    %eax,(%esp)
 847f988:	e8 27 17 00 00       	call   84810b4 <_ZN15CUserCharacInfo26GetCurCharacChaosStateTimeEv>
 847f98d:	ba 00 00 00 00       	mov    $0x0,%edx
 847f992:	89 45 d8             	mov    %eax,-0x28(%ebp)
 847f995:	89 55 dc             	mov    %edx,-0x24(%ebp)
 847f998:	df 6d d8             	fildll -0x28(%ebp)
 847f99b:	d9 5d d4             	fstps  -0x2c(%ebp)
 847f99e:	e8 f8 c7 c4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 847f9a3:	8b 80 40 a6 00 00    	mov    0xa640(%eax),%eax
 847f9a9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 847f9ac:	db 45 e4             	fildl  -0x1c(%ebp)
 847f9af:	d8 7d d4             	fdivrs -0x2c(%ebp)
 847f9b2:	d9 05 d0 2f c7 08    	flds   0x8c72fd0
 847f9b8:	de e1                	fsubp  %st,%st(1)
 847f9ba:	d9 5d ec             	fstps  -0x14(%ebp)
 847f9bd:	e8 d9 c7 c4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 847f9c2:	8b 80 3c a6 00 00    	mov    0xa63c(%eax),%eax
 847f9c8:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 847f9cb:	db 45 e4             	fildl  -0x1c(%ebp)
 847f9ce:	d8 4d ec             	fmuls  -0x14(%ebp)
 847f9d1:	d9 7d e2             	fnstcw -0x1e(%ebp)
 847f9d4:	0f b7 45 e2          	movzwl -0x1e(%ebp),%eax
 847f9d8:	b4 0c                	mov    $0xc,%ah
 847f9da:	66 89 45 e0          	mov    %ax,-0x20(%ebp)
 847f9de:	d9 6d e0             	fldcw  -0x20(%ebp)
 847f9e1:	db 5d f0             	fistpl -0x10(%ebp)
 847f9e4:	d9 6d e2             	fldcw  -0x1e(%ebp)
 847f9e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 847f9ea:	89 04 24             	mov    %eax,(%esp)
 847f9ed:	e8 96 11 e7 ff       	call   82f0b88 <_ZN15CUserCharacInfo24GetCurCharacChaosDieTimeEv>
 847f9f2:	8b 55 10             	mov    0x10(%ebp),%edx
 847f9f5:	89 d1                	mov    %edx,%ecx
 847f9f7:	29 c1                	sub    %eax,%ecx
 847f9f9:	89 c8                	mov    %ecx,%eax
 847f9fb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 847f9fe:	8b 45 f0             	mov    -0x10(%ebp),%eax
 847fa01:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 847fa04:	7e 14                	jle    847fa1a <_ZN13CPowerManager15IsAbleToRevivalEP5CUserjRi+0xc8>
 847fa06:	8b 45 f4             	mov    -0xc(%ebp),%eax
 847fa09:	8b 55 f0             	mov    -0x10(%ebp),%edx
 847fa0c:	29 c2                	sub    %eax,%edx
 847fa0e:	8b 45 14             	mov    0x14(%ebp),%eax
 847fa11:	89 10                	mov    %edx,(%eax)
 847fa13:	b8 00 00 00 00       	mov    $0x0,%eax
 847fa18:	eb 0e                	jmp    847fa28 <_ZN13CPowerManager15IsAbleToRevivalEP5CUserjRi+0xd6>
 847fa1a:	8b 45 14             	mov    0x14(%ebp),%eax
 847fa1d:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 847fa23:	b8 01 00 00 00       	mov    $0x1,%eax
 847fa28:	83 c4 44             	add    $0x44,%esp
 847fa2b:	5b                   	pop    %ebx
 847fa2c:	5d                   	pop    %ebp
 847fa2d:	c3                   	ret

```

```c
// CPowerManager::IsAbleToRevival @ 0x847f952

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CPowerManager::IsAbleToRevival(CUser*, unsigned int, int&) */

bool __thiscall
CPowerManager::IsAbleToRevival(CPowerManager *this,CUser *param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  
  local_18 = 1.0;
  uVar1 = CUserCharacInfo::GetCurCharacChaosStateTime((CUserCharacInfo *)param_1);
  iVar2 = G_CDataManager();
  if (uVar1 < *(uint *)(iVar2 + 0xa640)) {
    uVar1 = CUserCharacInfo::GetCurCharacChaosStateTime((CUserCharacInfo *)param_1);
    iVar2 = G_CDataManager();
    local_18 = _DAT_08c72fd0 - (float)uVar1 / (float)*(int *)(iVar2 + 0xa640);
  }
  iVar2 = G_CDataManager();
  iVar2 = (int)ROUND((float)*(int *)(iVar2 + 0xa63c) * local_18);
  iVar3 = CUserCharacInfo::GetCurCharacChaosDieTime((CUserCharacInfo *)param_1);
  iVar3 = param_2 - iVar3;
  if (iVar2 <= iVar3) {
    *param_3 = 0;
  }
  else {
    *param_3 = iVar2 - iVar3;
  }
  return iVar2 <= iVar3;
}

```

---

## IsPowerWarEventOn

```asm
// === 0847f910 CPowerManager::IsPowerWarEventOn  [0x0847f910-0x847f951] ===
 847f910:	55                   	push   %ebp
 847f911:	89 e5                	mov    %esp,%ebp
 847f913:	83 ec 18             	sub    $0x18,%esp
 847f916:	a1 30 f7 41 09       	mov    0x941f730,%eax
 847f91b:	c7 44 24 04 1e 00 00 	movl   $0x1e,0x4(%esp)
 847f922:	00 
 847f923:	89 04 24             	mov    %eax,(%esp)
 847f926:	e8 6d 60 c9 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 847f92b:	8b 10                	mov    (%eax),%edx
 847f92d:	83 c2 34             	add    $0x34,%edx
 847f930:	8b 12                	mov    (%edx),%edx
 847f932:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 847f939:	00 
 847f93a:	89 04 24             	mov    %eax,(%esp)
 847f93d:	ff d2                	call   *%edx
 847f93f:	84 c0                	test   %al,%al
 847f941:	74 07                	je     847f94a <_ZN13CPowerManager17IsPowerWarEventOnEv+0x3a>
 847f943:	b8 01 00 00 00       	mov    $0x1,%eax
 847f948:	eb 05                	jmp    847f94f <_ZN13CPowerManager17IsPowerWarEventOnEv+0x3f>
 847f94a:	b8 00 00 00 00       	mov    $0x0,%eax
 847f94f:	c9                   	leave
 847f950:	c3                   	ret
 847f951:	90                   	nop

```

```c
// CPowerManager::IsPowerWarEventOn @ 0x847f910

/* CPowerManager::IsPowerWarEventOn() */

bool CPowerManager::IsPowerWarEventOn(void)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x1e);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  return cVar1 != '\0';
}

```

---

## IsWinerSide

```asm
// === 0847f8de CPowerManager::IsWinerSide  [0x0847f8de-0x847f90f] ===
 847f8de:	55                   	push   %ebp
 847f8df:	89 e5                	mov    %esp,%ebp
 847f8e1:	83 ec 04             	sub    $0x4,%esp
 847f8e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 847f8e7:	88 45 fc             	mov    %al,-0x4(%ebp)
 847f8ea:	8b 45 08             	mov    0x8(%ebp),%eax
 847f8ed:	0f b6 00             	movzbl (%eax),%eax
 847f8f0:	84 c0                	test   %al,%al
 847f8f2:	74 06                	je     847f8fa <_ZN13CPowerManager11IsWinerSideEc+0x1c>
 847f8f4:	80 7d fc 00          	cmpb   $0x0,-0x4(%ebp)
 847f8f8:	75 07                	jne    847f901 <_ZN13CPowerManager11IsWinerSideEc+0x23>
 847f8fa:	b8 00 00 00 00       	mov    $0x0,%eax
 847f8ff:	eb 0c                	jmp    847f90d <_ZN13CPowerManager11IsWinerSideEc+0x2f>
 847f901:	8b 45 08             	mov    0x8(%ebp),%eax
 847f904:	0f b6 00             	movzbl (%eax),%eax
 847f907:	3a 45 fc             	cmp    -0x4(%ebp),%al
 847f90a:	0f 94 c0             	sete   %al
 847f90d:	c9                   	leave
 847f90e:	c3                   	ret
 847f90f:	90                   	nop

```

```c
// CPowerManager::IsWinerSide @ 0x847f8de

/* CPowerManager::IsWinerSide(char) */

bool __thiscall CPowerManager::IsWinerSide(CPowerManager *this,char param_1)

{
  bool bVar1;
  
  if ((*this == (CPowerManager)0x0) || (param_1 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = *this == (CPowerManager)param_1;
  }
  return bVar1;
}

```

---

## LoadPowerWarInfo

```asm
// === 08480d98 CPowerManager::LoadPowerWarInfo  [0x08480d98-0x8480e77] ===
 8480d98:	55                   	push   %ebp
 8480d99:	89 e5                	mov    %esp,%ebp
 8480d9b:	56                   	push   %esi
 8480d9c:	53                   	push   %ebx
 8480d9d:	83 ec 20             	sub    $0x20,%esp
 8480da0:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8480da5:	c7 44 24 08 c4 03 00 	movl   $0x3c4,0x8(%esp)
 8480dac:	00 
 8480dad:	c7 44 24 04 23 1d c7 	movl   $0x8c71d23,0x4(%esp)
 8480db4:	08 
 8480db5:	89 04 24             	mov    %eax,(%esp)
 8480db8:	e8 c9 ec e0 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8480dbd:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8480dc4:	00 
 8480dc5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8480dc9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8480dcc:	89 04 24             	mov    %eax,(%esp)
 8480dcf:	e8 52 7e c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8480dd4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8480dd7:	89 04 24             	mov    %eax,(%esp)
 8480dda:	e8 67 7e c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8480ddf:	c7 44 24 04 9b 01 00 	movl   $0x19b,0x4(%esp)
 8480de6:	00 
 8480de7:	89 04 24             	mov    %eax,(%esp)
 8480dea:	e8 67 7e c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8480def:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8480df2:	89 04 24             	mov    %eax,(%esp)
 8480df5:	e8 4c 7e c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8480dfa:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8480e01:	ff 
 8480e02:	89 04 24             	mov    %eax,(%esp)
 8480e05:	e8 4c 7e c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8480e0a:	e8 72 b3 c4 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8480e0f:	8b 98 78 03 00 00    	mov    0x378(%eax),%ebx
 8480e15:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8480e18:	89 04 24             	mov    %eax,(%esp)
 8480e1b:	e8 26 7e c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8480e20:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8480e24:	89 04 24             	mov    %eax,(%esp)
 8480e27:	e8 2a 7e c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8480e2c:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8480e31:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8480e34:	89 54 24 08          	mov    %edx,0x8(%esp)
 8480e38:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8480e3f:	00 
 8480e40:	89 04 24             	mov    %eax,(%esp)
 8480e43:	e8 96 01 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8480e48:	eb 1b                	jmp    8480e65 <_ZN13CPowerManager16LoadPowerWarInfoEv+0xcd>
 8480e4a:	89 d3                	mov    %edx,%ebx
 8480e4c:	89 c6                	mov    %eax,%esi
 8480e4e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8480e51:	89 04 24             	mov    %eax,(%esp)
 8480e54:	e8 79 ba 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8480e59:	89 f0                	mov    %esi,%eax
 8480e5b:	89 da                	mov    %ebx,%edx
 8480e5d:	89 04 24             	mov    %eax,(%esp)
 8480e60:	e8 eb 28 66 00       	call   8ae3750 <_Unwind_Resume>
 8480e65:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8480e68:	89 04 24             	mov    %eax,(%esp)
 8480e6b:	e8 62 ba 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8480e70:	83 c4 20             	add    $0x20,%esp
 8480e73:	5b                   	pop    %ebx
 8480e74:	5e                   	pop    %esi
 8480e75:	5d                   	pop    %ebp
 8480e76:	c3                   	ret
 8480e77:	90                   	nop

```

```c
// CPowerManager::LoadPowerWarInfo @ 0x8480d98

/* CPowerManager::LoadPowerWarInfo() */

void CPowerManager::LoadPowerWarInfo(void)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DNF_PowerManager.cpp",0x3c4);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08480dea to 08480e47 has its CatchHandler @ 08480e4a */
  CStreamGuard::operator<<(pCVar2,0x19b);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  iVar3 = G_CEnvironment();
  iVar3 = *(int *)(iVar3 + 0x378);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,iVar3);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

---

## LoadRankerInfo

```asm
// === 0847f4fe CPowerManager::LoadRankerInfo  [0x0847f4fe-0x847f5dd] ===
 847f4fe:	55                   	push   %ebp
 847f4ff:	89 e5                	mov    %esp,%ebp
 847f501:	56                   	push   %esi
 847f502:	53                   	push   %ebx
 847f503:	83 ec 20             	sub    $0x20,%esp
 847f506:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847f50b:	c7 44 24 08 2e 01 00 	movl   $0x12e,0x8(%esp)
 847f512:	00 
 847f513:	c7 44 24 04 23 1d c7 	movl   $0x8c71d23,0x4(%esp)
 847f51a:	08 
 847f51b:	89 04 24             	mov    %eax,(%esp)
 847f51e:	e8 63 05 e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847f523:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847f52a:	00 
 847f52b:	89 44 24 04          	mov    %eax,0x4(%esp)
 847f52f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 847f532:	89 04 24             	mov    %eax,(%esp)
 847f535:	e8 ec 96 c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847f53a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 847f53d:	89 04 24             	mov    %eax,(%esp)
 847f540:	e8 01 97 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847f545:	c7 44 24 04 65 01 00 	movl   $0x165,0x4(%esp)
 847f54c:	00 
 847f54d:	89 04 24             	mov    %eax,(%esp)
 847f550:	e8 01 97 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847f555:	8d 45 f0             	lea    -0x10(%ebp),%eax
 847f558:	89 04 24             	mov    %eax,(%esp)
 847f55b:	e8 e6 96 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847f560:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 847f567:	ff 
 847f568:	89 04 24             	mov    %eax,(%esp)
 847f56b:	e8 e6 96 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847f570:	e8 0c cc c4 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 847f575:	8b 98 78 03 00 00    	mov    0x378(%eax),%ebx
 847f57b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 847f57e:	89 04 24             	mov    %eax,(%esp)
 847f581:	e8 c0 96 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847f586:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847f58a:	89 04 24             	mov    %eax,(%esp)
 847f58d:	e8 c4 96 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847f592:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847f597:	8d 55 f0             	lea    -0x10(%ebp),%edx
 847f59a:	89 54 24 08          	mov    %edx,0x8(%esp)
 847f59e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 847f5a5:	00 
 847f5a6:	89 04 24             	mov    %eax,(%esp)
 847f5a9:	e8 30 1a 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847f5ae:	eb 1b                	jmp    847f5cb <_ZN13CPowerManager14LoadRankerInfoEv+0xcd>
 847f5b0:	89 d3                	mov    %edx,%ebx
 847f5b2:	89 c6                	mov    %eax,%esi
 847f5b4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 847f5b7:	89 04 24             	mov    %eax,(%esp)
 847f5ba:	e8 13 d3 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847f5bf:	89 f0                	mov    %esi,%eax
 847f5c1:	89 da                	mov    %ebx,%edx
 847f5c3:	89 04 24             	mov    %eax,(%esp)
 847f5c6:	e8 85 41 66 00       	call   8ae3750 <_Unwind_Resume>
 847f5cb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 847f5ce:	89 04 24             	mov    %eax,(%esp)
 847f5d1:	e8 fc d2 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847f5d6:	83 c4 20             	add    $0x20,%esp
 847f5d9:	5b                   	pop    %ebx
 847f5da:	5e                   	pop    %esi
 847f5db:	5d                   	pop    %ebp
 847f5dc:	c3                   	ret
 847f5dd:	90                   	nop

```

```c
// CPowerManager::LoadRankerInfo @ 0x847f4fe

/* CPowerManager::LoadRankerInfo() */

void CPowerManager::LoadRankerInfo(void)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DNF_PowerManager.cpp",0x12e);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0847f550 to 0847f5ad has its CatchHandler @ 0847f5b0 */
  CStreamGuard::operator<<(pCVar2,0x165);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  iVar3 = G_CEnvironment();
  iVar3 = *(int *)(iVar3 + 0x378);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,iVar3);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

---

## ProcessJoinPowerWar

```asm
// === 0847fb02 CPowerManager::ProcessJoinPowerWar  [0x0847fb02-0x8480101] ===
 847fb02:	55                   	push   %ebp
 847fb03:	89 e5                	mov    %esp,%ebp
 847fb05:	57                   	push   %edi
 847fb06:	56                   	push   %esi
 847fb07:	53                   	push   %ebx
 847fb08:	83 ec 5c             	sub    $0x5c,%esp
 847fb0b:	8b 45 10             	mov    0x10(%ebp),%eax
 847fb0e:	88 45 b4             	mov    %al,-0x4c(%ebp)
 847fb11:	8b 45 0c             	mov    0xc(%ebp),%eax
 847fb14:	89 04 24             	mov    %eax,(%esp)
 847fb17:	e8 04 e4 c7 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 847fb1c:	83 f8 09             	cmp    $0x9,%eax
 847fb1f:	0f 94 c0             	sete   %al
 847fb22:	84 c0                	test   %al,%al
 847fb24:	74 25                	je     847fb4b <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x49>
 847fb26:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 847fb2d:	00 
 847fb2e:	c7 44 24 04 c3 00 00 	movl   $0xc3,0x4(%esp)
 847fb35:	00 
 847fb36:	8b 45 0c             	mov    0xc(%ebp),%eax
 847fb39:	89 04 24             	mov    %eax,(%esp)
 847fb3c:	e8 01 c4 1f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 847fb41:	b8 01 00 00 00       	mov    $0x1,%eax
 847fb46:	e9 ae 05 00 00       	jmp    84800f9 <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x5f7>
 847fb4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 847fb4e:	89 04 24             	mov    %eax,(%esp)
 847fb51:	e8 ca e3 c7 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 847fb56:	83 f8 0a             	cmp    $0xa,%eax
 847fb59:	0f 94 c0             	sete   %al
 847fb5c:	84 c0                	test   %al,%al
 847fb5e:	74 25                	je     847fb85 <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x83>
 847fb60:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 847fb67:	00 
 847fb68:	c7 44 24 04 c3 00 00 	movl   $0xc3,0x4(%esp)
 847fb6f:	00 
 847fb70:	8b 45 0c             	mov    0xc(%ebp),%eax
 847fb73:	89 04 24             	mov    %eax,(%esp)
 847fb76:	e8 c7 c3 1f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 847fb7b:	b8 01 00 00 00       	mov    $0x1,%eax
 847fb80:	e9 74 05 00 00       	jmp    84800f9 <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x5f7>
 847fb85:	8b 45 0c             	mov    0xc(%ebp),%eax
 847fb88:	89 04 24             	mov    %eax,(%esp)
 847fb8b:	e8 30 ee 20 00       	call   868e9c0 <_ZNK5CUser22isCompetitionMercenaryEv>
 847fb90:	84 c0                	test   %al,%al
 847fb92:	74 25                	je     847fbb9 <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0xb7>
 847fb94:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 847fb9b:	00 
 847fb9c:	c7 44 24 04 c3 00 00 	movl   $0xc3,0x4(%esp)
 847fba3:	00 
 847fba4:	8b 45 0c             	mov    0xc(%ebp),%eax
 847fba7:	89 04 24             	mov    %eax,(%esp)
 847fbaa:	e8 93 c3 1f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 847fbaf:	b8 01 00 00 00       	mov    $0x1,%eax
 847fbb4:	e9 40 05 00 00       	jmp    84800f9 <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x5f7>
 847fbb9:	8b 45 0c             	mov    0xc(%ebp),%eax
 847fbbc:	89 04 24             	mov    %eax,(%esp)
 847fbbf:	e8 a8 f8 da ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 847fbc4:	85 c0                	test   %eax,%eax
 847fbc6:	0f 94 c0             	sete   %al
 847fbc9:	84 c0                	test   %al,%al
 847fbcb:	74 25                	je     847fbf2 <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0xf0>
 847fbcd:	c7 44 24 08 64 00 00 	movl   $0x64,0x8(%esp)
 847fbd4:	00 
 847fbd5:	c7 44 24 04 c3 00 00 	movl   $0xc3,0x4(%esp)
 847fbdc:	00 
 847fbdd:	8b 45 0c             	mov    0xc(%ebp),%eax
 847fbe0:	89 04 24             	mov    %eax,(%esp)
 847fbe3:	e8 5a c3 1f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 847fbe8:	b8 01 00 00 00       	mov    $0x1,%eax
 847fbed:	e9 07 05 00 00       	jmp    84800f9 <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x5f7>
 847fbf2:	8b 45 0c             	mov    0xc(%ebp),%eax
 847fbf5:	89 04 24             	mov    %eax,(%esp)
 847fbf8:	e8 c9 00 db ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 847fbfd:	84 c0                	test   %al,%al
 847fbff:	0f 94 c0             	sete   %al
 847fc02:	84 c0                	test   %al,%al
 847fc04:	74 25                	je     847fc2b <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x129>
 847fc06:	c7 44 24 08 82 00 00 	movl   $0x82,0x8(%esp)
 847fc0d:	00 
 847fc0e:	c7 44 24 04 c3 00 00 	movl   $0xc3,0x4(%esp)
 847fc15:	00 
 847fc16:	8b 45 0c             	mov    0xc(%ebp),%eax
 847fc19:	89 04 24             	mov    %eax,(%esp)
 847fc1c:	e8 21 c3 1f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 847fc21:	b8 01 00 00 00       	mov    $0x1,%eax
 847fc26:	e9 ce 04 00 00       	jmp    84800f9 <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x5f7>
 847fc2b:	80 7d b4 00          	cmpb   $0x0,-0x4c(%ebp)
 847fc2f:	74 2b                	je     847fc5c <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x15a>
 847fc31:	80 7d b4 01          	cmpb   $0x1,-0x4c(%ebp)
 847fc35:	74 25                	je     847fc5c <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x15a>
 847fc37:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847fc3e:	00 
 847fc3f:	c7 44 24 04 c3 00 00 	movl   $0xc3,0x4(%esp)
 847fc46:	00 
 847fc47:	8b 45 0c             	mov    0xc(%ebp),%eax
 847fc4a:	89 04 24             	mov    %eax,(%esp)
 847fc4d:	e8 f0 c2 1f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 847fc52:	b8 01 00 00 00       	mov    $0x1,%eax
 847fc57:	e9 9d 04 00 00       	jmp    84800f9 <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x5f7>
 847fc5c:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 847fc63:	80 7d b4 01          	cmpb   $0x1,-0x4c(%ebp)
 847fc67:	0f 85 be 01 00 00    	jne    847fe2b <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x329>
 847fc6d:	e8 0f c5 c4 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 847fc72:	8b b0 b0 01 00 00    	mov    0x1b0(%eax),%esi
 847fc78:	e8 04 c5 c4 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 847fc7d:	8b 98 78 03 00 00    	mov    0x378(%eax),%ebx
 847fc83:	e8 13 c5 c4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 847fc88:	05 28 a6 00 00       	add    $0xa628,%eax
 847fc8d:	89 74 24 08          	mov    %esi,0x8(%esp)
 847fc91:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847fc95:	89 04 24             	mov    %eax,(%esp)
 847fc98:	e8 17 a1 5d 00       	call   8a59db4 <_ZN20PowerParameterScript19checkPowerWarServerEii>
 847fc9d:	83 f0 01             	xor    $0x1,%eax
 847fca0:	84 c0                	test   %al,%al
 847fca2:	74 25                	je     847fcc9 <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x1c7>
 847fca4:	c7 44 24 08 80 00 00 	movl   $0x80,0x8(%esp)
 847fcab:	00 
 847fcac:	c7 44 24 04 c3 00 00 	movl   $0xc3,0x4(%esp)
 847fcb3:	00 
 847fcb4:	8b 45 0c             	mov    0xc(%ebp),%eax
 847fcb7:	89 04 24             	mov    %eax,(%esp)
 847fcba:	e8 83 c2 1f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 847fcbf:	b8 01 00 00 00       	mov    $0x1,%eax
 847fcc4:	e9 30 04 00 00       	jmp    84800f9 <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x5f7>
 847fcc9:	a1 50 be 40 09       	mov    0x940be50,%eax
 847fcce:	89 04 24             	mov    %eax,(%esp)
 847fcd1:	e8 3a fc ff ff       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 847fcd6:	83 f0 01             	xor    $0x1,%eax
 847fcd9:	84 c0                	test   %al,%al
 847fcdb:	74 25                	je     847fd02 <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x200>
 847fcdd:	c7 44 24 08 7f 00 00 	movl   $0x7f,0x8(%esp)
 847fce4:	00 
 847fce5:	c7 44 24 04 c3 00 00 	movl   $0xc3,0x4(%esp)
 847fcec:	00 
 847fced:	8b 45 0c             	mov    0xc(%ebp),%eax
 847fcf0:	89 04 24             	mov    %eax,(%esp)
 847fcf3:	e8 4a c2 1f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 847fcf8:	b8 01 00 00 00       	mov    $0x1,%eax
 847fcfd:	e9 f7 03 00 00       	jmp    84800f9 <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x5f7>
 847fd02:	8b 45 0c             	mov    0xc(%ebp),%eax
 847fd05:	89 44 24 04          	mov    %eax,0x4(%esp)
 847fd09:	8b 45 08             	mov    0x8(%ebp),%eax
 847fd0c:	89 04 24             	mov    %eax,(%esp)
 847fd0f:	e8 68 fd ff ff       	call   847fa7c <_ZN13CPowerManager23CheckPowerWarEnterLimitEP5CUser>
 847fd14:	89 45 dc             	mov    %eax,-0x24(%ebp)
 847fd17:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 847fd1b:	0f 95 c0             	setne  %al
 847fd1e:	84 c0                	test   %al,%al
 847fd20:	74 27                	je     847fd49 <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x247>
 847fd22:	8b 45 dc             	mov    -0x24(%ebp),%eax
 847fd25:	0f b6 c0             	movzbl %al,%eax
 847fd28:	89 44 24 08          	mov    %eax,0x8(%esp)
 847fd2c:	c7 44 24 04 c3 00 00 	movl   $0xc3,0x4(%esp)
 847fd33:	00 
 847fd34:	8b 45 0c             	mov    0xc(%ebp),%eax
 847fd37:	89 04 24             	mov    %eax,(%esp)
 847fd3a:	e8 03 c2 1f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 847fd3f:	b8 01 00 00 00       	mov    $0x1,%eax
 847fd44:	e9 b0 03 00 00       	jmp    84800f9 <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x5f7>
 847fd49:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 847fd50:	e8 46 c4 c4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 847fd55:	8b 80 e0 a6 00 00    	mov    0xa6e0(%eax),%eax
 847fd5b:	c1 e0 02             	shl    $0x2,%eax
 847fd5e:	89 c2                	mov    %eax,%edx
 847fd60:	c1 e2 04             	shl    $0x4,%edx
 847fd63:	89 d1                	mov    %edx,%ecx
 847fd65:	29 c1                	sub    %eax,%ecx
 847fd67:	89 c8                	mov    %ecx,%eax
 847fd69:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 847fd6c:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 847fd73:	e8 26 bf c4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 847fd78:	89 c3                	mov    %eax,%ebx
 847fd7a:	8b 45 0c             	mov    0xc(%ebp),%eax
 847fd7d:	89 04 24             	mov    %eax,(%esp)
 847fd80:	e8 cd 12 00 00       	call   8481052 <_ZNK15CUserCharacInfo32getCurCharacLastPlayTickPowerWarEv>
 847fd85:	89 da                	mov    %ebx,%edx
 847fd87:	29 c2                	sub    %eax,%edx
 847fd89:	89 d0                	mov    %edx,%eax
 847fd8b:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 847fd8e:	0f 9e c0             	setle  %al
 847fd91:	84 c0                	test   %al,%al
 847fd93:	74 25                	je     847fdba <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x2b8>
 847fd95:	c7 44 24 08 84 00 00 	movl   $0x84,0x8(%esp)
 847fd9c:	00 
 847fd9d:	c7 44 24 04 c3 00 00 	movl   $0xc3,0x4(%esp)
 847fda4:	00 
 847fda5:	8b 45 0c             	mov    0xc(%ebp),%eax
 847fda8:	89 04 24             	mov    %eax,(%esp)
 847fdab:	e8 92 c1 1f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 847fdb0:	b8 01 00 00 00       	mov    $0x1,%eax
 847fdb5:	e9 3f 03 00 00       	jmp    84800f9 <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x5f7>
 847fdba:	e8 29 4e 14 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 847fdbf:	8b 55 0c             	mov    0xc(%ebp),%edx
 847fdc2:	89 54 24 04          	mov    %edx,0x4(%esp)
 847fdc6:	89 04 24             	mov    %eax,(%esp)
 847fdc9:	e8 90 af 14 00       	call   85cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>
 847fdce:	84 c0                	test   %al,%al
 847fdd0:	74 25                	je     847fdf7 <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x2f5>
 847fdd2:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847fdd9:	00 
 847fdda:	c7 44 24 04 c3 00 00 	movl   $0xc3,0x4(%esp)
 847fde1:	00 
 847fde2:	8b 45 0c             	mov    0xc(%ebp),%eax
 847fde5:	89 04 24             	mov    %eax,(%esp)
 847fde8:	e8 55 c1 1f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 847fded:	b8 00 00 00 00       	mov    $0x0,%eax
 847fdf2:	e9 02 03 00 00       	jmp    84800f9 <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x5f7>
 847fdf7:	8b 45 0c             	mov    0xc(%ebp),%eax
 847fdfa:	89 04 24             	mov    %eax,(%esp)
 847fdfd:	e8 1c 7a 1c 00       	call   864781e <_ZN15CUserCharacInfo19IsBusyDisjointStoreEv>
 847fe02:	84 c0                	test   %al,%al
 847fe04:	74 25                	je     847fe2b <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x329>
 847fe06:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847fe0d:	00 
 847fe0e:	c7 44 24 04 c3 00 00 	movl   $0xc3,0x4(%esp)
 847fe15:	00 
 847fe16:	8b 45 0c             	mov    0xc(%ebp),%eax
 847fe19:	89 04 24             	mov    %eax,(%esp)
 847fe1c:	e8 21 c1 1f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 847fe21:	b8 00 00 00 00       	mov    $0x0,%eax
 847fe26:	e9 ce 02 00 00       	jmp    84800f9 <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x5f7>
 847fe2b:	0f be 55 b4          	movsbl -0x4c(%ebp),%edx
 847fe2f:	8b 45 0c             	mov    0xc(%ebp),%eax
 847fe32:	89 54 24 04          	mov    %edx,0x4(%esp)
 847fe36:	89 04 24             	mov    %eax,(%esp)
 847fe39:	e8 42 12 00 00       	call   8481080 <_ZN15CUserCharacInfo22setCurrCharacJoinPowerEc>
 847fe3e:	c6 45 e3 00          	movb   $0x0,-0x1d(%ebp)
 847fe42:	8b 45 0c             	mov    0xc(%ebp),%eax
 847fe45:	89 04 24             	mov    %eax,(%esp)
 847fe48:	e8 79 fe da ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 847fe4d:	3c 03                	cmp    $0x3,%al
 847fe4f:	74 0f                	je     847fe60 <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x35e>
 847fe51:	8b 45 0c             	mov    0xc(%ebp),%eax
 847fe54:	89 04 24             	mov    %eax,(%esp)
 847fe57:	e8 6a fe da ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 847fe5c:	3c 04                	cmp    $0x4,%al
 847fe5e:	75 07                	jne    847fe67 <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x365>
 847fe60:	b8 01 00 00 00       	mov    $0x1,%eax
 847fe65:	eb 05                	jmp    847fe6c <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x36a>
 847fe67:	b8 00 00 00 00       	mov    $0x0,%eax
 847fe6c:	84 c0                	test   %al,%al
 847fe6e:	74 04                	je     847fe74 <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x372>
 847fe70:	c6 45 e3 01          	movb   $0x1,-0x1d(%ebp)
 847fe74:	80 7d b4 01          	cmpb   $0x1,-0x4c(%ebp)
 847fe78:	0f 85 bb 00 00 00    	jne    847ff39 <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x437>
 847fe7e:	80 7d e3 00          	cmpb   $0x0,-0x1d(%ebp)
 847fe82:	74 51                	je     847fed5 <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x3d3>
 847fe84:	8b 45 0c             	mov    0xc(%ebp),%eax
 847fe87:	89 04 24             	mov    %eax,(%esp)
 847fe8a:	e8 37 fe da ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 847fe8f:	0f b6 f8             	movzbl %al,%edi
 847fe92:	8b 45 0c             	mov    0xc(%ebp),%eax
 847fe95:	89 04 24             	mov    %eax,(%esp)
 847fe98:	e8 cf f5 da ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 847fe9d:	89 c6                	mov    %eax,%esi
 847fe9f:	8b 45 0c             	mov    0xc(%ebp),%eax
 847fea2:	89 04 24             	mov    %eax,(%esp)
 847fea5:	e8 a4 bd c4 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 847feaa:	89 c3                	mov    %eax,%ebx
 847feac:	a1 2c be 40 09       	mov    0x940be2c,%eax
 847feb1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 847feb8:	00 
 847feb9:	89 04 24             	mov    %eax,(%esp)
 847febc:	e8 f7 d4 c9 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 847fec1:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 847fec5:	89 74 24 08          	mov    %esi,0x8(%esp)
 847fec9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847fecd:	89 04 24             	mov    %eax,(%esp)
 847fed0:	e8 05 f0 fe ff       	call   846eeda <_ZN17CGuildServerProxy26SendApplyOriginalPowerSideEjjh>
 847fed5:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 847fedc:	e8 bd bd c4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 847fee1:	8b 55 0c             	mov    0xc(%ebp),%edx
 847fee4:	89 44 24 04          	mov    %eax,0x4(%esp)
 847fee8:	89 14 24             	mov    %edx,(%esp)
 847feeb:	e8 92 0a e7 ff       	call   82f0982 <_ZN15CUserCharacInfo23SetPowerWarLastPlayTimeEl>
 847fef0:	8b 45 0c             	mov    0xc(%ebp),%eax
 847fef3:	89 04 24             	mov    %eax,(%esp)
 847fef6:	e8 95 f4 da ff       	call   822f390 <_ZNK15CUserCharacInfo19getCurCharacStaminaEv>
 847fefb:	0f b6 d0             	movzbl %al,%edx
 847fefe:	8b 45 0c             	mov    0xc(%ebp),%eax
 847ff01:	89 54 24 04          	mov    %edx,0x4(%esp)
 847ff05:	89 04 24             	mov    %eax,(%esp)
 847ff08:	e8 b7 0a e7 ff       	call   82f09c4 <_ZN15CUserCharacInfo13setPowerWarHPEt>
 847ff0d:	8b 45 0c             	mov    0xc(%ebp),%eax
 847ff10:	89 04 24             	mov    %eax,(%esp)
 847ff13:	e8 44 0b e7 ff       	call   82f0a5c <_ZN15CUserCharacInfo22resetStraightVictoriesEv>
 847ff18:	8b 45 0c             	mov    0xc(%ebp),%eax
 847ff1b:	89 04 24             	mov    %eax,(%esp)
 847ff1e:	e8 a3 fd da ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 847ff23:	0f be d0             	movsbl %al,%edx
 847ff26:	a1 50 be 40 09       	mov    0x940be50,%eax
 847ff2b:	89 54 24 04          	mov    %edx,0x4(%esp)
 847ff2f:	89 04 24             	mov    %eax,(%esp)
 847ff32:	e8 cb 01 00 00       	call   8480102 <_ZN13CPowerManager22IncreasePowerUserCountEc>
 847ff37:	eb 5d                	jmp    847ff96 <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x494>
 847ff39:	8b 45 0c             	mov    0xc(%ebp),%eax
 847ff3c:	89 04 24             	mov    %eax,(%esp)
 847ff3f:	e8 82 fd da ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 847ff44:	0f be d0             	movsbl %al,%edx
 847ff47:	a1 50 be 40 09       	mov    0x940be50,%eax
 847ff4c:	89 54 24 04          	mov    %edx,0x4(%esp)
 847ff50:	89 04 24             	mov    %eax,(%esp)
 847ff53:	e8 e4 01 00 00       	call   848013c <_ZN13CPowerManager22DecreasePowerUserCountEc>
 847ff58:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 847ff5f:	e8 3a bd c4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 847ff64:	8b 55 0c             	mov    0xc(%ebp),%edx
 847ff67:	89 44 24 04          	mov    %eax,0x4(%esp)
 847ff6b:	89 14 24             	mov    %edx,(%esp)
 847ff6e:	e8 ed 10 00 00       	call   8481060 <_ZN15CUserCharacInfo32setCurCharacLastPlayTickPowerWarEl>
 847ff73:	8b 45 0c             	mov    0xc(%ebp),%eax
 847ff76:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 847ff7d:	00 
 847ff7e:	89 04 24             	mov    %eax,(%esp)
 847ff81:	e8 7e 0c e7 ff       	call   82f0c04 <_ZN15CUserCharacInfo24SetCurCharacChaosDieTimeEi>
 847ff86:	8b 45 0c             	mov    0xc(%ebp),%eax
 847ff89:	05 f4 96 07 00       	add    $0x796f4,%eax
 847ff8e:	89 04 24             	mov    %eax,(%esp)
 847ff91:	e8 44 fc da ff       	call   822fbda <_ZN14CCharacterView20enableSaveCharacViewEv>
 847ff96:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 847ff9a:	83 f0 01             	xor    $0x1,%eax
 847ff9d:	84 c0                	test   %al,%al
 847ff9f:	0f 84 4f 01 00 00    	je     84800f4 <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x5f2>
 847ffa5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 847ffa8:	89 04 24             	mov    %eax,(%esp)
 847ffab:	e8 9c dd 10 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 847ffb0:	c7 44 24 08 c3 00 00 	movl   $0xc3,0x8(%esp)
 847ffb7:	00 
 847ffb8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847ffbf:	00 
 847ffc0:	8d 45 d0             	lea    -0x30(%ebp),%eax
 847ffc3:	89 04 24             	mov    %eax,(%esp)
 847ffc6:	e8 31 b9 c4 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 847ffcb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847ffd2:	00 
 847ffd3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 847ffd6:	89 04 24             	mov    %eax,(%esp)
 847ffd9:	e8 42 b9 c4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 847ffde:	0f be 45 b4          	movsbl -0x4c(%ebp),%eax
 847ffe2:	89 44 24 04          	mov    %eax,0x4(%esp)
 847ffe6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 847ffe9:	89 04 24             	mov    %eax,(%esp)
 847ffec:	e8 2f b9 c4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 847fff1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847fff8:	00 
 847fff9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 847fffc:	89 04 24             	mov    %eax,(%esp)
 847ffff:	e8 54 b9 c4 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8480004:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8480007:	89 44 24 04          	mov    %eax,0x4(%esp)
 848000b:	8b 45 0c             	mov    0xc(%ebp),%eax
 848000e:	89 04 24             	mov    %eax,(%esp)
 8480011:	e8 a4 85 1c 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8480016:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8480019:	89 04 24             	mov    %eax,(%esp)
 848001c:	e8 2b dd 10 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8480021:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8480028:	00 
 8480029:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8480030:	00 
 8480031:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8480034:	89 04 24             	mov    %eax,(%esp)
 8480037:	e8 c0 b8 c4 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 848003c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8480043:	00 
 8480044:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8480047:	89 04 24             	mov    %eax,(%esp)
 848004a:	e8 d1 b8 c4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 848004f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8480056:	00 
 8480057:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 848005a:	89 04 24             	mov    %eax,(%esp)
 848005d:	e8 42 9e c5 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8480062:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8480065:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 848006c:	00 
 848006d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8480071:	8b 45 0c             	mov    0xc(%ebp),%eax
 8480074:	89 04 24             	mov    %eax,(%esp)
 8480077:	e8 d2 a3 1d 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 848007c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8480083:	00 
 8480084:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8480087:	89 04 24             	mov    %eax,(%esp)
 848008a:	e8 c9 b8 c4 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 848008f:	e8 13 a3 c5 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8480094:	8b 55 0c             	mov    0xc(%ebp),%edx
 8480097:	89 54 24 08          	mov    %edx,0x8(%esp)
 848009b:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 848009e:	89 54 24 04          	mov    %edx,0x4(%esp)
 84800a2:	89 04 24             	mov    %eax,(%esp)
 84800a5:	e8 b2 48 cb ff       	call   813495c <_ZN9GameWorld8send_allER11PacketGuardP5CUser>
 84800aa:	eb 15                	jmp    84800c1 <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x5bf>
 84800ac:	89 d3                	mov    %edx,%ebx
 84800ae:	89 c6                	mov    %eax,%esi
 84800b0:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84800b3:	89 04 24             	mov    %eax,(%esp)
 84800b6:	e8 c5 dd 10 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84800bb:	89 f0                	mov    %esi,%eax
 84800bd:	89 da                	mov    %ebx,%edx
 84800bf:	eb 0d                	jmp    84800ce <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x5cc>
 84800c1:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84800c4:	89 04 24             	mov    %eax,(%esp)
 84800c7:	e8 b4 dd 10 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84800cc:	eb 1b                	jmp    84800e9 <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc+0x5e7>
 84800ce:	89 d3                	mov    %edx,%ebx
 84800d0:	89 c6                	mov    %eax,%esi
 84800d2:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84800d5:	89 04 24             	mov    %eax,(%esp)
 84800d8:	e8 a3 dd 10 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84800dd:	89 f0                	mov    %esi,%eax
 84800df:	89 da                	mov    %ebx,%edx
 84800e1:	89 04 24             	mov    %eax,(%esp)
 84800e4:	e8 67 36 66 00       	call   8ae3750 <_Unwind_Resume>
 84800e9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84800ec:	89 04 24             	mov    %eax,(%esp)
 84800ef:	e8 8c dd 10 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84800f4:	b8 01 00 00 00       	mov    $0x1,%eax
 84800f9:	83 c4 5c             	add    $0x5c,%esp
 84800fc:	5b                   	pop    %ebx
 84800fd:	5e                   	pop    %esi
 84800fe:	5f                   	pop    %edi
 84800ff:	5d                   	pop    %ebp
 8480100:	c3                   	ret
 8480101:	90                   	nop

```

```c
// CPowerManager::ProcessJoinPowerWar @ 0x847fb02

/* CPowerManager::ProcessJoinPowerWar(CUser*, char) */

undefined4 __thiscall
CPowerManager::ProcessJoinPowerWar(CPowerManager *this,CUser *param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  uchar uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  CPrivateStoreMgr *this_00;
  uint uVar8;
  uint uVar9;
  CGuildServerProxy *this_01;
  long lVar10;
  GameWorld *this_02;
  PacketGuard local_40 [12];
  PacketGuard local_34 [12];
  uint local_28;
  char local_21;
  int local_20;
  
  iVar5 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  if (iVar5 == 9) {
    CUser::SendCmdErrorPacket(param_1,0xc3,0x15);
    return 1;
  }
  iVar5 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  if (iVar5 == 10) {
    CUser::SendCmdErrorPacket(param_1,0xc3,0x15);
    return 1;
  }
  cVar2 = CUser::isCompetitionMercenary(param_1);
  if (cVar2 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0xc3,0x15);
    return 1;
  }
  iVar5 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
  if (iVar5 == 0) {
    CUser::SendCmdErrorPacket(param_1,0xc3,100);
    return 1;
  }
  cVar2 = CUser::getPowerSide(param_1);
  if (cVar2 == '\0') {
    CUser::SendCmdErrorPacket(param_1,0xc3,0x82);
    return 1;
  }
  if ((param_2 != '\0') && (param_2 != '\x01')) {
    CUser::SendCmdErrorPacket(param_1,0xc3,1);
    return 1;
  }
  local_28 = 0;
  if (param_2 == '\x01') {
    iVar5 = G_CEnvironment();
    iVar5 = *(int *)(iVar5 + 0x1b0);
    iVar6 = G_CEnvironment();
    iVar6 = *(int *)(iVar6 + 0x378);
    iVar7 = G_CDataManager();
    cVar2 = PowerParameterScript::checkPowerWarServer
                      ((PowerParameterScript *)(iVar7 + 0xa628),iVar6,iVar5);
    if (cVar2 != '\x01') {
      CUser::SendCmdErrorPacket(param_1,0xc3,0x80);
      return 1;
    }
    cVar2 = IsPowerWarEventOn();
    if (cVar2 != '\x01') {
      CUser::SendCmdErrorPacket(param_1,0xc3,0x7f);
      return 1;
    }
    local_28 = CheckPowerWarEnterLimit(this,param_1);
    if (local_28 != 0) {
      CUser::SendCmdErrorPacket(param_1,0xc3,local_28 & 0xff);
      return 1;
    }
    local_20 = 0;
    iVar5 = G_CDataManager();
    local_20 = *(int *)(iVar5 + 0xa6e0) * 0x3c;
    iVar5 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    iVar6 = CUserCharacInfo::getCurCharacLastPlayTickPowerWar((CUserCharacInfo *)param_1);
    if (iVar5 - iVar6 <= local_20) {
      CUser::SendCmdErrorPacket(param_1,0xc3,0x84);
      return 1;
    }
    this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
    cVar2 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this_00,param_1);
    if (cVar2 != '\0') {
      CUser::SendCmdErrorPacket(param_1,0xc3,1);
      return 0;
    }
    cVar2 = CUserCharacInfo::IsBusyDisjointStore((CUserCharacInfo *)param_1);
    if (cVar2 != '\0') {
      CUser::SendCmdErrorPacket(param_1,0xc3,1);
      return 0;
    }
  }
  CUserCharacInfo::setCurrCharacJoinPower((CUserCharacInfo *)param_1,param_2);
  local_21 = '\0';
  cVar2 = CUser::getPowerSide(param_1);
  if ((cVar2 == '\x03') || (cVar2 = CUser::getPowerSide(param_1), cVar2 == '\x04')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    local_21 = '\x01';
  }
  if (param_2 == '\x01') {
    if (local_21 != '\0') {
      uVar3 = CUser::getPowerSide(param_1);
      uVar8 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
      uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      this_01 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,0);
      CGuildServerProxy::SendApplyOriginalPowerSide(this_01,uVar9,uVar8,uVar3);
    }
    lVar10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    CUserCharacInfo::SetPowerWarLastPlayTime((CUserCharacInfo *)param_1,lVar10);
    uVar4 = CUserCharacInfo::getCurCharacStamina((CUserCharacInfo *)param_1);
    CUserCharacInfo::setPowerWarHP((CUserCharacInfo *)param_1,uVar4 & 0xff);
    CUserCharacInfo::resetStraightVictories((CUserCharacInfo *)param_1);
    cVar2 = CUser::getPowerSide(param_1);
    IncreasePowerUserCount(GlobalData::s_power_manager,cVar2);
  }
  else {
    cVar2 = CUser::getPowerSide(param_1);
    DecreasePowerUserCount(GlobalData::s_power_manager,cVar2);
    lVar10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    CUserCharacInfo::setCurCharacLastPlayTickPowerWar((CUserCharacInfo *)param_1,lVar10);
    CUserCharacInfo::SetCurCharacChaosDieTime((CUserCharacInfo *)param_1,0);
    CCharacterView::enableSaveCharacView((CCharacterView *)(param_1 + 0x796f4));
  }
  if (local_21 != '\x01') {
    PacketGuard::PacketGuard(local_34);
                    /* try { // try from 0847ffc6 to 08480020 has its CatchHandler @ 084800ce */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,1,0xc3);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(int)param_2);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
    CUser::Send(param_1,local_34);
    PacketGuard::PacketGuard(local_40);
                    /* try { // try from 08480037 to 084800a9 has its CatchHandler @ 084800ac */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,0,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_40,1);
    CUser::make_basic_info(param_1,(char *)local_40,'\0');
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
    this_02 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this_02,local_40,param_1);
                    /* try { // try from 084800c7 to 084800cb has its CatchHandler @ 084800ce */
    PacketGuard::~PacketGuard(local_40);
    PacketGuard::~PacketGuard(local_34);
  }
  return 1;
}

```

---

## SendPowerWarUserStatueInfo

```asm
// === 0847f200 CPowerManager::SendPowerWarUserStatueInfo  [0x0847f200-0x847f4fd] ===
 847f200:	55                   	push   %ebp
 847f201:	89 e5                	mov    %esp,%ebp
 847f203:	56                   	push   %esi
 847f204:	53                   	push   %ebx
 847f205:	83 ec 30             	sub    $0x30,%esp
 847f208:	8d 45 d8             	lea    -0x28(%ebp),%eax
 847f20b:	89 04 24             	mov    %eax,(%esp)
 847f20e:	e8 39 eb 10 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 847f213:	c7 44 24 08 b6 00 00 	movl   $0xb6,0x8(%esp)
 847f21a:	00 
 847f21b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 847f222:	00 
 847f223:	8d 45 d8             	lea    -0x28(%ebp),%eax
 847f226:	89 04 24             	mov    %eax,(%esp)
 847f229:	e8 ce c6 c4 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 847f22e:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 847f235:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 847f23c:	eb 24                	jmp    847f262 <_ZN13CPowerManager26SendPowerWarUserStatueInfoEP5CUser+0x62>
 847f23e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 847f241:	8b 55 08             	mov    0x8(%ebp),%edx
 847f244:	c1 e0 02             	shl    $0x2,%eax
 847f247:	89 c1                	mov    %eax,%ecx
 847f249:	c1 e1 05             	shl    $0x5,%ecx
 847f24c:	01 c8                	add    %ecx,%eax
 847f24e:	8d 04 02             	lea    (%edx,%eax,1),%eax
 847f251:	83 c0 2c             	add    $0x2c,%eax
 847f254:	8b 00                	mov    (%eax),%eax
 847f256:	85 c0                	test   %eax,%eax
 847f258:	74 04                	je     847f25e <_ZN13CPowerManager26SendPowerWarUserStatueInfoEP5CUser+0x5e>
 847f25a:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 847f25e:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 847f262:	8b 45 ec             	mov    -0x14(%ebp),%eax
 847f265:	83 f8 02             	cmp    $0x2,%eax
 847f268:	0f 96 c0             	setbe  %al
 847f26b:	84 c0                	test   %al,%al
 847f26d:	75 cf                	jne    847f23e <_ZN13CPowerManager26SendPowerWarUserStatueInfoEP5CUser+0x3e>
 847f26f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 847f272:	0f be c0             	movsbl %al,%eax
 847f275:	89 44 24 04          	mov    %eax,0x4(%esp)
 847f279:	8d 45 d8             	lea    -0x28(%ebp),%eax
 847f27c:	89 04 24             	mov    %eax,(%esp)
 847f27f:	e8 9c c6 c4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 847f284:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 847f28b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 847f292:	e9 e5 01 00 00       	jmp    847f47c <_ZN13CPowerManager26SendPowerWarUserStatueInfoEP5CUser+0x27c>
 847f297:	8b 45 f0             	mov    -0x10(%ebp),%eax
 847f29a:	c1 e0 02             	shl    $0x2,%eax
 847f29d:	89 c2                	mov    %eax,%edx
 847f29f:	c1 e2 05             	shl    $0x5,%edx
 847f2a2:	01 d0                	add    %edx,%eax
 847f2a4:	83 c0 20             	add    $0x20,%eax
 847f2a7:	03 45 08             	add    0x8(%ebp),%eax
 847f2aa:	83 c0 10             	add    $0x10,%eax
 847f2ad:	89 04 24             	mov    %eax,(%esp)
 847f2b0:	e8 fb f0 bf ff       	call   807e3b0 <strlen@plt>
 847f2b5:	89 45 e8             	mov    %eax,-0x18(%ebp)
 847f2b8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 847f2bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 847f2bf:	8d 45 d8             	lea    -0x28(%ebp),%eax
 847f2c2:	89 04 24             	mov    %eax,(%esp)
 847f2c5:	e8 72 c6 c4 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 847f2ca:	8b 45 f0             	mov    -0x10(%ebp),%eax
 847f2cd:	c1 e0 02             	shl    $0x2,%eax
 847f2d0:	89 c2                	mov    %eax,%edx
 847f2d2:	c1 e2 05             	shl    $0x5,%edx
 847f2d5:	01 d0                	add    %edx,%eax
 847f2d7:	83 c0 20             	add    $0x20,%eax
 847f2da:	03 45 08             	add    0x8(%ebp),%eax
 847f2dd:	8d 50 10             	lea    0x10(%eax),%edx
 847f2e0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 847f2e3:	89 44 24 08          	mov    %eax,0x8(%esp)
 847f2e7:	89 54 24 04          	mov    %edx,0x4(%esp)
 847f2eb:	8d 45 d8             	lea    -0x28(%ebp),%eax
 847f2ee:	89 04 24             	mov    %eax,(%esp)
 847f2f1:	e8 ee 80 d3 ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 847f2f6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 847f2f9:	8b 55 08             	mov    0x8(%ebp),%edx
 847f2fc:	c1 e0 02             	shl    $0x2,%eax
 847f2ff:	89 c1                	mov    %eax,%ecx
 847f301:	c1 e1 05             	shl    $0x5,%ecx
 847f304:	01 c8                	add    %ecx,%eax
 847f306:	8d 04 02             	lea    (%edx,%eax,1),%eax
 847f309:	83 c0 40             	add    $0x40,%eax
 847f30c:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 847f310:	0f be c0             	movsbl %al,%eax
 847f313:	89 44 24 04          	mov    %eax,0x4(%esp)
 847f317:	8d 45 d8             	lea    -0x28(%ebp),%eax
 847f31a:	89 04 24             	mov    %eax,(%esp)
 847f31d:	e8 fe c5 c4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 847f322:	8b 45 f0             	mov    -0x10(%ebp),%eax
 847f325:	8b 55 08             	mov    0x8(%ebp),%edx
 847f328:	c1 e0 02             	shl    $0x2,%eax
 847f32b:	89 c1                	mov    %eax,%ecx
 847f32d:	c1 e1 05             	shl    $0x5,%ecx
 847f330:	01 c8                	add    %ecx,%eax
 847f332:	8d 04 02             	lea    (%edx,%eax,1),%eax
 847f335:	83 c0 40             	add    $0x40,%eax
 847f338:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 847f33c:	0f be c0             	movsbl %al,%eax
 847f33f:	89 44 24 04          	mov    %eax,0x4(%esp)
 847f343:	8d 45 d8             	lea    -0x28(%ebp),%eax
 847f346:	89 04 24             	mov    %eax,(%esp)
 847f349:	e8 d2 c5 c4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 847f34e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 847f351:	8b 55 08             	mov    0x8(%ebp),%edx
 847f354:	c1 e0 02             	shl    $0x2,%eax
 847f357:	89 c1                	mov    %eax,%ecx
 847f359:	c1 e1 05             	shl    $0x5,%ecx
 847f35c:	01 c8                	add    %ecx,%eax
 847f35e:	8d 04 02             	lea    (%edx,%eax,1),%eax
 847f361:	83 c0 40             	add    $0x40,%eax
 847f364:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 847f368:	0f be c0             	movsbl %al,%eax
 847f36b:	89 44 24 04          	mov    %eax,0x4(%esp)
 847f36f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 847f372:	89 04 24             	mov    %eax,(%esp)
 847f375:	e8 a6 c5 c4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 847f37a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 847f37d:	c1 e0 02             	shl    $0x2,%eax
 847f380:	89 c2                	mov    %eax,%edx
 847f382:	c1 e2 05             	shl    $0x5,%edx
 847f385:	01 d0                	add    %edx,%eax
 847f387:	83 c0 40             	add    $0x40,%eax
 847f38a:	03 45 08             	add    0x8(%ebp),%eax
 847f38d:	83 c0 11             	add    $0x11,%eax
 847f390:	89 04 24             	mov    %eax,(%esp)
 847f393:	e8 18 f0 bf ff       	call   807e3b0 <strlen@plt>
 847f398:	89 45 e8             	mov    %eax,-0x18(%ebp)
 847f39b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 847f39e:	89 44 24 04          	mov    %eax,0x4(%esp)
 847f3a2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 847f3a5:	89 04 24             	mov    %eax,(%esp)
 847f3a8:	e8 8f c5 c4 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 847f3ad:	8b 45 f0             	mov    -0x10(%ebp),%eax
 847f3b0:	c1 e0 02             	shl    $0x2,%eax
 847f3b3:	89 c2                	mov    %eax,%edx
 847f3b5:	c1 e2 05             	shl    $0x5,%edx
 847f3b8:	01 d0                	add    %edx,%eax
 847f3ba:	83 c0 40             	add    $0x40,%eax
 847f3bd:	03 45 08             	add    0x8(%ebp),%eax
 847f3c0:	8d 50 11             	lea    0x11(%eax),%edx
 847f3c3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 847f3c6:	89 44 24 08          	mov    %eax,0x8(%esp)
 847f3ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 847f3ce:	8d 45 d8             	lea    -0x28(%ebp),%eax
 847f3d1:	89 04 24             	mov    %eax,(%esp)
 847f3d4:	e8 0b 80 d3 ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 847f3d9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 847f3dc:	8b 55 08             	mov    0x8(%ebp),%edx
 847f3df:	c1 e0 02             	shl    $0x2,%eax
 847f3e2:	89 c1                	mov    %eax,%ecx
 847f3e4:	c1 e1 05             	shl    $0x5,%ecx
 847f3e7:	01 c8                	add    %ecx,%eax
 847f3e9:	8d 04 02             	lea    (%edx,%eax,1),%eax
 847f3ec:	83 c0 7c             	add    $0x7c,%eax
 847f3ef:	8b 00                	mov    (%eax),%eax
 847f3f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 847f3f5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 847f3f8:	89 04 24             	mov    %eax,(%esp)
 847f3fb:	e8 3c c5 c4 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 847f400:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 847f407:	eb 64                	jmp    847f46d <_ZN13CPowerManager26SendPowerWarUserStatueInfoEP5CUser+0x26d>
 847f409:	8b 55 f0             	mov    -0x10(%ebp),%edx
 847f40c:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 847f40f:	8b 4d 08             	mov    0x8(%ebp),%ecx
 847f412:	89 d0                	mov    %edx,%eax
 847f414:	c1 e0 05             	shl    $0x5,%eax
 847f417:	01 d0                	add    %edx,%eax
 847f419:	01 d8                	add    %ebx,%eax
 847f41b:	83 c0 1c             	add    $0x1c,%eax
 847f41e:	8b 44 81 10          	mov    0x10(%ecx,%eax,4),%eax
 847f422:	85 c0                	test   %eax,%eax
 847f424:	74 06                	je     847f42c <_ZN13CPowerManager26SendPowerWarUserStatueInfoEP5CUser+0x22c>
 847f426:	83 7d f4 09          	cmpl   $0x9,-0xc(%ebp)
 847f42a:	75 15                	jne    847f441 <_ZN13CPowerManager26SendPowerWarUserStatueInfoEP5CUser+0x241>
 847f42c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 847f433:	ff 
 847f434:	8d 45 d8             	lea    -0x28(%ebp),%eax
 847f437:	89 04 24             	mov    %eax,(%esp)
 847f43a:	e8 fd c4 c4 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 847f43f:	eb 28                	jmp    847f469 <_ZN13CPowerManager26SendPowerWarUserStatueInfoEP5CUser+0x269>
 847f441:	8b 55 f0             	mov    -0x10(%ebp),%edx
 847f444:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 847f447:	8b 4d 08             	mov    0x8(%ebp),%ecx
 847f44a:	89 d0                	mov    %edx,%eax
 847f44c:	c1 e0 05             	shl    $0x5,%eax
 847f44f:	01 d0                	add    %edx,%eax
 847f451:	01 d8                	add    %ebx,%eax
 847f453:	83 c0 1c             	add    $0x1c,%eax
 847f456:	8b 44 81 10          	mov    0x10(%ecx,%eax,4),%eax
 847f45a:	89 44 24 04          	mov    %eax,0x4(%esp)
 847f45e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 847f461:	89 04 24             	mov    %eax,(%esp)
 847f464:	e8 d3 c4 c4 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 847f469:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 847f46d:	83 7d f4 0a          	cmpl   $0xa,-0xc(%ebp)
 847f471:	0f 9e c0             	setle  %al
 847f474:	84 c0                	test   %al,%al
 847f476:	75 91                	jne    847f409 <_ZN13CPowerManager26SendPowerWarUserStatueInfoEP5CUser+0x209>
 847f478:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 847f47c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 847f47f:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 847f482:	0f 9c c0             	setl   %al
 847f485:	84 c0                	test   %al,%al
 847f487:	0f 85 0a fe ff ff    	jne    847f297 <_ZN13CPowerManager26SendPowerWarUserStatueInfoEP5CUser+0x97>
 847f48d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847f494:	00 
 847f495:	8d 45 d8             	lea    -0x28(%ebp),%eax
 847f498:	89 04 24             	mov    %eax,(%esp)
 847f49b:	e8 b8 c4 c4 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 847f4a0:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 847f4a4:	74 14                	je     847f4ba <_ZN13CPowerManager26SendPowerWarUserStatueInfoEP5CUser+0x2ba>
 847f4a6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 847f4a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 847f4ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 847f4b0:	89 04 24             	mov    %eax,(%esp)
 847f4b3:	e8 02 91 1c 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 847f4b8:	eb 31                	jmp    847f4eb <_ZN13CPowerManager26SendPowerWarUserStatueInfoEP5CUser+0x2eb>
 847f4ba:	e8 e8 ae c5 ff       	call   80da3a7 <_Z11G_GameWorldv>
 847f4bf:	8d 55 d8             	lea    -0x28(%ebp),%edx
 847f4c2:	89 54 24 04          	mov    %edx,0x4(%esp)
 847f4c6:	89 04 24             	mov    %eax,(%esp)
 847f4c9:	e8 46 97 24 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 847f4ce:	eb 1b                	jmp    847f4eb <_ZN13CPowerManager26SendPowerWarUserStatueInfoEP5CUser+0x2eb>
 847f4d0:	89 d3                	mov    %edx,%ebx
 847f4d2:	89 c6                	mov    %eax,%esi
 847f4d4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 847f4d7:	89 04 24             	mov    %eax,(%esp)
 847f4da:	e8 a1 e9 10 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 847f4df:	89 f0                	mov    %esi,%eax
 847f4e1:	89 da                	mov    %ebx,%edx
 847f4e3:	89 04 24             	mov    %eax,(%esp)
 847f4e6:	e8 65 42 66 00       	call   8ae3750 <_Unwind_Resume>
 847f4eb:	8d 45 d8             	lea    -0x28(%ebp),%eax
 847f4ee:	89 04 24             	mov    %eax,(%esp)
 847f4f1:	e8 8a e9 10 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 847f4f6:	83 c4 30             	add    $0x30,%esp
 847f4f9:	5b                   	pop    %ebx
 847f4fa:	5e                   	pop    %esi
 847f4fb:	5d                   	pop    %ebp
 847f4fc:	c3                   	ret
 847f4fd:	90                   	nop

```

```c
// CPowerManager::SendPowerWarUserStatueInfo @ 0x847f200

/* CPowerManager::SendPowerWarUserStatueInfo(CUser*) */

void __thiscall CPowerManager::SendPowerWarUserStatueInfo(CPowerManager *this,CUser *param_1)

{
  GameWorld *this_00;
  PacketGuard local_2c [12];
  int local_20;
  size_t local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 0847f229 to 0847f4cd has its CatchHandler @ 0847f4d0 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0xb6);
  local_20 = 0;
  for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
    if (*(int *)(this + local_18 * 0x84 + 0x2c) != 0) {
      local_20 = local_20 + 1;
    }
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(int)(char)local_20);
  local_1c = 0;
  for (local_14 = 0; local_14 < local_20; local_14 = local_14 + 1) {
    local_1c = strlen((char *)(this + local_14 * 0x84 + 0x30));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,local_1c);
    InterfacePacketBuf::put_str
              ((InterfacePacketBuf *)local_2c,(char *)(this + local_14 * 0x84 + 0x30),local_1c);
    InterfacePacketBuf::put_byte
              ((InterfacePacketBuf *)local_2c,(int)(char)this[local_14 * 0x84 + 0x4e]);
    InterfacePacketBuf::put_byte
              ((InterfacePacketBuf *)local_2c,(int)(char)this[local_14 * 0x84 + 0x4f]);
    InterfacePacketBuf::put_byte
              ((InterfacePacketBuf *)local_2c,(int)(char)this[local_14 * 0x84 + 0x50]);
    local_1c = strlen((char *)(this + local_14 * 0x84 + 0x51));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,local_1c);
    InterfacePacketBuf::put_str
              ((InterfacePacketBuf *)local_2c,(char *)(this + local_14 * 0x84 + 0x51),local_1c);
    InterfacePacketBuf::put_int
              ((InterfacePacketBuf *)local_2c,*(int *)(this + local_14 * 0x84 + 0x7c));
    for (local_10 = 0; local_10 < 0xb; local_10 = local_10 + 1) {
      if ((*(int *)(this + (local_14 * 0x21 + local_10 + 0x1c) * 4 + 0x10) == 0) || (local_10 == 9))
      {
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,-1);
      }
      else {
        InterfacePacketBuf::put_int
                  ((InterfacePacketBuf *)local_2c,
                   *(int *)(this + (local_14 * 0x21 + local_10 + 0x1c) * 4 + 0x10));
      }
    }
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
  if (param_1 == (CUser *)0x0) {
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this_00,local_2c);
  }
  else {
    CUser::Send(param_1,local_2c);
  }
  PacketGuard::~PacketGuard(local_2c);
  return;
}

```

---

## SetPowerInfo

```asm
// === 0847eb76 CPowerManager::SetPowerInfo  [0x0847eb76-0x847eb9f] ===
 847eb76:	55                   	push   %ebp
 847eb77:	89 e5                	mov    %esp,%ebp
 847eb79:	83 ec 04             	sub    $0x4,%esp
 847eb7c:	8b 45 0c             	mov    0xc(%ebp),%eax
 847eb7f:	88 45 fc             	mov    %al,-0x4(%ebp)
 847eb82:	8b 45 08             	mov    0x8(%ebp),%eax
 847eb85:	0f b6 55 fc          	movzbl -0x4(%ebp),%edx
 847eb89:	88 10                	mov    %dl,(%eax)
 847eb8b:	8b 45 08             	mov    0x8(%ebp),%eax
 847eb8e:	8b 55 10             	mov    0x10(%ebp),%edx
 847eb91:	89 50 04             	mov    %edx,0x4(%eax)
 847eb94:	8b 45 08             	mov    0x8(%ebp),%eax
 847eb97:	8b 55 14             	mov    0x14(%ebp),%edx
 847eb9a:	89 50 08             	mov    %edx,0x8(%eax)
 847eb9d:	c9                   	leave
 847eb9e:	c3                   	ret
 847eb9f:	90                   	nop

```

```c
// CPowerManager::SetPowerInfo @ 0x847eb76

/* CPowerManager::SetPowerInfo(char, int, int) */

void __thiscall
CPowerManager::SetPowerInfo(CPowerManager *this,char param_1,int param_2,int param_3)

{
  *this = (CPowerManager)param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  return;
}

```

---

## SetPowerWarStartTime

```asm
// === 0847fa2e CPowerManager::SetPowerWarStartTime  [0x0847fa2e-0x847fa7b] ===
 847fa2e:	55                   	push   %ebp
 847fa2f:	89 e5                	mov    %esp,%ebp
 847fa31:	53                   	push   %ebx
 847fa32:	83 ec 10             	sub    $0x10,%esp
 847fa35:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 847fa38:	8b 4d 10             	mov    0x10(%ebp),%ecx
 847fa3b:	8b 55 14             	mov    0x14(%ebp),%edx
 847fa3e:	8b 45 18             	mov    0x18(%ebp),%eax
 847fa41:	88 5d f8             	mov    %bl,-0x8(%ebp)
 847fa44:	88 4d f4             	mov    %cl,-0xc(%ebp)
 847fa47:	88 55 f0             	mov    %dl,-0x10(%ebp)
 847fa4a:	88 45 ec             	mov    %al,-0x14(%ebp)
 847fa4d:	8b 45 08             	mov    0x8(%ebp),%eax
 847fa50:	0f b6 55 f8          	movzbl -0x8(%ebp),%edx
 847fa54:	88 50 24             	mov    %dl,0x24(%eax)
 847fa57:	8b 45 08             	mov    0x8(%ebp),%eax
 847fa5a:	0f b6 55 f4          	movzbl -0xc(%ebp),%edx
 847fa5e:	88 50 25             	mov    %dl,0x25(%eax)
 847fa61:	8b 45 08             	mov    0x8(%ebp),%eax
 847fa64:	0f b6 55 f0          	movzbl -0x10(%ebp),%edx
 847fa68:	88 50 26             	mov    %dl,0x26(%eax)
 847fa6b:	8b 45 08             	mov    0x8(%ebp),%eax
 847fa6e:	0f b6 55 ec          	movzbl -0x14(%ebp),%edx
 847fa72:	88 50 27             	mov    %dl,0x27(%eax)
 847fa75:	83 c4 10             	add    $0x10,%esp
 847fa78:	5b                   	pop    %ebx
 847fa79:	5d                   	pop    %ebp
 847fa7a:	c3                   	ret
 847fa7b:	90                   	nop

```

```c
// CPowerManager::SetPowerWarStartTime @ 0x847fa2e

/* CPowerManager::SetPowerWarStartTime(unsigned char, unsigned char, unsigned char, unsigned char)
    */

void __thiscall
CPowerManager::SetPowerWarStartTime
          (CPowerManager *this,uchar param_1,uchar param_2,uchar param_3,uchar param_4)

{
  this[0x24] = (CPowerManager)param_1;
  this[0x25] = (CPowerManager)param_2;
  this[0x26] = (CPowerManager)param_3;
  this[0x27] = (CPowerManager)param_4;
  return;
}

```

---

## SetPowerWarUserRankingInfo

```asm
// === 0847ebec CPowerManager::SetPowerWarUserRankingInfo  [0x0847ebec-0x847ed4d] ===
 847ebec:	55                   	push   %ebp
 847ebed:	89 e5                	mov    %esp,%ebp
 847ebef:	56                   	push   %esi
 847ebf0:	53                   	push   %ebx
 847ebf1:	83 ec 20             	sub    $0x20,%esp
 847ebf4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 847ebfb:	e9 35 01 00 00       	jmp    847ed35 <_ZN13CPowerManager26SetPowerWarUserRankingInfoEPj+0x149>
 847ec00:	8b 45 f4             	mov    -0xc(%ebp),%eax
 847ec03:	c1 e0 02             	shl    $0x2,%eax
 847ec06:	03 45 0c             	add    0xc(%ebp),%eax
 847ec09:	8b 00                	mov    (%eax),%eax
 847ec0b:	85 c0                	test   %eax,%eax
 847ec0d:	0f 84 04 01 00 00    	je     847ed17 <_ZN13CPowerManager26SetPowerWarUserRankingInfoEPj+0x12b>
 847ec13:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 847ec16:	8b 45 f4             	mov    -0xc(%ebp),%eax
 847ec19:	c1 e0 02             	shl    $0x2,%eax
 847ec1c:	03 45 0c             	add    0xc(%ebp),%eax
 847ec1f:	8b 10                	mov    (%eax),%edx
 847ec21:	8b 4d 08             	mov    0x8(%ebp),%ecx
 847ec24:	89 d8                	mov    %ebx,%eax
 847ec26:	c1 e0 02             	shl    $0x2,%eax
 847ec29:	89 c3                	mov    %eax,%ebx
 847ec2b:	c1 e3 05             	shl    $0x5,%ebx
 847ec2e:	01 d8                	add    %ebx,%eax
 847ec30:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 847ec33:	83 c0 2c             	add    $0x2c,%eax
 847ec36:	89 10                	mov    %edx,(%eax)
 847ec38:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847ec3d:	c7 44 24 08 7d 00 00 	movl   $0x7d,0x8(%esp)
 847ec44:	00 
 847ec45:	c7 44 24 04 23 1d c7 	movl   $0x8c71d23,0x4(%esp)
 847ec4c:	08 
 847ec4d:	89 04 24             	mov    %eax,(%esp)
 847ec50:	e8 31 0e e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847ec55:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847ec5c:	00 
 847ec5d:	89 44 24 04          	mov    %eax,0x4(%esp)
 847ec61:	8d 45 ec             	lea    -0x14(%ebp),%eax
 847ec64:	89 04 24             	mov    %eax,(%esp)
 847ec67:	e8 ba 9f c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847ec6c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 847ec6f:	89 04 24             	mov    %eax,(%esp)
 847ec72:	e8 cf 9f c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847ec77:	c7 44 24 04 66 01 00 	movl   $0x166,0x4(%esp)
 847ec7e:	00 
 847ec7f:	89 04 24             	mov    %eax,(%esp)
 847ec82:	e8 cf 9f c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847ec87:	8d 45 ec             	lea    -0x14(%ebp),%eax
 847ec8a:	89 04 24             	mov    %eax,(%esp)
 847ec8d:	e8 b4 9f c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847ec92:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 847ec99:	ff 
 847ec9a:	89 04 24             	mov    %eax,(%esp)
 847ec9d:	e8 b4 9f c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847eca2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 847eca5:	8b 55 08             	mov    0x8(%ebp),%edx
 847eca8:	c1 e0 02             	shl    $0x2,%eax
 847ecab:	89 c1                	mov    %eax,%ecx
 847ecad:	c1 e1 05             	shl    $0x5,%ecx
 847ecb0:	01 c8                	add    %ecx,%eax
 847ecb2:	8d 04 02             	lea    (%edx,%eax,1),%eax
 847ecb5:	83 c0 2c             	add    $0x2c,%eax
 847ecb8:	8b 18                	mov    (%eax),%ebx
 847ecba:	8d 45 ec             	lea    -0x14(%ebp),%eax
 847ecbd:	89 04 24             	mov    %eax,(%esp)
 847ecc0:	e8 81 9f c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847ecc5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847ecc9:	89 04 24             	mov    %eax,(%esp)
 847eccc:	e8 c1 35 c6 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 847ecd1:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847ecd6:	8d 55 ec             	lea    -0x14(%ebp),%edx
 847ecd9:	89 54 24 08          	mov    %edx,0x8(%esp)
 847ecdd:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 847ece4:	00 
 847ece5:	89 04 24             	mov    %eax,(%esp)
 847ece8:	e8 f1 22 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847eced:	eb 1b                	jmp    847ed0a <_ZN13CPowerManager26SetPowerWarUserRankingInfoEPj+0x11e>
 847ecef:	89 d3                	mov    %edx,%ebx
 847ecf1:	89 c6                	mov    %eax,%esi
 847ecf3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 847ecf6:	89 04 24             	mov    %eax,(%esp)
 847ecf9:	e8 d4 db 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847ecfe:	89 f0                	mov    %esi,%eax
 847ed00:	89 da                	mov    %ebx,%edx
 847ed02:	89 04 24             	mov    %eax,(%esp)
 847ed05:	e8 46 4a 66 00       	call   8ae3750 <_Unwind_Resume>
 847ed0a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 847ed0d:	89 04 24             	mov    %eax,(%esp)
 847ed10:	e8 bd db 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847ed15:	eb 1a                	jmp    847ed31 <_ZN13CPowerManager26SetPowerWarUserRankingInfoEPj+0x145>
 847ed17:	8b 45 f4             	mov    -0xc(%ebp),%eax
 847ed1a:	8b 55 08             	mov    0x8(%ebp),%edx
 847ed1d:	c1 e0 02             	shl    $0x2,%eax
 847ed20:	89 c1                	mov    %eax,%ecx
 847ed22:	c1 e1 05             	shl    $0x5,%ecx
 847ed25:	01 c8                	add    %ecx,%eax
 847ed27:	8d 04 02             	lea    (%edx,%eax,1),%eax
 847ed2a:	83 c0 20             	add    $0x20,%eax
 847ed2d:	c6 40 08 01          	movb   $0x1,0x8(%eax)
 847ed31:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 847ed35:	8b 45 f4             	mov    -0xc(%ebp),%eax
 847ed38:	83 f8 02             	cmp    $0x2,%eax
 847ed3b:	0f 96 c0             	setbe  %al
 847ed3e:	84 c0                	test   %al,%al
 847ed40:	0f 85 ba fe ff ff    	jne    847ec00 <_ZN13CPowerManager26SetPowerWarUserRankingInfoEPj+0x14>
 847ed46:	83 c4 20             	add    $0x20,%esp
 847ed49:	5b                   	pop    %ebx
 847ed4a:	5e                   	pop    %esi
 847ed4b:	5d                   	pop    %ebp
 847ed4c:	c3                   	ret
 847ed4d:	90                   	nop

```

```c
// CPowerManager::SetPowerWarUserRankingInfo @ 0x847ebec

/* CPowerManager::SetPowerWarUserRankingInfo(unsigned int*) */

void __thiscall CPowerManager::SetPowerWarUserRankingInfo(CPowerManager *this,uint *param_1)

{
  uint uVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  CStreamGuard local_18 [8];
  uint local_10;
  
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    if (param_1[local_10] == 0) {
      this[local_10 * 0x84 + 0x28] = (CPowerManager)0x1;
    }
    else {
      *(uint *)(this + local_10 * 0x84 + 0x2c) = param_1[local_10];
      pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DNF_PowerManager.cpp",0x7d);
      CStreamGuard::CStreamGuard(local_18,pSVar2,true);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0847ec82 to 0847ecec has its CatchHandler @ 0847ecef */
      CStreamGuard::operator<<(pCVar3,0x166);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
      CStreamGuard::operator<<(pCVar3,-1);
      uVar1 = *(uint *)(this + local_10 * 0x84 + 0x2c);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
      CStreamGuard::operator<<(pCVar3,uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
      CStreamGuard::~CStreamGuard(local_18);
    }
  }
  return;
}

```

---

## SetPowerWarUserStatueInfo

```asm
// === 0847ed4e CPowerManager::SetPowerWarUserStatueInfo  [0x0847ed4e-0x847f1af] ===
 847ed4e:	55                   	push   %ebp
 847ed4f:	89 e5                	mov    %esp,%ebp
 847ed51:	57                   	push   %edi
 847ed52:	56                   	push   %esi
 847ed53:	53                   	push   %ebx
 847ed54:	81 ec bc 00 00 00    	sub    $0xbc,%esp
 847ed5a:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 847ed61:	e9 0b 04 00 00       	jmp    847f171 <_ZN13CPowerManager25SetPowerWarUserStatueInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFO+0x423>
 847ed66:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 847ed69:	8b 55 08             	mov    0x8(%ebp),%edx
 847ed6c:	c1 e0 02             	shl    $0x2,%eax
 847ed6f:	89 c1                	mov    %eax,%ecx
 847ed71:	c1 e1 05             	shl    $0x5,%ecx
 847ed74:	01 c8                	add    %ecx,%eax
 847ed76:	8d 04 02             	lea    (%edx,%eax,1),%eax
 847ed79:	83 c0 2c             	add    $0x2c,%eax
 847ed7c:	8b 10                	mov    (%eax),%edx
 847ed7e:	8b 45 0c             	mov    0xc(%ebp),%eax
 847ed81:	8b 00                	mov    (%eax),%eax
 847ed83:	39 c2                	cmp    %eax,%edx
 847ed85:	0f 85 e2 03 00 00    	jne    847f16d <_ZN13CPowerManager25SetPowerWarUserStatueInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFO+0x41f>
 847ed8b:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 847ed8e:	8b 45 0c             	mov    0xc(%ebp),%eax
 847ed91:	0f b6 50 22          	movzbl 0x22(%eax),%edx
 847ed95:	8b 4d 08             	mov    0x8(%ebp),%ecx
 847ed98:	89 d8                	mov    %ebx,%eax
 847ed9a:	c1 e0 02             	shl    $0x2,%eax
 847ed9d:	89 c3                	mov    %eax,%ebx
 847ed9f:	c1 e3 05             	shl    $0x5,%ebx
 847eda2:	01 d8                	add    %ebx,%eax
 847eda4:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 847eda7:	83 c0 40             	add    $0x40,%eax
 847edaa:	88 50 0e             	mov    %dl,0xe(%eax)
 847edad:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 847edb0:	8b 45 0c             	mov    0xc(%ebp),%eax
 847edb3:	0f b6 50 23          	movzbl 0x23(%eax),%edx
 847edb7:	8b 4d 08             	mov    0x8(%ebp),%ecx
 847edba:	89 d8                	mov    %ebx,%eax
 847edbc:	c1 e0 02             	shl    $0x2,%eax
 847edbf:	89 c3                	mov    %eax,%ebx
 847edc1:	c1 e3 05             	shl    $0x5,%ebx
 847edc4:	01 d8                	add    %ebx,%eax
 847edc6:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 847edc9:	83 c0 40             	add    $0x40,%eax
 847edcc:	88 50 0f             	mov    %dl,0xf(%eax)
 847edcf:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 847edd2:	8b 45 0c             	mov    0xc(%ebp),%eax
 847edd5:	0f b6 50 24          	movzbl 0x24(%eax),%edx
 847edd9:	8b 4d 08             	mov    0x8(%ebp),%ecx
 847eddc:	89 d8                	mov    %ebx,%eax
 847edde:	c1 e0 02             	shl    $0x2,%eax
 847ede1:	89 c3                	mov    %eax,%ebx
 847ede3:	c1 e3 05             	shl    $0x5,%ebx
 847ede6:	01 d8                	add    %ebx,%eax
 847ede8:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 847edeb:	83 c0 40             	add    $0x40,%eax
 847edee:	88 50 10             	mov    %dl,0x10(%eax)
 847edf1:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 847edf4:	8b 45 0c             	mov    0xc(%ebp),%eax
 847edf7:	8b 50 50             	mov    0x50(%eax),%edx
 847edfa:	8b 4d 08             	mov    0x8(%ebp),%ecx
 847edfd:	89 d8                	mov    %ebx,%eax
 847edff:	c1 e0 02             	shl    $0x2,%eax
 847ee02:	89 c3                	mov    %eax,%ebx
 847ee04:	c1 e3 05             	shl    $0x5,%ebx
 847ee07:	01 d8                	add    %ebx,%eax
 847ee09:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 847ee0c:	83 c0 7c             	add    $0x7c,%eax
 847ee0f:	89 10                	mov    %edx,(%eax)
 847ee11:	8b 45 0c             	mov    0xc(%ebp),%eax
 847ee14:	8d 50 04             	lea    0x4(%eax),%edx
 847ee17:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 847ee1a:	c1 e0 02             	shl    $0x2,%eax
 847ee1d:	89 c1                	mov    %eax,%ecx
 847ee1f:	c1 e1 05             	shl    $0x5,%ecx
 847ee22:	01 c8                	add    %ecx,%eax
 847ee24:	83 c0 20             	add    $0x20,%eax
 847ee27:	03 45 08             	add    0x8(%ebp),%eax
 847ee2a:	83 c0 10             	add    $0x10,%eax
 847ee2d:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 847ee34:	00 
 847ee35:	89 54 24 04          	mov    %edx,0x4(%esp)
 847ee39:	89 04 24             	mov    %eax,(%esp)
 847ee3c:	e8 8f ea bf ff       	call   807d8d0 <strncpy@plt>
 847ee41:	8b 45 0c             	mov    0xc(%ebp),%eax
 847ee44:	8d 50 25             	lea    0x25(%eax),%edx
 847ee47:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 847ee4a:	c1 e0 02             	shl    $0x2,%eax
 847ee4d:	89 c1                	mov    %eax,%ecx
 847ee4f:	c1 e1 05             	shl    $0x5,%ecx
 847ee52:	01 c8                	add    %ecx,%eax
 847ee54:	83 c0 40             	add    $0x40,%eax
 847ee57:	03 45 08             	add    0x8(%ebp),%eax
 847ee5a:	83 c0 11             	add    $0x11,%eax
 847ee5d:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 847ee64:	00 
 847ee65:	89 54 24 04          	mov    %edx,0x4(%esp)
 847ee69:	89 04 24             	mov    %eax,(%esp)
 847ee6c:	e8 5f ea bf ff       	call   807d8d0 <strncpy@plt>
 847ee71:	8b 45 0c             	mov    0xc(%ebp),%eax
 847ee74:	8d 50 54             	lea    0x54(%eax),%edx
 847ee77:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 847ee7a:	c1 e0 02             	shl    $0x2,%eax
 847ee7d:	89 c1                	mov    %eax,%ecx
 847ee7f:	c1 e1 05             	shl    $0x5,%ecx
 847ee82:	01 c8                	add    %ecx,%eax
 847ee84:	83 c0 70             	add    $0x70,%eax
 847ee87:	03 45 08             	add    0x8(%ebp),%eax
 847ee8a:	83 c0 10             	add    $0x10,%eax
 847ee8d:	c7 44 24 08 2c 00 00 	movl   $0x2c,0x8(%esp)
 847ee94:	00 
 847ee95:	89 54 24 04          	mov    %edx,0x4(%esp)
 847ee99:	89 04 24             	mov    %eax,(%esp)
 847ee9c:	e8 ff e9 bf ff       	call   807d8a0 <memcpy@plt>
 847eea1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 847eea4:	8b 55 08             	mov    0x8(%ebp),%edx
 847eea7:	c1 e0 02             	shl    $0x2,%eax
 847eeaa:	89 c1                	mov    %eax,%ecx
 847eeac:	c1 e1 05             	shl    $0x5,%ecx
 847eeaf:	01 c8                	add    %ecx,%eax
 847eeb1:	8d 04 02             	lea    (%edx,%eax,1),%eax
 847eeb4:	83 c0 20             	add    $0x20,%eax
 847eeb7:	c6 40 08 01          	movb   $0x1,0x8(%eax)
 847eebb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 847eebe:	8b 55 08             	mov    0x8(%ebp),%edx
 847eec1:	c1 e0 02             	shl    $0x2,%eax
 847eec4:	89 c1                	mov    %eax,%ecx
 847eec6:	c1 e1 05             	shl    $0x5,%ecx
 847eec9:	01 c8                	add    %ecx,%eax
 847eecb:	8d 04 02             	lea    (%edx,%eax,1),%eax
 847eece:	05 a8 00 00 00       	add    $0xa8,%eax
 847eed3:	8b 00                	mov    (%eax),%eax
 847eed5:	89 45 90             	mov    %eax,-0x70(%ebp)
 847eed8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 847eedb:	8b 55 08             	mov    0x8(%ebp),%edx
 847eede:	c1 e0 02             	shl    $0x2,%eax
 847eee1:	89 c1                	mov    %eax,%ecx
 847eee3:	c1 e1 05             	shl    $0x5,%ecx
 847eee6:	01 c8                	add    %ecx,%eax
 847eee8:	8d 04 02             	lea    (%edx,%eax,1),%eax
 847eeeb:	05 a0 00 00 00       	add    $0xa0,%eax
 847eef0:	8b 00                	mov    (%eax),%eax
 847eef2:	89 45 94             	mov    %eax,-0x6c(%ebp)
 847eef5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 847eef8:	8b 55 08             	mov    0x8(%ebp),%edx
 847eefb:	c1 e0 02             	shl    $0x2,%eax
 847eefe:	89 c1                	mov    %eax,%ecx
 847ef00:	c1 e1 05             	shl    $0x5,%ecx
 847ef03:	01 c8                	add    %ecx,%eax
 847ef05:	8d 04 02             	lea    (%edx,%eax,1),%eax
 847ef08:	05 9c 00 00 00       	add    $0x9c,%eax
 847ef0d:	8b 00                	mov    (%eax),%eax
 847ef0f:	89 45 98             	mov    %eax,-0x68(%ebp)
 847ef12:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 847ef15:	8b 55 08             	mov    0x8(%ebp),%edx
 847ef18:	c1 e0 02             	shl    $0x2,%eax
 847ef1b:	89 c1                	mov    %eax,%ecx
 847ef1d:	c1 e1 05             	shl    $0x5,%ecx
 847ef20:	01 c8                	add    %ecx,%eax
 847ef22:	8d 04 02             	lea    (%edx,%eax,1),%eax
 847ef25:	05 98 00 00 00       	add    $0x98,%eax
 847ef2a:	8b 00                	mov    (%eax),%eax
 847ef2c:	89 45 9c             	mov    %eax,-0x64(%ebp)
 847ef2f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 847ef32:	8b 55 08             	mov    0x8(%ebp),%edx
 847ef35:	83 c0 01             	add    $0x1,%eax
 847ef38:	c1 e0 02             	shl    $0x2,%eax
 847ef3b:	89 c1                	mov    %eax,%ecx
 847ef3d:	c1 e1 05             	shl    $0x5,%ecx
 847ef40:	01 c8                	add    %ecx,%eax
 847ef42:	8d 04 02             	lea    (%edx,%eax,1),%eax
 847ef45:	83 c0 10             	add    $0x10,%eax
 847ef48:	8b 00                	mov    (%eax),%eax
 847ef4a:	89 45 a0             	mov    %eax,-0x60(%ebp)
 847ef4d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 847ef50:	8b 4d 08             	mov    0x8(%ebp),%ecx
 847ef53:	c1 e0 02             	shl    $0x2,%eax
 847ef56:	89 c2                	mov    %eax,%edx
 847ef58:	c1 e2 05             	shl    $0x5,%edx
 847ef5b:	01 d0                	add    %edx,%eax
 847ef5d:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 847ef60:	05 90 00 00 00       	add    $0x90,%eax
 847ef65:	8b 00                	mov    (%eax),%eax
 847ef67:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 847ef6a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 847ef6d:	8b 4d 08             	mov    0x8(%ebp),%ecx
 847ef70:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 847ef77:	89 d0                	mov    %edx,%eax
 847ef79:	c1 e0 05             	shl    $0x5,%eax
 847ef7c:	01 c2                	add    %eax,%edx
 847ef7e:	8d 04 11             	lea    (%ecx,%edx,1),%eax
 847ef81:	05 8c 00 00 00       	add    $0x8c,%eax
 847ef86:	8b 00                	mov    (%eax),%eax
 847ef88:	89 45 a8             	mov    %eax,-0x58(%ebp)
 847ef8b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 847ef8e:	8b 4d 08             	mov    0x8(%ebp),%ecx
 847ef91:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 847ef98:	89 d0                	mov    %edx,%eax
 847ef9a:	c1 e0 05             	shl    $0x5,%eax
 847ef9d:	01 c2                	add    %eax,%edx
 847ef9f:	8d 04 11             	lea    (%ecx,%edx,1),%eax
 847efa2:	05 88 00 00 00       	add    $0x88,%eax
 847efa7:	8b 00                	mov    (%eax),%eax
 847efa9:	89 45 ac             	mov    %eax,-0x54(%ebp)
 847efac:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 847efaf:	8b 4d 08             	mov    0x8(%ebp),%ecx
 847efb2:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 847efb9:	89 d0                	mov    %edx,%eax
 847efbb:	c1 e0 05             	shl    $0x5,%eax
 847efbe:	01 c2                	add    %eax,%edx
 847efc0:	8d 04 11             	lea    (%ecx,%edx,1),%eax
 847efc3:	05 84 00 00 00       	add    $0x84,%eax
 847efc8:	8b 00                	mov    (%eax),%eax
 847efca:	89 45 b0             	mov    %eax,-0x50(%ebp)
 847efcd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 847efd0:	8b 4d 08             	mov    0x8(%ebp),%ecx
 847efd3:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 847efda:	89 d0                	mov    %edx,%eax
 847efdc:	c1 e0 05             	shl    $0x5,%eax
 847efdf:	01 c2                	add    %eax,%edx
 847efe1:	8d 04 11             	lea    (%ecx,%edx,1),%eax
 847efe4:	83 e8 80             	sub    $0xffffff80,%eax
 847efe7:	8b 00                	mov    (%eax),%eax
 847efe9:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 847efec:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 847efef:	8b 4d 08             	mov    0x8(%ebp),%ecx
 847eff2:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 847eff9:	89 d0                	mov    %edx,%eax
 847effb:	c1 e0 05             	shl    $0x5,%eax
 847effe:	01 c2                	add    %eax,%edx
 847f000:	8d 04 11             	lea    (%ecx,%edx,1),%eax
 847f003:	83 c0 7c             	add    $0x7c,%eax
 847f006:	8b 00                	mov    (%eax),%eax
 847f008:	89 45 b8             	mov    %eax,-0x48(%ebp)
 847f00b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 847f00e:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 847f015:	89 d0                	mov    %edx,%eax
 847f017:	c1 e0 05             	shl    $0x5,%eax
 847f01a:	01 c2                	add    %eax,%edx
 847f01c:	8d 42 40             	lea    0x40(%edx),%eax
 847f01f:	03 45 08             	add    0x8(%ebp),%eax
 847f022:	83 c0 11             	add    $0x11,%eax
 847f025:	89 45 bc             	mov    %eax,-0x44(%ebp)
 847f028:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 847f02b:	8b 4d 08             	mov    0x8(%ebp),%ecx
 847f02e:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 847f035:	89 d0                	mov    %edx,%eax
 847f037:	c1 e0 05             	shl    $0x5,%eax
 847f03a:	01 c2                	add    %eax,%edx
 847f03c:	8d 04 11             	lea    (%ecx,%edx,1),%eax
 847f03f:	83 c0 40             	add    $0x40,%eax
 847f042:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 847f046:	0f be c0             	movsbl %al,%eax
 847f049:	89 45 c0             	mov    %eax,-0x40(%ebp)
 847f04c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 847f04f:	8b 4d 08             	mov    0x8(%ebp),%ecx
 847f052:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 847f059:	89 d0                	mov    %edx,%eax
 847f05b:	c1 e0 05             	shl    $0x5,%eax
 847f05e:	01 c2                	add    %eax,%edx
 847f060:	8d 04 11             	lea    (%ecx,%edx,1),%eax
 847f063:	83 c0 40             	add    $0x40,%eax
 847f066:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 847f06a:	0f be c0             	movsbl %al,%eax
 847f06d:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 847f070:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 847f073:	8b 4d 08             	mov    0x8(%ebp),%ecx
 847f076:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 847f07d:	89 d0                	mov    %edx,%eax
 847f07f:	c1 e0 05             	shl    $0x5,%eax
 847f082:	01 c2                	add    %eax,%edx
 847f084:	8d 04 11             	lea    (%ecx,%edx,1),%eax
 847f087:	83 c0 40             	add    $0x40,%eax
 847f08a:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 847f08e:	0f be f8             	movsbl %al,%edi
 847f091:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 847f094:	8b 4d 08             	mov    0x8(%ebp),%ecx
 847f097:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 847f09e:	89 d0                	mov    %edx,%eax
 847f0a0:	c1 e0 05             	shl    $0x5,%eax
 847f0a3:	01 c2                	add    %eax,%edx
 847f0a5:	8d 04 11             	lea    (%ecx,%edx,1),%eax
 847f0a8:	83 c0 2c             	add    $0x2c,%eax
 847f0ab:	8b 30                	mov    (%eax),%esi
 847f0ad:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 847f0b0:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 847f0b7:	89 d0                	mov    %edx,%eax
 847f0b9:	c1 e0 05             	shl    $0x5,%eax
 847f0bc:	01 c2                	add    %eax,%edx
 847f0be:	8d 42 20             	lea    0x20(%edx),%eax
 847f0c1:	03 45 08             	add    0x8(%ebp),%eax
 847f0c4:	8d 58 10             	lea    0x10(%eax),%ebx
 847f0c7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 847f0ce:	00 
 847f0cf:	c7 44 24 08 a4 00 00 	movl   $0xa4,0x8(%esp)
 847f0d6:	00 
 847f0d7:	c7 44 24 04 80 2f c7 	movl   $0x8c72f80,0x4(%esp)
 847f0de:	08 
 847f0df:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 847f0e2:	89 04 24             	mov    %eax,(%esp)
 847f0e5:	e8 2e 06 0d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 847f0ea:	8b 45 90             	mov    -0x70(%ebp),%eax
 847f0ed:	89 44 24 48          	mov    %eax,0x48(%esp)
 847f0f1:	8b 45 94             	mov    -0x6c(%ebp),%eax
 847f0f4:	89 44 24 44          	mov    %eax,0x44(%esp)
 847f0f8:	8b 45 98             	mov    -0x68(%ebp),%eax
 847f0fb:	89 44 24 40          	mov    %eax,0x40(%esp)
 847f0ff:	8b 45 9c             	mov    -0x64(%ebp),%eax
 847f102:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 847f106:	8b 45 a0             	mov    -0x60(%ebp),%eax
 847f109:	89 44 24 38          	mov    %eax,0x38(%esp)
 847f10d:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 847f110:	89 44 24 34          	mov    %eax,0x34(%esp)
 847f114:	8b 45 a8             	mov    -0x58(%ebp),%eax
 847f117:	89 44 24 30          	mov    %eax,0x30(%esp)
 847f11b:	8b 45 ac             	mov    -0x54(%ebp),%eax
 847f11e:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 847f122:	8b 45 b0             	mov    -0x50(%ebp),%eax
 847f125:	89 44 24 28          	mov    %eax,0x28(%esp)
 847f129:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 847f12c:	89 44 24 24          	mov    %eax,0x24(%esp)
 847f130:	8b 45 b8             	mov    -0x48(%ebp),%eax
 847f133:	89 44 24 20          	mov    %eax,0x20(%esp)
 847f137:	8b 45 bc             	mov    -0x44(%ebp),%eax
 847f13a:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 847f13e:	8b 45 c0             	mov    -0x40(%ebp),%eax
 847f141:	89 44 24 18          	mov    %eax,0x18(%esp)
 847f145:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 847f148:	89 44 24 14          	mov    %eax,0x14(%esp)
 847f14c:	89 7c 24 10          	mov    %edi,0x10(%esp)
 847f150:	89 74 24 0c          	mov    %esi,0xc(%esp)
 847f154:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847f158:	c7 44 24 04 38 1d c7 	movl   $0x8c71d38,0x4(%esp)
 847f15f:	08 
 847f160:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 847f163:	89 04 24             	mov    %eax,(%esp)
 847f166:	e8 1d 06 0d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 847f16b:	eb 15                	jmp    847f182 <_ZN13CPowerManager25SetPowerWarUserStatueInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFO+0x434>
 847f16d:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 847f171:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 847f174:	83 f8 02             	cmp    $0x2,%eax
 847f177:	0f 96 c0             	setbe  %al
 847f17a:	84 c0                	test   %al,%al
 847f17c:	0f 85 e4 fb ff ff    	jne    847ed66 <_ZN13CPowerManager25SetPowerWarUserStatueInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFO+0x18>
 847f182:	8b 45 08             	mov    0x8(%ebp),%eax
 847f185:	89 04 24             	mov    %eax,(%esp)
 847f188:	e8 23 00 00 00       	call   847f1b0 <_ZN13CPowerManager29CheckCompleteDBLoadStatueInfoEv>
 847f18d:	84 c0                	test   %al,%al
 847f18f:	74 13                	je     847f1a4 <_ZN13CPowerManager25SetPowerWarUserStatueInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFO+0x456>
 847f191:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 847f198:	00 
 847f199:	8b 45 08             	mov    0x8(%ebp),%eax
 847f19c:	89 04 24             	mov    %eax,(%esp)
 847f19f:	e8 5c 00 00 00       	call   847f200 <_ZN13CPowerManager26SendPowerWarUserStatueInfoEP5CUser>
 847f1a4:	81 c4 bc 00 00 00    	add    $0xbc,%esp
 847f1aa:	5b                   	pop    %ebx
 847f1ab:	5e                   	pop    %esi
 847f1ac:	5f                   	pop    %edi
 847f1ad:	5d                   	pop    %ebp
 847f1ae:	c3                   	ret
 847f1af:	90                   	nop

```

```c
// CPowerManager::SetPowerWarUserStatueInfo @ 0x847ed4e

/* CPowerManager::SetPowerWarUserStatueInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*) */

void __thiscall
CPowerManager::SetPowerWarUserStatueInfo
          (CPowerManager *this,SIG_LOAD_POWER_WAR_STATUE_INFO *param_1)

{
  CPowerManager CVar1;
  CPowerManager CVar2;
  CPowerManager CVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  char cVar18;
  cMyTrace local_30 [16];
  uint local_20;
  
  local_20 = 0;
  do {
    if (2 < local_20) {
LAB_0847f182:
      cVar18 = CheckCompleteDBLoadStatueInfo(this);
      if (cVar18 != '\0') {
        SendPowerWarUserStatueInfo(this,(CUser *)0x0);
      }
      return;
    }
    if (*(int *)(this + local_20 * 0x84 + 0x2c) == *(int *)param_1) {
      this[local_20 * 0x84 + 0x4e] = *(CPowerManager *)(param_1 + 0x22);
      this[local_20 * 0x84 + 0x4f] = *(CPowerManager *)(param_1 + 0x23);
      this[local_20 * 0x84 + 0x50] = *(CPowerManager *)(param_1 + 0x24);
      *(undefined4 *)(this + local_20 * 0x84 + 0x7c) = *(undefined4 *)(param_1 + 0x50);
      strncpy((char *)(this + local_20 * 0x84 + 0x30),(char *)(param_1 + 4),0x1e);
      strncpy((char *)(this + local_20 * 0x84 + 0x51),(char *)(param_1 + 0x25),0x28);
      memcpy(this + local_20 * 0x84 + 0x80,param_1 + 0x54,0x2c);
      this[local_20 * 0x84 + 0x28] = (CPowerManager)0x1;
      uVar4 = *(undefined4 *)(this + local_20 * 0x84 + 0xa8);
      uVar5 = *(undefined4 *)(this + local_20 * 0x84 + 0xa0);
      uVar6 = *(undefined4 *)(this + local_20 * 0x84 + 0x9c);
      uVar7 = *(undefined4 *)(this + local_20 * 0x84 + 0x98);
      uVar8 = *(undefined4 *)(this + (local_20 + 1) * 0x84 + 0x10);
      uVar9 = *(undefined4 *)(this + local_20 * 0x84 + 0x90);
      uVar10 = *(undefined4 *)(this + local_20 * 0x84 + 0x8c);
      uVar11 = *(undefined4 *)(this + local_20 * 0x84 + 0x88);
      uVar12 = *(undefined4 *)(this + local_20 * 0x84 + 0x84);
      uVar13 = *(undefined4 *)(this + local_20 * 0x84 + 0x80);
      uVar14 = *(undefined4 *)(this + local_20 * 0x84 + 0x7c);
      iVar16 = local_20 * 0x84;
      CVar1 = this[local_20 * 0x84 + 0x50];
      CVar2 = this[local_20 * 0x84 + 0x4e];
      CVar3 = this[local_20 * 0x84 + 0x4f];
      uVar15 = *(undefined4 *)(this + local_20 * 0x84 + 0x2c);
      iVar17 = local_20 * 0x84;
      cMyTrace::cMyTrace(local_30,
                         "void CPowerManager::SetPowerWarUserStatueInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*)"
                         ,0xa4,0);
      cMyTrace::operator()
                (local_30,
                 "Set Statue Ranker %s(%d), job:%d, lev:%d, grow:%d, guild_name:%s, guild_id:%d, EQUP [head:%d][hair:%d][face:%d][jacket:%d][pants:%d][shoes:%d][breast:%d][waist:%d][skin:%d][weapon:%d]"
                 ,this + iVar17 + 0x30,uVar15,(int)(char)CVar3,(int)(char)CVar2,(int)(char)CVar1,
                 this + iVar16 + 0x51,uVar14,uVar13,uVar12,uVar11,uVar10,uVar9,uVar8,uVar7,uVar6,
                 uVar5,uVar4);
      goto LAB_0847f182;
    }
    local_20 = local_20 + 1;
  } while( true );
}

```

