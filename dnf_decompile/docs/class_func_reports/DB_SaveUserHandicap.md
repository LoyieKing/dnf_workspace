# DB_SaveUserHandicap

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## _getDBHandle

```asm
// === 08427dfc DB_SaveUserHandicap::_getDBHandle  [0x08427dfc-0x8427e27] ===
 8427dfc:	55                   	push   %ebp
 8427dfd:	89 e5                	mov    %esp,%ebp
 8427dff:	83 ec 28             	sub    $0x28,%esp
 8427e02:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 8427e09:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8427e0e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8427e15:	00 
 8427e16:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8427e19:	89 54 24 04          	mov    %edx,0x4(%esp)
 8427e1d:	89 04 24             	mov    %eax,(%esp)
 8427e20:	e8 19 d4 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8427e25:	c9                   	leave
 8427e26:	c3                   	ret
 8427e27:	90                   	nop

```

```c
// DB_SaveUserHandicap::_getDBHandle @ 0x8427dfc

/* DB_SaveUserHandicap::_getDBHandle() */

void DB_SaveUserHandicap::_getDBHandle(void)

{
  DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  return;
}

```

---

## _getDBHandleForDevideAccountDB

```asm
// === 08427e28 DB_SaveUserHandicap::_getDBHandleForDevideAccountDB  [0x08427e28-0x8427e53] ===
 8427e28:	55                   	push   %ebp
 8427e29:	89 e5                	mov    %esp,%ebp
 8427e2b:	83 ec 28             	sub    $0x28,%esp
 8427e2e:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 8427e35:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8427e3a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8427e41:	00 
 8427e42:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8427e45:	89 54 24 04          	mov    %edx,0x4(%esp)
 8427e49:	89 04 24             	mov    %eax,(%esp)
 8427e4c:	e8 ed d3 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8427e51:	c9                   	leave
 8427e52:	c3                   	ret
 8427e53:	90                   	nop

```

```c
// DB_SaveUserHandicap::_getDBHandleForDevideAccountDB @ 0x8427e28

/* DB_SaveUserHandicap::_getDBHandleForDevideAccountDB() */

void DB_SaveUserHandicap::_getDBHandleForDevideAccountDB(void)

{
  DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  return;
}

```

---

## dispatch

