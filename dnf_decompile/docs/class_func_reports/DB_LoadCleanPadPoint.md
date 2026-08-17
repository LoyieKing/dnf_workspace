# DB_LoadCleanPadPoint

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0842ecf4 DB_LoadCleanPadPoint::dispatch  [0x0842ecf4-0x842ef9f] ===
 842ecf4:	55                   	push   %ebp
 842ecf5:	89 e5                	mov    %esp,%ebp
 842ecf7:	56                   	push   %esi
 842ecf8:	53                   	push   %ebx
 842ecf9:	83 ec 50             	sub    $0x50,%esp
 842ecfc:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842ed01:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842ed08:	00 
 842ed09:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 842ed10:	00 
 842ed11:	89 04 24             	mov    %eax,(%esp)
 842ed14:	e8 25 65 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842ed19:	89 45 ec             	mov    %eax,-0x14(%ebp)
 842ed1c:	c7 44 24 04 f4 13 c5 	movl   $0x8c513f4,0x4(%esp)
 842ed23:	08 
 842ed24:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842ed27:	89 04 24             	mov    %eax,(%esp)
 842ed2a:	e8 91 54 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842ed2f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842ed36:	00 
 842ed37:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842ed3a:	89 04 24             	mov    %eax,(%esp)
 842ed3d:	e8 e4 55 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842ed42:	83 f0 01             	xor    $0x1,%eax
 842ed45:	84 c0                	test   %al,%al
 842ed47:	74 36                	je     842ed7f <_ZN20DB_LoadCleanPadPoint8dispatchEiiP6Stream+0x8b>
 842ed49:	c7 44 24 10 2c 14 c5 	movl   $0x8c5142c,0x10(%esp)
 842ed50:	08 
 842ed51:	c7 44 24 0c b0 73 00 	movl   $0x73b0,0xc(%esp)
 842ed58:	00 
 842ed59:	c7 44 24 08 80 c3 c5 	movl   $0x8c5c380,0x8(%esp)
 842ed60:	08 
 842ed61:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842ed68:	08 
 842ed69:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 842ed70:	e8 95 4e 6a 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 842ed75:	bb 00 00 00 00       	mov    $0x0,%ebx
 842ed7a:	e9 18 02 00 00       	jmp    842ef97 <_ZN20DB_LoadCleanPadPoint8dispatchEiiP6Stream+0x2a3>
 842ed7f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842ed82:	89 04 24             	mov    %eax,(%esp)
 842ed85:	e8 e2 35 cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 842ed8a:	85 c0                	test   %eax,%eax
 842ed8c:	0f 94 c0             	sete   %al
 842ed8f:	84 c0                	test   %al,%al
 842ed91:	74 40                	je     842edd3 <_ZN20DB_LoadCleanPadPoint8dispatchEiiP6Stream+0xdf>
 842ed93:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 842ed9a:	00 
 842ed9b:	c7 44 24 08 b6 73 00 	movl   $0x73b6,0x8(%esp)
 842eda2:	00 
 842eda3:	c7 44 24 04 80 c3 c5 	movl   $0x8c5c380,0x4(%esp)
 842edaa:	08 
 842edab:	8d 45 dc             	lea    -0x24(%ebp),%eax
 842edae:	89 04 24             	mov    %eax,(%esp)
 842edb1:	e8 62 09 12 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 842edb6:	c7 44 24 04 5c 14 c5 	movl   $0x8c5145c,0x4(%esp)
 842edbd:	08 
 842edbe:	8d 45 dc             	lea    -0x24(%ebp),%eax
 842edc1:	89 04 24             	mov    %eax,(%esp)
 842edc4:	e8 bf 09 12 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 842edc9:	bb 01 00 00 00       	mov    $0x1,%ebx
 842edce:	e9 c4 01 00 00       	jmp    842ef97 <_ZN20DB_LoadCleanPadPoint8dispatchEiiP6Stream+0x2a3>
 842edd3:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842edd8:	c7 44 24 08 be 73 00 	movl   $0x73be,0x8(%esp)
 842eddf:	00 
 842ede0:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842ede7:	08 
 842ede8:	89 04 24             	mov    %eax,(%esp)
 842edeb:	e8 96 0c e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842edf0:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842edf7:	00 
 842edf8:	89 44 24 04          	mov    %eax,0x4(%esp)
 842edfc:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 842edff:	89 04 24             	mov    %eax,(%esp)
 842ee02:	e8 1f 9e c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842ee07:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 842ee0a:	89 04 24             	mov    %eax,(%esp)
 842ee0d:	e8 34 9e c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842ee12:	c7 44 24 04 27 01 00 	movl   $0x127,0x4(%esp)
 842ee19:	00 
 842ee1a:	89 04 24             	mov    %eax,(%esp)
 842ee1d:	e8 34 9e c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842ee22:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 842ee25:	89 04 24             	mov    %eax,(%esp)
 842ee28:	e8 19 9e c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842ee2d:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 842ee34:	ff 
 842ee35:	89 04 24             	mov    %eax,(%esp)
 842ee38:	e8 19 9e c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842ee3d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 842ee40:	89 04 24             	mov    %eax,(%esp)
 842ee43:	e8 06 9e c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 842ee48:	89 04 24             	mov    %eax,(%esp)
 842ee4b:	e8 b4 3b 02 00       	call   8452a04 <_ZN12CStreamGuard11GetInBufferI23SIG_LOAD_CLEANPAD_POINTEEPT_v>
 842ee50:	89 45 f0             	mov    %eax,-0x10(%ebp)
 842ee53:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842ee56:	c7 44 24 08 f0 3c 00 	movl   $0x3cf0,0x8(%esp)
 842ee5d:	00 
 842ee5e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842ee65:	00 
 842ee66:	89 04 24             	mov    %eax,(%esp)
 842ee69:	e8 52 ee c4 ff       	call   807dcc0 <memset@plt>
 842ee6e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 842ee75:	e9 bb 00 00 00       	jmp    842ef35 <_ZN20DB_LoadCleanPadPoint8dispatchEiiP6Stream+0x241>
 842ee7a:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 842ee81:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 842ee88:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842ee8b:	89 04 24             	mov    %eax,(%esp)
 842ee8e:	e8 29 56 fc ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 842ee93:	83 f0 01             	xor    $0x1,%eax
 842ee96:	84 c0                	test   %al,%al
 842ee98:	75 42                	jne    842eedc <_ZN20DB_LoadCleanPadPoint8dispatchEiiP6Stream+0x1e8>
 842ee9a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 842ee9d:	89 44 24 08          	mov    %eax,0x8(%esp)
 842eea1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842eea8:	00 
 842eea9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842eeac:	89 04 24             	mov    %eax,(%esp)
 842eeaf:	e8 78 7a ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 842eeb4:	83 f0 01             	xor    $0x1,%eax
 842eeb7:	84 c0                	test   %al,%al
 842eeb9:	75 21                	jne    842eedc <_ZN20DB_LoadCleanPadPoint8dispatchEiiP6Stream+0x1e8>
 842eebb:	8d 45 cc             	lea    -0x34(%ebp),%eax
 842eebe:	89 44 24 08          	mov    %eax,0x8(%esp)
 842eec2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842eec9:	00 
 842eeca:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842eecd:	89 04 24             	mov    %eax,(%esp)
 842eed0:	e8 57 7a ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 842eed5:	83 f0 01             	xor    $0x1,%eax
 842eed8:	84 c0                	test   %al,%al
 842eeda:	74 07                	je     842eee3 <_ZN20DB_LoadCleanPadPoint8dispatchEiiP6Stream+0x1ef>
 842eedc:	b8 01 00 00 00       	mov    $0x1,%eax
 842eee1:	eb 05                	jmp    842eee8 <_ZN20DB_LoadCleanPadPoint8dispatchEiiP6Stream+0x1f4>
 842eee3:	b8 00 00 00 00       	mov    $0x0,%eax
 842eee8:	84 c0                	test   %al,%al
 842eeea:	74 1e                	je     842ef0a <_ZN20DB_LoadCleanPadPoint8dispatchEiiP6Stream+0x216>
 842eeec:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842eef1:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 842eef4:	89 54 24 04          	mov    %edx,0x4(%esp)
 842eef8:	89 04 24             	mov    %eax,(%esp)
 842eefb:	e8 80 21 cd ff       	call   8101080 <_ZN10StreamPool4FreeER12CStreamGuard>
 842ef00:	bb 00 00 00 00       	mov    $0x0,%ebx
 842ef05:	e9 82 00 00 00       	jmp    842ef8c <_ZN20DB_LoadCleanPadPoint8dispatchEiiP6Stream+0x298>
 842ef0a:	8b 45 d0             	mov    -0x30(%ebp),%eax
 842ef0d:	83 f8 64             	cmp    $0x64,%eax
 842ef10:	7e 1b                	jle    842ef2d <_ZN20DB_LoadCleanPadPoint8dispatchEiiP6Stream+0x239>
 842ef12:	8b 45 d0             	mov    -0x30(%ebp),%eax
 842ef15:	3d a0 0f 00 00       	cmp    $0xfa0,%eax
 842ef1a:	7f 14                	jg     842ef30 <_ZN20DB_LoadCleanPadPoint8dispatchEiiP6Stream+0x23c>
 842ef1c:	8b 45 d0             	mov    -0x30(%ebp),%eax
 842ef1f:	8d 48 9b             	lea    -0x65(%eax),%ecx
 842ef22:	8b 55 cc             	mov    -0x34(%ebp),%edx
 842ef25:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842ef28:	89 14 88             	mov    %edx,(%eax,%ecx,4)
 842ef2b:	eb 04                	jmp    842ef31 <_ZN20DB_LoadCleanPadPoint8dispatchEiiP6Stream+0x23d>
 842ef2d:	90                   	nop
 842ef2e:	eb 01                	jmp    842ef31 <_ZN20DB_LoadCleanPadPoint8dispatchEiiP6Stream+0x23d>
 842ef30:	90                   	nop
 842ef31:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 842ef35:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842ef38:	89 04 24             	mov    %eax,(%esp)
 842ef3b:	e8 2c 34 cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 842ef40:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 842ef43:	0f 97 c0             	seta   %al
 842ef46:	84 c0                	test   %al,%al
 842ef48:	0f 85 2c ff ff ff    	jne    842ee7a <_ZN20DB_LoadCleanPadPoint8dispatchEiiP6Stream+0x186>
 842ef4e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842ef53:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 842ef56:	89 54 24 08          	mov    %edx,0x8(%esp)
 842ef5a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842ef61:	00 
 842ef62:	89 04 24             	mov    %eax,(%esp)
 842ef65:	e8 74 20 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842ef6a:	bb 01 00 00 00       	mov    $0x1,%ebx
 842ef6f:	eb 1b                	jmp    842ef8c <_ZN20DB_LoadCleanPadPoint8dispatchEiiP6Stream+0x298>
 842ef71:	89 d3                	mov    %edx,%ebx
 842ef73:	89 c6                	mov    %eax,%esi
 842ef75:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 842ef78:	89 04 24             	mov    %eax,(%esp)
 842ef7b:	e8 52 d9 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842ef80:	89 f0                	mov    %esi,%eax
 842ef82:	89 da                	mov    %ebx,%edx
 842ef84:	89 04 24             	mov    %eax,(%esp)
 842ef87:	e8 c4 47 6b 00       	call   8ae3750 <_Unwind_Resume>
 842ef8c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 842ef8f:	89 04 24             	mov    %eax,(%esp)
 842ef92:	e8 3b d9 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842ef97:	89 d8                	mov    %ebx,%eax
 842ef99:	83 c4 50             	add    $0x50,%esp
 842ef9c:	5b                   	pop    %ebx
 842ef9d:	5e                   	pop    %esi
 842ef9e:	5d                   	pop    %ebp
 842ef9f:	c3                   	ret

