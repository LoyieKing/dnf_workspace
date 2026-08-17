# Inter_WebNoticeIngameAdvertisement

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084c8c4e Inter_WebNoticeIngameAdvertisement::dispatch_sig  [0x084c8c4e-0x84c8d0f] ===
 84c8c4e:	55                   	push   %ebp
 84c8c4f:	89 e5                	mov    %esp,%ebp
 84c8c51:	56                   	push   %esi
 84c8c52:	53                   	push   %ebx
 84c8c53:	83 ec 20             	sub    $0x20,%esp
 84c8c56:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84c8c5b:	c7 44 24 08 77 22 00 	movl   $0x2277,0x8(%esp)
 84c8c62:	00 
 84c8c63:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84c8c6a:	08 
 84c8c6b:	89 04 24             	mov    %eax,(%esp)
 84c8c6e:	e8 13 6e dc ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84c8c73:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c8c7a:	00 
 84c8c7b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c8c7f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84c8c82:	89 04 24             	mov    %eax,(%esp)
 84c8c85:	e8 9c ff bf ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84c8c8a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84c8c8d:	89 04 24             	mov    %eax,(%esp)
 84c8c90:	e8 b1 ff bf ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c8c95:	c7 44 24 04 f8 02 00 	movl   $0x2f8,0x4(%esp)
 84c8c9c:	00 
 84c8c9d:	89 04 24             	mov    %eax,(%esp)
 84c8ca0:	e8 b1 ff bf ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84c8ca5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84c8ca8:	89 04 24             	mov    %eax,(%esp)
 84c8cab:	e8 96 ff bf ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c8cb0:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84c8cb7:	ff 
 84c8cb8:	89 04 24             	mov    %eax,(%esp)
 84c8cbb:	e8 96 ff bf ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84c8cc0:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84c8cc5:	8d 55 f0             	lea    -0x10(%ebp),%edx
 84c8cc8:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c8ccc:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84c8cd3:	00 
 84c8cd4:	89 04 24             	mov    %eax,(%esp)
 84c8cd7:	e8 02 83 0a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84c8cdc:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c8ce1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84c8ce4:	89 04 24             	mov    %eax,(%esp)
 84c8ce7:	e8 e6 3b 15 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84c8cec:	89 d8                	mov    %ebx,%eax
 84c8cee:	83 c4 20             	add    $0x20,%esp
 84c8cf1:	5b                   	pop    %ebx
 84c8cf2:	5e                   	pop    %esi
 84c8cf3:	5d                   	pop    %ebp
 84c8cf4:	c3                   	ret
 84c8cf5:	89 d3                	mov    %edx,%ebx
 84c8cf7:	89 c6                	mov    %eax,%esi
 84c8cf9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84c8cfc:	89 04 24             	mov    %eax,(%esp)
 84c8cff:	e8 ce 3b 15 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84c8d04:	89 f0                	mov    %esi,%eax
 84c8d06:	89 da                	mov    %ebx,%edx
 84c8d08:	89 04 24             	mov    %eax,(%esp)
 84c8d0b:	e8 40 aa 61 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// Inter_WebNoticeIngameAdvertisement::dispatch_sig @ 0x84c8c4e

/* Inter_WebNoticeIngameAdvertisement::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_WebNoticeIngameAdvertisement::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0x2277);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 084c8ca0 to 084c8cdb has its CatchHandler @ 084c8cf5 */
  CStreamGuard::operator<<(pCVar2,0x2f8);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 0;
}

```

