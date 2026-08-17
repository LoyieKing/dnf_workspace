# DB_ReqItemUpgradeLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08425dbe DB_ReqItemUpgradeLog::dispatch  [0x08425dbe-0x8425ecd] ===
 8425dbe:	55                   	push   %ebp
 8425dbf:	89 e5                	mov    %esp,%ebp
 8425dc1:	56                   	push   %esi
 8425dc2:	53                   	push   %ebx
 8425dc3:	83 ec 60             	sub    $0x60,%esp
 8425dc6:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8425dcb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8425dd2:	00 
 8425dd3:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8425dda:	00 
 8425ddb:	89 04 24             	mov    %eax,(%esp)
 8425dde:	e8 5b f4 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8425de3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8425de6:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8425ded:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8425df4:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8425dfb:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8425e02:	c6 45 c6 01          	movb   $0x1,-0x3a(%ebp)
 8425e06:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8425e09:	89 44 24 04          	mov    %eax,0x4(%esp)
 8425e0d:	8b 45 14             	mov    0x14(%ebp),%eax
 8425e10:	89 04 24             	mov    %eax,(%esp)
 8425e13:	e8 7e 69 1f 00       	call   861c796 <_ZN6StreamrsERj>
 8425e18:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8425e1b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8425e1f:	8b 45 14             	mov    0x14(%ebp),%eax
 8425e22:	89 04 24             	mov    %eax,(%esp)
 8425e25:	e8 6c 69 1f 00       	call   861c796 <_ZN6StreamrsERj>
 8425e2a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8425e2d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8425e31:	8b 45 14             	mov    0x14(%ebp),%eax
 8425e34:	89 04 24             	mov    %eax,(%esp)
 8425e37:	e8 5a 69 1f 00       	call   861c796 <_ZN6StreamrsERj>
 8425e3c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8425e3f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8425e43:	8b 45 14             	mov    0x14(%ebp),%eax
 8425e46:	89 04 24             	mov    %eax,(%esp)
 8425e49:	e8 48 69 1f 00       	call   861c796 <_ZN6StreamrsERj>
 8425e4e:	8d 45 c6             	lea    -0x3a(%ebp),%eax
 8425e51:	89 44 24 04          	mov    %eax,0x4(%esp)
 8425e55:	8b 45 14             	mov    0x14(%ebp),%eax
 8425e58:	89 04 24             	mov    %eax,(%esp)
 8425e5b:	e8 1c 66 1f 00       	call   861c47c <_ZN6StreamrsERb>
 8425e60:	8d 45 c7             	lea    -0x39(%ebp),%eax
 8425e63:	89 44 24 04          	mov    %eax,0x4(%esp)
 8425e67:	8b 45 14             	mov    0x14(%ebp),%eax
 8425e6a:	89 04 24             	mov    %eax,(%esp)
 8425e6d:	e8 36 68 1f 00       	call   861c6a8 <_ZN6StreamrsEPc>
 8425e72:	0f b6 45 c6          	movzbl -0x3a(%ebp),%eax
 8425e76:	0f b6 f0             	movzbl %al,%esi
 8425e79:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 8425e7c:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 8425e7f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8425e82:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8425e85:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 8425e89:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8425e8d:	8d 5d c7             	lea    -0x39(%ebp),%ebx
 8425e90:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8425e94:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8425e98:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8425e9c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8425ea0:	c7 44 24 04 48 e8 c4 	movl   $0x8c4e848,0x4(%esp)
 8425ea7:	08 
 8425ea8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8425eab:	89 04 24             	mov    %eax,(%esp)
 8425eae:	e8 0d e3 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8425eb3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8425eba:	00 
 8425ebb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8425ebe:	89 04 24             	mov    %eax,(%esp)
 8425ec1:	e8 60 e4 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8425ec6:	83 c4 60             	add    $0x60,%esp
 8425ec9:	5b                   	pop    %ebx
 8425eca:	5e                   	pop    %esi
 8425ecb:	5d                   	pop    %ebp
 8425ecc:	c3                   	ret
 8425ecd:	90                   	nop

```

```c
// DB_ReqItemUpgradeLog::dispatch @ 0x8425dbe

/* DB_ReqItemUpgradeLog::dispatch(int, int, Stream*) */

void DB_ReqItemUpgradeLog::dispatch(int param_1,int param_2,Stream *param_3)

{
  Stream *in_stack_00000010;
  bool local_3e;
  char local_3d [29];
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_3e = true;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::operator>>(in_stack_00000010,&local_1c);
  Stream::operator>>(in_stack_00000010,&local_20);
  Stream::operator>>(in_stack_00000010,&local_3e);
  Stream::operator>>(in_stack_00000010,local_3d);
  MySQL::set_query(local_10,
                   "inSert into log_item_develop(occ_time,it_no,server_id,charac_no,charac_name,develop,sucess_flag) values(now(),%d,%d,%d,\'%s\',%d,%d)"
                   ,local_18,local_14,local_1c,local_3d,local_20,(uint)local_3e);
  MySQL::exec(local_10,true);
  return;
}

