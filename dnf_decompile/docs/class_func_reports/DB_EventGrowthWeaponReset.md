# DB_EventGrowthWeaponReset

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 084498fe DB_EventGrowthWeaponReset::dispatch  [0x084498fe-0x844997f] ===
 84498fe:	55                   	push   %ebp
 84498ff:	89 e5                	mov    %esp,%ebp
 8449901:	83 ec 28             	sub    $0x28,%esp
 8449904:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8449909:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8449910:	00 
 8449911:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8449918:	00 
 8449919:	89 04 24             	mov    %eax,(%esp)
 844991c:	e8 1d b9 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8449921:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8449924:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 844992b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844992e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8449932:	8b 45 14             	mov    0x14(%ebp),%eax
 8449935:	89 04 24             	mov    %eax,(%esp)
 8449938:	e8 59 2e 1d 00       	call   861c796 <_ZN6StreamrsERj>
 844993d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8449940:	89 44 24 08          	mov    %eax,0x8(%esp)
 8449944:	c7 44 24 04 54 8d c5 	movl   $0x8c58d54,0x4(%esp)
 844994b:	08 
 844994c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844994f:	89 04 24             	mov    %eax,(%esp)
 8449952:	e8 69 a8 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8449957:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844995e:	00 
 844995f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8449962:	89 04 24             	mov    %eax,(%esp)
 8449965:	e8 bc a9 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844996a:	83 f0 01             	xor    $0x1,%eax
 844996d:	84 c0                	test   %al,%al
 844996f:	74 07                	je     8449978 <_ZN25DB_EventGrowthWeaponReset8dispatchEiiP6Stream+0x7a>
 8449971:	b8 00 00 00 00       	mov    $0x0,%eax
 8449976:	eb 05                	jmp    844997d <_ZN25DB_EventGrowthWeaponReset8dispatchEiiP6Stream+0x7f>
 8449978:	b8 01 00 00 00       	mov    $0x1,%eax
 844997d:	c9                   	leave
 844997e:	c3                   	ret
 844997f:	90                   	nop

```

```c
// DB_EventGrowthWeaponReset::dispatch @ 0x84498fe

/* DB_EventGrowthWeaponReset::dispatch(int, int, Stream*) */

bool DB_EventGrowthWeaponReset::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *in_stack_00000010;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_14 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  MySQL::set_query(local_10,"deLete from event_1207_growthweapon where m_id = %u",local_14);
  cVar1 = MySQL::exec(local_10,true);
  return cVar1 == '\x01';
}

```

---

## makeRequest

```asm
// === 08449980 DB_EventGrowthWeaponReset::makeRequest  [0x08449980-0x8449a57] ===
 8449980:	55                   	push   %ebp
 8449981:	89 e5                	mov    %esp,%ebp
 8449983:	56                   	push   %esi
 8449984:	53                   	push   %ebx
 8449985:	83 ec 20             	sub    $0x20,%esp
 8449988:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 844998d:	c7 44 24 08 5e b9 00 	movl   $0xb95e,0x8(%esp)
 8449994:	00 
 8449995:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 844999c:	08 
 844999d:	89 04 24             	mov    %eax,(%esp)
 84499a0:	e8 e1 60 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84499a5:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84499ac:	00 
 84499ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 84499b1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84499b4:	89 04 24             	mov    %eax,(%esp)
 84499b7:	e8 6a f2 c7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84499bc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84499bf:	89 04 24             	mov    %eax,(%esp)
 84499c2:	e8 7f f2 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84499c7:	c7 44 24 04 16 03 00 	movl   $0x316,0x4(%esp)
 84499ce:	00 
 84499cf:	89 04 24             	mov    %eax,(%esp)
 84499d2:	e8 7f f2 c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84499d7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84499da:	89 04 24             	mov    %eax,(%esp)
 84499dd:	e8 64 f2 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84499e2:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84499e9:	ff 
 84499ea:	89 04 24             	mov    %eax,(%esp)
 84499ed:	e8 64 f2 c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84499f2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84499f5:	89 04 24             	mov    %eax,(%esp)
 84499f8:	e8 49 f2 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84499fd:	8b 55 08             	mov    0x8(%ebp),%edx
 8449a00:	89 54 24 04          	mov    %edx,0x4(%esp)
 8449a04:	89 04 24             	mov    %eax,(%esp)
 8449a07:	e8 86 88 c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8449a0c:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8449a11:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8449a14:	89 54 24 08          	mov    %edx,0x8(%esp)
 8449a18:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8449a1f:	00 
 8449a20:	89 04 24             	mov    %eax,(%esp)
 8449a23:	e8 b6 75 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8449a28:	eb 1b                	jmp    8449a45 <_ZN25DB_EventGrowthWeaponReset11makeRequestEj+0xc5>
 8449a2a:	89 d3                	mov    %edx,%ebx
 8449a2c:	89 c6                	mov    %eax,%esi
 8449a2e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8449a31:	89 04 24             	mov    %eax,(%esp)
 8449a34:	e8 99 2e 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8449a39:	89 f0                	mov    %esi,%eax
 8449a3b:	89 da                	mov    %ebx,%edx
 8449a3d:	89 04 24             	mov    %eax,(%esp)
 8449a40:	e8 0b 9d 69 00       	call   8ae3750 <_Unwind_Resume>
 8449a45:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8449a48:	89 04 24             	mov    %eax,(%esp)
 8449a4b:	e8 82 2e 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8449a50:	83 c4 20             	add    $0x20,%esp
 8449a53:	5b                   	pop    %ebx
 8449a54:	5e                   	pop    %esi
 8449a55:	5d                   	pop    %ebp
 8449a56:	c3                   	ret
 8449a57:	90                   	nop

```

```c
// DB_EventGrowthWeaponReset::makeRequest @ 0x8449980

/* DB_EventGrowthWeaponReset::makeRequest(unsigned int) */

void DB_EventGrowthWeaponReset::makeRequest(uint param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb95e);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 084499d2 to 08449a27 has its CatchHandler @ 08449a2a */
  CStreamGuard::operator<<(pCVar2,0x316);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

