# DB_InsertAccountFirstLoginFlag

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843e636 DB_InsertAccountFirstLoginFlag::dispatch  [0x0843e636-0x843e799] ===
 843e636:	55                   	push   %ebp
 843e637:	89 e5                	mov    %esp,%ebp
 843e639:	57                   	push   %edi
 843e63a:	56                   	push   %esi
 843e63b:	53                   	push   %ebx
 843e63c:	83 ec 4c             	sub    $0x4c,%esp
 843e63f:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843e644:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843e64b:	00 
 843e64c:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 843e653:	00 
 843e654:	89 04 24             	mov    %eax,(%esp)
 843e657:	e8 e2 6b fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843e65c:	89 45 dc             	mov    %eax,-0x24(%ebp)
 843e65f:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 843e666:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 843e66d:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 843e674:	8d 45 d8             	lea    -0x28(%ebp),%eax
 843e677:	89 44 24 04          	mov    %eax,0x4(%esp)
 843e67b:	8b 45 14             	mov    0x14(%ebp),%eax
 843e67e:	89 04 24             	mov    %eax,(%esp)
 843e681:	e8 10 e1 1d 00       	call   861c796 <_ZN6StreamrsERj>
 843e686:	8d 45 d0             	lea    -0x30(%ebp),%eax
 843e689:	89 44 24 04          	mov    %eax,0x4(%esp)
 843e68d:	8b 45 14             	mov    0x14(%ebp),%eax
 843e690:	89 04 24             	mov    %eax,(%esp)
 843e693:	e8 2c df 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 843e698:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 843e69b:	89 44 24 04          	mov    %eax,0x4(%esp)
 843e69f:	8b 45 14             	mov    0x14(%ebp),%eax
 843e6a2:	89 04 24             	mov    %eax,(%esp)
 843e6a5:	e8 ec e0 1d 00       	call   861c796 <_ZN6StreamrsERj>
 843e6aa:	8d 45 cc             	lea    -0x34(%ebp),%eax
 843e6ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 843e6b1:	8b 45 14             	mov    0x14(%ebp),%eax
 843e6b4:	89 04 24             	mov    %eax,(%esp)
 843e6b7:	e8 08 df 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 843e6bc:	e8 da da c8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 843e6c1:	89 04 24             	mov    %eax,(%esp)
 843e6c4:	e8 99 24 cd ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 843e6c9:	89 45 e0             	mov    %eax,-0x20(%ebp)
 843e6cc:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 843e6d3:	8b 45 cc             	mov    -0x34(%ebp),%eax
 843e6d6:	3d 91 01 00 00       	cmp    $0x191,%eax
 843e6db:	74 0a                	je     843e6e7 <_ZN30DB_InsertAccountFirstLoginFlag8dispatchEiiP6Stream+0xb1>
 843e6dd:	8b 45 cc             	mov    -0x34(%ebp),%eax
 843e6e0:	3d 92 01 00 00       	cmp    $0x192,%eax
 843e6e5:	75 25                	jne    843e70c <_ZN30DB_InsertAccountFirstLoginFlag8dispatchEiiP6Stream+0xd6>
 843e6e7:	8b 45 cc             	mov    -0x34(%ebp),%eax
 843e6ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 843e6ee:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843e6f1:	89 04 24             	mov    %eax,(%esp)
 843e6f4:	e8 71 d2 cc ff       	call   810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>
 843e6f9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 843e6fc:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 843e700:	75 11                	jne    843e713 <_ZN30DB_InsertAccountFirstLoginFlag8dispatchEiiP6Stream+0xdd>
 843e702:	b8 00 00 00 00       	mov    $0x0,%eax
 843e707:	e9 86 00 00 00       	jmp    843e792 <_ZN30DB_InsertAccountFirstLoginFlag8dispatchEiiP6Stream+0x15c>
 843e70c:	b8 00 00 00 00       	mov    $0x0,%eax
 843e711:	eb 7f                	jmp    843e792 <_ZN30DB_InsertAccountFirstLoginFlag8dispatchEiiP6Stream+0x15c>
 843e713:	90                   	nop
 843e714:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 843e717:	8b 75 d0             	mov    -0x30(%ebp),%esi
 843e71a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 843e71d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843e724:	00 
 843e725:	89 04 24             	mov    %eax,(%esp)
 843e728:	e8 1e a9 cc ff       	call   810904b <_Z14NumberToStringji>
 843e72d:	89 c3                	mov    %eax,%ebx
 843e72f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843e732:	8b 00                	mov    (%eax),%eax
 843e734:	83 c0 20             	add    $0x20,%eax
 843e737:	8b 10                	mov    (%eax),%edx
 843e739:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843e73c:	89 04 24             	mov    %eax,(%esp)
 843e73f:	ff d2                	call   *%edx
 843e741:	89 04 24             	mov    %eax,(%esp)
 843e744:	e8 67 03 6a 00       	call   8adeab0 <_Z9toTStringRKSs>
 843e749:	89 7c 24 14          	mov    %edi,0x14(%esp)
 843e74d:	89 74 24 10          	mov    %esi,0x10(%esp)
 843e751:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 843e755:	89 44 24 08          	mov    %eax,0x8(%esp)
 843e759:	c7 44 24 04 ec 56 c5 	movl   $0x8c556ec,0x4(%esp)
 843e760:	08 
 843e761:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843e764:	89 04 24             	mov    %eax,(%esp)
 843e767:	e8 54 5a fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843e76c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843e773:	00 
 843e774:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843e777:	89 04 24             	mov    %eax,(%esp)
 843e77a:	e8 a7 5b fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843e77f:	83 f0 01             	xor    $0x1,%eax
 843e782:	84 c0                	test   %al,%al
 843e784:	74 07                	je     843e78d <_ZN30DB_InsertAccountFirstLoginFlag8dispatchEiiP6Stream+0x157>
 843e786:	b8 00 00 00 00       	mov    $0x0,%eax
 843e78b:	eb 05                	jmp    843e792 <_ZN30DB_InsertAccountFirstLoginFlag8dispatchEiiP6Stream+0x15c>
 843e78d:	b8 01 00 00 00       	mov    $0x1,%eax
 843e792:	83 c4 4c             	add    $0x4c,%esp
 843e795:	5b                   	pop    %ebx
 843e796:	5e                   	pop    %esi
 843e797:	5f                   	pop    %edi
 843e798:	5d                   	pop    %ebp
 843e799:	c3                   	ret

