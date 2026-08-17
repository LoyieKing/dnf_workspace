# DB_Check3rdPartyConcent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08445eee DB_Check3rdPartyConcent::dispatch  [0x08445eee-0x84460bf] ===
 8445eee:	55                   	push   %ebp
 8445eef:	89 e5                	mov    %esp,%ebp
 8445ef1:	56                   	push   %esi
 8445ef2:	53                   	push   %ebx
 8445ef3:	83 ec 30             	sub    $0x30,%esp
 8445ef6:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8445efd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8445f00:	89 44 24 04          	mov    %eax,0x4(%esp)
 8445f04:	8b 45 14             	mov    0x14(%ebp),%eax
 8445f07:	89 04 24             	mov    %eax,(%esp)
 8445f0a:	e8 87 68 1d 00       	call   861c796 <_ZN6StreamrsERj>
 8445f0f:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8445f14:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8445f1b:	00 
 8445f1c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8445f23:	00 
 8445f24:	89 04 24             	mov    %eax,(%esp)
 8445f27:	e8 12 f3 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8445f2c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8445f2f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8445f32:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8445f39:	00 
 8445f3a:	89 04 24             	mov    %eax,(%esp)
 8445f3d:	e8 09 31 cc ff       	call   810904b <_Z14NumberToStringji>
 8445f42:	89 44 24 08          	mov    %eax,0x8(%esp)
 8445f46:	c7 44 24 04 dc 7a c5 	movl   $0x8c57adc,0x4(%esp)
 8445f4d:	08 
 8445f4e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8445f51:	89 04 24             	mov    %eax,(%esp)
 8445f54:	e8 67 e2 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8445f59:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8445f60:	00 
 8445f61:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8445f64:	89 04 24             	mov    %eax,(%esp)
 8445f67:	e8 ba e3 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8445f6c:	83 f0 01             	xor    $0x1,%eax
 8445f6f:	84 c0                	test   %al,%al
 8445f71:	74 0a                	je     8445f7d <_ZN23DB_Check3rdPartyConcent8dispatchEiiP6Stream+0x8f>
 8445f73:	bb 00 00 00 00       	mov    $0x0,%ebx
 8445f78:	e9 39 01 00 00       	jmp    84460b6 <_ZN23DB_Check3rdPartyConcent8dispatchEiiP6Stream+0x1c8>
 8445f7d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8445f80:	89 04 24             	mov    %eax,(%esp)
 8445f83:	e8 e4 c3 c9 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8445f88:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8445f8b:	c6 45 eb 00          	movb   $0x0,-0x15(%ebp)
 8445f8f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8445f93:	7e 47                	jle    8445fdc <_ZN23DB_Check3rdPartyConcent8dispatchEiiP6Stream+0xee>
 8445f95:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8445f98:	89 04 24             	mov    %eax,(%esp)
 8445f9b:	e8 1c e5 fa ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8445fa0:	83 f0 01             	xor    $0x1,%eax
 8445fa3:	84 c0                	test   %al,%al
 8445fa5:	74 0a                	je     8445fb1 <_ZN23DB_Check3rdPartyConcent8dispatchEiiP6Stream+0xc3>
 8445fa7:	bb 00 00 00 00       	mov    $0x0,%ebx
 8445fac:	e9 05 01 00 00       	jmp    84460b6 <_ZN23DB_Check3rdPartyConcent8dispatchEiiP6Stream+0x1c8>
 8445fb1:	8d 45 eb             	lea    -0x15(%ebp),%eax
 8445fb4:	89 44 24 08          	mov    %eax,0x8(%esp)
 8445fb8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8445fbf:	00 
 8445fc0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8445fc3:	89 04 24             	mov    %eax,(%esp)
 8445fc6:	e8 ef 7e cb ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 8445fcb:	83 f0 01             	xor    $0x1,%eax
 8445fce:	84 c0                	test   %al,%al
 8445fd0:	74 14                	je     8445fe6 <_ZN23DB_Check3rdPartyConcent8dispatchEiiP6Stream+0xf8>
 8445fd2:	bb 00 00 00 00       	mov    $0x0,%ebx
 8445fd7:	e9 da 00 00 00       	jmp    84460b6 <_ZN23DB_Check3rdPartyConcent8dispatchEiiP6Stream+0x1c8>
 8445fdc:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8445fe0:	75 04                	jne    8445fe6 <_ZN23DB_Check3rdPartyConcent8dispatchEiiP6Stream+0xf8>
 8445fe2:	c6 45 eb 00          	movb   $0x0,-0x15(%ebp)
 8445fe6:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8445feb:	c7 44 24 08 91 ad 00 	movl   $0xad91,0x8(%esp)
 8445ff2:	00 
 8445ff3:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8445ffa:	08 
 8445ffb:	89 04 24             	mov    %eax,(%esp)
 8445ffe:	e8 83 9a e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8446003:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 844600a:	00 
 844600b:	89 44 24 04          	mov    %eax,0x4(%esp)
 844600f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8446012:	89 04 24             	mov    %eax,(%esp)
 8446015:	e8 0c 2c c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 844601a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 844601d:	89 04 24             	mov    %eax,(%esp)
 8446020:	e8 21 2c c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8446025:	c7 44 24 04 b7 02 00 	movl   $0x2b7,0x4(%esp)
 844602c:	00 
 844602d:	89 04 24             	mov    %eax,(%esp)
 8446030:	e8 21 2c c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8446035:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8446038:	89 04 24             	mov    %eax,(%esp)
 844603b:	e8 06 2c c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8446040:	8b 55 10             	mov    0x10(%ebp),%edx
 8446043:	89 54 24 04          	mov    %edx,0x4(%esp)
 8446047:	89 04 24             	mov    %eax,(%esp)
 844604a:	e8 07 2c c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844604f:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8446053:	0f b6 d8             	movzbl %al,%ebx
 8446056:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8446059:	89 04 24             	mov    %eax,(%esp)
 844605c:	e8 e5 2b c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8446061:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8446065:	89 04 24             	mov    %eax,(%esp)
 8446068:	e8 e7 73 00 00       	call   844d454 <_ZN12CStreamGuardlsEh>
 844606d:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8446072:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8446075:	89 54 24 08          	mov    %edx,0x8(%esp)
 8446079:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8446080:	00 
 8446081:	89 04 24             	mov    %eax,(%esp)
 8446084:	e8 55 af 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8446089:	bb 01 00 00 00       	mov    $0x1,%ebx
 844608e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8446091:	89 04 24             	mov    %eax,(%esp)
 8446094:	e8 39 68 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8446099:	eb 1b                	jmp    84460b6 <_ZN23DB_Check3rdPartyConcent8dispatchEiiP6Stream+0x1c8>
 844609b:	89 d3                	mov    %edx,%ebx
 844609d:	89 c6                	mov    %eax,%esi
 844609f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84460a2:	89 04 24             	mov    %eax,(%esp)
 84460a5:	e8 28 68 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84460aa:	89 f0                	mov    %esi,%eax
 84460ac:	89 da                	mov    %ebx,%edx
 84460ae:	89 04 24             	mov    %eax,(%esp)
 84460b1:	e8 9a d6 69 00       	call   8ae3750 <_Unwind_Resume>
 84460b6:	89 d8                	mov    %ebx,%eax
 84460b8:	83 c4 30             	add    $0x30,%esp
 84460bb:	5b                   	pop    %ebx
 84460bc:	5e                   	pop    %esi
 84460bd:	5d                   	pop    %ebp
 84460be:	c3                   	ret
 84460bf:	90                   	nop

