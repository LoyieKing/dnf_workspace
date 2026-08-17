# Inter_MonitorNoticeGuildEnter

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084c9194 Inter_MonitorNoticeGuildEnter::dispatch_sig  [0x084c9194-0x84c93e3] ===
 84c9194:	55                   	push   %ebp
 84c9195:	89 e5                	mov    %esp,%ebp
 84c9197:	57                   	push   %edi
 84c9198:	56                   	push   %esi
 84c9199:	53                   	push   %ebx
 84c919a:	83 ec 5c             	sub    $0x5c,%esp
 84c919d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c91a0:	89 04 24             	mov    %eax,(%esp)
 84c91a3:	e8 e4 11 c1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84c91a8:	85 c0                	test   %eax,%eax
 84c91aa:	0f 94 c0             	sete   %al
 84c91ad:	84 c0                	test   %al,%al
 84c91af:	74 0a                	je     84c91bb <_ZN29Inter_MonitorNoticeGuildEnter12dispatch_sigEP5CUserPci+0x27>
 84c91b1:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c91b6:	e9 1e 02 00 00       	jmp    84c93d9 <_ZN29Inter_MonitorNoticeGuildEnter12dispatch_sigEP5CUserPci+0x245>
 84c91bb:	8b 45 10             	mov    0x10(%ebp),%eax
 84c91be:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84c91c1:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84c91c8:	ff 
 84c91c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c91cc:	89 04 24             	mov    %eax,(%esp)
 84c91cf:	e8 cc 4d 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84c91d4:	89 c2                	mov    %eax,%edx
 84c91d6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c91d9:	8b 40 0e             	mov    0xe(%eax),%eax
 84c91dc:	39 c2                	cmp    %eax,%edx
 84c91de:	0f 95 c0             	setne  %al
 84c91e1:	84 c0                	test   %al,%al
 84c91e3:	74 57                	je     84c923c <_ZN29Inter_MonitorNoticeGuildEnter12dispatch_sigEP5CUserPci+0xa8>
 84c91e5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c91e8:	8b 58 0e             	mov    0xe(%eax),%ebx
 84c91eb:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84c91f2:	ff 
 84c91f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c91f6:	89 04 24             	mov    %eax,(%esp)
 84c91f9:	e8 a2 4d 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84c91fe:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84c9202:	89 44 24 14          	mov    %eax,0x14(%esp)
 84c9206:	c7 44 24 10 00 79 c8 	movl   $0x8c87900,0x10(%esp)
 84c920d:	08 
 84c920e:	c7 44 24 0c 05 23 00 	movl   $0x2305,0xc(%esp)
 84c9215:	00 
 84c9216:	c7 44 24 08 40 dc c8 	movl   $0x8c8dc40,0x8(%esp)
 84c921d:	08 
 84c921e:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84c9225:	08 
 84c9226:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84c922d:	e8 d8 a9 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84c9232:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c9237:	e9 9d 01 00 00       	jmp    84c93d9 <_ZN29Inter_MonitorNoticeGuildEnter12dispatch_sigEP5CUserPci+0x245>
 84c923c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c923f:	8b 58 55             	mov    0x55(%eax),%ebx
 84c9242:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c9245:	89 04 24             	mov    %eax,(%esp)
 84c9248:	e8 01 2a c0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84c924d:	39 c3                	cmp    %eax,%ebx
 84c924f:	0f 94 c0             	sete   %al
 84c9252:	84 c0                	test   %al,%al
 84c9254:	74 63                	je     84c92b9 <_ZN29Inter_MonitorNoticeGuildEnter12dispatch_sigEP5CUserPci+0x125>
 84c9256:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c9259:	0f b6 40 59          	movzbl 0x59(%eax),%eax
 84c925d:	84 c0                	test   %al,%al
 84c925f:	74 07                	je     84c9268 <_ZN29Inter_MonitorNoticeGuildEnter12dispatch_sigEP5CUserPci+0xd4>
 84c9261:	bb 01 00 00 00       	mov    $0x1,%ebx
 84c9266:	eb 05                	jmp    84c926d <_ZN29Inter_MonitorNoticeGuildEnter12dispatch_sigEP5CUserPci+0xd9>
 84c9268:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c926d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c9270:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 84c9274:	0f b7 f8             	movzwl %ax,%edi
 84c9277:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c927a:	8b 70 1c             	mov    0x1c(%eax),%esi
 84c927d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c9280:	83 c0 20             	add    $0x20,%eax
 84c9283:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 84c9286:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c9289:	89 04 24             	mov    %eax,(%esp)
 84c928c:	e8 db 61 d6 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 84c9291:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c9294:	81 c2 00 97 07 00    	add    $0x79700,%edx
 84c929a:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 84c929e:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84c92a2:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84c92a6:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 84c92a9:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84c92ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c92b1:	89 14 24             	mov    %edx,(%esp)
 84c92b4:	e8 8f c7 1b 00       	call   8685a48 <_ZN15cUserHistoryLog9GuildJoinEjPKcjtc>
 84c92b9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84c92bc:	89 04 24             	mov    %eax,(%esp)
 84c92bf:	e8 88 4a 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84c92c4:	c7 44 24 08 3a 00 00 	movl   $0x3a,0x8(%esp)
 84c92cb:	00 
 84c92cc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c92d3:	00 
 84c92d4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84c92d7:	89 04 24             	mov    %eax,(%esp)
 84c92da:	e8 1d 26 c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84c92df:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c92e2:	8b 40 14             	mov    0x14(%eax),%eax
 84c92e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c92e9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84c92ec:	89 04 24             	mov    %eax,(%esp)
 84c92ef:	e8 48 26 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84c92f4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c92f7:	8b 40 1c             	mov    0x1c(%eax),%eax
 84c92fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c92fe:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84c9301:	89 04 24             	mov    %eax,(%esp)
 84c9304:	e8 33 26 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84c9309:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c930c:	83 c0 20             	add    $0x20,%eax
 84c930f:	89 04 24             	mov    %eax,(%esp)
 84c9312:	e8 99 50 bb ff       	call   807e3b0 <strlen@plt>
 84c9317:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84c931a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84c931d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c9321:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84c9324:	89 04 24             	mov    %eax,(%esp)
 84c9327:	e8 10 26 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84c932c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c932f:	8d 50 20             	lea    0x20(%eax),%edx
 84c9332:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84c9335:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c9339:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c933d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84c9340:	89 04 24             	mov    %eax,(%esp)
 84c9343:	e8 9c e0 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84c9348:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c934b:	83 c0 37             	add    $0x37,%eax
 84c934e:	89 04 24             	mov    %eax,(%esp)
 84c9351:	e8 5a 50 bb ff       	call   807e3b0 <strlen@plt>
 84c9356:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84c9359:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84c935c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c9360:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84c9363:	89 04 24             	mov    %eax,(%esp)
 84c9366:	e8 d1 25 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84c936b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c936e:	8d 50 37             	lea    0x37(%eax),%edx
 84c9371:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84c9374:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c9378:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c937c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84c937f:	89 04 24             	mov    %eax,(%esp)
 84c9382:	e8 5d e0 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84c9387:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c938e:	00 
 84c938f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84c9392:	89 04 24             	mov    %eax,(%esp)
 84c9395:	e8 be 25 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84c939a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84c939d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c93a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c93a4:	89 04 24             	mov    %eax,(%esp)
 84c93a7:	e8 0e f2 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c93ac:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c93b1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84c93b4:	89 04 24             	mov    %eax,(%esp)
 84c93b7:	e8 c4 4a 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84c93bc:	eb 1b                	jmp    84c93d9 <_ZN29Inter_MonitorNoticeGuildEnter12dispatch_sigEP5CUserPci+0x245>
 84c93be:	89 d3                	mov    %edx,%ebx
 84c93c0:	89 c6                	mov    %eax,%esi
 84c93c2:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84c93c5:	89 04 24             	mov    %eax,(%esp)
 84c93c8:	e8 b3 4a 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84c93cd:	89 f0                	mov    %esi,%eax
 84c93cf:	89 da                	mov    %ebx,%edx
 84c93d1:	89 04 24             	mov    %eax,(%esp)
 84c93d4:	e8 77 a3 61 00       	call   8ae3750 <_Unwind_Resume>
 84c93d9:	89 d8                	mov    %ebx,%eax
 84c93db:	83 c4 5c             	add    $0x5c,%esp
 84c93de:	5b                   	pop    %ebx
 84c93df:	5e                   	pop    %esi
 84c93e0:	5f                   	pop    %edi
 84c93e1:	5d                   	pop    %ebp
 84c93e2:	c3                   	ret
 84c93e3:	90                   	nop

