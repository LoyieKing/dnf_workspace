# UdpThread

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## UdpThread

```asm
// === 0857c354 UdpThread::UdpThread  [0x0857c354-0x857c36f] ===
 857c354:	55                   	push   %ebp
 857c355:	89 e5                	mov    %esp,%ebp
 857c357:	83 ec 18             	sub    $0x18,%esp
 857c35a:	8b 45 08             	mov    0x8(%ebp),%eax
 857c35d:	89 04 24             	mov    %eax,(%esp)
 857c360:	e8 d3 47 0b 00       	call   8630b38 <_ZN15ThreadInterfaceC1Ev>
 857c365:	8b 45 08             	mov    0x8(%ebp),%eax
 857c368:	c7 00 c8 90 ca 08    	movl   $0x8ca90c8,(%eax)
 857c36e:	c9                   	leave
 857c36f:	c3                   	ret

```

```c
// UdpThread::UdpThread @ 0x857c354

/* UdpThread::UdpThread() */

void __thiscall UdpThread::UdpThread(UdpThread *this)

{
  ThreadInterface::ThreadInterface((ThreadInterface *)this);
  *(undefined ***)this = &PTR_stop_08ca90c8;
  return;
}

```

---

## _bindUDPSocket

```asm
// === 0857c3be UdpThread::_bindUDPSocket  [0x0857c3be-0x857c5a3] ===
 857c3be:	55                   	push   %ebp
 857c3bf:	89 e5                	mov    %esp,%ebp
 857c3c1:	83 ec 58             	sub    $0x58,%esp
 857c3c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 857c3c7:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 857c3cb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 857c3d2:	00 
 857c3d3:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 857c3da:	00 
 857c3db:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 857c3e2:	e8 c9 16 b0 ff       	call   807dab0 <socket@plt>
 857c3e7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 857c3ea:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 857c3f1:	00 
 857c3f2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 857c3f9:	00 
 857c3fa:	8d 45 e0             	lea    -0x20(%ebp),%eax
 857c3fd:	89 04 24             	mov    %eax,(%esp)
 857c400:	e8 bb 18 b0 ff       	call   807dcc0 <memset@plt>
 857c405:	66 c7 45 e0 02 00    	movw   $0x2,-0x20(%ebp)
 857c40b:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 857c412:	e8 f9 16 b0 ff       	call   807db10 <htonl@plt>
 857c417:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 857c41a:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 857c41e:	89 04 24             	mov    %eax,(%esp)
 857c421:	e8 5a 22 b0 ff       	call   807e680 <htons@plt>
 857c426:	66 89 45 e2          	mov    %ax,-0x1e(%ebp)
 857c42a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 857c42d:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 857c434:	00 
 857c435:	89 44 24 04          	mov    %eax,0x4(%esp)
 857c439:	8b 45 f0             	mov    -0x10(%ebp),%eax
 857c43c:	89 04 24             	mov    %eax,(%esp)
 857c43f:	e8 0c 23 b0 ff       	call   807e750 <bind@plt>
 857c444:	c1 e8 1f             	shr    $0x1f,%eax
 857c447:	84 c0                	test   %al,%al
 857c449:	0f 84 05 01 00 00    	je     857c554 <_ZN9UdpThread14_bindUDPSocketEt+0x196>
 857c44f:	c7 44 24 10 6c 7c ca 	movl   $0x8ca7c6c,0x10(%esp)
 857c456:	08 
 857c457:	c7 44 24 0c 84 00 00 	movl   $0x84,0xc(%esp)
 857c45e:	00 
 857c45f:	c7 44 24 08 40 90 ca 	movl   $0x8ca9040,0x8(%esp)
 857c466:	08 
 857c467:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857c46e:	08 
 857c46f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 857c476:	e8 8f 77 55 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 857c47b:	e8 f0 18 b0 ff       	call   807dd70 <__errno_location@plt>
 857c480:	8b 00                	mov    (%eax),%eax
 857c482:	89 45 f4             	mov    %eax,-0xc(%ebp)
 857c485:	8b 45 f4             	mov    -0xc(%ebp),%eax
 857c488:	83 f8 62             	cmp    $0x62,%eax
 857c48b:	74 0f                	je     857c49c <_ZN9UdpThread14_bindUDPSocketEt+0xde>
 857c48d:	83 f8 63             	cmp    $0x63,%eax
 857c490:	74 43                	je     857c4d5 <_ZN9UdpThread14_bindUDPSocketEt+0x117>
 857c492:	85 c0                	test   %eax,%eax
 857c494:	0f 84 ad 00 00 00    	je     857c547 <_ZN9UdpThread14_bindUDPSocketEt+0x189>
 857c49a:	eb 67                	jmp    857c503 <_ZN9UdpThread14_bindUDPSocketEt+0x145>
 857c49c:	0f b7 45 e2          	movzwl -0x1e(%ebp),%eax
 857c4a0:	0f b7 c0             	movzwl %ax,%eax
 857c4a3:	89 44 24 14          	mov    %eax,0x14(%esp)
 857c4a7:	c7 44 24 10 a8 7c ca 	movl   $0x8ca7ca8,0x10(%esp)
 857c4ae:	08 
 857c4af:	c7 44 24 0c 9e 00 00 	movl   $0x9e,0xc(%esp)
 857c4b6:	00 
 857c4b7:	c7 44 24 08 40 90 ca 	movl   $0x8ca9040,0x8(%esp)
 857c4be:	08 
 857c4bf:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857c4c6:	08 
 857c4c7:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 857c4ce:	e8 37 77 55 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 857c4d3:	eb 73                	jmp    857c548 <_ZN9UdpThread14_bindUDPSocketEt+0x18a>
 857c4d5:	c7 44 24 10 d0 7c ca 	movl   $0x8ca7cd0,0x10(%esp)
 857c4dc:	08 
 857c4dd:	c7 44 24 0c a2 00 00 	movl   $0xa2,0xc(%esp)
 857c4e4:	00 
 857c4e5:	c7 44 24 08 40 90 ca 	movl   $0x8ca9040,0x8(%esp)
 857c4ec:	08 
 857c4ed:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857c4f4:	08 
 857c4f5:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 857c4fc:	e8 09 77 55 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 857c501:	eb 45                	jmp    857c548 <_ZN9UdpThread14_bindUDPSocketEt+0x18a>
 857c503:	8b 45 f4             	mov    -0xc(%ebp),%eax
 857c506:	89 04 24             	mov    %eax,(%esp)
 857c509:	e8 22 12 b0 ff       	call   807d730 <strerror@plt>
 857c50e:	89 44 24 18          	mov    %eax,0x18(%esp)
 857c512:	8b 45 f4             	mov    -0xc(%ebp),%eax
 857c515:	89 44 24 14          	mov    %eax,0x14(%esp)
 857c519:	c7 44 24 10 f4 7c ca 	movl   $0x8ca7cf4,0x10(%esp)
 857c520:	08 
 857c521:	c7 44 24 0c a6 00 00 	movl   $0xa6,0xc(%esp)
 857c528:	00 
 857c529:	c7 44 24 08 40 90 ca 	movl   $0x8ca9040,0x8(%esp)
 857c530:	08 
 857c531:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857c538:	08 
 857c539:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 857c540:	e8 c5 76 55 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 857c545:	eb 01                	jmp    857c548 <_ZN9UdpThread14_bindUDPSocketEt+0x18a>
 857c547:	90                   	nop
 857c548:	c7 04 24 ff ff ff ff 	movl   $0xffffffff,(%esp)
 857c54f:	e8 6c 1c b0 ff       	call   807e1c0 <exit@plt>
 857c554:	8b 45 f0             	mov    -0x10(%ebp),%eax
 857c557:	89 04 24             	mov    %eax,(%esp)
 857c55a:	e8 25 2f 00 00       	call   857f484 <_ZN8CNetworkILi4096ELi450000EE11SetNonBlockEi>
 857c55f:	83 f0 01             	xor    $0x1,%eax
 857c562:	84 c0                	test   %al,%al
 857c564:	74 38                	je     857c59e <_ZN9UdpThread14_bindUDPSocketEt+0x1e0>
 857c566:	c7 44 24 10 30 7d ca 	movl   $0x8ca7d30,0x10(%esp)
 857c56d:	08 
 857c56e:	c7 44 24 0c b0 00 00 	movl   $0xb0,0xc(%esp)
 857c575:	00 
 857c576:	c7 44 24 08 40 90 ca 	movl   $0x8ca9040,0x8(%esp)
 857c57d:	08 
 857c57e:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857c585:	08 
 857c586:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 857c58d:	e8 78 76 55 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 857c592:	c7 04 24 ff ff ff ff 	movl   $0xffffffff,(%esp)
 857c599:	e8 22 1c b0 ff       	call   807e1c0 <exit@plt>
 857c59e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 857c5a1:	c9                   	leave
 857c5a2:	c3                   	ret
 857c5a3:	90                   	nop

```