```

```c
// DB_Check3rdPartyConcent::dispatch @ 0x8445eee

/* DB_Check3rdPartyConcent::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_Check3rdPartyConcent::dispatch
          (DB_Check3rdPartyConcent *this,int param_1,int param_2,Stream *param_3)

{
  uchar uVar1;
  char cVar2;
  undefined4 uVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  CStreamGuard local_24 [11];
  uchar local_19;
  uint local_18;
  MySQL *local_14;
  int local_10;
  
  local_18 = 0;
  Stream::operator>>(param_3,&local_18);
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar3 = NumberToString(local_18,0);
  MySQL::set_query(local_14,"seLect 3dparty_consent from member_join_info where m_id = %s",uVar3);
  cVar2 = MySQL::exec(local_14,true);
  if (cVar2 != '\x01') {
    return 0;
  }
  local_10 = MySQL::get_n_rows(local_14);
  local_19 = '\0';
  if (local_10 < 1) {
    if (local_10 == 0) {
      local_19 = '\0';
    }
  }
  else {
    cVar2 = MySQL::fetch(local_14);
    if (cVar2 != '\x01') {
      return 0;
    }
    cVar2 = MySQL::get_ubyte(local_14,0,&local_19);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xad91);
  CStreamGuard::CStreamGuard(local_24,pSVar4,true);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 08446030 to 08446088 has its CatchHandler @ 0844609b */
  CStreamGuard::operator<<(pCVar5,0x2b7);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_24);
  CStreamGuard::operator<<(pCVar5,param_2);
  uVar1 = local_19;
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_24);
  CStreamGuard::operator<<(pCVar5,uVar1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_24);
  CStreamGuard::~CStreamGuard(local_24);
  return 1;
}

