# DB_UpdateServerMessage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08435a02 DB_UpdateServerMessage::dispatch  [0x08435a02-0x8435d11] ===
 8435a02:	55                   	push   %ebp
 8435a03:	89 e5                	mov    %esp,%ebp
 8435a05:	56                   	push   %esi
 8435a06:	53                   	push   %ebx
 8435a07:	81 ec 10 01 00 00    	sub    $0x110,%esp
 8435a0d:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8435a12:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8435a19:	00 
 8435a1a:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8435a21:	00 
 8435a22:	89 04 24             	mov    %eax,(%esp)
 8435a25:	e8 14 f8 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8435a2a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8435a2d:	8b 45 14             	mov    0x14(%ebp),%eax
 8435a30:	89 04 24             	mov    %eax,(%esp)
 8435a33:	e8 26 d7 01 00       	call   845315e <_ZN6Stream12GetOutBufferI25SIG_UPDATE_SERVER_MESSAGEEEPT_v>
 8435a38:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8435a3b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8435a3e:	83 c0 10             	add    $0x10,%eax
 8435a41:	89 44 24 08          	mov    %eax,0x8(%esp)
 8435a45:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 8435a4b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8435a4f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8435a52:	89 04 24             	mov    %eax,(%esp)
 8435a55:	e8 50 ee fb ff       	call   83f48aa <_ZN5MySQL13escape_stringEPcPKc>
 8435a5a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8435a5d:	83 c0 48             	add    $0x48,%eax
 8435a60:	89 44 24 08          	mov    %eax,0x8(%esp)
 8435a64:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8435a67:	89 44 24 04          	mov    %eax,0x4(%esp)
 8435a6b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8435a6e:	89 04 24             	mov    %eax,(%esp)
 8435a71:	e8 34 ee fb ff       	call   83f48aa <_ZN5MySQL13escape_stringEPcPKc>
 8435a76:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8435a79:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 8435a7d:	0f b6 d8             	movzbl %al,%ebx
 8435a80:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8435a83:	8b 48 04             	mov    0x4(%eax),%ecx
 8435a86:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8435a89:	8b 10                	mov    (%eax),%edx
 8435a8b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8435a8e:	8b 40 5c             	mov    0x5c(%eax),%eax
 8435a91:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8435a95:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8435a99:	89 54 24 14          	mov    %edx,0x14(%esp)
 8435a9d:	89 44 24 10          	mov    %eax,0x10(%esp)
 8435aa1:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8435aa4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8435aa8:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 8435aae:	89 44 24 08          	mov    %eax,0x8(%esp)
 8435ab2:	c7 44 24 04 b4 32 c5 	movl   $0x8c532b4,0x4(%esp)
 8435ab9:	08 
 8435aba:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8435abd:	89 04 24             	mov    %eax,(%esp)
 8435ac0:	e8 fb e6 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8435ac5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8435acc:	00 
 8435acd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8435ad0:	89 04 24             	mov    %eax,(%esp)
 8435ad3:	e8 4e e8 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8435ad8:	83 f0 01             	xor    $0x1,%eax
 8435adb:	84 c0                	test   %al,%al
 8435add:	75 11                	jne    8435af0 <_ZN22DB_UpdateServerMessage8dispatchEiiP6Stream+0xee>
 8435adf:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8435ae2:	89 04 24             	mov    %eax,(%esp)
 8435ae5:	e8 26 e8 fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8435aea:	09 d0                	or     %edx,%eax
 8435aec:	85 c0                	test   %eax,%eax
 8435aee:	75 07                	jne    8435af7 <_ZN22DB_UpdateServerMessage8dispatchEiiP6Stream+0xf5>
 8435af0:	b8 01 00 00 00       	mov    $0x1,%eax
 8435af5:	eb 05                	jmp    8435afc <_ZN22DB_UpdateServerMessage8dispatchEiiP6Stream+0xfa>
 8435af7:	b8 00 00 00 00       	mov    $0x0,%eax
 8435afc:	84 c0                	test   %al,%al
 8435afe:	0f 84 81 00 00 00    	je     8435b85 <_ZN22DB_UpdateServerMessage8dispatchEiiP6Stream+0x183>
 8435b04:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8435b07:	8b 70 5c             	mov    0x5c(%eax),%esi
 8435b0a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8435b0d:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 8435b11:	0f b6 d8             	movzbl %al,%ebx
 8435b14:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8435b17:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8435b1b:	0f b6 c8             	movzbl %al,%ecx
 8435b1e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8435b21:	8b 50 04             	mov    0x4(%eax),%edx
 8435b24:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8435b27:	8b 00                	mov    (%eax),%eax
 8435b29:	89 74 24 20          	mov    %esi,0x20(%esp)
 8435b2d:	8d b5 24 ff ff ff    	lea    -0xdc(%ebp),%esi
 8435b33:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 8435b37:	8d 75 a4             	lea    -0x5c(%ebp),%esi
 8435b3a:	89 74 24 18          	mov    %esi,0x18(%esp)
 8435b3e:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8435b42:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8435b46:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8435b4a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8435b4e:	c7 44 24 04 50 33 c5 	movl   $0x8c53350,0x4(%esp)
 8435b55:	08 
 8435b56:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8435b59:	89 04 24             	mov    %eax,(%esp)
 8435b5c:	e8 5f e6 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8435b61:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8435b68:	00 
 8435b69:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8435b6c:	89 04 24             	mov    %eax,(%esp)
 8435b6f:	e8 b2 e7 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8435b74:	83 f0 01             	xor    $0x1,%eax
 8435b77:	84 c0                	test   %al,%al
 8435b79:	74 0a                	je     8435b85 <_ZN22DB_UpdateServerMessage8dispatchEiiP6Stream+0x183>
 8435b7b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8435b80:	e9 80 01 00 00       	jmp    8435d05 <_ZN22DB_UpdateServerMessage8dispatchEiiP6Stream+0x303>
 8435b85:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8435b8a:	c7 44 24 08 e3 80 00 	movl   $0x80e3,0x8(%esp)
 8435b91:	00 
 8435b92:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8435b99:	08 
 8435b9a:	89 04 24             	mov    %eax,(%esp)
 8435b9d:	e8 e4 9e e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8435ba2:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8435ba9:	00 
 8435baa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8435bae:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8435bb1:	89 04 24             	mov    %eax,(%esp)
 8435bb4:	e8 6d 30 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8435bb9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8435bbc:	89 04 24             	mov    %eax,(%esp)
 8435bbf:	e8 82 30 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8435bc4:	8b 55 0c             	mov    0xc(%ebp),%edx
 8435bc7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8435bcb:	89 04 24             	mov    %eax,(%esp)
 8435bce:	e8 83 30 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8435bd3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8435bd6:	89 04 24             	mov    %eax,(%esp)
 8435bd9:	e8 68 30 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8435bde:	8b 55 10             	mov    0x10(%ebp),%edx
 8435be1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8435be5:	89 04 24             	mov    %eax,(%esp)
 8435be8:	e8 69 30 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8435bed:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8435bf0:	89 04 24             	mov    %eax,(%esp)
 8435bf3:	e8 56 30 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8435bf8:	89 04 24             	mov    %eax,(%esp)
 8435bfb:	e8 b2 d5 01 00       	call   84531b2 <_ZN12CStreamGuard11GetInBufferI25SIG_UPDATE_SERVER_MESSAGEEEPT_v>
 8435c00:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8435c03:	c7 44 24 08 60 00 00 	movl   $0x60,0x8(%esp)
 8435c0a:	00 
 8435c0b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8435c12:	00 
 8435c13:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8435c16:	89 04 24             	mov    %eax,(%esp)
 8435c19:	e8 a2 80 c4 ff       	call   807dcc0 <memset@plt>
 8435c1e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8435c21:	8b 10                	mov    (%eax),%edx
 8435c23:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8435c26:	89 10                	mov    %edx,(%eax)
 8435c28:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8435c2b:	8b 50 04             	mov    0x4(%eax),%edx
 8435c2e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8435c31:	89 50 04             	mov    %edx,0x4(%eax)
 8435c34:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8435c37:	0f b6 50 09          	movzbl 0x9(%eax),%edx
 8435c3b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8435c3e:	88 50 09             	mov    %dl,0x9(%eax)
 8435c41:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8435c44:	0f b6 50 08          	movzbl 0x8(%eax),%edx
 8435c48:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8435c4b:	88 50 08             	mov    %dl,0x8(%eax)
 8435c4e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8435c51:	8b 50 44             	mov    0x44(%eax),%edx
 8435c54:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8435c57:	89 50 44             	mov    %edx,0x44(%eax)
 8435c5a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8435c5d:	8b 40 44             	mov    0x44(%eax),%eax
 8435c60:	8d 48 01             	lea    0x1(%eax),%ecx
 8435c63:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8435c66:	8d 50 48             	lea    0x48(%eax),%edx
 8435c69:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8435c6c:	83 c0 48             	add    $0x48,%eax
 8435c6f:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8435c73:	89 54 24 04          	mov    %edx,0x4(%esp)
 8435c77:	89 04 24             	mov    %eax,(%esp)
 8435c7a:	e8 51 7c c4 ff       	call   807d8d0 <strncpy@plt>
 8435c7f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8435c82:	8b 50 0c             	mov    0xc(%eax),%edx
 8435c85:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8435c88:	89 50 0c             	mov    %edx,0xc(%eax)
 8435c8b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8435c8e:	8b 40 0c             	mov    0xc(%eax),%eax
 8435c91:	8d 48 01             	lea    0x1(%eax),%ecx
 8435c94:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8435c97:	8d 50 10             	lea    0x10(%eax),%edx
 8435c9a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8435c9d:	83 c0 10             	add    $0x10,%eax
 8435ca0:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8435ca4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8435ca8:	89 04 24             	mov    %eax,(%esp)
 8435cab:	e8 20 7c c4 ff       	call   807d8d0 <strncpy@plt>
 8435cb0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8435cb3:	8b 50 5c             	mov    0x5c(%eax),%edx
 8435cb6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8435cb9:	89 50 5c             	mov    %edx,0x5c(%eax)
 8435cbc:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8435cc1:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8435cc4:	89 54 24 08          	mov    %edx,0x8(%esp)
 8435cc8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8435ccf:	00 
 8435cd0:	89 04 24             	mov    %eax,(%esp)
 8435cd3:	e8 06 b3 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8435cd8:	bb 01 00 00 00       	mov    $0x1,%ebx
 8435cdd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8435ce0:	89 04 24             	mov    %eax,(%esp)
 8435ce3:	e8 ea 6b 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8435ce8:	eb 1b                	jmp    8435d05 <_ZN22DB_UpdateServerMessage8dispatchEiiP6Stream+0x303>
 8435cea:	89 d3                	mov    %edx,%ebx
 8435cec:	89 c6                	mov    %eax,%esi
 8435cee:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8435cf1:	89 04 24             	mov    %eax,(%esp)
 8435cf4:	e8 d9 6b 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8435cf9:	89 f0                	mov    %esi,%eax
 8435cfb:	89 da                	mov    %ebx,%edx
 8435cfd:	89 04 24             	mov    %eax,(%esp)
 8435d00:	e8 4b da 6a 00       	call   8ae3750 <_Unwind_Resume>
 8435d05:	89 d8                	mov    %ebx,%eax
 8435d07:	81 c4 10 01 00 00    	add    $0x110,%esp
 8435d0d:	5b                   	pop    %ebx
 8435d0e:	5e                   	pop    %esi
 8435d0f:	5d                   	pop    %ebp
 8435d10:	c3                   	ret
 8435d11:	90                   	nop

