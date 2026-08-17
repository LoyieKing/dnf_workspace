# DB_GetUserRegdate

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## SendResult

```asm
// === 0844309c DB_GetUserRegdate::SendResult  [0x0844309c-0x844317d] ===
 844309c:	55                   	push   %ebp
 844309d:	89 e5                	mov    %esp,%ebp
 844309f:	56                   	push   %esi
 84430a0:	53                   	push   %ebx
 84430a1:	83 ec 20             	sub    $0x20,%esp
 84430a4:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84430a9:	c7 44 24 08 c1 a4 00 	movl   $0xa4c1,0x8(%esp)
 84430b0:	00 
 84430b1:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84430b8:	08 
 84430b9:	89 04 24             	mov    %eax,(%esp)
 84430bc:	e8 c5 c9 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84430c1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84430c8:	00 
 84430c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84430cd:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84430d0:	89 04 24             	mov    %eax,(%esp)
 84430d3:	e8 4e 5b c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84430d8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84430db:	89 04 24             	mov    %eax,(%esp)
 84430de:	e8 63 5b c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84430e3:	8b 55 0c             	mov    0xc(%ebp),%edx
 84430e6:	89 54 24 04          	mov    %edx,0x4(%esp)
 84430ea:	89 04 24             	mov    %eax,(%esp)
 84430ed:	e8 64 5b c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84430f2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84430f5:	89 04 24             	mov    %eax,(%esp)
 84430f8:	e8 49 5b c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84430fd:	8b 55 10             	mov    0x10(%ebp),%edx
 8443100:	89 54 24 04          	mov    %edx,0x4(%esp)
 8443104:	89 04 24             	mov    %eax,(%esp)
 8443107:	e8 4a 5b c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844310c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844310f:	89 04 24             	mov    %eax,(%esp)
 8443112:	e8 37 5b c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8443117:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 844311e:	00 
 844311f:	8b 55 14             	mov    0x14(%ebp),%edx
 8443122:	89 54 24 04          	mov    %edx,0x4(%esp)
 8443126:	89 04 24             	mov    %eax,(%esp)
 8443129:	e8 24 b5 c9 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 844312e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8443133:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8443136:	89 54 24 08          	mov    %edx,0x8(%esp)
 844313a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8443141:	00 
 8443142:	89 04 24             	mov    %eax,(%esp)
 8443145:	e8 94 de 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 844314a:	bb 01 00 00 00       	mov    $0x1,%ebx
 844314f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8443152:	89 04 24             	mov    %eax,(%esp)
 8443155:	e8 78 97 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844315a:	89 d8                	mov    %ebx,%eax
 844315c:	83 c4 20             	add    $0x20,%esp
 844315f:	5b                   	pop    %ebx
 8443160:	5e                   	pop    %esi
 8443161:	5d                   	pop    %ebp
 8443162:	c3                   	ret
 8443163:	89 d3                	mov    %edx,%ebx
 8443165:	89 c6                	mov    %eax,%esi
 8443167:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844316a:	89 04 24             	mov    %eax,(%esp)
 844316d:	e8 60 97 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8443172:	89 f0                	mov    %esi,%eax
 8443174:	89 da                	mov    %ebx,%edx
 8443176:	89 04 24             	mov    %eax,(%esp)
 8443179:	e8 d2 05 6a 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// DB_GetUserRegdate::SendResult @ 0x844309c

/* DB_GetUserRegdate::SendResult(int, int, SIG_GET_USER_REGDATE*) */

undefined4 __thiscall
DB_GetUserRegdate::SendResult
          (DB_GetUserRegdate *this,int param_1,int param_2,SIG_GET_USER_REGDATE *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xa4c1);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 084430ed to 08443149 has its CatchHandler @ 08443163 */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,param_3,0xc);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}

```

---

## dispatch

