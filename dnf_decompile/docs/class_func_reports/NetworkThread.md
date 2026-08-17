# NetworkThread

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## NetworkThread

```asm
// === 0857d554 NetworkThread::NetworkThread  [0x0857d554-0x857d56f] ===
 857d554:	55                   	push   %ebp
 857d555:	89 e5                	mov    %esp,%ebp
 857d557:	83 ec 18             	sub    $0x18,%esp
 857d55a:	8b 45 08             	mov    0x8(%ebp),%eax
 857d55d:	89 04 24             	mov    %eax,(%esp)
 857d560:	e8 d3 35 0b 00       	call   8630b38 <_ZN15ThreadInterfaceC1Ev>
 857d565:	8b 45 08             	mov    0x8(%ebp),%eax
 857d568:	c7 00 98 90 ca 08    	movl   $0x8ca9098,(%eax)
 857d56e:	c9                   	leave
 857d56f:	c3                   	ret

```

```c
// NetworkThread::NetworkThread @ 0x857d554

/* NetworkThread::NetworkThread() */

void __thiscall NetworkThread::NetworkThread(NetworkThread *this)

{
  ThreadInterface::ThreadInterface((ThreadInterface *)this);
  *(undefined ***)this = &PTR_stop_08ca9098;
  return;
}

```

---

## dispatch

