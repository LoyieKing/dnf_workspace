# DisPatcher_AddFriend

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## check_error

```asm
// === 081cb274 DisPatcher_AddFriend::check_error  [0x081cb274-0x81cb2e1] ===
 81cb274:	55                   	push   %ebp
 81cb275:	89 e5                	mov    %esp,%ebp
 81cb277:	83 ec 28             	sub    $0x28,%esp
 81cb27a:	8b 45 10             	mov    0x10(%ebp),%eax
 81cb27d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cb280:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb283:	89 04 24             	mov    %eax,(%esp)
 81cb286:	e8 01 f1 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81cb28b:	83 f8 02             	cmp    $0x2,%eax
 81cb28e:	0f 9e c0             	setle  %al
 81cb291:	84 c0                	test   %al,%al
 81cb293:	74 07                	je     81cb29c <_ZN20DisPatcher_AddFriend11check_errorEP5CUserR8MSG_BASE+0x28>
 81cb295:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81cb29a:	eb 43                	jmp    81cb2df <_ZN20DisPatcher_AddFriend11check_errorEP5CUserR8MSG_BASE+0x6b>
 81cb29c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cb29f:	83 c0 11             	add    $0x11,%eax
 81cb2a2:	85 c0                	test   %eax,%eax
 81cb2a4:	75 07                	jne    81cb2ad <_ZN20DisPatcher_AddFriend11check_errorEP5CUserR8MSG_BASE+0x39>
 81cb2a6:	b8 01 00 00 00       	mov    $0x1,%eax
 81cb2ab:	eb 32                	jmp    81cb2df <_ZN20DisPatcher_AddFriend11check_errorEP5CUserR8MSG_BASE+0x6b>
 81cb2ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb2b0:	89 04 24             	mov    %eax,(%esp)
 81cb2b3:	e8 70 5d f3 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81cb2b8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81cb2bb:	83 c2 11             	add    $0x11,%edx
 81cb2be:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cb2c2:	89 14 24             	mov    %edx,(%esp)
 81cb2c5:	e8 16 32 eb ff       	call   807e4e0 <strcmp@plt>
 81cb2ca:	85 c0                	test   %eax,%eax
 81cb2cc:	0f 94 c0             	sete   %al
 81cb2cf:	84 c0                	test   %al,%al
 81cb2d1:	74 07                	je     81cb2da <_ZN20DisPatcher_AddFriend11check_errorEP5CUserR8MSG_BASE+0x66>
 81cb2d3:	b8 01 00 00 00       	mov    $0x1,%eax
 81cb2d8:	eb 05                	jmp    81cb2df <_ZN20DisPatcher_AddFriend11check_errorEP5CUserR8MSG_BASE+0x6b>
 81cb2da:	b8 00 00 00 00       	mov    $0x0,%eax
 81cb2df:	c9                   	leave
 81cb2e0:	c3                   	ret
 81cb2e1:	90                   	nop

```

```c
// DisPatcher_AddFriend::check_error @ 0x81cb274

/* DisPatcher_AddFriend::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_AddFriend::check_error(DisPatcher_AddFriend *this,CUser *param_1,MSG_BASE *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *__s2;
  
  iVar1 = CUser::get_state(param_1);
  if (iVar1 < 3) {
    uVar2 = 0x7fffffff;
  }
  else if (param_2 == (MSG_BASE *)0xffffffef) {
    uVar2 = 1;
  }
  else {
    __s2 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    iVar1 = strcmp((char *)(param_2 + 0x11),__s2);
    if (iVar1 == 0) {
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

## process

```asm
// === 081cb2e2 DisPatcher_AddFriend::process  [0x081cb2e2-0x81cb309] ===
 81cb2e2:	55                   	push   %ebp
 81cb2e3:	89 e5                	mov    %esp,%ebp
 81cb2e5:	83 ec 58             	sub    $0x58,%esp
 81cb2e8:	8b 45 14             	mov    0x14(%ebp),%eax
 81cb2eb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cb2ef:	8b 45 10             	mov    0x10(%ebp),%eax
 81cb2f2:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cb2f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb2f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cb2fd:	8b 45 08             	mov    0x8(%ebp),%eax
 81cb300:	89 04 24             	mov    %eax,(%esp)
 81cb303:	e8 02 00 00 00       	call   81cb30a <_ZN20DisPatcher_AddFriend18process_packet_jpnEP5CUserR8MSG_BASER9ParamBase>
 81cb308:	c9                   	leave
 81cb309:	c3                   	ret

