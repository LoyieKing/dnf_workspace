# DisPatcher_SelectCharac

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 16

---

## RegistTimerSchedules

```asm
// === 081c7bac DisPatcher_SelectCharac::RegistTimerSchedules  [0x081c7bac-0x81c7c1b] ===
 81c7bac:	55                   	push   %ebp
 81c7bad:	89 e5                	mov    %esp,%ebp
 81c7baf:	57                   	push   %edi
 81c7bb0:	56                   	push   %esi
 81c7bb1:	53                   	push   %ebx
 81c7bb2:	83 ec 2c             	sub    $0x2c,%esp
 81c7bb5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7bb8:	89 04 24             	mov    %eax,(%esp)
 81c7bbb:	e8 8e 40 f0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81c7bc0:	89 c6                	mov    %eax,%esi
 81c7bc2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7bc5:	89 04 24             	mov    %eax,(%esp)
 81c7bc8:	e8 af 27 f1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 81c7bcd:	0f b7 f8             	movzwl %ax,%edi
 81c7bd0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7bd3:	89 04 24             	mov    %eax,(%esp)
 81c7bd6:	e8 bb 10 f0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81c7bdb:	89 c3                	mov    %eax,%ebx
 81c7bdd:	e8 9a e8 f2 ff       	call   80f647c <_Z12G_TimerQueuev>
 81c7be2:	89 74 24 18          	mov    %esi,0x18(%esp)
 81c7be6:	89 7c 24 14          	mov    %edi,0x14(%esp)
 81c7bea:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81c7bf1:	00 
 81c7bf2:	c7 44 24 0c 51 00 00 	movl   $0x51,0xc(%esp)
 81c7bf9:	00 
 81c7bfa:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81c7bfe:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c7c05:	00 
 81c7c06:	89 04 24             	mov    %eax,(%esp)
 81c7c09:	e8 08 92 46 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 81c7c0e:	b8 01 00 00 00       	mov    $0x1,%eax
 81c7c13:	83 c4 2c             	add    $0x2c,%esp
 81c7c16:	5b                   	pop    %ebx
 81c7c17:	5e                   	pop    %esi
 81c7c18:	5f                   	pop    %edi
 81c7c19:	5d                   	pop    %ebp
 81c7c1a:	c3                   	ret
 81c7c1b:	90                   	nop

```

```c
// DisPatcher_SelectCharac::RegistTimerSchedules @ 0x81c7bac

/* DisPatcher_SelectCharac::RegistTimerSchedules(CUser*) */

undefined4 __thiscall
DisPatcher_SelectCharac::RegistTimerSchedules(DisPatcher_SelectCharac *this,CUser *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  TimerQueue *pTVar4;
  
  uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  uVar1 = CUser::get_unique_id(param_1);
  uVar3 = CUser::GetUID(param_1);
  pTVar4 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar4,0,uVar3,0x51,0,uVar1,uVar2);
  return 1;
}

```

---

## RequestBlackCount

```asm
// === 081c79f2 DisPatcher_SelectCharac::RequestBlackCount  [0x081c79f2-0x81c7bab] ===
 81c79f2:	55                   	push   %ebp
 81c79f3:	89 e5                	mov    %esp,%ebp
 81c79f5:	56                   	push   %esi
 81c79f6:	53                   	push   %ebx
 81c79f7:	83 ec 20             	sub    $0x20,%esp
 81c79fa:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81c79ff:	c7 44 24 08 62 18 00 	movl   $0x1862,0x8(%esp)
 81c7a06:	00 
 81c7a07:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81c7a0e:	08 
 81c7a0f:	89 04 24             	mov    %eax,(%esp)
 81c7a12:	e8 6f 80 0c 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 81c7a17:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81c7a1e:	00 
 81c7a1f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c7a23:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c7a26:	89 04 24             	mov    %eax,(%esp)
 81c7a29:	e8 f8 11 f0 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81c7a2e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c7a31:	89 04 24             	mov    %eax,(%esp)
 81c7a34:	e8 0d 12 f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c7a39:	c7 44 24 04 b3 00 00 	movl   $0xb3,0x4(%esp)
 81c7a40:	00 
 81c7a41:	89 04 24             	mov    %eax,(%esp)
 81c7a44:	e8 0d 12 f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c7a49:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7a4c:	89 04 24             	mov    %eax,(%esp)
 81c7a4f:	e8 42 12 f0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81c7a54:	89 c3                	mov    %eax,%ebx
 81c7a56:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c7a59:	89 04 24             	mov    %eax,(%esp)
 81c7a5c:	e8 e5 11 f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c7a61:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c7a65:	89 04 24             	mov    %eax,(%esp)
 81c7a68:	e8 e9 11 f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c7a6d:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 81c7a74:	00 
 81c7a75:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7a78:	89 04 24             	mov    %eax,(%esp)
 81c7a7b:	e8 4e ce f6 ff       	call   81348ce <_ZN5CUser17DisableCharacInfoE13CACHE_SECTION>
 81c7a80:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7a83:	89 04 24             	mov    %eax,(%esp)
 81c7a86:	e8 73 ce f6 ff       	call   81348fe <_ZN5CUser22IsValidLastLoginCharacEv>
 81c7a8b:	84 c0                	test   %al,%al
 81c7a8d:	74 48                	je     81c7ad7 <_ZN23DisPatcher_SelectCharac17RequestBlackCountEP5CUserR17MSG_CHARAC_SELECT+0xe5>
 81c7a8f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7a92:	89 04 24             	mov    %eax,(%esp)
 81c7a95:	e8 56 ce f6 ff       	call   81348f0 <_ZN5CUser21GetLastLoginChannelNoEv>
 81c7a9a:	89 c3                	mov    %eax,%ebx
 81c7a9c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c7a9f:	89 04 24             	mov    %eax,(%esp)
 81c7aa2:	e8 9f 11 f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c7aa7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c7aab:	89 04 24             	mov    %eax,(%esp)
 81c7aae:	e8 a3 11 f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c7ab3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7ab6:	89 04 24             	mov    %eax,(%esp)
 81c7ab9:	e8 24 ce f6 ff       	call   81348e2 <_ZN5CUser20GetLastLoginCharacNoEv>
 81c7abe:	89 c3                	mov    %eax,%ebx
 81c7ac0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c7ac3:	89 04 24             	mov    %eax,(%esp)
 81c7ac6:	e8 7b 11 f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c7acb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c7acf:	89 04 24             	mov    %eax,(%esp)
 81c7ad2:	e8 7f 11 f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c7ad7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c7ada:	89 04 24             	mov    %eax,(%esp)
 81c7add:	e8 6c 11 f0 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81c7ae2:	89 04 24             	mov    %eax,(%esp)
 81c7ae5:	e8 e0 f2 06 00       	call   8236dca <_ZN12CStreamGuard11GetInBufferI19SIG_REQ_BLACK_COUNTEEPT_v>
 81c7aea:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c7aed:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 81c7af4:	00 
 81c7af5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c7afc:	00 
 81c7afd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c7b00:	89 04 24             	mov    %eax,(%esp)
 81c7b03:	e8 b8 61 eb ff       	call   807dcc0 <memset@plt>
 81c7b08:	8b 45 10             	mov    0x10(%ebp),%eax
 81c7b0b:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c7b0f:	0f be c0             	movsbl %al,%eax
 81c7b12:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c7b16:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7b19:	89 04 24             	mov    %eax,(%esp)
 81c7b1c:	e8 7f 64 48 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81c7b21:	89 c2                	mov    %eax,%edx
 81c7b23:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c7b26:	89 10                	mov    %edx,(%eax)
 81c7b28:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7b2b:	89 04 24             	mov    %eax,(%esp)
 81c7b2e:	e8 cb cd f6 ff       	call   81348fe <_ZN5CUser22IsValidLastLoginCharacEv>
 81c7b33:	84 c0                	test   %al,%al
 81c7b35:	74 23                	je     81c7b5a <_ZN23DisPatcher_SelectCharac17RequestBlackCountEP5CUserR17MSG_CHARAC_SELECT+0x168>
 81c7b37:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81c7b3c:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81c7b3f:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c7b43:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 81c7b4a:	00 
 81c7b4b:	89 04 24             	mov    %eax,(%esp)
 81c7b4e:	e8 8b 94 3a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81c7b53:	bb 01 00 00 00       	mov    $0x1,%ebx
 81c7b58:	eb 3e                	jmp    81c7b98 <_ZN23DisPatcher_SelectCharac17RequestBlackCountEP5CUserR17MSG_CHARAC_SELECT+0x1a6>
 81c7b5a:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81c7b5f:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81c7b62:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c7b66:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81c7b6d:	00 
 81c7b6e:	89 04 24             	mov    %eax,(%esp)
 81c7b71:	e8 68 94 3a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81c7b76:	bb 01 00 00 00       	mov    $0x1,%ebx
 81c7b7b:	eb 1b                	jmp    81c7b98 <_ZN23DisPatcher_SelectCharac17RequestBlackCountEP5CUserR17MSG_CHARAC_SELECT+0x1a6>
 81c7b7d:	89 d3                	mov    %edx,%ebx
 81c7b7f:	89 c6                	mov    %eax,%esi
 81c7b81:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c7b84:	89 04 24             	mov    %eax,(%esp)
 81c7b87:	e8 46 4d 45 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81c7b8c:	89 f0                	mov    %esi,%eax
 81c7b8e:	89 da                	mov    %ebx,%edx
 81c7b90:	89 04 24             	mov    %eax,(%esp)
 81c7b93:	e8 b8 bb 91 00       	call   8ae3750 <_Unwind_Resume>
 81c7b98:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c7b9b:	89 04 24             	mov    %eax,(%esp)
 81c7b9e:	e8 2f 4d 45 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81c7ba3:	89 d8                	mov    %ebx,%eax
 81c7ba5:	83 c4 20             	add    $0x20,%esp
 81c7ba8:	5b                   	pop    %ebx
 81c7ba9:	5e                   	pop    %esi
 81c7baa:	5d                   	pop    %ebp
 81c7bab:	c3                   	ret

```

```c
// DisPatcher_SelectCharac::RequestBlackCount @ 0x81c79f2

/* DisPatcher_SelectCharac::RequestBlackCount(CUser*, MSG_CHARAC_SELECT&) */

undefined4 __thiscall
DisPatcher_SelectCharac::RequestBlackCount
          (DisPatcher_SelectCharac *this,CUser *param_1,MSG_CHARAC_SELECT *param_2)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CStreamGuard local_18 [8];
  SIG_REQ_BLACK_COUNT *local_10;
  
  pSVar2 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x1862);
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 081c7a44 to 081c7b75 has its CatchHandler @ 081c7b7d */
  CStreamGuard::operator<<(pCVar3,0xb3);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,iVar4);
  CUser::DisableCharacInfo(param_1,7);
  cVar1 = CUser::IsValidLastLoginCharac(param_1);
  if (cVar1 != '\0') {
    iVar4 = CUser::GetLastLoginChannelNo(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar4);
    iVar4 = CUser::GetLastLoginCharacNo(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar4);
  }
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_REQ_BLACK_COUNT>(pCVar3);
  memset(local_10,0,0x10);
  uVar5 = CUser::get_charac_no(param_1,(int)(char)param_2[0xd]);
  *(undefined4 *)local_10 = uVar5;
  cVar1 = CUser::IsValidLastLoginCharac(param_1);
  if (cVar1 == '\0') {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  }
  else {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,5,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}

```

---

## RequestDBCharac

```asm
// === 081c6ca0 DisPatcher_SelectCharac::RequestDBCharac  [0x081c6ca0-0x81c6ee5] ===
 81c6ca0:	55                   	push   %ebp
 81c6ca1:	89 e5                	mov    %esp,%ebp
 81c6ca3:	56                   	push   %esi
 81c6ca4:	53                   	push   %ebx
 81c6ca5:	83 ec 20             	sub    $0x20,%esp
 81c6ca8:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81c6cad:	c7 44 24 08 3d 17 00 	movl   $0x173d,0x8(%esp)
 81c6cb4:	00 
 81c6cb5:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81c6cbc:	08 
 81c6cbd:	89 04 24             	mov    %eax,(%esp)
 81c6cc0:	e8 c1 8d 0c 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 81c6cc5:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81c6ccc:	00 
 81c6ccd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c6cd1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c6cd4:	89 04 24             	mov    %eax,(%esp)
 81c6cd7:	e8 4a 1f f0 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81c6cdc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c6cdf:	89 04 24             	mov    %eax,(%esp)
 81c6ce2:	e8 5f 1f f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c6ce7:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 81c6cee:	00 
 81c6cef:	89 04 24             	mov    %eax,(%esp)
 81c6cf2:	e8 5f 1f f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c6cf7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6cfa:	89 04 24             	mov    %eax,(%esp)
 81c6cfd:	e8 94 1f f0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81c6d02:	89 c3                	mov    %eax,%ebx
 81c6d04:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c6d07:	89 04 24             	mov    %eax,(%esp)
 81c6d0a:	e8 37 1f f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c6d0f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c6d13:	89 04 24             	mov    %eax,(%esp)
 81c6d16:	e8 3b 1f f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c6d1b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c6d22:	00 
 81c6d23:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6d26:	89 04 24             	mov    %eax,(%esp)
 81c6d29:	e8 a0 db f6 ff       	call   81348ce <_ZN5CUser17DisableCharacInfoE13CACHE_SECTION>
 81c6d2e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6d31:	89 04 24             	mov    %eax,(%esp)
 81c6d34:	e8 c5 db f6 ff       	call   81348fe <_ZN5CUser22IsValidLastLoginCharacEv>
 81c6d39:	84 c0                	test   %al,%al
 81c6d3b:	74 48                	je     81c6d85 <_ZN23DisPatcher_SelectCharac15RequestDBCharacEP5CUserRK17MSG_CHARAC_SELECT+0xe5>
 81c6d3d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6d40:	89 04 24             	mov    %eax,(%esp)
 81c6d43:	e8 a8 db f6 ff       	call   81348f0 <_ZN5CUser21GetLastLoginChannelNoEv>
 81c6d48:	89 c3                	mov    %eax,%ebx
 81c6d4a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c6d4d:	89 04 24             	mov    %eax,(%esp)
 81c6d50:	e8 f1 1e f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c6d55:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c6d59:	89 04 24             	mov    %eax,(%esp)
 81c6d5c:	e8 f5 1e f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c6d61:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6d64:	89 04 24             	mov    %eax,(%esp)
 81c6d67:	e8 76 db f6 ff       	call   81348e2 <_ZN5CUser20GetLastLoginCharacNoEv>
 81c6d6c:	89 c3                	mov    %eax,%ebx
 81c6d6e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c6d71:	89 04 24             	mov    %eax,(%esp)
 81c6d74:	e8 cd 1e f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c6d79:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c6d7d:	89 04 24             	mov    %eax,(%esp)
 81c6d80:	e8 d1 1e f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c6d85:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c6d88:	89 04 24             	mov    %eax,(%esp)
 81c6d8b:	e8 be 1e f0 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81c6d90:	89 04 24             	mov    %eax,(%esp)
 81c6d93:	e8 82 ff 06 00       	call   8236d1a <_ZN12CStreamGuard11GetInBufferI15SIG_LOAD_CHARACEEPT_v>
 81c6d98:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c6d9b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c6d9e:	83 c0 0c             	add    $0xc,%eax
 81c6da1:	89 04 24             	mov    %eax,(%esp)
 81c6da4:	e8 f5 7e 06 00       	call   822ec9e <_ZN11CHARAC_DATA5ResetEv>
 81c6da9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6dac:	89 04 24             	mov    %eax,(%esp)
 81c6daf:	e8 ba 35 f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c6db4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81c6db7:	89 02                	mov    %eax,(%edx)
 81c6db9:	8b 45 10             	mov    0x10(%ebp),%eax
 81c6dbc:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c6dc0:	0f be c0             	movsbl %al,%eax
 81c6dc3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c6dc7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6dca:	89 04 24             	mov    %eax,(%esp)
 81c6dcd:	e8 ce 71 48 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81c6dd2:	89 c2                	mov    %eax,%edx
 81c6dd4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c6dd7:	89 50 04             	mov    %edx,0x4(%eax)
 81c6dda:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6ddd:	89 04 24             	mov    %eax,(%esp)
 81c6de0:	e8 1d 90 06 00       	call   822fe02 <_ZN5CUser11GetSchoolNoEv>
 81c6de5:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81c6de8:	89 82 82 06 00 00    	mov    %eax,0x682(%edx)
 81c6dee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c6df1:	05 8b 06 00 00       	add    $0x68b,%eax
 81c6df6:	89 04 24             	mov    %eax,(%esp)
 81c6df9:	e8 86 7f 06 00       	call   822ed84 <_ZN15TAG_CHARAC_DATA5clearEv>
 81c6dfe:	8b 45 10             	mov    0x10(%ebp),%eax
 81c6e01:	8b 50 0e             	mov    0xe(%eax),%edx
 81c6e04:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c6e07:	89 90 86 06 00 00    	mov    %edx,0x686(%eax)
 81c6e0d:	8b 45 10             	mov    0x10(%ebp),%eax
 81c6e10:	0f b6 50 12          	movzbl 0x12(%eax),%edx
 81c6e14:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c6e17:	88 90 8a 06 00 00    	mov    %dl,0x68a(%eax)
 81c6e1d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c6e20:	8b 40 04             	mov    0x4(%eax),%eax
 81c6e23:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c6e27:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6e2a:	89 04 24             	mov    %eax,(%esp)
 81c6e2d:	e8 f2 71 48 00       	call   864e024 <_ZNK5CUser17get_character_jobEj>
 81c6e32:	89 c3                	mov    %eax,%ebx
 81c6e34:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6e37:	89 04 24             	mov    %eax,(%esp)
 81c6e3a:	e8 a3 da f6 ff       	call   81348e2 <_ZN5CUser20GetLastLoginCharacNoEv>
 81c6e3f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c6e43:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6e46:	89 04 24             	mov    %eax,(%esp)
 81c6e49:	e8 d6 71 48 00       	call   864e024 <_ZNK5CUser17get_character_jobEj>
 81c6e4e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81c6e52:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c6e56:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6e59:	89 04 24             	mov    %eax,(%esp)
 81c6e5c:	e8 c9 be 4c 00       	call   8692d2a <_ZN5CUser20LoadCharacTypeHotKeyEii>
 81c6e61:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6e64:	89 04 24             	mov    %eax,(%esp)
 81c6e67:	e8 92 da f6 ff       	call   81348fe <_ZN5CUser22IsValidLastLoginCharacEv>
 81c6e6c:	84 c0                	test   %al,%al
 81c6e6e:	74 23                	je     81c6e93 <_ZN23DisPatcher_SelectCharac15RequestDBCharacEP5CUserRK17MSG_CHARAC_SELECT+0x1f3>
 81c6e70:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81c6e75:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81c6e78:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c6e7c:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 81c6e83:	00 
 81c6e84:	89 04 24             	mov    %eax,(%esp)
 81c6e87:	e8 52 a1 3a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81c6e8c:	bb 01 00 00 00       	mov    $0x1,%ebx
 81c6e91:	eb 3e                	jmp    81c6ed1 <_ZN23DisPatcher_SelectCharac15RequestDBCharacEP5CUserRK17MSG_CHARAC_SELECT+0x231>
 81c6e93:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81c6e98:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81c6e9b:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c6e9f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81c6ea6:	00 
 81c6ea7:	89 04 24             	mov    %eax,(%esp)
 81c6eaa:	e8 2f a1 3a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81c6eaf:	bb 01 00 00 00       	mov    $0x1,%ebx
 81c6eb4:	eb 1b                	jmp    81c6ed1 <_ZN23DisPatcher_SelectCharac15RequestDBCharacEP5CUserRK17MSG_CHARAC_SELECT+0x231>
 81c6eb6:	89 d3                	mov    %edx,%ebx
 81c6eb8:	89 c6                	mov    %eax,%esi
 81c6eba:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c6ebd:	89 04 24             	mov    %eax,(%esp)
 81c6ec0:	e8 0d 5a 45 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81c6ec5:	89 f0                	mov    %esi,%eax
 81c6ec7:	89 da                	mov    %ebx,%edx
 81c6ec9:	89 04 24             	mov    %eax,(%esp)
 81c6ecc:	e8 7f c8 91 00       	call   8ae3750 <_Unwind_Resume>
 81c6ed1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c6ed4:	89 04 24             	mov    %eax,(%esp)
 81c6ed7:	e8 f6 59 45 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81c6edc:	89 d8                	mov    %ebx,%eax
 81c6ede:	83 c4 20             	add    $0x20,%esp
 81c6ee1:	5b                   	pop    %ebx
 81c6ee2:	5e                   	pop    %esi
 81c6ee3:	5d                   	pop    %ebp
 81c6ee4:	c3                   	ret
 81c6ee5:	90                   	nop

```

