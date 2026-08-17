# DB_GetPremiumSelectedCubeInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0844c4e2 DB_GetPremiumSelectedCubeInfo::dispatch  [0x0844c4e2-0x844c6df] ===
 844c4e2:	55                   	push   %ebp
 844c4e3:	89 e5                	mov    %esp,%ebp
 844c4e5:	56                   	push   %esi
 844c4e6:	53                   	push   %ebx
 844c4e7:	83 ec 30             	sub    $0x30,%esp
 844c4ea:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 844c4ef:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844c4f6:	00 
 844c4f7:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 844c4fe:	00 
 844c4ff:	89 04 24             	mov    %eax,(%esp)
 844c502:	e8 37 8d fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 844c507:	89 45 e8             	mov    %eax,-0x18(%ebp)
 844c50a:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 844c50e:	75 0a                	jne    844c51a <_ZN29DB_GetPremiumSelectedCubeInfo8dispatchEiiP6Stream+0x38>
 844c510:	bb 00 00 00 00       	mov    $0x0,%ebx
 844c515:	e9 bc 01 00 00       	jmp    844c6d6 <_ZN29DB_GetPremiumSelectedCubeInfo8dispatchEiiP6Stream+0x1f4>
 844c51a:	8b 45 14             	mov    0x14(%ebp),%eax
 844c51d:	89 04 24             	mov    %eax,(%esp)
 844c520:	e8 4d 84 00 00       	call   8454972 <_ZN6Stream12GetOutBufferI34SIG_GET_PREMIUM_SELECTED_CUBE_INFOEEPT_v>
 844c525:	89 45 ec             	mov    %eax,-0x14(%ebp)
 844c528:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 844c52c:	75 0a                	jne    844c538 <_ZN29DB_GetPremiumSelectedCubeInfo8dispatchEiiP6Stream+0x56>
 844c52e:	bb 00 00 00 00       	mov    $0x0,%ebx
 844c533:	e9 9e 01 00 00       	jmp    844c6d6 <_ZN29DB_GetPremiumSelectedCubeInfo8dispatchEiiP6Stream+0x1f4>
 844c538:	8b 45 ec             	mov    -0x14(%ebp),%eax
 844c53b:	8b 00                	mov    (%eax),%eax
 844c53d:	89 44 24 08          	mov    %eax,0x8(%esp)
 844c541:	c7 44 24 04 98 9a c5 	movl   $0x8c59a98,0x4(%esp)
 844c548:	08 
 844c549:	8b 45 e8             	mov    -0x18(%ebp),%eax
 844c54c:	89 04 24             	mov    %eax,(%esp)
 844c54f:	e8 6c 7c fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844c554:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844c55b:	00 
 844c55c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 844c55f:	89 04 24             	mov    %eax,(%esp)
 844c562:	e8 bf 7d fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844c567:	88 45 f3             	mov    %al,-0xd(%ebp)
 844c56a:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 844c56e:	83 f0 01             	xor    $0x1,%eax
 844c571:	84 c0                	test   %al,%al
 844c573:	74 0a                	je     844c57f <_ZN29DB_GetPremiumSelectedCubeInfo8dispatchEiiP6Stream+0x9d>
 844c575:	bb 00 00 00 00       	mov    $0x0,%ebx
 844c57a:	e9 57 01 00 00       	jmp    844c6d6 <_ZN29DB_GetPremiumSelectedCubeInfo8dispatchEiiP6Stream+0x1f4>
 844c57f:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 844c584:	c7 44 24 08 71 bf 00 	movl   $0xbf71,0x8(%esp)
 844c58b:	00 
 844c58c:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 844c593:	08 
 844c594:	89 04 24             	mov    %eax,(%esp)
 844c597:	e8 ea 34 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 844c59c:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 844c5a3:	00 
 844c5a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 844c5a8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 844c5ab:	89 04 24             	mov    %eax,(%esp)
 844c5ae:	e8 73 c6 c7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 844c5b3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 844c5b6:	89 04 24             	mov    %eax,(%esp)
 844c5b9:	e8 88 c6 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844c5be:	8b 55 0c             	mov    0xc(%ebp),%edx
 844c5c1:	89 54 24 04          	mov    %edx,0x4(%esp)
 844c5c5:	89 04 24             	mov    %eax,(%esp)
 844c5c8:	e8 89 c6 c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844c5cd:	8d 45 e0             	lea    -0x20(%ebp),%eax
 844c5d0:	89 04 24             	mov    %eax,(%esp)
 844c5d3:	e8 6e c6 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844c5d8:	8b 55 10             	mov    0x10(%ebp),%edx
 844c5db:	89 54 24 04          	mov    %edx,0x4(%esp)
 844c5df:	89 04 24             	mov    %eax,(%esp)
 844c5e2:	e8 6f c6 c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844c5e7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 844c5ea:	89 04 24             	mov    %eax,(%esp)
 844c5ed:	e8 5c c6 c7 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 844c5f2:	89 04 24             	mov    %eax,(%esp)
 844c5f5:	e8 cc 83 00 00       	call   84549c6 <_ZN12CStreamGuard11GetInBufferI38SIG_GET_PREMIUM_SELECTED_CUBE_INFO_RESEEPT_v>
 844c5fa:	89 45 f4             	mov    %eax,-0xc(%ebp)
 844c5fd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 844c600:	8b 10                	mov    (%eax),%edx
 844c602:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844c605:	89 10                	mov    %edx,(%eax)
 844c607:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844c60a:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 844c60e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844c611:	c6 40 05 00          	movb   $0x0,0x5(%eax)
 844c615:	8b 45 e8             	mov    -0x18(%ebp),%eax
 844c618:	89 04 24             	mov    %eax,(%esp)
 844c61b:	e8 9c 7e fa ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 844c620:	88 45 f3             	mov    %al,-0xd(%ebp)
 844c623:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
 844c627:	74 64                	je     844c68d <_ZN29DB_GetPremiumSelectedCubeInfo8dispatchEiiP6Stream+0x1ab>
 844c629:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844c62c:	83 c0 04             	add    $0x4,%eax
 844c62f:	89 44 24 08          	mov    %eax,0x8(%esp)
 844c633:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 844c63a:	00 
 844c63b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 844c63e:	89 04 24             	mov    %eax,(%esp)
 844c641:	e8 74 18 cb ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 844c646:	88 45 f3             	mov    %al,-0xd(%ebp)
 844c649:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 844c64d:	83 f0 01             	xor    $0x1,%eax
 844c650:	84 c0                	test   %al,%al
 844c652:	74 07                	je     844c65b <_ZN29DB_GetPremiumSelectedCubeInfo8dispatchEiiP6Stream+0x179>
 844c654:	bb 00 00 00 00       	mov    $0x0,%ebx
 844c659:	eb 70                	jmp    844c6cb <_ZN29DB_GetPremiumSelectedCubeInfo8dispatchEiiP6Stream+0x1e9>
 844c65b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844c65e:	83 c0 05             	add    $0x5,%eax
 844c661:	89 44 24 08          	mov    %eax,0x8(%esp)
 844c665:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844c66c:	00 
 844c66d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 844c670:	89 04 24             	mov    %eax,(%esp)
 844c673:	e8 42 18 cb ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 844c678:	88 45 f3             	mov    %al,-0xd(%ebp)
 844c67b:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 844c67f:	83 f0 01             	xor    $0x1,%eax
 844c682:	84 c0                	test   %al,%al
 844c684:	74 07                	je     844c68d <_ZN29DB_GetPremiumSelectedCubeInfo8dispatchEiiP6Stream+0x1ab>
 844c686:	bb 00 00 00 00       	mov    $0x0,%ebx
 844c68b:	eb 3e                	jmp    844c6cb <_ZN29DB_GetPremiumSelectedCubeInfo8dispatchEiiP6Stream+0x1e9>
 844c68d:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 844c692:	8d 55 e0             	lea    -0x20(%ebp),%edx
 844c695:	89 54 24 08          	mov    %edx,0x8(%esp)
 844c699:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844c6a0:	00 
 844c6a1:	89 04 24             	mov    %eax,(%esp)
 844c6a4:	e8 35 49 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 844c6a9:	bb 01 00 00 00       	mov    $0x1,%ebx
 844c6ae:	eb 1b                	jmp    844c6cb <_ZN29DB_GetPremiumSelectedCubeInfo8dispatchEiiP6Stream+0x1e9>
 844c6b0:	89 d3                	mov    %edx,%ebx
 844c6b2:	89 c6                	mov    %eax,%esi
 844c6b4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 844c6b7:	89 04 24             	mov    %eax,(%esp)
 844c6ba:	e8 13 02 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844c6bf:	89 f0                	mov    %esi,%eax
 844c6c1:	89 da                	mov    %ebx,%edx
 844c6c3:	89 04 24             	mov    %eax,(%esp)
 844c6c6:	e8 85 70 69 00       	call   8ae3750 <_Unwind_Resume>
 844c6cb:	8d 45 e0             	lea    -0x20(%ebp),%eax
 844c6ce:	89 04 24             	mov    %eax,(%esp)
 844c6d1:	e8 fc 01 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844c6d6:	89 d8                	mov    %ebx,%eax
 844c6d8:	83 c4 30             	add    $0x30,%esp
 844c6db:	5b                   	pop    %ebx
 844c6dc:	5e                   	pop    %esi
 844c6dd:	5d                   	pop    %ebp
 844c6de:	c3                   	ret
 844c6df:	90                   	nop

