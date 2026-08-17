# CUdpHandler

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## CUdpHandler

```asm
// === 08483518 CUdpHandler::CUdpHandler  [0x08483518-0x848352f] ===
 8483518:	55                   	push   %ebp
 8483519:	89 e5                	mov    %esp,%ebp
 848351b:	8b 45 08             	mov    0x8(%ebp),%eax
 848351e:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%eax)
 8483524:	8b 45 08             	mov    0x8(%ebp),%eax
 8483527:	c7 40 04 ff ff ff ff 	movl   $0xffffffff,0x4(%eax)
 848352e:	5d                   	pop    %ebp
 848352f:	c3                   	ret

```

```c
// CUdpHandler::CUdpHandler @ 0x8483518

/* CUdpHandler::CUdpHandler() */

void __thiscall CUdpHandler::CUdpHandler(CUdpHandler *this)

{
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  return;
}

```

---

## InetAddr

```asm
// === 08483e06 CUdpHandler::InetAddr  [0x08483e06-0x8483e18] ===
 8483e06:	55                   	push   %ebp
 8483e07:	89 e5                	mov    %esp,%ebp
 8483e09:	83 ec 18             	sub    $0x18,%esp
 8483e0c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8483e0f:	89 04 24             	mov    %eax,(%esp)
 8483e12:	e8 19 a7 bf ff       	call   807e530 <inet_addr@plt>
 8483e17:	c9                   	leave
 8483e18:	c3                   	ret

```

```c
// CUdpHandler::InetAddr @ 0x8483e06

/* CUdpHandler::InetAddr(char const*) const */

void __thiscall CUdpHandler::InetAddr(CUdpHandler *this,char *param_1)

{
  inet_addr(param_1);
  return;
}

```

---

## InitClientSocket

```asm
// === 0848369a CUdpHandler::InitClientSocket  [0x0848369a-0x8483731] ===
 848369a:	55                   	push   %ebp
 848369b:	89 e5                	mov    %esp,%ebp
 848369d:	83 ec 38             	sub    $0x38,%esp
 84836a0:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 84836a7:	00 
 84836a8:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84836af:	00 
 84836b0:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 84836b7:	e8 f4 a3 bf ff       	call   807dab0 <socket@plt>
 84836bc:	8b 55 08             	mov    0x8(%ebp),%edx
 84836bf:	89 42 04             	mov    %eax,0x4(%edx)
 84836c2:	8b 45 08             	mov    0x8(%ebp),%eax
 84836c5:	8b 40 04             	mov    0x4(%eax),%eax
 84836c8:	83 f8 ff             	cmp    $0xffffffff,%eax
 84836cb:	75 22                	jne    84836ef <_ZN11CUdpHandler16InitClientSocketEv+0x55>
 84836cd:	e8 a3 07 00 00       	call   8483e75 <_Z8getErrnov>
 84836d2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84836d5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84836d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84836dc:	c7 04 24 e0 2f c7 08 	movl   $0x8c72fe0,(%esp)
 84836e3:	e8 78 a4 bf ff       	call   807db60 <printf@plt>
 84836e8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 84836ed:	eb 41                	jmp    8483730 <_ZN11CUdpHandler16InitClientSocketEv+0x96>
 84836ef:	c7 45 ec 0a 00 00 00 	movl   $0xa,-0x14(%ebp)
 84836f6:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84836fd:	8b 45 08             	mov    0x8(%ebp),%eax
 8483700:	8b 40 04             	mov    0x4(%eax),%eax
 8483703:	c7 44 24 10 08 00 00 	movl   $0x8,0x10(%esp)
 848370a:	00 
 848370b:	8d 55 ec             	lea    -0x14(%ebp),%edx
 848370e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8483712:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8483719:	00 
 848371a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8483721:	00 
 8483722:	89 04 24             	mov    %eax,(%esp)
 8483725:	e8 76 ab bf ff       	call   807e2a0 <setsockopt@plt>
 848372a:	8b 45 08             	mov    0x8(%ebp),%eax
 848372d:	8b 40 04             	mov    0x4(%eax),%eax
 8483730:	c9                   	leave
 8483731:	c3                   	ret

```

```c
// CUdpHandler::InitClientSocket @ 0x848369a

/* CUdpHandler::InitClientSocket() */

undefined4 __thiscall CUdpHandler::InitClientSocket(CUdpHandler *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = socket(2,2,0x11);
  *(int *)(this + 4) = iVar1;
  if (*(int *)(this + 4) == -1) {
    local_10 = getErrno();
    printf("Could not create a UDP socket : %d\n",local_10);
    uVar2 = 0xffffffff;
  }
  else {
    local_18 = 10;
    local_14 = 0;
    setsockopt(*(int *)(this + 4),1,0x14,&local_18,8);
    uVar2 = *(undefined4 *)(this + 4);
  }
  return uVar2;
}

```

---

## InitServerSocket

