# Dispatcher_ConnectP2PPvP

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08225394 Dispatcher_ConnectP2PPvP::dispatch_sig  [0x08225394-0x82255c9] ===
 8225394:	55                   	push   %ebp
 8225395:	89 e5                	mov    %esp,%ebp
 8225397:	83 ec 48             	sub    $0x48,%esp
 822539a:	8b 45 0c             	mov    0xc(%ebp),%eax
 822539d:	89 04 24             	mov    %eax,(%esp)
 82253a0:	e8 e7 4f eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82253a5:	83 f8 01             	cmp    $0x1,%eax
 82253a8:	0f 9e c0             	setle  %al
 82253ab:	84 c0                	test   %al,%al
 82253ad:	74 29                	je     82253d8 <_ZN24Dispatcher_ConnectP2PPvP12dispatch_sigEP5CUserR9PacketBuf+0x44>
 82253af:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82253b6:	00 
 82253b7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82253be:	00 
 82253bf:	c7 44 24 04 a0 c4 bc 	movl   $0x8bcc4a0,0x4(%esp)
 82253c6:	08 
 82253c7:	c7 04 24 16 e0 00 00 	movl   $0xe016,(%esp)
 82253ce:	e8 04 b5 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82253d3:	e9 ef 01 00 00       	jmp    82255c7 <_ZN24Dispatcher_ConnectP2PPvP12dispatch_sigEP5CUserR9PacketBuf+0x233>
 82253d8:	c6 45 ef ff          	movb   $0xff,-0x11(%ebp)
 82253dc:	8d 45 ef             	lea    -0x11(%ebp),%eax
 82253df:	89 44 24 04          	mov    %eax,0x4(%esp)
 82253e3:	8b 45 10             	mov    0x10(%ebp),%eax
 82253e6:	89 04 24             	mov    %eax,(%esp)
 82253e9:	e8 34 7b 36 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 82253ee:	83 f0 01             	xor    $0x1,%eax
 82253f1:	84 c0                	test   %al,%al
 82253f3:	74 29                	je     822541e <_ZN24Dispatcher_ConnectP2PPvP12dispatch_sigEP5CUserR9PacketBuf+0x8a>
 82253f5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82253fc:	00 
 82253fd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8225404:	00 
 8225405:	c7 44 24 04 a0 c4 bc 	movl   $0x8bcc4a0,0x4(%esp)
 822540c:	08 
 822540d:	c7 04 24 1a e0 00 00 	movl   $0xe01a,(%esp)
 8225414:	e8 be b4 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8225419:	e9 a9 01 00 00       	jmp    82255c7 <_ZN24Dispatcher_ConnectP2PPvP12dispatch_sigEP5CUserR9PacketBuf+0x233>
 822541e:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8225422:	3c 08                	cmp    $0x8,%al
 8225424:	7f 08                	jg     822542e <_ZN24Dispatcher_ConnectP2PPvP12dispatch_sigEP5CUserR9PacketBuf+0x9a>
 8225426:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 822542a:	84 c0                	test   %al,%al
 822542c:	79 29                	jns    8225457 <_ZN24Dispatcher_ConnectP2PPvP12dispatch_sigEP5CUserR9PacketBuf+0xc3>
 822542e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8225435:	00 
 8225436:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 822543d:	00 
 822543e:	c7 44 24 04 a0 c4 bc 	movl   $0x8bcc4a0,0x4(%esp)
 8225445:	08 
 8225446:	c7 04 24 1e e0 00 00 	movl   $0xe01e,(%esp)
 822544d:	e8 85 b4 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8225452:	e9 70 01 00 00       	jmp    82255c7 <_ZN24Dispatcher_ConnectP2PPvP12dispatch_sigEP5CUserR9PacketBuf+0x233>
 8225457:	c7 45 e7 00 00 00 00 	movl   $0x0,-0x19(%ebp)
 822545e:	c7 45 eb 00 00 00 00 	movl   $0x0,-0x15(%ebp)
 8225465:	c6 45 e6 ff          	movb   $0xff,-0x1a(%ebp)
 8225469:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8225470:	e9 cb 00 00 00       	jmp    8225540 <_ZN24Dispatcher_ConnectP2PPvP12dispatch_sigEP5CUserR9PacketBuf+0x1ac>
 8225475:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 8225478:	89 44 24 04          	mov    %eax,0x4(%esp)
 822547c:	8b 45 10             	mov    0x10(%ebp),%eax
 822547f:	89 04 24             	mov    %eax,(%esp)
 8225482:	e8 9b 7a 36 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 8225487:	83 f0 01             	xor    $0x1,%eax
 822548a:	84 c0                	test   %al,%al
 822548c:	74 29                	je     82254b7 <_ZN24Dispatcher_ConnectP2PPvP12dispatch_sigEP5CUserR9PacketBuf+0x123>
 822548e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8225495:	00 
 8225496:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 822549d:	00 
 822549e:	c7 44 24 04 a0 c4 bc 	movl   $0x8bcc4a0,0x4(%esp)
 82254a5:	08 
 82254a6:	c7 04 24 25 e0 00 00 	movl   $0xe025,(%esp)
 82254ad:	e8 25 b4 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82254b2:	e9 10 01 00 00       	jmp    82255c7 <_ZN24Dispatcher_ConnectP2PPvP12dispatch_sigEP5CUserR9PacketBuf+0x233>
 82254b7:	0f b6 45 e6          	movzbl -0x1a(%ebp),%eax
 82254bb:	3c 07                	cmp    $0x7,%al
 82254bd:	7f 08                	jg     82254c7 <_ZN24Dispatcher_ConnectP2PPvP12dispatch_sigEP5CUserR9PacketBuf+0x133>
 82254bf:	0f b6 45 e6          	movzbl -0x1a(%ebp),%eax
 82254c3:	84 c0                	test   %al,%al
 82254c5:	79 29                	jns    82254f0 <_ZN24Dispatcher_ConnectP2PPvP12dispatch_sigEP5CUserR9PacketBuf+0x15c>
 82254c7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82254ce:	00 
 82254cf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82254d6:	00 
 82254d7:	c7 44 24 04 a0 c4 bc 	movl   $0x8bcc4a0,0x4(%esp)
 82254de:	08 
 82254df:	c7 04 24 28 e0 00 00 	movl   $0xe028,(%esp)
 82254e6:	e8 ec b3 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82254eb:	e9 d7 00 00 00       	jmp    82255c7 <_ZN24Dispatcher_ConnectP2PPvP12dispatch_sigEP5CUserR9PacketBuf+0x233>
 82254f0:	0f b6 45 e6          	movzbl -0x1a(%ebp),%eax
 82254f4:	0f be c0             	movsbl %al,%eax
 82254f7:	8d 55 e7             	lea    -0x19(%ebp),%edx
 82254fa:	8d 04 02             	lea    (%edx,%eax,1),%eax
 82254fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8225501:	8b 45 10             	mov    0x10(%ebp),%eax
 8225504:	89 04 24             	mov    %eax,(%esp)
 8225507:	e8 16 7a 36 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 822550c:	83 f0 01             	xor    $0x1,%eax
 822550f:	84 c0                	test   %al,%al
 8225511:	74 29                	je     822553c <_ZN24Dispatcher_ConnectP2PPvP12dispatch_sigEP5CUserR9PacketBuf+0x1a8>
 8225513:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 822551a:	00 
 822551b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8225522:	00 
 8225523:	c7 44 24 04 a0 c4 bc 	movl   $0x8bcc4a0,0x4(%esp)
 822552a:	08 
 822552b:	c7 04 24 2b e0 00 00 	movl   $0xe02b,(%esp)
 8225532:	e8 a0 b3 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8225537:	e9 8b 00 00 00       	jmp    82255c7 <_ZN24Dispatcher_ConnectP2PPvP12dispatch_sigEP5CUserR9PacketBuf+0x233>
 822553c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8225540:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8225544:	0f be c0             	movsbl %al,%eax
 8225547:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 822554a:	0f 9f c0             	setg   %al
 822554d:	84 c0                	test   %al,%al
 822554f:	0f 85 20 ff ff ff    	jne    8225475 <_ZN24Dispatcher_ConnectP2PPvP12dispatch_sigEP5CUserR9PacketBuf+0xe1>
 8225555:	8b 45 0c             	mov    0xc(%ebp),%eax
 8225558:	89 04 24             	mov    %eax,(%esp)
 822555b:	e8 2e fc 42 00       	call   865518e <_ZN5CUser10GetPVPRoomEv>
 8225560:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8225563:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8225567:	75 07                	jne    8225570 <_ZN24Dispatcher_ConnectP2PPvP12dispatch_sigEP5CUserR9PacketBuf+0x1dc>
 8225569:	b8 00 00 00 00       	mov    $0x0,%eax
 822556e:	eb 57                	jmp    82255c7 <_ZN24Dispatcher_ConnectP2PPvP12dispatch_sigEP5CUserR9PacketBuf+0x233>
 8225570:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8225573:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 8225579:	85 c0                	test   %eax,%eax
 822557b:	75 07                	jne    8225584 <_ZN24Dispatcher_ConnectP2PPvP12dispatch_sigEP5CUserR9PacketBuf+0x1f0>
 822557d:	b8 00 00 00 00       	mov    $0x0,%eax
 8225582:	eb 43                	jmp    82255c7 <_ZN24Dispatcher_ConnectP2PPvP12dispatch_sigEP5CUserR9PacketBuf+0x233>
 8225584:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8225587:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 822558d:	8b 00                	mov    (%eax),%eax
 822558f:	83 c0 5c             	add    $0x5c,%eax
 8225592:	8b 08                	mov    (%eax),%ecx
 8225594:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8225598:	0f be d0             	movsbl %al,%edx
 822559b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 822559e:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 82255a4:	89 54 24 10          	mov    %edx,0x10(%esp)
 82255a8:	8d 55 e7             	lea    -0x19(%ebp),%edx
 82255ab:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82255af:	8b 55 f0             	mov    -0x10(%ebp),%edx
 82255b2:	89 54 24 08          	mov    %edx,0x8(%esp)
 82255b6:	8b 55 0c             	mov    0xc(%ebp),%edx
 82255b9:	89 54 24 04          	mov    %edx,0x4(%esp)
 82255bd:	89 04 24             	mov    %eax,(%esp)
 82255c0:	ff d1                	call   *%ecx
 82255c2:	b8 00 00 00 00       	mov    $0x0,%eax
 82255c7:	c9                   	leave
 82255c8:	c3                   	ret
 82255c9:	90                   	nop

