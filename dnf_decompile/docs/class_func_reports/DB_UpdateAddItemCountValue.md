# DB_UpdateAddItemCountValue

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843ed96 DB_UpdateAddItemCountValue::dispatch  [0x0843ed96-0x843ef2f] ===
 843ed96:	55                   	push   %ebp
 843ed97:	89 e5                	mov    %esp,%ebp
 843ed99:	56                   	push   %esi
 843ed9a:	53                   	push   %ebx
 843ed9b:	83 ec 40             	sub    $0x40,%esp
 843ed9e:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843eda3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843edaa:	00 
 843edab:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 843edb2:	00 
 843edb3:	89 04 24             	mov    %eax,(%esp)
 843edb6:	e8 83 64 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843edbb:	89 45 ec             	mov    %eax,-0x14(%ebp)
 843edbe:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 843edc5:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 843edcc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 843edcf:	89 44 24 04          	mov    %eax,0x4(%esp)
 843edd3:	8b 45 14             	mov    0x14(%ebp),%eax
 843edd6:	89 04 24             	mov    %eax,(%esp)
 843edd9:	e8 b8 d9 1d 00       	call   861c796 <_ZN6StreamrsERj>
 843edde:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 843ede1:	89 44 24 04          	mov    %eax,0x4(%esp)
 843ede5:	8b 45 14             	mov    0x14(%ebp),%eax
 843ede8:	89 04 24             	mov    %eax,(%esp)
 843edeb:	e8 a6 d9 1d 00       	call   861c796 <_ZN6StreamrsERj>
 843edf0:	e8 a6 d3 c8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 843edf5:	89 04 24             	mov    %eax,(%esp)
 843edf8:	e8 65 1d cd ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 843edfd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 843ee00:	c7 44 24 04 93 01 00 	movl   $0x193,0x4(%esp)
 843ee07:	00 
 843ee08:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843ee0b:	89 04 24             	mov    %eax,(%esp)
 843ee0e:	e8 57 cb cc ff       	call   810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>
 843ee13:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843ee16:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 843ee1a:	75 0a                	jne    843ee26 <_ZN26DB_UpdateAddItemCountValue8dispatchEiiP6Stream+0x90>
 843ee1c:	b8 00 00 00 00       	mov    $0x0,%eax
 843ee21:	e9 02 01 00 00       	jmp    843ef28 <_ZN26DB_UpdateAddItemCountValue8dispatchEiiP6Stream+0x192>
 843ee26:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843ee29:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843ee30:	00 
 843ee31:	89 04 24             	mov    %eax,(%esp)
 843ee34:	e8 12 a2 cc ff       	call   810904b <_Z14NumberToStringji>
 843ee39:	89 c3                	mov    %eax,%ebx
 843ee3b:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 843ee3e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843ee41:	8b 00                	mov    (%eax),%eax
 843ee43:	83 c0 20             	add    $0x20,%eax
 843ee46:	8b 10                	mov    (%eax),%edx
 843ee48:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843ee4b:	89 04 24             	mov    %eax,(%esp)
 843ee4e:	ff d2                	call   *%edx
 843ee50:	89 04 24             	mov    %eax,(%esp)
 843ee53:	e8 58 fc 69 00       	call   8adeab0 <_Z9toTStringRKSs>
 843ee58:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 843ee5c:	89 74 24 0c          	mov    %esi,0xc(%esp)
 843ee60:	89 44 24 08          	mov    %eax,0x8(%esp)
 843ee64:	c7 44 24 04 b8 57 c5 	movl   $0x8c557b8,0x4(%esp)
 843ee6b:	08 
 843ee6c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843ee6f:	89 04 24             	mov    %eax,(%esp)
 843ee72:	e8 49 53 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843ee77:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843ee7e:	00 
 843ee7f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843ee82:	89 04 24             	mov    %eax,(%esp)
 843ee85:	e8 9c 54 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843ee8a:	83 f0 01             	xor    $0x1,%eax
 843ee8d:	84 c0                	test   %al,%al
 843ee8f:	74 0a                	je     843ee9b <_ZN26DB_UpdateAddItemCountValue8dispatchEiiP6Stream+0x105>
 843ee91:	b8 00 00 00 00       	mov    $0x0,%eax
 843ee96:	e9 8d 00 00 00       	jmp    843ef28 <_ZN26DB_UpdateAddItemCountValue8dispatchEiiP6Stream+0x192>
 843ee9b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843ee9e:	89 04 24             	mov    %eax,(%esp)
 843eea1:	e8 6a 54 fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 843eea6:	09 d0                	or     %edx,%eax
 843eea8:	85 c0                	test   %eax,%eax
 843eeaa:	0f 94 c0             	sete   %al
 843eead:	84 c0                	test   %al,%al
 843eeaf:	74 72                	je     843ef23 <_ZN26DB_UpdateAddItemCountValue8dispatchEiiP6Stream+0x18d>
 843eeb1:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 843eeb4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843eeb7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843eebe:	00 
 843eebf:	89 04 24             	mov    %eax,(%esp)
 843eec2:	e8 84 a1 cc ff       	call   810904b <_Z14NumberToStringji>
 843eec7:	89 c3                	mov    %eax,%ebx
 843eec9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843eecc:	8b 00                	mov    (%eax),%eax
 843eece:	83 c0 20             	add    $0x20,%eax
 843eed1:	8b 10                	mov    (%eax),%edx
 843eed3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843eed6:	89 04 24             	mov    %eax,(%esp)
 843eed9:	ff d2                	call   *%edx
 843eedb:	89 04 24             	mov    %eax,(%esp)
 843eede:	e8 cd fb 69 00       	call   8adeab0 <_Z9toTStringRKSs>
 843eee3:	89 74 24 10          	mov    %esi,0x10(%esp)
 843eee7:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 843eeeb:	89 44 24 08          	mov    %eax,0x8(%esp)
 843eeef:	c7 44 24 04 ec 57 c5 	movl   $0x8c557ec,0x4(%esp)
 843eef6:	08 
 843eef7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843eefa:	89 04 24             	mov    %eax,(%esp)
 843eefd:	e8 be 52 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843ef02:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843ef09:	00 
 843ef0a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843ef0d:	89 04 24             	mov    %eax,(%esp)
 843ef10:	e8 11 54 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843ef15:	83 f0 01             	xor    $0x1,%eax
 843ef18:	84 c0                	test   %al,%al
 843ef1a:	74 07                	je     843ef23 <_ZN26DB_UpdateAddItemCountValue8dispatchEiiP6Stream+0x18d>
 843ef1c:	b8 00 00 00 00       	mov    $0x0,%eax
 843ef21:	eb 05                	jmp    843ef28 <_ZN26DB_UpdateAddItemCountValue8dispatchEiiP6Stream+0x192>
 843ef23:	b8 01 00 00 00       	mov    $0x1,%eax
 843ef28:	83 c4 40             	add    $0x40,%esp
 843ef2b:	5b                   	pop    %ebx
 843ef2c:	5e                   	pop    %esi
 843ef2d:	5d                   	pop    %ebp
 843ef2e:	c3                   	ret
 843ef2f:	90                   	nop

