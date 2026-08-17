# yaSSL__Socket

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 14

---

## IsNonBlocking

```asm
// === 087a1500 yaSSL::Socket::IsNonBlocking  [0x087a1500-0x87a150f] ===
 87a1500:	55                   	push   %ebp
 87a1501:	89 e5                	mov    %esp,%ebp
 87a1503:	8b 45 08             	mov    0x8(%ebp),%eax
 87a1506:	5d                   	pop    %ebp
 87a1507:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 87a150b:	c3                   	ret
 87a150c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Socket::IsNonBlocking @ 0x87a1500

/* yaSSL::Socket::IsNonBlocking() const */

Socket __thiscall yaSSL::Socket::IsNonBlocking(Socket *this)

{
  return this[5];
}

```

---

## Socket

```asm
// === 087a14a0 yaSSL::Socket::Socket  [0x087a14a0-0x87a14bf] ===
 87a14a0:	55                   	push   %ebp
 87a14a1:	89 e5                	mov    %esp,%ebp
 87a14a3:	8b 45 08             	mov    0x8(%ebp),%eax
 87a14a6:	8b 55 0c             	mov    0xc(%ebp),%edx
 87a14a9:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 87a14ad:	89 10                	mov    %edx,(%eax)
 87a14af:	c6 40 05 00          	movb   $0x0,0x5(%eax)
 87a14b3:	5d                   	pop    %ebp
 87a14b4:	c3                   	ret
 87a14b5:	90                   	nop
 87a14b6:	8d 76 00             	lea    0x0(%esi),%esi
 87a14b9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::Socket::Socket @ 0x87a14a0

/* yaSSL::Socket::Socket(int) */

void __thiscall yaSSL::Socket::Socket(Socket *this,int param_1)

{
  this[4] = (Socket)0x0;
  *(int *)this = param_1;
  this[5] = (Socket)0x0;
  return;
}

```

---

## WouldBlock

```asm
// === 087a14f0 yaSSL::Socket::WouldBlock  [0x087a14f0-0x87a14ff] ===
 87a14f0:	55                   	push   %ebp
 87a14f1:	89 e5                	mov    %esp,%ebp
 87a14f3:	8b 45 08             	mov    0x8(%ebp),%eax
 87a14f6:	5d                   	pop    %ebp
 87a14f7:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 87a14fb:	c3                   	ret
 87a14fc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Socket::WouldBlock @ 0x87a14f0

/* yaSSL::Socket::WouldBlock() const */

Socket __thiscall yaSSL::Socket::WouldBlock(Socket *this)

{
  return this[4];
}

```

---

## closeSocket

```asm
// === 087a1700 yaSSL::Socket::closeSocket  [0x087a1700-0x87a173f] ===
 87a1700:	55                   	push   %ebp
 87a1701:	89 e5                	mov    %esp,%ebp
 87a1703:	83 ec 18             	sub    $0x18,%esp
 87a1706:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87a1709:	8b 75 08             	mov    0x8(%ebp),%esi
 87a170c:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87a170f:	e8 e4 16 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a1714:	81 c3 84 b4 bc 00    	add    $0xbcb484,%ebx
 87a171a:	8b 06                	mov    (%esi),%eax
 87a171c:	83 f8 ff             	cmp    $0xffffffff,%eax
 87a171f:	74 0e                	je     87a172f <_ZN5yaSSL6Socket11closeSocketEv+0x2f>
 87a1721:	89 04 24             	mov    %eax,(%esp)
 87a1724:	e8 37 c1 8d ff       	call   807d860 <close@plt>
 87a1729:	c7 06 ff ff ff ff    	movl   $0xffffffff,(%esi)
 87a172f:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87a1732:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87a1735:	89 ec                	mov    %ebp,%esp
 87a1737:	5d                   	pop    %ebp
 87a1738:	c3                   	ret
 87a1739:	90                   	nop
 87a173a:	90                   	nop
 87a173b:	90                   	nop
 87a173c:	90                   	nop
 87a173d:	90                   	nop
 87a173e:	90                   	nop
 87a173f:	90                   	nop

```

