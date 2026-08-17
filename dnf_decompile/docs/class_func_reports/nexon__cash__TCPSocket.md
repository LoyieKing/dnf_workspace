# nexon__cash__TCPSocket

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 27

---

## SetRecvBufSize

```asm
// === 081b009c nexon::cash::TCPSocket::SetRecvBufSize  [0x081b009c-0x81b00a9] ===
 81b009c:	55                   	push   %ebp
 81b009d:	89 e5                	mov    %esp,%ebp
 81b009f:	8b 45 08             	mov    0x8(%ebp),%eax
 81b00a2:	a3 68 7d 40 09       	mov    %eax,0x9407d68
 81b00a7:	5d                   	pop    %ebp
 81b00a8:	c3                   	ret
 81b00a9:	90                   	nop

```

```c
// nexon::cash::TCPSocket::SetRecvBufSize @ 0x81b009c

/* nexon::cash::TCPSocket::SetRecvBufSize(int) */

void nexon::cash::TCPSocket::SetRecvBufSize(int param_1)

{
  msRecvBufSize = param_1;
  return;
}

```

---

## SetSendBufSize

```asm
// === 081b00aa nexon::cash::TCPSocket::SetSendBufSize  [0x081b00aa-0x81b00b6] ===
 81b00aa:	55                   	push   %ebp
 81b00ab:	89 e5                	mov    %esp,%ebp
 81b00ad:	8b 45 08             	mov    0x8(%ebp),%eax
 81b00b0:	a3 6c 7d 40 09       	mov    %eax,0x9407d6c
 81b00b5:	5d                   	pop    %ebp
 81b00b6:	c3                   	ret

```

```c
// nexon::cash::TCPSocket::SetSendBufSize @ 0x81b00aa

/* nexon::cash::TCPSocket::SetSendBufSize(int) */

void nexon::cash::TCPSocket::SetSendBufSize(int param_1)

{
  msSendBufSize = param_1;
  return;
}

```

---

## TCPSocket

```asm
// === 081af4cc nexon::cash::TCPSocket::TCPSocket  [0x081af4cc-0x81af50d] ===
 81af4cc:	55                   	push   %ebp
 81af4cd:	89 e5                	mov    %esp,%ebp
 81af4cf:	83 ec 18             	sub    $0x18,%esp
 81af4d2:	8b 45 08             	mov    0x8(%ebp),%eax
 81af4d5:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%eax)
 81af4db:	8b 45 08             	mov    0x8(%ebp),%eax
 81af4de:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 81af4e5:	8b 45 08             	mov    0x8(%ebp),%eax
 81af4e8:	83 c0 14             	add    $0x14,%eax
 81af4eb:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 81af4f2:	00 
 81af4f3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81af4fa:	00 
 81af4fb:	89 04 24             	mov    %eax,(%esp)
 81af4fe:	e8 bd e7 ec ff       	call   807dcc0 <memset@plt>
 81af503:	8b 45 08             	mov    0x8(%ebp),%eax
 81af506:	66 c7 40 18 00 00    	movw   $0x0,0x18(%eax)
 81af50c:	c9                   	leave
 81af50d:	c3                   	ret

```

```c
// nexon::cash::TCPSocket::TCPSocket @ 0x81af4cc

/* nexon::cash::TCPSocket::TCPSocket() */

void __thiscall nexon::cash::TCPSocket::TCPSocket(TCPSocket *this)

{
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 0x1c) = 0;
  memset(this + 0x14,0,4);
  *(undefined2 *)(this + 0x18) = 0;
  return;
}

```

---

## TCPSocket_081af50e

```asm
// === 081af50e nexon::cash::TCPSocket::TCPSocket  [0x081af50e-0x81af51d] ===
 81af50e:	55                   	push   %ebp
 81af50f:	89 e5                	mov    %esp,%ebp
 81af511:	83 ec 04             	sub    $0x4,%esp
 81af514:	8b 45 10             	mov    0x10(%ebp),%eax
 81af517:	66 89 45 fc          	mov    %ax,-0x4(%ebp)
 81af51b:	c9                   	leave
 81af51c:	c3                   	ret
 81af51d:	90                   	nop

```

```c
// nexon::cash::TCPSocket::TCPSocket @ 0x81af50e

/* nexon::cash::TCPSocket::TCPSocket(char const*, unsigned short) */

void __thiscall nexon::cash::TCPSocket::TCPSocket(TCPSocket *this,char *param_1,ushort param_2)

{
  return;
}

```

---

## accept

```asm
// === 081aff2c nexon::cash::TCPSocket::accept  [0x081aff2c-0x81affb7] ===
 81aff2c:	55                   	push   %ebp
 81aff2d:	89 e5                	mov    %esp,%ebp
 81aff2f:	83 ec 28             	sub    $0x28,%esp
 81aff32:	c7 45 f4 10 00 00 00 	movl   $0x10,-0xc(%ebp)
 81aff39:	8b 45 0c             	mov    0xc(%ebp),%eax
 81aff3c:	83 c0 04             	add    $0x4,%eax
 81aff3f:	89 c2                	mov    %eax,%edx
 81aff41:	8b 45 08             	mov    0x8(%ebp),%eax
 81aff44:	8b 00                	mov    (%eax),%eax
 81aff46:	8d 4d f4             	lea    -0xc(%ebp),%ecx
 81aff49:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81aff4d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81aff51:	89 04 24             	mov    %eax,(%esp)
 81aff54:	e8 57 df ec ff       	call   807deb0 <accept@plt>
 81aff59:	8b 55 0c             	mov    0xc(%ebp),%edx
 81aff5c:	89 02                	mov    %eax,(%edx)
 81aff5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81aff61:	8b 00                	mov    (%eax),%eax
 81aff63:	85 c0                	test   %eax,%eax
 81aff65:	78 0a                	js     81aff71 <_ZN5nexon4cash9TCPSocket6acceptERS1_+0x45>
 81aff67:	8b 45 0c             	mov    0xc(%ebp),%eax
 81aff6a:	8b 00                	mov    (%eax),%eax
 81aff6c:	83 f8 ff             	cmp    $0xffffffff,%eax
 81aff6f:	75 07                	jne    81aff78 <_ZN5nexon4cash9TCPSocket6acceptERS1_+0x4c>
 81aff71:	b8 00 00 00 00       	mov    $0x0,%eax
 81aff76:	eb 3e                	jmp    81affb6 <_ZN5nexon4cash9TCPSocket6acceptERS1_+0x8a>
 81aff78:	8b 45 0c             	mov    0xc(%ebp),%eax
 81aff7b:	8d 50 08             	lea    0x8(%eax),%edx
 81aff7e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81aff81:	83 c0 14             	add    $0x14,%eax
 81aff84:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 81aff8b:	00 
 81aff8c:	89 54 24 04          	mov    %edx,0x4(%esp)
 81aff90:	89 04 24             	mov    %eax,(%esp)
 81aff93:	e8 08 d9 ec ff       	call   807d8a0 <memcpy@plt>
 81aff98:	8b 45 0c             	mov    0xc(%ebp),%eax
 81aff9b:	0f b7 50 06          	movzwl 0x6(%eax),%edx
 81aff9f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81affa2:	66 89 50 18          	mov    %dx,0x18(%eax)
 81affa6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81affa9:	89 04 24             	mov    %eax,(%esp)
 81affac:	e8 ad f8 ff ff       	call   81af85e <_ZN5nexon4cash9TCPSocket14setOptNonBlockEv>
 81affb1:	b8 01 00 00 00       	mov    $0x1,%eax
 81affb6:	c9                   	leave
 81affb7:	c3                   	ret

```

```c
// nexon::cash::TCPSocket::accept @ 0x81aff2c

/* nexon::cash::TCPSocket::accept(nexon::cash::TCPSocket&) */

undefined4 __thiscall nexon::cash::TCPSocket::accept(TCPSocket *this,TCPSocket *param_1)

{
  int iVar1;
  undefined4 uVar2;
  socklen_t local_10 [3];
  
  local_10[0] = 0x10;
  iVar1 = ::accept(*(int *)this,(sockaddr *)(param_1 + 4),local_10);
  *(int *)param_1 = iVar1;
  if ((*(int *)param_1 < 0) || (*(int *)param_1 == -1)) {
    uVar2 = 0;
  }
  else {
    memcpy(param_1 + 0x14,param_1 + 8,4);
    *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_1 + 6);
    setOptNonBlock(param_1);
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## bind

```asm
// === 081af5b4 nexon::cash::TCPSocket::bind  [0x081af5b4-0x81af673] ===
 81af5b4:	55                   	push   %ebp
 81af5b5:	89 e5                	mov    %esp,%ebp
 81af5b7:	83 ec 38             	sub    $0x38,%esp
 81af5ba:	8b 55 0c             	mov    0xc(%ebp),%edx
 81af5bd:	8b 45 10             	mov    0x10(%ebp),%eax
 81af5c0:	66 89 55 e4          	mov    %dx,-0x1c(%ebp)
 81af5c4:	88 45 e0             	mov    %al,-0x20(%ebp)
 81af5c7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81af5ce:	00 
 81af5cf:	8b 45 08             	mov    0x8(%ebp),%eax
 81af5d2:	89 04 24             	mov    %eax,(%esp)
 81af5d5:	e8 e2 02 00 00       	call   81af8bc <_ZN5nexon4cash9TCPSocket15setOptReuseAdrsEb>
 81af5da:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 81af5e1:	00 
 81af5e2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81af5e9:	00 
 81af5ea:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81af5ed:	89 04 24             	mov    %eax,(%esp)
 81af5f0:	e8 cb e6 ec ff       	call   807dcc0 <memset@plt>
 81af5f5:	66 c7 45 e8 02 00    	movw   $0x2,-0x18(%ebp)
 81af5fb:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
 81af5ff:	89 04 24             	mov    %eax,(%esp)
 81af602:	e8 79 f0 ec ff       	call   807e680 <htons@plt>
 81af607:	66 89 45 ea          	mov    %ax,-0x16(%ebp)
 81af60b:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 81af612:	8d 55 e8             	lea    -0x18(%ebp),%edx
 81af615:	8b 45 08             	mov    0x8(%ebp),%eax
 81af618:	8b 00                	mov    (%eax),%eax
 81af61a:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 81af621:	00 
 81af622:	89 54 24 04          	mov    %edx,0x4(%esp)
 81af626:	89 04 24             	mov    %eax,(%esp)
 81af629:	e8 22 f1 ec ff       	call   807e750 <bind@plt>
 81af62e:	c1 e8 1f             	shr    $0x1f,%eax
 81af631:	84 c0                	test   %al,%al
 81af633:	74 12                	je     81af647 <_ZN5nexon4cash9TCPSocket4bindEtb+0x93>
 81af635:	8b 45 08             	mov    0x8(%ebp),%eax
 81af638:	89 04 24             	mov    %eax,(%esp)
 81af63b:	e8 cc 01 00 00       	call   81af80c <_ZN5nexon4cash9TCPSocket5closeEv>
 81af640:	b8 00 00 00 00       	mov    $0x0,%eax
 81af645:	eb 2a                	jmp    81af671 <_ZN5nexon4cash9TCPSocket4bindEtb+0xbd>
 81af647:	80 7d e0 00          	cmpb   $0x0,-0x20(%ebp)
 81af64b:	74 0b                	je     81af658 <_ZN5nexon4cash9TCPSocket4bindEtb+0xa4>
 81af64d:	8b 45 08             	mov    0x8(%ebp),%eax
 81af650:	89 04 24             	mov    %eax,(%esp)
 81af653:	e8 06 02 00 00       	call   81af85e <_ZN5nexon4cash9TCPSocket14setOptNonBlockEv>
 81af658:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
 81af65c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81af660:	c7 04 24 d0 4a bb 08 	movl   $0x8bb4ad0,(%esp)
 81af667:	e8 f4 e4 ec ff       	call   807db60 <printf@plt>
 81af66c:	b8 01 00 00 00       	mov    $0x1,%eax
 81af671:	c9                   	leave
 81af672:	c3                   	ret
 81af673:	90                   	nop

