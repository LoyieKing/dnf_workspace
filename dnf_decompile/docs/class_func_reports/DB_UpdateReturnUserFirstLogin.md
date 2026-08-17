# DB_UpdateReturnUserFirstLogin

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843dffe DB_UpdateReturnUserFirstLogin::dispatch  [0x0843dffe-0x843e145] ===
 843dffe:	55                   	push   %ebp
 843dfff:	89 e5                	mov    %esp,%ebp
 843e001:	56                   	push   %esi
 843e002:	53                   	push   %ebx
 843e003:	83 ec 30             	sub    $0x30,%esp
 843e006:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843e00b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843e012:	00 
 843e013:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 843e01a:	00 
 843e01b:	89 04 24             	mov    %eax,(%esp)
 843e01e:	e8 1b 72 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843e023:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843e026:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 843e02d:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 843e034:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 843e03b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843e03e:	89 44 24 04          	mov    %eax,0x4(%esp)
 843e042:	8b 45 14             	mov    0x14(%ebp),%eax
 843e045:	89 04 24             	mov    %eax,(%esp)
 843e048:	e8 49 e7 1d 00       	call   861c796 <_ZN6StreamrsERj>
 843e04d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843e050:	89 44 24 04          	mov    %eax,0x4(%esp)
 843e054:	8b 45 14             	mov    0x14(%ebp),%eax
 843e057:	89 04 24             	mov    %eax,(%esp)
 843e05a:	e8 65 e5 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 843e05f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 843e062:	89 44 24 04          	mov    %eax,0x4(%esp)
 843e066:	8b 45 14             	mov    0x14(%ebp),%eax
 843e069:	89 04 24             	mov    %eax,(%esp)
 843e06c:	e8 53 e5 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 843e071:	8b 75 ec             	mov    -0x14(%ebp),%esi
 843e074:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 843e077:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843e07a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843e081:	00 
 843e082:	89 04 24             	mov    %eax,(%esp)
 843e085:	e8 c1 af cc ff       	call   810904b <_Z14NumberToStringji>
 843e08a:	89 74 24 10          	mov    %esi,0x10(%esp)
 843e08e:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 843e092:	89 44 24 08          	mov    %eax,0x8(%esp)
 843e096:	c7 44 24 04 9c 55 c5 	movl   $0x8c5559c,0x4(%esp)
 843e09d:	08 
 843e09e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843e0a1:	89 04 24             	mov    %eax,(%esp)
 843e0a4:	e8 17 61 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843e0a9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843e0b0:	00 
 843e0b1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843e0b4:	89 04 24             	mov    %eax,(%esp)
 843e0b7:	e8 6a 62 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843e0bc:	83 f0 01             	xor    $0x1,%eax
 843e0bf:	84 c0                	test   %al,%al
 843e0c1:	74 77                	je     843e13a <_ZN29DB_UpdateReturnUserFirstLogin8dispatchEiiP6Stream+0x13c>
 843e0c3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843e0c6:	89 04 24             	mov    %eax,(%esp)
 843e0c9:	e8 ac d8 cd ff       	call   811b97a <_ZN5MySQL10getDBErrorEv>
 843e0ce:	3d 26 04 00 00       	cmp    $0x426,%eax
 843e0d3:	0f 94 c0             	sete   %al
 843e0d6:	84 c0                	test   %al,%al
 843e0d8:	74 59                	je     843e133 <_ZN29DB_UpdateReturnUserFirstLogin8dispatchEiiP6Stream+0x135>
 843e0da:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843e0dd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843e0e4:	00 
 843e0e5:	89 04 24             	mov    %eax,(%esp)
 843e0e8:	e8 5e af cc ff       	call   810904b <_Z14NumberToStringji>
 843e0ed:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 843e0f0:	8b 55 e8             	mov    -0x18(%ebp),%edx
 843e0f3:	89 44 24 10          	mov    %eax,0x10(%esp)
 843e0f7:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 843e0fb:	89 54 24 08          	mov    %edx,0x8(%esp)
 843e0ff:	c7 44 24 04 f8 55 c5 	movl   $0x8c555f8,0x4(%esp)
 843e106:	08 
 843e107:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843e10a:	89 04 24             	mov    %eax,(%esp)
 843e10d:	e8 ae 60 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843e112:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843e119:	00 
 843e11a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843e11d:	89 04 24             	mov    %eax,(%esp)
 843e120:	e8 01 62 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843e125:	83 f0 01             	xor    $0x1,%eax
 843e128:	84 c0                	test   %al,%al
 843e12a:	74 07                	je     843e133 <_ZN29DB_UpdateReturnUserFirstLogin8dispatchEiiP6Stream+0x135>
 843e12c:	b8 00 00 00 00       	mov    $0x0,%eax
 843e131:	eb 0c                	jmp    843e13f <_ZN29DB_UpdateReturnUserFirstLogin8dispatchEiiP6Stream+0x141>
 843e133:	b8 00 00 00 00       	mov    $0x0,%eax
 843e138:	eb 05                	jmp    843e13f <_ZN29DB_UpdateReturnUserFirstLogin8dispatchEiiP6Stream+0x141>
 843e13a:	b8 01 00 00 00       	mov    $0x1,%eax
 843e13f:	83 c4 30             	add    $0x30,%esp
 843e142:	5b                   	pop    %ebx
 843e143:	5e                   	pop    %esi
 843e144:	5d                   	pop    %ebp
 843e145:	c3                   	ret

```

```c
// DB_UpdateReturnUserFirstLogin::dispatch @ 0x843dffe

/* DB_UpdateReturnUserFirstLogin::dispatch(int, int, Stream*) */

