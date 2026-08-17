# Inter_MonitorNoticeGuildMarkChange

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084ca1e6 Inter_MonitorNoticeGuildMarkChange::dispatch_sig  [0x084ca1e6-0x84ca379] ===
 84ca1e6:	55                   	push   %ebp
 84ca1e7:	89 e5                	mov    %esp,%ebp
 84ca1e9:	57                   	push   %edi
 84ca1ea:	56                   	push   %esi
 84ca1eb:	53                   	push   %ebx
 84ca1ec:	83 ec 4c             	sub    $0x4c,%esp
 84ca1ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ca1f2:	89 04 24             	mov    %eax,(%esp)
 84ca1f5:	e8 92 01 c1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84ca1fa:	85 c0                	test   %eax,%eax
 84ca1fc:	0f 94 c0             	sete   %al
 84ca1ff:	84 c0                	test   %al,%al
 84ca201:	74 0a                	je     84ca20d <_ZN34Inter_MonitorNoticeGuildMarkChange12dispatch_sigEP5CUserPci+0x27>
 84ca203:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ca208:	e9 62 01 00 00       	jmp    84ca36f <_ZN34Inter_MonitorNoticeGuildMarkChange12dispatch_sigEP5CUserPci+0x189>
 84ca20d:	8b 45 10             	mov    0x10(%ebp),%eax
 84ca210:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84ca213:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84ca21a:	ff 
 84ca21b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ca21e:	89 04 24             	mov    %eax,(%esp)
 84ca221:	e8 7a 3d 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84ca226:	89 c2                	mov    %eax,%edx
 84ca228:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84ca22b:	8b 40 0e             	mov    0xe(%eax),%eax
 84ca22e:	39 c2                	cmp    %eax,%edx
 84ca230:	0f 95 c0             	setne  %al
 84ca233:	84 c0                	test   %al,%al
 84ca235:	74 57                	je     84ca28e <_ZN34Inter_MonitorNoticeGuildMarkChange12dispatch_sigEP5CUserPci+0xa8>
 84ca237:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84ca23a:	8b 58 0e             	mov    0xe(%eax),%ebx
 84ca23d:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84ca244:	ff 
 84ca245:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ca248:	89 04 24             	mov    %eax,(%esp)
 84ca24b:	e8 50 3d 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84ca250:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84ca254:	89 44 24 14          	mov    %eax,0x14(%esp)
 84ca258:	c7 44 24 10 4c 7c c8 	movl   $0x8c87c4c,0x10(%esp)
 84ca25f:	08 
 84ca260:	c7 44 24 0c 4a 24 00 	movl   $0x244a,0xc(%esp)
 84ca267:	00 
 84ca268:	c7 44 24 08 e0 d8 c8 	movl   $0x8c8d8e0,0x8(%esp)
 84ca26f:	08 
 84ca270:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84ca277:	08 
 84ca278:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84ca27f:	e8 86 99 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84ca284:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ca289:	e9 e1 00 00 00       	jmp    84ca36f <_ZN34Inter_MonitorNoticeGuildMarkChange12dispatch_sigEP5CUserPci+0x189>
 84ca28e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84ca291:	8b 78 12             	mov    0x12(%eax),%edi
 84ca294:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84ca297:	8b 70 0e             	mov    0xe(%eax),%esi
 84ca29a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84ca29d:	8b 58 0a             	mov    0xa(%eax),%ebx
 84ca2a0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84ca2a7:	00 
 84ca2a8:	c7 44 24 08 4f 24 00 	movl   $0x244f,0x8(%esp)
 84ca2af:	00 
 84ca2b0:	c7 44 24 04 e0 d8 c8 	movl   $0x8c8d8e0,0x4(%esp)
 84ca2b7:	08 
 84ca2b8:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84ca2bb:	89 04 24             	mov    %eax,(%esp)
 84ca2be:	e8 55 54 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84ca2c3:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84ca2c7:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84ca2cb:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84ca2cf:	c7 44 24 04 b4 7c c8 	movl   $0x8c87cb4,0x4(%esp)
 84ca2d6:	08 
 84ca2d7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84ca2da:	89 04 24             	mov    %eax,(%esp)
 84ca2dd:	e8 a6 54 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84ca2e2:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84ca2e5:	89 04 24             	mov    %eax,(%esp)
 84ca2e8:	e8 5f 3a 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84ca2ed:	c7 44 24 08 3c 00 00 	movl   $0x3c,0x8(%esp)
 84ca2f4:	00 
 84ca2f5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84ca2fc:	00 
 84ca2fd:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84ca300:	89 04 24             	mov    %eax,(%esp)
 84ca303:	e8 f4 15 c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84ca308:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84ca30b:	8b 40 12             	mov    0x12(%eax),%eax
 84ca30e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ca312:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84ca315:	89 04 24             	mov    %eax,(%esp)
 84ca318:	e8 1f 16 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84ca31d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84ca324:	00 
 84ca325:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84ca328:	89 04 24             	mov    %eax,(%esp)
 84ca32b:	e8 28 16 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84ca330:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84ca333:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ca337:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ca33a:	89 04 24             	mov    %eax,(%esp)
 84ca33d:	e8 78 e2 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84ca342:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ca347:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84ca34a:	89 04 24             	mov    %eax,(%esp)
 84ca34d:	e8 2e 3b 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84ca352:	eb 1b                	jmp    84ca36f <_ZN34Inter_MonitorNoticeGuildMarkChange12dispatch_sigEP5CUserPci+0x189>
 84ca354:	89 d3                	mov    %edx,%ebx
 84ca356:	89 c6                	mov    %eax,%esi
 84ca358:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84ca35b:	89 04 24             	mov    %eax,(%esp)
 84ca35e:	e8 1d 3b 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84ca363:	89 f0                	mov    %esi,%eax
 84ca365:	89 da                	mov    %ebx,%edx
 84ca367:	89 04 24             	mov    %eax,(%esp)
 84ca36a:	e8 e1 93 61 00       	call   8ae3750 <_Unwind_Resume>
 84ca36f:	89 d8                	mov    %ebx,%eax
 84ca371:	83 c4 4c             	add    $0x4c,%esp
 84ca374:	5b                   	pop    %ebx
 84ca375:	5e                   	pop    %esi
 84ca376:	5f                   	pop    %edi
 84ca377:	5d                   	pop    %ebp
 84ca378:	c3                   	ret
 84ca379:	90                   	nop

