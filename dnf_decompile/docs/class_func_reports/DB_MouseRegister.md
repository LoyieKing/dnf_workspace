# DB_MouseRegister

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## _getDBHandleForDevideAccountDB

```asm
// === 08422938 DB_MouseRegister::_getDBHandleForDevideAccountDB  [0x08422938-0x8422963] ===
 8422938:	55                   	push   %ebp
 8422939:	89 e5                	mov    %esp,%ebp
 842293b:	83 ec 28             	sub    $0x28,%esp
 842293e:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8422943:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842294a:	00 
 842294b:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8422952:	00 
 8422953:	89 04 24             	mov    %eax,(%esp)
 8422956:	e8 e3 28 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842295b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842295e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8422961:	c9                   	leave
 8422962:	c3                   	ret
 8422963:	90                   	nop

```

```c
// DB_MouseRegister::_getDBHandleForDevideAccountDB @ 0x8422938

/* DB_MouseRegister::_getDBHandleForDevideAccountDB() */

undefined4 DB_MouseRegister::_getDBHandleForDevideAccountDB(void)

{
  undefined4 uVar1;
  
  uVar1 = DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  return uVar1;
}

```

---

## _modifyPassword

```asm
// === 08423528 DB_MouseRegister::_modifyPassword  [0x08423528-0x8423793] ===
 8423528:	55                   	push   %ebp
 8423529:	89 e5                	mov    %esp,%ebp
 842352b:	56                   	push   %esi
 842352c:	53                   	push   %ebx
 842352d:	83 ec 40             	sub    $0x40,%esp
 8423530:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8423533:	88 45 d4             	mov    %al,-0x2c(%ebp)
 8423536:	e8 fd f3 ff ff       	call   8422938 <_ZN16DB_MouseRegister30_getDBHandleForDevideAccountDBEv>
 842353b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 842353e:	8b 45 14             	mov    0x14(%ebp),%eax
 8423541:	89 44 24 08          	mov    %eax,0x8(%esp)
 8423545:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 842354c:	00 
 842354d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8423550:	89 04 24             	mov    %eax,(%esp)
 8423553:	e8 bc 03 00 00       	call   8423914 <_ZN16DB_MouseRegister14_updateHistoryEjiPc>
 8423558:	83 f0 01             	xor    $0x1,%eax
 842355b:	84 c0                	test   %al,%al
 842355d:	74 0a                	je     8423569 <_ZN16DB_MouseRegister15_modifyPasswordEjPKcPcib+0x41>
 842355f:	b8 15 00 00 00       	mov    $0x15,%eax
 8423564:	e9 24 02 00 00       	jmp    842378d <_ZN16DB_MouseRegister15_modifyPasswordEjPKcPcib+0x265>
 8423569:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8423570:	00 
 8423571:	8b 45 0c             	mov    0xc(%ebp),%eax
 8423574:	89 04 24             	mov    %eax,(%esp)
 8423577:	e8 cf 5a ce ff       	call   810904b <_Z14NumberToStringji>
 842357c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8423580:	8b 45 10             	mov    0x10(%ebp),%eax
 8423583:	89 44 24 08          	mov    %eax,0x8(%esp)
 8423587:	c7 44 24 04 d8 d8 c4 	movl   $0x8c4d8d8,0x4(%esp)
 842358e:	08 
 842358f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8423592:	89 04 24             	mov    %eax,(%esp)
 8423595:	e8 26 0c fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842359a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84235a1:	00 
 84235a2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84235a5:	89 04 24             	mov    %eax,(%esp)
 84235a8:	e8 79 0d fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 84235ad:	83 f0 01             	xor    $0x1,%eax
 84235b0:	84 c0                	test   %al,%al
 84235b2:	75 11                	jne    84235c5 <_ZN16DB_MouseRegister15_modifyPasswordEjPKcPcib+0x9d>
 84235b4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84235b7:	89 04 24             	mov    %eax,(%esp)
 84235ba:	e8 51 0d fd ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 84235bf:	09 d0                	or     %edx,%eax
 84235c1:	85 c0                	test   %eax,%eax
 84235c3:	75 07                	jne    84235cc <_ZN16DB_MouseRegister15_modifyPasswordEjPKcPcib+0xa4>
 84235c5:	b8 01 00 00 00       	mov    $0x1,%eax
 84235ca:	eb 05                	jmp    84235d1 <_ZN16DB_MouseRegister15_modifyPasswordEjPKcPcib+0xa9>
 84235cc:	b8 00 00 00 00       	mov    $0x0,%eax
 84235d1:	84 c0                	test   %al,%al
 84235d3:	74 0a                	je     84235df <_ZN16DB_MouseRegister15_modifyPasswordEjPKcPcib+0xb7>
 84235d5:	b8 15 00 00 00       	mov    $0x15,%eax
 84235da:	e9 ae 01 00 00       	jmp    842378d <_ZN16DB_MouseRegister15_modifyPasswordEjPKcPcib+0x265>
 84235df:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84235e4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84235eb:	00 
 84235ec:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84235f3:	00 
 84235f4:	89 04 24             	mov    %eax,(%esp)
 84235f7:	e8 42 1c fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84235fc:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84235ff:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8423606:	00 
 8423607:	8b 45 0c             	mov    0xc(%ebp),%eax
 842360a:	89 04 24             	mov    %eax,(%esp)
 842360d:	e8 39 5a ce ff       	call   810904b <_Z14NumberToStringji>
 8423612:	89 44 24 08          	mov    %eax,0x8(%esp)
 8423616:	c7 44 24 04 44 d8 c4 	movl   $0x8c4d844,0x4(%esp)
 842361d:	08 
 842361e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8423621:	89 04 24             	mov    %eax,(%esp)
 8423624:	e8 97 0b fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8423629:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8423630:	00 
 8423631:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8423634:	89 04 24             	mov    %eax,(%esp)
 8423637:	e8 ea 0c fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 842363c:	83 f0 01             	xor    $0x1,%eax
 842363f:	84 c0                	test   %al,%al
 8423641:	75 11                	jne    8423654 <_ZN16DB_MouseRegister15_modifyPasswordEjPKcPcib+0x12c>
 8423643:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8423646:	89 04 24             	mov    %eax,(%esp)
 8423649:	e8 c2 0c fd ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 842364e:	09 d0                	or     %edx,%eax
 8423650:	85 c0                	test   %eax,%eax
 8423652:	75 07                	jne    842365b <_ZN16DB_MouseRegister15_modifyPasswordEjPKcPcib+0x133>
 8423654:	b8 01 00 00 00       	mov    $0x1,%eax
 8423659:	eb 05                	jmp    8423660 <_ZN16DB_MouseRegister15_modifyPasswordEjPKcPcib+0x138>
 842365b:	b8 00 00 00 00       	mov    $0x0,%eax
 8423660:	84 c0                	test   %al,%al
 8423662:	74 4e                	je     84236b2 <_ZN16DB_MouseRegister15_modifyPasswordEjPKcPcib+0x18a>
 8423664:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842366b:	00 
 842366c:	8b 45 0c             	mov    0xc(%ebp),%eax
 842366f:	89 04 24             	mov    %eax,(%esp)
 8423672:	e8 d4 59 ce ff       	call   810904b <_Z14NumberToStringji>
 8423677:	89 44 24 08          	mov    %eax,0x8(%esp)
 842367b:	c7 44 24 04 8c d8 c4 	movl   $0x8c4d88c,0x4(%esp)
 8423682:	08 
 8423683:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8423686:	89 04 24             	mov    %eax,(%esp)
 8423689:	e8 32 0b fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842368e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8423695:	00 
 8423696:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8423699:	89 04 24             	mov    %eax,(%esp)
 842369c:	e8 85 0c fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 84236a1:	83 f0 01             	xor    $0x1,%eax
 84236a4:	84 c0                	test   %al,%al
 84236a6:	74 0a                	je     84236b2 <_ZN16DB_MouseRegister15_modifyPasswordEjPKcPcib+0x18a>
 84236a8:	b8 00 00 00 00       	mov    $0x0,%eax
 84236ad:	e9 db 00 00 00       	jmp    842378d <_ZN16DB_MouseRegister15_modifyPasswordEjPKcPcib+0x265>
 84236b2:	80 7d d4 00          	cmpb   $0x0,-0x2c(%ebp)
 84236b6:	0f 84 cc 00 00 00    	je     8423788 <_ZN16DB_MouseRegister15_modifyPasswordEjPKcPcib+0x260>
 84236bc:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84236c1:	c7 44 24 08 cd 5d 00 	movl   $0x5dcd,0x8(%esp)
 84236c8:	00 
 84236c9:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84236d0:	08 
 84236d1:	89 04 24             	mov    %eax,(%esp)
 84236d4:	e8 ad c3 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84236d9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84236e0:	00 
 84236e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84236e5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84236e8:	89 04 24             	mov    %eax,(%esp)
 84236eb:	e8 36 55 ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84236f0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84236f3:	89 04 24             	mov    %eax,(%esp)
 84236f6:	e8 4b 55 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84236fb:	c7 44 24 04 45 02 00 	movl   $0x245,0x4(%esp)
 8423702:	00 
 8423703:	89 04 24             	mov    %eax,(%esp)
 8423706:	e8 4b 55 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842370b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 842370e:	89 04 24             	mov    %eax,(%esp)
 8423711:	e8 30 55 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8423716:	8b 55 18             	mov    0x18(%ebp),%edx
 8423719:	89 54 24 04          	mov    %edx,0x4(%esp)
 842371d:	89 04 24             	mov    %eax,(%esp)
 8423720:	e8 31 55 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8423725:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8423728:	89 04 24             	mov    %eax,(%esp)
 842372b:	e8 1e 55 ca ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8423730:	89 04 24             	mov    %eax,(%esp)
 8423733:	e8 78 e6 02 00       	call   8451db0 <_ZN12CStreamGuard11GetInBufferI32SIG_GOBLIN_PAD_ADVICE_CHANGE_PWDEEPT_v>
 8423738:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842373b:	0f b6 55 d4          	movzbl -0x2c(%ebp),%edx
 842373f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8423742:	89 10                	mov    %edx,(%eax)
 8423744:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8423749:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 842374c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8423750:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8423757:	00 
 8423758:	89 04 24             	mov    %eax,(%esp)
 842375b:	e8 7e d8 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8423760:	eb 1b                	jmp    842377d <_ZN16DB_MouseRegister15_modifyPasswordEjPKcPcib+0x255>
 8423762:	89 d3                	mov    %edx,%ebx
 8423764:	89 c6                	mov    %eax,%esi
 8423766:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8423769:	89 04 24             	mov    %eax,(%esp)
 842376c:	e8 61 91 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8423771:	89 f0                	mov    %esi,%eax
 8423773:	89 da                	mov    %ebx,%edx
 8423775:	89 04 24             	mov    %eax,(%esp)
 8423778:	e8 d3 ff 6b 00       	call   8ae3750 <_Unwind_Resume>
 842377d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8423780:	89 04 24             	mov    %eax,(%esp)
 8423783:	e8 4a 91 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8423788:	b8 00 00 00 00       	mov    $0x0,%eax
 842378d:	83 c4 40             	add    $0x40,%esp
 8423790:	5b                   	pop    %ebx
 8423791:	5e                   	pop    %esi
 8423792:	5d                   	pop    %ebp
 8423793:	c3                   	ret

```

```c
// DB_MouseRegister::_modifyPassword @ 0x8423528

/* DB_MouseRegister::_modifyPassword(unsigned int, char const*, char*, int, bool) */

undefined4 __thiscall
DB_MouseRegister::_modifyPassword
          (DB_MouseRegister *this,uint param_1,char *param_2,char *param_3,int param_4,bool param_5)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  longlong lVar6;
  CStreamGuard local_20 [8];
  MySQL *local_18;
  MySQL *local_14;
  SIG_GOBLIN_PAD_ADVICE_CHANGE_PWD *local_10;
  
  local_18 = (MySQL *)_getDBHandleForDevideAccountDB();
  cVar2 = _updateHistory(param_1,9,param_3);
  if (cVar2 != '\x01') {
    return 0x15;
  }
  uVar3 = NumberToString(param_1,0);
  MySQL::set_query(local_18,
                   "upDate member_mousepass set mousepass=\'%s\',occ_time=now() where m_id=%s and enable_flag = \'1\'"
                   ,param_2,uVar3);
  cVar2 = MySQL::exec(local_18,true);
  if ((cVar2 == '\x01') && (lVar6 = MySQL::getAffectedRowCount(local_18), lVar6 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    uVar3 = NumberToString(param_1,0);
    MySQL::set_query(local_14,"upDate member_security_grade set goblin_pass_mod=now() where m_id=%s"
                     ,uVar3);
    cVar2 = MySQL::exec(local_14,true);
    if ((cVar2 == '\x01') && (lVar6 = MySQL::getAffectedRowCount(local_14), lVar6 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = NumberToString(param_1,0);
      MySQL::set_query(local_14,
                       "inSert into member_security_grade(m_id, goblin_pass_mod) values(%s, now())",
                       uVar3);
      cVar2 = MySQL::exec(local_14,true);
      if (cVar2 != '\x01') {
        return 0;
      }
    }
    if (param_5) {
      pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x5dcd);
      CStreamGuard::CStreamGuard(local_20,pSVar4,true);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 08423706 to 0842375f has its CatchHandler @ 08423762 */
      CStreamGuard::operator<<(pCVar5,0x245);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_20);
      CStreamGuard::operator<<(pCVar5,param_4);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_20);
      local_10 = CStreamGuard::GetInBuffer<SIG_GOBLIN_PAD_ADVICE_CHANGE_PWD>(pCVar5);
      *(undefined4 *)local_10 = 1;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_20);
      CStreamGuard::~CStreamGuard(local_20);
    }
    return 0;
  }
  return 0x15;
}

```