```asm
// === 08442e68 DB_GetUserRegdate::dispatch  [0x08442e68-0x8442fad] ===
 8442e68:	55                   	push   %ebp
 8442e69:	89 e5                	mov    %esp,%ebp
 8442e6b:	83 ec 38             	sub    $0x38,%esp
 8442e6e:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8442e75:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8442e7c:	8b 45 14             	mov    0x14(%ebp),%eax
 8442e7f:	89 04 24             	mov    %eax,(%esp)
 8442e82:	e8 97 0f 01 00       	call   8453e1e <_ZN6Stream12GetOutBufferI20SIG_GET_USER_REGDATEEEPT_v>
 8442e87:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8442e8a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8442e8f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8442e96:	00 
 8442e97:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8442e9e:	00 
 8442e9f:	89 04 24             	mov    %eax,(%esp)
 8442ea2:	e8 97 23 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8442ea7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8442eaa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8442ead:	8b 00                	mov    (%eax),%eax
 8442eaf:	89 44 24 08          	mov    %eax,0x8(%esp)
 8442eb3:	c7 44 24 04 6c 6c c5 	movl   $0x8c56c6c,0x4(%esp)
 8442eba:	08 
 8442ebb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8442ebe:	89 04 24             	mov    %eax,(%esp)
 8442ec1:	e8 fa 12 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8442ec6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8442ecd:	00 
 8442ece:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8442ed1:	89 04 24             	mov    %eax,(%esp)
 8442ed4:	e8 4d 14 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8442ed9:	83 f0 01             	xor    $0x1,%eax
 8442edc:	84 c0                	test   %al,%al
 8442ede:	74 0a                	je     8442eea <_ZN17DB_GetUserRegdate8dispatchEiiP6Stream+0x82>
 8442ee0:	b8 00 00 00 00       	mov    $0x0,%eax
 8442ee5:	e9 c2 00 00 00       	jmp    8442fac <_ZN17DB_GetUserRegdate8dispatchEiiP6Stream+0x144>
 8442eea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8442eed:	89 04 24             	mov    %eax,(%esp)
 8442ef0:	e8 77 f4 c9 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8442ef5:	85 c0                	test   %eax,%eax
 8442ef7:	0f 95 c0             	setne  %al
 8442efa:	84 c0                	test   %al,%al
 8442efc:	74 6c                	je     8442f6a <_ZN17DB_GetUserRegdate8dispatchEiiP6Stream+0x102>
 8442efe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8442f01:	89 04 24             	mov    %eax,(%esp)
 8442f04:	e8 b3 15 fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8442f09:	83 f0 01             	xor    $0x1,%eax
 8442f0c:	84 c0                	test   %al,%al
 8442f0e:	74 0a                	je     8442f1a <_ZN17DB_GetUserRegdate8dispatchEiiP6Stream+0xb2>
 8442f10:	b8 00 00 00 00       	mov    $0x0,%eax
 8442f15:	e9 92 00 00 00       	jmp    8442fac <_ZN17DB_GetUserRegdate8dispatchEiiP6Stream+0x144>
 8442f1a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8442f1d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8442f21:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8442f28:	00 
 8442f29:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8442f2c:	89 04 24             	mov    %eax,(%esp)
 8442f2f:	e8 be f3 c9 ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8442f34:	83 f0 01             	xor    $0x1,%eax
 8442f37:	84 c0                	test   %al,%al
 8442f39:	74 07                	je     8442f42 <_ZN17DB_GetUserRegdate8dispatchEiiP6Stream+0xda>
 8442f3b:	b8 00 00 00 00       	mov    $0x0,%eax
 8442f40:	eb 6a                	jmp    8442fac <_ZN17DB_GetUserRegdate8dispatchEiiP6Stream+0x144>
 8442f42:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8442f45:	89 44 24 08          	mov    %eax,0x8(%esp)
 8442f49:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8442f50:	00 
 8442f51:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8442f54:	89 04 24             	mov    %eax,(%esp)
 8442f57:	e8 96 f3 c9 ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8442f5c:	83 f0 01             	xor    $0x1,%eax
 8442f5f:	84 c0                	test   %al,%al
 8442f61:	74 07                	je     8442f6a <_ZN17DB_GetUserRegdate8dispatchEiiP6Stream+0x102>
 8442f63:	b8 00 00 00 00       	mov    $0x0,%eax
 8442f68:	eb 42                	jmp    8442fac <_ZN17DB_GetUserRegdate8dispatchEiiP6Stream+0x144>
 8442f6a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8442f6d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8442f70:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 8442f75:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8442f78:	f7 e2                	mul    %edx
 8442f7a:	c1 ea 05             	shr    $0x5,%edx
 8442f7d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8442f80:	89 50 04             	mov    %edx,0x4(%eax)
 8442f83:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8442f86:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8442f89:	89 50 08             	mov    %edx,0x8(%eax)
 8442f8c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8442f8f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8442f93:	8b 45 10             	mov    0x10(%ebp),%eax
 8442f96:	89 44 24 08          	mov    %eax,0x8(%esp)
 8442f9a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8442f9d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8442fa1:	8b 45 08             	mov    0x8(%ebp),%eax
 8442fa4:	89 04 24             	mov    %eax,(%esp)
 8442fa7:	e8 f0 00 00 00       	call   844309c <_ZN17DB_GetUserRegdate10SendResultEiiP20SIG_GET_USER_REGDATE>
 8442fac:	c9                   	leave
 8442fad:	c3                   	ret

```

