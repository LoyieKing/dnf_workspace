# CPacketTracer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## AbsoluteTcpWriteLog

```asm
// === 0859931a CPacketTracer::AbsoluteTcpWriteLog  [0x0859931a-0x859940d] ===
 859931a:	55                   	push   %ebp
 859931b:	89 e5                	mov    %esp,%ebp
 859931d:	57                   	push   %edi
 859931e:	53                   	push   %ebx
 859931f:	81 ec 40 08 00 00    	sub    $0x840,%esp
 8599325:	8d 9d e4 f7 ff ff    	lea    -0x81c(%ebp),%ebx
 859932b:	b8 00 00 00 00       	mov    $0x0,%eax
 8599330:	ba 00 02 00 00       	mov    $0x200,%edx
 8599335:	89 df                	mov    %ebx,%edi
 8599337:	89 d1                	mov    %edx,%ecx
 8599339:	f3 ab                	rep stos %eax,%es:(%edi)
 859933b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8599342:	eb 44                	jmp    8599388 <_ZN13CPacketTracer19AbsoluteTcpWriteLogEv+0x6e>
 8599344:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8599347:	8b 45 08             	mov    0x8(%ebp),%eax
 859934a:	8b 54 d0 0c          	mov    0xc(%eax,%edx,8),%edx
 859934e:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8599351:	8b 45 08             	mov    0x8(%ebp),%eax
 8599354:	0f b6 44 c8 08       	movzbl 0x8(%eax,%ecx,8),%eax
 8599359:	0f b6 c0             	movzbl %al,%eax
 859935c:	89 54 24 10          	mov    %edx,0x10(%esp)
 8599360:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8599364:	8d 85 e4 f7 ff ff    	lea    -0x81c(%ebp),%eax
 859936a:	89 44 24 08          	mov    %eax,0x8(%esp)
 859936e:	c7 44 24 04 c0 84 cb 	movl   $0x8cb84c0,0x4(%esp)
 8599375:	08 
 8599376:	8d 85 e4 f7 ff ff    	lea    -0x81c(%ebp),%eax
 859937c:	89 04 24             	mov    %eax,(%esp)
 859937f:	e8 bc 50 ae ff       	call   807e440 <sprintf@plt>
 8599384:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8599388:	83 7d f4 09          	cmpl   $0x9,-0xc(%ebp)
 859938c:	0f 9e c0             	setle  %al
 859938f:	84 c0                	test   %al,%al
 8599391:	75 b1                	jne    8599344 <_ZN13CPacketTracer19AbsoluteTcpWriteLogEv+0x2a>
 8599393:	8b 45 08             	mov    0x8(%ebp),%eax
 8599396:	8b 00                	mov    (%eax),%eax
 8599398:	8d 50 ff             	lea    -0x1(%eax),%edx
 859939b:	8b 45 08             	mov    0x8(%ebp),%eax
 859939e:	89 10                	mov    %edx,(%eax)
 85993a0:	8b 45 08             	mov    0x8(%ebp),%eax
 85993a3:	8b 08                	mov    (%eax),%ecx
 85993a5:	ba cd cc cc cc       	mov    $0xcccccccd,%edx
 85993aa:	89 c8                	mov    %ecx,%eax
 85993ac:	f7 e2                	mul    %edx
 85993ae:	89 d3                	mov    %edx,%ebx
 85993b0:	c1 eb 03             	shr    $0x3,%ebx
 85993b3:	89 d8                	mov    %ebx,%eax
 85993b5:	c1 e0 02             	shl    $0x2,%eax
 85993b8:	01 d8                	add    %ebx,%eax
 85993ba:	01 c0                	add    %eax,%eax
 85993bc:	89 cb                	mov    %ecx,%ebx
 85993be:	29 c3                	sub    %eax,%ebx
 85993c0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85993c7:	00 
 85993c8:	c7 44 24 08 41 00 00 	movl   $0x41,0x8(%esp)
 85993cf:	00 
 85993d0:	c7 44 24 04 84 8a cb 	movl   $0x8cb8a84,0x4(%esp)
 85993d7:	08 
 85993d8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85993db:	89 04 24             	mov    %eax,(%esp)
 85993de:	e8 35 63 fb ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85993e3:	8d 85 e4 f7 ff ff    	lea    -0x81c(%ebp),%eax
 85993e9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85993ed:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85993f1:	c7 44 24 04 c9 84 cb 	movl   $0x8cb84c9,0x4(%esp)
 85993f8:	08 
 85993f9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85993fc:	89 04 24             	mov    %eax,(%esp)
 85993ff:	e8 84 63 fb ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8599404:	81 c4 40 08 00 00    	add    $0x840,%esp
 859940a:	5b                   	pop    %ebx
 859940b:	5f                   	pop    %edi
 859940c:	5d                   	pop    %ebp
 859940d:	c3                   	ret

```

