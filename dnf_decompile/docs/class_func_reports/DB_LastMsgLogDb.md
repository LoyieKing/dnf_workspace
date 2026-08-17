# DB_LastMsgLogDb

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08421c8e DB_LastMsgLogDb::dispatch  [0x08421c8e-0x8421d4f] ===
 8421c8e:	55                   	push   %ebp
 8421c8f:	89 e5                	mov    %esp,%ebp
 8421c91:	56                   	push   %esi
 8421c92:	53                   	push   %ebx
 8421c93:	83 ec 20             	sub    $0x20,%esp
 8421c96:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8421c9b:	c7 44 24 08 f7 59 00 	movl   $0x59f7,0x8(%esp)
 8421ca2:	00 
 8421ca3:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8421caa:	08 
 8421cab:	89 04 24             	mov    %eax,(%esp)
 8421cae:	e8 d3 dd e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8421cb3:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8421cba:	00 
 8421cbb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8421cbf:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8421cc2:	89 04 24             	mov    %eax,(%esp)
 8421cc5:	e8 5c 6f ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8421cca:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8421ccd:	89 04 24             	mov    %eax,(%esp)
 8421cd0:	e8 71 6f ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8421cd5:	c7 44 24 04 97 00 00 	movl   $0x97,0x4(%esp)
 8421cdc:	00 
 8421cdd:	89 04 24             	mov    %eax,(%esp)
 8421ce0:	e8 71 6f ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8421ce5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8421ce8:	89 04 24             	mov    %eax,(%esp)
 8421ceb:	e8 56 6f ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8421cf0:	8b 55 10             	mov    0x10(%ebp),%edx
 8421cf3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8421cf7:	89 04 24             	mov    %eax,(%esp)
 8421cfa:	e8 57 6f ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8421cff:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8421d04:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8421d07:	89 54 24 08          	mov    %edx,0x8(%esp)
 8421d0b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8421d12:	00 
 8421d13:	89 04 24             	mov    %eax,(%esp)
 8421d16:	e8 c3 f2 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8421d1b:	bb 01 00 00 00       	mov    $0x1,%ebx
 8421d20:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8421d23:	89 04 24             	mov    %eax,(%esp)
 8421d26:	e8 a7 ab 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8421d2b:	89 d8                	mov    %ebx,%eax
 8421d2d:	83 c4 20             	add    $0x20,%esp
 8421d30:	5b                   	pop    %ebx
 8421d31:	5e                   	pop    %esi
 8421d32:	5d                   	pop    %ebp
 8421d33:	c3                   	ret
 8421d34:	89 d3                	mov    %edx,%ebx
 8421d36:	89 c6                	mov    %eax,%esi
 8421d38:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8421d3b:	89 04 24             	mov    %eax,(%esp)
 8421d3e:	e8 8f ab 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8421d43:	89 f0                	mov    %esi,%eax
 8421d45:	89 da                	mov    %ebx,%edx
 8421d47:	89 04 24             	mov    %eax,(%esp)
 8421d4a:	e8 01 1a 6c 00       	call   8ae3750 <_Unwind_Resume>
 8421d4f:	90                   	nop

```

```c
// DB_LastMsgLogDb::dispatch @ 0x8421c8e

/* DB_LastMsgLogDb::dispatch(int, int, Stream*) */

undefined4 DB_LastMsgLogDb::dispatch(int param_1,int param_2,Stream *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x59f7);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08421ce0 to 08421d1a has its CatchHandler @ 08421d34 */
  CStreamGuard::operator<<(pCVar2,0x97);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,(int)param_3);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}

```

