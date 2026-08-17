# DB_AccountHack_CheckMyAccount

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08439f06 DB_AccountHack_CheckMyAccount::dispatch  [0x08439f06-0x843a13d] ===
 8439f06:	55                   	push   %ebp
 8439f07:	89 e5                	mov    %esp,%ebp
 8439f09:	57                   	push   %edi
 8439f0a:	56                   	push   %esi
 8439f0b:	53                   	push   %ebx
 8439f0c:	83 ec 7c             	sub    $0x7c,%esp
 8439f0f:	8b 45 14             	mov    0x14(%ebp),%eax
 8439f12:	89 04 24             	mov    %eax,(%esp)
 8439f15:	e8 0c 99 01 00       	call   8453826 <_ZN6Stream12GetOutBufferI26SIG_CHECK_MY_ACCOUNT_IN_DBEEPT_v>
 8439f1a:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8439f1d:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8439f24:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8439f29:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8439f30:	00 
 8439f31:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8439f38:	00 
 8439f39:	89 04 24             	mov    %eax,(%esp)
 8439f3c:	e8 fd b2 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8439f41:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8439f44:	8d 55 95             	lea    -0x6b(%ebp),%edx
 8439f47:	bb 3b 00 00 00       	mov    $0x3b,%ebx
 8439f4c:	b8 00 00 00 00       	mov    $0x0,%eax
 8439f51:	89 d1                	mov    %edx,%ecx
 8439f53:	83 e1 01             	and    $0x1,%ecx
 8439f56:	85 c9                	test   %ecx,%ecx
 8439f58:	74 08                	je     8439f62 <_ZN29DB_AccountHack_CheckMyAccount8dispatchEiiP6Stream+0x5c>
 8439f5a:	88 02                	mov    %al,(%edx)
 8439f5c:	83 c2 01             	add    $0x1,%edx
 8439f5f:	83 eb 01             	sub    $0x1,%ebx
 8439f62:	89 d1                	mov    %edx,%ecx
 8439f64:	83 e1 02             	and    $0x2,%ecx
 8439f67:	85 c9                	test   %ecx,%ecx
 8439f69:	74 09                	je     8439f74 <_ZN29DB_AccountHack_CheckMyAccount8dispatchEiiP6Stream+0x6e>
 8439f6b:	66 89 02             	mov    %ax,(%edx)
 8439f6e:	83 c2 02             	add    $0x2,%edx
 8439f71:	83 eb 02             	sub    $0x2,%ebx
 8439f74:	89 d9                	mov    %ebx,%ecx
 8439f76:	c1 e9 02             	shr    $0x2,%ecx
 8439f79:	89 d7                	mov    %edx,%edi
 8439f7b:	f3 ab                	rep stos %eax,%es:(%edi)
 8439f7d:	89 fa                	mov    %edi,%edx
 8439f7f:	89 d9                	mov    %ebx,%ecx
 8439f81:	83 e1 02             	and    $0x2,%ecx
 8439f84:	85 c9                	test   %ecx,%ecx
 8439f86:	74 06                	je     8439f8e <_ZN29DB_AccountHack_CheckMyAccount8dispatchEiiP6Stream+0x88>
 8439f88:	66 89 02             	mov    %ax,(%edx)
 8439f8b:	83 c2 02             	add    $0x2,%edx
 8439f8e:	89 d9                	mov    %ebx,%ecx
 8439f90:	83 e1 01             	and    $0x1,%ecx
 8439f93:	85 c9                	test   %ecx,%ecx
 8439f95:	74 05                	je     8439f9c <_ZN29DB_AccountHack_CheckMyAccount8dispatchEiiP6Stream+0x96>
 8439f97:	88 02                	mov    %al,(%edx)
 8439f99:	83 c2 01             	add    $0x1,%edx
 8439f9c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8439f9f:	83 c0 08             	add    $0x8,%eax
 8439fa2:	89 44 24 08          	mov    %eax,0x8(%esp)
 8439fa6:	8d 45 95             	lea    -0x6b(%ebp),%eax
 8439fa9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8439fad:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8439fb0:	89 04 24             	mov    %eax,(%esp)
 8439fb3:	e8 f2 a8 fb ff       	call   83f48aa <_ZN5MySQL13escape_stringEPcPKc>
 8439fb8:	8d 45 95             	lea    -0x6b(%ebp),%eax
 8439fbb:	89 44 24 08          	mov    %eax,0x8(%esp)
 8439fbf:	c7 44 24 04 50 38 c5 	movl   $0x8c53850,0x4(%esp)
 8439fc6:	08 
 8439fc7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8439fca:	89 04 24             	mov    %eax,(%esp)
 8439fcd:	e8 ee a1 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8439fd2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8439fd9:	00 
 8439fda:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8439fdd:	89 04 24             	mov    %eax,(%esp)
 8439fe0:	e8 41 a3 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8439fe5:	83 f0 01             	xor    $0x1,%eax
 8439fe8:	84 c0                	test   %al,%al
 8439fea:	74 0a                	je     8439ff6 <_ZN29DB_AccountHack_CheckMyAccount8dispatchEiiP6Stream+0xf0>
 8439fec:	b8 00 00 00 00       	mov    $0x0,%eax
 8439ff1:	e9 3f 01 00 00       	jmp    843a135 <_ZN29DB_AccountHack_CheckMyAccount8dispatchEiiP6Stream+0x22f>
 8439ff6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8439ff9:	89 04 24             	mov    %eax,(%esp)
 8439ffc:	e8 bb a4 fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 843a001:	83 f0 01             	xor    $0x1,%eax
 843a004:	84 c0                	test   %al,%al
 843a006:	74 0a                	je     843a012 <_ZN29DB_AccountHack_CheckMyAccount8dispatchEiiP6Stream+0x10c>
 843a008:	b8 00 00 00 00       	mov    $0x0,%eax
 843a00d:	e9 23 01 00 00       	jmp    843a135 <_ZN29DB_AccountHack_CheckMyAccount8dispatchEiiP6Stream+0x22f>
 843a012:	8d 45 d8             	lea    -0x28(%ebp),%eax
 843a015:	89 44 24 08          	mov    %eax,0x8(%esp)
 843a019:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843a020:	00 
 843a021:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843a024:	89 04 24             	mov    %eax,(%esp)
 843a027:	e8 82 82 ca ff       	call   80e22ae <_ZN5MySQL7get_intEiRj>
 843a02c:	83 f0 01             	xor    $0x1,%eax
 843a02f:	84 c0                	test   %al,%al
 843a031:	74 0a                	je     843a03d <_ZN29DB_AccountHack_CheckMyAccount8dispatchEiiP6Stream+0x137>
 843a033:	b8 00 00 00 00       	mov    $0x0,%eax
 843a038:	e9 f8 00 00 00       	jmp    843a135 <_ZN29DB_AccountHack_CheckMyAccount8dispatchEiiP6Stream+0x22f>
 843a03d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843a040:	8b 50 04             	mov    0x4(%eax),%edx
 843a043:	8b 45 d8             	mov    -0x28(%ebp),%eax
 843a046:	39 c2                	cmp    %eax,%edx
 843a048:	0f 84 e2 00 00 00    	je     843a130 <_ZN29DB_AccountHack_CheckMyAccount8dispatchEiiP6Stream+0x22a>
 843a04e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843a053:	c7 44 24 08 33 88 00 	movl   $0x8833,0x8(%esp)
 843a05a:	00 
 843a05b:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843a062:	08 
 843a063:	89 04 24             	mov    %eax,(%esp)
 843a066:	e8 1b 5a e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843a06b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843a072:	00 
 843a073:	89 44 24 04          	mov    %eax,0x4(%esp)
 843a077:	8d 45 d0             	lea    -0x30(%ebp),%eax
 843a07a:	89 04 24             	mov    %eax,(%esp)
 843a07d:	e8 a4 eb c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843a082:	8d 45 d0             	lea    -0x30(%ebp),%eax
 843a085:	89 04 24             	mov    %eax,(%esp)
 843a088:	e8 b9 eb c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843a08d:	c7 44 24 04 8c 01 00 	movl   $0x18c,0x4(%esp)
 843a094:	00 
 843a095:	89 04 24             	mov    %eax,(%esp)
 843a098:	e8 b9 eb c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843a09d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 843a0a0:	89 04 24             	mov    %eax,(%esp)
 843a0a3:	e8 9e eb c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843a0a8:	8b 55 10             	mov    0x10(%ebp),%edx
 843a0ab:	89 54 24 04          	mov    %edx,0x4(%esp)
 843a0af:	89 04 24             	mov    %eax,(%esp)
 843a0b2:	e8 9f eb c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843a0b7:	8d 45 d0             	lea    -0x30(%ebp),%eax
 843a0ba:	89 04 24             	mov    %eax,(%esp)
 843a0bd:	e8 8c eb c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 843a0c2:	89 04 24             	mov    %eax,(%esp)
 843a0c5:	e8 b0 97 01 00       	call   845387a <_ZN12CStreamGuard11GetInBufferI23SIG_CHECK_MY_ACCOUNT_OKEEPT_v>
 843a0ca:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 843a0cd:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843a0d0:	8b 10                	mov    (%eax),%edx
 843a0d2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843a0d5:	89 10                	mov    %edx,(%eax)
 843a0d7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843a0da:	8b 50 25             	mov    0x25(%eax),%edx
 843a0dd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843a0e0:	89 50 04             	mov    %edx,0x4(%eax)
 843a0e3:	8b 55 d8             	mov    -0x28(%ebp),%edx
 843a0e6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843a0e9:	89 50 08             	mov    %edx,0x8(%eax)
 843a0ec:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843a0f1:	8d 55 d0             	lea    -0x30(%ebp),%edx
 843a0f4:	89 54 24 08          	mov    %edx,0x8(%esp)
 843a0f8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843a0ff:	00 
 843a100:	89 04 24             	mov    %eax,(%esp)
 843a103:	e8 d6 6e 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843a108:	eb 1b                	jmp    843a125 <_ZN29DB_AccountHack_CheckMyAccount8dispatchEiiP6Stream+0x21f>
 843a10a:	89 d3                	mov    %edx,%ebx
 843a10c:	89 c6                	mov    %eax,%esi
 843a10e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 843a111:	89 04 24             	mov    %eax,(%esp)
 843a114:	e8 b9 27 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843a119:	89 f0                	mov    %esi,%eax
 843a11b:	89 da                	mov    %ebx,%edx
 843a11d:	89 04 24             	mov    %eax,(%esp)
 843a120:	e8 2b 96 6a 00       	call   8ae3750 <_Unwind_Resume>
 843a125:	8d 45 d0             	lea    -0x30(%ebp),%eax
 843a128:	89 04 24             	mov    %eax,(%esp)
 843a12b:	e8 a2 27 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843a130:	b8 01 00 00 00       	mov    $0x1,%eax
 843a135:	83 c4 7c             	add    $0x7c,%esp
 843a138:	5b                   	pop    %ebx
 843a139:	5e                   	pop    %esi
 843a13a:	5f                   	pop    %edi
 843a13b:	5d                   	pop    %ebp
 843a13c:	c3                   	ret
 843a13d:	90                   	nop

