# DB_InsertRandomOptionItemInform

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08442c6a DB_InsertRandomOptionItemInform::dispatch  [0x08442c6a-0x8442d6f] ===
 8442c6a:	55                   	push   %ebp
 8442c6b:	89 e5                	mov    %esp,%ebp
 8442c6d:	53                   	push   %ebx
 8442c6e:	83 ec 34             	sub    $0x34,%esp
 8442c71:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8442c78:	c6 45 df 00          	movb   $0x0,-0x21(%ebp)
 8442c7c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8442c7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8442c83:	8b 45 14             	mov    0x14(%ebp),%eax
 8442c86:	89 04 24             	mov    %eax,(%esp)
 8442c89:	e8 08 9b 1d 00       	call   861c796 <_ZN6StreamrsERj>
 8442c8e:	8d 45 df             	lea    -0x21(%ebp),%eax
 8442c91:	89 44 24 04          	mov    %eax,0x4(%esp)
 8442c95:	8b 45 14             	mov    0x14(%ebp),%eax
 8442c98:	89 04 24             	mov    %eax,(%esp)
 8442c9b:	e8 92 9a 1d 00       	call   861c732 <_ZN6StreamrsERh>
 8442ca0:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8442ca5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8442cac:	00 
 8442cad:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8442cb4:	00 
 8442cb5:	89 04 24             	mov    %eax,(%esp)
 8442cb8:	e8 81 25 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8442cbd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8442cc0:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 8442cc4:	0f b6 d8             	movzbl %al,%ebx
 8442cc7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8442cca:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8442cd1:	00 
 8442cd2:	89 04 24             	mov    %eax,(%esp)
 8442cd5:	e8 71 63 cc ff       	call   810904b <_Z14NumberToStringji>
 8442cda:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8442cde:	89 44 24 08          	mov    %eax,0x8(%esp)
 8442ce2:	c7 44 24 04 dc 6b c5 	movl   $0x8c56bdc,0x4(%esp)
 8442ce9:	08 
 8442cea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8442ced:	89 04 24             	mov    %eax,(%esp)
 8442cf0:	e8 cb 14 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8442cf5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8442cfc:	00 
 8442cfd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8442d00:	89 04 24             	mov    %eax,(%esp)
 8442d03:	e8 1e 16 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8442d08:	83 f0 01             	xor    $0x1,%eax
 8442d0b:	84 c0                	test   %al,%al
 8442d0d:	74 56                	je     8442d65 <_ZN31DB_InsertRandomOptionItemInform8dispatchEiiP6Stream+0xfb>
 8442d0f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8442d12:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8442d19:	00 
 8442d1a:	89 04 24             	mov    %eax,(%esp)
 8442d1d:	e8 29 63 cc ff       	call   810904b <_Z14NumberToStringji>
 8442d22:	89 c3                	mov    %eax,%ebx
 8442d24:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8442d2b:	00 
 8442d2c:	c7 44 24 08 7e a4 00 	movl   $0xa47e,0x8(%esp)
 8442d33:	00 
 8442d34:	c7 44 24 04 00 b6 c5 	movl   $0x8c5b600,0x4(%esp)
 8442d3b:	08 
 8442d3c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8442d3f:	89 04 24             	mov    %eax,(%esp)
 8442d42:	e8 d1 c9 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8442d47:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8442d4b:	c7 44 24 04 2c 6c c5 	movl   $0x8c56c2c,0x4(%esp)
 8442d52:	08 
 8442d53:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8442d56:	89 04 24             	mov    %eax,(%esp)
 8442d59:	e8 2a ca 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8442d5e:	b8 00 00 00 00       	mov    $0x0,%eax
 8442d63:	eb 05                	jmp    8442d6a <_ZN31DB_InsertRandomOptionItemInform8dispatchEiiP6Stream+0x100>
 8442d65:	b8 01 00 00 00       	mov    $0x1,%eax
 8442d6a:	83 c4 34             	add    $0x34,%esp
 8442d6d:	5b                   	pop    %ebx
 8442d6e:	5d                   	pop    %ebp
 8442d6f:	c3                   	ret

```

```c
// DB_InsertRandomOptionItemInform::dispatch @ 0x8442c6a

/* DB_InsertRandomOptionItemInform::dispatch(int, int, Stream*) */