```c
// DisPatcher_SelectCharac::RequestDBCharac @ 0x81c6ca0

/* DisPatcher_SelectCharac::RequestDBCharac(CUser*, MSG_CHARAC_SELECT const&) */

undefined4 __thiscall
DisPatcher_SelectCharac::RequestDBCharac
          (DisPatcher_SelectCharac *this,CUser *param_1,MSG_CHARAC_SELECT *param_2)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  CStreamGuard local_18 [8];
  SIG_LOAD_CHARAC *local_10;
  
  pSVar2 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x173d);
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 081c6cf2 to 081c6eae has its CatchHandler @ 081c6eb6 */
  CStreamGuard::operator<<(pCVar3,7);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,iVar4);
  CUser::DisableCharacInfo(param_1,0);
  cVar1 = CUser::IsValidLastLoginCharac(param_1);
  if (cVar1 != '\0') {
    iVar4 = CUser::GetLastLoginChannelNo(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar4);
    iVar4 = CUser::GetLastLoginCharacNo(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar4);
  }
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_CHARAC>(pCVar3);
  CHARAC_DATA::Reset((CHARAC_DATA *)(local_10 + 0xc));
  uVar5 = CUser::get_acc_id(param_1);
  *(undefined4 *)local_10 = uVar5;
  uVar5 = CUser::get_charac_no(param_1,(int)(char)param_2[0xd]);
  *(undefined4 *)(local_10 + 4) = uVar5;
  uVar5 = CUser::GetSchoolNo(param_1);
  *(undefined4 *)(local_10 + 0x682) = uVar5;
  TAG_CHARAC_DATA::clear((TAG_CHARAC_DATA *)(local_10 + 0x68b));
  *(undefined4 *)(local_10 + 0x686) = *(undefined4 *)(param_2 + 0xe);
  local_10[0x68a] = *(SIG_LOAD_CHARAC *)(param_2 + 0x12);
  iVar4 = CUser::get_character_job(param_1,*(uint *)(local_10 + 4));
  uVar6 = CUser::GetLastLoginCharacNo(param_1);
  iVar7 = CUser::get_character_job(param_1,uVar6);
  CUser::LoadCharacTypeHotKey(param_1,iVar7,iVar4);
  cVar1 = CUser::IsValidLastLoginCharac(param_1);
  if (cVar1 == '\0') {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  }
  else {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,5,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}

```

---

## RequestDBDungeonClear

```asm
// === 081c7436 DisPatcher_SelectCharac::RequestDBDungeonClear  [0x081c7436-0x81c7601] ===
 81c7436:	55                   	push   %ebp
 81c7437:	89 e5                	mov    %esp,%ebp
 81c7439:	56                   	push   %esi
 81c743a:	53                   	push   %ebx
 81c743b:	83 ec 20             	sub    $0x20,%esp
 81c743e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81c7443:	c7 44 24 08 f8 17 00 	movl   $0x17f8,0x8(%esp)
 81c744a:	00 
 81c744b:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81c7452:	08 
 81c7453:	89 04 24             	mov    %eax,(%esp)
 81c7456:	e8 2b 86 0c 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 81c745b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81c7462:	00 
 81c7463:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c7467:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c746a:	89 04 24             	mov    %eax,(%esp)
 81c746d:	e8 b4 17 f0 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81c7472:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c7475:	89 04 24             	mov    %eax,(%esp)
 81c7478:	e8 c9 17 f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c747d:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 81c7484:	00 
 81c7485:	89 04 24             	mov    %eax,(%esp)
 81c7488:	e8 c9 17 f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c748d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7490:	89 04 24             	mov    %eax,(%esp)
 81c7493:	e8 fe 17 f0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81c7498:	89 c3                	mov    %eax,%ebx
 81c749a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c749d:	89 04 24             	mov    %eax,(%esp)
 81c74a0:	e8 a1 17 f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c74a5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c74a9:	89 04 24             	mov    %eax,(%esp)
 81c74ac:	e8 a5 17 f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c74b1:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 81c74b8:	00 
 81c74b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c74bc:	89 04 24             	mov    %eax,(%esp)
 81c74bf:	e8 0a d4 f6 ff       	call   81348ce <_ZN5CUser17DisableCharacInfoE13CACHE_SECTION>
 81c74c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c74c7:	89 04 24             	mov    %eax,(%esp)
 81c74ca:	e8 2f d4 f6 ff       	call   81348fe <_ZN5CUser22IsValidLastLoginCharacEv>
 81c74cf:	84 c0                	test   %al,%al
 81c74d1:	74 48                	je     81c751b <_ZN23DisPatcher_SelectCharac21RequestDBDungeonClearEP5CUserR17MSG_CHARAC_SELECT+0xe5>
 81c74d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c74d6:	89 04 24             	mov    %eax,(%esp)
 81c74d9:	e8 12 d4 f6 ff       	call   81348f0 <_ZN5CUser21GetLastLoginChannelNoEv>
 81c74de:	89 c3                	mov    %eax,%ebx
 81c74e0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c74e3:	89 04 24             	mov    %eax,(%esp)
 81c74e6:	e8 5b 17 f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c74eb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c74ef:	89 04 24             	mov    %eax,(%esp)
 81c74f2:	e8 5f 17 f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c74f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c74fa:	89 04 24             	mov    %eax,(%esp)
 81c74fd:	e8 e0 d3 f6 ff       	call   81348e2 <_ZN5CUser20GetLastLoginCharacNoEv>
 81c7502:	89 c3                	mov    %eax,%ebx
 81c7504:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c7507:	89 04 24             	mov    %eax,(%esp)
 81c750a:	e8 37 17 f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c750f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c7513:	89 04 24             	mov    %eax,(%esp)
 81c7516:	e8 3b 17 f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c751b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c751e:	89 04 24             	mov    %eax,(%esp)
 81c7521:	e8 28 17 f0 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81c7526:	89 04 24             	mov    %eax,(%esp)
 81c7529:	e8 5a f8 06 00       	call   8236d88 <_ZN12CStreamGuard11GetInBufferI22SIG_LOAD_DUNGEON_CLEAREEPT_v>
 81c752e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c7531:	c7 44 24 08 10 18 00 	movl   $0x1810,0x8(%esp)
 81c7538:	00 
 81c7539:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c7540:	00 
 81c7541:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c7544:	89 04 24             	mov    %eax,(%esp)
 81c7547:	e8 74 67 eb ff       	call   807dcc0 <memset@plt>
 81c754c:	8b 45 10             	mov    0x10(%ebp),%eax
 81c754f:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c7553:	0f be c0             	movsbl %al,%eax
 81c7556:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c755a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c755d:	89 04 24             	mov    %eax,(%esp)
 81c7560:	e8 3b 6a 48 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81c7565:	89 c2                	mov    %eax,%edx
 81c7567:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c756a:	89 10                	mov    %edx,(%eax)
 81c756c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c756f:	89 04 24             	mov    %eax,(%esp)
 81c7572:	e8 f7 2d f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c7577:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81c757a:	89 42 04             	mov    %eax,0x4(%edx)
 81c757d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7580:	89 04 24             	mov    %eax,(%esp)
 81c7583:	e8 76 d3 f6 ff       	call   81348fe <_ZN5CUser22IsValidLastLoginCharacEv>
 81c7588:	84 c0                	test   %al,%al
 81c758a:	74 23                	je     81c75af <_ZN23DisPatcher_SelectCharac21RequestDBDungeonClearEP5CUserR17MSG_CHARAC_SELECT+0x179>
 81c758c:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81c7591:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81c7594:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c7598:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 81c759f:	00 
 81c75a0:	89 04 24             	mov    %eax,(%esp)
 81c75a3:	e8 36 9a 3a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81c75a8:	bb 01 00 00 00       	mov    $0x1,%ebx
 81c75ad:	eb 3e                	jmp    81c75ed <_ZN23DisPatcher_SelectCharac21RequestDBDungeonClearEP5CUserR17MSG_CHARAC_SELECT+0x1b7>
 81c75af:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81c75b4:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81c75b7:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c75bb:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81c75c2:	00 
 81c75c3:	89 04 24             	mov    %eax,(%esp)
 81c75c6:	e8 13 9a 3a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81c75cb:	bb 01 00 00 00       	mov    $0x1,%ebx
 81c75d0:	eb 1b                	jmp    81c75ed <_ZN23DisPatcher_SelectCharac21RequestDBDungeonClearEP5CUserR17MSG_CHARAC_SELECT+0x1b7>
 81c75d2:	89 d3                	mov    %edx,%ebx
 81c75d4:	89 c6                	mov    %eax,%esi
 81c75d6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c75d9:	89 04 24             	mov    %eax,(%esp)
 81c75dc:	e8 f1 52 45 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81c75e1:	89 f0                	mov    %esi,%eax
 81c75e3:	89 da                	mov    %ebx,%edx
 81c75e5:	89 04 24             	mov    %eax,(%esp)
 81c75e8:	e8 63 c1 91 00       	call   8ae3750 <_Unwind_Resume>
 81c75ed:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c75f0:	89 04 24             	mov    %eax,(%esp)
 81c75f3:	e8 da 52 45 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81c75f8:	89 d8                	mov    %ebx,%eax
 81c75fa:	83 c4 20             	add    $0x20,%esp
 81c75fd:	5b                   	pop    %ebx
 81c75fe:	5e                   	pop    %esi
 81c75ff:	5d                   	pop    %ebp
 81c7600:	c3                   	ret
 81c7601:	90                   	nop

```

```c
// DisPatcher_SelectCharac::RequestDBDungeonClear @ 0x81c7436

/* DisPatcher_SelectCharac::RequestDBDungeonClear(CUser*, MSG_CHARAC_SELECT&) */

undefined4 __thiscall
DisPatcher_SelectCharac::RequestDBDungeonClear
          (DisPatcher_SelectCharac *this,CUser *param_1,MSG_CHARAC_SELECT *param_2)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CStreamGuard local_18 [8];
  SIG_LOAD_DUNGEON_CLEAR *local_10;
  
  pSVar2 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x17f8);
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 081c7488 to 081c75ca has its CatchHandler @ 081c75d2 */
  CStreamGuard::operator<<(pCVar3,0xc);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,iVar4);
  CUser::DisableCharacInfo(param_1,5);
  cVar1 = CUser::IsValidLastLoginCharac(param_1);
  if (cVar1 != '\0') {
    iVar4 = CUser::GetLastLoginChannelNo(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar4);
    iVar4 = CUser::GetLastLoginCharacNo(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar4);
  }
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_DUNGEON_CLEAR>(pCVar3);
  memset(local_10,0,0x1810);
  uVar5 = CUser::get_charac_no(param_1,(int)(char)param_2[0xd]);
  *(undefined4 *)local_10 = uVar5;
  uVar5 = CUser::get_acc_id(param_1);
  *(undefined4 *)(local_10 + 4) = uVar5;
  cVar1 = CUser::IsValidLastLoginCharac(param_1);
  if (cVar1 == '\0') {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  }
  else {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,5,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}

```

---

## RequestDBETC

```asm
// === 081c7602 DisPatcher_SelectCharac::RequestDBETC  [0x081c7602-0x81c7835] ===
 81c7602:	55                   	push   %ebp
 81c7603:	89 e5                	mov    %esp,%ebp
 81c7605:	56                   	push   %esi
 81c7606:	53                   	push   %ebx
 81c7607:	83 ec 20             	sub    $0x20,%esp
 81c760a:	a1 a4 bd 40 09       	mov    0x940bda4,%eax
 81c760f:	c7 44 24 08 14 18 00 	movl   $0x1814,0x8(%esp)
 81c7616:	00 
 81c7617:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81c761e:	08 
 81c761f:	89 04 24             	mov    %eax,(%esp)
 81c7622:	e8 3b 8c 0c 00       	call   8290262 <_ZN13BigStreamPool7AcquireEPKci>
 81c7627:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81c762e:	00 
 81c762f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c7633:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c7636:	89 04 24             	mov    %eax,(%esp)
 81c7639:	e8 e8 15 f0 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81c763e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c7641:	89 04 24             	mov    %eax,(%esp)
 81c7644:	e8 fd 15 f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c7649:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 81c7650:	00 
 81c7651:	89 04 24             	mov    %eax,(%esp)
 81c7654:	e8 fd 15 f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c7659:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c765c:	89 04 24             	mov    %eax,(%esp)
 81c765f:	e8 32 16 f0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81c7664:	89 c3                	mov    %eax,%ebx
 81c7666:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c7669:	89 04 24             	mov    %eax,(%esp)
 81c766c:	e8 d5 15 f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c7671:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c7675:	89 04 24             	mov    %eax,(%esp)
 81c7678:	e8 d9 15 f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c767d:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 81c7684:	00 
 81c7685:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7688:	89 04 24             	mov    %eax,(%esp)
 81c768b:	e8 3e d2 f6 ff       	call   81348ce <_ZN5CUser17DisableCharacInfoE13CACHE_SECTION>
 81c7690:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7693:	89 04 24             	mov    %eax,(%esp)
 81c7696:	e8 63 d2 f6 ff       	call   81348fe <_ZN5CUser22IsValidLastLoginCharacEv>
 81c769b:	84 c0                	test   %al,%al
 81c769d:	74 48                	je     81c76e7 <_ZN23DisPatcher_SelectCharac12RequestDBETCEP5CUserR17MSG_CHARAC_SELECT+0xe5>
 81c769f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c76a2:	89 04 24             	mov    %eax,(%esp)
 81c76a5:	e8 46 d2 f6 ff       	call   81348f0 <_ZN5CUser21GetLastLoginChannelNoEv>
 81c76aa:	89 c3                	mov    %eax,%ebx
 81c76ac:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c76af:	89 04 24             	mov    %eax,(%esp)
 81c76b2:	e8 8f 15 f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c76b7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c76bb:	89 04 24             	mov    %eax,(%esp)
 81c76be:	e8 93 15 f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c76c3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c76c6:	89 04 24             	mov    %eax,(%esp)
 81c76c9:	e8 14 d2 f6 ff       	call   81348e2 <_ZN5CUser20GetLastLoginCharacNoEv>
 81c76ce:	89 c3                	mov    %eax,%ebx
 81c76d0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c76d3:	89 04 24             	mov    %eax,(%esp)
 81c76d6:	e8 6b 15 f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c76db:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c76df:	89 04 24             	mov    %eax,(%esp)
 81c76e2:	e8 6f 15 f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c76e7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c76ea:	89 04 24             	mov    %eax,(%esp)
 81c76ed:	e8 5c 15 f0 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81c76f2:	89 04 24             	mov    %eax,(%esp)
 81c76f5:	e8 a4 f6 06 00       	call   8236d9e <_ZN12CStreamGuard11GetInBufferI12SIG_LOAD_ETCEEPT_v>
 81c76fa:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c76fd:	c7 44 24 08 60 4b 01 	movl   $0x14b60,0x8(%esp)
 81c7704:	00 
 81c7705:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c770c:	00 
 81c770d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c7710:	89 04 24             	mov    %eax,(%esp)
 81c7713:	e8 a8 65 eb ff       	call   807dcc0 <memset@plt>
 81c7718:	8b 45 10             	mov    0x10(%ebp),%eax
 81c771b:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c771f:	0f be c0             	movsbl %al,%eax
 81c7722:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c7726:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7729:	89 04 24             	mov    %eax,(%esp)
 81c772c:	e8 6f 68 48 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81c7731:	89 c2                	mov    %eax,%edx
 81c7733:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c7736:	89 50 04             	mov    %edx,0x4(%eax)
 81c7739:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c773c:	89 04 24             	mov    %eax,(%esp)
 81c773f:	e8 2a 2c f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c7744:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81c7747:	89 02                	mov    %eax,(%edx)
 81c7749:	e8 33 4a f0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 81c774e:	8b 90 78 03 00 00    	mov    0x378(%eax),%edx
 81c7754:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c7757:	89 90 30 2d 00 00    	mov    %edx,0x2d30(%eax)
 81c775d:	e8 1f 4a f0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 81c7762:	89 04 24             	mov    %eax,(%esp)
 81c7765:	e8 60 33 f8 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 81c776a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81c776d:	89 82 34 2d 00 00    	mov    %eax,0x2d34(%edx)
 81c7773:	8b 45 10             	mov    0x10(%ebp),%eax
 81c7776:	8b 50 0e             	mov    0xe(%eax),%edx
 81c7779:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c777c:	89 50 0c             	mov    %edx,0xc(%eax)
 81c777f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c7782:	83 c0 10             	add    $0x10,%eax
 81c7785:	89 04 24             	mov    %eax,(%esp)
 81c7788:	e8 67 76 06 00       	call   822edf4 <_ZN19TAG_CHARAC_ETC_DATA5clearEv>
 81c778d:	8b 45 10             	mov    0x10(%ebp),%eax
 81c7790:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c7794:	0f be c0             	movsbl %al,%eax
 81c7797:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c779b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c779e:	89 04 24             	mov    %eax,(%esp)
 81c77a1:	e8 66 87 06 00       	call   822ff0c <_ZNK5CUser12GetCharacJobEi>
 81c77a6:	0f be d0             	movsbl %al,%edx
 81c77a9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c77ac:	89 90 b0 4a 01 00    	mov    %edx,0x14ab0(%eax)
 81c77b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c77b5:	89 04 24             	mov    %eax,(%esp)
 81c77b8:	e8 41 d1 f6 ff       	call   81348fe <_ZN5CUser22IsValidLastLoginCharacEv>
 81c77bd:	84 c0                	test   %al,%al
 81c77bf:	74 23                	je     81c77e4 <_ZN23DisPatcher_SelectCharac12RequestDBETCEP5CUserR17MSG_CHARAC_SELECT+0x1e2>
 81c77c1:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81c77c6:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81c77c9:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c77cd:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 81c77d4:	00 
 81c77d5:	89 04 24             	mov    %eax,(%esp)
 81c77d8:	e8 01 98 3a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81c77dd:	bb 01 00 00 00       	mov    $0x1,%ebx
 81c77e2:	eb 3e                	jmp    81c7822 <_ZN23DisPatcher_SelectCharac12RequestDBETCEP5CUserR17MSG_CHARAC_SELECT+0x220>
 81c77e4:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81c77e9:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81c77ec:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c77f0:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81c77f7:	00 
 81c77f8:	89 04 24             	mov    %eax,(%esp)
 81c77fb:	e8 de 97 3a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81c7800:	bb 01 00 00 00       	mov    $0x1,%ebx
 81c7805:	eb 1b                	jmp    81c7822 <_ZN23DisPatcher_SelectCharac12RequestDBETCEP5CUserR17MSG_CHARAC_SELECT+0x220>
 81c7807:	89 d3                	mov    %edx,%ebx
 81c7809:	89 c6                	mov    %eax,%esi
 81c780b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c780e:	89 04 24             	mov    %eax,(%esp)
 81c7811:	e8 bc 50 45 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81c7816:	89 f0                	mov    %esi,%eax
 81c7818:	89 da                	mov    %ebx,%edx
 81c781a:	89 04 24             	mov    %eax,(%esp)
 81c781d:	e8 2e bf 91 00       	call   8ae3750 <_Unwind_Resume>
 81c7822:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c7825:	89 04 24             	mov    %eax,(%esp)
 81c7828:	e8 a5 50 45 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81c782d:	89 d8                	mov    %ebx,%eax
 81c782f:	83 c4 20             	add    $0x20,%esp
 81c7832:	5b                   	pop    %ebx
 81c7833:	5e                   	pop    %esi
 81c7834:	5d                   	pop    %ebp
 81c7835:	c3                   	ret

```

