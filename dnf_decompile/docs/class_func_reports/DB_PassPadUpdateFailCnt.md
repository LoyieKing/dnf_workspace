# DB_PassPadUpdateFailCnt

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08423bc4 DB_PassPadUpdateFailCnt::dispatch  [0x08423bc4-0x8423eb3] ===
 8423bc4:	55                   	push   %ebp
 8423bc5:	89 e5                	mov    %esp,%ebp
 8423bc7:	53                   	push   %ebx
 8423bc8:	81 ec 94 00 00 00    	sub    $0x94,%esp
 8423bce:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8423bd3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8423bda:	00 
 8423bdb:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8423be2:	00 
 8423be3:	89 04 24             	mov    %eax,(%esp)
 8423be6:	e8 53 16 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8423beb:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8423bee:	8b 45 14             	mov    0x14(%ebp),%eax
 8423bf1:	89 04 24             	mov    %eax,(%esp)
 8423bf4:	e8 cd e1 02 00       	call   8451dc6 <_ZN6Stream12GetOutBufferI33SIG_SECURITY_CARD_UPDATE_FAIL_CNTEEPT_v>
 8423bf9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8423bfc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8423bff:	8b 00                	mov    (%eax),%eax
 8423c01:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8423c08:	00 
 8423c09:	89 04 24             	mov    %eax,(%esp)
 8423c0c:	e8 3a 54 ce ff       	call   810904b <_Z14NumberToStringji>
 8423c11:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8423c14:	8b 52 04             	mov    0x4(%edx),%edx
 8423c17:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8423c1b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8423c1f:	c7 44 24 04 e0 da c4 	movl   $0x8c4dae0,0x4(%esp)
 8423c26:	08 
 8423c27:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8423c2a:	89 04 24             	mov    %eax,(%esp)
 8423c2d:	e8 8e 05 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8423c32:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8423c39:	00 
 8423c3a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8423c3d:	89 04 24             	mov    %eax,(%esp)
 8423c40:	e8 e1 06 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8423c45:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8423c48:	8b 40 04             	mov    0x4(%eax),%eax
 8423c4b:	85 c0                	test   %eax,%eax
 8423c4d:	0f 84 6a 01 00 00    	je     8423dbd <_ZN23DB_PassPadUpdateFailCnt8dispatchEiiP6Stream+0x1f9>
 8423c53:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8423c56:	8b 00                	mov    (%eax),%eax
 8423c58:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8423c5f:	00 
 8423c60:	89 04 24             	mov    %eax,(%esp)
 8423c63:	e8 e3 53 ce ff       	call   810904b <_Z14NumberToStringji>
 8423c68:	89 44 24 08          	mov    %eax,0x8(%esp)
 8423c6c:	c7 44 24 04 18 da c4 	movl   $0x8c4da18,0x4(%esp)
 8423c73:	08 
 8423c74:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8423c77:	89 04 24             	mov    %eax,(%esp)
 8423c7a:	e8 41 05 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8423c7f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8423c86:	00 
 8423c87:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8423c8a:	89 04 24             	mov    %eax,(%esp)
 8423c8d:	e8 94 06 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8423c92:	83 f0 01             	xor    $0x1,%eax
 8423c95:	84 c0                	test   %al,%al
 8423c97:	75 21                	jne    8423cba <_ZN23DB_PassPadUpdateFailCnt8dispatchEiiP6Stream+0xf6>
 8423c99:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8423c9c:	89 04 24             	mov    %eax,(%esp)
 8423c9f:	e8 c8 e6 cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8423ca4:	85 c0                	test   %eax,%eax
 8423ca6:	74 12                	je     8423cba <_ZN23DB_PassPadUpdateFailCnt8dispatchEiiP6Stream+0xf6>
 8423ca8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8423cab:	89 04 24             	mov    %eax,(%esp)
 8423cae:	e8 09 08 fd ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8423cb3:	83 f0 01             	xor    $0x1,%eax
 8423cb6:	84 c0                	test   %al,%al
 8423cb8:	74 07                	je     8423cc1 <_ZN23DB_PassPadUpdateFailCnt8dispatchEiiP6Stream+0xfd>
 8423cba:	b8 01 00 00 00       	mov    $0x1,%eax
 8423cbf:	eb 05                	jmp    8423cc6 <_ZN23DB_PassPadUpdateFailCnt8dispatchEiiP6Stream+0x102>
 8423cc1:	b8 00 00 00 00       	mov    $0x0,%eax
 8423cc6:	84 c0                	test   %al,%al
 8423cc8:	74 0a                	je     8423cd4 <_ZN23DB_PassPadUpdateFailCnt8dispatchEiiP6Stream+0x110>
 8423cca:	b8 00 00 00 00       	mov    $0x0,%eax
 8423ccf:	e9 d6 01 00 00       	jmp    8423eaa <_ZN23DB_PassPadUpdateFailCnt8dispatchEiiP6Stream+0x2e6>
 8423cd4:	c7 44 24 0c 24 00 00 	movl   $0x24,0xc(%esp)
 8423cdb:	00 
 8423cdc:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8423cdf:	89 44 24 08          	mov    %eax,0x8(%esp)
 8423ce3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8423cea:	00 
 8423ceb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8423cee:	89 04 24             	mov    %eax,(%esp)
 8423cf1:	e8 f4 90 cc ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 8423cf6:	83 f0 01             	xor    $0x1,%eax
 8423cf9:	84 c0                	test   %al,%al
 8423cfb:	74 0a                	je     8423d07 <_ZN23DB_PassPadUpdateFailCnt8dispatchEiiP6Stream+0x143>
 8423cfd:	b8 00 00 00 00       	mov    $0x0,%eax
 8423d02:	e9 a3 01 00 00       	jmp    8423eaa <_ZN23DB_PassPadUpdateFailCnt8dispatchEiiP6Stream+0x2e6>
 8423d07:	c7 45 e2 00 00 00 00 	movl   $0x0,-0x1e(%ebp)
 8423d0e:	c7 45 e6 00 00 00 00 	movl   $0x0,-0x1a(%ebp)
 8423d15:	66 c7 45 ea 00 00    	movw   $0x0,-0x16(%ebp)
 8423d1b:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8423d22:	e8 77 7f ca ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8423d27:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8423d2a:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8423d2d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8423d31:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8423d34:	89 04 24             	mov    %eax,(%esp)
 8423d37:	e8 24 a6 c5 ff       	call   807e360 <localtime_r@plt>
 8423d3c:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8423d3f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8423d43:	c7 44 24 08 4d da c4 	movl   $0x8c4da4d,0x8(%esp)
 8423d4a:	08 
 8423d4b:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 8423d52:	00 
 8423d53:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 8423d56:	89 04 24             	mov    %eax,(%esp)
 8423d59:	e8 62 9e c5 ff       	call   807dbc0 <strftime@plt>
 8423d5e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8423d61:	8d 58 08             	lea    0x8(%eax),%ebx
 8423d64:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8423d67:	8b 00                	mov    (%eax),%eax
 8423d69:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8423d70:	00 
 8423d71:	89 04 24             	mov    %eax,(%esp)
 8423d74:	e8 d2 52 ce ff       	call   810904b <_Z14NumberToStringji>
 8423d79:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8423d7d:	c7 44 24 14 11 00 00 	movl   $0x11,0x14(%esp)
 8423d84:	00 
 8423d85:	8d 55 b8             	lea    -0x48(%ebp),%edx
 8423d88:	89 54 24 10          	mov    %edx,0x10(%esp)
 8423d8c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8423d90:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 8423d93:	89 44 24 08          	mov    %eax,0x8(%esp)
 8423d97:	c7 44 24 04 54 da c4 	movl   $0x8c4da54,0x4(%esp)
 8423d9e:	08 
 8423d9f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8423da2:	89 04 24             	mov    %eax,(%esp)
 8423da5:	e8 16 04 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8423daa:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8423db1:	00 
 8423db2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8423db5:	89 04 24             	mov    %eax,(%esp)
 8423db8:	e8 69 05 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8423dbd:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8423dc2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8423dc9:	00 
 8423dca:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8423dd1:	00 
 8423dd2:	89 04 24             	mov    %eax,(%esp)
 8423dd5:	e8 64 14 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8423dda:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8423ddd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8423de0:	8b 00                	mov    (%eax),%eax
 8423de2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8423de9:	00 
 8423dea:	89 04 24             	mov    %eax,(%esp)
 8423ded:	e8 59 52 ce ff       	call   810904b <_Z14NumberToStringji>
 8423df2:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8423df5:	8b 52 04             	mov    0x4(%edx),%edx
 8423df8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8423dfc:	89 54 24 08          	mov    %edx,0x8(%esp)
 8423e00:	c7 44 24 04 30 d6 c4 	movl   $0x8c4d630,0x4(%esp)
 8423e07:	08 
 8423e08:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8423e0b:	89 04 24             	mov    %eax,(%esp)
 8423e0e:	e8 ad 03 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8423e13:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8423e1a:	00 
 8423e1b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8423e1e:	89 04 24             	mov    %eax,(%esp)
 8423e21:	e8 00 05 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8423e26:	83 f0 01             	xor    $0x1,%eax
 8423e29:	84 c0                	test   %al,%al
 8423e2b:	75 11                	jne    8423e3e <_ZN23DB_PassPadUpdateFailCnt8dispatchEiiP6Stream+0x27a>
 8423e2d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8423e30:	89 04 24             	mov    %eax,(%esp)
 8423e33:	e8 d8 04 fd ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8423e38:	09 d0                	or     %edx,%eax
 8423e3a:	85 c0                	test   %eax,%eax
 8423e3c:	75 07                	jne    8423e45 <_ZN23DB_PassPadUpdateFailCnt8dispatchEiiP6Stream+0x281>
 8423e3e:	b8 01 00 00 00       	mov    $0x1,%eax
 8423e43:	eb 05                	jmp    8423e4a <_ZN23DB_PassPadUpdateFailCnt8dispatchEiiP6Stream+0x286>
 8423e45:	b8 00 00 00 00       	mov    $0x0,%eax
 8423e4a:	84 c0                	test   %al,%al
 8423e4c:	74 57                	je     8423ea5 <_ZN23DB_PassPadUpdateFailCnt8dispatchEiiP6Stream+0x2e1>
 8423e4e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8423e51:	8b 58 04             	mov    0x4(%eax),%ebx
 8423e54:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8423e57:	8b 00                	mov    (%eax),%eax
 8423e59:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8423e60:	00 
 8423e61:	89 04 24             	mov    %eax,(%esp)
 8423e64:	e8 e2 51 ce ff       	call   810904b <_Z14NumberToStringji>
 8423e69:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8423e6d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8423e71:	c7 44 24 04 74 d6 c4 	movl   $0x8c4d674,0x4(%esp)
 8423e78:	08 
 8423e79:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8423e7c:	89 04 24             	mov    %eax,(%esp)
 8423e7f:	e8 3c 03 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8423e84:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8423e8b:	00 
 8423e8c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8423e8f:	89 04 24             	mov    %eax,(%esp)
 8423e92:	e8 8f 04 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8423e97:	83 f0 01             	xor    $0x1,%eax
 8423e9a:	84 c0                	test   %al,%al
 8423e9c:	74 07                	je     8423ea5 <_ZN23DB_PassPadUpdateFailCnt8dispatchEiiP6Stream+0x2e1>
 8423e9e:	b8 00 00 00 00       	mov    $0x0,%eax
 8423ea3:	eb 05                	jmp    8423eaa <_ZN23DB_PassPadUpdateFailCnt8dispatchEiiP6Stream+0x2e6>
 8423ea5:	b8 01 00 00 00       	mov    $0x1,%eax
 8423eaa:	81 c4 94 00 00 00    	add    $0x94,%esp
 8423eb0:	5b                   	pop    %ebx
 8423eb1:	5d                   	pop    %ebp
 8423eb2:	c3                   	ret
 8423eb3:	90                   	nop

