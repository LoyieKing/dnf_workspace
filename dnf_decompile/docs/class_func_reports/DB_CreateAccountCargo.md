# DB_CreateAccountCargo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843ac52 DB_CreateAccountCargo::dispatch  [0x0843ac52-0x843ae85] ===
 843ac52:	55                   	push   %ebp
 843ac53:	89 e5                	mov    %esp,%ebp
 843ac55:	56                   	push   %esi
 843ac56:	53                   	push   %ebx
 843ac57:	83 ec 30             	sub    $0x30,%esp
 843ac5a:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843ac5f:	c7 44 24 08 c7 8b 00 	movl   $0x8bc7,0x8(%esp)
 843ac66:	00 
 843ac67:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843ac6e:	08 
 843ac6f:	89 04 24             	mov    %eax,(%esp)
 843ac72:	e8 0f 4e e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843ac77:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843ac7e:	00 
 843ac7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 843ac83:	8d 45 e8             	lea    -0x18(%ebp),%eax
 843ac86:	89 04 24             	mov    %eax,(%esp)
 843ac89:	e8 98 df c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843ac8e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 843ac91:	89 04 24             	mov    %eax,(%esp)
 843ac94:	e8 ad df c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843ac99:	8b 55 0c             	mov    0xc(%ebp),%edx
 843ac9c:	89 54 24 04          	mov    %edx,0x4(%esp)
 843aca0:	89 04 24             	mov    %eax,(%esp)
 843aca3:	e8 ae df c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843aca8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 843acab:	89 04 24             	mov    %eax,(%esp)
 843acae:	e8 93 df c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843acb3:	8b 55 10             	mov    0x10(%ebp),%edx
 843acb6:	89 54 24 04          	mov    %edx,0x4(%esp)
 843acba:	89 04 24             	mov    %eax,(%esp)
 843acbd:	e8 94 df c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843acc2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 843acc5:	89 04 24             	mov    %eax,(%esp)
 843acc8:	e8 81 df c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 843accd:	89 04 24             	mov    %eax,(%esp)
 843acd0:	e8 0f 8d 01 00       	call   84539e4 <_ZN12CStreamGuard11GetInBufferI31SIG_CREATE_ACCOUNT_CARGO_RESULTEEPT_v>
 843acd5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 843acd8:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 843acdf:	00 
 843ace0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843ace7:	00 
 843ace8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843aceb:	89 04 24             	mov    %eax,(%esp)
 843acee:	e8 cd 2f c4 ff       	call   807dcc0 <memset@plt>
 843acf3:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 843acfa:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 843ad01:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 843ad04:	89 44 24 04          	mov    %eax,0x4(%esp)
 843ad08:	8b 45 14             	mov    0x14(%ebp),%eax
 843ad0b:	89 04 24             	mov    %eax,(%esp)
 843ad0e:	e8 83 1a 1e 00       	call   861c796 <_ZN6StreamrsERj>
 843ad13:	8d 45 e0             	lea    -0x20(%ebp),%eax
 843ad16:	89 44 24 04          	mov    %eax,0x4(%esp)
 843ad1a:	8b 45 14             	mov    0x14(%ebp),%eax
 843ad1d:	89 04 24             	mov    %eax,(%esp)
 843ad20:	e8 71 1a 1e 00       	call   861c796 <_ZN6StreamrsERj>
 843ad25:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843ad2a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843ad31:	00 
 843ad32:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843ad39:	00 
 843ad3a:	89 04 24             	mov    %eax,(%esp)
 843ad3d:	e8 fc a4 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843ad42:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843ad45:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843ad48:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843ad4f:	00 
 843ad50:	89 04 24             	mov    %eax,(%esp)
 843ad53:	e8 f3 e2 cc ff       	call   810904b <_Z14NumberToStringji>
 843ad58:	89 44 24 08          	mov    %eax,0x8(%esp)
 843ad5c:	c7 44 24 04 d4 4e c5 	movl   $0x8c54ed4,0x4(%esp)
 843ad63:	08 
 843ad64:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843ad67:	89 04 24             	mov    %eax,(%esp)
 843ad6a:	e8 51 94 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843ad6f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843ad76:	00 
 843ad77:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843ad7a:	89 04 24             	mov    %eax,(%esp)
 843ad7d:	e8 a4 95 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843ad82:	83 f0 01             	xor    $0x1,%eax
 843ad85:	84 c0                	test   %al,%al
 843ad87:	74 0a                	je     843ad93 <_ZN21DB_CreateAccountCargo8dispatchEiiP6Stream+0x141>
 843ad89:	bb 00 00 00 00       	mov    $0x0,%ebx
 843ad8e:	e9 df 00 00 00       	jmp    843ae72 <_ZN21DB_CreateAccountCargo8dispatchEiiP6Stream+0x220>
 843ad93:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843ad96:	89 04 24             	mov    %eax,(%esp)
 843ad99:	e8 ce 75 ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 843ad9e:	85 c0                	test   %eax,%eax
 843ada0:	0f 95 c0             	setne  %al
 843ada3:	84 c0                	test   %al,%al
 843ada5:	74 2c                	je     843add3 <_ZN21DB_CreateAccountCargo8dispatchEiiP6Stream+0x181>
 843ada7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843adaa:	c6 00 14             	movb   $0x14,(%eax)
 843adad:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843adb2:	8d 55 e8             	lea    -0x18(%ebp),%edx
 843adb5:	89 54 24 08          	mov    %edx,0x8(%esp)
 843adb9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843adc0:	00 
 843adc1:	89 04 24             	mov    %eax,(%esp)
 843adc4:	e8 15 62 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843adc9:	bb 01 00 00 00       	mov    $0x1,%ebx
 843adce:	e9 9f 00 00 00       	jmp    843ae72 <_ZN21DB_CreateAccountCargo8dispatchEiiP6Stream+0x220>
 843add3:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 843add6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843add9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843ade0:	00 
 843ade1:	89 04 24             	mov    %eax,(%esp)
 843ade4:	e8 62 e2 cc ff       	call   810904b <_Z14NumberToStringji>
 843ade9:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 843aded:	89 44 24 08          	mov    %eax,0x8(%esp)
 843adf1:	c7 44 24 04 00 4f c5 	movl   $0x8c54f00,0x4(%esp)
 843adf8:	08 
 843adf9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843adfc:	89 04 24             	mov    %eax,(%esp)
 843adff:	e8 bc 93 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843ae04:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843ae0b:	00 
 843ae0c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843ae0f:	89 04 24             	mov    %eax,(%esp)
 843ae12:	e8 0f 95 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843ae17:	83 f0 01             	xor    $0x1,%eax
 843ae1a:	84 c0                	test   %al,%al
 843ae1c:	74 07                	je     843ae25 <_ZN21DB_CreateAccountCargo8dispatchEiiP6Stream+0x1d3>
 843ae1e:	bb 00 00 00 00       	mov    $0x0,%ebx
 843ae23:	eb 4d                	jmp    843ae72 <_ZN21DB_CreateAccountCargo8dispatchEiiP6Stream+0x220>
 843ae25:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843ae28:	c6 00 00             	movb   $0x0,(%eax)
 843ae2b:	8b 55 e0             	mov    -0x20(%ebp),%edx
 843ae2e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843ae31:	89 50 04             	mov    %edx,0x4(%eax)
 843ae34:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843ae39:	8d 55 e8             	lea    -0x18(%ebp),%edx
 843ae3c:	89 54 24 08          	mov    %edx,0x8(%esp)
 843ae40:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843ae47:	00 
 843ae48:	89 04 24             	mov    %eax,(%esp)
 843ae4b:	e8 8e 61 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843ae50:	bb 01 00 00 00       	mov    $0x1,%ebx
 843ae55:	eb 1b                	jmp    843ae72 <_ZN21DB_CreateAccountCargo8dispatchEiiP6Stream+0x220>
 843ae57:	89 d3                	mov    %edx,%ebx
 843ae59:	89 c6                	mov    %eax,%esi
 843ae5b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 843ae5e:	89 04 24             	mov    %eax,(%esp)
 843ae61:	e8 6c 1a 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843ae66:	89 f0                	mov    %esi,%eax
 843ae68:	89 da                	mov    %ebx,%edx
 843ae6a:	89 04 24             	mov    %eax,(%esp)
 843ae6d:	e8 de 88 6a 00       	call   8ae3750 <_Unwind_Resume>
 843ae72:	8d 45 e8             	lea    -0x18(%ebp),%eax
 843ae75:	89 04 24             	mov    %eax,(%esp)
 843ae78:	e8 55 1a 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843ae7d:	89 d8                	mov    %ebx,%eax
 843ae7f:	83 c4 30             	add    $0x30,%esp
 843ae82:	5b                   	pop    %ebx
 843ae83:	5e                   	pop    %esi
 843ae84:	5d                   	pop    %ebp
 843ae85:	c3                   	ret