```

```c
// DB_LoadCleanPadPoint::dispatch @ 0x842ecf4

/* DB_LoadCleanPadPoint::dispatch(int, int, Stream*) */

undefined4 DB_LoadCleanPadPoint::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  uint uVar6;
  undefined4 uVar7;
  int local_38;
  int local_34;
  CStreamGuard local_30 [8];
  cMyTrace local_28 [16];
  MySQL *local_18;
  SIG_LOAD_CLEANPAD_POINT *local_14;
  uint local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  MySQL::set_query(local_18,"seLect hack_type,value from hack_cleanpad_ratio_info");
  cVar2 = MySQL::exec(local_18,true);
  if (cVar2 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_18);
    if (iVar3 == 0) {
      cMyTrace::cMyTrace(local_28,"virtual bool DB_LoadCleanPadPoint::dispatch(int, int, Stream*)",
                         0x73b6,0);
      cMyTrace::operator()(local_28,"[QUERY_NOTICE] have no data hack_cleanpad_ratio_info");
      uVar7 = 1;
    }
    else {
      pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x73be);
      CStreamGuard::CStreamGuard(local_30,pSVar4,true);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_30);
                    /* try { // try from 0842ee1d to 0842ef69 has its CatchHandler @ 0842ef71 */
      CStreamGuard::operator<<(pCVar5,0x127);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_30);
      CStreamGuard::operator<<(pCVar5,-1);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_30);
      local_14 = CStreamGuard::GetInBuffer<SIG_LOAD_CLEANPAD_POINT>(pCVar5);
      memset(local_14,0,0x3cf0);
      local_10 = 0;
      while (uVar6 = MySQL::get_n_rows(local_18), local_10 < uVar6) {
        local_34 = 0;
        local_38 = 0;
        cVar2 = MySQL::fetch(local_18);
        if (((cVar2 == '\x01') && (cVar2 = MySQL::get_int(local_18,0,&local_34), cVar2 == '\x01'))
           && (cVar2 = MySQL::get_int(local_18,1,&local_38), cVar2 == '\x01')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          StreamPool::Free(GlobalData::s_stream_pool,local_30);
          uVar7 = 0;
          goto LAB_0842ef8c;
        }
        if ((100 < local_34) && (local_34 < 0xfa1)) {
          *(int *)(local_14 + (local_34 + -0x65) * 4) = local_38;
        }
        local_10 = local_10 + 1;
      }
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_30);
      uVar7 = 1;