```

```c
// DB_PassPadUpdateFailCnt::dispatch @ 0x8423bc4

/* DB_PassPadUpdateFailCnt::dispatch(int, int, Stream*) */

undefined4 DB_PassPadUpdateFailCnt::dispatch(int param_1,int param_2,Stream *param_3)

{
  SIG_SECURITY_CARD_UPDATE_FAIL_CNT *pSVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  Stream *in_stack_00000010;
  tm local_78;
  char local_4c [36];
  time_t local_28;
  char local_22 [10];
  MySQL *local_18;
  SIG_SECURITY_CARD_UPDATE_FAIL_CNT *local_14;
  MySQL *local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_14 = Stream::GetOutBuffer<SIG_SECURITY_CARD_UPDATE_FAIL_CNT>(in_stack_00000010);
  uVar5 = NumberToString(*(uint *)local_14,0);
  MySQL::set_query(local_18,
                   "upDate member_mousepass set fail_cnt=%d where m_id=%s and enable_flag = \'1\'",
                   *(uint *)(local_14 + 4),uVar5);
  MySQL::exec(local_18,true);
  if (*(uint *)(local_14 + 4) != 0) {
    uVar6 = NumberToString(*(uint *)local_14,0);
    MySQL::set_query(local_18,"seLect mousepass from member_mousepass where m_id=%s",uVar6,uVar5);
    cVar4 = MySQL::exec(local_18,true);
    if (((cVar4 == '\x01') && (iVar7 = MySQL::get_n_rows(local_18), iVar7 != 0)) &&
       (cVar4 = MySQL::fetch(local_18), cVar4 == '\x01')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      return 0;
    }
    cVar4 = MySQL::get_str(local_18,0,local_4c,0x24);
    if (cVar4 != '\x01') {
      return 0;
    }
    local_22[0] = '\0';
    local_22[1] = '\0';
    local_22[2] = '\0';
    local_22[3] = '\0';
    local_22[4] = '\0';
    local_22[5] = '\0';
    local_22[6] = '\0';
    local_22[7] = '\0';
    local_22[8] = '\0';
    local_22[9] = '\0';
    local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    localtime_r(&local_28,&local_78);
    strftime(local_22,10,"%Y%m",&local_78);
    pSVar1 = local_14 + 8;
    uVar5 = NumberToString(*(uint *)local_14,0);
    MySQL::set_query(local_18,
                     "inSert into member_mousepass_history_%s (occ_time, m_id, pre_mousepass, modify_type, ip_info, port_info) values (now(),%s,\'%s\',%d,\'%s\',\'\')"
                     ,local_22,uVar5,local_4c,0x11,pSVar1);
    MySQL::exec(local_18,true);
  }
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar5 = NumberToString(*(uint *)local_14,0);
  MySQL::set_query(local_10,"upDate member_security_grade set goblin_fail_cnt=%d where m_id=%s",
                   *(uint *)(local_14 + 4),uVar5);
  cVar4 = MySQL::exec(local_10,true);
  if ((cVar4 == '\x01') && (lVar8 = MySQL::getAffectedRowCount(local_10), lVar8 != 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    uVar2 = *(uint *)(local_14 + 4);
    uVar5 = NumberToString(*(uint *)local_14,0);
    MySQL::set_query(local_10,
                     "inSert into member_security_grade(m_id, goblin_fail_cnt) values(%s, %d)",uVar5
                     ,uVar2);
    cVar4 = MySQL::exec(local_10,true);
    if (cVar4 != '\x01') {
      return 0;
    }
  }
  return 1;
}

```

---

## makeRequest

```asm
// === 08423eb4 DB_PassPadUpdateFailCnt::makeRequest  [0x08423eb4-0x8423fb5] ===
 8423eb4:	55                   	push   %ebp
 8423eb5:	89 e5                	mov    %esp,%ebp
 8423eb7:	56                   	push   %esi
 8423eb8:	53                   	push   %ebx
 8423eb9:	83 ec 20             	sub    $0x20,%esp
 8423ebc:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8423ec1:	c7 44 24 08 31 5f 00 	movl   $0x5f31,0x8(%esp)
 8423ec8:	00 
 8423ec9:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8423ed0:	08 
 8423ed1:	89 04 24             	mov    %eax,(%esp)
 8423ed4:	e8 ad bb e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8423ed9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8423ee0:	00 
 8423ee1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8423ee5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8423ee8:	89 04 24             	mov    %eax,(%esp)
 8423eeb:	e8 36 4d ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8423ef0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8423ef3:	89 04 24             	mov    %eax,(%esp)
 8423ef6:	e8 4b 4d ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8423efb:	c7 44 24 04 a4 00 00 	movl   $0xa4,0x4(%esp)
 8423f02:	00 
 8423f03:	89 04 24             	mov    %eax,(%esp)
 8423f06:	e8 4b 4d ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8423f0b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8423f0e:	89 04 24             	mov    %eax,(%esp)
 8423f11:	e8 30 4d ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8423f16:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8423f1d:	ff 
 8423f1e:	89 04 24             	mov    %eax,(%esp)
 8423f21:	e8 30 4d ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8423f26:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8423f29:	89 04 24             	mov    %eax,(%esp)
 8423f2c:	e8 1d 4d ca ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8423f31:	89 04 24             	mov    %eax,(%esp)
 8423f34:	e8 e1 de 02 00       	call   8451e1a <_ZN12CStreamGuard11GetInBufferI33SIG_SECURITY_CARD_UPDATE_FAIL_CNTEEPT_v>
 8423f39:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8423f3c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8423f3f:	8b 55 08             	mov    0x8(%ebp),%edx
 8423f42:	89 10                	mov    %edx,(%eax)
 8423f44:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8423f47:	8b 55 0c             	mov    0xc(%ebp),%edx
 8423f4a:	89 50 04             	mov    %edx,0x4(%eax)
 8423f4d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8423f50:	8d 50 08             	lea    0x8(%eax),%edx
 8423f53:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8423f5a:	00 
 8423f5b:	8b 45 10             	mov    0x10(%ebp),%eax
 8423f5e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8423f62:	89 14 24             	mov    %edx,(%esp)
 8423f65:	e8 66 99 c5 ff       	call   807d8d0 <strncpy@plt>
 8423f6a:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8423f6f:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8423f72:	89 54 24 08          	mov    %edx,0x8(%esp)
 8423f76:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8423f7d:	00 
 8423f7e:	89 04 24             	mov    %eax,(%esp)
 8423f81:	e8 58 d0 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8423f86:	eb 1b                	jmp    8423fa3 <_ZN23DB_PassPadUpdateFailCnt11makeRequestEjjPc+0xef>
 8423f88:	89 d3                	mov    %edx,%ebx
 8423f8a:	89 c6                	mov    %eax,%esi
 8423f8c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8423f8f:	89 04 24             	mov    %eax,(%esp)
 8423f92:	e8 3b 89 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8423f97:	89 f0                	mov    %esi,%eax
 8423f99:	89 da                	mov    %ebx,%edx
 8423f9b:	89 04 24             	mov    %eax,(%esp)
 8423f9e:	e8 ad f7 6b 00       	call   8ae3750 <_Unwind_Resume>
 8423fa3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8423fa6:	89 04 24             	mov    %eax,(%esp)
 8423fa9:	e8 24 89 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8423fae:	83 c4 20             	add    $0x20,%esp
 8423fb1:	5b                   	pop    %ebx
 8423fb2:	5e                   	pop    %esi
 8423fb3:	5d                   	pop    %ebp
 8423fb4:	c3                   	ret
 8423fb5:	90                   	nop

```

```c
// DB_PassPadUpdateFailCnt::makeRequest @ 0x8423eb4

/* DB_PassPadUpdateFailCnt::makeRequest(unsigned int, unsigned int, char*) */

void DB_PassPadUpdateFailCnt::makeRequest(uint param_1,uint param_2,char *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SECURITY_CARD_UPDATE_FAIL_CNT *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x5f31);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08423f06 to 08423f85 has its CatchHandler @ 08423f88 */
  CStreamGuard::operator<<(pCVar2,0xa4);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SECURITY_CARD_UPDATE_FAIL_CNT>(pCVar2);
  *(uint *)local_10 = param_1;
  *(uint *)(local_10 + 4) = param_2;
  strncpy((char *)(local_10 + 8),param_3,0x10);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

