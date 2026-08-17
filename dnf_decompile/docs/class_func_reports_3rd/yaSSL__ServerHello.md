# yaSSL__ServerHello

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## Process

```asm
// === 08749430 yaSSL::ServerHello::Process  [0x08749430-0x874972f] ===
 8749430:	55                   	push   %ebp
 8749431:	89 e5                	mov    %esp,%ebp
 8749433:	57                   	push   %edi
 8749434:	56                   	push   %esi
 8749435:	53                   	push   %ebx
 8749436:	e8 bd 99 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874943b:	81 c3 5d 37 c2 00    	add    $0xc2375d,%ebx
 8749441:	83 ec 1c             	sub    $0x1c,%esp
 8749444:	8b 45 10             	mov    0x10(%ebp),%eax
 8749447:	89 04 24             	mov    %eax,(%esp)
 874944a:	e8 c1 55 00 00       	call   874ea10 <_ZNK5yaSSL3SSL16GetMultiProtocolEv>
 874944f:	84 c0                	test   %al,%al
 8749451:	0f 84 49 01 00 00    	je     87495a0 <_ZN5yaSSL11ServerHello7ProcessERNS_12input_bufferERNS_3SSLE+0x170>
 8749457:	8b 55 10             	mov    0x10(%ebp),%edx
 874945a:	89 14 24             	mov    %edx,(%esp)
 874945d:	e8 3e 55 00 00       	call   874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>
 8749462:	84 c0                	test   %al,%al
 8749464:	0f 84 7e 01 00 00    	je     87495e8 <_ZN5yaSSL11ServerHello7ProcessERNS_12input_bufferERNS_3SSLE+0x1b8>
 874946a:	8b 45 08             	mov    0x8(%ebp),%eax
 874946d:	80 78 09 00          	cmpb   $0x0,0x9(%eax)
 8749471:	0f 85 71 01 00 00    	jne    87495e8 <_ZN5yaSSL11ServerHello7ProcessERNS_12input_bufferERNS_3SSLE+0x1b8>
 8749477:	8b 55 10             	mov    0x10(%ebp),%edx
 874947a:	89 14 24             	mov    %edx,(%esp)
 874947d:	e8 3e 4e 00 00       	call   874e2c0 <_ZN5yaSSL3SSL11useSecurityEv>
 8749482:	89 04 24             	mov    %eax,(%esp)
 8749485:	e8 76 58 00 00       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 874948a:	89 04 24             	mov    %eax,(%esp)
 874948d:	e8 ae dd ff ff       	call   8747240 <_ZN5yaSSL10Connection10TurnOffTLSEv>
 8749492:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8749498:	8b 55 08             	mov    0x8(%ebp),%edx
 874949b:	0f b6 42 4c          	movzbl 0x4c(%edx),%eax
 874949f:	89 44 24 04          	mov    %eax,0x4(%esp)
 87494a3:	8b 45 10             	mov    0x10(%ebp),%eax
 87494a6:	89 04 24             	mov    %eax,(%esp)
 87494a9:	e8 72 7d 00 00       	call   8751220 <_ZN5yaSSL3SSL11set_pendingEh>
 87494ae:	8b 45 08             	mov    0x8(%ebp),%eax
 87494b1:	8b 55 10             	mov    0x10(%ebp),%edx
 87494b4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87494bb:	00 
 87494bc:	83 c0 0a             	add    $0xa,%eax
 87494bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 87494c3:	89 14 24             	mov    %edx,(%esp)
 87494c6:	e8 05 5f 00 00       	call   874f3d0 <_ZN5yaSSL3SSL10set_randomEPKhNS_13ConnectionEndE>
 87494cb:	8b 45 08             	mov    0x8(%ebp),%eax
 87494ce:	80 78 2a 00          	cmpb   $0x0,0x2a(%eax)
 87494d2:	0f 84 18 02 00 00    	je     87496f0 <_ZN5yaSSL11ServerHello7ProcessERNS_12input_bufferERNS_3SSLE+0x2c0>
 87494d8:	8b 55 10             	mov    0x10(%ebp),%edx
 87494db:	83 c0 2b             	add    $0x2b,%eax
 87494de:	89 44 24 04          	mov    %eax,0x4(%esp)
 87494e2:	89 14 24             	mov    %edx,(%esp)
 87494e5:	e8 e6 5d 00 00       	call   874f2d0 <_ZN5yaSSL3SSL13set_sessionIDEPKh>
 87494ea:	8b 55 10             	mov    0x10(%ebp),%edx
 87494ed:	89 14 24             	mov    %edx,(%esp)
 87494f0:	e8 7b 4b 00 00       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 87494f5:	89 04 24             	mov    %eax,(%esp)
 87494f8:	e8 f3 57 00 00       	call   874ecf0 <_ZNK5yaSSL8Security12get_resumingEv>
 87494fd:	84 c0                	test   %al,%al
 87494ff:	0f 84 ab 01 00 00    	je     87496b0 <_ZN5yaSSL11ServerHello7ProcessERNS_12input_bufferERNS_3SSLE+0x280>
 8749505:	8b 45 10             	mov    0x10(%ebp),%eax
 8749508:	89 04 24             	mov    %eax,(%esp)
 874950b:	e8 60 4b 00 00       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 8749510:	89 04 24             	mov    %eax,(%esp)
 8749513:	e8 c8 57 00 00       	call   874ece0 <_ZNK5yaSSL8Security10get_resumeEv>
 8749518:	89 04 24             	mov    %eax,(%esp)
 874951b:	e8 00 4e 00 00       	call   874e320 <_ZNK5yaSSL11SSL_SESSION5GetIDEv>
 8749520:	8b 75 08             	mov    0x8(%ebp),%esi
 8749523:	b9 20 00 00 00       	mov    $0x20,%ecx
 8749528:	83 c6 2b             	add    $0x2b,%esi
 874952b:	89 c7                	mov    %eax,%edi
 874952d:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 874952f:	0f 85 43 01 00 00    	jne    8749678 <_ZN5yaSSL11ServerHello7ProcessERNS_12input_bufferERNS_3SSLE+0x248>
 8749535:	8b 55 10             	mov    0x10(%ebp),%edx
 8749538:	89 14 24             	mov    %edx,(%esp)
 874953b:	e8 30 4b 00 00       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 8749540:	89 04 24             	mov    %eax,(%esp)
 8749543:	e8 98 57 00 00       	call   874ece0 <_ZNK5yaSSL8Security10get_resumeEv>
 8749548:	89 04 24             	mov    %eax,(%esp)
 874954b:	e8 e0 4d 00 00       	call   874e330 <_ZNK5yaSSL11SSL_SESSION9GetSecretEv>
 8749550:	89 44 24 04          	mov    %eax,0x4(%esp)
 8749554:	8b 45 10             	mov    0x10(%ebp),%eax
 8749557:	89 04 24             	mov    %eax,(%esp)
 874955a:	e8 f1 5d 00 00       	call   874f350 <_ZN5yaSSL3SSL16set_masterSecretEPKh>
 874955f:	8b 55 10             	mov    0x10(%ebp),%edx
 8749562:	89 14 24             	mov    %edx,(%esp)
 8749565:	e8 36 54 00 00       	call   874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>
 874956a:	84 c0                	test   %al,%al
 874956c:	0f 84 ae 01 00 00    	je     8749720 <_ZN5yaSSL11ServerHello7ProcessERNS_12input_bufferERNS_3SSLE+0x2f0>
 8749572:	8b 45 10             	mov    0x10(%ebp),%eax
 8749575:	89 04 24             	mov    %eax,(%esp)
 8749578:	e8 43 66 00 00       	call   874fbc0 <_ZN5yaSSL3SSL13deriveTLSKeysEv>
 874957d:	8b 45 10             	mov    0x10(%ebp),%eax
 8749580:	89 04 24             	mov    %eax,(%esp)
 8749583:	e8 48 4d 00 00       	call   874e2d0 <_ZN5yaSSL3SSL9useStatesEv>
 8749588:	89 04 24             	mov    %eax,(%esp)
 874958b:	e8 90 49 00 00       	call   874df20 <_ZN5yaSSL6States9useClientEv>
 8749590:	c7 00 04 00 00 00    	movl   $0x4,(%eax)
 8749596:	83 c4 1c             	add    $0x1c,%esp
 8749599:	5b                   	pop    %ebx
 874959a:	5e                   	pop    %esi
 874959b:	5f                   	pop    %edi
 874959c:	5d                   	pop    %ebp
 874959d:	c3                   	ret
 874959e:	66 90                	xchg   %ax,%ax
 87495a0:	8b 45 10             	mov    0x10(%ebp),%eax
 87495a3:	89 04 24             	mov    %eax,(%esp)
 87495a6:	e8 c5 53 00 00       	call   874e970 <_ZNK5yaSSL3SSL9isTLSv1_1Ev>
 87495ab:	84 c0                	test   %al,%al
 87495ad:	75 79                	jne    8749628 <_ZN5yaSSL11ServerHello7ProcessERNS_12input_bufferERNS_3SSLE+0x1f8>
 87495af:	8b 45 10             	mov    0x10(%ebp),%eax
 87495b2:	89 04 24             	mov    %eax,(%esp)
 87495b5:	e8 e6 53 00 00       	call   874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>
 87495ba:	84 c0                	test   %al,%al
 87495bc:	0f 84 82 00 00 00    	je     8749644 <_ZN5yaSSL11ServerHello7ProcessERNS_12input_bufferERNS_3SSLE+0x214>
 87495c2:	8b 55 08             	mov    0x8(%ebp),%edx
 87495c5:	80 7a 09 00          	cmpb   $0x0,0x9(%edx)
 87495c9:	75 79                	jne    8749644 <_ZN5yaSSL11ServerHello7ProcessERNS_12input_bufferERNS_3SSLE+0x214>
 87495cb:	8b 45 10             	mov    0x10(%ebp),%eax
 87495ce:	c7 44 24 04 75 00 00 	movl   $0x75,0x4(%esp)
 87495d5:	00 
 87495d6:	89 04 24             	mov    %eax,(%esp)
 87495d9:	e8 f2 49 00 00       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 87495de:	83 c4 1c             	add    $0x1c,%esp
 87495e1:	5b                   	pop    %ebx
 87495e2:	5e                   	pop    %esi
 87495e3:	5f                   	pop    %edi
 87495e4:	5d                   	pop    %ebp
 87495e5:	c3                   	ret
 87495e6:	66 90                	xchg   %ax,%ax
 87495e8:	8b 55 10             	mov    0x10(%ebp),%edx
 87495eb:	89 14 24             	mov    %edx,(%esp)
 87495ee:	e8 7d 53 00 00       	call   874e970 <_ZNK5yaSSL3SSL9isTLSv1_1Ev>
 87495f3:	84 c0                	test   %al,%al
 87495f5:	0f 84 9d fe ff ff    	je     8749498 <_ZN5yaSSL11ServerHello7ProcessERNS_12input_bufferERNS_3SSLE+0x68>
 87495fb:	8b 45 08             	mov    0x8(%ebp),%eax
 87495fe:	80 78 09 01          	cmpb   $0x1,0x9(%eax)
 8749602:	0f 85 90 fe ff ff    	jne    8749498 <_ZN5yaSSL11ServerHello7ProcessERNS_12input_bufferERNS_3SSLE+0x68>
 8749608:	8b 55 10             	mov    0x10(%ebp),%edx
 874960b:	89 14 24             	mov    %edx,(%esp)
 874960e:	e8 ad 4c 00 00       	call   874e2c0 <_ZN5yaSSL3SSL11useSecurityEv>
 8749613:	89 04 24             	mov    %eax,(%esp)
 8749616:	e8 e5 56 00 00       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 874961b:	89 04 24             	mov    %eax,(%esp)
 874961e:	e8 3d dc ff ff       	call   8747260 <_ZN5yaSSL10Connection13TurnOffTLS1_1Ev>
 8749623:	e9 70 fe ff ff       	jmp    8749498 <_ZN5yaSSL11ServerHello7ProcessERNS_12input_bufferERNS_3SSLE+0x68>
 8749628:	8b 55 08             	mov    0x8(%ebp),%edx
 874962b:	80 7a 09 01          	cmpb   $0x1,0x9(%edx)
 874962f:	76 9a                	jbe    87495cb <_ZN5yaSSL11ServerHello7ProcessERNS_12input_bufferERNS_3SSLE+0x19b>
 8749631:	8b 45 10             	mov    0x10(%ebp),%eax
 8749634:	89 04 24             	mov    %eax,(%esp)
 8749637:	e8 64 53 00 00       	call   874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>
 874963c:	84 c0                	test   %al,%al
 874963e:	0f 85 7e ff ff ff    	jne    87495c2 <_ZN5yaSSL11ServerHello7ProcessERNS_12input_bufferERNS_3SSLE+0x192>
 8749644:	8b 55 10             	mov    0x10(%ebp),%edx
 8749647:	89 14 24             	mov    %edx,(%esp)
 874964a:	e8 51 53 00 00       	call   874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>
 874964f:	84 c0                	test   %al,%al
 8749651:	0f 85 41 fe ff ff    	jne    8749498 <_ZN5yaSSL11ServerHello7ProcessERNS_12input_bufferERNS_3SSLE+0x68>
 8749657:	8b 55 08             	mov    0x8(%ebp),%edx
 874965a:	80 7a 08 03          	cmpb   $0x3,0x8(%edx)
 874965e:	0f 85 34 fe ff ff    	jne    8749498 <_ZN5yaSSL11ServerHello7ProcessERNS_12input_bufferERNS_3SSLE+0x68>
 8749664:	80 7a 09 00          	cmpb   $0x0,0x9(%edx)
 8749668:	0f 84 2a fe ff ff    	je     8749498 <_ZN5yaSSL11ServerHello7ProcessERNS_12input_bufferERNS_3SSLE+0x68>
 874966e:	e9 58 ff ff ff       	jmp    87495cb <_ZN5yaSSL11ServerHello7ProcessERNS_12input_bufferERNS_3SSLE+0x19b>
 8749673:	90                   	nop
 8749674:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8749678:	8b 55 10             	mov    0x10(%ebp),%edx
 874967b:	89 14 24             	mov    %edx,(%esp)
 874967e:	e8 3d 4c 00 00       	call   874e2c0 <_ZN5yaSSL3SSL11useSecurityEv>
 8749683:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 874968a:	00 
 874968b:	89 04 24             	mov    %eax,(%esp)
 874968e:	e8 2d 59 00 00       	call   874efc0 <_ZN5yaSSL8Security12set_resumingEb>
 8749693:	8b 45 10             	mov    0x10(%ebp),%eax
 8749696:	89 04 24             	mov    %eax,(%esp)
 8749699:	e8 62 4c 00 00       	call   874e300 <_ZN5yaSSL3SSL6useLogEv>
 874969e:	8d 93 d0 81 99 ff    	lea    -0x667e30(%ebx),%edx
 87496a4:	89 54 24 04          	mov    %edx,0x4(%esp)
 87496a8:	89 04 24             	mov    %eax,(%esp)
 87496ab:	e8 b0 7d 05 00       	call   87a1460 <_ZN5yaSSL3Log5TraceEPKc>
 87496b0:	8b 55 10             	mov    0x10(%ebp),%edx
 87496b3:	89 14 24             	mov    %edx,(%esp)
 87496b6:	e8 15 53 00 00       	call   874e9d0 <_ZNK5yaSSL3SSL13CompressionOnEv>
 87496bb:	84 c0                	test   %al,%al
 87496bd:	74 0a                	je     87496c9 <_ZN5yaSSL11ServerHello7ProcessERNS_12input_bufferERNS_3SSLE+0x299>
 87496bf:	8b 45 08             	mov    0x8(%ebp),%eax
 87496c2:	8b 50 50             	mov    0x50(%eax),%edx
 87496c5:	85 d2                	test   %edx,%edx
 87496c7:	74 47                	je     8749710 <_ZN5yaSSL11ServerHello7ProcessERNS_12input_bufferERNS_3SSLE+0x2e0>
 87496c9:	8b 45 10             	mov    0x10(%ebp),%eax
 87496cc:	89 04 24             	mov    %eax,(%esp)
 87496cf:	e8 fc 4b 00 00       	call   874e2d0 <_ZN5yaSSL3SSL9useStatesEv>
 87496d4:	89 04 24             	mov    %eax,(%esp)
 87496d7:	e8 44 48 00 00       	call   874df20 <_ZN5yaSSL6States9useClientEv>
 87496dc:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 87496e2:	83 c4 1c             	add    $0x1c,%esp
 87496e5:	5b                   	pop    %ebx
 87496e6:	5e                   	pop    %esi
 87496e7:	5f                   	pop    %edi
 87496e8:	5d                   	pop    %ebp
 87496e9:	c3                   	ret
 87496ea:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87496f0:	8b 45 10             	mov    0x10(%ebp),%eax
 87496f3:	89 04 24             	mov    %eax,(%esp)
 87496f6:	e8 c5 4b 00 00       	call   874e2c0 <_ZN5yaSSL3SSL11useSecurityEv>
 87496fb:	89 04 24             	mov    %eax,(%esp)
 87496fe:	e8 fd 55 00 00       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 8749703:	c6 80 2c 01 00 00 00 	movb   $0x0,0x12c(%eax)
 874970a:	e9 db fd ff ff       	jmp    87494ea <_ZN5yaSSL11ServerHello7ProcessERNS_12input_bufferERNS_3SSLE+0xba>
 874970f:	90                   	nop
 8749710:	8b 55 10             	mov    0x10(%ebp),%edx
 8749713:	89 14 24             	mov    %edx,(%esp)
 8749716:	e8 55 57 00 00       	call   874ee70 <_ZN5yaSSL3SSL16UnSetCompressionEv>
 874971b:	eb ac                	jmp    87496c9 <_ZN5yaSSL11ServerHello7ProcessERNS_12input_bufferERNS_3SSLE+0x299>
 874971d:	8d 76 00             	lea    0x0(%esi),%esi
 8749720:	8b 55 10             	mov    0x10(%ebp),%edx
 8749723:	89 14 24             	mov    %edx,(%esp)
 8749726:	e8 05 67 00 00       	call   874fe30 <_ZN5yaSSL3SSL10deriveKeysEv>
 874972b:	e9 4d fe ff ff       	jmp    874957d <_ZN5yaSSL11ServerHello7ProcessERNS_12input_bufferERNS_3SSLE+0x14d>

```

