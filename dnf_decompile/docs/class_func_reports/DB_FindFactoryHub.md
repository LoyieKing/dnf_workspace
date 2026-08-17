# DB_FindFactoryHub

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08436ba0 DB_FindFactoryHub::dispatch  [0x08436ba0-0x8436deb] ===
 8436ba0:	55                   	push   %ebp
 8436ba1:	89 e5                	mov    %esp,%ebp
 8436ba3:	57                   	push   %edi
 8436ba4:	56                   	push   %esi
 8436ba5:	53                   	push   %ebx
 8436ba6:	83 ec 7c             	sub    $0x7c,%esp
 8436ba9:	8b 45 14             	mov    0x14(%ebp),%eax
 8436bac:	89 04 24             	mov    %eax,(%esp)
 8436baf:	e8 38 c8 01 00       	call   84533ec <_ZN6Stream12GetOutBufferI20SIG_FIND_FACTORY_HUBEEPT_v>
 8436bb4:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8436bb7:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8436bbe:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8436bc3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8436bca:	00 
 8436bcb:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8436bd2:	00 
 8436bd3:	89 04 24             	mov    %eax,(%esp)
 8436bd6:	e8 63 e6 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8436bdb:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8436bde:	8d 55 95             	lea    -0x6b(%ebp),%edx
 8436be1:	bb 3b 00 00 00       	mov    $0x3b,%ebx
 8436be6:	b8 00 00 00 00       	mov    $0x0,%eax
 8436beb:	89 d1                	mov    %edx,%ecx
 8436bed:	83 e1 01             	and    $0x1,%ecx
 8436bf0:	85 c9                	test   %ecx,%ecx
 8436bf2:	74 08                	je     8436bfc <_ZN17DB_FindFactoryHub8dispatchEiiP6Stream+0x5c>
 8436bf4:	88 02                	mov    %al,(%edx)
 8436bf6:	83 c2 01             	add    $0x1,%edx
 8436bf9:	83 eb 01             	sub    $0x1,%ebx
 8436bfc:	89 d1                	mov    %edx,%ecx
 8436bfe:	83 e1 02             	and    $0x2,%ecx
 8436c01:	85 c9                	test   %ecx,%ecx
 8436c03:	74 09                	je     8436c0e <_ZN17DB_FindFactoryHub8dispatchEiiP6Stream+0x6e>
 8436c05:	66 89 02             	mov    %ax,(%edx)
 8436c08:	83 c2 02             	add    $0x2,%edx
 8436c0b:	83 eb 02             	sub    $0x2,%ebx
 8436c0e:	89 d9                	mov    %ebx,%ecx
 8436c10:	c1 e9 02             	shr    $0x2,%ecx
 8436c13:	89 d7                	mov    %edx,%edi
 8436c15:	f3 ab                	rep stos %eax,%es:(%edi)
 8436c17:	89 fa                	mov    %edi,%edx
 8436c19:	89 d9                	mov    %ebx,%ecx
 8436c1b:	83 e1 02             	and    $0x2,%ecx
 8436c1e:	85 c9                	test   %ecx,%ecx
 8436c20:	74 06                	je     8436c28 <_ZN17DB_FindFactoryHub8dispatchEiiP6Stream+0x88>
 8436c22:	66 89 02             	mov    %ax,(%edx)
 8436c25:	83 c2 02             	add    $0x2,%edx
 8436c28:	89 d9                	mov    %ebx,%ecx
 8436c2a:	83 e1 01             	and    $0x1,%ecx
 8436c2d:	85 c9                	test   %ecx,%ecx
 8436c2f:	74 05                	je     8436c36 <_ZN17DB_FindFactoryHub8dispatchEiiP6Stream+0x96>
 8436c31:	88 02                	mov    %al,(%edx)
 8436c33:	83 c2 01             	add    $0x1,%edx
 8436c36:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8436c39:	83 c0 04             	add    $0x4,%eax
 8436c3c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8436c40:	8d 45 95             	lea    -0x6b(%ebp),%eax
 8436c43:	89 44 24 04          	mov    %eax,0x4(%esp)
 8436c47:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8436c4a:	89 04 24             	mov    %eax,(%esp)
 8436c4d:	e8 58 dc fb ff       	call   83f48aa <_ZN5MySQL13escape_stringEPcPKc>
 8436c52:	8d 45 95             	lea    -0x6b(%ebp),%eax
 8436c55:	89 44 24 08          	mov    %eax,0x8(%esp)
 8436c59:	c7 44 24 04 50 38 c5 	movl   $0x8c53850,0x4(%esp)
 8436c60:	08 
 8436c61:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8436c64:	89 04 24             	mov    %eax,(%esp)
 8436c67:	e8 54 d5 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8436c6c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8436c73:	00 
 8436c74:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8436c77:	89 04 24             	mov    %eax,(%esp)
 8436c7a:	e8 a7 d6 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8436c7f:	83 f0 01             	xor    $0x1,%eax
 8436c82:	84 c0                	test   %al,%al
 8436c84:	74 0a                	je     8436c90 <_ZN17DB_FindFactoryHub8dispatchEiiP6Stream+0xf0>
 8436c86:	b8 00 00 00 00       	mov    $0x0,%eax
 8436c8b:	e9 54 01 00 00       	jmp    8436de4 <_ZN17DB_FindFactoryHub8dispatchEiiP6Stream+0x244>
 8436c90:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8436c93:	89 04 24             	mov    %eax,(%esp)
 8436c96:	e8 21 d8 fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8436c9b:	83 f0 01             	xor    $0x1,%eax
 8436c9e:	84 c0                	test   %al,%al
 8436ca0:	74 0a                	je     8436cac <_ZN17DB_FindFactoryHub8dispatchEiiP6Stream+0x10c>
 8436ca2:	b8 00 00 00 00       	mov    $0x0,%eax
 8436ca7:	e9 38 01 00 00       	jmp    8436de4 <_ZN17DB_FindFactoryHub8dispatchEiiP6Stream+0x244>
 8436cac:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8436caf:	89 44 24 08          	mov    %eax,0x8(%esp)
 8436cb3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8436cba:	00 
 8436cbb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8436cbe:	89 04 24             	mov    %eax,(%esp)
 8436cc1:	e8 e8 b5 ca ff       	call   80e22ae <_ZN5MySQL7get_intEiRj>
 8436cc6:	83 f0 01             	xor    $0x1,%eax
 8436cc9:	84 c0                	test   %al,%al
 8436ccb:	74 0a                	je     8436cd7 <_ZN17DB_FindFactoryHub8dispatchEiiP6Stream+0x137>
 8436ccd:	b8 00 00 00 00       	mov    $0x0,%eax
 8436cd2:	e9 0d 01 00 00       	jmp    8436de4 <_ZN17DB_FindFactoryHub8dispatchEiiP6Stream+0x244>
 8436cd7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8436cda:	8b 10                	mov    (%eax),%edx
 8436cdc:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8436cdf:	39 c2                	cmp    %eax,%edx
 8436ce1:	0f 84 f8 00 00 00    	je     8436ddf <_ZN17DB_FindFactoryHub8dispatchEiiP6Stream+0x23f>
 8436ce7:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8436cec:	c7 44 24 08 53 82 00 	movl   $0x8253,0x8(%esp)
 8436cf3:	00 
 8436cf4:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8436cfb:	08 
 8436cfc:	89 04 24             	mov    %eax,(%esp)
 8436cff:	e8 82 8d e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8436d04:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8436d0b:	00 
 8436d0c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8436d10:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8436d13:	89 04 24             	mov    %eax,(%esp)
 8436d16:	e8 0b 1f c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8436d1b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8436d1e:	89 04 24             	mov    %eax,(%esp)
 8436d21:	e8 20 1f c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8436d26:	c7 44 24 04 8a 01 00 	movl   $0x18a,0x4(%esp)
 8436d2d:	00 
 8436d2e:	89 04 24             	mov    %eax,(%esp)
 8436d31:	e8 20 1f c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8436d36:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8436d39:	89 04 24             	mov    %eax,(%esp)
 8436d3c:	e8 05 1f c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8436d41:	8b 55 10             	mov    0x10(%ebp),%edx
 8436d44:	89 54 24 04          	mov    %edx,0x4(%esp)
 8436d48:	89 04 24             	mov    %eax,(%esp)
 8436d4b:	e8 06 1f c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8436d50:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8436d53:	89 04 24             	mov    %eax,(%esp)
 8436d56:	e8 f3 1e c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8436d5b:	89 04 24             	mov    %eax,(%esp)
 8436d5e:	e8 dd c6 01 00       	call   8453440 <_ZN12CStreamGuard11GetInBufferI34SIG_FIND_FACTORY_HUB_FATIGUE_CHECKEEPT_v>
 8436d63:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8436d66:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8436d69:	0f b6 50 21          	movzbl 0x21(%eax),%edx
 8436d6d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8436d70:	88 50 04             	mov    %dl,0x4(%eax)
 8436d73:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8436d76:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8436d79:	89 10                	mov    %edx,(%eax)
 8436d7b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8436d7e:	8d 50 04             	lea    0x4(%eax),%edx
 8436d81:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8436d84:	83 c0 05             	add    $0x5,%eax
 8436d87:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 8436d8e:	00 
 8436d8f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8436d93:	89 04 24             	mov    %eax,(%esp)
 8436d96:	e8 35 6b c4 ff       	call   807d8d0 <strncpy@plt>
 8436d9b:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8436da0:	8d 55 d0             	lea    -0x30(%ebp),%edx
 8436da3:	89 54 24 08          	mov    %edx,0x8(%esp)
 8436da7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8436dae:	00 
 8436daf:	89 04 24             	mov    %eax,(%esp)
 8436db2:	e8 27 a2 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8436db7:	eb 1b                	jmp    8436dd4 <_ZN17DB_FindFactoryHub8dispatchEiiP6Stream+0x234>
 8436db9:	89 d3                	mov    %edx,%ebx
 8436dbb:	89 c6                	mov    %eax,%esi
 8436dbd:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8436dc0:	89 04 24             	mov    %eax,(%esp)
 8436dc3:	e8 0a 5b 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8436dc8:	89 f0                	mov    %esi,%eax
 8436dca:	89 da                	mov    %ebx,%edx
 8436dcc:	89 04 24             	mov    %eax,(%esp)
 8436dcf:	e8 7c c9 6a 00       	call   8ae3750 <_Unwind_Resume>
 8436dd4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8436dd7:	89 04 24             	mov    %eax,(%esp)
 8436dda:	e8 f3 5a 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8436ddf:	b8 01 00 00 00       	mov    $0x1,%eax
 8436de4:	83 c4 7c             	add    $0x7c,%esp
 8436de7:	5b                   	pop    %ebx
 8436de8:	5e                   	pop    %esi
 8436de9:	5f                   	pop    %edi
 8436dea:	5d                   	pop    %ebp
 8436deb:	c3                   	ret

