# DB_Multi_MailBox_Req_Send

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## _sendResult

```asm
// === 0843bc16 DB_Multi_MailBox_Req_Send::_sendResult  [0x0843bc16-0x843bd45] ===
 843bc16:	55                   	push   %ebp
 843bc17:	89 e5                	mov    %esp,%ebp
 843bc19:	56                   	push   %esi
 843bc1a:	53                   	push   %ebx
 843bc1b:	83 ec 30             	sub    $0x30,%esp
 843bc1e:	a1 a4 bd 40 09       	mov    0x940bda4,%eax
 843bc23:	c7 44 24 08 67 8e 00 	movl   $0x8e67,0x8(%esp)
 843bc2a:	00 
 843bc2b:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843bc32:	08 
 843bc33:	89 04 24             	mov    %eax,(%esp)
 843bc36:	e8 27 46 e5 ff       	call   8290262 <_ZN13BigStreamPool7AcquireEPKci>
 843bc3b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843bc42:	00 
 843bc43:	89 44 24 04          	mov    %eax,0x4(%esp)
 843bc47:	8d 45 dc             	lea    -0x24(%ebp),%eax
 843bc4a:	89 04 24             	mov    %eax,(%esp)
 843bc4d:	e8 d4 cf c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843bc52:	8d 45 dc             	lea    -0x24(%ebp),%eax
 843bc55:	89 04 24             	mov    %eax,(%esp)
 843bc58:	e8 e9 cf c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843bc5d:	c7 44 24 04 f5 01 00 	movl   $0x1f5,0x4(%esp)
 843bc64:	00 
 843bc65:	89 04 24             	mov    %eax,(%esp)
 843bc68:	e8 e9 cf c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843bc6d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 843bc74:	00 
 843bc75:	c7 44 24 08 6a 8e 00 	movl   $0x8e6a,0x8(%esp)
 843bc7c:	00 
 843bc7d:	c7 44 24 04 a0 ba c5 	movl   $0x8c5baa0,0x4(%esp)
 843bc84:	08 
 843bc85:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 843bc88:	89 04 24             	mov    %eax,(%esp)
 843bc8b:	e8 88 3a 11 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 843bc90:	c7 44 24 08 f5 01 00 	movl   $0x1f5,0x8(%esp)
 843bc97:	00 
 843bc98:	c7 44 24 04 53 50 c5 	movl   $0x8c55053,0x4(%esp)
 843bc9f:	08 
 843bca0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 843bca3:	89 04 24             	mov    %eax,(%esp)
 843bca6:	e8 dd 3a 11 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 843bcab:	8d 45 dc             	lea    -0x24(%ebp),%eax
 843bcae:	89 04 24             	mov    %eax,(%esp)
 843bcb1:	e8 90 cf c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843bcb6:	8b 55 0c             	mov    0xc(%ebp),%edx
 843bcb9:	89 54 24 04          	mov    %edx,0x4(%esp)
 843bcbd:	89 04 24             	mov    %eax,(%esp)
 843bcc0:	e8 91 cf c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843bcc5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 843bcc8:	89 04 24             	mov    %eax,(%esp)
 843bccb:	e8 7e cf c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 843bcd0:	89 04 24             	mov    %eax,(%esp)
 843bcd3:	e8 d6 58 01 00       	call   84515ae <_ZN12CStreamGuard11GetInBufferI26SIG_MAILBOX_CHECK_RECEIVEREEPT_v>
 843bcd8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843bcdb:	c7 44 24 08 de 3f 00 	movl   $0x3fde,0x8(%esp)
 843bce2:	00 
 843bce3:	8b 45 10             	mov    0x10(%ebp),%eax
 843bce6:	89 44 24 04          	mov    %eax,0x4(%esp)
 843bcea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843bced:	89 04 24             	mov    %eax,(%esp)
 843bcf0:	e8 ab 1b c4 ff       	call   807d8a0 <memcpy@plt>
 843bcf5:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843bcfa:	8d 55 dc             	lea    -0x24(%ebp),%edx
 843bcfd:	89 54 24 08          	mov    %edx,0x8(%esp)
 843bd01:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843bd08:	00 
 843bd09:	89 04 24             	mov    %eax,(%esp)
 843bd0c:	e8 cd 52 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843bd11:	bb 01 00 00 00       	mov    $0x1,%ebx
 843bd16:	8d 45 dc             	lea    -0x24(%ebp),%eax
 843bd19:	89 04 24             	mov    %eax,(%esp)
 843bd1c:	e8 b1 0b 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843bd21:	89 d8                	mov    %ebx,%eax
 843bd23:	83 c4 30             	add    $0x30,%esp
 843bd26:	5b                   	pop    %ebx
 843bd27:	5e                   	pop    %esi
 843bd28:	5d                   	pop    %ebp
 843bd29:	c3                   	ret
 843bd2a:	89 d3                	mov    %edx,%ebx
 843bd2c:	89 c6                	mov    %eax,%esi
 843bd2e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 843bd31:	89 04 24             	mov    %eax,(%esp)
 843bd34:	e8 99 0b 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843bd39:	89 f0                	mov    %esi,%eax
 843bd3b:	89 da                	mov    %ebx,%edx
 843bd3d:	89 04 24             	mov    %eax,(%esp)
 843bd40:	e8 0b 7a 6a 00       	call   8ae3750 <_Unwind_Resume>
 843bd45:	90                   	nop

```

