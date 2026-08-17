# DB_CheckDoubleGuildAddress

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0842ab78 DB_CheckDoubleGuildAddress::dispatch  [0x0842ab78-0x842acf3] ===
 842ab78:	55                   	push   %ebp
 842ab79:	89 e5                	mov    %esp,%ebp
 842ab7b:	56                   	push   %esi
 842ab7c:	53                   	push   %ebx
 842ab7d:	83 ec 20             	sub    $0x20,%esp
 842ab80:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842ab85:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842ab8c:	00 
 842ab8d:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 842ab94:	00 
 842ab95:	89 04 24             	mov    %eax,(%esp)
 842ab98:	e8 a1 a6 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842ab9d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 842aba0:	8b 45 14             	mov    0x14(%ebp),%eax
 842aba3:	89 04 24             	mov    %eax,(%esp)
 842aba6:	e8 4b 79 02 00       	call   84524f6 <_ZN6Stream12GetOutBufferI30SIG_DOUBLE_CHECK_GUILD_ADDRESSEEPT_v>
 842abab:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842abae:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842abb1:	89 44 24 08          	mov    %eax,0x8(%esp)
 842abb5:	c7 44 24 04 0c fc c4 	movl   $0x8c4fc0c,0x4(%esp)
 842abbc:	08 
 842abbd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842abc0:	89 04 24             	mov    %eax,(%esp)
 842abc3:	e8 f8 95 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842abc8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842abcf:	00 
 842abd0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842abd3:	89 04 24             	mov    %eax,(%esp)
 842abd6:	e8 4b 97 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842abdb:	83 f0 01             	xor    $0x1,%eax
 842abde:	84 c0                	test   %al,%al
 842abe0:	74 0a                	je     842abec <_ZN26DB_CheckDoubleGuildAddress8dispatchEiiP6Stream+0x74>
 842abe2:	bb 00 00 00 00       	mov    $0x0,%ebx
 842abe7:	e9 fe 00 00 00       	jmp    842acea <_ZN26DB_CheckDoubleGuildAddress8dispatchEiiP6Stream+0x172>
 842abec:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842abf1:	c7 44 24 08 9f 6c 00 	movl   $0x6c9f,0x8(%esp)
 842abf8:	00 
 842abf9:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842ac00:	08 
 842ac01:	89 04 24             	mov    %eax,(%esp)
 842ac04:	e8 7d 4e e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842ac09:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842ac10:	00 
 842ac11:	89 44 24 04          	mov    %eax,0x4(%esp)
 842ac15:	8d 45 e8             	lea    -0x18(%ebp),%eax
 842ac18:	89 04 24             	mov    %eax,(%esp)
 842ac1b:	e8 06 e0 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842ac20:	8d 45 e8             	lea    -0x18(%ebp),%eax
 842ac23:	89 04 24             	mov    %eax,(%esp)
 842ac26:	e8 1b e0 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842ac2b:	c7 44 24 04 ec 00 00 	movl   $0xec,0x4(%esp)
 842ac32:	00 
 842ac33:	89 04 24             	mov    %eax,(%esp)
 842ac36:	e8 1b e0 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842ac3b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 842ac3e:	89 04 24             	mov    %eax,(%esp)
 842ac41:	e8 00 e0 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842ac46:	8b 55 10             	mov    0x10(%ebp),%edx
 842ac49:	89 54 24 04          	mov    %edx,0x4(%esp)
 842ac4d:	89 04 24             	mov    %eax,(%esp)
 842ac50:	e8 01 e0 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842ac55:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842ac58:	89 04 24             	mov    %eax,(%esp)
 842ac5b:	e8 0c 77 cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 842ac60:	85 c0                	test   %eax,%eax
 842ac62:	0f 94 c0             	sete   %al
 842ac65:	84 c0                	test   %al,%al
 842ac67:	74 1d                	je     842ac86 <_ZN26DB_CheckDoubleGuildAddress8dispatchEiiP6Stream+0x10e>
 842ac69:	8d 45 e8             	lea    -0x18(%ebp),%eax
 842ac6c:	89 04 24             	mov    %eax,(%esp)
 842ac6f:	e8 d2 df c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842ac74:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842ac7b:	00 
 842ac7c:	89 04 24             	mov    %eax,(%esp)
 842ac7f:	e8 80 63 cd ff       	call   8101004 <_ZN12CStreamGuardlsEc>
 842ac84:	eb 1b                	jmp    842aca1 <_ZN26DB_CheckDoubleGuildAddress8dispatchEiiP6Stream+0x129>
 842ac86:	8d 45 e8             	lea    -0x18(%ebp),%eax
 842ac89:	89 04 24             	mov    %eax,(%esp)
 842ac8c:	e8 b5 df c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842ac91:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 842ac98:	00 
 842ac99:	89 04 24             	mov    %eax,(%esp)
 842ac9c:	e8 63 63 cd ff       	call   8101004 <_ZN12CStreamGuardlsEc>
 842aca1:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842aca6:	8d 55 e8             	lea    -0x18(%ebp),%edx
 842aca9:	89 54 24 08          	mov    %edx,0x8(%esp)
 842acad:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842acb4:	00 
 842acb5:	89 04 24             	mov    %eax,(%esp)
 842acb8:	e8 21 63 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842acbd:	bb 01 00 00 00       	mov    $0x1,%ebx
 842acc2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 842acc5:	89 04 24             	mov    %eax,(%esp)
 842acc8:	e8 05 1c 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842accd:	eb 1b                	jmp    842acea <_ZN26DB_CheckDoubleGuildAddress8dispatchEiiP6Stream+0x172>
 842accf:	89 d3                	mov    %edx,%ebx
 842acd1:	89 c6                	mov    %eax,%esi
 842acd3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 842acd6:	89 04 24             	mov    %eax,(%esp)
 842acd9:	e8 f4 1b 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842acde:	89 f0                	mov    %esi,%eax
 842ace0:	89 da                	mov    %ebx,%edx
 842ace2:	89 04 24             	mov    %eax,(%esp)
 842ace5:	e8 66 8a 6b 00       	call   8ae3750 <_Unwind_Resume>
 842acea:	89 d8                	mov    %ebx,%eax
 842acec:	83 c4 20             	add    $0x20,%esp
 842acef:	5b                   	pop    %ebx
 842acf0:	5e                   	pop    %esi
 842acf1:	5d                   	pop    %ebp
 842acf2:	c3                   	ret
 842acf3:	90                   	nop

