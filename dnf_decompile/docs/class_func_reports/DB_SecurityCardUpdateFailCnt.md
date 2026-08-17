# DB_SecurityCardUpdateFailCnt

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0842bdda DB_SecurityCardUpdateFailCnt::dispatch  [0x0842bdda-0x842bfa9] ===
 842bdda:	55                   	push   %ebp
 842bddb:	89 e5                	mov    %esp,%ebp
 842bddd:	53                   	push   %ebx
 842bdde:	83 ec 44             	sub    $0x44,%esp
 842bde1:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842bde6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842bded:	00 
 842bdee:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 842bdf5:	00 
 842bdf6:	89 04 24             	mov    %eax,(%esp)
 842bdf9:	e8 40 94 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842bdfe:	89 45 ec             	mov    %eax,-0x14(%ebp)
 842be01:	8b 45 14             	mov    0x14(%ebp),%eax
 842be04:	89 04 24             	mov    %eax,(%esp)
 842be07:	e8 ba 5f 02 00       	call   8451dc6 <_ZN6Stream12GetOutBufferI33SIG_SECURITY_CARD_UPDATE_FAIL_CNTEEPT_v>
 842be0c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 842be0f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842be12:	8b 40 04             	mov    0x4(%eax),%eax
 842be15:	85 c0                	test   %eax,%eax
 842be17:	75 55                	jne    842be6e <_ZN28DB_SecurityCardUpdateFailCnt8dispatchEiiP6Stream+0x94>
 842be19:	c7 45 e7 00 00 00 00 	movl   $0x0,-0x19(%ebp)
 842be20:	c6 45 eb 00          	movb   $0x0,-0x15(%ebp)
 842be24:	8d 45 e7             	lea    -0x19(%ebp),%eax
 842be27:	89 04 24             	mov    %eax,(%esp)
 842be2a:	e8 3e 63 28 00       	call   86b216d <_Z28generateSecurityCardQuestionPc>
 842be2f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842be32:	8b 00                	mov    (%eax),%eax
 842be34:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842be3b:	00 
 842be3c:	89 04 24             	mov    %eax,(%esp)
 842be3f:	e8 07 d2 cd ff       	call   810904b <_Z14NumberToStringji>
 842be44:	8b 55 f0             	mov    -0x10(%ebp),%edx
 842be47:	8b 52 04             	mov    0x4(%edx),%edx
 842be4a:	89 44 24 10          	mov    %eax,0x10(%esp)
 842be4e:	8d 45 e7             	lea    -0x19(%ebp),%eax
 842be51:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842be55:	89 54 24 08          	mov    %edx,0x8(%esp)
 842be59:	c7 44 24 04 ec 00 c5 	movl   $0x8c500ec,0x4(%esp)
 842be60:	08 
 842be61:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842be64:	89 04 24             	mov    %eax,(%esp)
 842be67:	e8 54 83 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842be6c:	eb 36                	jmp    842bea4 <_ZN28DB_SecurityCardUpdateFailCnt8dispatchEiiP6Stream+0xca>
 842be6e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842be71:	8b 00                	mov    (%eax),%eax
 842be73:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842be7a:	00 
 842be7b:	89 04 24             	mov    %eax,(%esp)
 842be7e:	e8 c8 d1 cd ff       	call   810904b <_Z14NumberToStringji>
 842be83:	8b 55 f0             	mov    -0x10(%ebp),%edx
 842be86:	8b 52 04             	mov    0x4(%edx),%edx
 842be89:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842be8d:	89 54 24 08          	mov    %edx,0x8(%esp)
 842be91:	c7 44 24 04 48 01 c5 	movl   $0x8c50148,0x4(%esp)
 842be98:	08 
 842be99:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842be9c:	89 04 24             	mov    %eax,(%esp)
 842be9f:	e8 1c 83 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842bea4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842beab:	00 
 842beac:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842beaf:	89 04 24             	mov    %eax,(%esp)
 842beb2:	e8 6f 84 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842beb7:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842bebc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842bec3:	00 
 842bec4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842becb:	00 
 842becc:	89 04 24             	mov    %eax,(%esp)
 842becf:	e8 6a 93 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842bed4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842bed7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842beda:	8b 00                	mov    (%eax),%eax
 842bedc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842bee3:	00 
 842bee4:	89 04 24             	mov    %eax,(%esp)
 842bee7:	e8 5f d1 cd ff       	call   810904b <_Z14NumberToStringji>
 842beec:	8b 55 f0             	mov    -0x10(%ebp),%edx
 842beef:	8b 52 04             	mov    0x4(%edx),%edx
 842bef2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842bef6:	89 54 24 08          	mov    %edx,0x8(%esp)
 842befa:	c7 44 24 04 94 01 c5 	movl   $0x8c50194,0x4(%esp)
 842bf01:	08 
 842bf02:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842bf05:	89 04 24             	mov    %eax,(%esp)
 842bf08:	e8 b3 82 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842bf0d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842bf14:	00 
 842bf15:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842bf18:	89 04 24             	mov    %eax,(%esp)
 842bf1b:	e8 06 84 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842bf20:	83 f0 01             	xor    $0x1,%eax
 842bf23:	84 c0                	test   %al,%al
 842bf25:	75 11                	jne    842bf38 <_ZN28DB_SecurityCardUpdateFailCnt8dispatchEiiP6Stream+0x15e>
 842bf27:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842bf2a:	89 04 24             	mov    %eax,(%esp)
 842bf2d:	e8 de 83 fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 842bf32:	09 d0                	or     %edx,%eax
 842bf34:	85 c0                	test   %eax,%eax
 842bf36:	75 07                	jne    842bf3f <_ZN28DB_SecurityCardUpdateFailCnt8dispatchEiiP6Stream+0x165>
 842bf38:	b8 01 00 00 00       	mov    $0x1,%eax
 842bf3d:	eb 05                	jmp    842bf44 <_ZN28DB_SecurityCardUpdateFailCnt8dispatchEiiP6Stream+0x16a>
 842bf3f:	b8 00 00 00 00       	mov    $0x0,%eax
 842bf44:	84 c0                	test   %al,%al
 842bf46:	74 57                	je     842bf9f <_ZN28DB_SecurityCardUpdateFailCnt8dispatchEiiP6Stream+0x1c5>
 842bf48:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842bf4b:	8b 58 04             	mov    0x4(%eax),%ebx
 842bf4e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842bf51:	8b 00                	mov    (%eax),%eax
 842bf53:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842bf5a:	00 
 842bf5b:	89 04 24             	mov    %eax,(%esp)
 842bf5e:	e8 e8 d0 cd ff       	call   810904b <_Z14NumberToStringji>
 842bf63:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 842bf67:	89 44 24 08          	mov    %eax,0x8(%esp)
 842bf6b:	c7 44 24 04 e0 01 c5 	movl   $0x8c501e0,0x4(%esp)
 842bf72:	08 
 842bf73:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842bf76:	89 04 24             	mov    %eax,(%esp)
 842bf79:	e8 42 82 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842bf7e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842bf85:	00 
 842bf86:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842bf89:	89 04 24             	mov    %eax,(%esp)
 842bf8c:	e8 95 83 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842bf91:	83 f0 01             	xor    $0x1,%eax
 842bf94:	84 c0                	test   %al,%al
 842bf96:	74 07                	je     842bf9f <_ZN28DB_SecurityCardUpdateFailCnt8dispatchEiiP6Stream+0x1c5>
 842bf98:	b8 00 00 00 00       	mov    $0x0,%eax
 842bf9d:	eb 05                	jmp    842bfa4 <_ZN28DB_SecurityCardUpdateFailCnt8dispatchEiiP6Stream+0x1ca>
 842bf9f:	b8 01 00 00 00       	mov    $0x1,%eax
 842bfa4:	83 c4 44             	add    $0x44,%esp
 842bfa7:	5b                   	pop    %ebx
 842bfa8:	5d                   	pop    %ebp
 842bfa9:	c3                   	ret