---

## _registNewPassword

```asm
// === 084232e0 DB_MouseRegister::_registNewPassword  [0x084232e0-0x8423527] ===
 84232e0:	55                   	push   %ebp
 84232e1:	89 e5                	mov    %esp,%ebp
 84232e3:	83 ec 28             	sub    $0x28,%esp
 84232e6:	e8 4d f6 ff ff       	call   8422938 <_ZN16DB_MouseRegister30_getDBHandleForDevideAccountDBEv>
 84232eb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84232ee:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84232f5:	00 
 84232f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84232f9:	89 04 24             	mov    %eax,(%esp)
 84232fc:	e8 4a 5d ce ff       	call   810904b <_Z14NumberToStringji>
 8423301:	89 44 24 08          	mov    %eax,0x8(%esp)
 8423305:	c7 44 24 04 bc d6 c4 	movl   $0x8c4d6bc,0x4(%esp)
 842330c:	08 
 842330d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8423310:	89 04 24             	mov    %eax,(%esp)
 8423313:	e8 a8 0e fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8423318:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842331f:	00 
 8423320:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8423323:	89 04 24             	mov    %eax,(%esp)
 8423326:	e8 fb 0f fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 842332b:	83 f0 01             	xor    $0x1,%eax
 842332e:	84 c0                	test   %al,%al
 8423330:	74 0a                	je     842333c <_ZN16DB_MouseRegister18_registNewPasswordEjPKcPci+0x5c>
 8423332:	b8 01 00 00 00       	mov    $0x1,%eax
 8423337:	e9 e9 01 00 00       	jmp    8423525 <_ZN16DB_MouseRegister18_registNewPasswordEjPKcPci+0x245>
 842333c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842333f:	89 04 24             	mov    %eax,(%esp)
 8423342:	e8 25 f0 cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8423347:	85 c0                	test   %eax,%eax
 8423349:	0f 94 c0             	sete   %al
 842334c:	84 c0                	test   %al,%al
 842334e:	74 33                	je     8423383 <_ZN16DB_MouseRegister18_registNewPasswordEjPKcPci+0xa3>
 8423350:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8423357:	00 
 8423358:	8b 45 0c             	mov    0xc(%ebp),%eax
 842335b:	89 04 24             	mov    %eax,(%esp)
 842335e:	e8 e8 5c ce ff       	call   810904b <_Z14NumberToStringji>
 8423363:	8b 55 10             	mov    0x10(%ebp),%edx
 8423366:	89 54 24 0c          	mov    %edx,0xc(%esp)
 842336a:	89 44 24 08          	mov    %eax,0x8(%esp)
 842336e:	c7 44 24 04 f4 d6 c4 	movl   $0x8c4d6f4,0x4(%esp)
 8423375:	08 
 8423376:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8423379:	89 04 24             	mov    %eax,(%esp)
 842337c:	e8 3f 0e fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8423381:	eb 31                	jmp    84233b4 <_ZN16DB_MouseRegister18_registNewPasswordEjPKcPci+0xd4>
 8423383:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842338a:	00 
 842338b:	8b 45 0c             	mov    0xc(%ebp),%eax
 842338e:	89 04 24             	mov    %eax,(%esp)
 8423391:	e8 b5 5c ce ff       	call   810904b <_Z14NumberToStringji>
 8423396:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842339a:	8b 45 10             	mov    0x10(%ebp),%eax
 842339d:	89 44 24 08          	mov    %eax,0x8(%esp)
 84233a1:	c7 44 24 04 98 d7 c4 	movl   $0x8c4d798,0x4(%esp)
 84233a8:	08 
 84233a9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84233ac:	89 04 24             	mov    %eax,(%esp)
 84233af:	e8 0c 0e fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84233b4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84233bb:	00 
 84233bc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84233bf:	89 04 24             	mov    %eax,(%esp)
 84233c2:	e8 5f 0f fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 84233c7:	83 f0 01             	xor    $0x1,%eax
 84233ca:	84 c0                	test   %al,%al
 84233cc:	74 2b                	je     84233f9 <_ZN16DB_MouseRegister18_registNewPasswordEjPKcPci+0x119>
 84233ce:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84233d1:	89 04 24             	mov    %eax,(%esp)
 84233d4:	e8 a1 85 cf ff       	call   811b97a <_ZN5MySQL10getDBErrorEv>
 84233d9:	3d 26 04 00 00       	cmp    $0x426,%eax
 84233de:	0f 94 c0             	sete   %al
 84233e1:	84 c0                	test   %al,%al
 84233e3:	74 0a                	je     84233ef <_ZN16DB_MouseRegister18_registNewPasswordEjPKcPci+0x10f>
 84233e5:	b8 12 00 00 00       	mov    $0x12,%eax
 84233ea:	e9 36 01 00 00       	jmp    8423525 <_ZN16DB_MouseRegister18_registNewPasswordEjPKcPci+0x245>
 84233ef:	b8 01 00 00 00       	mov    $0x1,%eax
 84233f4:	e9 2c 01 00 00       	jmp    8423525 <_ZN16DB_MouseRegister18_registNewPasswordEjPKcPci+0x245>
 84233f9:	8b 45 18             	mov    0x18(%ebp),%eax
 84233fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8423400:	8b 45 0c             	mov    0xc(%ebp),%eax
 8423403:	89 04 24             	mov    %eax,(%esp)
 8423406:	e8 13 40 01 00       	call   843741e <_ZN28DB_CancelRestingUserRestrict11makeRequestEji>
 842340b:	8b 45 14             	mov    0x14(%ebp),%eax
 842340e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8423412:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 8423419:	00 
 842341a:	8b 45 0c             	mov    0xc(%ebp),%eax
 842341d:	89 04 24             	mov    %eax,(%esp)
 8423420:	e8 ef 04 00 00       	call   8423914 <_ZN16DB_MouseRegister14_updateHistoryEjiPc>
 8423425:	83 f0 01             	xor    $0x1,%eax
 8423428:	84 c0                	test   %al,%al
 842342a:	74 0a                	je     8423436 <_ZN16DB_MouseRegister18_registNewPasswordEjPKcPci+0x156>
 842342c:	b8 01 00 00 00       	mov    $0x1,%eax
 8423431:	e9 ef 00 00 00       	jmp    8423525 <_ZN16DB_MouseRegister18_registNewPasswordEjPKcPci+0x245>
 8423436:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842343b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8423442:	00 
 8423443:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842344a:	00 
 842344b:	89 04 24             	mov    %eax,(%esp)
 842344e:	e8 eb 1d fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8423453:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8423456:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842345d:	00 
 842345e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8423461:	89 04 24             	mov    %eax,(%esp)
 8423464:	e8 e2 5b ce ff       	call   810904b <_Z14NumberToStringji>
 8423469:	89 44 24 08          	mov    %eax,0x8(%esp)
 842346d:	c7 44 24 04 44 d8 c4 	movl   $0x8c4d844,0x4(%esp)
 8423474:	08 
 8423475:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8423478:	89 04 24             	mov    %eax,(%esp)
 842347b:	e8 40 0d fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8423480:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8423487:	00 
 8423488:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842348b:	89 04 24             	mov    %eax,(%esp)
 842348e:	e8 93 0e fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8423493:	83 f0 01             	xor    $0x1,%eax
 8423496:	84 c0                	test   %al,%al
 8423498:	75 11                	jne    84234ab <_ZN16DB_MouseRegister18_registNewPasswordEjPKcPci+0x1cb>
 842349a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842349d:	89 04 24             	mov    %eax,(%esp)
 84234a0:	e8 6b 0e fd ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 84234a5:	09 d0                	or     %edx,%eax
 84234a7:	85 c0                	test   %eax,%eax
 84234a9:	75 07                	jne    84234b2 <_ZN16DB_MouseRegister18_registNewPasswordEjPKcPci+0x1d2>
 84234ab:	b8 01 00 00 00       	mov    $0x1,%eax
 84234b0:	eb 05                	jmp    84234b7 <_ZN16DB_MouseRegister18_registNewPasswordEjPKcPci+0x1d7>
 84234b2:	b8 00 00 00 00       	mov    $0x0,%eax
 84234b7:	84 c0                	test   %al,%al
 84234b9:	74 4b                	je     8423506 <_ZN16DB_MouseRegister18_registNewPasswordEjPKcPci+0x226>
 84234bb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84234c2:	00 
 84234c3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84234c6:	89 04 24             	mov    %eax,(%esp)
 84234c9:	e8 7d 5b ce ff       	call   810904b <_Z14NumberToStringji>
 84234ce:	89 44 24 08          	mov    %eax,0x8(%esp)
 84234d2:	c7 44 24 04 8c d8 c4 	movl   $0x8c4d88c,0x4(%esp)
 84234d9:	08 
 84234da:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84234dd:	89 04 24             	mov    %eax,(%esp)
 84234e0:	e8 db 0c fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84234e5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84234ec:	00 
 84234ed:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84234f0:	89 04 24             	mov    %eax,(%esp)
 84234f3:	e8 2e 0e fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 84234f8:	83 f0 01             	xor    $0x1,%eax
 84234fb:	84 c0                	test   %al,%al
 84234fd:	74 07                	je     8423506 <_ZN16DB_MouseRegister18_registNewPasswordEjPKcPci+0x226>
 84234ff:	b8 01 00 00 00       	mov    $0x1,%eax
 8423504:	eb 1f                	jmp    8423525 <_ZN16DB_MouseRegister18_registNewPasswordEjPKcPci+0x245>
 8423506:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842350d:	00 
 842350e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8423511:	89 44 24 04          	mov    %eax,0x4(%esp)
 8423515:	8b 45 18             	mov    0x18(%ebp),%eax
 8423518:	89 04 24             	mov    %eax,(%esp)
 842351b:	e8 e8 0e 02 00       	call   8444408 <_ZN18DB_CheckSecuReward11makeRequestEiji>
 8423520:	b8 00 00 00 00       	mov    $0x0,%eax
 8423525:	c9                   	leave
 8423526:	c3                   	ret
 8423527:	90                   	nop

```

```c
// DB_MouseRegister::_registNewPassword @ 0x84232e0

/* DB_MouseRegister::_registNewPassword(unsigned int, char const*, char*, int) */

undefined4 __thiscall
DB_MouseRegister::_registNewPassword
          (DB_MouseRegister *this,uint param_1,char *param_2,char *param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  MySQL *pMVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  
  pMVar3 = (MySQL *)_getDBHandleForDevideAccountDB();
  uVar4 = NumberToString(param_1,0);
  MySQL::set_query(pMVar3,"seLect enable_flag from member_mousepass where m_id=%s",uVar4);
  cVar2 = MySQL::exec(pMVar3,true);
  if (cVar2 != '\x01') {
    return 1;
  }
  iVar5 = MySQL::get_n_rows(pMVar3);
  if (iVar5 == 0) {
    uVar4 = NumberToString(param_1,0);
    MySQL::set_query(pMVar3,
                     "inSert into member_mousepass(m_id,mousepass,occ_time,version_info, validity_time, reward_time,enable_flag) values(%s,\'%s\',now(),\'2\', unix_timestamp(now()), 0,\'1\')"
                     ,uVar4,param_2);
  }
  else {
    uVar4 = NumberToString(param_1,0);
    MySQL::set_query(pMVar3,
                     "upDate member_mousepass set mousepass = \'%s\', occ_time = now() ,version_info = \'2\', validity_time=unix_timestamp(now()), enable_flag = \'1\', reward_time = 0 where m_id = %s"
                     ,param_2,uVar4);
  }
  cVar2 = MySQL::exec(pMVar3,true);
  if (cVar2 == '\x01') {
    DB_CancelRestingUserRestrict::makeRequest(param_1,param_4);
    cVar2 = _updateHistory(param_1,8,param_3);
    if (cVar2 != '\x01') {
      return 1;
    }
    pMVar3 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    uVar4 = NumberToString(param_1,0);
    MySQL::set_query(pMVar3,"upDate member_security_grade set goblin_pass_mod=now() where m_id=%s",
                     uVar4);
    cVar2 = MySQL::exec(pMVar3,true);
    if ((cVar2 == '\x01') && (lVar6 = MySQL::getAffectedRowCount(pMVar3), lVar6 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = NumberToString(param_1,0);
      MySQL::set_query(pMVar3,
                       "inSert into member_security_grade(m_id, goblin_pass_mod) values(%s, now())",
                       uVar4);
      cVar2 = MySQL::exec(pMVar3,true);
      if (cVar2 != '\x01') {
        return 1;
      }
    }
    DB_CheckSecuReward::makeRequest(param_4,param_1,1);
    return 0;
  }
  iVar5 = MySQL::getDBError(pMVar3);
  if (iVar5 == 0x426) {
    return 0x12;
  }
  return 1;
}

```