```asm
// === 08483530 CUdpHandler::InitServerSocket  [0x08483530-0x8483699] ===
 8483530:	55                   	push   %ebp
 8483531:	89 e5                	mov    %esp,%ebp
 8483533:	83 ec 48             	sub    $0x48,%esp
 8483536:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 848353d:	00 
 848353e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8483545:	00 
 8483546:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 848354d:	e8 5e a5 bf ff       	call   807dab0 <socket@plt>
 8483552:	8b 55 08             	mov    0x8(%ebp),%edx
 8483555:	89 02                	mov    %eax,(%edx)
 8483557:	8b 45 08             	mov    0x8(%ebp),%eax
 848355a:	8b 00                	mov    (%eax),%eax
 848355c:	83 f8 ff             	cmp    $0xffffffff,%eax
 848355f:	75 25                	jne    8483586 <_ZN11CUdpHandler16InitServerSocketEi+0x56>
 8483561:	e8 0f 09 00 00       	call   8483e75 <_Z8getErrnov>
 8483566:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8483569:	8b 45 f4             	mov    -0xc(%ebp),%eax
 848356c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8483570:	c7 04 24 e0 2f c7 08 	movl   $0x8c72fe0,(%esp)
 8483577:	e8 e4 a5 bf ff       	call   807db60 <printf@plt>
 848357c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8483581:	e9 12 01 00 00       	jmp    8483698 <_ZN11CUdpHandler16InitServerSocketEi+0x168>
 8483586:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8483589:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8483590:	00 
 8483591:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8483598:	00 
 8483599:	89 04 24             	mov    %eax,(%esp)
 848359c:	e8 1f a7 bf ff       	call   807dcc0 <memset@plt>
 84835a1:	66 c7 45 e4 02 00    	movw   $0x2,-0x1c(%ebp)
 84835a7:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 84835ae:	e8 5d a5 bf ff       	call   807db10 <htonl@plt>
 84835b3:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84835b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84835b9:	0f b7 c0             	movzwl %ax,%eax
 84835bc:	89 04 24             	mov    %eax,(%esp)
 84835bf:	e8 bc b0 bf ff       	call   807e680 <htons@plt>
 84835c4:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 84835c8:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 84835cb:	8b 45 08             	mov    0x8(%ebp),%eax
 84835ce:	8b 00                	mov    (%eax),%eax
 84835d0:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 84835d7:	00 
 84835d8:	89 54 24 04          	mov    %edx,0x4(%esp)
 84835dc:	89 04 24             	mov    %eax,(%esp)
 84835df:	e8 6c b1 bf ff       	call   807e750 <bind@plt>
 84835e4:	85 c0                	test   %eax,%eax
 84835e6:	0f 95 c0             	setne  %al
 84835e9:	84 c0                	test   %al,%al
 84835eb:	74 6c                	je     8483659 <_ZN11CUdpHandler16InitServerSocketEi+0x129>
 84835ed:	e8 83 08 00 00       	call   8483e75 <_Z8getErrnov>
 84835f2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84835f5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84835f8:	83 f8 62             	cmp    $0x62,%eax
 84835fb:	74 0b                	je     8483608 <_ZN11CUdpHandler16InitServerSocketEi+0xd8>
 84835fd:	83 f8 63             	cmp    $0x63,%eax
 8483600:	74 1b                	je     848361d <_ZN11CUdpHandler16InitServerSocketEi+0xed>
 8483602:	85 c0                	test   %eax,%eax
 8483604:	74 49                	je     848364f <_ZN11CUdpHandler16InitServerSocketEi+0x11f>
 8483606:	eb 23                	jmp    848362b <_ZN11CUdpHandler16InitServerSocketEi+0xfb>
 8483608:	8b 45 0c             	mov    0xc(%ebp),%eax
 848360b:	89 44 24 04          	mov    %eax,0x4(%esp)
 848360f:	c7 04 24 04 30 c7 08 	movl   $0x8c73004,(%esp)
 8483616:	e8 45 a5 bf ff       	call   807db60 <printf@plt>
 848361b:	eb 33                	jmp    8483650 <_ZN11CUdpHandler16InitServerSocketEi+0x120>
 848361d:	c7 04 24 2c 30 c7 08 	movl   $0x8c7302c,(%esp)
 8483624:	e8 47 af bf ff       	call   807e570 <puts@plt>
 8483629:	eb 25                	jmp    8483650 <_ZN11CUdpHandler16InitServerSocketEi+0x120>
 848362b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 848362e:	89 04 24             	mov    %eax,(%esp)
 8483631:	e8 fa a0 bf ff       	call   807d730 <strerror@plt>
 8483636:	89 44 24 08          	mov    %eax,0x8(%esp)
 848363a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 848363d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8483641:	c7 04 24 4c 30 c7 08 	movl   $0x8c7304c,(%esp)
 8483648:	e8 13 a5 bf ff       	call   807db60 <printf@plt>
 848364d:	eb 01                	jmp    8483650 <_ZN11CUdpHandler16InitServerSocketEi+0x120>
 848364f:	90                   	nop
 8483650:	8b 45 08             	mov    0x8(%ebp),%eax
 8483653:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%eax)
 8483659:	c7 45 dc 0a 00 00 00 	movl   $0xa,-0x24(%ebp)
 8483660:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8483667:	8b 45 08             	mov    0x8(%ebp),%eax
 848366a:	8b 00                	mov    (%eax),%eax
 848366c:	c7 44 24 10 08 00 00 	movl   $0x8,0x10(%esp)
 8483673:	00 
 8483674:	8d 55 dc             	lea    -0x24(%ebp),%edx
 8483677:	89 54 24 0c          	mov    %edx,0xc(%esp)
 848367b:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8483682:	00 
 8483683:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 848368a:	00 
 848368b:	89 04 24             	mov    %eax,(%esp)
 848368e:	e8 0d ac bf ff       	call   807e2a0 <setsockopt@plt>
 8483693:	8b 45 08             	mov    0x8(%ebp),%eax
 8483696:	8b 00                	mov    (%eax),%eax
 8483698:	c9                   	leave
 8483699:	c3                   	ret

```

```c
// CUdpHandler::InitServerSocket @ 0x8483530

/* CUdpHandler::InitServerSocket(int) */

undefined4 __thiscall CUdpHandler::InitServerSocket(CUdpHandler *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 local_28;
  undefined4 local_24;
  sockaddr local_20;
  int local_10;
  
  iVar1 = socket(2,2,0x11);
  *(int *)this = iVar1;
  if (*(int *)this == -1) {
    local_10 = getErrno();
    printf("Could not create a UDP socket : %d\n",local_10);
    uVar2 = 0xffffffff;
  }
  else {
    memset(&local_20,0,0x10);
    local_20.sa_family = 2;
    local_20.sa_data._2_4_ = htonl(0);
    local_20.sa_data._0_2_ = htons((uint16_t)param_1);
    iVar1 = bind(*(int *)this,&local_20,0x10);
    if (iVar1 != 0) {
      local_10 = getErrno();
      if (local_10 == 0x62) {
        printf("Port %d for receiving UDP is in use\n",param_1);
      }
      else if (local_10 == 99) {
        puts("Cannot assign requested address");
      }
      else if (local_10 != 0) {
        pcVar3 = strerror(local_10);
        printf("Could not bind UDP receive port. Error= %d , strerror = %s\n",local_10,pcVar3);
      }
      *(undefined4 *)this = 0xffffffff;
    }
    local_28 = 10;
    local_24 = 0;
    setsockopt(*(int *)this,1,0x14,&local_28,8);
    uVar2 = *(undefined4 *)this;
  }
  return uVar2;
}

```

---

## RecvFromClient

