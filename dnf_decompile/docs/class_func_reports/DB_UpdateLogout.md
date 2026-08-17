# DB_UpdateLogout

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## DB_UpdateLogout

```asm
// === 084183d8 DB_UpdateLogout::DB_UpdateLogout  [0x084183d8-0x84183f3] ===
 84183d8:	55                   	push   %ebp
 84183d9:	89 e5                	mov    %esp,%ebp
 84183db:	83 ec 18             	sub    $0x18,%esp
 84183de:	8b 45 08             	mov    0x8(%ebp),%eax
 84183e1:	89 04 24             	mov    %eax,(%esp)
 84183e4:	e8 bd 53 03 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 84183e9:	8b 45 08             	mov    0x8(%ebp),%eax
 84183ec:	c7 00 a8 f9 c5 08    	movl   $0x8c5f9a8,(%eax)
 84183f2:	c9                   	leave
 84183f3:	c3                   	ret

```

```c
// DB_UpdateLogout::DB_UpdateLogout @ 0x84183d8

/* DB_UpdateLogout::DB_UpdateLogout() */

void __thiscall DB_UpdateLogout::DB_UpdateLogout(DB_UpdateLogout *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5f9a8;
  return;
}

```

---

## SendResult

```asm
// === 0841852e DB_UpdateLogout::SendResult  [0x0841852e-0x8418611] ===
 841852e:	55                   	push   %ebp
 841852f:	89 e5                	mov    %esp,%ebp
 8418531:	56                   	push   %esi
 8418532:	53                   	push   %ebx
 8418533:	83 ec 20             	sub    $0x20,%esp
 8418536:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 841853b:	c7 44 24 08 e2 48 00 	movl   $0x48e2,0x8(%esp)
 8418542:	00 
 8418543:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 841854a:	08 
 841854b:	89 04 24             	mov    %eax,(%esp)
 841854e:	e8 33 75 e7 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8418553:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 841855a:	00 
 841855b:	89 44 24 04          	mov    %eax,0x4(%esp)
 841855f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8418562:	89 04 24             	mov    %eax,(%esp)
 8418565:	e8 bc 06 cb ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 841856a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 841856d:	89 04 24             	mov    %eax,(%esp)
 8418570:	e8 d1 06 cb ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8418575:	8b 55 0c             	mov    0xc(%ebp),%edx
 8418578:	89 54 24 04          	mov    %edx,0x4(%esp)
 841857c:	89 04 24             	mov    %eax,(%esp)
 841857f:	e8 d2 06 cb ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8418584:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8418587:	89 04 24             	mov    %eax,(%esp)
 841858a:	e8 b7 06 cb ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 841858f:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8418596:	ff 
 8418597:	89 04 24             	mov    %eax,(%esp)
 841859a:	e8 b7 06 cb ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 841859f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84185a2:	89 04 24             	mov    %eax,(%esp)
 84185a5:	e8 a4 06 cb ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84185aa:	c7 44 24 08 8b 00 00 	movl   $0x8b,0x8(%esp)
 84185b1:	00 
 84185b2:	8b 55 14             	mov    0x14(%ebp),%edx
 84185b5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84185b9:	89 04 24             	mov    %eax,(%esp)
 84185bc:	e8 91 60 cc ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84185c1:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84185c6:	8d 55 f0             	lea    -0x10(%ebp),%edx
 84185c9:	89 54 24 08          	mov    %edx,0x8(%esp)
 84185cd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84185d4:	00 
 84185d5:	89 04 24             	mov    %eax,(%esp)
 84185d8:	e8 01 8a 15 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84185dd:	bb 01 00 00 00       	mov    $0x1,%ebx
 84185e2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84185e5:	89 04 24             	mov    %eax,(%esp)
 84185e8:	e8 e5 42 20 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84185ed:	89 d8                	mov    %ebx,%eax
 84185ef:	83 c4 20             	add    $0x20,%esp
 84185f2:	5b                   	pop    %ebx
 84185f3:	5e                   	pop    %esi
 84185f4:	5d                   	pop    %ebp
 84185f5:	c3                   	ret
 84185f6:	89 d3                	mov    %edx,%ebx
 84185f8:	89 c6                	mov    %eax,%esi
 84185fa:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84185fd:	89 04 24             	mov    %eax,(%esp)
 8418600:	e8 cd 42 20 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8418605:	89 f0                	mov    %esi,%eax
 8418607:	89 da                	mov    %ebx,%edx
 8418609:	89 04 24             	mov    %eax,(%esp)
 841860c:	e8 3f b1 6c 00       	call   8ae3750 <_Unwind_Resume>
 8418611:	90                   	nop

```

```c
// DB_UpdateLogout::SendResult @ 0x841852e

/* DB_UpdateLogout::SendResult(int, int, SIG_UPDATE_LOGOUT*) */

undefined4 __thiscall
DB_UpdateLogout::SendResult
          (DB_UpdateLogout *this,int param_1,int param_2,SIG_UPDATE_LOGOUT *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x48e2);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0841857f to 084185dc has its CatchHandler @ 084185f6 */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,param_3,0x8b);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}

```

---

## UpdateAccountMemberBonusFatigue