```c
// yaSSL::ServerHello::Process @ 0x8749430

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerHello::Process(yaSSL::input_buffer&, yaSSL::SSL&) */

void __thiscall yaSSL::ServerHello::Process(ServerHello *this,input_buffer *param_1,SSL *param_2)

{
  char cVar1;
  Security *pSVar2;
  Connection *pCVar3;
  SSL_SESSION *pSVar4;
  ServerHello *pSVar5;
  uchar *puVar6;
  States *pSVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int iVar10;
  ServerHello *pSVar11;
  bool bVar12;
  byte bVar13;
  
  bVar13 = 0;
  cVar1 = SSL::GetMultiProtocol(param_2);
  if (cVar1 == '\0') {
    cVar1 = SSL::isTLSv1_1(param_2);
    if (cVar1 == '\0') {
      cVar1 = SSL::isTLS(param_2);
    }
    else {
      if ((byte)this[9] < 2) goto LAB_087495cb;
      cVar1 = SSL::isTLS(param_2);
    }
    if (((cVar1 != '\0') && (this[9] == (ServerHello)0x0)) ||
       ((cVar1 = SSL::isTLS(param_2), cVar1 == '\0' &&
        ((this[8] == (ServerHello)0x3 && (this[9] != (ServerHello)0x0)))))) {
LAB_087495cb:
      SSL::SetError(param_2,0x75);
      return;
    }
  }
  else {
    cVar1 = SSL::isTLS(param_2);
    if ((cVar1 == '\0') || (this[9] != (ServerHello)0x0)) {
      cVar1 = SSL::isTLSv1_1(param_2);
      if ((cVar1 != '\0') && (this[9] == (ServerHello)0x1)) {
        pSVar2 = (Security *)SSL::useSecurity(param_2);
        pCVar3 = (Connection *)Security::use_connection(pSVar2);
        Connection::TurnOffTLS1_1(pCVar3);
      }
    }
    else {
      pSVar2 = (Security *)SSL::useSecurity(param_2);
      pCVar3 = (Connection *)Security::use_connection(pSVar2);
      Connection::TurnOffTLS(pCVar3);
    }
  }
  SSL::set_pending(param_2,(uchar)this[0x4c]);
  SSL::set_random(param_2,this + 10,0);
  if (this[0x2a] == (ServerHello)0x0) {
    pSVar2 = (Security *)SSL::useSecurity(param_2);
    iVar10 = Security::use_connection(pSVar2);
    *(undefined1 *)(iVar10 + 300) = 0;
  }
  else {
    SSL::set_sessionID(param_2,(uchar *)(this + 0x2b));
  }
  pSVar2 = (Security *)SSL::getSecurity(param_2);
  cVar1 = Security::get_resuming(pSVar2);
  if (cVar1 != '\0') {
    pSVar2 = (Security *)SSL::getSecurity(param_2);
    pSVar4 = (SSL_SESSION *)Security::get_resume(pSVar2);
    pSVar5 = (ServerHello *)SSL_SESSION::GetID(pSVar4);
    iVar10 = 0x20;
    bVar12 = this + 0x2b == (ServerHello *)0x0;
    pSVar11 = this + 0x2b;
    do {
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      bVar12 = *pSVar11 == *pSVar5;
      pSVar11 = pSVar11 + (uint)bVar13 * -2 + 1;
      pSVar5 = pSVar5 + (uint)bVar13 * -2 + 1;
    } while (bVar12);
    if (bVar12) {
      pSVar2 = (Security *)SSL::getSecurity(param_2);
      pSVar4 = (SSL_SESSION *)Security::get_resume(pSVar2);
      puVar6 = (uchar *)SSL_SESSION::GetSecret(pSVar4);
      SSL::set_masterSecret(param_2,puVar6);
      cVar1 = SSL::isTLS(param_2);
      if (cVar1 == '\0') {
        SSL::deriveKeys(param_2);
      }
      else {
        SSL::deriveTLSKeys(param_2);
      }
      pSVar7 = (States *)SSL::useStates(param_2);
      puVar8 = (undefined4 *)States::useClient(pSVar7);
      *puVar8 = 4;
      return;
    }
    pSVar2 = (Security *)SSL::useSecurity(param_2);
    Security::set_resuming(pSVar2,false);
    pcVar9 = (char *)SSL::useLog(param_2);
    Log::Trace(pcVar9);
  }
  cVar1 = SSL::CompressionOn(param_2);
  if ((cVar1 != '\0') && (*(int *)(this + 0x50) == 0)) {
    SSL::UnSetCompression(param_2);
  }
  pSVar7 = (States *)SSL::useStates(param_2);
  puVar8 = (undefined4 *)States::useClient(pSVar7);
  *puVar8 = 1;
  return;
}

```