```asm
// === 08427e54 DB_SaveUserHandicap::dispatch  [0x08427e54-0x8428019] ===
 8427e54:	55                   	push   %ebp
 8427e55:	89 e5                	mov    %esp,%ebp
 8427e57:	57                   	push   %edi
 8427e58:	56                   	push   %esi
 8427e59:	53                   	push   %ebx
 8427e5a:	83 ec 3c             	sub    $0x3c,%esp
 8427e5d:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8427e62:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8427e69:	00 
 8427e6a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8427e71:	00 
 8427e72:	89 04 24             	mov    %eax,(%esp)
 8427e75:	e8 c4 d3 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8427e7a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8427e7d:	8b 45 14             	mov    0x14(%ebp),%eax
 8427e80:	89 04 24             	mov    %eax,(%esp)
 8427e83:	e8 b2 a3 02 00       	call   845223a <_ZN6Stream12GetOutBufferI24SIG_UPDATE_USER_HANDICAPEEPT_v>
 8427e88:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8427e8b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8427e8e:	8b 40 10             	mov    0x10(%eax),%eax
 8427e91:	85 c0                	test   %eax,%eax
 8427e93:	75 43                	jne    8427ed8 <_ZN19DB_SaveUserHandicap8dispatchEiiP6Stream+0x84>
 8427e95:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8427e98:	8b 58 08             	mov    0x8(%eax),%ebx
 8427e9b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8427e9e:	8b 40 04             	mov    0x4(%eax),%eax
 8427ea1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8427ea8:	00 
 8427ea9:	89 04 24             	mov    %eax,(%esp)
 8427eac:	e8 9a 11 ce ff       	call   810904b <_Z14NumberToStringji>
 8427eb1:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8427eb4:	8b 52 0c             	mov    0xc(%edx),%edx
 8427eb7:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8427ebb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8427ebf:	89 54 24 08          	mov    %edx,0x8(%esp)
 8427ec3:	c7 44 24 04 14 ec c4 	movl   $0x8c4ec14,0x4(%esp)
 8427eca:	08 
 8427ecb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8427ece:	89 04 24             	mov    %eax,(%esp)
 8427ed1:	e8 ea c2 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8427ed6:	eb 4b                	jmp    8427f23 <_ZN19DB_SaveUserHandicap8dispatchEiiP6Stream+0xcf>
 8427ed8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8427edb:	8b 58 08             	mov    0x8(%eax),%ebx
 8427ede:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8427ee1:	8b 40 04             	mov    0x4(%eax),%eax
 8427ee4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8427eeb:	00 
 8427eec:	89 04 24             	mov    %eax,(%esp)
 8427eef:	e8 57 11 ce ff       	call   810904b <_Z14NumberToStringji>
 8427ef4:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8427ef7:	8b 4a 0c             	mov    0xc(%edx),%ecx
 8427efa:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8427efd:	8b 52 10             	mov    0x10(%edx),%edx
 8427f00:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8427f04:	89 44 24 10          	mov    %eax,0x10(%esp)
 8427f08:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8427f0c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8427f10:	c7 44 24 04 b4 ec c4 	movl   $0x8c4ecb4,0x4(%esp)
 8427f17:	08 
 8427f18:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8427f1b:	89 04 24             	mov    %eax,(%esp)
 8427f1e:	e8 9d c2 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8427f23:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8427f2a:	00 
 8427f2b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8427f2e:	89 04 24             	mov    %eax,(%esp)
 8427f31:	e8 f0 c3 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8427f36:	83 f0 01             	xor    $0x1,%eax
 8427f39:	84 c0                	test   %al,%al
 8427f3b:	75 11                	jne    8427f4e <_ZN19DB_SaveUserHandicap8dispatchEiiP6Stream+0xfa>
 8427f3d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8427f40:	89 04 24             	mov    %eax,(%esp)
 8427f43:	e8 c8 c3 fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8427f48:	09 d0                	or     %edx,%eax
 8427f4a:	85 c0                	test   %eax,%eax
 8427f4c:	75 07                	jne    8427f55 <_ZN19DB_SaveUserHandicap8dispatchEiiP6Stream+0x101>
 8427f4e:	b8 01 00 00 00       	mov    $0x1,%eax
 8427f53:	eb 05                	jmp    8427f5a <_ZN19DB_SaveUserHandicap8dispatchEiiP6Stream+0x106>
 8427f55:	b8 00 00 00 00       	mov    $0x0,%eax
 8427f5a:	84 c0                	test   %al,%al
 8427f5c:	0f 84 ab 00 00 00    	je     842800d <_ZN19DB_SaveUserHandicap8dispatchEiiP6Stream+0x1b9>
 8427f62:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8427f65:	8b 40 10             	mov    0x10(%eax),%eax
 8427f68:	85 c0                	test   %eax,%eax
 8427f6a:	75 43                	jne    8427faf <_ZN19DB_SaveUserHandicap8dispatchEiiP6Stream+0x15b>
 8427f6c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8427f6f:	8b 70 0c             	mov    0xc(%eax),%esi
 8427f72:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8427f75:	8b 58 08             	mov    0x8(%eax),%ebx
 8427f78:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8427f7b:	8b 40 04             	mov    0x4(%eax),%eax
 8427f7e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8427f85:	00 
 8427f86:	89 04 24             	mov    %eax,(%esp)
 8427f89:	e8 bd 10 ce ff       	call   810904b <_Z14NumberToStringji>
 8427f8e:	89 74 24 10          	mov    %esi,0x10(%esp)
 8427f92:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8427f96:	89 44 24 08          	mov    %eax,0x8(%esp)
 8427f9a:	c7 44 24 04 5c ed c4 	movl   $0x8c4ed5c,0x4(%esp)
 8427fa1:	08 
 8427fa2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8427fa5:	89 04 24             	mov    %eax,(%esp)
 8427fa8:	e8 13 c2 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8427fad:	eb 4b                	jmp    8427ffa <_ZN19DB_SaveUserHandicap8dispatchEiiP6Stream+0x1a6>
 8427faf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8427fb2:	8b 78 0c             	mov    0xc(%eax),%edi
 8427fb5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8427fb8:	8b 70 08             	mov    0x8(%eax),%esi
 8427fbb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8427fbe:	8b 58 10             	mov    0x10(%eax),%ebx
 8427fc1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8427fc4:	8b 40 04             	mov    0x4(%eax),%eax
 8427fc7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8427fce:	00 
 8427fcf:	89 04 24             	mov    %eax,(%esp)
 8427fd2:	e8 74 10 ce ff       	call   810904b <_Z14NumberToStringji>
 8427fd7:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8427fdb:	89 74 24 10          	mov    %esi,0x10(%esp)
 8427fdf:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8427fe3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8427fe7:	c7 44 24 04 04 ee c4 	movl   $0x8c4ee04,0x4(%esp)
 8427fee:	08 
 8427fef:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8427ff2:	89 04 24             	mov    %eax,(%esp)
 8427ff5:	e8 c6 c1 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8427ffa:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8428001:	00 
 8428002:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8428005:	89 04 24             	mov    %eax,(%esp)
 8428008:	e8 19 c3 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842800d:	b8 01 00 00 00       	mov    $0x1,%eax
 8428012:	83 c4 3c             	add    $0x3c,%esp
 8428015:	5b                   	pop    %ebx
 8428016:	5e                   	pop    %esi
 8428017:	5f                   	pop    %edi
 8428018:	5d                   	pop    %ebp
 8428019:	c3                   	ret

```

