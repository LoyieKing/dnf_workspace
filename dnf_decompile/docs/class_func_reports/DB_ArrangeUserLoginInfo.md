# DB_ArrangeUserLoginInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0842acf4 DB_ArrangeUserLoginInfo::dispatch  [0x0842acf4-0x842ad2f] ===
 842acf4:	55                   	push   %ebp
 842acf5:	89 e5                	mov    %esp,%ebp
 842acf7:	83 ec 28             	sub    $0x28,%esp
 842acfa:	8b 45 14             	mov    0x14(%ebp),%eax
 842acfd:	89 04 24             	mov    %eax,(%esp)
 842ad00:	e8 45 78 02 00       	call   845254a <_ZN6Stream12GetOutBufferI27SIG_ARRANGE_USER_LOGIN_INFOEEPT_v>
 842ad05:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842ad08:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842ad0b:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 842ad0f:	3c 01                	cmp    $0x1,%al
 842ad11:	75 16                	jne    842ad29 <_ZN23DB_ArrangeUserLoginInfo8dispatchEiiP6Stream+0x35>
 842ad13:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842ad16:	8b 10                	mov    (%eax),%edx
 842ad18:	a1 08 f7 41 09       	mov    0x941f708,%eax
 842ad1d:	89 54 24 04          	mov    %edx,0x4(%esp)
 842ad21:	89 04 24             	mov    %eax,(%esp)
 842ad24:	e8 fb 7d 1d 00       	call   8602b24 <_ZN8WongWork10CSimpleSSO15expireLoginTimeEj>
 842ad29:	b8 01 00 00 00       	mov    $0x1,%eax
 842ad2e:	c9                   	leave
 842ad2f:	c3                   	ret

```

```c
// DB_ArrangeUserLoginInfo::dispatch @ 0x842acf4

/* DB_ArrangeUserLoginInfo::dispatch(int, int, Stream*) */

undefined4 DB_ArrangeUserLoginInfo::dispatch(int param_1,int param_2,Stream *param_3)

{
  SIG_ARRANGE_USER_LOGIN_INFO *pSVar1;
  Stream *in_stack_00000010;
  
  pSVar1 = Stream::GetOutBuffer<SIG_ARRANGE_USER_LOGIN_INFO>(in_stack_00000010);
  if (pSVar1[4] == (SIG_ARRANGE_USER_LOGIN_INFO)0x1) {
    WongWork::CSimpleSSO::expireLoginTime(GlobalData::s_psimpleSSO,*(uint *)pSVar1);
  }
  return 1;
}