undefined4 DB_UpdateReturnUserFirstLogin::dispatch(int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  Stream *in_stack_00000010;
  int local_1c;
  int local_18;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::operator>>(in_stack_00000010,&local_1c);
  iVar1 = local_18;
  iVar4 = local_1c;
  uVar3 = NumberToString(local_14,0);
  MySQL::set_query(local_10,
                   "inSert into return_user(m_id, expire_time, first_login) values(%s, from_unixtime(%d), %d)"
                   ,uVar3,iVar4,iVar1);
  cVar2 = MySQL::exec(local_10,true);
  if (cVar2 == '\x01') {
    uVar3 = 1;
  }
  else {
    iVar4 = MySQL::getDBError(local_10);
    if (iVar4 == 0x426) {
      uVar3 = NumberToString(local_14,0);
      MySQL::set_query(local_10,
                       "upDate return_user set expire_time = from_unixtime(%d), first_login=%d where m_id=%s"
                       ,local_1c,local_18,uVar3);
      cVar2 = MySQL::exec(local_10,true);
      if (cVar2 != '\x01') {
        return 0;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## makeRequest

```asm
// === 0843e146 DB_UpdateReturnUserFirstLogin::makeRequest  [0x0843e146-0x843e251] ===
 843e146:	55                   	push   %ebp
 843e147:	89 e5                	mov    %esp,%ebp
 843e149:	56                   	push   %esi
 843e14a:	53                   	push   %ebx
 843e14b:	83 ec 20             	sub    $0x20,%esp
 843e14e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843e153:	c7 44 24 08 e1 92 00 	movl   $0x92e1,0x8(%esp)
 843e15a:	00 
 843e15b:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843e162:	08 
 843e163:	89 04 24             	mov    %eax,(%esp)
 843e166:	e8 1b 19 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843e16b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843e172:	00 
 843e173:	89 44 24 04          	mov    %eax,0x4(%esp)
 843e177:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843e17a:	89 04 24             	mov    %eax,(%esp)
 843e17d:	e8 a4 aa c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843e182:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843e185:	89 04 24             	mov    %eax,(%esp)
 843e188:	e8 b9 aa c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843e18d:	c7 44 24 04 1f 02 00 	movl   $0x21f,0x4(%esp)
 843e194:	00 
 843e195:	89 04 24             	mov    %eax,(%esp)
 843e198:	e8 b9 aa c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843e19d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843e1a0:	89 04 24             	mov    %eax,(%esp)
 843e1a3:	e8 9e aa c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843e1a8:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 843e1af:	ff 
 843e1b0:	89 04 24             	mov    %eax,(%esp)
 843e1b3:	e8 9e aa c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843e1b8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843e1bb:	89 04 24             	mov    %eax,(%esp)
 843e1be:	e8 83 aa c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843e1c3:	8b 55 08             	mov    0x8(%ebp),%edx
 843e1c6:	89 54 24 04          	mov    %edx,0x4(%esp)
 843e1ca:	89 04 24             	mov    %eax,(%esp)
 843e1cd:	e8 c0 40 ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 843e1d2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843e1d5:	89 04 24             	mov    %eax,(%esp)
 843e1d8:	e8 69 aa c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843e1dd:	8b 55 10             	mov    0x10(%ebp),%edx
 843e1e0:	89 54 24 04          	mov    %edx,0x4(%esp)
 843e1e4:	89 04 24             	mov    %eax,(%esp)
 843e1e7:	e8 6a aa c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843e1ec:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843e1ef:	89 04 24             	mov    %eax,(%esp)
 843e1f2:	e8 4f aa c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843e1f7:	8b 55 0c             	mov    0xc(%ebp),%edx
 843e1fa:	89 54 24 04          	mov    %edx,0x4(%esp)
 843e1fe:	89 04 24             	mov    %eax,(%esp)
 843e201:	e8 50 aa c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843e206:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843e20b:	8d 55 f0             	lea    -0x10(%ebp),%edx
 843e20e:	89 54 24 08          	mov    %edx,0x8(%esp)
 843e212:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843e219:	00 
 843e21a:	89 04 24             	mov    %eax,(%esp)
 843e21d:	e8 bc 2d 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843e222:	eb 1b                	jmp    843e23f <_ZN29DB_UpdateReturnUserFirstLogin11makeRequestEjii+0xf9>
 843e224:	89 d3                	mov    %edx,%ebx
 843e226:	89 c6                	mov    %eax,%esi
 843e228:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843e22b:	89 04 24             	mov    %eax,(%esp)
 843e22e:	e8 9f e6 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843e233:	89 f0                	mov    %esi,%eax
 843e235:	89 da                	mov    %ebx,%edx
 843e237:	89 04 24             	mov    %eax,(%esp)
 843e23a:	e8 11 55 6a 00       	call   8ae3750 <_Unwind_Resume>
 843e23f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843e242:	89 04 24             	mov    %eax,(%esp)
 843e245:	e8 88 e6 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843e24a:	83 c4 20             	add    $0x20,%esp
 843e24d:	5b                   	pop    %ebx
 843e24e:	5e                   	pop    %esi
 843e24f:	5d                   	pop    %ebp
 843e250:	c3                   	ret
 843e251:	90                   	nop

```

```c
// DB_UpdateReturnUserFirstLogin::makeRequest @ 0x843e146

/* DB_UpdateReturnUserFirstLogin::makeRequest(unsigned int, int, int) */

void DB_UpdateReturnUserFirstLogin::makeRequest(uint param_1,int param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x92e1);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843e198 to 0843e221 has its CatchHandler @ 0843e224 */
  CStreamGuard::operator<<(pCVar2,0x21f);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