```c
// UdpThread::_bindUDPSocket @ 0x857c3be

/* UdpThread::_bindUDPSocket(unsigned short) */

int __thiscall UdpThread::_bindUDPSocket(UdpThread *this,ushort param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  sockaddr local_24;
  int local_14;
  int local_10;
  
  local_14 = socket(2,2,0);
  memset(&local_24,0,0x10);
  local_24.sa_family = 2;
  local_24.sa_data._2_4_ = htonl(0);
  local_24.sa_data._0_2_ = htons(param_1);
  iVar2 = bind(local_14,&local_24,0x10);
  if (iVar2 < 0) {
    LogManager::logFormat
              (1,"NetworkThread.cpp","SOCKET UdpThread::_bindUDPSocket(short unsigned int)",0x84,
               "[ERROR]UDP Thread Socket Binding ERROR");
    piVar3 = __errno_location();
    local_10 = *piVar3;
    if (local_10 == 0x62) {
      LogManager::logFormat
                (1,"NetworkThread.cpp","SOCKET UdpThread::_bindUDPSocket(short unsigned int)",0x9e,
                 "Port %d for receiving UDP is in use\n",(uint)(ushort)local_24.sa_data._0_2_);
    }
    else if (local_10 == 99) {
      LogManager::logFormat
                (1,"NetworkThread.cpp","SOCKET UdpThread::_bindUDPSocket(short unsigned int)",0xa2,
                 "Cannot assign requested address\n");
    }
    else if (local_10 != 0) {
      pcVar4 = strerror(local_10);
      LogManager::logFormat
                (1,"NetworkThread.cpp","SOCKET UdpThread::_bindUDPSocket(short unsigned int)",0xa6,
                 "Could not bind UDP receive port. Error= %d , strerror = %s\n",local_10,pcVar4);
    }
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  cVar1 = CNetwork<4096,450000>::SetNonBlock(local_14);
  if (cVar1 != '\x01') {
    LogManager::logFormat
              (1,"NetworkThread.cpp","SOCKET UdpThread::_bindUDPSocket(short unsigned int)",0xb0,
               "Fail to SetNonBlock UdpThread.");
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return local_14;
}

```

---

## _processUDPData

