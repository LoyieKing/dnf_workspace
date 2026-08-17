# Inter_MonitorNoticeMemberChatMsgHyperLink

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e5282 Inter_MonitorNoticeMemberChatMsgHyperLink::dispatch_sig  [0x084e5282-0x84e5527] ===
 84e5282:	55                   	push   %ebp
 84e5283:	89 e5                	mov    %esp,%ebp
 84e5285:	56                   	push   %esi
 84e5286:	53                   	push   %ebx
 84e5287:	83 ec 40             	sub    $0x40,%esp
 84e528a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e528d:	89 04 24             	mov    %eax,(%esp)
 84e5290:	e8 f7 50 bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e5295:	85 c0                	test   %eax,%eax
 84e5297:	0f 94 c0             	sete   %al
 84e529a:	84 c0                	test   %al,%al
 84e529c:	74 0a                	je     84e52a8 <_ZN41Inter_MonitorNoticeMemberChatMsgHyperLink12dispatch_sigEP5CUserPci+0x26>
 84e529e:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e52a3:	e9 77 02 00 00       	jmp    84e551f <_ZN41Inter_MonitorNoticeMemberChatMsgHyperLink12dispatch_sigEP5CUserPci+0x29d>
 84e52a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e52ab:	89 04 24             	mov    %eax,(%esp)
 84e52ae:	e8 11 a3 d4 ff       	call   822f5c4 <_ZN15CUserCharacInfo20get_charac_memberkeyEv>
 84e52b3:	85 c0                	test   %eax,%eax
 84e52b5:	0f 94 c0             	sete   %al
 84e52b8:	84 c0                	test   %al,%al
 84e52ba:	74 4d                	je     84e5309 <_ZN41Inter_MonitorNoticeMemberChatMsgHyperLink12dispatch_sigEP5CUserPci+0x87>
 84e52bc:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84e52c3:	ff 
 84e52c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e52c7:	89 04 24             	mov    %eax,(%esp)
 84e52ca:	e8 d1 8c 16 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84e52cf:	89 44 24 14          	mov    %eax,0x14(%esp)
 84e52d3:	c7 44 24 10 70 a1 c8 	movl   $0x8c8a170,0x10(%esp)
 84e52da:	08 
 84e52db:	c7 44 24 0c 0a 64 00 	movl   $0x640a,0xc(%esp)
 84e52e2:	00 
 84e52e3:	c7 44 24 08 20 b6 c8 	movl   $0x8c8b620,0x8(%esp)
 84e52ea:	08 
 84e52eb:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84e52f2:	08 
 84e52f3:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84e52fa:	e8 0b e9 5e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84e52ff:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e5304:	e9 16 02 00 00       	jmp    84e551f <_ZN41Inter_MonitorNoticeMemberChatMsgHyperLink12dispatch_sigEP5CUserPci+0x29d>
 84e5309:	8b 45 10             	mov    0x10(%ebp),%eax
 84e530c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84e530f:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84e5316:	ff 
 84e5317:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e531a:	89 04 24             	mov    %eax,(%esp)
 84e531d:	e8 7e 8c 16 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84e5322:	89 c2                	mov    %eax,%edx
 84e5324:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e5327:	8b 40 0e             	mov    0xe(%eax),%eax
 84e532a:	39 c2                	cmp    %eax,%edx
 84e532c:	0f 95 c0             	setne  %al
 84e532f:	84 c0                	test   %al,%al
 84e5331:	74 57                	je     84e538a <_ZN41Inter_MonitorNoticeMemberChatMsgHyperLink12dispatch_sigEP5CUserPci+0x108>
 84e5333:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e5336:	8b 58 0e             	mov    0xe(%eax),%ebx
 84e5339:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84e5340:	ff 
 84e5341:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e5344:	89 04 24             	mov    %eax,(%esp)
 84e5347:	e8 54 8c 16 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84e534c:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84e5350:	89 44 24 14          	mov    %eax,0x14(%esp)
 84e5354:	c7 44 24 10 e8 a1 c8 	movl   $0x8c8a1e8,0x10(%esp)
 84e535b:	08 
 84e535c:	c7 44 24 0c 11 64 00 	movl   $0x6411,0xc(%esp)
 84e5363:	00 
 84e5364:	c7 44 24 08 20 b6 c8 	movl   $0x8c8b620,0x8(%esp)
 84e536b:	08 
 84e536c:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84e5373:	08 
 84e5374:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84e537b:	e8 8a e8 5e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84e5380:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e5385:	e9 95 01 00 00       	jmp    84e551f <_ZN41Inter_MonitorNoticeMemberChatMsgHyperLink12dispatch_sigEP5CUserPci+0x29d>
 84e538a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e538d:	89 04 24             	mov    %eax,(%esp)
 84e5390:	e8 b7 89 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e5395:	c7 44 24 08 73 01 00 	movl   $0x173,0x8(%esp)
 84e539c:	00 
 84e539d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e53a4:	00 
 84e53a5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e53a8:	89 04 24             	mov    %eax,(%esp)
 84e53ab:	e8 4c 65 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e53b0:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 84e53b7:	00 
 84e53b8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e53bb:	89 04 24             	mov    %eax,(%esp)
 84e53be:	e8 5d 65 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e53c3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e53ca:	00 
 84e53cb:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e53ce:	89 04 24             	mov    %eax,(%esp)
 84e53d1:	e8 4a 65 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e53d6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e53d9:	83 c0 12             	add    $0x12,%eax
 84e53dc:	89 04 24             	mov    %eax,(%esp)
 84e53df:	e8 cc 8f b9 ff       	call   807e3b0 <strlen@plt>
 84e53e4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e53e7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e53ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e53ee:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e53f1:	89 04 24             	mov    %eax,(%esp)
 84e53f4:	e8 43 65 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e53f9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e53fc:	8d 50 12             	lea    0x12(%eax),%edx
 84e53ff:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e5402:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e5406:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e540a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e540d:	89 04 24             	mov    %eax,(%esp)
 84e5410:	e8 cf 1f cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e5415:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e541c:	00 
 84e541d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e5420:	89 04 24             	mov    %eax,(%esp)
 84e5423:	e8 f8 64 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e5428:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e542b:	0f b6 80 69 01 00 00 	movzbl 0x169(%eax),%eax
 84e5432:	0f b6 c0             	movzbl %al,%eax
 84e5435:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e5439:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e543c:	89 04 24             	mov    %eax,(%esp)
 84e543f:	e8 f8 64 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e5444:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e5447:	0f b6 80 69 01 00 00 	movzbl 0x169(%eax),%eax
 84e544e:	0f b6 c0             	movzbl %al,%eax
 84e5451:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84e5454:	81 c2 6a 01 00 00    	add    $0x16a,%edx
 84e545a:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e545e:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e5462:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e5465:	89 04 24             	mov    %eax,(%esp)
 84e5468:	e8 77 1f cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e546d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e5470:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 84e5474:	0f b6 c0             	movzbl %al,%eax
 84e5477:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e547b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e547e:	89 04 24             	mov    %eax,(%esp)
 84e5481:	e8 9a 64 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e5486:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84e548d:	eb 2a                	jmp    84e54b9 <_ZN41Inter_MonitorNoticeMemberChatMsgHyperLink12dispatch_sigEP5CUserPci+0x237>
 84e548f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e5492:	6b c0 68             	imul   $0x68,%eax,%eax
 84e5495:	83 c0 30             	add    $0x30,%eax
 84e5498:	03 45 ec             	add    -0x14(%ebp),%eax
 84e549b:	83 c0 01             	add    $0x1,%eax
 84e549e:	c7 44 24 08 68 00 00 	movl   $0x68,0x8(%esp)
 84e54a5:	00 
 84e54a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e54aa:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e54ad:	89 04 24             	mov    %eax,(%esp)
 84e54b0:	e8 53 8a c3 ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 84e54b5:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84e54b9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e54bc:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 84e54c0:	0f b6 c0             	movzbl %al,%eax
 84e54c3:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84e54c6:	0f 9f c0             	setg   %al
 84e54c9:	84 c0                	test   %al,%al
 84e54cb:	75 c2                	jne    84e548f <_ZN41Inter_MonitorNoticeMemberChatMsgHyperLink12dispatch_sigEP5CUserPci+0x20d>
 84e54cd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e54d4:	00 
 84e54d5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e54d8:	89 04 24             	mov    %eax,(%esp)
 84e54db:	e8 78 64 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e54e0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e54e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e54e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e54ea:	89 04 24             	mov    %eax,(%esp)
 84e54ed:	e8 c8 30 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e54f2:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e54f7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e54fa:	89 04 24             	mov    %eax,(%esp)
 84e54fd:	e8 7e 89 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e5502:	eb 1b                	jmp    84e551f <_ZN41Inter_MonitorNoticeMemberChatMsgHyperLink12dispatch_sigEP5CUserPci+0x29d>
 84e5504:	89 d3                	mov    %edx,%ebx
 84e5506:	89 c6                	mov    %eax,%esi
 84e5508:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e550b:	89 04 24             	mov    %eax,(%esp)
 84e550e:	e8 6d 89 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e5513:	89 f0                	mov    %esi,%eax
 84e5515:	89 da                	mov    %ebx,%edx
 84e5517:	89 04 24             	mov    %eax,(%esp)
 84e551a:	e8 31 e2 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e551f:	89 d8                	mov    %ebx,%eax
 84e5521:	83 c4 40             	add    $0x40,%esp
 84e5524:	5b                   	pop    %ebx
 84e5525:	5e                   	pop    %esi
 84e5526:	5d                   	pop    %ebp
 84e5527:	c3                   	ret