```c
// CPacketTracer::AbsoluteTcpWriteLog @ 0x859931a

/* CPacketTracer::AbsoluteTcpWriteLog() */

void __thiscall CPacketTracer::AbsoluteTcpWriteLog(CPacketTracer *this)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char local_820 [2048];
  cMyTrace local_20 [16];
  int local_10;
  
  pcVar3 = local_820;
  for (iVar2 = 0x200; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  for (local_10 = 0; local_10 < 10; local_10 = local_10 + 1) {
    sprintf(local_820,"%s,%d/%d",local_820,(uint)(byte)this[local_10 * 8 + 8],
            *(undefined4 *)(this + local_10 * 8 + 0xc));
  }
  *(int *)this = *(int *)this + -1;
  uVar1 = *(uint *)this;
  cMyTrace::cMyTrace(local_20,"AbsoluteTcpWriteLog",0x41,0);
  cMyTrace::operator()(local_20,"[TRACE_TCP_PACKET] (idx:%d)%s",uVar1 % 10,local_820);
  return;
}

```

---

## AbsoluteUdpWriteLog

```asm
// === 0859940e CPacketTracer::AbsoluteUdpWriteLog  [0x0859940e-0x859950a] ===
 859940e:	55                   	push   %ebp
 859940f:	89 e5                	mov    %esp,%ebp
 8599411:	57                   	push   %edi
 8599412:	53                   	push   %ebx
 8599413:	81 ec 40 08 00 00    	sub    $0x840,%esp
 8599419:	8d 9d e4 f7 ff ff    	lea    -0x81c(%ebp),%ebx
 859941f:	b8 00 00 00 00       	mov    $0x0,%eax
 8599424:	ba 00 02 00 00       	mov    $0x200,%edx
 8599429:	89 df                	mov    %ebx,%edi
 859942b:	89 d1                	mov    %edx,%ecx
 859942d:	f3 ab                	rep stos %eax,%es:(%edi)
 859942f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8599436:	eb 4a                	jmp    8599482 <_ZN13CPacketTracer19AbsoluteUdpWriteLogEv+0x74>
 8599438:	8b 55 f4             	mov    -0xc(%ebp),%edx
 859943b:	8b 45 08             	mov    0x8(%ebp),%eax
 859943e:	83 c2 0a             	add    $0xa,%edx
 8599441:	8b 54 d0 0c          	mov    0xc(%eax,%edx,8),%edx
 8599445:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8599448:	8b 45 08             	mov    0x8(%ebp),%eax
 859944b:	83 c1 0a             	add    $0xa,%ecx
 859944e:	0f b6 44 c8 08       	movzbl 0x8(%eax,%ecx,8),%eax
 8599453:	0f b6 c0             	movzbl %al,%eax
 8599456:	89 54 24 10          	mov    %edx,0x10(%esp)
 859945a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 859945e:	8d 85 e4 f7 ff ff    	lea    -0x81c(%ebp),%eax
 8599464:	89 44 24 08          	mov    %eax,0x8(%esp)
 8599468:	c7 44 24 04 c0 84 cb 	movl   $0x8cb84c0,0x4(%esp)
 859946f:	08 
 8599470:	8d 85 e4 f7 ff ff    	lea    -0x81c(%ebp),%eax
 8599476:	89 04 24             	mov    %eax,(%esp)
 8599479:	e8 c2 4f ae ff       	call   807e440 <sprintf@plt>
 859947e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8599482:	83 7d f4 09          	cmpl   $0x9,-0xc(%ebp)
 8599486:	0f 9e c0             	setle  %al
 8599489:	84 c0                	test   %al,%al
 859948b:	75 ab                	jne    8599438 <_ZN13CPacketTracer19AbsoluteUdpWriteLogEv+0x2a>
 859948d:	8b 45 08             	mov    0x8(%ebp),%eax
 8599490:	8b 40 04             	mov    0x4(%eax),%eax
 8599493:	8d 50 ff             	lea    -0x1(%eax),%edx
 8599496:	8b 45 08             	mov    0x8(%ebp),%eax
 8599499:	89 50 04             	mov    %edx,0x4(%eax)
 859949c:	8b 45 08             	mov    0x8(%ebp),%eax
 859949f:	8b 48 04             	mov    0x4(%eax),%ecx
 85994a2:	ba cd cc cc cc       	mov    $0xcccccccd,%edx
 85994a7:	89 c8                	mov    %ecx,%eax
 85994a9:	f7 e2                	mul    %edx
 85994ab:	89 d3                	mov    %edx,%ebx
 85994ad:	c1 eb 03             	shr    $0x3,%ebx
 85994b0:	89 d8                	mov    %ebx,%eax
 85994b2:	c1 e0 02             	shl    $0x2,%eax
 85994b5:	01 d8                	add    %ebx,%eax
 85994b7:	01 c0                	add    %eax,%eax
 85994b9:	89 cb                	mov    %ecx,%ebx
 85994bb:	29 c3                	sub    %eax,%ebx
 85994bd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85994c4:	00 
 85994c5:	c7 44 24 08 5a 00 00 	movl   $0x5a,0x8(%esp)
 85994cc:	00 
 85994cd:	c7 44 24 04 70 8a cb 	movl   $0x8cb8a70,0x4(%esp)
 85994d4:	08 
 85994d5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85994d8:	89 04 24             	mov    %eax,(%esp)
 85994db:	e8 38 62 fb ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85994e0:	8d 85 e4 f7 ff ff    	lea    -0x81c(%ebp),%eax
 85994e6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85994ea:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85994ee:	c7 44 24 04 e7 84 cb 	movl   $0x8cb84e7,0x4(%esp)
 85994f5:	08 
 85994f6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85994f9:	89 04 24             	mov    %eax,(%esp)
 85994fc:	e8 87 62 fb ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8599501:	81 c4 40 08 00 00    	add    $0x840,%esp
 8599507:	5b                   	pop    %ebx
 8599508:	5f                   	pop    %edi
 8599509:	5d                   	pop    %ebp
 859950a:	c3                   	ret

```