```

```c
// Inter_MonitorNoticeGuildEnter::dispatch_sig @ 0x84c9194

/* Inter_MonitorNoticeGuildEnter::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorNoticeGuildEnter::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  PacketGuard local_34 [12];
  int local_28;
  size_t local_24;
  size_t local_20;
  
  iVar5 = CUser::get_state((CUser *)param_2);
  if (iVar5 != 0) {
    local_28 = param_3;
    iVar5 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar5 == *(int *)(local_28 + 0xe)) {
      iVar5 = *(int *)(local_28 + 0x55);
      iVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      if (iVar5 == iVar7) {
        cVar1 = *(char *)(local_28 + 0x59);
        uVar2 = *(ushort *)(local_28 + 0x12);
        uVar4 = *(uint *)(local_28 + 0x1c);
        pcVar8 = (char *)(local_28 + 0x20);
        uVar9 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
        cUserHistoryLog::GuildJoin
                  ((cUserHistoryLog *)(param_2 + 0x79700),uVar9,pcVar8,uVar4,uVar2,cVar1 != '\0');
      }
      PacketGuard::PacketGuard(local_34);
                    /* try { // try from 084c92da to 084c93ab has its CatchHandler @ 084c93be */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0x3a);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,*(int *)(local_28 + 0x14));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,*(int *)(local_28 + 0x1c));
      local_24 = strlen((char *)(local_28 + 0x20));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,local_24);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_34,(char *)(local_28 + 0x20),local_24)
      ;
      local_20 = strlen((char *)(local_28 + 0x37));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,local_20);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_34,(char *)(local_28 + 0x37),local_20)
      ;
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
      CUser::Send((CUser *)param_2,local_34);
      PacketGuard::~PacketGuard(local_34);
    }
    else {
      uVar3 = *(undefined4 *)(local_28 + 0xe);
      uVar6 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeGuildEnter::dispatch_sig(CUser*, char*, int)",
                 0x2305,
                 "Inter_MonitorNoticeGuildEnter::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar6,uVar3);
    }
  }
  return 0;
}

```

