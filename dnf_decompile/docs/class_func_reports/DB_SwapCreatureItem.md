# DB_SwapCreatureItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0841fe0c DB_SwapCreatureItem::dispatch  [0x0841fe0c-0x841fef1] ===
 841fe0c:	55                   	push   %ebp
 841fe0d:	89 e5                	mov    %esp,%ebp
 841fe0f:	83 ec 28             	sub    $0x28,%esp
 841fe12:	8b 45 14             	mov    0x14(%ebp),%eax
 841fe15:	89 04 24             	mov    %eax,(%esp)
 841fe18:	e8 dd 1c 03 00       	call   8451afa <_ZN6Stream12GetOutBufferI22SIG_SWAP_CREATURE_ITEMEEPT_v>
 841fe1d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 841fe20:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841fe25:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841fe2c:	00 
 841fe2d:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 841fe34:	00 
 841fe35:	89 04 24             	mov    %eax,(%esp)
 841fe38:	e8 01 54 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841fe3d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 841fe40:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841fe43:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 841fe47:	83 f0 01             	xor    $0x1,%eax
 841fe4a:	84 c0                	test   %al,%al
 841fe4c:	74 47                	je     841fe95 <_ZN19DB_SwapCreatureItem8dispatchEiiP6Stream+0x89>
 841fe4e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841fe51:	8b 10                	mov    (%eax),%edx
 841fe53:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841fe56:	8b 40 10             	mov    0x10(%eax),%eax
 841fe59:	89 54 24 0c          	mov    %edx,0xc(%esp)
 841fe5d:	89 44 24 08          	mov    %eax,0x8(%esp)
 841fe61:	c7 44 24 04 0c c6 c4 	movl   $0x8c4c60c,0x4(%esp)
 841fe68:	08 
 841fe69:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841fe6c:	89 04 24             	mov    %eax,(%esp)
 841fe6f:	e8 4c 43 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841fe74:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841fe7b:	00 
 841fe7c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841fe7f:	89 04 24             	mov    %eax,(%esp)
 841fe82:	e8 9f 44 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841fe87:	83 f0 01             	xor    $0x1,%eax
 841fe8a:	84 c0                	test   %al,%al
 841fe8c:	74 07                	je     841fe95 <_ZN19DB_SwapCreatureItem8dispatchEiiP6Stream+0x89>
 841fe8e:	b8 00 00 00 00       	mov    $0x0,%eax
 841fe93:	eb 5b                	jmp    841fef0 <_ZN19DB_SwapCreatureItem8dispatchEiiP6Stream+0xe4>
 841fe95:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841fe98:	0f b6 40 14          	movzbl 0x14(%eax),%eax
 841fe9c:	83 f0 01             	xor    $0x1,%eax
 841fe9f:	84 c0                	test   %al,%al
 841fea1:	74 48                	je     841feeb <_ZN19DB_SwapCreatureItem8dispatchEiiP6Stream+0xdf>
 841fea3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841fea6:	8b 50 0c             	mov    0xc(%eax),%edx
 841fea9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841feac:	8b 40 04             	mov    0x4(%eax),%eax
 841feaf:	89 54 24 0c          	mov    %edx,0xc(%esp)
 841feb3:	89 44 24 08          	mov    %eax,0x8(%esp)
 841feb7:	c7 44 24 04 0c c6 c4 	movl   $0x8c4c60c,0x4(%esp)
 841febe:	08 
 841febf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841fec2:	89 04 24             	mov    %eax,(%esp)
 841fec5:	e8 f6 42 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841feca:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841fed1:	00 
 841fed2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841fed5:	89 04 24             	mov    %eax,(%esp)
 841fed8:	e8 49 44 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841fedd:	83 f0 01             	xor    $0x1,%eax
 841fee0:	84 c0                	test   %al,%al
 841fee2:	74 07                	je     841feeb <_ZN19DB_SwapCreatureItem8dispatchEiiP6Stream+0xdf>
 841fee4:	b8 00 00 00 00       	mov    $0x0,%eax
 841fee9:	eb 05                	jmp    841fef0 <_ZN19DB_SwapCreatureItem8dispatchEiiP6Stream+0xe4>
 841feeb:	b8 01 00 00 00       	mov    $0x1,%eax
 841fef0:	c9                   	leave
 841fef1:	c3                   	ret

```

```c
// DB_SwapCreatureItem::dispatch @ 0x841fe0c

/* DB_SwapCreatureItem::dispatch(int, int, Stream*) */

undefined4 DB_SwapCreatureItem::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_SWAP_CREATURE_ITEM *pSVar2;
  MySQL *this;
  Stream *in_stack_00000010;
  
  pSVar2 = Stream::GetOutBuffer<SIG_SWAP_CREATURE_ITEM>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  if (pSVar2[8] != (SIG_SWAP_CREATURE_ITEM)0x1) {
    MySQL::set_query(this,"upDate creature_items set slot=%d where ui_id=%d",
                     *(undefined4 *)(pSVar2 + 0x10),*(undefined4 *)pSVar2);
    cVar1 = MySQL::exec(this,true);
    if (cVar1 != '\x01') {
      return 0;
    }
  }
  if (pSVar2[0x14] != (SIG_SWAP_CREATURE_ITEM)0x1) {
    MySQL::set_query(this,"upDate creature_items set slot=%d where ui_id=%d",
                     *(undefined4 *)(pSVar2 + 4),*(undefined4 *)(pSVar2 + 0xc));
    cVar1 = MySQL::exec(this,true);
    if (cVar1 != '\x01') {
      return 0;
    }
  }
  return 1;
}