```c
// yaSSL::Socket::closeSocket @ 0x87a1700

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Socket::closeSocket() */

void __thiscall yaSSL::Socket::closeSocket(Socket *this)

{
  if (*(int *)this != -1) {
    close(*(int *)this);
    *(undefined4 *)this = 0xffffffff;
  }
  return;
}

```

---

## get_fd

```asm
// === 087a14d0 yaSSL::Socket::get_fd  [0x087a14d0-0x87a14df] ===
 87a14d0:	55                   	push   %ebp
 87a14d1:	89 e5                	mov    %esp,%ebp
 87a14d3:	8b 45 08             	mov    0x8(%ebp),%eax
 87a14d6:	5d                   	pop    %ebp
 87a14d7:	8b 00                	mov    (%eax),%eax
 87a14d9:	c3                   	ret
 87a14da:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::Socket::get_fd @ 0x87a14d0

/* yaSSL::Socket::get_fd() const */

undefined4 __thiscall yaSSL::Socket::get_fd(Socket *this)

{
  return *(undefined4 *)this;
}

```

---

## get_lastError

```asm
// === 087a1540 yaSSL::Socket::get_lastError  [0x087a1540-0x87a155f] ===
 87a1540:	55                   	push   %ebp
 87a1541:	89 e5                	mov    %esp,%ebp
 87a1543:	53                   	push   %ebx
 87a1544:	e8 af 18 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a1549:	81 c3 4f b6 bc 00    	add    $0xbcb64f,%ebx
 87a154f:	83 ec 04             	sub    $0x4,%esp
 87a1552:	e8 19 c8 8d ff       	call   807dd70 <__errno_location@plt>
 87a1557:	8b 00                	mov    (%eax),%eax
 87a1559:	83 c4 04             	add    $0x4,%esp
 87a155c:	5b                   	pop    %ebx
 87a155d:	5d                   	pop    %ebp
 87a155e:	c3                   	ret
 87a155f:	90                   	nop

```

```c
// yaSSL::Socket::get_lastError @ 0x87a1540

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Socket::get_lastError() */

int yaSSL::Socket::get_lastError(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return *piVar1;
}

```

---

## get_ready

```asm
// === 087a16c0 yaSSL::Socket::get_ready  [0x087a16c0-0x87a16ff] ===
 87a16c0:	55                   	push   %ebp
 87a16c1:	89 e5                	mov    %esp,%ebp
 87a16c3:	53                   	push   %ebx
 87a16c4:	83 ec 24             	sub    $0x24,%esp
 87a16c7:	8d 45 f4             	lea    -0xc(%ebp),%eax
 87a16ca:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a16ce:	8b 45 08             	mov    0x8(%ebp),%eax
 87a16d1:	e8 22 17 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a16d6:	81 c3 c2 b4 bc 00    	add    $0xbcb4c2,%ebx
 87a16dc:	c7 44 24 04 1b 54 00 	movl   $0x541b,0x4(%esp)
 87a16e3:	00 
 87a16e4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 87a16eb:	8b 00                	mov    (%eax),%eax
 87a16ed:	89 04 24             	mov    %eax,(%esp)
 87a16f0:	e8 bb cb 8d ff       	call   807e2b0 <ioctl@plt>
 87a16f5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87a16f8:	83 c4 24             	add    $0x24,%esp
 87a16fb:	5b                   	pop    %ebx
 87a16fc:	5d                   	pop    %ebp
 87a16fd:	c3                   	ret
 87a16fe:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::Socket::get_ready @ 0x87a16c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Socket::get_ready() const */

undefined4 __thiscall yaSSL::Socket::get_ready(Socket *this)

{
  undefined4 local_10 [2];
  
  local_10[0] = 0;
  ioctl(*(int *)this,0x541b,local_10);
  return local_10[0];
}

```

---

## receive