```c
// DisPatcher_SelectCharac::RequestDBETC @ 0x81c7602

/* DisPatcher_SelectCharac::RequestDBETC(CUser*, MSG_CHARAC_SELECT&) */

undefined4 __thiscall
DisPatcher_SelectCharac::RequestDBETC
          (DisPatcher_SelectCharac *this,CUser *param_1,MSG_CHARAC_SELECT *param_2)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CEnvironment *this_00;
  CStreamGuard local_18 [8];
  SIG_LOAD_ETC *local_10;
  
  pSVar2 = (Stream *)
           BigStreamPool::Acquire
                     (GlobalData::s_big_stream_pool,"PacketDispatcher_Impl_1.cpp",0x1814);
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 081c7654 to 081c77ff has its CatchHandler @ 081c7807 */
  CStreamGuard::operator<<(pCVar3,0x20);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,iVar4);
  CUser::DisableCharacInfo(param_1,0xb);
  cVar1 = CUser::IsValidLastLoginCharac(param_1);
  if (cVar1 != '\0') {
    iVar4 = CUser::GetLastLoginChannelNo(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar4);
    iVar4 = CUser::GetLastLoginCharacNo(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar4);
  }
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_ETC>(pCVar3);
  memset(local_10,0,0x14b60);
  uVar5 = CUser::get_charac_no(param_1,(int)(char)param_2[0xd]);
  *(undefined4 *)(local_10 + 4) = uVar5;
  uVar5 = CUser::get_acc_id(param_1);
  *(undefined4 *)local_10 = uVar5;
  iVar4 = G_CEnvironment();
  *(undefined4 *)(local_10 + 0x2d30) = *(undefined4 *)(iVar4 + 0x378);
  this_00 = (CEnvironment *)G_CEnvironment();
  uVar5 = CEnvironment::get_channel_no(this_00);
  *(undefined4 *)(local_10 + 0x2d34) = uVar5;
  *(undefined4 *)(local_10 + 0xc) = *(undefined4 *)(param_2 + 0xe);
  TAG_CHARAC_ETC_DATA::clear((TAG_CHARAC_ETC_DATA *)(local_10 + 0x10));
  cVar1 = CUser::GetCharacJob(param_1,(int)(char)param_2[0xd]);
  *(int *)(local_10 + 0x14ab0) = (int)cVar1;
  cVar1 = CUser::IsValidLastLoginCharac(param_1);
  if (cVar1 == '\0') {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  }
  else {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,5,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}

```

---

## RequestDBInventory

```asm
// === 081c6ee6 DisPatcher_SelectCharac::RequestDBInventory  [0x081c6ee6-0x81c6f07] ===
 81c6ee6:	55                   	push   %ebp
 81c6ee7:	89 e5                	mov    %esp,%ebp
 81c6ee9:	83 ec 28             	sub    $0x28,%esp
 81c6eec:	8b 45 10             	mov    0x10(%ebp),%eax
 81c6eef:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c6ef3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6ef6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c6efa:	8b 45 08             	mov    0x8(%ebp),%eax
 81c6efd:	89 04 24             	mov    %eax,(%esp)
 81c6f00:	e8 17 0d 00 00       	call   81c7c1c <_ZN23DisPatcher_SelectCharac27RequestDBInventory_forchinaEP5CUserR17MSG_CHARAC_SELECT>
 81c6f05:	c9                   	leave
 81c6f06:	c3                   	ret
 81c6f07:	90                   	nop

```

```c
// DisPatcher_SelectCharac::RequestDBInventory @ 0x81c6ee6

/* DisPatcher_SelectCharac::RequestDBInventory(CUser*, MSG_CHARAC_SELECT&) */

void __thiscall
DisPatcher_SelectCharac::RequestDBInventory
          (DisPatcher_SelectCharac *this,CUser *param_1,MSG_CHARAC_SELECT *param_2)

{
  RequestDBInventory_forchina(this,param_1,param_2);
  return;
}

```

---

## RequestDBInventory_forchina

```asm
// === 081c7c1c DisPatcher_SelectCharac::RequestDBInventory_forchina  [0x081c7c1c-0x81c7e0f] ===
 81c7c1c:	55                   	push   %ebp
 81c7c1d:	89 e5                	mov    %esp,%ebp
 81c7c1f:	56                   	push   %esi
 81c7c20:	53                   	push   %ebx
 81c7c21:	83 ec 20             	sub    $0x20,%esp
 81c7c24:	a1 a4 bd 40 09       	mov    0x940bda4,%eax
 81c7c29:	c7 44 24 08 af 18 00 	movl   $0x18af,0x8(%esp)
 81c7c30:	00 
 81c7c31:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81c7c38:	08 
 81c7c39:	89 04 24             	mov    %eax,(%esp)
 81c7c3c:	e8 21 86 0c 00       	call   8290262 <_ZN13BigStreamPool7AcquireEPKci>
 81c7c41:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81c7c48:	00 
 81c7c49:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c7c4d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c7c50:	89 04 24             	mov    %eax,(%esp)
 81c7c53:	e8 ce 0f f0 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81c7c58:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c7c5b:	89 04 24             	mov    %eax,(%esp)
 81c7c5e:	e8 e3 0f f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c7c63:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 81c7c6a:	00 
 81c7c6b:	89 04 24             	mov    %eax,(%esp)
 81c7c6e:	e8 e3 0f f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c7c73:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7c76:	89 04 24             	mov    %eax,(%esp)
 81c7c79:	e8 18 10 f0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81c7c7e:	89 c3                	mov    %eax,%ebx
 81c7c80:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c7c83:	89 04 24             	mov    %eax,(%esp)
 81c7c86:	e8 bb 0f f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c7c8b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c7c8f:	89 04 24             	mov    %eax,(%esp)
 81c7c92:	e8 bf 0f f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c7c97:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c7c9e:	00 
 81c7c9f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7ca2:	89 04 24             	mov    %eax,(%esp)
 81c7ca5:	e8 24 cc f6 ff       	call   81348ce <_ZN5CUser17DisableCharacInfoE13CACHE_SECTION>
 81c7caa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7cad:	89 04 24             	mov    %eax,(%esp)
 81c7cb0:	e8 49 cc f6 ff       	call   81348fe <_ZN5CUser22IsValidLastLoginCharacEv>
 81c7cb5:	84 c0                	test   %al,%al
 81c7cb7:	74 48                	je     81c7d01 <_ZN23DisPatcher_SelectCharac27RequestDBInventory_forchinaEP5CUserR17MSG_CHARAC_SELECT+0xe5>
 81c7cb9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7cbc:	89 04 24             	mov    %eax,(%esp)
 81c7cbf:	e8 2c cc f6 ff       	call   81348f0 <_ZN5CUser21GetLastLoginChannelNoEv>
 81c7cc4:	89 c3                	mov    %eax,%ebx
 81c7cc6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c7cc9:	89 04 24             	mov    %eax,(%esp)
 81c7ccc:	e8 75 0f f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c7cd1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c7cd5:	89 04 24             	mov    %eax,(%esp)
 81c7cd8:	e8 79 0f f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c7cdd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7ce0:	89 04 24             	mov    %eax,(%esp)
 81c7ce3:	e8 fa cb f6 ff       	call   81348e2 <_ZN5CUser20GetLastLoginCharacNoEv>
 81c7ce8:	89 c3                	mov    %eax,%ebx
 81c7cea:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c7ced:	89 04 24             	mov    %eax,(%esp)
 81c7cf0:	e8 51 0f f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c7cf5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c7cf9:	89 04 24             	mov    %eax,(%esp)
 81c7cfc:	e8 55 0f f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c7d01:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c7d04:	89 04 24             	mov    %eax,(%esp)
 81c7d07:	e8 42 0f f0 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81c7d0c:	89 04 24             	mov    %eax,(%esp)
 81c7d0f:	e8 1c f0 06 00       	call   8236d30 <_ZN12CStreamGuard11GetInBufferI18SIG_LOAD_INVENTORYEEPT_v>
 81c7d14:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c7d17:	c7 44 24 08 4c 54 01 	movl   $0x1544c,0x8(%esp)
 81c7d1e:	00 
 81c7d1f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c7d26:	00 
 81c7d27:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c7d2a:	89 04 24             	mov    %eax,(%esp)
 81c7d2d:	e8 8e 5f eb ff       	call   807dcc0 <memset@plt>
 81c7d32:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7d35:	89 04 24             	mov    %eax,(%esp)
 81c7d38:	e8 31 26 f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c7d3d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81c7d40:	89 02                	mov    %eax,(%edx)
 81c7d42:	8b 45 10             	mov    0x10(%ebp),%eax
 81c7d45:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c7d49:	0f be c0             	movsbl %al,%eax
 81c7d4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c7d50:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7d53:	89 04 24             	mov    %eax,(%esp)
 81c7d56:	e8 45 62 48 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81c7d5b:	89 c2                	mov    %eax,%edx
 81c7d5d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c7d60:	89 50 04             	mov    %edx,0x4(%eax)
 81c7d63:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c7d66:	83 c0 0c             	add    $0xc,%eax
 81c7d69:	89 04 24             	mov    %eax,(%esp)
 81c7d6c:	e8 5f 70 06 00       	call   822edd0 <_ZN21TAG_CHARAC_INVEN_DATA5clearEv>
 81c7d71:	8b 45 10             	mov    0x10(%ebp),%eax
 81c7d74:	8b 50 0e             	mov    0xe(%eax),%edx
 81c7d77:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c7d7a:	89 50 08             	mov    %edx,0x8(%eax)
 81c7d7d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7d80:	89 04 24             	mov    %eax,(%esp)
 81c7d83:	e8 76 cb f6 ff       	call   81348fe <_ZN5CUser22IsValidLastLoginCharacEv>
 81c7d88:	84 c0                	test   %al,%al
 81c7d8a:	74 28                	je     81c7db4 <_ZN23DisPatcher_SelectCharac27RequestDBInventory_forchinaEP5CUserR17MSG_CHARAC_SELECT+0x198>
 81c7d8c:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81c7d91:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81c7d94:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c7d98:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 81c7d9f:	00 
 81c7da0:	89 04 24             	mov    %eax,(%esp)
 81c7da3:	e8 36 92 3a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81c7da8:	be 01 00 00 00       	mov    $0x1,%esi
 81c7dad:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c7db2:	eb 3e                	jmp    81c7df2 <_ZN23DisPatcher_SelectCharac27RequestDBInventory_forchinaEP5CUserR17MSG_CHARAC_SELECT+0x1d6>
 81c7db4:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81c7db9:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81c7dbc:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c7dc0:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81c7dc7:	00 
 81c7dc8:	89 04 24             	mov    %eax,(%esp)
 81c7dcb:	e8 0e 92 3a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81c7dd0:	bb 01 00 00 00       	mov    $0x1,%ebx
 81c7dd5:	eb 1b                	jmp    81c7df2 <_ZN23DisPatcher_SelectCharac27RequestDBInventory_forchinaEP5CUserR17MSG_CHARAC_SELECT+0x1d6>
 81c7dd7:	89 d3                	mov    %edx,%ebx
 81c7dd9:	89 c6                	mov    %eax,%esi
 81c7ddb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c7dde:	89 04 24             	mov    %eax,(%esp)
 81c7de1:	e8 ec 4a 45 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81c7de6:	89 f0                	mov    %esi,%eax
 81c7de8:	89 da                	mov    %ebx,%edx
 81c7dea:	89 04 24             	mov    %eax,(%esp)
 81c7ded:	e8 5e b9 91 00       	call   8ae3750 <_Unwind_Resume>
 81c7df2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c7df5:	89 04 24             	mov    %eax,(%esp)
 81c7df8:	e8 d5 4a 45 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81c7dfd:	85 db                	test   %ebx,%ebx
 81c7dff:	74 05                	je     81c7e06 <_ZN23DisPatcher_SelectCharac27RequestDBInventory_forchinaEP5CUserR17MSG_CHARAC_SELECT+0x1ea>
 81c7e01:	be 01 00 00 00       	mov    $0x1,%esi
 81c7e06:	89 f0                	mov    %esi,%eax
 81c7e08:	83 c4 20             	add    $0x20,%esp
 81c7e0b:	5b                   	pop    %ebx
 81c7e0c:	5e                   	pop    %esi
 81c7e0d:	5d                   	pop    %ebp
 81c7e0e:	c3                   	ret
 81c7e0f:	90                   	nop

```

```c
// DisPatcher_SelectCharac::RequestDBInventory_forchina @ 0x81c7c1c

/* DisPatcher_SelectCharac::RequestDBInventory_forchina(CUser*, MSG_CHARAC_SELECT&) */

undefined4 __thiscall
DisPatcher_SelectCharac::RequestDBInventory_forchina
          (DisPatcher_SelectCharac *this,CUser *param_1,MSG_CHARAC_SELECT *param_2)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  CStreamGuard local_18 [8];
  SIG_LOAD_INVENTORY *local_10;
  
  pSVar2 = (Stream *)
           BigStreamPool::Acquire
                     (GlobalData::s_big_stream_pool,"PacketDispatcher_Impl_1.cpp",0x18af);
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 081c7c6e to 081c7dcf has its CatchHandler @ 081c7dd7 */
  CStreamGuard::operator<<(pCVar3,8);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,iVar4);
  CUser::DisableCharacInfo(param_1,1);
  cVar1 = CUser::IsValidLastLoginCharac(param_1);
  if (cVar1 != '\0') {
    iVar4 = CUser::GetLastLoginChannelNo(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar4);
    iVar4 = CUser::GetLastLoginCharacNo(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar4);
  }
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_INVENTORY>(pCVar3);
  memset(local_10,0,0x1544c);
  uVar5 = CUser::get_acc_id(param_1);
  *(undefined4 *)local_10 = uVar5;
  uVar5 = CUser::get_charac_no(param_1,(int)(char)param_2[0xd]);
  *(undefined4 *)(local_10 + 4) = uVar5;
  TAG_CHARAC_INVEN_DATA::clear((TAG_CHARAC_INVEN_DATA *)(local_10 + 0xc));
  *(undefined4 *)(local_10 + 8) = *(undefined4 *)(param_2 + 0xe);
  cVar1 = CUser::IsValidLastLoginCharac(param_1);
  if (cVar1 == '\0') {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  }
  else {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,5,local_18);
    unaff_ESI = 1;
  }
  CStreamGuard::~CStreamGuard(local_18);
  if (cVar1 == '\0') {
    unaff_ESI = 1;
  }
  return unaff_ESI;
}

```

