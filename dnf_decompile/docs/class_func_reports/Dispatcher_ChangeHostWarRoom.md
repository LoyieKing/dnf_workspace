# Dispatcher_ChangeHostWarRoom

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081d74d4 Dispatcher_ChangeHostWarRoom::check_error  [0x081d74d4-0x81d75af] ===
 81d74d4:	55                   	push   %ebp
 81d74d5:	89 e5                	mov    %esp,%ebp
 81d74d7:	83 ec 28             	sub    $0x28,%esp
 81d74da:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81d74de:	75 29                	jne    81d7509 <_ZN28Dispatcher_ChangeHostWarRoom11check_errorEP5CUserR8MSG_BASE+0x35>
 81d74e0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d74e7:	00 
 81d74e8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d74ef:	00 
 81d74f0:	c7 44 24 04 c0 28 bd 	movl   $0x8bd28c0,0x4(%esp)
 81d74f7:	08 
 81d74f8:	c7 04 24 b1 41 00 00 	movl   $0x41b1,(%esp)
 81d74ff:	e8 d3 93 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d7504:	e9 a4 00 00 00       	jmp    81d75ad <_ZN28Dispatcher_ChangeHostWarRoom11check_errorEP5CUserR8MSG_BASE+0xd9>
 81d7509:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d750c:	89 04 24             	mov    %eax,(%esp)
 81d750f:	e8 1e 8f f4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81d7514:	85 c0                	test   %eax,%eax
 81d7516:	0f 94 c0             	sete   %al
 81d7519:	84 c0                	test   %al,%al
 81d751b:	74 26                	je     81d7543 <_ZN28Dispatcher_ChangeHostWarRoom11check_errorEP5CUserR8MSG_BASE+0x6f>
 81d751d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d7524:	00 
 81d7525:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d752c:	00 
 81d752d:	c7 44 24 04 c0 28 bd 	movl   $0x8bd28c0,0x4(%esp)
 81d7534:	08 
 81d7535:	c7 04 24 b4 41 00 00 	movl   $0x41b4,(%esp)
 81d753c:	e8 96 93 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d7541:	eb 6a                	jmp    81d75ad <_ZN28Dispatcher_ChangeHostWarRoom11check_errorEP5CUserR8MSG_BASE+0xd9>
 81d7543:	8b 45 10             	mov    0x10(%ebp),%eax
 81d7546:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d7549:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d754c:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d7550:	84 c0                	test   %al,%al
 81d7552:	78 0b                	js     81d755f <_ZN28Dispatcher_ChangeHostWarRoom11check_errorEP5CUserR8MSG_BASE+0x8b>
 81d7554:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d7557:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d755b:	3c 05                	cmp    $0x5,%al
 81d755d:	7e 2d                	jle    81d758c <_ZN28Dispatcher_ChangeHostWarRoom11check_errorEP5CUserR8MSG_BASE+0xb8>
 81d755f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d7562:	89 04 24             	mov    %eax,(%esp)
 81d7565:	e8 04 2e f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81d756a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d756e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d7575:	00 
 81d7576:	c7 44 24 04 c0 28 bd 	movl   $0x8bd28c0,0x4(%esp)
 81d757d:	08 
 81d757e:	c7 04 24 b8 41 00 00 	movl   $0x41b8,(%esp)
 81d7585:	e8 4d 93 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d758a:	eb 21                	jmp    81d75ad <_ZN28Dispatcher_ChangeHostWarRoom11check_errorEP5CUserR8MSG_BASE+0xd9>
 81d758c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d758f:	89 04 24             	mov    %eax,(%esp)
 81d7592:	e8 f5 2d f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d7597:	83 f8 08             	cmp    $0x8,%eax
 81d759a:	0f 95 c0             	setne  %al
 81d759d:	84 c0                	test   %al,%al
 81d759f:	74 07                	je     81d75a8 <_ZN28Dispatcher_ChangeHostWarRoom11check_errorEP5CUserR8MSG_BASE+0xd4>
 81d75a1:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81d75a6:	eb 05                	jmp    81d75ad <_ZN28Dispatcher_ChangeHostWarRoom11check_errorEP5CUserR8MSG_BASE+0xd9>
 81d75a8:	b8 00 00 00 00       	mov    $0x0,%eax
 81d75ad:	c9                   	leave
 81d75ae:	c3                   	ret
 81d75af:	90                   	nop