```

```c
// DB_CheckDoubleGuildAddress::dispatch @ 0x842ab78

/* DB_CheckDoubleGuildAddress::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_CheckDoubleGuildAddress::dispatch
          (DB_CheckDoubleGuildAddress *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CStreamGuard local_1c [8];
  MySQL *local_14;
  SIG_DOUBLE_CHECK_GUILD_ADDRESS *local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,8,0);
  local_10 = Stream::GetOutBuffer<SIG_DOUBLE_CHECK_GUILD_ADDRESS>(param_3);
  MySQL::set_query(local_14,"seLect * from guild_info where guild_url=\'%s\'",local_10);
  cVar1 = MySQL::exec(local_14,true);
  if (cVar1 == '\x01') {
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6c9f);
    CStreamGuard::CStreamGuard(local_1c,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 0842ac36 to 0842acbc has its CatchHandler @ 0842accf */
    CStreamGuard::operator<<(pCVar3,0xec);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,param_2);
    iVar4 = MySQL::get_n_rows(local_14);
    if (iVar4 == 0) {
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
      CStreamGuard::operator<<(pCVar3,'\x01');
    }
    else {
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
      CStreamGuard::operator<<(pCVar3,'\x02');
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_1c);
    uVar5 = 1;
    CStreamGuard::~CStreamGuard(local_1c);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

```