```asm
// === 0857c5a4 UdpThread::_processUDPData  [0x0857c5a4-0x857c9dd] ===
 857c5a4:	55                   	push   %ebp
 857c5a5:	89 e5                	mov    %esp,%ebp
 857c5a7:	57                   	push   %edi
 857c5a8:	56                   	push   %esi
 857c5a9:	53                   	push   %ebx
 857c5aa:	83 ec 4c             	sub    $0x4c,%esp
 857c5ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 857c5b0:	0f b7 00             	movzwl (%eax),%eax
 857c5b3:	0f b7 d8             	movzwl %ax,%ebx
 857c5b6:	e8 85 40 ce ff       	call   8260640 <_Z21CPacketTracerInstancev>
 857c5bb:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 857c5bf:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 857c5c6:	00 
 857c5c7:	89 04 24             	mov    %eax,(%esp)
 857c5ca:	e8 9d cc 01 00       	call   859926c <_ZN13CPacketTracer9AddUdpLogEii>
 857c5cf:	b8 60 e2 43 09       	mov    $0x943e260,%eax
 857c5d4:	0f b6 00             	movzbl (%eax),%eax
 857c5d7:	84 c0                	test   %al,%al
 857c5d9:	0f 85 8a 00 00 00    	jne    857c669 <_ZN9UdpThread15_processUDPDataEPci+0xc5>
 857c5df:	c7 04 24 60 e2 43 09 	movl   $0x943e260,(%esp)
 857c5e6:	e8 45 8d 1a 00       	call   8725330 <__cxa_guard_acquire>
 857c5eb:	85 c0                	test   %eax,%eax
 857c5ed:	0f 95 c0             	setne  %al
 857c5f0:	84 c0                	test   %al,%al
 857c5f2:	74 75                	je     857c669 <_ZN9UdpThread15_processUDPDataEPci+0xc5>
 857c5f4:	bb 00 00 00 00       	mov    $0x0,%ebx
 857c5f9:	e8 83 fb b4 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 857c5fe:	89 04 24             	mov    %eax,(%esp)
 857c601:	e8 94 dd b5 ff       	call   80da39a <_ZN12CEnvironment13get_file_nameEv>
 857c606:	c7 44 24 08 4f 7d ca 	movl   $0x8ca7d4f,0x8(%esp)
 857c60d:	08 
 857c60e:	89 44 24 04          	mov    %eax,0x4(%esp)
 857c612:	c7 04 24 80 e2 43 09 	movl   $0x943e280,(%esp)
 857c619:	e8 be 2e 00 00       	call   857f4dc <_ZN14CPacketCounterILi1000ELi10240EEC1EPcS1_>
 857c61e:	c7 04 24 60 e2 43 09 	movl   $0x943e260,(%esp)
 857c625:	e8 26 8c 1a 00       	call   8725250 <__cxa_guard_release>
 857c62a:	b8 5a f5 57 08       	mov    $0x857f55a,%eax
 857c62f:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 857c636:	08 
 857c637:	c7 44 24 04 80 e2 43 	movl   $0x943e280,0x4(%esp)
 857c63e:	09 
 857c63f:	89 04 24             	mov    %eax,(%esp)
 857c642:	e8 89 17 b0 ff       	call   807ddd0 <__cxa_atexit@plt>
 857c647:	eb 20                	jmp    857c669 <_ZN9UdpThread15_processUDPDataEPci+0xc5>
 857c649:	89 d6                	mov    %edx,%esi
 857c64b:	89 c7                	mov    %eax,%edi
 857c64d:	84 db                	test   %bl,%bl
 857c64f:	75 0c                	jne    857c65d <_ZN9UdpThread15_processUDPDataEPci+0xb9>
 857c651:	c7 04 24 60 e2 43 09 	movl   $0x943e260,(%esp)
 857c658:	e8 63 8c 1a 00       	call   87252c0 <__cxa_guard_abort>
 857c65d:	89 f8                	mov    %edi,%eax
 857c65f:	89 f2                	mov    %esi,%edx
 857c661:	89 04 24             	mov    %eax,(%esp)
 857c664:	e8 e7 70 56 00       	call   8ae3750 <_Unwind_Resume>
 857c669:	8b 45 0c             	mov    0xc(%ebp),%eax
 857c66c:	0f b7 00             	movzwl (%eax),%eax
 857c66f:	0f b7 c0             	movzwl %ax,%eax
 857c672:	89 44 24 04          	mov    %eax,0x4(%esp)
 857c676:	c7 04 24 80 e2 43 09 	movl   $0x943e280,(%esp)
 857c67d:	e8 de 2e 00 00       	call   857f560 <_ZN14CPacketCounterILi1000ELi10240EE20IncrementPacketCountEi>
 857c682:	8b 45 0c             	mov    0xc(%ebp),%eax
 857c685:	89 04 24             	mov    %eax,(%esp)
 857c688:	e8 d3 6f ef ff       	call   8473660 <_ZN21CDispatchServerPacket14dispatchPacketEPc>
 857c68d:	84 c0                	test   %al,%al
 857c68f:	0f 85 39 03 00 00    	jne    857c9ce <_ZN9UdpThread15_processUDPDataEPci+0x42a>
 857c695:	8b 45 0c             	mov    0xc(%ebp),%eax
 857c698:	0f b6 00             	movzbl (%eax),%eax
 857c69b:	0f be c0             	movsbl %al,%eax
 857c69e:	83 f8 01             	cmp    $0x1,%eax
 857c6a1:	0f 84 00 01 00 00    	je     857c7a7 <_ZN9UdpThread15_processUDPDataEPci+0x203>
 857c6a7:	83 f8 01             	cmp    $0x1,%eax
 857c6aa:	7f 09                	jg     857c6b5 <_ZN9UdpThread15_processUDPDataEPci+0x111>
 857c6ac:	85 c0                	test   %eax,%eax
 857c6ae:	74 1c                	je     857c6cc <_ZN9UdpThread15_processUDPDataEPci+0x128>
 857c6b0:	e9 c9 01 00 00       	jmp    857c87e <_ZN9UdpThread15_processUDPDataEPci+0x2da>
 857c6b5:	83 f8 02             	cmp    $0x2,%eax
 857c6b8:	0f 84 13 03 00 00    	je     857c9d1 <_ZN9UdpThread15_processUDPDataEPci+0x42d>
 857c6be:	83 f8 03             	cmp    $0x3,%eax
 857c6c1:	0f 84 05 02 00 00    	je     857c8cc <_ZN9UdpThread15_processUDPDataEPci+0x328>
 857c6c7:	e9 b2 01 00 00       	jmp    857c87e <_ZN9UdpThread15_processUDPDataEPci+0x2da>
 857c6cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 857c6cf:	89 45 e0             	mov    %eax,-0x20(%ebp)
 857c6d2:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 857c6d7:	c7 44 24 08 e8 00 00 	movl   $0xe8,0x8(%esp)
 857c6de:	00 
 857c6df:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857c6e6:	08 
 857c6e7:	89 04 24             	mov    %eax,(%esp)
 857c6ea:	e8 97 33 d1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 857c6ef:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 857c6f6:	00 
 857c6f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 857c6fb:	8d 45 d8             	lea    -0x28(%ebp),%eax
 857c6fe:	89 04 24             	mov    %eax,(%esp)
 857c701:	e8 20 c5 b4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 857c706:	8d 45 d8             	lea    -0x28(%ebp),%eax
 857c709:	89 04 24             	mov    %eax,(%esp)
 857c70c:	e8 35 c5 b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 857c711:	c7 44 24 04 3d 00 00 	movl   $0x3d,0x4(%esp)
 857c718:	00 
 857c719:	89 04 24             	mov    %eax,(%esp)
 857c71c:	e8 35 c5 b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 857c721:	8d 45 d8             	lea    -0x28(%ebp),%eax
 857c724:	89 04 24             	mov    %eax,(%esp)
 857c727:	e8 1a c5 b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 857c72c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 857c733:	ff 
 857c734:	89 04 24             	mov    %eax,(%esp)
 857c737:	e8 1a c5 b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 857c73c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 857c73f:	89 04 24             	mov    %eax,(%esp)
 857c742:	e8 07 c5 b4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 857c747:	c7 44 24 08 52 00 00 	movl   $0x52,0x8(%esp)
 857c74e:	00 
 857c74f:	8b 55 e0             	mov    -0x20(%ebp),%edx
 857c752:	89 54 24 04          	mov    %edx,0x4(%esp)
 857c756:	89 04 24             	mov    %eax,(%esp)
 857c759:	e8 f4 1e b6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 857c75e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 857c763:	8d 55 d8             	lea    -0x28(%ebp),%edx
 857c766:	89 54 24 08          	mov    %edx,0x8(%esp)
 857c76a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 857c771:	00 
 857c772:	89 04 24             	mov    %eax,(%esp)
 857c775:	e8 64 48 ff ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 857c77a:	eb 1b                	jmp    857c797 <_ZN9UdpThread15_processUDPDataEPci+0x1f3>
 857c77c:	89 d3                	mov    %edx,%ebx
 857c77e:	89 c6                	mov    %eax,%esi
 857c780:	8d 45 d8             	lea    -0x28(%ebp),%eax
 857c783:	89 04 24             	mov    %eax,(%esp)
 857c786:	e8 47 01 0a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 857c78b:	89 f0                	mov    %esi,%eax
 857c78d:	89 da                	mov    %ebx,%edx
 857c78f:	89 04 24             	mov    %eax,(%esp)
 857c792:	e8 b9 6f 56 00       	call   8ae3750 <_Unwind_Resume>
 857c797:	8d 45 d8             	lea    -0x28(%ebp),%eax
 857c79a:	89 04 24             	mov    %eax,(%esp)
 857c79d:	e8 30 01 0a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 857c7a2:	e9 2e 02 00 00       	jmp    857c9d5 <_ZN9UdpThread15_processUDPDataEPci+0x431>
 857c7a7:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 857c7ac:	c7 44 24 08 f8 00 00 	movl   $0xf8,0x8(%esp)
 857c7b3:	00 
 857c7b4:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857c7bb:	08 
 857c7bc:	89 04 24             	mov    %eax,(%esp)
 857c7bf:	e8 c2 32 d1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 857c7c4:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 857c7cb:	00 
 857c7cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 857c7d0:	8d 45 d0             	lea    -0x30(%ebp),%eax
 857c7d3:	89 04 24             	mov    %eax,(%esp)
 857c7d6:	e8 4b c4 b4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 857c7db:	8d 45 d0             	lea    -0x30(%ebp),%eax
 857c7de:	89 04 24             	mov    %eax,(%esp)
 857c7e1:	e8 60 c4 b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 857c7e6:	c7 44 24 04 9f 00 00 	movl   $0x9f,0x4(%esp)
 857c7ed:	00 
 857c7ee:	89 04 24             	mov    %eax,(%esp)
 857c7f1:	e8 60 c4 b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 857c7f6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 857c7f9:	89 04 24             	mov    %eax,(%esp)
 857c7fc:	e8 45 c4 b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 857c801:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 857c808:	ff 
 857c809:	89 04 24             	mov    %eax,(%esp)
 857c80c:	e8 45 c4 b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 857c811:	8b 45 0c             	mov    0xc(%ebp),%eax
 857c814:	8d 58 02             	lea    0x2(%eax),%ebx
 857c817:	8d 45 d0             	lea    -0x30(%ebp),%eax
 857c81a:	89 04 24             	mov    %eax,(%esp)
 857c81d:	e8 2c c4 b4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 857c822:	8b 55 10             	mov    0x10(%ebp),%edx
 857c825:	89 54 24 08          	mov    %edx,0x8(%esp)
 857c829:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 857c82d:	89 04 24             	mov    %eax,(%esp)
 857c830:	e8 1d 1e b6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 857c835:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 857c83a:	8d 55 d0             	lea    -0x30(%ebp),%edx
 857c83d:	89 54 24 08          	mov    %edx,0x8(%esp)
 857c841:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 857c848:	00 
 857c849:	89 04 24             	mov    %eax,(%esp)
 857c84c:	e8 8d 47 ff ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 857c851:	eb 1b                	jmp    857c86e <_ZN9UdpThread15_processUDPDataEPci+0x2ca>
 857c853:	89 d3                	mov    %edx,%ebx
 857c855:	89 c6                	mov    %eax,%esi
 857c857:	8d 45 d0             	lea    -0x30(%ebp),%eax
 857c85a:	89 04 24             	mov    %eax,(%esp)
 857c85d:	e8 70 00 0a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 857c862:	89 f0                	mov    %esi,%eax
 857c864:	89 da                	mov    %ebx,%edx
 857c866:	89 04 24             	mov    %eax,(%esp)
 857c869:	e8 e2 6e 56 00       	call   8ae3750 <_Unwind_Resume>
 857c86e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 857c871:	89 04 24             	mov    %eax,(%esp)
 857c874:	e8 59 00 0a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 857c879:	e9 57 01 00 00       	jmp    857c9d5 <_ZN9UdpThread15_processUDPDataEPci+0x431>
 857c87e:	8b 45 0c             	mov    0xc(%ebp),%eax
 857c881:	0f b7 00             	movzwl (%eax),%eax
 857c884:	66 3d e7 03          	cmp    $0x3e7,%ax
 857c888:	0f 87 46 01 00 00    	ja     857c9d4 <_ZN9UdpThread15_processUDPDataEPci+0x430>
 857c88e:	8b 45 0c             	mov    0xc(%ebp),%eax
 857c891:	0f b6 00             	movzbl (%eax),%eax
 857c894:	0f be c0             	movsbl %al,%eax
 857c897:	89 44 24 14          	mov    %eax,0x14(%esp)
 857c89b:	c7 44 24 10 5f 7d ca 	movl   $0x8ca7d5f,0x10(%esp)
 857c8a2:	08 
 857c8a3:	c7 44 24 0c 12 01 00 	movl   $0x112,0xc(%esp)
 857c8aa:	00 
 857c8ab:	c7 44 24 08 00 90 ca 	movl   $0x8ca9000,0x8(%esp)
 857c8b2:	08 
 857c8b3:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857c8ba:	08 
 857c8bb:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 857c8c2:	e8 43 73 55 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 857c8c7:	e9 09 01 00 00       	jmp    857c9d5 <_ZN9UdpThread15_processUDPDataEPci+0x431>
 857c8cc:	a1 48 be 40 09       	mov    0x940be48,%eax
 857c8d1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 857c8d8:	00 
 857c8d9:	89 04 24             	mov    %eax,(%esp)
 857c8dc:	e8 63 0a f7 ff       	call   84ed344 <_ZN19CAuctionServerProxy10SetRunningEb>
 857c8e1:	a1 4c be 40 09       	mov    0x940be4c,%eax
 857c8e6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 857c8ed:	00 
 857c8ee:	89 04 24             	mov    %eax,(%esp)
 857c8f1:	e8 6a 0a f7 ff       	call   84ed360 <_ZN23CCeraAuctionServerProxy10SetRunningEb>
 857c8f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 857c8f9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 857c8fc:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 857c901:	c7 44 24 08 26 01 00 	movl   $0x126,0x8(%esp)
 857c908:	00 
 857c909:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857c910:	08 
 857c911:	89 04 24             	mov    %eax,(%esp)
 857c914:	e8 6d 31 d1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 857c919:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 857c920:	00 
 857c921:	89 44 24 04          	mov    %eax,0x4(%esp)
 857c925:	8d 45 c8             	lea    -0x38(%ebp),%eax
 857c928:	89 04 24             	mov    %eax,(%esp)
 857c92b:	e8 f6 c2 b4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 857c930:	8d 45 c8             	lea    -0x38(%ebp),%eax
 857c933:	89 04 24             	mov    %eax,(%esp)
 857c936:	e8 0b c3 b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 857c93b:	c7 44 24 04 3d 00 00 	movl   $0x3d,0x4(%esp)
 857c942:	00 
 857c943:	89 04 24             	mov    %eax,(%esp)
 857c946:	e8 0b c3 b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 857c94b:	8d 45 c8             	lea    -0x38(%ebp),%eax
 857c94e:	89 04 24             	mov    %eax,(%esp)
 857c951:	e8 f0 c2 b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 857c956:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 857c95d:	ff 
 857c95e:	89 04 24             	mov    %eax,(%esp)
 857c961:	e8 f0 c2 b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 857c966:	8d 45 c8             	lea    -0x38(%ebp),%eax
 857c969:	89 04 24             	mov    %eax,(%esp)
 857c96c:	e8 dd c2 b4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 857c971:	c7 44 24 08 52 00 00 	movl   $0x52,0x8(%esp)
 857c978:	00 
 857c979:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 857c97c:	89 54 24 04          	mov    %edx,0x4(%esp)
 857c980:	89 04 24             	mov    %eax,(%esp)
 857c983:	e8 ca 1c b6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 857c988:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 857c98d:	8d 55 c8             	lea    -0x38(%ebp),%edx
 857c990:	89 54 24 08          	mov    %edx,0x8(%esp)
 857c994:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 857c99b:	00 
 857c99c:	89 04 24             	mov    %eax,(%esp)
 857c99f:	e8 3a 46 ff ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 857c9a4:	eb 1b                	jmp    857c9c1 <_ZN9UdpThread15_processUDPDataEPci+0x41d>
 857c9a6:	89 d3                	mov    %edx,%ebx
 857c9a8:	89 c6                	mov    %eax,%esi
 857c9aa:	8d 45 c8             	lea    -0x38(%ebp),%eax
 857c9ad:	89 04 24             	mov    %eax,(%esp)
 857c9b0:	e8 1d ff 09 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 857c9b5:	89 f0                	mov    %esi,%eax
 857c9b7:	89 da                	mov    %ebx,%edx
 857c9b9:	89 04 24             	mov    %eax,(%esp)
 857c9bc:	e8 8f 6d 56 00       	call   8ae3750 <_Unwind_Resume>
 857c9c1:	8d 45 c8             	lea    -0x38(%ebp),%eax
 857c9c4:	89 04 24             	mov    %eax,(%esp)
 857c9c7:	e8 06 ff 09 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 857c9cc:	eb 07                	jmp    857c9d5 <_ZN9UdpThread15_processUDPDataEPci+0x431>
 857c9ce:	90                   	nop
 857c9cf:	eb 04                	jmp    857c9d5 <_ZN9UdpThread15_processUDPDataEPci+0x431>
 857c9d1:	90                   	nop
 857c9d2:	eb 01                	jmp    857c9d5 <_ZN9UdpThread15_processUDPDataEPci+0x431>
 857c9d4:	90                   	nop
 857c9d5:	83 c4 4c             	add    $0x4c,%esp
 857c9d8:	5b                   	pop    %ebx
 857c9d9:	5e                   	pop    %esi
 857c9da:	5f                   	pop    %edi
 857c9db:	5d                   	pop    %ebp
 857c9dc:	c3                   	ret
 857c9dd:	90                   	nop

```

