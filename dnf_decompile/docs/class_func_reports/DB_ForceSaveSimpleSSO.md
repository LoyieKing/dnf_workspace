# DB_ForceSaveSimpleSSO

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08428154 DB_ForceSaveSimpleSSO::dispatch  [0x08428154-0x84281ad] ===
 8428154:	55                   	push   %ebp
 8428155:	89 e5                	mov    %esp,%ebp
 8428157:	83 ec 28             	sub    $0x28,%esp
 842815a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 842815d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8428161:	8b 45 14             	mov    0x14(%ebp),%eax
 8428164:	89 04 24             	mov    %eax,(%esp)
 8428167:	e8 2a 46 1f 00       	call   861c796 <_ZN6StreamrsERj>
 842816c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842816f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8428173:	8b 45 14             	mov    0x14(%ebp),%eax
 8428176:	89 04 24             	mov    %eax,(%esp)
 8428179:	e8 46 44 1f 00       	call   861c5c4 <_ZN6StreamrsERi>
 842817e:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8428181:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8428184:	a1 08 f7 41 09       	mov    0x941f708,%eax
 8428189:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 842818d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8428191:	89 04 24             	mov    %eax,(%esp)
 8428194:	e8 8d b0 1d 00       	call   8603226 <_ZN8WongWork10CSimpleSSO18updateHumanCertifyEji>
 8428199:	83 f0 01             	xor    $0x1,%eax
 842819c:	84 c0                	test   %al,%al
 842819e:	74 07                	je     84281a7 <_ZN21DB_ForceSaveSimpleSSO8dispatchEiiP6Stream+0x53>
 84281a0:	b8 00 00 00 00       	mov    $0x0,%eax
 84281a5:	eb 05                	jmp    84281ac <_ZN21DB_ForceSaveSimpleSSO8dispatchEiiP6Stream+0x58>
 84281a7:	b8 01 00 00 00       	mov    $0x1,%eax
 84281ac:	c9                   	leave
 84281ad:	c3                   	ret

```

```c
// DB_ForceSaveSimpleSSO::dispatch @ 0x8428154

/* DB_ForceSaveSimpleSSO::dispatch(int, int, Stream*) */

bool DB_ForceSaveSimpleSSO::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *in_stack_00000010;
  int local_14;
  uint local_10 [3];
  
  Stream::operator>>(in_stack_00000010,local_10);
  Stream::operator>>(in_stack_00000010,&local_14);
  cVar1 = WongWork::CSimpleSSO::updateHumanCertify(GlobalData::s_psimpleSSO,local_10[0],local_14);
  return cVar1 == '\x01';
}

```

---

## makeRequest

```asm
// === 084281ae DB_ForceSaveSimpleSSO::makeRequest  [0x084281ae-0x842829f] ===
 84281ae:	55                   	push   %ebp
 84281af:	89 e5                	mov    %esp,%ebp
 84281b1:	56                   	push   %esi
 84281b2:	53                   	push   %ebx
 84281b3:	83 ec 20             	sub    $0x20,%esp
 84281b6:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84281bb:	c7 44 24 08 b1 69 00 	movl   $0x69b1,0x8(%esp)
 84281c2:	00 
 84281c3:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84281ca:	08 
 84281cb:	89 04 24             	mov    %eax,(%esp)
 84281ce:	e8 b3 78 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84281d3:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84281da:	00 
 84281db:	89 44 24 04          	mov    %eax,0x4(%esp)
 84281df:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84281e2:	89 04 24             	mov    %eax,(%esp)
 84281e5:	e8 3c 0a ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84281ea:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84281ed:	89 04 24             	mov    %eax,(%esp)
 84281f0:	e8 51 0a ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84281f5:	c7 44 24 04 cf 00 00 	movl   $0xcf,0x4(%esp)
 84281fc:	00 
 84281fd:	89 04 24             	mov    %eax,(%esp)
 8428200:	e8 51 0a ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8428205:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8428208:	89 04 24             	mov    %eax,(%esp)
 842820b:	e8 36 0a ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8428210:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8428217:	ff 
 8428218:	89 04 24             	mov    %eax,(%esp)
 842821b:	e8 36 0a ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8428220:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8428223:	89 04 24             	mov    %eax,(%esp)
 8428226:	e8 1b 0a ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842822b:	8b 55 08             	mov    0x8(%ebp),%edx
 842822e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8428232:	89 04 24             	mov    %eax,(%esp)
 8428235:	e8 58 a0 cb ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 842823a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842823d:	89 04 24             	mov    %eax,(%esp)
 8428240:	e8 01 0a ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8428245:	8b 55 0c             	mov    0xc(%ebp),%edx
 8428248:	89 54 24 04          	mov    %edx,0x4(%esp)
 842824c:	89 04 24             	mov    %eax,(%esp)
 842824f:	e8 02 0a ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8428254:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8428259:	8d 55 f0             	lea    -0x10(%ebp),%edx
 842825c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8428260:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8428267:	00 
 8428268:	89 04 24             	mov    %eax,(%esp)
 842826b:	e8 6e 8d 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8428270:	eb 1b                	jmp    842828d <_ZN21DB_ForceSaveSimpleSSO11makeRequestEji+0xdf>
 8428272:	89 d3                	mov    %edx,%ebx
 8428274:	89 c6                	mov    %eax,%esi
 8428276:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8428279:	89 04 24             	mov    %eax,(%esp)
 842827c:	e8 51 46 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8428281:	89 f0                	mov    %esi,%eax
 8428283:	89 da                	mov    %ebx,%edx
 8428285:	89 04 24             	mov    %eax,(%esp)
 8428288:	e8 c3 b4 6b 00       	call   8ae3750 <_Unwind_Resume>
 842828d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8428290:	89 04 24             	mov    %eax,(%esp)
 8428293:	e8 3a 46 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8428298:	83 c4 20             	add    $0x20,%esp
 842829b:	5b                   	pop    %ebx
 842829c:	5e                   	pop    %esi
 842829d:	5d                   	pop    %ebp
 842829e:	c3                   	ret
 842829f:	90                   	nop

```

```c
// DB_ForceSaveSimpleSSO::makeRequest @ 0x84281ae

/* DB_ForceSaveSimpleSSO::makeRequest(unsigned int, int) */

void DB_ForceSaveSimpleSSO::makeRequest(uint param_1,int param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x69b1);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08428200 to 0842826f has its CatchHandler @ 08428272 */
  CStreamGuard::operator<<(pCVar2,0xcf);
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