```

```c
// DB_UpdateServerMessage::dispatch @ 0x8435a02

/* DB_UpdateServerMessage::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_UpdateServerMessage::dispatch
          (DB_UpdateServerMessage *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  longlong lVar5;
  char local_e0 [128];
  char local_60 [64];
  CStreamGuard local_20 [8];
  MySQL *local_18;
  SIG_UPDATE_SERVER_MESSAGE *local_14;
  SIG_UPDATE_SERVER_MESSAGE *local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_14 = Stream::GetOutBuffer<SIG_UPDATE_SERVER_MESSAGE>(param_3);
  MySQL::escape_string(local_18,local_e0,(char *)(local_14 + 0x10));
  MySQL::escape_string(local_18,local_60,(char *)(local_14 + 0x48));
  MySQL::set_query(local_18,
                   "upDate event_server_message set message=\'%s\', charac_name=\'%s\', update_time=from_unixtime(%d) where server_info=%d and channel_no=%d and message_index=%d"
                   ,local_e0,local_60,*(undefined4 *)(local_14 + 0x5c),*(undefined4 *)local_14,
                   *(undefined4 *)(local_14 + 4),(uint)(byte)local_14[9]);
  cVar2 = MySQL::exec(local_18,true);
  if ((cVar2 == '\x01') && (lVar5 = MySQL::getAffectedRowCount(local_18), lVar5 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    MySQL::set_query(local_18,
                     "inSert into event_server_message(server_info, channel_no, kind, message_index, charac_name, message, update_time) values(%d, %d, %d, %d, \'%s\', \'%s\', from_unixtime(%d))"
                     ,*(undefined4 *)local_14,*(undefined4 *)(local_14 + 4),(uint)(byte)local_14[8],
                     (uint)(byte)local_14[9],local_60,local_e0,*(undefined4 *)(local_14 + 0x5c));
    cVar2 = MySQL::exec(local_18,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x80e3);
  CStreamGuard::CStreamGuard(local_20,pSVar3,true);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 08435bce to 08435cd7 has its CatchHandler @ 08435cea */
  CStreamGuard::operator<<(pCVar4,param_1);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
  CStreamGuard::operator<<(pCVar4,param_2);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_20);
  local_10 = CStreamGuard::GetInBuffer<SIG_UPDATE_SERVER_MESSAGE>(pCVar4);
  memset(local_10,0,0x60);
  *(undefined4 *)local_10 = *(undefined4 *)local_14;
  *(undefined4 *)(local_10 + 4) = *(undefined4 *)(local_14 + 4);
  local_10[9] = local_14[9];
  local_10[8] = local_14[8];
  *(undefined4 *)(local_10 + 0x44) = *(undefined4 *)(local_14 + 0x44);
  strncpy((char *)(local_10 + 0x48),(char *)(local_14 + 0x48),*(int *)(local_14 + 0x44) + 1);
  *(undefined4 *)(local_10 + 0xc) = *(undefined4 *)(local_14 + 0xc);
  strncpy((char *)(local_10 + 0x10),(char *)(local_14 + 0x10),*(int *)(local_14 + 0xc) + 1);
  *(undefined4 *)(local_10 + 0x5c) = *(undefined4 *)(local_14 + 0x5c);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_20);
  CStreamGuard::~CStreamGuard(local_20);
  return 1;
}

```