```c
// UdpThread::_processUDPData @ 0x857c5a4

/* UdpThread::_processUDPData(char*, int) */

void __thiscall UdpThread::_processUDPData(UdpThread *this,char *param_1,int param_2)

{
  ushort uVar1;
  char cVar2;
  CPacketTracer *this_00;
  int iVar3;
  CEnvironment *this_01;
  char *pcVar4;
  Stream *pSVar5;
  CStreamGuard *pCVar6;
  CStreamGuard local_3c [8];
  CStreamGuard local_34 [8];
  CStreamGuard local_2c [8];
  char *local_24;
  char *local_20;
  
  uVar1 = *(ushort *)param_1;
  this_00 = (CPacketTracer *)CPacketTracerInstance();
  CPacketTracer::AddUdpLog(this_00,3,(uint)uVar1);
  if ((_processUDPData(char*,int)::packet_counter == '\0') &&
     (iVar3 = __cxa_guard_acquire(&_processUDPData(char*,int)::packet_counter), iVar3 != 0)) {
                    /* try { // try from 0857c5f9 to 0857c61d has its CatchHandler @ 0857c649 */
    this_01 = (CEnvironment *)G_CEnvironment();
    pcVar4 = (char *)CEnvironment::get_file_name(this_01);
    CPacketCounter<1000,10240>::CPacketCounter
              ((CPacketCounter<1000,10240> *)_processUDPData(char*,int)::packet_counter,pcVar4,
               "InterDispatcher");
    __cxa_guard_release(&_processUDPData(char*,int)::packet_counter);
    __cxa_atexit(CPacketCounter<1000,10240>::~CPacketCounter,
                 _processUDPData(char*,int)::packet_counter,&__dso_handle);
  }
  CPacketCounter<1000,10240>::IncrementPacketCount
            ((CPacketCounter<1000,10240> *)_processUDPData(char*,int)::packet_counter,
             (uint)*(ushort *)param_1);
  cVar2 = CDispatchServerPacket::dispatchPacket(param_1);
  if (cVar2 == '\0') {
    cVar2 = *param_1;
    if (cVar2 == '\x01') {
      pSVar5 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"NetworkThread.cpp",0xf8);
      CStreamGuard::CStreamGuard(local_34,pSVar5,true);
      pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_34);
                    /* try { // try from 0857c7f1 to 0857c850 has its CatchHandler @ 0857c853 */
      CStreamGuard::operator<<(pCVar6,0x9f);
      pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_34);
      CStreamGuard::operator<<(pCVar6,-1);
      pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_34);
      CStreamGuard::put_binary(pCVar6,param_1 + 2,param_2);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_34);
      CStreamGuard::~CStreamGuard(local_34);
    }
    else {
      if (cVar2 < '\x02') {
        if (cVar2 == '\0') {
          local_24 = param_1;
          pSVar5 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"NetworkThread.cpp",0xe8)
          ;
          CStreamGuard::CStreamGuard(local_2c,pSVar5,true);
          pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
                    /* try { // try from 0857c71c to 0857c779 has its CatchHandler @ 0857c77c */
          CStreamGuard::operator<<(pCVar6,0x3d);
          pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
          CStreamGuard::operator<<(pCVar6,-1);
          pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_2c);
          CStreamGuard::put_binary(pCVar6,local_24,0x52);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_2c);
          CStreamGuard::~CStreamGuard(local_2c);
          return;
        }
      }
      else {
        if (cVar2 == '\x02') {
          return;
        }
        if (cVar2 == '\x03') {
          CAuctionServerProxy::SetRunning(GlobalData::s_auction_proxy,false);
          CCeraAuctionServerProxy::SetRunning(GlobalData::s_cera_auction_proxy,false);
          local_20 = param_1;
          pSVar5 = (Stream *)
                   StreamPool::Acquire(GlobalData::s_stream_pool,"NetworkThread.cpp",0x126);
          CStreamGuard::CStreamGuard(local_3c,pSVar5,true);
          pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
                    /* try { // try from 0857c946 to 0857c9a3 has its CatchHandler @ 0857c9a6 */
          CStreamGuard::operator<<(pCVar6,0x3d);
          pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
          CStreamGuard::operator<<(pCVar6,-1);
          pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_3c);
          CStreamGuard::put_binary(pCVar6,local_20,0x52);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_3c);
          CStreamGuard::~CStreamGuard(local_3c);
          return;
        }
      }
      if (*(ushort *)param_1 < 1000) {
        LogManager::logFormat
                  (1,"NetworkThread.cpp","void UdpThread::_processUDPData(char*, int)",0x112,
                   "ABNORMAL UDP PACKET [%d]",(int)*param_1);
      }
    }
  }
  return;
}

```