---

## ServerHello

```asm
// === 08747ae0 yaSSL::ServerHello::ServerHello  [0x08747ae0-0x8747b5f] ===
 8747ae0:	55                   	push   %ebp
 8747ae1:	89 e5                	mov    %esp,%ebp
 8747ae3:	53                   	push   %ebx
 8747ae4:	8b 45 08             	mov    0x8(%ebp),%eax
 8747ae7:	e8 0c b3 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8747aec:	81 c3 ac 50 c2 00    	add    $0xc250ac,%ebx
 8747af2:	8d 48 0c             	lea    0xc(%eax),%ecx
 8747af5:	8b 93 54 fa ff ff    	mov    -0x5ac(%ebx),%edx
 8747afb:	83 c2 08             	add    $0x8,%edx
 8747afe:	89 10                	mov    %edx,(%eax)
 8747b00:	0f b7 55 0c          	movzwl 0xc(%ebp),%edx
 8747b04:	80 7d 10 01          	cmpb   $0x1,0x10(%ebp)
 8747b08:	66 c7 40 0a 00 00    	movw   $0x0,0xa(%eax)
 8747b0e:	66 89 50 08          	mov    %dx,0x8(%eax)
 8747b12:	19 d2                	sbb    %edx,%edx
 8747b14:	f7 d2                	not    %edx
 8747b16:	81 e2 dd 00 00 00    	and    $0xdd,%edx
 8747b1c:	89 50 50             	mov    %edx,0x50(%eax)
 8747b1f:	31 d2                	xor    %edx,%edx
 8747b21:	c7 04 11 00 00 00 00 	movl   $0x0,(%ecx,%edx,1)
 8747b28:	83 c2 04             	add    $0x4,%edx
 8747b2b:	83 fa 1c             	cmp    $0x1c,%edx
 8747b2e:	72 f1                	jb     8747b21 <_ZN5yaSSL11ServerHelloC1ENS_15ProtocolVersionEb+0x41>
 8747b30:	66 c7 04 11 00 00    	movw   $0x0,(%ecx,%edx,1)
 8747b36:	31 d2                	xor    %edx,%edx
 8747b38:	c6 40 2b 00          	movb   $0x0,0x2b(%eax)
 8747b3c:	83 c0 2c             	add    $0x2c,%eax
 8747b3f:	c7 04 10 00 00 00 00 	movl   $0x0,(%eax,%edx,1)
 8747b46:	83 c2 04             	add    $0x4,%edx
 8747b49:	83 fa 1c             	cmp    $0x1c,%edx
 8747b4c:	72 f1                	jb     8747b3f <_ZN5yaSSL11ServerHelloC1ENS_15ProtocolVersionEb+0x5f>
 8747b4e:	01 d0                	add    %edx,%eax
 8747b50:	66 c7 00 00 00       	movw   $0x0,(%eax)
 8747b55:	c6 40 02 00          	movb   $0x0,0x2(%eax)
 8747b59:	5b                   	pop    %ebx
 8747b5a:	5d                   	pop    %ebp
 8747b5b:	c3                   	ret
 8747b5c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::ServerHello::ServerHello @ 0x8747ae0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerHello::ServerHello(yaSSL::ProtocolVersion, bool) */

void __thiscall yaSSL::ServerHello::ServerHello(ServerHello *this,undefined2 param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined **)this = PTR_vtable_0936c5ec + 8;
  *(undefined2 *)(this + 10) = 0;
  *(undefined2 *)(this + 8) = param_2;
  *(uint *)(this + 0x50) = ~-(uint)(param_3 == '\0') & 0xdd;
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    *(undefined4 *)(this + uVar2 + 0xc) = 0;
    uVar1 = uVar2 + 4;
  } while (uVar2 + 4 < 0x1c);
  *(undefined2 *)(this + uVar2 + 0x10) = 0;
  this[0x2b] = (ServerHello)0x0;
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    *(undefined4 *)(this + uVar2 + 0x2c) = 0;
    uVar1 = uVar2 + 4;
  } while (uVar2 + 4 < 0x1c);
  *(undefined2 *)(this + uVar2 + 0x30) = 0;
  (this + uVar2 + 0x30)[2] = (ServerHello)0x0;
  return;
}

```