```

```c
// DB_SecurityCardUpdateFailCnt::dispatch @ 0x842bdda

/* DB_SecurityCardUpdateFailCnt::dispatch(int, int, Stream*) */

undefined4 DB_SecurityCardUpdateFailCnt::dispatch(int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  Stream *in_stack_00000010;
  char local_1d [5];
  MySQL *local_18;
  SIG_SECURITY_CARD_UPDATE_FAIL_CNT *local_14;
  MySQL *local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_14 = Stream::GetOutBuffer<SIG_SECURITY_CARD_UPDATE_FAIL_CNT>(in_stack_00000010);
  if (*(int *)(local_14 + 4) == 0) {
    local_1d[0] = '\0';
    local_1d[1] = '\0';
    local_1d[2] = '\0';
    local_1d[3] = '\0';
    local_1d[4] = 0;
    generateSecurityCardQuestion(local_1d);
    uVar4 = NumberToString(*(uint *)local_14,0);
    MySQL::set_query(local_18,
                     "upDate member_security_card set fail_cnt=%d , q_pos = \'%s\' where m_id=%s and apply_flag=1"
                     ,*(uint *)(local_14 + 4),local_1d,uVar4);
  }
  else {
    uVar4 = NumberToString(*(uint *)local_14,0);
    MySQL::set_query(local_18,
                     "upDate member_security_card set fail_cnt=%d where m_id=%s and apply_flag=1",
                     *(uint *)(local_14 + 4),uVar4);
  }
  MySQL::exec(local_18,true);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar4 = NumberToString(*(uint *)local_14,0);
  MySQL::set_query(local_10,
                   "upDate member_security_grade set security_card_fail_cnt=%d where m_id=%s",
                   *(uint *)(local_14 + 4),uVar4);
  cVar3 = MySQL::exec(local_10,true);
  if ((cVar3 == '\x01') && (lVar5 = MySQL::getAffectedRowCount(local_10), lVar5 != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    uVar1 = *(uint *)(local_14 + 4);
    uVar4 = NumberToString(*(uint *)local_14,0);
    MySQL::set_query(local_10,
                     "inSert into member_security_grade(m_id, security_card_fail_cnt) values(%s, %d)"
                     ,uVar4,uVar1);
    cVar3 = MySQL::exec(local_10,true);
    if (cVar3 != '\x01') {
      return 0;
    }
  }
  return 1;
}

```

---

## makeRequest

```asm
// === 0842bfaa DB_SecurityCardUpdateFailCnt::makeRequest  [0x0842bfaa-0x842c08d] ===
 842bfaa:	55                   	push   %ebp
 842bfab:	89 e5                	mov    %esp,%ebp
 842bfad:	56                   	push   %esi
 842bfae:	53                   	push   %ebx
 842bfaf:	83 ec 20             	sub    $0x20,%esp
 842bfb2:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842bfb7:	c7 44 24 08 0b 6f 00 	movl   $0x6f0b,0x8(%esp)
 842bfbe:	00 
 842bfbf:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842bfc6:	08 
 842bfc7:	89 04 24             	mov    %eax,(%esp)
 842bfca:	e8 b7 3a e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842bfcf:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842bfd6:	00 
 842bfd7:	89 44 24 04          	mov    %eax,0x4(%esp)
 842bfdb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842bfde:	89 04 24             	mov    %eax,(%esp)
 842bfe1:	e8 40 cc c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842bfe6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842bfe9:	89 04 24             	mov    %eax,(%esp)
 842bfec:	e8 55 cc c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842bff1:	c7 44 24 04 01 01 00 	movl   $0x101,0x4(%esp)
 842bff8:	00 
 842bff9:	89 04 24             	mov    %eax,(%esp)
 842bffc:	e8 55 cc c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842c001:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842c004:	89 04 24             	mov    %eax,(%esp)
 842c007:	e8 3a cc c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842c00c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 842c013:	ff 
 842c014:	89 04 24             	mov    %eax,(%esp)
 842c017:	e8 3a cc c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842c01c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842c01f:	89 04 24             	mov    %eax,(%esp)
 842c022:	e8 27 cc c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 842c027:	89 04 24             	mov    %eax,(%esp)
 842c02a:	e8 eb 5d 02 00       	call   8451e1a <_ZN12CStreamGuard11GetInBufferI33SIG_SECURITY_CARD_UPDATE_FAIL_CNTEEPT_v>
 842c02f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842c032:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842c035:	8b 55 08             	mov    0x8(%ebp),%edx
 842c038:	89 10                	mov    %edx,(%eax)
 842c03a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842c03d:	8b 55 0c             	mov    0xc(%ebp),%edx
 842c040:	89 50 04             	mov    %edx,0x4(%eax)
 842c043:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842c048:	8d 55 ec             	lea    -0x14(%ebp),%edx
 842c04b:	89 54 24 08          	mov    %edx,0x8(%esp)
 842c04f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 842c056:	00 
 842c057:	89 04 24             	mov    %eax,(%esp)
 842c05a:	e8 7f 4f 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842c05f:	eb 1b                	jmp    842c07c <_ZN28DB_SecurityCardUpdateFailCnt11makeRequestEjj+0xd2>
 842c061:	89 d3                	mov    %edx,%ebx
 842c063:	89 c6                	mov    %eax,%esi
 842c065:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842c068:	89 04 24             	mov    %eax,(%esp)
 842c06b:	e8 62 08 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842c070:	89 f0                	mov    %esi,%eax
 842c072:	89 da                	mov    %ebx,%edx
 842c074:	89 04 24             	mov    %eax,(%esp)
 842c077:	e8 d4 76 6b 00       	call   8ae3750 <_Unwind_Resume>
 842c07c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842c07f:	89 04 24             	mov    %eax,(%esp)
 842c082:	e8 4b 08 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842c087:	83 c4 20             	add    $0x20,%esp
 842c08a:	5b                   	pop    %ebx
 842c08b:	5e                   	pop    %esi
 842c08c:	5d                   	pop    %ebp
 842c08d:	c3                   	ret

```

```c
// DB_SecurityCardUpdateFailCnt::makeRequest @ 0x842bfaa

/* DB_SecurityCardUpdateFailCnt::makeRequest(unsigned int, unsigned int) */

void DB_SecurityCardUpdateFailCnt::makeRequest(uint param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SECURITY_CARD_UPDATE_FAIL_CNT *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6f0b);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842bffc to 0842c05e has its CatchHandler @ 0842c061 */
  CStreamGuard::operator<<(pCVar2,0x101);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SECURITY_CARD_UPDATE_FAIL_CNT>(pCVar2);
  *(uint *)local_10 = param_1;
  *(uint *)(local_10 + 4) = param_2;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