```

```c
// DisPatcher_AddFriend::process @ 0x81cb2e2

/* DisPatcher_AddFriend::process(CUser*, MSG_BASE&, ParamBase&) */

void __thiscall
DisPatcher_AddFriend::process
          (DisPatcher_AddFriend *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  process_packet_jpn(this,param_1,param_2,param_3);
  return;
}

```

---

## process_packet_jpn

```asm
// === 081cb30a DisPatcher_AddFriend::process_packet_jpn  [0x081cb30a-0x81cb4e5] ===
 81cb30a:	55                   	push   %ebp
 81cb30b:	89 e5                	mov    %esp,%ebp
 81cb30d:	56                   	push   %esi
 81cb30e:	53                   	push   %ebx
 81cb30f:	83 ec 40             	sub    $0x40,%esp
 81cb312:	8b 45 14             	mov    0x14(%ebp),%eax
 81cb315:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81cb318:	8b 45 10             	mov    0x10(%ebp),%eax
 81cb31b:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cb31f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb322:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cb326:	8b 45 08             	mov    0x8(%ebp),%eax
 81cb329:	89 04 24             	mov    %eax,(%esp)
 81cb32c:	e8 43 ff ff ff       	call   81cb274 <_ZN20DisPatcher_AddFriend11check_errorEP5CUserR8MSG_BASE>
 81cb331:	89 c2                	mov    %eax,%edx
 81cb333:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81cb336:	89 50 04             	mov    %edx,0x4(%eax)
 81cb339:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81cb33c:	8b 40 04             	mov    0x4(%eax),%eax
 81cb33f:	85 c0                	test   %eax,%eax
 81cb341:	7e 0a                	jle    81cb34d <_ZN20DisPatcher_AddFriend18process_packet_jpnEP5CUserR8MSG_BASER9ParamBase+0x43>
 81cb343:	bb 00 00 00 00       	mov    $0x0,%ebx
 81cb348:	e9 8f 01 00 00       	jmp    81cb4dc <_ZN20DisPatcher_AddFriend18process_packet_jpnEP5CUserR8MSG_BASER9ParamBase+0x1d2>
 81cb34d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81cb350:	8b 40 04             	mov    0x4(%eax),%eax
 81cb353:	85 c0                	test   %eax,%eax
 81cb355:	79 40                	jns    81cb397 <_ZN20DisPatcher_AddFriend18process_packet_jpnEP5CUserR8MSG_BASER9ParamBase+0x8d>
 81cb357:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81cb35a:	8b 40 04             	mov    0x4(%eax),%eax
 81cb35d:	89 44 24 14          	mov    %eax,0x14(%esp)
 81cb361:	c7 44 24 10 9c 17 bc 	movl   $0x8bc179c,0x10(%esp)
 81cb368:	08 
 81cb369:	c7 44 24 0c d8 20 00 	movl   $0x20d8,0xc(%esp)
 81cb370:	00 
 81cb371:	c7 44 24 08 20 50 bd 	movl   $0x8bd5020,0x8(%esp)
 81cb378:	08 
 81cb379:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81cb380:	08 
 81cb381:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81cb388:	e8 7d 88 90 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81cb38d:	bb d9 20 00 00       	mov    $0x20d9,%ebx
 81cb392:	e9 45 01 00 00       	jmp    81cb4dc <_ZN20DisPatcher_AddFriend18process_packet_jpnEP5CUserR8MSG_BASER9ParamBase+0x1d2>
 81cb397:	8b 45 10             	mov    0x10(%ebp),%eax
 81cb39a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81cb39d:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81cb3a2:	c7 44 24 08 ed 20 00 	movl   $0x20ed,0x8(%esp)
 81cb3a9:	00 
 81cb3aa:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81cb3b1:	08 
 81cb3b2:	89 04 24             	mov    %eax,(%esp)
 81cb3b5:	e8 cc 46 0c 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 81cb3ba:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81cb3c1:	00 
 81cb3c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cb3c6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81cb3c9:	89 04 24             	mov    %eax,(%esp)
 81cb3cc:	e8 55 d8 ef ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81cb3d1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81cb3d4:	89 04 24             	mov    %eax,(%esp)
 81cb3d7:	e8 6a d8 ef ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81cb3dc:	c7 44 24 04 3e 03 00 	movl   $0x33e,0x4(%esp)
 81cb3e3:	00 
 81cb3e4:	89 04 24             	mov    %eax,(%esp)
 81cb3e7:	e8 6a d8 ef ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81cb3ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb3ef:	89 04 24             	mov    %eax,(%esp)
 81cb3f2:	e8 9f d8 ef ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81cb3f7:	89 c3                	mov    %eax,%ebx
 81cb3f9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81cb3fc:	89 04 24             	mov    %eax,(%esp)
 81cb3ff:	e8 42 d8 ef ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81cb404:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81cb408:	89 04 24             	mov    %eax,(%esp)
 81cb40b:	e8 46 d8 ef ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81cb410:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81cb413:	89 04 24             	mov    %eax,(%esp)
 81cb416:	e8 33 d8 ef ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81cb41b:	89 04 24             	mov    %eax,(%esp)
 81cb41e:	e8 cd b9 06 00       	call   8236df0 <_ZN12CStreamGuard11GetInBufferI20SIG_CHECK_ADD_FRIENDEEPT_v>
 81cb423:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cb426:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81cb42a:	75 14                	jne    81cb440 <_ZN20DisPatcher_AddFriend18process_packet_jpnEP5CUserR8MSG_BASER9ParamBase+0x136>
 81cb42c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81cb42f:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
 81cb436:	bb 00 00 00 00       	mov    $0x0,%ebx
 81cb43b:	e9 91 00 00 00       	jmp    81cb4d1 <_ZN20DisPatcher_AddFriend18process_packet_jpnEP5CUserR8MSG_BASER9ParamBase+0x1c7>
 81cb440:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb443:	89 04 24             	mov    %eax,(%esp)
 81cb446:	e8 23 ef f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81cb44b:	8b 15 10 f7 41 09    	mov    0x941f710,%edx
 81cb451:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cb455:	89 14 24             	mov    %edx,(%esp)
 81cb458:	e8 e9 de f3 ff       	call   8109346 <_ZN8WongWork11CGMAccounts4isGMEj>
 81cb45d:	84 c0                	test   %al,%al
 81cb45f:	74 07                	je     81cb468 <_ZN20DisPatcher_AddFriend18process_packet_jpnEP5CUserR8MSG_BASER9ParamBase+0x15e>
 81cb461:	b8 00 00 00 00       	mov    $0x0,%eax
 81cb466:	eb 05                	jmp    81cb46d <_ZN20DisPatcher_AddFriend18process_packet_jpnEP5CUserR8MSG_BASER9ParamBase+0x163>
 81cb468:	b8 01 00 00 00       	mov    $0x1,%eax
 81cb46d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81cb470:	88 42 04             	mov    %al,0x4(%edx)
 81cb473:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cb476:	8d 50 11             	lea    0x11(%eax),%edx
 81cb479:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cb47c:	83 c0 05             	add    $0x5,%eax
 81cb47f:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81cb486:	00 
 81cb487:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cb48b:	89 04 24             	mov    %eax,(%esp)
 81cb48e:	e8 3d 24 eb ff       	call   807d8d0 <strncpy@plt>
 81cb493:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81cb498:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 81cb49b:	89 54 24 08          	mov    %edx,0x8(%esp)
 81cb49f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81cb4a6:	00 
 81cb4a7:	89 04 24             	mov    %eax,(%esp)
 81cb4aa:	e8 2f 5b 3a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81cb4af:	bb 00 00 00 00       	mov    $0x0,%ebx
 81cb4b4:	eb 1b                	jmp    81cb4d1 <_ZN20DisPatcher_AddFriend18process_packet_jpnEP5CUserR8MSG_BASER9ParamBase+0x1c7>
 81cb4b6:	89 d3                	mov    %edx,%ebx
 81cb4b8:	89 c6                	mov    %eax,%esi
 81cb4ba:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81cb4bd:	89 04 24             	mov    %eax,(%esp)
 81cb4c0:	e8 0d 14 45 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81cb4c5:	89 f0                	mov    %esi,%eax
 81cb4c7:	89 da                	mov    %ebx,%edx
 81cb4c9:	89 04 24             	mov    %eax,(%esp)
 81cb4cc:	e8 7f 82 91 00       	call   8ae3750 <_Unwind_Resume>
 81cb4d1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81cb4d4:	89 04 24             	mov    %eax,(%esp)
 81cb4d7:	e8 f6 13 45 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81cb4dc:	89 d8                	mov    %ebx,%eax
 81cb4de:	83 c4 40             	add    $0x40,%esp
 81cb4e1:	5b                   	pop    %ebx
 81cb4e2:	5e                   	pop    %esi
 81cb4e3:	5d                   	pop    %ebp
 81cb4e4:	c3                   	ret
 81cb4e5:	90                   	nop