---

## ServerHello_08747b60

```asm
// === 08747b60 yaSSL::ServerHello::ServerHello  [0x08747b60-0x8747bef] ===
 8747b60:	55                   	push   %ebp
 8747b61:	89 e5                	mov    %esp,%ebp
 8747b63:	83 ec 18             	sub    $0x18,%esp
 8747b66:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8747b69:	e8 8a b2 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8747b6e:	81 c3 2a 50 c2 00    	add    $0xc2502a,%ebx
 8747b74:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8747b77:	8b 75 08             	mov    0x8(%ebp),%esi
 8747b7a:	8b 83 54 fa ff ff    	mov    -0x5ac(%ebx),%eax
 8747b80:	83 c0 08             	add    $0x8,%eax
 8747b83:	89 06                	mov    %eax,(%esi)
 8747b85:	8d 46 08             	lea    0x8(%esi),%eax
 8747b88:	89 04 24             	mov    %eax,(%esp)
 8747b8b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8747b92:	00 
 8747b93:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8747b9a:	00 
 8747b9b:	e8 b0 ed ff ff       	call   8746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>
 8747ba0:	8d 56 0c             	lea    0xc(%esi),%edx
 8747ba3:	31 c0                	xor    %eax,%eax
 8747ba5:	66 c7 46 0a 00 00    	movw   $0x0,0xa(%esi)
 8747bab:	c7 04 02 00 00 00 00 	movl   $0x0,(%edx,%eax,1)
 8747bb2:	83 c0 04             	add    $0x4,%eax
 8747bb5:	83 f8 1c             	cmp    $0x1c,%eax
 8747bb8:	72 f1                	jb     8747bab <_ZN5yaSSL11ServerHelloC1Ev+0x4b>
 8747bba:	66 c7 04 02 00 00    	movw   $0x0,(%edx,%eax,1)
 8747bc0:	31 c0                	xor    %eax,%eax
 8747bc2:	c6 46 2b 00          	movb   $0x0,0x2b(%esi)
 8747bc6:	83 c6 2c             	add    $0x2c,%esi
 8747bc9:	c7 04 06 00 00 00 00 	movl   $0x0,(%esi,%eax,1)
 8747bd0:	83 c0 04             	add    $0x4,%eax
 8747bd3:	83 f8 1c             	cmp    $0x1c,%eax
 8747bd6:	72 f1                	jb     8747bc9 <_ZN5yaSSL11ServerHelloC1Ev+0x69>
 8747bd8:	01 c6                	add    %eax,%esi
 8747bda:	66 c7 06 00 00       	movw   $0x0,(%esi)
 8747bdf:	c6 46 02 00          	movb   $0x0,0x2(%esi)
 8747be3:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8747be6:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8747be9:	89 ec                	mov    %ebp,%esp
 8747beb:	5d                   	pop    %ebp
 8747bec:	c3                   	ret
 8747bed:	8d 76 00             	lea    0x0(%esi),%esi

```

