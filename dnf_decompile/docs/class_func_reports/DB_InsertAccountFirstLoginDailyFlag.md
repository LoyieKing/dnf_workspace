# DB_InsertAccountFirstLoginDailyFlag

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843e8be DB_InsertAccountFirstLoginDailyFlag::dispatch  [0x0843e8be-0x843ea63] ===
 843e8be:	55                   	push   %ebp
 843e8bf:	89 e5                	mov    %esp,%ebp
 843e8c1:	56                   	push   %esi
 843e8c2:	53                   	push   %ebx
 843e8c3:	83 ec 40             	sub    $0x40,%esp
 843e8c6:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843e8cb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843e8d2:	00 
 843e8d3:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 843e8da:	00 
 843e8db:	89 04 24             	mov    %eax,(%esp)
 843e8de:	e8 5b 69 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843e8e3:	89 45 e8             	mov    %eax,-0x18(%ebp)
 843e8e6:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 843e8ed:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 843e8f4:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 843e8fb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 843e8fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 843e902:	8b 45 14             	mov    0x14(%ebp),%eax
 843e905:	89 04 24             	mov    %eax,(%esp)
 843e908:	e8 89 de 1d 00       	call   861c796 <_ZN6StreamrsERj>
 843e90d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 843e910:	89 44 24 04          	mov    %eax,0x4(%esp)
 843e914:	8b 45 14             	mov    0x14(%ebp),%eax
 843e917:	89 04 24             	mov    %eax,(%esp)
 843e91a:	e8 77 de 1d 00       	call   861c796 <_ZN6StreamrsERj>
 843e91f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 843e922:	89 44 24 04          	mov    %eax,0x4(%esp)
 843e926:	8b 45 14             	mov    0x14(%ebp),%eax
 843e929:	89 04 24             	mov    %eax,(%esp)
 843e92c:	e8 93 dc 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 843e931:	e8 65 d8 c8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 843e936:	89 04 24             	mov    %eax,(%esp)
 843e939:	e8 24 22 cd ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 843e93e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 843e941:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 843e948:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843e94b:	3d 9c 01 00 00       	cmp    $0x19c,%eax
 843e950:	75 25                	jne    843e977 <_ZN35DB_InsertAccountFirstLoginDailyFlag8dispatchEiiP6Stream+0xb9>
 843e952:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843e955:	89 44 24 04          	mov    %eax,0x4(%esp)
 843e959:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843e95c:	89 04 24             	mov    %eax,(%esp)
 843e95f:	e8 06 d0 cc ff       	call   810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>
 843e964:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843e967:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 843e96b:	75 14                	jne    843e981 <_ZN35DB_InsertAccountFirstLoginDailyFlag8dispatchEiiP6Stream+0xc3>
 843e96d:	b8 00 00 00 00       	mov    $0x0,%eax
 843e972:	e9 e5 00 00 00       	jmp    843ea5c <_ZN35DB_InsertAccountFirstLoginDailyFlag8dispatchEiiP6Stream+0x19e>
 843e977:	b8 00 00 00 00       	mov    $0x0,%eax
 843e97c:	e9 db 00 00 00       	jmp    843ea5c <_ZN35DB_InsertAccountFirstLoginDailyFlag8dispatchEiiP6Stream+0x19e>
 843e981:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 843e984:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 843e987:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843e98a:	8b 00                	mov    (%eax),%eax
 843e98c:	83 c0 20             	add    $0x20,%eax
 843e98f:	8b 10                	mov    (%eax),%edx
 843e991:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843e994:	89 04 24             	mov    %eax,(%esp)
 843e997:	ff d2                	call   *%edx
 843e999:	89 04 24             	mov    %eax,(%esp)
 843e99c:	e8 0f 01 6a 00       	call   8adeab0 <_Z9toTStringRKSs>
 843e9a1:	89 74 24 10          	mov    %esi,0x10(%esp)
 843e9a5:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 843e9a9:	89 44 24 08          	mov    %eax,0x8(%esp)
 843e9ad:	c7 44 24 04 3c 57 c5 	movl   $0x8c5573c,0x4(%esp)
 843e9b4:	08 
 843e9b5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843e9b8:	89 04 24             	mov    %eax,(%esp)
 843e9bb:	e8 00 58 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843e9c0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843e9c7:	00 
 843e9c8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843e9cb:	89 04 24             	mov    %eax,(%esp)
 843e9ce:	e8 53 59 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843e9d3:	83 f0 01             	xor    $0x1,%eax
 843e9d6:	84 c0                	test   %al,%al
 843e9d8:	74 07                	je     843e9e1 <_ZN35DB_InsertAccountFirstLoginDailyFlag8dispatchEiiP6Stream+0x123>
 843e9da:	b8 00 00 00 00       	mov    $0x0,%eax
 843e9df:	eb 7b                	jmp    843ea5c <_ZN35DB_InsertAccountFirstLoginDailyFlag8dispatchEiiP6Stream+0x19e>
 843e9e1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843e9e4:	89 04 24             	mov    %eax,(%esp)
 843e9e7:	e8 24 59 fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 843e9ec:	09 d0                	or     %edx,%eax
 843e9ee:	85 c0                	test   %eax,%eax
 843e9f0:	0f 94 c0             	sete   %al
 843e9f3:	84 c0                	test   %al,%al
 843e9f5:	74 60                	je     843ea57 <_ZN35DB_InsertAccountFirstLoginDailyFlag8dispatchEiiP6Stream+0x199>
 843e9f7:	8b 75 e0             	mov    -0x20(%ebp),%esi
 843e9fa:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 843e9fd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843ea00:	8b 00                	mov    (%eax),%eax
 843ea02:	83 c0 20             	add    $0x20,%eax
 843ea05:	8b 10                	mov    (%eax),%edx
 843ea07:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843ea0a:	89 04 24             	mov    %eax,(%esp)
 843ea0d:	ff d2                	call   *%edx
 843ea0f:	89 04 24             	mov    %eax,(%esp)
 843ea12:	e8 99 00 6a 00       	call   8adeab0 <_Z9toTStringRKSs>
 843ea17:	89 74 24 10          	mov    %esi,0x10(%esp)
 843ea1b:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 843ea1f:	89 44 24 08          	mov    %eax,0x8(%esp)
 843ea23:	c7 44 24 04 78 57 c5 	movl   $0x8c55778,0x4(%esp)
 843ea2a:	08 
 843ea2b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843ea2e:	89 04 24             	mov    %eax,(%esp)
 843ea31:	e8 8a 57 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843ea36:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843ea3d:	00 
 843ea3e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843ea41:	89 04 24             	mov    %eax,(%esp)
 843ea44:	e8 dd 58 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843ea49:	83 f0 01             	xor    $0x1,%eax
 843ea4c:	84 c0                	test   %al,%al
 843ea4e:	74 07                	je     843ea57 <_ZN35DB_InsertAccountFirstLoginDailyFlag8dispatchEiiP6Stream+0x199>
 843ea50:	b8 00 00 00 00       	mov    $0x0,%eax
 843ea55:	eb 05                	jmp    843ea5c <_ZN35DB_InsertAccountFirstLoginDailyFlag8dispatchEiiP6Stream+0x19e>
 843ea57:	b8 01 00 00 00       	mov    $0x1,%eax
 843ea5c:	83 c4 40             	add    $0x40,%esp
 843ea5f:	5b                   	pop    %ebx
 843ea60:	5e                   	pop    %esi
 843ea61:	5d                   	pop    %ebp
 843ea62:	c3                   	ret
 843ea63:	90                   	nop