```asm
// === 087a1590 yaSSL::Socket::receive  [0x087a1590-0x87a160f] ===
 87a1590:	55                   	push   %ebp
 87a1591:	89 e5                	mov    %esp,%ebp
 87a1593:	83 ec 28             	sub    $0x28,%esp
 87a1596:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87a1599:	8b 45 14             	mov    0x14(%ebp),%eax
 87a159c:	8b 7d 08             	mov    0x8(%ebp),%edi
 87a159f:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87a15a2:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87a15a5:	e8 4e 18 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a15aa:	81 c3 ee b5 bc 00    	add    $0xbcb5ee,%ebx
 87a15b0:	c6 47 04 00          	movb   $0x0,0x4(%edi)
 87a15b4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87a15b8:	8b 45 10             	mov    0x10(%ebp),%eax
 87a15bb:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a15bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 87a15c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a15c6:	8b 07                	mov    (%edi),%eax
 87a15c8:	89 04 24             	mov    %eax,(%esp)
 87a15cb:	e8 70 cc 8d ff       	call   807e240 <recv@plt>
 87a15d0:	83 f8 ff             	cmp    $0xffffffff,%eax
 87a15d3:	89 c6                	mov    %eax,%esi
 87a15d5:	74 19                	je     87a15f0 <_ZN5yaSSL6Socket7receiveEPhji+0x60>
 87a15d7:	85 f6                	test   %esi,%esi
 87a15d9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 87a15de:	74 02                	je     87a15e2 <_ZN5yaSSL6Socket7receiveEPhji+0x52>
 87a15e0:	89 f0                	mov    %esi,%eax
 87a15e2:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87a15e5:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87a15e8:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87a15eb:	89 ec                	mov    %ebp,%esp
 87a15ed:	5d                   	pop    %ebp
 87a15ee:	c3                   	ret
 87a15ef:	90                   	nop
 87a15f0:	e8 4b ff ff ff       	call   87a1540 <_ZN5yaSSL6Socket13get_lastErrorEv>
 87a15f5:	83 f8 0b             	cmp    $0xb,%eax
 87a15f8:	74 0a                	je     87a1604 <_ZN5yaSSL6Socket7receiveEPhji+0x74>
 87a15fa:	e8 41 ff ff ff       	call   87a1540 <_ZN5yaSSL6Socket13get_lastErrorEv>
 87a15ff:	83 f8 0b             	cmp    $0xb,%eax
 87a1602:	75 dc                	jne    87a15e0 <_ZN5yaSSL6Socket7receiveEPhji+0x50>
 87a1604:	c6 47 04 01          	movb   $0x1,0x4(%edi)
 87a1608:	31 c0                	xor    %eax,%eax
 87a160a:	c6 47 05 01          	movb   $0x1,0x5(%edi)
 87a160e:	eb d2                	jmp    87a15e2 <_ZN5yaSSL6Socket7receiveEPhji+0x52>

```

```c
// yaSSL::Socket::receive @ 0x87a1590

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Socket::receive(unsigned char*, unsigned int, int) */

ssize_t __thiscall yaSSL::Socket::receive(Socket *this,uchar *param_1,uint param_2,int param_3)

{
  ssize_t sVar1;
  int iVar2;
  
  this[4] = (Socket)0x0;
  sVar1 = recv(*(int *)this,param_1,param_2,param_3);
  if (sVar1 == -1) {
    iVar2 = get_lastError();
    if ((iVar2 == 0xb) || (iVar2 = get_lastError(), iVar2 == 0xb)) {
      this[4] = (Socket)0x1;
      sVar1 = 0;
      this[5] = (Socket)0x1;
    }
  }
  else if (sVar1 == 0) {
    return -1;
  }
  return sVar1;
}

```

---

## send