---

## RequestDBKillMonsterInfo

```asm
// === 081c7836 DisPatcher_SelectCharac::RequestDBKillMonsterInfo  [0x081c7836-0x81c79f1] ===
 81c7836:	55                   	push   %ebp
 81c7837:	89 e5                	mov    %esp,%ebp
 81c7839:	56                   	push   %esi
 81c783a:	53                   	push   %ebx
 81c783b:	83 ec 20             	sub    $0x20,%esp
 81c783e:	a1 a4 bd 40 09       	mov    0x940bda4,%eax
 81c7843:	c7 44 24 08 43 18 00 	movl   $0x1843,0x8(%esp)
 81c784a:	00 
 81c784b:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81c7852:	08 
 81c7853:	89 04 24             	mov    %eax,(%esp)
 81c7856:	e8 07 8a 0c 00       	call   8290262 <_ZN13BigStreamPool7AcquireEPKci>
 81c785b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81c7862:	00 
 81c7863:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c7867:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c786a:	89 04 24             	mov    %eax,(%esp)
 81c786d:	e8 b4 13 f0 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81c7872:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c7875:	89 04 24             	mov    %eax,(%esp)
 81c7878:	e8 c9 13 f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c787d:	c7 44 24 04 82 02 00 	movl   $0x282,0x4(%esp)
 81c7884:	00 
 81c7885:	89 04 24             	mov    %eax,(%esp)
 81c7888:	e8 c9 13 f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c788d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7890:	89 04 24             	mov    %eax,(%esp)
 81c7893:	e8 fe 13 f0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81c7898:	89 c3                	mov    %eax,%ebx
 81c789a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c789d:	89 04 24             	mov    %eax,(%esp)
 81c78a0:	e8 a1 13 f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c78a5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c78a9:	89 04 24             	mov    %eax,(%esp)
 81c78ac:	e8 a5 13 f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c78b1:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 81c78b8:	00 
 81c78b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c78bc:	89 04 24             	mov    %eax,(%esp)
 81c78bf:	e8 0a d0 f6 ff       	call   81348ce <_ZN5CUser17DisableCharacInfoE13CACHE_SECTION>
 81c78c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c78c7:	89 04 24             	mov    %eax,(%esp)
 81c78ca:	e8 2f d0 f6 ff       	call   81348fe <_ZN5CUser22IsValidLastLoginCharacEv>
 81c78cf:	84 c0                	test   %al,%al
 81c78d1:	74 48                	je     81c791b <_ZN23DisPatcher_SelectCharac24RequestDBKillMonsterInfoEP5CUserR17MSG_CHARAC_SELECT+0xe5>
 81c78d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c78d6:	89 04 24             	mov    %eax,(%esp)
 81c78d9:	e8 12 d0 f6 ff       	call   81348f0 <_ZN5CUser21GetLastLoginChannelNoEv>
 81c78de:	89 c3                	mov    %eax,%ebx
 81c78e0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c78e3:	89 04 24             	mov    %eax,(%esp)
 81c78e6:	e8 5b 13 f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c78eb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c78ef:	89 04 24             	mov    %eax,(%esp)
 81c78f2:	e8 5f 13 f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c78f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c78fa:	89 04 24             	mov    %eax,(%esp)
 81c78fd:	e8 e0 cf f6 ff       	call   81348e2 <_ZN5CUser20GetLastLoginCharacNoEv>
 81c7902:	89 c3                	mov    %eax,%ebx
 81c7904:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c7907:	89 04 24             	mov    %eax,(%esp)
 81c790a:	e8 37 13 f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c790f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c7913:	89 04 24             	mov    %eax,(%esp)
 81c7916:	e8 3b 13 f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c791b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c791e:	89 04 24             	mov    %eax,(%esp)
 81c7921:	e8 28 13 f0 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81c7926:	89 04 24             	mov    %eax,(%esp)
 81c7929:	e8 86 f4 06 00       	call   8236db4 <_ZN12CStreamGuard11GetInBufferI26SIG_LOAD_KILL_MONSTER_INFOEEPT_v>
 81c792e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c7931:	c7 44 24 08 cc af 00 	movl   $0xafcc,0x8(%esp)
 81c7938:	00 
 81c7939:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c7940:	00 
 81c7941:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c7944:	89 04 24             	mov    %eax,(%esp)
 81c7947:	e8 74 63 eb ff       	call   807dcc0 <memset@plt>
 81c794c:	8b 45 10             	mov    0x10(%ebp),%eax
 81c794f:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c7953:	0f be c0             	movsbl %al,%eax
 81c7956:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c795a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c795d:	89 04 24             	mov    %eax,(%esp)
 81c7960:	e8 3b 66 48 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81c7965:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81c7968:	89 82 c8 af 00 00    	mov    %eax,0xafc8(%edx)
 81c796e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7971:	89 04 24             	mov    %eax,(%esp)
 81c7974:	e8 85 cf f6 ff       	call   81348fe <_ZN5CUser22IsValidLastLoginCharacEv>
 81c7979:	84 c0                	test   %al,%al
 81c797b:	74 23                	je     81c79a0 <_ZN23DisPatcher_SelectCharac24RequestDBKillMonsterInfoEP5CUserR17MSG_CHARAC_SELECT+0x16a>
 81c797d:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81c7982:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81c7985:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c7989:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 81c7990:	00 
 81c7991:	89 04 24             	mov    %eax,(%esp)
 81c7994:	e8 45 96 3a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81c7999:	bb 01 00 00 00       	mov    $0x1,%ebx
 81c799e:	eb 3e                	jmp    81c79de <_ZN23DisPatcher_SelectCharac24RequestDBKillMonsterInfoEP5CUserR17MSG_CHARAC_SELECT+0x1a8>
 81c79a0:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81c79a5:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81c79a8:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c79ac:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81c79b3:	00 
 81c79b4:	89 04 24             	mov    %eax,(%esp)
 81c79b7:	e8 22 96 3a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81c79bc:	bb 01 00 00 00       	mov    $0x1,%ebx
 81c79c1:	eb 1b                	jmp    81c79de <_ZN23DisPatcher_SelectCharac24RequestDBKillMonsterInfoEP5CUserR17MSG_CHARAC_SELECT+0x1a8>
 81c79c3:	89 d3                	mov    %edx,%ebx
 81c79c5:	89 c6                	mov    %eax,%esi
 81c79c7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c79ca:	89 04 24             	mov    %eax,(%esp)
 81c79cd:	e8 00 4f 45 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81c79d2:	89 f0                	mov    %esi,%eax
 81c79d4:	89 da                	mov    %ebx,%edx
 81c79d6:	89 04 24             	mov    %eax,(%esp)
 81c79d9:	e8 72 bd 91 00       	call   8ae3750 <_Unwind_Resume>
 81c79de:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c79e1:	89 04 24             	mov    %eax,(%esp)
 81c79e4:	e8 e9 4e 45 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81c79e9:	89 d8                	mov    %ebx,%eax
 81c79eb:	83 c4 20             	add    $0x20,%esp
 81c79ee:	5b                   	pop    %ebx
 81c79ef:	5e                   	pop    %esi
 81c79f0:	5d                   	pop    %ebp
 81c79f1:	c3                   	ret

```

```c
// DisPatcher_SelectCharac::RequestDBKillMonsterInfo @ 0x81c7836

/* DisPatcher_SelectCharac::RequestDBKillMonsterInfo(CUser*, MSG_CHARAC_SELECT&) */

undefined4 __thiscall
DisPatcher_SelectCharac::RequestDBKillMonsterInfo
          (DisPatcher_SelectCharac *this,CUser *param_1,MSG_CHARAC_SELECT *param_2)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CStreamGuard local_18 [8];
  SIG_LOAD_KILL_MONSTER_INFO *local_10;
  
  pSVar2 = (Stream *)
           BigStreamPool::Acquire
                     (GlobalData::s_big_stream_pool,"PacketDispatcher_Impl_1.cpp",0x1843);
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 081c7888 to 081c79bb has its CatchHandler @ 081c79c3 */
  CStreamGuard::operator<<(pCVar3,0x282);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,iVar4);
  CUser::DisableCharacInfo(param_1,9);
  cVar1 = CUser::IsValidLastLoginCharac(param_1);
  if (cVar1 != '\0') {
    iVar4 = CUser::GetLastLoginChannelNo(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar4);
    iVar4 = CUser::GetLastLoginCharacNo(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar4);
  }
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_KILL_MONSTER_INFO>(pCVar3);
  memset(local_10,0,0xafcc);
  uVar5 = CUser::get_charac_no(param_1,(int)(char)param_2[0xd]);
  *(undefined4 *)(local_10 + 45000) = uVar5;
  cVar1 = CUser::IsValidLastLoginCharac(param_1);
  if (cVar1 == '\0') {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  }
  else {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,5,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}

```

---

## RequestDBQuest

```asm
// === 081c70c2 DisPatcher_SelectCharac::RequestDBQuest  [0x081c70c2-0x81c727b] ===
 81c70c2:	55                   	push   %ebp
 81c70c3:	89 e5                	mov    %esp,%ebp
 81c70c5:	56                   	push   %esi
 81c70c6:	53                   	push   %ebx
 81c70c7:	83 ec 20             	sub    $0x20,%esp
 81c70ca:	a1 a4 bd 40 09       	mov    0x940bda4,%eax
 81c70cf:	c7 44 24 08 bd 17 00 	movl   $0x17bd,0x8(%esp)
 81c70d6:	00 
 81c70d7:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81c70de:	08 
 81c70df:	89 04 24             	mov    %eax,(%esp)
 81c70e2:	e8 7b 91 0c 00       	call   8290262 <_ZN13BigStreamPool7AcquireEPKci>
 81c70e7:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81c70ee:	00 
 81c70ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c70f3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c70f6:	89 04 24             	mov    %eax,(%esp)
 81c70f9:	e8 28 1b f0 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81c70fe:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c7101:	89 04 24             	mov    %eax,(%esp)
 81c7104:	e8 3d 1b f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c7109:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81c7110:	00 
 81c7111:	89 04 24             	mov    %eax,(%esp)
 81c7114:	e8 3d 1b f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c7119:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c711c:	89 04 24             	mov    %eax,(%esp)
 81c711f:	e8 72 1b f0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81c7124:	89 c3                	mov    %eax,%ebx
 81c7126:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c7129:	89 04 24             	mov    %eax,(%esp)
 81c712c:	e8 15 1b f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c7131:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c7135:	89 04 24             	mov    %eax,(%esp)
 81c7138:	e8 19 1b f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c713d:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 81c7144:	00 
 81c7145:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7148:	89 04 24             	mov    %eax,(%esp)
 81c714b:	e8 7e d7 f6 ff       	call   81348ce <_ZN5CUser17DisableCharacInfoE13CACHE_SECTION>
 81c7150:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7153:	89 04 24             	mov    %eax,(%esp)
 81c7156:	e8 a3 d7 f6 ff       	call   81348fe <_ZN5CUser22IsValidLastLoginCharacEv>
 81c715b:	84 c0                	test   %al,%al
 81c715d:	74 48                	je     81c71a7 <_ZN23DisPatcher_SelectCharac14RequestDBQuestEP5CUserR17MSG_CHARAC_SELECT+0xe5>
 81c715f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7162:	89 04 24             	mov    %eax,(%esp)
 81c7165:	e8 86 d7 f6 ff       	call   81348f0 <_ZN5CUser21GetLastLoginChannelNoEv>
 81c716a:	89 c3                	mov    %eax,%ebx
 81c716c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c716f:	89 04 24             	mov    %eax,(%esp)
 81c7172:	e8 cf 1a f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c7177:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c717b:	89 04 24             	mov    %eax,(%esp)
 81c717e:	e8 d3 1a f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c7183:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7186:	89 04 24             	mov    %eax,(%esp)
 81c7189:	e8 54 d7 f6 ff       	call   81348e2 <_ZN5CUser20GetLastLoginCharacNoEv>
 81c718e:	89 c3                	mov    %eax,%ebx
 81c7190:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c7193:	89 04 24             	mov    %eax,(%esp)
 81c7196:	e8 ab 1a f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c719b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c719f:	89 04 24             	mov    %eax,(%esp)
 81c71a2:	e8 af 1a f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c71a7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c71aa:	89 04 24             	mov    %eax,(%esp)
 81c71ad:	e8 9c 1a f0 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81c71b2:	89 04 24             	mov    %eax,(%esp)
 81c71b5:	e8 a2 fb 06 00       	call   8236d5c <_ZN12CStreamGuard11GetInBufferI14SIG_LOAD_QUESTEEPT_v>
 81c71ba:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c71bd:	c7 44 24 08 08 76 00 	movl   $0x7608,0x8(%esp)
 81c71c4:	00 
 81c71c5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c71cc:	00 
 81c71cd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c71d0:	89 04 24             	mov    %eax,(%esp)
 81c71d3:	e8 e8 6a eb ff       	call   807dcc0 <memset@plt>
 81c71d8:	8b 45 10             	mov    0x10(%ebp),%eax
 81c71db:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c71df:	0f be c0             	movsbl %al,%eax
 81c71e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c71e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c71e9:	89 04 24             	mov    %eax,(%esp)
 81c71ec:	e8 af 6d 48 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81c71f1:	89 c2                	mov    %eax,%edx
 81c71f3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c71f6:	89 10                	mov    %edx,(%eax)
 81c71f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c71fb:	89 04 24             	mov    %eax,(%esp)
 81c71fe:	e8 fb d6 f6 ff       	call   81348fe <_ZN5CUser22IsValidLastLoginCharacEv>
 81c7203:	84 c0                	test   %al,%al
 81c7205:	74 23                	je     81c722a <_ZN23DisPatcher_SelectCharac14RequestDBQuestEP5CUserR17MSG_CHARAC_SELECT+0x168>
 81c7207:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81c720c:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81c720f:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c7213:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 81c721a:	00 
 81c721b:	89 04 24             	mov    %eax,(%esp)
 81c721e:	e8 bb 9d 3a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81c7223:	bb 01 00 00 00       	mov    $0x1,%ebx
 81c7228:	eb 3e                	jmp    81c7268 <_ZN23DisPatcher_SelectCharac14RequestDBQuestEP5CUserR17MSG_CHARAC_SELECT+0x1a6>
 81c722a:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81c722f:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81c7232:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c7236:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81c723d:	00 
 81c723e:	89 04 24             	mov    %eax,(%esp)
 81c7241:	e8 98 9d 3a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81c7246:	bb 01 00 00 00       	mov    $0x1,%ebx
 81c724b:	eb 1b                	jmp    81c7268 <_ZN23DisPatcher_SelectCharac14RequestDBQuestEP5CUserR17MSG_CHARAC_SELECT+0x1a6>
 81c724d:	89 d3                	mov    %edx,%ebx
 81c724f:	89 c6                	mov    %eax,%esi
 81c7251:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c7254:	89 04 24             	mov    %eax,(%esp)
 81c7257:	e8 76 56 45 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81c725c:	89 f0                	mov    %esi,%eax
 81c725e:	89 da                	mov    %ebx,%edx
 81c7260:	89 04 24             	mov    %eax,(%esp)
 81c7263:	e8 e8 c4 91 00       	call   8ae3750 <_Unwind_Resume>
 81c7268:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c726b:	89 04 24             	mov    %eax,(%esp)
 81c726e:	e8 5f 56 45 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81c7273:	89 d8                	mov    %ebx,%eax
 81c7275:	83 c4 20             	add    $0x20,%esp
 81c7278:	5b                   	pop    %ebx
 81c7279:	5e                   	pop    %esi
 81c727a:	5d                   	pop    %ebp
 81c727b:	c3                   	ret

```

```c
// DisPatcher_SelectCharac::RequestDBQuest @ 0x81c70c2

/* DisPatcher_SelectCharac::RequestDBQuest(CUser*, MSG_CHARAC_SELECT&) */

undefined4 __thiscall
DisPatcher_SelectCharac::RequestDBQuest
          (DisPatcher_SelectCharac *this,CUser *param_1,MSG_CHARAC_SELECT *param_2)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CStreamGuard local_18 [8];
  SIG_LOAD_QUEST *local_10;
  
  pSVar2 = (Stream *)
           BigStreamPool::Acquire
                     (GlobalData::s_big_stream_pool,"PacketDispatcher_Impl_1.cpp",0x17bd);
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 081c7114 to 081c7245 has its CatchHandler @ 081c724d */
  CStreamGuard::operator<<(pCVar3,10);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,iVar4);
  CUser::DisableCharacInfo(param_1,3);
  cVar1 = CUser::IsValidLastLoginCharac(param_1);
  if (cVar1 != '\0') {
    iVar4 = CUser::GetLastLoginChannelNo(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar4);
    iVar4 = CUser::GetLastLoginCharacNo(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar4);
  }
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_QUEST>(pCVar3);
  memset(local_10,0,0x7608);
  uVar5 = CUser::get_charac_no(param_1,(int)(char)param_2[0xd]);
  *(undefined4 *)local_10 = uVar5;
  cVar1 = CUser::IsValidLastLoginCharac(param_1);
  if (cVar1 == '\0') {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  }
  else {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,5,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}

```

---

## RequestDBSkill