```

```c
// DB_InsertAccountFirstLoginDailyFlag::dispatch @ 0x843e8be

/* DB_InsertAccountFirstLoginDailyFlag::dispatch(int, int, Stream*) */

undefined4 DB_InsertAccountFirstLoginDailyFlag::dispatch(int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  CDataManager *this;
  undefined4 uVar4;
  string *psVar5;
  TCHAR *pTVar6;
  longlong lVar7;
  Stream *in_stack_00000010;
  int local_28;
  uint local_24;
  uint local_20;
  MySQL *local_1c;
  undefined4 local_18;
  int local_14;
  int *local_10;
  
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_20 = 0;
  local_24 = 0;
  local_18 = 0;
  Stream::operator>>(in_stack_00000010,&local_20);
  Stream::operator>>(in_stack_00000010,&local_24);
  Stream::operator>>(in_stack_00000010,&local_28);
  this = (CDataManager *)G_CDataManager();
  local_14 = CDataManager::get_event_script_mng(this);
  local_10 = (int *)0x0;
  if (local_28 == 0x19c) {
    local_10 = (int *)EventClassify::CEventScriptMng::get_event_entity(local_14);
    uVar2 = local_20;
    uVar1 = local_24;
    if (local_10 == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      psVar5 = (string *)(**(code **)(*local_10 + 0x20))(local_10,local_28);
      pTVar6 = toTString(psVar5);
      MySQL::set_query(local_1c,"upDate %s set charac_no=%u, occ_date=now() where m_id=%u",pTVar6,
                       uVar1,uVar2);
      cVar3 = MySQL::exec(local_1c,true);
      if (cVar3 == '\x01') {
        lVar7 = MySQL::getAffectedRowCount(local_1c);
        uVar2 = local_20;
        uVar1 = local_24;
        if (lVar7 == 0) {
          psVar5 = (string *)(**(code **)(*local_10 + 0x20))(local_10);
          pTVar6 = toTString(psVar5);
          MySQL::set_query(local_1c,
                           "inSert into %s(m_id, charac_no, occ_date) values(%u, %u, now())",pTVar6,
                           uVar2,uVar1);
          cVar3 = MySQL::exec(local_1c,true);
          if (cVar3 != '\x01') {
            return 0;
          }
        }
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
// === 0843ea64 DB_InsertAccountFirstLoginDailyFlag::makeRequest  [0x0843ea64-0x843eb6d] ===
 843ea64:	55                   	push   %ebp
 843ea65:	89 e5                	mov    %esp,%ebp
 843ea67:	56                   	push   %esi
 843ea68:	53                   	push   %ebx
 843ea69:	83 ec 20             	sub    $0x20,%esp
 843ea6c:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843ea71:	c7 44 24 08 3d 95 00 	movl   $0x953d,0x8(%esp)
 843ea78:	00 
 843ea79:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843ea80:	08 
 843ea81:	89 04 24             	mov    %eax,(%esp)
 843ea84:	e8 fd 0f e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843ea89:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843ea90:	00 
 843ea91:	89 44 24 04          	mov    %eax,0x4(%esp)
 843ea95:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843ea98:	89 04 24             	mov    %eax,(%esp)
 843ea9b:	e8 86 a1 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843eaa0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843eaa3:	89 04 24             	mov    %eax,(%esp)
 843eaa6:	e8 9b a1 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843eaab:	c7 44 24 04 42 03 00 	movl   $0x342,0x4(%esp)
 843eab2:	00 
 843eab3:	89 04 24             	mov    %eax,(%esp)
 843eab6:	e8 9b a1 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843eabb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843eabe:	89 04 24             	mov    %eax,(%esp)
 843eac1:	e8 80 a1 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843eac6:	8b 55 08             	mov    0x8(%ebp),%edx
 843eac9:	89 54 24 04          	mov    %edx,0x4(%esp)
 843eacd:	89 04 24             	mov    %eax,(%esp)
 843ead0:	e8 81 a1 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843ead5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843ead8:	89 04 24             	mov    %eax,(%esp)
 843eadb:	e8 66 a1 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843eae0:	8b 55 0c             	mov    0xc(%ebp),%edx
 843eae3:	89 54 24 04          	mov    %edx,0x4(%esp)
 843eae7:	89 04 24             	mov    %eax,(%esp)
 843eaea:	e8 a3 37 ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 843eaef:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843eaf2:	89 04 24             	mov    %eax,(%esp)
 843eaf5:	e8 4c a1 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843eafa:	8b 55 10             	mov    0x10(%ebp),%edx
 843eafd:	89 54 24 04          	mov    %edx,0x4(%esp)
 843eb01:	89 04 24             	mov    %eax,(%esp)
 843eb04:	e8 89 37 ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 843eb09:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843eb0c:	89 04 24             	mov    %eax,(%esp)
 843eb0f:	e8 32 a1 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843eb14:	8b 55 14             	mov    0x14(%ebp),%edx
 843eb17:	89 54 24 04          	mov    %edx,0x4(%esp)
 843eb1b:	89 04 24             	mov    %eax,(%esp)
 843eb1e:	e8 33 a1 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843eb23:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843eb28:	8d 55 f0             	lea    -0x10(%ebp),%edx
 843eb2b:	89 54 24 08          	mov    %edx,0x8(%esp)
 843eb2f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843eb36:	00 
 843eb37:	89 04 24             	mov    %eax,(%esp)
 843eb3a:	e8 9f 24 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843eb3f:	eb 1b                	jmp    843eb5c <_ZN35DB_InsertAccountFirstLoginDailyFlag11makeRequestEijji+0xf8>
 843eb41:	89 d3                	mov    %edx,%ebx
 843eb43:	89 c6                	mov    %eax,%esi
 843eb45:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843eb48:	89 04 24             	mov    %eax,(%esp)
 843eb4b:	e8 82 dd 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843eb50:	89 f0                	mov    %esi,%eax
 843eb52:	89 da                	mov    %ebx,%edx
 843eb54:	89 04 24             	mov    %eax,(%esp)
 843eb57:	e8 f4 4b 6a 00       	call   8ae3750 <_Unwind_Resume>
 843eb5c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843eb5f:	89 04 24             	mov    %eax,(%esp)
 843eb62:	e8 6b dd 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843eb67:	83 c4 20             	add    $0x20,%esp
 843eb6a:	5b                   	pop    %ebx
 843eb6b:	5e                   	pop    %esi
 843eb6c:	5d                   	pop    %ebp
 843eb6d:	c3                   	ret

```

```c
// DB_InsertAccountFirstLoginDailyFlag::makeRequest @ 0x843ea64

/* DB_InsertAccountFirstLoginDailyFlag::makeRequest(int, unsigned int, unsigned int, int) */

void DB_InsertAccountFirstLoginDailyFlag::makeRequest
               (int param_1,uint param_2,uint param_3,int param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x953d);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843eab6 to 0843eb3e has its CatchHandler @ 0843eb41 */
  CStreamGuard::operator<<(pCVar2,0x342);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_4);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