```asm
// === 08483732 CUdpHandler::RecvFromClient  [0x08483732-0x8483845] ===
 8483732:	55                   	push   %ebp
 8483733:	89 e5                	mov    %esp,%ebp
 8483735:	53                   	push   %ebx
 8483736:	83 ec 44             	sub    $0x44,%esp
 8483739:	8b 45 08             	mov    0x8(%ebp),%eax
 848373c:	8b 00                	mov    (%eax),%eax
 848373e:	83 f8 ff             	cmp    $0xffffffff,%eax
 8483741:	75 0a                	jne    848374d <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x1b>
 8483743:	b8 00 00 00 00       	mov    $0x0,%eax
 8483748:	e9 f2 00 00 00       	jmp    848383f <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x10d>
 848374d:	c7 45 e0 10 00 00 00 	movl   $0x10,-0x20(%ebp)
 8483754:	8d 5d e0             	lea    -0x20(%ebp),%ebx
 8483757:	8d 4d e4             	lea    -0x1c(%ebp),%ecx
 848375a:	8b 45 10             	mov    0x10(%ebp),%eax
 848375d:	8b 00                	mov    (%eax),%eax
 848375f:	89 c2                	mov    %eax,%edx
 8483761:	8b 45 08             	mov    0x8(%ebp),%eax
 8483764:	8b 00                	mov    (%eax),%eax
 8483766:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 848376a:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 848376e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8483775:	00 
 8483776:	89 54 24 08          	mov    %edx,0x8(%esp)
 848377a:	8b 55 0c             	mov    0xc(%ebp),%edx
 848377d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8483781:	89 04 24             	mov    %eax,(%esp)
 8483784:	e8 87 a1 bf ff       	call   807d910 <recvfrom@plt>
 8483789:	8b 55 10             	mov    0x10(%ebp),%edx
 848378c:	89 02                	mov    %eax,(%edx)
 848378e:	8b 45 10             	mov    0x10(%ebp),%eax
 8483791:	8b 00                	mov    (%eax),%eax
 8483793:	83 f8 ff             	cmp    $0xffffffff,%eax
 8483796:	75 4d                	jne    84837e5 <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0xb3>
 8483798:	e8 d8 06 00 00       	call   8483e75 <_Z8getErrnov>
 848379d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84837a0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84837a3:	83 f8 58             	cmp    $0x58,%eax
 84837a6:	74 07                	je     84837af <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x7d>
 84837a8:	83 f8 68             	cmp    $0x68,%eax
 84837ab:	74 10                	je     84837bd <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x8b>
 84837ad:	eb 1c                	jmp    84837cb <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x99>
 84837af:	c7 04 24 88 30 c7 08 	movl   $0x8c73088,(%esp)
 84837b6:	e8 b5 ad bf ff       	call   807e570 <puts@plt>
 84837bb:	eb 21                	jmp    84837de <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0xac>
 84837bd:	c7 04 24 a0 30 c7 08 	movl   $0x8c730a0,(%esp)
 84837c4:	e8 a7 ad bf ff       	call   807e570 <puts@plt>
 84837c9:	eb 13                	jmp    84837de <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0xac>
 84837cb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84837ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 84837d2:	c7 04 24 cc 30 c7 08 	movl   $0x8c730cc,(%esp)
 84837d9:	e8 82 a3 bf ff       	call   807db60 <printf@plt>
 84837de:	b8 00 00 00 00       	mov    $0x0,%eax
 84837e3:	eb 5a                	jmp    848383f <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x10d>
 84837e5:	8b 45 10             	mov    0x10(%ebp),%eax
 84837e8:	8b 00                	mov    (%eax),%eax
 84837ea:	85 c0                	test   %eax,%eax
 84837ec:	7f 1c                	jg     848380a <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0xd8>
 84837ee:	8b 45 10             	mov    0x10(%ebp),%eax
 84837f1:	8b 00                	mov    (%eax),%eax
 84837f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84837f7:	c7 04 24 f0 30 c7 08 	movl   $0x8c730f0,(%esp)
 84837fe:	e8 5d a3 bf ff       	call   807db60 <printf@plt>
 8483803:	b8 00 00 00 00       	mov    $0x0,%eax
 8483808:	eb 35                	jmp    848383f <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x10d>
 848380a:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 848380e:	0f b7 c0             	movzwl %ax,%eax
 8483811:	89 04 24             	mov    %eax,(%esp)
 8483814:	e8 77 a6 bf ff       	call   807de90 <ntohs@plt>
 8483819:	8b 55 18             	mov    0x18(%ebp),%edx
 848381c:	66 89 02             	mov    %ax,(%edx)
 848381f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8483822:	89 04 24             	mov    %eax,(%esp)
 8483825:	e8 56 a3 bf ff       	call   807db80 <ntohl@plt>
 848382a:	8b 55 14             	mov    0x14(%ebp),%edx
 848382d:	89 02                	mov    %eax,(%edx)
 848382f:	8b 45 10             	mov    0x10(%ebp),%eax
 8483832:	8b 00                	mov    (%eax),%eax
 8483834:	03 45 0c             	add    0xc(%ebp),%eax
 8483837:	c6 00 00             	movb   $0x0,(%eax)
 848383a:	b8 01 00 00 00       	mov    $0x1,%eax
 848383f:	83 c4 44             	add    $0x44,%esp
 8483842:	5b                   	pop    %ebx
 8483843:	5d                   	pop    %ebp
 8483844:	c3                   	ret
 8483845:	90                   	nop

```

```c
// CUdpHandler::RecvFromClient @ 0x8483732

/* CUdpHandler::RecvFromClient(char*, int*, unsigned int*, unsigned short*) const */

undefined4 __thiscall
CUdpHandler::RecvFromClient
          (CUdpHandler *this,char *param_1,int *param_2,uint *param_3,ushort *param_4)

{
  uint16_t uVar1;
  undefined4 uVar2;
  ssize_t sVar3;
  uint32_t uVar4;
  socklen_t local_24;
  sockaddr local_20;
  int local_10;
  
  if (*(int *)this == -1) {
    uVar2 = 0;
  }
  else {
    local_24 = 0x10;
    sVar3 = recvfrom(*(int *)this,param_1,*param_2,0,&local_20,&local_24);
    *param_2 = sVar3;
    if (*param_2 == -1) {
      local_10 = getErrno();
      if (local_10 == 0x58) {
        puts("Error fd not a socket");
      }
      else if (local_10 == 0x68) {
        puts("Error connection reset - host not reachable");
      }
      else {
        printf("Hm! Time out Or Socket Error = %d\n",local_10);
      }
      uVar2 = 0;
    }
    else if (*param_2 < 1) {
      printf("Socket closed? Recv size = %d\n",*param_2);
      uVar2 = 0;
    }
    else {
      uVar1 = ntohs(local_20.sa_data._0_2_);
      *param_4 = uVar1;
      uVar4 = ntohl(local_20.sa_data._2_4_);
      *param_3 = uVar4;
      param_1[*param_2] = '\0';
      uVar2 = 1;
    }
  }
  return uVar2;
}

```

