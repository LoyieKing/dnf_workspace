# Dispatcher_MailBox_Open

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081cc2a2 Dispatcher_MailBox_Open::check_error  [0x081cc2a2-0x81cc2e5] ===
 81cc2a2:	55                   	push   %ebp
 81cc2a3:	89 e5                	mov    %esp,%ebp
 81cc2a5:	83 ec 18             	sub    $0x18,%esp
 81cc2a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc2ab:	89 04 24             	mov    %eax,(%esp)
 81cc2ae:	e8 d9 e0 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81cc2b3:	83 f8 03             	cmp    $0x3,%eax
 81cc2b6:	75 0f                	jne    81cc2c7 <_ZN23Dispatcher_MailBox_Open11check_errorEP5CUserR8MSG_BASE+0x25>
 81cc2b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc2bb:	89 04 24             	mov    %eax,(%esp)
 81cc2be:	e8 6f 41 f5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81cc2c3:	85 c0                	test   %eax,%eax
 81cc2c5:	75 07                	jne    81cc2ce <_ZN23Dispatcher_MailBox_Open11check_errorEP5CUserR8MSG_BASE+0x2c>
 81cc2c7:	b8 01 00 00 00       	mov    $0x1,%eax
 81cc2cc:	eb 05                	jmp    81cc2d3 <_ZN23Dispatcher_MailBox_Open11check_errorEP5CUserR8MSG_BASE+0x31>
 81cc2ce:	b8 00 00 00 00       	mov    $0x0,%eax
 81cc2d3:	84 c0                	test   %al,%al
 81cc2d5:	74 07                	je     81cc2de <_ZN23Dispatcher_MailBox_Open11check_errorEP5CUserR8MSG_BASE+0x3c>
 81cc2d7:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81cc2dc:	eb 05                	jmp    81cc2e3 <_ZN23Dispatcher_MailBox_Open11check_errorEP5CUserR8MSG_BASE+0x41>
 81cc2de:	b8 00 00 00 00       	mov    $0x0,%eax
 81cc2e3:	c9                   	leave
 81cc2e4:	c3                   	ret
 81cc2e5:	90                   	nop

```

```c
// Dispatcher_MailBox_Open::check_error @ 0x81cc2a2