```

```c
// Dispatcher_ChangeHostWarRoom::check_error @ 0x81d74d4

/* Dispatcher_ChangeHostWarRoom::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ChangeHostWarRoom::check_error
          (Dispatcher_ChangeHostWarRoom *this,CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 == (CUser *)0x0) {
    uVar1 = LineFunc(0x41b1,"int Dispatcher_ChangeHostWarRoom::check_error(CUser*, MSG_BASE&)",0,0);
  }
  else {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar2 == 0) {
      uVar1 = LineFunc(0x41b4,"int Dispatcher_ChangeHostWarRoom::check_error(CUser*, MSG_BASE&)",0,0
                      );
    }
    else if (((char)param_2[0xd] < '\0') || ('\x05' < (char)param_2[0xd])) {
      uVar3 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x41b8,"int Dispatcher_ChangeHostWarRoom::check_error(CUser*, MSG_BASE&)",0,
                       uVar3);
    }
    else {
      iVar2 = CUser::get_state(param_1);
      if (iVar2 == 8) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0xffffffff;
      }
    }
  }
  return uVar1;
}

```

---

## process

```asm
// === 081d73f6 Dispatcher_ChangeHostWarRoom::process  [0x081d73f6-0x81d74d3] ===
 81d73f6:	55                   	push   %ebp
 81d73f7:	89 e5                	mov    %esp,%ebp
 81d73f9:	53                   	push   %ebx
 81d73fa:	83 ec 24             	sub    $0x24,%esp
 81d73fd:	8b 45 10             	mov    0x10(%ebp),%eax
 81d7400:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d7404:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d7407:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d740b:	8b 45 08             	mov    0x8(%ebp),%eax
 81d740e:	89 04 24             	mov    %eax,(%esp)
 81d7411:	e8 be 00 00 00       	call   81d74d4 <_ZN28Dispatcher_ChangeHostWarRoom11check_errorEP5CUserR8MSG_BASE>
 81d7416:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81d7419:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81d741d:	7e 08                	jle    81d7427 <_ZN28Dispatcher_ChangeHostWarRoom7processEP5CUserR8MSG_BASER9ParamBase+0x31>
 81d741f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d7422:	e9 a6 00 00 00       	jmp    81d74cd <_ZN28Dispatcher_ChangeHostWarRoom7processEP5CUserR8MSG_BASER9ParamBase+0xd7>
 81d7427:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81d742b:	79 0a                	jns    81d7437 <_ZN28Dispatcher_ChangeHostWarRoom7processEP5CUserR8MSG_BASER9ParamBase+0x41>
 81d742d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81d7432:	e9 96 00 00 00       	jmp    81d74cd <_ZN28Dispatcher_ChangeHostWarRoom7processEP5CUserR8MSG_BASER9ParamBase+0xd7>
 81d7437:	8b 45 10             	mov    0x10(%ebp),%eax
 81d743a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d743d:	8b 45 14             	mov    0x14(%ebp),%eax
 81d7440:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d7443:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d7446:	89 04 24             	mov    %eax,(%esp)
 81d7449:	e8 36 8a 05 00       	call   822fe84 <_ZN5CUser15GetWarRoomIndexEv>
 81d744e:	0f bf d8             	movswl %ax,%ebx
 81d7451:	e8 38 4d ef ff       	call   80cc18e <_Z14G_CGameManagerv>
 81d7456:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d745a:	89 04 24             	mov    %eax,(%esp)
 81d745d:	e8 6e b1 0c 00       	call   82a25d0 <_ZN12CGameManager10GetWarRoomEi>
 81d7462:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d7465:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81d7469:	75 2d                	jne    81d7498 <_ZN28Dispatcher_ChangeHostWarRoom7processEP5CUserR8MSG_BASER9ParamBase+0xa2>
 81d746b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d746e:	89 04 24             	mov    %eax,(%esp)
 81d7471:	e8 f8 2e f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81d7476:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d747a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d7481:	00 
 81d7482:	c7 44 24 04 20 29 bd 	movl   $0x8bd2920,0x4(%esp)
 81d7489:	08 
 81d748a:	c7 04 24 a7 41 00 00 	movl   $0x41a7,(%esp)
 81d7491:	e8 41 94 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d7496:	eb 35                	jmp    81d74cd <_ZN28Dispatcher_ChangeHostWarRoom7processEP5CUserR8MSG_BASER9ParamBase+0xd7>
 81d7498:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d749b:	8b 50 0e             	mov    0xe(%eax),%edx
 81d749e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d74a1:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d74a5:	0f be c0             	movsbl %al,%eax
 81d74a8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81d74ac:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d74b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d74b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d74b7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d74ba:	89 04 24             	mov    %eax,(%esp)
 81d74bd:	e8 e4 93 4e 00       	call   86c08a6 <_ZN7WarRoom17HostChangeWarRoomEP5CUsercm>
 81d74c2:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81d74c5:	89 42 04             	mov    %eax,0x4(%edx)
 81d74c8:	b8 00 00 00 00       	mov    $0x0,%eax
 81d74cd:	83 c4 24             	add    $0x24,%esp
 81d74d0:	5b                   	pop    %ebx
 81d74d1:	5d                   	pop    %ebp
 81d74d2:	c3                   	ret
 81d74d3:	90                   	nop

```

```c
// Dispatcher_ChangeHostWarRoom::process @ 0x81d73f6

/* Dispatcher_ChangeHostWarRoom::process(CUser*, MSG_BASE&, ParamBase&) */