```

---

## makeRequest

```asm
// === 08425ece DB_ReqItemUpgradeLog::makeRequest  [0x08425ece-0x842602d] ===
 8425ece:	55                   	push   %ebp
 8425ecf:	89 e5                	mov    %esp,%ebp
 8425ed1:	56                   	push   %esi
 8425ed2:	53                   	push   %ebx
 8425ed3:	83 ec 30             	sub    $0x30,%esp
 8425ed6:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8425ed9:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8425edc:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8425ee1:	c7 44 24 08 f7 63 00 	movl   $0x63f7,0x8(%esp)
 8425ee8:	00 
 8425ee9:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8425ef0:	08 
 8425ef1:	89 04 24             	mov    %eax,(%esp)
 8425ef4:	e8 8d 9b e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8425ef9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8425f00:	00 
 8425f01:	89 44 24 04          	mov    %eax,0x4(%esp)
 8425f05:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8425f08:	89 04 24             	mov    %eax,(%esp)
 8425f0b:	e8 16 2d ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8425f10:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8425f13:	89 04 24             	mov    %eax,(%esp)
 8425f16:	e8 2b 2d ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8425f1b:	c7 44 24 04 c0 00 00 	movl   $0xc0,0x4(%esp)
 8425f22:	00 
 8425f23:	89 04 24             	mov    %eax,(%esp)
 8425f26:	e8 2b 2d ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8425f2b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8425f2e:	89 04 24             	mov    %eax,(%esp)
 8425f31:	e8 10 2d ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8425f36:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8425f3d:	ff 
 8425f3e:	89 04 24             	mov    %eax,(%esp)
 8425f41:	e8 10 2d ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8425f46:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8425f49:	89 04 24             	mov    %eax,(%esp)
 8425f4c:	e8 f5 2c ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8425f51:	8b 55 08             	mov    0x8(%ebp),%edx
 8425f54:	89 54 24 04          	mov    %edx,0x4(%esp)
 8425f58:	89 04 24             	mov    %eax,(%esp)
 8425f5b:	e8 32 c3 cb ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8425f60:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8425f63:	89 04 24             	mov    %eax,(%esp)
 8425f66:	e8 db 2c ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8425f6b:	8b 55 0c             	mov    0xc(%ebp),%edx
 8425f6e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8425f72:	89 04 24             	mov    %eax,(%esp)
 8425f75:	e8 18 c3 cb ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8425f7a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8425f7d:	89 04 24             	mov    %eax,(%esp)
 8425f80:	e8 c1 2c ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8425f85:	8b 55 10             	mov    0x10(%ebp),%edx
 8425f88:	89 54 24 04          	mov    %edx,0x4(%esp)
 8425f8c:	89 04 24             	mov    %eax,(%esp)
 8425f8f:	e8 fe c2 cb ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8425f94:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8425f97:	89 04 24             	mov    %eax,(%esp)
 8425f9a:	e8 a7 2c ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8425f9f:	8b 55 18             	mov    0x18(%ebp),%edx
 8425fa2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8425fa6:	89 04 24             	mov    %eax,(%esp)
 8425fa9:	e8 e4 c2 cb ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8425fae:	0f b6 5d e4          	movzbl -0x1c(%ebp),%ebx
 8425fb2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8425fb5:	89 04 24             	mov    %eax,(%esp)
 8425fb8:	e8 89 2c ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8425fbd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8425fc1:	89 04 24             	mov    %eax,(%esp)
 8425fc4:	e8 67 74 02 00       	call   844d430 <_ZN12CStreamGuardlsEb>
 8425fc9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8425fcc:	89 04 24             	mov    %eax,(%esp)
 8425fcf:	e8 72 2c ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8425fd4:	8b 55 14             	mov    0x14(%ebp),%edx
 8425fd7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8425fdb:	89 04 24             	mov    %eax,(%esp)
 8425fde:	e8 a7 4d e0 ff       	call   822ad8a <_ZN12CStreamGuardlsEPc>
 8425fe3:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8425fe8:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8425feb:	89 54 24 08          	mov    %edx,0x8(%esp)
 8425fef:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8425ff6:	00 
 8425ff7:	89 04 24             	mov    %eax,(%esp)
 8425ffa:	e8 df af 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8425fff:	eb 1b                	jmp    842601c <_ZN20DB_ReqItemUpgradeLog11makeRequestEjjjPKcjb+0x14e>
 8426001:	89 d3                	mov    %edx,%ebx
 8426003:	89 c6                	mov    %eax,%esi
 8426005:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8426008:	89 04 24             	mov    %eax,(%esp)
 842600b:	e8 c2 68 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8426010:	89 f0                	mov    %esi,%eax
 8426012:	89 da                	mov    %ebx,%edx
 8426014:	89 04 24             	mov    %eax,(%esp)
 8426017:	e8 34 d7 6b 00       	call   8ae3750 <_Unwind_Resume>
 842601c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842601f:	89 04 24             	mov    %eax,(%esp)
 8426022:	e8 ab 68 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8426027:	83 c4 30             	add    $0x30,%esp
 842602a:	5b                   	pop    %ebx
 842602b:	5e                   	pop    %esi
 842602c:	5d                   	pop    %ebp
 842602d:	c3                   	ret

```

```c
// DB_ReqItemUpgradeLog::makeRequest @ 0x8425ece

/* DB_ReqItemUpgradeLog::makeRequest(unsigned int, unsigned int, unsigned int, char const*, unsigned
   int, bool) */

void DB_ReqItemUpgradeLog::makeRequest
               (uint param_1,uint param_2,uint param_3,char *param_4,uint param_5,bool param_6)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x63f7);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08425f26 to 08425ffe has its CatchHandler @ 08426001 */
  CStreamGuard::operator<<(pCVar2,0xc0);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_5);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_6);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_4);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

