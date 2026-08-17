# DB_InsertCeraItemHistory

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08445032 DB_InsertCeraItemHistory::dispatch  [0x08445032-0x8445119] ===
 8445032:	55                   	push   %ebp
 8445033:	89 e5                	mov    %esp,%ebp
 8445035:	53                   	push   %ebx
 8445036:	83 ec 44             	sub    $0x44,%esp
 8445039:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8445040:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8445047:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 844504e:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 8445052:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8445055:	89 44 24 04          	mov    %eax,0x4(%esp)
 8445059:	8b 45 14             	mov    0x14(%ebp),%eax
 844505c:	89 04 24             	mov    %eax,(%esp)
 844505f:	e8 60 75 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 8445064:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8445067:	89 44 24 04          	mov    %eax,0x4(%esp)
 844506b:	8b 45 14             	mov    0x14(%ebp),%eax
 844506e:	89 04 24             	mov    %eax,(%esp)
 8445071:	e8 20 77 1d 00       	call   861c796 <_ZN6StreamrsERj>
 8445076:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8445079:	89 44 24 04          	mov    %eax,0x4(%esp)
 844507d:	8b 45 14             	mov    0x14(%ebp),%eax
 8445080:	89 04 24             	mov    %eax,(%esp)
 8445083:	e8 0e 77 1d 00       	call   861c796 <_ZN6StreamrsERj>
 8445088:	8d 45 e7             	lea    -0x19(%ebp),%eax
 844508b:	89 44 24 04          	mov    %eax,0x4(%esp)
 844508f:	8b 45 14             	mov    0x14(%ebp),%eax
 8445092:	89 04 24             	mov    %eax,(%esp)
 8445095:	e8 56 74 1d 00       	call   861c4f0 <_ZN6StreamrsERc>
 844509a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 844509f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84450a6:	00 
 84450a7:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84450ae:	00 
 84450af:	89 04 24             	mov    %eax,(%esp)
 84450b2:	e8 87 01 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84450b7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84450ba:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 84450be:	0f be d8             	movsbl %al,%ebx
 84450c1:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 84450c4:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84450c7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84450ca:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 84450ce:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84450d2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84450d6:	89 44 24 08          	mov    %eax,0x8(%esp)
 84450da:	c7 44 24 04 80 73 c5 	movl   $0x8c57380,0x4(%esp)
 84450e1:	08 
 84450e2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84450e5:	89 04 24             	mov    %eax,(%esp)
 84450e8:	e8 d3 f0 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84450ed:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84450f4:	00 
 84450f5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84450f8:	89 04 24             	mov    %eax,(%esp)
 84450fb:	e8 26 f2 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8445100:	83 f0 01             	xor    $0x1,%eax
 8445103:	84 c0                	test   %al,%al
 8445105:	74 07                	je     844510e <_ZN24DB_InsertCeraItemHistory8dispatchEiiP6Stream+0xdc>
 8445107:	b8 00 00 00 00       	mov    $0x0,%eax
 844510c:	eb 05                	jmp    8445113 <_ZN24DB_InsertCeraItemHistory8dispatchEiiP6Stream+0xe1>
 844510e:	b8 01 00 00 00       	mov    $0x1,%eax
 8445113:	83 c4 44             	add    $0x44,%esp
 8445116:	5b                   	pop    %ebx
 8445117:	5d                   	pop    %ebp
 8445118:	c3                   	ret
 8445119:	90                   	nop

```

```c
// DB_InsertCeraItemHistory::dispatch @ 0x8445032

/* DB_InsertCeraItemHistory::dispatch(int, int, Stream*) */

bool DB_InsertCeraItemHistory::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *in_stack_00000010;
  char local_1d;
  int local_1c;
  uint local_18;
  uint local_14;
  MySQL *local_10;
  
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_1d = '\0';
  Stream::operator>>(in_stack_00000010,&local_1c);
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::operator>>(in_stack_00000010,&local_1d);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_10,
                   "inSert into user_items_change_history(ui_id,from_charac_no,to_charac_no,occ_date,change_type) values(%u,%u,%u,now(),%u)"
                   ,local_1c,local_14,local_18,(int)local_1d);
  cVar1 = MySQL::exec(local_10,true);
  return cVar1 == '\x01';
}