int __thiscall
Dispatcher_ChangeHostWarRoom::process
          (Dispatcher_ChangeHostWarRoom *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  WarRoom *this_00;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = check_error(this,param_1,param_2);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      CUser::GetWarRoomIndex(param_1);
      iVar1 = G_CGameManager();
      this_00 = (WarRoom *)CGameManager::GetWarRoom(iVar1);
      if (this_00 == (WarRoom *)0x0) {
        uVar2 = CUser::get_acc_id(param_1);
        iVar1 = LineFunc(0x41a7,
                         "virtual int Dispatcher_ChangeHostWarRoom::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0,uVar2);
      }
      else {
        uVar3 = WarRoom::HostChangeWarRoom
                          (this_00,param_1,(char)param_2[0xd],*(ulong *)(param_2 + 0xe));
        *(undefined4 *)(param_3 + 4) = uVar3;
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}

```

---

## read

```asm
// === 081d735e Dispatcher_ChangeHostWarRoom::read  [0x081d735e-0x81d73f5] ===
 81d735e:	55                   	push   %ebp
 81d735f:	89 e5                	mov    %esp,%ebp
 81d7361:	83 ec 28             	sub    $0x28,%esp
 81d7364:	8b 45 10             	mov    0x10(%ebp),%eax
 81d7367:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d736a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d736d:	83 c0 0d             	add    $0xd,%eax
 81d7370:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d7374:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d7377:	89 04 24             	mov    %eax,(%esp)
 81d737a:	e8 a3 5b 3b 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81d737f:	83 f0 01             	xor    $0x1,%eax
 81d7382:	84 c0                	test   %al,%al
 81d7384:	74 26                	je     81d73ac <_ZN28Dispatcher_ChangeHostWarRoom4readER9PacketBufR8MSG_BASE+0x4e>
 81d7386:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d738d:	00 
 81d738e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d7395:	00 
 81d7396:	c7 44 24 04 80 29 bd 	movl   $0x8bd2980,0x4(%esp)
 81d739d:	08 
 81d739e:	c7 04 24 8e 41 00 00 	movl   $0x418e,(%esp)
 81d73a5:	e8 2d 95 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d73aa:	eb 47                	jmp    81d73f3 <_ZN28Dispatcher_ChangeHostWarRoom4readER9PacketBufR8MSG_BASE+0x95>
 81d73ac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d73af:	83 c0 0e             	add    $0xe,%eax
 81d73b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d73b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d73b9:	89 04 24             	mov    %eax,(%esp)
 81d73bc:	e8 bd 5e 3b 00       	call   858d27e <_ZN9PacketBuf7get_intERm>
 81d73c1:	83 f0 01             	xor    $0x1,%eax
 81d73c4:	84 c0                	test   %al,%al
 81d73c6:	74 26                	je     81d73ee <_ZN28Dispatcher_ChangeHostWarRoom4readER9PacketBufR8MSG_BASE+0x90>
 81d73c8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d73cf:	00 
 81d73d0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d73d7:	00 
 81d73d8:	c7 44 24 04 80 29 bd 	movl   $0x8bd2980,0x4(%esp)
 81d73df:	08 
 81d73e0:	c7 04 24 91 41 00 00 	movl   $0x4191,(%esp)
 81d73e7:	e8 eb 94 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d73ec:	eb 05                	jmp    81d73f3 <_ZN28Dispatcher_ChangeHostWarRoom4readER9PacketBufR8MSG_BASE+0x95>
 81d73ee:	b8 00 00 00 00       	mov    $0x0,%eax
 81d73f3:	c9                   	leave
 81d73f4:	c3                   	ret
 81d73f5:	90                   	nop

```

```c
// Dispatcher_ChangeHostWarRoom::read @ 0x81d735e

/* Dispatcher_ChangeHostWarRoom::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ChangeHostWarRoom::read
          (Dispatcher_ChangeHostWarRoom *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(ulong *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x4191,
                       "virtual int Dispatcher_ChangeHostWarRoom::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x418e,"virtual int Dispatcher_ChangeHostWarRoom::read(PacketBuf&, MSG_BASE&)",
                     0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081d75b0 Dispatcher_ChangeHostWarRoom::send  [0x081d75b0-0x81d75e7] ===
 81d75b0:	55                   	push   %ebp
 81d75b1:	89 e5                	mov    %esp,%ebp
 81d75b3:	83 ec 28             	sub    $0x28,%esp
 81d75b6:	8b 45 10             	mov    0x10(%ebp),%eax
 81d75b9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d75bc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d75bf:	8b 40 04             	mov    0x4(%eax),%eax
 81d75c2:	85 c0                	test   %eax,%eax
 81d75c4:	74 20                	je     81d75e6 <_ZN28Dispatcher_ChangeHostWarRoom4sendEP5CUserR9ParamBase+0x36>
 81d75c6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d75c9:	8b 40 04             	mov    0x4(%eax),%eax
 81d75cc:	0f b6 c0             	movzbl %al,%eax
 81d75cf:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d75d3:	c7 44 24 04 94 01 00 	movl   $0x194,0x4(%esp)
 81d75da:	00 
 81d75db:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d75de:	89 04 24             	mov    %eax,(%esp)
 81d75e1:	e8 5c 49 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d75e6:	c9                   	leave
 81d75e7:	c3                   	ret

```

```c
// Dispatcher_ChangeHostWarRoom::send @ 0x81d75b0

/* Dispatcher_ChangeHostWarRoom::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_ChangeHostWarRoom::send
          (Dispatcher_ChangeHostWarRoom *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    CUser::SendCmdErrorPacket(param_1,0x194,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