```c
// DB_GetUserRegdate::dispatch @ 0x8442e68

/* DB_GetUserRegdate::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_GetUserRegdate::dispatch(DB_GetUserRegdate *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_1c;
  uint local_18;
  SIG_GET_USER_REGDATE *local_14;
  MySQL *local_10;
  
  local_18 = 0;
  local_1c = 0;
  local_14 = Stream::GetOutBuffer<SIG_GET_USER_REGDATE>(param_3);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  MySQL::set_query(local_10,
                   "seLect DATE_FORMAT(from_unixtime(reg_date),\'%%Y%%m%%d%%H\') ,reg_date from member_info where m_id=%d"
                   ,*(undefined4 *)local_14);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 != '\x01') {
    return 0;
  }
  iVar2 = MySQL::get_n_rows(local_10);
  if (iVar2 != 0) {
    cVar1 = MySQL::fetch(local_10);
    if (cVar1 != '\x01') {
      return 0;
    }
    cVar1 = MySQL::get_uint(local_10,0,&local_18);
    if (cVar1 != '\x01') {
      return 0;
    }
    cVar1 = MySQL::get_uint(local_10,1,&local_1c);
    if (cVar1 != '\x01') {
      return 0;
    }
  }
  *(uint *)(local_14 + 4) = local_18 / 100;
  *(uint *)(local_14 + 8) = local_1c;
  uVar3 = SendResult(this,param_1,param_2,local_14);
  return uVar3;
}

```

---

## makeRequest

```asm
// === 08442fae DB_GetUserRegdate::makeRequest  [0x08442fae-0x844309b] ===
 8442fae:	55                   	push   %ebp
 8442faf:	89 e5                	mov    %esp,%ebp
 8442fb1:	56                   	push   %esi
 8442fb2:	53                   	push   %ebx
 8442fb3:	83 ec 20             	sub    $0x20,%esp
 8442fb6:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8442fbb:	c7 44 24 08 b2 a4 00 	movl   $0xa4b2,0x8(%esp)
 8442fc2:	00 
 8442fc3:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8442fca:	08 
 8442fcb:	89 04 24             	mov    %eax,(%esp)
 8442fce:	e8 b3 ca e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8442fd3:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8442fda:	00 
 8442fdb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8442fdf:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8442fe2:	89 04 24             	mov    %eax,(%esp)
 8442fe5:	e8 3c 5c c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8442fea:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8442fed:	89 04 24             	mov    %eax,(%esp)
 8442ff0:	e8 51 5c c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8442ff5:	c7 44 24 04 a1 02 00 	movl   $0x2a1,0x4(%esp)
 8442ffc:	00 
 8442ffd:	89 04 24             	mov    %eax,(%esp)
 8443000:	e8 51 5c c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8443005:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8443008:	89 04 24             	mov    %eax,(%esp)
 844300b:	e8 36 5c c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8443010:	8b 55 08             	mov    0x8(%ebp),%edx
 8443013:	89 54 24 04          	mov    %edx,0x4(%esp)
 8443017:	89 04 24             	mov    %eax,(%esp)
 844301a:	e8 37 5c c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844301f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8443022:	89 04 24             	mov    %eax,(%esp)
 8443025:	e8 24 5c c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 844302a:	89 04 24             	mov    %eax,(%esp)
 844302d:	e8 40 0e 01 00       	call   8453e72 <_ZN12CStreamGuard11GetInBufferI20SIG_GET_USER_REGDATEEEPT_v>
 8443032:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8443035:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8443038:	8b 55 0c             	mov    0xc(%ebp),%edx
 844303b:	89 10                	mov    %edx,(%eax)
 844303d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8443040:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8443047:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844304a:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8443051:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8443056:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8443059:	89 54 24 08          	mov    %edx,0x8(%esp)
 844305d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8443064:	00 
 8443065:	89 04 24             	mov    %eax,(%esp)
 8443068:	e8 71 df 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 844306d:	eb 1b                	jmp    844308a <_ZN17DB_GetUserRegdate11makeRequestEij+0xdc>
 844306f:	89 d3                	mov    %edx,%ebx
 8443071:	89 c6                	mov    %eax,%esi
 8443073:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8443076:	89 04 24             	mov    %eax,(%esp)
 8443079:	e8 54 98 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844307e:	89 f0                	mov    %esi,%eax
 8443080:	89 da                	mov    %ebx,%edx
 8443082:	89 04 24             	mov    %eax,(%esp)
 8443085:	e8 c6 06 6a 00       	call   8ae3750 <_Unwind_Resume>
 844308a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 844308d:	89 04 24             	mov    %eax,(%esp)
 8443090:	e8 3d 98 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8443095:	83 c4 20             	add    $0x20,%esp
 8443098:	5b                   	pop    %ebx
 8443099:	5e                   	pop    %esi
 844309a:	5d                   	pop    %ebp
 844309b:	c3                   	ret

```

```c
// DB_GetUserRegdate::makeRequest @ 0x8442fae

/* DB_GetUserRegdate::makeRequest(int, unsigned int) */

void DB_GetUserRegdate::makeRequest(int param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_GET_USER_REGDATE *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xa4b2);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08443000 to 0844306c has its CatchHandler @ 0844306f */
  CStreamGuard::operator<<(pCVar2,0x2a1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_GET_USER_REGDATE>(pCVar2);
  *(uint *)local_10 = param_2;
  *(undefined4 *)(local_10 + 8) = 0;
  *(undefined4 *)(local_10 + 4) = 0;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

