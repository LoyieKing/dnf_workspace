# DBUpdateExitTime

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0815b97c DBUpdateExitTime::dispatch  [0x0815b97c-0x815ba93] ===
 815b97c:	55                   	push   %ebp
 815b97d:	89 e5                	mov    %esp,%ebp
 815b97f:	56                   	push   %esi
 815b980:	53                   	push   %ebx
 815b981:	83 ec 30             	sub    $0x30,%esp
 815b984:	8b 45 14             	mov    0x14(%ebp),%eax
 815b987:	89 04 24             	mov    %eax,(%esp)
 815b98a:	e8 13 31 00 00       	call   815eaa2 <_ZN6Stream12GetOutBufferIN6Taiwan17SigUpdateExitTimeEEEPT_v>
 815b98f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 815b992:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 815b996:	75 2c                	jne    815b9c4 <_ZN16DBUpdateExitTime8dispatchEiiP6Stream+0x48>
 815b998:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815b99f:	e8 5c 9e 5c 00       	call   8725800 <__cxa_allocate_exception>
 815b9a4:	89 c2                	mov    %eax,%edx
 815b9a6:	c7 02 03 72 b7 08    	movl   $0x8b77203,(%edx)
 815b9ac:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815b9b3:	00 
 815b9b4:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815b9bb:	09 
 815b9bc:	89 04 24             	mov    %eax,(%esp)
 815b9bf:	e8 8c 92 5c 00       	call   8724c50 <__cxa_throw>
 815b9c4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815b9c7:	8b 48 04             	mov    0x4(%eax),%ecx
 815b9ca:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815b9cd:	8b 10                	mov    (%eax),%edx
 815b9cf:	a1 08 f7 41 09       	mov    0x941f708,%eax
 815b9d4:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 815b9d8:	89 54 24 04          	mov    %edx,0x4(%esp)
 815b9dc:	89 04 24             	mov    %eax,(%esp)
 815b9df:	e8 66 70 4a 00       	call   8602a4a <_ZN8WongWork10CSimpleSSO19updateSSOExpireTimeEjj>
 815b9e4:	83 f0 01             	xor    $0x1,%eax
 815b9e7:	84 c0                	test   %al,%al
 815b9e9:	74 2c                	je     815ba17 <_ZN16DBUpdateExitTime8dispatchEiiP6Stream+0x9b>
 815b9eb:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815b9f2:	e8 09 9e 5c 00       	call   8725800 <__cxa_allocate_exception>
 815b9f7:	89 c2                	mov    %eax,%edx
 815b9f9:	c7 02 77 72 b7 08    	movl   $0x8b77277,(%edx)
 815b9ff:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815ba06:	00 
 815ba07:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815ba0e:	09 
 815ba0f:	89 04 24             	mov    %eax,(%esp)
 815ba12:	e8 39 92 5c 00       	call   8724c50 <__cxa_throw>
 815ba17:	bb 01 00 00 00       	mov    $0x1,%ebx
 815ba1c:	eb 6c                	jmp    815ba8a <_ZN16DBUpdateExitTime8dispatchEiiP6Stream+0x10e>
 815ba1e:	83 fa 01             	cmp    $0x1,%edx
 815ba21:	74 08                	je     815ba2b <_ZN16DBUpdateExitTime8dispatchEiiP6Stream+0xaf>
 815ba23:	89 04 24             	mov    %eax,(%esp)
 815ba26:	e8 25 7d 98 00       	call   8ae3750 <_Unwind_Resume>
 815ba2b:	89 04 24             	mov    %eax,(%esp)
 815ba2e:	e8 ad a2 5c 00       	call   8725ce0 <__cxa_begin_catch>
 815ba33:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815ba36:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815ba39:	89 44 24 14          	mov    %eax,0x14(%esp)
 815ba3d:	c7 44 24 10 7c 76 b7 	movl   $0x8b7767c,0x10(%esp)
 815ba44:	08 
 815ba45:	c7 44 24 0c d4 01 00 	movl   $0x1d4,0xc(%esp)
 815ba4c:	00 
 815ba4d:	c7 44 24 08 60 91 b7 	movl   $0x8b79160,0x8(%esp)
 815ba54:	08 
 815ba55:	c7 44 24 04 d4 72 b7 	movl   $0x8b772d4,0x4(%esp)
 815ba5c:	08 
 815ba5d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 815ba64:	e8 a1 81 97 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 815ba69:	bb 00 00 00 00       	mov    $0x0,%ebx
 815ba6e:	e8 bd a1 5c 00       	call   8725c30 <__cxa_end_catch>
 815ba73:	eb 15                	jmp    815ba8a <_ZN16DBUpdateExitTime8dispatchEiiP6Stream+0x10e>
 815ba75:	89 d3                	mov    %edx,%ebx
 815ba77:	89 c6                	mov    %eax,%esi
 815ba79:	e8 b2 a1 5c 00       	call   8725c30 <__cxa_end_catch>
 815ba7e:	89 f0                	mov    %esi,%eax
 815ba80:	89 da                	mov    %ebx,%edx
 815ba82:	89 04 24             	mov    %eax,(%esp)
 815ba85:	e8 c6 7c 98 00       	call   8ae3750 <_Unwind_Resume>
 815ba8a:	89 d8                	mov    %ebx,%eax
 815ba8c:	83 c4 30             	add    $0x30,%esp
 815ba8f:	5b                   	pop    %ebx
 815ba90:	5e                   	pop    %esi
 815ba91:	5d                   	pop    %ebp
 815ba92:	c3                   	ret
 815ba93:	90                   	nop