```

```c
// Inter_MonitorNoticeGuildMarkChange::dispatch_sig @ 0x84ca1e6

/* Inter_MonitorNoticeGuildMarkChange::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_MonitorNoticeGuildMarkChange::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  PacketGuard local_3c [12];
  cMyTrace local_30 [16];
  int local_20;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (iVar3 != 0) {
    local_20 = param_3;
    iVar3 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar3 == *(int *)(local_20 + 0xe)) {
      uVar1 = *(undefined4 *)(local_20 + 0x12);
      uVar4 = *(undefined4 *)(local_20 + 0xe);
      uVar2 = *(undefined4 *)(local_20 + 10);
      cMyTrace::cMyTrace(local_30,
                         "virtual int Inter_MonitorNoticeGuildMarkChange::dispatch_sig(CUser*, char*, int)"
                         ,0x244f,0);
      cMyTrace::operator()
                (local_30,
                 "[GUILD MARK CHANGE] Send to client. (channel:%d, character:%u, guildkey:%u)",uVar2
                 ,uVar4,uVar1);
      PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 084ca303 to 084ca341 has its CatchHandler @ 084ca354 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0x3c);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,*(int *)(local_20 + 0x12));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
      CUser::Send((CUser *)param_2,local_3c);
      PacketGuard::~PacketGuard(local_3c);
    }
    else {
      uVar1 = *(undefined4 *)(local_20 + 0xe);
      uVar4 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeGuildMarkChange::dispatch_sig(CUser*, char*, int)",
                 0x244a,
                 "Inter_MonitorNoticeGuildMarkChange::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar4,uVar1);
    }
  }
  return 0;
}

```

