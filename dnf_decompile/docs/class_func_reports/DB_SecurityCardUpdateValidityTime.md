# DB_SecurityCardUpdateValidityTime

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0842bc64 DB_SecurityCardUpdateValidityTime::dispatch  [0x0842bc64-0x842bce7] ===
 842bc64:	55                   	push   %ebp
 842bc65:	89 e5                	mov    %esp,%ebp
 842bc67:	83 ec 28             	sub    $0x28,%esp
 842bc6a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842bc6f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842bc76:	00 
 842bc77:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 842bc7e:	00 
 842bc7f:	89 04 24             	mov    %eax,(%esp)
 842bc82:	e8 b7 95 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842bc87:	89 45 f0             	mov    %eax,-0x10(%ebp)
 842bc8a:	8b 45 14             	mov    0x14(%ebp),%eax
 842bc8d:	89 04 24             	mov    %eax,(%esp)
 842bc90:	e8 5d 6a 02 00       	call   84526f2 <_ZN6Stream12GetOutBufferI37SIG_SECURITY_CARD_UPDATE_VALIDITYTIMEEEPT_v>
 842bc95:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842bc98:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842bc9b:	8b 00                	mov    (%eax),%eax
 842bc9d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842bca4:	00 
 842bca5:	89 04 24             	mov    %eax,(%esp)
 842bca8:	e8 9e d3 cd ff       	call   810904b <_Z14NumberToStringji>
 842bcad:	8b 55 f4             	mov    -0xc(%ebp),%edx
 842bcb0:	8b 52 04             	mov    0x4(%edx),%edx
 842bcb3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842bcb7:	89 54 24 08          	mov    %edx,0x8(%esp)
 842bcbb:	c7 44 24 04 84 00 c5 	movl   $0x8c50084,0x4(%esp)
 842bcc2:	08 
 842bcc3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842bcc6:	89 04 24             	mov    %eax,(%esp)
 842bcc9:	e8 f2 84 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842bcce:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842bcd5:	00 
 842bcd6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842bcd9:	89 04 24             	mov    %eax,(%esp)
 842bcdc:	e8 45 86 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842bce1:	b8 01 00 00 00       	mov    $0x1,%eax
 842bce6:	c9                   	leave
 842bce7:	c3                   	ret

```

```c
// DB_SecurityCardUpdateValidityTime::dispatch @ 0x842bc64

/* DB_SecurityCardUpdateValidityTime::dispatch(int, int, Stream*) */

undefined4 DB_SecurityCardUpdateValidityTime::dispatch(int param_1,int param_2,Stream *param_3)

{
  MySQL *this;
  SIG_SECURITY_CARD_UPDATE_VALIDITYTIME *pSVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  pSVar1 = Stream::GetOutBuffer<SIG_SECURITY_CARD_UPDATE_VALIDITYTIME>(in_stack_00000010);
  uVar2 = NumberToString(*(uint *)pSVar1,0);
  MySQL::set_query(this,
                   "upDate member_security_card set validity_time=unix_timestamp(now())+%d where m_id=%s and apply_flag=1"
                   ,*(undefined4 *)(pSVar1 + 4),uVar2);
  MySQL::exec(this,true);
  return 1;
}