```c
// yaSSL::ServerHello::ServerHello @ 0x8747b60

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerHello::ServerHello() */

void __thiscall yaSSL::ServerHello::ServerHello(ServerHello *this)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined **)this = PTR_vtable_0936c5ec + 8;
  ProtocolVersion::ProtocolVersion((ProtocolVersion *)(this + 8),'\x03','\0');
  *(undefined2 *)(this + 10) = 0;
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    *(undefined4 *)(this + uVar2 + 0xc) = 0;
    uVar1 = uVar2 + 4;
  } while (uVar2 + 4 < 0x1c);
  *(undefined2 *)(this + uVar2 + 0x10) = 0;
  this[0x2b] = (ServerHello)0x0;
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    *(undefined4 *)(this + uVar2 + 0x2c) = 0;
    uVar1 = uVar2 + 4;
  } while (uVar2 + 4 < 0x1c);
  *(undefined2 *)(this + uVar2 + 0x30) = 0;
  (this + uVar2 + 0x30)[2] = (ServerHello)0x0;
  return;
}

```

---

## get

```asm
// === 08748fa0 yaSSL::ServerHello::get  [0x08748fa0-0x8748fcf] ===
 8748fa0:	55                   	push   %ebp
 8748fa1:	89 e5                	mov    %esp,%ebp
 8748fa3:	53                   	push   %ebx
 8748fa4:	83 ec 14             	sub    $0x14,%esp
 8748fa7:	8b 45 08             	mov    0x8(%ebp),%eax
 8748faa:	e8 49 9e fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8748faf:	81 c3 e9 3b c2 00    	add    $0xc23be9,%ebx
 8748fb5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8748fb9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8748fbc:	89 04 24             	mov    %eax,(%esp)
 8748fbf:	e8 fc fe ff ff       	call   8748ec0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_11ServerHelloE>
 8748fc4:	83 c4 14             	add    $0x14,%esp
 8748fc7:	5b                   	pop    %ebx
 8748fc8:	5d                   	pop    %ebp
 8748fc9:	c3                   	ret
 8748fca:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::ServerHello::get @ 0x8748fa0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerHello::get(yaSSL::output_buffer&) const */

void __thiscall yaSSL::ServerHello::get(ServerHello *this,output_buffer *param_1)

{
  yaSSL::operator<<(param_1,this);
  return;
}

```