```

---

## makeRequest

```asm
// === 0844511a DB_InsertCeraItemHistory::makeRequest  [0x0844511a-0x8445245] ===
 844511a:	55                   	push   %ebp
 844511b:	89 e5                	mov    %esp,%ebp
 844511d:	56                   	push   %esi
 844511e:	53                   	push   %ebx
 844511f:	83 ec 30             	sub    $0x30,%esp
 8445122:	8b 45 14             	mov    0x14(%ebp),%eax
 8445125:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8445128:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 844512d:	c7 44 24 08 1b ac 00 	movl   $0xac1b,0x8(%esp)
 8445134:	00 
 8445135:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 844513c:	08 
 844513d:	89 04 24             	mov    %eax,(%esp)
 8445140:	e8 41 a9 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8445145:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 844514c:	00 
 844514d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8445151:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8445154:	89 04 24             	mov    %eax,(%esp)
 8445157:	e8 ca 3a c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 844515c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844515f:	89 04 24             	mov    %eax,(%esp)
 8445162:	e8 df 3a c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8445167:	c7 44 24 04 b1 02 00 	movl   $0x2b1,0x4(%esp)
 844516e:	00 
 844516f:	89 04 24             	mov    %eax,(%esp)
 8445172:	e8 df 3a c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8445177:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844517a:	89 04 24             	mov    %eax,(%esp)
 844517d:	e8 c4 3a c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8445182:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8445189:	ff 
 844518a:	89 04 24             	mov    %eax,(%esp)
 844518d:	e8 c4 3a c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8445192:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8445195:	89 04 24             	mov    %eax,(%esp)
 8445198:	e8 a9 3a c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844519d:	8b 55 08             	mov    0x8(%ebp),%edx
 84451a0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84451a4:	89 04 24             	mov    %eax,(%esp)
 84451a7:	e8 aa 3a c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84451ac:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84451af:	89 04 24             	mov    %eax,(%esp)
 84451b2:	e8 8f 3a c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84451b7:	8b 55 0c             	mov    0xc(%ebp),%edx
 84451ba:	89 54 24 04          	mov    %edx,0x4(%esp)
 84451be:	89 04 24             	mov    %eax,(%esp)
 84451c1:	e8 cc d0 c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 84451c6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84451c9:	89 04 24             	mov    %eax,(%esp)
 84451cc:	e8 75 3a c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84451d1:	8b 55 10             	mov    0x10(%ebp),%edx
 84451d4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84451d8:	89 04 24             	mov    %eax,(%esp)
 84451db:	e8 b2 d0 c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 84451e0:	0f be 5d e4          	movsbl -0x1c(%ebp),%ebx
 84451e4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84451e7:	89 04 24             	mov    %eax,(%esp)
 84451ea:	e8 57 3a c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84451ef:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84451f3:	89 04 24             	mov    %eax,(%esp)
 84451f6:	e8 09 be cb ff       	call   8101004 <_ZN12CStreamGuardlsEc>
 84451fb:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8445200:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8445203:	89 54 24 08          	mov    %edx,0x8(%esp)
 8445207:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 844520e:	00 
 844520f:	89 04 24             	mov    %eax,(%esp)
 8445212:	e8 c7 bd 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8445217:	eb 1b                	jmp    8445234 <_ZN24DB_InsertCeraItemHistory11makeRequestEijjc+0x11a>
 8445219:	89 d3                	mov    %edx,%ebx
 844521b:	89 c6                	mov    %eax,%esi
 844521d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8445220:	89 04 24             	mov    %eax,(%esp)
 8445223:	e8 aa 76 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8445228:	89 f0                	mov    %esi,%eax
 844522a:	89 da                	mov    %ebx,%edx
 844522c:	89 04 24             	mov    %eax,(%esp)
 844522f:	e8 1c e5 69 00       	call   8ae3750 <_Unwind_Resume>
 8445234:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8445237:	89 04 24             	mov    %eax,(%esp)
 844523a:	e8 93 76 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844523f:	83 c4 30             	add    $0x30,%esp
 8445242:	5b                   	pop    %ebx
 8445243:	5e                   	pop    %esi
 8445244:	5d                   	pop    %ebp
 8445245:	c3                   	ret

```

```c
// DB_InsertCeraItemHistory::makeRequest @ 0x844511a

/* DB_InsertCeraItemHistory::makeRequest(int, unsigned int, unsigned int, char) */

void DB_InsertCeraItemHistory::makeRequest(int param_1,uint param_2,uint param_3,char param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xac1b);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08445172 to 08445216 has its CatchHandler @ 08445219 */
  CStreamGuard::operator<<(pCVar2,0x2b1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_4);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

