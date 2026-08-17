# DBSelectCreateDnfUserInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0815c034 DBSelectCreateDnfUserInfo::dispatch  [0x0815c034-0x815c25b] ===
 815c034:	55                   	push   %ebp
 815c035:	89 e5                	mov    %esp,%ebp
 815c037:	56                   	push   %esi
 815c038:	53                   	push   %ebx
 815c039:	83 ec 40             	sub    $0x40,%esp
 815c03c:	8b 45 14             	mov    0x14(%ebp),%eax
 815c03f:	89 04 24             	mov    %eax,(%esp)
 815c042:	e8 c5 2a 00 00       	call   815eb0c <_ZN6Stream12GetOutBufferIN25DBSelectCreateDnfUserInfo3MSGEEEPT_v>
 815c047:	89 45 e8             	mov    %eax,-0x18(%ebp)
 815c04a:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 815c04e:	75 2c                	jne    815c07c <_ZN25DBSelectCreateDnfUserInfo8dispatchEiiP6Stream+0x48>
 815c050:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815c057:	e8 a4 97 5c 00       	call   8725800 <__cxa_allocate_exception>
 815c05c:	89 c2                	mov    %eax,%edx
 815c05e:	c7 02 0d 78 b7 08    	movl   $0x8b7780d,(%edx)
 815c064:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815c06b:	00 
 815c06c:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815c073:	09 
 815c074:	89 04 24             	mov    %eax,(%esp)
 815c077:	e8 d4 8b 5c 00       	call   8724c50 <__cxa_throw>
 815c07c:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 815c081:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815c088:	00 
 815c089:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 815c090:	00 
 815c091:	89 04 24             	mov    %eax,(%esp)
 815c094:	e8 a5 91 29 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 815c099:	89 45 ec             	mov    %eax,-0x14(%ebp)
 815c09c:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 815c0a0:	75 2c                	jne    815c0ce <_ZN25DBSelectCreateDnfUserInfo8dispatchEiiP6Stream+0x9a>
 815c0a2:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815c0a9:	e8 52 97 5c 00       	call   8725800 <__cxa_allocate_exception>
 815c0ae:	89 c2                	mov    %eax,%edx
 815c0b0:	c7 02 03 72 b7 08    	movl   $0x8b77203,(%edx)
 815c0b6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815c0bd:	00 
 815c0be:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815c0c5:	09 
 815c0c6:	89 04 24             	mov    %eax,(%esp)
 815c0c9:	e8 82 8b 5c 00       	call   8724c50 <__cxa_throw>
 815c0ce:	8b 45 e8             	mov    -0x18(%ebp),%eax
 815c0d1:	8b 00                	mov    (%eax),%eax
 815c0d3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 815c0da:	00 
 815c0db:	89 04 24             	mov    %eax,(%esp)
 815c0de:	e8 68 cf fa ff       	call   810904b <_Z14NumberToStringji>
 815c0e3:	89 44 24 08          	mov    %eax,0x8(%esp)
 815c0e7:	c7 44 24 04 1c 78 b7 	movl   $0x8b7781c,0x4(%esp)
 815c0ee:	08 
 815c0ef:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815c0f2:	89 04 24             	mov    %eax,(%esp)
 815c0f5:	e8 c6 80 29 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 815c0fa:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815c101:	00 
 815c102:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815c105:	89 04 24             	mov    %eax,(%esp)
 815c108:	e8 19 82 29 00       	call   83f4326 <_ZN5MySQL4execEb>
 815c10d:	83 f0 01             	xor    $0x1,%eax
 815c110:	84 c0                	test   %al,%al
 815c112:	74 2c                	je     815c140 <_ZN25DBSelectCreateDnfUserInfo8dispatchEiiP6Stream+0x10c>
 815c114:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815c11b:	e8 e0 96 5c 00       	call   8725800 <__cxa_allocate_exception>
 815c120:	89 c2                	mov    %eax,%edx
 815c122:	c7 02 f9 74 b7 08    	movl   $0x8b774f9,(%edx)
 815c128:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815c12f:	00 
 815c130:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815c137:	09 
 815c138:	89 04 24             	mov    %eax,(%esp)
 815c13b:	e8 10 8b 5c 00       	call   8724c50 <__cxa_throw>
 815c140:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 815c144:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815c147:	89 04 24             	mov    %eax,(%esp)
 815c14a:	e8 1d 62 f8 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 815c14f:	85 c0                	test   %eax,%eax
 815c151:	0f 95 c0             	setne  %al
 815c154:	84 c0                	test   %al,%al
 815c156:	74 04                	je     815c15c <_ZN25DBSelectCreateDnfUserInfo8dispatchEiiP6Stream+0x128>
 815c158:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 815c15c:	0f b6 55 f3          	movzbl -0xd(%ebp),%edx
 815c160:	8b 45 e8             	mov    -0x18(%ebp),%eax
 815c163:	8b 00                	mov    (%eax),%eax
 815c165:	89 54 24 08          	mov    %edx,0x8(%esp)
 815c169:	89 44 24 04          	mov    %eax,0x4(%esp)
 815c16d:	8b 45 10             	mov    0x10(%ebp),%eax
 815c170:	89 04 24             	mov    %eax,(%esp)
 815c173:	e8 a0 50 00 00       	call   8161218 <_ZN28InterSelectCreateDnfUserInfo11makeRequestEijb>
 815c178:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
 815c17c:	74 07                	je     815c185 <_ZN25DBSelectCreateDnfUserInfo8dispatchEiiP6Stream+0x151>
 815c17e:	bb 01 00 00 00       	mov    $0x1,%ebx
 815c183:	eb 05                	jmp    815c18a <_ZN25DBSelectCreateDnfUserInfo8dispatchEiiP6Stream+0x156>
 815c185:	bb 00 00 00 00       	mov    $0x0,%ebx
 815c18a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 815c18d:	8b 00                	mov    (%eax),%eax
 815c18f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 815c196:	00 
 815c197:	89 04 24             	mov    %eax,(%esp)
 815c19a:	e8 ac ce fa ff       	call   810904b <_Z14NumberToStringji>
 815c19f:	89 c6                	mov    %eax,%esi
 815c1a1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 815c1a8:	00 
 815c1a9:	c7 44 24 08 4d 02 00 	movl   $0x24d,0x8(%esp)
 815c1b0:	00 
 815c1b1:	c7 44 24 04 40 90 b7 	movl   $0x8b79040,0x4(%esp)
 815c1b8:	08 
 815c1b9:	8d 45 d8             	lea    -0x28(%ebp),%eax
 815c1bc:	89 04 24             	mov    %eax,(%esp)
 815c1bf:	e8 54 35 3f 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 815c1c4:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 815c1c8:	89 74 24 08          	mov    %esi,0x8(%esp)
 815c1cc:	c7 44 24 04 68 78 b7 	movl   $0x8b77868,0x4(%esp)
 815c1d3:	08 
 815c1d4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 815c1d7:	89 04 24             	mov    %eax,(%esp)
 815c1da:	e8 a9 35 3f 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 815c1df:	bb 01 00 00 00       	mov    $0x1,%ebx
 815c1e4:	eb 6c                	jmp    815c252 <_ZN25DBSelectCreateDnfUserInfo8dispatchEiiP6Stream+0x21e>
 815c1e6:	83 fa 01             	cmp    $0x1,%edx
 815c1e9:	74 08                	je     815c1f3 <_ZN25DBSelectCreateDnfUserInfo8dispatchEiiP6Stream+0x1bf>
 815c1eb:	89 04 24             	mov    %eax,(%esp)
 815c1ee:	e8 5d 75 98 00       	call   8ae3750 <_Unwind_Resume>
 815c1f3:	89 04 24             	mov    %eax,(%esp)
 815c1f6:	e8 e5 9a 5c 00       	call   8725ce0 <__cxa_begin_catch>
 815c1fb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815c1fe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815c201:	89 44 24 14          	mov    %eax,0x14(%esp)
 815c205:	c7 44 24 10 ac 78 b7 	movl   $0x8b778ac,0x10(%esp)
 815c20c:	08 
 815c20d:	c7 44 24 0c 53 02 00 	movl   $0x253,0xc(%esp)
 815c214:	00 
 815c215:	c7 44 24 08 40 90 b7 	movl   $0x8b79040,0x8(%esp)
 815c21c:	08 
 815c21d:	c7 44 24 04 d4 72 b7 	movl   $0x8b772d4,0x4(%esp)
 815c224:	08 
 815c225:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 815c22c:	e8 d9 79 97 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 815c231:	bb 00 00 00 00       	mov    $0x0,%ebx
 815c236:	e8 f5 99 5c 00       	call   8725c30 <__cxa_end_catch>
 815c23b:	eb 15                	jmp    815c252 <_ZN25DBSelectCreateDnfUserInfo8dispatchEiiP6Stream+0x21e>
 815c23d:	89 d3                	mov    %edx,%ebx
 815c23f:	89 c6                	mov    %eax,%esi
 815c241:	e8 ea 99 5c 00       	call   8725c30 <__cxa_end_catch>
 815c246:	89 f0                	mov    %esi,%eax
 815c248:	89 da                	mov    %ebx,%edx
 815c24a:	89 04 24             	mov    %eax,(%esp)
 815c24d:	e8 fe 74 98 00       	call   8ae3750 <_Unwind_Resume>
 815c252:	89 d8                	mov    %ebx,%eax
 815c254:	83 c4 40             	add    $0x40,%esp
 815c257:	5b                   	pop    %ebx
 815c258:	5e                   	pop    %esi
 815c259:	5d                   	pop    %ebp
 815c25a:	c3                   	ret
 815c25b:	90                   	nop

