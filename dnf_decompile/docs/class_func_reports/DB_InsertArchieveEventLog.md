# DB_InsertArchieveEventLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0842e7be DB_InsertArchieveEventLog::dispatch  [0x0842e7be-0x842e855] ===
 842e7be:	55                   	push   %ebp
 842e7bf:	89 e5                	mov    %esp,%ebp
 842e7c1:	56                   	push   %esi
 842e7c2:	53                   	push   %ebx
 842e7c3:	83 ec 30             	sub    $0x30,%esp
 842e7c6:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842e7cb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842e7d2:	00 
 842e7d3:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 842e7da:	00 
 842e7db:	89 04 24             	mov    %eax,(%esp)
 842e7de:	e8 5b 6a fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842e7e3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 842e7e6:	8b 45 14             	mov    0x14(%ebp),%eax
 842e7e9:	89 04 24             	mov    %eax,(%esp)
 842e7ec:	e8 3f 41 02 00       	call   8452930 <_ZN6Stream12GetOutBufferI24SIG_INSERT_ACHIEVE_EVENTEEPT_v>
 842e7f1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842e7f4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842e7f7:	8b 40 08             	mov    0x8(%eax),%eax
 842e7fa:	89 c6                	mov    %eax,%esi
 842e7fc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842e7ff:	8b 58 04             	mov    0x4(%eax),%ebx
 842e802:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842e805:	8b 00                	mov    (%eax),%eax
 842e807:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842e80e:	00 
 842e80f:	89 04 24             	mov    %eax,(%esp)
 842e812:	e8 34 a8 cd ff       	call   810904b <_Z14NumberToStringji>
 842e817:	89 74 24 10          	mov    %esi,0x10(%esp)
 842e81b:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 842e81f:	89 44 24 08          	mov    %eax,0x8(%esp)
 842e823:	c7 44 24 04 ac 12 c5 	movl   $0x8c512ac,0x4(%esp)
 842e82a:	08 
 842e82b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842e82e:	89 04 24             	mov    %eax,(%esp)
 842e831:	e8 8a 59 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842e836:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842e83d:	00 
 842e83e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842e841:	89 04 24             	mov    %eax,(%esp)
 842e844:	e8 dd 5a fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842e849:	b8 01 00 00 00       	mov    $0x1,%eax
 842e84e:	83 c4 30             	add    $0x30,%esp
 842e851:	5b                   	pop    %ebx
 842e852:	5e                   	pop    %esi
 842e853:	5d                   	pop    %ebp
 842e854:	c3                   	ret
 842e855:	90                   	nop

```

```c
// DB_InsertArchieveEventLog::dispatch @ 0x842e7be

/* DB_InsertArchieveEventLog::dispatch(int, int, Stream*) */

undefined4 DB_InsertArchieveEventLog::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  MySQL *this;
  SIG_INSERT_ACHIEVE_EVENT *pSVar3;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  pSVar3 = Stream::GetOutBuffer<SIG_INSERT_ACHIEVE_EVENT>(in_stack_00000010);
  uVar1 = *(undefined4 *)(pSVar3 + 8);
  uVar2 = *(undefined4 *)(pSVar3 + 4);
  uVar4 = NumberToString(*(uint *)pSVar3,0);
  MySQL::set_query(this,
                   "inSert into log_charac_lev_log(occ_time,m_id,charac_no,achieve_type) values(now(),%s,%d,%d)"
                   ,uVar4,uVar2,uVar1);
  MySQL::exec(this,true);
  return 1;
}

