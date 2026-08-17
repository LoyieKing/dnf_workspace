# DB_UpdateBreakAwayUvList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08438842 DB_UpdateBreakAwayUvList::dispatch  [0x08438842-0x843891f] ===
 8438842:	55                   	push   %ebp
 8438843:	89 e5                	mov    %esp,%ebp
 8438845:	83 ec 38             	sub    $0x38,%esp
 8438848:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843884d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8438854:	00 
 8438855:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 843885c:	00 
 843885d:	89 04 24             	mov    %eax,(%esp)
 8438860:	e8 d9 c9 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8438865:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8438868:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 843886f:	e8 2a 34 c9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8438874:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8438877:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 843887e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8438881:	89 44 24 04          	mov    %eax,0x4(%esp)
 8438885:	8b 45 14             	mov    0x14(%ebp),%eax
 8438888:	89 04 24             	mov    %eax,(%esp)
 843888b:	e8 06 3f 1e 00       	call   861c796 <_ZN6StreamrsERj>
 8438890:	8b 45 14             	mov    0x14(%ebp),%eax
 8438893:	89 04 24             	mov    %eax,(%esp)
 8438896:	e8 4d ae 01 00       	call   84536e8 <_ZN6Stream12GetOutBufferI22SIG_BREAK_AWAY_UV_LISTEEPT_v>
 843889b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843889e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84388a1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84388a8:	00 
 84388a9:	89 04 24             	mov    %eax,(%esp)
 84388ac:	e8 9a 07 cd ff       	call   810904b <_Z14NumberToStringji>
 84388b1:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84388b4:	89 44 24 10          	mov    %eax,0x10(%esp)
 84388b8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84388bb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84388bf:	89 54 24 08          	mov    %edx,0x8(%esp)
 84388c3:	c7 44 24 04 0c 43 c5 	movl   $0x8c5430c,0x4(%esp)
 84388ca:	08 
 84388cb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84388ce:	89 04 24             	mov    %eax,(%esp)
 84388d1:	e8 ea b8 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84388d6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84388dd:	00 
 84388de:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84388e1:	89 04 24             	mov    %eax,(%esp)
 84388e4:	e8 3d ba fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 84388e9:	83 f0 01             	xor    $0x1,%eax
 84388ec:	84 c0                	test   %al,%al
 84388ee:	75 11                	jne    8438901 <_ZN24DB_UpdateBreakAwayUvList8dispatchEiiP6Stream+0xbf>
 84388f0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84388f3:	89 04 24             	mov    %eax,(%esp)
 84388f6:	e8 15 ba fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 84388fb:	09 d0                	or     %edx,%eax
 84388fd:	85 c0                	test   %eax,%eax
 84388ff:	75 07                	jne    8438908 <_ZN24DB_UpdateBreakAwayUvList8dispatchEiiP6Stream+0xc6>
 8438901:	b8 01 00 00 00       	mov    $0x1,%eax
 8438906:	eb 05                	jmp    843890d <_ZN24DB_UpdateBreakAwayUvList8dispatchEiiP6Stream+0xcb>
 8438908:	b8 00 00 00 00       	mov    $0x0,%eax
 843890d:	84 c0                	test   %al,%al
 843890f:	74 07                	je     8438918 <_ZN24DB_UpdateBreakAwayUvList8dispatchEiiP6Stream+0xd6>
 8438911:	b8 00 00 00 00       	mov    $0x0,%eax
 8438916:	eb 05                	jmp    843891d <_ZN24DB_UpdateBreakAwayUvList8dispatchEiiP6Stream+0xdb>
 8438918:	b8 01 00 00 00       	mov    $0x1,%eax
 843891d:	c9                   	leave
 843891e:	c3                   	ret
 843891f:	90                   	nop

```

```c
// DB_UpdateBreakAwayUvList::dispatch @ 0x8438842

/* DB_UpdateBreakAwayUvList::dispatch(int, int, Stream*) */