---

## dispatch

```asm
// === 0857c9de UdpThread::dispatch  [0x0857c9de-0x857cbe7] ===
 857c9de:	55                   	push   %ebp
 857c9df:	89 e5                	mov    %esp,%ebp
 857c9e1:	57                   	push   %edi
 857c9e2:	56                   	push   %esi
 857c9e3:	53                   	push   %ebx
 857c9e4:	81 ec dc 18 00 00    	sub    $0x18dc,%esp
 857c9ea:	c7 45 c8 01 00 00 00 	movl   $0x1,-0x38(%ebp)
 857c9f1:	e8 8b f7 b4 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 857c9f6:	89 04 24             	mov    %eax,(%esp)
 857c9f9:	e8 6c a3 d2 ff       	call   82a6d6a <_ZN12CEnvironment12get_udp_portEv>
 857c9fe:	0f b7 c0             	movzwl %ax,%eax
 857ca01:	89 44 24 04          	mov    %eax,0x4(%esp)
 857ca05:	8b 45 08             	mov    0x8(%ebp),%eax
 857ca08:	89 04 24             	mov    %eax,(%esp)
 857ca0b:	e8 ae f9 ff ff       	call   857c3be <_ZN9UdpThread14_bindUDPSocketEt>
 857ca10:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 857ca13:	c6 05 40 e2 43 09 01 	movb   $0x1,0x943e240
 857ca1a:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 857ca21:	e9 a4 01 00 00       	jmp    857cbca <_ZN9UdpThread8dispatchEPv+0x1ec>
 857ca26:	c7 44 24 08 00 18 00 	movl   $0x1800,0x8(%esp)
 857ca2d:	00 
 857ca2e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 857ca35:	00 
 857ca36:	8d 85 38 e7 ff ff    	lea    -0x18c8(%ebp),%eax
 857ca3c:	89 04 24             	mov    %eax,(%esp)
 857ca3f:	e8 7c 12 b0 ff       	call   807dcc0 <memset@plt>
 857ca44:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 857ca4a:	89 45 dc             	mov    %eax,-0x24(%ebp)
 857ca4d:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 857ca54:	eb 11                	jmp    857ca67 <_ZN9UdpThread8dispatchEPv+0x89>
 857ca56:	8b 55 d8             	mov    -0x28(%ebp),%edx
 857ca59:	8b 45 dc             	mov    -0x24(%ebp),%eax
 857ca5c:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 857ca63:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 857ca67:	83 7d d8 1f          	cmpl   $0x1f,-0x28(%ebp)
 857ca6b:	0f 96 c0             	setbe  %al
 857ca6e:	84 c0                	test   %al,%al
 857ca70:	75 e4                	jne    857ca56 <_ZN9UdpThread8dispatchEPv+0x78>
 857ca72:	c7 45 bc 01 00 00 00 	movl   $0x1,-0x44(%ebp)
 857ca79:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 857ca80:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 857ca87:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 857ca8e:	eb 56                	jmp    857cae6 <_ZN9UdpThread8dispatchEPv+0x108>
 857ca90:	8b 45 e0             	mov    -0x20(%ebp),%eax
 857ca93:	8b 44 85 c4          	mov    -0x3c(%ebp,%eax,4),%eax
 857ca97:	c1 e8 05             	shr    $0x5,%eax
 857ca9a:	89 c2                	mov    %eax,%edx
 857ca9c:	8b 9c 85 38 ff ff ff 	mov    -0xc8(%ebp,%eax,4),%ebx
 857caa3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 857caa6:	8b 44 85 c4          	mov    -0x3c(%ebp,%eax,4),%eax
 857caaa:	83 e0 1f             	and    $0x1f,%eax
 857caad:	be 01 00 00 00       	mov    $0x1,%esi
 857cab2:	89 f7                	mov    %esi,%edi
 857cab4:	89 c1                	mov    %eax,%ecx
 857cab6:	d3 e7                	shl    %cl,%edi
 857cab8:	89 f8                	mov    %edi,%eax
 857caba:	09 d8                	or     %ebx,%eax
 857cabc:	89 84 95 38 ff ff ff 	mov    %eax,-0xc8(%ebp,%edx,4)
 857cac3:	8b 55 e0             	mov    -0x20(%ebp),%edx
 857cac6:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 857cac9:	c1 e2 02             	shl    $0x2,%edx
 857cacc:	01 d0                	add    %edx,%eax
 857cace:	89 44 24 04          	mov    %eax,0x4(%esp)
 857cad2:	8d 45 b8             	lea    -0x48(%ebp),%eax
 857cad5:	89 04 24             	mov    %eax,(%esp)
 857cad8:	e8 3b 17 b1 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 857cadd:	8b 00                	mov    (%eax),%eax
 857cadf:	89 45 b8             	mov    %eax,-0x48(%ebp)
 857cae2:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 857cae6:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 857caea:	0f 9e c0             	setle  %al
 857caed:	84 c0                	test   %al,%al
 857caef:	75 9f                	jne    857ca90 <_ZN9UdpThread8dispatchEPv+0xb2>
 857caf1:	8b 45 b8             	mov    -0x48(%ebp),%eax
 857caf4:	83 c0 01             	add    $0x1,%eax
 857caf7:	89 45 b8             	mov    %eax,-0x48(%ebp)
 857cafa:	8b 45 b8             	mov    -0x48(%ebp),%eax
 857cafd:	8d 55 bc             	lea    -0x44(%ebp),%edx
 857cb00:	89 54 24 10          	mov    %edx,0x10(%esp)
 857cb04:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 857cb0b:	00 
 857cb0c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 857cb13:	00 
 857cb14:	8d 95 38 ff ff ff    	lea    -0xc8(%ebp),%edx
 857cb1a:	89 54 24 04          	mov    %edx,0x4(%esp)
 857cb1e:	89 04 24             	mov    %eax,(%esp)
 857cb21:	e8 1a 1d b0 ff       	call   807e840 <select@plt>
 857cb26:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 857cb29:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 857cb2d:	0f 88 96 00 00 00    	js     857cbc9 <_ZN9UdpThread8dispatchEPv+0x1eb>
 857cb33:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 857cb3a:	eb 7c                	jmp    857cbb8 <_ZN9UdpThread8dispatchEPv+0x1da>
 857cb3c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 857cb3f:	8b 44 85 c4          	mov    -0x3c(%ebp,%eax,4),%eax
 857cb43:	c1 e8 05             	shr    $0x5,%eax
 857cb46:	8b 94 85 38 ff ff ff 	mov    -0xc8(%ebp,%eax,4),%edx
 857cb4d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 857cb50:	8b 44 85 c4          	mov    -0x3c(%ebp,%eax,4),%eax
 857cb54:	83 e0 1f             	and    $0x1f,%eax
 857cb57:	89 d3                	mov    %edx,%ebx
 857cb59:	89 c1                	mov    %eax,%ecx
 857cb5b:	d3 fb                	sar    %cl,%ebx
 857cb5d:	89 d8                	mov    %ebx,%eax
 857cb5f:	83 e0 01             	and    $0x1,%eax
 857cb62:	84 c0                	test   %al,%al
 857cb64:	74 4e                	je     857cbb4 <_ZN9UdpThread8dispatchEPv+0x1d6>
 857cb66:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 857cb69:	8b 44 85 c4          	mov    -0x3c(%ebp,%eax,4),%eax
 857cb6d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 857cb74:	00 
 857cb75:	c7 44 24 08 00 18 00 	movl   $0x1800,0x8(%esp)
 857cb7c:	00 
 857cb7d:	8d 95 38 e7 ff ff    	lea    -0x18c8(%ebp),%edx
 857cb83:	89 54 24 04          	mov    %edx,0x4(%esp)
 857cb87:	89 04 24             	mov    %eax,(%esp)
 857cb8a:	e8 b1 16 b0 ff       	call   807e240 <recv@plt>
 857cb8f:	89 45 cc             	mov    %eax,-0x34(%ebp)
 857cb92:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 857cb96:	7e 1c                	jle    857cbb4 <_ZN9UdpThread8dispatchEPv+0x1d6>
 857cb98:	8b 45 cc             	mov    -0x34(%ebp),%eax
 857cb9b:	89 44 24 08          	mov    %eax,0x8(%esp)
 857cb9f:	8d 85 38 e7 ff ff    	lea    -0x18c8(%ebp),%eax
 857cba5:	89 44 24 04          	mov    %eax,0x4(%esp)
 857cba9:	8b 45 08             	mov    0x8(%ebp),%eax
 857cbac:	89 04 24             	mov    %eax,(%esp)
 857cbaf:	e8 f0 f9 ff ff       	call   857c5a4 <_ZN9UdpThread15_processUDPDataEPci>
 857cbb4:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 857cbb8:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 857cbbc:	0f 9e c0             	setle  %al
 857cbbf:	84 c0                	test   %al,%al
 857cbc1:	0f 85 75 ff ff ff    	jne    857cb3c <_ZN9UdpThread8dispatchEPv+0x15e>
 857cbc7:	eb 01                	jmp    857cbca <_ZN9UdpThread8dispatchEPv+0x1ec>
 857cbc9:	90                   	nop
 857cbca:	0f b6 05 64 bd 40 09 	movzbl 0x940bd64,%eax
 857cbd1:	83 f0 01             	xor    $0x1,%eax
 857cbd4:	84 c0                	test   %al,%al
 857cbd6:	0f 85 4a fe ff ff    	jne    857ca26 <_ZN9UdpThread8dispatchEPv+0x48>
 857cbdc:	81 c4 dc 18 00 00    	add    $0x18dc,%esp
 857cbe2:	5b                   	pop    %ebx
 857cbe3:	5e                   	pop    %esi
 857cbe4:	5f                   	pop    %edi
 857cbe5:	5d                   	pop    %ebp
 857cbe6:	c3                   	ret
 857cbe7:	90                   	nop

```

