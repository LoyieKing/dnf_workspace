# WongWork__EventCommon

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## InsertEventItem2EventTable

```asm
// === 083f9b54 WongWork::EventCommon::InsertEventItem2EventTable  [0x083f9b54-0x83f9c7a] ===
 83f9b54:	55                   	push   %ebp
 83f9b55:	89 e5                	mov    %esp,%ebp
 83f9b57:	83 ec 58             	sub    $0x58,%esp
 83f9b5a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 83f9b5f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83f9b66:	00 
 83f9b67:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 83f9b6e:	00 
 83f9b6f:	89 04 24             	mov    %eax,(%esp)
 83f9b72:	e8 c7 b6 ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 83f9b77:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83f9b7a:	8b 45 14             	mov    0x14(%ebp),%eax
 83f9b7d:	89 44 24 14          	mov    %eax,0x14(%esp)
 83f9b81:	8b 45 10             	mov    0x10(%ebp),%eax
 83f9b84:	89 44 24 10          	mov    %eax,0x10(%esp)
 83f9b88:	8b 45 0c             	mov    0xc(%ebp),%eax
 83f9b8b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 83f9b8f:	8b 45 08             	mov    0x8(%ebp),%eax
 83f9b92:	89 44 24 08          	mov    %eax,0x8(%esp)
 83f9b96:	c7 44 24 04 68 5b c3 	movl   $0x8c35b68,0x4(%esp)
 83f9b9d:	08 
 83f9b9e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83f9ba1:	89 04 24             	mov    %eax,(%esp)
 83f9ba4:	e8 17 a6 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 83f9ba9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83f9bb0:	00 
 83f9bb1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83f9bb4:	89 04 24             	mov    %eax,(%esp)
 83f9bb7:	e8 6a a7 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 83f9bbc:	83 f0 01             	xor    $0x1,%eax
 83f9bbf:	84 c0                	test   %al,%al
 83f9bc1:	74 59                	je     83f9c1c <_ZN8WongWork11EventCommon26InsertEventItem2EventTableEjjjj+0xc8>
 83f9bc3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 83f9bca:	00 
 83f9bcb:	c7 44 24 08 25 00 00 	movl   $0x25,0x8(%esp)
 83f9bd2:	00 
 83f9bd3:	c7 44 24 04 40 de c5 	movl   $0x8c5de40,0x4(%esp)
 83f9bda:	08 
 83f9bdb:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 83f9bde:	89 04 24             	mov    %eax,(%esp)
 83f9be1:	e8 32 5b 15 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83f9be6:	8b 45 14             	mov    0x14(%ebp),%eax
 83f9be9:	89 44 24 14          	mov    %eax,0x14(%esp)
 83f9bed:	8b 45 10             	mov    0x10(%ebp),%eax
 83f9bf0:	89 44 24 10          	mov    %eax,0x10(%esp)
 83f9bf4:	8b 45 0c             	mov    0xc(%ebp),%eax
 83f9bf7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 83f9bfb:	8b 45 08             	mov    0x8(%ebp),%eax
 83f9bfe:	89 44 24 08          	mov    %eax,0x8(%esp)
 83f9c02:	c7 44 24 04 d4 5b c3 	movl   $0x8c35bd4,0x4(%esp)
 83f9c09:	08 
 83f9c0a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 83f9c0d:	89 04 24             	mov    %eax,(%esp)
 83f9c10:	e8 73 5b 15 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83f9c15:	b8 00 00 00 00       	mov    $0x0,%eax
 83f9c1a:	eb 5d                	jmp    83f9c79 <_ZN8WongWork11EventCommon26InsertEventItem2EventTableEjjjj+0x125>
 83f9c1c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 83f9c23:	00 
 83f9c24:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 83f9c2b:	00 
 83f9c2c:	c7 44 24 04 40 de c5 	movl   $0x8c5de40,0x4(%esp)
 83f9c33:	08 
 83f9c34:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 83f9c37:	89 04 24             	mov    %eax,(%esp)
 83f9c3a:	e8 d9 5a 15 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83f9c3f:	8b 45 14             	mov    0x14(%ebp),%eax
 83f9c42:	89 44 24 14          	mov    %eax,0x14(%esp)
 83f9c46:	8b 45 10             	mov    0x10(%ebp),%eax
 83f9c49:	89 44 24 10          	mov    %eax,0x10(%esp)
 83f9c4d:	8b 45 0c             	mov    0xc(%ebp),%eax
 83f9c50:	89 44 24 0c          	mov    %eax,0xc(%esp)
 83f9c54:	8b 45 08             	mov    0x8(%ebp),%eax
 83f9c57:	89 44 24 08          	mov    %eax,0x8(%esp)
 83f9c5b:	c7 44 24 04 48 5c c3 	movl   $0x8c35c48,0x4(%esp)
 83f9c62:	08 
 83f9c63:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 83f9c66:	89 04 24             	mov    %eax,(%esp)
 83f9c69:	e8 1a 5b 15 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83f9c6e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83f9c71:	89 04 24             	mov    %eax,(%esp)
 83f9c74:	e8 5b fe ff ff       	call   83f9ad4 <_ZN8WongWork8DBCommon11GetIdentityEP5MySQL>
 83f9c79:	c9                   	leave
 83f9c7a:	c3                   	ret

```