```asm
// === 08418442 DB_UpdateLogout::UpdateAccountMemberBonusFatigue  [0x08418442-0x841852d] ===
 8418442:	55                   	push   %ebp
 8418443:	89 e5                	mov    %esp,%ebp
 8418445:	53                   	push   %ebx
 8418446:	83 ec 34             	sub    $0x34,%esp
 8418449:	8b 45 10             	mov    0x10(%ebp),%eax
 841844c:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 8418450:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8418455:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841845c:	00 
 841845d:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8418464:	00 
 8418465:	89 04 24             	mov    %eax,(%esp)
 8418468:	e8 d1 cd fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841846d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8418470:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8418477:	00 
 8418478:	8b 45 0c             	mov    0xc(%ebp),%eax
 841847b:	89 04 24             	mov    %eax,(%esp)
 841847e:	e8 c8 0b cf ff       	call   810904b <_Z14NumberToStringji>
 8418483:	0f bf 55 e4          	movswl -0x1c(%ebp),%edx
 8418487:	89 44 24 0c          	mov    %eax,0xc(%esp)
 841848b:	89 54 24 08          	mov    %edx,0x8(%esp)
 841848f:	c7 44 24 04 24 9d c4 	movl   $0x8c49d24,0x4(%esp)
 8418496:	08 
 8418497:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841849a:	89 04 24             	mov    %eax,(%esp)
 841849d:	e8 1e bd fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84184a2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84184a9:	00 
 84184aa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84184ad:	89 04 24             	mov    %eax,(%esp)
 84184b0:	e8 71 be fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 84184b5:	83 f0 01             	xor    $0x1,%eax
 84184b8:	84 c0                	test   %al,%al
 84184ba:	75 11                	jne    84184cd <_ZN15DB_UpdateLogout31UpdateAccountMemberBonusFatigueEjs+0x8b>
 84184bc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84184bf:	89 04 24             	mov    %eax,(%esp)
 84184c2:	e8 49 be fd ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 84184c7:	09 d0                	or     %edx,%eax
 84184c9:	85 c0                	test   %eax,%eax
 84184cb:	75 07                	jne    84184d4 <_ZN15DB_UpdateLogout31UpdateAccountMemberBonusFatigueEjs+0x92>
 84184cd:	b8 01 00 00 00       	mov    $0x1,%eax
 84184d2:	eb 05                	jmp    84184d9 <_ZN15DB_UpdateLogout31UpdateAccountMemberBonusFatigueEjs+0x97>
 84184d4:	b8 00 00 00 00       	mov    $0x0,%eax
 84184d9:	84 c0                	test   %al,%al
 84184db:	74 4a                	je     8418527 <_ZN15DB_UpdateLogout31UpdateAccountMemberBonusFatigueEjs+0xe5>
 84184dd:	0f bf 5d e4          	movswl -0x1c(%ebp),%ebx
 84184e1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84184e8:	00 
 84184e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84184ec:	89 04 24             	mov    %eax,(%esp)
 84184ef:	e8 57 0b cf ff       	call   810904b <_Z14NumberToStringji>
 84184f4:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84184f8:	89 44 24 08          	mov    %eax,0x8(%esp)
 84184fc:	c7 44 24 04 64 9d c4 	movl   $0x8c49d64,0x4(%esp)
 8418503:	08 
 8418504:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8418507:	89 04 24             	mov    %eax,(%esp)
 841850a:	e8 b1 bc fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841850f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8418516:	00 
 8418517:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841851a:	89 04 24             	mov    %eax,(%esp)
 841851d:	e8 04 be fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8418522:	83 f0 01             	xor    $0x1,%eax
 8418525:	84 c0                	test   %al,%al
 8418527:	83 c4 34             	add    $0x34,%esp
 841852a:	5b                   	pop    %ebx
 841852b:	5d                   	pop    %ebp
 841852c:	c3                   	ret
 841852d:	90                   	nop

```

```c
// DB_UpdateLogout::UpdateAccountMemberBonusFatigue @ 0x8418442

/* DB_UpdateLogout::UpdateAccountMemberBonusFatigue(unsigned int, short) */

uint __thiscall
DB_UpdateLogout::UpdateAccountMemberBonusFatigue(DB_UpdateLogout *this,uint param_1,short param_2)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  uVar2 = NumberToString(param_1,0);
  MySQL::set_query(this_00,"upDate login_common set member_bonus_fatigue=%d where m_id=%s",
                   (int)param_2,uVar2);
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    lVar4 = MySQL::getAffectedRowCount(this_00);
    if (lVar4 != 0) {
      uVar3 = 0;
      goto LAB_084184d9;
    }
  }
  uVar3 = 1;
LAB_084184d9:
  if ((char)uVar3 != '\0') {
    uVar2 = NumberToString(param_1,0);
    MySQL::set_query(this_00,
                     "inSert into login_common(m_id,member_bonus_fatigue,update_time) values(%s,%d,unix_timestamp(now()))"
                     ,uVar2,(int)param_2);
    uVar3 = MySQL::exec(this_00,true);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}

```

---

## UpdateLogout