---

## _sendResult

```asm
// === 08423abe DB_MouseRegister::_sendResult  [0x08423abe-0x8423bc3] ===
 8423abe:	55                   	push   %ebp
 8423abf:	89 e5                	mov    %esp,%ebp
 8423ac1:	56                   	push   %esi
 8423ac2:	53                   	push   %ebx
 8423ac3:	83 ec 20             	sub    $0x20,%esp
 8423ac6:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8423acb:	c7 44 24 08 4e 5e 00 	movl   $0x5e4e,0x8(%esp)
 8423ad2:	00 
 8423ad3:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8423ada:	08 
 8423adb:	89 04 24             	mov    %eax,(%esp)
 8423ade:	e8 a3 bf e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8423ae3:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8423aea:	00 
 8423aeb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8423aef:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8423af2:	89 04 24             	mov    %eax,(%esp)
 8423af5:	e8 2c 51 ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8423afa:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8423afd:	89 04 24             	mov    %eax,(%esp)
 8423b00:	e8 41 51 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8423b05:	c7 44 24 04 a3 00 00 	movl   $0xa3,0x4(%esp)
 8423b0c:	00 
 8423b0d:	89 04 24             	mov    %eax,(%esp)
 8423b10:	e8 41 51 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8423b15:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8423b18:	89 04 24             	mov    %eax,(%esp)
 8423b1b:	e8 26 51 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8423b20:	8b 55 18             	mov    0x18(%ebp),%edx
 8423b23:	89 54 24 04          	mov    %edx,0x4(%esp)
 8423b27:	89 04 24             	mov    %eax,(%esp)
 8423b2a:	e8 27 51 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8423b2f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8423b32:	89 04 24             	mov    %eax,(%esp)
 8423b35:	e8 14 51 ca ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8423b3a:	89 04 24             	mov    %eax,(%esp)
 8423b3d:	e8 7e 19 e4 ff       	call   82654c0 <_ZN12CStreamGuard11GetInBufferI18SIG_MOUSE_REGISTEREEPT_v>
 8423b42:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8423b45:	c7 44 24 08 59 00 00 	movl   $0x59,0x8(%esp)
 8423b4c:	00 
 8423b4d:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8423b50:	89 44 24 04          	mov    %eax,0x4(%esp)
 8423b54:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8423b57:	89 04 24             	mov    %eax,(%esp)
 8423b5a:	e8 41 9d c5 ff       	call   807d8a0 <memcpy@plt>
 8423b5f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8423b62:	8b 55 0c             	mov    0xc(%ebp),%edx
 8423b65:	89 10                	mov    %edx,(%eax)
 8423b67:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8423b6a:	8b 55 14             	mov    0x14(%ebp),%edx
 8423b6d:	89 50 04             	mov    %edx,0x4(%eax)
 8423b70:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8423b73:	8b 55 10             	mov    0x10(%ebp),%edx
 8423b76:	89 50 16             	mov    %edx,0x16(%eax)
 8423b79:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8423b7e:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8423b81:	89 54 24 08          	mov    %edx,0x8(%esp)
 8423b85:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8423b8c:	00 
 8423b8d:	89 04 24             	mov    %eax,(%esp)
 8423b90:	e8 49 d4 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8423b95:	eb 1b                	jmp    8423bb2 <_ZN16DB_MouseRegister11_sendResultEjiiiP18SIG_MOUSE_REGISTER+0xf4>
 8423b97:	89 d3                	mov    %edx,%ebx
 8423b99:	89 c6                	mov    %eax,%esi
 8423b9b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8423b9e:	89 04 24             	mov    %eax,(%esp)
 8423ba1:	e8 2c 8d 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8423ba6:	89 f0                	mov    %esi,%eax
 8423ba8:	89 da                	mov    %ebx,%edx
 8423baa:	89 04 24             	mov    %eax,(%esp)
 8423bad:	e8 9e fb 6b 00       	call   8ae3750 <_Unwind_Resume>
 8423bb2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8423bb5:	89 04 24             	mov    %eax,(%esp)
 8423bb8:	e8 15 8d 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8423bbd:	83 c4 20             	add    $0x20,%esp
 8423bc0:	5b                   	pop    %ebx
 8423bc1:	5e                   	pop    %esi
 8423bc2:	5d                   	pop    %ebp
 8423bc3:	c3                   	ret

```

```c
// DB_MouseRegister::_sendResult @ 0x8423abe

/* DB_MouseRegister::_sendResult(unsigned int, int, int, int, SIG_MOUSE_REGISTER*) */

void __thiscall
DB_MouseRegister::_sendResult
          (DB_MouseRegister *this,uint param_1,int param_2,int param_3,int param_4,
          SIG_MOUSE_REGISTER *param_5)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_MOUSE_REGISTER *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x5e4e);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08423b10 to 08423b94 has its CatchHandler @ 08423b97 */
  CStreamGuard::operator<<(pCVar2,0xa3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_4);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_MOUSE_REGISTER>(pCVar2);
  memcpy(local_10,param_5,0x59);
  *(uint *)local_10 = param_1;
  *(int *)(local_10 + 4) = param_3;
  *(int *)(local_10 + 0x16) = param_2;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

---

## _unregistPassword

```asm
// === 08423794 DB_MouseRegister::_unregistPassword  [0x08423794-0x8423913] ===
 8423794:	55                   	push   %ebp
 8423795:	89 e5                	mov    %esp,%ebp
 8423797:	83 ec 28             	sub    $0x28,%esp
 842379a:	e8 99 f1 ff ff       	call   8422938 <_ZN16DB_MouseRegister30_getDBHandleForDevideAccountDBEv>
 842379f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84237a2:	8b 45 10             	mov    0x10(%ebp),%eax
 84237a5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84237a9:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 84237b0:	00 
 84237b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84237b4:	89 04 24             	mov    %eax,(%esp)
 84237b7:	e8 58 01 00 00       	call   8423914 <_ZN16DB_MouseRegister14_updateHistoryEjiPc>
 84237bc:	83 f0 01             	xor    $0x1,%eax
 84237bf:	84 c0                	test   %al,%al
 84237c1:	74 0a                	je     84237cd <_ZN16DB_MouseRegister17_unregistPasswordEjPc+0x39>
 84237c3:	b8 15 00 00 00       	mov    $0x15,%eax
 84237c8:	e9 44 01 00 00       	jmp    8423911 <_ZN16DB_MouseRegister17_unregistPasswordEjPc+0x17d>
 84237cd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84237d4:	00 
 84237d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84237d8:	89 04 24             	mov    %eax,(%esp)
 84237db:	e8 6b 58 ce ff       	call   810904b <_Z14NumberToStringji>
 84237e0:	89 44 24 08          	mov    %eax,0x8(%esp)
 84237e4:	c7 44 24 04 38 d9 c4 	movl   $0x8c4d938,0x4(%esp)
 84237eb:	08 
 84237ec:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84237ef:	89 04 24             	mov    %eax,(%esp)
 84237f2:	e8 c9 09 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84237f7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84237fe:	00 
 84237ff:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8423802:	89 04 24             	mov    %eax,(%esp)
 8423805:	e8 1c 0b fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 842380a:	83 f0 01             	xor    $0x1,%eax
 842380d:	84 c0                	test   %al,%al
 842380f:	75 11                	jne    8423822 <_ZN16DB_MouseRegister17_unregistPasswordEjPc+0x8e>
 8423811:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8423814:	89 04 24             	mov    %eax,(%esp)
 8423817:	e8 f4 0a fd ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 842381c:	09 d0                	or     %edx,%eax
 842381e:	85 c0                	test   %eax,%eax
 8423820:	75 07                	jne    8423829 <_ZN16DB_MouseRegister17_unregistPasswordEjPc+0x95>
 8423822:	b8 01 00 00 00       	mov    $0x1,%eax
 8423827:	eb 05                	jmp    842382e <_ZN16DB_MouseRegister17_unregistPasswordEjPc+0x9a>
 8423829:	b8 00 00 00 00       	mov    $0x0,%eax
 842382e:	84 c0                	test   %al,%al
 8423830:	74 0a                	je     842383c <_ZN16DB_MouseRegister17_unregistPasswordEjPc+0xa8>
 8423832:	b8 15 00 00 00       	mov    $0x15,%eax
 8423837:	e9 d5 00 00 00       	jmp    8423911 <_ZN16DB_MouseRegister17_unregistPasswordEjPc+0x17d>
 842383c:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8423841:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8423848:	00 
 8423849:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8423850:	00 
 8423851:	89 04 24             	mov    %eax,(%esp)
 8423854:	e8 e5 19 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8423859:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842385c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8423863:	00 
 8423864:	8b 45 0c             	mov    0xc(%ebp),%eax
 8423867:	89 04 24             	mov    %eax,(%esp)
 842386a:	e8 dc 57 ce ff       	call   810904b <_Z14NumberToStringji>
 842386f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8423873:	c7 44 24 04 64 d9 c4 	movl   $0x8c4d964,0x4(%esp)
 842387a:	08 
 842387b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842387e:	89 04 24             	mov    %eax,(%esp)
 8423881:	e8 3a 09 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8423886:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842388d:	00 
 842388e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8423891:	89 04 24             	mov    %eax,(%esp)
 8423894:	e8 8d 0a fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8423899:	83 f0 01             	xor    $0x1,%eax
 842389c:	84 c0                	test   %al,%al
 842389e:	75 11                	jne    84238b1 <_ZN16DB_MouseRegister17_unregistPasswordEjPc+0x11d>
 84238a0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84238a3:	89 04 24             	mov    %eax,(%esp)
 84238a6:	e8 65 0a fd ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 84238ab:	09 d0                	or     %edx,%eax
 84238ad:	85 c0                	test   %eax,%eax
 84238af:	75 07                	jne    84238b8 <_ZN16DB_MouseRegister17_unregistPasswordEjPc+0x124>
 84238b1:	b8 01 00 00 00       	mov    $0x1,%eax
 84238b6:	eb 05                	jmp    84238bd <_ZN16DB_MouseRegister17_unregistPasswordEjPc+0x129>
 84238b8:	b8 00 00 00 00       	mov    $0x0,%eax
 84238bd:	84 c0                	test   %al,%al
 84238bf:	74 4b                	je     842390c <_ZN16DB_MouseRegister17_unregistPasswordEjPc+0x178>
 84238c1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84238c8:	00 
 84238c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84238cc:	89 04 24             	mov    %eax,(%esp)
 84238cf:	e8 77 57 ce ff       	call   810904b <_Z14NumberToStringji>
 84238d4:	89 44 24 08          	mov    %eax,0x8(%esp)
 84238d8:	c7 44 24 04 bc d9 c4 	movl   $0x8c4d9bc,0x4(%esp)
 84238df:	08 
 84238e0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84238e3:	89 04 24             	mov    %eax,(%esp)
 84238e6:	e8 d5 08 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84238eb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84238f2:	00 
 84238f3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84238f6:	89 04 24             	mov    %eax,(%esp)
 84238f9:	e8 28 0a fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 84238fe:	83 f0 01             	xor    $0x1,%eax
 8423901:	84 c0                	test   %al,%al
 8423903:	74 07                	je     842390c <_ZN16DB_MouseRegister17_unregistPasswordEjPc+0x178>
 8423905:	b8 00 00 00 00       	mov    $0x0,%eax
 842390a:	eb 05                	jmp    8423911 <_ZN16DB_MouseRegister17_unregistPasswordEjPc+0x17d>
 842390c:	b8 00 00 00 00       	mov    $0x0,%eax
 8423911:	c9                   	leave
 8423912:	c3                   	ret
 8423913:	90                   	nop

```

```c
// DB_MouseRegister::_unregistPassword @ 0x8423794

