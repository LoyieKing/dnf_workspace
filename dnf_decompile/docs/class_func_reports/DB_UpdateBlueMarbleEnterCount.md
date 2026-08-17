# DB_UpdateBlueMarbleEnterCount

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0844874e DB_UpdateBlueMarbleEnterCount::dispatch  [0x0844874e-0x844884b] ===
 844874e:	55                   	push   %ebp
 844874f:	89 e5                	mov    %esp,%ebp
 8448751:	83 ec 28             	sub    $0x28,%esp
 8448754:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 844875b:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 844875f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8448762:	89 44 24 04          	mov    %eax,0x4(%esp)
 8448766:	8b 45 14             	mov    0x14(%ebp),%eax
 8448769:	89 04 24             	mov    %eax,(%esp)
 844876c:	e8 25 40 1d 00       	call   861c796 <_ZN6StreamrsERj>
 8448771:	8d 45 ef             	lea    -0x11(%ebp),%eax
 8448774:	89 44 24 04          	mov    %eax,0x4(%esp)
 8448778:	8b 45 14             	mov    0x14(%ebp),%eax
 844877b:	89 04 24             	mov    %eax,(%esp)
 844877e:	e8 af 3f 1d 00       	call   861c732 <_ZN6StreamrsERh>
 8448783:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8448788:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844878f:	00 
 8448790:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8448797:	00 
 8448798:	89 04 24             	mov    %eax,(%esp)
 844879b:	e8 9e ca fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84487a0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84487a3:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84487a6:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 84487aa:	0f b6 c0             	movzbl %al,%eax
 84487ad:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84487b1:	89 44 24 08          	mov    %eax,0x8(%esp)
 84487b5:	c7 44 24 04 30 88 c5 	movl   $0x8c58830,0x4(%esp)
 84487bc:	08 
 84487bd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84487c0:	89 04 24             	mov    %eax,(%esp)
 84487c3:	e8 f8 b9 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84487c8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84487cf:	00 
 84487d0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84487d3:	89 04 24             	mov    %eax,(%esp)
 84487d6:	e8 4b bb fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 84487db:	83 f0 01             	xor    $0x1,%eax
 84487de:	84 c0                	test   %al,%al
 84487e0:	74 07                	je     84487e9 <_ZN29DB_UpdateBlueMarbleEnterCount8dispatchEiiP6Stream+0x9b>
 84487e2:	b8 00 00 00 00       	mov    $0x0,%eax
 84487e7:	eb 61                	jmp    844884a <_ZN29DB_UpdateBlueMarbleEnterCount8dispatchEiiP6Stream+0xfc>
 84487e9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84487ec:	89 04 24             	mov    %eax,(%esp)
 84487ef:	e8 1c bb fa ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 84487f4:	09 d0                	or     %edx,%eax
 84487f6:	85 c0                	test   %eax,%eax
 84487f8:	0f 94 c0             	sete   %al
 84487fb:	84 c0                	test   %al,%al
 84487fd:	74 46                	je     8448845 <_ZN29DB_UpdateBlueMarbleEnterCount8dispatchEiiP6Stream+0xf7>
 84487ff:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8448803:	0f b6 d0             	movzbl %al,%edx
 8448806:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8448809:	89 54 24 0c          	mov    %edx,0xc(%esp)
 844880d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8448811:	c7 44 24 04 7c 88 c5 	movl   $0x8c5887c,0x4(%esp)
 8448818:	08 
 8448819:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844881c:	89 04 24             	mov    %eax,(%esp)
 844881f:	e8 9c b9 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8448824:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844882b:	00 
 844882c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844882f:	89 04 24             	mov    %eax,(%esp)
 8448832:	e8 ef ba fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8448837:	83 f0 01             	xor    $0x1,%eax
 844883a:	84 c0                	test   %al,%al
 844883c:	74 07                	je     8448845 <_ZN29DB_UpdateBlueMarbleEnterCount8dispatchEiiP6Stream+0xf7>
 844883e:	b8 00 00 00 00       	mov    $0x0,%eax
 8448843:	eb 05                	jmp    844884a <_ZN29DB_UpdateBlueMarbleEnterCount8dispatchEiiP6Stream+0xfc>
 8448845:	b8 01 00 00 00       	mov    $0x1,%eax
 844884a:	c9                   	leave
 844884b:	c3                   	ret

```

```c
// DB_UpdateBlueMarbleEnterCount::dispatch @ 0x844874e

/* DB_UpdateBlueMarbleEnterCount::dispatch(int, int, Stream*) */