/* Dispatcher_MailBox_Open::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_MailBox_Open::check_error(CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 3) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081cc2d3;
    }
  }
  bVar1 = true;
LAB_081cc2d3:
  if (bVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## process

```asm
// === 081cc196 Dispatcher_MailBox_Open::process  [0x081cc196-0x81cc2a1] ===
 81cc196:	55                   	push   %ebp
 81cc197:	89 e5                	mov    %esp,%ebp
 81cc199:	53                   	push   %ebx
 81cc19a:	83 ec 24             	sub    $0x24,%esp
 81cc19d:	8b 45 14             	mov    0x14(%ebp),%eax
 81cc1a0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81cc1a3:	8b 45 10             	mov    0x10(%ebp),%eax
 81cc1a6:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cc1aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc1ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cc1b1:	8b 45 08             	mov    0x8(%ebp),%eax
 81cc1b4:	89 04 24             	mov    %eax,(%esp)
 81cc1b7:	e8 e6 00 00 00       	call   81cc2a2 <_ZN23Dispatcher_MailBox_Open11check_errorEP5CUserR8MSG_BASE>
 81cc1bc:	89 c2                	mov    %eax,%edx
 81cc1be:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cc1c1:	89 50 04             	mov    %edx,0x4(%eax)
 81cc1c4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cc1c7:	8b 40 04             	mov    0x4(%eax),%eax
 81cc1ca:	85 c0                	test   %eax,%eax
 81cc1cc:	7e 0a                	jle    81cc1d8 <_ZN23Dispatcher_MailBox_Open7processEP5CUserR8MSG_BASER9ParamBase+0x42>
 81cc1ce:	b8 00 00 00 00       	mov    $0x0,%eax
 81cc1d3:	e9 c4 00 00 00       	jmp    81cc29c <_ZN23Dispatcher_MailBox_Open7processEP5CUserR8MSG_BASER9ParamBase+0x106>
 81cc1d8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cc1db:	8b 40 04             	mov    0x4(%eax),%eax
 81cc1de:	85 c0                	test   %eax,%eax
 81cc1e0:	79 32                	jns    81cc214 <_ZN23Dispatcher_MailBox_Open7processEP5CUserR8MSG_BASER9ParamBase+0x7e>
 81cc1e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc1e5:	89 04 24             	mov    %eax,(%esp)
 81cc1e8:	e8 81 e1 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81cc1ed:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81cc1f0:	8b 52 04             	mov    0x4(%edx),%edx
 81cc1f3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cc1f7:	89 54 24 08          	mov    %edx,0x8(%esp)
 81cc1fb:	c7 44 24 04 00 4c bd 	movl   $0x8bd4c00,0x4(%esp)
 81cc202:	08 
 81cc203:	c7 04 24 c8 22 00 00 	movl   $0x22c8,(%esp)
 81cc20a:	e8 c8 46 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cc20f:	e9 88 00 00 00       	jmp    81cc29c <_ZN23Dispatcher_MailBox_Open7processEP5CUserR8MSG_BASER9ParamBase+0x106>
 81cc214:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc217:	89 04 24             	mov    %eax,(%esp)
 81cc21a:	e8 ed 3f 06 00       	call   823020c <_ZN5CUser10GetMailBoxEv>
 81cc21f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cc222:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cc225:	89 04 24             	mov    %eax,(%esp)
 81cc228:	e8 2d 83 06 00       	call   823455a <_ZN8WongWork8CMailBox21GetNotLoadedMailCountEv>
 81cc22d:	85 c0                	test   %eax,%eax
 81cc22f:	0f 95 c0             	setne  %al
 81cc232:	84 c0                	test   %al,%al
 81cc234:	74 50                	je     81cc286 <_ZN23Dispatcher_MailBox_Open7processEP5CUserR8MSG_BASER9ParamBase+0xf0>
 81cc236:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cc239:	89 04 24             	mov    %eax,(%esp)
 81cc23c:	e8 25 83 06 00       	call   8234566 <_ZN8WongWork8CMailBox11GetRecvSizeEv>
 81cc241:	89 c3                	mov    %eax,%ebx
 81cc243:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cc246:	89 04 24             	mov    %eax,(%esp)
 81cc249:	e8 fe 82 06 00       	call   823454c <_ZN8WongWork8CMailBox20GetLoadedLetterCountEv>
 81cc24e:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 81cc251:	83 f8 13             	cmp    $0x13,%eax
 81cc254:	0f 9e c0             	setle  %al
 81cc257:	84 c0                	test   %al,%al
 81cc259:	74 2b                	je     81cc286 <_ZN23Dispatcher_MailBox_Open7processEP5CUserR8MSG_BASER9ParamBase+0xf0>
 81cc25b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc25e:	89 04 24             	mov    %eax,(%esp)
 81cc261:	e8 e8 f9 ef ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81cc266:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cc26a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc26d:	89 04 24             	mov    %eax,(%esp)
 81cc270:	e8 37 90 38 00       	call   85552ac <_ZN8WongWork14CMailBoxHelper13ReqDBLoadMailEP5CUserj>
 81cc275:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cc278:	c7 40 04 16 00 00 00 	movl   $0x16,0x4(%eax)
 81cc27f:	b8 00 00 00 00       	mov    $0x0,%eax
 81cc284:	eb 16                	jmp    81cc29c <_ZN23Dispatcher_MailBox_Open7processEP5CUserR8MSG_BASER9ParamBase+0x106>
 81cc286:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cc289:	89 04 24             	mov    %eax,(%esp)
 81cc28c:	e8 c9 82 06 00       	call   823455a <_ZN8WongWork8CMailBox21GetNotLoadedMailCountEv>
 81cc291:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81cc294:	89 42 08             	mov    %eax,0x8(%edx)
 81cc297:	b8 00 00 00 00       	mov    $0x0,%eax
 81cc29c:	83 c4 24             	add    $0x24,%esp
 81cc29f:	5b                   	pop    %ebx
 81cc2a0:	5d                   	pop    %ebp
 81cc2a1:	c3                   	ret

```

```c
// Dispatcher_MailBox_Open::process @ 0x81cc196

/* Dispatcher_MailBox_Open::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_MailBox_Open::process
          (Dispatcher_MailBox_Open *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  CMailBox *this_00;
  int iVar3;
  int iVar4;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x22c8,
                       "virtual int Dispatcher_MailBox_Open::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),uVar2);
    }
    else {
      this_00 = (CMailBox *)CUser::GetMailBox(param_1);
      iVar3 = WongWork::CMailBox::GetNotLoadedMailCount(this_00);
      if (iVar3 != 0) {
        iVar3 = WongWork::CMailBox::GetRecvSize(this_00);
        iVar4 = WongWork::CMailBox::GetLoadedLetterCount(this_00);
        if (iVar3 + iVar4 < 0x14) {
          uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          WongWork::CMailBoxHelper::ReqDBLoadMail(param_1,uVar2);
          *(undefined4 *)(param_3 + 4) = 0x16;
          return 0;
        }
      }
      uVar1 = WongWork::CMailBox::GetNotLoadedMailCount(this_00);
      *(undefined4 *)(param_3 + 8) = uVar1;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## read

```asm
// === 081cc18c Dispatcher_MailBox_Open::read  [0x081cc18c-0x81cc195] ===
 81cc18c:	55                   	push   %ebp
 81cc18d:	89 e5                	mov    %esp,%ebp
 81cc18f:	b8 00 00 00 00       	mov    $0x0,%eax
 81cc194:	5d                   	pop    %ebp
 81cc195:	c3                   	ret

```

```c
// Dispatcher_MailBox_Open::read @ 0x81cc18c

/* Dispatcher_MailBox_Open::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_MailBox_Open::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## send

```asm
// === 081cc2e6 Dispatcher_MailBox_Open::send  [0x081cc2e6-0x81cc3d9] ===
 81cc2e6:	55                   	push   %ebp
 81cc2e7:	89 e5                	mov    %esp,%ebp
 81cc2e9:	56                   	push   %esi
 81cc2ea:	53                   	push   %ebx
 81cc2eb:	83 ec 20             	sub    $0x20,%esp
 81cc2ee:	8b 45 10             	mov    0x10(%ebp),%eax
 81cc2f1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cc2f4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cc2f7:	8b 40 04             	mov    0x4(%eax),%eax
 81cc2fa:	3d ff ff ff 7f       	cmp    $0x7fffffff,%eax
 81cc2ff:	0f 84 cc 00 00 00    	je     81cc3d1 <_ZN23Dispatcher_MailBox_Open4sendEP5CUserR9ParamBase+0xeb>
 81cc305:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cc308:	8b 40 04             	mov    0x4(%eax),%eax
 81cc30b:	85 c0                	test   %eax,%eax
 81cc30d:	74 25                	je     81cc334 <_ZN23Dispatcher_MailBox_Open4sendEP5CUserR9ParamBase+0x4e>
 81cc30f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cc312:	8b 40 04             	mov    0x4(%eax),%eax
 81cc315:	0f b6 c0             	movzbl %al,%eax
 81cc318:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cc31c:	c7 44 24 04 63 00 00 	movl   $0x63,0x4(%esp)
 81cc323:	00 
 81cc324:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc327:	89 04 24             	mov    %eax,(%esp)
 81cc32a:	e8 13 fc 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81cc32f:	e9 9e 00 00 00       	jmp    81cc3d2 <_ZN23Dispatcher_MailBox_Open4sendEP5CUserR9ParamBase+0xec>
 81cc334:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81cc337:	89 04 24             	mov    %eax,(%esp)
 81cc33a:	e8 0d 1a 3c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81cc33f:	c7 44 24 08 63 00 00 	movl   $0x63,0x8(%esp)
 81cc346:	00 
 81cc347:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81cc34e:	00 
 81cc34f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81cc352:	89 04 24             	mov    %eax,(%esp)
 81cc355:	e8 a2 f5 ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81cc35a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81cc361:	00 
 81cc362:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81cc365:	89 04 24             	mov    %eax,(%esp)
 81cc368:	e8 b3 f5 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81cc36d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cc370:	8b 40 08             	mov    0x8(%eax),%eax
 81cc373:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cc377:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81cc37a:	89 04 24             	mov    %eax,(%esp)
 81cc37d:	e8 22 db f0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81cc382:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81cc389:	00 
 81cc38a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81cc38d:	89 04 24             	mov    %eax,(%esp)
 81cc390:	e8 c3 f5 ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81cc395:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81cc398:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cc39c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc39f:	89 04 24             	mov    %eax,(%esp)
 81cc3a2:	e8 13 c2 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81cc3a7:	eb 1b                	jmp    81cc3c4 <_ZN23Dispatcher_MailBox_Open4sendEP5CUserR9ParamBase+0xde>
 81cc3a9:	89 d3                	mov    %edx,%ebx
 81cc3ab:	89 c6                	mov    %eax,%esi
 81cc3ad:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81cc3b0:	89 04 24             	mov    %eax,(%esp)
 81cc3b3:	e8 c8 1a 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81cc3b8:	89 f0                	mov    %esi,%eax
 81cc3ba:	89 da                	mov    %ebx,%edx
 81cc3bc:	89 04 24             	mov    %eax,(%esp)
 81cc3bf:	e8 8c 73 91 00       	call   8ae3750 <_Unwind_Resume>
 81cc3c4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81cc3c7:	89 04 24             	mov    %eax,(%esp)
 81cc3ca:	e8 b1 1a 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81cc3cf:	eb 01                	jmp    81cc3d2 <_ZN23Dispatcher_MailBox_Open4sendEP5CUserR9ParamBase+0xec>
 81cc3d1:	90                   	nop
 81cc3d2:	83 c4 20             	add    $0x20,%esp
 81cc3d5:	5b                   	pop    %ebx
 81cc3d6:	5e                   	pop    %esi
 81cc3d7:	5d                   	pop    %ebp
 81cc3d8:	c3                   	ret
 81cc3d9:	90                   	nop

```

```c
// Dispatcher_MailBox_Open::send @ 0x81cc2e6

/* Dispatcher_MailBox_Open::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_MailBox_Open::send(Dispatcher_MailBox_Open *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) != 0x7fffffff) {
    if (*(int *)(param_2 + 4) == 0) {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081cc355 to 081cc3a6 has its CatchHandler @ 081cc3a9 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,99);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 8));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send(param_1,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
    else {
      CUser::SendCmdErrorPacket(param_1,99,*(uint *)(param_2 + 4) & 0xff);
    }
  }
  return;
}

```