```c
// WongWork::EventCommon::InsertEventItem2EventTable @ 0x83f9b54

/* WongWork::EventCommon::InsertEventItem2EventTable(unsigned int, unsigned int, unsigned int,
   unsigned int) */

undefined4
WongWork::EventCommon::InsertEventItem2EventTable
          (uint param_1,uint param_2,uint param_3,uint param_4)

{
  char cVar1;
  undefined4 uVar2;
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_10,
                   "inSert into charac_event_items(charac_no,it_id,stack_count,event_code,reg_time) values(%d,%d,%d,%d,now())"
                   ,param_1,param_2,param_3,param_4);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 == '\x01') {
    cMyTrace::cMyTrace(local_20,
                       "unsigned int WongWork::EventCommon::InsertEventItem2EventTable(unsigned int, unsigned int, unsigned int, unsigned int)"
                       ,0x28,0);
    cMyTrace::operator()
              (local_20,
               "SUCCESS : insert into charac_event_items(charac_no,it_id,stack_count,event_code,reg_time) values(%d,%d,%d,%d,now())"
               ,param_1,param_2,param_3,param_4);
    uVar2 = DBCommon::GetIdentity(local_10);
  }
  else {
    cMyTrace::cMyTrace(local_30,
                       "unsigned int WongWork::EventCommon::InsertEventItem2EventTable(unsigned int, unsigned int, unsigned int, unsigned int)"
                       ,0x25,0);
    cMyTrace::operator()
              (local_30,
               "FAIL : insert into charac_event_items(charac_no,it_id,stack_count,event_code,reg_time) values(%d,%d,%d,%d,now())"
               ,param_1,param_2,param_3,param_4);
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## LoadCharacEventItem

```asm
// === 083f9c7b WongWork::EventCommon::LoadCharacEventItem  [0x083f9c7b-0x83f9f2d] ===
 83f9c7b:	55                   	push   %ebp
 83f9c7c:	89 e5                	mov    %esp,%ebp
 83f9c7e:	56                   	push   %esi
 83f9c7f:	53                   	push   %ebx
 83f9c80:	83 ec 40             	sub    $0x40,%esp
 83f9c83:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 83f9c88:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83f9c8f:	00 
 83f9c90:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 83f9c97:	00 
 83f9c98:	89 04 24             	mov    %eax,(%esp)
 83f9c9b:	e8 9e b5 ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 83f9ca0:	89 45 e8             	mov    %eax,-0x18(%ebp)
 83f9ca3:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 83f9ca7:	75 24                	jne    83f9ccd <_ZN8WongWork11EventCommon19LoadCharacEventItemEjjj+0x52>
 83f9ca9:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 83f9cb0:	00 
 83f9cb1:	8b 45 0c             	mov    0xc(%ebp),%eax
 83f9cb4:	89 44 24 08          	mov    %eax,0x8(%esp)
 83f9cb8:	c7 44 24 04 bc 5c c3 	movl   $0x8c35cbc,0x4(%esp)
 83f9cbf:	08 
 83f9cc0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83f9cc3:	89 04 24             	mov    %eax,(%esp)
 83f9cc6:	e8 f5 a4 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 83f9ccb:	eb 31                	jmp    83f9cfe <_ZN8WongWork11EventCommon19LoadCharacEventItemEjjj+0x83>
 83f9ccd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83f9cd4:	00 
 83f9cd5:	8b 45 10             	mov    0x10(%ebp),%eax
 83f9cd8:	89 04 24             	mov    %eax,(%esp)
 83f9cdb:	e8 6b f3 d0 ff       	call   810904b <_Z14NumberToStringji>
 83f9ce0:	8b 55 0c             	mov    0xc(%ebp),%edx
 83f9ce3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 83f9ce7:	89 44 24 08          	mov    %eax,0x8(%esp)
 83f9ceb:	c7 44 24 04 2c 5d c3 	movl   $0x8c35d2c,0x4(%esp)
 83f9cf2:	08 
 83f9cf3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83f9cf6:	89 04 24             	mov    %eax,(%esp)
 83f9cf9:	e8 c2 a4 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 83f9cfe:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83f9d05:	00 
 83f9d06:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83f9d09:	89 04 24             	mov    %eax,(%esp)
 83f9d0c:	e8 15 a6 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 83f9d11:	83 f0 01             	xor    $0x1,%eax
 83f9d14:	84 c0                	test   %al,%al
 83f9d16:	74 42                	je     83f9d5a <_ZN8WongWork11EventCommon19LoadCharacEventItemEjjj+0xdf>
 83f9d18:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 83f9d1f:	00 
 83f9d20:	c7 44 24 08 37 00 00 	movl   $0x37,0x8(%esp)
 83f9d27:	00 
 83f9d28:	c7 44 24 04 c0 dd c5 	movl   $0x8c5ddc0,0x4(%esp)
 83f9d2f:	08 
 83f9d30:	8d 45 d8             	lea    -0x28(%ebp),%eax
 83f9d33:	89 04 24             	mov    %eax,(%esp)
 83f9d36:	e8 dd 59 15 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83f9d3b:	8b 45 0c             	mov    0xc(%ebp),%eax
 83f9d3e:	89 44 24 08          	mov    %eax,0x8(%esp)
 83f9d42:	c7 44 24 04 88 5d c3 	movl   $0x8c35d88,0x4(%esp)
 83f9d49:	08 
 83f9d4a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 83f9d4d:	89 04 24             	mov    %eax,(%esp)
 83f9d50:	e8 33 5a 15 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83f9d55:	e9 cd 01 00 00       	jmp    83f9f27 <_ZN8WongWork11EventCommon19LoadCharacEventItemEjjj+0x2ac>
 83f9d5a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83f9d5d:	89 04 24             	mov    %eax,(%esp)
 83f9d60:	e8 07 86 ce ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 83f9d65:	85 c0                	test   %eax,%eax
 83f9d67:	0f 94 c0             	sete   %al
 83f9d6a:	84 c0                	test   %al,%al
 83f9d6c:	0f 85 b4 01 00 00    	jne    83f9f26 <_ZN8WongWork11EventCommon19LoadCharacEventItemEjjj+0x2ab>
 83f9d72:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 83f9d77:	c7 44 24 08 3e 00 00 	movl   $0x3e,0x8(%esp)
 83f9d7e:	00 
 83f9d7f:	c7 44 24 04 c0 5d c3 	movl   $0x8c35dc0,0x4(%esp)
 83f9d86:	08 
 83f9d87:	89 04 24             	mov    %eax,(%esp)
 83f9d8a:	e8 f7 5c e9 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 83f9d8f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 83f9d96:	00 
 83f9d97:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f9d9b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 83f9d9e:	89 04 24             	mov    %eax,(%esp)
 83f9da1:	e8 80 ee cc ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 83f9da6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 83f9da9:	89 04 24             	mov    %eax,(%esp)
 83f9dac:	e8 95 ee cc ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 83f9db1:	c7 44 24 04 4b 00 00 	movl   $0x4b,0x4(%esp)
 83f9db8:	00 
 83f9db9:	89 04 24             	mov    %eax,(%esp)
 83f9dbc:	e8 95 ee cc ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 83f9dc1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 83f9dc4:	89 04 24             	mov    %eax,(%esp)
 83f9dc7:	e8 7a ee cc ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 83f9dcc:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 83f9dd3:	ff 
 83f9dd4:	89 04 24             	mov    %eax,(%esp)
 83f9dd7:	e8 7a ee cc ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 83f9ddc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 83f9ddf:	89 04 24             	mov    %eax,(%esp)
 83f9de2:	e8 67 ee cc ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 83f9de7:	89 04 24             	mov    %eax,(%esp)
 83f9dea:	e8 67 64 05 00       	call   8450256 <_ZN12CStreamGuard11GetInBufferI18SIG_LOAD_EVENTITEMEEPT_v>
 83f9def:	89 45 ec             	mov    %eax,-0x14(%ebp)
 83f9df2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 83f9df5:	8b 55 08             	mov    0x8(%ebp),%edx
 83f9df8:	89 10                	mov    %edx,(%eax)
 83f9dfa:	8b 45 ec             	mov    -0x14(%ebp),%eax
 83f9dfd:	8b 55 0c             	mov    0xc(%ebp),%edx
 83f9e00:	89 50 04             	mov    %edx,0x4(%eax)
 83f9e03:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83f9e06:	89 04 24             	mov    %eax,(%esp)
 83f9e09:	e8 5e 85 ce ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 83f9e0e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 83f9e11:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 83f9e18:	e9 a6 00 00 00       	jmp    83f9ec3 <_ZN8WongWork11EventCommon19LoadCharacEventItemEjjj+0x248>
 83f9e1d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83f9e20:	89 04 24             	mov    %eax,(%esp)
 83f9e23:	e8 94 a6 ff ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 83f9e28:	83 f0 01             	xor    $0x1,%eax
 83f9e2b:	84 c0                	test   %al,%al
 83f9e2d:	0f 85 a3 00 00 00    	jne    83f9ed6 <_ZN8WongWork11EventCommon19LoadCharacEventItemEjjj+0x25b>
 83f9e33:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83f9e36:	c1 e0 04             	shl    $0x4,%eax
 83f9e39:	03 45 ec             	add    -0x14(%ebp),%eax
 83f9e3c:	83 c0 0c             	add    $0xc,%eax
 83f9e3f:	89 44 24 08          	mov    %eax,0x8(%esp)
 83f9e43:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83f9e4a:	00 
 83f9e4b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83f9e4e:	89 04 24             	mov    %eax,(%esp)
 83f9e51:	e8 9c 84 ce ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 83f9e56:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83f9e59:	c1 e0 04             	shl    $0x4,%eax
 83f9e5c:	03 45 ec             	add    -0x14(%ebp),%eax
 83f9e5f:	83 c0 10             	add    $0x10,%eax
 83f9e62:	89 44 24 08          	mov    %eax,0x8(%esp)
 83f9e66:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83f9e6d:	00 
 83f9e6e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83f9e71:	89 04 24             	mov    %eax,(%esp)
 83f9e74:	e8 79 84 ce ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 83f9e79:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83f9e7c:	c1 e0 04             	shl    $0x4,%eax
 83f9e7f:	03 45 ec             	add    -0x14(%ebp),%eax
 83f9e82:	83 c0 14             	add    $0x14,%eax
 83f9e85:	89 44 24 08          	mov    %eax,0x8(%esp)
 83f9e89:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 83f9e90:	00 
 83f9e91:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83f9e94:	89 04 24             	mov    %eax,(%esp)
 83f9e97:	e8 56 84 ce ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 83f9e9c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83f9e9f:	c1 e0 04             	shl    $0x4,%eax
 83f9ea2:	03 45 ec             	add    -0x14(%ebp),%eax
 83f9ea5:	83 c0 18             	add    $0x18,%eax
 83f9ea8:	89 44 24 08          	mov    %eax,0x8(%esp)
 83f9eac:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 83f9eb3:	00 
 83f9eb4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83f9eb7:	89 04 24             	mov    %eax,(%esp)
 83f9eba:	e8 33 84 ce ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 83f9ebf:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 83f9ec3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83f9ec6:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 83f9ec9:	0f 9c c0             	setl   %al
 83f9ecc:	84 c0                	test   %al,%al
 83f9ece:	0f 85 49 ff ff ff    	jne    83f9e1d <_ZN8WongWork11EventCommon19LoadCharacEventItemEjjj+0x1a2>
 83f9ed4:	eb 01                	jmp    83f9ed7 <_ZN8WongWork11EventCommon19LoadCharacEventItemEjjj+0x25c>
 83f9ed6:	90                   	nop
 83f9ed7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 83f9eda:	8b 55 f0             	mov    -0x10(%ebp),%edx
 83f9edd:	89 50 08             	mov    %edx,0x8(%eax)
 83f9ee0:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 83f9ee5:	8d 55 d0             	lea    -0x30(%ebp),%edx
 83f9ee8:	89 54 24 08          	mov    %edx,0x8(%esp)
 83f9eec:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83f9ef3:	00 
 83f9ef4:	89 04 24             	mov    %eax,(%esp)
 83f9ef7:	e8 e2 70 17 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 83f9efc:	eb 1b                	jmp    83f9f19 <_ZN8WongWork11EventCommon19LoadCharacEventItemEjjj+0x29e>
 83f9efe:	89 d3                	mov    %edx,%ebx
 83f9f00:	89 c6                	mov    %eax,%esi
 83f9f02:	8d 45 d0             	lea    -0x30(%ebp),%eax
 83f9f05:	89 04 24             	mov    %eax,(%esp)
 83f9f08:	e8 c5 29 22 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 83f9f0d:	89 f0                	mov    %esi,%eax
 83f9f0f:	89 da                	mov    %ebx,%edx
 83f9f11:	89 04 24             	mov    %eax,(%esp)
 83f9f14:	e8 37 98 6e 00       	call   8ae3750 <_Unwind_Resume>
 83f9f19:	8d 45 d0             	lea    -0x30(%ebp),%eax
 83f9f1c:	89 04 24             	mov    %eax,(%esp)
 83f9f1f:	e8 ae 29 22 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 83f9f24:	eb 01                	jmp    83f9f27 <_ZN8WongWork11EventCommon19LoadCharacEventItemEjjj+0x2ac>
 83f9f26:	90                   	nop
 83f9f27:	83 c4 40             	add    $0x40,%esp
 83f9f2a:	5b                   	pop    %ebx
 83f9f2b:	5e                   	pop    %esi
 83f9f2c:	5d                   	pop    %ebp
 83f9f2d:	c3                   	ret