---

## RecvFromServer

```asm
// === 08483a52 CUdpHandler::RecvFromServer  [0x08483a52-0x8483b67] ===
 8483a52:	55                   	push   %ebp
 8483a53:	89 e5                	mov    %esp,%ebp
 8483a55:	53                   	push   %ebx
 8483a56:	83 ec 44             	sub    $0x44,%esp
 8483a59:	8b 45 08             	mov    0x8(%ebp),%eax
 8483a5c:	8b 40 04             	mov    0x4(%eax),%eax
 8483a5f:	83 f8 ff             	cmp    $0xffffffff,%eax
 8483a62:	75 0a                	jne    8483a6e <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x1c>
 8483a64:	b8 00 00 00 00       	mov    $0x0,%eax
 8483a69:	e9 f3 00 00 00       	jmp    8483b61 <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x10f>
 8483a6e:	c7 45 e0 10 00 00 00 	movl   $0x10,-0x20(%ebp)
 8483a75:	8d 5d e0             	lea    -0x20(%ebp),%ebx
 8483a78:	8d 4d e4             	lea    -0x1c(%ebp),%ecx
 8483a7b:	8b 45 10             	mov    0x10(%ebp),%eax
 8483a7e:	8b 00                	mov    (%eax),%eax
 8483a80:	89 c2                	mov    %eax,%edx
 8483a82:	8b 45 08             	mov    0x8(%ebp),%eax
 8483a85:	8b 40 04             	mov    0x4(%eax),%eax
 8483a88:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8483a8c:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8483a90:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8483a97:	00 
 8483a98:	89 54 24 08          	mov    %edx,0x8(%esp)
 8483a9c:	8b 55 0c             	mov    0xc(%ebp),%edx
 8483a9f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8483aa3:	89 04 24             	mov    %eax,(%esp)
 8483aa6:	e8 65 9e bf ff       	call   807d910 <recvfrom@plt>
 8483aab:	8b 55 10             	mov    0x10(%ebp),%edx
 8483aae:	89 02                	mov    %eax,(%edx)
 8483ab0:	8b 45 10             	mov    0x10(%ebp),%eax
 8483ab3:	8b 00                	mov    (%eax),%eax
 8483ab5:	83 f8 ff             	cmp    $0xffffffff,%eax
 8483ab8:	75 4d                	jne    8483b07 <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0xb5>
 8483aba:	e8 b6 03 00 00       	call   8483e75 <_Z8getErrnov>
 8483abf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8483ac2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8483ac5:	83 f8 58             	cmp    $0x58,%eax
 8483ac8:	74 07                	je     8483ad1 <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x7f>
 8483aca:	83 f8 68             	cmp    $0x68,%eax
 8483acd:	74 10                	je     8483adf <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x8d>
 8483acf:	eb 1c                	jmp    8483aed <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x9b>
 8483ad1:	c7 04 24 88 30 c7 08 	movl   $0x8c73088,(%esp)
 8483ad8:	e8 93 aa bf ff       	call   807e570 <puts@plt>
 8483add:	eb 21                	jmp    8483b00 <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0xae>
 8483adf:	c7 04 24 a0 30 c7 08 	movl   $0x8c730a0,(%esp)
 8483ae6:	e8 85 aa bf ff       	call   807e570 <puts@plt>
 8483aeb:	eb 13                	jmp    8483b00 <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0xae>
 8483aed:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8483af0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8483af4:	c7 04 24 cc 30 c7 08 	movl   $0x8c730cc,(%esp)
 8483afb:	e8 60 a0 bf ff       	call   807db60 <printf@plt>
 8483b00:	b8 00 00 00 00       	mov    $0x0,%eax
 8483b05:	eb 5a                	jmp    8483b61 <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x10f>
 8483b07:	8b 45 10             	mov    0x10(%ebp),%eax
 8483b0a:	8b 00                	mov    (%eax),%eax
 8483b0c:	85 c0                	test   %eax,%eax
 8483b0e:	7f 1c                	jg     8483b2c <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0xda>
 8483b10:	8b 45 10             	mov    0x10(%ebp),%eax
 8483b13:	8b 00                	mov    (%eax),%eax
 8483b15:	89 44 24 04          	mov    %eax,0x4(%esp)
 8483b19:	c7 04 24 f0 30 c7 08 	movl   $0x8c730f0,(%esp)
 8483b20:	e8 3b a0 bf ff       	call   807db60 <printf@plt>
 8483b25:	b8 00 00 00 00       	mov    $0x0,%eax
 8483b2a:	eb 35                	jmp    8483b61 <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x10f>
 8483b2c:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 8483b30:	0f b7 c0             	movzwl %ax,%eax
 8483b33:	89 04 24             	mov    %eax,(%esp)
 8483b36:	e8 55 a3 bf ff       	call   807de90 <ntohs@plt>
 8483b3b:	8b 55 18             	mov    0x18(%ebp),%edx
 8483b3e:	66 89 02             	mov    %ax,(%edx)
 8483b41:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8483b44:	89 04 24             	mov    %eax,(%esp)
 8483b47:	e8 34 a0 bf ff       	call   807db80 <ntohl@plt>
 8483b4c:	8b 55 14             	mov    0x14(%ebp),%edx
 8483b4f:	89 02                	mov    %eax,(%edx)
 8483b51:	8b 45 10             	mov    0x10(%ebp),%eax
 8483b54:	8b 00                	mov    (%eax),%eax
 8483b56:	03 45 0c             	add    0xc(%ebp),%eax
 8483b59:	c6 00 00             	movb   $0x0,(%eax)
 8483b5c:	b8 01 00 00 00       	mov    $0x1,%eax
 8483b61:	83 c4 44             	add    $0x44,%esp
 8483b64:	5b                   	pop    %ebx
 8483b65:	5d                   	pop    %ebp
 8483b66:	c3                   	ret
 8483b67:	90                   	nop

```

