# DB_CancelJoinGuild

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843d6ea DB_CancelJoinGuild::dispatch  [0x0843d6ea-0x843d78b] ===
 843d6ea:	55                   	push   %ebp
 843d6eb:	89 e5                	mov    %esp,%ebp
 843d6ed:	83 ec 28             	sub    $0x28,%esp
 843d6f0:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843d6f5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843d6fc:	00 
 843d6fd:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 843d704:	00 
 843d705:	89 04 24             	mov    %eax,(%esp)
 843d708:	e8 31 7b fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843d70d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843d710:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 843d717:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 843d71e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843d721:	89 44 24 04          	mov    %eax,0x4(%esp)
 843d725:	8b 45 14             	mov    0x14(%ebp),%eax
 843d728:	89 04 24             	mov    %eax,(%esp)
 843d72b:	e8 66 f0 1d 00       	call   861c796 <_ZN6StreamrsERj>
 843d730:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843d733:	89 44 24 04          	mov    %eax,0x4(%esp)
 843d737:	8b 45 14             	mov    0x14(%ebp),%eax
 843d73a:	89 04 24             	mov    %eax,(%esp)
 843d73d:	e8 54 f0 1d 00       	call   861c796 <_ZN6StreamrsERj>
 843d742:	8b 55 ec             	mov    -0x14(%ebp),%edx
 843d745:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843d748:	89 54 24 0c          	mov    %edx,0xc(%esp)
 843d74c:	89 44 24 08          	mov    %eax,0x8(%esp)
 843d750:	c7 44 24 04 6c 54 c5 	movl   $0x8c5546c,0x4(%esp)
 843d757:	08 
 843d758:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843d75b:	89 04 24             	mov    %eax,(%esp)
 843d75e:	e8 5d 6a fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843d763:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843d76a:	00 
 843d76b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843d76e:	89 04 24             	mov    %eax,(%esp)
 843d771:	e8 b0 6b fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843d776:	83 f0 01             	xor    $0x1,%eax
 843d779:	84 c0                	test   %al,%al
 843d77b:	74 07                	je     843d784 <_ZN18DB_CancelJoinGuild8dispatchEiiP6Stream+0x9a>
 843d77d:	b8 00 00 00 00       	mov    $0x0,%eax
 843d782:	eb 05                	jmp    843d789 <_ZN18DB_CancelJoinGuild8dispatchEiiP6Stream+0x9f>
 843d784:	b8 01 00 00 00       	mov    $0x1,%eax
 843d789:	c9                   	leave
 843d78a:	c3                   	ret
 843d78b:	90                   	nop

```

```c
// DB_CancelJoinGuild::dispatch @ 0x843d6ea

/* DB_CancelJoinGuild::dispatch(int, int, Stream*) */

bool DB_CancelJoinGuild::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *in_stack_00000010;
  uint local_18;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,8,0);
  local_14 = 0;
  local_18 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  MySQL::set_query(local_10,"deLete from guild_join_list where guild_id=%d and charac_no=%d",
                   local_14,local_18);
  cVar1 = MySQL::exec(local_10,true);
  return cVar1 == '\x01';
}

```

---

## makeRequest

```asm
// === 0843d78c DB_CancelJoinGuild::makeRequest  [0x0843d78c-0x843d87b] ===
 843d78c:	55                   	push   %ebp
 843d78d:	89 e5                	mov    %esp,%ebp
 843d78f:	56                   	push   %esi
 843d790:	53                   	push   %ebx
 843d791:	83 ec 20             	sub    $0x20,%esp
 843d794:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843d799:	c7 44 24 08 34 92 00 	movl   $0x9234,0x8(%esp)
 843d7a0:	00 
 843d7a1:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843d7a8:	08 
 843d7a9:	89 04 24             	mov    %eax,(%esp)
 843d7ac:	e8 d5 22 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843d7b1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843d7b8:	00 
 843d7b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 843d7bd:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843d7c0:	89 04 24             	mov    %eax,(%esp)
 843d7c3:	e8 5e b4 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843d7c8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843d7cb:	89 04 24             	mov    %eax,(%esp)
 843d7ce:	e8 73 b4 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843d7d3:	c7 44 24 04 18 02 00 	movl   $0x218,0x4(%esp)
 843d7da:	00 
 843d7db:	89 04 24             	mov    %eax,(%esp)
 843d7de:	e8 73 b4 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843d7e3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843d7e6:	89 04 24             	mov    %eax,(%esp)
 843d7e9:	e8 58 b4 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843d7ee:	8b 55 08             	mov    0x8(%ebp),%edx
 843d7f1:	89 54 24 04          	mov    %edx,0x4(%esp)
 843d7f5:	89 04 24             	mov    %eax,(%esp)
 843d7f8:	e8 59 b4 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843d7fd:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843d800:	89 04 24             	mov    %eax,(%esp)
 843d803:	e8 3e b4 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843d808:	8b 55 0c             	mov    0xc(%ebp),%edx
 843d80b:	89 54 24 04          	mov    %edx,0x4(%esp)
 843d80f:	89 04 24             	mov    %eax,(%esp)
 843d812:	e8 7b 4a ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 843d817:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843d81a:	89 04 24             	mov    %eax,(%esp)
 843d81d:	e8 24 b4 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843d822:	8b 55 10             	mov    0x10(%ebp),%edx
 843d825:	89 54 24 04          	mov    %edx,0x4(%esp)
 843d829:	89 04 24             	mov    %eax,(%esp)
 843d82c:	e8 61 4a ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 843d831:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843d836:	8d 55 f0             	lea    -0x10(%ebp),%edx
 843d839:	89 54 24 08          	mov    %edx,0x8(%esp)
 843d83d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843d844:	00 
 843d845:	89 04 24             	mov    %eax,(%esp)
 843d848:	e8 91 37 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843d84d:	eb 1b                	jmp    843d86a <_ZN18DB_CancelJoinGuild11makeRequestEijj+0xde>
 843d84f:	89 d3                	mov    %edx,%ebx
 843d851:	89 c6                	mov    %eax,%esi
 843d853:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843d856:	89 04 24             	mov    %eax,(%esp)
 843d859:	e8 74 f0 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843d85e:	89 f0                	mov    %esi,%eax
 843d860:	89 da                	mov    %ebx,%edx
 843d862:	89 04 24             	mov    %eax,(%esp)
 843d865:	e8 e6 5e 6a 00       	call   8ae3750 <_Unwind_Resume>
 843d86a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843d86d:	89 04 24             	mov    %eax,(%esp)
 843d870:	e8 5d f0 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843d875:	83 c4 20             	add    $0x20,%esp
 843d878:	5b                   	pop    %ebx
 843d879:	5e                   	pop    %esi
 843d87a:	5d                   	pop    %ebp
 843d87b:	c3                   	ret

```

```c
// DB_CancelJoinGuild::makeRequest @ 0x843d78c

/* DB_CancelJoinGuild::makeRequest(int, unsigned int, unsigned int) */

void DB_CancelJoinGuild::makeRequest(int param_1,uint param_2,uint param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x9234);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843d7de to 0843d84c has its CatchHandler @ 0843d84f */
  CStreamGuard::operator<<(pCVar2,0x218);
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