```

```c
// Dispatcher_ConnectP2PPvP::dispatch_sig @ 0x8225394

/* Dispatcher_ConnectP2PPvP::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_ConnectP2PPvP::dispatch_sig
          (Dispatcher_ConnectP2PPvP *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char local_1e;
  char local_1d [9];
  int local_14;
  int local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 2) {
    uVar3 = LineFunc(0xe016,"virtual int Dispatcher_ConnectP2PPvP::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    local_1d[8] = -1;
    cVar1 = PacketBuf::get_byte(param_2,local_1d + 8);
    if (cVar1 == '\x01') {
      if ((local_1d[8] < '\t') && (-1 < local_1d[8])) {
        local_1d[0] = '\0';
        local_1d[1] = '\0';
        local_1d[2] = '\0';
        local_1d[3] = '\0';
        local_1d[4] = '\0';
        local_1d[5] = '\0';
        local_1d[6] = '\0';
        local_1d[7] = '\0';
        local_1e = -1;
        for (local_10 = 0; local_10 < local_1d[8]; local_10 = local_10 + 1) {
          cVar1 = PacketBuf::get_byte(param_2,&local_1e);
          if (cVar1 != '\x01') {
            uVar3 = LineFunc(0xe025,
                             "virtual int Dispatcher_ConnectP2PPvP::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar3;
          }
          if (('\a' < local_1e) || (local_1e < '\0')) {
            uVar3 = LineFunc(0xe028,
                             "virtual int Dispatcher_ConnectP2PPvP::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar3;
          }
          cVar1 = PacketBuf::get_byte(param_2,local_1d + local_1e);
          if (cVar1 != '\x01') {
            uVar3 = LineFunc(0xe02b,
                             "virtual int Dispatcher_ConnectP2PPvP::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar3;
          }
        }
        local_14 = CUser::GetPVPRoom(param_1);
        if (local_14 == 0) {
          uVar3 = 0;
        }
        else if (*(int *)(local_14 + 0x6e4) == 0) {
          uVar3 = 0;
        }
        else {
          (**(code **)(**(int **)(local_14 + 0x6e4) + 0x5c))
                    (*(undefined4 *)(local_14 + 0x6e4),param_1,local_14,local_1d,(int)local_1d[8]);
          uVar3 = 0;
        }
      }
      else {
        uVar3 = LineFunc(0xe01e,
                         "virtual int Dispatcher_ConnectP2PPvP::dispatch_sig(CUser*, PacketBuf&)",0,
                         0);
      }
    }
    else {
      uVar3 = LineFunc(0xe01a,
                       "virtual int Dispatcher_ConnectP2PPvP::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
    }
  }
  return uVar3;
}

```