```

```c
// DBSelectCreateDnfUserInfo::dispatch @ 0x815c034

/* DBSelectCreateDnfUserInfo::dispatch(int, int, Stream*) */

undefined4 __thiscall
DBSelectCreateDnfUserInfo::dispatch
          (DBSelectCreateDnfUserInfo *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  cMyTrace local_2c [16];
  MSG *local_1c;
  MySQL *local_18;
  bool local_11;
  
                    /* try { // try from 0815c042 to 0815c1de has its CatchHandler @ 0815c1e6 */
  local_1c = Stream::GetOutBuffer<DBSelectCreateDnfUserInfo::MSG>(param_3);
  if (local_1c == (MSG *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "msg is null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  if (local_18 == (MySQL *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "handle null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  uVar3 = NumberToString(*(uint *)local_1c,0);
  MySQL::set_query(local_18,
                   "seLect m_id from event_create_dnf_user where occ_date=CURDATE() and m_id=%s",
                   uVar3);
  cVar1 = MySQL::exec(local_18,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "select_exec";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  local_11 = false;
  iVar4 = MySQL::get_n_rows(local_18);
  if (iVar4 != 0) {
    local_11 = true;
  }
  InterSelectCreateDnfUserInfo::makeRequest(param_2,*(uint *)local_1c,local_11);
  bVar5 = local_11 != false;
  uVar3 = NumberToString(*(uint *)local_1c,0);
  cMyTrace::cMyTrace(local_2c,"virtual bool DBSelectCreateDnfUserInfo::dispatch(int, int, Stream*)",
                     0x24d,0);
  cMyTrace::operator()
            (local_2c,"[Taiwan, Event] select event_create_dnf_user. m_id:%s isReceived:%d",uVar3,
             (uint)bVar5);
  return 1;
}

```

---

## makeRequest

```asm
// === 0815bee0 DBSelectCreateDnfUserInfo::makeRequest  [0x0815bee0-0x815c033] ===
 815bee0:	55                   	push   %ebp
 815bee1:	89 e5                	mov    %esp,%ebp
 815bee3:	56                   	push   %esi
 815bee4:	53                   	push   %ebx
 815bee5:	83 ec 30             	sub    $0x30,%esp
 815bee8:	a1 30 f7 41 09       	mov    0x941f730,%eax
 815beed:	c7 44 24 04 a0 00 00 	movl   $0xa0,0x4(%esp)
 815bef4:	00 
 815bef5:	89 04 24             	mov    %eax,(%esp)
 815bef8:	e8 9b 9a fb ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 815befd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 815bf00:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 815bf04:	74 21                	je     815bf27 <_ZN25DBSelectCreateDnfUserInfo11makeRequestEij+0x47>
 815bf06:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815bf09:	8b 00                	mov    (%eax),%eax
 815bf0b:	83 c0 34             	add    $0x34,%eax
 815bf0e:	8b 10                	mov    (%eax),%edx
 815bf10:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 815bf17:	00 
 815bf18:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815bf1b:	89 04 24             	mov    %eax,(%esp)
 815bf1e:	ff d2                	call   *%edx
 815bf20:	83 f0 01             	xor    $0x1,%eax
 815bf23:	84 c0                	test   %al,%al
 815bf25:	74 07                	je     815bf2e <_ZN25DBSelectCreateDnfUserInfo11makeRequestEij+0x4e>
 815bf27:	b8 01 00 00 00       	mov    $0x1,%eax
 815bf2c:	eb 05                	jmp    815bf33 <_ZN25DBSelectCreateDnfUserInfo11makeRequestEij+0x53>
 815bf2e:	b8 00 00 00 00       	mov    $0x0,%eax
 815bf33:	84 c0                	test   %al,%al
 815bf35:	0f 85 f0 00 00 00    	jne    815c02b <_ZN25DBSelectCreateDnfUserInfo11makeRequestEij+0x14b>
 815bf3b:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 815bf40:	c7 44 24 08 27 02 00 	movl   $0x227,0x8(%esp)
 815bf47:	00 
 815bf48:	c7 44 24 04 d4 72 b7 	movl   $0x8b772d4,0x4(%esp)
 815bf4f:	08 
 815bf50:	89 04 24             	mov    %eax,(%esp)
 815bf53:	e8 2e 3b 13 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 815bf58:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 815bf5f:	00 
 815bf60:	89 44 24 04          	mov    %eax,0x4(%esp)
 815bf64:	8d 45 d8             	lea    -0x28(%ebp),%eax
 815bf67:	89 04 24             	mov    %eax,(%esp)
 815bf6a:	e8 b7 cc f6 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 815bf6f:	8b 45 08             	mov    0x8(%ebp),%eax
 815bf72:	89 44 24 08          	mov    %eax,0x8(%esp)
 815bf76:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 815bf7d:	00 
 815bf7e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 815bf81:	89 04 24             	mov    %eax,(%esp)
 815bf84:	e8 c7 79 00 00       	call   8163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>
 815bf89:	8d 45 d8             	lea    -0x28(%ebp),%eax
 815bf8c:	89 04 24             	mov    %eax,(%esp)
 815bf8f:	e8 ba cc f6 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 815bf94:	89 04 24             	mov    %eax,(%esp)
 815bf97:	e8 5a 2b 00 00       	call   815eaf6 <_ZN12CStreamGuard11GetInBufferIN25DBSelectCreateDnfUserInfo3MSGEEEPT_v>
 815bf9c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815bf9f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 815bfa3:	75 38                	jne    815bfdd <_ZN25DBSelectCreateDnfUserInfo11makeRequestEij+0xfd>
 815bfa5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 815bfac:	00 
 815bfad:	c7 44 24 08 2c 02 00 	movl   $0x22c,0x8(%esp)
 815bfb4:	00 
 815bfb5:	c7 44 24 04 a0 90 b7 	movl   $0x8b790a0,0x4(%esp)
 815bfbc:	08 
 815bfbd:	8d 45 e0             	lea    -0x20(%ebp),%eax
 815bfc0:	89 04 24             	mov    %eax,(%esp)
 815bfc3:	e8 50 37 3f 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 815bfc8:	c7 44 24 04 f1 77 b7 	movl   $0x8b777f1,0x4(%esp)
 815bfcf:	08 
 815bfd0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 815bfd3:	89 04 24             	mov    %eax,(%esp)
 815bfd6:	e8 ad 37 3f 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 815bfdb:	eb 41                	jmp    815c01e <_ZN25DBSelectCreateDnfUserInfo11makeRequestEij+0x13e>
 815bfdd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815bfe0:	8b 55 0c             	mov    0xc(%ebp),%edx
 815bfe3:	89 10                	mov    %edx,(%eax)
 815bfe5:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 815bfea:	8d 55 d8             	lea    -0x28(%ebp),%edx
 815bfed:	89 54 24 08          	mov    %edx,0x8(%esp)
 815bff1:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 815bff8:	00 
 815bff9:	89 04 24             	mov    %eax,(%esp)
 815bffc:	e8 dd 4f 41 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 815c001:	eb 1b                	jmp    815c01e <_ZN25DBSelectCreateDnfUserInfo11makeRequestEij+0x13e>
 815c003:	89 d3                	mov    %edx,%ebx
 815c005:	89 c6                	mov    %eax,%esi
 815c007:	8d 45 d8             	lea    -0x28(%ebp),%eax
 815c00a:	89 04 24             	mov    %eax,(%esp)
 815c00d:	e8 c0 08 4c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 815c012:	89 f0                	mov    %esi,%eax
 815c014:	89 da                	mov    %ebx,%edx
 815c016:	89 04 24             	mov    %eax,(%esp)
 815c019:	e8 32 77 98 00       	call   8ae3750 <_Unwind_Resume>
 815c01e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 815c021:	89 04 24             	mov    %eax,(%esp)
 815c024:	e8 a9 08 4c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 815c029:	eb 01                	jmp    815c02c <_ZN25DBSelectCreateDnfUserInfo11makeRequestEij+0x14c>
 815c02b:	90                   	nop
 815c02c:	83 c4 30             	add    $0x30,%esp
 815c02f:	5b                   	pop    %ebx
 815c030:	5e                   	pop    %esi
 815c031:	5d                   	pop    %ebp
 815c032:	c3                   	ret
 815c033:	90                   	nop

```

```c
// DBSelectCreateDnfUserInfo::makeRequest @ 0x815bee0

/* DBSelectCreateDnfUserInfo::makeRequest(int, unsigned int) */

void DBSelectCreateDnfUserInfo::makeRequest(int param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *this;
  CStreamGuard local_2c [8];
  cMyTrace local_24 [16];
  int *local_14;
  MSG *local_10;
  
  local_14 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xa0);
  if (local_14 != (int *)0x0) {
    cVar2 = (**(code **)(*local_14 + 0x34))(local_14,0);
    if (cVar2 == '\x01') {
      bVar1 = false;
      goto LAB_0815bf33;
    }
  }
  bVar1 = true;
LAB_0815bf33:
  if (!bVar1) {
    pSVar3 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,
                                 "localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x227);
    CStreamGuard::CStreamGuard(local_2c,pSVar3,true);
                    /* try { // try from 0815bf84 to 0815c000 has its CatchHandler @ 0815c003 */
    Taiwan::internal_stream(local_2c,10,param_1);
    this = (CStreamGuard *)CStreamGuard::operator->(local_2c);
    local_10 = CStreamGuard::GetInBuffer<DBSelectCreateDnfUserInfo::MSG>(this);
    if (local_10 == (MSG *)0x0) {
      cMyTrace::cMyTrace(local_24,
                         "static void DBSelectCreateDnfUserInfo::makeRequest(int, memberIdentificationNumber_t)"
                         ,0x22c,0);
      cMyTrace::operator()(local_24,"[Taiwan, Event] msg is null");
    }
    else {
      *(uint *)local_10 = param_2;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_2c);
    }
    CStreamGuard::~CStreamGuard(local_2c);
  }
  return;
}

```