```

```c
// DB_UpdateAddItemCountValue::dispatch @ 0x843ed96

/* DB_UpdateAddItemCountValue::dispatch(int, int, Stream*) */

undefined4 DB_UpdateAddItemCountValue::dispatch(int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  char cVar2;
  CDataManager *this;
  undefined4 uVar3;
  string *psVar4;
  TCHAR *pTVar5;
  longlong lVar6;
  Stream *in_stack_00000010;
  uint local_20;
  uint local_1c;
  MySQL *local_18;
  int local_14;
  int *local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_1c = 0;
  local_20 = 0;
  Stream::operator>>(in_stack_00000010,&local_1c);
  Stream::operator>>(in_stack_00000010,&local_20);
  this = (CDataManager *)G_CDataManager();
  local_14 = CDataManager::get_event_script_mng(this);
  local_10 = (int *)EventClassify::CEventScriptMng::get_event_entity(local_14);
  if (local_10 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = NumberToString(local_1c,0);
    uVar1 = local_20;
    psVar4 = (string *)(**(code **)(*local_10 + 0x20))(local_10);
    pTVar5 = toTString(psVar4);
    MySQL::set_query(local_18,"upDate %s set item_cnt=item_cnt+%d where m_id=%s",pTVar5,uVar1,uVar3)
    ;
    cVar2 = MySQL::exec(local_18,true);
    if (cVar2 == '\x01') {
      lVar6 = MySQL::getAffectedRowCount(local_18);
      uVar1 = local_20;
      if (lVar6 == 0) {
        uVar3 = NumberToString(local_1c,0);
        psVar4 = (string *)(**(code **)(*local_10 + 0x20))(local_10);
        pTVar5 = toTString(psVar4);
        MySQL::set_query(local_18,"inSert into %s(m_id, item_cnt) values(%s, %d)",pTVar5,uVar3,uVar1
                        );
        cVar2 = MySQL::exec(local_18,true);
        if (cVar2 != '\x01') {
          return 0;
        }
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## makeRequest

```asm
// === 0843ef30 DB_UpdateAddItemCountValue::makeRequest  [0x0843ef30-0x843f021] ===
 843ef30:	55                   	push   %ebp
 843ef31:	89 e5                	mov    %esp,%ebp
 843ef33:	56                   	push   %esi
 843ef34:	53                   	push   %ebx
 843ef35:	83 ec 20             	sub    $0x20,%esp
 843ef38:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843ef3d:	c7 44 24 08 84 96 00 	movl   $0x9684,0x8(%esp)
 843ef44:	00 
 843ef45:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843ef4c:	08 
 843ef4d:	89 04 24             	mov    %eax,(%esp)
 843ef50:	e8 31 0b e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843ef55:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843ef5c:	00 
 843ef5d:	89 44 24 04          	mov    %eax,0x4(%esp)
 843ef61:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843ef64:	89 04 24             	mov    %eax,(%esp)
 843ef67:	e8 ba 9c c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843ef6c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843ef6f:	89 04 24             	mov    %eax,(%esp)
 843ef72:	e8 cf 9c c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843ef77:	c7 44 24 04 80 02 00 	movl   $0x280,0x4(%esp)
 843ef7e:	00 
 843ef7f:	89 04 24             	mov    %eax,(%esp)
 843ef82:	e8 cf 9c c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843ef87:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843ef8a:	89 04 24             	mov    %eax,(%esp)
 843ef8d:	e8 b4 9c c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843ef92:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 843ef99:	ff 
 843ef9a:	89 04 24             	mov    %eax,(%esp)
 843ef9d:	e8 b4 9c c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843efa2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843efa5:	89 04 24             	mov    %eax,(%esp)
 843efa8:	e8 99 9c c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843efad:	8b 55 08             	mov    0x8(%ebp),%edx
 843efb0:	89 54 24 04          	mov    %edx,0x4(%esp)
 843efb4:	89 04 24             	mov    %eax,(%esp)
 843efb7:	e8 d6 32 ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 843efbc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843efbf:	89 04 24             	mov    %eax,(%esp)
 843efc2:	e8 7f 9c c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843efc7:	8b 55 0c             	mov    0xc(%ebp),%edx
 843efca:	89 54 24 04          	mov    %edx,0x4(%esp)
 843efce:	89 04 24             	mov    %eax,(%esp)
 843efd1:	e8 bc 32 ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 843efd6:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843efdb:	8d 55 f0             	lea    -0x10(%ebp),%edx
 843efde:	89 54 24 08          	mov    %edx,0x8(%esp)
 843efe2:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843efe9:	00 
 843efea:	89 04 24             	mov    %eax,(%esp)
 843efed:	e8 ec 1f 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843eff2:	eb 1b                	jmp    843f00f <_ZN26DB_UpdateAddItemCountValue11makeRequestEjj+0xdf>
 843eff4:	89 d3                	mov    %edx,%ebx
 843eff6:	89 c6                	mov    %eax,%esi
 843eff8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843effb:	89 04 24             	mov    %eax,(%esp)
 843effe:	e8 cf d8 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843f003:	89 f0                	mov    %esi,%eax
 843f005:	89 da                	mov    %ebx,%edx
 843f007:	89 04 24             	mov    %eax,(%esp)
 843f00a:	e8 41 47 6a 00       	call   8ae3750 <_Unwind_Resume>
 843f00f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843f012:	89 04 24             	mov    %eax,(%esp)
 843f015:	e8 b8 d8 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843f01a:	83 c4 20             	add    $0x20,%esp
 843f01d:	5b                   	pop    %ebx
 843f01e:	5e                   	pop    %esi
 843f01f:	5d                   	pop    %ebp
 843f020:	c3                   	ret
 843f021:	90                   	nop

```

```c
// DB_UpdateAddItemCountValue::makeRequest @ 0x843ef30

/* DB_UpdateAddItemCountValue::makeRequest(unsigned int, unsigned int) */

void DB_UpdateAddItemCountValue::makeRequest(uint param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x9684);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843ef82 to 0843eff1 has its CatchHandler @ 0843eff4 */
  CStreamGuard::operator<<(pCVar2,0x280);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