```asm
// === 081c6f08 DisPatcher_SelectCharac::RequestDBSkill  [0x081c6f08-0x81c70c1] ===
 81c6f08:	55                   	push   %ebp
 81c6f09:	89 e5                	mov    %esp,%ebp
 81c6f0b:	56                   	push   %esi
 81c6f0c:	53                   	push   %ebx
 81c6f0d:	83 ec 20             	sub    $0x20,%esp
 81c6f10:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81c6f15:	c7 44 24 08 a1 17 00 	movl   $0x17a1,0x8(%esp)
 81c6f1c:	00 
 81c6f1d:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81c6f24:	08 
 81c6f25:	89 04 24             	mov    %eax,(%esp)
 81c6f28:	e8 59 8b 0c 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 81c6f2d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81c6f34:	00 
 81c6f35:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c6f39:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c6f3c:	89 04 24             	mov    %eax,(%esp)
 81c6f3f:	e8 e2 1c f0 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81c6f44:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c6f47:	89 04 24             	mov    %eax,(%esp)
 81c6f4a:	e8 f7 1c f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c6f4f:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 81c6f56:	00 
 81c6f57:	89 04 24             	mov    %eax,(%esp)
 81c6f5a:	e8 f7 1c f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c6f5f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6f62:	89 04 24             	mov    %eax,(%esp)
 81c6f65:	e8 2c 1d f0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81c6f6a:	89 c3                	mov    %eax,%ebx
 81c6f6c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c6f6f:	89 04 24             	mov    %eax,(%esp)
 81c6f72:	e8 cf 1c f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c6f77:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c6f7b:	89 04 24             	mov    %eax,(%esp)
 81c6f7e:	e8 d3 1c f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c6f83:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81c6f8a:	00 
 81c6f8b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6f8e:	89 04 24             	mov    %eax,(%esp)
 81c6f91:	e8 38 d9 f6 ff       	call   81348ce <_ZN5CUser17DisableCharacInfoE13CACHE_SECTION>
 81c6f96:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6f99:	89 04 24             	mov    %eax,(%esp)
 81c6f9c:	e8 5d d9 f6 ff       	call   81348fe <_ZN5CUser22IsValidLastLoginCharacEv>
 81c6fa1:	84 c0                	test   %al,%al
 81c6fa3:	74 48                	je     81c6fed <_ZN23DisPatcher_SelectCharac14RequestDBSkillEP5CUserR17MSG_CHARAC_SELECT+0xe5>
 81c6fa5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6fa8:	89 04 24             	mov    %eax,(%esp)
 81c6fab:	e8 40 d9 f6 ff       	call   81348f0 <_ZN5CUser21GetLastLoginChannelNoEv>
 81c6fb0:	89 c3                	mov    %eax,%ebx
 81c6fb2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c6fb5:	89 04 24             	mov    %eax,(%esp)
 81c6fb8:	e8 89 1c f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c6fbd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c6fc1:	89 04 24             	mov    %eax,(%esp)
 81c6fc4:	e8 8d 1c f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c6fc9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6fcc:	89 04 24             	mov    %eax,(%esp)
 81c6fcf:	e8 0e d9 f6 ff       	call   81348e2 <_ZN5CUser20GetLastLoginCharacNoEv>
 81c6fd4:	89 c3                	mov    %eax,%ebx
 81c6fd6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c6fd9:	89 04 24             	mov    %eax,(%esp)
 81c6fdc:	e8 65 1c f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c6fe1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c6fe5:	89 04 24             	mov    %eax,(%esp)
 81c6fe8:	e8 69 1c f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c6fed:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c6ff0:	89 04 24             	mov    %eax,(%esp)
 81c6ff3:	e8 56 1c f0 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81c6ff8:	89 04 24             	mov    %eax,(%esp)
 81c6ffb:	e8 46 fd 06 00       	call   8236d46 <_ZN12CStreamGuard11GetInBufferI14SIG_LOAD_SKILLEEPT_v>
 81c7000:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c7003:	c7 44 24 08 14 04 00 	movl   $0x414,0x8(%esp)
 81c700a:	00 
 81c700b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c7012:	00 
 81c7013:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c7016:	89 04 24             	mov    %eax,(%esp)
 81c7019:	e8 a2 6c eb ff       	call   807dcc0 <memset@plt>
 81c701e:	8b 45 10             	mov    0x10(%ebp),%eax
 81c7021:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c7025:	0f be c0             	movsbl %al,%eax
 81c7028:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c702c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c702f:	89 04 24             	mov    %eax,(%esp)
 81c7032:	e8 69 6f 48 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81c7037:	89 c2                	mov    %eax,%edx
 81c7039:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c703c:	89 10                	mov    %edx,(%eax)
 81c703e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7041:	89 04 24             	mov    %eax,(%esp)
 81c7044:	e8 b5 d8 f6 ff       	call   81348fe <_ZN5CUser22IsValidLastLoginCharacEv>
 81c7049:	84 c0                	test   %al,%al
 81c704b:	74 23                	je     81c7070 <_ZN23DisPatcher_SelectCharac14RequestDBSkillEP5CUserR17MSG_CHARAC_SELECT+0x168>
 81c704d:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81c7052:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81c7055:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c7059:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 81c7060:	00 
 81c7061:	89 04 24             	mov    %eax,(%esp)
 81c7064:	e8 75 9f 3a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81c7069:	bb 01 00 00 00       	mov    $0x1,%ebx
 81c706e:	eb 3e                	jmp    81c70ae <_ZN23DisPatcher_SelectCharac14RequestDBSkillEP5CUserR17MSG_CHARAC_SELECT+0x1a6>
 81c7070:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81c7075:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81c7078:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c707c:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81c7083:	00 
 81c7084:	89 04 24             	mov    %eax,(%esp)
 81c7087:	e8 52 9f 3a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81c708c:	bb 01 00 00 00       	mov    $0x1,%ebx
 81c7091:	eb 1b                	jmp    81c70ae <_ZN23DisPatcher_SelectCharac14RequestDBSkillEP5CUserR17MSG_CHARAC_SELECT+0x1a6>
 81c7093:	89 d3                	mov    %edx,%ebx
 81c7095:	89 c6                	mov    %eax,%esi
 81c7097:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c709a:	89 04 24             	mov    %eax,(%esp)
 81c709d:	e8 30 58 45 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81c70a2:	89 f0                	mov    %esi,%eax
 81c70a4:	89 da                	mov    %ebx,%edx
 81c70a6:	89 04 24             	mov    %eax,(%esp)
 81c70a9:	e8 a2 c6 91 00       	call   8ae3750 <_Unwind_Resume>
 81c70ae:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c70b1:	89 04 24             	mov    %eax,(%esp)
 81c70b4:	e8 19 58 45 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81c70b9:	89 d8                	mov    %ebx,%eax
 81c70bb:	83 c4 20             	add    $0x20,%esp
 81c70be:	5b                   	pop    %ebx
 81c70bf:	5e                   	pop    %esi
 81c70c0:	5d                   	pop    %ebp
 81c70c1:	c3                   	ret

```

```c
// DisPatcher_SelectCharac::RequestDBSkill @ 0x81c6f08

/* DisPatcher_SelectCharac::RequestDBSkill(CUser*, MSG_CHARAC_SELECT&) */

undefined4 __thiscall
DisPatcher_SelectCharac::RequestDBSkill
          (DisPatcher_SelectCharac *this,CUser *param_1,MSG_CHARAC_SELECT *param_2)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CStreamGuard local_18 [8];
  SIG_LOAD_SKILL *local_10;
  
  pSVar2 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x17a1);
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 081c6f5a to 081c708b has its CatchHandler @ 081c7093 */
  CStreamGuard::operator<<(pCVar3,9);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,iVar4);
  CUser::DisableCharacInfo(param_1,2);
  cVar1 = CUser::IsValidLastLoginCharac(param_1);
  if (cVar1 != '\0') {
    iVar4 = CUser::GetLastLoginChannelNo(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar4);
    iVar4 = CUser::GetLastLoginCharacNo(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar4);
  }
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_SKILL>(pCVar3);
  memset(local_10,0,0x414);
  uVar5 = CUser::get_charac_no(param_1,(int)(char)param_2[0xd]);
  *(undefined4 *)local_10 = uVar5;
  cVar1 = CUser::IsValidLastLoginCharac(param_1);
  if (cVar1 == '\0') {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  }
  else {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,5,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}

```

---

## RequestDBTicket

```asm
// === 081c727c DisPatcher_SelectCharac::RequestDBTicket  [0x081c727c-0x81c7435] ===
 81c727c:	55                   	push   %ebp
 81c727d:	89 e5                	mov    %esp,%ebp
 81c727f:	56                   	push   %esi
 81c7280:	53                   	push   %ebx
 81c7281:	83 ec 20             	sub    $0x20,%esp
 81c7284:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81c7289:	c7 44 24 08 db 17 00 	movl   $0x17db,0x8(%esp)
 81c7290:	00 
 81c7291:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81c7298:	08 
 81c7299:	89 04 24             	mov    %eax,(%esp)
 81c729c:	e8 e5 87 0c 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 81c72a1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81c72a8:	00 
 81c72a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c72ad:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c72b0:	89 04 24             	mov    %eax,(%esp)
 81c72b3:	e8 6e 19 f0 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81c72b8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c72bb:	89 04 24             	mov    %eax,(%esp)
 81c72be:	e8 83 19 f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c72c3:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 81c72ca:	00 
 81c72cb:	89 04 24             	mov    %eax,(%esp)
 81c72ce:	e8 83 19 f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c72d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c72d6:	89 04 24             	mov    %eax,(%esp)
 81c72d9:	e8 b8 19 f0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81c72de:	89 c3                	mov    %eax,%ebx
 81c72e0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c72e3:	89 04 24             	mov    %eax,(%esp)
 81c72e6:	e8 5b 19 f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c72eb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c72ef:	89 04 24             	mov    %eax,(%esp)
 81c72f2:	e8 5f 19 f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c72f7:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81c72fe:	00 
 81c72ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7302:	89 04 24             	mov    %eax,(%esp)
 81c7305:	e8 c4 d5 f6 ff       	call   81348ce <_ZN5CUser17DisableCharacInfoE13CACHE_SECTION>
 81c730a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c730d:	89 04 24             	mov    %eax,(%esp)
 81c7310:	e8 e9 d5 f6 ff       	call   81348fe <_ZN5CUser22IsValidLastLoginCharacEv>
 81c7315:	84 c0                	test   %al,%al
 81c7317:	74 48                	je     81c7361 <_ZN23DisPatcher_SelectCharac15RequestDBTicketEP5CUserR17MSG_CHARAC_SELECT+0xe5>
 81c7319:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c731c:	89 04 24             	mov    %eax,(%esp)
 81c731f:	e8 cc d5 f6 ff       	call   81348f0 <_ZN5CUser21GetLastLoginChannelNoEv>
 81c7324:	89 c3                	mov    %eax,%ebx
 81c7326:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c7329:	89 04 24             	mov    %eax,(%esp)
 81c732c:	e8 15 19 f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c7331:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c7335:	89 04 24             	mov    %eax,(%esp)
 81c7338:	e8 19 19 f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c733d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7340:	89 04 24             	mov    %eax,(%esp)
 81c7343:	e8 9a d5 f6 ff       	call   81348e2 <_ZN5CUser20GetLastLoginCharacNoEv>
 81c7348:	89 c3                	mov    %eax,%ebx
 81c734a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c734d:	89 04 24             	mov    %eax,(%esp)
 81c7350:	e8 f1 18 f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c7355:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c7359:	89 04 24             	mov    %eax,(%esp)
 81c735c:	e8 f5 18 f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c7361:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c7364:	89 04 24             	mov    %eax,(%esp)
 81c7367:	e8 e2 18 f0 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81c736c:	89 04 24             	mov    %eax,(%esp)
 81c736f:	e8 fe f9 06 00       	call   8236d72 <_ZN12CStreamGuard11GetInBufferI15SIG_LOAD_TICKETEEPT_v>
 81c7374:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c7377:	c7 44 24 08 9c 01 00 	movl   $0x19c,0x8(%esp)
 81c737e:	00 
 81c737f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c7386:	00 
 81c7387:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c738a:	89 04 24             	mov    %eax,(%esp)
 81c738d:	e8 2e 69 eb ff       	call   807dcc0 <memset@plt>
 81c7392:	8b 45 10             	mov    0x10(%ebp),%eax
 81c7395:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c7399:	0f be c0             	movsbl %al,%eax
 81c739c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c73a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c73a3:	89 04 24             	mov    %eax,(%esp)
 81c73a6:	e8 f5 6b 48 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81c73ab:	89 c2                	mov    %eax,%edx
 81c73ad:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c73b0:	89 10                	mov    %edx,(%eax)
 81c73b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c73b5:	89 04 24             	mov    %eax,(%esp)
 81c73b8:	e8 41 d5 f6 ff       	call   81348fe <_ZN5CUser22IsValidLastLoginCharacEv>
 81c73bd:	84 c0                	test   %al,%al
 81c73bf:	74 23                	je     81c73e4 <_ZN23DisPatcher_SelectCharac15RequestDBTicketEP5CUserR17MSG_CHARAC_SELECT+0x168>
 81c73c1:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81c73c6:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81c73c9:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c73cd:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 81c73d4:	00 
 81c73d5:	89 04 24             	mov    %eax,(%esp)
 81c73d8:	e8 01 9c 3a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81c73dd:	bb 01 00 00 00       	mov    $0x1,%ebx
 81c73e2:	eb 3e                	jmp    81c7422 <_ZN23DisPatcher_SelectCharac15RequestDBTicketEP5CUserR17MSG_CHARAC_SELECT+0x1a6>
 81c73e4:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81c73e9:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81c73ec:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c73f0:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81c73f7:	00 
 81c73f8:	89 04 24             	mov    %eax,(%esp)
 81c73fb:	e8 de 9b 3a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81c7400:	bb 01 00 00 00       	mov    $0x1,%ebx
 81c7405:	eb 1b                	jmp    81c7422 <_ZN23DisPatcher_SelectCharac15RequestDBTicketEP5CUserR17MSG_CHARAC_SELECT+0x1a6>
 81c7407:	89 d3                	mov    %edx,%ebx
 81c7409:	89 c6                	mov    %eax,%esi
 81c740b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c740e:	89 04 24             	mov    %eax,(%esp)
 81c7411:	e8 bc 54 45 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81c7416:	89 f0                	mov    %esi,%eax
 81c7418:	89 da                	mov    %ebx,%edx
 81c741a:	89 04 24             	mov    %eax,(%esp)
 81c741d:	e8 2e c3 91 00       	call   8ae3750 <_Unwind_Resume>
 81c7422:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c7425:	89 04 24             	mov    %eax,(%esp)
 81c7428:	e8 a5 54 45 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81c742d:	89 d8                	mov    %ebx,%eax
 81c742f:	83 c4 20             	add    $0x20,%esp
 81c7432:	5b                   	pop    %ebx
 81c7433:	5e                   	pop    %esi
 81c7434:	5d                   	pop    %ebp
 81c7435:	c3                   	ret

```

```c
// DisPatcher_SelectCharac::RequestDBTicket @ 0x81c727c

/* DisPatcher_SelectCharac::RequestDBTicket(CUser*, MSG_CHARAC_SELECT&) */

undefined4 __thiscall
DisPatcher_SelectCharac::RequestDBTicket
          (DisPatcher_SelectCharac *this,CUser *param_1,MSG_CHARAC_SELECT *param_2)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CStreamGuard local_18 [8];
  SIG_LOAD_TICKET *local_10;
  
  pSVar2 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x17db);
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 081c72ce to 081c73ff has its CatchHandler @ 081c7407 */
  CStreamGuard::operator<<(pCVar3,0xb);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,iVar4);
  CUser::DisableCharacInfo(param_1,4);
  cVar1 = CUser::IsValidLastLoginCharac(param_1);
  if (cVar1 != '\0') {
    iVar4 = CUser::GetLastLoginChannelNo(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar4);
    iVar4 = CUser::GetLastLoginCharacNo(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar4);
  }
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_TICKET>(pCVar3);
  memset(local_10,0,0x19c);
  uVar5 = CUser::get_charac_no(param_1,(int)(char)param_2[0xd]);
  *(undefined4 *)local_10 = uVar5;
  cVar1 = CUser::IsValidLastLoginCharac(param_1);
  if (cVar1 == '\0') {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  }
  else {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,5,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}

```

---

## checkPvpEnterCharacter

```asm
// === 081c6c22 DisPatcher_SelectCharac::checkPvpEnterCharacter  [0x081c6c22-0x81c6c9f] ===
 81c6c22:	55                   	push   %ebp
 81c6c23:	89 e5                	mov    %esp,%ebp
 81c6c25:	83 ec 18             	sub    $0x18,%esp
 81c6c28:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81c6c2c:	75 07                	jne    81c6c35 <_ZN23DisPatcher_SelectCharac22checkPvpEnterCharacterEP5CUserR17MSG_CHARAC_SELECT+0x13>
 81c6c2e:	b8 00 00 00 00       	mov    $0x0,%eax
 81c6c33:	eb 68                	jmp    81c6c9d <_ZN23DisPatcher_SelectCharac22checkPvpEnterCharacterEP5CUserR17MSG_CHARAC_SELECT+0x7b>
 81c6c35:	e8 6d 37 f1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81c6c3a:	89 04 24             	mov    %eax,(%esp)
 81c6c3d:	e8 a6 b8 f7 ff       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 81c6c42:	84 c0                	test   %al,%al
 81c6c44:	74 52                	je     81c6c98 <_ZN23DisPatcher_SelectCharac22checkPvpEnterCharacterEP5CUserR17MSG_CHARAC_SELECT+0x76>
 81c6c46:	8b 45 10             	mov    0x10(%ebp),%eax
 81c6c49:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c6c4d:	0f be c0             	movsbl %al,%eax
 81c6c50:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c6c54:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6c57:	89 04 24             	mov    %eax,(%esp)
 81c6c5a:	e8 ad 92 06 00       	call   822ff0c <_ZNK5CUser12GetCharacJobEi>
 81c6c5f:	3c 09                	cmp    $0x9,%al
 81c6c61:	0f 94 c0             	sete   %al
 81c6c64:	84 c0                	test   %al,%al
 81c6c66:	74 07                	je     81c6c6f <_ZN23DisPatcher_SelectCharac22checkPvpEnterCharacterEP5CUserR17MSG_CHARAC_SELECT+0x4d>
 81c6c68:	b8 00 00 00 00       	mov    $0x0,%eax
 81c6c6d:	eb 2e                	jmp    81c6c9d <_ZN23DisPatcher_SelectCharac22checkPvpEnterCharacterEP5CUserR17MSG_CHARAC_SELECT+0x7b>
 81c6c6f:	8b 45 10             	mov    0x10(%ebp),%eax
 81c6c72:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c6c76:	0f be c0             	movsbl %al,%eax
 81c6c79:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c6c7d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6c80:	89 04 24             	mov    %eax,(%esp)
 81c6c83:	e8 84 92 06 00       	call   822ff0c <_ZNK5CUser12GetCharacJobEi>
 81c6c88:	3c 0a                	cmp    $0xa,%al
 81c6c8a:	0f 94 c0             	sete   %al
 81c6c8d:	84 c0                	test   %al,%al
 81c6c8f:	74 07                	je     81c6c98 <_ZN23DisPatcher_SelectCharac22checkPvpEnterCharacterEP5CUserR17MSG_CHARAC_SELECT+0x76>
 81c6c91:	b8 00 00 00 00       	mov    $0x0,%eax
 81c6c96:	eb 05                	jmp    81c6c9d <_ZN23DisPatcher_SelectCharac22checkPvpEnterCharacterEP5CUserR17MSG_CHARAC_SELECT+0x7b>
 81c6c98:	b8 01 00 00 00       	mov    $0x1,%eax
 81c6c9d:	c9                   	leave
 81c6c9e:	c3                   	ret
 81c6c9f:	90                   	nop

```

