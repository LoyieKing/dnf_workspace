# DB_SavePuUserCheck

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0844bfb8 DB_SavePuUserCheck::dispatch  [0x0844bfb8-0x844c097] ===
 844bfb8:	55                   	push   %ebp
 844bfb9:	89 e5                	mov    %esp,%ebp
 844bfbb:	83 ec 28             	sub    $0x28,%esp
 844bfbe:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 844bfc3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844bfca:	00 
 844bfcb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844bfd2:	00 
 844bfd3:	89 04 24             	mov    %eax,(%esp)
 844bfd6:	e8 63 92 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 844bfdb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 844bfde:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 844bfe2:	75 0a                	jne    844bfee <_ZN18DB_SavePuUserCheck8dispatchEiiP6Stream+0x36>
 844bfe4:	b8 00 00 00 00       	mov    $0x0,%eax
 844bfe9:	e9 a8 00 00 00       	jmp    844c096 <_ZN18DB_SavePuUserCheck8dispatchEiiP6Stream+0xde>
 844bfee:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 844bff5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844bff8:	89 44 24 04          	mov    %eax,0x4(%esp)
 844bffc:	8b 45 14             	mov    0x14(%ebp),%eax
 844bfff:	89 04 24             	mov    %eax,(%esp)
 844c002:	e8 8f 07 1d 00       	call   861c796 <_ZN6StreamrsERj>
 844c007:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844c00a:	89 44 24 08          	mov    %eax,0x8(%esp)
 844c00e:	c7 44 24 04 18 98 c5 	movl   $0x8c59818,0x4(%esp)
 844c015:	08 
 844c016:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844c019:	89 04 24             	mov    %eax,(%esp)
 844c01c:	e8 9f 81 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844c021:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844c028:	00 
 844c029:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844c02c:	89 04 24             	mov    %eax,(%esp)
 844c02f:	e8 f2 82 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844c034:	83 f0 01             	xor    $0x1,%eax
 844c037:	84 c0                	test   %al,%al
 844c039:	74 07                	je     844c042 <_ZN18DB_SavePuUserCheck8dispatchEiiP6Stream+0x8a>
 844c03b:	b8 00 00 00 00       	mov    $0x0,%eax
 844c040:	eb 54                	jmp    844c096 <_ZN18DB_SavePuUserCheck8dispatchEiiP6Stream+0xde>
 844c042:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844c045:	89 04 24             	mov    %eax,(%esp)
 844c048:	e8 1f 63 c9 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 844c04d:	85 c0                	test   %eax,%eax
 844c04f:	0f 94 c0             	sete   %al
 844c052:	84 c0                	test   %al,%al
 844c054:	74 3b                	je     844c091 <_ZN18DB_SavePuUserCheck8dispatchEiiP6Stream+0xd9>
 844c056:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844c059:	89 44 24 08          	mov    %eax,0x8(%esp)
 844c05d:	c7 44 24 04 48 98 c5 	movl   $0x8c59848,0x4(%esp)
 844c064:	08 
 844c065:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844c068:	89 04 24             	mov    %eax,(%esp)
 844c06b:	e8 50 81 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844c070:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844c077:	00 
 844c078:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844c07b:	89 04 24             	mov    %eax,(%esp)
 844c07e:	e8 a3 82 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844c083:	83 f0 01             	xor    $0x1,%eax
 844c086:	84 c0                	test   %al,%al
 844c088:	74 07                	je     844c091 <_ZN18DB_SavePuUserCheck8dispatchEiiP6Stream+0xd9>
 844c08a:	b8 00 00 00 00       	mov    $0x0,%eax
 844c08f:	eb 05                	jmp    844c096 <_ZN18DB_SavePuUserCheck8dispatchEiiP6Stream+0xde>
 844c091:	b8 01 00 00 00       	mov    $0x1,%eax
 844c096:	c9                   	leave
 844c097:	c3                   	ret

```

```c
// DB_SavePuUserCheck::dispatch @ 0x844bfb8

/* DB_SavePuUserCheck::dispatch(int, int, Stream*) */

