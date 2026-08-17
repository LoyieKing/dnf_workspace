# DB_SecurityCardActivate

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0842b86c DB_SecurityCardActivate::dispatch  [0x0842b86c-0x842bb5b] ===
 842b86c:	55                   	push   %ebp
 842b86d:	89 e5                	mov    %esp,%ebp
 842b86f:	57                   	push   %edi
 842b870:	56                   	push   %esi
 842b871:	53                   	push   %ebx
 842b872:	83 ec 3c             	sub    $0x3c,%esp
 842b875:	8b 45 14             	mov    0x14(%ebp),%eax
 842b878:	89 04 24             	mov    %eax,(%esp)
 842b87b:	e8 08 6e 02 00       	call   8452688 <_ZN6Stream12GetOutBufferI26SIG_SECURITY_CARD_ACTIVATEEEPT_v>
 842b880:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 842b883:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842b888:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842b88f:	00 
 842b890:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 842b897:	00 
 842b898:	89 04 24             	mov    %eax,(%esp)
 842b89b:	e8 9e 99 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842b8a0:	89 45 d8             	mov    %eax,-0x28(%ebp)
 842b8a3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842b8a6:	8d 78 04             	lea    0x4(%eax),%edi
 842b8a9:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842b8ac:	8b 00                	mov    (%eax),%eax
 842b8ae:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842b8b5:	00 
 842b8b6:	89 04 24             	mov    %eax,(%esp)
 842b8b9:	e8 8d d7 cd ff       	call   810904b <_Z14NumberToStringji>
 842b8be:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 842b8c2:	89 44 24 08          	mov    %eax,0x8(%esp)
 842b8c6:	c7 44 24 04 84 ff c4 	movl   $0x8c4ff84,0x4(%esp)
 842b8cd:	08 
 842b8ce:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842b8d1:	89 04 24             	mov    %eax,(%esp)
 842b8d4:	e8 e7 88 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842b8d9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842b8e0:	00 
 842b8e1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842b8e4:	89 04 24             	mov    %eax,(%esp)
 842b8e7:	e8 3a 8a fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842b8ec:	c6 45 df 00          	movb   $0x0,-0x21(%ebp)
 842b8f0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842b8f3:	89 04 24             	mov    %eax,(%esp)
 842b8f6:	e8 15 8a fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 842b8fb:	89 c3                	mov    %eax,%ebx
 842b8fd:	83 f3 01             	xor    $0x1,%ebx
 842b900:	89 d6                	mov    %edx,%esi
 842b902:	83 f6 00             	xor    $0x0,%esi
 842b905:	89 d8                	mov    %ebx,%eax
 842b907:	09 f0                	or     %esi,%eax
 842b909:	85 c0                	test   %eax,%eax
 842b90b:	0f 94 c0             	sete   %al
 842b90e:	84 c0                	test   %al,%al
 842b910:	74 18                	je     842b92a <_ZN23DB_SecurityCardActivate8dispatchEiiP6Stream+0xbe>
 842b912:	c6 45 df 01          	movb   $0x1,-0x21(%ebp)
 842b916:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842b919:	8b 00                	mov    (%eax),%eax
 842b91b:	89 44 24 04          	mov    %eax,0x4(%esp)
 842b91f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842b922:	89 04 24             	mov    %eax,(%esp)
 842b925:	e8 66 f5 ff ff       	call   842ae90 <_Z18turnOnSecurityFlagP5MySQLj>
 842b92a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842b92d:	8b 00                	mov    (%eax),%eax
 842b92f:	8b 55 10             	mov    0x10(%ebp),%edx
 842b932:	89 54 24 04          	mov    %edx,0x4(%esp)
 842b936:	89 04 24             	mov    %eax,(%esp)
 842b939:	e8 e0 ba 00 00       	call   843741e <_ZN28DB_CancelRestingUserRestrict11makeRequestEji>
 842b93e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842b941:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 842b945:	84 c0                	test   %al,%al
 842b947:	74 1e                	je     842b967 <_ZN23DB_SecurityCardActivate8dispatchEiiP6Stream+0xfb>
 842b949:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842b94c:	8b 00                	mov    (%eax),%eax
 842b94e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842b955:	00 
 842b956:	89 44 24 04          	mov    %eax,0x4(%esp)
 842b95a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842b95d:	89 04 24             	mov    %eax,(%esp)
 842b960:	e8 da f4 ff ff       	call   842ae3f <_Z23saveSecurityCardHistoryP5MySQLj26ENUM_SECURITYCARD_MOD_TYPE>
 842b965:	eb 1c                	jmp    842b983 <_ZN23DB_SecurityCardActivate8dispatchEiiP6Stream+0x117>
 842b967:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842b96a:	8b 00                	mov    (%eax),%eax
 842b96c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842b973:	00 
 842b974:	89 44 24 04          	mov    %eax,0x4(%esp)
 842b978:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842b97b:	89 04 24             	mov    %eax,(%esp)
 842b97e:	e8 bc f4 ff ff       	call   842ae3f <_Z23saveSecurityCardHistoryP5MySQLj26ENUM_SECURITYCARD_MOD_TYPE>
 842b983:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842b988:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842b98f:	00 
 842b990:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842b997:	00 
 842b998:	89 04 24             	mov    %eax,(%esp)
 842b99b:	e8 9e 98 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842b9a0:	89 45 e0             	mov    %eax,-0x20(%ebp)
 842b9a3:	80 7d df 00          	cmpb   $0x0,-0x21(%ebp)
 842b9a7:	0f 84 d3 00 00 00    	je     842ba80 <_ZN23DB_SecurityCardActivate8dispatchEiiP6Stream+0x214>
 842b9ad:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842b9b0:	8b 00                	mov    (%eax),%eax
 842b9b2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842b9b9:	00 
 842b9ba:	89 04 24             	mov    %eax,(%esp)
 842b9bd:	e8 89 d6 cd ff       	call   810904b <_Z14NumberToStringji>
 842b9c2:	89 44 24 08          	mov    %eax,0x8(%esp)
 842b9c6:	c7 44 24 04 ec ff c4 	movl   $0x8c4ffec,0x4(%esp)
 842b9cd:	08 
 842b9ce:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842b9d1:	89 04 24             	mov    %eax,(%esp)
 842b9d4:	e8 e7 87 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842b9d9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842b9e0:	00 
 842b9e1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842b9e4:	89 04 24             	mov    %eax,(%esp)
 842b9e7:	e8 3a 89 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842b9ec:	83 f0 01             	xor    $0x1,%eax
 842b9ef:	84 c0                	test   %al,%al
 842b9f1:	75 11                	jne    842ba04 <_ZN23DB_SecurityCardActivate8dispatchEiiP6Stream+0x198>
 842b9f3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842b9f6:	89 04 24             	mov    %eax,(%esp)
 842b9f9:	e8 12 89 fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 842b9fe:	09 d0                	or     %edx,%eax
 842ba00:	85 c0                	test   %eax,%eax
 842ba02:	75 07                	jne    842ba0b <_ZN23DB_SecurityCardActivate8dispatchEiiP6Stream+0x19f>
 842ba04:	b8 01 00 00 00       	mov    $0x1,%eax
 842ba09:	eb 05                	jmp    842ba10 <_ZN23DB_SecurityCardActivate8dispatchEiiP6Stream+0x1a4>
 842ba0b:	b8 00 00 00 00       	mov    $0x0,%eax
 842ba10:	84 c0                	test   %al,%al
 842ba12:	74 50                	je     842ba64 <_ZN23DB_SecurityCardActivate8dispatchEiiP6Stream+0x1f8>
 842ba14:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842ba17:	8b 00                	mov    (%eax),%eax
 842ba19:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842ba20:	00 
 842ba21:	89 04 24             	mov    %eax,(%esp)
 842ba24:	e8 22 d6 cd ff       	call   810904b <_Z14NumberToStringji>
 842ba29:	89 44 24 08          	mov    %eax,0x8(%esp)
 842ba2d:	c7 44 24 04 34 00 c5 	movl   $0x8c50034,0x4(%esp)
 842ba34:	08 
 842ba35:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842ba38:	89 04 24             	mov    %eax,(%esp)
 842ba3b:	e8 80 87 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842ba40:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842ba47:	00 
 842ba48:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842ba4b:	89 04 24             	mov    %eax,(%esp)
 842ba4e:	e8 d3 88 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842ba53:	83 f0 01             	xor    $0x1,%eax
 842ba56:	84 c0                	test   %al,%al
 842ba58:	74 0a                	je     842ba64 <_ZN23DB_SecurityCardActivate8dispatchEiiP6Stream+0x1f8>
 842ba5a:	bb 00 00 00 00       	mov    $0x0,%ebx
 842ba5f:	e9 ee 00 00 00       	jmp    842bb52 <_ZN23DB_SecurityCardActivate8dispatchEiiP6Stream+0x2e6>
 842ba64:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842ba67:	8b 00                	mov    (%eax),%eax
 842ba69:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842ba70:	00 
 842ba71:	89 44 24 04          	mov    %eax,0x4(%esp)
 842ba75:	8b 45 10             	mov    0x10(%ebp),%eax
 842ba78:	89 04 24             	mov    %eax,(%esp)
 842ba7b:	e8 88 89 01 00       	call   8444408 <_ZN18DB_CheckSecuReward11makeRequestEiji>
 842ba80:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842ba85:	c7 44 24 08 89 6e 00 	movl   $0x6e89,0x8(%esp)
 842ba8c:	00 
 842ba8d:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842ba94:	08 
 842ba95:	89 04 24             	mov    %eax,(%esp)
 842ba98:	e8 e9 3f e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842ba9d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842baa4:	00 
 842baa5:	89 44 24 04          	mov    %eax,0x4(%esp)
 842baa9:	8d 45 cc             	lea    -0x34(%ebp),%eax
 842baac:	89 04 24             	mov    %eax,(%esp)
 842baaf:	e8 72 d1 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842bab4:	8d 45 cc             	lea    -0x34(%ebp),%eax
 842bab7:	89 04 24             	mov    %eax,(%esp)
 842baba:	e8 87 d1 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842babf:	c7 44 24 04 ff 00 00 	movl   $0xff,0x4(%esp)
 842bac6:	00 
 842bac7:	89 04 24             	mov    %eax,(%esp)
 842baca:	e8 87 d1 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842bacf:	8d 45 cc             	lea    -0x34(%ebp),%eax
 842bad2:	89 04 24             	mov    %eax,(%esp)
 842bad5:	e8 6c d1 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842bada:	8b 55 10             	mov    0x10(%ebp),%edx
 842badd:	89 54 24 04          	mov    %edx,0x4(%esp)
 842bae1:	89 04 24             	mov    %eax,(%esp)
 842bae4:	e8 6d d1 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842bae9:	8d 45 cc             	lea    -0x34(%ebp),%eax
 842baec:	89 04 24             	mov    %eax,(%esp)
 842baef:	e8 5a d1 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 842baf4:	89 04 24             	mov    %eax,(%esp)
 842baf7:	e8 e0 6b 02 00       	call   84526dc <_ZN12CStreamGuard11GetInBufferI26SIG_SECURITY_CARD_ACTIVATEEEPT_v>
 842bafc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 842baff:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842bb02:	0f b6 55 df          	movzbl -0x21(%ebp),%edx
 842bb06:	88 50 0a             	mov    %dl,0xa(%eax)
 842bb09:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842bb0e:	8d 55 cc             	lea    -0x34(%ebp),%edx
 842bb11:	89 54 24 08          	mov    %edx,0x8(%esp)
 842bb15:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842bb1c:	00 
 842bb1d:	89 04 24             	mov    %eax,(%esp)
 842bb20:	e8 b9 54 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842bb25:	bb 01 00 00 00       	mov    $0x1,%ebx
 842bb2a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 842bb2d:	89 04 24             	mov    %eax,(%esp)
 842bb30:	e8 9d 0d 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842bb35:	eb 1b                	jmp    842bb52 <_ZN23DB_SecurityCardActivate8dispatchEiiP6Stream+0x2e6>
 842bb37:	89 d3                	mov    %edx,%ebx
 842bb39:	89 c6                	mov    %eax,%esi
 842bb3b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 842bb3e:	89 04 24             	mov    %eax,(%esp)
 842bb41:	e8 8c 0d 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842bb46:	89 f0                	mov    %esi,%eax
 842bb48:	89 da                	mov    %ebx,%edx
 842bb4a:	89 04 24             	mov    %eax,(%esp)
 842bb4d:	e8 fe 7b 6b 00       	call   8ae3750 <_Unwind_Resume>
 842bb52:	89 d8                	mov    %ebx,%eax
 842bb54:	83 c4 3c             	add    $0x3c,%esp
 842bb57:	5b                   	pop    %ebx
 842bb58:	5e                   	pop    %esi
 842bb59:	5f                   	pop    %edi
 842bb5a:	5d                   	pop    %ebp
 842bb5b:	c3                   	ret