```

---

## makeRequest

```asm
// === 084460c0 DB_Check3rdPartyConcent::makeRequest  [0x084460c0-0x8446195] ===
 84460c0:	55                   	push   %ebp
 84460c1:	89 e5                	mov    %esp,%ebp
 84460c3:	56                   	push   %esi
 84460c4:	53                   	push   %ebx
 84460c5:	83 ec 20             	sub    $0x20,%esp
 84460c8:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84460cd:	c7 44 24 08 a1 ad 00 	movl   $0xada1,0x8(%esp)
 84460d4:	00 
 84460d5:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84460dc:	08 
 84460dd:	89 04 24             	mov    %eax,(%esp)
 84460e0:	e8 a1 99 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84460e5:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84460ec:	00 
 84460ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 84460f1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84460f4:	89 04 24             	mov    %eax,(%esp)
 84460f7:	e8 2a 2b c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84460fc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84460ff:	89 04 24             	mov    %eax,(%esp)
 8446102:	e8 3f 2b c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8446107:	c7 44 24 04 b7 02 00 	movl   $0x2b7,0x4(%esp)
 844610e:	00 
 844610f:	89 04 24             	mov    %eax,(%esp)
 8446112:	e8 3f 2b c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8446117:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844611a:	89 04 24             	mov    %eax,(%esp)
 844611d:	e8 24 2b c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8446122:	8b 55 08             	mov    0x8(%ebp),%edx
 8446125:	89 54 24 04          	mov    %edx,0x4(%esp)
 8446129:	89 04 24             	mov    %eax,(%esp)
 844612c:	e8 25 2b c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8446131:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8446134:	89 04 24             	mov    %eax,(%esp)
 8446137:	e8 0a 2b c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844613c:	8b 55 0c             	mov    0xc(%ebp),%edx
 844613f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8446143:	89 04 24             	mov    %eax,(%esp)
 8446146:	e8 47 c1 c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 844614b:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8446150:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8446153:	89 54 24 08          	mov    %edx,0x8(%esp)
 8446157:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 844615e:	00 
 844615f:	89 04 24             	mov    %eax,(%esp)
 8446162:	e8 77 ae 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8446167:	eb 1b                	jmp    8446184 <_ZN23DB_Check3rdPartyConcent11makeRequestEij+0xc4>
 8446169:	89 d3                	mov    %edx,%ebx
 844616b:	89 c6                	mov    %eax,%esi
 844616d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8446170:	89 04 24             	mov    %eax,(%esp)
 8446173:	e8 5a 67 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8446178:	89 f0                	mov    %esi,%eax
 844617a:	89 da                	mov    %ebx,%edx
 844617c:	89 04 24             	mov    %eax,(%esp)
 844617f:	e8 cc d5 69 00       	call   8ae3750 <_Unwind_Resume>
 8446184:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8446187:	89 04 24             	mov    %eax,(%esp)
 844618a:	e8 43 67 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844618f:	83 c4 20             	add    $0x20,%esp
 8446192:	5b                   	pop    %ebx
 8446193:	5e                   	pop    %esi
 8446194:	5d                   	pop    %ebp
 8446195:	c3                   	ret

```

```c
// DB_Check3rdPartyConcent::makeRequest @ 0x84460c0

/* DB_Check3rdPartyConcent::makeRequest(int, unsigned int) */

void DB_Check3rdPartyConcent::makeRequest(int param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xada1);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08446112 to 08446166 has its CatchHandler @ 08446169 */
  CStreamGuard::operator<<(pCVar2,0x2b7);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