```asm
// === 08418a96 DB_UpdateLogout::UpdateLogout  [0x08418a96-0x8418b73] ===
 8418a96:	55                   	push   %ebp
 8418a97:	89 e5                	mov    %esp,%ebp
 8418a99:	83 ec 38             	sub    $0x38,%esp
 8418a9c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418a9f:	8b 00                	mov    (%eax),%eax
 8418aa1:	85 c0                	test   %eax,%eax
 8418aa3:	75 0a                	jne    8418aaf <_ZN15DB_UpdateLogout12UpdateLogoutEP17SIG_UPDATE_LOGOUT+0x19>
 8418aa5:	b8 01 00 00 00       	mov    $0x1,%eax
 8418aaa:	e9 c3 00 00 00       	jmp    8418b72 <_ZN15DB_UpdateLogout12UpdateLogoutEP17SIG_UPDATE_LOGOUT+0xdc>
 8418aaf:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8418ab6:	e8 ec 18 cc ff       	call   80da3a7 <_Z11G_GameWorldv>
 8418abb:	89 04 24             	mov    %eax,(%esp)
 8418abe:	e8 5b 88 cd ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 8418ac3:	84 c0                	test   %al,%al
 8418ac5:	74 0b                	je     8418ad2 <_ZN15DB_UpdateLogout12UpdateLogoutEP17SIG_UPDATE_LOGOUT+0x3c>
 8418ac7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418aca:	8b 40 0e             	mov    0xe(%eax),%eax
 8418acd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8418ad0:	eb 0e                	jmp    8418ae0 <_ZN15DB_UpdateLogout12UpdateLogoutEP17SIG_UPDATE_LOGOUT+0x4a>
 8418ad2:	e8 aa 36 cb ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8418ad7:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 8418add:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8418ae0:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8418ae5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8418aec:	00 
 8418aed:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8418af4:	00 
 8418af5:	89 04 24             	mov    %eax,(%esp)
 8418af8:	e8 41 c7 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8418afd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8418b00:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418b03:	8b 00                	mov    (%eax),%eax
 8418b05:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8418b0c:	00 
 8418b0d:	89 04 24             	mov    %eax,(%esp)
 8418b10:	e8 36 05 cf ff       	call   810904b <_Z14NumberToStringji>
 8418b15:	8b 55 0c             	mov    0xc(%ebp),%edx
 8418b18:	8b 4a 08             	mov    0x8(%edx),%ecx
 8418b1b:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8418b1e:	89 44 24 14          	mov    %eax,0x14(%esp)
 8418b22:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8418b29:	00 
 8418b2a:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8418b2e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8418b32:	c7 44 24 04 2c a1 c4 	movl   $0x8c4a12c,0x4(%esp)
 8418b39:	08 
 8418b3a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8418b3d:	89 04 24             	mov    %eax,(%esp)
 8418b40:	e8 7b b6 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8418b45:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8418b4c:	00 
 8418b4d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8418b50:	89 04 24             	mov    %eax,(%esp)
 8418b53:	e8 ce b7 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8418b58:	88 45 ef             	mov    %al,-0x11(%ebp)
 8418b5b:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8418b5f:	83 f0 01             	xor    $0x1,%eax
 8418b62:	84 c0                	test   %al,%al
 8418b64:	74 07                	je     8418b6d <_ZN15DB_UpdateLogout12UpdateLogoutEP17SIG_UPDATE_LOGOUT+0xd7>
 8418b66:	b8 00 00 00 00       	mov    $0x0,%eax
 8418b6b:	eb 05                	jmp    8418b72 <_ZN15DB_UpdateLogout12UpdateLogoutEP17SIG_UPDATE_LOGOUT+0xdc>
 8418b6d:	b8 01 00 00 00       	mov    $0x1,%eax
 8418b72:	c9                   	leave
 8418b73:	c3                   	ret

```