```c
// CPacketTracer::AbsoluteUdpWriteLog @ 0x859940e

/* CPacketTracer::AbsoluteUdpWriteLog() */

void __thiscall CPacketTracer::AbsoluteUdpWriteLog(CPacketTracer *this)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char local_820 [2048];
  cMyTrace local_20 [16];
  int local_10;
  
  pcVar3 = local_820;
  for (iVar2 = 0x200; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  for (local_10 = 0; local_10 < 10; local_10 = local_10 + 1) {
    sprintf(local_820,"%s,%d/%d",local_820,(uint)(byte)this[(local_10 + 10) * 8 + 8],
            *(undefined4 *)(this + (local_10 + 10) * 8 + 0xc));
  }
  *(int *)(this + 4) = *(int *)(this + 4) + -1;
  uVar1 = *(uint *)(this + 4);
  cMyTrace::cMyTrace(local_20,"AbsoluteUdpWriteLog",0x5a,0);
  cMyTrace::operator()(local_20,"[TRACE_UDP_PACKET] (idx:%d)%s",uVar1 % 10,local_820);
  return;
}

```

---

## AddTcpLog

```asm
// === 085992c8 CPacketTracer::AddTcpLog  [0x085992c8-0x8599319] ===
 85992c8:	55                   	push   %ebp
 85992c9:	89 e5                	mov    %esp,%ebp
 85992cb:	83 ec 10             	sub    $0x10,%esp
 85992ce:	8b 45 08             	mov    0x8(%ebp),%eax
 85992d1:	8b 08                	mov    (%eax),%ecx
 85992d3:	ba cd cc cc cc       	mov    $0xcccccccd,%edx
 85992d8:	89 c8                	mov    %ecx,%eax
 85992da:	f7 e2                	mul    %edx
 85992dc:	c1 ea 03             	shr    $0x3,%edx
 85992df:	89 d0                	mov    %edx,%eax
 85992e1:	c1 e0 02             	shl    $0x2,%eax
 85992e4:	01 d0                	add    %edx,%eax
 85992e6:	01 c0                	add    %eax,%eax
 85992e8:	89 ca                	mov    %ecx,%edx
 85992ea:	29 c2                	sub    %eax,%edx
 85992ec:	89 55 fc             	mov    %edx,-0x4(%ebp)
 85992ef:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85992f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85992f5:	89 c1                	mov    %eax,%ecx
 85992f7:	8b 45 08             	mov    0x8(%ebp),%eax
 85992fa:	88 4c d0 08          	mov    %cl,0x8(%eax,%edx,8)
 85992fe:	8b 55 fc             	mov    -0x4(%ebp),%edx
 8599301:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8599304:	8b 45 08             	mov    0x8(%ebp),%eax
 8599307:	89 4c d0 0c          	mov    %ecx,0xc(%eax,%edx,8)
 859930b:	8b 45 08             	mov    0x8(%ebp),%eax
 859930e:	8b 00                	mov    (%eax),%eax
 8599310:	8d 50 01             	lea    0x1(%eax),%edx
 8599313:	8b 45 08             	mov    0x8(%ebp),%eax
 8599316:	89 10                	mov    %edx,(%eax)
 8599318:	c9                   	leave
 8599319:	c3                   	ret

```

