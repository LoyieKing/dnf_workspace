# Inter_ReadyToTerminate

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084c7d2c Inter_ReadyToTerminate::dispatch_sig  [0x084c7d2c-0x84c7ded] ===
 84c7d2c:	55                   	push   %ebp
 84c7d2d:	89 e5                	mov    %esp,%ebp
 84c7d2f:	56                   	push   %esi
 84c7d30:	53                   	push   %ebx
 84c7d31:	83 ec 20             	sub    $0x20,%esp
 84c7d34:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84c7d39:	c7 44 24 08 55 20 00 	movl   $0x2055,0x8(%esp)
 84c7d40:	00 
 84c7d41:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84c7d48:	08 
 84c7d49:	89 04 24             	mov    %eax,(%esp)
 84c7d4c:	e8 35 7d dc ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84c7d51:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c7d58:	00 
 84c7d59:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c7d5d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84c7d60:	89 04 24             	mov    %eax,(%esp)
 84c7d63:	e8 be 0e c0 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84c7d68:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84c7d6b:	89 04 24             	mov    %eax,(%esp)
 84c7d6e:	e8 d3 0e c0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c7d73:	c7 44 24 04 3f 00 00 	movl   $0x3f,0x4(%esp)
 84c7d7a:	00 
 84c7d7b:	89 04 24             	mov    %eax,(%esp)
 84c7d7e:	e8 d3 0e c0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84c7d83:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84c7d86:	89 04 24             	mov    %eax,(%esp)
 84c7d89:	e8 b8 0e c0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c7d8e:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84c7d95:	ff 
 84c7d96:	89 04 24             	mov    %eax,(%esp)
 84c7d99:	e8 b8 0e c0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84c7d9e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84c7da3:	8d 55 f0             	lea    -0x10(%ebp),%edx
 84c7da6:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c7daa:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84c7db1:	00 
 84c7db2:	89 04 24             	mov    %eax,(%esp)
 84c7db5:	e8 24 92 0a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84c7dba:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c7dbf:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84c7dc2:	89 04 24             	mov    %eax,(%esp)
 84c7dc5:	e8 08 4b 15 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84c7dca:	89 d8                	mov    %ebx,%eax
 84c7dcc:	83 c4 20             	add    $0x20,%esp
 84c7dcf:	5b                   	pop    %ebx
 84c7dd0:	5e                   	pop    %esi
 84c7dd1:	5d                   	pop    %ebp
 84c7dd2:	c3                   	ret
 84c7dd3:	89 d3                	mov    %edx,%ebx
 84c7dd5:	89 c6                	mov    %eax,%esi
 84c7dd7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84c7dda:	89 04 24             	mov    %eax,(%esp)
 84c7ddd:	e8 f0 4a 15 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84c7de2:	89 f0                	mov    %esi,%eax
 84c7de4:	89 da                	mov    %ebx,%edx
 84c7de6:	89 04 24             	mov    %eax,(%esp)
 84c7de9:	e8 62 b9 61 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// Inter_ReadyToTerminate::dispatch_sig @ 0x84c7d2c

/* Inter_ReadyToTerminate::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReadyToTerminate::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0x2055);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 084c7d7e to 084c7db9 has its CatchHandler @ 084c7dd3 */
  CStreamGuard::operator<<(pCVar2,0x3f);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 0;
}

```

