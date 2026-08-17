# DB_SaveEventLevelupSupport

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0844cafe DB_SaveEventLevelupSupport::dispatch  [0x0844cafe-0x844cc2d] ===
 844cafe:	55                   	push   %ebp
 844caff:	89 e5                	mov    %esp,%ebp
 844cb01:	83 ec 38             	sub    $0x38,%esp
 844cb04:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 844cb0b:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 844cb12:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 844cb19:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844cb1c:	89 44 24 04          	mov    %eax,0x4(%esp)
 844cb20:	8b 45 14             	mov    0x14(%ebp),%eax
 844cb23:	89 04 24             	mov    %eax,(%esp)
 844cb26:	e8 99 fa 1c 00       	call   861c5c4 <_ZN6StreamrsERi>
 844cb2b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 844cb2e:	89 44 24 04          	mov    %eax,0x4(%esp)
 844cb32:	8b 45 14             	mov    0x14(%ebp),%eax
 844cb35:	89 04 24             	mov    %eax,(%esp)
 844cb38:	e8 87 fa 1c 00       	call   861c5c4 <_ZN6StreamrsERi>
 844cb3d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 844cb40:	89 44 24 04          	mov    %eax,0x4(%esp)
 844cb44:	8b 45 14             	mov    0x14(%ebp),%eax
 844cb47:	89 04 24             	mov    %eax,(%esp)
 844cb4a:	e8 75 fa 1c 00       	call   861c5c4 <_ZN6StreamrsERi>
 844cb4f:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 844cb54:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844cb5b:	00 
 844cb5c:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 844cb63:	00 
 844cb64:	89 04 24             	mov    %eax,(%esp)
 844cb67:	e8 d2 86 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 844cb6c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 844cb6f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 844cb73:	75 0a                	jne    844cb7f <_ZN26DB_SaveEventLevelupSupport8dispatchEiiP6Stream+0x81>
 844cb75:	b8 00 00 00 00       	mov    $0x0,%eax
 844cb7a:	e9 ad 00 00 00       	jmp    844cc2c <_ZN26DB_SaveEventLevelupSupport8dispatchEiiP6Stream+0x12e>
 844cb7f:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 844cb82:	8b 55 f0             	mov    -0x10(%ebp),%edx
 844cb85:	8b 45 e8             	mov    -0x18(%ebp),%eax
 844cb88:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 844cb8c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 844cb90:	89 44 24 08          	mov    %eax,0x8(%esp)
 844cb94:	c7 44 24 04 60 9b c5 	movl   $0x8c59b60,0x4(%esp)
 844cb9b:	08 
 844cb9c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844cb9f:	89 04 24             	mov    %eax,(%esp)
 844cba2:	e8 19 76 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844cba7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844cbae:	00 
 844cbaf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844cbb2:	89 04 24             	mov    %eax,(%esp)
 844cbb5:	e8 6c 77 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844cbba:	83 f0 01             	xor    $0x1,%eax
 844cbbd:	84 c0                	test   %al,%al
 844cbbf:	74 07                	je     844cbc8 <_ZN26DB_SaveEventLevelupSupport8dispatchEiiP6Stream+0xca>
 844cbc1:	b8 00 00 00 00       	mov    $0x0,%eax
 844cbc6:	eb 64                	jmp    844cc2c <_ZN26DB_SaveEventLevelupSupport8dispatchEiiP6Stream+0x12e>
 844cbc8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844cbcb:	89 04 24             	mov    %eax,(%esp)
 844cbce:	e8 3d 77 fa ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 844cbd3:	09 d0                	or     %edx,%eax
 844cbd5:	85 c0                	test   %eax,%eax
 844cbd7:	0f 94 c0             	sete   %al
 844cbda:	84 c0                	test   %al,%al
 844cbdc:	74 49                	je     844cc27 <_ZN26DB_SaveEventLevelupSupport8dispatchEiiP6Stream+0x129>
 844cbde:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 844cbe1:	8b 55 ec             	mov    -0x14(%ebp),%edx
 844cbe4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844cbe7:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 844cbeb:	89 54 24 0c          	mov    %edx,0xc(%esp)
 844cbef:	89 44 24 08          	mov    %eax,0x8(%esp)
 844cbf3:	c7 44 24 04 b0 9b c5 	movl   $0x8c59bb0,0x4(%esp)
 844cbfa:	08 
 844cbfb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844cbfe:	89 04 24             	mov    %eax,(%esp)
 844cc01:	e8 ba 75 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844cc06:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844cc0d:	00 
 844cc0e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844cc11:	89 04 24             	mov    %eax,(%esp)
 844cc14:	e8 0d 77 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844cc19:	83 f0 01             	xor    $0x1,%eax
 844cc1c:	84 c0                	test   %al,%al
 844cc1e:	74 07                	je     844cc27 <_ZN26DB_SaveEventLevelupSupport8dispatchEiiP6Stream+0x129>
 844cc20:	b8 00 00 00 00       	mov    $0x0,%eax
 844cc25:	eb 05                	jmp    844cc2c <_ZN26DB_SaveEventLevelupSupport8dispatchEiiP6Stream+0x12e>
 844cc27:	b8 01 00 00 00       	mov    $0x1,%eax
 844cc2c:	c9                   	leave
 844cc2d:	c3                   	ret

```

```c
// DB_SaveEventLevelupSupport::dispatch @ 0x844cafe

/* DB_SaveEventLevelupSupport::dispatch(int, int, Stream*) */