LAB_0842ef8c:
      CStreamGuard::~CStreamGuard(local_30);
    }
  }
  else {
    LogManager::logFormat
              (1,"DBThread.cpp","virtual bool DB_LoadCleanPadPoint::dispatch(int, int, Stream*)",
               0x73b0,"[QUERY_ERROR] select hack_cleanpad_ratio_info");
    uVar7 = 0;
  }
  return uVar7;
}

```

---

## makeRequest

```asm
// === 0842efa0 DB_LoadCleanPadPoint::makeRequest  [0x0842efa0-0x842f05d] ===
 842efa0:	55                   	push   %ebp
 842efa1:	89 e5                	mov    %esp,%ebp
 842efa3:	56                   	push   %esi
 842efa4:	53                   	push   %ebx
 842efa5:	83 ec 20             	sub    $0x20,%esp
 842efa8:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842efad:	c7 44 24 08 d8 73 00 	movl   $0x73d8,0x8(%esp)
 842efb4:	00 
 842efb5:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842efbc:	08 
 842efbd:	89 04 24             	mov    %eax,(%esp)
 842efc0:	e8 c1 0a e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842efc5:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842efcc:	00 
 842efcd:	89 44 24 04          	mov    %eax,0x4(%esp)
 842efd1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842efd4:	89 04 24             	mov    %eax,(%esp)
 842efd7:	e8 4a 9c c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842efdc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842efdf:	89 04 24             	mov    %eax,(%esp)
 842efe2:	e8 5f 9c c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842efe7:	c7 44 24 04 27 01 00 	movl   $0x127,0x4(%esp)
 842efee:	00 
 842efef:	89 04 24             	mov    %eax,(%esp)
 842eff2:	e8 5f 9c c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842eff7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842effa:	89 04 24             	mov    %eax,(%esp)
 842effd:	e8 44 9c c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842f002:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 842f009:	ff 
 842f00a:	89 04 24             	mov    %eax,(%esp)
 842f00d:	e8 44 9c c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842f012:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842f017:	8d 55 f0             	lea    -0x10(%ebp),%edx
 842f01a:	89 54 24 08          	mov    %edx,0x8(%esp)
 842f01e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 842f025:	00 
 842f026:	89 04 24             	mov    %eax,(%esp)
 842f029:	e8 b0 1f 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842f02e:	eb 1b                	jmp    842f04b <_ZN20DB_LoadCleanPadPoint11makeRequestEv+0xab>
 842f030:	89 d3                	mov    %edx,%ebx
 842f032:	89 c6                	mov    %eax,%esi
 842f034:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842f037:	89 04 24             	mov    %eax,(%esp)
 842f03a:	e8 93 d8 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842f03f:	89 f0                	mov    %esi,%eax
 842f041:	89 da                	mov    %ebx,%edx
 842f043:	89 04 24             	mov    %eax,(%esp)
 842f046:	e8 05 47 6b 00       	call   8ae3750 <_Unwind_Resume>
 842f04b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842f04e:	89 04 24             	mov    %eax,(%esp)
 842f051:	e8 7c d8 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842f056:	83 c4 20             	add    $0x20,%esp
 842f059:	5b                   	pop    %ebx
 842f05a:	5e                   	pop    %esi
 842f05b:	5d                   	pop    %ebp
 842f05c:	c3                   	ret
 842f05d:	90                   	nop

```

```c
// DB_LoadCleanPadPoint::makeRequest @ 0x842efa0

/* DB_LoadCleanPadPoint::makeRequest() */

void DB_LoadCleanPadPoint::makeRequest(void)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x73d8);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0842eff2 to 0842f02d has its CatchHandler @ 0842f030 */
  CStreamGuard::operator<<(pCVar2,0x127);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