```

```c
// DBUpdateExitTime::dispatch @ 0x815b97c

/* DBUpdateExitTime::dispatch(int, int, Stream*) */

undefined4 DBUpdateExitTime::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SigUpdateExitTime *pSVar2;
  undefined4 *puVar3;
  Stream *in_stack_00000010;
  
                    /* try { // try from 0815b98a to 0815ba16 has its CatchHandler @ 0815ba1e */
  pSVar2 = Stream::GetOutBuffer<Taiwan::SigUpdateExitTime>(in_stack_00000010);
  if (pSVar2 == (SigUpdateExitTime *)0x0) {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = "handle null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&char_const*::typeinfo,0);
  }
  cVar1 = WongWork::CSimpleSSO::updateSSOExpireTime
                    (GlobalData::s_psimpleSSO,*(uint *)pSVar2,*(uint *)(pSVar2 + 4));
  if (cVar1 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = &DAT_08b77277;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&char_const*::typeinfo,0);
  }
  return 1;
}

```

---

## makeRequest

```asm
// === 0815b89a DBUpdateExitTime::makeRequest  [0x0815b89a-0x815b97b] ===
 815b89a:	55                   	push   %ebp
 815b89b:	89 e5                	mov    %esp,%ebp
 815b89d:	56                   	push   %esi
 815b89e:	53                   	push   %ebx
 815b89f:	83 ec 20             	sub    $0x20,%esp
 815b8a2:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 815b8a7:	c7 44 24 08 b9 01 00 	movl   $0x1b9,0x8(%esp)
 815b8ae:	00 
 815b8af:	c7 44 24 04 d4 72 b7 	movl   $0x8b772d4,0x4(%esp)
 815b8b6:	08 
 815b8b7:	89 04 24             	mov    %eax,(%esp)
 815b8ba:	e8 c7 41 13 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 815b8bf:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 815b8c6:	00 
 815b8c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 815b8cb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 815b8ce:	89 04 24             	mov    %eax,(%esp)
 815b8d1:	e8 50 d3 f6 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 815b8d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 815b8d9:	89 44 24 08          	mov    %eax,0x8(%esp)
 815b8dd:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 815b8e4:	00 
 815b8e5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 815b8e8:	89 04 24             	mov    %eax,(%esp)
 815b8eb:	e8 60 80 00 00       	call   8163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>
 815b8f0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 815b8f3:	89 04 24             	mov    %eax,(%esp)
 815b8f6:	e8 53 d3 f6 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 815b8fb:	89 04 24             	mov    %eax,(%esp)
 815b8fe:	e8 89 31 00 00       	call   815ea8c <_ZN12CStreamGuard11GetInBufferIN6Taiwan17SigUpdateExitTimeEEEPT_v>
 815b903:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815b906:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 815b90a:	74 5d                	je     815b969 <_ZN16DBUpdateExitTime11makeRequestEjij+0xcf>
 815b90c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815b90f:	89 04 24             	mov    %eax,(%esp)
 815b912:	e8 21 26 00 00       	call   815df38 <_ZN6Taiwan17SigUpdateExitTime4initEv>
 815b917:	8b 45 10             	mov    0x10(%ebp),%eax
 815b91a:	89 44 24 08          	mov    %eax,0x8(%esp)
 815b91e:	8b 45 08             	mov    0x8(%ebp),%eax
 815b921:	89 44 24 04          	mov    %eax,0x4(%esp)
 815b925:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815b928:	89 04 24             	mov    %eax,(%esp)
 815b92b:	e8 20 26 00 00       	call   815df50 <_ZN6Taiwan17SigUpdateExitTime3setEjj>
 815b930:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 815b935:	8d 55 ec             	lea    -0x14(%ebp),%edx
 815b938:	89 54 24 08          	mov    %edx,0x8(%esp)
 815b93c:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 815b943:	00 
 815b944:	89 04 24             	mov    %eax,(%esp)
 815b947:	e8 92 56 41 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 815b94c:	eb 1b                	jmp    815b969 <_ZN16DBUpdateExitTime11makeRequestEjij+0xcf>
 815b94e:	89 d3                	mov    %edx,%ebx
 815b950:	89 c6                	mov    %eax,%esi
 815b952:	8d 45 ec             	lea    -0x14(%ebp),%eax
 815b955:	89 04 24             	mov    %eax,(%esp)
 815b958:	e8 75 0f 4c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 815b95d:	89 f0                	mov    %esi,%eax
 815b95f:	89 da                	mov    %ebx,%edx
 815b961:	89 04 24             	mov    %eax,(%esp)
 815b964:	e8 e7 7d 98 00       	call   8ae3750 <_Unwind_Resume>
 815b969:	8d 45 ec             	lea    -0x14(%ebp),%eax
 815b96c:	89 04 24             	mov    %eax,(%esp)
 815b96f:	e8 5e 0f 4c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 815b974:	83 c4 20             	add    $0x20,%esp
 815b977:	5b                   	pop    %ebx
 815b978:	5e                   	pop    %esi
 815b979:	5d                   	pop    %ebp
 815b97a:	c3                   	ret
 815b97b:	90                   	nop

```

```c
// DBUpdateExitTime::makeRequest @ 0x815b89a

/* DBUpdateExitTime::makeRequest(unsigned int, int, unsigned int) */

void DBUpdateExitTime::makeRequest(uint param_1,int param_2,uint param_3)

{
  Stream *pSVar1;
  CStreamGuard *this;
  CStreamGuard local_18 [8];
  SigUpdateExitTime *local_10;
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x1b9);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
                    /* try { // try from 0815b8eb to 0815b94b has its CatchHandler @ 0815b94e */
  Taiwan::internal_stream(local_18,8,param_2);
  this = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<Taiwan::SigUpdateExitTime>(this);
  if (local_10 != (SigUpdateExitTime *)0x0) {
    Taiwan::SigUpdateExitTime::init(local_10);
    Taiwan::SigUpdateExitTime::set(local_10,param_1,param_3);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