```

---

## makeRequest

```asm
// === 0842ad30 DB_ArrangeUserLoginInfo::makeRequest  [0x0842ad30-0x842ae3e] ===
 842ad30:	55                   	push   %ebp
 842ad31:	89 e5                	mov    %esp,%ebp
 842ad33:	56                   	push   %esi
 842ad34:	53                   	push   %ebx
 842ad35:	83 ec 30             	sub    $0x30,%esp
 842ad38:	8b 45 0c             	mov    0xc(%ebp),%eax
 842ad3b:	88 45 e4             	mov    %al,-0x1c(%ebp)
 842ad3e:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 842ad42:	0f 84 ef 00 00 00    	je     842ae37 <_ZN23DB_ArrangeUserLoginInfo11makeRequestEjbj+0x107>
 842ad48:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842ad4d:	c7 44 24 08 e9 6c 00 	movl   $0x6ce9,0x8(%esp)
 842ad54:	00 
 842ad55:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842ad5c:	08 
 842ad5d:	89 04 24             	mov    %eax,(%esp)
 842ad60:	e8 21 4d e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842ad65:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842ad6c:	00 
 842ad6d:	89 44 24 04          	mov    %eax,0x4(%esp)
 842ad71:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842ad74:	89 04 24             	mov    %eax,(%esp)
 842ad77:	e8 aa de c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842ad7c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842ad7f:	89 04 24             	mov    %eax,(%esp)
 842ad82:	e8 bf de c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842ad87:	c7 44 24 04 ee 00 00 	movl   $0xee,0x4(%esp)
 842ad8e:	00 
 842ad8f:	89 04 24             	mov    %eax,(%esp)
 842ad92:	e8 bf de c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842ad97:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842ad9a:	89 04 24             	mov    %eax,(%esp)
 842ad9d:	e8 a4 de c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842ada2:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 842ada9:	ff 
 842adaa:	89 04 24             	mov    %eax,(%esp)
 842adad:	e8 a4 de c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842adb2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842adb5:	89 04 24             	mov    %eax,(%esp)
 842adb8:	e8 91 de c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 842adbd:	89 04 24             	mov    %eax,(%esp)
 842adc0:	e8 d9 77 02 00       	call   845259e <_ZN12CStreamGuard11GetInBufferI27SIG_ARRANGE_USER_LOGIN_INFOEEPT_v>
 842adc5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842adc8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842adcb:	8b 55 08             	mov    0x8(%ebp),%edx
 842adce:	89 10                	mov    %edx,(%eax)
 842add0:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 842add4:	74 07                	je     842addd <_ZN23DB_ArrangeUserLoginInfo11makeRequestEjbj+0xad>
 842add6:	b8 01 00 00 00       	mov    $0x1,%eax
 842addb:	eb 05                	jmp    842ade2 <_ZN23DB_ArrangeUserLoginInfo11makeRequestEjbj+0xb2>
 842addd:	b8 00 00 00 00       	mov    $0x0,%eax
 842ade2:	8b 55 f4             	mov    -0xc(%ebp),%edx
 842ade5:	88 42 04             	mov    %al,0x4(%edx)
 842ade8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842adeb:	8b 55 10             	mov    0x10(%ebp),%edx
 842adee:	89 50 08             	mov    %edx,0x8(%eax)
 842adf1:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842adf6:	8d 55 ec             	lea    -0x14(%ebp),%edx
 842adf9:	89 54 24 08          	mov    %edx,0x8(%esp)
 842adfd:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 842ae04:	00 
 842ae05:	89 04 24             	mov    %eax,(%esp)
 842ae08:	e8 d1 61 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842ae0d:	eb 1b                	jmp    842ae2a <_ZN23DB_ArrangeUserLoginInfo11makeRequestEjbj+0xfa>
 842ae0f:	89 d3                	mov    %edx,%ebx
 842ae11:	89 c6                	mov    %eax,%esi
 842ae13:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842ae16:	89 04 24             	mov    %eax,(%esp)
 842ae19:	e8 b4 1a 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842ae1e:	89 f0                	mov    %esi,%eax
 842ae20:	89 da                	mov    %ebx,%edx
 842ae22:	89 04 24             	mov    %eax,(%esp)
 842ae25:	e8 26 89 6b 00       	call   8ae3750 <_Unwind_Resume>
 842ae2a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842ae2d:	89 04 24             	mov    %eax,(%esp)
 842ae30:	e8 9d 1a 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842ae35:	eb 01                	jmp    842ae38 <_ZN23DB_ArrangeUserLoginInfo11makeRequestEjbj+0x108>
 842ae37:	90                   	nop
 842ae38:	83 c4 30             	add    $0x30,%esp
 842ae3b:	5b                   	pop    %ebx
 842ae3c:	5e                   	pop    %esi
 842ae3d:	5d                   	pop    %ebp
 842ae3e:	c3                   	ret

```

```c
// DB_ArrangeUserLoginInfo::makeRequest @ 0x842ad30

/* DB_ArrangeUserLoginInfo::makeRequest(unsigned int, bool, unsigned int) */

void DB_ArrangeUserLoginInfo::makeRequest(uint param_1,bool param_2,uint param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_ARRANGE_USER_LOGIN_INFO *local_10;
  
  if (param_1 != 0) {
    pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6ce9);
    CStreamGuard::CStreamGuard(local_18,pSVar1,true);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842ad92 to 0842ae0c has its CatchHandler @ 0842ae0f */
    CStreamGuard::operator<<(pCVar2,0xee);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar2,-1);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
    local_10 = CStreamGuard::GetInBuffer<SIG_ARRANGE_USER_LOGIN_INFO>(pCVar2);
    *(uint *)local_10 = param_1;
    local_10[4] = (SIG_ARRANGE_USER_LOGIN_INFO)param_2;
    *(uint *)(local_10 + 8) = param_3;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
    CStreamGuard::~CStreamGuard(local_18);
  }
  return;
}

```