```asm
// === 087a1650 yaSSL::Socket::send  [0x087a1650-0x87a16bf] ===
 87a1650:	55                   	push   %ebp
 87a1651:	89 e5                	mov    %esp,%ebp
 87a1653:	57                   	push   %edi
 87a1654:	56                   	push   %esi
 87a1655:	53                   	push   %ebx
 87a1656:	83 ec 2c             	sub    $0x2c,%esp
 87a1659:	8b 75 0c             	mov    0xc(%ebp),%esi
 87a165c:	8b 7d 10             	mov    0x10(%ebp),%edi
 87a165f:	e8 94 17 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a1664:	81 c3 34 b5 bc 00    	add    $0xbcb534,%ebx
 87a166a:	8b 55 08             	mov    0x8(%ebp),%edx
 87a166d:	8d 3c 3e             	lea    (%esi,%edi,1),%edi
 87a1670:	39 fe                	cmp    %edi,%esi
 87a1672:	75 0a                	jne    87a167e <_ZNK5yaSSL6Socket4sendEPKhji+0x2e>
 87a1674:	eb 37                	jmp    87a16ad <_ZNK5yaSSL6Socket4sendEPKhji+0x5d>
 87a1676:	66 90                	xchg   %ax,%ax
 87a1678:	01 c6                	add    %eax,%esi
 87a167a:	39 f7                	cmp    %esi,%edi
 87a167c:	74 2f                	je     87a16ad <_ZNK5yaSSL6Socket4sendEPKhji+0x5d>
 87a167e:	8b 45 14             	mov    0x14(%ebp),%eax
 87a1681:	89 74 24 04          	mov    %esi,0x4(%esp)
 87a1685:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 87a1688:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87a168c:	89 f8                	mov    %edi,%eax
 87a168e:	29 f0                	sub    %esi,%eax
 87a1690:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a1694:	8b 02                	mov    (%edx),%eax
 87a1696:	89 04 24             	mov    %eax,(%esp)
 87a1699:	e8 a2 c4 8d ff       	call   807db40 <send@plt>
 87a169e:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87a16a1:	83 f8 ff             	cmp    $0xffffffff,%eax
 87a16a4:	75 d2                	jne    87a1678 <_ZNK5yaSSL6Socket4sendEPKhji+0x28>
 87a16a6:	c7 45 10 00 00 00 00 	movl   $0x0,0x10(%ebp)
 87a16ad:	8b 45 10             	mov    0x10(%ebp),%eax
 87a16b0:	83 c4 2c             	add    $0x2c,%esp
 87a16b3:	5b                   	pop    %ebx
 87a16b4:	5e                   	pop    %esi
 87a16b5:	5f                   	pop    %edi
 87a16b6:	5d                   	pop    %ebp
 87a16b7:	c3                   	ret
 87a16b8:	90                   	nop
 87a16b9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Socket::send @ 0x87a1650

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Socket::send(unsigned char const*, unsigned int, int) const */

uint __thiscall yaSSL::Socket::send(Socket *this,uchar *param_1,uint param_2,int param_3)

{
  uchar *puVar1;
  ssize_t sVar2;
  
  puVar1 = param_1 + param_2;
  while( true ) {
    if (param_1 == puVar1) {
      return param_2;
    }
    sVar2 = ::send(*(int *)this,param_1,(int)puVar1 - (int)param_1,param_3);
    if (sVar2 == -1) break;
    param_1 = param_1 + sVar2;
  }
  return 0;
}

```

---

## set_fd

```asm
// === 087a14c0 yaSSL::Socket::set_fd  [0x087a14c0-0x87a14cf] ===
 87a14c0:	55                   	push   %ebp
 87a14c1:	89 e5                	mov    %esp,%ebp
 87a14c3:	8b 55 0c             	mov    0xc(%ebp),%edx
 87a14c6:	8b 45 08             	mov    0x8(%ebp),%eax
 87a14c9:	89 10                	mov    %edx,(%eax)
 87a14cb:	5d                   	pop    %ebp
 87a14cc:	c3                   	ret
 87a14cd:	90                   	nop
 87a14ce:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::Socket::set_fd @ 0x87a14c0

/* yaSSL::Socket::set_fd(int) */

void __thiscall yaSSL::Socket::set_fd(Socket *this,int param_1)

{
  *(int *)this = param_1;
  return;
}

```

---

## set_lastError

```asm
// === 087a1510 yaSSL::Socket::set_lastError  [0x087a1510-0x87a153f] ===
 87a1510:	55                   	push   %ebp
 87a1511:	89 e5                	mov    %esp,%ebp
 87a1513:	53                   	push   %ebx
 87a1514:	e8 df 18 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a1519:	81 c3 7f b6 bc 00    	add    $0xbcb67f,%ebx
 87a151f:	83 ec 04             	sub    $0x4,%esp
 87a1522:	e8 49 c8 8d ff       	call   807dd70 <__errno_location@plt>
 87a1527:	8b 55 08             	mov    0x8(%ebp),%edx
 87a152a:	89 10                	mov    %edx,(%eax)
 87a152c:	83 c4 04             	add    $0x4,%esp
 87a152f:	5b                   	pop    %ebx
 87a1530:	5d                   	pop    %ebp
 87a1531:	c3                   	ret
 87a1532:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87a1539:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::Socket::set_lastError @ 0x87a1510

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Socket::set_lastError(int) */

void yaSSL::Socket::set_lastError(int param_1)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = param_1;
  return;
}

```

