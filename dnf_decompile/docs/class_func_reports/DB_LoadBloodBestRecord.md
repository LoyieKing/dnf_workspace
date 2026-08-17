# DB_LoadBloodBestRecord

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843199a DB_LoadBloodBestRecord::dispatch  [0x0843199a-0x8431c73] ===
 843199a:	55                   	push   %ebp
 843199b:	89 e5                	mov    %esp,%ebp
 843199d:	56                   	push   %esi
 843199e:	53                   	push   %ebx
 843199f:	83 ec 50             	sub    $0x50,%esp
 84319a2:	8b 45 08             	mov    0x8(%ebp),%eax
 84319a5:	8b 55 14             	mov    0x14(%ebp),%edx
 84319a8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84319ac:	8b 55 10             	mov    0x10(%ebp),%edx
 84319af:	89 54 24 08          	mov    %edx,0x8(%esp)
 84319b3:	8b 55 0c             	mov    0xc(%ebp),%edx
 84319b6:	89 54 24 04          	mov    %edx,0x4(%esp)
 84319ba:	89 04 24             	mov    %eax,(%esp)
 84319bd:	e8 ba a5 fc ff       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 84319c2:	83 f0 01             	xor    $0x1,%eax
 84319c5:	84 c0                	test   %al,%al
 84319c7:	74 0a                	je     84319d3 <_ZN22DB_LoadBloodBestRecord8dispatchEiiP6Stream+0x39>
 84319c9:	b8 00 00 00 00       	mov    $0x0,%eax
 84319ce:	e9 99 02 00 00       	jmp    8431c6c <_ZN22DB_LoadBloodBestRecord8dispatchEiiP6Stream+0x2d2>
 84319d3:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84319d8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84319df:	00 
 84319e0:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84319e7:	00 
 84319e8:	89 04 24             	mov    %eax,(%esp)
 84319eb:	e8 4e 38 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84319f0:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84319f3:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 84319fa:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8431a01:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 8431a08:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 8431a0f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8431a12:	89 44 24 04          	mov    %eax,0x4(%esp)
 8431a16:	8b 45 14             	mov    0x14(%ebp),%eax
 8431a19:	89 04 24             	mov    %eax,(%esp)
 8431a1c:	e8 75 ad 1e 00       	call   861c796 <_ZN6StreamrsERj>
 8431a21:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8431a24:	89 44 24 08          	mov    %eax,0x8(%esp)
 8431a28:	c7 44 24 04 e8 1d c5 	movl   $0x8c51de8,0x4(%esp)
 8431a2f:	08 
 8431a30:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8431a33:	89 04 24             	mov    %eax,(%esp)
 8431a36:	e8 85 27 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8431a3b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8431a42:	00 
 8431a43:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8431a46:	89 04 24             	mov    %eax,(%esp)
 8431a49:	e8 d8 28 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8431a4e:	83 f0 01             	xor    $0x1,%eax
 8431a51:	84 c0                	test   %al,%al
 8431a53:	74 0a                	je     8431a5f <_ZN22DB_LoadBloodBestRecord8dispatchEiiP6Stream+0xc5>
 8431a55:	b8 00 00 00 00       	mov    $0x0,%eax
 8431a5a:	e9 0d 02 00 00       	jmp    8431c6c <_ZN22DB_LoadBloodBestRecord8dispatchEiiP6Stream+0x2d2>
 8431a5f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8431a62:	89 04 24             	mov    %eax,(%esp)
 8431a65:	e8 52 2a fc ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8431a6a:	83 f0 01             	xor    $0x1,%eax
 8431a6d:	84 c0                	test   %al,%al
 8431a6f:	75 0f                	jne    8431a80 <_ZN22DB_LoadBloodBestRecord8dispatchEiiP6Stream+0xe6>
 8431a71:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8431a74:	89 04 24             	mov    %eax,(%esp)
 8431a77:	e8 f0 08 cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8431a7c:	85 c0                	test   %eax,%eax
 8431a7e:	75 07                	jne    8431a87 <_ZN22DB_LoadBloodBestRecord8dispatchEiiP6Stream+0xed>
 8431a80:	b8 01 00 00 00       	mov    $0x1,%eax
 8431a85:	eb 05                	jmp    8431a8c <_ZN22DB_LoadBloodBestRecord8dispatchEiiP6Stream+0xf2>
 8431a87:	b8 00 00 00 00       	mov    $0x0,%eax
 8431a8c:	84 c0                	test   %al,%al
 8431a8e:	74 47                	je     8431ad7 <_ZN22DB_LoadBloodBestRecord8dispatchEiiP6Stream+0x13d>
 8431a90:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 8431a93:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8431a9a:	00 
 8431a9b:	c7 44 24 08 e4 78 00 	movl   $0x78e4,0x8(%esp)
 8431aa2:	00 
 8431aa3:	c7 44 24 04 a0 c1 c5 	movl   $0x8c5c1a0,0x4(%esp)
 8431aaa:	08 
 8431aab:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8431aae:	89 04 24             	mov    %eax,(%esp)
 8431ab1:	e8 62 dc 11 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8431ab6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8431aba:	c7 44 24 04 48 1e c5 	movl   $0x8c51e48,0x4(%esp)
 8431ac1:	08 
 8431ac2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8431ac5:	89 04 24             	mov    %eax,(%esp)
 8431ac8:	e8 bb dc 11 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8431acd:	b8 01 00 00 00       	mov    $0x1,%eax
 8431ad2:	e9 95 01 00 00       	jmp    8431c6c <_ZN22DB_LoadBloodBestRecord8dispatchEiiP6Stream+0x2d2>
 8431ad7:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8431ade:	e9 6b 01 00 00       	jmp    8431c4e <_ZN22DB_LoadBloodBestRecord8dispatchEiiP6Stream+0x2b4>
 8431ae3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8431ae6:	89 44 24 08          	mov    %eax,0x8(%esp)
 8431aea:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8431af1:	00 
 8431af2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8431af5:	89 04 24             	mov    %eax,(%esp)
 8431af8:	e8 2f 4e ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8431afd:	83 f0 01             	xor    $0x1,%eax
 8431b00:	84 c0                	test   %al,%al
 8431b02:	74 0a                	je     8431b0e <_ZN22DB_LoadBloodBestRecord8dispatchEiiP6Stream+0x174>
 8431b04:	b8 00 00 00 00       	mov    $0x0,%eax
 8431b09:	e9 5e 01 00 00       	jmp    8431c6c <_ZN22DB_LoadBloodBestRecord8dispatchEiiP6Stream+0x2d2>
 8431b0e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8431b11:	89 44 24 08          	mov    %eax,0x8(%esp)
 8431b15:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8431b1c:	00 
 8431b1d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8431b20:	89 04 24             	mov    %eax,(%esp)
 8431b23:	e8 ca 07 cb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8431b28:	83 f0 01             	xor    $0x1,%eax
 8431b2b:	84 c0                	test   %al,%al
 8431b2d:	74 0a                	je     8431b39 <_ZN22DB_LoadBloodBestRecord8dispatchEiiP6Stream+0x19f>
 8431b2f:	b8 00 00 00 00       	mov    $0x0,%eax
 8431b34:	e9 33 01 00 00       	jmp    8431c6c <_ZN22DB_LoadBloodBestRecord8dispatchEiiP6Stream+0x2d2>
 8431b39:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8431b3c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8431b40:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8431b47:	00 
 8431b48:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8431b4b:	89 04 24             	mov    %eax,(%esp)
 8431b4e:	e8 d9 4d ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8431b53:	83 f0 01             	xor    $0x1,%eax
 8431b56:	84 c0                	test   %al,%al
 8431b58:	74 0a                	je     8431b64 <_ZN22DB_LoadBloodBestRecord8dispatchEiiP6Stream+0x1ca>
 8431b5a:	b8 00 00 00 00       	mov    $0x0,%eax
 8431b5f:	e9 08 01 00 00       	jmp    8431c6c <_ZN22DB_LoadBloodBestRecord8dispatchEiiP6Stream+0x2d2>
 8431b64:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8431b69:	c7 44 24 08 f2 78 00 	movl   $0x78f2,0x8(%esp)
 8431b70:	00 
 8431b71:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8431b78:	08 
 8431b79:	89 04 24             	mov    %eax,(%esp)
 8431b7c:	e8 05 df e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8431b81:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8431b88:	00 
 8431b89:	89 44 24 04          	mov    %eax,0x4(%esp)
 8431b8d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8431b90:	89 04 24             	mov    %eax,(%esp)
 8431b93:	e8 8e 70 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8431b98:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8431b9b:	89 04 24             	mov    %eax,(%esp)
 8431b9e:	e8 a3 70 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8431ba3:	c7 44 24 04 3f 01 00 	movl   $0x13f,0x4(%esp)
 8431baa:	00 
 8431bab:	89 04 24             	mov    %eax,(%esp)
 8431bae:	e8 a3 70 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8431bb3:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8431bb6:	89 04 24             	mov    %eax,(%esp)
 8431bb9:	e8 88 70 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8431bbe:	8b 55 10             	mov    0x10(%ebp),%edx
 8431bc1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8431bc5:	89 04 24             	mov    %eax,(%esp)
 8431bc8:	e8 89 70 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8431bcd:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8431bd0:	89 04 24             	mov    %eax,(%esp)
 8431bd3:	e8 76 70 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8431bd8:	89 04 24             	mov    %eax,(%esp)
 8431bdb:	e8 98 12 02 00       	call   8452e78 <_ZN12CStreamGuard11GetInBufferI34SIG_LOAD_BLOOD_DUNGEON_BEST_RECORDEEPT_v>
 8431be0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8431be3:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8431be6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8431be9:	89 10                	mov    %edx,(%eax)
 8431beb:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8431bee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8431bf1:	89 50 04             	mov    %edx,0x4(%eax)
 8431bf4:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8431bf7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8431bfa:	89 50 08             	mov    %edx,0x8(%eax)
 8431bfd:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8431c00:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8431c03:	89 50 0c             	mov    %edx,0xc(%eax)
 8431c06:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8431c0b:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 8431c0e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8431c12:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8431c19:	00 
 8431c1a:	89 04 24             	mov    %eax,(%esp)
 8431c1d:	e8 bc f3 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8431c22:	eb 1b                	jmp    8431c3f <_ZN22DB_LoadBloodBestRecord8dispatchEiiP6Stream+0x2a5>
 8431c24:	89 d3                	mov    %edx,%ebx
 8431c26:	89 c6                	mov    %eax,%esi
 8431c28:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8431c2b:	89 04 24             	mov    %eax,(%esp)
 8431c2e:	e8 9f ac 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8431c33:	89 f0                	mov    %esi,%eax
 8431c35:	89 da                	mov    %ebx,%edx
 8431c37:	89 04 24             	mov    %eax,(%esp)
 8431c3a:	e8 11 1b 6b 00       	call   8ae3750 <_Unwind_Resume>
 8431c3f:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8431c42:	89 04 24             	mov    %eax,(%esp)
 8431c45:	e8 88 ac 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8431c4a:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8431c4e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8431c51:	89 04 24             	mov    %eax,(%esp)
 8431c54:	e8 13 07 cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8431c59:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8431c5c:	0f 97 c0             	seta   %al
 8431c5f:	84 c0                	test   %al,%al
 8431c61:	0f 85 7c fe ff ff    	jne    8431ae3 <_ZN22DB_LoadBloodBestRecord8dispatchEiiP6Stream+0x149>
 8431c67:	b8 01 00 00 00       	mov    $0x1,%eax
 8431c6c:	83 c4 50             	add    $0x50,%esp
 8431c6f:	5b                   	pop    %ebx
 8431c70:	5e                   	pop    %esi
 8431c71:	5d                   	pop    %ebp
 8431c72:	c3                   	ret
 8431c73:	90                   	nop

