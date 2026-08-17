# DB_UpdateCharacterDay

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08435d12 DB_UpdateCharacterDay::dispatch  [0x08435d12-0x8435e1d] ===
 8435d12:	55                   	push   %ebp
 8435d13:	89 e5                	mov    %esp,%ebp
 8435d15:	53                   	push   %ebx
 8435d16:	83 ec 24             	sub    $0x24,%esp
 8435d19:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8435d1e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8435d25:	00 
 8435d26:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8435d2d:	00 
 8435d2e:	89 04 24             	mov    %eax,(%esp)
 8435d31:	e8 08 f5 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8435d36:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8435d39:	8b 45 14             	mov    0x14(%ebp),%eax
 8435d3c:	89 04 24             	mov    %eax,(%esp)
 8435d3f:	e8 84 d4 01 00       	call   84531c8 <_ZN6Stream12GetOutBufferI30SIG_UPDATE_CHARACTER_DAY_EVENTEEPT_v>
 8435d44:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8435d47:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8435d4a:	8b 00                	mov    (%eax),%eax
 8435d4c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8435d53:	00 
 8435d54:	89 04 24             	mov    %eax,(%esp)
 8435d57:	e8 ef 32 cd ff       	call   810904b <_Z14NumberToStringji>
 8435d5c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8435d5f:	0f b7 52 04          	movzwl 0x4(%edx),%edx
 8435d63:	0f b7 d2             	movzwl %dx,%edx
 8435d66:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8435d6a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8435d6e:	c7 44 24 04 f8 33 c5 	movl   $0x8c533f8,0x4(%esp)
 8435d75:	08 
 8435d76:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8435d79:	89 04 24             	mov    %eax,(%esp)
 8435d7c:	e8 3f e4 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8435d81:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8435d88:	00 
 8435d89:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8435d8c:	89 04 24             	mov    %eax,(%esp)
 8435d8f:	e8 92 e5 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8435d94:	83 f0 01             	xor    $0x1,%eax
 8435d97:	84 c0                	test   %al,%al
 8435d99:	74 07                	je     8435da2 <_ZN21DB_UpdateCharacterDay8dispatchEiiP6Stream+0x90>
 8435d9b:	b8 00 00 00 00       	mov    $0x0,%eax
 8435da0:	eb 76                	jmp    8435e18 <_ZN21DB_UpdateCharacterDay8dispatchEiiP6Stream+0x106>
 8435da2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8435da5:	89 04 24             	mov    %eax,(%esp)
 8435da8:	e8 63 e5 fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8435dad:	09 d0                	or     %edx,%eax
 8435daf:	85 c0                	test   %eax,%eax
 8435db1:	0f 94 c0             	sete   %al
 8435db4:	84 c0                	test   %al,%al
 8435db6:	74 5b                	je     8435e13 <_ZN21DB_UpdateCharacterDay8dispatchEiiP6Stream+0x101>
 8435db8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8435dbb:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 8435dbf:	0f b7 d8             	movzwl %ax,%ebx
 8435dc2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8435dc5:	8b 00                	mov    (%eax),%eax
 8435dc7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8435dce:	00 
 8435dcf:	89 04 24             	mov    %eax,(%esp)
 8435dd2:	e8 74 32 cd ff       	call   810904b <_Z14NumberToStringji>
 8435dd7:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8435ddb:	89 44 24 08          	mov    %eax,0x8(%esp)
 8435ddf:	c7 44 24 04 5c 34 c5 	movl   $0x8c5345c,0x4(%esp)
 8435de6:	08 
 8435de7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8435dea:	89 04 24             	mov    %eax,(%esp)
 8435ded:	e8 ce e3 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8435df2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8435df9:	00 
 8435dfa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8435dfd:	89 04 24             	mov    %eax,(%esp)
 8435e00:	e8 21 e5 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8435e05:	83 f0 01             	xor    $0x1,%eax
 8435e08:	84 c0                	test   %al,%al
 8435e0a:	74 07                	je     8435e13 <_ZN21DB_UpdateCharacterDay8dispatchEiiP6Stream+0x101>
 8435e0c:	b8 00 00 00 00       	mov    $0x0,%eax
 8435e11:	eb 05                	jmp    8435e18 <_ZN21DB_UpdateCharacterDay8dispatchEiiP6Stream+0x106>
 8435e13:	b8 01 00 00 00       	mov    $0x1,%eax
 8435e18:	83 c4 24             	add    $0x24,%esp
 8435e1b:	5b                   	pop    %ebx
 8435e1c:	5d                   	pop    %ebp
 8435e1d:	c3                   	ret

```

```c
// DB_UpdateCharacterDay::dispatch @ 0x8435d12

/* DB_UpdateCharacterDay::dispatch(int, int, Stream*) */

undefined4 DB_UpdateCharacterDay::dispatch(int param_1,int param_2,Stream *param_3)

{
  ushort uVar1;
  char cVar2;
  MySQL *this;
  SIG_UPDATE_CHARACTER_DAY_EVENT *pSVar3;
  undefined4 uVar4;
  longlong lVar5;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  pSVar3 = Stream::GetOutBuffer<SIG_UPDATE_CHARACTER_DAY_EVENT>(in_stack_00000010);
  uVar4 = NumberToString(*(uint *)pSVar3,0);
  MySQL::set_query(this,
                   "upDate event_1111_charac_day set entries_count=entries_count+%u, update_time=now() where m_id=%s"
                   ,(uint)*(ushort *)(pSVar3 + 4),uVar4);
  cVar2 = MySQL::exec(this,true);
  if (cVar2 == '\x01') {
    lVar5 = MySQL::getAffectedRowCount(this);
    if (lVar5 == 0) {
      uVar1 = *(ushort *)(pSVar3 + 4);
      uVar4 = NumberToString(*(uint *)pSVar3,0);
      MySQL::set_query(this,
                       "inSert into event_1111_charac_day(m_id, entries_count, update_time) values(%s, %u, now())"
                       ,uVar4,(uint)uVar1);
      cVar2 = MySQL::exec(this,true);
      if (cVar2 != '\x01') {
        return 0;
      }
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