```c
// DisPatcher_SelectCharac::checkPvpEnterCharacter @ 0x81c6c22

/* DisPatcher_SelectCharac::checkPvpEnterCharacter(CUser*, MSG_CHARAC_SELECT&) */

undefined4 __thiscall
DisPatcher_SelectCharac::checkPvpEnterCharacter
          (DisPatcher_SelectCharac *this,CUser *param_1,MSG_CHARAC_SELECT *param_2)

{
  char cVar1;
  GameWorld *this_00;
  
  if (param_1 == (CUser *)0x0) {
    return 0;
  }
  this_00 = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsPVPChannel(this_00);
  if (cVar1 != '\0') {
    cVar1 = CUser::GetCharacJob(param_1,(int)(char)param_2[0xd]);
    if (cVar1 == '\t') {
      return 0;
    }
    cVar1 = CUser::GetCharacJob(param_1,(int)(char)param_2[0xd]);
    if (cVar1 == '\n') {
      return 0;
    }
  }
  return 1;
}

```

---

## check_error

```asm
// === 081c686e DisPatcher_SelectCharac::check_error  [0x081c686e-0x81c6c21] ===
 81c686e:	55                   	push   %ebp
 81c686f:	89 e5                	mov    %esp,%ebp
 81c6871:	56                   	push   %esi
 81c6872:	53                   	push   %ebx
 81c6873:	83 ec 40             	sub    $0x40,%esp
 81c6876:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6879:	89 04 24             	mov    %eax,(%esp)
 81c687c:	e8 0b 3b f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c6881:	83 f8 02             	cmp    $0x2,%eax
 81c6884:	0f 95 c0             	setne  %al
 81c6887:	84 c0                	test   %al,%al
 81c6889:	74 0a                	je     81c6895 <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE+0x27>
 81c688b:	bb ff ff ff 7f       	mov    $0x7fffffff,%ebx
 81c6890:	e9 83 03 00 00       	jmp    81c6c18 <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE+0x3aa>
 81c6895:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6898:	89 04 24             	mov    %eax,(%esp)
 81c689b:	e8 46 42 48 00       	call   864aae6 <_ZN5CUser20isLockedCreateCharacEv>
 81c68a0:	84 c0                	test   %al,%al
 81c68a2:	74 0a                	je     81c68ae <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE+0x40>
 81c68a4:	bb 13 00 00 00       	mov    $0x13,%ebx
 81c68a9:	e9 6a 03 00 00       	jmp    81c6c18 <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE+0x3aa>
 81c68ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c68b1:	89 04 24             	mov    %eax,(%esp)
 81c68b4:	e8 61 99 06 00       	call   823021a <_ZN5CUser16isHumanCertifiedEv>
 81c68b9:	83 f0 01             	xor    $0x1,%eax
 81c68bc:	84 c0                	test   %al,%al
 81c68be:	74 0a                	je     81c68ca <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE+0x5c>
 81c68c0:	bb ff ff ff 7f       	mov    $0x7fffffff,%ebx
 81c68c5:	e9 4e 03 00 00       	jmp    81c6c18 <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE+0x3aa>
 81c68ca:	8b 45 10             	mov    0x10(%ebp),%eax
 81c68cd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c68d0:	e8 d2 3a f1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81c68d5:	89 04 24             	mov    %eax,(%esp)
 81c68d8:	e8 43 02 f5 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 81c68dd:	83 f8 0e             	cmp    $0xe,%eax
 81c68e0:	0f 94 c0             	sete   %al
 81c68e3:	84 c0                	test   %al,%al
 81c68e5:	74 3c                	je     81c6923 <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE+0xb5>
 81c68e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c68ea:	89 04 24             	mov    %eax,(%esp)
 81c68ed:	e8 b8 93 06 00       	call   822fcaa <_ZN5CUser28getOnlinePreliminaryCharacNoEv>
 81c68f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c68f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c68f9:	89 04 24             	mov    %eax,(%esp)
 81c68fc:	e8 11 76 48 00       	call   864df12 <_ZNK5CUser14get_charac_idxEj>
 81c6901:	89 c2                	mov    %eax,%edx
 81c6903:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c6906:	88 50 0d             	mov    %dl,0xd(%eax)
 81c6909:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c690c:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c6910:	3c ff                	cmp    $0xff,%al
 81c6912:	0f 94 c0             	sete   %al
 81c6915:	84 c0                	test   %al,%al
 81c6917:	74 0a                	je     81c6923 <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE+0xb5>
 81c6919:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 81c691e:	e9 f5 02 00 00       	jmp    81c6c18 <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE+0x3aa>
 81c6923:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c6926:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c692a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c692d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c6931:	8b 45 08             	mov    0x8(%ebp),%eax
 81c6934:	89 04 24             	mov    %eax,(%esp)
 81c6937:	e8 e6 02 00 00       	call   81c6c22 <_ZN23DisPatcher_SelectCharac22checkPvpEnterCharacterEP5CUserR17MSG_CHARAC_SELECT>
 81c693c:	83 f0 01             	xor    $0x1,%eax
 81c693f:	84 c0                	test   %al,%al
 81c6941:	74 0a                	je     81c694d <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE+0xdf>
 81c6943:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 81c6948:	e9 cb 02 00 00       	jmp    81c6c18 <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE+0x3aa>
 81c694d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c6950:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c6954:	3c 23                	cmp    $0x23,%al
 81c6956:	7f 0b                	jg     81c6963 <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE+0xf5>
 81c6958:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c695b:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c695f:	84 c0                	test   %al,%al
 81c6961:	79 4e                	jns    81c69b1 <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE+0x143>
 81c6963:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c6966:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c696a:	0f be d8             	movsbl %al,%ebx
 81c696d:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81c6974:	00 
 81c6975:	c7 44 24 08 c4 16 00 	movl   $0x16c4,0x8(%esp)
 81c697c:	00 
 81c697d:	c7 44 24 04 c0 56 bd 	movl   $0x8bd56c0,0x4(%esp)
 81c6984:	08 
 81c6985:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81c6988:	89 04 24             	mov    %eax,(%esp)
 81c698b:	e8 88 8d 38 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81c6990:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81c6994:	c7 44 24 04 14 16 bc 	movl   $0x8bc1614,0x4(%esp)
 81c699b:	08 
 81c699c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81c699f:	89 04 24             	mov    %eax,(%esp)
 81c69a2:	e8 e1 8d 38 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81c69a7:	bb 04 00 00 00       	mov    $0x4,%ebx
 81c69ac:	e9 67 02 00 00       	jmp    81c6c18 <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE+0x3aa>
 81c69b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c69b4:	05 e8 96 07 00       	add    $0x796e8,%eax
 81c69b9:	89 04 24             	mov    %eax,(%esp)
 81c69bc:	e8 d9 a1 fd ff       	call   81a0b9a <_ZNKSt6vectorI12_Charac_infoSaIS0_EE4sizeEv>
 81c69c1:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81c69c4:	0f b6 52 0d          	movzbl 0xd(%edx),%edx
 81c69c8:	0f b6 d2             	movzbl %dl,%edx
 81c69cb:	39 d0                	cmp    %edx,%eax
 81c69cd:	0f 96 c0             	setbe  %al
 81c69d0:	84 c0                	test   %al,%al
 81c69d2:	74 0a                	je     81c69de <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE+0x170>
 81c69d4:	bb fe ff ff ff       	mov    $0xfffffffe,%ebx
 81c69d9:	e9 3a 02 00 00       	jmp    81c6c18 <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE+0x3aa>
 81c69de:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 81c69e1:	89 04 24             	mov    %eax,(%esp)
 81c69e4:	e8 e7 96 51 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 81c69e9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c69ec:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c69f0:	0f be c0             	movsbl %al,%eax
 81c69f3:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c69f6:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 81c69fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c6a00:	89 14 24             	mov    %edx,(%esp)
 81c6a03:	e8 b0 a1 fd ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 81c6a08:	83 c0 04             	add    $0x4,%eax
 81c6a0b:	8d 55 e3             	lea    -0x1d(%ebp),%edx
 81c6a0e:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c6a12:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c6a16:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81c6a19:	89 04 24             	mov    %eax,(%esp)
 81c6a1c:	e8 0f 0c 54 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 81c6a21:	eb 1b                	jmp    81c6a3e <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE+0x1d0>
 81c6a23:	89 d3                	mov    %edx,%ebx
 81c6a25:	89 c6                	mov    %eax,%esi
 81c6a27:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 81c6a2a:	89 04 24             	mov    %eax,(%esp)
 81c6a2d:	e8 be 96 51 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81c6a32:	89 f0                	mov    %esi,%eax
 81c6a34:	89 da                	mov    %ebx,%edx
 81c6a36:	89 04 24             	mov    %eax,(%esp)
 81c6a39:	e8 12 cd 91 00       	call   8ae3750 <_Unwind_Resume>
 81c6a3e:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 81c6a41:	89 04 24             	mov    %eax,(%esp)
 81c6a44:	e8 a7 96 51 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81c6a49:	e8 b3 e5 06 00       	call   8235001 <_ZN16CSyncSlangFilter11GetInstanceEv>
 81c6a4e:	8d 55 cc             	lea    -0x34(%ebp),%edx
 81c6a51:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c6a55:	89 04 24             	mov    %eax,(%esp)
 81c6a58:	e8 11 77 46 00       	call   862e16e <_ZN16CSyncSlangFilter12HasSlangNameERKSs>
 81c6a5d:	84 c0                	test   %al,%al
 81c6a5f:	75 18                	jne    81c6a79 <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE+0x20b>
 81c6a61:	e8 9b e5 06 00       	call   8235001 <_ZN16CSyncSlangFilter11GetInstanceEv>
 81c6a66:	8d 55 cc             	lea    -0x34(%ebp),%edx
 81c6a69:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c6a6d:	89 04 24             	mov    %eax,(%esp)
 81c6a70:	e8 ad 7b 46 00       	call   862e622 <_ZN16CSyncSlangFilter8HasSlangERKSs>
 81c6a75:	84 c0                	test   %al,%al
 81c6a77:	74 07                	je     81c6a80 <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE+0x212>
 81c6a79:	b8 01 00 00 00       	mov    $0x1,%eax
 81c6a7e:	eb 05                	jmp    81c6a85 <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE+0x217>
 81c6a80:	b8 00 00 00 00       	mov    $0x0,%eax
 81c6a85:	84 c0                	test   %al,%al
 81c6a87:	74 0a                	je     81c6a93 <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE+0x225>
 81c6a89:	bb 9f 00 00 00       	mov    $0x9f,%ebx
 81c6a8e:	e9 7a 01 00 00       	jmp    81c6c0d <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE+0x39f>
 81c6a93:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6a96:	89 04 24             	mov    %eax,(%esp)
 81c6a99:	e8 d0 38 f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c6a9e:	8b 15 10 f7 41 09    	mov    0x941f710,%edx
 81c6aa4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c6aa8:	89 14 24             	mov    %edx,(%esp)
 81c6aab:	e8 96 28 f4 ff       	call   8109346 <_ZN8WongWork11CGMAccounts4isGMEj>
 81c6ab0:	0f b6 d8             	movzbl %al,%ebx
 81c6ab3:	e8 e3 56 f0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81c6ab8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c6abc:	89 04 24             	mov    %eax,(%esp)
 81c6abf:	e8 a4 4b 06 00       	call   822b668 <_ZN12CDataManager23setCharacNameFilterPassEb>
 81c6ac4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c6ac7:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c6acb:	0f be c0             	movsbl %al,%eax
 81c6ace:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c6ad1:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 81c6ad7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c6adb:	89 14 24             	mov    %edx,(%esp)
 81c6ade:	e8 d5 a0 fd ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 81c6ae3:	83 c0 04             	add    $0x4,%eax
 81c6ae6:	89 04 24             	mov    %eax,(%esp)
 81c6ae9:	e8 c2 78 eb ff       	call   807e3b0 <strlen@plt>
 81c6aee:	89 c6                	mov    %eax,%esi
 81c6af0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c6af3:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c6af7:	0f be c0             	movsbl %al,%eax
 81c6afa:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c6afd:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 81c6b03:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c6b07:	89 14 24             	mov    %edx,(%esp)
 81c6b0a:	e8 a9 a0 fd ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 81c6b0f:	83 c0 04             	add    $0x4,%eax
 81c6b12:	89 c3                	mov    %eax,%ebx
 81c6b14:	e8 82 56 f0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81c6b19:	89 74 24 08          	mov    %esi,0x8(%esp)
 81c6b1d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c6b21:	89 04 24             	mov    %eax,(%esp)
 81c6b24:	e8 e3 ca 19 00       	call   836360c <_ZN12CDataManager26hasPreventPrefixCharacNameEPKci>
 81c6b29:	84 c0                	test   %al,%al
 81c6b2b:	74 0a                	je     81c6b37 <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE+0x2c9>
 81c6b2d:	bb 08 00 00 00       	mov    $0x8,%ebx
 81c6b32:	e9 d6 00 00 00       	jmp    81c6c0d <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE+0x39f>
 81c6b37:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c6b3a:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c6b3e:	0f be c0             	movsbl %al,%eax
 81c6b41:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c6b45:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6b48:	89 04 24             	mov    %eax,(%esp)
 81c6b4b:	e8 a6 3f 48 00       	call   864aaf6 <_ZN5CUser17checkSelectCharacEi>
 81c6b50:	83 f0 01             	xor    $0x1,%eax
 81c6b53:	84 c0                	test   %al,%al
 81c6b55:	74 0a                	je     81c6b61 <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE+0x2f3>
 81c6b57:	bb fd ff ff ff       	mov    $0xfffffffd,%ebx
 81c6b5c:	e9 ac 00 00 00       	jmp    81c6c0d <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE+0x39f>
 81c6b61:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6b64:	89 04 24             	mov    %eax,(%esp)
 81c6b67:	e8 0c 3f 48 00       	call   864aa78 <_ZN5CUser20isLockedDeleteCharacEv>
 81c6b6c:	84 c0                	test   %al,%al
 81c6b6e:	74 62                	je     81c6bd2 <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE+0x364>
 81c6b70:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c6b73:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c6b77:	0f be c0             	movsbl %al,%eax
 81c6b7a:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c6b7d:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 81c6b83:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c6b87:	89 14 24             	mov    %edx,(%esp)
 81c6b8a:	e8 29 a0 fd ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 81c6b8f:	8b 18                	mov    (%eax),%ebx
 81c6b91:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c6b98:	00 
 81c6b99:	c7 44 24 08 1c 17 00 	movl   $0x171c,0x8(%esp)
 81c6ba0:	00 
 81c6ba1:	c7 44 24 04 c0 56 bd 	movl   $0x8bd56c0,0x4(%esp)
 81c6ba8:	08 
 81c6ba9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81c6bac:	89 04 24             	mov    %eax,(%esp)
 81c6baf:	e8 64 8b 38 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81c6bb4:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81c6bb8:	c7 44 24 04 40 16 bc 	movl   $0x8bc1640,0x4(%esp)
 81c6bbf:	08 
 81c6bc0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81c6bc3:	89 04 24             	mov    %eax,(%esp)
 81c6bc6:	e8 bd 8b 38 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81c6bcb:	bb ff ff ff 7f       	mov    $0x7fffffff,%ebx
 81c6bd0:	eb 3b                	jmp    81c6c0d <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE+0x39f>
 81c6bd2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6bd5:	89 04 24             	mov    %eax,(%esp)
 81c6bd8:	e8 cf 3d 48 00       	call   864a9ac <_ZN5CUser13lock4DataLoadEv>
 81c6bdd:	83 f0 01             	xor    $0x1,%eax
 81c6be0:	84 c0                	test   %al,%al
 81c6be2:	74 07                	je     81c6beb <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE+0x37d>
 81c6be4:	bb fc ff ff ff       	mov    $0xfffffffc,%ebx
 81c6be9:	eb 22                	jmp    81c6c0d <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE+0x39f>
 81c6beb:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c6bf0:	eb 1b                	jmp    81c6c0d <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE+0x39f>
 81c6bf2:	89 d3                	mov    %edx,%ebx
 81c6bf4:	89 c6                	mov    %eax,%esi
 81c6bf6:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81c6bf9:	89 04 24             	mov    %eax,(%esp)
 81c6bfc:	e8 df 0f 54 00       	call   8707be0 <_ZNSsD1Ev>
 81c6c01:	89 f0                	mov    %esi,%eax
 81c6c03:	89 da                	mov    %ebx,%edx
 81c6c05:	89 04 24             	mov    %eax,(%esp)
 81c6c08:	e8 43 cb 91 00       	call   8ae3750 <_Unwind_Resume>
 81c6c0d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81c6c10:	89 04 24             	mov    %eax,(%esp)
 81c6c13:	e8 c8 0f 54 00       	call   8707be0 <_ZNSsD1Ev>
 81c6c18:	89 d8                	mov    %ebx,%eax
 81c6c1a:	83 c4 40             	add    $0x40,%esp
 81c6c1d:	5b                   	pop    %ebx
 81c6c1e:	5e                   	pop    %esi
 81c6c1f:	5d                   	pop    %ebp
 81c6c20:	c3                   	ret
 81c6c21:	90                   	nop

```