```c
// DB_SaveUserHandicap::dispatch @ 0x8427e54

/* DB_SaveUserHandicap::dispatch(int, int, Stream*) */

undefined4 DB_SaveUserHandicap::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  MySQL *this;
  SIG_UPDATE_USER_HANDICAP *pSVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  pSVar4 = Stream::GetOutBuffer<SIG_UPDATE_USER_HANDICAP>(in_stack_00000010);
  if (*(int *)(pSVar4 + 0x10) == 0) {
    uVar1 = *(undefined4 *)(pSVar4 + 8);
    uVar5 = NumberToString(*(uint *)(pSVar4 + 4),0);
    MySQL::set_query(this,
                     "upDate member_punish_info set occ_time=now(), start_time=now(), end_time=\'9999-12-31 23:59:59\', punish_value=%d, apply_flag=2 where m_id=%s and punish_type=%d"
                     ,*(undefined4 *)(pSVar4 + 0xc),uVar5,uVar1);
  }
  else {
    uVar1 = *(undefined4 *)(pSVar4 + 8);
    uVar5 = NumberToString(*(uint *)(pSVar4 + 4),0);
    MySQL::set_query(this,
                     "upDate member_punish_info set occ_time=now(), start_time=now(), end_time=adddate(now(),interval %d day), punish_value=%d, apply_flag=2 where m_id=%s and punish_type=%d"
                     ,*(undefined4 *)(pSVar4 + 0x10),*(undefined4 *)(pSVar4 + 0xc),uVar5,uVar1);
  }
  cVar3 = MySQL::exec(this,true);
  if (cVar3 == '\x01') {
    lVar8 = MySQL::getAffectedRowCount(this);
    if (lVar8 != 0) {
      bVar2 = false;
      goto LAB_08427f5a;
    }
  }
  bVar2 = true;
LAB_08427f5a:
  if (bVar2) {
    if (*(int *)(pSVar4 + 0x10) == 0) {
      uVar1 = *(undefined4 *)(pSVar4 + 0xc);
      uVar5 = *(undefined4 *)(pSVar4 + 8);
      uVar6 = NumberToString(*(uint *)(pSVar4 + 4),0);
      MySQL::set_query(this,
                       "inSert into member_punish_info(m_id, occ_time, start_time, end_time, punish_type, punish_value, apply_flag) values(%s, now(), now(),\'9999-12-31 23:59:59\', %d, %d, 2)"
                       ,uVar6,uVar5,uVar1);
    }
    else {
      uVar1 = *(undefined4 *)(pSVar4 + 0xc);
      uVar5 = *(undefined4 *)(pSVar4 + 8);
      uVar6 = *(undefined4 *)(pSVar4 + 0x10);
      uVar7 = NumberToString(*(uint *)(pSVar4 + 4),0);
      MySQL::set_query(this,
                       "inSert into member_punish_info(m_id, occ_time, start_time, end_time, punish_type, punish_value, apply_flag) values(%s, now(), now(), adddate(now(),interval %d day), %d, %d, 2)"
                       ,uVar7,uVar6,uVar5,uVar1);
    }
    MySQL::exec(this,true);
  }
  return 1;
}

```

---

## makeRequest