```

---

## makeRequest

```asm
// === 0841fef2 DB_SwapCreatureItem::makeRequest  [0x0841fef2-0x841fff7] ===
 841fef2:	55                   	push   %ebp
 841fef3:	89 e5                	mov    %esp,%ebp
 841fef5:	56                   	push   %esi
 841fef6:	53                   	push   %ebx
 841fef7:	83 ec 20             	sub    $0x20,%esp
 841fefa:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 841feff:	c7 44 24 08 62 56 00 	movl   $0x5662,0x8(%esp)
 841ff06:	00 
 841ff07:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 841ff0e:	08 
 841ff0f:	89 04 24             	mov    %eax,(%esp)
 841ff12:	e8 6f fb e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 841ff17:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 841ff1e:	00 
 841ff1f:	89 44 24 04          	mov    %eax,0x4(%esp)
 841ff23:	8d 45 ec             	lea    -0x14(%ebp),%eax
 841ff26:	89 04 24             	mov    %eax,(%esp)
 841ff29:	e8 f8 8c ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 841ff2e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 841ff31:	89 04 24             	mov    %eax,(%esp)
 841ff34:	e8 0d 8d ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 841ff39:	c7 44 24 04 8c 00 00 	movl   $0x8c,0x4(%esp)
 841ff40:	00 
 841ff41:	89 04 24             	mov    %eax,(%esp)
 841ff44:	e8 0d 8d ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 841ff49:	8d 45 ec             	lea    -0x14(%ebp),%eax
 841ff4c:	89 04 24             	mov    %eax,(%esp)
 841ff4f:	e8 f2 8c ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 841ff54:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 841ff5b:	ff 
 841ff5c:	89 04 24             	mov    %eax,(%esp)
 841ff5f:	e8 f2 8c ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 841ff64:	8d 45 ec             	lea    -0x14(%ebp),%eax
 841ff67:	89 04 24             	mov    %eax,(%esp)
 841ff6a:	e8 df 8c ca ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 841ff6f:	89 04 24             	mov    %eax,(%esp)
 841ff72:	e8 51 3b f2 ff       	call   8343ac8 <_ZN12CStreamGuard11GetInBufferI22SIG_SWAP_CREATURE_ITEMEEPT_v>
 841ff77:	89 45 f4             	mov    %eax,-0xc(%ebp)
 841ff7a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841ff7d:	c6 40 08 00          	movb   $0x0,0x8(%eax)
 841ff81:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841ff84:	8b 55 0c             	mov    0xc(%ebp),%edx
 841ff87:	89 50 10             	mov    %edx,0x10(%eax)
 841ff8a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841ff8d:	8b 55 08             	mov    0x8(%ebp),%edx
 841ff90:	89 10                	mov    %edx,(%eax)
 841ff92:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841ff95:	c6 40 14 01          	movb   $0x1,0x14(%eax)
 841ff99:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841ff9c:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 841ffa3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841ffa6:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 841ffad:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 841ffb2:	8d 55 ec             	lea    -0x14(%ebp),%edx
 841ffb5:	89 54 24 08          	mov    %edx,0x8(%esp)
 841ffb9:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 841ffc0:	00 
 841ffc1:	89 04 24             	mov    %eax,(%esp)
 841ffc4:	e8 15 10 15 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 841ffc9:	eb 1b                	jmp    841ffe6 <_ZN19DB_SwapCreatureItem11makeRequestEii+0xf4>
 841ffcb:	89 d3                	mov    %edx,%ebx
 841ffcd:	89 c6                	mov    %eax,%esi
 841ffcf:	8d 45 ec             	lea    -0x14(%ebp),%eax
 841ffd2:	89 04 24             	mov    %eax,(%esp)
 841ffd5:	e8 f8 c8 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 841ffda:	89 f0                	mov    %esi,%eax
 841ffdc:	89 da                	mov    %ebx,%edx
 841ffde:	89 04 24             	mov    %eax,(%esp)
 841ffe1:	e8 6a 37 6c 00       	call   8ae3750 <_Unwind_Resume>
 841ffe6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 841ffe9:	89 04 24             	mov    %eax,(%esp)
 841ffec:	e8 e1 c8 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 841fff1:	83 c4 20             	add    $0x20,%esp
 841fff4:	5b                   	pop    %ebx
 841fff5:	5e                   	pop    %esi
 841fff6:	5d                   	pop    %ebp
 841fff7:	c3                   	ret

```

```c
// DB_SwapCreatureItem::makeRequest @ 0x841fef2

/* DB_SwapCreatureItem::makeRequest(int, int) */

void DB_SwapCreatureItem::makeRequest(int param_1,int param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SWAP_CREATURE_ITEM *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x5662);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0841ff44 to 0841ffc8 has its CatchHandler @ 0841ffcb */
  CStreamGuard::operator<<(pCVar2,0x8c);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SWAP_CREATURE_ITEM>(pCVar2);
  local_10[8] = (SIG_SWAP_CREATURE_ITEM)0x0;
  *(int *)(local_10 + 0x10) = param_2;
  *(int *)local_10 = param_1;
  local_10[0x14] = (SIG_SWAP_CREATURE_ITEM)0x1;
  *(undefined4 *)(local_10 + 4) = 0;
  *(undefined4 *)(local_10 + 0xc) = 0;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