```asm
// === 0857d5be NetworkThread::dispatch  [0x0857d5be-0x857d8ef] ===
 857d5be:	55                   	push   %ebp
 857d5bf:	89 e5                	mov    %esp,%ebp
 857d5c1:	56                   	push   %esi
 857d5c2:	53                   	push   %ebx
 857d5c3:	83 ec 60             	sub    $0x60,%esp
 857d5c6:	e8 e0 9a d2 ff       	call   82a70ab <_Z14G_EpollHandlerv>
 857d5cb:	89 04 24             	mov    %eax,(%esp)
 857d5ce:	e8 9d 29 f1 ff       	call   848ff70 <_ZN12EpollHandler14GetEpollEventsEv>
 857d5d3:	89 45 dc             	mov    %eax,-0x24(%ebp)
 857d5d6:	e8 d0 9a d2 ff       	call   82a70ab <_Z14G_EpollHandlerv>
 857d5db:	89 04 24             	mov    %eax,(%esp)
 857d5de:	e8 81 29 f1 ff       	call   848ff64 <_ZN12EpollHandler10GetEpollFDEv>
 857d5e3:	89 45 e0             	mov    %eax,-0x20(%ebp)
 857d5e6:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 857d5ed:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 857d5f4:	e9 a4 02 00 00       	jmp    857d89d <_ZN13NetworkThread8dispatchEPv+0x2df>
 857d5f9:	e8 72 07 b0 ff       	call   807dd70 <__errno_location@plt>
 857d5fe:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 857d604:	c7 04 24 0a 00 00 00 	movl   $0xa,(%esp)
 857d60b:	e8 d0 ee 00 00       	call   858c4e0 <_ZN6OS_API5SleepEi>
 857d610:	c7 04 24 00 be 40 09 	movl   $0x940be00,(%esp)
 857d617:	e8 be 1f 00 00       	call   857f5da <_ZNKSt5queueIP5CUserSt5dequeIS1_SaIS1_EEE5emptyEv>
 857d61c:	83 f0 01             	xor    $0x1,%eax
 857d61f:	84 c0                	test   %al,%al
 857d621:	0f 84 18 01 00 00    	je     857d73f <_ZN13NetworkThread8dispatchEPv+0x181>
 857d627:	c7 04 24 cc bd 40 09 	movl   $0x940bdcc,(%esp)
 857d62e:	e8 6b 7d b8 ff       	call   810539e <_ZN5Mutex4lockEv>
 857d633:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 857d63a:	e9 dd 00 00 00       	jmp    857d71c <_ZN13NetworkThread8dispatchEPv+0x15e>
 857d63f:	c7 04 24 00 be 40 09 	movl   $0x940be00,(%esp)
 857d646:	e8 a3 1f 00 00       	call   857f5ee <_ZNSt5queueIP5CUserSt5dequeIS1_SaIS1_EEE5frontEv>
 857d64b:	8b 00                	mov    (%eax),%eax
 857d64d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 857d650:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 857d657:	8b 45 ec             	mov    -0x14(%ebp),%eax
 857d65a:	05 e0 00 00 00       	add    $0xe0,%eax
 857d65f:	89 04 24             	mov    %eax,(%esp)
 857d662:	e8 51 56 d3 ff       	call   82b2cb8 <_ZN8CNetworkILi4096ELi450000EE10get_socketEv>
 857d667:	89 c3                	mov    %eax,%ebx
 857d669:	e8 3d 9a d2 ff       	call   82a70ab <_Z14G_EpollHandlerv>
 857d66e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 857d675:	00 
 857d676:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 857d67a:	8b 55 ec             	mov    -0x14(%ebp),%edx
 857d67d:	89 54 24 04          	mov    %edx,0x4(%esp)
 857d681:	89 04 24             	mov    %eax,(%esp)
 857d684:	e8 3d eb ff ff       	call   857c1c6 <_ZN12EpollHandler8SetEpollEPvib>
 857d689:	89 45 f0             	mov    %eax,-0x10(%ebp)
 857d68c:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 857d690:	0f 95 c0             	setne  %al
 857d693:	84 c0                	test   %al,%al
 857d695:	74 79                	je     857d710 <_ZN13NetworkThread8dispatchEPv+0x152>
 857d697:	8b 45 f0             	mov    -0x10(%ebp),%eax
 857d69a:	89 04 24             	mov    %eax,(%esp)
 857d69d:	e8 8e 00 b0 ff       	call   807d730 <strerror@plt>
 857d6a2:	89 c6                	mov    %eax,%esi
 857d6a4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 857d6a7:	05 e0 00 00 00       	add    $0xe0,%eax
 857d6ac:	89 04 24             	mov    %eax,(%esp)
 857d6af:	e8 04 56 d3 ff       	call   82b2cb8 <_ZN8CNetworkILi4096ELi450000EE10get_socketEv>
 857d6b4:	89 c3                	mov    %eax,%ebx
 857d6b6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 857d6b9:	89 04 24             	mov    %eax,(%esp)
 857d6bc:	e8 ad cc b5 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 857d6c1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 857d6c8:	00 
 857d6c9:	89 04 24             	mov    %eax,(%esp)
 857d6cc:	e8 7a b9 b8 ff       	call   810904b <_Z14NumberToStringji>
 857d6d1:	89 74 24 20          	mov    %esi,0x20(%esp)
 857d6d5:	8b 55 f0             	mov    -0x10(%ebp),%edx
 857d6d8:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 857d6dc:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 857d6e0:	89 44 24 14          	mov    %eax,0x14(%esp)
 857d6e4:	c7 44 24 10 fc 7e ca 	movl   $0x8ca7efc,0x10(%esp)
 857d6eb:	08 
 857d6ec:	c7 44 24 0c c4 02 00 	movl   $0x2c4,0xc(%esp)
 857d6f3:	00 
 857d6f4:	c7 44 24 08 80 8f ca 	movl   $0x8ca8f80,0x8(%esp)
 857d6fb:	08 
 857d6fc:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857d703:	08 
 857d704:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 857d70b:	e8 fa 64 55 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 857d710:	c7 04 24 00 be 40 09 	movl   $0x940be00,(%esp)
 857d717:	e8 e6 1e 00 00       	call   857f602 <_ZNSt5queueIP5CUserSt5dequeIS1_SaIS1_EEE3popEv>
 857d71c:	c7 04 24 00 be 40 09 	movl   $0x940be00,(%esp)
 857d723:	e8 b2 1e 00 00       	call   857f5da <_ZNKSt5queueIP5CUserSt5dequeIS1_SaIS1_EEE5emptyEv>
 857d728:	83 f0 01             	xor    $0x1,%eax
 857d72b:	84 c0                	test   %al,%al
 857d72d:	0f 85 0c ff ff ff    	jne    857d63f <_ZN13NetworkThread8dispatchEPv+0x81>
 857d733:	c7 04 24 cc bd 40 09 	movl   $0x940bdcc,(%esp)
 857d73a:	e8 73 7c b8 ff       	call   81053b2 <_ZN5Mutex6unlockEv>
 857d73f:	c7 44 24 0c 64 00 00 	movl   $0x64,0xc(%esp)
 857d746:	00 
 857d747:	c7 44 24 08 58 02 00 	movl   $0x258,0x8(%esp)
 857d74e:	00 
 857d74f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 857d752:	89 44 24 04          	mov    %eax,0x4(%esp)
 857d756:	8b 45 e0             	mov    -0x20(%ebp),%eax
 857d759:	89 04 24             	mov    %eax,(%esp)
 857d75c:	e8 9f 04 b0 ff       	call   807dc00 <epoll_wait@plt>
 857d761:	89 45 e8             	mov    %eax,-0x18(%ebp)
 857d764:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 857d768:	0f 84 2e 01 00 00    	je     857d89c <_ZN13NetworkThread8dispatchEPv+0x2de>
 857d76e:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 857d772:	79 1b                	jns    857d78f <_ZN13NetworkThread8dispatchEPv+0x1d1>
 857d774:	e8 f7 05 b0 ff       	call   807dd70 <__errno_location@plt>
 857d779:	8b 00                	mov    (%eax),%eax
 857d77b:	83 f8 04             	cmp    $0x4,%eax
 857d77e:	74 0f                	je     857d78f <_ZN13NetworkThread8dispatchEPv+0x1d1>
 857d780:	e8 eb 05 b0 ff       	call   807dd70 <__errno_location@plt>
 857d785:	8b 00                	mov    (%eax),%eax
 857d787:	85 c0                	test   %eax,%eax
 857d789:	0f 85 58 01 00 00    	jne    857d8e7 <_ZN13NetworkThread8dispatchEPv+0x329>
 857d78f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 857d796:	e9 ee 00 00 00       	jmp    857d889 <_ZN13NetworkThread8dispatchEPv+0x2cb>
 857d79b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 857d79e:	89 d0                	mov    %edx,%eax
 857d7a0:	01 c0                	add    %eax,%eax
 857d7a2:	01 d0                	add    %edx,%eax
 857d7a4:	c1 e0 02             	shl    $0x2,%eax
 857d7a7:	03 45 dc             	add    -0x24(%ebp),%eax
 857d7aa:	8b 40 04             	mov    0x4(%eax),%eax
 857d7ad:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 857d7b0:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 857d7b4:	0f 84 ca 00 00 00    	je     857d884 <_ZN13NetworkThread8dispatchEPv+0x2c6>
 857d7ba:	8b 55 f4             	mov    -0xc(%ebp),%edx
 857d7bd:	89 d0                	mov    %edx,%eax
 857d7bf:	01 c0                	add    %eax,%eax
 857d7c1:	01 d0                	add    %edx,%eax
 857d7c3:	c1 e0 02             	shl    $0x2,%eax
 857d7c6:	03 45 dc             	add    -0x24(%ebp),%eax
 857d7c9:	8b 00                	mov    (%eax),%eax
 857d7cb:	83 e0 01             	and    $0x1,%eax
 857d7ce:	84 c0                	test   %al,%al
 857d7d0:	74 0b                	je     857d7dd <_ZN13NetworkThread8dispatchEPv+0x21f>
 857d7d2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 857d7d5:	89 04 24             	mov    %eax,(%esp)
 857d7d8:	e8 1f a8 0c 00       	call   8647ffc <_ZN5CUser4RecvEv>
 857d7dd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 857d7e0:	8b 80 10 11 00 00    	mov    0x1110(%eax),%eax
 857d7e6:	85 c0                	test   %eax,%eax
 857d7e8:	74 5d                	je     857d847 <_ZN13NetworkThread8dispatchEPv+0x289>
 857d7ea:	8b 55 f4             	mov    -0xc(%ebp),%edx
 857d7ed:	89 d0                	mov    %edx,%eax
 857d7ef:	01 c0                	add    %eax,%eax
 857d7f1:	01 d0                	add    %edx,%eax
 857d7f3:	c1 e0 02             	shl    $0x2,%eax
 857d7f6:	03 45 dc             	add    -0x24(%ebp),%eax
 857d7f9:	8b 00                	mov    (%eax),%eax
 857d7fb:	83 e0 04             	and    $0x4,%eax
 857d7fe:	85 c0                	test   %eax,%eax
 857d800:	74 45                	je     857d847 <_ZN13NetworkThread8dispatchEPv+0x289>
 857d802:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 857d805:	8b 80 10 11 00 00    	mov    0x1110(%eax),%eax
 857d80b:	3d d0 dd 06 00       	cmp    $0x6ddd0,%eax
 857d810:	76 25                	jbe    857d837 <_ZN13NetworkThread8dispatchEPv+0x279>
 857d812:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 857d819:	00 
 857d81a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 857d821:	00 
 857d822:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 857d829:	00 
 857d82a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 857d82d:	89 04 24             	mov    %eax,(%esp)
 857d830:	e8 bf b1 0c 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 857d835:	eb 10                	jmp    857d847 <_ZN13NetworkThread8dispatchEPv+0x289>
 857d837:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 857d83a:	05 e0 00 00 00       	add    $0xe0,%eax
 857d83f:	89 04 24             	mov    %eax,(%esp)
 857d842:	e8 cf 1d 00 00       	call   857f616 <_ZN8CNetworkILi4096ELi450000EE11send_packetEv>
 857d847:	8b 55 f4             	mov    -0xc(%ebp),%edx
 857d84a:	89 d0                	mov    %edx,%eax
 857d84c:	01 c0                	add    %eax,%eax
 857d84e:	01 d0                	add    %edx,%eax
 857d850:	c1 e0 02             	shl    $0x2,%eax
 857d853:	03 45 dc             	add    -0x24(%ebp),%eax
 857d856:	8b 00                	mov    (%eax),%eax
 857d858:	83 e0 18             	and    $0x18,%eax
 857d85b:	85 c0                	test   %eax,%eax
 857d85d:	74 26                	je     857d885 <_ZN13NetworkThread8dispatchEPv+0x2c7>
 857d85f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 857d866:	00 
 857d867:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 857d86e:	00 
 857d86f:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 857d876:	00 
 857d877:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 857d87a:	89 04 24             	mov    %eax,(%esp)
 857d87d:	e8 72 b1 0c 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 857d882:	eb 01                	jmp    857d885 <_ZN13NetworkThread8dispatchEPv+0x2c7>
 857d884:	90                   	nop
 857d885:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 857d889:	8b 45 f4             	mov    -0xc(%ebp),%eax
 857d88c:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 857d88f:	0f 9c c0             	setl   %al
 857d892:	84 c0                	test   %al,%al
 857d894:	0f 85 01 ff ff ff    	jne    857d79b <_ZN13NetworkThread8dispatchEPv+0x1dd>
 857d89a:	eb 01                	jmp    857d89d <_ZN13NetworkThread8dispatchEPv+0x2df>
 857d89c:	90                   	nop
 857d89d:	0f b6 05 64 bd 40 09 	movzbl 0x940bd64,%eax
 857d8a4:	83 f0 01             	xor    $0x1,%eax
 857d8a7:	84 c0                	test   %al,%al
 857d8a9:	0f 85 4a fd ff ff    	jne    857d5f9 <_ZN13NetworkThread8dispatchEPv+0x3b>
 857d8af:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 857d8b6:	00 
 857d8b7:	c7 44 24 08 fe 02 00 	movl   $0x2fe,0x8(%esp)
 857d8be:	00 
 857d8bf:	c7 44 24 04 80 8f ca 	movl   $0x8ca8f80,0x4(%esp)
 857d8c6:	08 
 857d8c7:	8d 45 cc             	lea    -0x34(%ebp),%eax
 857d8ca:	89 04 24             	mov    %eax,(%esp)
 857d8cd:	e8 46 1e fd ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 857d8d2:	c7 44 24 04 40 7f ca 	movl   $0x8ca7f40,0x4(%esp)
 857d8d9:	08 
 857d8da:	8d 45 cc             	lea    -0x34(%ebp),%eax
 857d8dd:	89 04 24             	mov    %eax,(%esp)
 857d8e0:	e8 a3 1e fd ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 857d8e5:	eb 01                	jmp    857d8e8 <_ZN13NetworkThread8dispatchEPv+0x32a>
 857d8e7:	90                   	nop
 857d8e8:	83 c4 60             	add    $0x60,%esp
 857d8eb:	5b                   	pop    %ebx
 857d8ec:	5e                   	pop    %esi
 857d8ed:	5d                   	pop    %ebp
 857d8ee:	c3                   	ret
 857d8ef:	90                   	nop

```