```

```c
// DB_GetPremiumSelectedCubeInfo::dispatch @ 0x844c4e2

/* DB_GetPremiumSelectedCubeInfo::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_GetPremiumSelectedCubeInfo::dispatch
          (DB_GetPremiumSelectedCubeInfo *this,int param_1,int param_2,Stream *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  undefined4 uVar3;
  CStreamGuard local_24 [8];
  MySQL *local_1c;
  SIG_GET_PREMIUM_SELECTED_CUBE_INFO *local_18;
  char local_11;
  SIG_GET_PREMIUM_SELECTED_CUBE_INFO_RES *local_10;
  
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  if (local_1c == (MySQL *)0x0) {
    return 0;
  }
  local_18 = Stream::GetOutBuffer<SIG_GET_PREMIUM_SELECTED_CUBE_INFO>(param_3);
  if (local_18 == (SIG_GET_PREMIUM_SELECTED_CUBE_INFO *)0x0) {
    return 0;
  }
  MySQL::set_query(local_1c,"seLect selected, cube_type from cube_premium where charac_no=%u",
                   *(undefined4 *)local_18);
  local_11 = MySQL::exec(local_1c,true);
  if (local_11 != '\x01') {
    return 0;
  }
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xbf71);
  CStreamGuard::CStreamGuard(local_24,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 0844c5c8 to 0844c6a8 has its CatchHandler @ 0844c6b0 */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_24);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_24);
  local_10 = CStreamGuard::GetInBuffer<SIG_GET_PREMIUM_SELECTED_CUBE_INFO_RES>(pCVar2);
  *(undefined4 *)local_10 = *(undefined4 *)local_18;
  local_10[4] = (SIG_GET_PREMIUM_SELECTED_CUBE_INFO_RES)0x0;
  local_10[5] = (SIG_GET_PREMIUM_SELECTED_CUBE_INFO_RES)0x0;
  local_11 = MySQL::fetch(local_1c);
  if (local_11 != '\0') {
    local_11 = MySQL::get_ubyte(local_1c,0,(uchar *)(local_10 + 4));
    if (local_11 != '\x01') {
      uVar3 = 0;
      goto LAB_0844c6cb;
    }
    local_11 = MySQL::get_ubyte(local_1c,1,(uchar *)(local_10 + 5));
    if (local_11 != '\x01') {
      uVar3 = 0;
      goto LAB_0844c6cb;
    }
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_24);
  uVar3 = 1;
LAB_0844c6cb:
  CStreamGuard::~CStreamGuard(local_24);
  return uVar3;
}

```