---

## get_random

```asm
// === 08746e80 yaSSL::ServerHello::get_random  [0x08746e80-0x8746e8f] ===
 8746e80:	55                   	push   %ebp
 8746e81:	89 e5                	mov    %esp,%ebp
 8746e83:	8b 45 08             	mov    0x8(%ebp),%eax
 8746e86:	5d                   	pop    %ebp
 8746e87:	83 c0 0a             	add    $0xa,%eax
 8746e8a:	c3                   	ret
 8746e8b:	90                   	nop
 8746e8c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::ServerHello::get_random @ 0x8746e80

/* yaSSL::ServerHello::get_random() const */

ServerHello * __thiscall yaSSL::ServerHello::get_random(ServerHello *this)

{
  return this + 10;
}

```

---

## get_type

```asm
// === 08746e70 yaSSL::ServerHello::get_type  [0x08746e70-0x8746e7f] ===
 8746e70:	55                   	push   %ebp
 8746e71:	b8 02 00 00 00       	mov    $0x2,%eax
 8746e76:	89 e5                	mov    %esp,%ebp
 8746e78:	5d                   	pop    %ebp
 8746e79:	c3                   	ret
 8746e7a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::ServerHello::get_type @ 0x8746e70

/* yaSSL::ServerHello::get_type() const */

undefined4 yaSSL::ServerHello::get_type(void)

{
  return 2;
}

```