```

```c
// DB_AccountHack_CheckMyAccount::dispatch @ 0x8439f06

/* DB_AccountHack_CheckMyAccount::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_AccountHack_CheckMyAccount::dispatch
          (DB_AccountHack_CheckMyAccount *this,int param_1,int param_2,Stream *param_3)

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
  SIG_CHECK_MY_ACCOUNT_IN_DB *local_28;
  MySQL *local_24;
  SIG_CHECK_MY_ACCOUNT_OK *local_20;
  
  bVar9 = 0;
  local_28 = Stream::GetOutBuffer<SIG_CHECK_MY_ACCOUNT_IN_DB>(param_3);
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
  MySQL::escape_string(local_24,&local_6f,(char *)(local_28 + 8));
  MySQL::set_query(local_24,"seLect m_id from charac_info where charac_name=\'%s\' limit 1",
                   &local_6f);
  cVar1 = MySQL::exec(local_24,true);
  if (cVar1 == '\x01') {
    cVar1 = MySQL::fetch(local_24);
    if (cVar1 == '\x01') {
      cVar1 = MySQL::get_int(local_24,0,&local_2c);
      if (cVar1 == '\x01') {
        if (*(uint *)(local_28 + 4) != local_2c) {
          pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8833);
          CStreamGuard::CStreamGuard(local_34,pSVar3,true);
          pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_34);
                    /* try { // try from 0843a098 to 0843a107 has its CatchHandler @ 0843a10a */
          CStreamGuard::operator<<(pCVar4,0x18c);
          pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_34);
          CStreamGuard::operator<<(pCVar4,param_2);
          pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_34);
          local_20 = CStreamGuard::GetInBuffer<SIG_CHECK_MY_ACCOUNT_OK>(pCVar4);
          *(undefined4 *)local_20 = *(undefined4 *)local_28;
          *(undefined4 *)(local_20 + 4) = *(undefined4 *)(local_28 + 0x25);
          *(uint *)(local_20 + 8) = local_2c;
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