```

```c
// DB_CreateAccountCargo::dispatch @ 0x843ac52

/* DB_CreateAccountCargo::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_CreateAccountCargo::dispatch(DB_CreateAccountCargo *this,int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  undefined4 uVar5;
  int iVar6;
  uint local_24;
  uint local_20;
  CStreamGuard local_1c [8];
  SIG_CREATE_ACCOUNT_CARGO_RESULT *local_14;
  MySQL *local_10;
  
  pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8bc7);
  CStreamGuard::CStreamGuard(local_1c,pSVar3,true);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 0843aca3 to 0843ae4f has its CatchHandler @ 0843ae57 */
  CStreamGuard::operator<<(pCVar4,param_1);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
  CStreamGuard::operator<<(pCVar4,param_2);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
  local_14 = CStreamGuard::GetInBuffer<SIG_CREATE_ACCOUNT_CARGO_RESULT>(pCVar4);
  memset(local_14,0,8);
  local_20 = 0;
  local_24 = 0;
  Stream::operator>>(param_3,&local_20);
  Stream::operator>>(param_3,&local_24);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  uVar5 = NumberToString(local_20,0);
  MySQL::set_query(local_10,"seLect * from account_cargo where m_id = %s",uVar5);
  cVar2 = MySQL::exec(local_10,true);
  if (cVar2 == '\x01') {
    iVar6 = MySQL::get_n_rows(local_10);
    uVar1 = local_24;
    if (iVar6 == 0) {
      uVar5 = NumberToString(local_20,0);
      MySQL::set_query(local_10,
                       "inSert into account_cargo(m_id, capacity, money, occ_time, cargo) values(%s, %d, 0, now(),\'\')"
                       ,uVar5,uVar1);
      cVar2 = MySQL::exec(local_10,true);
      if (cVar2 == '\x01') {
        *local_14 = (SIG_CREATE_ACCOUNT_CARGO_RESULT)0x0;
        *(uint *)(local_14 + 4) = local_24;
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_1c);
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      *local_14 = (SIG_CREATE_ACCOUNT_CARGO_RESULT)0x14;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_1c);
      uVar5 = 1;
    }
  }
  else {
    uVar5 = 0;
  }
  CStreamGuard::~CStreamGuard(local_1c);
  return uVar5;
}

