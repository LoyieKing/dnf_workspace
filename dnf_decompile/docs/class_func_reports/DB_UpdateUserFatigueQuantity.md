# DB_UpdateUserFatigueQuantity

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08441a8e DB_UpdateUserFatigueQuantity::dispatch  [0x08441a8e-0x8441c29] ===
 8441a8e:	55                   	push   %ebp
 8441a8f:	89 e5                	mov    %esp,%ebp
 8441a91:	56                   	push   %esi
 8441a92:	53                   	push   %ebx
 8441a93:	83 ec 30             	sub    $0x30,%esp
 8441a96:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8441a9b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8441aa2:	00 
 8441aa3:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8441aaa:	00 
 8441aab:	89 04 24             	mov    %eax,(%esp)
 8441aae:	e8 8b 37 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8441ab3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8441ab6:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8441abd:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8441ac4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8441ac7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8441acb:	8b 45 14             	mov    0x14(%ebp),%eax
 8441ace:	89 04 24             	mov    %eax,(%esp)
 8441ad1:	e8 c0 ac 1d 00       	call   861c796 <_ZN6StreamrsERj>
 8441ad6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8441ad9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8441add:	8b 45 14             	mov    0x14(%ebp),%eax
 8441ae0:	89 04 24             	mov    %eax,(%esp)
 8441ae3:	e8 ae ac 1d 00       	call   861c796 <_ZN6StreamrsERj>
 8441ae8:	e8 ae a6 c8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8441aed:	89 04 24             	mov    %eax,(%esp)
 8441af0:	e8 6d f0 cc ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 8441af5:	c7 44 24 04 99 01 00 	movl   $0x199,0x4(%esp)
 8441afc:	00 
 8441afd:	89 04 24             	mov    %eax,(%esp)
 8441b00:	e8 0b 96 cc ff       	call   810b110 <_ZN13EventClassify15CEventScriptMng17get_db_table_nameEi>
 8441b05:	89 44 24 04          	mov    %eax,0x4(%esp)
 8441b09:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8441b0c:	89 04 24             	mov    %eax,(%esp)
 8441b0f:	e8 9c 5e 2c 00       	call   87079b0 <_ZNSsC1ERKSs>
 8441b14:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8441b17:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8441b1e:	00 
 8441b1f:	89 04 24             	mov    %eax,(%esp)
 8441b22:	e8 24 75 cc ff       	call   810904b <_Z14NumberToStringji>
 8441b27:	89 c3                	mov    %eax,%ebx
 8441b29:	8b 75 ec             	mov    -0x14(%ebp),%esi
 8441b2c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8441b2f:	89 04 24             	mov    %eax,(%esp)
 8441b32:	e8 79 cf 69 00       	call   8adeab0 <_Z9toTStringRKSs>
 8441b37:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8441b3b:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8441b3f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8441b43:	c7 44 24 04 7c 67 c5 	movl   $0x8c5677c,0x4(%esp)
 8441b4a:	08 
 8441b4b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8441b4e:	89 04 24             	mov    %eax,(%esp)
 8441b51:	e8 6a 26 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8441b56:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8441b5d:	00 
 8441b5e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8441b61:	89 04 24             	mov    %eax,(%esp)
 8441b64:	e8 bd 27 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8441b69:	83 f0 01             	xor    $0x1,%eax
 8441b6c:	84 c0                	test   %al,%al
 8441b6e:	74 0a                	je     8441b7a <_ZN28DB_UpdateUserFatigueQuantity8dispatchEiiP6Stream+0xec>
 8441b70:	bb 00 00 00 00       	mov    $0x0,%ebx
 8441b75:	e9 9b 00 00 00       	jmp    8441c15 <_ZN28DB_UpdateUserFatigueQuantity8dispatchEiiP6Stream+0x187>
 8441b7a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8441b7d:	89 04 24             	mov    %eax,(%esp)
 8441b80:	e8 8b 27 fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8441b85:	09 d0                	or     %edx,%eax
 8441b87:	85 c0                	test   %eax,%eax
 8441b89:	0f 94 c0             	sete   %al
 8441b8c:	84 c0                	test   %al,%al
 8441b8e:	74 63                	je     8441bf3 <_ZN28DB_UpdateUserFatigueQuantity8dispatchEiiP6Stream+0x165>
 8441b90:	8b 75 ec             	mov    -0x14(%ebp),%esi
 8441b93:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8441b96:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8441b9d:	00 
 8441b9e:	89 04 24             	mov    %eax,(%esp)
 8441ba1:	e8 a5 74 cc ff       	call   810904b <_Z14NumberToStringji>
 8441ba6:	89 c3                	mov    %eax,%ebx
 8441ba8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8441bab:	89 04 24             	mov    %eax,(%esp)
 8441bae:	e8 fd ce 69 00       	call   8adeab0 <_Z9toTStringRKSs>
 8441bb3:	89 74 24 10          	mov    %esi,0x10(%esp)
 8441bb7:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8441bbb:	89 44 24 08          	mov    %eax,0x8(%esp)
 8441bbf:	c7 44 24 04 c0 67 c5 	movl   $0x8c567c0,0x4(%esp)
 8441bc6:	08 
 8441bc7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8441bca:	89 04 24             	mov    %eax,(%esp)
 8441bcd:	e8 ee 25 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8441bd2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8441bd9:	00 
 8441bda:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8441bdd:	89 04 24             	mov    %eax,(%esp)
 8441be0:	e8 41 27 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8441be5:	83 f0 01             	xor    $0x1,%eax
 8441be8:	84 c0                	test   %al,%al
 8441bea:	74 07                	je     8441bf3 <_ZN28DB_UpdateUserFatigueQuantity8dispatchEiiP6Stream+0x165>
 8441bec:	bb 00 00 00 00       	mov    $0x0,%ebx
 8441bf1:	eb 22                	jmp    8441c15 <_ZN28DB_UpdateUserFatigueQuantity8dispatchEiiP6Stream+0x187>
 8441bf3:	bb 01 00 00 00       	mov    $0x1,%ebx
 8441bf8:	eb 1b                	jmp    8441c15 <_ZN28DB_UpdateUserFatigueQuantity8dispatchEiiP6Stream+0x187>
 8441bfa:	89 d3                	mov    %edx,%ebx
 8441bfc:	89 c6                	mov    %eax,%esi
 8441bfe:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8441c01:	89 04 24             	mov    %eax,(%esp)
 8441c04:	e8 d7 5f 2c 00       	call   8707be0 <_ZNSsD1Ev>
 8441c09:	89 f0                	mov    %esi,%eax
 8441c0b:	89 da                	mov    %ebx,%edx
 8441c0d:	89 04 24             	mov    %eax,(%esp)
 8441c10:	e8 3b 1b 6a 00       	call   8ae3750 <_Unwind_Resume>
 8441c15:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8441c18:	89 04 24             	mov    %eax,(%esp)
 8441c1b:	e8 c0 5f 2c 00       	call   8707be0 <_ZNSsD1Ev>
 8441c20:	89 d8                	mov    %ebx,%eax
 8441c22:	83 c4 30             	add    $0x30,%esp
 8441c25:	5b                   	pop    %ebx
 8441c26:	5e                   	pop    %esi
 8441c27:	5d                   	pop    %ebp
 8441c28:	c3                   	ret
 8441c29:	90                   	nop