```c
// NetworkThread::dispatch @ 0x857d5be

/* NetworkThread::dispatch(void*) */

void NetworkThread::dispatch(void *param_1)

{
  char cVar1;
  EpollHandler *pEVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  cMyTrace local_38 [16];
  epoll_event *local_28;
  int local_24;
  CUser *local_20;
  int local_1c;
  CUser *local_18;
  int local_14;
  int local_10;
  
  pEVar2 = (EpollHandler *)G_EpollHandler();
  local_28 = (epoll_event *)EpollHandler::GetEpollEvents(pEVar2);
  pEVar2 = (EpollHandler *)G_EpollHandler();
  local_24 = EpollHandler::GetEpollFD(pEVar2);
  local_20 = (CUser *)0x0;
  local_1c = 0;
  while( true ) {
    do {
      if (GlobalData::s_server_stop == '\x01') {
        cMyTrace::cMyTrace(local_38,"virtual void NetworkThread::dispatch(void*)",0x2fe,0);
        cMyTrace::operator()(local_38,"RecvThread Terminate");
        return;
      }
      piVar3 = __errno_location();
      *piVar3 = 0;
      OS_API::Sleep(10);
      cVar1 = std::queue<CUser*,std::deque<CUser*,std::allocator<CUser*>>>::empty
                        ((queue<CUser*,std::deque<CUser*,std::allocator<CUser*>>> *)
                         GlobalData::s_accept_que);
      if (cVar1 != '\x01') {
        Mutex::lock((Mutex *)GlobalData::s_accept_lock);
        local_18 = (CUser *)0x0;
        while (cVar1 = std::queue<CUser*,std::deque<CUser*,std::allocator<CUser*>>>::empty
                                 ((queue<CUser*,std::deque<CUser*,std::allocator<CUser*>>> *)
                                  GlobalData::s_accept_que), cVar1 != '\x01') {
          piVar3 = (int *)std::queue<CUser*,std::deque<CUser*,std::allocator<CUser*>>>::front();
          local_18 = (CUser *)*piVar3;
          local_14 = 0;
          iVar4 = CNetwork<4096,450000>::get_socket((CNetwork<4096,450000> *)(local_18 + 0xe0));
          pEVar2 = (EpollHandler *)G_EpollHandler();
          local_14 = EpollHandler::SetEpoll(pEVar2,local_18,iVar4,false);
          if (local_14 != 0) {
            pcVar5 = strerror(local_14);
            uVar6 = CNetwork<4096,450000>::get_socket((CNetwork<4096,450000> *)(local_18 + 0xe0));
            uVar7 = CUser::get_acc_id(local_18);
            uVar8 = NumberToString(uVar7,0);
            LogManager::logFormat
                      (1,"NetworkThread.cpp","virtual void NetworkThread::dispatch(void*)",0x2c4,
                       "(m_id: %s) G_EpollHandler()->SetEpoll(pUser->get_socket(%d)) %d(%s)",uVar8,
                       uVar6,local_14,pcVar5);
          }
          std::queue<CUser*,std::deque<CUser*,std::allocator<CUser*>>>::pop
                    ((queue<CUser*,std::deque<CUser*,std::allocator<CUser*>>> *)
                     GlobalData::s_accept_que);
        }
        Mutex::unlock((Mutex *)GlobalData::s_accept_lock);
      }
      local_1c = epoll_wait(local_24,local_28,600,100);
    } while (local_1c == 0);
    if (((local_1c < 0) && (piVar3 = __errno_location(), *piVar3 != 4)) &&
       (piVar3 = __errno_location(), *piVar3 != 0)) break;
    for (local_10 = 0; local_10 < local_1c; local_10 = local_10 + 1) {
      local_20 = local_28[local_10].data.ptr;
      if (local_20 != (CUser *)0x0) {
        if ((local_28[local_10].events & 1) != 0) {
          CUser::Recv(local_20);
        }
        if ((*(int *)(local_20 + 0x1110) != 0) && ((local_28[local_10].events & 4) != 0)) {
          if (*(uint *)(local_20 + 0x1110) < 0x6ddd1) {
            CNetwork<4096,450000>::send_packet((CNetwork<4096,450000> *)(local_20 + 0xe0));
          }
          else {
            CUser::DisConnSig(local_20,6,0,0);
          }
        }
        if ((local_28[local_10].events & 0x18) != 0) {
          CUser::DisConnSig(local_20,9,0,0);
        }
      }
    }
  }
  return;
}

```

