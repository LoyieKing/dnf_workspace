# Dispatcher_CallPartyMemberRealtimeInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081ce398 Dispatcher_CallPartyMemberRealtimeInfo::check_error  [0x081ce398-0x81ce3ed] ===
 81ce398:	55                   	push   %ebp
 81ce399:	89 e5                	mov    %esp,%ebp
 81ce39b:	83 ec 18             	sub    $0x18,%esp
 81ce39e:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81ce3a2:	75 26                	jne    81ce3ca <_ZN38Dispatcher_CallPartyMemberRealtimeInfo11check_errorEP5CUserR8MSG_BASE+0x32>
 81ce3a4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ce3ab:	00 
 81ce3ac:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ce3b3:	00 
 81ce3b4:	c7 44 24 04 e0 44 bd 	movl   $0x8bd44e0,0x4(%esp)
 81ce3bb:	08 
 81ce3bc:	c7 04 24 81 27 00 00 	movl   $0x2781,(%esp)
 81ce3c3:	e8 0f 25 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ce3c8:	eb 21                	jmp    81ce3eb <_ZN38Dispatcher_CallPartyMemberRealtimeInfo11check_errorEP5CUserR8MSG_BASE+0x53>
 81ce3ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce3cd:	89 04 24             	mov    %eax,(%esp)
 81ce3d0:	e8 b7 bf f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ce3d5:	83 f8 03             	cmp    $0x3,%eax
 81ce3d8:	0f 95 c0             	setne  %al
 81ce3db:	84 c0                	test   %al,%al
 81ce3dd:	74 07                	je     81ce3e6 <_ZN38Dispatcher_CallPartyMemberRealtimeInfo11check_errorEP5CUserR8MSG_BASE+0x4e>
 81ce3df:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81ce3e4:	eb 05                	jmp    81ce3eb <_ZN38Dispatcher_CallPartyMemberRealtimeInfo11check_errorEP5CUserR8MSG_BASE+0x53>
 81ce3e6:	b8 00 00 00 00       	mov    $0x0,%eax
 81ce3eb:	c9                   	leave
 81ce3ec:	c3                   	ret
 81ce3ed:	90                   	nop

```

```c
// Dispatcher_CallPartyMemberRealtimeInfo::check_error @ 0x81ce398

/* Dispatcher_CallPartyMemberRealtimeInfo::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_CallPartyMemberRealtimeInfo::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = LineFunc(0x2781,
                     "int Dispatcher_CallPartyMemberRealtimeInfo::check_error(CUser*, MSG_BASE&)",0,
                     0);
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 == 3) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

```

---

## process

```asm
// === 081ce356 Dispatcher_CallPartyMemberRealtimeInfo::process  [0x081ce356-0x81ce397] ===
 81ce356:	55                   	push   %ebp
 81ce357:	89 e5                	mov    %esp,%ebp
 81ce359:	83 ec 28             	sub    $0x28,%esp
 81ce35c:	8b 45 10             	mov    0x10(%ebp),%eax
 81ce35f:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ce363:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce366:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ce36a:	8b 45 08             	mov    0x8(%ebp),%eax
 81ce36d:	89 04 24             	mov    %eax,(%esp)
 81ce370:	e8 23 00 00 00       	call   81ce398 <_ZN38Dispatcher_CallPartyMemberRealtimeInfo11check_errorEP5CUserR8MSG_BASE>
 81ce375:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ce378:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81ce37c:	7e 05                	jle    81ce383 <_ZN38Dispatcher_CallPartyMemberRealtimeInfo7processEP5CUserR8MSG_BASER9ParamBase+0x2d>
 81ce37e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ce381:	eb 12                	jmp    81ce395 <_ZN38Dispatcher_CallPartyMemberRealtimeInfo7processEP5CUserR8MSG_BASER9ParamBase+0x3f>
 81ce383:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81ce387:	79 07                	jns    81ce390 <_ZN38Dispatcher_CallPartyMemberRealtimeInfo7processEP5CUserR8MSG_BASER9ParamBase+0x3a>
 81ce389:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81ce38e:	eb 05                	jmp    81ce395 <_ZN38Dispatcher_CallPartyMemberRealtimeInfo7processEP5CUserR8MSG_BASER9ParamBase+0x3f>
 81ce390:	b8 00 00 00 00       	mov    $0x0,%eax
 81ce395:	c9                   	leave
 81ce396:	c3                   	ret
 81ce397:	90                   	nop

```

```c
// Dispatcher_CallPartyMemberRealtimeInfo::process @ 0x81ce356

/* Dispatcher_CallPartyMemberRealtimeInfo::process(CUser*, MSG_BASE&, ParamBase&) */

int Dispatcher_CallPartyMemberRealtimeInfo::process
              (CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  
  iVar1 = check_error(param_1,param_2);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}

```

---

## read

```asm
// === 081ce34c Dispatcher_CallPartyMemberRealtimeInfo::read  [0x081ce34c-0x81ce355] ===
 81ce34c:	55                   	push   %ebp
 81ce34d:	89 e5                	mov    %esp,%ebp
 81ce34f:	b8 00 00 00 00       	mov    $0x0,%eax
 81ce354:	5d                   	pop    %ebp
 81ce355:	c3                   	ret

```

```c
// Dispatcher_CallPartyMemberRealtimeInfo::read @ 0x81ce34c