```c
// CUdpHandler::RecvFromServer @ 0x8483a52

/* CUdpHandler::RecvFromServer(char*, int*, unsigned int*, unsigned short*) const */

undefined4 __thiscall
CUdpHandler::RecvFromServer
          (CUdpHandler *this,char *param_1,int *param_2,uint *param_3,ushort *param_4)

{
  uint16_t uVar1;
  undefined4 uVar2;
  ssize_t sVar3;
  uint32_t uVar4;
  socklen_t local_24;
  sockaddr local_20;
  int local_10;
  
  if (*(int *)(this + 4) == -1) {
    uVar2 = 0;
  }
  else {
    local_24 = 0x10;
    sVar3 = recvfrom(*(int *)(this + 4),param_1,*param_2,0,&local_20,&local_24);
    *param_2 = sVar3;
    if (*param_2 == -1) {
      local_10 = getErrno();
      if (local_10 == 0x58) {
        puts("Error fd not a socket");
      }
      else if (local_10 == 0x68) {
        puts("Error connection reset - host not reachable");
      }
      else {
        printf("Hm! Time out Or Socket Error = %d\n",local_10);
      }
      uVar2 = 0;
    }
    else if (*param_2 < 1) {
      printf("Socket closed? Recv size = %d\n",*param_2);
      uVar2 = 0;
    }
    else {
      uVar1 = ntohs(local_20.sa_data._0_2_);
      *param_4 = uVar1;
      uVar4 = ntohl(local_20.sa_data._2_4_);
      *param_3 = uVar4;
      param_1[*param_2] = '\0';
      uVar2 = 1;
    }
  }
  return uVar2;
}

```

---

## SendToClient

```asm
// === 08483846 CUdpHandler::SendToClient  [0x08483846-0x8483a51] ===
 8483846:	55                   	push   %ebp
 8483847:	89 e5                	mov    %esp,%ebp
 8483849:	83 ec 68             	sub    $0x68,%esp
 848384c:	8b 45 14             	mov    0x14(%ebp),%eax
 848384f:	66 89 45 c4          	mov    %ax,-0x3c(%ebp)
 8483853:	8b 45 08             	mov    0x8(%ebp),%eax
 8483856:	8b 40 04             	mov    0x4(%eax),%eax
 8483859:	83 f8 ff             	cmp    $0xffffffff,%eax
 848385c:	75 50                	jne    84838ae <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x68>
 848385e:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8483865:	00 
 8483866:	c7 44 24 08 e1 00 00 	movl   $0xe1,0x8(%esp)
 848386d:	00 
 848386e:	c7 44 24 04 fd 37 c7 	movl   $0x8c737fd,0x4(%esp)
 8483875:	08 
 8483876:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8483879:	89 04 24             	mov    %eax,(%esp)
 848387c:	e8 97 be 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8483881:	c7 44 24 0c e1 00 00 	movl   $0xe1,0xc(%esp)
 8483888:	00 
 8483889:	c7 44 24 08 fd 37 c7 	movl   $0x8c737fd,0x8(%esp)
 8483890:	08 
 8483891:	c7 44 24 04 0f 31 c7 	movl   $0x8c7310f,0x4(%esp)
 8483898:	08 
 8483899:	8d 45 e0             	lea    -0x20(%ebp),%eax
 848389c:	89 04 24             	mov    %eax,(%esp)
 848389f:	e8 e4 be 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84838a4:	b8 00 00 00 00       	mov    $0x0,%eax
 84838a9:	e9 a1 01 00 00       	jmp    8483a4f <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x209>
 84838ae:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 84838b2:	75 10                	jne    84838c4 <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x7e>
 84838b4:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 84838b8:	75 0a                	jne    84838c4 <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x7e>
 84838ba:	b8 00 00 00 00       	mov    $0x0,%eax
 84838bf:	e9 8b 01 00 00       	jmp    8483a4f <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x209>
 84838c4:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 84838c8:	74 0e                	je     84838d8 <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x92>
 84838ca:	8b 45 18             	mov    0x18(%ebp),%eax
 84838cd:	89 04 24             	mov    %eax,(%esp)
 84838d0:	e8 5b ac bf ff       	call   807e530 <inet_addr@plt>
 84838d5:	89 45 1c             	mov    %eax,0x1c(%ebp)
 84838d8:	8b 45 08             	mov    0x8(%ebp),%eax
 84838db:	8b 00                	mov    (%eax),%eax
 84838dd:	83 f8 ff             	cmp    $0xffffffff,%eax
 84838e0:	75 0a                	jne    84838ec <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0xa6>
 84838e2:	b8 00 00 00 00       	mov    $0x0,%eax
 84838e7:	e9 63 01 00 00       	jmp    8483a4f <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x209>
 84838ec:	66 83 7d c4 00       	cmpw   $0x0,-0x3c(%ebp)
 84838f1:	75 32                	jne    8483925 <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0xdf>
 84838f3:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 84838f7:	0f 85 9c 00 00 00    	jne    8483999 <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x153>
 84838fd:	8b 55 10             	mov    0x10(%ebp),%edx
 8483900:	8b 45 08             	mov    0x8(%ebp),%eax
 8483903:	8b 00                	mov    (%eax),%eax
 8483905:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 848390c:	00 
 848390d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8483911:	8b 55 0c             	mov    0xc(%ebp),%edx
 8483914:	89 54 24 04          	mov    %edx,0x4(%esp)
 8483918:	89 04 24             	mov    %eax,(%esp)
 848391b:	e8 20 a2 bf ff       	call   807db40 <send@plt>
 8483920:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8483923:	eb 74                	jmp    8483999 <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x153>
 8483925:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 848392c:	00 
 848392d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8483934:	00 
 8483935:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8483938:	89 04 24             	mov    %eax,(%esp)
 848393b:	e8 80 a3 bf ff       	call   807dcc0 <memset@plt>
 8483940:	66 c7 45 d0 02 00    	movw   $0x2,-0x30(%ebp)
 8483946:	0f b7 45 c4          	movzwl -0x3c(%ebp),%eax
 848394a:	89 04 24             	mov    %eax,(%esp)
 848394d:	e8 2e ad bf ff       	call   807e680 <htons@plt>
 8483952:	66 89 45 d2          	mov    %ax,-0x2e(%ebp)
 8483956:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8483959:	89 04 24             	mov    %eax,(%esp)
 848395c:	e8 1f a2 bf ff       	call   807db80 <ntohl@plt>
 8483961:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8483964:	8d 4d d0             	lea    -0x30(%ebp),%ecx
 8483967:	8b 55 10             	mov    0x10(%ebp),%edx
 848396a:	8b 45 08             	mov    0x8(%ebp),%eax
 848396d:	8b 00                	mov    (%eax),%eax
 848396f:	c7 44 24 14 10 00 00 	movl   $0x10,0x14(%esp)
 8483976:	00 
 8483977:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 848397b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8483982:	00 
 8483983:	89 54 24 08          	mov    %edx,0x8(%esp)
 8483987:	8b 55 0c             	mov    0xc(%ebp),%edx
 848398a:	89 54 24 04          	mov    %edx,0x4(%esp)
 848398e:	89 04 24             	mov    %eax,(%esp)
 8483991:	e8 4a a8 bf ff       	call   807e1e0 <sendto@plt>
 8483996:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8483999:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 848399d:	75 69                	jne    8483a08 <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x1c2>
 848399f:	e8 d1 04 00 00       	call   8483e75 <_Z8getErrnov>
 84839a4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84839a7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84839aa:	83 f8 61             	cmp    $0x61,%eax
 84839ad:	74 22                	je     84839d1 <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x18b>
 84839af:	83 f8 61             	cmp    $0x61,%eax
 84839b2:	7c 2b                	jl     84839df <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x199>
 84839b4:	83 e8 6f             	sub    $0x6f,%eax
 84839b7:	83 f8 02             	cmp    $0x2,%eax
 84839ba:	77 23                	ja     84839df <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x199>
 84839bc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84839bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 84839c3:	c7 04 24 18 31 c7 08 	movl   $0x8c73118,(%esp)
 84839ca:	e8 91 a1 bf ff       	call   807db60 <printf@plt>
 84839cf:	eb 30                	jmp    8483a01 <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x1bb>
 84839d1:	c7 04 24 4d 31 c7 08 	movl   $0x8c7314d,(%esp)
 84839d8:	e8 93 ab bf ff       	call   807e570 <puts@plt>
 84839dd:	eb 22                	jmp    8483a01 <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x1bb>
 84839df:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84839e2:	89 04 24             	mov    %eax,(%esp)
 84839e5:	e8 46 9d bf ff       	call   807d730 <strerror@plt>
 84839ea:	89 44 24 08          	mov    %eax,0x8(%esp)
 84839ee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84839f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84839f5:	c7 04 24 68 31 c7 08 	movl   $0x8c73168,(%esp)
 84839fc:	e8 5f a1 bf ff       	call   807db60 <printf@plt>
 8483a01:	b8 00 00 00 00       	mov    $0x0,%eax
 8483a06:	eb 47                	jmp    8483a4f <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x209>
 8483a08:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8483a0c:	75 13                	jne    8483a21 <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x1db>
 8483a0e:	c7 04 24 8a 31 c7 08 	movl   $0x8c7318a,(%esp)
 8483a15:	e8 56 ab bf ff       	call   807e570 <puts@plt>
 8483a1a:	b8 00 00 00 00       	mov    $0x0,%eax
 8483a1f:	eb 2e                	jmp    8483a4f <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x209>
 8483a21:	8b 45 10             	mov    0x10(%ebp),%eax
 8483a24:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8483a27:	74 21                	je     8483a4a <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x204>
 8483a29:	8b 45 10             	mov    0x10(%ebp),%eax
 8483a2c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8483a30:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8483a33:	89 44 24 04          	mov    %eax,0x4(%esp)
 8483a37:	c7 04 24 9f 31 c7 08 	movl   $0x8c7319f,(%esp)
 8483a3e:	e8 1d a1 bf ff       	call   807db60 <printf@plt>
 8483a43:	b8 00 00 00 00       	mov    $0x0,%eax
 8483a48:	eb 05                	jmp    8483a4f <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x209>
 8483a4a:	b8 01 00 00 00       	mov    $0x1,%eax
 8483a4f:	c9                   	leave
 8483a50:	c3                   	ret
 8483a51:	90                   	nop

```