---

## ~NetworkThread

```asm
// === 0857d570 NetworkThread::~NetworkThread  [0x0857d570-0x857d59f] ===
 857d570:	55                   	push   %ebp
 857d571:	89 e5                	mov    %esp,%ebp
 857d573:	83 ec 18             	sub    $0x18,%esp
 857d576:	8b 45 08             	mov    0x8(%ebp),%eax
 857d579:	c7 00 98 90 ca 08    	movl   $0x8ca9098,(%eax)
 857d57f:	8b 45 08             	mov    0x8(%ebp),%eax
 857d582:	89 04 24             	mov    %eax,(%esp)
 857d585:	e8 bc 35 0b 00       	call   8630b46 <_ZN15ThreadInterfaceD1Ev>
 857d58a:	b8 00 00 00 00       	mov    $0x0,%eax
 857d58f:	84 c0                	test   %al,%al
 857d591:	74 0b                	je     857d59e <_ZN13NetworkThreadD1Ev+0x2e>
 857d593:	8b 45 08             	mov    0x8(%ebp),%eax
 857d596:	89 04 24             	mov    %eax,(%esp)
 857d599:	e8 52 6f 1a 00       	call   87244f0 <_ZdlPv>
 857d59e:	c9                   	leave
 857d59f:	c3                   	ret

```