undefined4 DB_UpdateBlueMarbleEnterCount::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  Stream *in_stack_00000010;
  byte local_15;
  uint local_14;
  MySQL *local_10;
  
  local_14 = 0;
  local_15 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_15);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_10,
                   "upDate charac_option set blue_marble_enter_count = %u where charac_no = %u",
                   (uint)local_15,local_14);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 == '\x01') {
    lVar3 = MySQL::getAffectedRowCount(local_10);
    if (lVar3 == 0) {
      MySQL::set_query(local_10,
                       "inSert into charac_option(charac_no, blue_marble_enter_count) values(%u, %u)"
                       ,local_14,(uint)local_15);
      cVar1 = MySQL::exec(local_10,true);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## makeRequest

```asm
// === 0844884c DB_UpdateBlueMarbleEnterCount::makeRequest  [0x0844884c-0x8448943] ===
 844884c:	55                   	push   %ebp
 844884d:	89 e5                	mov    %esp,%ebp
 844884f:	56                   	push   %esi
 8448850:	53                   	push   %ebx
 8448851:	83 ec 30             	sub    $0x30,%esp
 8448854:	8b 45 0c             	mov    0xc(%ebp),%eax
 8448857:	88 45 e4             	mov    %al,-0x1c(%ebp)
 844885a:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 844885f:	c7 44 24 08 85 b5 00 	movl   $0xb585,0x8(%esp)
 8448866:	00 
 8448867:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 844886e:	08 
 844886f:	89 04 24             	mov    %eax,(%esp)
 8448872:	e8 0f 72 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8448877:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 844887e:	00 
 844887f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8448883:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8448886:	89 04 24             	mov    %eax,(%esp)
 8448889:	e8 98 03 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 844888e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8448891:	89 04 24             	mov    %eax,(%esp)
 8448894:	e8 ad 03 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8448899:	c7 44 24 04 0c 03 00 	movl   $0x30c,0x4(%esp)
 84488a0:	00 
 84488a1:	89 04 24             	mov    %eax,(%esp)
 84488a4:	e8 ad 03 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84488a9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84488ac:	89 04 24             	mov    %eax,(%esp)
 84488af:	e8 92 03 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84488b4:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84488bb:	ff 
 84488bc:	89 04 24             	mov    %eax,(%esp)
 84488bf:	e8 92 03 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84488c4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84488c7:	89 04 24             	mov    %eax,(%esp)
 84488ca:	e8 77 03 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84488cf:	8b 55 08             	mov    0x8(%ebp),%edx
 84488d2:	89 54 24 04          	mov    %edx,0x4(%esp)
 84488d6:	89 04 24             	mov    %eax,(%esp)
 84488d9:	e8 b4 99 c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 84488de:	0f b6 5d e4          	movzbl -0x1c(%ebp),%ebx
 84488e2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84488e5:	89 04 24             	mov    %eax,(%esp)
 84488e8:	e8 59 03 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84488ed:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84488f1:	89 04 24             	mov    %eax,(%esp)
 84488f4:	e8 5b 4b 00 00       	call   844d454 <_ZN12CStreamGuardlsEh>
 84488f9:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84488fe:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8448901:	89 54 24 08          	mov    %edx,0x8(%esp)
 8448905:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 844890c:	00 
 844890d:	89 04 24             	mov    %eax,(%esp)
 8448910:	e8 c9 86 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8448915:	eb 1b                	jmp    8448932 <_ZN29DB_UpdateBlueMarbleEnterCount11makeRequestEjh+0xe6>
 8448917:	89 d3                	mov    %edx,%ebx
 8448919:	89 c6                	mov    %eax,%esi
 844891b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844891e:	89 04 24             	mov    %eax,(%esp)
 8448921:	e8 ac 3f 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8448926:	89 f0                	mov    %esi,%eax
 8448928:	89 da                	mov    %ebx,%edx
 844892a:	89 04 24             	mov    %eax,(%esp)
 844892d:	e8 1e ae 69 00       	call   8ae3750 <_Unwind_Resume>
 8448932:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8448935:	89 04 24             	mov    %eax,(%esp)
 8448938:	e8 95 3f 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844893d:	83 c4 30             	add    $0x30,%esp
 8448940:	5b                   	pop    %ebx
 8448941:	5e                   	pop    %esi
 8448942:	5d                   	pop    %ebp
 8448943:	c3                   	ret

```

```c
// DB_UpdateBlueMarbleEnterCount::makeRequest @ 0x844884c

/* DB_UpdateBlueMarbleEnterCount::makeRequest(unsigned int, unsigned char) */

void DB_UpdateBlueMarbleEnterCount::makeRequest(uint param_1,uchar param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb585);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 084488a4 to 08448914 has its CatchHandler @ 08448917 */
  CStreamGuard::operator<<(pCVar2,0x30c);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