```

```c
// DB_SecurityCardActivate::dispatch @ 0x842b86c

/* DB_SecurityCardActivate::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_SecurityCardActivate::dispatch
          (DB_SecurityCardActivate *this,int param_1,int param_2,Stream *param_3)

{
  SIG_SECURITY_CARD_ACTIVATE *pSVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  Stream *pSVar5;
  CStreamGuard *pCVar6;
  longlong lVar7;
  CStreamGuard local_38 [8];
  SIG_SECURITY_CARD_ACTIVATE *local_30;
  MySQL *local_2c;
  SIG_SECURITY_CARD_ACTIVATE local_25;
  MySQL *local_24;
  SIG_SECURITY_CARD_ACTIVATE *local_20;
  
  local_30 = Stream::GetOutBuffer<SIG_SECURITY_CARD_ACTIVATE>(param_3);
  local_2c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  pSVar1 = local_30 + 4;
  uVar4 = NumberToString(*(uint *)local_30,0);
  MySQL::set_query(local_2c,
                   "upDate member_security_card set apply_flag=1, cert_flag=1, cert_cnt = 0 where m_id=%s and cert_key=\'%s\'"
                   ,uVar4,pSVar1);
  MySQL::exec(local_2c,true);
  local_25 = (SIG_SECURITY_CARD_ACTIVATE)0x0;
  lVar7 = MySQL::getAffectedRowCount(local_2c);
  if (lVar7 == 1) {
    local_25 = (SIG_SECURITY_CARD_ACTIVATE)0x1;
    turnOnSecurityFlag(local_2c,*(uint *)local_30);
  }
  DB_CancelRestingUserRestrict::makeRequest(*(uint *)local_30,param_2);
  if (local_30[0xb] == (SIG_SECURITY_CARD_ACTIVATE)0x0) {
    saveSecurityCardHistory(local_2c,*(uint *)local_30,0);
  }
  else {
    saveSecurityCardHistory(local_2c,*(uint *)local_30,1);
  }
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  if (local_25 != (SIG_SECURITY_CARD_ACTIVATE)0x0) {
    uVar4 = NumberToString(*(uint *)local_30,0);
    MySQL::set_query(local_24,
                     "upDate member_security_grade set security_card_reg=now() where m_id=%s",uVar4)
    ;
    cVar3 = MySQL::exec(local_24,true);
    if ((cVar3 == '\x01') && (lVar7 = MySQL::getAffectedRowCount(local_24), lVar7 != 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar4 = NumberToString(*(uint *)local_30,0);
      MySQL::set_query(local_24,
                       "inSert into member_security_grade(m_id, security_card_reg) values(%s, now())"
                       ,uVar4);
      cVar3 = MySQL::exec(local_24,true);
      if (cVar3 != '\x01') {
        return 0;
      }
    }
    DB_CheckSecuReward::makeRequest(param_2,*(uint *)local_30,0);
  }
  pSVar5 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6e89);
  CStreamGuard::CStreamGuard(local_38,pSVar5,true);
  pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_38);
                    /* try { // try from 0842baca to 0842bb24 has its CatchHandler @ 0842bb37 */
  CStreamGuard::operator<<(pCVar6,0xff);
  pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_38);
  CStreamGuard::operator<<(pCVar6,param_2);
  pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_38);
  local_20 = CStreamGuard::GetInBuffer<SIG_SECURITY_CARD_ACTIVATE>(pCVar6);
  local_20[10] = local_25;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_38);
  CStreamGuard::~CStreamGuard(local_38);
  return 1;
}