```

```c
// DB_LoadBloodBestRecord::dispatch @ 0x843199a

/* DB_LoadBloodBestRecord::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadBloodBestRecord::dispatch
          (DB_LoadBloodBestRecord *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  uint uVar6;
  CStreamGuard local_40 [8];
  int local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  cMyTrace local_28 [16];
  MySQL *local_18;
  uint local_14;
  SIG_LOAD_BLOOD_DUNGEON_BEST_RECORD *local_10;
  
  pSVar4 = param_3;
  cVar2 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar2 != '\x01') {
    return 0;
  }
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0,pSVar4);
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  Stream::operator>>(param_3,&local_2c);
  MySQL::set_query(local_18,
                   "seLect best_round, best_time, dungeon_index from charac_blood_best_record where charac_no=%u"
                   ,local_2c);
  cVar2 = MySQL::exec(local_18,true);
  if (cVar2 != '\x01') {
    return 0;
  }
  cVar2 = MySQL::fetch(local_18);
  if ((cVar2 == '\x01') && (iVar3 = MySQL::get_n_rows(local_18), iVar3 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uVar6 = local_2c;
  if (bVar1) {
    cMyTrace::cMyTrace(local_28,"virtual bool DB_LoadBloodBestRecord::dispatch(int, int, Stream*)",
                       0x78e4,0);
    cMyTrace::operator()(local_28,"Not exist data charac_blood_best_record. [charac_no:%d]",uVar6);
  }
  else {
    local_14 = 0;
    while (uVar6 = MySQL::get_n_rows(local_18), local_14 < uVar6) {
      cVar2 = MySQL::get_int(local_18,0,&local_34);
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_uint(local_18,1,&local_30);
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_int(local_18,2,&local_38);
      if (cVar2 != '\x01') {
        return 0;
      }
      pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x78f2);
      CStreamGuard::CStreamGuard(local_40,pSVar4,true);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_40);
                    /* try { // try from 08431bae to 08431c21 has its CatchHandler @ 08431c24 */
      CStreamGuard::operator<<(pCVar5,0x13f);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_40);
      CStreamGuard::operator<<(pCVar5,param_2);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_40);
      local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_BLOOD_DUNGEON_BEST_RECORD>(pCVar5);
      *(uint *)local_10 = local_2c;
      *(uint *)(local_10 + 4) = local_30;
      *(int *)(local_10 + 8) = local_34;
      *(int *)(local_10 + 0xc) = local_38;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_40);
      CStreamGuard::~CStreamGuard(local_40);
      local_14 = local_14 + 1;
    }
  }
  return 1;
}

