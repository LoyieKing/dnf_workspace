# ARAD__DISPATCHER__Dispatcher_EventCreateDnfRequest

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081a0362 ARAD::DISPATCHER::Dispatcher_EventCreateDnfRequest::dispatch_sig  [0x081a0362-0x81a0611] ===
 81a0362:	55                   	push   %ebp
 81a0363:	89 e5                	mov    %esp,%ebp
 81a0365:	56                   	push   %esi
 81a0366:	53                   	push   %ebx
 81a0367:	83 ec 30             	sub    $0x30,%esp
 81a036a:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81a036e:	75 0a                	jne    81a037a <_ZN4ARAD10DISPATCHER32Dispatcher_EventCreateDnfRequest12dispatch_sigEP5CUserR9PacketBuf+0x18>
 81a0370:	bb b3 07 00 00       	mov    $0x7b3,%ebx
 81a0375:	e9 8e 02 00 00       	jmp    81a0608 <_ZN4ARAD10DISPATCHER32Dispatcher_EventCreateDnfRequest12dispatch_sigEP5CUserR9PacketBuf+0x2a6>
 81a037a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a037d:	89 04 24             	mov    %eax,(%esp)
 81a0380:	e8 ad 00 f8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81a0385:	85 c0                	test   %eax,%eax
 81a0387:	0f 94 c0             	sete   %al
 81a038a:	84 c0                	test   %al,%al
 81a038c:	74 0a                	je     81a0398 <_ZN4ARAD10DISPATCHER32Dispatcher_EventCreateDnfRequest12dispatch_sigEP5CUserR9PacketBuf+0x36>
 81a038e:	bb 00 00 00 00       	mov    $0x0,%ebx
 81a0393:	e9 70 02 00 00       	jmp    81a0608 <_ZN4ARAD10DISPATCHER32Dispatcher_EventCreateDnfRequest12dispatch_sigEP5CUserR9PacketBuf+0x2a6>
 81a0398:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a039b:	89 04 24             	mov    %eax,(%esp)
 81a039e:	e8 e9 9f f3 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81a03a3:	83 f8 02             	cmp    $0x2,%eax
 81a03a6:	7e 10                	jle    81a03b8 <_ZN4ARAD10DISPATCHER32Dispatcher_EventCreateDnfRequest12dispatch_sigEP5CUserR9PacketBuf+0x56>
 81a03a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a03ab:	89 04 24             	mov    %eax,(%esp)
 81a03ae:	e8 d9 9f f3 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81a03b3:	83 f8 04             	cmp    $0x4,%eax
 81a03b6:	7e 07                	jle    81a03bf <_ZN4ARAD10DISPATCHER32Dispatcher_EventCreateDnfRequest12dispatch_sigEP5CUserR9PacketBuf+0x5d>
 81a03b8:	b8 01 00 00 00       	mov    $0x1,%eax
 81a03bd:	eb 05                	jmp    81a03c4 <_ZN4ARAD10DISPATCHER32Dispatcher_EventCreateDnfRequest12dispatch_sigEP5CUserR9PacketBuf+0x62>
 81a03bf:	b8 00 00 00 00       	mov    $0x0,%eax
 81a03c4:	84 c0                	test   %al,%al
 81a03c6:	74 0a                	je     81a03d2 <_ZN4ARAD10DISPATCHER32Dispatcher_EventCreateDnfRequest12dispatch_sigEP5CUserR9PacketBuf+0x70>
 81a03c8:	bb 00 00 00 00       	mov    $0x0,%ebx
 81a03cd:	e9 36 02 00 00       	jmp    81a0608 <_ZN4ARAD10DISPATCHER32Dispatcher_EventCreateDnfRequest12dispatch_sigEP5CUserR9PacketBuf+0x2a6>
 81a03d2:	a1 30 f7 41 09       	mov    0x941f730,%eax
 81a03d7:	c7 44 24 04 a0 00 00 	movl   $0xa0,0x4(%esp)
 81a03de:	00 
 81a03df:	89 04 24             	mov    %eax,(%esp)
 81a03e2:	e8 b1 55 f7 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 81a03e7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81a03ea:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81a03ee:	74 21                	je     81a0411 <_ZN4ARAD10DISPATCHER32Dispatcher_EventCreateDnfRequest12dispatch_sigEP5CUserR9PacketBuf+0xaf>
 81a03f0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81a03f3:	8b 00                	mov    (%eax),%eax
 81a03f5:	83 c0 34             	add    $0x34,%eax
 81a03f8:	8b 10                	mov    (%eax),%edx
 81a03fa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81a03fd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81a0404:	00 
 81a0405:	89 04 24             	mov    %eax,(%esp)
 81a0408:	ff d2                	call   *%edx
 81a040a:	83 f0 01             	xor    $0x1,%eax
 81a040d:	84 c0                	test   %al,%al
 81a040f:	74 07                	je     81a0418 <_ZN4ARAD10DISPATCHER32Dispatcher_EventCreateDnfRequest12dispatch_sigEP5CUserR9PacketBuf+0xb6>
 81a0411:	b8 01 00 00 00       	mov    $0x1,%eax
 81a0416:	eb 05                	jmp    81a041d <_ZN4ARAD10DISPATCHER32Dispatcher_EventCreateDnfRequest12dispatch_sigEP5CUserR9PacketBuf+0xbb>
 81a0418:	b8 00 00 00 00       	mov    $0x0,%eax
 81a041d:	84 c0                	test   %al,%al
 81a041f:	74 6d                	je     81a048e <_ZN4ARAD10DISPATCHER32Dispatcher_EventCreateDnfRequest12dispatch_sigEP5CUserR9PacketBuf+0x12c>
 81a0421:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81a0424:	8b 00                	mov    (%eax),%eax
 81a0426:	83 c0 34             	add    $0x34,%eax
 81a0429:	8b 10                	mov    (%eax),%edx
 81a042b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81a042e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81a0435:	00 
 81a0436:	89 04 24             	mov    %eax,(%esp)
 81a0439:	ff d2                	call   *%edx
 81a043b:	0f b6 d0             	movzbl %al,%edx
 81a043e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81a0442:	75 07                	jne    81a044b <_ZN4ARAD10DISPATCHER32Dispatcher_EventCreateDnfRequest12dispatch_sigEP5CUserR9PacketBuf+0xe9>
 81a0444:	b8 85 9a ba 08       	mov    $0x8ba9a85,%eax
 81a0449:	eb 05                	jmp    81a0450 <_ZN4ARAD10DISPATCHER32Dispatcher_EventCreateDnfRequest12dispatch_sigEP5CUserR9PacketBuf+0xee>
 81a044b:	b8 8d 9a ba 08       	mov    $0x8ba9a8d,%eax
 81a0450:	89 54 24 18          	mov    %edx,0x18(%esp)
 81a0454:	89 44 24 14          	mov    %eax,0x14(%esp)
 81a0458:	c7 44 24 10 90 9a ba 	movl   $0x8ba9a90,0x10(%esp)
 81a045f:	08 
 81a0460:	c7 44 24 0c c1 07 00 	movl   $0x7c1,0xc(%esp)
 81a0467:	00 
 81a0468:	c7 44 24 08 00 a8 ba 	movl   $0x8baa800,0x8(%esp)
 81a046f:	08 
 81a0470:	c7 44 24 04 60 9a ba 	movl   $0x8ba9a60,0x4(%esp)
 81a0477:	08 
 81a0478:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81a047f:	e8 86 37 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81a0484:	bb 00 00 00 00       	mov    $0x0,%ebx
 81a0489:	e9 7a 01 00 00       	jmp    81a0608 <_ZN4ARAD10DISPATCHER32Dispatcher_EventCreateDnfRequest12dispatch_sigEP5CUserR9PacketBuf+0x2a6>
 81a048e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a0491:	89 04 24             	mov    %eax,(%esp)
 81a0494:	e8 1b 2d 4f 00       	call   86931b4 <_ZN5CUser23GetEventCreateDnfRewardEv>
 81a0499:	83 f0 01             	xor    $0x1,%eax
 81a049c:	84 c0                	test   %al,%al
 81a049e:	74 16                	je     81a04b6 <_ZN4ARAD10DISPATCHER32Dispatcher_EventCreateDnfRequest12dispatch_sigEP5CUserR9PacketBuf+0x154>
 81a04a0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81a04a3:	89 04 24             	mov    %eax,(%esp)
 81a04a6:	e8 e7 3b fc ff       	call   8164092 <_ZN15CEventCreateDnf17IsRewardConditionEv>
 81a04ab:	84 c0                	test   %al,%al
 81a04ad:	74 07                	je     81a04b6 <_ZN4ARAD10DISPATCHER32Dispatcher_EventCreateDnfRequest12dispatch_sigEP5CUserR9PacketBuf+0x154>
 81a04af:	b8 01 00 00 00       	mov    $0x1,%eax
 81a04b4:	eb 05                	jmp    81a04bb <_ZN4ARAD10DISPATCHER32Dispatcher_EventCreateDnfRequest12dispatch_sigEP5CUserR9PacketBuf+0x159>
 81a04b6:	b8 00 00 00 00       	mov    $0x0,%eax
 81a04bb:	84 c0                	test   %al,%al
 81a04bd:	74 4b                	je     81a050a <_ZN4ARAD10DISPATCHER32Dispatcher_EventCreateDnfRequest12dispatch_sigEP5CUserR9PacketBuf+0x1a8>
 81a04bf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81a04c6:	00 
 81a04c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a04ca:	89 04 24             	mov    %eax,(%esp)
 81a04cd:	e8 c6 2c 4f 00       	call   8693198 <_ZN5CUser23SetEventCreateDnfRewardEb>
 81a04d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a04d5:	89 04 24             	mov    %eax,(%esp)
 81a04d8:	e8 91 9e f3 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81a04dd:	89 c3                	mov    %eax,%ebx
 81a04df:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a04e2:	89 04 24             	mov    %eax,(%esp)
 81a04e5:	e8 ac 87 f2 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81a04ea:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81a04ee:	89 04 24             	mov    %eax,(%esp)
 81a04f1:	e8 66 bd fb ff       	call   815c25c <_ZN25DBInsertCreateDnfUserInfo11makeRequestEij>
 81a04f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a04f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a04fd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81a0500:	89 04 24             	mov    %eax,(%esp)
 81a0503:	e8 64 3d fc ff       	call   816426c <_ZN15CEventCreateDnf10SendRewardEP5CUser>
 81a0508:	eb 56                	jmp    81a0560 <_ZN4ARAD10DISPATCHER32Dispatcher_EventCreateDnfRequest12dispatch_sigEP5CUserR9PacketBuf+0x1fe>
 81a050a:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81a0511:	00 
 81a0512:	c7 44 24 04 58 02 00 	movl   $0x258,0x4(%esp)
 81a0519:	00 
 81a051a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a051d:	89 04 24             	mov    %eax,(%esp)
 81a0520:	e8 1d ba 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81a0525:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a0528:	89 04 24             	mov    %eax,(%esp)
 81a052b:	e8 3e 9e f3 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81a0530:	89 44 24 14          	mov    %eax,0x14(%esp)
 81a0534:	c7 44 24 10 bc 9a ba 	movl   $0x8ba9abc,0x10(%esp)
 81a053b:	08 
 81a053c:	c7 44 24 0c d6 07 00 	movl   $0x7d6,0xc(%esp)
 81a0543:	00 
 81a0544:	c7 44 24 08 00 a8 ba 	movl   $0x8baa800,0x8(%esp)
 81a054b:	08 
 81a054c:	c7 44 24 04 60 9a ba 	movl   $0x8ba9a60,0x4(%esp)
 81a0553:	08 
 81a0554:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81a055b:	e8 aa 36 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81a0560:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a0563:	89 04 24             	mov    %eax,(%esp)
 81a0566:	e8 e1 d7 3e 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81a056b:	c7 44 24 08 2d 02 00 	movl   $0x22d,0x8(%esp)
 81a0572:	00 
 81a0573:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81a057a:	00 
 81a057b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a057e:	89 04 24             	mov    %eax,(%esp)
 81a0581:	e8 76 b3 f2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81a0586:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81a0589:	89 04 24             	mov    %eax,(%esp)
 81a058c:	e8 cf 3c fc ff       	call   8164260 <_ZN15CEventCreateDnf7GetRateEv>
 81a0591:	0f b7 c0             	movzwl %ax,%eax
 81a0594:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a0598:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a059b:	89 04 24             	mov    %eax,(%esp)
 81a059e:	e8 01 99 f3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81a05a3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81a05aa:	00 
 81a05ab:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a05ae:	89 04 24             	mov    %eax,(%esp)
 81a05b1:	e8 6a b3 f2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81a05b6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81a05bd:	00 
 81a05be:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a05c1:	89 04 24             	mov    %eax,(%esp)
 81a05c4:	e8 8f b3 f2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81a05c9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a05cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a05d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a05d3:	89 04 24             	mov    %eax,(%esp)
 81a05d6:	e8 df 7f 4a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81a05db:	bb 00 00 00 00       	mov    $0x0,%ebx
 81a05e0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a05e3:	89 04 24             	mov    %eax,(%esp)
 81a05e6:	e8 95 d8 3e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81a05eb:	eb 1b                	jmp    81a0608 <_ZN4ARAD10DISPATCHER32Dispatcher_EventCreateDnfRequest12dispatch_sigEP5CUserR9PacketBuf+0x2a6>
 81a05ed:	89 d3                	mov    %edx,%ebx
 81a05ef:	89 c6                	mov    %eax,%esi
 81a05f1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a05f4:	89 04 24             	mov    %eax,(%esp)
 81a05f7:	e8 84 d8 3e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81a05fc:	89 f0                	mov    %esi,%eax
 81a05fe:	89 da                	mov    %ebx,%edx
 81a0600:	89 04 24             	mov    %eax,(%esp)
 81a0603:	e8 48 31 94 00       	call   8ae3750 <_Unwind_Resume>
 81a0608:	89 d8                	mov    %ebx,%eax
 81a060a:	83 c4 30             	add    $0x30,%esp
 81a060d:	5b                   	pop    %ebx
 81a060e:	5e                   	pop    %esi
 81a060f:	5d                   	pop    %ebp
 81a0610:	c3                   	ret
 81a0611:	90                   	nop