undefined4 DB_SavePuUserCheck::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  Stream *in_stack_00000010;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  if (local_10 == (MySQL *)0x0) {
    uVar2 = 0;
  }
  else {
    local_14 = 0;
    Stream::operator>>(in_stack_00000010,&local_14);
    MySQL::set_query(local_10,"seLect m_id from pu_user_list where m_id = %u",local_14);
    cVar1 = MySQL::exec(local_10,true);
    if (cVar1 == '\x01') {
      iVar3 = MySQL::get_n_rows(local_10);
      if (iVar3 == 0) {
        MySQL::set_query(local_10,"inSert into pu_user_list(m_id) values(%u)",local_14);
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
  }
  return uVar2;
}

```

---

## makeRequest

```asm
// === 0844c098 DB_SavePuUserCheck::makeRequest  [0x0844c098-0x844c16f] ===
 844c098:	55                   	push   %ebp
 844c099:	89 e5                	mov    %esp,%ebp
 844c09b:	56                   	push   %esi
 844c09c:	53                   	push   %ebx
 844c09d:	83 ec 20             	sub    $0x20,%esp
 844c0a0:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 844c0a5:	c7 44 24 08 f4 bc 00 	movl   $0xbcf4,0x8(%esp)
 844c0ac:	00 
 844c0ad:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 844c0b4:	08 
 844c0b5:	89 04 24             	mov    %eax,(%esp)
 844c0b8:	e8 c9 39 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 844c0bd:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 844c0c4:	00 
 844c0c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 844c0c9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844c0cc:	89 04 24             	mov    %eax,(%esp)
 844c0cf:	e8 52 cb c7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 844c0d4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844c0d7:	89 04 24             	mov    %eax,(%esp)
 844c0da:	e8 67 cb c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844c0df:	c7 44 24 04 e2 02 00 	movl   $0x2e2,0x4(%esp)
 844c0e6:	00 
 844c0e7:	89 04 24             	mov    %eax,(%esp)
 844c0ea:	e8 67 cb c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844c0ef:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844c0f2:	89 04 24             	mov    %eax,(%esp)
 844c0f5:	e8 4c cb c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844c0fa:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 844c101:	ff 
 844c102:	89 04 24             	mov    %eax,(%esp)
 844c105:	e8 4c cb c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844c10a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844c10d:	89 04 24             	mov    %eax,(%esp)
 844c110:	e8 31 cb c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844c115:	8b 55 08             	mov    0x8(%ebp),%edx
 844c118:	89 54 24 04          	mov    %edx,0x4(%esp)
 844c11c:	89 04 24             	mov    %eax,(%esp)
 844c11f:	e8 6e 61 c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 844c124:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 844c129:	8d 55 f0             	lea    -0x10(%ebp),%edx
 844c12c:	89 54 24 08          	mov    %edx,0x8(%esp)
 844c130:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 844c137:	00 
 844c138:	89 04 24             	mov    %eax,(%esp)
 844c13b:	e8 9e 4e 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 844c140:	eb 1b                	jmp    844c15d <_ZN18DB_SavePuUserCheck11makeRequestEj+0xc5>
 844c142:	89 d3                	mov    %edx,%ebx
 844c144:	89 c6                	mov    %eax,%esi
 844c146:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844c149:	89 04 24             	mov    %eax,(%esp)
 844c14c:	e8 81 07 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844c151:	89 f0                	mov    %esi,%eax
 844c153:	89 da                	mov    %ebx,%edx
 844c155:	89 04 24             	mov    %eax,(%esp)
 844c158:	e8 f3 75 69 00       	call   8ae3750 <_Unwind_Resume>
 844c15d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844c160:	89 04 24             	mov    %eax,(%esp)
 844c163:	e8 6a 07 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844c168:	83 c4 20             	add    $0x20,%esp
 844c16b:	5b                   	pop    %ebx
 844c16c:	5e                   	pop    %esi
 844c16d:	5d                   	pop    %ebp
 844c16e:	c3                   	ret
 844c16f:	90                   	nop

```

```c
// DB_SavePuUserCheck::makeRequest @ 0x844c098

/* DB_SavePuUserCheck::makeRequest(unsigned int) */

void DB_SavePuUserCheck::makeRequest(uint param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xbcf4);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0844c0ea to 0844c13f has its CatchHandler @ 0844c142 */
  CStreamGuard::operator<<(pCVar2,0x2e2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