```

```c
// DB_FindFactoryHub::dispatch @ 0x8436ba0

/* DB_FindFactoryHub::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_FindFactoryHub::dispatch(DB_FindFactoryHub *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  char local_6f;
  char local_6e [58];
  CStreamGuard local_34 [8];
  uint local_2c;
  SIG_FIND_FACTORY_HUB *local_28;
  MySQL *local_24;
  SIG_FIND_FACTORY_HUB_FATIGUE_CHECK *local_20;
  
  bVar9 = 0;
  local_28 = Stream::GetOutBuffer<SIG_FIND_FACTORY_HUB>(param_3);
  local_2c = 0;
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pcVar6 = &local_6f;
  uVar7 = 0x3b;
  bVar8 = ((uint)pcVar6 & 1) != 0;
  if (bVar8) {
    local_6f = '\0';
    pcVar6 = local_6e;
    uVar7 = 0x3a;
  }
  if (((uint)pcVar6 & 2) != 0) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6 = pcVar6 + 2;
    uVar7 = uVar7 - 2;
  }
  for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + ((uint)bVar9 * -2 + 1) * 4;
  }
  if ((uVar7 & 2) != 0) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6 = pcVar6 + 2;
  }
  if (!bVar8) {
    *pcVar6 = '\0';
  }
  MySQL::escape_string(local_24,&local_6f,(char *)(local_28 + 4));
  MySQL::set_query(local_24,"seLect m_id from charac_info where charac_name=\'%s\' limit 1",
                   &local_6f);
  cVar1 = MySQL::exec(local_24,true);
  if (cVar1 == '\x01') {
    cVar1 = MySQL::fetch(local_24);
    if (cVar1 == '\x01') {
      cVar1 = MySQL::get_int(local_24,0,&local_2c);
      if (cVar1 == '\x01') {
        if (*(uint *)local_28 != local_2c) {
          pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8253);
          CStreamGuard::CStreamGuard(local_34,pSVar3,true);
          pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_34);
                    /* try { // try from 08436d31 to 08436db6 has its CatchHandler @ 08436db9 */
          CStreamGuard::operator<<(pCVar4,0x18a);
          pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_34);
          CStreamGuard::operator<<(pCVar4,param_2);
          pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_34);
          local_20 = CStreamGuard::GetInBuffer<SIG_FIND_FACTORY_HUB_FATIGUE_CHECK>(pCVar4);
          *(SIG_FIND_FACTORY_HUB *)(local_20 + 4) = local_28[0x21];
          *(uint *)local_20 = local_2c;
          strncpy((char *)(local_20 + 5),(char *)(local_28 + 4),0x1d);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_34);
          CStreamGuard::~CStreamGuard(local_34);
        }
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