```

```c
// DisPatcher_AddFriend::process_packet_jpn @ 0x81cb30a

/* DisPatcher_AddFriend::process_packet_jpn(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_AddFriend::process_packet_jpn
          (DisPatcher_AddFriend *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  undefined4 uVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  int iVar5;
  uint uVar6;
  CStreamGuard local_20 [8];
  ParamBase *local_18;
  MSG_BASE *local_14;
  SIG_CHECK_ADD_FRIEND *local_10;
  
  local_18 = param_3;
  uVar2 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_18 + 4) = uVar2;
  if (*(int *)(local_18 + 4) < 1) {
    if (*(int *)(local_18 + 4) < 0) {
      LogManager::logFormat
                (1,"PacketDispatcher_Impl_1.cpp",
                 "int DisPatcher_AddFriend::process_packet_jpn(CUser*, MSG_BASE&, ParamBase&)",
                 0x20d8,"Dispatcher_Impl Check_Error No(%d)",*(undefined4 *)(local_18 + 4));
      uVar2 = 0x20d9;
    }
    else {
      local_14 = param_2;
      pSVar3 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x20ed);
      CStreamGuard::CStreamGuard(local_20,pSVar3,true);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 081cb3e7 to 081cb4ae has its CatchHandler @ 081cb4b6 */
      CStreamGuard::operator<<(pCVar4,0x33e);
      iVar5 = CUser::GetUID(param_1);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
      CStreamGuard::operator<<(pCVar4,iVar5);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_20);
      local_10 = CStreamGuard::GetInBuffer<SIG_CHECK_ADD_FRIEND>(pCVar4);
      if (local_10 == (SIG_CHECK_ADD_FRIEND *)0x0) {
        *(undefined4 *)(local_18 + 4) = 1;
      }
      else {
        uVar6 = CUser::get_acc_id(param_1);
        cVar1 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar6);
        local_10[4] = (SIG_CHECK_ADD_FRIEND)(cVar1 == '\0');
        strncpy((char *)(local_10 + 5),(char *)(local_14 + 0x11),0x1e);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_20);
      }
      uVar2 = 0;
      CStreamGuard::~CStreamGuard(local_20);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## read

