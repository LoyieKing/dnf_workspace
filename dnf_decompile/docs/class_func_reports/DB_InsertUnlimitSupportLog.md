# DB_InsertUnlimitSupportLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0842eb2e DB_InsertUnlimitSupportLog::dispatch  [0x0842eb2e-0x842ebcf] ===
 842eb2e:	55                   	push   %ebp
 842eb2f:	89 e5                	mov    %esp,%ebp
 842eb31:	57                   	push   %edi
 842eb32:	56                   	push   %esi
 842eb33:	53                   	push   %ebx
 842eb34:	83 ec 3c             	sub    $0x3c,%esp
 842eb37:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842eb3c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842eb43:	00 
 842eb44:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 842eb4b:	00 
 842eb4c:	89 04 24             	mov    %eax,(%esp)
 842eb4f:	e8 ea 66 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842eb54:	89 45 e0             	mov    %eax,-0x20(%ebp)
 842eb57:	8b 45 14             	mov    0x14(%ebp),%eax
 842eb5a:	89 04 24             	mov    %eax,(%esp)
 842eb5d:	e8 38 3e 02 00       	call   845299a <_ZN6Stream12GetOutBufferI30SIG_INSERT_UNLIMIT_SUPPORT_LOGEEPT_v>
 842eb62:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 842eb65:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842eb68:	8d 78 0c             	lea    0xc(%eax),%edi
 842eb6b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842eb6e:	8b 70 08             	mov    0x8(%eax),%esi
 842eb71:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842eb74:	8b 58 04             	mov    0x4(%eax),%ebx
 842eb77:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842eb7a:	8b 00                	mov    (%eax),%eax
 842eb7c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842eb83:	00 
 842eb84:	89 04 24             	mov    %eax,(%esp)
 842eb87:	e8 bf a4 cd ff       	call   810904b <_Z14NumberToStringji>
 842eb8c:	89 7c 24 14          	mov    %edi,0x14(%esp)
 842eb90:	89 74 24 10          	mov    %esi,0x10(%esp)
 842eb94:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 842eb98:	89 44 24 08          	mov    %eax,0x8(%esp)
 842eb9c:	c7 44 24 04 84 13 c5 	movl   $0x8c51384,0x4(%esp)
 842eba3:	08 
 842eba4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842eba7:	89 04 24             	mov    %eax,(%esp)
 842ebaa:	e8 11 56 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842ebaf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842ebb6:	00 
 842ebb7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842ebba:	89 04 24             	mov    %eax,(%esp)
 842ebbd:	e8 64 57 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842ebc2:	b8 01 00 00 00       	mov    $0x1,%eax
 842ebc7:	83 c4 3c             	add    $0x3c,%esp
 842ebca:	5b                   	pop    %ebx
 842ebcb:	5e                   	pop    %esi
 842ebcc:	5f                   	pop    %edi
 842ebcd:	5d                   	pop    %ebp
 842ebce:	c3                   	ret
 842ebcf:	90                   	nop

```

```c
// DB_InsertUnlimitSupportLog::dispatch @ 0x842eb2e

/* DB_InsertUnlimitSupportLog::dispatch(int, int, Stream*) */

undefined4 DB_InsertUnlimitSupportLog::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  MySQL *this;
  SIG_INSERT_UNLIMIT_SUPPORT_LOG *pSVar3;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  pSVar3 = Stream::GetOutBuffer<SIG_INSERT_UNLIMIT_SUPPORT_LOG>(in_stack_00000010);
  uVar1 = *(undefined4 *)(pSVar3 + 8);
  uVar2 = *(undefined4 *)(pSVar3 + 4);
  uVar4 = NumberToString(*(uint *)pSVar3,0);
  MySQL::set_query(this,
                   "inSert into event_unlimitsupport_lev(m_id,occ_time,server_id,charac_no,charac_name) values(%s,now(),%d,%d,\'%s\')"
                   ,uVar4,uVar2,uVar1,pSVar3 + 0xc);
  MySQL::exec(this,true);
  return 1;
}