```c
// DB_UpdateLogout::UpdateLogout @ 0x8418a96

/* DB_UpdateLogout::UpdateLogout(SIG_UPDATE_LOGOUT*) */

undefined4 __thiscall
DB_UpdateLogout::UpdateLogout(DB_UpdateLogout *this,SIG_UPDATE_LOGOUT *param_1)

{
  char cVar1;
  undefined4 uVar2;
  GameWorld *this_00;
  int iVar3;
  MySQL *this_01;
  undefined4 local_14;
  
  if (*(int *)param_1 == 0) {
    uVar2 = 1;
  }
  else {
    this_00 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsIntegratedPvPBaseChannel(this_00);
    if (cVar1 == '\0') {
      iVar3 = G_CEnvironment();
      local_14 = *(undefined4 *)(iVar3 + 0x378);
    }
    else {
      local_14 = *(undefined4 *)(param_1 + 0xe);
    }
    this_01 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
    uVar2 = NumberToString(*(uint *)param_1,0);
    MySQL::set_query(this_01,
                     "upDate login_account_%d set m_channel_no=%d,login_status=%d,last_login_date=now() where m_id=%s"
                     ,local_14,*(undefined4 *)(param_1 + 8),0,uVar2);
    cVar1 = MySQL::exec(this_01,true);
    if (cVar1 == '\x01') {
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

## dispatch

```asm
// === 08418612 DB_UpdateLogout::dispatch  [0x08418612-0x8418a95] ===
 8418612:	55                   	push   %ebp
 8418613:	89 e5                	mov    %esp,%ebp
 8418615:	57                   	push   %edi
 8418616:	56                   	push   %esi
 8418617:	53                   	push   %ebx
 8418618:	81 ec ac 00 00 00    	sub    $0xac,%esp
 841861e:	8b 45 14             	mov    0x14(%ebp),%eax
 8418621:	89 04 24             	mov    %eax,(%esp)
 8418624:	e8 4f 88 03 00       	call   8450e78 <_ZN6Stream12GetOutBufferI17SIG_UPDATE_LOGOUTEEPT_v>
 8418629:	89 45 e0             	mov    %eax,-0x20(%ebp)
 841862c:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8418630:	75 0a                	jne    841863c <_ZN15DB_UpdateLogout8dispatchEiiP6Stream+0x2a>
 8418632:	b8 00 00 00 00       	mov    $0x0,%eax
 8418637:	e9 4f 04 00 00       	jmp    8418a8b <_ZN15DB_UpdateLogout8dispatchEiiP6Stream+0x479>
 841863c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841863f:	c7 40 0e 00 00 00 00 	movl   $0x0,0xe(%eax)
 8418646:	e8 5c 1d cc ff       	call   80da3a7 <_Z11G_GameWorldv>
 841864b:	89 04 24             	mov    %eax,(%esp)
 841864e:	e8 cb 8c cd ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 8418653:	84 c0                	test   %al,%al
 8418655:	74 1c                	je     8418673 <_ZN15DB_UpdateLogout8dispatchEiiP6Stream+0x61>
 8418657:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841865c:	8b 55 10             	mov    0x10(%ebp),%edx
 841865f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8418663:	89 04 24             	mov    %eax,(%esp)
 8418666:	e8 a5 c8 fd ff       	call   83f4f10 <_ZN5DBMgr13GetServerTypeEi>
 841866b:	8b 55 e0             	mov    -0x20(%ebp),%edx
 841866e:	89 42 0e             	mov    %eax,0xe(%edx)
 8418671:	eb 11                	jmp    8418684 <_ZN15DB_UpdateLogout8dispatchEiiP6Stream+0x72>
 8418673:	e8 09 3b cb ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8418678:	8b 90 78 03 00 00    	mov    0x378(%eax),%edx
 841867e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8418681:	89 50 0e             	mov    %edx,0xe(%eax)
 8418684:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8418689:	8b 55 10             	mov    0x10(%ebp),%edx
 841868c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8418690:	89 04 24             	mov    %eax,(%esp)
 8418693:	e8 a0 c9 fd ff       	call   83f5038 <_ZN5DBMgr16removeUserDBInfoEi>
 8418698:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841869b:	89 44 24 04          	mov    %eax,0x4(%esp)
 841869f:	8b 45 08             	mov    0x8(%ebp),%eax
 84186a2:	89 04 24             	mov    %eax,(%esp)
 84186a5:	e8 ec 03 00 00       	call   8418a96 <_ZN15DB_UpdateLogout12UpdateLogoutEP17SIG_UPDATE_LOGOUT>
 84186aa:	88 45 df             	mov    %al,-0x21(%ebp)
 84186ad:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 84186b1:	83 f0 01             	xor    $0x1,%eax
 84186b4:	84 c0                	test   %al,%al
 84186b6:	74 4f                	je     8418707 <_ZN15DB_UpdateLogout8dispatchEiiP6Stream+0xf5>
 84186b8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84186bb:	8b 00                	mov    (%eax),%eax
 84186bd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84186c4:	00 
 84186c5:	89 04 24             	mov    %eax,(%esp)
 84186c8:	e8 7e 09 cf ff       	call   810904b <_Z14NumberToStringji>
 84186cd:	89 44 24 14          	mov    %eax,0x14(%esp)
 84186d1:	c7 44 24 10 c8 9d c4 	movl   $0x8c49dc8,0x10(%esp)
 84186d8:	08 
 84186d9:	c7 44 24 0c 39 49 00 	movl   $0x4939,0xc(%esp)
 84186e0:	00 
 84186e1:	c7 44 24 08 e0 cc c5 	movl   $0x8c5cce0,0x8(%esp)
 84186e8:	08 
 84186e9:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84186f0:	08 
 84186f1:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84186f8:	e8 0d b5 6b 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84186fd:	b8 00 00 00 00       	mov    $0x0,%eax
 8418702:	e9 84 03 00 00       	jmp    8418a8b <_ZN15DB_UpdateLogout8dispatchEiiP6Stream+0x479>
 8418707:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841870a:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 841870e:	84 c0                	test   %al,%al
 8418710:	0f 84 22 03 00 00    	je     8418a38 <_ZN15DB_UpdateLogout8dispatchEiiP6Stream+0x426>
 8418716:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841871b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8418722:	00 
 8418723:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 841872a:	00 
 841872b:	89 04 24             	mov    %eax,(%esp)
 841872e:	e8 0b cb fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8418733:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8418736:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8418739:	0f b6 40 22          	movzbl 0x22(%eax),%eax
 841873d:	84 c0                	test   %al,%al
 841873f:	0f 84 de 00 00 00    	je     8418823 <_ZN15DB_UpdateLogout8dispatchEiiP6Stream+0x211>
 8418745:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8418748:	8b 00                	mov    (%eax),%eax
 841874a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8418751:	00 
 8418752:	89 04 24             	mov    %eax,(%esp)
 8418755:	e8 f1 08 cf ff       	call   810904b <_Z14NumberToStringji>
 841875a:	89 c7                	mov    %eax,%edi
 841875c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841875f:	8b 40 0e             	mov    0xe(%eax),%eax
 8418762:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8418765:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8418768:	83 c0 47             	add    $0x47,%eax
 841876b:	89 45 90             	mov    %eax,-0x70(%ebp)
 841876e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8418771:	83 c0 43             	add    $0x43,%eax
 8418774:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8418777:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841877a:	0f b6 40 22          	movzbl 0x22(%eax),%eax
 841877e:	0f b6 c0             	movzbl %al,%eax
 8418781:	89 45 98             	mov    %eax,-0x68(%ebp)
 8418784:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8418787:	8b 40 23             	mov    0x23(%eax),%eax
 841878a:	89 45 9c             	mov    %eax,-0x64(%ebp)
 841878d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8418790:	83 c0 37             	add    $0x37,%eax
 8418793:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8418796:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8418799:	0f b6 40 21          	movzbl 0x21(%eax),%eax
 841879d:	84 c0                	test   %al,%al
 841879f:	74 07                	je     84187a8 <_ZN15DB_UpdateLogout8dispatchEiiP6Stream+0x196>
 84187a1:	bb 00 00 00 00       	mov    $0x0,%ebx
 84187a6:	eb 05                	jmp    84187ad <_ZN15DB_UpdateLogout8dispatchEiiP6Stream+0x19b>
 84187a8:	bb 01 00 00 00       	mov    $0x1,%ebx
 84187ad:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84187b0:	0f b7 40 1f          	movzwl 0x1f(%eax),%eax
 84187b4:	0f b7 f0             	movzwl %ax,%esi
 84187b7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84187ba:	8b 48 1b             	mov    0x1b(%eax),%ecx
 84187bd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84187c0:	8b 50 17             	mov    0x17(%eax),%edx
 84187c3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84187c6:	8b 40 13             	mov    0x13(%eax),%eax
 84187c9:	89 7c 24 34          	mov    %edi,0x34(%esp)
 84187cd:	8b 7d 8c             	mov    -0x74(%ebp),%edi
 84187d0:	89 7c 24 30          	mov    %edi,0x30(%esp)
 84187d4:	8b 7d 90             	mov    -0x70(%ebp),%edi
 84187d7:	89 7c 24 2c          	mov    %edi,0x2c(%esp)
 84187db:	8b 7d 94             	mov    -0x6c(%ebp),%edi
 84187de:	89 7c 24 28          	mov    %edi,0x28(%esp)
 84187e2:	8b 7d 98             	mov    -0x68(%ebp),%edi
 84187e5:	89 7c 24 24          	mov    %edi,0x24(%esp)
 84187e9:	8b 7d 9c             	mov    -0x64(%ebp),%edi
 84187ec:	89 7c 24 20          	mov    %edi,0x20(%esp)
 84187f0:	8b 7d a0             	mov    -0x60(%ebp),%edi
 84187f3:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 84187f7:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84187fb:	89 74 24 14          	mov    %esi,0x14(%esp)
 84187ff:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8418803:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8418807:	89 44 24 08          	mov    %eax,0x8(%esp)
 841880b:	c7 44 24 04 e8 9d c4 	movl   $0x8c49de8,0x4(%esp)
 8418812:	08 
 8418813:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8418816:	89 04 24             	mov    %eax,(%esp)
 8418819:	e8 a2 b9 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841881e:	e9 c5 00 00 00       	jmp    84188e8 <_ZN15DB_UpdateLogout8dispatchEiiP6Stream+0x2d6>
 8418823:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8418826:	8b 00                	mov    (%eax),%eax
 8418828:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841882f:	00 
 8418830:	89 04 24             	mov    %eax,(%esp)
 8418833:	e8 13 08 cf ff       	call   810904b <_Z14NumberToStringji>
 8418838:	89 c7                	mov    %eax,%edi
 841883a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841883d:	8b 40 0e             	mov    0xe(%eax),%eax
 8418840:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8418843:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8418846:	83 c0 47             	add    $0x47,%eax
 8418849:	89 45 a8             	mov    %eax,-0x58(%ebp)
 841884c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841884f:	83 c0 43             	add    $0x43,%eax
 8418852:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8418855:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8418858:	8b 40 23             	mov    0x23(%eax),%eax
 841885b:	89 45 b0             	mov    %eax,-0x50(%ebp)
 841885e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8418861:	83 c0 37             	add    $0x37,%eax
 8418864:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8418867:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841886a:	0f b6 40 21          	movzbl 0x21(%eax),%eax
 841886e:	84 c0                	test   %al,%al
 8418870:	74 07                	je     8418879 <_ZN15DB_UpdateLogout8dispatchEiiP6Stream+0x267>
 8418872:	bb 00 00 00 00       	mov    $0x0,%ebx
 8418877:	eb 05                	jmp    841887e <_ZN15DB_UpdateLogout8dispatchEiiP6Stream+0x26c>
 8418879:	bb 01 00 00 00       	mov    $0x1,%ebx
 841887e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8418881:	0f b7 40 1f          	movzwl 0x1f(%eax),%eax
 8418885:	0f b7 f0             	movzwl %ax,%esi
 8418888:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841888b:	8b 48 1b             	mov    0x1b(%eax),%ecx
 841888e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8418891:	8b 50 17             	mov    0x17(%eax),%edx
 8418894:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8418897:	8b 40 13             	mov    0x13(%eax),%eax
 841889a:	89 7c 24 30          	mov    %edi,0x30(%esp)
 841889e:	8b 7d a4             	mov    -0x5c(%ebp),%edi
 84188a1:	89 7c 24 2c          	mov    %edi,0x2c(%esp)
 84188a5:	8b 7d a8             	mov    -0x58(%ebp),%edi
 84188a8:	89 7c 24 28          	mov    %edi,0x28(%esp)
 84188ac:	8b 7d ac             	mov    -0x54(%ebp),%edi
 84188af:	89 7c 24 24          	mov    %edi,0x24(%esp)
 84188b3:	8b 7d b0             	mov    -0x50(%ebp),%edi
 84188b6:	89 7c 24 20          	mov    %edi,0x20(%esp)
 84188ba:	8b 7d b4             	mov    -0x4c(%ebp),%edi
 84188bd:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 84188c1:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84188c5:	89 74 24 14          	mov    %esi,0x14(%esp)
 84188c9:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84188cd:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84188d1:	89 44 24 08          	mov    %eax,0x8(%esp)
 84188d5:	c7 44 24 04 18 9f c4 	movl   $0x8c49f18,0x4(%esp)
 84188dc:	08 
 84188dd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84188e0:	89 04 24             	mov    %eax,(%esp)
 84188e3:	e8 d8 b8 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84188e8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84188eb:	8b 00                	mov    (%eax),%eax
 84188ed:	85 c0                	test   %eax,%eax
 84188ef:	0f 84 43 01 00 00    	je     8418a38 <_ZN15DB_UpdateLogout8dispatchEiiP6Stream+0x426>
 84188f5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84188fc:	00 
 84188fd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8418900:	89 04 24             	mov    %eax,(%esp)
 8418903:	e8 1e ba fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8418908:	83 f0 01             	xor    $0x1,%eax
 841890b:	84 c0                	test   %al,%al
 841890d:	75 11                	jne    8418920 <_ZN15DB_UpdateLogout8dispatchEiiP6Stream+0x30e>
 841890f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8418912:	89 04 24             	mov    %eax,(%esp)
 8418915:	e8 f6 b9 fd ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 841891a:	09 d0                	or     %edx,%eax
 841891c:	85 c0                	test   %eax,%eax
 841891e:	75 07                	jne    8418927 <_ZN15DB_UpdateLogout8dispatchEiiP6Stream+0x315>
 8418920:	b8 01 00 00 00       	mov    $0x1,%eax
 8418925:	eb 05                	jmp    841892c <_ZN15DB_UpdateLogout8dispatchEiiP6Stream+0x31a>
 8418927:	b8 00 00 00 00       	mov    $0x0,%eax
 841892c:	84 c0                	test   %al,%al
 841892e:	0f 84 04 01 00 00    	je     8418a38 <_ZN15DB_UpdateLogout8dispatchEiiP6Stream+0x426>
 8418934:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8418937:	8b 40 0e             	mov    0xe(%eax),%eax
 841893a:	89 45 b8             	mov    %eax,-0x48(%ebp)
 841893d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8418940:	83 c0 47             	add    $0x47,%eax
 8418943:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8418946:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8418949:	83 c0 43             	add    $0x43,%eax
 841894c:	89 45 c0             	mov    %eax,-0x40(%ebp)
 841894f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8418952:	0f b6 40 22          	movzbl 0x22(%eax),%eax
 8418956:	0f b6 c0             	movzbl %al,%eax
 8418959:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 841895c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841895f:	8b 40 23             	mov    0x23(%eax),%eax
 8418962:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8418965:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8418968:	83 c0 37             	add    $0x37,%eax
 841896b:	89 45 cc             	mov    %eax,-0x34(%ebp)
 841896e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8418971:	0f b6 40 21          	movzbl 0x21(%eax),%eax
 8418975:	84 c0                	test   %al,%al
 8418977:	74 07                	je     8418980 <_ZN15DB_UpdateLogout8dispatchEiiP6Stream+0x36e>
 8418979:	bf 00 00 00 00       	mov    $0x0,%edi
 841897e:	eb 05                	jmp    8418985 <_ZN15DB_UpdateLogout8dispatchEiiP6Stream+0x373>
 8418980:	bf 01 00 00 00       	mov    $0x1,%edi
 8418985:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8418988:	0f b7 40 1f          	movzwl 0x1f(%eax),%eax
 841898c:	0f b7 c0             	movzwl %ax,%eax
 841898f:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8418992:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8418995:	8b 40 1b             	mov    0x1b(%eax),%eax
 8418998:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 841899b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841899e:	8b 70 17             	mov    0x17(%eax),%esi
 84189a1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84189a4:	8b 58 13             	mov    0x13(%eax),%ebx
 84189a7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84189aa:	8b 00                	mov    (%eax),%eax
 84189ac:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84189b3:	00 
 84189b4:	89 04 24             	mov    %eax,(%esp)
 84189b7:	e8 8f 06 cf ff       	call   810904b <_Z14NumberToStringji>
 84189bc:	8b 55 b8             	mov    -0x48(%ebp),%edx
 84189bf:	89 54 24 34          	mov    %edx,0x34(%esp)
 84189c3:	8b 55 bc             	mov    -0x44(%ebp),%edx
 84189c6:	89 54 24 30          	mov    %edx,0x30(%esp)
 84189ca:	8b 55 c0             	mov    -0x40(%ebp),%edx
 84189cd:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 84189d1:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 84189d4:	89 54 24 28          	mov    %edx,0x28(%esp)
 84189d8:	8b 55 c8             	mov    -0x38(%ebp),%edx
 84189db:	89 54 24 24          	mov    %edx,0x24(%esp)
 84189df:	8b 55 cc             	mov    -0x34(%ebp),%edx
 84189e2:	89 54 24 20          	mov    %edx,0x20(%esp)
 84189e6:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 84189ea:	8b 7d d0             	mov    -0x30(%ebp),%edi
 84189ed:	89 7c 24 18          	mov    %edi,0x18(%esp)
 84189f1:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 84189f4:	89 54 24 14          	mov    %edx,0x14(%esp)
 84189f8:	89 74 24 10          	mov    %esi,0x10(%esp)
 84189fc:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8418a00:	89 44 24 08          	mov    %eax,0x8(%esp)
 8418a04:	c7 44 24 04 38 a0 c4 	movl   $0x8c4a038,0x4(%esp)
 8418a0b:	08 
 8418a0c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8418a0f:	89 04 24             	mov    %eax,(%esp)
 8418a12:	e8 a9 b7 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8418a17:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8418a1e:	00 
 8418a1f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8418a22:	89 04 24             	mov    %eax,(%esp)
 8418a25:	e8 fc b8 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8418a2a:	83 f0 01             	xor    $0x1,%eax
 8418a2d:	84 c0                	test   %al,%al
 8418a2f:	74 07                	je     8418a38 <_ZN15DB_UpdateLogout8dispatchEiiP6Stream+0x426>
 8418a31:	b8 00 00 00 00       	mov    $0x0,%eax
 8418a36:	eb 53                	jmp    8418a8b <_ZN15DB_UpdateLogout8dispatchEiiP6Stream+0x479>
 8418a38:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8418a3b:	0f b6 80 88 00 00 00 	movzbl 0x88(%eax),%eax
 8418a42:	84 c0                	test   %al,%al
 8418a44:	74 25                	je     8418a6b <_ZN15DB_UpdateLogout8dispatchEiiP6Stream+0x459>
 8418a46:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8418a49:	0f b7 80 89 00 00 00 	movzwl 0x89(%eax),%eax
 8418a50:	0f bf d0             	movswl %ax,%edx
 8418a53:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8418a56:	8b 00                	mov    (%eax),%eax
 8418a58:	89 54 24 08          	mov    %edx,0x8(%esp)
 8418a5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8418a60:	8b 45 08             	mov    0x8(%ebp),%eax
 8418a63:	89 04 24             	mov    %eax,(%esp)
 8418a66:	e8 d7 f9 ff ff       	call   8418442 <_ZN15DB_UpdateLogout31UpdateAccountMemberBonusFatigueEjs>
 8418a6b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8418a6e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8418a72:	8b 45 10             	mov    0x10(%ebp),%eax
 8418a75:	89 44 24 08          	mov    %eax,0x8(%esp)
 8418a79:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418a7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8418a80:	8b 45 08             	mov    0x8(%ebp),%eax
 8418a83:	89 04 24             	mov    %eax,(%esp)
 8418a86:	e8 a3 fa ff ff       	call   841852e <_ZN15DB_UpdateLogout10SendResultEiiP17SIG_UPDATE_LOGOUT>
 8418a8b:	81 c4 ac 00 00 00    	add    $0xac,%esp
 8418a91:	5b                   	pop    %ebx
 8418a92:	5e                   	pop    %esi
 8418a93:	5f                   	pop    %edi
 8418a94:	5d                   	pop    %ebp
 8418a95:	c3                   	ret