```c
// CUdpHandler::SendToClient @ 0x8483846

/* CUdpHandler::SendToClient(char*, int, unsigned short, char const*, unsigned int) const */

undefined4 __thiscall
CUdpHandler::SendToClient
          (CUdpHandler *this,char *param_1,int param_2,ushort param_3,char *param_4,uint param_5)

{
  undefined4 uVar1;
  char *pcVar2;
  sockaddr local_34;
  cMyTrace local_24 [16];
  int local_14;
  int local_10;
  
  if (*(int *)(this + 4) == -1) {
    cMyTrace::cMyTrace(local_24,"SendToClient",0xe1,5);
    cMyTrace::operator()(local_24,"[%s][%d]","SendToClient",0xe1);
    uVar1 = 0;
  }
  else if ((param_4 == (char *)0x0) && (param_5 == 0)) {
    uVar1 = 0;
  }
  else {
    if (param_4 != (char *)0x0) {
      param_5 = inet_addr(param_4);
    }
    if (*(int *)this == -1) {
      uVar1 = 0;
    }
    else {
      if (param_3 == 0) {
        if (param_5 == 0) {
          local_14 = ::send(*(int *)this,param_1,param_2,0);
        }
      }
      else {
        memset(&local_34,0,0x10);
        local_34.sa_family = 2;
        local_34.sa_data._0_2_ = htons(param_3);
        local_34.sa_data._2_4_ = ntohl(param_5);
        local_14 = sendto(*(int *)this,param_1,param_2,0,&local_34,0x10);
      }
      if (local_14 == -1) {
        local_10 = getErrno();
        if (local_10 == 0x61) {
          puts("err EAFNOSUPPORT in send");
        }
        else if ((local_10 < 0x61) || (2 < local_10 - 0x6fU)) {
          pcVar2 = strerror(local_10);
          printf("err = %d , strerror = %s in send\n",local_10,pcVar2);
        }
        else {
          printf("Error( ECONNREFUSED, EHOSTDOWN, EHOSTUNREACH ) = %d\n",local_10);
        }
        uVar1 = 0;
      }
      else if (local_14 == 0) {
        puts("no data sent in send");
        uVar1 = 0;
      }
      else if (param_2 == local_14) {
        uVar1 = 1;
      }
      else {
        printf("Only %s out of %d bytes sent\n",local_14,param_2);
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

```

---

## SendToServer

