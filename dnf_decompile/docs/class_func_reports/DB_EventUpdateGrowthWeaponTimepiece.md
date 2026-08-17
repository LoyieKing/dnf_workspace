# DB_EventUpdateGrowthWeaponTimepiece

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 084496f4 DB_EventUpdateGrowthWeaponTimepiece::dispatch  [0x084496f4-0x84497e9] ===
 84496f4:	55                   	push   %ebp
 84496f5:	89 e5                	mov    %esp,%ebp
 84496f7:	83 ec 38             	sub    $0x38,%esp
 84496fa:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84496ff:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8449706:	00 
 8449707:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 844970e:	00 
 844970f:	89 04 24             	mov    %eax,(%esp)
 8449712:	e8 27 bb fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8449717:	89 45 f4             	mov    %eax,-0xc(%ebp)
 844971a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8449721:	66 c7 45 ee 00 00    	movw   $0x0,-0x12(%ebp)
 8449727:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 844972e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8449731:	89 44 24 04          	mov    %eax,0x4(%esp)
 8449735:	8b 45 14             	mov    0x14(%ebp),%eax
 8449738:	89 04 24             	mov    %eax,(%esp)
 844973b:	e8 56 30 1d 00       	call   861c796 <_ZN6StreamrsERj>
 8449740:	8d 45 ee             	lea    -0x12(%ebp),%eax
 8449743:	89 44 24 04          	mov    %eax,0x4(%esp)
 8449747:	8b 45 14             	mov    0x14(%ebp),%eax
 844974a:	89 04 24             	mov    %eax,(%esp)
 844974d:	e8 00 2e 1d 00       	call   861c552 <_ZN6StreamrsERs>
 8449752:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8449755:	89 44 24 04          	mov    %eax,0x4(%esp)
 8449759:	8b 45 14             	mov    0x14(%ebp),%eax
 844975c:	89 04 24             	mov    %eax,(%esp)
 844975f:	e8 60 2e 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 8449764:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8449767:	85 c0                	test   %eax,%eax
 8449769:	74 2c                	je     8449797 <_ZN35DB_EventUpdateGrowthWeaponTimepiece8dispatchEiiP6Stream+0xa3>
 844976b:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 844976e:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8449771:	0f b7 45 ee          	movzwl -0x12(%ebp),%eax
 8449775:	98                   	cwtl
 8449776:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 844977a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 844977e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8449782:	c7 44 24 04 80 8c c5 	movl   $0x8c58c80,0x4(%esp)
 8449789:	08 
 844978a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844978d:	89 04 24             	mov    %eax,(%esp)
 8449790:	e8 2b aa fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8449795:	eb 2a                	jmp    84497c1 <_ZN35DB_EventUpdateGrowthWeaponTimepiece8dispatchEiiP6Stream+0xcd>
 8449797:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 844979a:	8b 55 e8             	mov    -0x18(%ebp),%edx
 844979d:	0f b7 45 ee          	movzwl -0x12(%ebp),%eax
 84497a1:	98                   	cwtl
 84497a2:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84497a6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84497aa:	89 44 24 08          	mov    %eax,0x8(%esp)
 84497ae:	c7 44 24 04 f8 8c c5 	movl   $0x8c58cf8,0x4(%esp)
 84497b5:	08 
 84497b6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84497b9:	89 04 24             	mov    %eax,(%esp)
 84497bc:	e8 ff a9 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84497c1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84497c8:	00 
 84497c9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84497cc:	89 04 24             	mov    %eax,(%esp)
 84497cf:	e8 52 ab fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 84497d4:	83 f0 01             	xor    $0x1,%eax
 84497d7:	84 c0                	test   %al,%al
 84497d9:	74 07                	je     84497e2 <_ZN35DB_EventUpdateGrowthWeaponTimepiece8dispatchEiiP6Stream+0xee>
 84497db:	b8 00 00 00 00       	mov    $0x0,%eax
 84497e0:	eb 05                	jmp    84497e7 <_ZN35DB_EventUpdateGrowthWeaponTimepiece8dispatchEiiP6Stream+0xf3>
 84497e2:	b8 01 00 00 00       	mov    $0x1,%eax
 84497e7:	c9                   	leave
 84497e8:	c3                   	ret
 84497e9:	90                   	nop

```

```c
// DB_EventUpdateGrowthWeaponTimepiece::dispatch @ 0x84496f4

/* DB_EventUpdateGrowthWeaponTimepiece::dispatch(int, int, Stream*) */

bool DB_EventUpdateGrowthWeaponTimepiece::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *in_stack_00000010;
  int local_1c;
  short local_16;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_14 = 0;
  local_16 = 0;
  local_1c = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_16);
  Stream::operator>>(in_stack_00000010,&local_1c);
  if (local_1c == 0) {
    MySQL::set_query(local_10,
                     "upDate event_1207_growthweapon set  timepiece = %d, infinityweapon_id = %d  where m_id = %u"
                     ,(int)local_16,0,local_14);
  }
  else {
    MySQL::set_query(local_10,
                     "upDate event_1207_growthweapon set  reward_occ_date = now(), timepiece = %d, infinityweapon_id = %d  where m_id = %u"
                     ,(int)local_16,local_1c,local_14);
  }
  cVar1 = MySQL::exec(local_10,true);
  return cVar1 == '\x01';
}

