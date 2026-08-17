# DB_UpdateChuseokPackagePurchase

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843c7bc DB_UpdateChuseokPackagePurchase::dispatch  [0x0843c7bc-0x843c8b5] ===
 843c7bc:	55                   	push   %ebp
 843c7bd:	89 e5                	mov    %esp,%ebp
 843c7bf:	83 ec 28             	sub    $0x28,%esp
 843c7c2:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843c7c7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843c7ce:	00 
 843c7cf:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 843c7d6:	00 
 843c7d7:	89 04 24             	mov    %eax,(%esp)
 843c7da:	e8 5f 8a fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843c7df:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843c7e2:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 843c7e9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843c7ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 843c7f0:	8b 45 14             	mov    0x14(%ebp),%eax
 843c7f3:	89 04 24             	mov    %eax,(%esp)
 843c7f6:	e8 9b ff 1d 00       	call   861c796 <_ZN6StreamrsERj>
 843c7fb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843c7fe:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843c805:	00 
 843c806:	89 04 24             	mov    %eax,(%esp)
 843c809:	e8 3d c8 cc ff       	call   810904b <_Z14NumberToStringji>
 843c80e:	89 44 24 08          	mov    %eax,0x8(%esp)
 843c812:	c7 44 24 04 28 51 c5 	movl   $0x8c55128,0x4(%esp)
 843c819:	08 
 843c81a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843c81d:	89 04 24             	mov    %eax,(%esp)
 843c820:	e8 9b 79 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843c825:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843c82c:	00 
 843c82d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843c830:	89 04 24             	mov    %eax,(%esp)
 843c833:	e8 ee 7a fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843c838:	83 f0 01             	xor    $0x1,%eax
 843c83b:	84 c0                	test   %al,%al
 843c83d:	74 07                	je     843c846 <_ZN31DB_UpdateChuseokPackagePurchase8dispatchEiiP6Stream+0x8a>
 843c83f:	b8 00 00 00 00       	mov    $0x0,%eax
 843c844:	eb 6e                	jmp    843c8b4 <_ZN31DB_UpdateChuseokPackagePurchase8dispatchEiiP6Stream+0xf8>
 843c846:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843c849:	89 04 24             	mov    %eax,(%esp)
 843c84c:	e8 bf 7a fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 843c851:	09 d0                	or     %edx,%eax
 843c853:	85 c0                	test   %eax,%eax
 843c855:	0f 94 c0             	sete   %al
 843c858:	84 c0                	test   %al,%al
 843c85a:	74 53                	je     843c8af <_ZN31DB_UpdateChuseokPackagePurchase8dispatchEiiP6Stream+0xf3>
 843c85c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843c85f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843c866:	00 
 843c867:	89 04 24             	mov    %eax,(%esp)
 843c86a:	e8 dc c7 cc ff       	call   810904b <_Z14NumberToStringji>
 843c86f:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 843c876:	00 
 843c877:	89 44 24 08          	mov    %eax,0x8(%esp)
 843c87b:	c7 44 24 04 78 51 c5 	movl   $0x8c55178,0x4(%esp)
 843c882:	08 
 843c883:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843c886:	89 04 24             	mov    %eax,(%esp)
 843c889:	e8 32 79 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843c88e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843c895:	00 
 843c896:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843c899:	89 04 24             	mov    %eax,(%esp)
 843c89c:	e8 85 7a fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843c8a1:	83 f0 01             	xor    $0x1,%eax
 843c8a4:	84 c0                	test   %al,%al
 843c8a6:	74 07                	je     843c8af <_ZN31DB_UpdateChuseokPackagePurchase8dispatchEiiP6Stream+0xf3>
 843c8a8:	b8 00 00 00 00       	mov    $0x0,%eax
 843c8ad:	eb 05                	jmp    843c8b4 <_ZN31DB_UpdateChuseokPackagePurchase8dispatchEiiP6Stream+0xf8>
 843c8af:	b8 01 00 00 00       	mov    $0x1,%eax
 843c8b4:	c9                   	leave
 843c8b5:	c3                   	ret

```

```c
// DB_UpdateChuseokPackagePurchase::dispatch @ 0x843c7bc

/* DB_UpdateChuseokPackagePurchase::dispatch(int, int, Stream*) */