```

```c
// WongWork::EventCommon::LoadCharacEventItem @ 0x83f9c7b

/* WongWork::EventCommon::LoadCharacEventItem(unsigned int, unsigned int, unsigned int) */

void WongWork::EventCommon::LoadCharacEventItem(uint param_1,uint param_2,uint param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  CStreamGuard local_34 [8];
  cMyTrace local_2c [16];
  MySQL *local_1c;
  SIG_LOAD_EVENTITEM *local_18;
  int local_14;
  int local_10;
  
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  if (param_3 == 0) {
    MySQL::set_query(local_1c,
                     "seLect id,it_id,stack_count,event_code from charac_event_items where charac_no=%d and delete_flag=0 limit %d"
                     ,param_2,5);
  }
  else {
    uVar2 = NumberToString(param_3,0);
    MySQL::set_query(local_1c,
                     "seLect id,it_id,stack_count,event_code from charac_event_items where id=%s and charac_no=%d"
                     ,uVar2,param_2);
  }
  cVar1 = MySQL::exec(local_1c,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_1c);
    if (iVar3 != 0) {
      pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBEventWork.inl",0x3e);
      CStreamGuard::CStreamGuard(local_34,pSVar4,true);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_34);
                    /* try { // try from 083f9dbc to 083f9efb has its CatchHandler @ 083f9efe */
      CStreamGuard::operator<<(pCVar5,0x4b);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_34);
      CStreamGuard::operator<<(pCVar5,-1);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_34);
      local_18 = CStreamGuard::GetInBuffer<SIG_LOAD_EVENTITEM>(pCVar5);
      *(uint *)local_18 = param_1;
      *(uint *)(local_18 + 4) = param_2;
      local_14 = MySQL::get_n_rows(local_1c);
      local_10 = 0;
      while ((local_10 < local_14 && (cVar1 = MySQL::fetch(local_1c), cVar1 == '\x01'))) {
        MySQL::get_uint(local_1c,0,(uint *)(local_18 + local_10 * 0x10 + 0xc));
        MySQL::get_uint(local_1c,1,(uint *)(local_18 + local_10 * 0x10 + 0x10));
        MySQL::get_uint(local_1c,2,(uint *)(local_18 + local_10 * 0x10 + 0x14));
        MySQL::get_uint(local_1c,3,(uint *)(local_18 + local_10 * 0x10 + 0x18));
        local_10 = local_10 + 1;
      }
      *(int *)(local_18 + 8) = local_14;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_34);
      CStreamGuard::~CStreamGuard(local_34);
    }
  }
  else {
    cMyTrace::cMyTrace(local_2c,
                       "void WongWork::EventCommon::LoadCharacEventItem(memberIdentificationNumber_t, unsigned int, memberIdentificationNumber_t)"
                       ,0x37,5);
    cMyTrace::operator()(local_2c,"DB_LoadInventory::GetUserInven, exec ERROR charac_no=%u",param_2)
    ;
  }
  return;
}

```