---

## set

```asm
// === 08747df0 yaSSL::ServerHello::set  [0x08747df0-0x8747e1f] ===
 8747df0:	55                   	push   %ebp
 8747df1:	89 e5                	mov    %esp,%ebp
 8747df3:	53                   	push   %ebx
 8747df4:	83 ec 14             	sub    $0x14,%esp
 8747df7:	8b 45 08             	mov    0x8(%ebp),%eax
 8747dfa:	e8 f9 af fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8747dff:	81 c3 99 4d c2 00    	add    $0xc24d99,%ebx
 8747e05:	89 44 24 04          	mov    %eax,0x4(%esp)
 8747e09:	8b 45 0c             	mov    0xc(%ebp),%eax
 8747e0c:	89 04 24             	mov    %eax,(%esp)
 8747e0f:	e8 fc fe ff ff       	call   8747d10 <_ZN5yaSSLrsERNS_12input_bufferERNS_11ServerHelloE>
 8747e14:	83 c4 14             	add    $0x14,%esp
 8747e17:	5b                   	pop    %ebx
 8747e18:	5d                   	pop    %ebp
 8747e19:	c3                   	ret
 8747e1a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::ServerHello::set @ 0x8747df0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerHello::set(yaSSL::input_buffer&) */

void __thiscall yaSSL::ServerHello::set(ServerHello *this,input_buffer *param_1)

{
  yaSSL::operator>>(param_1,this);
  return;
}

```