```

```c
// DB_UpdateLogout::dispatch @ 0x8418612

/* DB_UpdateLogout::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_UpdateLogout::dispatch(DB_UpdateLogout *this,int param_1,int param_2,Stream *param_3)

{
  SIG_UPDATE_LOGOUT SVar1;
  SIG_UPDATE_LOGOUT SVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  char cVar9;
  SIG_UPDATE_LOGOUT *pSVar10;
  undefined4 uVar11;
  GameWorld *this_00;
  int iVar12;
  MySQL *this_01;
  undefined4 uVar13;
  longlong lVar14;
  
  pSVar10 = Stream::GetOutBuffer<SIG_UPDATE_LOGOUT>(param_3);
  if (pSVar10 == (SIG_UPDATE_LOGOUT *)0x0) {
    uVar11 = 0;
  }
  else {
    *(undefined4 *)(pSVar10 + 0xe) = 0;
    this_00 = (GameWorld *)G_GameWorld();
    cVar9 = GameWorld::IsIntegratedPvPBaseChannel(this_00);
    if (cVar9 == '\0') {
      iVar12 = G_CEnvironment();
      *(undefined4 *)(pSVar10 + 0xe) = *(undefined4 *)(iVar12 + 0x378);
    }
    else {
      uVar11 = DBMgr::GetServerType((int)GlobalData::s_db_mgr);
      *(undefined4 *)(pSVar10 + 0xe) = uVar11;
    }
    DBMgr::removeUserDBInfo((int)GlobalData::s_db_mgr);
    cVar9 = UpdateLogout(this,pSVar10);
    if (cVar9 == '\x01') {
      if (pSVar10[0x12] != (SIG_UPDATE_LOGOUT)0x0) {
        this_01 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
        if (pSVar10[0x22] == (SIG_UPDATE_LOGOUT)0x0) {
          uVar11 = NumberToString(*(uint *)pSVar10,0);
          MySQL::set_query(this_01,
                           "upDate member_play_info set play_time=play_time+%d,play_count=play_count+1,trade_cnt=trade_cnt+%d, exp=exp+%u, used_fatigue=used_fatigue+%u, ting_count=ting_count+%d, ip=\'%s\', last_play_time=%u, end_ip=\'%s\', mac_addr=\'%s\', server_id = %d where occ_date=cast(now() as date) and m_id=%s"
                           ,*(undefined4 *)(pSVar10 + 0x13),*(undefined4 *)(pSVar10 + 0x17),
                           *(undefined4 *)(pSVar10 + 0x1b),(uint)*(ushort *)(pSVar10 + 0x1f),
                           (uint)(pSVar10[0x21] == (SIG_UPDATE_LOGOUT)0x0),pSVar10 + 0x37,
                           *(undefined4 *)(pSVar10 + 0x23),pSVar10 + 0x43,pSVar10 + 0x47,
                           *(undefined4 *)(pSVar10 + 0xe),uVar11);
        }
        else {
          uVar11 = NumberToString(*(uint *)pSVar10,0);
          MySQL::set_query(this_01,
                           "upDate member_play_info set play_time=play_time+%d,play_count=play_count+1,trade_cnt=trade_cnt+%d, exp=exp+%u, used_fatigue=used_fatigue+%u, ting_count=ting_count+%d, ip=\'%s\', last_play_time=%u, pcbang_flag=%d, end_ip=\'%s\', mac_addr=\'%s\', server_id = %d where occ_date=cast(now() as date) and m_id=%s"
                           ,*(undefined4 *)(pSVar10 + 0x13),*(undefined4 *)(pSVar10 + 0x17),
                           *(undefined4 *)(pSVar10 + 0x1b),(uint)*(ushort *)(pSVar10 + 0x1f),
                           (uint)(pSVar10[0x21] == (SIG_UPDATE_LOGOUT)0x0),pSVar10 + 0x37,
                           *(undefined4 *)(pSVar10 + 0x23),(uint)(byte)pSVar10[0x22],pSVar10 + 0x43,
                           pSVar10 + 0x47,*(undefined4 *)(pSVar10 + 0xe),uVar11);
        }
        if (*(int *)pSVar10 != 0) {
          cVar9 = MySQL::exec(this_01,true);
          if ((cVar9 == '\x01') && (lVar14 = MySQL::getAffectedRowCount(this_01), lVar14 != 0)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (bVar8) {
            uVar11 = *(undefined4 *)(pSVar10 + 0xe);
            SVar1 = pSVar10[0x22];
            uVar4 = *(undefined4 *)(pSVar10 + 0x23);
            SVar2 = pSVar10[0x21];
            uVar3 = *(ushort *)(pSVar10 + 0x1f);
            uVar5 = *(undefined4 *)(pSVar10 + 0x1b);
            uVar6 = *(undefined4 *)(pSVar10 + 0x17);
            uVar7 = *(undefined4 *)(pSVar10 + 0x13);
            uVar13 = NumberToString(*(uint *)pSVar10,0);
            MySQL::set_query(this_01,
                             "inSert into member_play_info(occ_date,m_id,play_time,play_count,trade_cnt,exp,used_fatigue,ting_count, ip, last_play_time, pcbang_flag, end_ip, mac_addr, server_id) values(cast(now() as date),%s,%d,1,%d,%u,%u,%d,\'%s\', %u, %d, \'%s\', \'%s\',%d)"
                             ,uVar13,uVar7,uVar6,uVar5,(uint)uVar3,
                             (uint)(SVar2 == (SIG_UPDATE_LOGOUT)0x0),pSVar10 + 0x37,uVar4,
                             (uint)(byte)SVar1,pSVar10 + 0x43,pSVar10 + 0x47,uVar11);
            cVar9 = MySQL::exec(this_01,true);
            if (cVar9 != '\x01') {
              return 0;
            }
          }
        }
      }
      if (pSVar10[0x88] != (SIG_UPDATE_LOGOUT)0x0) {
        UpdateAccountMemberBonusFatigue(this,*(uint *)pSVar10,*(short *)(pSVar10 + 0x89));
      }
      uVar11 = SendResult(this,param_1,param_2,pSVar10);
    }
    else {
      uVar11 = NumberToString(*(uint *)pSVar10,0);
      LogManager::logFormat
                (1,"DBThread.cpp","virtual bool DB_UpdateLogout::dispatch(int, int, Stream*)",0x4939
                 ,"UpdateLogout() fail - m_id[%s]\n",uVar11);
      uVar11 = 0;
    }
  }
  return uVar11;
}

```

---

## ~DB_UpdateLogout

```asm
// === 084183f4 DB_UpdateLogout::~DB_UpdateLogout  [0x084183f4-0x8418423] ===
 84183f4:	55                   	push   %ebp
 84183f5:	89 e5                	mov    %esp,%ebp
 84183f7:	83 ec 18             	sub    $0x18,%esp
 84183fa:	8b 45 08             	mov    0x8(%ebp),%eax
 84183fd:	c7 00 a8 f9 c5 08    	movl   $0x8c5f9a8,(%eax)
 8418403:	8b 45 08             	mov    0x8(%ebp),%eax
 8418406:	89 04 24             	mov    %eax,(%esp)
 8418409:	e8 6a 9f cc ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 841840e:	b8 00 00 00 00       	mov    $0x0,%eax
 8418413:	84 c0                	test   %al,%al
 8418415:	74 0b                	je     8418422 <_ZN15DB_UpdateLogoutD1Ev+0x2e>
 8418417:	8b 45 08             	mov    0x8(%ebp),%eax
 841841a:	89 04 24             	mov    %eax,(%esp)
 841841d:	e8 ce c0 30 00       	call   87244f0 <_ZdlPv>
 8418422:	c9                   	leave
 8418423:	c3                   	ret

```

```c
// DB_UpdateLogout::~DB_UpdateLogout @ 0x84183f4

/* WARNING: Removing unreachable block (ram,0x08418417) */
/* DB_UpdateLogout::~DB_UpdateLogout() */