```asm
// === 0842801a DB_SaveUserHandicap::makeRequest  [0x0842801a-0x8428153] ===
 842801a:	55                   	push   %ebp
 842801b:	89 e5                	mov    %esp,%ebp
 842801d:	56                   	push   %esi
 842801e:	53                   	push   %ebx
 842801f:	83 ec 30             	sub    $0x30,%esp
 8428022:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8428027:	c7 44 24 08 8a 69 00 	movl   $0x698a,0x8(%esp)
 842802e:	00 
 842802f:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8428036:	08 
 8428037:	89 04 24             	mov    %eax,(%esp)
 842803a:	e8 47 7a e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842803f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8428046:	00 
 8428047:	89 44 24 04          	mov    %eax,0x4(%esp)
 842804b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842804e:	89 04 24             	mov    %eax,(%esp)
 8428051:	e8 d0 0b ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8428056:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8428059:	89 04 24             	mov    %eax,(%esp)
 842805c:	e8 e5 0b ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8428061:	c7 44 24 04 ce 00 00 	movl   $0xce,0x4(%esp)
 8428068:	00 
 8428069:	89 04 24             	mov    %eax,(%esp)
 842806c:	e8 e5 0b ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8428071:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8428074:	89 04 24             	mov    %eax,(%esp)
 8428077:	e8 ca 0b ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842807c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8428083:	ff 
 8428084:	89 04 24             	mov    %eax,(%esp)
 8428087:	e8 ca 0b ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842808c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842808f:	89 04 24             	mov    %eax,(%esp)
 8428092:	e8 b7 0b ca ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8428097:	89 04 24             	mov    %eax,(%esp)
 842809a:	e8 ef a1 02 00       	call   845228e <_ZN12CStreamGuard11GetInBufferI24SIG_UPDATE_USER_HANDICAPEEPT_v>
 842809f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84280a2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84280a5:	8b 55 0c             	mov    0xc(%ebp),%edx
 84280a8:	89 10                	mov    %edx,(%eax)
 84280aa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84280ad:	8b 55 08             	mov    0x8(%ebp),%edx
 84280b0:	89 50 04             	mov    %edx,0x4(%eax)
 84280b3:	8b 55 10             	mov    0x10(%ebp),%edx
 84280b6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84280b9:	89 50 08             	mov    %edx,0x8(%eax)
 84280bc:	8b 55 14             	mov    0x14(%ebp),%edx
 84280bf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84280c2:	89 50 0c             	mov    %edx,0xc(%eax)
 84280c5:	8b 55 18             	mov    0x18(%ebp),%edx
 84280c8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84280cb:	89 50 10             	mov    %edx,0x10(%eax)
 84280ce:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84280d1:	8b 55 1c             	mov    0x1c(%ebp),%edx
 84280d4:	89 50 14             	mov    %edx,0x14(%eax)
 84280d7:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84280dc:	8d 55 ec             	lea    -0x14(%ebp),%edx
 84280df:	89 54 24 08          	mov    %edx,0x8(%esp)
 84280e3:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84280ea:	00 
 84280eb:	89 04 24             	mov    %eax,(%esp)
 84280ee:	e8 eb 8e 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84280f3:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84280fa:	e8 9f 3b ca ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84280ff:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8428102:	89 54 24 10          	mov    %edx,0x10(%esp)
 8428106:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842810a:	8b 45 0c             	mov    0xc(%ebp),%eax
 842810d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8428111:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8428118:	00 
 8428119:	8b 45 08             	mov    0x8(%ebp),%eax
 842811c:	89 04 24             	mov    %eax,(%esp)
 842811f:	e8 b6 31 ff ff       	call   841b2da <_ZN23DB_SaveFeaturedGoodsIdx11makeRequestEjiiii>
 8428124:	eb 1b                	jmp    8428141 <_ZN19DB_SaveUserHandicap11makeRequestEjiiiii+0x127>
 8428126:	89 d3                	mov    %edx,%ebx
 8428128:	89 c6                	mov    %eax,%esi
 842812a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842812d:	89 04 24             	mov    %eax,(%esp)
 8428130:	e8 9d 47 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8428135:	89 f0                	mov    %esi,%eax
 8428137:	89 da                	mov    %ebx,%edx
 8428139:	89 04 24             	mov    %eax,(%esp)
 842813c:	e8 0f b6 6b 00       	call   8ae3750 <_Unwind_Resume>
 8428141:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8428144:	89 04 24             	mov    %eax,(%esp)
 8428147:	e8 86 47 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842814c:	83 c4 30             	add    $0x30,%esp
 842814f:	5b                   	pop    %ebx
 8428150:	5e                   	pop    %esi
 8428151:	5d                   	pop    %ebp
 8428152:	c3                   	ret
 8428153:	90                   	nop

```

```c
// DB_SaveUserHandicap::makeRequest @ 0x842801a

/* DB_SaveUserHandicap::makeRequest(unsigned int, int, int, int, int, int) */

void DB_SaveUserHandicap::makeRequest
               (uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  CStreamGuard local_18 [8];
  SIG_UPDATE_USER_HANDICAP *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x698a);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842806c to 08428123 has its CatchHandler @ 08428126 */
  CStreamGuard::operator<<(pCVar2,0xce);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_UPDATE_USER_HANDICAP>(pCVar2);
  *(int *)local_10 = param_2;
  *(uint *)(local_10 + 4) = param_1;
  *(int *)(local_10 + 8) = param_3;
  *(int *)(local_10 + 0xc) = param_4;
  *(int *)(local_10 + 0x10) = param_5;
  *(int *)(local_10 + 0x14) = param_6;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  DB_SaveFeaturedGoodsIdx::makeRequest(param_1,0,param_2,iVar3,param_6);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