/* DB_MouseRegister::_unregistPassword(unsigned int, char*) */

undefined4 __thiscall
DB_MouseRegister::_unregistPassword(DB_MouseRegister *this,uint param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  MySQL *pMVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  pMVar3 = (MySQL *)_getDBHandleForDevideAccountDB();
  cVar2 = _updateHistory(param_1,10,param_2);
  if (cVar2 != '\x01') {
    return 0x15;
  }
  uVar4 = NumberToString(param_1,0);
  MySQL::set_query(pMVar3,"deLete from member_mousepass where m_id=%s",uVar4);
  cVar2 = MySQL::exec(pMVar3,true);
  if ((cVar2 == '\x01') && (lVar5 = MySQL::getAffectedRowCount(pMVar3), lVar5 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    pMVar3 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    uVar4 = NumberToString(param_1,0);
    MySQL::set_query(pMVar3,
                     "upDate member_security_grade set goblin_pass_mod=\'0000-00-00 00:00:00\' where m_id=%s"
                     ,uVar4);
    cVar2 = MySQL::exec(pMVar3,true);
    if ((cVar2 == '\x01') && (lVar5 = MySQL::getAffectedRowCount(pMVar3), lVar5 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = NumberToString(param_1,0);
      MySQL::set_query(pMVar3,
                       "inSert into member_security_grade(m_id, goblin_pass_mod) values(%s, \'0000-00-00 00:00:00\')"
                       ,uVar4);
      cVar2 = MySQL::exec(pMVar3,true);
      if (cVar2 != '\x01') {
        return 0;
      }
    }
    return 0;
  }
  return 0x15;
}

```

---

## _updateFailCnt

```asm
// === 084231b6 DB_MouseRegister::_updateFailCnt  [0x084231b6-0x84232df] ===
 84231b6:	55                   	push   %ebp
 84231b7:	89 e5                	mov    %esp,%ebp
 84231b9:	83 ec 28             	sub    $0x28,%esp
 84231bc:	e8 77 f7 ff ff       	call   8422938 <_ZN16DB_MouseRegister30_getDBHandleForDevideAccountDBEv>
 84231c1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84231c4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84231cb:	00 
 84231cc:	8b 45 08             	mov    0x8(%ebp),%eax
 84231cf:	89 04 24             	mov    %eax,(%esp)
 84231d2:	e8 74 5e ce ff       	call   810904b <_Z14NumberToStringji>
 84231d7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84231db:	8b 45 0c             	mov    0xc(%ebp),%eax
 84231de:	89 44 24 08          	mov    %eax,0x8(%esp)
 84231e2:	c7 44 24 04 f8 d5 c4 	movl   $0x8c4d5f8,0x4(%esp)
 84231e9:	08 
 84231ea:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84231ed:	89 04 24             	mov    %eax,(%esp)
 84231f0:	e8 cb 0f fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84231f5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84231fc:	00 
 84231fd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8423200:	89 04 24             	mov    %eax,(%esp)
 8423203:	e8 1e 11 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8423208:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842320d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8423214:	00 
 8423215:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842321c:	00 
 842321d:	89 04 24             	mov    %eax,(%esp)
 8423220:	e8 19 20 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8423225:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8423228:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842322f:	00 
 8423230:	8b 45 08             	mov    0x8(%ebp),%eax
 8423233:	89 04 24             	mov    %eax,(%esp)
 8423236:	e8 10 5e ce ff       	call   810904b <_Z14NumberToStringji>
 842323b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842323f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8423242:	89 44 24 08          	mov    %eax,0x8(%esp)
 8423246:	c7 44 24 04 30 d6 c4 	movl   $0x8c4d630,0x4(%esp)
 842324d:	08 
 842324e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8423251:	89 04 24             	mov    %eax,(%esp)
 8423254:	e8 67 0f fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8423259:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8423260:	00 
 8423261:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8423264:	89 04 24             	mov    %eax,(%esp)
 8423267:	e8 ba 10 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 842326c:	83 f0 01             	xor    $0x1,%eax
 842326f:	84 c0                	test   %al,%al
 8423271:	75 11                	jne    8423284 <_ZN16DB_MouseRegister14_updateFailCntEjiPc+0xce>
 8423273:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8423276:	89 04 24             	mov    %eax,(%esp)
 8423279:	e8 92 10 fd ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 842327e:	09 d0                	or     %edx,%eax
 8423280:	85 c0                	test   %eax,%eax
 8423282:	75 07                	jne    842328b <_ZN16DB_MouseRegister14_updateFailCntEjiPc+0xd5>
 8423284:	b8 01 00 00 00       	mov    $0x1,%eax
 8423289:	eb 05                	jmp    8423290 <_ZN16DB_MouseRegister14_updateFailCntEjiPc+0xda>
 842328b:	b8 00 00 00 00       	mov    $0x0,%eax
 8423290:	84 c0                	test   %al,%al
 8423292:	74 49                	je     84232dd <_ZN16DB_MouseRegister14_updateFailCntEjiPc+0x127>
 8423294:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842329b:	00 
 842329c:	8b 45 08             	mov    0x8(%ebp),%eax
 842329f:	89 04 24             	mov    %eax,(%esp)
 84232a2:	e8 a4 5d ce ff       	call   810904b <_Z14NumberToStringji>
 84232a7:	8b 55 0c             	mov    0xc(%ebp),%edx
 84232aa:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84232ae:	89 44 24 08          	mov    %eax,0x8(%esp)
 84232b2:	c7 44 24 04 74 d6 c4 	movl   $0x8c4d674,0x4(%esp)
 84232b9:	08 
 84232ba:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84232bd:	89 04 24             	mov    %eax,(%esp)
 84232c0:	e8 fb 0e fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84232c5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84232cc:	00 
 84232cd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84232d0:	89 04 24             	mov    %eax,(%esp)
 84232d3:	e8 4e 10 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 84232d8:	83 f0 01             	xor    $0x1,%eax
 84232db:	84 c0                	test   %al,%al
 84232dd:	c9                   	leave
 84232de:	c3                   	ret
 84232df:	90                   	nop

```

```c
// DB_MouseRegister::_updateFailCnt @ 0x84231b6

/* DB_MouseRegister::_updateFailCnt(unsigned int, int, char*) */

uint DB_MouseRegister::_updateFailCnt(uint param_1,int param_2,char *param_3)

{
  char cVar1;
  MySQL *pMVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  
  pMVar2 = (MySQL *)_getDBHandleForDevideAccountDB();
  uVar3 = NumberToString(param_1,0);
  MySQL::set_query(pMVar2,"upDate member_mousepass set fail_cnt=%d where m_id=%s",param_2,uVar3);
  MySQL::exec(pMVar2,true);
  pMVar2 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar3 = NumberToString(param_1,0);
  MySQL::set_query(pMVar2,"upDate member_security_grade set goblin_fail_cnt=%d where m_id=%s",
                   param_2,uVar3);
  cVar1 = MySQL::exec(pMVar2,true);
  if (cVar1 == '\x01') {
    lVar5 = MySQL::getAffectedRowCount(pMVar2);
    if (lVar5 != 0) {
      uVar4 = 0;
      goto LAB_08423290;
    }
  }
  uVar4 = 1;
LAB_08423290:
  if ((char)uVar4 != '\0') {
    uVar3 = NumberToString(param_1,0);
    MySQL::set_query(pMVar2,
                     "inSert into member_security_grade(m_id, goblin_fail_cnt) values(%s, %d)",uVar3
                     ,param_2);
    uVar4 = MySQL::exec(pMVar2,true);
    uVar4 = uVar4 ^ 1;
  }
  return uVar4;
}

```

---

## _updateHistory

```asm
// === 08423914 DB_MouseRegister::_updateHistory  [0x08423914-0x8423abd] ===
 8423914:	55                   	push   %ebp
 8423915:	89 e5                	mov    %esp,%ebp
 8423917:	81 ec 98 00 00 00    	sub    $0x98,%esp
 842391d:	e8 16 f0 ff ff       	call   8422938 <_ZN16DB_MouseRegister30_getDBHandleForDevideAccountDBEv>
 8423922:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8423925:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842392c:	00 
 842392d:	8b 45 08             	mov    0x8(%ebp),%eax
 8423930:	89 04 24             	mov    %eax,(%esp)
 8423933:	e8 13 57 ce ff       	call   810904b <_Z14NumberToStringji>
 8423938:	89 44 24 08          	mov    %eax,0x8(%esp)
 842393c:	c7 44 24 04 18 da c4 	movl   $0x8c4da18,0x4(%esp)
 8423943:	08 
 8423944:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8423947:	89 04 24             	mov    %eax,(%esp)
 842394a:	e8 71 08 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842394f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8423956:	00 
 8423957:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842395a:	89 04 24             	mov    %eax,(%esp)
 842395d:	e8 c4 09 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8423962:	83 f0 01             	xor    $0x1,%eax
 8423965:	84 c0                	test   %al,%al
 8423967:	75 21                	jne    842398a <_ZN16DB_MouseRegister14_updateHistoryEjiPc+0x76>
 8423969:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842396c:	89 04 24             	mov    %eax,(%esp)
 842396f:	e8 f8 e9 cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8423974:	85 c0                	test   %eax,%eax
 8423976:	74 12                	je     842398a <_ZN16DB_MouseRegister14_updateHistoryEjiPc+0x76>
 8423978:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842397b:	89 04 24             	mov    %eax,(%esp)
 842397e:	e8 39 0b fd ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8423983:	83 f0 01             	xor    $0x1,%eax
 8423986:	84 c0                	test   %al,%al
 8423988:	74 07                	je     8423991 <_ZN16DB_MouseRegister14_updateHistoryEjiPc+0x7d>
 842398a:	b8 01 00 00 00       	mov    $0x1,%eax
 842398f:	eb 05                	jmp    8423996 <_ZN16DB_MouseRegister14_updateHistoryEjiPc+0x82>
 8423991:	b8 00 00 00 00       	mov    $0x0,%eax
 8423996:	84 c0                	test   %al,%al
 8423998:	74 0a                	je     84239a4 <_ZN16DB_MouseRegister14_updateHistoryEjiPc+0x90>
 842399a:	b8 00 00 00 00       	mov    $0x0,%eax
 842399f:	e9 17 01 00 00       	jmp    8423abb <_ZN16DB_MouseRegister14_updateHistoryEjiPc+0x1a7>
 84239a4:	c7 44 24 0c 24 00 00 	movl   $0x24,0xc(%esp)
 84239ab:	00 
 84239ac:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84239af:	89 44 24 08          	mov    %eax,0x8(%esp)
 84239b3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84239ba:	00 
 84239bb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84239be:	89 04 24             	mov    %eax,(%esp)
 84239c1:	e8 24 94 cc ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 84239c6:	83 f0 01             	xor    $0x1,%eax
 84239c9:	84 c0                	test   %al,%al
 84239cb:	74 0a                	je     84239d7 <_ZN16DB_MouseRegister14_updateHistoryEjiPc+0xc3>
 84239cd:	b8 00 00 00 00       	mov    $0x0,%eax
 84239d2:	e9 e4 00 00 00       	jmp    8423abb <_ZN16DB_MouseRegister14_updateHistoryEjiPc+0x1a7>
 84239d7:	c7 45 ea 00 00 00 00 	movl   $0x0,-0x16(%ebp)
 84239de:	c7 45 ee 00 00 00 00 	movl   $0x0,-0x12(%ebp)
 84239e5:	66 c7 45 f2 00 00    	movw   $0x0,-0xe(%ebp)
 84239eb:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84239f2:	e8 a7 82 ca ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84239f7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84239fa:	8d 45 94             	lea    -0x6c(%ebp),%eax
 84239fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8423a01:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8423a04:	89 04 24             	mov    %eax,(%esp)
 8423a07:	e8 54 a9 c5 ff       	call   807e360 <localtime_r@plt>
 8423a0c:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8423a0f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8423a13:	c7 44 24 08 4d da c4 	movl   $0x8c4da4d,0x8(%esp)
 8423a1a:	08 
 8423a1b:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 8423a22:	00 
 8423a23:	8d 45 ea             	lea    -0x16(%ebp),%eax
 8423a26:	89 04 24             	mov    %eax,(%esp)
 8423a29:	e8 92 a1 c5 ff       	call   807dbc0 <strftime@plt>
 8423a2e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8423a35:	00 
 8423a36:	8b 45 08             	mov    0x8(%ebp),%eax
 8423a39:	89 04 24             	mov    %eax,(%esp)
 8423a3c:	e8 0a 56 ce ff       	call   810904b <_Z14NumberToStringji>
 8423a41:	8b 55 10             	mov    0x10(%ebp),%edx
 8423a44:	89 54 24 18          	mov    %edx,0x18(%esp)
 8423a48:	8b 55 0c             	mov    0xc(%ebp),%edx
 8423a4b:	89 54 24 14          	mov    %edx,0x14(%esp)
 8423a4f:	8d 55 c0             	lea    -0x40(%ebp),%edx
 8423a52:	89 54 24 10          	mov    %edx,0x10(%esp)
 8423a56:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8423a5a:	8d 45 ea             	lea    -0x16(%ebp),%eax
 8423a5d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8423a61:	c7 44 24 04 54 da c4 	movl   $0x8c4da54,0x4(%esp)
 8423a68:	08 
 8423a69:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8423a6c:	89 04 24             	mov    %eax,(%esp)
 8423a6f:	e8 4c 07 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8423a74:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8423a7b:	00 
 8423a7c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8423a7f:	89 04 24             	mov    %eax,(%esp)
 8423a82:	e8 9f 08 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8423a87:	83 f0 01             	xor    $0x1,%eax
 8423a8a:	84 c0                	test   %al,%al
 8423a8c:	75 11                	jne    8423a9f <_ZN16DB_MouseRegister14_updateHistoryEjiPc+0x18b>
 8423a8e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8423a91:	89 04 24             	mov    %eax,(%esp)
 8423a94:	e8 77 08 fd ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8423a99:	09 d0                	or     %edx,%eax
 8423a9b:	85 c0                	test   %eax,%eax
 8423a9d:	75 07                	jne    8423aa6 <_ZN16DB_MouseRegister14_updateHistoryEjiPc+0x192>
 8423a9f:	b8 01 00 00 00       	mov    $0x1,%eax
 8423aa4:	eb 05                	jmp    8423aab <_ZN16DB_MouseRegister14_updateHistoryEjiPc+0x197>
 8423aa6:	b8 00 00 00 00       	mov    $0x0,%eax
 8423aab:	84 c0                	test   %al,%al
 8423aad:	74 07                	je     8423ab6 <_ZN16DB_MouseRegister14_updateHistoryEjiPc+0x1a2>
 8423aaf:	b8 00 00 00 00       	mov    $0x0,%eax
 8423ab4:	eb 05                	jmp    8423abb <_ZN16DB_MouseRegister14_updateHistoryEjiPc+0x1a7>
 8423ab6:	b8 01 00 00 00       	mov    $0x1,%eax
 8423abb:	c9                   	leave
 8423abc:	c3                   	ret
 8423abd:	90                   	nop

```

```c
// DB_MouseRegister::_updateHistory @ 0x8423914

/* DB_MouseRegister::_updateHistory(unsigned int, int, char*) */

bool DB_MouseRegister::_updateHistory(uint param_1,int param_2,char *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  tm local_70;
  char local_44 [36];
  time_t local_20;
  char local_1a [10];
  MySQL *local_10;
  
  local_10 = (MySQL *)_getDBHandleForDevideAccountDB();
  uVar3 = NumberToString(param_1,0);
  MySQL::set_query(local_10,"seLect mousepass from member_mousepass where m_id=%s",uVar3);
  cVar2 = MySQL::exec(local_10,true);
  if (((cVar2 == '\x01') && (iVar4 = MySQL::get_n_rows(local_10), iVar4 != 0)) &&
     (cVar2 = MySQL::fetch(local_10), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    cVar2 = MySQL::get_str(local_10,0,local_44,0x24);
    if (cVar2 == '\x01') {
      local_1a[0] = '\0';
      local_1a[1] = '\0';
      local_1a[2] = '\0';
      local_1a[3] = '\0';
      local_1a[4] = '\0';
      local_1a[5] = '\0';
      local_1a[6] = '\0';
      local_1a[7] = '\0';
      local_1a[8] = '\0';
      local_1a[9] = '\0';
      local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      localtime_r(&local_20,&local_70);
      strftime(local_1a,10,"%Y%m",&local_70);
      uVar3 = NumberToString(param_1,0);
      MySQL::set_query(local_10,
                       "inSert into member_mousepass_history_%s (occ_time, m_id, pre_mousepass, modify_type, ip_info, port_info) values (now(),%s,\'%s\',%d,\'%s\',\'\')"
                       ,local_1a,uVar3,local_44,param_2,param_3);
      cVar2 = MySQL::exec(local_10,true);
      if ((cVar2 == '\x01') && (lVar5 = MySQL::getAffectedRowCount(local_10), lVar5 != 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      return !bVar1;
    }
    return false;
  }
  return false;
}

```

---

## checkPassword

```asm
// === 08422c8a DB_MouseRegister::checkPassword  [0x08422c8a-0x8422e69] ===
 8422c8a:	55                   	push   %ebp
 8422c8b:	89 e5                	mov    %esp,%ebp
 8422c8d:	83 ec 78             	sub    $0x78,%esp
 8422c90:	8b 45 10             	mov    0x10(%ebp),%eax
 8422c93:	88 45 a4             	mov    %al,-0x5c(%ebp)
 8422c96:	e8 9d fc ff ff       	call   8422938 <_ZN16DB_MouseRegister30_getDBHandleForDevideAccountDBEv>
 8422c9b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8422c9e:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8422ca1:	c6 00 00             	movb   $0x0,(%eax)
 8422ca4:	8b 45 18             	mov    0x18(%ebp),%eax
 8422ca7:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8422cad:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 8422cb4:	00 
 8422cb5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8422cbc:	00 
 8422cbd:	8b 45 20             	mov    0x20(%ebp),%eax
 8422cc0:	89 04 24             	mov    %eax,(%esp)
 8422cc3:	e8 f8 af c5 ff       	call   807dcc0 <memset@plt>
 8422cc8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8422ccf:	00 
 8422cd0:	8b 45 08             	mov    0x8(%ebp),%eax
 8422cd3:	89 04 24             	mov    %eax,(%esp)
 8422cd6:	e8 70 63 ce ff       	call   810904b <_Z14NumberToStringji>
 8422cdb:	89 44 24 08          	mov    %eax,0x8(%esp)
 8422cdf:	c7 44 24 04 88 d4 c4 	movl   $0x8c4d488,0x4(%esp)
 8422ce6:	08 
 8422ce7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8422cea:	89 04 24             	mov    %eax,(%esp)
 8422ced:	e8 ce 14 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8422cf2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8422cf9:	00 
 8422cfa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8422cfd:	89 04 24             	mov    %eax,(%esp)
 8422d00:	e8 21 16 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8422d05:	83 f0 01             	xor    $0x1,%eax
 8422d08:	84 c0                	test   %al,%al
 8422d0a:	74 0a                	je     8422d16 <_ZN16DB_MouseRegister13checkPasswordEjPKcbRiS2_RbPcS4_+0x8c>
 8422d0c:	b8 01 00 00 00       	mov    $0x1,%eax
 8422d11:	e9 51 01 00 00       	jmp    8422e67 <_ZN16DB_MouseRegister13checkPasswordEjPKcbRiS2_RbPcS4_+0x1dd>
 8422d16:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8422d19:	89 04 24             	mov    %eax,(%esp)
 8422d1c:	e8 4b f6 cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8422d21:	85 c0                	test   %eax,%eax
 8422d23:	0f 94 c0             	sete   %al
 8422d26:	84 c0                	test   %al,%al
 8422d28:	74 0a                	je     8422d34 <_ZN16DB_MouseRegister13checkPasswordEjPKcbRiS2_RbPcS4_+0xaa>
 8422d2a:	b8 00 00 00 00       	mov    $0x0,%eax
 8422d2f:	e9 33 01 00 00       	jmp    8422e67 <_ZN16DB_MouseRegister13checkPasswordEjPKcbRiS2_RbPcS4_+0x1dd>
 8422d34:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8422d37:	89 04 24             	mov    %eax,(%esp)
 8422d3a:	e8 7d 17 fd ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8422d3f:	83 f0 01             	xor    $0x1,%eax
 8422d42:	84 c0                	test   %al,%al
 8422d44:	74 0a                	je     8422d50 <_ZN16DB_MouseRegister13checkPasswordEjPKcbRiS2_RbPcS4_+0xc6>
 8422d46:	b8 01 00 00 00       	mov    $0x1,%eax
 8422d4b:	e9 17 01 00 00       	jmp    8422e67 <_ZN16DB_MouseRegister13checkPasswordEjPKcbRiS2_RbPcS4_+0x1dd>
 8422d50:	c7 44 24 0c 24 00 00 	movl   $0x24,0xc(%esp)
 8422d57:	00 
 8422d58:	8b 45 20             	mov    0x20(%ebp),%eax
 8422d5b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8422d5f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8422d66:	00 
 8422d67:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8422d6a:	89 04 24             	mov    %eax,(%esp)
 8422d6d:	e8 78 a0 cc ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 8422d72:	83 f0 01             	xor    $0x1,%eax
 8422d75:	84 c0                	test   %al,%al
 8422d77:	74 0a                	je     8422d83 <_ZN16DB_MouseRegister13checkPasswordEjPKcbRiS2_RbPcS4_+0xf9>
 8422d79:	b8 01 00 00 00       	mov    $0x1,%eax
 8422d7e:	e9 e4 00 00 00       	jmp    8422e67 <_ZN16DB_MouseRegister13checkPasswordEjPKcbRiS2_RbPcS4_+0x1dd>
 8422d83:	8b 45 14             	mov    0x14(%ebp),%eax
 8422d86:	89 44 24 08          	mov    %eax,0x8(%esp)
 8422d8a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8422d91:	00 
 8422d92:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8422d95:	89 04 24             	mov    %eax,(%esp)
 8422d98:	e8 8f 3b cf ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8422d9d:	83 f0 01             	xor    $0x1,%eax
 8422da0:	84 c0                	test   %al,%al
 8422da2:	74 0a                	je     8422dae <_ZN16DB_MouseRegister13checkPasswordEjPKcbRiS2_RbPcS4_+0x124>
 8422da4:	b8 01 00 00 00       	mov    $0x1,%eax
 8422da9:	e9 b9 00 00 00       	jmp    8422e67 <_ZN16DB_MouseRegister13checkPasswordEjPKcbRiS2_RbPcS4_+0x1dd>
 8422dae:	8b 45 18             	mov    0x18(%ebp),%eax
 8422db1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8422db5:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8422dbc:	00 
 8422dbd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8422dc0:	89 04 24             	mov    %eax,(%esp)
 8422dc3:	e8 64 3b cf ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8422dc8:	83 f0 01             	xor    $0x1,%eax
 8422dcb:	84 c0                	test   %al,%al
 8422dcd:	74 0a                	je     8422dd9 <_ZN16DB_MouseRegister13checkPasswordEjPKcbRiS2_RbPcS4_+0x14f>
 8422dcf:	b8 01 00 00 00       	mov    $0x1,%eax
 8422dd4:	e9 8e 00 00 00       	jmp    8422e67 <_ZN16DB_MouseRegister13checkPasswordEjPKcbRiS2_RbPcS4_+0x1dd>
 8422dd9:	80 7d a4 00          	cmpb   $0x0,-0x5c(%ebp)
 8422ddd:	74 11                	je     8422df0 <_ZN16DB_MouseRegister13checkPasswordEjPKcbRiS2_RbPcS4_+0x166>
 8422ddf:	8b 45 14             	mov    0x14(%ebp),%eax
 8422de2:	8b 00                	mov    (%eax),%eax
 8422de4:	83 f8 02             	cmp    $0x2,%eax
 8422de7:	7e 07                	jle    8422df0 <_ZN16DB_MouseRegister13checkPasswordEjPKcbRiS2_RbPcS4_+0x166>
 8422de9:	b8 49 00 00 00       	mov    $0x49,%eax
 8422dee:	eb 77                	jmp    8422e67 <_ZN16DB_MouseRegister13checkPasswordEjPKcbRiS2_RbPcS4_+0x1dd>
 8422df0:	8d 45 f3             	lea    -0xd(%ebp),%eax
 8422df3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8422df7:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8422dfe:	00 
 8422dff:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8422e02:	89 04 24             	mov    %eax,(%esp)
 8422e05:	e8 4a b0 cd ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 8422e0a:	83 f0 01             	xor    $0x1,%eax
 8422e0d:	84 c0                	test   %al,%al
 8422e0f:	74 07                	je     8422e18 <_ZN16DB_MouseRegister13checkPasswordEjPKcbRiS2_RbPcS4_+0x18e>
 8422e11:	b8 01 00 00 00       	mov    $0x1,%eax
 8422e16:	eb 4f                	jmp    8422e67 <_ZN16DB_MouseRegister13checkPasswordEjPKcbRiS2_RbPcS4_+0x1dd>
 8422e18:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8422e1c:	3c 01                	cmp    $0x1,%al
 8422e1e:	75 07                	jne    8422e27 <_ZN16DB_MouseRegister13checkPasswordEjPKcbRiS2_RbPcS4_+0x19d>
 8422e20:	b8 a6 00 00 00       	mov    $0xa6,%eax
 8422e25:	eb 40                	jmp    8422e67 <_ZN16DB_MouseRegister13checkPasswordEjPKcbRiS2_RbPcS4_+0x1dd>
 8422e27:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 8422e2e:	00 
 8422e2f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8422e32:	89 44 24 04          	mov    %eax,0x4(%esp)
 8422e36:	8d 45 cf             	lea    -0x31(%ebp),%eax
 8422e39:	89 04 24             	mov    %eax,(%esp)
 8422e3c:	e8 8f aa c5 ff       	call   807d8d0 <strncpy@plt>
 8422e41:	a1 68 be 40 09       	mov    0x940be68,%eax
 8422e46:	8d 55 ab             	lea    -0x55(%ebp),%edx
 8422e49:	89 54 24 08          	mov    %edx,0x8(%esp)
 8422e4d:	8d 55 cf             	lea    -0x31(%ebp),%edx
 8422e50:	89 54 24 04          	mov    %edx,0x4(%esp)
 8422e54:	89 04 24             	mov    %eax,(%esp)
 8422e57:	e8 3c 95 04 00       	call   846c398 <_Z11encryptAES_P9CRijndaelPcS1_>
 8422e5c:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8422e5f:	c6 00 01             	movb   $0x1,(%eax)
 8422e62:	b8 00 00 00 00       	mov    $0x0,%eax
 8422e67:	c9                   	leave
 8422e68:	c3                   	ret
 8422e69:	90                   	nop

```

```c
// DB_MouseRegister::checkPassword @ 0x8422c8a

/* DB_MouseRegister::checkPassword(unsigned int, char const*, bool, int&, int&, bool&, char*, char*)
    */

undefined4
DB_MouseRegister::checkPassword
          (uint param_1,char *param_2,bool param_3,int *param_4,int *param_5,bool *param_6,
          char *param_7,char *param_8)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char local_59 [36];
  char local_35 [36];
  char local_11;
  MySQL *local_10;
  
  local_10 = (MySQL *)_getDBHandleForDevideAccountDB();
  *param_6 = false;
  *param_5 = 0;
  memset(param_7,0,0x24);
  uVar2 = NumberToString(param_1,0);
  MySQL::set_query(local_10,
                   "seLect mousepass,fail_cnt,cancel_cnt, version_info from member_mousepass where m_id=%s and enable_flag = \'1\'"
                   ,uVar2);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_10);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      cVar1 = MySQL::fetch(local_10);
      if (cVar1 == '\x01') {
        cVar1 = MySQL::get_str(local_10,0,param_7,0x24);
        if (cVar1 == '\x01') {
          cVar1 = MySQL::get_int(local_10,1,param_4);
          if (cVar1 == '\x01') {
            cVar1 = MySQL::get_int(local_10,2,param_5);
            if (cVar1 == '\x01') {
              if ((param_3) && (2 < *param_4)) {
                uVar2 = 0x49;
              }
              else {
                cVar1 = MySQL::get_byte(local_10,3,&local_11);
                if (cVar1 == '\x01') {
                  if (local_11 == '\x01') {
                    uVar2 = 0xa6;
                  }
                  else {
                    strncpy(local_35,param_2,0x24);
                    encryptAES_(GlobalData::s_pcryptRijndael_MousePassword_,local_35,local_59);
                    *param_6 = true;
                    uVar2 = 0;
                  }
                }
                else {
                  uVar2 = 1;
                }
              }
            }
            else {
              uVar2 = 1;
            }
          }
          else {
            uVar2 = 1;
          }
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 1;
      }
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## convertPassPadInfo

```asm
// === 08422e6a DB_MouseRegister::convertPassPadInfo  [0x08422e6a-0x84231b5] ===
 8422e6a:	55                   	push   %ebp
 8422e6b:	89 e5                	mov    %esp,%ebp
 8422e6d:	83 ec 68             	sub    $0x68,%esp
 8422e70:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8422e73:	c6 00 00             	movb   $0x0,(%eax)
 8422e76:	e8 bd fa ff ff       	call   8422938 <_ZN16DB_MouseRegister30_getDBHandleForDevideAccountDBEv>
 8422e7b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8422e7e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8422e85:	00 
 8422e86:	8b 45 08             	mov    0x8(%ebp),%eax
 8422e89:	89 04 24             	mov    %eax,(%esp)
 8422e8c:	e8 ba 61 ce ff       	call   810904b <_Z14NumberToStringji>
 8422e91:	89 44 24 08          	mov    %eax,0x8(%esp)
 8422e95:	c7 44 24 04 f8 d4 c4 	movl   $0x8c4d4f8,0x4(%esp)
 8422e9c:	08 
 8422e9d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8422ea0:	89 04 24             	mov    %eax,(%esp)
 8422ea3:	e8 18 13 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8422ea8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8422eaf:	00 
 8422eb0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8422eb3:	89 04 24             	mov    %eax,(%esp)
 8422eb6:	e8 6b 14 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8422ebb:	83 f0 01             	xor    $0x1,%eax
 8422ebe:	84 c0                	test   %al,%al
 8422ec0:	74 0a                	je     8422ecc <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0x62>
 8422ec2:	b8 01 00 00 00       	mov    $0x1,%eax
 8422ec7:	e9 e8 02 00 00       	jmp    84231b4 <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0x34a>
 8422ecc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8422ecf:	89 04 24             	mov    %eax,(%esp)
 8422ed2:	e8 95 f4 cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8422ed7:	85 c0                	test   %eax,%eax
 8422ed9:	0f 94 c0             	sete   %al
 8422edc:	84 c0                	test   %al,%al
 8422ede:	74 10                	je     8422ef0 <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0x86>
 8422ee0:	8b 45 14             	mov    0x14(%ebp),%eax
 8422ee3:	c6 00 00             	movb   $0x0,(%eax)
 8422ee6:	b8 00 00 00 00       	mov    $0x0,%eax
 8422eeb:	e9 c4 02 00 00       	jmp    84231b4 <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0x34a>
 8422ef0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8422ef3:	89 04 24             	mov    %eax,(%esp)
 8422ef6:	e8 c1 15 fd ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8422efb:	83 f0 01             	xor    $0x1,%eax
 8422efe:	84 c0                	test   %al,%al
 8422f00:	74 0a                	je     8422f0c <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0xa2>
 8422f02:	b8 01 00 00 00       	mov    $0x1,%eax
 8422f07:	e9 a8 02 00 00       	jmp    84231b4 <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0x34a>
 8422f0c:	c7 44 24 0c 24 00 00 	movl   $0x24,0xc(%esp)
 8422f13:	00 
 8422f14:	8b 45 20             	mov    0x20(%ebp),%eax
 8422f17:	89 44 24 08          	mov    %eax,0x8(%esp)
 8422f1b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8422f22:	00 
 8422f23:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8422f26:	89 04 24             	mov    %eax,(%esp)
 8422f29:	e8 bc 9e cc ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 8422f2e:	83 f0 01             	xor    $0x1,%eax
 8422f31:	84 c0                	test   %al,%al
 8422f33:	74 0a                	je     8422f3f <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0xd5>
 8422f35:	b8 01 00 00 00       	mov    $0x1,%eax
 8422f3a:	e9 75 02 00 00       	jmp    84231b4 <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0x34a>
 8422f3f:	8b 45 10             	mov    0x10(%ebp),%eax
 8422f42:	89 44 24 08          	mov    %eax,0x8(%esp)
 8422f46:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8422f4d:	00 
 8422f4e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8422f51:	89 04 24             	mov    %eax,(%esp)
 8422f54:	e8 d3 39 cf ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8422f59:	83 f0 01             	xor    $0x1,%eax
 8422f5c:	84 c0                	test   %al,%al
 8422f5e:	74 0a                	je     8422f6a <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0x100>
 8422f60:	b8 01 00 00 00       	mov    $0x1,%eax
 8422f65:	e9 4a 02 00 00       	jmp    84231b4 <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0x34a>
 8422f6a:	8b 45 18             	mov    0x18(%ebp),%eax
 8422f6d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8422f71:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8422f78:	00 
 8422f79:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8422f7c:	89 04 24             	mov    %eax,(%esp)
 8422f7f:	e8 a8 39 cf ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8422f84:	83 f0 01             	xor    $0x1,%eax
 8422f87:	84 c0                	test   %al,%al
 8422f89:	74 0a                	je     8422f95 <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0x12b>
 8422f8b:	b8 01 00 00 00       	mov    $0x1,%eax
 8422f90:	e9 1f 02 00 00       	jmp    84231b4 <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0x34a>
 8422f95:	8d 45 f3             	lea    -0xd(%ebp),%eax
 8422f98:	89 44 24 08          	mov    %eax,0x8(%esp)
 8422f9c:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8422fa3:	00 
 8422fa4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8422fa7:	89 04 24             	mov    %eax,(%esp)
 8422faa:	e8 a5 ae cd ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 8422faf:	83 f0 01             	xor    $0x1,%eax
 8422fb2:	84 c0                	test   %al,%al
 8422fb4:	74 0a                	je     8422fc0 <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0x156>
 8422fb6:	b8 01 00 00 00       	mov    $0x1,%eax
 8422fbb:	e9 f4 01 00 00       	jmp    84231b4 <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0x34a>
 8422fc0:	8b 45 2c             	mov    0x2c(%ebp),%eax
 8422fc3:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8422fc9:	8b 45 2c             	mov    0x2c(%ebp),%eax
 8422fcc:	89 44 24 08          	mov    %eax,0x8(%esp)
 8422fd0:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8422fd7:	00 
 8422fd8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8422fdb:	89 04 24             	mov    %eax,(%esp)
 8422fde:	e8 0f f3 cb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8422fe3:	83 f0 01             	xor    $0x1,%eax
 8422fe6:	84 c0                	test   %al,%al
 8422fe8:	74 0a                	je     8422ff4 <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0x18a>
 8422fea:	b8 01 00 00 00       	mov    $0x1,%eax
 8422fef:	e9 c0 01 00 00       	jmp    84231b4 <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0x34a>
 8422ff4:	c6 45 f2 00          	movb   $0x0,-0xe(%ebp)
 8422ff8:	8d 45 f2             	lea    -0xe(%ebp),%eax
 8422ffb:	89 44 24 08          	mov    %eax,0x8(%esp)
 8422fff:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8423006:	00 
 8423007:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842300a:	89 04 24             	mov    %eax,(%esp)
 842300d:	e8 42 ae cd ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 8423012:	83 f0 01             	xor    $0x1,%eax
 8423015:	84 c0                	test   %al,%al
 8423017:	74 0a                	je     8423023 <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0x1b9>
 8423019:	b8 01 00 00 00       	mov    $0x1,%eax
 842301e:	e9 91 01 00 00       	jmp    84231b4 <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0x34a>
 8423023:	0f b6 45 f2          	movzbl -0xe(%ebp),%eax
 8423027:	84 c0                	test   %al,%al
 8423029:	0f 95 c2             	setne  %dl
 842302c:	8b 45 30             	mov    0x30(%ebp),%eax
 842302f:	88 10                	mov    %dl,(%eax)
 8423031:	8b 45 24             	mov    0x24(%ebp),%eax
 8423034:	c6 00 00             	movb   $0x0,(%eax)
 8423037:	8b 45 2c             	mov    0x2c(%ebp),%eax
 842303a:	8b 00                	mov    (%eax),%eax
 842303c:	85 c0                	test   %eax,%eax
 842303e:	74 06                	je     8423046 <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0x1dc>
 8423040:	8b 45 24             	mov    0x24(%ebp),%eax
 8423043:	c6 00 01             	movb   $0x1,(%eax)
 8423046:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 842304a:	3c 02                	cmp    $0x2,%al
 842304c:	75 16                	jne    8423064 <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0x1fa>
 842304e:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8423051:	c6 00 01             	movb   $0x1,(%eax)
 8423054:	8b 45 14             	mov    0x14(%ebp),%eax
 8423057:	c6 00 02             	movb   $0x2,(%eax)
 842305a:	b8 00 00 00 00       	mov    $0x0,%eax
 842305f:	e9 50 01 00 00       	jmp    84231b4 <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0x34a>
 8423064:	8b 45 14             	mov    0x14(%ebp),%eax
 8423067:	c6 00 01             	movb   $0x1,(%eax)
 842306a:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 8423071:	00 
 8423072:	8b 45 0c             	mov    0xc(%ebp),%eax
 8423075:	89 44 24 04          	mov    %eax,0x4(%esp)
 8423079:	8d 45 ce             	lea    -0x32(%ebp),%eax
 842307c:	89 04 24             	mov    %eax,(%esp)
 842307f:	e8 4c a8 c5 ff       	call   807d8d0 <strncpy@plt>
 8423084:	a1 68 be 40 09       	mov    0x940be68,%eax
 8423089:	8d 55 aa             	lea    -0x56(%ebp),%edx
 842308c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8423090:	8d 55 ce             	lea    -0x32(%ebp),%edx
 8423093:	89 54 24 04          	mov    %edx,0x4(%esp)
 8423097:	89 04 24             	mov    %eax,(%esp)
 842309a:	e8 f9 92 04 00       	call   846c398 <_Z11encryptAES_P9CRijndaelPcS1_>
 842309f:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 84230a6:	00 
 84230a7:	8d 45 aa             	lea    -0x56(%ebp),%eax
 84230aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 84230ae:	8b 45 20             	mov    0x20(%ebp),%eax
 84230b1:	89 04 24             	mov    %eax,(%esp)
 84230b4:	e8 07 b8 c5 ff       	call   807e8c0 <strncmp@plt>
 84230b9:	85 c0                	test   %eax,%eax
 84230bb:	74 46                	je     8423103 <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0x299>
 84230bd:	8b 45 10             	mov    0x10(%ebp),%eax
 84230c0:	8b 00                	mov    (%eax),%eax
 84230c2:	8d 50 01             	lea    0x1(%eax),%edx
 84230c5:	8b 45 10             	mov    0x10(%ebp),%eax
 84230c8:	89 10                	mov    %edx,(%eax)
 84230ca:	8b 45 10             	mov    0x10(%ebp),%eax
 84230cd:	8b 00                	mov    (%eax),%eax
 84230cf:	8b 55 28             	mov    0x28(%ebp),%edx
 84230d2:	89 54 24 08          	mov    %edx,0x8(%esp)
 84230d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84230da:	8b 45 08             	mov    0x8(%ebp),%eax
 84230dd:	89 04 24             	mov    %eax,(%esp)
 84230e0:	e8 d1 00 00 00       	call   84231b6 <_ZN16DB_MouseRegister14_updateFailCntEjiPc>
 84230e5:	8b 45 10             	mov    0x10(%ebp),%eax
 84230e8:	8b 00                	mov    (%eax),%eax
 84230ea:	83 f8 09             	cmp    $0x9,%eax
 84230ed:	7e 0a                	jle    84230f9 <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0x28f>
 84230ef:	b8 49 00 00 00       	mov    $0x49,%eax
 84230f4:	e9 bb 00 00 00       	jmp    84231b4 <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0x34a>
 84230f9:	b8 48 00 00 00       	mov    $0x48,%eax
 84230fe:	e9 b1 00 00 00       	jmp    84231b4 <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0x34a>
 8423103:	8b 45 10             	mov    0x10(%ebp),%eax
 8423106:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 842310c:	8b 45 18             	mov    0x18(%ebp),%eax
 842310f:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8423115:	8b 45 28             	mov    0x28(%ebp),%eax
 8423118:	89 44 24 08          	mov    %eax,0x8(%esp)
 842311c:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 8423123:	00 
 8423124:	8b 45 08             	mov    0x8(%ebp),%eax
 8423127:	89 04 24             	mov    %eax,(%esp)
 842312a:	e8 e5 07 00 00       	call   8423914 <_ZN16DB_MouseRegister14_updateHistoryEjiPc>
 842312f:	83 f0 01             	xor    $0x1,%eax
 8423132:	84 c0                	test   %al,%al
 8423134:	74 07                	je     842313d <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0x2d3>
 8423136:	b8 01 00 00 00       	mov    $0x1,%eax
 842313b:	eb 77                	jmp    84231b4 <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0x34a>
 842313d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8423144:	00 
 8423145:	8b 45 08             	mov    0x8(%ebp),%eax
 8423148:	89 04 24             	mov    %eax,(%esp)
 842314b:	e8 fb 5e ce ff       	call   810904b <_Z14NumberToStringji>
 8423150:	89 44 24 08          	mov    %eax,0x8(%esp)
 8423154:	c7 44 24 04 bc d5 c4 	movl   $0x8c4d5bc,0x4(%esp)
 842315b:	08 
 842315c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842315f:	89 04 24             	mov    %eax,(%esp)
 8423162:	e8 59 10 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8423167:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842316e:	00 
 842316f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8423172:	89 04 24             	mov    %eax,(%esp)
 8423175:	e8 ac 11 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 842317a:	83 f0 01             	xor    $0x1,%eax
 842317d:	84 c0                	test   %al,%al
 842317f:	75 11                	jne    8423192 <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0x328>
 8423181:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8423184:	89 04 24             	mov    %eax,(%esp)
 8423187:	e8 84 11 fd ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 842318c:	09 d0                	or     %edx,%eax
 842318e:	85 c0                	test   %eax,%eax
 8423190:	75 07                	jne    8423199 <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0x32f>
 8423192:	b8 01 00 00 00       	mov    $0x1,%eax
 8423197:	eb 05                	jmp    842319e <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0x334>
 8423199:	b8 00 00 00 00       	mov    $0x0,%eax
 842319e:	84 c0                	test   %al,%al
 84231a0:	74 07                	je     84231a9 <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0x33f>
 84231a2:	b8 01 00 00 00       	mov    $0x1,%eax
 84231a7:	eb 0b                	jmp    84231b4 <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_+0x34a>
 84231a9:	8b 45 1c             	mov    0x1c(%ebp),%eax
 84231ac:	c6 00 00             	movb   $0x0,(%eax)
 84231af:	b8 00 00 00 00       	mov    $0x0,%eax
 84231b4:	c9                   	leave
 84231b5:	c3                   	ret

```

```c
// DB_MouseRegister::convertPassPadInfo @ 0x8422e6a

/* DB_MouseRegister::convertPassPadInfo(unsigned int, char*, int&, char&, int&, bool&, char*, bool&,
   char*, long&, bool&) */

bool DB_MouseRegister::convertPassPadInfo
               (uint param_1,char *param_2,int *param_3,char *param_4,int *param_5,bool *param_6,
               char *param_7,bool *param_8,char *param_9,long *param_10,bool *param_11)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  char local_5a [36];
  char local_36 [36];
  char local_12;
  char local_11;
  MySQL *local_10;
  
  *param_6 = false;
  local_10 = (MySQL *)_getDBHandleForDevideAccountDB();
  uVar3 = NumberToString(param_1,0);
  MySQL::set_query(local_10,
                   "seLect mousepass, fail_cnt, cancel_cnt, version_info, validity_time>unix_timestamp(now()), adddate(now(),interval -1 month) >= occ_time from member_mousepass where m_id=%s and enable_flag = \'1\'"
                   ,uVar3);
  cVar2 = MySQL::exec(local_10,true);
  if (cVar2 != '\x01') {
    return true;
  }
  iVar4 = MySQL::get_n_rows(local_10);
  if (iVar4 == 0) {
    *param_4 = '\0';
    return false;
  }
  cVar2 = MySQL::fetch(local_10);
  if (cVar2 != '\x01') {
    return true;
  }
  cVar2 = MySQL::get_str(local_10,0,param_7,0x24);
  if (cVar2 != '\x01') {
    return true;
  }
  cVar2 = MySQL::get_int(local_10,1,param_3);
  if (cVar2 != '\x01') {
    return true;
  }
  cVar2 = MySQL::get_int(local_10,2,param_5);
  if (cVar2 != '\x01') {
    return true;
  }
  cVar2 = MySQL::get_byte(local_10,3,&local_11);
  if (cVar2 != '\x01') {
    return true;
  }
  *param_10 = 0;
  cVar2 = MySQL::get_uint(local_10,4,(uint *)param_10);
  if (cVar2 != '\x01') {
    return true;
  }
  local_12 = '\0';
  cVar2 = MySQL::get_byte(local_10,5,&local_12);
  if (cVar2 != '\x01') {
    return true;
  }
  *param_11 = local_12 != '\0';
  *param_8 = false;
  if (*param_10 != 0) {
    *param_8 = true;
  }
  if (local_11 == '\x02') {
    *param_6 = true;
    *param_4 = '\x02';
    return false;
  }
  *param_4 = '\x01';
  strncpy(local_36,param_2,0x24);
  encryptAES_(GlobalData::s_pcryptRijndael_MousePassword_,local_36,local_5a);
  iVar4 = strncmp(param_7,local_5a,0x24);
  if (iVar4 != 0) {
    *param_3 = *param_3 + 1;
    _updateFailCnt(param_1,*param_3,param_9);
    if (*param_3 < 10) {
      return (bool)0x48;
    }
    return (bool)0x49;
  }
  *param_3 = 0;
  *param_5 = 0;
  cVar2 = _updateHistory(param_1,7,param_9);
  if (cVar2 != '\x01') {
    return true;
  }
  uVar3 = NumberToString(param_1,0);
  MySQL::set_query(local_10,"upDate member_mousepass set enable_flag = \'0\' where m_id=%s",uVar3);
  cVar2 = MySQL::exec(local_10,true);
  if ((cVar2 == '\x01') && (lVar5 = MySQL::getAffectedRowCount(local_10), lVar5 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    *param_6 = false;
  }
  return bVar1;
}

```

---

## dispatch

```asm
// === 08422964 DB_MouseRegister::dispatch  [0x08422964-0x8422c89] ===
 8422964:	55                   	push   %ebp
 8422965:	89 e5                	mov    %esp,%ebp
 8422967:	56                   	push   %esi
 8422968:	53                   	push   %ebx
 8422969:	81 ec 90 00 00 00    	sub    $0x90,%esp
 842296f:	e8 c4 ff ff ff       	call   8422938 <_ZN16DB_MouseRegister30_getDBHandleForDevideAccountDBEv>
 8422974:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8422977:	8b 45 14             	mov    0x14(%ebp),%eax
 842297a:	89 04 24             	mov    %eax,(%esp)
 842297d:	e8 da f3 02 00       	call   8451d5c <_ZN6Stream12GetOutBufferI18SIG_MOUSE_REGISTEREEPT_v>
 8422982:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8422985:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 842298c:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8422993:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 842299a:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84229a1:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84229a8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84229ab:	83 c0 48             	add    $0x48,%eax
 84229ae:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 84229b5:	00 
 84229b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84229ba:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84229bd:	89 04 24             	mov    %eax,(%esp)
 84229c0:	e8 0b af c5 ff       	call   807d8d0 <strncpy@plt>
 84229c5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84229c8:	83 c0 0f             	add    $0xf,%eax
 84229cb:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 84229d2:	00 
 84229d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84229d7:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84229da:	89 04 24             	mov    %eax,(%esp)
 84229dd:	e8 ee ae c5 ff       	call   807d8d0 <strncpy@plt>
 84229e2:	a1 68 be 40 09       	mov    0x940be68,%eax
 84229e7:	8d 55 88             	lea    -0x78(%ebp),%edx
 84229ea:	89 54 24 08          	mov    %edx,0x8(%esp)
 84229ee:	8d 55 ac             	lea    -0x54(%ebp),%edx
 84229f1:	89 54 24 04          	mov    %edx,0x4(%esp)
 84229f5:	89 04 24             	mov    %eax,(%esp)
 84229f8:	e8 9b 99 04 00       	call   846c398 <_Z11encryptAES_P9CRijndaelPcS1_>
 84229fd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8422a00:	8d 50 23             	lea    0x23(%eax),%edx
 8422a03:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 8422a0a:	00 
 8422a0b:	8d 45 88             	lea    -0x78(%ebp),%eax
 8422a0e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8422a12:	89 14 24             	mov    %edx,(%esp)
 8422a15:	e8 a6 be c5 ff       	call   807e8c0 <strncmp@plt>
 8422a1a:	85 c0                	test   %eax,%eax
 8422a1c:	0f 85 d4 00 00 00    	jne    8422af6 <_ZN16DB_MouseRegister8dispatchEiiP6Stream+0x192>
 8422a22:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8422a27:	c7 44 24 08 59 5b 00 	movl   $0x5b59,0x8(%esp)
 8422a2e:	00 
 8422a2f:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8422a36:	08 
 8422a37:	89 04 24             	mov    %eax,(%esp)
 8422a3a:	e8 47 d0 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8422a3f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8422a46:	00 
 8422a47:	89 44 24 04          	mov    %eax,0x4(%esp)
 8422a4b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8422a4e:	89 04 24             	mov    %eax,(%esp)
 8422a51:	e8 d0 61 ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8422a56:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8422a59:	89 04 24             	mov    %eax,(%esp)
 8422a5c:	e8 e5 61 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8422a61:	c7 44 24 04 46 02 00 	movl   $0x246,0x4(%esp)
 8422a68:	00 
 8422a69:	89 04 24             	mov    %eax,(%esp)
 8422a6c:	e8 e5 61 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8422a71:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8422a74:	89 04 24             	mov    %eax,(%esp)
 8422a77:	e8 ca 61 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8422a7c:	8b 55 10             	mov    0x10(%ebp),%edx
 8422a7f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8422a83:	89 04 24             	mov    %eax,(%esp)
 8422a86:	e8 cb 61 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8422a8b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8422a8e:	89 04 24             	mov    %eax,(%esp)
 8422a91:	e8 b8 61 ca ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8422a96:	89 04 24             	mov    %eax,(%esp)
 8422a99:	e8 12 f3 02 00       	call   8451db0 <_ZN12CStreamGuard11GetInBufferI32SIG_GOBLIN_PAD_ADVICE_CHANGE_PWDEEPT_v>
 8422a9e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8422aa1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8422aa4:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8422aaa:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8422aaf:	8d 55 d0             	lea    -0x30(%ebp),%edx
 8422ab2:	89 54 24 08          	mov    %edx,0x8(%esp)
 8422ab6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8422abd:	00 
 8422abe:	89 04 24             	mov    %eax,(%esp)
 8422ac1:	e8 18 e5 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8422ac6:	bb 00 00 00 00       	mov    $0x0,%ebx
 8422acb:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8422ace:	89 04 24             	mov    %eax,(%esp)
 8422ad1:	e8 fc 9d 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8422ad6:	e9 a2 01 00 00       	jmp    8422c7d <_ZN16DB_MouseRegister8dispatchEiiP6Stream+0x319>
 8422adb:	89 d3                	mov    %edx,%ebx
 8422add:	89 c6                	mov    %eax,%esi
 8422adf:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8422ae2:	89 04 24             	mov    %eax,(%esp)
 8422ae5:	e8 e8 9d 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8422aea:	89 f0                	mov    %esi,%eax
 8422aec:	89 da                	mov    %ebx,%edx
 8422aee:	89 04 24             	mov    %eax,(%esp)
 8422af1:	e8 5a 0c 6c 00       	call   8ae3750 <_Unwind_Resume>
 8422af6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8422af9:	8b 40 04             	mov    0x4(%eax),%eax
 8422afc:	83 f8 02             	cmp    $0x2,%eax
 8422aff:	0f 84 85 00 00 00    	je     8422b8a <_ZN16DB_MouseRegister8dispatchEiiP6Stream+0x226>
 8422b05:	83 f8 03             	cmp    $0x3,%eax
 8422b08:	0f 84 ef 00 00 00    	je     8422bfd <_ZN16DB_MouseRegister8dispatchEiiP6Stream+0x299>
 8422b0e:	83 f8 01             	cmp    $0x1,%eax
 8422b11:	0f 85 2e 01 00 00    	jne    8422c45 <_ZN16DB_MouseRegister8dispatchEiiP6Stream+0x2e1>
 8422b17:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8422b1a:	8b 00                	mov    (%eax),%eax
 8422b1c:	8b 55 10             	mov    0x10(%ebp),%edx
 8422b1f:	89 54 24 10          	mov    %edx,0x10(%esp)
 8422b23:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8422b26:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8422b2a:	8d 55 88             	lea    -0x78(%ebp),%edx
 8422b2d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8422b31:	89 44 24 04          	mov    %eax,0x4(%esp)
 8422b35:	8b 45 08             	mov    0x8(%ebp),%eax
 8422b38:	89 04 24             	mov    %eax,(%esp)
 8422b3b:	e8 a0 07 00 00       	call   84232e0 <_ZN16DB_MouseRegister18_registNewPasswordEjPKcPci>
 8422b40:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8422b43:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8422b47:	0f 85 f4 00 00 00    	jne    8422c41 <_ZN16DB_MouseRegister8dispatchEiiP6Stream+0x2dd>
 8422b4d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8422b50:	c6 40 1a 01          	movb   $0x1,0x1a(%eax)
 8422b54:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8422b57:	c7 40 1f 00 00 00 00 	movl   $0x0,0x1f(%eax)
 8422b5e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8422b61:	c7 40 1b 00 00 00 00 	movl   $0x0,0x1b(%eax)
 8422b68:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8422b6b:	8d 50 23             	lea    0x23(%eax),%edx
 8422b6e:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 8422b75:	00 
 8422b76:	8d 45 88             	lea    -0x78(%ebp),%eax
 8422b79:	89 44 24 04          	mov    %eax,0x4(%esp)
 8422b7d:	89 14 24             	mov    %edx,(%esp)
 8422b80:	e8 1b ad c5 ff       	call   807d8a0 <memcpy@plt>
 8422b85:	e9 bb 00 00 00       	jmp    8422c45 <_ZN16DB_MouseRegister8dispatchEiiP6Stream+0x2e1>
 8422b8a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8422b8d:	0f b6 40 58          	movzbl 0x58(%eax),%eax
 8422b91:	0f b6 d0             	movzbl %al,%edx
 8422b94:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8422b97:	8b 00                	mov    (%eax),%eax
 8422b99:	89 54 24 14          	mov    %edx,0x14(%esp)
 8422b9d:	8b 55 10             	mov    0x10(%ebp),%edx
 8422ba0:	89 54 24 10          	mov    %edx,0x10(%esp)
 8422ba4:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8422ba7:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8422bab:	8d 55 88             	lea    -0x78(%ebp),%edx
 8422bae:	89 54 24 08          	mov    %edx,0x8(%esp)
 8422bb2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8422bb6:	8b 45 08             	mov    0x8(%ebp),%eax
 8422bb9:	89 04 24             	mov    %eax,(%esp)
 8422bbc:	e8 67 09 00 00       	call   8423528 <_ZN16DB_MouseRegister15_modifyPasswordEjPKcPcib>
 8422bc1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8422bc4:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8422bc8:	75 7a                	jne    8422c44 <_ZN16DB_MouseRegister8dispatchEiiP6Stream+0x2e0>
 8422bca:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8422bcd:	8d 50 23             	lea    0x23(%eax),%edx
 8422bd0:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 8422bd7:	00 
 8422bd8:	8d 45 88             	lea    -0x78(%ebp),%eax
 8422bdb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8422bdf:	89 14 24             	mov    %edx,(%esp)
 8422be2:	e8 b9 ac c5 ff       	call   807d8a0 <memcpy@plt>
 8422be7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8422bea:	c7 40 1f 00 00 00 00 	movl   $0x0,0x1f(%eax)
 8422bf1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8422bf4:	c7 40 1b 00 00 00 00 	movl   $0x0,0x1b(%eax)
 8422bfb:	eb 48                	jmp    8422c45 <_ZN16DB_MouseRegister8dispatchEiiP6Stream+0x2e1>
 8422bfd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8422c00:	8b 00                	mov    (%eax),%eax
 8422c02:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8422c05:	89 54 24 08          	mov    %edx,0x8(%esp)
 8422c09:	89 44 24 04          	mov    %eax,0x4(%esp)
 8422c0d:	8b 45 08             	mov    0x8(%ebp),%eax
 8422c10:	89 04 24             	mov    %eax,(%esp)
 8422c13:	e8 7c 0b 00 00       	call   8423794 <_ZN16DB_MouseRegister17_unregistPasswordEjPc>
 8422c18:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8422c1b:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8422c1f:	75 24                	jne    8422c45 <_ZN16DB_MouseRegister8dispatchEiiP6Stream+0x2e1>
 8422c21:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8422c24:	83 c0 23             	add    $0x23,%eax
 8422c27:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 8422c2e:	00 
 8422c2f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8422c36:	00 
 8422c37:	89 04 24             	mov    %eax,(%esp)
 8422c3a:	e8 81 b0 c5 ff       	call   807dcc0 <memset@plt>
 8422c3f:	eb 04                	jmp    8422c45 <_ZN16DB_MouseRegister8dispatchEiiP6Stream+0x2e1>
 8422c41:	90                   	nop
 8422c42:	eb 01                	jmp    8422c45 <_ZN16DB_MouseRegister8dispatchEiiP6Stream+0x2e1>
 8422c44:	90                   	nop
 8422c45:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8422c48:	8b 50 04             	mov    0x4(%eax),%edx
 8422c4b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8422c4e:	8b 00                	mov    (%eax),%eax
 8422c50:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 8422c53:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8422c57:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8422c5a:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8422c5e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8422c62:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8422c65:	89 54 24 08          	mov    %edx,0x8(%esp)
 8422c69:	89 44 24 04          	mov    %eax,0x4(%esp)
 8422c6d:	8b 45 08             	mov    0x8(%ebp),%eax
 8422c70:	89 04 24             	mov    %eax,(%esp)
 8422c73:	e8 46 0e 00 00       	call   8423abe <_ZN16DB_MouseRegister11_sendResultEjiiiP18SIG_MOUSE_REGISTER>
 8422c78:	bb 01 00 00 00       	mov    $0x1,%ebx
 8422c7d:	89 d8                	mov    %ebx,%eax
 8422c7f:	81 c4 90 00 00 00    	add    $0x90,%esp
 8422c85:	5b                   	pop    %ebx
 8422c86:	5e                   	pop    %esi
 8422c87:	5d                   	pop    %ebp
 8422c88:	c3                   	ret
 8422c89:	90                   	nop

```

```c
// DB_MouseRegister::dispatch @ 0x8422964

/* DB_MouseRegister::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_MouseRegister::dispatch(DB_MouseRegister *this,int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  int iVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  undefined4 uVar5;
  char local_7c [36];
  char local_58 [36];
  CStreamGuard local_34 [8];
  char local_2c [16];
  undefined4 local_1c;
  SIG_MOUSE_REGISTER *local_18;
  int local_14;
  SIG_GOBLIN_PAD_ADVICE_CHANGE_PWD *local_10;
  
  local_1c = _getDBHandleForDevideAccountDB();
  local_18 = Stream::GetOutBuffer<SIG_MOUSE_REGISTER>(param_3);
  local_14 = 0;
  local_2c[0] = '\0';
  local_2c[1] = '\0';
  local_2c[2] = '\0';
  local_2c[3] = '\0';
  local_2c[4] = '\0';
  local_2c[5] = '\0';
  local_2c[6] = '\0';
  local_2c[7] = '\0';
  local_2c[8] = '\0';
  local_2c[9] = '\0';
  local_2c[10] = '\0';
  local_2c[0xb] = '\0';
  local_2c[0xc] = '\0';
  local_2c[0xd] = '\0';
  local_2c[0xe] = '\0';
  local_2c[0xf] = '\0';
  strncpy(local_2c,(char *)(local_18 + 0x48),0x10);
  strncpy(local_58,(char *)(local_18 + 0xf),7);
  encryptAES_(GlobalData::s_pcryptRijndael_MousePassword_,local_58,local_7c);
  iVar2 = strncmp((char *)(local_18 + 0x23),local_7c,0x24);
  if (iVar2 == 0) {
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x5b59);
    CStreamGuard::CStreamGuard(local_34,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_34);
                    /* try { // try from 08422a6c to 08422ac5 has its CatchHandler @ 08422adb */
    CStreamGuard::operator<<(pCVar4,0x246);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_34);
    CStreamGuard::operator<<(pCVar4,param_2);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_34);
    local_10 = CStreamGuard::GetInBuffer<SIG_GOBLIN_PAD_ADVICE_CHANGE_PWD>(pCVar4);
    *(undefined4 *)local_10 = 0;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_34);
    uVar5 = 0;
    CStreamGuard::~CStreamGuard(local_34);
  }
  else {
    uVar1 = *(uint *)(local_18 + 4);
    if (uVar1 == 2) {
      local_14 = _modifyPassword(this,*(uint *)local_18,local_7c,local_2c,param_2,
                                 (bool)local_18[0x58]);
      if (local_14 == 0) {
        memcpy(local_18 + 0x23,local_7c,0x24);
        *(undefined4 *)(local_18 + 0x1f) = 0;
        *(undefined4 *)(local_18 + 0x1b) = 0;
      }
    }
    else if (uVar1 == 3) {
      local_14 = _unregistPassword(this,*(uint *)local_18,local_2c);
      if (local_14 == 0) {
        memset(local_18 + 0x23,0,0x24);
      }
    }
    else if ((uVar1 == 1) &&
            (local_14 = _registNewPassword(this,*(uint *)local_18,local_7c,local_2c,param_2),
            local_14 == 0)) {
      local_18[0x1a] = (SIG_MOUSE_REGISTER)0x1;
      *(undefined4 *)(local_18 + 0x1f) = 0;
      *(undefined4 *)(local_18 + 0x1b) = 0;
      memcpy(local_18 + 0x23,local_7c,0x24);
    }
    _sendResult(this,*(uint *)local_18,local_14,*(int *)(local_18 + 4),param_2,local_18);
    uVar5 = 1;
  }
  return uVar5;
}

```

