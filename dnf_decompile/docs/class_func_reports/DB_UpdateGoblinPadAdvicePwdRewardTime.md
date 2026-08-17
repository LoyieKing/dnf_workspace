# DB_UpdateGoblinPadAdvicePwdRewardTime

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843f5d2 DB_UpdateGoblinPadAdvicePwdRewardTime::dispatch  [0x0843f5d2-0x843f683] ===
 843f5d2:	55                   	push   %ebp
 843f5d3:	89 e5                	mov    %esp,%ebp
 843f5d5:	83 ec 28             	sub    $0x28,%esp
 843f5d8:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843f5dd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843f5e4:	00 
 843f5e5:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 843f5ec:	00 
 843f5ed:	89 04 24             	mov    %eax,(%esp)
 843f5f0:	e8 49 5c fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843f5f5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843f5f8:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 843f5ff:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843f602:	89 44 24 04          	mov    %eax,0x4(%esp)
 843f606:	8b 45 14             	mov    0x14(%ebp),%eax
 843f609:	89 04 24             	mov    %eax,(%esp)
 843f60c:	e8 85 d1 1d 00       	call   861c796 <_ZN6StreamrsERj>
 843f611:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843f614:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843f61b:	00 
 843f61c:	89 04 24             	mov    %eax,(%esp)
 843f61f:	e8 27 9a cc ff       	call   810904b <_Z14NumberToStringji>
 843f624:	89 44 24 08          	mov    %eax,0x8(%esp)
 843f628:	c7 44 24 04 d8 59 c5 	movl   $0x8c559d8,0x4(%esp)
 843f62f:	08 
 843f630:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843f633:	89 04 24             	mov    %eax,(%esp)
 843f636:	e8 85 4b fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843f63b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843f642:	00 
 843f643:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843f646:	89 04 24             	mov    %eax,(%esp)
 843f649:	e8 d8 4c fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843f64e:	83 f0 01             	xor    $0x1,%eax
 843f651:	84 c0                	test   %al,%al
 843f653:	75 11                	jne    843f666 <_ZN37DB_UpdateGoblinPadAdvicePwdRewardTime8dispatchEiiP6Stream+0x94>
 843f655:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843f658:	89 04 24             	mov    %eax,(%esp)
 843f65b:	e8 b0 4c fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 843f660:	09 d0                	or     %edx,%eax
 843f662:	85 c0                	test   %eax,%eax
 843f664:	75 07                	jne    843f66d <_ZN37DB_UpdateGoblinPadAdvicePwdRewardTime8dispatchEiiP6Stream+0x9b>
 843f666:	b8 01 00 00 00       	mov    $0x1,%eax
 843f66b:	eb 05                	jmp    843f672 <_ZN37DB_UpdateGoblinPadAdvicePwdRewardTime8dispatchEiiP6Stream+0xa0>
 843f66d:	b8 00 00 00 00       	mov    $0x0,%eax
 843f672:	84 c0                	test   %al,%al
 843f674:	74 07                	je     843f67d <_ZN37DB_UpdateGoblinPadAdvicePwdRewardTime8dispatchEiiP6Stream+0xab>
 843f676:	b8 00 00 00 00       	mov    $0x0,%eax
 843f67b:	eb 05                	jmp    843f682 <_ZN37DB_UpdateGoblinPadAdvicePwdRewardTime8dispatchEiiP6Stream+0xb0>
 843f67d:	b8 01 00 00 00       	mov    $0x1,%eax
 843f682:	c9                   	leave
 843f683:	c3                   	ret

```

```c
// DB_UpdateGoblinPadAdvicePwdRewardTime::dispatch @ 0x843f5d2

/* DB_UpdateGoblinPadAdvicePwdRewardTime::dispatch(int, int, Stream*) */

