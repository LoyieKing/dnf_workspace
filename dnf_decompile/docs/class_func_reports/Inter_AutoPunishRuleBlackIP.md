# Inter_AutoPunishRuleBlackIP

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d422a Inter_AutoPunishRuleBlackIP::dispatch_sig  [0x084d422a-0x84d443f] ===
 84d422a:	55                   	push   %ebp
 84d422b:	89 e5                	mov    %esp,%ebp
 84d422d:	53                   	push   %ebx
 84d422e:	83 ec 74             	sub    $0x74,%esp
 84d4231:	a1 d0 f7 41 09       	mov    0x941f7d0,%eax
 84d4236:	89 04 24             	mov    %eax,(%esp)
 84d4239:	e8 36 18 dd ff       	call   82a5a74 <_ZN8WongWork25CAutoPunishRuleBlackIPMgr5resetEv>
 84d423e:	8b 45 10             	mov    0x10(%ebp),%eax
 84d4241:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d4244:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d4247:	0f b7 00             	movzwl (%eax),%eax
 84d424a:	0f b7 d8             	movzwl %ax,%ebx
 84d424d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d4254:	00 
 84d4255:	c7 44 24 08 61 35 00 	movl   $0x3561,0x8(%esp)
 84d425c:	00 
 84d425d:	c7 44 24 04 00 c9 c8 	movl   $0x8c8c900,0x4(%esp)
 84d4264:	08 
 84d4265:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84d4268:	89 04 24             	mov    %eax,(%esp)
 84d426b:	e8 a8 b4 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84d4270:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84d4274:	c7 44 24 04 e4 8e c8 	movl   $0x8c88ee4,0x4(%esp)
 84d427b:	08 
 84d427c:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84d427f:	89 04 24             	mov    %eax,(%esp)
 84d4282:	e8 01 b5 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84d4287:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84d428e:	e9 41 01 00 00       	jmp    84d43d4 <_ZN27Inter_AutoPunishRuleBlackIP12dispatch_sigEP5CUserPci+0x1aa>
 84d4293:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 84d429a:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 84d42a1:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 84d42a8:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 84d42af:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d42b2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d42b5:	8b 5c d0 04          	mov    0x4(%eax,%edx,8),%ebx
 84d42b9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d42bc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d42bf:	0f b6 44 d0 08       	movzbl 0x8(%eax,%edx,8),%eax
 84d42c4:	0f b6 c0             	movzbl %al,%eax
 84d42c7:	89 04 24             	mov    %eax,(%esp)
 84d42ca:	e8 41 98 ba ff       	call   807db10 <htonl@plt>
 84d42cf:	09 d8                	or     %ebx,%eax
 84d42d1:	89 45 ac             	mov    %eax,-0x54(%ebp)
 84d42d4:	8b 45 ac             	mov    -0x54(%ebp),%eax
 84d42d7:	89 04 24             	mov    %eax,(%esp)
 84d42da:	e8 e1 9a ba ff       	call   807ddc0 <inet_ntoa@plt>
 84d42df:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 84d42e6:	00 
 84d42e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d42eb:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84d42ee:	89 04 24             	mov    %eax,(%esp)
 84d42f1:	e8 da 95 ba ff       	call   807d8d0 <strncpy@plt>
 84d42f6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d42f9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d42fc:	0f b6 44 d0 09       	movzbl 0x9(%eax,%edx,8),%eax
 84d4301:	0f b6 d8             	movzbl %al,%ebx
 84d4304:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d4307:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d430a:	0f b6 44 d0 08       	movzbl 0x8(%eax,%edx,8),%eax
 84d430f:	0f b6 c8             	movzbl %al,%ecx
 84d4312:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d4315:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d4318:	8b 54 d0 04          	mov    0x4(%eax,%edx,8),%edx
 84d431c:	a1 d0 f7 41 09       	mov    0x941f7d0,%eax
 84d4321:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84d4325:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84d4329:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d432d:	89 04 24             	mov    %eax,(%esp)
 84d4330:	e8 8b 72 01 00       	call   84eb5c0 <_ZN8WongWork25CAutoPunishRuleBlackIPMgr10addBlackIPEmhh>
 84d4335:	83 f0 01             	xor    $0x1,%eax
 84d4338:	84 c0                	test   %al,%al
 84d433a:	74 45                	je     84d4381 <_ZN27Inter_AutoPunishRuleBlackIP12dispatch_sigEP5CUserPci+0x157>
 84d433c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d433f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d4342:	0f b6 44 d0 09       	movzbl 0x9(%eax,%edx,8),%eax
 84d4347:	0f b6 c0             	movzbl %al,%eax
 84d434a:	89 44 24 18          	mov    %eax,0x18(%esp)
 84d434e:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84d4351:	89 44 24 14          	mov    %eax,0x14(%esp)
 84d4355:	c7 44 24 10 0c 8f c8 	movl   $0x8c88f0c,0x10(%esp)
 84d435c:	08 
 84d435d:	c7 44 24 0c 6d 35 00 	movl   $0x356d,0xc(%esp)
 84d4364:	00 
 84d4365:	c7 44 24 08 00 c9 c8 	movl   $0x8c8c900,0x8(%esp)
 84d436c:	08 
 84d436d:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84d4374:	08 
 84d4375:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84d437c:	e8 89 f8 5f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84d4381:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d4384:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d4387:	0f b6 44 d0 09       	movzbl 0x9(%eax,%edx,8),%eax
 84d438c:	0f b6 d8             	movzbl %al,%ebx
 84d438f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d4396:	00 
 84d4397:	c7 44 24 08 6e 35 00 	movl   $0x356e,0x8(%esp)
 84d439e:	00 
 84d439f:	c7 44 24 04 00 c9 c8 	movl   $0x8c8c900,0x4(%esp)
 84d43a6:	08 
 84d43a7:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84d43aa:	89 04 24             	mov    %eax,(%esp)
 84d43ad:	e8 66 b3 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84d43b2:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84d43b6:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84d43b9:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d43bd:	c7 44 24 04 34 8f c8 	movl   $0x8c88f34,0x4(%esp)
 84d43c4:	08 
 84d43c5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84d43c8:	89 04 24             	mov    %eax,(%esp)
 84d43cb:	e8 b8 b3 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84d43d0:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84d43d4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d43d7:	0f b7 00             	movzwl (%eax),%eax
 84d43da:	0f b7 c0             	movzwl %ax,%eax
 84d43dd:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84d43e0:	0f 97 c0             	seta   %al
 84d43e3:	84 c0                	test   %al,%al
 84d43e5:	0f 85 a8 fe ff ff    	jne    84d4293 <_ZN27Inter_AutoPunishRuleBlackIP12dispatch_sigEP5CUserPci+0x69>
 84d43eb:	a1 d0 f7 41 09       	mov    0x941f7d0,%eax
 84d43f0:	89 04 24             	mov    %eax,(%esp)
 84d43f3:	e8 d2 73 01 00       	call   84eb7ca <_ZN8WongWork25CAutoPunishRuleBlackIPMgr15getBlackIPCountEv>
 84d43f8:	89 c3                	mov    %eax,%ebx
 84d43fa:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d4401:	00 
 84d4402:	c7 44 24 08 70 35 00 	movl   $0x3570,0x8(%esp)
 84d4409:	00 
 84d440a:	c7 44 24 04 00 c9 c8 	movl   $0x8c8c900,0x4(%esp)
 84d4411:	08 
 84d4412:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d4415:	89 04 24             	mov    %eax,(%esp)
 84d4418:	e8 fb b2 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84d441d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84d4421:	c7 44 24 04 58 8f c8 	movl   $0x8c88f58,0x4(%esp)
 84d4428:	08 
 84d4429:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d442c:	89 04 24             	mov    %eax,(%esp)
 84d442f:	e8 54 b3 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84d4434:	b8 00 00 00 00       	mov    $0x0,%eax
 84d4439:	83 c4 74             	add    $0x74,%esp
 84d443c:	5b                   	pop    %ebx
 84d443d:	5d                   	pop    %ebp
 84d443e:	c3                   	ret
 84d443f:	90                   	nop