```

---

## makeRequest

```asm
// === 084497ea DB_EventUpdateGrowthWeaponTimepiece::makeRequest  [0x084497ea-0x84498fd] ===
 84497ea:	55                   	push   %ebp
 84497eb:	89 e5                	mov    %esp,%ebp
 84497ed:	56                   	push   %esi
 84497ee:	53                   	push   %ebx
 84497ef:	83 ec 30             	sub    $0x30,%esp
 84497f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84497f5:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 84497f9:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84497fe:	c7 44 24 08 41 b9 00 	movl   $0xb941,0x8(%esp)
 8449805:	00 
 8449806:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 844980d:	08 
 844980e:	89 04 24             	mov    %eax,(%esp)
 8449811:	e8 70 62 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8449816:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 844981d:	00 
 844981e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8449822:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8449825:	89 04 24             	mov    %eax,(%esp)
 8449828:	e8 f9 f3 c7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 844982d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8449830:	89 04 24             	mov    %eax,(%esp)
 8449833:	e8 0e f4 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8449838:	c7 44 24 04 15 03 00 	movl   $0x315,0x4(%esp)
 844983f:	00 
 8449840:	89 04 24             	mov    %eax,(%esp)
 8449843:	e8 0e f4 c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8449848:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844984b:	89 04 24             	mov    %eax,(%esp)
 844984e:	e8 f3 f3 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8449853:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 844985a:	ff 
 844985b:	89 04 24             	mov    %eax,(%esp)
 844985e:	e8 f3 f3 c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8449863:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8449866:	89 04 24             	mov    %eax,(%esp)
 8449869:	e8 d8 f3 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844986e:	8b 55 08             	mov    0x8(%ebp),%edx
 8449871:	89 54 24 04          	mov    %edx,0x4(%esp)
 8449875:	89 04 24             	mov    %eax,(%esp)
 8449878:	e8 15 8a c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 844987d:	0f bf 5d e4          	movswl -0x1c(%ebp),%ebx
 8449881:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8449884:	89 04 24             	mov    %eax,(%esp)
 8449887:	e8 ba f3 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844988c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8449890:	89 04 24             	mov    %eax,(%esp)
 8449893:	e8 ce 14 de ff       	call   822ad66 <_ZN12CStreamGuardlsEs>
 8449898:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844989b:	89 04 24             	mov    %eax,(%esp)
 844989e:	e8 a3 f3 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84498a3:	8b 55 10             	mov    0x10(%ebp),%edx
 84498a6:	89 54 24 04          	mov    %edx,0x4(%esp)
 84498aa:	89 04 24             	mov    %eax,(%esp)
 84498ad:	e8 a4 f3 c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84498b2:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84498b7:	8d 55 f0             	lea    -0x10(%ebp),%edx
 84498ba:	89 54 24 08          	mov    %edx,0x8(%esp)
 84498be:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84498c5:	00 
 84498c6:	89 04 24             	mov    %eax,(%esp)
 84498c9:	e8 10 77 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84498ce:	eb 1b                	jmp    84498eb <_ZN35DB_EventUpdateGrowthWeaponTimepiece11makeRequestEjsi+0x101>
 84498d0:	89 d3                	mov    %edx,%ebx
 84498d2:	89 c6                	mov    %eax,%esi
 84498d4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84498d7:	89 04 24             	mov    %eax,(%esp)
 84498da:	e8 f3 2f 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84498df:	89 f0                	mov    %esi,%eax
 84498e1:	89 da                	mov    %ebx,%edx
 84498e3:	89 04 24             	mov    %eax,(%esp)
 84498e6:	e8 65 9e 69 00       	call   8ae3750 <_Unwind_Resume>
 84498eb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84498ee:	89 04 24             	mov    %eax,(%esp)
 84498f1:	e8 dc 2f 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84498f6:	83 c4 30             	add    $0x30,%esp
 84498f9:	5b                   	pop    %ebx
 84498fa:	5e                   	pop    %esi
 84498fb:	5d                   	pop    %ebp
 84498fc:	c3                   	ret
 84498fd:	90                   	nop

```

```c
// DB_EventUpdateGrowthWeaponTimepiece::makeRequest @ 0x84497ea

/* DB_EventUpdateGrowthWeaponTimepiece::makeRequest(unsigned int, short, int) */

void DB_EventUpdateGrowthWeaponTimepiece::makeRequest(uint param_1,short param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb941);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08449843 to 084498cd has its CatchHandler @ 084498d0 */
  CStreamGuard::operator<<(pCVar2,0x315);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