bool DB_UpdateBreakAwayUvList::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  uint local_1c;
  MySQL *local_18;
  undefined4 local_14;
  SIG_BREAK_AWAY_UV_LIST *local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_1c = 0;
  Stream::operator>>(in_stack_00000010,&local_1c);
  local_10 = Stream::GetOutBuffer<SIG_BREAK_AWAY_UV_LIST>(in_stack_00000010);
  uVar3 = NumberToString(local_1c,0);
  MySQL::set_query(local_18,
                   "upDate churn_member_info set play_info =\'%s\', last_update_time=%u where m_id=%s"
                   ,local_10,local_14,uVar3);
  cVar2 = MySQL::exec(local_18,true);
  if ((cVar2 == '\x01') && (lVar4 = MySQL::getAffectedRowCount(local_18), lVar4 != 0)) {
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
// === 0843873a DB_UpdateBreakAwayUvList::makeRequest  [0x0843873a-0x8438841] ===
 843873a:	55                   	push   %ebp
 843873b:	89 e5                	mov    %esp,%ebp
 843873d:	56                   	push   %esi
 843873e:	53                   	push   %ebx
 843873f:	83 ec 20             	sub    $0x20,%esp
 8438742:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8438747:	c7 44 24 08 22 86 00 	movl   $0x8622,0x8(%esp)
 843874e:	00 
 843874f:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8438756:	08 
 8438757:	89 04 24             	mov    %eax,(%esp)
 843875a:	e8 27 73 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843875f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8438766:	00 
 8438767:	89 44 24 04          	mov    %eax,0x4(%esp)
 843876b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843876e:	89 04 24             	mov    %eax,(%esp)
 8438771:	e8 b0 04 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8438776:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8438779:	89 04 24             	mov    %eax,(%esp)
 843877c:	e8 c5 04 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8438781:	c7 44 24 04 47 01 00 	movl   $0x147,0x4(%esp)
 8438788:	00 
 8438789:	89 04 24             	mov    %eax,(%esp)
 843878c:	e8 c5 04 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8438791:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8438794:	89 04 24             	mov    %eax,(%esp)
 8438797:	e8 aa 04 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843879c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84387a3:	ff 
 84387a4:	89 04 24             	mov    %eax,(%esp)
 84387a7:	e8 aa 04 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84387ac:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84387af:	89 04 24             	mov    %eax,(%esp)
 84387b2:	e8 8f 04 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84387b7:	8b 55 08             	mov    0x8(%ebp),%edx
 84387ba:	89 54 24 04          	mov    %edx,0x4(%esp)
 84387be:	89 04 24             	mov    %eax,(%esp)
 84387c1:	e8 cc 9a ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 84387c6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84387c9:	89 04 24             	mov    %eax,(%esp)
 84387cc:	e8 7d 04 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84387d1:	89 04 24             	mov    %eax,(%esp)
 84387d4:	e8 f9 ae 01 00       	call   84536d2 <_ZN12CStreamGuard11GetInBufferI22SIG_BREAK_AWAY_UV_LISTEEPT_v>
 84387d9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84387dc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84387df:	c7 44 24 08 1f 00 00 	movl   $0x1f,0x8(%esp)
 84387e6:	00 
 84387e7:	8b 55 0c             	mov    0xc(%ebp),%edx
 84387ea:	89 54 24 04          	mov    %edx,0x4(%esp)
 84387ee:	89 04 24             	mov    %eax,(%esp)
 84387f1:	e8 da 50 c4 ff       	call   807d8d0 <strncpy@plt>
 84387f6:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84387fb:	8d 55 ec             	lea    -0x14(%ebp),%edx
 84387fe:	89 54 24 08          	mov    %edx,0x8(%esp)
 8438802:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8438809:	00 
 843880a:	89 04 24             	mov    %eax,(%esp)
 843880d:	e8 cc 87 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8438812:	eb 1b                	jmp    843882f <_ZN24DB_UpdateBreakAwayUvList11makeRequestEjPc+0xf5>
 8438814:	89 d3                	mov    %edx,%ebx
 8438816:	89 c6                	mov    %eax,%esi
 8438818:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843881b:	89 04 24             	mov    %eax,(%esp)
 843881e:	e8 af 40 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8438823:	89 f0                	mov    %esi,%eax
 8438825:	89 da                	mov    %ebx,%edx
 8438827:	89 04 24             	mov    %eax,(%esp)
 843882a:	e8 21 af 6a 00       	call   8ae3750 <_Unwind_Resume>
 843882f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8438832:	89 04 24             	mov    %eax,(%esp)
 8438835:	e8 98 40 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843883a:	83 c4 20             	add    $0x20,%esp
 843883d:	5b                   	pop    %ebx
 843883e:	5e                   	pop    %esi
 843883f:	5d                   	pop    %ebp
 8438840:	c3                   	ret
 8438841:	90                   	nop

```

```c
// DB_UpdateBreakAwayUvList::makeRequest @ 0x843873a

/* DB_UpdateBreakAwayUvList::makeRequest(unsigned int, char*) */

void DB_UpdateBreakAwayUvList::makeRequest(uint param_1,char *param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_BREAK_AWAY_UV_LIST *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8622);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0843878c to 08438811 has its CatchHandler @ 08438814 */
  CStreamGuard::operator<<(pCVar2,0x147);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_BREAK_AWAY_UV_LIST>(pCVar2);
  strncpy((char *)local_10,param_2,0x1f);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