```

---

## makeRequest

```asm
// === 084318c4 DB_LoadBloodBestRecord::makeRequest  [0x084318c4-0x8431999] ===
 84318c4:	55                   	push   %ebp
 84318c5:	89 e5                	mov    %esp,%ebp
 84318c7:	56                   	push   %esi
 84318c8:	53                   	push   %ebx
 84318c9:	83 ec 20             	sub    $0x20,%esp
 84318cc:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84318d1:	c7 44 24 08 c6 78 00 	movl   $0x78c6,0x8(%esp)
 84318d8:	00 
 84318d9:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84318e0:	08 
 84318e1:	89 04 24             	mov    %eax,(%esp)
 84318e4:	e8 9d e1 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84318e9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84318f0:	00 
 84318f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84318f5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84318f8:	89 04 24             	mov    %eax,(%esp)
 84318fb:	e8 26 73 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8431900:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8431903:	89 04 24             	mov    %eax,(%esp)
 8431906:	e8 3b 73 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843190b:	c7 44 24 04 3f 01 00 	movl   $0x13f,0x4(%esp)
 8431912:	00 
 8431913:	89 04 24             	mov    %eax,(%esp)
 8431916:	e8 3b 73 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843191b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843191e:	89 04 24             	mov    %eax,(%esp)
 8431921:	e8 20 73 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8431926:	8b 55 08             	mov    0x8(%ebp),%edx
 8431929:	89 54 24 04          	mov    %edx,0x4(%esp)
 843192d:	89 04 24             	mov    %eax,(%esp)
 8431930:	e8 21 73 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8431935:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8431938:	89 04 24             	mov    %eax,(%esp)
 843193b:	e8 06 73 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8431940:	8b 55 0c             	mov    0xc(%ebp),%edx
 8431943:	89 54 24 04          	mov    %edx,0x4(%esp)
 8431947:	89 04 24             	mov    %eax,(%esp)
 843194a:	e8 43 09 cb ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 843194f:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8431954:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8431957:	89 54 24 08          	mov    %edx,0x8(%esp)
 843195b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8431962:	00 
 8431963:	89 04 24             	mov    %eax,(%esp)
 8431966:	e8 73 f6 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843196b:	eb 1b                	jmp    8431988 <_ZN22DB_LoadBloodBestRecord11makeRequestEij+0xc4>
 843196d:	89 d3                	mov    %edx,%ebx
 843196f:	89 c6                	mov    %eax,%esi
 8431971:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8431974:	89 04 24             	mov    %eax,(%esp)
 8431977:	e8 56 af 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843197c:	89 f0                	mov    %esi,%eax
 843197e:	89 da                	mov    %ebx,%edx
 8431980:	89 04 24             	mov    %eax,(%esp)
 8431983:	e8 c8 1d 6b 00       	call   8ae3750 <_Unwind_Resume>
 8431988:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843198b:	89 04 24             	mov    %eax,(%esp)
 843198e:	e8 3f af 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8431993:	83 c4 20             	add    $0x20,%esp
 8431996:	5b                   	pop    %ebx
 8431997:	5e                   	pop    %esi
 8431998:	5d                   	pop    %ebp
 8431999:	c3                   	ret

```

```c
// DB_LoadBloodBestRecord::makeRequest @ 0x84318c4

/* DB_LoadBloodBestRecord::makeRequest(int, unsigned int) */

void DB_LoadBloodBestRecord::makeRequest(int param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x78c6);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08431916 to 0843196a has its CatchHandler @ 0843196d */
  CStreamGuard::operator<<(pCVar2,0x13f);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