```

```c
// Inter_AutoPunishRuleBlackIP::dispatch_sig @ 0x84d422a

/* Inter_AutoPunishRuleBlackIP::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_AutoPunishRuleBlackIP::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  uint32_t uVar5;
  char *__src;
  undefined4 uVar6;
  char local_54 [16];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  ushort *local_14;
  uint local_10;
  
  WongWork::CAutoPunishRuleBlackIPMgr::reset(GlobalData::g_autoPunishRuleBlackIPMgr);
  local_14 = (ushort *)param_3;
  uVar2 = *(ushort *)param_3;
  cMyTrace::cMyTrace(local_44,
                     "virtual int Inter_AutoPunishRuleBlackIP::dispatch_sig(CUser*, char*, int)",
                     0x3561,0);
  cMyTrace::operator()(local_44,"Black IP Load Start (TotalCount: %d)",(uint)uVar2);
  for (local_10 = 0; local_10 < *local_14; local_10 = local_10 + 1) {
    local_54[0] = '\0';
    local_54[1] = '\0';
    local_54[2] = '\0';
    local_54[3] = '\0';
    local_54[4] = '\0';
    local_54[5] = '\0';
    local_54[6] = '\0';
    local_54[7] = '\0';
    local_54[8] = '\0';
    local_54[9] = '\0';
    local_54[10] = '\0';
    local_54[0xb] = '\0';
    local_54[0xc] = '\0';
    local_54[0xd] = '\0';
    local_54[0xe] = '\0';
    local_54[0xf] = '\0';
    uVar3 = *(uint *)(local_14 + local_10 * 4 + 2);
    uVar5 = htonl((uint)(byte)local_14[local_10 * 4 + 4]);
    __src = inet_ntoa((in_addr)(uVar5 | uVar3));
    strncpy(local_54,__src,0x10);
    cVar4 = WongWork::CAutoPunishRuleBlackIPMgr::addBlackIP
                      (GlobalData::g_autoPunishRuleBlackIPMgr,
                       *(ulong *)(local_14 + local_10 * 4 + 2),(uchar)local_14[local_10 * 4 + 4],
                       *(uchar *)((int)local_14 + local_10 * 8 + 9));
    if (cVar4 != '\x01') {
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_AutoPunishRuleBlackIP::dispatch_sig(CUser*, char*, int)",0x356d,
                 "Black IP Load fail(StartIP:%s -> %d)",local_54,
                 (uint)*(byte *)((int)local_14 + local_10 * 8 + 9));
    }
    bVar1 = *(byte *)((int)local_14 + local_10 * 8 + 9);
    cMyTrace::cMyTrace(local_34,
                       "virtual int Inter_AutoPunishRuleBlackIP::dispatch_sig(CUser*, char*, int)",
                       0x356e,0);
    cMyTrace::operator()(local_34,"Black IP Load (StartIP:%s -> %d)",local_54,(uint)bVar1);
  }
  uVar6 = WongWork::CAutoPunishRuleBlackIPMgr::getBlackIPCount
                    (GlobalData::g_autoPunishRuleBlackIPMgr);
  cMyTrace::cMyTrace(local_24,
                     "virtual int Inter_AutoPunishRuleBlackIP::dispatch_sig(CUser*, char*, int)",
                     0x3570,0);
  cMyTrace::operator()(local_24,"Black IP Load End (TotalCount: %d)",uVar6);
  return 0;
}

```