```c
// UdpThread::dispatch @ 0x857c9de

/* UdpThread::dispatch(void*) */

void UdpThread::dispatch(void *param_1)

{
  ushort uVar1;
  CEnvironment *this;
  int *piVar2;
  char local_18cc [6144];
  fd_set local_cc;
  int local_4c;
  timeval local_48;
  uint local_40 [5];
  uint local_2c;
  fd_set *local_28;
  int local_24;
  int local_20;
  
  local_40[1] = 1;
  this = (CEnvironment *)G_CEnvironment();
  uVar1 = CEnvironment::get_udp_port(this);
  local_40[0] = _bindUDPSocket(param_1,uVar1);
  g_bUdp_TH_start = 1;
  local_40[3] = 0;
  while (GlobalData::s_server_stop != '\x01') {
    memset(local_18cc,0,0x1800);
    local_28 = &local_cc;
    for (local_2c = 0; local_2c < 0x20; local_2c = local_2c + 1) {
      local_cc.fds_bits[local_2c] = 0;
    }
    local_48.tv_sec = 1;
    local_48.tv_usec = 0;
    local_4c = 0;
    for (local_24 = 0; local_24 < 1; local_24 = local_24 + 1) {
      local_cc.fds_bits[local_40[local_24] >> 5] =
           1 << ((byte)local_40[local_24] & 0x1f) | local_cc.fds_bits[local_40[local_24] >> 5];
      piVar2 = std::max<int>(&local_4c,(int *)(local_40 + local_24));
      local_4c = *piVar2;
    }
    local_4c = local_4c + 1;
    local_40[4] = select(local_4c,&local_cc,(fd_set *)0x0,(fd_set *)0x0,&local_48);
    if (-1 < (int)local_40[4]) {
      for (local_20 = 0; local_20 < 1; local_20 = local_20 + 1) {
        if ((local_cc.fds_bits[local_40[local_20] >> 5] >> ((byte)local_40[local_20] & 0x1f) & 1U)
            != 0) {
          local_40[2] = recv(local_40[local_20],local_18cc,0x1800,0);
          if (0 < (int)local_40[2]) {
            _processUDPData(param_1,local_18cc,local_40[2]);
          }
        }
      }
    }
  }
  return;
}

```