---

## shutDown

```asm
// === 087a1560 yaSSL::Socket::shutDown  [0x087a1560-0x87a158f] ===
 87a1560:	55                   	push   %ebp
 87a1561:	89 e5                	mov    %esp,%ebp
 87a1563:	53                   	push   %ebx
 87a1564:	83 ec 14             	sub    $0x14,%esp
 87a1567:	8b 45 0c             	mov    0xc(%ebp),%eax
 87a156a:	e8 89 18 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a156f:	81 c3 29 b6 bc 00    	add    $0xbcb629,%ebx
 87a1575:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a1579:	8b 45 08             	mov    0x8(%ebp),%eax
 87a157c:	8b 00                	mov    (%eax),%eax
 87a157e:	89 04 24             	mov    %eax,(%esp)
 87a1581:	e8 0a c8 8d ff       	call   807dd90 <shutdown@plt>
 87a1586:	83 c4 14             	add    $0x14,%esp
 87a1589:	5b                   	pop    %ebx
 87a158a:	5d                   	pop    %ebp
 87a158b:	c3                   	ret
 87a158c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Socket::shutDown @ 0x87a1560

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Socket::shutDown(int) */

void __thiscall yaSSL::Socket::shutDown(Socket *this,int param_1)

{
  shutdown(*(int *)this,param_1);
  return;
}

```

---

## wait

```asm
// === 087a1610 yaSSL::Socket::wait  [0x087a1610-0x87a164f] ===
 87a1610:	55                   	push   %ebp
 87a1611:	89 e5                	mov    %esp,%ebp
 87a1613:	53                   	push   %ebx
 87a1614:	e8 df 17 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a1619:	81 c3 7f b5 bc 00    	add    $0xbcb57f,%ebx
 87a161f:	83 ec 24             	sub    $0x24,%esp
 87a1622:	8d 45 f7             	lea    -0x9(%ebp),%eax
 87a1625:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a1629:	8b 45 08             	mov    0x8(%ebp),%eax
 87a162c:	c7 44 24 0c 02 00 00 	movl   $0x2,0xc(%esp)
 87a1633:	00 
 87a1634:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 87a163b:	00 
 87a163c:	89 04 24             	mov    %eax,(%esp)
 87a163f:	e8 4c ff ff ff       	call   87a1590 <_ZN5yaSSL6Socket7receiveEPhji>
 87a1644:	83 f8 ff             	cmp    $0xffffffff,%eax
 87a1647:	0f 95 c0             	setne  %al
 87a164a:	83 c4 24             	add    $0x24,%esp
 87a164d:	5b                   	pop    %ebx
 87a164e:	5d                   	pop    %ebp
 87a164f:	c3                   	ret

```

```c
// yaSSL::Socket::wait @ 0x87a1610

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Socket::wait() */

bool __thiscall yaSSL::Socket::wait(Socket *this)

{
  int iVar1;
  uchar local_d [5];
  
  builtin_memcpy(local_d + 1,"\x19\x16z\b",4);
  iVar1 = receive(this,local_d,1,2);
  return iVar1 != -1;
}

```

---

## ~Socket

```asm
// === 087a14e0 yaSSL::Socket::~Socket  [0x087a14e0-0x87a14ef] ===
 87a14e0:	55                   	push   %ebp
 87a14e1:	89 e5                	mov    %esp,%ebp
 87a14e3:	5d                   	pop    %ebp
 87a14e4:	c3                   	ret
 87a14e5:	90                   	nop
 87a14e6:	8d 76 00             	lea    0x0(%esi),%esi
 87a14e9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::Socket::~Socket @ 0x87a14e0

/* yaSSL::Socket::~Socket() */

void __thiscall yaSSL::Socket::~Socket(Socket *this)

{
  return;
}

```

