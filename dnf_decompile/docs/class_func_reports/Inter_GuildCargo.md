# Inter_GuildCargo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084dd26c Inter_GuildCargo::dispatch_sig  [0x084dd26c-0x84dd4b1] ===
 84dd26c:	55                   	push   %ebp
 84dd26d:	89 e5                	mov    %esp,%ebp
 84dd26f:	56                   	push   %esi
 84dd270:	53                   	push   %ebx
 84dd271:	83 ec 30             	sub    $0x30,%esp
 84dd274:	8b 45 10             	mov    0x10(%ebp),%eax
 84dd277:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84dd27a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dd27d:	89 04 24             	mov    %eax,(%esp)
 84dd280:	e8 07 d1 bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84dd285:	83 f8 02             	cmp    $0x2,%eax
 84dd288:	0f 9e c0             	setle  %al
 84dd28b:	84 c0                	test   %al,%al
 84dd28d:	74 0a                	je     84dd299 <_ZN16Inter_GuildCargo12dispatch_sigEP5CUserPci+0x2d>
 84dd28f:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dd294:	e9 10 02 00 00       	jmp    84dd4a9 <_ZN16Inter_GuildCargo12dispatch_sigEP5CUserPci+0x23d>
 84dd299:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84dd2a0:	ff 
 84dd2a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dd2a4:	89 04 24             	mov    %eax,(%esp)
 84dd2a7:	e8 f4 0c 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84dd2ac:	89 c2                	mov    %eax,%edx
 84dd2ae:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84dd2b1:	8b 40 0e             	mov    0xe(%eax),%eax
 84dd2b4:	39 c2                	cmp    %eax,%edx
 84dd2b6:	0f 95 c0             	setne  %al
 84dd2b9:	84 c0                	test   %al,%al
 84dd2bb:	74 0a                	je     84dd2c7 <_ZN16Inter_GuildCargo12dispatch_sigEP5CUserPci+0x5b>
 84dd2bd:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dd2c2:	e9 e2 01 00 00       	jmp    84dd4a9 <_ZN16Inter_GuildCargo12dispatch_sigEP5CUserPci+0x23d>
 84dd2c7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84dd2ca:	8b 80 ea 18 00 00    	mov    0x18ea(%eax),%eax
 84dd2d0:	89 c2                	mov    %eax,%edx
 84dd2d2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84dd2d5:	0f b6 80 ee 18 00 00 	movzbl 0x18ee(%eax),%eax
 84dd2dc:	0f b6 c0             	movzbl %al,%eax
 84dd2df:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84dd2e2:	81 c1 00 97 07 00    	add    $0x79700,%ecx
 84dd2e8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84dd2ec:	89 44 24 08          	mov    %eax,0x8(%esp)
 84dd2f0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dd2f7:	00 
 84dd2f8:	89 0c 24             	mov    %ecx,(%esp)
 84dd2fb:	e8 12 92 1a 00       	call   8686512 <_ZN15cUserHistoryLog16GuildCargoResultE31ENUM_GUILD_CARGO_HISTORY_REASONii>
 84dd300:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84dd303:	0f b6 80 ee 18 00 00 	movzbl 0x18ee(%eax),%eax
 84dd30a:	3c c1                	cmp    $0xc1,%al
 84dd30c:	74 2e                	je     84dd33c <_ZN16Inter_GuildCargo12dispatch_sigEP5CUserPci+0xd0>
 84dd30e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84dd311:	0f b6 80 ee 18 00 00 	movzbl 0x18ee(%eax),%eax
 84dd318:	0f b6 c0             	movzbl %al,%eax
 84dd31b:	89 44 24 08          	mov    %eax,0x8(%esp)
 84dd31f:	c7 44 24 04 09 01 00 	movl   $0x109,0x4(%esp)
 84dd326:	00 
 84dd327:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dd32a:	89 04 24             	mov    %eax,(%esp)
 84dd32d:	e8 10 ec 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84dd332:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dd337:	e9 6d 01 00 00       	jmp    84dd4a9 <_ZN16Inter_GuildCargo12dispatch_sigEP5CUserPci+0x23d>
 84dd33c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84dd33f:	8b 80 ea 18 00 00    	mov    0x18ea(%eax),%eax
 84dd345:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dd349:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dd34c:	89 04 24             	mov    %eax,(%esp)
 84dd34f:	e8 aa fb 00 00       	call   84ecefe <_ZN5CUser21SetGuildCargoCapacityEj>
 84dd354:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 84dd35b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84dd362:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd365:	89 04 24             	mov    %eax,(%esp)
 84dd368:	e8 df 09 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84dd36d:	c7 44 24 08 09 01 00 	movl   $0x109,0x8(%esp)
 84dd374:	00 
 84dd375:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dd37c:	00 
 84dd37d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd380:	89 04 24             	mov    %eax,(%esp)
 84dd383:	e8 74 e5 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84dd388:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dd38f:	00 
 84dd390:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd393:	89 04 24             	mov    %eax,(%esp)
 84dd396:	e8 85 e5 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84dd39b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84dd39e:	8b 80 ea 18 00 00    	mov    0x18ea(%eax),%eax
 84dd3a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dd3a8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd3ab:	89 04 24             	mov    %eax,(%esp)
 84dd3ae:	e8 89 e5 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84dd3b3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd3b6:	89 04 24             	mov    %eax,(%esp)
 84dd3b9:	e8 8e 37 c3 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 84dd3be:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84dd3c1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84dd3c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dd3c8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd3cb:	89 04 24             	mov    %eax,(%esp)
 84dd3ce:	e8 d1 ca bf ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84dd3d3:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84dd3da:	eb 57                	jmp    84dd433 <_ZN16Inter_GuildCargo12dispatch_sigEP5CUserPci+0x1c7>
 84dd3dc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dd3df:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84dd3e2:	6b c0 35             	imul   $0x35,%eax,%eax
 84dd3e5:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84dd3e8:	83 c0 10             	add    $0x10,%eax
 84dd3eb:	8b 40 03             	mov    0x3(%eax),%eax
 84dd3ee:	85 c0                	test   %eax,%eax
 84dd3f0:	74 3d                	je     84dd42f <_ZN16Inter_GuildCargo12dispatch_sigEP5CUserPci+0x1c3>
 84dd3f2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dd3f5:	98                   	cwtl
 84dd3f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dd3fa:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd3fd:	89 04 24             	mov    %eax,(%esp)
 84dd400:	e8 9f ca bf ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84dd405:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dd408:	6b c0 35             	imul   $0x35,%eax,%eax
 84dd40b:	83 c0 10             	add    $0x10,%eax
 84dd40e:	03 45 ec             	add    -0x14(%ebp),%eax
 84dd411:	83 c0 02             	add    $0x2,%eax
 84dd414:	c7 44 24 08 35 00 00 	movl   $0x35,0x8(%esp)
 84dd41b:	00 
 84dd41c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dd420:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd423:	89 04 24             	mov    %eax,(%esp)
 84dd426:	e8 dd 0a c4 ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 84dd42b:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84dd42f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84dd433:	83 7d f4 77          	cmpl   $0x77,-0xc(%ebp)
 84dd437:	0f 9e c0             	setle  %al
 84dd43a:	84 c0                	test   %al,%al
 84dd43c:	75 9e                	jne    84dd3dc <_ZN16Inter_GuildCargo12dispatch_sigEP5CUserPci+0x170>
 84dd43e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84dd441:	89 44 24 08          	mov    %eax,0x8(%esp)
 84dd445:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dd448:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dd44c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd44f:	89 04 24             	mov    %eax,(%esp)
 84dd452:	e8 b1 94 c3 ff       	call   8116908 <_ZN18InterfacePacketBuf9put_shortERii>
 84dd457:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dd45e:	00 
 84dd45f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd462:	89 04 24             	mov    %eax,(%esp)
 84dd465:	e8 ee e4 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84dd46a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd46d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dd471:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dd474:	89 04 24             	mov    %eax,(%esp)
 84dd477:	e8 3e b1 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84dd47c:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dd481:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd484:	89 04 24             	mov    %eax,(%esp)
 84dd487:	e8 f4 09 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dd48c:	eb 1b                	jmp    84dd4a9 <_ZN16Inter_GuildCargo12dispatch_sigEP5CUserPci+0x23d>
 84dd48e:	89 d3                	mov    %edx,%ebx
 84dd490:	89 c6                	mov    %eax,%esi
 84dd492:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd495:	89 04 24             	mov    %eax,(%esp)
 84dd498:	e8 e3 09 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dd49d:	89 f0                	mov    %esi,%eax
 84dd49f:	89 da                	mov    %ebx,%edx
 84dd4a1:	89 04 24             	mov    %eax,(%esp)
 84dd4a4:	e8 a7 62 60 00       	call   8ae3750 <_Unwind_Resume>
 84dd4a9:	89 d8                	mov    %ebx,%eax
 84dd4ab:	83 c4 30             	add    $0x30,%esp
 84dd4ae:	5b                   	pop    %ebx
 84dd4af:	5e                   	pop    %esi
 84dd4b0:	5d                   	pop    %ebp
 84dd4b1:	c3                   	ret