```

```c
// nexon::cash::TCPSocket::bind @ 0x81af5b4

/* nexon::cash::TCPSocket::bind(unsigned short, bool) */

undefined4 __thiscall nexon::cash::TCPSocket::bind(TCPSocket *this,ushort param_1,bool param_2)

{
  int iVar1;
  undefined4 uVar2;
  sockaddr local_1c;
  
  setOptReuseAdrs(this,true);
  memset(&local_1c,0,0x10);
  local_1c.sa_family = 2;
  local_1c.sa_data._0_2_ = htons(param_1);
  local_1c.sa_data[2] = '\0';
  local_1c.sa_data[3] = '\0';
  local_1c.sa_data[4] = '\0';
  local_1c.sa_data[5] = '\0';
  iVar1 = ::bind(*(int *)this,&local_1c,0x10);
  if (iVar1 < 0) {
    close(this);
    uVar2 = 0;
  }
  else {
    if (param_2) {
      setOptNonBlock(this);
    }
    printf("succeeded in binding TCP socket port #%d\n",(uint)param_1);
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## close

```asm
// === 081af80c nexon::cash::TCPSocket::close  [0x081af80c-0x81af85d] ===
 81af80c:	55                   	push   %ebp
 81af80d:	89 e5                	mov    %esp,%ebp
 81af80f:	83 ec 18             	sub    $0x18,%esp
 81af812:	8b 45 08             	mov    0x8(%ebp),%eax
 81af815:	8b 00                	mov    (%eax),%eax
 81af817:	83 f8 ff             	cmp    $0xffffffff,%eax
 81af81a:	74 3f                	je     81af85b <_ZN5nexon4cash9TCPSocket5closeEv+0x4f>
 81af81c:	8b 45 08             	mov    0x8(%ebp),%eax
 81af81f:	8b 00                	mov    (%eax),%eax
 81af821:	89 04 24             	mov    %eax,(%esp)
 81af824:	e8 37 e0 ec ff       	call   807d860 <close@plt>
 81af829:	8b 45 08             	mov    0x8(%ebp),%eax
 81af82c:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%eax)
 81af832:	8b 45 08             	mov    0x8(%ebp),%eax
 81af835:	83 c0 14             	add    $0x14,%eax
 81af838:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 81af83f:	00 
 81af840:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81af847:	00 
 81af848:	89 04 24             	mov    %eax,(%esp)
 81af84b:	e8 70 e4 ec ff       	call   807dcc0 <memset@plt>
 81af850:	8b 45 08             	mov    0x8(%ebp),%eax
 81af853:	66 c7 40 18 00 00    	movw   $0x0,0x18(%eax)
 81af859:	eb 01                	jmp    81af85c <_ZN5nexon4cash9TCPSocket5closeEv+0x50>
 81af85b:	90                   	nop
 81af85c:	c9                   	leave
 81af85d:	c3                   	ret

```

```c
// nexon::cash::TCPSocket::close @ 0x81af80c

/* nexon::cash::TCPSocket::close() */

void __thiscall nexon::cash::TCPSocket::close(TCPSocket *this)

{
  if (*(int *)this != -1) {
    ::close(*(int *)this);
    *(undefined4 *)this = 0xffffffff;
    memset(this + 0x14,0,4);
    *(undefined2 *)(this + 0x18) = 0;
  }
  return;
}

```

---

## connect

```asm
// === 081af9ea nexon::cash::TCPSocket::connect  [0x081af9ea-0x81afa97] ===
 81af9ea:	55                   	push   %ebp
 81af9eb:	89 e5                	mov    %esp,%ebp
 81af9ed:	83 ec 48             	sub    $0x48,%esp
 81af9f0:	8b 45 10             	mov    0x10(%ebp),%eax
 81af9f3:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 81af9f7:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 81af9fe:	00 
 81af9ff:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81afa06:	00 
 81afa07:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81afa0a:	89 04 24             	mov    %eax,(%esp)
 81afa0d:	e8 ae e2 ec ff       	call   807dcc0 <memset@plt>
 81afa12:	66 c7 45 e4 02 00    	movw   $0x2,-0x1c(%ebp)
 81afa18:	8b 45 0c             	mov    0xc(%ebp),%eax
 81afa1b:	89 04 24             	mov    %eax,(%esp)
 81afa1e:	e8 0d eb ec ff       	call   807e530 <inet_addr@plt>
 81afa23:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81afa26:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 81afa2a:	89 04 24             	mov    %eax,(%esp)
 81afa2d:	e8 4e ec ec ff       	call   807e680 <htons@plt>
 81afa32:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 81afa36:	c7 45 f4 10 00 00 00 	movl   $0x10,-0xc(%ebp)
 81afa3d:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 81afa40:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 81afa43:	8b 45 08             	mov    0x8(%ebp),%eax
 81afa46:	8b 00                	mov    (%eax),%eax
 81afa48:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81afa4c:	89 54 24 04          	mov    %edx,0x4(%esp)
 81afa50:	89 04 24             	mov    %eax,(%esp)
 81afa53:	e8 d8 e7 ec ff       	call   807e230 <connect@plt>
 81afa58:	c1 e8 1f             	shr    $0x1f,%eax
 81afa5b:	84 c0                	test   %al,%al
 81afa5d:	74 07                	je     81afa66 <_ZN5nexon4cash9TCPSocket7connectEPKct+0x7c>
 81afa5f:	b8 00 00 00 00       	mov    $0x0,%eax
 81afa64:	eb 30                	jmp    81afa96 <_ZN5nexon4cash9TCPSocket7connectEPKct+0xac>
 81afa66:	8b 45 08             	mov    0x8(%ebp),%eax
 81afa69:	83 c0 14             	add    $0x14,%eax
 81afa6c:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 81afa73:	00 
 81afa74:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 81afa77:	83 c2 04             	add    $0x4,%edx
 81afa7a:	89 54 24 04          	mov    %edx,0x4(%esp)
 81afa7e:	89 04 24             	mov    %eax,(%esp)
 81afa81:	e8 1a de ec ff       	call   807d8a0 <memcpy@plt>
 81afa86:	0f b7 55 e6          	movzwl -0x1a(%ebp),%edx
 81afa8a:	8b 45 08             	mov    0x8(%ebp),%eax
 81afa8d:	66 89 50 18          	mov    %dx,0x18(%eax)
 81afa91:	b8 01 00 00 00       	mov    $0x1,%eax
 81afa96:	c9                   	leave
 81afa97:	c3                   	ret

```

```c
// nexon::cash::TCPSocket::connect @ 0x81af9ea

/* nexon::cash::TCPSocket::connect(char const*, unsigned short) */

bool __thiscall nexon::cash::TCPSocket::connect(TCPSocket *this,char *param_1,ushort param_2)

{
  int iVar1;
  sockaddr local_20;
  undefined4 local_10;
  
  memset(&local_20,0,0x10);
  local_20.sa_family = 2;
  local_20.sa_data._2_4_ = inet_addr(param_1);
  local_20.sa_data._0_2_ = htons(param_2);
  local_10 = 0x10;
  iVar1 = ::connect(*(int *)this,&local_20,0x10);
  if (-1 < iVar1) {
    memcpy(this + 0x14,local_20.sa_data + 2,4);
    *(undefined2 *)(this + 0x18) = local_20.sa_data._0_2_;
  }
  return -1 < iVar1;
}

```

---

## connect_nonb

```asm
// === 081afa98 nexon::cash::TCPSocket::connect_nonb  [0x081afa98-0x81afcc7] ===
 81afa98:	55                   	push   %ebp
 81afa99:	89 e5                	mov    %esp,%ebp
 81afa9b:	57                   	push   %edi
 81afa9c:	56                   	push   %esi
 81afa9d:	53                   	push   %ebx
 81afa9e:	81 ec ec 00 00 00    	sub    $0xec,%esp
 81afaa4:	8b 45 10             	mov    0x10(%ebp),%eax
 81afaa7:	66 89 85 34 ff ff ff 	mov    %ax,-0xcc(%ebp)
 81afaae:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 81afab5:	00 
 81afab6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81afabd:	00 
 81afabe:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81afac1:	89 04 24             	mov    %eax,(%esp)
 81afac4:	e8 f7 e1 ec ff       	call   807dcc0 <memset@plt>
 81afac9:	66 c7 45 c4 02 00    	movw   $0x2,-0x3c(%ebp)
 81afacf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81afad2:	89 04 24             	mov    %eax,(%esp)
 81afad5:	e8 56 ea ec ff       	call   807e530 <inet_addr@plt>
 81afada:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81afadd:	0f b7 85 34 ff ff ff 	movzwl -0xcc(%ebp),%eax
 81afae4:	89 04 24             	mov    %eax,(%esp)
 81afae7:	e8 94 eb ec ff       	call   807e680 <htons@plt>
 81afaec:	66 89 45 c6          	mov    %ax,-0x3a(%ebp)
 81afaf0:	c7 45 d4 10 00 00 00 	movl   $0x10,-0x2c(%ebp)
 81afaf7:	8b 45 08             	mov    0x8(%ebp),%eax
 81afafa:	89 04 24             	mov    %eax,(%esp)
 81afafd:	e8 5c fd ff ff       	call   81af85e <_ZN5nexon4cash9TCPSocket14setOptNonBlockEv>
 81afb02:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 81afb09:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 81afb0c:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 81afb0f:	8b 45 08             	mov    0x8(%ebp),%eax
 81afb12:	8b 00                	mov    (%eax),%eax
 81afb14:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81afb18:	89 54 24 04          	mov    %edx,0x4(%esp)
 81afb1c:	89 04 24             	mov    %eax,(%esp)
 81afb1f:	e8 0c e7 ec ff       	call   807e230 <connect@plt>
 81afb24:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81afb27:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81afb2a:	c1 e8 1f             	shr    $0x1f,%eax
 81afb2d:	84 c0                	test   %al,%al
 81afb2f:	74 3a                	je     81afb6b <_ZN5nexon4cash9TCPSocket12connect_nonbEPKct7timeval+0xd3>
 81afb31:	e8 3a e2 ec ff       	call   807dd70 <__errno_location@plt>
 81afb36:	8b 00                	mov    (%eax),%eax
 81afb38:	83 f8 73             	cmp    $0x73,%eax
 81afb3b:	74 2e                	je     81afb6b <_ZN5nexon4cash9TCPSocket12connect_nonbEPKct7timeval+0xd3>
 81afb3d:	e8 2e e2 ec ff       	call   807dd70 <__errno_location@plt>
 81afb42:	8b 00                	mov    (%eax),%eax
 81afb44:	83 f8 04             	cmp    $0x4,%eax
 81afb47:	74 22                	je     81afb6b <_ZN5nexon4cash9TCPSocket12connect_nonbEPKct7timeval+0xd3>
 81afb49:	e8 22 e2 ec ff       	call   807dd70 <__errno_location@plt>
 81afb4e:	8b 00                	mov    (%eax),%eax
 81afb50:	83 f8 0b             	cmp    $0xb,%eax
 81afb53:	74 16                	je     81afb6b <_ZN5nexon4cash9TCPSocket12connect_nonbEPKct7timeval+0xd3>
 81afb55:	e8 16 e2 ec ff       	call   807dd70 <__errno_location@plt>
 81afb5a:	8b 00                	mov    (%eax),%eax
 81afb5c:	83 f8 0b             	cmp    $0xb,%eax
 81afb5f:	74 0a                	je     81afb6b <_ZN5nexon4cash9TCPSocket12connect_nonbEPKct7timeval+0xd3>
 81afb61:	b8 00 00 00 00       	mov    $0x0,%eax
 81afb66:	e9 52 01 00 00       	jmp    81afcbd <_ZN5nexon4cash9TCPSocket12connect_nonbEPKct7timeval+0x225>
 81afb6b:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 81afb6f:	0f 84 18 01 00 00    	je     81afc8d <_ZN5nexon4cash9TCPSocket12connect_nonbEPKct7timeval+0x1f5>
 81afb75:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 81afb7b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81afb7e:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 81afb85:	eb 11                	jmp    81afb98 <_ZN5nexon4cash9TCPSocket12connect_nonbEPKct7timeval+0x100>
 81afb87:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81afb8a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81afb8d:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 81afb94:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 81afb98:	83 7d e0 1f          	cmpl   $0x1f,-0x20(%ebp)
 81afb9c:	0f 96 c0             	setbe  %al
 81afb9f:	84 c0                	test   %al,%al
 81afba1:	75 e4                	jne    81afb87 <_ZN5nexon4cash9TCPSocket12connect_nonbEPKct7timeval+0xef>
 81afba3:	8b 45 08             	mov    0x8(%ebp),%eax
 81afba6:	8b 00                	mov    (%eax),%eax
 81afba8:	c1 e8 05             	shr    $0x5,%eax
 81afbab:	89 c2                	mov    %eax,%edx
 81afbad:	8b 9c 85 3c ff ff ff 	mov    -0xc4(%ebp,%eax,4),%ebx
 81afbb4:	8b 45 08             	mov    0x8(%ebp),%eax
 81afbb7:	8b 00                	mov    (%eax),%eax
 81afbb9:	83 e0 1f             	and    $0x1f,%eax
 81afbbc:	be 01 00 00 00       	mov    $0x1,%esi
 81afbc1:	89 f7                	mov    %esi,%edi
 81afbc3:	89 c1                	mov    %eax,%ecx
 81afbc5:	d3 e7                	shl    %cl,%edi
 81afbc7:	89 f8                	mov    %edi,%eax
 81afbc9:	09 d8                	or     %ebx,%eax
 81afbcb:	89 84 95 3c ff ff ff 	mov    %eax,-0xc4(%ebp,%edx,4)
 81afbd2:	8b 45 08             	mov    0x8(%ebp),%eax
 81afbd5:	8b 00                	mov    (%eax),%eax
 81afbd7:	8d 50 01             	lea    0x1(%eax),%edx
 81afbda:	8d 45 14             	lea    0x14(%ebp),%eax
 81afbdd:	89 44 24 10          	mov    %eax,0x10(%esp)
 81afbe1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81afbe8:	00 
 81afbe9:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 81afbef:	89 44 24 08          	mov    %eax,0x8(%esp)
 81afbf3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81afbfa:	00 
 81afbfb:	89 14 24             	mov    %edx,(%esp)
 81afbfe:	e8 3d ec ec ff       	call   807e840 <select@plt>
 81afc03:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81afc06:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 81afc0a:	79 13                	jns    81afc1f <_ZN5nexon4cash9TCPSocket12connect_nonbEPKct7timeval+0x187>
 81afc0c:	e8 5f e1 ec ff       	call   807dd70 <__errno_location@plt>
 81afc11:	8b 00                	mov    (%eax),%eax
 81afc13:	83 f8 04             	cmp    $0x4,%eax
 81afc16:	74 07                	je     81afc1f <_ZN5nexon4cash9TCPSocket12connect_nonbEPKct7timeval+0x187>
 81afc18:	b8 01 00 00 00       	mov    $0x1,%eax
 81afc1d:	eb 05                	jmp    81afc24 <_ZN5nexon4cash9TCPSocket12connect_nonbEPKct7timeval+0x18c>
 81afc1f:	b8 00 00 00 00       	mov    $0x0,%eax
 81afc24:	84 c0                	test   %al,%al
 81afc26:	74 0a                	je     81afc32 <_ZN5nexon4cash9TCPSocket12connect_nonbEPKct7timeval+0x19a>
 81afc28:	b8 00 00 00 00       	mov    $0x0,%eax
 81afc2d:	e9 8b 00 00 00       	jmp    81afcbd <_ZN5nexon4cash9TCPSocket12connect_nonbEPKct7timeval+0x225>
 81afc32:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 81afc36:	7e 4e                	jle    81afc86 <_ZN5nexon4cash9TCPSocket12connect_nonbEPKct7timeval+0x1ee>
 81afc38:	c7 45 c0 04 00 00 00 	movl   $0x4,-0x40(%ebp)
 81afc3f:	8d 55 bc             	lea    -0x44(%ebp),%edx
 81afc42:	8b 45 08             	mov    0x8(%ebp),%eax
 81afc45:	8b 00                	mov    (%eax),%eax
 81afc47:	8d 4d c0             	lea    -0x40(%ebp),%ecx
 81afc4a:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81afc4e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81afc52:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 81afc59:	00 
 81afc5a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81afc61:	00 
 81afc62:	89 04 24             	mov    %eax,(%esp)
 81afc65:	e8 76 ea ec ff       	call   807e6e0 <getsockopt@plt>
 81afc6a:	c1 e8 1f             	shr    $0x1f,%eax
 81afc6d:	84 c0                	test   %al,%al
 81afc6f:	74 07                	je     81afc78 <_ZN5nexon4cash9TCPSocket12connect_nonbEPKct7timeval+0x1e0>
 81afc71:	b8 00 00 00 00       	mov    $0x0,%eax
 81afc76:	eb 45                	jmp    81afcbd <_ZN5nexon4cash9TCPSocket12connect_nonbEPKct7timeval+0x225>
 81afc78:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81afc7b:	85 c0                	test   %eax,%eax
 81afc7d:	74 0e                	je     81afc8d <_ZN5nexon4cash9TCPSocket12connect_nonbEPKct7timeval+0x1f5>
 81afc7f:	b8 00 00 00 00       	mov    $0x0,%eax
 81afc84:	eb 37                	jmp    81afcbd <_ZN5nexon4cash9TCPSocket12connect_nonbEPKct7timeval+0x225>
 81afc86:	b8 00 00 00 00       	mov    $0x0,%eax
 81afc8b:	eb 30                	jmp    81afcbd <_ZN5nexon4cash9TCPSocket12connect_nonbEPKct7timeval+0x225>
 81afc8d:	8b 45 08             	mov    0x8(%ebp),%eax
 81afc90:	83 c0 14             	add    $0x14,%eax
 81afc93:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 81afc9a:	00 
 81afc9b:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 81afc9e:	83 c2 04             	add    $0x4,%edx
 81afca1:	89 54 24 04          	mov    %edx,0x4(%esp)
 81afca5:	89 04 24             	mov    %eax,(%esp)
 81afca8:	e8 f3 db ec ff       	call   807d8a0 <memcpy@plt>
 81afcad:	0f b7 55 c6          	movzwl -0x3a(%ebp),%edx
 81afcb1:	8b 45 08             	mov    0x8(%ebp),%eax
 81afcb4:	66 89 50 18          	mov    %dx,0x18(%eax)
 81afcb8:	b8 01 00 00 00       	mov    $0x1,%eax
 81afcbd:	81 c4 ec 00 00 00    	add    $0xec,%esp
 81afcc3:	5b                   	pop    %ebx
 81afcc4:	5e                   	pop    %esi
 81afcc5:	5f                   	pop    %edi
 81afcc6:	5d                   	pop    %ebp
 81afcc7:	c3                   	ret

```

```c
// nexon::cash::TCPSocket::connect_nonb @ 0x81afa98

/* nexon::cash::TCPSocket::connect_nonb(char const*, unsigned short, timeval) */

undefined4 nexon::cash::TCPSocket::connect_nonb(char *param_1,ushort param_2,timeval param_3)

{
  bool bVar1;
  uint16_t __hostshort;
  int *piVar2;
  int iVar3;
  undefined2 in_stack_0000000a;
  fd_set local_c8;
  int local_48 [2];
  sockaddr local_40;
  socklen_t local_30;
  int local_2c;
  undefined4 local_28;
  uint local_24;
  fd_set *local_20;
  
  __hostshort = (uint16_t)param_3.tv_sec;
  memset(&local_40,0,0x10);
  local_40.sa_family = 2;
  local_40.sa_data._2_4_ = inet_addr(_param_2);
  local_40.sa_data._0_2_ = htons(__hostshort);
  local_30 = 0x10;
  setOptNonBlock((TCPSocket *)param_1);
  local_28 = 0;
  local_2c = ::connect(*(int *)param_1,&local_40,local_30);
  if ((((local_2c < 0) && (piVar2 = __errno_location(), *piVar2 != 0x73)) &&
      (piVar2 = __errno_location(), *piVar2 != 4)) &&
     ((piVar2 = __errno_location(), *piVar2 != 0xb && (piVar2 = __errno_location(), *piVar2 != 0xb))
     )) {
    return 0;
  }
  if (local_2c != 0) {
    local_20 = &local_c8;
    for (local_24 = 0; local_24 < 0x20; local_24 = local_24 + 1) {
      local_c8.fds_bits[local_24] = 0;
    }
    local_c8.fds_bits[*(uint *)param_1 >> 5] =
         1 << ((byte)*(undefined4 *)param_1 & 0x1f) | local_c8.fds_bits[*(uint *)param_1 >> 5];
    local_2c = select(*(int *)param_1 + 1,(fd_set *)0x0,&local_c8,(fd_set *)0x0,
                      (timeval *)&param_3.tv_usec);
    if ((local_2c < 0) && (piVar2 = __errno_location(), *piVar2 != 4)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return 0;
    }
    if (local_2c < 1) {
      return 0;
    }
    local_48[1] = 4;
    iVar3 = getsockopt(*(int *)param_1,1,4,local_48,(socklen_t *)(local_48 + 1));
    if (iVar3 < 0) {
      return 0;
    }
    if (local_48[0] != 0) {
      return 0;
    }
  }
  memcpy(param_1 + 0x14,local_40.sa_data + 2,4);
  *(undefined2 *)(param_1 + 0x18) = local_40.sa_data._0_2_;
  return 1;
}

```

---

## getHandle

```asm
// === 081af7f4 nexon::cash::TCPSocket::getHandle  [0x081af7f4-0x81af7fd] ===
 81af7f4:	55                   	push   %ebp
 81af7f5:	89 e5                	mov    %esp,%ebp
 81af7f7:	8b 45 08             	mov    0x8(%ebp),%eax
 81af7fa:	8b 00                	mov    (%eax),%eax
 81af7fc:	5d                   	pop    %ebp
 81af7fd:	c3                   	ret

```

```c
// nexon::cash::TCPSocket::getHandle @ 0x81af7f4

/* nexon::cash::TCPSocket::getHandle() const */

undefined4 __thiscall nexon::cash::TCPSocket::getHandle(TCPSocket *this)

{
  return *(undefined4 *)this;
}

```

---

## getPeerAdrs

```asm
// === 081affb8 nexon::cash::TCPSocket::getPeerAdrs  [0x081affb8-0x81affc3] ===
 81affb8:	55                   	push   %ebp
 81affb9:	89 e5                	mov    %esp,%ebp
 81affbb:	8b 45 08             	mov    0x8(%ebp),%eax
 81affbe:	83 c0 14             	add    $0x14,%eax
 81affc1:	5d                   	pop    %ebp
 81affc2:	c3                   	ret
 81affc3:	90                   	nop

```

```c
// nexon::cash::TCPSocket::getPeerAdrs @ 0x81affb8

/* nexon::cash::TCPSocket::getPeerAdrs() */

TCPSocket * __thiscall nexon::cash::TCPSocket::getPeerAdrs(TCPSocket *this)

{
  return this + 0x14;
}

```

---

## getPeerPort

```asm
// === 081affc4 nexon::cash::TCPSocket::getPeerPort  [0x081affc4-0x81affcf] ===
 81affc4:	55                   	push   %ebp
 81affc5:	89 e5                	mov    %esp,%ebp
 81affc7:	8b 45 08             	mov    0x8(%ebp),%eax
 81affca:	0f b7 40 18          	movzwl 0x18(%eax),%eax
 81affce:	5d                   	pop    %ebp
 81affcf:	c3                   	ret

```

```c
// nexon::cash::TCPSocket::getPeerPort @ 0x81affc4

/* nexon::cash::TCPSocket::getPeerPort() */

undefined2 __thiscall nexon::cash::TCPSocket::getPeerPort(TCPSocket *this)

{
  return *(undefined2 *)(this + 0x18);
}

```

---

## listen

```asm
// === 081af674 nexon::cash::TCPSocket::listen  [0x081af674-0x81af6ad] ===
 81af674:	55                   	push   %ebp
 81af675:	89 e5                	mov    %esp,%ebp
 81af677:	83 ec 18             	sub    $0x18,%esp
 81af67a:	8b 45 08             	mov    0x8(%ebp),%eax
 81af67d:	8b 00                	mov    (%eax),%eax
 81af67f:	8b 55 0c             	mov    0xc(%ebp),%edx
 81af682:	89 54 24 04          	mov    %edx,0x4(%esp)
 81af686:	89 04 24             	mov    %eax,(%esp)
 81af689:	e8 e2 e0 ec ff       	call   807d770 <listen@plt>
 81af68e:	c1 e8 1f             	shr    $0x1f,%eax
 81af691:	84 c0                	test   %al,%al
 81af693:	74 12                	je     81af6a7 <_ZN5nexon4cash9TCPSocket6listenEi+0x33>
 81af695:	8b 45 08             	mov    0x8(%ebp),%eax
 81af698:	89 04 24             	mov    %eax,(%esp)
 81af69b:	e8 6c 01 00 00       	call   81af80c <_ZN5nexon4cash9TCPSocket5closeEv>
 81af6a0:	b8 00 00 00 00       	mov    $0x0,%eax
 81af6a5:	eb 05                	jmp    81af6ac <_ZN5nexon4cash9TCPSocket6listenEi+0x38>
 81af6a7:	b8 01 00 00 00       	mov    $0x1,%eax
 81af6ac:	c9                   	leave
 81af6ad:	c3                   	ret

```

```c
// nexon::cash::TCPSocket::listen @ 0x81af674

/* nexon::cash::TCPSocket::listen(int) */

bool __thiscall nexon::cash::TCPSocket::listen(TCPSocket *this,int param_1)

{
  int iVar1;
  
  iVar1 = ::listen(*(int *)this,param_1);
  if (-1 >= iVar1) {
    close(this);
  }
  return -1 < iVar1;
}

```

---

## open

```asm
// === 081af532 nexon::cash::TCPSocket::open  [0x081af532-0x81af5b3] ===
 81af532:	55                   	push   %ebp
 81af533:	89 e5                	mov    %esp,%ebp
 81af535:	83 ec 28             	sub    $0x28,%esp
 81af538:	c7 44 24 08 06 00 00 	movl   $0x6,0x8(%esp)
 81af53f:	00 
 81af540:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81af547:	00 
 81af548:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 81af54f:	e8 5c e5 ec ff       	call   807dab0 <socket@plt>
 81af554:	8b 55 08             	mov    0x8(%ebp),%edx
 81af557:	89 02                	mov    %eax,(%edx)
 81af559:	8b 45 08             	mov    0x8(%ebp),%eax
 81af55c:	8b 00                	mov    (%eax),%eax
 81af55e:	83 f8 ff             	cmp    $0xffffffff,%eax
 81af561:	75 24                	jne    81af587 <_ZN5nexon4cash9TCPSocket4openEv+0x55>
 81af563:	e8 08 e8 ec ff       	call   807dd70 <__errno_location@plt>
 81af568:	8b 00                	mov    (%eax),%eax
 81af56a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81af56d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81af570:	89 44 24 04          	mov    %eax,0x4(%esp)
 81af574:	c7 04 24 ac 4a bb 08 	movl   $0x8bb4aac,(%esp)
 81af57b:	e8 e0 e5 ec ff       	call   807db60 <printf@plt>
 81af580:	b8 00 00 00 00       	mov    $0x0,%eax
 81af585:	eb 2b                	jmp    81af5b2 <_ZN5nexon4cash9TCPSocket4openEv+0x80>
 81af587:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81af58e:	00 
 81af58f:	8b 45 08             	mov    0x8(%ebp),%eax
 81af592:	89 04 24             	mov    %eax,(%esp)
 81af595:	e8 8c 03 00 00       	call   81af926 <_ZN5nexon4cash9TCPSocket12setOptLingerEb>
 81af59a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81af5a1:	00 
 81af5a2:	8b 45 08             	mov    0x8(%ebp),%eax
 81af5a5:	89 04 24             	mov    %eax,(%esp)
 81af5a8:	e8 e3 03 00 00       	call   81af990 <_ZN5nexon4cash9TCPSocket11setOptNagleEb>
 81af5ad:	b8 01 00 00 00       	mov    $0x1,%eax
 81af5b2:	c9                   	leave
 81af5b3:	c3                   	ret

```

```c
// nexon::cash::TCPSocket::open @ 0x81af532

/* nexon::cash::TCPSocket::open() */

bool __thiscall nexon::cash::TCPSocket::open(TCPSocket *this)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = socket(2,1,6);
  *(int *)this = iVar1;
  iVar1 = *(int *)this;
  if (iVar1 != -1) {
    setOptLinger(this,false);
    setOptNagle(this,false);
  }
  else {
    piVar2 = __errno_location();
    printf("Could not create a TDP socket : %d\n",*piVar2);
  }
  return iVar1 != -1;
}

```

---

## pollErrorEvent

```asm
// === 081afe60 nexon::cash::TCPSocket::pollErrorEvent  [0x081afe60-0x81aff2b] ===
 81afe60:	55                   	push   %ebp
 81afe61:	89 e5                	mov    %esp,%ebp
 81afe63:	57                   	push   %edi
 81afe64:	56                   	push   %esi
 81afe65:	53                   	push   %ebx
 81afe66:	81 ec cc 00 00 00    	sub    $0xcc,%esp
 81afe6c:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81afe72:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81afe75:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 81afe7c:	eb 11                	jmp    81afe8f <_ZNK5nexon4cash9TCPSocket14pollErrorEventEv+0x2f>
 81afe7e:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81afe81:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81afe84:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 81afe8b:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 81afe8f:	83 7d e0 1f          	cmpl   $0x1f,-0x20(%ebp)
 81afe93:	0f 96 c0             	setbe  %al
 81afe96:	84 c0                	test   %al,%al
 81afe98:	75 e4                	jne    81afe7e <_ZNK5nexon4cash9TCPSocket14pollErrorEventEv+0x1e>
 81afe9a:	8b 45 08             	mov    0x8(%ebp),%eax
 81afe9d:	8b 00                	mov    (%eax),%eax
 81afe9f:	89 c2                	mov    %eax,%edx
 81afea1:	c1 ea 05             	shr    $0x5,%edx
 81afea4:	8b 45 08             	mov    0x8(%ebp),%eax
 81afea7:	8b 00                	mov    (%eax),%eax
 81afea9:	c1 e8 05             	shr    $0x5,%eax
 81afeac:	8b 9c 85 54 ff ff ff 	mov    -0xac(%ebp,%eax,4),%ebx
 81afeb3:	8b 45 08             	mov    0x8(%ebp),%eax
 81afeb6:	8b 00                	mov    (%eax),%eax
 81afeb8:	83 e0 1f             	and    $0x1f,%eax
 81afebb:	be 01 00 00 00       	mov    $0x1,%esi
 81afec0:	89 f7                	mov    %esi,%edi
 81afec2:	89 c1                	mov    %eax,%ecx
 81afec4:	d3 e7                	shl    %cl,%edi
 81afec6:	89 f8                	mov    %edi,%eax
 81afec8:	09 d8                	or     %ebx,%eax
 81afeca:	89 84 95 54 ff ff ff 	mov    %eax,-0xac(%ebp,%edx,4)
 81afed1:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 81afed8:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 81afedf:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81afee2:	89 44 24 10          	mov    %eax,0x10(%esp)
 81afee6:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81afeec:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81afef0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81afef7:	00 
 81afef8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81afeff:	00 
 81aff00:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 81aff07:	e8 34 e9 ec ff       	call   807e840 <select@plt>
 81aff0c:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81aff0f:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 81aff13:	75 07                	jne    81aff1c <_ZNK5nexon4cash9TCPSocket14pollErrorEventEv+0xbc>
 81aff15:	b8 00 00 00 00       	mov    $0x0,%eax
 81aff1a:	eb 05                	jmp    81aff21 <_ZNK5nexon4cash9TCPSocket14pollErrorEventEv+0xc1>
 81aff1c:	b8 01 00 00 00       	mov    $0x1,%eax
 81aff21:	81 c4 cc 00 00 00    	add    $0xcc,%esp
 81aff27:	5b                   	pop    %ebx
 81aff28:	5e                   	pop    %esi
 81aff29:	5f                   	pop    %edi
 81aff2a:	5d                   	pop    %ebp
 81aff2b:	c3                   	ret

```

```c
// nexon::cash::TCPSocket::pollErrorEvent @ 0x81afe60

/* nexon::cash::TCPSocket::pollErrorEvent() const */

bool __thiscall nexon::cash::TCPSocket::pollErrorEvent(TCPSocket *this)

{
  int iVar1;
  fd_set local_b0;
  timeval local_30;
  uint local_24;
  fd_set *local_20;
  
  local_20 = &local_b0;
  for (local_24 = 0; local_24 < 0x20; local_24 = local_24 + 1) {
    local_b0.fds_bits[local_24] = 0;
  }
  local_b0.fds_bits[*(uint *)this >> 5] =
       1 << ((byte)*(undefined4 *)this & 0x1f) | local_b0.fds_bits[*(uint *)this >> 5];
  local_30.tv_sec = 0;
  local_30.tv_usec = 0;
  iVar1 = select(2,(fd_set *)0x0,(fd_set *)0x0,&local_b0,&local_30);
  return iVar1 != 0;
}

```

---

## pollReadEvent

```asm
// === 081afcc8 nexon::cash::TCPSocket::pollReadEvent  [0x081afcc8-0x81afd93] ===
 81afcc8:	55                   	push   %ebp
 81afcc9:	89 e5                	mov    %esp,%ebp
 81afccb:	57                   	push   %edi
 81afccc:	56                   	push   %esi
 81afccd:	53                   	push   %ebx
 81afcce:	81 ec cc 00 00 00    	sub    $0xcc,%esp
 81afcd4:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81afcda:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81afcdd:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 81afce4:	eb 11                	jmp    81afcf7 <_ZNK5nexon4cash9TCPSocket13pollReadEventEv+0x2f>
 81afce6:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81afce9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81afcec:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 81afcf3:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 81afcf7:	83 7d e0 1f          	cmpl   $0x1f,-0x20(%ebp)
 81afcfb:	0f 96 c0             	setbe  %al
 81afcfe:	84 c0                	test   %al,%al
 81afd00:	75 e4                	jne    81afce6 <_ZNK5nexon4cash9TCPSocket13pollReadEventEv+0x1e>
 81afd02:	8b 45 08             	mov    0x8(%ebp),%eax
 81afd05:	8b 00                	mov    (%eax),%eax
 81afd07:	89 c2                	mov    %eax,%edx
 81afd09:	c1 ea 05             	shr    $0x5,%edx
 81afd0c:	8b 45 08             	mov    0x8(%ebp),%eax
 81afd0f:	8b 00                	mov    (%eax),%eax
 81afd11:	c1 e8 05             	shr    $0x5,%eax
 81afd14:	8b 9c 85 54 ff ff ff 	mov    -0xac(%ebp,%eax,4),%ebx
 81afd1b:	8b 45 08             	mov    0x8(%ebp),%eax
 81afd1e:	8b 00                	mov    (%eax),%eax
 81afd20:	83 e0 1f             	and    $0x1f,%eax
 81afd23:	be 01 00 00 00       	mov    $0x1,%esi
 81afd28:	89 f7                	mov    %esi,%edi
 81afd2a:	89 c1                	mov    %eax,%ecx
 81afd2c:	d3 e7                	shl    %cl,%edi
 81afd2e:	89 f8                	mov    %edi,%eax
 81afd30:	09 d8                	or     %ebx,%eax
 81afd32:	89 84 95 54 ff ff ff 	mov    %eax,-0xac(%ebp,%edx,4)
 81afd39:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 81afd40:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 81afd47:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81afd4a:	89 44 24 10          	mov    %eax,0x10(%esp)
 81afd4e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81afd55:	00 
 81afd56:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81afd5d:	00 
 81afd5e:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81afd64:	89 44 24 04          	mov    %eax,0x4(%esp)
 81afd68:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 81afd6f:	e8 cc ea ec ff       	call   807e840 <select@plt>
 81afd74:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81afd77:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 81afd7b:	75 07                	jne    81afd84 <_ZNK5nexon4cash9TCPSocket13pollReadEventEv+0xbc>
 81afd7d:	b8 00 00 00 00       	mov    $0x0,%eax
 81afd82:	eb 05                	jmp    81afd89 <_ZNK5nexon4cash9TCPSocket13pollReadEventEv+0xc1>
 81afd84:	b8 01 00 00 00       	mov    $0x1,%eax
 81afd89:	81 c4 cc 00 00 00    	add    $0xcc,%esp
 81afd8f:	5b                   	pop    %ebx
 81afd90:	5e                   	pop    %esi
 81afd91:	5f                   	pop    %edi
 81afd92:	5d                   	pop    %ebp
 81afd93:	c3                   	ret

```

```c
// nexon::cash::TCPSocket::pollReadEvent @ 0x81afcc8

/* nexon::cash::TCPSocket::pollReadEvent() const */

bool __thiscall nexon::cash::TCPSocket::pollReadEvent(TCPSocket *this)

{
  int iVar1;
  fd_set local_b0;
  timeval local_30;
  uint local_24;
  fd_set *local_20;
  
  local_20 = &local_b0;
  for (local_24 = 0; local_24 < 0x20; local_24 = local_24 + 1) {
    local_b0.fds_bits[local_24] = 0;
  }
  local_b0.fds_bits[*(uint *)this >> 5] =
       1 << ((byte)*(undefined4 *)this & 0x1f) | local_b0.fds_bits[*(uint *)this >> 5];
  local_30.tv_sec = 0;
  local_30.tv_usec = 0;
  iVar1 = select(2,&local_b0,(fd_set *)0x0,(fd_set *)0x0,&local_30);
  return iVar1 != 0;
}

```

---

## pollWriteEvent

```asm
// === 081afd94 nexon::cash::TCPSocket::pollWriteEvent  [0x081afd94-0x81afe5f] ===
 81afd94:	55                   	push   %ebp
 81afd95:	89 e5                	mov    %esp,%ebp
 81afd97:	57                   	push   %edi
 81afd98:	56                   	push   %esi
 81afd99:	53                   	push   %ebx
 81afd9a:	81 ec cc 00 00 00    	sub    $0xcc,%esp
 81afda0:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81afda6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81afda9:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 81afdb0:	eb 11                	jmp    81afdc3 <_ZNK5nexon4cash9TCPSocket14pollWriteEventEv+0x2f>
 81afdb2:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81afdb5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81afdb8:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 81afdbf:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 81afdc3:	83 7d e0 1f          	cmpl   $0x1f,-0x20(%ebp)
 81afdc7:	0f 96 c0             	setbe  %al
 81afdca:	84 c0                	test   %al,%al
 81afdcc:	75 e4                	jne    81afdb2 <_ZNK5nexon4cash9TCPSocket14pollWriteEventEv+0x1e>
 81afdce:	8b 45 08             	mov    0x8(%ebp),%eax
 81afdd1:	8b 00                	mov    (%eax),%eax
 81afdd3:	89 c2                	mov    %eax,%edx
 81afdd5:	c1 ea 05             	shr    $0x5,%edx
 81afdd8:	8b 45 08             	mov    0x8(%ebp),%eax
 81afddb:	8b 00                	mov    (%eax),%eax
 81afddd:	c1 e8 05             	shr    $0x5,%eax
 81afde0:	8b 9c 85 54 ff ff ff 	mov    -0xac(%ebp,%eax,4),%ebx
 81afde7:	8b 45 08             	mov    0x8(%ebp),%eax
 81afdea:	8b 00                	mov    (%eax),%eax
 81afdec:	83 e0 1f             	and    $0x1f,%eax
 81afdef:	be 01 00 00 00       	mov    $0x1,%esi
 81afdf4:	89 f7                	mov    %esi,%edi
 81afdf6:	89 c1                	mov    %eax,%ecx
 81afdf8:	d3 e7                	shl    %cl,%edi
 81afdfa:	89 f8                	mov    %edi,%eax
 81afdfc:	09 d8                	or     %ebx,%eax
 81afdfe:	89 84 95 54 ff ff ff 	mov    %eax,-0xac(%ebp,%edx,4)
 81afe05:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 81afe0c:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 81afe13:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81afe16:	89 44 24 10          	mov    %eax,0x10(%esp)
 81afe1a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81afe21:	00 
 81afe22:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81afe28:	89 44 24 08          	mov    %eax,0x8(%esp)
 81afe2c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81afe33:	00 
 81afe34:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 81afe3b:	e8 00 ea ec ff       	call   807e840 <select@plt>
 81afe40:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81afe43:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 81afe47:	75 07                	jne    81afe50 <_ZNK5nexon4cash9TCPSocket14pollWriteEventEv+0xbc>
 81afe49:	b8 00 00 00 00       	mov    $0x0,%eax
 81afe4e:	eb 05                	jmp    81afe55 <_ZNK5nexon4cash9TCPSocket14pollWriteEventEv+0xc1>
 81afe50:	b8 01 00 00 00       	mov    $0x1,%eax
 81afe55:	81 c4 cc 00 00 00    	add    $0xcc,%esp
 81afe5b:	5b                   	pop    %ebx
 81afe5c:	5e                   	pop    %esi
 81afe5d:	5f                   	pop    %edi
 81afe5e:	5d                   	pop    %ebp
 81afe5f:	c3                   	ret

```

```c
// nexon::cash::TCPSocket::pollWriteEvent @ 0x81afd94

/* nexon::cash::TCPSocket::pollWriteEvent() const */

bool __thiscall nexon::cash::TCPSocket::pollWriteEvent(TCPSocket *this)

{
  int iVar1;
  fd_set local_b0;
  timeval local_30;
  uint local_24;
  fd_set *local_20;
  
  local_20 = &local_b0;
  for (local_24 = 0; local_24 < 0x20; local_24 = local_24 + 1) {
    local_b0.fds_bits[local_24] = 0;
  }
  local_b0.fds_bits[*(uint *)this >> 5] =
       1 << ((byte)*(undefined4 *)this & 0x1f) | local_b0.fds_bits[*(uint *)this >> 5];
  local_30.tv_sec = 0;
  local_30.tv_usec = 0;
  iVar1 = select(2,(fd_set *)0x0,&local_b0,(fd_set *)0x0,&local_30);
  return iVar1 != 0;
}

```

---

## recv

```asm
// === 081af76e nexon::cash::TCPSocket::recv  [0x081af76e-0x81af7f3] ===
 81af76e:	55                   	push   %ebp
 81af76f:	89 e5                	mov    %esp,%ebp
 81af771:	83 ec 28             	sub    $0x28,%esp
 81af774:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81af778:	74 06                	je     81af780 <_ZN5nexon4cash9TCPSocket4recvEPcj+0x12>
 81af77a:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 81af77e:	75 07                	jne    81af787 <_ZN5nexon4cash9TCPSocket4recvEPcj+0x19>
 81af780:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81af785:	eb 6a                	jmp    81af7f1 <_ZN5nexon4cash9TCPSocket4recvEPcj+0x83>
 81af787:	8b 45 08             	mov    0x8(%ebp),%eax
 81af78a:	8b 00                	mov    (%eax),%eax
 81af78c:	8b 55 10             	mov    0x10(%ebp),%edx
 81af78f:	89 54 24 08          	mov    %edx,0x8(%esp)
 81af793:	8b 55 0c             	mov    0xc(%ebp),%edx
 81af796:	89 54 24 04          	mov    %edx,0x4(%esp)
 81af79a:	89 04 24             	mov    %eax,(%esp)
 81af79d:	e8 be e6 ec ff       	call   807de60 <read@plt>
 81af7a2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81af7a5:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81af7a9:	79 36                	jns    81af7e1 <_ZN5nexon4cash9TCPSocket4recvEPcj+0x73>
 81af7ab:	e8 c0 e5 ec ff       	call   807dd70 <__errno_location@plt>
 81af7b0:	8b 00                	mov    (%eax),%eax
 81af7b2:	83 f8 0b             	cmp    $0xb,%eax
 81af7b5:	74 23                	je     81af7da <_ZN5nexon4cash9TCPSocket4recvEPcj+0x6c>
 81af7b7:	e8 b4 e5 ec ff       	call   807dd70 <__errno_location@plt>
 81af7bc:	8b 00                	mov    (%eax),%eax
 81af7be:	83 f8 04             	cmp    $0x4,%eax
 81af7c1:	74 17                	je     81af7da <_ZN5nexon4cash9TCPSocket4recvEPcj+0x6c>
 81af7c3:	e8 a8 e5 ec ff       	call   807dd70 <__errno_location@plt>
 81af7c8:	8b 00                	mov    (%eax),%eax
 81af7ca:	83 f8 0b             	cmp    $0xb,%eax
 81af7cd:	74 0b                	je     81af7da <_ZN5nexon4cash9TCPSocket4recvEPcj+0x6c>
 81af7cf:	e8 9c e5 ec ff       	call   807dd70 <__errno_location@plt>
 81af7d4:	8b 00                	mov    (%eax),%eax
 81af7d6:	85 c0                	test   %eax,%eax
 81af7d8:	75 14                	jne    81af7ee <_ZN5nexon4cash9TCPSocket4recvEPcj+0x80>
 81af7da:	b8 00 00 00 00       	mov    $0x0,%eax
 81af7df:	eb 10                	jmp    81af7f1 <_ZN5nexon4cash9TCPSocket4recvEPcj+0x83>
 81af7e1:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81af7e5:	75 07                	jne    81af7ee <_ZN5nexon4cash9TCPSocket4recvEPcj+0x80>
 81af7e7:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81af7ec:	eb 03                	jmp    81af7f1 <_ZN5nexon4cash9TCPSocket4recvEPcj+0x83>
 81af7ee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81af7f1:	c9                   	leave
 81af7f2:	c3                   	ret
 81af7f3:	90                   	nop

```

```c
// nexon::cash::TCPSocket::recv @ 0x81af76e

/* nexon::cash::TCPSocket::recv(char*, unsigned int) */

ssize_t __thiscall nexon::cash::TCPSocket::recv(TCPSocket *this,char *param_1,uint param_2)

{
  ssize_t sVar1;
  int *piVar2;
  
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    sVar1 = -1;
  }
  else {
    sVar1 = ::read(*(int *)this,param_1,param_2);
    if (sVar1 < 0) {
      piVar2 = __errno_location();
      if ((((*piVar2 == 0xb) || (piVar2 = __errno_location(), *piVar2 == 4)) ||
          (piVar2 = __errno_location(), *piVar2 == 0xb)) ||
         (piVar2 = __errno_location(), *piVar2 == 0)) {
        sVar1 = 0;
      }
    }
    else if (sVar1 == 0) {
      sVar1 = -1;
    }
  }
  return sVar1;
}

```

---

## send

```asm
// === 081af6ae nexon::cash::TCPSocket::send  [0x081af6ae-0x81af76d] ===
 81af6ae:	55                   	push   %ebp
 81af6af:	89 e5                	mov    %esp,%ebp
 81af6b1:	83 ec 28             	sub    $0x28,%esp
 81af6b4:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81af6b8:	74 06                	je     81af6c0 <_ZN5nexon4cash9TCPSocket4sendEPcj+0x12>
 81af6ba:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 81af6be:	75 0a                	jne    81af6ca <_ZN5nexon4cash9TCPSocket4sendEPcj+0x1c>
 81af6c0:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81af6c5:	e9 a2 00 00 00       	jmp    81af76c <_ZN5nexon4cash9TCPSocket4sendEPcj+0xbe>
 81af6ca:	8b 45 08             	mov    0x8(%ebp),%eax
 81af6cd:	8b 00                	mov    (%eax),%eax
 81af6cf:	8b 55 10             	mov    0x10(%ebp),%edx
 81af6d2:	89 54 24 08          	mov    %edx,0x8(%esp)
 81af6d6:	8b 55 0c             	mov    0xc(%ebp),%edx
 81af6d9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81af6dd:	89 04 24             	mov    %eax,(%esp)
 81af6e0:	e8 4b f1 ec ff       	call   807e830 <write@plt>
 81af6e5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81af6e8:	e8 83 e6 ec ff       	call   807dd70 <__errno_location@plt>
 81af6ed:	8b 00                	mov    (%eax),%eax
 81af6ef:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81af6f2:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81af6f6:	7f 67                	jg     81af75f <_ZN5nexon4cash9TCPSocket4sendEPcj+0xb1>
 81af6f8:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
 81af6fc:	74 0c                	je     81af70a <_ZN5nexon4cash9TCPSocket4sendEPcj+0x5c>
 81af6fe:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 81af702:	74 06                	je     81af70a <_ZN5nexon4cash9TCPSocket4sendEPcj+0x5c>
 81af704:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
 81af708:	75 37                	jne    81af741 <_ZN5nexon4cash9TCPSocket4sendEPcj+0x93>
 81af70a:	8b 45 08             	mov    0x8(%ebp),%eax
 81af70d:	8b 40 1c             	mov    0x1c(%eax),%eax
 81af710:	8d 50 01             	lea    0x1(%eax),%edx
 81af713:	8b 45 08             	mov    0x8(%ebp),%eax
 81af716:	89 50 1c             	mov    %edx,0x1c(%eax)
 81af719:	8b 45 08             	mov    0x8(%ebp),%eax
 81af71c:	8b 40 1c             	mov    0x1c(%eax),%eax
 81af71f:	83 f8 64             	cmp    $0x64,%eax
 81af722:	0f 9f c0             	setg   %al
 81af725:	84 c0                	test   %al,%al
 81af727:	74 11                	je     81af73a <_ZN5nexon4cash9TCPSocket4sendEPcj+0x8c>
 81af729:	8b 45 08             	mov    0x8(%ebp),%eax
 81af72c:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 81af733:	b8 9c ff ff ff       	mov    $0xffffff9c,%eax
 81af738:	eb 32                	jmp    81af76c <_ZN5nexon4cash9TCPSocket4sendEPcj+0xbe>
 81af73a:	b8 00 00 00 00       	mov    $0x0,%eax
 81af73f:	eb 2b                	jmp    81af76c <_ZN5nexon4cash9TCPSocket4sendEPcj+0xbe>
 81af741:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81af745:	75 07                	jne    81af74e <_ZN5nexon4cash9TCPSocket4sendEPcj+0xa0>
 81af747:	b8 00 00 00 00       	mov    $0x0,%eax
 81af74c:	eb 1e                	jmp    81af76c <_ZN5nexon4cash9TCPSocket4sendEPcj+0xbe>
 81af74e:	8b 45 08             	mov    0x8(%ebp),%eax
 81af751:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 81af758:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81af75d:	eb 0d                	jmp    81af76c <_ZN5nexon4cash9TCPSocket4sendEPcj+0xbe>
 81af75f:	8b 45 08             	mov    0x8(%ebp),%eax
 81af762:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 81af769:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81af76c:	c9                   	leave
 81af76d:	c3                   	ret

```

```c
// nexon::cash::TCPSocket::send @ 0x81af6ae

/* nexon::cash::TCPSocket::send(char*, unsigned int) */

ssize_t __thiscall nexon::cash::TCPSocket::send(TCPSocket *this,char *param_1,uint param_2)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    sVar2 = -1;
  }
  else {
    sVar2 = write(*(int *)this,param_1,param_2);
    piVar3 = __errno_location();
    iVar1 = *piVar3;
    if (sVar2 < 1) {
      if (((iVar1 == 0xb) || (iVar1 == 4)) || (iVar1 == 0xb)) {
        *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
        if (*(int *)(this + 0x1c) < 0x65) {
          sVar2 = 0;
        }
        else {
          *(undefined4 *)(this + 0x1c) = 0;
          sVar2 = -100;
        }
      }
      else if (iVar1 == 0) {
        sVar2 = 0;
      }
      else {
        *(undefined4 *)(this + 0x1c) = 0;
        sVar2 = -1;
      }
    }
    else {
      *(undefined4 *)(this + 0x1c) = 0;
    }
  }
  return sVar2;
}

```

---

## setOptLinger

```asm
// === 081af926 nexon::cash::TCPSocket::setOptLinger  [0x081af926-0x81af98f] ===
 81af926:	55                   	push   %ebp
 81af927:	89 e5                	mov    %esp,%ebp
 81af929:	83 ec 48             	sub    $0x48,%esp
 81af92c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81af92f:	88 45 e4             	mov    %al,-0x1c(%ebp)
 81af932:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 81af936:	74 07                	je     81af93f <_ZN5nexon4cash9TCPSocket12setOptLingerEb+0x19>
 81af938:	b8 01 00 00 00       	mov    $0x1,%eax
 81af93d:	eb 05                	jmp    81af944 <_ZN5nexon4cash9TCPSocket12setOptLingerEb+0x1e>
 81af93f:	b8 00 00 00 00       	mov    $0x0,%eax
 81af944:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81af947:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81af94e:	8b 45 08             	mov    0x8(%ebp),%eax
 81af951:	8b 00                	mov    (%eax),%eax
 81af953:	c7 44 24 10 08 00 00 	movl   $0x8,0x10(%esp)
 81af95a:	00 
 81af95b:	8d 55 f0             	lea    -0x10(%ebp),%edx
 81af95e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81af962:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 81af969:	00 
 81af96a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81af971:	00 
 81af972:	89 04 24             	mov    %eax,(%esp)
 81af975:	e8 26 e9 ec ff       	call   807e2a0 <setsockopt@plt>
 81af97a:	c1 e8 1f             	shr    $0x1f,%eax
 81af97d:	84 c0                	test   %al,%al
 81af97f:	74 07                	je     81af988 <_ZN5nexon4cash9TCPSocket12setOptLingerEb+0x62>
 81af981:	b8 00 00 00 00       	mov    $0x0,%eax
 81af986:	eb 05                	jmp    81af98d <_ZN5nexon4cash9TCPSocket12setOptLingerEb+0x67>
 81af988:	b8 01 00 00 00       	mov    $0x1,%eax
 81af98d:	c9                   	leave
 81af98e:	c3                   	ret
 81af98f:	90                   	nop

```

```c
// nexon::cash::TCPSocket::setOptLinger @ 0x81af926

/* nexon::cash::TCPSocket::setOptLinger(bool) */

bool __thiscall nexon::cash::TCPSocket::setOptLinger(TCPSocket *this,bool param_1)

{
  int iVar1;
  uint local_14 [4];
  
  local_14[0] = (uint)param_1;
  local_14[1] = 0;
  iVar1 = setsockopt(*(int *)this,1,0xd,local_14,8);
  return -1 < iVar1;
}

```

---

## setOptNagle

```asm
// === 081af990 nexon::cash::TCPSocket::setOptNagle  [0x081af990-0x81af9e9] ===
 81af990:	55                   	push   %ebp
 81af991:	89 e5                	mov    %esp,%ebp
 81af993:	83 ec 48             	sub    $0x48,%esp
 81af996:	8b 45 0c             	mov    0xc(%ebp),%eax
 81af999:	88 45 e4             	mov    %al,-0x1c(%ebp)
 81af99c:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 81af9a0:	74 07                	je     81af9a9 <_ZN5nexon4cash9TCPSocket11setOptNagleEb+0x19>
 81af9a2:	b8 01 00 00 00       	mov    $0x1,%eax
 81af9a7:	eb 05                	jmp    81af9ae <_ZN5nexon4cash9TCPSocket11setOptNagleEb+0x1e>
 81af9a9:	b8 00 00 00 00       	mov    $0x0,%eax
 81af9ae:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81af9b1:	8b 45 08             	mov    0x8(%ebp),%eax
 81af9b4:	8b 00                	mov    (%eax),%eax
 81af9b6:	c7 44 24 10 04 00 00 	movl   $0x4,0x10(%esp)
 81af9bd:	00 
 81af9be:	8d 55 f0             	lea    -0x10(%ebp),%edx
 81af9c1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81af9c5:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81af9cc:	00 
 81af9cd:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 81af9d4:	00 
 81af9d5:	89 04 24             	mov    %eax,(%esp)
 81af9d8:	e8 c3 e8 ec ff       	call   807e2a0 <setsockopt@plt>
 81af9dd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81af9e0:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81af9e4:	0f 94 c0             	sete   %al
 81af9e7:	c9                   	leave
 81af9e8:	c3                   	ret
 81af9e9:	90                   	nop

```

```c
// nexon::cash::TCPSocket::setOptNagle @ 0x81af990

/* nexon::cash::TCPSocket::setOptNagle(bool) */

bool __thiscall nexon::cash::TCPSocket::setOptNagle(TCPSocket *this,bool param_1)

{
  int iVar1;
  uint local_14 [4];
  
  local_14[0] = (uint)param_1;
  iVar1 = setsockopt(*(int *)this,6,1,local_14,4);
  return iVar1 == 0;
}

```

---

## setOptNonBlock

```asm
// === 081af85e nexon::cash::TCPSocket::setOptNonBlock  [0x081af85e-0x81af8bb] ===
 81af85e:	55                   	push   %ebp
 81af85f:	89 e5                	mov    %esp,%ebp
 81af861:	83 ec 28             	sub    $0x28,%esp
 81af864:	8b 45 08             	mov    0x8(%ebp),%eax
 81af867:	8b 00                	mov    (%eax),%eax
 81af869:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81af870:	00 
 81af871:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 81af878:	00 
 81af879:	89 04 24             	mov    %eax,(%esp)
 81af87c:	e8 ef eb ec ff       	call   807e470 <fcntl@plt>
 81af881:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81af884:	81 4d f4 00 08 00 00 	orl    $0x800,-0xc(%ebp)
 81af88b:	8b 45 08             	mov    0x8(%ebp),%eax
 81af88e:	8b 00                	mov    (%eax),%eax
 81af890:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81af893:	89 54 24 08          	mov    %edx,0x8(%esp)
 81af897:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81af89e:	00 
 81af89f:	89 04 24             	mov    %eax,(%esp)
 81af8a2:	e8 c9 eb ec ff       	call   807e470 <fcntl@plt>
 81af8a7:	c1 e8 1f             	shr    $0x1f,%eax
 81af8aa:	84 c0                	test   %al,%al
 81af8ac:	74 07                	je     81af8b5 <_ZN5nexon4cash9TCPSocket14setOptNonBlockEv+0x57>
 81af8ae:	b8 00 00 00 00       	mov    $0x0,%eax
 81af8b3:	eb 05                	jmp    81af8ba <_ZN5nexon4cash9TCPSocket14setOptNonBlockEv+0x5c>
 81af8b5:	b8 01 00 00 00       	mov    $0x1,%eax
 81af8ba:	c9                   	leave
 81af8bb:	c3                   	ret

```

```c
// nexon::cash::TCPSocket::setOptNonBlock @ 0x81af85e

/* nexon::cash::TCPSocket::setOptNonBlock() */

bool __thiscall nexon::cash::TCPSocket::setOptNonBlock(TCPSocket *this)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = fcntl(*(int *)this,3,0);
  iVar2 = fcntl(*(int *)this,4,uVar1 | 0x800);
  return -1 < iVar2;
}

```

---

## setOptResizeRecvBuf

```asm
// === 081b0036 nexon::cash::TCPSocket::setOptResizeRecvBuf  [0x081b0036-0x81b009b] ===
 81b0036:	55                   	push   %ebp
 81b0037:	89 e5                	mov    %esp,%ebp
 81b0039:	83 ec 38             	sub    $0x38,%esp
 81b003c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b003f:	85 c0                	test   %eax,%eax
 81b0041:	7f 07                	jg     81b004a <_ZN5nexon4cash9TCPSocket19setOptResizeRecvBufEi+0x14>
 81b0043:	b8 00 00 00 00       	mov    $0x0,%eax
 81b0048:	eb 4f                	jmp    81b0099 <_ZN5nexon4cash9TCPSocket19setOptResizeRecvBufEi+0x63>
 81b004a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81b0051:	c7 45 ec 04 00 00 00 	movl   $0x4,-0x14(%ebp)
 81b0058:	8b 45 08             	mov    0x8(%ebp),%eax
 81b005b:	8b 00                	mov    (%eax),%eax
 81b005d:	c7 44 24 10 04 00 00 	movl   $0x4,0x10(%esp)
 81b0064:	00 
 81b0065:	8d 55 0c             	lea    0xc(%ebp),%edx
 81b0068:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81b006c:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 81b0073:	00 
 81b0074:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81b007b:	00 
 81b007c:	89 04 24             	mov    %eax,(%esp)
 81b007f:	e8 1c e2 ec ff       	call   807e2a0 <setsockopt@plt>
 81b0084:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81b0087:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81b008b:	79 07                	jns    81b0094 <_ZN5nexon4cash9TCPSocket19setOptResizeRecvBufEi+0x5e>
 81b008d:	b8 00 00 00 00       	mov    $0x0,%eax
 81b0092:	eb 05                	jmp    81b0099 <_ZN5nexon4cash9TCPSocket19setOptResizeRecvBufEi+0x63>
 81b0094:	b8 01 00 00 00       	mov    $0x1,%eax
 81b0099:	c9                   	leave
 81b009a:	c3                   	ret
 81b009b:	90                   	nop

```

```c
// nexon::cash::TCPSocket::setOptResizeRecvBuf @ 0x81b0036

/* nexon::cash::TCPSocket::setOptResizeRecvBuf(int) */

undefined4 __thiscall nexon::cash::TCPSocket::setOptResizeRecvBuf(TCPSocket *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 1) {
    uVar1 = 0;
  }
  else {
    iVar2 = setsockopt(*(int *)this,1,8,&param_1,4);
    if (iVar2 < 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

```

---

## setOptResizeSendBuf

```asm
// === 081affd0 nexon::cash::TCPSocket::setOptResizeSendBuf  [0x081affd0-0x81b0035] ===
 81affd0:	55                   	push   %ebp
 81affd1:	89 e5                	mov    %esp,%ebp
 81affd3:	83 ec 38             	sub    $0x38,%esp
 81affd6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81affd9:	85 c0                	test   %eax,%eax
 81affdb:	7f 07                	jg     81affe4 <_ZN5nexon4cash9TCPSocket19setOptResizeSendBufEi+0x14>
 81affdd:	b8 00 00 00 00       	mov    $0x0,%eax
 81affe2:	eb 4f                	jmp    81b0033 <_ZN5nexon4cash9TCPSocket19setOptResizeSendBufEi+0x63>
 81affe4:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81affeb:	c7 45 ec 04 00 00 00 	movl   $0x4,-0x14(%ebp)
 81afff2:	8b 45 08             	mov    0x8(%ebp),%eax
 81afff5:	8b 00                	mov    (%eax),%eax
 81afff7:	c7 44 24 10 04 00 00 	movl   $0x4,0x10(%esp)
 81afffe:	00 
 81affff:	8d 55 0c             	lea    0xc(%ebp),%edx
 81b0002:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81b0006:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 81b000d:	00 
 81b000e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81b0015:	00 
 81b0016:	89 04 24             	mov    %eax,(%esp)
 81b0019:	e8 82 e2 ec ff       	call   807e2a0 <setsockopt@plt>
 81b001e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81b0021:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81b0025:	79 07                	jns    81b002e <_ZN5nexon4cash9TCPSocket19setOptResizeSendBufEi+0x5e>
 81b0027:	b8 00 00 00 00       	mov    $0x0,%eax
 81b002c:	eb 05                	jmp    81b0033 <_ZN5nexon4cash9TCPSocket19setOptResizeSendBufEi+0x63>
 81b002e:	b8 01 00 00 00       	mov    $0x1,%eax
 81b0033:	c9                   	leave
 81b0034:	c3                   	ret
 81b0035:	90                   	nop

```

```c
// nexon::cash::TCPSocket::setOptResizeSendBuf @ 0x81affd0

/* nexon::cash::TCPSocket::setOptResizeSendBuf(int) */

undefined4 __thiscall nexon::cash::TCPSocket::setOptResizeSendBuf(TCPSocket *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 1) {
    uVar1 = 0;
  }
  else {
    iVar2 = setsockopt(*(int *)this,1,7,&param_1,4);
    if (iVar2 < 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

```

---

## setOptReuseAdrs

```asm
// === 081af8bc nexon::cash::TCPSocket::setOptReuseAdrs  [0x081af8bc-0x81af925] ===
 81af8bc:	55                   	push   %ebp
 81af8bd:	89 e5                	mov    %esp,%ebp
 81af8bf:	83 ec 48             	sub    $0x48,%esp
 81af8c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81af8c5:	88 45 e4             	mov    %al,-0x1c(%ebp)
 81af8c8:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81af8cf:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 81af8d3:	74 09                	je     81af8de <_ZN5nexon4cash9TCPSocket15setOptReuseAdrsEb+0x22>
 81af8d5:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 81af8dc:	eb 07                	jmp    81af8e5 <_ZN5nexon4cash9TCPSocket15setOptReuseAdrsEb+0x29>
 81af8de:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81af8e5:	8b 45 08             	mov    0x8(%ebp),%eax
 81af8e8:	8b 00                	mov    (%eax),%eax
 81af8ea:	c7 44 24 10 04 00 00 	movl   $0x4,0x10(%esp)
 81af8f1:	00 
 81af8f2:	8d 55 f4             	lea    -0xc(%ebp),%edx
 81af8f5:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81af8f9:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 81af900:	00 
 81af901:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81af908:	00 
 81af909:	89 04 24             	mov    %eax,(%esp)
 81af90c:	e8 8f e9 ec ff       	call   807e2a0 <setsockopt@plt>
 81af911:	c1 e8 1f             	shr    $0x1f,%eax
 81af914:	84 c0                	test   %al,%al
 81af916:	74 07                	je     81af91f <_ZN5nexon4cash9TCPSocket15setOptReuseAdrsEb+0x63>
 81af918:	b8 00 00 00 00       	mov    $0x0,%eax
 81af91d:	eb 05                	jmp    81af924 <_ZN5nexon4cash9TCPSocket15setOptReuseAdrsEb+0x68>
 81af91f:	b8 01 00 00 00       	mov    $0x1,%eax
 81af924:	c9                   	leave
 81af925:	c3                   	ret

```

```c
// nexon::cash::TCPSocket::setOptReuseAdrs @ 0x81af8bc

/* nexon::cash::TCPSocket::setOptReuseAdrs(bool) */

bool __thiscall nexon::cash::TCPSocket::setOptReuseAdrs(TCPSocket *this,bool param_1)

{
  int iVar1;
  uint local_10 [3];
  
  local_10[0] = (uint)param_1;
  iVar1 = setsockopt(*(int *)this,1,2,local_10,4);
  return -1 < iVar1;
}

```

---

## shutdown

```asm
// === 081af7fe nexon::cash::TCPSocket::shutdown  [0x081af7fe-0x81af80b] ===
 81af7fe:	55                   	push   %ebp
 81af7ff:	89 e5                	mov    %esp,%ebp
 81af801:	8b 45 08             	mov    0x8(%ebp),%eax
 81af804:	8b 00                	mov    (%eax),%eax
 81af806:	83 f8 ff             	cmp    $0xffffffff,%eax
 81af809:	5d                   	pop    %ebp
 81af80a:	c3                   	ret
 81af80b:	90                   	nop

```

```c
// nexon::cash::TCPSocket::shutdown @ 0x81af7fe

/* nexon::cash::TCPSocket::shutdown(int) */

undefined4 nexon::cash::TCPSocket::shutdown(int param_1)

{
  return *(undefined4 *)param_1;
}

```

---

## ~TCPSocket

```asm
// === 081af51e nexon::cash::TCPSocket::~TCPSocket  [0x081af51e-0x81af531] ===
 81af51e:	55                   	push   %ebp
 81af51f:	89 e5                	mov    %esp,%ebp
 81af521:	83 ec 18             	sub    $0x18,%esp
 81af524:	8b 45 08             	mov    0x8(%ebp),%eax
 81af527:	89 04 24             	mov    %eax,(%esp)
 81af52a:	e8 dd 02 00 00       	call   81af80c <_ZN5nexon4cash9TCPSocket5closeEv>
 81af52f:	c9                   	leave
 81af530:	c3                   	ret
 81af531:	90                   	nop

```

```c
// nexon::cash::TCPSocket::~TCPSocket @ 0x81af51e

/* nexon::cash::TCPSocket::~TCPSocket() */

void __thiscall nexon::cash::TCPSocket::~TCPSocket(TCPSocket *this)

{
  close(this);
  return;
}

```