```c
// DB_Multi_MailBox_Req_Send::_sendResult @ 0x843bc16

/* DB_Multi_MailBox_Req_Send::_sendResult(int, SIG_MAILBOX_CHECK_RECEIVER*) */

undefined4 __thiscall
DB_Multi_MailBox_Req_Send::_sendResult
          (DB_Multi_MailBox_Req_Send *this,int param_1,SIG_MAILBOX_CHECK_RECEIVER *param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_28 [8];
  cMyTrace local_20 [16];
  SIG_MAILBOX_CHECK_RECEIVER *local_10;
  
  pSVar1 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"DBThread.cpp",0x8e67);
  CStreamGuard::CStreamGuard(local_28,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_28);
                    /* try { // try from 0843bc68 to 0843bd10 has its CatchHandler @ 0843bd2a */
  CStreamGuard::operator<<(pCVar2,0x1f5);
  cMyTrace::cMyTrace(local_20,
                     "bool DB_Multi_MailBox_Req_Send::_sendResult(int, SIG_MAILBOX_CHECK_RECEIVER*)"
                     ,0x8e6a,0);
  cMyTrace::operator()(local_20,"E_MULTI_MAILBOX_REQ_SEND : %d",0x1f5);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_28);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_28);
  local_10 = CStreamGuard::GetInBuffer<SIG_MAILBOX_CHECK_RECEIVER>(pCVar2);
  memcpy(local_10,param_2,0x3fde);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_28);
  CStreamGuard::~CStreamGuard(local_28);
  return 1;
}

```

---

## dispatch