```

---

## makeRequest

```asm
// === 0843ae86 DB_CreateAccountCargo::makeRequest  [0x0843ae86-0x843af75] ===
 843ae86:	55                   	push   %ebp
 843ae87:	89 e5                	mov    %esp,%ebp
 843ae89:	56                   	push   %esi
 843ae8a:	53                   	push   %ebx
 843ae8b:	83 ec 20             	sub    $0x20,%esp
 843ae8e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843ae93:	c7 44 24 08 ef 8b 00 	movl   $0x8bef,0x8(%esp)
 843ae9a:	00 
 843ae9b:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843aea2:	08 
 843aea3:	89 04 24             	mov    %eax,(%esp)
 843aea6:	e8 db 4b e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843aeab:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843aeb2:	00 
 843aeb3:	89 44 24 04          	mov    %eax,0x4(%esp)
 843aeb7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843aeba:	89 04 24             	mov    %eax,(%esp)
 843aebd:	e8 64 dd c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843aec2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843aec5:	89 04 24             	mov    %eax,(%esp)
 843aec8:	e8 79 dd c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843aecd:	c7 44 24 04 ee 01 00 	movl   $0x1ee,0x4(%esp)
 843aed4:	00 
 843aed5:	89 04 24             	mov    %eax,(%esp)
 843aed8:	e8 79 dd c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843aedd:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843aee0:	89 04 24             	mov    %eax,(%esp)
 843aee3:	e8 5e dd c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843aee8:	8b 55 08             	mov    0x8(%ebp),%edx
 843aeeb:	89 54 24 04          	mov    %edx,0x4(%esp)
 843aeef:	89 04 24             	mov    %eax,(%esp)
 843aef2:	e8 5f dd c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843aef7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843aefa:	89 04 24             	mov    %eax,(%esp)
 843aefd:	e8 44 dd c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843af02:	8b 55 0c             	mov    0xc(%ebp),%edx
 843af05:	89 54 24 04          	mov    %edx,0x4(%esp)
 843af09:	89 04 24             	mov    %eax,(%esp)
 843af0c:	e8 81 73 ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 843af11:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843af14:	89 04 24             	mov    %eax,(%esp)
 843af17:	e8 2a dd c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843af1c:	8b 55 10             	mov    0x10(%ebp),%edx
 843af1f:	89 54 24 04          	mov    %edx,0x4(%esp)
 843af23:	89 04 24             	mov    %eax,(%esp)
 843af26:	e8 67 73 ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 843af2b:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843af30:	8d 55 f0             	lea    -0x10(%ebp),%edx
 843af33:	89 54 24 08          	mov    %edx,0x8(%esp)
 843af37:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843af3e:	00 
 843af3f:	89 04 24             	mov    %eax,(%esp)
 843af42:	e8 97 60 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843af47:	eb 1b                	jmp    843af64 <_ZN21DB_CreateAccountCargo11makeRequestEijj+0xde>
 843af49:	89 d3                	mov    %edx,%ebx
 843af4b:	89 c6                	mov    %eax,%esi
 843af4d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843af50:	89 04 24             	mov    %eax,(%esp)
 843af53:	e8 7a 19 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843af58:	89 f0                	mov    %esi,%eax
 843af5a:	89 da                	mov    %ebx,%edx
 843af5c:	89 04 24             	mov    %eax,(%esp)
 843af5f:	e8 ec 87 6a 00       	call   8ae3750 <_Unwind_Resume>
 843af64:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843af67:	89 04 24             	mov    %eax,(%esp)
 843af6a:	e8 63 19 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843af6f:	83 c4 20             	add    $0x20,%esp
 843af72:	5b                   	pop    %ebx
 843af73:	5e                   	pop    %esi
 843af74:	5d                   	pop    %ebp
 843af75:	c3                   	ret

```

```c
// DB_CreateAccountCargo::makeRequest @ 0x843ae86

/* DB_CreateAccountCargo::makeRequest(int, unsigned int, unsigned int) */

void DB_CreateAccountCargo::makeRequest(int param_1,uint param_2,uint param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8bef);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843aed8 to 0843af46 has its CatchHandler @ 0843af49 */
  CStreamGuard::operator<<(pCVar2,0x1ee);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