```c
// NetworkThread::~NetworkThread @ 0x857d570

/* WARNING: Removing unreachable block (ram,0x0857d593) */
/* NetworkThread::~NetworkThread() */

void __thiscall NetworkThread::~NetworkThread(NetworkThread *this)

{
  *(undefined ***)this = &PTR_stop_08ca9098;
  ThreadInterface::~ThreadInterface((ThreadInterface *)this);
  return;
}

```

---

## ~NetworkThread_0857d5a0

```asm
// === 0857d5a0 NetworkThread::~NetworkThread  [0x0857d5a0-0x857d5bd] ===
 857d5a0:	55                   	push   %ebp
 857d5a1:	89 e5                	mov    %esp,%ebp
 857d5a3:	83 ec 18             	sub    $0x18,%esp
 857d5a6:	8b 45 08             	mov    0x8(%ebp),%eax
 857d5a9:	89 04 24             	mov    %eax,(%esp)
 857d5ac:	e8 bf ff ff ff       	call   857d570 <_ZN13NetworkThreadD1Ev>
 857d5b1:	8b 45 08             	mov    0x8(%ebp),%eax
 857d5b4:	89 04 24             	mov    %eax,(%esp)
 857d5b7:	e8 34 6f 1a 00       	call   87244f0 <_ZdlPv>
 857d5bc:	c9                   	leave
 857d5bd:	c3                   	ret

```

```c
// NetworkThread::~NetworkThread @ 0x857d5a0

/* NetworkThread::~NetworkThread() */

void __thiscall NetworkThread::~NetworkThread(NetworkThread *this)

{
  ~NetworkThread(this);
  operator_delete(this);
  return;
}

```