```asm
// === 0843bada DB_Multi_MailBox_Req_Send::dispatch  [0x0843bada-0x843bc15] ===
 843bada:	55                   	push   %ebp
 843badb:	89 e5                	mov    %esp,%ebp
 843badd:	57                   	push   %edi
 843bade:	56                   	push   %esi
 843badf:	53                   	push   %ebx
 843bae0:	83 ec 6c             	sub    $0x6c,%esp
 843bae3:	8b 45 14             	mov    0x14(%ebp),%eax
 843bae6:	89 04 24             	mov    %eax,(%esp)
 843bae9:	e8 6c 5a 01 00       	call   845155a <_ZN6Stream12GetOutBufferI26SIG_MAILBOX_CHECK_RECEIVEREEPT_v>
 843baee:	89 45 d8             	mov    %eax,-0x28(%ebp)
 843baf1:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 843baf8:	e8 a1 01 c9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 843bafd:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 843bb00:	8d 45 a8             	lea    -0x58(%ebp),%eax
 843bb03:	89 44 24 04          	mov    %eax,0x4(%esp)
 843bb07:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 843bb0a:	89 04 24             	mov    %eax,(%esp)
 843bb0d:	e8 4e 28 c4 ff       	call   807e360 <localtime_r@plt>
 843bb12:	89 45 dc             	mov    %eax,-0x24(%ebp)
 843bb15:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843bb18:	8b 40 08             	mov    0x8(%eax),%eax
 843bb1b:	8d 50 01             	lea    0x1(%eax),%edx
 843bb1e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843bb21:	89 50 08             	mov    %edx,0x8(%eax)
 843bb24:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843bb27:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 843bb2e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843bb31:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 843bb37:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843bb3a:	89 04 24             	mov    %eax,(%esp)
 843bb3d:	e8 de 2c c4 ff       	call   807e820 <mktime@plt>
 843bb42:	89 45 e0             	mov    %eax,-0x20(%ebp)
 843bb45:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843bb4a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843bb51:	00 
 843bb52:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 843bb59:	00 
 843bb5a:	89 04 24             	mov    %eax,(%esp)
 843bb5d:	e8 dc 96 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843bb62:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 843bb65:	8b 45 d8             	mov    -0x28(%ebp),%eax
 843bb68:	8d b8 bd 3f 00 00    	lea    0x3fbd(%eax),%edi
 843bb6e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 843bb71:	05 db 00 00 00       	add    $0xdb,%eax
 843bb76:	89 c1                	mov    %eax,%ecx
 843bb78:	8b 45 d8             	mov    -0x28(%ebp),%eax
 843bb7b:	8d b0 c1 3f 00 00    	lea    0x3fc1(%eax),%esi
 843bb81:	8b 45 d8             	mov    -0x28(%ebp),%eax
 843bb84:	8b 40 2d             	mov    0x2d(%eax),%eax
 843bb87:	89 c2                	mov    %eax,%edx
 843bb89:	8b 45 d8             	mov    -0x28(%ebp),%eax
 843bb8c:	8b 40 1d             	mov    0x1d(%eax),%eax
 843bb8f:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 843bb96:	00 
 843bb97:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 843bb9a:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 843bb9e:	89 7c 24 14          	mov    %edi,0x14(%esp)
 843bba2:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 843bba6:	89 74 24 0c          	mov    %esi,0xc(%esp)
 843bbaa:	89 54 24 08          	mov    %edx,0x8(%esp)
 843bbae:	89 44 24 04          	mov    %eax,0x4(%esp)
 843bbb2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843bbb5:	89 04 24             	mov    %eax,(%esp)
 843bbb8:	e8 9d 35 fe ff       	call   841f15a <_ZN19DB_MailBox_Req_Send12InsertLetterEP5MySQLiiPKcS3_Ril16ENUM_LETTER_STAT>
 843bbbd:	83 f0 01             	xor    $0x1,%eax
 843bbc0:	84 c0                	test   %al,%al
 843bbc2:	74 2c                	je     843bbf0 <_ZN25DB_Multi_MailBox_Req_Send8dispatchEiiP6Stream+0x116>
 843bbc4:	c7 44 24 10 14 c3 c4 	movl   $0x8c4c314,0x10(%esp)
 843bbcb:	08 
 843bbcc:	c7 44 24 0c 53 8e 00 	movl   $0x8e53,0xc(%esp)
 843bbd3:	00 
 843bbd4:	c7 44 24 08 00 bb c5 	movl   $0x8c5bb00,0x8(%esp)
 843bbdb:	08 
 843bbdc:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843bbe3:	08 
 843bbe4:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 843bbeb:	e8 1a 80 69 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 843bbf0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 843bbf3:	89 44 24 08          	mov    %eax,0x8(%esp)
 843bbf7:	8b 45 10             	mov    0x10(%ebp),%eax
 843bbfa:	89 44 24 04          	mov    %eax,0x4(%esp)
 843bbfe:	8b 45 08             	mov    0x8(%ebp),%eax
 843bc01:	89 04 24             	mov    %eax,(%esp)
 843bc04:	e8 0d 00 00 00       	call   843bc16 <_ZN25DB_Multi_MailBox_Req_Send11_sendResultEiP26SIG_MAILBOX_CHECK_RECEIVER>
 843bc09:	b8 01 00 00 00       	mov    $0x1,%eax
 843bc0e:	83 c4 6c             	add    $0x6c,%esp
 843bc11:	5b                   	pop    %ebx
 843bc12:	5e                   	pop    %esi
 843bc13:	5f                   	pop    %edi
 843bc14:	5d                   	pop    %ebp
 843bc15:	c3                   	ret

```

```c
// DB_Multi_MailBox_Req_Send::dispatch @ 0x843bada

/* DB_Multi_MailBox_Req_Send::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_Multi_MailBox_Req_Send::dispatch
          (DB_Multi_MailBox_Req_Send *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  tm local_5c;
  time_t local_30;
  SIG_MAILBOX_CHECK_RECEIVER *local_2c;
  tm *local_28;
  time_t local_24;
  undefined4 local_20;
  
  local_2c = Stream::GetOutBuffer<SIG_MAILBOX_CHECK_RECEIVER>(param_3);
  local_30 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_28 = localtime_r(&local_30,&local_5c);
  local_28->tm_hour = local_28->tm_hour + 1;
  local_28->tm_min = 0;
  local_28->tm_sec = 0;
  local_24 = mktime(local_28);
  local_20 = DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  cVar1 = DB_MailBox_Req_Send::InsertLetter
                    (local_20,*(undefined4 *)(local_2c + 0x1d),*(undefined4 *)(local_2c + 0x2d),
                     local_2c + 0x3fc1,local_2c + 0xdb,local_2c + 0x3fbd,local_24,0);
  if (cVar1 != '\x01') {
    LogManager::logFormat
              (1,"DBThread.cpp",
               "virtual bool DB_Multi_MailBox_Req_Send::dispatch(int, int, Stream*)",0x8e53,
               "InsertLetter() error");
  }
  _sendResult(this,param_2,local_2c);
  return 1;
}

```