```

```c
// Inter_MonitorNoticeMemberChatMsgHyperLink::dispatch_sig @ 0x84e5282

/* Inter_MonitorNoticeMemberChatMsgHyperLink::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_MonitorNoticeMemberChatMsgHyperLink::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  PacketGuard local_24 [12];
  int local_18;
  size_t local_14;
  int local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 != 0) {
    iVar1 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)param_2);
    if (iVar1 == 0) {
      uVar2 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeMemberChatMsgHyperLink::dispatch_sig(CUser*, char*, int)"
                 ,0x640a,
                 "MEMBER : Inter_MonitorNoticeMemberChatMsgHyperLink::dispatch_sig() : 0 == pUser->get_charac_memberkey() (Char id : %d)"
                 ,uVar2);
    }
    else {
      local_18 = param_3;
      iVar1 = CUser::get_charac_no((CUser *)param_2,-1);
      if (iVar1 == *(int *)(local_18 + 0xe)) {
        PacketGuard::PacketGuard(local_24);
                    /* try { // try from 084e53ab to 084e54f1 has its CatchHandler @ 084e5504 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x173);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,8);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
        local_14 = strlen((char *)(local_18 + 0x12));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_14);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_24,(char *)(local_18 + 0x12),local_14);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
        InterfacePacketBuf::put_int
                  ((InterfacePacketBuf *)local_24,(uint)*(byte *)(local_18 + 0x169));
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_24,(char *)(local_18 + 0x16a),
                   (uint)*(byte *)(local_18 + 0x169));
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_24,(uint)*(byte *)(local_18 + 0x30));
        for (local_10 = 0; local_10 < (int)(uint)*(byte *)(local_18 + 0x30); local_10 = local_10 + 1
            ) {
          InterfacePacketBuf::put_binary
                    ((InterfacePacketBuf *)local_24,(char *)(local_10 * 0x68 + local_18 + 0x31),0x68
                    );
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
        CUser::Send((CUser *)param_2,local_24);
        PacketGuard::~PacketGuard(local_24);
      }
      else {
        uVar2 = *(undefined4 *)(local_18 + 0xe);
        uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_MonitorNoticeMemberChatMsgHyperLink::dispatch_sig(CUser*, char*, int)"
                   ,0x6411,
                   "MEMBER : Inter_MonitorNoticeMemberChatMsgHyperLink::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                   ,uVar3,uVar2);
      }
    }
  }
  return 0;
}

```

