# DB_LastMsgDb

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08421bcc DB_LastMsgDb::dispatch  [0x08421bcc-0x8421c8d] ===
 8421bcc:	55                   	push   %ebp
 8421bcd:	89 e5                	mov    %esp,%ebp
 8421bcf:	56                   	push   %esi
 8421bd0:	53                   	push   %ebx
 8421bd1:	83 ec 20             	sub    $0x20,%esp
 8421bd4:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8421bd9:	c7 44 24 08 ed 59 00 	movl   $0x59ed,0x8(%esp)
 8421be0:	00 
 8421be1:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8421be8:	08 
 8421be9:	89 04 24             	mov    %eax,(%esp)
 8421bec:	e8 95 de e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8421bf1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8421bf8:	00 
 8421bf9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8421bfd:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8421c00:	89 04 24             	mov    %eax,(%esp)
 8421c03:	e8 1e 70 ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8421c08:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8421c0b:	89 04 24             	mov    %eax,(%esp)
 8421c0e:	e8 33 70 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8421c13:	c7 44 24 04 97 00 00 	movl   $0x97,0x4(%esp)
 8421c1a:	00 
 8421c1b:	89 04 24             	mov    %eax,(%esp)
 8421c1e:	e8 33 70 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8421c23:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8421c26:	89 04 24             	mov    %eax,(%esp)
 8421c29:	e8 18 70 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8421c2e:	8b 55 10             	mov    0x10(%ebp),%edx
 8421c31:	89 54 24 04          	mov    %edx,0x4(%esp)
 8421c35:	89 04 24             	mov    %eax,(%esp)
 8421c38:	e8 19 70 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8421c3d:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8421c42:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8421c45:	89 54 24 08          	mov    %edx,0x8(%esp)
 8421c49:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8421c50:	00 
 8421c51:	89 04 24             	mov    %eax,(%esp)
 8421c54:	e8 85 f3 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8421c59:	bb 01 00 00 00       	mov    $0x1,%ebx
 8421c5e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8421c61:	89 04 24             	mov    %eax,(%esp)
 8421c64:	e8 69 ac 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8421c69:	89 d8                	mov    %ebx,%eax
 8421c6b:	83 c4 20             	add    $0x20,%esp
 8421c6e:	5b                   	pop    %ebx
 8421c6f:	5e                   	pop    %esi
 8421c70:	5d                   	pop    %ebp
 8421c71:	c3                   	ret
 8421c72:	89 d3                	mov    %edx,%ebx
 8421c74:	89 c6                	mov    %eax,%esi
 8421c76:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8421c79:	89 04 24             	mov    %eax,(%esp)
 8421c7c:	e8 51 ac 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8421c81:	89 f0                	mov    %esi,%eax
 8421c83:	89 da                	mov    %ebx,%edx
 8421c85:	89 04 24             	mov    %eax,(%esp)
 8421c88:	e8 c3 1a 6c 00       	call   8ae3750 <_Unwind_Resume>
 8421c8d:	90                   	nop

```

```c
// DB_LastMsgDb::dispatch @ 0x8421bcc

/* DB_LastMsgDb::dispatch(int, int, Stream*) */

undefined4 DB_LastMsgDb::dispatch(int param_1,int param_2,Stream *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x59ed);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08421c1e to 08421c58 has its CatchHandler @ 08421c72 */
  CStreamGuard::operator<<(pCVar2,0x97);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,(int)param_3);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}

```