```asm
// === 08483b68 CUdpHandler::SendToServer  [0x08483b68-0x8483e05] ===
 8483b68:	55                   	push   %ebp
 8483b69:	89 e5                	mov    %esp,%ebp
 8483b6b:	81 ec b8 00 00 00    	sub    $0xb8,%esp
 8483b71:	8b 45 14             	mov    0x14(%ebp),%eax
 8483b74:	66 89 85 74 ff ff ff 	mov    %ax,-0x8c(%ebp)
 8483b7b:	8b 45 08             	mov    0x8(%ebp),%eax
 8483b7e:	8b 40 04             	mov    0x4(%eax),%eax
 8483b81:	83 f8 ff             	cmp    $0xffffffff,%eax
 8483b84:	75 50                	jne    8483bd6 <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x6e>
 8483b86:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8483b8d:	00 
 8483b8e:	c7 44 24 08 94 01 00 	movl   $0x194,0x8(%esp)
 8483b95:	00 
 8483b96:	c7 44 24 04 f0 37 c7 	movl   $0x8c737f0,0x4(%esp)
 8483b9d:	08 
 8483b9e:	8d 45 90             	lea    -0x70(%ebp),%eax
 8483ba1:	89 04 24             	mov    %eax,(%esp)
 8483ba4:	e8 6f bb 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8483ba9:	c7 44 24 0c 94 01 00 	movl   $0x194,0xc(%esp)
 8483bb0:	00 
 8483bb1:	c7 44 24 08 f0 37 c7 	movl   $0x8c737f0,0x8(%esp)
 8483bb8:	08 
 8483bb9:	c7 44 24 04 0f 31 c7 	movl   $0x8c7310f,0x4(%esp)
 8483bc0:	08 
 8483bc1:	8d 45 90             	lea    -0x70(%ebp),%eax
 8483bc4:	89 04 24             	mov    %eax,(%esp)
 8483bc7:	e8 bc bb 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8483bcc:	b8 00 00 00 00       	mov    $0x0,%eax
 8483bd1:	e9 2e 02 00 00       	jmp    8483e04 <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x29c>
 8483bd6:	8b 45 08             	mov    0x8(%ebp),%eax
 8483bd9:	8b 40 04             	mov    0x4(%eax),%eax
 8483bdc:	83 f8 ff             	cmp    $0xffffffff,%eax
 8483bdf:	75 0a                	jne    8483beb <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x83>
 8483be1:	b8 00 00 00 00       	mov    $0x0,%eax
 8483be6:	e9 19 02 00 00       	jmp    8483e04 <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x29c>
 8483beb:	66 83 bd 74 ff ff ff 	cmpw   $0x0,-0x8c(%ebp)
 8483bf2:	00 
 8483bf3:	75 33                	jne    8483c28 <_ZNK11CUdpHandler12SendToServerEPcitPKc+0xc0>
 8483bf5:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 8483bf9:	0f 85 a1 00 00 00    	jne    8483ca0 <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x138>
 8483bff:	8b 55 10             	mov    0x10(%ebp),%edx
 8483c02:	8b 45 08             	mov    0x8(%ebp),%eax
 8483c05:	8b 40 04             	mov    0x4(%eax),%eax
 8483c08:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8483c0f:	00 
 8483c10:	89 54 24 08          	mov    %edx,0x8(%esp)
 8483c14:	8b 55 0c             	mov    0xc(%ebp),%edx
 8483c17:	89 54 24 04          	mov    %edx,0x4(%esp)
 8483c1b:	89 04 24             	mov    %eax,(%esp)
 8483c1e:	e8 1d 9f bf ff       	call   807db40 <send@plt>
 8483c23:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8483c26:	eb 78                	jmp    8483ca0 <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x138>
 8483c28:	8d 45 80             	lea    -0x80(%ebp),%eax
 8483c2b:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8483c32:	00 
 8483c33:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8483c3a:	00 
 8483c3b:	89 04 24             	mov    %eax,(%esp)
 8483c3e:	e8 7d a0 bf ff       	call   807dcc0 <memset@plt>
 8483c43:	66 c7 45 80 02 00    	movw   $0x2,-0x80(%ebp)
 8483c49:	0f b7 85 74 ff ff ff 	movzwl -0x8c(%ebp),%eax
 8483c50:	89 04 24             	mov    %eax,(%esp)
 8483c53:	e8 28 aa bf ff       	call   807e680 <htons@plt>
 8483c58:	66 89 45 82          	mov    %ax,-0x7e(%ebp)
 8483c5c:	8b 45 18             	mov    0x18(%ebp),%eax
 8483c5f:	89 04 24             	mov    %eax,(%esp)
 8483c62:	e8 c9 a8 bf ff       	call   807e530 <inet_addr@plt>
 8483c67:	89 45 84             	mov    %eax,-0x7c(%ebp)
 8483c6a:	8d 4d 80             	lea    -0x80(%ebp),%ecx
 8483c6d:	8b 55 10             	mov    0x10(%ebp),%edx
 8483c70:	8b 45 08             	mov    0x8(%ebp),%eax
 8483c73:	8b 40 04             	mov    0x4(%eax),%eax
 8483c76:	c7 44 24 14 10 00 00 	movl   $0x10,0x14(%esp)
 8483c7d:	00 
 8483c7e:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8483c82:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8483c89:	00 
 8483c8a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8483c8e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8483c91:	89 54 24 04          	mov    %edx,0x4(%esp)
 8483c95:	89 04 24             	mov    %eax,(%esp)
 8483c98:	e8 43 a5 bf ff       	call   807e1e0 <sendto@plt>
 8483c9d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8483ca0:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 8483ca4:	0f 85 cd 00 00 00    	jne    8483d77 <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x20f>
 8483caa:	e8 c6 01 00 00       	call   8483e75 <_Z8getErrnov>
 8483caf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8483cb2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8483cb5:	83 f8 61             	cmp    $0x61,%eax
 8483cb8:	74 45                	je     8483cff <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x197>
 8483cba:	83 f8 61             	cmp    $0x61,%eax
 8483cbd:	7c 78                	jl     8483d37 <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x1cf>
 8483cbf:	83 e8 6f             	sub    $0x6f,%eax
 8483cc2:	83 f8 02             	cmp    $0x2,%eax
 8483cc5:	77 70                	ja     8483d37 <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x1cf>
 8483cc7:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8483cce:	00 
 8483ccf:	c7 44 24 08 ca 01 00 	movl   $0x1ca,0x8(%esp)
 8483cd6:	00 
 8483cd7:	c7 44 24 04 f0 37 c7 	movl   $0x8c737f0,0x4(%esp)
 8483cde:	08 
 8483cdf:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8483ce2:	89 04 24             	mov    %eax,(%esp)
 8483ce5:	e8 2e ba 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8483cea:	c7 44 24 04 c0 31 c7 	movl   $0x8c731c0,0x4(%esp)
 8483cf1:	08 
 8483cf2:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8483cf5:	89 04 24             	mov    %eax,(%esp)
 8483cf8:	e8 8b ba 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8483cfd:	eb 6e                	jmp    8483d6d <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x205>
 8483cff:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8483d06:	00 
 8483d07:	c7 44 24 08 d1 01 00 	movl   $0x1d1,0x8(%esp)
 8483d0e:	00 
 8483d0f:	c7 44 24 04 f0 37 c7 	movl   $0x8c737f0,0x4(%esp)
 8483d16:	08 
 8483d17:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8483d1a:	89 04 24             	mov    %eax,(%esp)
 8483d1d:	e8 f6 b9 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8483d22:	c7 44 24 04 f0 31 c7 	movl   $0x8c731f0,0x4(%esp)
 8483d29:	08 
 8483d2a:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8483d2d:	89 04 24             	mov    %eax,(%esp)
 8483d30:	e8 53 ba 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8483d35:	eb 36                	jmp    8483d6d <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x205>
 8483d37:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8483d3e:	00 
 8483d3f:	c7 44 24 08 d8 01 00 	movl   $0x1d8,0x8(%esp)
 8483d46:	00 
 8483d47:	c7 44 24 04 f0 37 c7 	movl   $0x8c737f0,0x4(%esp)
 8483d4e:	08 
 8483d4f:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8483d52:	89 04 24             	mov    %eax,(%esp)
 8483d55:	e8 be b9 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8483d5a:	c7 44 24 04 20 32 c7 	movl   $0x8c73220,0x4(%esp)
 8483d61:	08 
 8483d62:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8483d65:	89 04 24             	mov    %eax,(%esp)
 8483d68:	e8 1b ba 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8483d6d:	b8 00 00 00 00       	mov    $0x0,%eax
 8483d72:	e9 8d 00 00 00       	jmp    8483e04 <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x29c>
 8483d77:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8483d7b:	75 3d                	jne    8483dba <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x252>
 8483d7d:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8483d84:	00 
 8483d85:	c7 44 24 08 e2 01 00 	movl   $0x1e2,0x8(%esp)
 8483d8c:	00 
 8483d8d:	c7 44 24 04 f0 37 c7 	movl   $0x8c737f0,0x4(%esp)
 8483d94:	08 
 8483d95:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8483d98:	89 04 24             	mov    %eax,(%esp)
 8483d9b:	e8 78 b9 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8483da0:	c7 44 24 04 4c 32 c7 	movl   $0x8c7324c,0x4(%esp)
 8483da7:	08 
 8483da8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8483dab:	89 04 24             	mov    %eax,(%esp)
 8483dae:	e8 d5 b9 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8483db3:	b8 00 00 00 00       	mov    $0x0,%eax
 8483db8:	eb 4a                	jmp    8483e04 <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x29c>
 8483dba:	8b 45 10             	mov    0x10(%ebp),%eax
 8483dbd:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8483dc0:	74 3d                	je     8483dff <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x297>
 8483dc2:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8483dc9:	00 
 8483dca:	c7 44 24 08 ea 01 00 	movl   $0x1ea,0x8(%esp)
 8483dd1:	00 
 8483dd2:	c7 44 24 04 f0 37 c7 	movl   $0x8c737f0,0x4(%esp)
 8483dd9:	08 
 8483dda:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8483ddd:	89 04 24             	mov    %eax,(%esp)
 8483de0:	e8 33 b9 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8483de5:	c7 44 24 04 74 32 c7 	movl   $0x8c73274,0x4(%esp)
 8483dec:	08 
 8483ded:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8483df0:	89 04 24             	mov    %eax,(%esp)
 8483df3:	e8 90 b9 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8483df8:	b8 00 00 00 00       	mov    $0x0,%eax
 8483dfd:	eb 05                	jmp    8483e04 <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x29c>
 8483dff:	b8 01 00 00 00       	mov    $0x1,%eax
 8483e04:	c9                   	leave
 8483e05:	c3                   	ret

```