```c
// DisPatcher_SelectCharac::check_error @ 0x81c686e

/* DisPatcher_SelectCharac::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_SelectCharac::check_error(DisPatcher_SelectCharac *this,CUser *param_1,MSG_BASE *param_2)

{
  MSG_CHARAC_SELECT MVar1;
  char cVar2;
  MSG_BASE MVar3;
  bool bVar4;
  int iVar5;
  GameWorld *this_00;
  uint uVar6;
  CSyncSlangFilter *pCVar7;
  CDataManager *this_01;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  string local_38;
  cMyTrace local_34 [19];
  allocator<char> local_21;
  cMyTrace local_20 [16];
  MSG_BASE *local_10;
  
  iVar5 = CUser::get_state(param_1);
  if (iVar5 != 2) {
    return 0x7fffffff;
  }
  cVar2 = CUser::isLockedCreateCharac(param_1);
  if (cVar2 != '\0') {
    return 0x13;
  }
  cVar2 = CUser::isHumanCertified(param_1);
  if (cVar2 != '\x01') {
    return 0x7fffffff;
  }
  local_10 = param_2;
  this_00 = (GameWorld *)G_GameWorld();
  iVar5 = GameWorld::GetChannelType(this_00);
  if (iVar5 == 0xe) {
    uVar6 = CUser::getOnlinePreliminaryCharacNo(param_1);
    MVar3 = (MSG_BASE)CUser::get_charac_idx(param_1,uVar6);
    local_10[0xd] = MVar3;
    if (local_10[0xd] == (MSG_BASE)0xff) {
      return 0xffffffff;
    }
  }
  cVar2 = checkPvpEnterCharacter(this,param_1,(MSG_CHARAC_SELECT *)local_10);
  if (cVar2 != '\x01') {
    return 0xffffffff;
  }
  if (('#' < (char)*(MSG_CHARAC_SELECT *)(local_10 + 0xd)) ||
     ((char)*(MSG_CHARAC_SELECT *)(local_10 + 0xd) < '\0')) {
    MVar1 = *(MSG_CHARAC_SELECT *)(local_10 + 0xd);
    cMyTrace::cMyTrace(local_34,"int DisPatcher_SelectCharac::check_error(CUser*, MSG_BASE&)",0x16c4
                       ,5);
    cMyTrace::operator()(local_34,"pUser->SelectCharac() fail, %d out of range",(int)(char)MVar1);
    return 4;
  }
  uVar6 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                    ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8));
  if (uVar6 <= (byte)*(MSG_CHARAC_SELECT *)(local_10 + 0xd)) {
    return 0xfffffffe;
  }
  std::allocator<char>::allocator();
  iVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                    ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8),
                     (int)(char)*(MSG_CHARAC_SELECT *)(local_10 + 0xd));
                    /* try { // try from 081c6a1c to 081c6a20 has its CatchHandler @ 081c6a23 */
  std::string::string((string *)&local_38,(char *)(iVar5 + 4),(allocator *)&local_21);
  std::allocator<char>::~allocator(&local_21);
                    /* try { // try from 081c6a49 to 081c6bdc has its CatchHandler @ 081c6bf2 */
  pCVar7 = (CSyncSlangFilter *)CSyncSlangFilter::GetInstance();
  cVar2 = CSyncSlangFilter::HasSlangName(pCVar7,&local_38);
  if (cVar2 == '\0') {
    pCVar7 = (CSyncSlangFilter *)CSyncSlangFilter::GetInstance();
    cVar2 = CSyncSlangFilter::HasSlang(pCVar7,&local_38);
    if (cVar2 == '\0') {
      bVar4 = false;
      goto LAB_081c6a85;
    }
  }
  bVar4 = true;
LAB_081c6a85:
  if (bVar4) {
    uVar10 = 0x9f;
  }
  else {
    uVar6 = CUser::get_acc_id(param_1);
    bVar4 = (bool)WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar6);
    this_01 = (CDataManager *)G_CDataManager();
    CDataManager::setCharacNameFilterPass(this_01,bVar4);
    iVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8),
                       (int)(char)*(MSG_CHARAC_SELECT *)(local_10 + 0xd));
    strlen((char *)(iVar5 + 4));
    iVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8),
                       (int)(char)*(MSG_CHARAC_SELECT *)(local_10 + 0xd));
    pcVar8 = (char *)G_CDataManager();
    cVar2 = CDataManager::hasPreventPrefixCharacName(pcVar8,iVar5 + 4);
    if (cVar2 == '\0') {
      cVar2 = CUser::checkSelectCharac(param_1,(int)(char)*(MSG_CHARAC_SELECT *)(local_10 + 0xd));
      if (cVar2 == '\x01') {
        cVar2 = CUser::isLockedDeleteCharac(param_1);
        if (cVar2 == '\0') {
          cVar2 = CUser::lock4DataLoad(param_1);
          if (cVar2 == '\x01') {
            uVar10 = 0;
          }
          else {
            uVar10 = 0xfffffffc;
          }
        }
        else {
          puVar9 = (undefined4 *)
                   std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                             ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                              (param_1 + 0x796e8),(int)(char)*(MSG_CHARAC_SELECT *)(local_10 + 0xd))
          ;
          uVar10 = *puVar9;
          cMyTrace::cMyTrace(local_20,"int DisPatcher_SelectCharac::check_error(CUser*, MSG_BASE&)",
                             0x171c,0);
          cMyTrace::operator()(local_20,"select_charac error during delete charac_no(%d)",uVar10);
          uVar10 = 0x7fffffff;
        }
      }
      else {
        uVar10 = 0xfffffffd;
      }
    }
    else {
      uVar10 = 8;
    }
  }
  std::string::~string((string *)&local_38);
  return uVar10;
}

```

---

## process

```asm
// === 081c6380 DisPatcher_SelectCharac::process  [0x081c6380-0x81c6825] ===
 81c6380:	55                   	push   %ebp
 81c6381:	89 e5                	mov    %esp,%ebp
 81c6383:	56                   	push   %esi
 81c6384:	53                   	push   %ebx
 81c6385:	81 ec a0 01 00 00    	sub    $0x1a0,%esp
 81c638b:	8b 45 14             	mov    0x14(%ebp),%eax
 81c638e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81c6391:	8b 45 10             	mov    0x10(%ebp),%eax
 81c6394:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c6398:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c639b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c639f:	8b 45 08             	mov    0x8(%ebp),%eax
 81c63a2:	89 04 24             	mov    %eax,(%esp)
 81c63a5:	e8 c4 04 00 00       	call   81c686e <_ZN23DisPatcher_SelectCharac11check_errorEP5CUserR8MSG_BASE>
 81c63aa:	89 c2                	mov    %eax,%edx
 81c63ac:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c63af:	89 50 04             	mov    %edx,0x4(%eax)
 81c63b2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c63b5:	8b 40 04             	mov    0x4(%eax),%eax
 81c63b8:	85 c0                	test   %eax,%eax
 81c63ba:	7e 0a                	jle    81c63c6 <_ZN23DisPatcher_SelectCharac7processEP5CUserR8MSG_BASER9ParamBase+0x46>
 81c63bc:	b8 00 00 00 00       	mov    $0x0,%eax
 81c63c1:	e9 55 04 00 00       	jmp    81c681b <_ZN23DisPatcher_SelectCharac7processEP5CUserR8MSG_BASER9ParamBase+0x49b>
 81c63c6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c63c9:	8b 40 04             	mov    0x4(%eax),%eax
 81c63cc:	85 c0                	test   %eax,%eax
 81c63ce:	79 32                	jns    81c6402 <_ZN23DisPatcher_SelectCharac7processEP5CUserR8MSG_BASER9ParamBase+0x82>
 81c63d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c63d3:	89 04 24             	mov    %eax,(%esp)
 81c63d6:	e8 93 3f f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c63db:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81c63de:	8b 52 04             	mov    0x4(%edx),%edx
 81c63e1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c63e5:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c63e9:	c7 44 24 04 00 57 bd 	movl   $0x8bd5700,0x4(%esp)
 81c63f0:	08 
 81c63f1:	c7 04 24 87 15 00 00 	movl   $0x1587,(%esp)
 81c63f8:	e8 da a4 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c63fd:	e9 19 04 00 00       	jmp    81c681b <_ZN23DisPatcher_SelectCharac7processEP5CUserR8MSG_BASER9ParamBase+0x49b>
 81c6402:	8b 45 10             	mov    0x10(%ebp),%eax
 81c6405:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c6408:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c640b:	89 04 24             	mov    %eax,(%esp)
 81c640e:	e8 df 7d 48 00       	call   864e1f2 <_ZN15CUserCharacInfo14resetSaveFlagsEv>
 81c6413:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c6416:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c641a:	0f be c0             	movsbl %al,%eax
 81c641d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c6421:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6424:	89 04 24             	mov    %eax,(%esp)
 81c6427:	e8 28 9c 06 00       	call   8230054 <_ZNK5CUser18GetCharacViewStateEi>
 81c642c:	83 f8 01             	cmp    $0x1,%eax
 81c642f:	0f 94 c0             	sete   %al
 81c6432:	84 c0                	test   %al,%al
 81c6434:	74 4c                	je     81c6482 <_ZN23DisPatcher_SelectCharac7processEP5CUserR8MSG_BASER9ParamBase+0x102>
 81c6436:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c643d:	00 
 81c643e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6441:	89 04 24             	mov    %eax,(%esp)
 81c6444:	e8 37 99 06 00       	call   822fd80 <_ZN5CUser23SetValidLastLoginCharacEb>
 81c6449:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c644c:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c6450:	0f be c0             	movsbl %al,%eax
 81c6453:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c645a:	00 
 81c645b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c645f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6462:	89 04 24             	mov    %eax,(%esp)
 81c6465:	e8 82 9b 06 00       	call   822ffec <_ZN5CUser18SetCharacViewStateEii>
 81c646a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c6471:	00 
 81c6472:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6475:	89 04 24             	mov    %eax,(%esp)
 81c6478:	e8 89 97 06 00       	call   822fc06 <_ZN5CUser29SetLoadRentalInfoFromExchangeEb>
 81c647d:	e9 83 00 00 00       	jmp    81c6505 <_ZN23DisPatcher_SelectCharac7processEP5CUserR8MSG_BASER9ParamBase+0x185>
 81c6482:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c6485:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c6489:	0f be c0             	movsbl %al,%eax
 81c648c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c6490:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6493:	89 04 24             	mov    %eax,(%esp)
 81c6496:	e8 05 7b 48 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81c649b:	89 c3                	mov    %eax,%ebx
 81c649d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c64a0:	89 04 24             	mov    %eax,(%esp)
 81c64a3:	e8 3a e4 f6 ff       	call   81348e2 <_ZN5CUser20GetLastLoginCharacNoEv>
 81c64a8:	39 c3                	cmp    %eax,%ebx
 81c64aa:	0f 94 c0             	sete   %al
 81c64ad:	84 c0                	test   %al,%al
 81c64af:	74 54                	je     81c6505 <_ZN23DisPatcher_SelectCharac7processEP5CUserR8MSG_BASER9ParamBase+0x185>
 81c64b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c64b4:	89 04 24             	mov    %eax,(%esp)
 81c64b7:	e8 26 e4 f6 ff       	call   81348e2 <_ZN5CUser20GetLastLoginCharacNoEv>
 81c64bc:	85 c0                	test   %eax,%eax
 81c64be:	74 16                	je     81c64d6 <_ZN23DisPatcher_SelectCharac7processEP5CUserR8MSG_BASER9ParamBase+0x156>
 81c64c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c64c3:	89 04 24             	mov    %eax,(%esp)
 81c64c6:	e8 25 e4 f6 ff       	call   81348f0 <_ZN5CUser21GetLastLoginChannelNoEv>
 81c64cb:	85 c0                	test   %eax,%eax
 81c64cd:	74 07                	je     81c64d6 <_ZN23DisPatcher_SelectCharac7processEP5CUserR8MSG_BASER9ParamBase+0x156>
 81c64cf:	b8 01 00 00 00       	mov    $0x1,%eax
 81c64d4:	eb 05                	jmp    81c64db <_ZN23DisPatcher_SelectCharac7processEP5CUserR8MSG_BASER9ParamBase+0x15b>
 81c64d6:	b8 00 00 00 00       	mov    $0x0,%eax
 81c64db:	84 c0                	test   %al,%al
 81c64dd:	74 26                	je     81c6505 <_ZN23DisPatcher_SelectCharac7processEP5CUserR8MSG_BASER9ParamBase+0x185>
 81c64df:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c64e6:	00 
 81c64e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c64ea:	89 04 24             	mov    %eax,(%esp)
 81c64ed:	e8 8e 98 06 00       	call   822fd80 <_ZN5CUser23SetValidLastLoginCharacEb>
 81c64f2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c64f9:	00 
 81c64fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c64fd:	89 04 24             	mov    %eax,(%esp)
 81c6500:	e8 01 97 06 00       	call   822fc06 <_ZN5CUser29SetLoadRentalInfoFromExchangeEb>
 81c6505:	e8 9d 3e f1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81c650a:	89 04 24             	mov    %eax,(%esp)
 81c650d:	e8 0e 06 f5 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 81c6512:	83 f8 07             	cmp    $0x7,%eax
 81c6515:	74 11                	je     81c6528 <_ZN23DisPatcher_SelectCharac7processEP5CUserR8MSG_BASER9ParamBase+0x1a8>
 81c6517:	e8 8b 3e f1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81c651c:	89 04 24             	mov    %eax,(%esp)
 81c651f:	e8 fa ad f2 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 81c6524:	84 c0                	test   %al,%al
 81c6526:	74 07                	je     81c652f <_ZN23DisPatcher_SelectCharac7processEP5CUserR8MSG_BASER9ParamBase+0x1af>
 81c6528:	b8 01 00 00 00       	mov    $0x1,%eax
 81c652d:	eb 05                	jmp    81c6534 <_ZN23DisPatcher_SelectCharac7processEP5CUserR8MSG_BASER9ParamBase+0x1b4>
 81c652f:	b8 00 00 00 00       	mov    $0x0,%eax
 81c6534:	84 c0                	test   %al,%al
 81c6536:	74 13                	je     81c654b <_ZN23DisPatcher_SelectCharac7processEP5CUserR8MSG_BASER9ParamBase+0x1cb>
 81c6538:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c653f:	00 
 81c6540:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6543:	89 04 24             	mov    %eax,(%esp)
 81c6546:	e8 35 98 06 00       	call   822fd80 <_ZN5CUser23SetValidLastLoginCharacEb>
 81c654b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c654e:	89 04 24             	mov    %eax,(%esp)
 81c6551:	e8 a8 e3 f6 ff       	call   81348fe <_ZN5CUser22IsValidLastLoginCharacEv>
 81c6556:	84 c0                	test   %al,%al
 81c6558:	74 0f                	je     81c6569 <_ZN23DisPatcher_SelectCharac7processEP5CUserR8MSG_BASER9ParamBase+0x1e9>
 81c655a:	e8 b0 e1 06 00       	call   823470f <_ZN15exchange_server32GetInstanceExchangeServerHitRateEv>
 81c655f:	89 04 24             	mov    %eax,(%esp)
 81c6562:	e8 23 e1 06 00       	call   823468a <_ZN15exchange_server22CExchangeServerHitRate23IncrementCacheLoadCountEv>
 81c6567:	eb 0d                	jmp    81c6576 <_ZN23DisPatcher_SelectCharac7processEP5CUserR8MSG_BASER9ParamBase+0x1f6>
 81c6569:	e8 a1 e1 06 00       	call   823470f <_ZN15exchange_server32GetInstanceExchangeServerHitRateEv>
 81c656e:	89 04 24             	mov    %eax,(%esp)
 81c6571:	e8 e4 e0 06 00       	call   823465a <_ZN15exchange_server22CExchangeServerHitRate20IncrementDBLoadCountEv>
 81c6576:	e8 2c 3e f1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81c657b:	89 04 24             	mov    %eax,(%esp)
 81c657e:	e8 9b ad f2 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 81c6583:	83 f0 01             	xor    $0x1,%eax
 81c6586:	84 c0                	test   %al,%al
 81c6588:	74 59                	je     81c65e3 <_ZN23DisPatcher_SelectCharac7processEP5CUserR8MSG_BASER9ParamBase+0x263>
 81c658a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c658d:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c6591:	0f be c0             	movsbl %al,%eax
 81c6594:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c6597:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 81c659d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c65a1:	89 14 24             	mov    %edx,(%esp)
 81c65a4:	e8 0f a6 fd ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 81c65a9:	8b 90 b8 14 00 00    	mov    0x14b8(%eax),%edx
 81c65af:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c65b2:	89 50 0e             	mov    %edx,0xe(%eax)
 81c65b5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c65b8:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c65bc:	0f be c0             	movsbl %al,%eax
 81c65bf:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c65c2:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 81c65c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c65cc:	89 14 24             	mov    %edx,(%esp)
 81c65cf:	e8 e4 a5 fd ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 81c65d4:	0f b6 90 b7 14 00 00 	movzbl 0x14b7(%eax),%edx
 81c65db:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c65de:	88 50 12             	mov    %dl,0x12(%eax)
 81c65e1:	eb 11                	jmp    81c65f4 <_ZN23DisPatcher_SelectCharac7processEP5CUserR8MSG_BASER9ParamBase+0x274>
 81c65e3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c65e6:	c7 40 0e 00 00 00 00 	movl   $0x0,0xe(%eax)
 81c65ed:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c65f0:	c6 40 12 00          	movb   $0x0,0x12(%eax)
 81c65f4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c65f7:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c65fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c65fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c6602:	8b 45 08             	mov    0x8(%ebp),%eax
 81c6605:	89 04 24             	mov    %eax,(%esp)
 81c6608:	e8 93 06 00 00       	call   81c6ca0 <_ZN23DisPatcher_SelectCharac15RequestDBCharacEP5CUserRK17MSG_CHARAC_SELECT>
 81c660d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c6610:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c6614:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6617:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c661b:	8b 45 08             	mov    0x8(%ebp),%eax
 81c661e:	89 04 24             	mov    %eax,(%esp)
 81c6621:	e8 cc 13 00 00       	call   81c79f2 <_ZN23DisPatcher_SelectCharac17RequestBlackCountEP5CUserR17MSG_CHARAC_SELECT>
 81c6626:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c6629:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c662d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6630:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c6634:	8b 45 08             	mov    0x8(%ebp),%eax
 81c6637:	89 04 24             	mov    %eax,(%esp)
 81c663a:	e8 a7 08 00 00       	call   81c6ee6 <_ZN23DisPatcher_SelectCharac18RequestDBInventoryEP5CUserR17MSG_CHARAC_SELECT>
 81c663f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c6642:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c6646:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6649:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c664d:	8b 45 08             	mov    0x8(%ebp),%eax
 81c6650:	89 04 24             	mov    %eax,(%esp)
 81c6653:	e8 6a 0a 00 00       	call   81c70c2 <_ZN23DisPatcher_SelectCharac14RequestDBQuestEP5CUserR17MSG_CHARAC_SELECT>
 81c6658:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c665b:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c665f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6662:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c6666:	8b 45 08             	mov    0x8(%ebp),%eax
 81c6669:	89 04 24             	mov    %eax,(%esp)
 81c666c:	e8 c5 0d 00 00       	call   81c7436 <_ZN23DisPatcher_SelectCharac21RequestDBDungeonClearEP5CUserR17MSG_CHARAC_SELECT>
 81c6671:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c6674:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c6678:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c667b:	89 04 24             	mov    %eax,(%esp)
 81c667e:	e8 85 af f5 ff       	call   8121608 <_ZN8APSystem24CDBAndExchangeServerProc33RequestLoadActionPointFromDBAndESER5CUserR17MSG_CHARAC_SELECT>
 81c6683:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c6686:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c668a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c668d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c6691:	8b 45 08             	mov    0x8(%ebp),%eax
 81c6694:	89 04 24             	mov    %eax,(%esp)
 81c6697:	e8 9a 11 00 00       	call   81c7836 <_ZN23DisPatcher_SelectCharac24RequestDBKillMonsterInfoEP5CUserR17MSG_CHARAC_SELECT>
 81c669c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c669f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c66a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c66a6:	89 04 24             	mov    %eax,(%esp)
 81c66a9:	e8 d6 d0 f6 ff       	call   8133784 <_ZN12advancealtar23DBAndExchangeServerProc22requestLoadFromDBAndESER5CUserR17MSG_CHARAC_SELECT>
 81c66ae:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c66b1:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c66b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c66b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c66bc:	8b 45 08             	mov    0x8(%ebp),%eax
 81c66bf:	89 04 24             	mov    %eax,(%esp)
 81c66c2:	e8 3b 0f 00 00       	call   81c7602 <_ZN23DisPatcher_SelectCharac12RequestDBETCEP5CUserR17MSG_CHARAC_SELECT>
 81c66c7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c66ce:	00 
 81c66cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c66d2:	89 04 24             	mov    %eax,(%esp)
 81c66d5:	e8 a6 96 06 00       	call   822fd80 <_ZN5CUser23SetValidLastLoginCharacEb>
 81c66da:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c66e1:	00 
 81c66e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c66e5:	89 04 24             	mov    %eax,(%esp)
 81c66e8:	e8 6f 96 06 00       	call   822fd5c <_ZN5CUser20SetLastLoginCharacNoEi>
 81c66ed:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c66f4:	00 
 81c66f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c66f8:	89 04 24             	mov    %eax,(%esp)
 81c66fb:	e8 6e 96 06 00       	call   822fd6e <_ZN5CUser21SetLastLoginChannelNoEi>
 81c6700:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c6703:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c6707:	0f be c0             	movsbl %al,%eax
 81c670a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c670e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6711:	89 04 24             	mov    %eax,(%esp)
 81c6714:	e8 87 78 48 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81c6719:	89 c3                	mov    %eax,%ebx
 81c671b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c671e:	89 04 24             	mov    %eax,(%esp)
 81c6721:	e8 70 25 f0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81c6726:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c672a:	89 04 24             	mov    %eax,(%esp)
 81c672d:	e8 16 39 26 00       	call   842a048 <_ZN26DB_GetDeathTowerBestRecord11makeRequestEij>
 81c6732:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81c6739:	e8 60 55 f0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 81c673e:	89 c6                	mov    %eax,%esi
 81c6740:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6743:	89 04 24             	mov    %eax,(%esp)
 81c6746:	e8 59 6e f1 ff       	call   80dd5a4 <_ZN5CUser22GetAccountLastPlayTimeEv>
 81c674b:	89 c3                	mov    %eax,%ebx
 81c674d:	e8 2f 5a f0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 81c6752:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 81c6758:	89 74 24 08          	mov    %esi,0x8(%esp)
 81c675c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c6760:	89 04 24             	mov    %eax,(%esp)
 81c6763:	e8 40 59 2a 00       	call   846c0a8 <_Z22CheckDailyScheduleTimeill>
 81c6768:	84 c0                	test   %al,%al
 81c676a:	74 24                	je     81c6790 <_ZN23DisPatcher_SelectCharac7processEP5CUserR8MSG_BASER9ParamBase+0x410>
 81c676c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c676f:	89 04 24             	mov    %eax,(%esp)
 81c6772:	e8 f7 3b f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c6777:	89 c3                	mov    %eax,%ebx
 81c6779:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c677c:	89 04 24             	mov    %eax,(%esp)
 81c677f:	e8 12 25 f0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81c6784:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c6788:	89 04 24             	mov    %eax,(%esp)
 81c678b:	e8 1e c8 27 00       	call   8442fae <_ZN17DB_GetUserRegdate11makeRequestEij>
 81c6790:	8d 85 6e fe ff ff    	lea    -0x192(%ebp),%eax
 81c6796:	89 04 24             	mov    %eax,(%esp)
 81c6799:	e8 9c 5d 06 00       	call   822c53a <_ZN22LimitNpcBuyItemInfoAllC1Ev>
 81c679e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c67a1:	89 04 24             	mov    %eax,(%esp)
 81c67a4:	e8 ed 24 f0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81c67a9:	89 85 78 fe ff ff    	mov    %eax,-0x188(%ebp)
 81c67af:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c67b2:	89 04 24             	mov    %eax,(%esp)
 81c67b5:	e8 b4 3b f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c67ba:	89 85 7c fe ff ff    	mov    %eax,-0x184(%ebp)
 81c67c0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c67c3:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c67c7:	0f be c0             	movsbl %al,%eax
 81c67ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c67ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c67d1:	89 04 24             	mov    %eax,(%esp)
 81c67d4:	e8 c7 77 48 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81c67d9:	89 85 80 fe ff ff    	mov    %eax,-0x180(%ebp)
 81c67df:	8d 9d 6e fe ff ff    	lea    -0x192(%ebp),%ebx
 81c67e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c67e8:	89 04 24             	mov    %eax,(%esp)
 81c67eb:	e8 a0 54 f0 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81c67f0:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 81c67f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c67fa:	89 14 24             	mov    %edx,(%esp)
 81c67fd:	e8 88 b8 f4 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81c6802:	c7 44 24 08 82 01 00 	movl   $0x182,0x8(%esp)
 81c6809:	00 
 81c680a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c680e:	89 04 24             	mov    %eax,(%esp)
 81c6811:	e8 2e a6 2a 00       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 81c6816:	b8 00 00 00 00       	mov    $0x0,%eax
 81c681b:	81 c4 a0 01 00 00    	add    $0x1a0,%esp
 81c6821:	5b                   	pop    %ebx
 81c6822:	5e                   	pop    %esi
 81c6823:	5d                   	pop    %ebp
 81c6824:	c3                   	ret
 81c6825:	90                   	nop

```