bool DB_UpdateGoblinPadAdvicePwdRewardTime::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_14 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  uVar3 = NumberToString(local_14,0);
  MySQL::set_query(local_10,
                   "upDate member_mousepass set reward_time=0 where m_id=%s and enable_flag = \'1\'"
                   ,uVar3);
  cVar2 = MySQL::exec(local_10,true);
  if ((cVar2 == '\x01') && (lVar4 = MySQL::getAffectedRowCount(local_10), lVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return !bVar1;
}

```

---

## makeRequest

```asm
// === 0843f684 DB_UpdateGoblinPadAdvicePwdRewardTime::makeRequest  [0x0843f684-0x843f759] ===
 843f684:	55                   	push   %ebp
 843f685:	89 e5                	mov    %esp,%ebp
 843f687:	56                   	push   %esi
 843f688:	53                   	push   %ebx
 843f689:	83 ec 20             	sub    $0x20,%esp
 843f68c:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843f691:	c7 44 24 08 27 99 00 	movl   $0x9927,0x8(%esp)
 843f698:	00 
 843f699:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843f6a0:	08 
 843f6a1:	89 04 24             	mov    %eax,(%esp)
 843f6a4:	e8 dd 03 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843f6a9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843f6b0:	00 
 843f6b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 843f6b5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843f6b8:	89 04 24             	mov    %eax,(%esp)
 843f6bb:	e8 66 95 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843f6c0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843f6c3:	89 04 24             	mov    %eax,(%esp)
 843f6c6:	e8 7b 95 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843f6cb:	c7 44 24 04 47 02 00 	movl   $0x247,0x4(%esp)
 843f6d2:	00 
 843f6d3:	89 04 24             	mov    %eax,(%esp)
 843f6d6:	e8 7b 95 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843f6db:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843f6de:	89 04 24             	mov    %eax,(%esp)
 843f6e1:	e8 60 95 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843f6e6:	8b 55 08             	mov    0x8(%ebp),%edx
 843f6e9:	89 54 24 04          	mov    %edx,0x4(%esp)
 843f6ed:	89 04 24             	mov    %eax,(%esp)
 843f6f0:	e8 61 95 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843f6f5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843f6f8:	89 04 24             	mov    %eax,(%esp)
 843f6fb:	e8 46 95 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843f700:	8b 55 0c             	mov    0xc(%ebp),%edx
 843f703:	89 54 24 04          	mov    %edx,0x4(%esp)
 843f707:	89 04 24             	mov    %eax,(%esp)
 843f70a:	e8 83 2b ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 843f70f:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843f714:	8d 55 f0             	lea    -0x10(%ebp),%edx
 843f717:	89 54 24 08          	mov    %edx,0x8(%esp)
 843f71b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843f722:	00 
 843f723:	89 04 24             	mov    %eax,(%esp)
 843f726:	e8 b3 18 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843f72b:	eb 1b                	jmp    843f748 <_ZN37DB_UpdateGoblinPadAdvicePwdRewardTime11makeRequestEij+0xc4>
 843f72d:	89 d3                	mov    %edx,%ebx
 843f72f:	89 c6                	mov    %eax,%esi
 843f731:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843f734:	89 04 24             	mov    %eax,(%esp)
 843f737:	e8 96 d1 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843f73c:	89 f0                	mov    %esi,%eax
 843f73e:	89 da                	mov    %ebx,%edx
 843f740:	89 04 24             	mov    %eax,(%esp)
 843f743:	e8 08 40 6a 00       	call   8ae3750 <_Unwind_Resume>
 843f748:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843f74b:	89 04 24             	mov    %eax,(%esp)
 843f74e:	e8 7f d1 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843f753:	83 c4 20             	add    $0x20,%esp
 843f756:	5b                   	pop    %ebx
 843f757:	5e                   	pop    %esi
 843f758:	5d                   	pop    %ebp
 843f759:	c3                   	ret

```

```c
// DB_UpdateGoblinPadAdvicePwdRewardTime::makeRequest @ 0x843f684

/* DB_UpdateGoblinPadAdvicePwdRewardTime::makeRequest(int, unsigned int) */

void DB_UpdateGoblinPadAdvicePwdRewardTime::makeRequest(int param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x9927);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843f6d6 to 0843f72a has its CatchHandler @ 0843f72d */
  CStreamGuard::operator<<(pCVar2,0x247);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