```

```c
// DB_UpdateUserFatigueQuantity::dispatch @ 0x8441a8e

/* DB_UpdateUserFatigueQuantity::dispatch(int, int, Stream*) */

undefined4 DB_UpdateUserFatigueQuantity::dispatch(int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  char cVar2;
  CDataManager *this;
  CEventScriptMng *this_00;
  string *psVar3;
  undefined4 uVar4;
  TCHAR *pTVar5;
  longlong lVar6;
  Stream *in_stack_00000010;
  string local_1c;
  uint local_18;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_14 = 0;
  local_18 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  this = (CDataManager *)G_CDataManager();
  this_00 = (CEventScriptMng *)CDataManager::get_event_script_mng(this);
  psVar3 = (string *)EventClassify::CEventScriptMng::get_db_table_name(this_00,0x199);
  std::string::string((string *)&local_1c,psVar3);
                    /* try { // try from 08441b22 to 08441be4 has its CatchHandler @ 08441bfa */
  uVar4 = NumberToString(local_14,0);
  uVar1 = local_18;
  pTVar5 = toTString(&local_1c);
  MySQL::set_query(local_10,"upDate %s set fatigue_quantity=fatigue_quantity+%d where m_id=%s",
                   pTVar5,uVar1,uVar4);
  cVar2 = MySQL::exec(local_10,true);
  if (cVar2 == '\x01') {
    lVar6 = MySQL::getAffectedRowCount(local_10);
    uVar1 = local_18;
    if (lVar6 == 0) {
      uVar4 = NumberToString(local_14,0);
      pTVar5 = toTString(&local_1c);
      MySQL::set_query(local_10,"inSert into %s(m_id, fatigue_quantity) values(%s, %d)",pTVar5,uVar4
                       ,uVar1);
      cVar2 = MySQL::exec(local_10,true);
      if (cVar2 != '\x01') {
        uVar4 = 0;
        goto LAB_08441c15;
      }
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
LAB_08441c15:
  std::string::~string((string *)&local_1c);
  return uVar4;
}

```

---

## makeRequest

```asm
// === 08441c2a DB_UpdateUserFatigueQuantity::makeRequest  [0x08441c2a-0x8441d1b] ===
 8441c2a:	55                   	push   %ebp
 8441c2b:	89 e5                	mov    %esp,%ebp
 8441c2d:	56                   	push   %esi
 8441c2e:	53                   	push   %ebx
 8441c2f:	83 ec 20             	sub    $0x20,%esp
 8441c32:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8441c37:	c7 44 24 08 4c a1 00 	movl   $0xa14c,0x8(%esp)
 8441c3e:	00 
 8441c3f:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8441c46:	08 
 8441c47:	89 04 24             	mov    %eax,(%esp)
 8441c4a:	e8 37 de e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8441c4f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8441c56:	00 
 8441c57:	89 44 24 04          	mov    %eax,0x4(%esp)
 8441c5b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8441c5e:	89 04 24             	mov    %eax,(%esp)
 8441c61:	e8 c0 6f c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8441c66:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8441c69:	89 04 24             	mov    %eax,(%esp)
 8441c6c:	e8 d5 6f c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8441c71:	c7 44 24 04 87 02 00 	movl   $0x287,0x4(%esp)
 8441c78:	00 
 8441c79:	89 04 24             	mov    %eax,(%esp)
 8441c7c:	e8 d5 6f c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8441c81:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8441c84:	89 04 24             	mov    %eax,(%esp)
 8441c87:	e8 ba 6f c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8441c8c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8441c93:	ff 
 8441c94:	89 04 24             	mov    %eax,(%esp)
 8441c97:	e8 ba 6f c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8441c9c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8441c9f:	89 04 24             	mov    %eax,(%esp)
 8441ca2:	e8 9f 6f c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8441ca7:	8b 55 08             	mov    0x8(%ebp),%edx
 8441caa:	89 54 24 04          	mov    %edx,0x4(%esp)
 8441cae:	89 04 24             	mov    %eax,(%esp)
 8441cb1:	e8 dc 05 ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8441cb6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8441cb9:	89 04 24             	mov    %eax,(%esp)
 8441cbc:	e8 85 6f c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8441cc1:	8b 55 0c             	mov    0xc(%ebp),%edx
 8441cc4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8441cc8:	89 04 24             	mov    %eax,(%esp)
 8441ccb:	e8 c2 05 ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8441cd0:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8441cd5:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8441cd8:	89 54 24 08          	mov    %edx,0x8(%esp)
 8441cdc:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8441ce3:	00 
 8441ce4:	89 04 24             	mov    %eax,(%esp)
 8441ce7:	e8 f2 f2 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8441cec:	eb 1b                	jmp    8441d09 <_ZN28DB_UpdateUserFatigueQuantity11makeRequestEjj+0xdf>
 8441cee:	89 d3                	mov    %edx,%ebx
 8441cf0:	89 c6                	mov    %eax,%esi
 8441cf2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8441cf5:	89 04 24             	mov    %eax,(%esp)
 8441cf8:	e8 d5 ab 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8441cfd:	89 f0                	mov    %esi,%eax
 8441cff:	89 da                	mov    %ebx,%edx
 8441d01:	89 04 24             	mov    %eax,(%esp)
 8441d04:	e8 47 1a 6a 00       	call   8ae3750 <_Unwind_Resume>
 8441d09:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8441d0c:	89 04 24             	mov    %eax,(%esp)
 8441d0f:	e8 be ab 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8441d14:	83 c4 20             	add    $0x20,%esp
 8441d17:	5b                   	pop    %ebx
 8441d18:	5e                   	pop    %esi
 8441d19:	5d                   	pop    %ebp
 8441d1a:	c3                   	ret
 8441d1b:	90                   	nop

```

```c
// DB_UpdateUserFatigueQuantity::makeRequest @ 0x8441c2a

/* DB_UpdateUserFatigueQuantity::makeRequest(unsigned int, unsigned int) */

void DB_UpdateUserFatigueQuantity::makeRequest(uint param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xa14c);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08441c7c to 08441ceb has its CatchHandler @ 08441cee */
  CStreamGuard::operator<<(pCVar2,0x287);
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

