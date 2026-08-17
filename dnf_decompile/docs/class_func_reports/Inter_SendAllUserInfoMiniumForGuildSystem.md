# Inter_SendAllUserInfoMiniumForGuildSystem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d533a Inter_SendAllUserInfoMiniumForGuildSystem::dispatch_sig  [0x084d533a-0x84d5497] ===
 84d533a:	55                   	push   %ebp
 84d533b:	89 e5                	mov    %esp,%ebp
 84d533d:	56                   	push   %esi
 84d533e:	53                   	push   %ebx
 84d533f:	83 ec 30             	sub    $0x30,%esp
 84d5342:	8b 45 10             	mov    0x10(%ebp),%eax
 84d5345:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d5348:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84d534f:	ff 
 84d5350:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d5353:	89 04 24             	mov    %eax,(%esp)
 84d5356:	e8 45 8c 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84d535b:	89 c2                	mov    %eax,%edx
 84d535d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d5360:	8b 40 0e             	mov    0xe(%eax),%eax
 84d5363:	39 c2                	cmp    %eax,%edx
 84d5365:	0f 95 c0             	setne  %al
 84d5368:	84 c0                	test   %al,%al
 84d536a:	74 57                	je     84d53c3 <_ZN41Inter_SendAllUserInfoMiniumForGuildSystem12dispatch_sigEP5CUserPci+0x89>
 84d536c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d536f:	8b 58 0e             	mov    0xe(%eax),%ebx
 84d5372:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84d5379:	ff 
 84d537a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d537d:	89 04 24             	mov    %eax,(%esp)
 84d5380:	e8 1b 8c 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84d5385:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84d5389:	89 44 24 14          	mov    %eax,0x14(%esp)
 84d538d:	c7 44 24 10 48 91 c8 	movl   $0x8c89148,0x10(%esp)
 84d5394:	08 
 84d5395:	c7 44 24 0c e3 36 00 	movl   $0x36e3,0xc(%esp)
 84d539c:	00 
 84d539d:	c7 44 24 08 e0 c6 c8 	movl   $0x8c8c6e0,0x8(%esp)
 84d53a4:	08 
 84d53a5:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84d53ac:	08 
 84d53ad:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84d53b4:	e8 51 e8 5f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84d53b9:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d53be:	e9 cc 00 00 00       	jmp    84d548f <_ZN41Inter_SendAllUserInfoMiniumForGuildSystem12dispatch_sigEP5CUserPci+0x155>
 84d53c3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d53c6:	89 04 24             	mov    %eax,(%esp)
 84d53c9:	e8 7e 89 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d53ce:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d53d1:	89 04 24             	mov    %eax,(%esp)
 84d53d4:	e8 0d 65 bf ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84d53d9:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 84d53e0:	00 
 84d53e1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d53e8:	00 
 84d53e9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d53ec:	89 04 24             	mov    %eax,(%esp)
 84d53ef:	e8 08 65 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d53f4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d53fb:	00 
 84d53fc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d53ff:	89 04 24             	mov    %eax,(%esp)
 84d5402:	e8 19 65 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d5407:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d540e:	00 
 84d540f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d5412:	89 04 24             	mov    %eax,(%esp)
 84d5415:	e8 8a 4a c0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84d541a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d541d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84d5424:	00 
 84d5425:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d5429:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d542c:	89 04 24             	mov    %eax,(%esp)
 84d542f:	e8 1a 50 18 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 84d5434:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d543b:	00 
 84d543c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d543f:	89 04 24             	mov    %eax,(%esp)
 84d5442:	e8 11 65 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d5447:	e8 5b 4f c0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84d544c:	8b 55 0c             	mov    0xc(%ebp),%edx
 84d544f:	89 54 24 08          	mov    %edx,0x8(%esp)
 84d5453:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84d5456:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d545a:	89 04 24             	mov    %eax,(%esp)
 84d545d:	e8 fa f4 c5 ff       	call   813495c <_ZN9GameWorld8send_allER11PacketGuardP5CUser>
 84d5462:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d5467:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d546a:	89 04 24             	mov    %eax,(%esp)
 84d546d:	e8 0e 8a 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d5472:	eb 1b                	jmp    84d548f <_ZN41Inter_SendAllUserInfoMiniumForGuildSystem12dispatch_sigEP5CUserPci+0x155>
 84d5474:	89 d3                	mov    %edx,%ebx
 84d5476:	89 c6                	mov    %eax,%esi
 84d5478:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d547b:	89 04 24             	mov    %eax,(%esp)
 84d547e:	e8 fd 89 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d5483:	89 f0                	mov    %esi,%eax
 84d5485:	89 da                	mov    %ebx,%edx
 84d5487:	89 04 24             	mov    %eax,(%esp)
 84d548a:	e8 c1 e2 60 00       	call   8ae3750 <_Unwind_Resume>
 84d548f:	89 d8                	mov    %ebx,%eax
 84d5491:	83 c4 30             	add    $0x30,%esp
 84d5494:	5b                   	pop    %ebx
 84d5495:	5e                   	pop    %esi
 84d5496:	5d                   	pop    %ebp
 84d5497:	c3                   	ret

```

```c
// Inter_SendAllUserInfoMiniumForGuildSystem::dispatch_sig @ 0x84d533a

/* Inter_SendAllUserInfoMiniumForGuildSystem::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_SendAllUserInfoMiniumForGuildSystem::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  GameWorld *this;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
  if (iVar2 == *(int *)(local_10 + 0xe)) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d53d4 to 084d5461 has its CatchHandler @ 084d5474 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,1);
    CUser::make_basic_info((CUser *)param_2,(char *)local_1c,'\0');
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this,local_1c,(CUser *)param_2);
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    uVar1 = *(undefined4 *)(local_10 + 0xe);
    uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
    LogManager::logFormat
              (1,"InterDispatcher.cpp",
               "virtual int Inter_SendAllUserInfoMiniumForGuildSystem::dispatch_sig(CUser*, char*, int)"
               ,0x36e3,
               "Inter_SendAllUserInfoMiniumForGuildSystem::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharId(%d)"
               ,uVar3,uVar1);
  }
  return 0;
}

```