undefined4 DB_SaveEventLevelupSupport::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  Stream *in_stack_00000010;
  int local_1c;
  int local_18;
  int local_14;
  MySQL *local_10;
  
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::operator>>(in_stack_00000010,&local_1c);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  if (local_10 == (MySQL *)0x0) {
    uVar2 = 0;
  }
  else {
    MySQL::set_query(local_10,
                     "upDate event_levelup_support set state = %d where charac_no = %d and level = %d"
                     ,local_1c,local_14,local_18);
    cVar1 = MySQL::exec(local_10,true);
    if (cVar1 == '\x01') {
      lVar3 = MySQL::getAffectedRowCount(local_10);
      if (lVar3 == 0) {
        MySQL::set_query(local_10,
                         "inSert into event_levelup_support(charac_no, level, state) values(%d, %d, %d)"
                         ,local_14,local_18,local_1c);
        cVar1 = MySQL::exec(local_10,true);
        if (cVar1 != '\x01') {
          return 0;
        }
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## makeRequest

```asm
// === 0844cc2e DB_SaveEventLevelupSupport::makeRequest  [0x0844cc2e-0x844cd37] ===
 844cc2e:	55                   	push   %ebp
 844cc2f:	89 e5                	mov    %esp,%ebp
 844cc31:	56                   	push   %esi
 844cc32:	53                   	push   %ebx
 844cc33:	83 ec 20             	sub    $0x20,%esp
 844cc36:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 844cc3b:	c7 44 24 08 5a c2 00 	movl   $0xc25a,0x8(%esp)
 844cc42:	00 
 844cc43:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 844cc4a:	08 
 844cc4b:	89 04 24             	mov    %eax,(%esp)
 844cc4e:	e8 33 2e e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 844cc53:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 844cc5a:	00 
 844cc5b:	89 44 24 04          	mov    %eax,0x4(%esp)
 844cc5f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844cc62:	89 04 24             	mov    %eax,(%esp)
 844cc65:	e8 bc bf c7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 844cc6a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844cc6d:	89 04 24             	mov    %eax,(%esp)
 844cc70:	e8 d1 bf c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844cc75:	c7 44 24 04 4f 03 00 	movl   $0x34f,0x4(%esp)
 844cc7c:	00 
 844cc7d:	89 04 24             	mov    %eax,(%esp)
 844cc80:	e8 d1 bf c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844cc85:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844cc88:	89 04 24             	mov    %eax,(%esp)
 844cc8b:	e8 b6 bf c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844cc90:	8b 55 08             	mov    0x8(%ebp),%edx
 844cc93:	89 54 24 04          	mov    %edx,0x4(%esp)
 844cc97:	89 04 24             	mov    %eax,(%esp)
 844cc9a:	e8 b7 bf c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844cc9f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844cca2:	89 04 24             	mov    %eax,(%esp)
 844cca5:	e8 9c bf c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844ccaa:	8b 55 0c             	mov    0xc(%ebp),%edx
 844ccad:	89 54 24 04          	mov    %edx,0x4(%esp)
 844ccb1:	89 04 24             	mov    %eax,(%esp)
 844ccb4:	e8 9d bf c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844ccb9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844ccbc:	89 04 24             	mov    %eax,(%esp)
 844ccbf:	e8 82 bf c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844ccc4:	8b 55 10             	mov    0x10(%ebp),%edx
 844ccc7:	89 54 24 04          	mov    %edx,0x4(%esp)
 844cccb:	89 04 24             	mov    %eax,(%esp)
 844ccce:	e8 83 bf c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844ccd3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844ccd6:	89 04 24             	mov    %eax,(%esp)
 844ccd9:	e8 68 bf c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844ccde:	8b 55 14             	mov    0x14(%ebp),%edx
 844cce1:	89 54 24 04          	mov    %edx,0x4(%esp)
 844cce5:	89 04 24             	mov    %eax,(%esp)
 844cce8:	e8 69 bf c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844cced:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 844ccf2:	8d 55 f0             	lea    -0x10(%ebp),%edx
 844ccf5:	89 54 24 08          	mov    %edx,0x8(%esp)
 844ccf9:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 844cd00:	00 
 844cd01:	89 04 24             	mov    %eax,(%esp)
 844cd04:	e8 d5 42 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 844cd09:	eb 1b                	jmp    844cd26 <_ZN26DB_SaveEventLevelupSupport11makeRequestEiiii+0xf8>
 844cd0b:	89 d3                	mov    %edx,%ebx
 844cd0d:	89 c6                	mov    %eax,%esi
 844cd0f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844cd12:	89 04 24             	mov    %eax,(%esp)
 844cd15:	e8 b8 fb 1c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844cd1a:	89 f0                	mov    %esi,%eax
 844cd1c:	89 da                	mov    %ebx,%edx
 844cd1e:	89 04 24             	mov    %eax,(%esp)
 844cd21:	e8 2a 6a 69 00       	call   8ae3750 <_Unwind_Resume>
 844cd26:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844cd29:	89 04 24             	mov    %eax,(%esp)
 844cd2c:	e8 a1 fb 1c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844cd31:	83 c4 20             	add    $0x20,%esp
 844cd34:	5b                   	pop    %ebx
 844cd35:	5e                   	pop    %esi
 844cd36:	5d                   	pop    %ebp
 844cd37:	c3                   	ret

```

```c
// DB_SaveEventLevelupSupport::makeRequest @ 0x844cc2e

/* DB_SaveEventLevelupSupport::makeRequest(int, int, int, int) */

void DB_SaveEventLevelupSupport::makeRequest(int param_1,int param_2,int param_3,int param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xc25a);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0844cc80 to 0844cd08 has its CatchHandler @ 0844cd0b */
  CStreamGuard::operator<<(pCVar2,0x34f);
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