bool DB_InsertRandomOptionItemInform::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  Stream *in_stack_00000010;
  byte local_25;
  uint local_24;
  cMyTrace local_20 [16];
  MySQL *local_10;
  
  local_24 = 0;
  local_25 = 0;
  Stream::operator>>(in_stack_00000010,&local_24);
  Stream::operator>>(in_stack_00000010,&local_25);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar3 = (uint)local_25;
  uVar2 = NumberToString(local_24,0);
  MySQL::set_query(local_10,
                   "inSert into check_pick_up_random_option_item(m_id, check_count) values(%s, %u)",
                   uVar2,uVar3);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 != '\x01') {
    uVar2 = NumberToString(local_24,0);
    cMyTrace::cMyTrace(local_20,
                       "virtual bool DB_InsertRandomOptionItemInform::dispatch(int, int, Stream*)",
                       0xa47e,5);
    cMyTrace::operator()
              (local_20,"inSert into check_pickup_random_option_item failed at m_id(%s) ",uVar2);
  }
  return cVar1 == '\x01';
}

```

---

## makeRequest

```asm
// === 08442d70 DB_InsertRandomOptionItemInform::makeRequest  [0x08442d70-0x8442e67] ===
 8442d70:	55                   	push   %ebp
 8442d71:	89 e5                	mov    %esp,%ebp
 8442d73:	56                   	push   %esi
 8442d74:	53                   	push   %ebx
 8442d75:	83 ec 30             	sub    $0x30,%esp
 8442d78:	8b 45 10             	mov    0x10(%ebp),%eax
 8442d7b:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8442d7e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8442d83:	c7 44 24 08 88 a4 00 	movl   $0xa488,0x8(%esp)
 8442d8a:	00 
 8442d8b:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8442d92:	08 
 8442d93:	89 04 24             	mov    %eax,(%esp)
 8442d96:	e8 eb cc e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8442d9b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8442da2:	00 
 8442da3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8442da7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8442daa:	89 04 24             	mov    %eax,(%esp)
 8442dad:	e8 74 5e c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8442db2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8442db5:	89 04 24             	mov    %eax,(%esp)
 8442db8:	e8 89 5e c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8442dbd:	c7 44 24 04 99 02 00 	movl   $0x299,0x4(%esp)
 8442dc4:	00 
 8442dc5:	89 04 24             	mov    %eax,(%esp)
 8442dc8:	e8 89 5e c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8442dcd:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8442dd0:	89 04 24             	mov    %eax,(%esp)
 8442dd3:	e8 6e 5e c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8442dd8:	8b 55 08             	mov    0x8(%ebp),%edx
 8442ddb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8442ddf:	89 04 24             	mov    %eax,(%esp)
 8442de2:	e8 6f 5e c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8442de7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8442dea:	89 04 24             	mov    %eax,(%esp)
 8442ded:	e8 54 5e c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8442df2:	8b 55 0c             	mov    0xc(%ebp),%edx
 8442df5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8442df9:	89 04 24             	mov    %eax,(%esp)
 8442dfc:	e8 91 f4 c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8442e01:	0f b6 5d e4          	movzbl -0x1c(%ebp),%ebx
 8442e05:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8442e08:	89 04 24             	mov    %eax,(%esp)
 8442e0b:	e8 36 5e c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8442e10:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8442e14:	89 04 24             	mov    %eax,(%esp)
 8442e17:	e8 38 a6 00 00       	call   844d454 <_ZN12CStreamGuardlsEh>
 8442e1c:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8442e21:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8442e24:	89 54 24 08          	mov    %edx,0x8(%esp)
 8442e28:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8442e2f:	00 
 8442e30:	89 04 24             	mov    %eax,(%esp)
 8442e33:	e8 a6 e1 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8442e38:	eb 1b                	jmp    8442e55 <_ZN31DB_InsertRandomOptionItemInform11makeRequestEijh+0xe5>
 8442e3a:	89 d3                	mov    %edx,%ebx
 8442e3c:	89 c6                	mov    %eax,%esi
 8442e3e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8442e41:	89 04 24             	mov    %eax,(%esp)
 8442e44:	e8 89 9a 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8442e49:	89 f0                	mov    %esi,%eax
 8442e4b:	89 da                	mov    %ebx,%edx
 8442e4d:	89 04 24             	mov    %eax,(%esp)
 8442e50:	e8 fb 08 6a 00       	call   8ae3750 <_Unwind_Resume>
 8442e55:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8442e58:	89 04 24             	mov    %eax,(%esp)
 8442e5b:	e8 72 9a 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8442e60:	83 c4 30             	add    $0x30,%esp
 8442e63:	5b                   	pop    %ebx
 8442e64:	5e                   	pop    %esi
 8442e65:	5d                   	pop    %ebp
 8442e66:	c3                   	ret
 8442e67:	90                   	nop

```

```c
// DB_InsertRandomOptionItemInform::makeRequest @ 0x8442d70

/* DB_InsertRandomOptionItemInform::makeRequest(int, unsigned int, unsigned char) */

void DB_InsertRandomOptionItemInform::makeRequest(int param_1,uint param_2,uchar param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xa488);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08442dc8 to 08442e37 has its CatchHandler @ 08442e3a */
  CStreamGuard::operator<<(pCVar2,0x299);
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