```

---

## makeRequest

```asm
// === 0842bb5c DB_SecurityCardActivate::makeRequest  [0x0842bb5c-0x842bc63] ===
 842bb5c:	55                   	push   %ebp
 842bb5d:	89 e5                	mov    %esp,%ebp
 842bb5f:	56                   	push   %esi
 842bb60:	53                   	push   %ebx
 842bb61:	83 ec 30             	sub    $0x30,%esp
 842bb64:	8b 45 14             	mov    0x14(%ebp),%eax
 842bb67:	88 45 e4             	mov    %al,-0x1c(%ebp)
 842bb6a:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842bb6f:	c7 44 24 08 99 6e 00 	movl   $0x6e99,0x8(%esp)
 842bb76:	00 
 842bb77:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842bb7e:	08 
 842bb7f:	89 04 24             	mov    %eax,(%esp)
 842bb82:	e8 ff 3e e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842bb87:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842bb8e:	00 
 842bb8f:	89 44 24 04          	mov    %eax,0x4(%esp)
 842bb93:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842bb96:	89 04 24             	mov    %eax,(%esp)
 842bb99:	e8 88 d0 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842bb9e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842bba1:	89 04 24             	mov    %eax,(%esp)
 842bba4:	e8 9d d0 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842bba9:	c7 44 24 04 ff 00 00 	movl   $0xff,0x4(%esp)
 842bbb0:	00 
 842bbb1:	89 04 24             	mov    %eax,(%esp)
 842bbb4:	e8 9d d0 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842bbb9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842bbbc:	89 04 24             	mov    %eax,(%esp)
 842bbbf:	e8 82 d0 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842bbc4:	8b 55 08             	mov    0x8(%ebp),%edx
 842bbc7:	89 54 24 04          	mov    %edx,0x4(%esp)
 842bbcb:	89 04 24             	mov    %eax,(%esp)
 842bbce:	e8 83 d0 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842bbd3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842bbd6:	89 04 24             	mov    %eax,(%esp)
 842bbd9:	e8 70 d0 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 842bbde:	89 04 24             	mov    %eax,(%esp)
 842bbe1:	e8 f6 6a 02 00       	call   84526dc <_ZN12CStreamGuard11GetInBufferI26SIG_SECURITY_CARD_ACTIVATEEEPT_v>
 842bbe6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842bbe9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842bbec:	8b 55 0c             	mov    0xc(%ebp),%edx
 842bbef:	89 10                	mov    %edx,(%eax)
 842bbf1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842bbf4:	8d 50 04             	lea    0x4(%eax),%edx
 842bbf7:	c7 44 24 08 06 00 00 	movl   $0x6,0x8(%esp)
 842bbfe:	00 
 842bbff:	8b 45 10             	mov    0x10(%ebp),%eax
 842bc02:	89 44 24 04          	mov    %eax,0x4(%esp)
 842bc06:	89 14 24             	mov    %edx,(%esp)
 842bc09:	e8 c2 1c c5 ff       	call   807d8d0 <strncpy@plt>
 842bc0e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842bc11:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 842bc15:	88 50 0b             	mov    %dl,0xb(%eax)
 842bc18:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842bc1d:	8d 55 ec             	lea    -0x14(%ebp),%edx
 842bc20:	89 54 24 08          	mov    %edx,0x8(%esp)
 842bc24:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 842bc2b:	00 
 842bc2c:	89 04 24             	mov    %eax,(%esp)
 842bc2f:	e8 aa 53 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842bc34:	eb 1b                	jmp    842bc51 <_ZN23DB_SecurityCardActivate11makeRequestEijPKcb+0xf5>
 842bc36:	89 d3                	mov    %edx,%ebx
 842bc38:	89 c6                	mov    %eax,%esi
 842bc3a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842bc3d:	89 04 24             	mov    %eax,(%esp)
 842bc40:	e8 8d 0c 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842bc45:	89 f0                	mov    %esi,%eax
 842bc47:	89 da                	mov    %ebx,%edx
 842bc49:	89 04 24             	mov    %eax,(%esp)
 842bc4c:	e8 ff 7a 6b 00       	call   8ae3750 <_Unwind_Resume>
 842bc51:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842bc54:	89 04 24             	mov    %eax,(%esp)
 842bc57:	e8 76 0c 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842bc5c:	83 c4 30             	add    $0x30,%esp
 842bc5f:	5b                   	pop    %ebx
 842bc60:	5e                   	pop    %esi
 842bc61:	5d                   	pop    %ebp
 842bc62:	c3                   	ret
 842bc63:	90                   	nop

```

```c
// DB_SecurityCardActivate::makeRequest @ 0x842bb5c

/* DB_SecurityCardActivate::makeRequest(int, unsigned int, char const*, bool) */

void DB_SecurityCardActivate::makeRequest(int param_1,uint param_2,char *param_3,bool param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SECURITY_CARD_ACTIVATE *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6e99);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842bbb4 to 0842bc33 has its CatchHandler @ 0842bc36 */
  CStreamGuard::operator<<(pCVar2,0xff);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SECURITY_CARD_ACTIVATE>(pCVar2);
  *(uint *)local_10 = param_2;
  strncpy((char *)(local_10 + 4),param_3,6);
  local_10[0xb] = (SIG_SECURITY_CARD_ACTIVATE)param_4;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