undefined4 DB_UpdateChuseokPackagePurchase::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  Stream *in_stack_00000010;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_14 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  uVar2 = NumberToString(local_14,0);
  MySQL::set_query(local_10,
                   "upDate event_1009_package_count set purchase_cnt = purchase_cnt+1 where m_id=%s"
                   ,uVar2);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 == '\x01') {
    lVar3 = MySQL::getAffectedRowCount(local_10);
    if (lVar3 == 0) {
      uVar2 = NumberToString(local_14,0);
      MySQL::set_query(local_10,
                       "inSert into event_1009_package_count(m_id, purchase_cnt) values(%s, %u)",
                       uVar2,1);
      cVar1 = MySQL::exec(local_10,true);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## makeRequest

```asm
// === 0843c8b6 DB_UpdateChuseokPackagePurchase::makeRequest  [0x0843c8b6-0x843c98d] ===
 843c8b6:	55                   	push   %ebp
 843c8b7:	89 e5                	mov    %esp,%ebp
 843c8b9:	56                   	push   %esi
 843c8ba:	53                   	push   %ebx
 843c8bb:	83 ec 20             	sub    $0x20,%esp
 843c8be:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843c8c3:	c7 44 24 08 bd 90 00 	movl   $0x90bd,0x8(%esp)
 843c8ca:	00 
 843c8cb:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843c8d2:	08 
 843c8d3:	89 04 24             	mov    %eax,(%esp)
 843c8d6:	e8 ab 31 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843c8db:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843c8e2:	00 
 843c8e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 843c8e7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843c8ea:	89 04 24             	mov    %eax,(%esp)
 843c8ed:	e8 34 c3 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843c8f2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843c8f5:	89 04 24             	mov    %eax,(%esp)
 843c8f8:	e8 49 c3 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843c8fd:	c7 44 24 04 13 02 00 	movl   $0x213,0x4(%esp)
 843c904:	00 
 843c905:	89 04 24             	mov    %eax,(%esp)
 843c908:	e8 49 c3 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843c90d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843c910:	89 04 24             	mov    %eax,(%esp)
 843c913:	e8 2e c3 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843c918:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 843c91f:	ff 
 843c920:	89 04 24             	mov    %eax,(%esp)
 843c923:	e8 2e c3 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843c928:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843c92b:	89 04 24             	mov    %eax,(%esp)
 843c92e:	e8 13 c3 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843c933:	8b 55 08             	mov    0x8(%ebp),%edx
 843c936:	89 54 24 04          	mov    %edx,0x4(%esp)
 843c93a:	89 04 24             	mov    %eax,(%esp)
 843c93d:	e8 50 59 ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 843c942:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843c947:	8d 55 f0             	lea    -0x10(%ebp),%edx
 843c94a:	89 54 24 08          	mov    %edx,0x8(%esp)
 843c94e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843c955:	00 
 843c956:	89 04 24             	mov    %eax,(%esp)
 843c959:	e8 80 46 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843c95e:	eb 1b                	jmp    843c97b <_ZN31DB_UpdateChuseokPackagePurchase11makeRequestEj+0xc5>
 843c960:	89 d3                	mov    %edx,%ebx
 843c962:	89 c6                	mov    %eax,%esi
 843c964:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843c967:	89 04 24             	mov    %eax,(%esp)
 843c96a:	e8 63 ff 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843c96f:	89 f0                	mov    %esi,%eax
 843c971:	89 da                	mov    %ebx,%edx
 843c973:	89 04 24             	mov    %eax,(%esp)
 843c976:	e8 d5 6d 6a 00       	call   8ae3750 <_Unwind_Resume>
 843c97b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843c97e:	89 04 24             	mov    %eax,(%esp)
 843c981:	e8 4c ff 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843c986:	83 c4 20             	add    $0x20,%esp
 843c989:	5b                   	pop    %ebx
 843c98a:	5e                   	pop    %esi
 843c98b:	5d                   	pop    %ebp
 843c98c:	c3                   	ret
 843c98d:	90                   	nop

```

```c
// DB_UpdateChuseokPackagePurchase::makeRequest @ 0x843c8b6

/* DB_UpdateChuseokPackagePurchase::makeRequest(unsigned int) */

void DB_UpdateChuseokPackagePurchase::makeRequest(uint param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x90bd);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843c908 to 0843c95d has its CatchHandler @ 0843c960 */
  CStreamGuard::operator<<(pCVar2,0x213);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