```

```c
// ARAD::DISPATCHER::Dispatcher_EventCreateDnfRequest::dispatch_sig @ 0x81a0362

/* ARAD::DISPATCHER::Dispatcher_EventCreateDnfRequest::dispatch_sig(CUser*, PacketBuf&) */

undefined4
ARAD::DISPATCHER::Dispatcher_EventCreateDnfRequest::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  PacketGuard local_1c [12];
  CEventCreateDnf *local_10;
  
  if (param_2 == (PacketBuf *)0x0) {
    return 0x7b3;
  }
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
  if (iVar3 != 0) {
    iVar3 = CUser::get_state((CUser *)param_2);
    if ((iVar3 < 3) || (iVar3 = CUser::get_state((CUser *)param_2), 4 < iVar3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      local_10 = (CEventCreateDnf *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xa0);
      if ((local_10 == (CEventCreateDnf *)0x0) ||
         (cVar2 = (**(code **)(*(int *)local_10 + 0x34))(local_10,0), cVar2 != '\x01')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        cVar2 = CUser::GetEventCreateDnfReward((CUser *)param_2);
        if ((cVar2 == '\x01') ||
           (cVar2 = CEventCreateDnf::IsRewardCondition(local_10), cVar2 == '\0')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          CUser::SetEventCreateDnfReward((CUser *)param_2,true);
          uVar4 = CUser::get_acc_id((CUser *)param_2);
          iVar3 = CUser::GetUID((CUser *)param_2);
          DBInsertCreateDnfUserInfo::makeRequest(iVar3,uVar4);
          CEventCreateDnf::SendReward(local_10,(CUser *)param_2);
        }
        else {
          CUser::SendCmdErrorPacket((CUser *)param_2,600,1);
          uVar6 = CUser::get_acc_id((CUser *)param_2);
          LogManager::logFormat
                    (1,"localjapan/Arad_PacketDispatcher.cpp",
                     "virtual int ARAD::DISPATCHER::Dispatcher_EventCreateDnfRequest::dispatch_sig(CUser*, PacketBuf&)"
                     ,0x7d6,"[Taiwan, Event] condition error m_id:%d",uVar6);
        }
        PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081a0581 to 081a05da has its CatchHandler @ 081a05ed */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x22d);
        uVar4 = CEventCreateDnf::GetRate(local_10);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar4 & 0xffff);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
        CUser::Send((CUser *)param_2,local_1c);
        PacketGuard::~PacketGuard(local_1c);
        return 0;
      }
      uVar4 = (**(code **)(*(int *)local_10 + 0x34))(local_10,0);
      if (local_10 == (CEventCreateDnf *)0x0) {
        pcVar5 = "nullptr";
      }
      else {
        pcVar5 = "ok";
      }
      LogManager::logFormat
                (1,"localjapan/Arad_PacketDispatcher.cpp",
                 "virtual int ARAD::DISPATCHER::Dispatcher_EventCreateDnfRequest::dispatch_sig(CUser*, PacketBuf&)"
                 ,0x7c1,"[Taiwan, Event] stayEvent=%s eventing:%d",pcVar5,uVar4 & 0xff);
      return 0;
    }
    return 0;
  }
  return 0;
}

```