```c
// CUdpHandler::SendToServer @ 0x8483b68

/* CUdpHandler::SendToServer(char*, int, unsigned short, char const*) const */

undefined4 __thiscall
CUdpHandler::SendToServer(CUdpHandler *this,char *param_1,int param_2,ushort param_3,char *param_4)

{
  undefined4 uVar1;
  sockaddr local_84;
  cMyTrace local_74 [16];
  cMyTrace local_64 [16];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  int local_14;
  int local_10;
  
  if (*(int *)(this + 4) == -1) {
    cMyTrace::cMyTrace(local_74,"SendToServer",0x194,5);
    cMyTrace::operator()(local_74,"[%s][%d]","SendToServer",0x194);
    uVar1 = 0;
  }
  else if (*(int *)(this + 4) == -1) {
    uVar1 = 0;
  }
  else {
    if (param_3 == 0) {
      if (param_4 == (char *)0x0) {
        local_14 = ::send(*(int *)(this + 4),param_1,param_2,0);
      }
    }
    else {
      memset(&local_84,0,0x10);
      local_84.sa_family = 2;
      local_84.sa_data._0_2_ = htons(param_3);
      local_84.sa_data._2_4_ = inet_addr(param_4);
      local_14 = sendto(*(int *)(this + 4),param_1,param_2,0,&local_84,0x10);
    }
    if (local_14 == -1) {
      local_10 = getErrno();
      if (local_10 == 0x61) {
        cMyTrace::cMyTrace(local_54,"SendToServer",0x1d1,5);
        cMyTrace::operator()(local_54,"CUdpHandler::SendToServer Error: EAFNOSUPPORT");
      }
      else if ((local_10 < 0x61) || (2 < local_10 - 0x6fU)) {
        cMyTrace::cMyTrace(local_44,"SendToServer",0x1d8,5);
        cMyTrace::operator()(local_44,"CUdpHandler::SendToServer Error : other err");
      }
      else {
        cMyTrace::cMyTrace(local_64,"SendToServer",0x1ca,5);
        cMyTrace::operator()(local_64,"CUdpHandler::SendToServer Error: EHOSTUNREACH");
      }
      uVar1 = 0;
    }
    else if (local_14 == 0) {
      cMyTrace::cMyTrace(local_34,"SendToServer",0x1e2,5);
      cMyTrace::operator()(local_34,"CUdpHandler::SendToServer Error: 0 == s");
      uVar1 = 0;
    }
    else if (param_2 == local_14) {
      uVar1 = 1;
    }
    else {
      cMyTrace::cMyTrace(local_24,"SendToServer",0x1ea,5);
      cMyTrace::operator()(local_24,"CUdpHandler::SendToServer Error : len != s");
      uVar1 = 0;
    }
  }
  return uVar1;
}

```