```asm
// === 081cb1ca DisPatcher_AddFriend::read  [0x081cb1ca-0x81cb273] ===
 81cb1ca:	55                   	push   %ebp
 81cb1cb:	89 e5                	mov    %esp,%ebp
 81cb1cd:	83 ec 28             	sub    $0x28,%esp
 81cb1d0:	8b 45 10             	mov    0x10(%ebp),%eax
 81cb1d3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cb1d6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cb1d9:	83 c0 0d             	add    $0xd,%eax
 81cb1dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cb1e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb1e3:	89 04 24             	mov    %eax,(%esp)
 81cb1e6:	e8 05 1f 3c 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81cb1eb:	83 f0 01             	xor    $0x1,%eax
 81cb1ee:	84 c0                	test   %al,%al
 81cb1f0:	74 26                	je     81cb218 <_ZN20DisPatcher_AddFriend4readER9PacketBufR8MSG_BASE+0x4e>
 81cb1f2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cb1f9:	00 
 81cb1fa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cb201:	00 
 81cb202:	c7 44 24 04 e0 50 bd 	movl   $0x8bd50e0,0x4(%esp)
 81cb209:	08 
 81cb20a:	c7 04 24 7b 20 00 00 	movl   $0x207b,(%esp)
 81cb211:	e8 c1 56 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cb216:	eb 59                	jmp    81cb271 <_ZN20DisPatcher_AddFriend4readER9PacketBufR8MSG_BASE+0xa7>
 81cb218:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cb21b:	8b 40 0d             	mov    0xd(%eax),%eax
 81cb21e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81cb221:	83 c2 11             	add    $0x11,%edx
 81cb224:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cb228:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81cb22f:	00 
 81cb230:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cb234:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb237:	89 04 24             	mov    %eax,(%esp)
 81cb23a:	e8 7d 20 3c 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81cb23f:	83 f0 01             	xor    $0x1,%eax
 81cb242:	84 c0                	test   %al,%al
 81cb244:	74 26                	je     81cb26c <_ZN20DisPatcher_AddFriend4readER9PacketBufR8MSG_BASE+0xa2>
 81cb246:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cb24d:	00 
 81cb24e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cb255:	00 
 81cb256:	c7 44 24 04 e0 50 bd 	movl   $0x8bd50e0,0x4(%esp)
 81cb25d:	08 
 81cb25e:	c7 04 24 82 20 00 00 	movl   $0x2082,(%esp)
 81cb265:	e8 6d 56 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cb26a:	eb 05                	jmp    81cb271 <_ZN20DisPatcher_AddFriend4readER9PacketBufR8MSG_BASE+0xa7>
 81cb26c:	b8 00 00 00 00       	mov    $0x0,%eax
 81cb271:	c9                   	leave
 81cb272:	c3                   	ret
 81cb273:	90                   	nop

```