```c
// DisPatcher_SelectCharac::process @ 0x81c6380

/* DisPatcher_SelectCharac::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_SelectCharac::process
          (DisPatcher_SelectCharac *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  GameWorld *pGVar7;
  CExchangeServerHitRate *pCVar8;
  long lVar9;
  long lVar10;
  CMonitorServerProxy *this_00;
  LimitNpcBuyItemInfoAll local_196 [10];
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  ParamBase *local_14;
  MSG_BASE *local_10;
  
  local_14 = param_3;
  uVar3 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_14 + 4) = uVar3;
  if (0 < *(int *)(local_14 + 4)) {
    return 0;
  }
  if (*(int *)(local_14 + 4) < 0) {
    uVar4 = CUser::get_acc_id(param_1);
    uVar3 = LineFunc(0x1587,
                     "virtual int DisPatcher_SelectCharac::process(CUser*, MSG_BASE&, ParamBase&)",
                     *(int *)(local_14 + 4),uVar4);
    return uVar3;
  }
  local_10 = param_2;
  CUserCharacInfo::resetSaveFlags((CUserCharacInfo *)param_1);
  iVar5 = CUser::GetCharacViewState(param_1,(int)(char)local_10[0xd]);
  if (iVar5 == 1) {
    CUser::SetValidLastLoginCharac(param_1,false);
    CUser::SetCharacViewState(param_1,(int)(char)local_10[0xd],0);
    CUser::SetLoadRentalInfoFromExchange(param_1,false);
  }
  else {
    iVar5 = CUser::get_charac_no(param_1,(int)(char)local_10[0xd]);
    iVar6 = CUser::GetLastLoginCharacNo(param_1);
    if (iVar5 == iVar6) {
      iVar5 = CUser::GetLastLoginCharacNo(param_1);
      if ((iVar5 == 0) || (iVar5 = CUser::GetLastLoginChannelNo(param_1), iVar5 == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        CUser::SetValidLastLoginCharac(param_1,true);
        CUser::SetLoadRentalInfoFromExchange(param_1,true);
      }
    }
  }
  pGVar7 = (GameWorld *)G_GameWorld();
  iVar5 = GameWorld::GetChannelType(pGVar7);
  if (iVar5 != 7) {
    pGVar7 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsIntegratedPvPBaseChannel(pGVar7);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_081c6534;
    }
  }
  bVar1 = true;
LAB_081c6534:
  if (bVar1) {
    CUser::SetValidLastLoginCharac(param_1,false);
  }
  cVar2 = CUser::IsValidLastLoginCharac(param_1);
  if (cVar2 == '\0') {
    pCVar8 = (CExchangeServerHitRate *)exchange_server::GetInstanceExchangeServerHitRate();
    exchange_server::CExchangeServerHitRate::IncrementDBLoadCount(pCVar8);
  }
  else {
    pCVar8 = (CExchangeServerHitRate *)exchange_server::GetInstanceExchangeServerHitRate();
    exchange_server::CExchangeServerHitRate::IncrementCacheLoadCount(pCVar8);
  }
  pGVar7 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsIntegratedPvPBaseChannel(pGVar7);
  if (cVar2 == '\x01') {
    *(undefined4 *)(local_10 + 0xe) = 0;
    local_10[0x12] = (MSG_BASE)0x0;
  }
  else {
    iVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8),
                       (int)(char)local_10[0xd]);
    *(undefined4 *)(local_10 + 0xe) = *(undefined4 *)(iVar5 + 0x14b8);
    iVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8),
                       (int)(char)local_10[0xd]);
    local_10[0x12] = *(MSG_BASE *)(iVar5 + 0x14b7);
  }
  RequestDBCharac(this,param_1,(MSG_CHARAC_SELECT *)local_10);
  RequestBlackCount(this,param_1,(MSG_CHARAC_SELECT *)local_10);
  RequestDBInventory(this,param_1,(MSG_CHARAC_SELECT *)local_10);
  RequestDBQuest(this,param_1,(MSG_CHARAC_SELECT *)local_10);
  RequestDBDungeonClear(this,param_1,(MSG_CHARAC_SELECT *)local_10);
  APSystem::CDBAndExchangeServerProc::RequestLoadActionPointFromDBAndES
            (param_1,(MSG_CHARAC_SELECT *)local_10);
  RequestDBKillMonsterInfo(this,param_1,(MSG_CHARAC_SELECT *)local_10);
  advancealtar::DBAndExchangeServerProc::requestLoadFromDBAndES
            (param_1,(MSG_CHARAC_SELECT *)local_10);
  RequestDBETC(this,param_1,(MSG_CHARAC_SELECT *)local_10);
  CUser::SetValidLastLoginCharac(param_1,false);
  CUser::SetLastLoginCharacNo(param_1,0);
  CUser::SetLastLoginChannelNo(param_1,0);
  uVar4 = CUser::get_charac_no(param_1,(int)(char)*(MSG_CHARAC_SELECT *)(local_10 + 0xd));
  iVar5 = CUser::GetUID(param_1);
  DB_GetDeathTowerBestRecord::makeRequest(iVar5,uVar4);
  lVar9 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  lVar10 = CUser::GetAccountLastPlayTime(param_1);
  iVar5 = G_CEnvironment();
  cVar2 = CheckDailyScheduleTime(*(int *)(iVar5 + 0x37c),lVar10,lVar9);
  if (cVar2 != '\0') {
    uVar4 = CUser::get_acc_id(param_1);
    iVar5 = CUser::GetUID(param_1);
    DB_GetUserRegdate::makeRequest(iVar5,uVar4);
  }
  LimitNpcBuyItemInfoAll::LimitNpcBuyItemInfoAll(local_196);
  local_18c = CUser::GetUID(param_1);
  local_188 = CUser::get_acc_id(param_1);
  local_184 = CUser::get_charac_no(param_1,(int)(char)*(MSG_CHARAC_SELECT *)(local_10 + 0xd));
  uVar3 = CUser::GetServerGroup(param_1);
  this_00 = (CMonitorServerProxy *)
            CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                      (GlobalData::s_monitor_proxy_mgr,uVar3);
  CMonitorServerProxy::SendTcpPacket(this_00,(char *)local_196,0x182);
  return 0;
}

```

---

## read

```asm
// === 081c632a DisPatcher_SelectCharac::read  [0x081c632a-0x81c637f] ===
 81c632a:	55                   	push   %ebp
 81c632b:	89 e5                	mov    %esp,%ebp
 81c632d:	83 ec 28             	sub    $0x28,%esp
 81c6330:	8b 45 10             	mov    0x10(%ebp),%eax
 81c6333:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c6336:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c6339:	83 c0 0d             	add    $0xd,%eax
 81c633c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c6340:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6343:	89 04 24             	mov    %eax,(%esp)
 81c6346:	e8 d7 6b 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81c634b:	83 f0 01             	xor    $0x1,%eax
 81c634e:	84 c0                	test   %al,%al
 81c6350:	74 26                	je     81c6378 <_ZN23DisPatcher_SelectCharac4readER9PacketBufR8MSG_BASE+0x4e>
 81c6352:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c6359:	00 
 81c635a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c6361:	00 
 81c6362:	c7 44 24 04 60 57 bd 	movl   $0x8bd5760,0x4(%esp)
 81c6369:	08 
 81c636a:	c7 04 24 6f 15 00 00 	movl   $0x156f,(%esp)
 81c6371:	e8 61 a5 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c6376:	eb 05                	jmp    81c637d <_ZN23DisPatcher_SelectCharac4readER9PacketBufR8MSG_BASE+0x53>
 81c6378:	b8 00 00 00 00       	mov    $0x0,%eax
 81c637d:	c9                   	leave
 81c637e:	c3                   	ret
 81c637f:	90                   	nop

```

```c
// DisPatcher_SelectCharac::read @ 0x81c632a

/* DisPatcher_SelectCharac::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_SelectCharac::read(DisPatcher_SelectCharac *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x156f,"virtual int DisPatcher_SelectCharac::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081c6826 DisPatcher_SelectCharac::send  [0x081c6826-0x81c686d] ===
 81c6826:	55                   	push   %ebp
 81c6827:	89 e5                	mov    %esp,%ebp
 81c6829:	83 ec 28             	sub    $0x28,%esp
 81c682c:	8b 45 10             	mov    0x10(%ebp),%eax
 81c682f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c6832:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c6835:	8b 40 04             	mov    0x4(%eax),%eax
 81c6838:	3d ff ff ff 7f       	cmp    $0x7fffffff,%eax
 81c683d:	74 2c                	je     81c686b <_ZN23DisPatcher_SelectCharac4sendEP5CUserR9ParamBase+0x45>
 81c683f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c6842:	8b 40 04             	mov    0x4(%eax),%eax
 81c6845:	85 c0                	test   %eax,%eax
 81c6847:	74 23                	je     81c686c <_ZN23DisPatcher_SelectCharac4sendEP5CUserR9ParamBase+0x46>
 81c6849:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c684c:	8b 40 04             	mov    0x4(%eax),%eax
 81c684f:	0f b6 c0             	movzbl %al,%eax
 81c6852:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c6856:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81c685d:	00 
 81c685e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c6861:	89 04 24             	mov    %eax,(%esp)
 81c6864:	e8 d9 56 4b 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81c6869:	eb 01                	jmp    81c686c <_ZN23DisPatcher_SelectCharac4sendEP5CUserR9ParamBase+0x46>
 81c686b:	90                   	nop
 81c686c:	c9                   	leave
 81c686d:	c3                   	ret

```

```c
// DisPatcher_SelectCharac::send @ 0x81c6826

/* DisPatcher_SelectCharac::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_SelectCharac::send(DisPatcher_SelectCharac *this,CUser *param_1,ParamBase *param_2)

{
  if ((*(int *)(param_2 + 4) != 0x7fffffff) && (*(int *)(param_2 + 4) != 0)) {
    CUser::SendCmdErrorPacket(param_1,4,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