```c
// CPacketTracer::AddTcpLog @ 0x85992c8

/* CPacketTracer::AddTcpLog(int, int) */

void __thiscall CPacketTracer::AddTcpLog(CPacketTracer *this,int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)this;
  this[(uVar1 % 10) * 8 + 8] = SUB41(param_1,0);
  *(int *)(this + (uVar1 % 10) * 8 + 0xc) = param_2;
  *(int *)this = *(int *)this + 1;
  return;
}

```

---

## AddUdpLog

```asm
// === 0859926c CPacketTracer::AddUdpLog  [0x0859926c-0x85992c7] ===
 859926c:	55                   	push   %ebp
 859926d:	89 e5                	mov    %esp,%ebp
 859926f:	83 ec 10             	sub    $0x10,%esp
 8599272:	8b 45 08             	mov    0x8(%ebp),%eax
 8599275:	8b 48 04             	mov    0x4(%eax),%ecx
 8599278:	ba cd cc cc cc       	mov    $0xcccccccd,%edx
 859927d:	89 c8                	mov    %ecx,%eax
 859927f:	f7 e2                	mul    %edx
 8599281:	c1 ea 03             	shr    $0x3,%edx
 8599284:	89 d0                	mov    %edx,%eax
 8599286:	c1 e0 02             	shl    $0x2,%eax
 8599289:	01 d0                	add    %edx,%eax
 859928b:	01 c0                	add    %eax,%eax
 859928d:	89 ca                	mov    %ecx,%edx
 859928f:	29 c2                	sub    %eax,%edx
 8599291:	89 55 fc             	mov    %edx,-0x4(%ebp)
 8599294:	8b 4d fc             	mov    -0x4(%ebp),%ecx
 8599297:	8b 45 0c             	mov    0xc(%ebp),%eax
 859929a:	89 c2                	mov    %eax,%edx
 859929c:	8b 45 08             	mov    0x8(%ebp),%eax
 859929f:	83 c1 0a             	add    $0xa,%ecx
 85992a2:	88 54 c8 08          	mov    %dl,0x8(%eax,%ecx,8)
 85992a6:	8b 4d fc             	mov    -0x4(%ebp),%ecx
 85992a9:	8b 55 10             	mov    0x10(%ebp),%edx
 85992ac:	8b 45 08             	mov    0x8(%ebp),%eax
 85992af:	83 c1 0a             	add    $0xa,%ecx
 85992b2:	89 54 c8 0c          	mov    %edx,0xc(%eax,%ecx,8)
 85992b6:	8b 45 08             	mov    0x8(%ebp),%eax
 85992b9:	8b 40 04             	mov    0x4(%eax),%eax
 85992bc:	8d 50 01             	lea    0x1(%eax),%edx
 85992bf:	8b 45 08             	mov    0x8(%ebp),%eax
 85992c2:	89 50 04             	mov    %edx,0x4(%eax)
 85992c5:	c9                   	leave
 85992c6:	c3                   	ret
 85992c7:	90                   	nop

```

```c
// CPacketTracer::AddUdpLog @ 0x859926c

/* CPacketTracer::AddUdpLog(int, int) */

void __thiscall CPacketTracer::AddUdpLog(CPacketTracer *this,int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 4);
  this[(uVar1 % 10 + 10) * 8 + 8] = SUB41(param_1,0);
  *(int *)(this + (uVar1 % 10 + 10) * 8 + 0xc) = param_2;
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  return;
}

```