---

## makeRequest

```asm
// === 0843a13e DB_AccountHack_CheckMyAccount::makeRequest  [0x0843a13e-0x843a263] ===
 843a13e:	55                   	push   %ebp
 843a13f:	89 e5                	mov    %esp,%ebp
 843a141:	56                   	push   %esi
 843a142:	53                   	push   %ebx
 843a143:	83 ec 20             	sub    $0x20,%esp
 843a146:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843a14b:	c7 44 24 08 46 88 00 	movl   $0x8846,0x8(%esp)
 843a152:	00 
 843a153:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843a15a:	08 
 843a15b:	89 04 24             	mov    %eax,(%esp)
 843a15e:	e8 23 59 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843a163:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843a16a:	00 
 843a16b:	89 44 24 04          	mov    %eax,0x4(%esp)
 843a16f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843a172:	89 04 24             	mov    %eax,(%esp)
 843a175:	e8 ac ea c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843a17a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843a17d:	89 04 24             	mov    %eax,(%esp)
 843a180:	e8 c1 ea c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843a185:	c7 44 24 04 8b 01 00 	movl   $0x18b,0x4(%esp)
 843a18c:	00 
 843a18d:	89 04 24             	mov    %eax,(%esp)
 843a190:	e8 c1 ea c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843a195:	8b 5d 08             	mov    0x8(%ebp),%ebx
 843a198:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843a19b:	89 04 24             	mov    %eax,(%esp)
 843a19e:	e8 a3 ea c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843a1a3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 843a1a7:	89 04 24             	mov    %eax,(%esp)
 843a1aa:	e8 a7 ea c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843a1af:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843a1b2:	89 04 24             	mov    %eax,(%esp)
 843a1b5:	e8 94 ea c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 843a1ba:	89 04 24             	mov    %eax,(%esp)
 843a1bd:	e8 ce 96 01 00       	call   8453890 <_ZN12CStreamGuard11GetInBufferI26SIG_CHECK_MY_ACCOUNT_IN_DBEEPT_v>
 843a1c2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843a1c5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843a1c8:	8b 55 10             	mov    0x10(%ebp),%edx
 843a1cb:	89 10                	mov    %edx,(%eax)
 843a1cd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843a1d0:	8b 55 0c             	mov    0xc(%ebp),%edx
 843a1d3:	89 50 04             	mov    %edx,0x4(%eax)
 843a1d6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843a1d9:	8b 55 14             	mov    0x14(%ebp),%edx
 843a1dc:	89 50 25             	mov    %edx,0x25(%eax)
 843a1df:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843a1e2:	83 c0 08             	add    $0x8,%eax
 843a1e5:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 843a1ec:	00 
 843a1ed:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843a1f4:	00 
 843a1f5:	89 04 24             	mov    %eax,(%esp)
 843a1f8:	e8 c3 3a c4 ff       	call   807dcc0 <memset@plt>
 843a1fd:	8b 45 1c             	mov    0x1c(%ebp),%eax
 843a200:	8b 55 f4             	mov    -0xc(%ebp),%edx
 843a203:	83 c2 08             	add    $0x8,%edx
 843a206:	89 44 24 08          	mov    %eax,0x8(%esp)
 843a20a:	8b 45 18             	mov    0x18(%ebp),%eax
 843a20d:	89 44 24 04          	mov    %eax,0x4(%esp)
 843a211:	89 14 24             	mov    %edx,(%esp)
 843a214:	e8 b7 36 c4 ff       	call   807d8d0 <strncpy@plt>
 843a219:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843a21e:	8d 55 ec             	lea    -0x14(%ebp),%edx
 843a221:	89 54 24 08          	mov    %edx,0x8(%esp)
 843a225:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843a22c:	00 
 843a22d:	89 04 24             	mov    %eax,(%esp)
 843a230:	e8 a9 6d 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843a235:	eb 1b                	jmp    843a252 <_ZN29DB_AccountHack_CheckMyAccount11makeRequestEjjjjPci+0x114>
 843a237:	89 d3                	mov    %edx,%ebx
 843a239:	89 c6                	mov    %eax,%esi
 843a23b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843a23e:	89 04 24             	mov    %eax,(%esp)
 843a241:	e8 8c 26 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843a246:	89 f0                	mov    %esi,%eax
 843a248:	89 da                	mov    %ebx,%edx
 843a24a:	89 04 24             	mov    %eax,(%esp)
 843a24d:	e8 fe 94 6a 00       	call   8ae3750 <_Unwind_Resume>
 843a252:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843a255:	89 04 24             	mov    %eax,(%esp)
 843a258:	e8 75 26 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843a25d:	83 c4 20             	add    $0x20,%esp
 843a260:	5b                   	pop    %ebx
 843a261:	5e                   	pop    %esi
 843a262:	5d                   	pop    %ebp
 843a263:	c3                   	ret

```

```c
// DB_AccountHack_CheckMyAccount::makeRequest @ 0x843a13e

/* DB_AccountHack_CheckMyAccount::makeRequest(unsigned int, unsigned int, unsigned int, unsigned
   int, char*, int) */

void DB_AccountHack_CheckMyAccount::makeRequest
               (uint param_1,uint param_2,uint param_3,uint param_4,char *param_5,int param_6)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_CHECK_MY_ACCOUNT_IN_DB *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8846);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0843a190 to 0843a234 has its CatchHandler @ 0843a237 */
  CStreamGuard::operator<<(pCVar2,0x18b);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_CHECK_MY_ACCOUNT_IN_DB>(pCVar2);
  *(uint *)local_10 = param_3;
  *(uint *)(local_10 + 4) = param_2;
  *(uint *)(local_10 + 0x25) = param_4;
  memset(local_10 + 8,0,0x1d);
  strncpy((char *)(local_10 + 8),param_5,param_6);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