/* Dispatcher_CallPartyMemberRealtimeInfo::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_CallPartyMemberRealtimeInfo::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## send

```asm
// === 081ce3ee Dispatcher_CallPartyMemberRealtimeInfo::send  [0x081ce3ee-0x81ce4ed] ===
 81ce3ee:	55                   	push   %ebp
 81ce3ef:	89 e5                	mov    %esp,%ebp
 81ce3f1:	56                   	push   %esi
 81ce3f2:	53                   	push   %ebx
 81ce3f3:	83 ec 30             	sub    $0x30,%esp
 81ce3f6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ce3f9:	89 04 24             	mov    %eax,(%esp)
 81ce3fc:	e8 4b f9 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81ce401:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81ce404:	89 04 24             	mov    %eax,(%esp)
 81ce407:	e8 40 f9 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81ce40c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce40f:	89 04 24             	mov    %eax,(%esp)
 81ce412:	e8 35 6d 48 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81ce417:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ce41a:	c7 44 24 08 a9 00 00 	movl   $0xa9,0x8(%esp)
 81ce421:	00 
 81ce422:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ce429:	00 
 81ce42a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ce42d:	89 04 24             	mov    %eax,(%esp)
 81ce430:	e8 c7 d4 ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81ce435:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81ce439:	75 52                	jne    81ce48d <_ZN38Dispatcher_CallPartyMemberRealtimeInfo4sendEP5CUserR9ParamBase+0x9f>
 81ce43b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81ce442:	00 
 81ce443:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ce446:	89 04 24             	mov    %eax,(%esp)
 81ce449:	e8 d2 d4 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81ce44e:	c7 44 24 04 13 00 00 	movl   $0x13,0x4(%esp)
 81ce455:	00 
 81ce456:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ce459:	89 04 24             	mov    %eax,(%esp)
 81ce45c:	e8 bf d4 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81ce461:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ce468:	00 
 81ce469:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ce46c:	89 04 24             	mov    %eax,(%esp)
 81ce46f:	e8 e4 d4 ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81ce474:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ce477:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ce47b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce47e:	89 04 24             	mov    %eax,(%esp)
 81ce481:	e8 34 a1 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81ce486:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ce48b:	eb 27                	jmp    81ce4b4 <_ZN38Dispatcher_CallPartyMemberRealtimeInfo4sendEP5CUserR9ParamBase+0xc6>
 81ce48d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ce490:	89 04 24             	mov    %eax,(%esp)
 81ce493:	e8 8c e8 3c 00       	call   859cd24 <_ZN6CParty24send_party_realtime_infoEv>
 81ce498:	bb 01 00 00 00       	mov    $0x1,%ebx
 81ce49d:	eb 15                	jmp    81ce4b4 <_ZN38Dispatcher_CallPartyMemberRealtimeInfo4sendEP5CUserR9ParamBase+0xc6>
 81ce49f:	89 d3                	mov    %edx,%ebx
 81ce4a1:	89 c6                	mov    %eax,%esi
 81ce4a3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81ce4a6:	89 04 24             	mov    %eax,(%esp)
 81ce4a9:	e8 d2 f9 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81ce4ae:	89 f0                	mov    %esi,%eax
 81ce4b0:	89 da                	mov    %ebx,%edx
 81ce4b2:	eb 1f                	jmp    81ce4d3 <_ZN38Dispatcher_CallPartyMemberRealtimeInfo4sendEP5CUserR9ParamBase+0xe5>
 81ce4b4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81ce4b7:	89 04 24             	mov    %eax,(%esp)
 81ce4ba:	e8 c1 f9 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81ce4bf:	85 db                	test   %ebx,%ebx
 81ce4c1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ce4c4:	89 04 24             	mov    %eax,(%esp)
 81ce4c7:	e8 b4 f9 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81ce4cc:	83 c4 30             	add    $0x30,%esp
 81ce4cf:	5b                   	pop    %ebx
 81ce4d0:	5e                   	pop    %esi
 81ce4d1:	5d                   	pop    %ebp
 81ce4d2:	c3                   	ret
 81ce4d3:	89 d3                	mov    %edx,%ebx
 81ce4d5:	89 c6                	mov    %eax,%esi
 81ce4d7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ce4da:	89 04 24             	mov    %eax,(%esp)
 81ce4dd:	e8 9e f9 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81ce4e2:	89 f0                	mov    %esi,%eax
 81ce4e4:	89 da                	mov    %ebx,%edx
 81ce4e6:	89 04 24             	mov    %eax,(%esp)
 81ce4e9:	e8 62 52 91 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// Dispatcher_CallPartyMemberRealtimeInfo::send @ 0x81ce3ee

/* Dispatcher_CallPartyMemberRealtimeInfo::send(CUser*, ParamBase&) */

void Dispatcher_CallPartyMemberRealtimeInfo::send(CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_28 [12];
  PacketGuard local_1c [12];
  CParty *local_10;
  
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081ce407 to 081ce40b has its CatchHandler @ 081ce4d3 */
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 081ce412 to 081ce497 has its CatchHandler @ 081ce49f */
  local_10 = (CParty *)CUser::GetParty((CUser *)param_2);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0xa9);
  if (local_10 == (CParty *)0x0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0x13);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
  }
  else {
    CParty::send_party_realtime_info(local_10);
  }
                    /* try { // try from 081ce4ba to 081ce4be has its CatchHandler @ 081ce4d3 */
  PacketGuard::~PacketGuard(local_28);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

