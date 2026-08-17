# DB_CheckDoubleGuildName

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0842a9fc DB_CheckDoubleGuildName::dispatch  [0x0842a9fc-0x842ab77] ===
 842a9fc:	55                   	push   %ebp
 842a9fd:	89 e5                	mov    %esp,%ebp
 842a9ff:	56                   	push   %esi
 842aa00:	53                   	push   %ebx
 842aa01:	83 ec 20             	sub    $0x20,%esp
 842aa04:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842aa09:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842aa10:	00 
 842aa11:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 842aa18:	00 
 842aa19:	89 04 24             	mov    %eax,(%esp)
 842aa1c:	e8 1d a8 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842aa21:	89 45 f0             	mov    %eax,-0x10(%ebp)
 842aa24:	8b 45 14             	mov    0x14(%ebp),%eax
 842aa27:	89 04 24             	mov    %eax,(%esp)
 842aa2a:	e8 73 7a 02 00       	call   84524a2 <_ZN6Stream12GetOutBufferI27SIG_DOUBLE_CHECK_GUILD_NAMEEEPT_v>
 842aa2f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842aa32:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842aa35:	89 44 24 08          	mov    %eax,0x8(%esp)
 842aa39:	c7 44 24 04 c8 fb c4 	movl   $0x8c4fbc8,0x4(%esp)
 842aa40:	08 
 842aa41:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842aa44:	89 04 24             	mov    %eax,(%esp)
 842aa47:	e8 74 97 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842aa4c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842aa53:	00 
 842aa54:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842aa57:	89 04 24             	mov    %eax,(%esp)
 842aa5a:	e8 c7 98 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842aa5f:	83 f0 01             	xor    $0x1,%eax
 842aa62:	84 c0                	test   %al,%al
 842aa64:	74 0a                	je     842aa70 <_ZN23DB_CheckDoubleGuildName8dispatchEiiP6Stream+0x74>
 842aa66:	bb 00 00 00 00       	mov    $0x0,%ebx
 842aa6b:	e9 fe 00 00 00       	jmp    842ab6e <_ZN23DB_CheckDoubleGuildName8dispatchEiiP6Stream+0x172>
 842aa70:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842aa75:	c7 44 24 08 86 6c 00 	movl   $0x6c86,0x8(%esp)
 842aa7c:	00 
 842aa7d:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842aa84:	08 
 842aa85:	89 04 24             	mov    %eax,(%esp)
 842aa88:	e8 f9 4f e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842aa8d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842aa94:	00 
 842aa95:	89 44 24 04          	mov    %eax,0x4(%esp)
 842aa99:	8d 45 e8             	lea    -0x18(%ebp),%eax
 842aa9c:	89 04 24             	mov    %eax,(%esp)
 842aa9f:	e8 82 e1 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842aaa4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 842aaa7:	89 04 24             	mov    %eax,(%esp)
 842aaaa:	e8 97 e1 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842aaaf:	c7 44 24 04 eb 00 00 	movl   $0xeb,0x4(%esp)
 842aab6:	00 
 842aab7:	89 04 24             	mov    %eax,(%esp)
 842aaba:	e8 97 e1 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842aabf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 842aac2:	89 04 24             	mov    %eax,(%esp)
 842aac5:	e8 7c e1 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842aaca:	8b 55 10             	mov    0x10(%ebp),%edx
 842aacd:	89 54 24 04          	mov    %edx,0x4(%esp)
 842aad1:	89 04 24             	mov    %eax,(%esp)
 842aad4:	e8 7d e1 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842aad9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842aadc:	89 04 24             	mov    %eax,(%esp)
 842aadf:	e8 88 78 cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 842aae4:	85 c0                	test   %eax,%eax
 842aae6:	0f 94 c0             	sete   %al
 842aae9:	84 c0                	test   %al,%al
 842aaeb:	74 1d                	je     842ab0a <_ZN23DB_CheckDoubleGuildName8dispatchEiiP6Stream+0x10e>
 842aaed:	8d 45 e8             	lea    -0x18(%ebp),%eax
 842aaf0:	89 04 24             	mov    %eax,(%esp)
 842aaf3:	e8 4e e1 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842aaf8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842aaff:	00 
 842ab00:	89 04 24             	mov    %eax,(%esp)
 842ab03:	e8 fc 64 cd ff       	call   8101004 <_ZN12CStreamGuardlsEc>
 842ab08:	eb 1b                	jmp    842ab25 <_ZN23DB_CheckDoubleGuildName8dispatchEiiP6Stream+0x129>
 842ab0a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 842ab0d:	89 04 24             	mov    %eax,(%esp)
 842ab10:	e8 31 e1 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842ab15:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 842ab1c:	00 
 842ab1d:	89 04 24             	mov    %eax,(%esp)
 842ab20:	e8 df 64 cd ff       	call   8101004 <_ZN12CStreamGuardlsEc>
 842ab25:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842ab2a:	8d 55 e8             	lea    -0x18(%ebp),%edx
 842ab2d:	89 54 24 08          	mov    %edx,0x8(%esp)
 842ab31:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842ab38:	00 
 842ab39:	89 04 24             	mov    %eax,(%esp)
 842ab3c:	e8 9d 64 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842ab41:	bb 01 00 00 00       	mov    $0x1,%ebx
 842ab46:	8d 45 e8             	lea    -0x18(%ebp),%eax
 842ab49:	89 04 24             	mov    %eax,(%esp)
 842ab4c:	e8 81 1d 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842ab51:	eb 1b                	jmp    842ab6e <_ZN23DB_CheckDoubleGuildName8dispatchEiiP6Stream+0x172>
 842ab53:	89 d3                	mov    %edx,%ebx
 842ab55:	89 c6                	mov    %eax,%esi
 842ab57:	8d 45 e8             	lea    -0x18(%ebp),%eax
 842ab5a:	89 04 24             	mov    %eax,(%esp)
 842ab5d:	e8 70 1d 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842ab62:	89 f0                	mov    %esi,%eax
 842ab64:	89 da                	mov    %ebx,%edx
 842ab66:	89 04 24             	mov    %eax,(%esp)
 842ab69:	e8 e2 8b 6b 00       	call   8ae3750 <_Unwind_Resume>
 842ab6e:	89 d8                	mov    %ebx,%eax
 842ab70:	83 c4 20             	add    $0x20,%esp
 842ab73:	5b                   	pop    %ebx
 842ab74:	5e                   	pop    %esi
 842ab75:	5d                   	pop    %ebp
 842ab76:	c3                   	ret
 842ab77:	90                   	nop

```

```c
// DB_CheckDoubleGuildName::dispatch @ 0x842a9fc

/* DB_CheckDoubleGuildName::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_CheckDoubleGuildName::dispatch
          (DB_CheckDoubleGuildName *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CStreamGuard local_1c [8];
  MySQL *local_14;
  SIG_DOUBLE_CHECK_GUILD_NAME *local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,8,0);
  local_10 = Stream::GetOutBuffer<SIG_DOUBLE_CHECK_GUILD_NAME>(param_3);
  MySQL::set_query(local_14,"seLect * from guild_info where expire_flag=0 and guild_name=\'%s\'",
                   local_10);
  cVar1 = MySQL::exec(local_14,true);
  if (cVar1 == '\x01') {
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6c86);
    CStreamGuard::CStreamGuard(local_1c,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 0842aaba to 0842ab40 has its CatchHandler @ 0842ab53 */
    CStreamGuard::operator<<(pCVar3,0xeb);
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