```

---

## makeRequest

```asm
// === 0842e856 DB_InsertArchieveEventLog::makeRequest  [0x0842e856-0x842e943] ===
 842e856:	55                   	push   %ebp
 842e857:	89 e5                	mov    %esp,%ebp
 842e859:	56                   	push   %esi
 842e85a:	53                   	push   %ebx
 842e85b:	83 ec 20             	sub    $0x20,%esp
 842e85e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842e863:	c7 44 24 08 49 73 00 	movl   $0x7349,0x8(%esp)
 842e86a:	00 
 842e86b:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842e872:	08 
 842e873:	89 04 24             	mov    %eax,(%esp)
 842e876:	e8 0b 12 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842e87b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842e882:	00 
 842e883:	89 44 24 04          	mov    %eax,0x4(%esp)
 842e887:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842e88a:	89 04 24             	mov    %eax,(%esp)
 842e88d:	e8 94 a3 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842e892:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842e895:	89 04 24             	mov    %eax,(%esp)
 842e898:	e8 a9 a3 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842e89d:	c7 44 24 04 17 01 00 	movl   $0x117,0x4(%esp)
 842e8a4:	00 
 842e8a5:	89 04 24             	mov    %eax,(%esp)
 842e8a8:	e8 a9 a3 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842e8ad:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842e8b0:	89 04 24             	mov    %eax,(%esp)
 842e8b3:	e8 8e a3 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842e8b8:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 842e8bf:	ff 
 842e8c0:	89 04 24             	mov    %eax,(%esp)
 842e8c3:	e8 8e a3 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842e8c8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842e8cb:	89 04 24             	mov    %eax,(%esp)
 842e8ce:	e8 7b a3 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 842e8d3:	89 04 24             	mov    %eax,(%esp)
 842e8d6:	e8 a9 40 02 00       	call   8452984 <_ZN12CStreamGuard11GetInBufferI24SIG_INSERT_ACHIEVE_EVENTEEPT_v>
 842e8db:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842e8de:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842e8e1:	8b 55 08             	mov    0x8(%ebp),%edx
 842e8e4:	89 10                	mov    %edx,(%eax)
 842e8e6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842e8e9:	8b 55 0c             	mov    0xc(%ebp),%edx
 842e8ec:	89 50 04             	mov    %edx,0x4(%eax)
 842e8ef:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842e8f2:	8b 55 10             	mov    0x10(%ebp),%edx
 842e8f5:	89 50 08             	mov    %edx,0x8(%eax)
 842e8f8:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842e8fd:	8d 55 ec             	lea    -0x14(%ebp),%edx
 842e900:	89 54 24 08          	mov    %edx,0x8(%esp)
 842e904:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 842e90b:	00 
 842e90c:	89 04 24             	mov    %eax,(%esp)
 842e90f:	e8 ca 26 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842e914:	eb 1b                	jmp    842e931 <_ZN25DB_InsertArchieveEventLog11makeRequestEjjN24SIG_INSERT_ACHIEVE_EVENT17ENUM_ACHIEVE_TYPEE+0xdb>
 842e916:	89 d3                	mov    %edx,%ebx
 842e918:	89 c6                	mov    %eax,%esi
 842e91a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842e91d:	89 04 24             	mov    %eax,(%esp)
 842e920:	e8 ad df 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842e925:	89 f0                	mov    %esi,%eax
 842e927:	89 da                	mov    %ebx,%edx
 842e929:	89 04 24             	mov    %eax,(%esp)
 842e92c:	e8 1f 4e 6b 00       	call   8ae3750 <_Unwind_Resume>
 842e931:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842e934:	89 04 24             	mov    %eax,(%esp)
 842e937:	e8 96 df 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842e93c:	83 c4 20             	add    $0x20,%esp
 842e93f:	5b                   	pop    %ebx
 842e940:	5e                   	pop    %esi
 842e941:	5d                   	pop    %ebp
 842e942:	c3                   	ret
 842e943:	90                   	nop

```

```c
// DB_InsertArchieveEventLog::makeRequest @ 0x842e856

/* DB_InsertArchieveEventLog::makeRequest(unsigned int, unsigned int,
   SIG_INSERT_ACHIEVE_EVENT::ENUM_ACHIEVE_TYPE) */

void DB_InsertArchieveEventLog::makeRequest
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_INSERT_ACHIEVE_EVENT *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7349);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842e8a8 to 0842e913 has its CatchHandler @ 0842e916 */
  CStreamGuard::operator<<(pCVar2,0x117);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_INSERT_ACHIEVE_EVENT>(pCVar2);
  *(undefined4 *)local_10 = param_1;
  *(undefined4 *)(local_10 + 4) = param_2;
  *(undefined4 *)(local_10 + 8) = param_3;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