```

```c
// Inter_GuildCargo::dispatch_sig @ 0x84dd26c

/* Inter_GuildCargo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GuildCargo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_28 [12];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = param_3;
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar1) &&
     (iVar1 = CUser::get_charac_no((CUser *)param_2,-1), iVar1 == *(int *)(local_18 + 0xe))) {
    cUserHistoryLog::GuildCargoResult
              ((cUserHistoryLog *)(param_2 + 0x79700),1,*(undefined1 *)(local_18 + 0x18ee),
               *(undefined4 *)(local_18 + 0x18ea));
    if (*(char *)(local_18 + 0x18ee) == -0x3f) {
      CUser::SetGuildCargoCapacity((CUser *)param_2,*(uint *)(local_18 + 0x18ea));
      local_1c = 0;
      local_14 = 0;
      PacketGuard::PacketGuard(local_28);
                    /* try { // try from 084dd383 to 084dd47b has its CatchHandler @ 084dd48e */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x109);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,*(int *)(local_18 + 0x18ea));
      local_1c = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_28);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,local_14);
      for (local_10 = 0; local_10 < 0x78; local_10 = local_10 + 1) {
        if (*(int *)(local_18 + local_10 * 0x35 + 0x13) != 0) {
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,(int)(short)local_10);
          InterfacePacketBuf::put_binary
                    ((InterfacePacketBuf *)local_28,(char *)(local_10 * 0x35 + local_18 + 0x12),0x35
                    );
          local_14 = local_14 + 1;
        }
      }
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,&local_1c,local_14);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
      CUser::Send((CUser *)param_2,local_28);
      PacketGuard::~PacketGuard(local_28);
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x109,*(undefined1 *)(local_18 + 0x18ee));
    }
  }
  return 0;
}

```