```c
// DisPatcher_AddFriend::read @ 0x81cb1ca

/* DisPatcher_AddFriend::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_AddFriend::read(DisPatcher_AddFriend *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x11),0x1e,*(int *)(param_2 + 0xd));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x2082,"virtual int DisPatcher_AddFriend::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x207b,"virtual int DisPatcher_AddFriend::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081cb4e6 DisPatcher_AddFriend::send  [0x081cb4e6-0x81cb52d] ===
 81cb4e6:	55                   	push   %ebp
 81cb4e7:	89 e5                	mov    %esp,%ebp
 81cb4e9:	83 ec 28             	sub    $0x28,%esp
 81cb4ec:	8b 45 10             	mov    0x10(%ebp),%eax
 81cb4ef:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cb4f2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cb4f5:	8b 40 04             	mov    0x4(%eax),%eax
 81cb4f8:	3d ff ff ff 7f       	cmp    $0x7fffffff,%eax
 81cb4fd:	74 2c                	je     81cb52b <_ZN20DisPatcher_AddFriend4sendEP5CUserR9ParamBase+0x45>
 81cb4ff:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cb502:	8b 40 04             	mov    0x4(%eax),%eax
 81cb505:	85 c0                	test   %eax,%eax
 81cb507:	74 23                	je     81cb52c <_ZN20DisPatcher_AddFriend4sendEP5CUserR9ParamBase+0x46>
 81cb509:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cb50c:	8b 40 04             	mov    0x4(%eax),%eax
 81cb50f:	0f b6 c0             	movzbl %al,%eax
 81cb512:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cb516:	c7 44 24 04 3f 00 00 	movl   $0x3f,0x4(%esp)
 81cb51d:	00 
 81cb51e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb521:	89 04 24             	mov    %eax,(%esp)
 81cb524:	e8 19 0a 4b 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81cb529:	eb 01                	jmp    81cb52c <_ZN20DisPatcher_AddFriend4sendEP5CUserR9ParamBase+0x46>
 81cb52b:	90                   	nop
 81cb52c:	c9                   	leave
 81cb52d:	c3                   	ret

```

```c
// DisPatcher_AddFriend::send @ 0x81cb4e6

/* DisPatcher_AddFriend::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_AddFriend::send(DisPatcher_AddFriend *this,CUser *param_1,ParamBase *param_2)

{
  if ((*(int *)(param_2 + 4) != 0x7fffffff) && (*(int *)(param_2 + 4) != 0)) {
    CUser::SendCmdErrorPacket(param_1,0x3f,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