---

## ~UdpThread

```asm
// === 0857c370 UdpThread::~UdpThread  [0x0857c370-0x857c39f] ===
 857c370:	55                   	push   %ebp
 857c371:	89 e5                	mov    %esp,%ebp
 857c373:	83 ec 18             	sub    $0x18,%esp
 857c376:	8b 45 08             	mov    0x8(%ebp),%eax
 857c379:	c7 00 c8 90 ca 08    	movl   $0x8ca90c8,(%eax)
 857c37f:	8b 45 08             	mov    0x8(%ebp),%eax
 857c382:	89 04 24             	mov    %eax,(%esp)
 857c385:	e8 bc 47 0b 00       	call   8630b46 <_ZN15ThreadInterfaceD1Ev>
 857c38a:	b8 00 00 00 00       	mov    $0x0,%eax
 857c38f:	84 c0                	test   %al,%al
 857c391:	74 0b                	je     857c39e <_ZN9UdpThreadD1Ev+0x2e>
 857c393:	8b 45 08             	mov    0x8(%ebp),%eax
 857c396:	89 04 24             	mov    %eax,(%esp)
 857c399:	e8 52 81 1a 00       	call   87244f0 <_ZdlPv>
 857c39e:	c9                   	leave
 857c39f:	c3                   	ret

```