void __thiscall DB_UpdateLogout::~DB_UpdateLogout(DB_UpdateLogout *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5f9a8;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}

```

---

## ~DB_UpdateLogout_08418424

```asm
// === 08418424 DB_UpdateLogout::~DB_UpdateLogout  [0x08418424-0x8418441] ===
 8418424:	55                   	push   %ebp
 8418425:	89 e5                	mov    %esp,%ebp
 8418427:	83 ec 18             	sub    $0x18,%esp
 841842a:	8b 45 08             	mov    0x8(%ebp),%eax
 841842d:	89 04 24             	mov    %eax,(%esp)
 8418430:	e8 bf ff ff ff       	call   84183f4 <_ZN15DB_UpdateLogoutD1Ev>
 8418435:	8b 45 08             	mov    0x8(%ebp),%eax
 8418438:	89 04 24             	mov    %eax,(%esp)
 841843b:	e8 b0 c0 30 00       	call   87244f0 <_ZdlPv>
 8418440:	c9                   	leave
 8418441:	c3                   	ret

```

```c
// DB_UpdateLogout::~DB_UpdateLogout @ 0x8418424

/* DB_UpdateLogout::~DB_UpdateLogout() */

void __thiscall DB_UpdateLogout::~DB_UpdateLogout(DB_UpdateLogout *this)

{
  ~DB_UpdateLogout(this);
  operator_delete(this);
  return;
}

```