```

---

## makeRequest

```asm
// === 0842bce8 DB_SecurityCardUpdateValidityTime::makeRequest  [0x0842bce8-0x842bdd9] ===
 842bce8:	55                   	push   %ebp
 842bce9:	89 e5                	mov    %esp,%ebp
 842bceb:	56                   	push   %esi
 842bcec:	53                   	push   %ebx
 842bced:	83 ec 20             	sub    $0x20,%esp
 842bcf0:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 842bcf4:	0f 84 d7 00 00 00    	je     842bdd1 <_ZN33DB_SecurityCardUpdateValidityTime11makeRequestEjj+0xe9>
 842bcfa:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842bcff:	c7 44 24 08 bb 6e 00 	movl   $0x6ebb,0x8(%esp)
 842bd06:	00 
 842bd07:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842bd0e:	08 
 842bd0f:	89 04 24             	mov    %eax,(%esp)
 842bd12:	e8 6f 3d e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842bd17:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842bd1e:	00 
 842bd1f:	89 44 24 04          	mov    %eax,0x4(%esp)
 842bd23:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842bd26:	89 04 24             	mov    %eax,(%esp)
 842bd29:	e8 f8 ce c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842bd2e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842bd31:	89 04 24             	mov    %eax,(%esp)
 842bd34:	e8 0d cf c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842bd39:	c7 44 24 04 00 01 00 	movl   $0x100,0x4(%esp)
 842bd40:	00 
 842bd41:	89 04 24             	mov    %eax,(%esp)
 842bd44:	e8 0d cf c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842bd49:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842bd4c:	89 04 24             	mov    %eax,(%esp)
 842bd4f:	e8 f2 ce c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842bd54:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 842bd5b:	ff 
 842bd5c:	89 04 24             	mov    %eax,(%esp)
 842bd5f:	e8 f2 ce c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842bd64:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842bd67:	89 04 24             	mov    %eax,(%esp)
 842bd6a:	e8 df ce c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 842bd6f:	89 04 24             	mov    %eax,(%esp)
 842bd72:	e8 cf 69 02 00       	call   8452746 <_ZN12CStreamGuard11GetInBufferI37SIG_SECURITY_CARD_UPDATE_VALIDITYTIMEEEPT_v>
 842bd77:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842bd7a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842bd7d:	8b 55 08             	mov    0x8(%ebp),%edx
 842bd80:	89 10                	mov    %edx,(%eax)
 842bd82:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842bd85:	8b 55 0c             	mov    0xc(%ebp),%edx
 842bd88:	89 50 04             	mov    %edx,0x4(%eax)
 842bd8b:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842bd90:	8d 55 ec             	lea    -0x14(%ebp),%edx
 842bd93:	89 54 24 08          	mov    %edx,0x8(%esp)
 842bd97:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 842bd9e:	00 
 842bd9f:	89 04 24             	mov    %eax,(%esp)
 842bda2:	e8 37 52 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842bda7:	eb 1b                	jmp    842bdc4 <_ZN33DB_SecurityCardUpdateValidityTime11makeRequestEjj+0xdc>
 842bda9:	89 d3                	mov    %edx,%ebx
 842bdab:	89 c6                	mov    %eax,%esi
 842bdad:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842bdb0:	89 04 24             	mov    %eax,(%esp)
 842bdb3:	e8 1a 0b 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842bdb8:	89 f0                	mov    %esi,%eax
 842bdba:	89 da                	mov    %ebx,%edx
 842bdbc:	89 04 24             	mov    %eax,(%esp)
 842bdbf:	e8 8c 79 6b 00       	call   8ae3750 <_Unwind_Resume>
 842bdc4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842bdc7:	89 04 24             	mov    %eax,(%esp)
 842bdca:	e8 03 0b 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842bdcf:	eb 01                	jmp    842bdd2 <_ZN33DB_SecurityCardUpdateValidityTime11makeRequestEjj+0xea>
 842bdd1:	90                   	nop
 842bdd2:	83 c4 20             	add    $0x20,%esp
 842bdd5:	5b                   	pop    %ebx
 842bdd6:	5e                   	pop    %esi
 842bdd7:	5d                   	pop    %ebp
 842bdd8:	c3                   	ret
 842bdd9:	90                   	nop

```

```c
// DB_SecurityCardUpdateValidityTime::makeRequest @ 0x842bce8

/* DB_SecurityCardUpdateValidityTime::makeRequest(unsigned int, unsigned int) */

void DB_SecurityCardUpdateValidityTime::makeRequest(uint param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SECURITY_CARD_UPDATE_VALIDITYTIME *local_10;
  
  if (param_1 != 0) {
    pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6ebb);
    CStreamGuard::CStreamGuard(local_18,pSVar1,true);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842bd44 to 0842bda6 has its CatchHandler @ 0842bda9 */
    CStreamGuard::operator<<(pCVar2,0x100);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar2,-1);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
    local_10 = CStreamGuard::GetInBuffer<SIG_SECURITY_CARD_UPDATE_VALIDITYTIME>(pCVar2);
    *(uint *)local_10 = param_1;
    *(uint *)(local_10 + 4) = param_2;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
    CStreamGuard::~CStreamGuard(local_18);
  }
  return;
}

```