```

```c
// DB_InsertAccountFirstLoginFlag::dispatch @ 0x843e636

/* DB_InsertAccountFirstLoginFlag::dispatch(int, int, Stream*) */

undefined4 DB_InsertAccountFirstLoginFlag::dispatch(int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  CDataManager *this;
  undefined4 uVar4;
  string *sSrc;
  TCHAR *pTVar5;
  Stream *in_stack_00000010;
  int local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  MySQL *local_28;
  int local_24;
  int *local_20;
  
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  Stream::operator>>(in_stack_00000010,&local_2c);
  Stream::operator>>(in_stack_00000010,&local_34);
  Stream::operator>>(in_stack_00000010,&local_30);
  Stream::operator>>(in_stack_00000010,&local_38);
  this = (CDataManager *)G_CDataManager();
  local_24 = CDataManager::get_event_script_mng(this);
  local_20 = (int *)0x0;
  if ((local_38 == 0x191) || (local_38 == 0x192)) {
    local_20 = (int *)EventClassify::CEventScriptMng::get_event_entity(local_24);
    uVar2 = local_30;
    iVar1 = local_34;
    if (local_20 == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = NumberToString(local_2c,0);
      sSrc = (string *)(**(code **)(*local_20 + 0x20))(local_20);
      pTVar5 = toTString(sSrc);
      MySQL::set_query(local_28,
                       "inSert into %s(m_id,server_id, charac_no, occ_date) values(%s,%d, %u, now())"
                       ,pTVar5,uVar4,iVar1,uVar2);
      cVar3 = MySQL::exec(local_28,true);
      if (cVar3 == '\x01') {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## makeRequest

```asm
// === 0843e79a DB_InsertAccountFirstLoginFlag::makeRequest  [0x0843e79a-0x843e8bd] ===
 843e79a:	55                   	push   %ebp
 843e79b:	89 e5                	mov    %esp,%ebp
 843e79d:	56                   	push   %esi
 843e79e:	53                   	push   %ebx
 843e79f:	83 ec 20             	sub    $0x20,%esp
 843e7a2:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843e7a7:	c7 44 24 08 03 95 00 	movl   $0x9503,0x8(%esp)
 843e7ae:	00 
 843e7af:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843e7b6:	08 
 843e7b7:	89 04 24             	mov    %eax,(%esp)
 843e7ba:	e8 c7 12 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843e7bf:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843e7c6:	00 
 843e7c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 843e7cb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843e7ce:	89 04 24             	mov    %eax,(%esp)
 843e7d1:	e8 50 a4 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843e7d6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843e7d9:	89 04 24             	mov    %eax,(%esp)
 843e7dc:	e8 65 a4 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843e7e1:	c7 44 24 04 5e 02 00 	movl   $0x25e,0x4(%esp)
 843e7e8:	00 
 843e7e9:	89 04 24             	mov    %eax,(%esp)
 843e7ec:	e8 65 a4 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843e7f1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843e7f4:	89 04 24             	mov    %eax,(%esp)
 843e7f7:	e8 4a a4 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843e7fc:	8b 55 08             	mov    0x8(%ebp),%edx
 843e7ff:	89 54 24 04          	mov    %edx,0x4(%esp)
 843e803:	89 04 24             	mov    %eax,(%esp)
 843e806:	e8 4b a4 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843e80b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843e80e:	89 04 24             	mov    %eax,(%esp)
 843e811:	e8 30 a4 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843e816:	8b 55 0c             	mov    0xc(%ebp),%edx
 843e819:	89 54 24 04          	mov    %edx,0x4(%esp)
 843e81d:	89 04 24             	mov    %eax,(%esp)
 843e820:	e8 6d 3a ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 843e825:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843e828:	89 04 24             	mov    %eax,(%esp)
 843e82b:	e8 16 a4 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843e830:	8b 55 10             	mov    0x10(%ebp),%edx
 843e833:	89 54 24 04          	mov    %edx,0x4(%esp)
 843e837:	89 04 24             	mov    %eax,(%esp)
 843e83a:	e8 17 a4 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843e83f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843e842:	89 04 24             	mov    %eax,(%esp)
 843e845:	e8 fc a3 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843e84a:	8b 55 14             	mov    0x14(%ebp),%edx
 843e84d:	89 54 24 04          	mov    %edx,0x4(%esp)
 843e851:	89 04 24             	mov    %eax,(%esp)
 843e854:	e8 39 3a ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 843e859:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843e85c:	89 04 24             	mov    %eax,(%esp)
 843e85f:	e8 e2 a3 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843e864:	8b 55 18             	mov    0x18(%ebp),%edx
 843e867:	89 54 24 04          	mov    %edx,0x4(%esp)
 843e86b:	89 04 24             	mov    %eax,(%esp)
 843e86e:	e8 e3 a3 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843e873:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843e878:	8d 55 f0             	lea    -0x10(%ebp),%edx
 843e87b:	89 54 24 08          	mov    %edx,0x8(%esp)
 843e87f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843e886:	00 
 843e887:	89 04 24             	mov    %eax,(%esp)
 843e88a:	e8 4f 27 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843e88f:	eb 1b                	jmp    843e8ac <_ZN30DB_InsertAccountFirstLoginFlag11makeRequestEijiji+0x112>
 843e891:	89 d3                	mov    %edx,%ebx
 843e893:	89 c6                	mov    %eax,%esi
 843e895:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843e898:	89 04 24             	mov    %eax,(%esp)
 843e89b:	e8 32 e0 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843e8a0:	89 f0                	mov    %esi,%eax
 843e8a2:	89 da                	mov    %ebx,%edx
 843e8a4:	89 04 24             	mov    %eax,(%esp)
 843e8a7:	e8 a4 4e 6a 00       	call   8ae3750 <_Unwind_Resume>
 843e8ac:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843e8af:	89 04 24             	mov    %eax,(%esp)
 843e8b2:	e8 1b e0 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843e8b7:	83 c4 20             	add    $0x20,%esp
 843e8ba:	5b                   	pop    %ebx
 843e8bb:	5e                   	pop    %esi
 843e8bc:	5d                   	pop    %ebp
 843e8bd:	c3                   	ret

```

```c
// DB_InsertAccountFirstLoginFlag::makeRequest @ 0x843e79a

/* DB_InsertAccountFirstLoginFlag::makeRequest(int, unsigned int, int, unsigned int, int) */

void DB_InsertAccountFirstLoginFlag::makeRequest
               (int param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x9503);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843e7ec to 0843e88e has its CatchHandler @ 0843e891 */
  CStreamGuard::operator<<(pCVar2,0x25e);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_4);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_5);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