```

---

## makeRequest

```asm
// === 0842ebd0 DB_InsertUnlimitSupportLog::makeRequest  [0x0842ebd0-0x842ecf3] ===
 842ebd0:	55                   	push   %ebp
 842ebd1:	89 e5                	mov    %esp,%ebp
 842ebd3:	56                   	push   %esi
 842ebd4:	53                   	push   %ebx
 842ebd5:	83 ec 20             	sub    $0x20,%esp
 842ebd8:	81 7d 08 01 65 94 00 	cmpl   $0x946501,0x8(%ebp)
 842ebdf:	0f 86 07 01 00 00    	jbe    842ecec <_ZN26DB_InsertUnlimitSupportLog11makeRequestEjjPKc+0x11c>
 842ebe5:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842ebea:	c7 44 24 08 92 73 00 	movl   $0x7392,0x8(%esp)
 842ebf1:	00 
 842ebf2:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842ebf9:	08 
 842ebfa:	89 04 24             	mov    %eax,(%esp)
 842ebfd:	e8 84 0e e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842ec02:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842ec09:	00 
 842ec0a:	89 44 24 04          	mov    %eax,0x4(%esp)
 842ec0e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842ec11:	89 04 24             	mov    %eax,(%esp)
 842ec14:	e8 0d a0 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842ec19:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842ec1c:	89 04 24             	mov    %eax,(%esp)
 842ec1f:	e8 22 a0 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842ec24:	c7 44 24 04 22 01 00 	movl   $0x122,0x4(%esp)
 842ec2b:	00 
 842ec2c:	89 04 24             	mov    %eax,(%esp)
 842ec2f:	e8 22 a0 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842ec34:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842ec37:	89 04 24             	mov    %eax,(%esp)
 842ec3a:	e8 07 a0 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842ec3f:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 842ec46:	ff 
 842ec47:	89 04 24             	mov    %eax,(%esp)
 842ec4a:	e8 07 a0 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842ec4f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842ec52:	89 04 24             	mov    %eax,(%esp)
 842ec55:	e8 f4 9f c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 842ec5a:	89 04 24             	mov    %eax,(%esp)
 842ec5d:	e8 8c 3d 02 00       	call   84529ee <_ZN12CStreamGuard11GetInBufferI30SIG_INSERT_UNLIMIT_SUPPORT_LOGEEPT_v>
 842ec62:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842ec65:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842ec68:	8b 55 08             	mov    0x8(%ebp),%edx
 842ec6b:	89 10                	mov    %edx,(%eax)
 842ec6d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842ec70:	8b 55 0c             	mov    0xc(%ebp),%edx
 842ec73:	89 50 08             	mov    %edx,0x8(%eax)
 842ec76:	e8 06 d5 c9 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 842ec7b:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 842ec81:	89 c2                	mov    %eax,%edx
 842ec83:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842ec86:	89 50 04             	mov    %edx,0x4(%eax)
 842ec89:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842ec8c:	8d 50 0c             	lea    0xc(%eax),%edx
 842ec8f:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 842ec96:	00 
 842ec97:	8b 45 10             	mov    0x10(%ebp),%eax
 842ec9a:	89 44 24 04          	mov    %eax,0x4(%esp)
 842ec9e:	89 14 24             	mov    %edx,(%esp)
 842eca1:	e8 2a ec c4 ff       	call   807d8d0 <strncpy@plt>
 842eca6:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842ecab:	8d 55 ec             	lea    -0x14(%ebp),%edx
 842ecae:	89 54 24 08          	mov    %edx,0x8(%esp)
 842ecb2:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 842ecb9:	00 
 842ecba:	89 04 24             	mov    %eax,(%esp)
 842ecbd:	e8 1c 23 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842ecc2:	eb 1b                	jmp    842ecdf <_ZN26DB_InsertUnlimitSupportLog11makeRequestEjjPKc+0x10f>
 842ecc4:	89 d3                	mov    %edx,%ebx
 842ecc6:	89 c6                	mov    %eax,%esi
 842ecc8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842eccb:	89 04 24             	mov    %eax,(%esp)
 842ecce:	e8 ff db 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842ecd3:	89 f0                	mov    %esi,%eax
 842ecd5:	89 da                	mov    %ebx,%edx
 842ecd7:	89 04 24             	mov    %eax,(%esp)
 842ecda:	e8 71 4a 6b 00       	call   8ae3750 <_Unwind_Resume>
 842ecdf:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842ece2:	89 04 24             	mov    %eax,(%esp)
 842ece5:	e8 e8 db 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842ecea:	eb 01                	jmp    842eced <_ZN26DB_InsertUnlimitSupportLog11makeRequestEjjPKc+0x11d>
 842ecec:	90                   	nop
 842eced:	83 c4 20             	add    $0x20,%esp
 842ecf0:	5b                   	pop    %ebx
 842ecf1:	5e                   	pop    %esi
 842ecf2:	5d                   	pop    %ebp
 842ecf3:	c3                   	ret

```

```c
// DB_InsertUnlimitSupportLog::makeRequest @ 0x842ebd0

/* DB_InsertUnlimitSupportLog::makeRequest(unsigned int, unsigned int, char const*) */

void DB_InsertUnlimitSupportLog::makeRequest(uint param_1,uint param_2,char *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  CStreamGuard local_18 [8];
  SIG_INSERT_UNLIMIT_SUPPORT_LOG *local_10;
  
  if (0x946501 < param_1) {
    pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7392);
    CStreamGuard::CStreamGuard(local_18,pSVar1,true);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842ec2f to 0842ecc1 has its CatchHandler @ 0842ecc4 */
    CStreamGuard::operator<<(pCVar2,0x122);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar2,-1);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
    local_10 = CStreamGuard::GetInBuffer<SIG_INSERT_UNLIMIT_SUPPORT_LOG>(pCVar2);
    *(uint *)local_10 = param_1;
    *(uint *)(local_10 + 8) = param_2;
    iVar3 = G_CEnvironment();
    *(undefined4 *)(local_10 + 4) = *(undefined4 *)(iVar3 + 0x378);
    strncpy((char *)(local_10 + 0xc),param_3,0x1d);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
    CStreamGuard::~CStreamGuard(local_18);
  }
  return;
}

```