```c
// UdpThread::~UdpThread @ 0x857c370

/* WARNING: Removing unreachable block (ram,0x0857c393) */
/* UdpThread::~UdpThread() */

void __thiscall UdpThread::~UdpThread(UdpThread *this)

{
  *(undefined ***)this = &PTR_stop_08ca90c8;
  ThreadInterface::~ThreadInterface((ThreadInterface *)this);
  return;
}

```

---

## ~UdpThread_0857c3a0

```asm
// === 0857c3a0 UdpThread::~UdpThread  [0x0857c3a0-0x857c3bd] ===
 857c3a0:	55                   	push   %ebp
 857c3a1:	89 e5                	mov    %esp,%ebp
 857c3a3:	83 ec 18             	sub    $0x18,%esp
 857c3a6:	8b 45 08             	mov    0x8(%ebp),%eax
 857c3a9:	89 04 24             	mov    %eax,(%esp)
 857c3ac:	e8 bf ff ff ff       	call   857c370 <_ZN9UdpThreadD1Ev>
 857c3b1:	8b 45 08             	mov    0x8(%ebp),%eax
 857c3b4:	89 04 24             	mov    %eax,(%esp)
 857c3b7:	e8 34 81 1a 00       	call   87244f0 <_ZdlPv>
 857c3bc:	c9                   	leave
 857c3bd:	c3                   	ret

```

```c
// UdpThread::~UdpThread @ 0x857c3a0

/* UdpThread::~UdpThread() */

void __thiscall UdpThread::~UdpThread(UdpThread *this)

{
  ~UdpThread(this);
  operator_delete(this);
  return;
}

```

