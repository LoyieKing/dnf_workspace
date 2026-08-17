# yaSSL__ClientKeyExchange

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## ClientKeyExchange

```asm
// === 087470b0 yaSSL::ClientKeyExchange::ClientKeyExchange  [0x087470b0-0x87470df] ===
 87470b0:	e8 0f d5 fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87470b5:	81 c1 e3 5a c2 00    	add    $0xc25ae3,%ecx
 87470bb:	55                   	push   %ebp
 87470bc:	89 e5                	mov    %esp,%ebp
 87470be:	8b 45 08             	mov    0x8(%ebp),%eax
 87470c1:	8b 91 c8 ff ff ff    	mov    -0x38(%ecx),%edx
 87470c7:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 87470ce:	83 c2 08             	add    $0x8,%edx
 87470d1:	89 10                	mov    %edx,(%eax)
 87470d3:	5d                   	pop    %ebp
 87470d4:	c3                   	ret
 87470d5:	90                   	nop
 87470d6:	8d 76 00             	lea    0x0(%esi),%esi
 87470d9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::ClientKeyExchange::ClientKeyExchange @ 0x87470b0

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* yaSSL::ClientKeyExchange::ClientKeyExchange() */

void __thiscall yaSSL::ClientKeyExchange::ClientKeyExchange(ClientKeyExchange *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0936cb60;
  *(undefined4 *)(this + 8) = 0;
  *(undefined **)this = puVar1 + 8;
  return;
}

```

---

## ClientKeyExchange_0874b700

```asm
// === 0874b700 yaSSL::ClientKeyExchange::ClientKeyExchange  [0x0874b700-0x874b73f] ===
 874b700:	55                   	push   %ebp
 874b701:	89 e5                	mov    %esp,%ebp
 874b703:	53                   	push   %ebx
 874b704:	e8 ef 76 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874b709:	81 c3 8f 14 c2 00    	add    $0xc2148f,%ebx
 874b70f:	83 ec 14             	sub    $0x14,%esp
 874b712:	8b 45 08             	mov    0x8(%ebp),%eax
 874b715:	8b 93 c8 ff ff ff    	mov    -0x38(%ebx),%edx
 874b71b:	83 c2 08             	add    $0x8,%edx
 874b71e:	89 10                	mov    %edx,(%eax)
 874b720:	8b 55 0c             	mov    0xc(%ebp),%edx
 874b723:	89 04 24             	mov    %eax,(%esp)
 874b726:	89 54 24 04          	mov    %edx,0x4(%esp)
 874b72a:	e8 41 ff ff ff       	call   874b670 <_ZN5yaSSL17ClientKeyExchange9createKeyERNS_3SSLE>
 874b72f:	83 c4 14             	add    $0x14,%esp
 874b732:	5b                   	pop    %ebx
 874b733:	5d                   	pop    %ebp
 874b734:	c3                   	ret
 874b735:	90                   	nop
 874b736:	8d 76 00             	lea    0x0(%esi),%esi
 874b739:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::ClientKeyExchange::ClientKeyExchange @ 0x874b700

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientKeyExchange::ClientKeyExchange(yaSSL::SSL&) */

void __thiscall yaSSL::ClientKeyExchange::ClientKeyExchange(ClientKeyExchange *this,SSL *param_1)

{
  *(undefined **)this = PTR_vtable_0936cb60 + 8;
  createKey(this,param_1);
  return;
}

```

---

## Process

```asm
// === 0874b740 yaSSL::ClientKeyExchange::Process  [0x0874b740-0x874b7ff] ===
 874b740:	55                   	push   %ebp
 874b741:	89 e5                	mov    %esp,%ebp
 874b743:	83 ec 28             	sub    $0x28,%esp
 874b746:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 874b749:	e8 aa 76 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874b74e:	81 c3 4a 14 c2 00    	add    $0xc2144a,%ebx
 874b754:	89 75 f8             	mov    %esi,-0x8(%ebp)
 874b757:	8b 75 10             	mov    0x10(%ebp),%esi
 874b75a:	89 7d fc             	mov    %edi,-0x4(%ebp)
 874b75d:	8b 7d 08             	mov    0x8(%ebp),%edi
 874b760:	89 74 24 04          	mov    %esi,0x4(%esp)
 874b764:	89 3c 24             	mov    %edi,(%esp)
 874b767:	e8 04 ff ff ff       	call   874b670 <_ZN5yaSSL17ClientKeyExchange9createKeyERNS_3SSLE>
 874b76c:	89 34 24             	mov    %esi,(%esp)
 874b76f:	e8 3c 29 00 00       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 874b774:	85 c0                	test   %eax,%eax
 874b776:	74 10                	je     874b788 <_ZN5yaSSL17ClientKeyExchange7ProcessERNS_12input_bufferERNS_3SSLE+0x48>
 874b778:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 874b77b:	8b 75 f8             	mov    -0x8(%ebp),%esi
 874b77e:	8b 7d fc             	mov    -0x4(%ebp),%edi
 874b781:	89 ec                	mov    %ebp,%esp
 874b783:	5d                   	pop    %ebp
 874b784:	c3                   	ret
 874b785:	8d 76 00             	lea    0x0(%esi),%esi
 874b788:	8b 47 08             	mov    0x8(%edi),%eax
 874b78b:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 874b78e:	8b 10                	mov    (%eax),%edx
 874b790:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 874b794:	89 04 24             	mov    %eax,(%esp)
 874b797:	89 74 24 04          	mov    %esi,0x4(%esp)
 874b79b:	ff 52 0c             	call   *0xc(%edx)
 874b79e:	89 34 24             	mov    %esi,(%esp)
 874b7a1:	e8 ba 28 00 00       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 874b7a6:	89 04 24             	mov    %eax,(%esp)
 874b7a9:	e8 e2 2f 00 00       	call   874e790 <_ZNK5yaSSL6Crypto15get_certManagerEv>
 874b7ae:	89 04 24             	mov    %eax,(%esp)
 874b7b1:	e8 4a bc 04 00       	call   8797400 <_ZNK5yaSSL11CertManager10verifyPeerEv>
 874b7b6:	84 c0                	test   %al,%al
 874b7b8:	75 26                	jne    874b7e0 <_ZN5yaSSL17ClientKeyExchange7ProcessERNS_12input_bufferERNS_3SSLE+0xa0>
 874b7ba:	89 34 24             	mov    %esi,(%esp)
 874b7bd:	e8 0e 2b 00 00       	call   874e2d0 <_ZN5yaSSL3SSL9useStatesEv>
 874b7c2:	89 04 24             	mov    %eax,(%esp)
 874b7c5:	e8 66 27 00 00       	call   874df30 <_ZN5yaSSL6States9useServerEv>
 874b7ca:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 874b7d0:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 874b7d3:	8b 75 f8             	mov    -0x8(%ebp),%esi
 874b7d6:	8b 7d fc             	mov    -0x4(%ebp),%edi
 874b7d9:	89 ec                	mov    %ebp,%esp
 874b7db:	5d                   	pop    %ebp
 874b7dc:	c3                   	ret
 874b7dd:	8d 76 00             	lea    0x0(%esi),%esi
 874b7e0:	89 34 24             	mov    %esi,(%esp)
 874b7e3:	e8 f8 2a 00 00       	call   874e2e0 <_ZN5yaSSL3SSL9useHashesEv>
 874b7e8:	89 04 24             	mov    %eax,(%esp)
 874b7eb:	e8 b0 30 00 00       	call   874e8a0 <_ZN5yaSSL9sslHashes14use_certVerifyEv>
 874b7f0:	89 34 24             	mov    %esi,(%esp)
 874b7f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 874b7f7:	e8 a4 16 05 00       	call   879cea0 <_ZN5yaSSL16build_certHashesERNS_3SSLERNS_6HashesE>
 874b7fc:	eb bc                	jmp    874b7ba <_ZN5yaSSL17ClientKeyExchange7ProcessERNS_12input_bufferERNS_3SSLE+0x7a>
 874b7fe:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::ClientKeyExchange::Process @ 0x874b740

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientKeyExchange::Process(yaSSL::input_buffer&, yaSSL::SSL&) */

void __thiscall
yaSSL::ClientKeyExchange::Process(ClientKeyExchange *this,input_buffer *param_1,SSL *param_2)

{
  char cVar1;
  int iVar2;
  Crypto *this_00;
  CertManager *this_01;
  States *this_02;
  undefined4 *puVar3;
  sslHashes *this_03;
  Hashes *pHVar4;
  
  createKey(this,param_2);
  iVar2 = SSL::GetError(param_2);
  if (iVar2 != 0) {
    return;
  }
  (**(code **)(**(int **)(this + 8) + 0xc))(*(int **)(this + 8),param_2,param_1);
  this_00 = (Crypto *)SSL::getCrypto(param_2);
  this_01 = (CertManager *)Crypto::get_certManager(this_00);
  cVar1 = CertManager::verifyPeer(this_01);
  if (cVar1 != '\0') {
    this_03 = (sslHashes *)SSL::useHashes(param_2);
    pHVar4 = (Hashes *)sslHashes::use_certVerify(this_03);
    build_certHashes(param_2,pHVar4);
  }
  this_02 = (States *)SSL::useStates(param_2);
  puVar3 = (undefined4 *)States::useServer(this_02);
  *puVar3 = 2;
  return;
}

```

---

## build

```asm
// === 087470e0 yaSSL::ClientKeyExchange::build  [0x087470e0-0x874712f] ===
 87470e0:	55                   	push   %ebp
 87470e1:	89 e5                	mov    %esp,%ebp
 87470e3:	83 ec 18             	sub    $0x18,%esp
 87470e6:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87470e9:	8b 75 08             	mov    0x8(%ebp),%esi
 87470ec:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87470ef:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 87470f2:	e8 01 bd fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87470f7:	81 c3 a1 5a c2 00    	add    $0xc25aa1,%ebx
 87470fd:	8b 46 08             	mov    0x8(%esi),%eax
 8747100:	8b 10                	mov    (%eax),%edx
 8747102:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8747106:	89 04 24             	mov    %eax,(%esp)
 8747109:	ff 52 08             	call   *0x8(%edx)
 874710c:	8b 46 08             	mov    0x8(%esi),%eax
 874710f:	8b 10                	mov    (%eax),%edx
 8747111:	89 04 24             	mov    %eax,(%esp)
 8747114:	ff 52 10             	call   *0x10(%edx)
 8747117:	89 34 24             	mov    %esi,(%esp)
 874711a:	89 44 24 04          	mov    %eax,0x4(%esp)
 874711e:	e8 8d f9 ff ff       	call   8746ab0 <_ZN5yaSSL13HandShakeBase10set_lengthEi>
 8747123:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8747126:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8747129:	89 ec                	mov    %ebp,%esp
 874712b:	5d                   	pop    %ebp
 874712c:	c3                   	ret
 874712d:	90                   	nop
 874712e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::ClientKeyExchange::build @ 0x87470e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientKeyExchange::build(yaSSL::SSL&) */

void __thiscall yaSSL::ClientKeyExchange::build(ClientKeyExchange *this,SSL *param_1)

{
  int iVar1;
  
  (**(code **)(**(int **)(this + 8) + 8))(*(int **)(this + 8),param_1);
  iVar1 = (**(code **)(**(int **)(this + 8) + 0x10))(*(int **)(this + 8));
  HandShakeBase::set_length((HandShakeBase *)this,iVar1);
  return;
}

```

---

## createKey

```asm
// === 0874b670 yaSSL::ClientKeyExchange::createKey  [0x0874b670-0x874b6ff] ===
 874b670:	55                   	push   %ebp
 874b671:	89 e5                	mov    %esp,%ebp
 874b673:	57                   	push   %edi
 874b674:	56                   	push   %esi
 874b675:	53                   	push   %ebx
 874b676:	e8 7d 77 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874b67b:	81 c3 1d 15 c2 00    	add    $0xc2151d,%ebx
 874b681:	83 ec 1c             	sub    $0x1c,%esp
 874b684:	8b 75 0c             	mov    0xc(%ebp),%esi
 874b687:	89 34 24             	mov    %esi,(%esp)
 874b68a:	e8 f1 5a 00 00       	call   8751180 <_ZNK5yaSSL3SSL10getFactoryEv>
 874b68f:	89 04 24             	mov    %eax,(%esp)
 874b692:	e8 19 29 00 00       	call   874dfb0 <_ZNK5yaSSL10sslFactory12getClientKeyEv>
 874b697:	89 34 24             	mov    %esi,(%esp)
 874b69a:	89 c7                	mov    %eax,%edi
 874b69c:	e8 cf 29 00 00       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 874b6a1:	89 04 24             	mov    %eax,(%esp)
 874b6a4:	e8 a7 33 00 00       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 874b6a9:	8b 4f 04             	mov    0x4(%edi),%ecx
 874b6ac:	8b 50 1c             	mov    0x1c(%eax),%edx
 874b6af:	8b 07                	mov    (%edi),%eax
 874b6b1:	39 c8                	cmp    %ecx,%eax
 874b6b3:	75 0a                	jne    874b6bf <_ZN5yaSSL17ClientKeyExchange9createKeyERNS_3SSLE+0x4f>
 874b6b5:	eb 21                	jmp    874b6d8 <_ZN5yaSSL17ClientKeyExchange9createKeyERNS_3SSLE+0x68>
 874b6b7:	90                   	nop
 874b6b8:	83 c0 08             	add    $0x8,%eax
 874b6bb:	39 c1                	cmp    %eax,%ecx
 874b6bd:	74 19                	je     874b6d8 <_ZN5yaSSL17ClientKeyExchange9createKeyERNS_3SSLE+0x68>
 874b6bf:	3b 10                	cmp    (%eax),%edx
 874b6c1:	75 f5                	jne    874b6b8 <_ZN5yaSSL17ClientKeyExchange9createKeyERNS_3SSLE+0x48>
 874b6c3:	ff 50 04             	call   *0x4(%eax)
 874b6c6:	8b 55 08             	mov    0x8(%ebp),%edx
 874b6c9:	85 c0                	test   %eax,%eax
 874b6cb:	89 42 08             	mov    %eax,0x8(%edx)
 874b6ce:	74 12                	je     874b6e2 <_ZN5yaSSL17ClientKeyExchange9createKeyERNS_3SSLE+0x72>
 874b6d0:	83 c4 1c             	add    $0x1c,%esp
 874b6d3:	5b                   	pop    %ebx
 874b6d4:	5e                   	pop    %esi
 874b6d5:	5f                   	pop    %edi
 874b6d6:	5d                   	pop    %ebp
 874b6d7:	c3                   	ret
 874b6d8:	8b 45 08             	mov    0x8(%ebp),%eax
 874b6db:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 874b6e2:	89 34 24             	mov    %esi,(%esp)
 874b6e5:	c7 44 24 04 67 00 00 	movl   $0x67,0x4(%esp)
 874b6ec:	00 
 874b6ed:	e8 de 28 00 00       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 874b6f2:	83 c4 1c             	add    $0x1c,%esp
 874b6f5:	5b                   	pop    %ebx
 874b6f6:	5e                   	pop    %esi
 874b6f7:	5f                   	pop    %edi
 874b6f8:	5d                   	pop    %ebp
 874b6f9:	c3                   	ret
 874b6fa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::ClientKeyExchange::createKey @ 0x874b670

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientKeyExchange::createKey(yaSSL::SSL&) */

void __thiscall yaSSL::ClientKeyExchange::createKey(ClientKeyExchange *this,SSL *param_1)

{
  sslFactory *this_00;
  undefined4 *puVar1;
  Security *this_01;
  int iVar2;
  int *piVar3;
  
  this_00 = (sslFactory *)SSL::getFactory();
  puVar1 = (undefined4 *)sslFactory::getClientKey(this_00);
  this_01 = (Security *)SSL::getSecurity(param_1);
  iVar2 = Security::get_parms(this_01);
  piVar3 = (int *)*puVar1;
  do {
    if (piVar3 == (int *)puVar1[1]) {
      *(undefined4 *)(this + 8) = 0;
LAB_0874b6e2:
      SSL::SetError(param_1,0x67);
      return;
    }
    if (*(int *)(iVar2 + 0x1c) == *piVar3) {
      iVar2 = (*(code *)piVar3[1])();
      *(int *)(this + 8) = iVar2;
      if (iVar2 != 0) {
        return;
      }
      goto LAB_0874b6e2;
    }
    piVar3 = piVar3 + 2;
  } while( true );
}

```

---

## get

```asm
// === 08748450 yaSSL::ClientKeyExchange::get  [0x08748450-0x874847f] ===
 8748450:	55                   	push   %ebp
 8748451:	89 e5                	mov    %esp,%ebp
 8748453:	53                   	push   %ebx
 8748454:	83 ec 14             	sub    $0x14,%esp
 8748457:	8b 45 08             	mov    0x8(%ebp),%eax
 874845a:	e8 99 a9 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874845f:	81 c3 39 47 c2 00    	add    $0xc24739,%ebx
 8748465:	89 44 24 04          	mov    %eax,0x4(%esp)
 8748469:	8b 45 0c             	mov    0xc(%ebp),%eax
 874846c:	89 04 24             	mov    %eax,(%esp)
 874846f:	e8 7c ff ff ff       	call   87483f0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_17ClientKeyExchangeE>
 8748474:	83 c4 14             	add    $0x14,%esp
 8748477:	5b                   	pop    %ebx
 8748478:	5d                   	pop    %ebp
 8748479:	c3                   	ret
 874847a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::ClientKeyExchange::get @ 0x8748450

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientKeyExchange::get(yaSSL::output_buffer&) const */

void __thiscall yaSSL::ClientKeyExchange::get(ClientKeyExchange *this,output_buffer *param_1)

{
  yaSSL::operator<<(param_1,this);
  return;
}

```

---

## getKey

```asm
// === 08747130 yaSSL::ClientKeyExchange::getKey  [0x08747130-0x874714f] ===
 8747130:	55                   	push   %ebp
 8747131:	89 e5                	mov    %esp,%ebp
 8747133:	83 ec 18             	sub    $0x18,%esp
 8747136:	8b 45 08             	mov    0x8(%ebp),%eax
 8747139:	8b 40 08             	mov    0x8(%eax),%eax
 874713c:	8b 10                	mov    (%eax),%edx
 874713e:	89 04 24             	mov    %eax,(%esp)
 8747141:	ff 52 14             	call   *0x14(%edx)
 8747144:	c9                   	leave
 8747145:	c3                   	ret
 8747146:	8d 76 00             	lea    0x0(%esi),%esi
 8747149:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::ClientKeyExchange::getKey @ 0x8747130

/* yaSSL::ClientKeyExchange::getKey() const */

void __thiscall yaSSL::ClientKeyExchange::getKey(ClientKeyExchange *this)

{
  (**(code **)(**(int **)(this + 8) + 0x14))(*(int **)(this + 8));
  return;
}

```

---

## getKeyLength

```asm
// === 08747150 yaSSL::ClientKeyExchange::getKeyLength  [0x08747150-0x874716f] ===
 8747150:	55                   	push   %ebp
 8747151:	89 e5                	mov    %esp,%ebp
 8747153:	83 ec 18             	sub    $0x18,%esp
 8747156:	8b 45 08             	mov    0x8(%ebp),%eax
 8747159:	8b 40 08             	mov    0x8(%eax),%eax
 874715c:	8b 10                	mov    (%eax),%edx
 874715e:	89 04 24             	mov    %eax,(%esp)
 8747161:	ff 52 10             	call   *0x10(%edx)
 8747164:	c9                   	leave
 8747165:	c3                   	ret
 8747166:	8d 76 00             	lea    0x0(%esi),%esi
 8747169:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::ClientKeyExchange::getKeyLength @ 0x8747150

/* yaSSL::ClientKeyExchange::getKeyLength() const */

void __thiscall yaSSL::ClientKeyExchange::getKeyLength(ClientKeyExchange *this)

{
  (**(code **)(**(int **)(this + 8) + 0x10))(*(int **)(this + 8));
  return;
}

```

---

## get_type

```asm
// === 08747180 yaSSL::ClientKeyExchange::get_type  [0x08747180-0x874718f] ===
 8747180:	55                   	push   %ebp
 8747181:	b8 10 00 00 00       	mov    $0x10,%eax
 8747186:	89 e5                	mov    %esp,%ebp
 8747188:	5d                   	pop    %ebp
 8747189:	c3                   	ret
 874718a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::ClientKeyExchange::get_type @ 0x8747180

/* yaSSL::ClientKeyExchange::get_type() const */

undefined4 yaSSL::ClientKeyExchange::get_type(void)

{
  return 0x10;
}

```

---

## set

```asm
// === 08747170 yaSSL::ClientKeyExchange::set  [0x08747170-0x874717f] ===
 8747170:	55                   	push   %ebp
 8747171:	89 e5                	mov    %esp,%ebp
 8747173:	8b 45 0c             	mov    0xc(%ebp),%eax
 8747176:	5d                   	pop    %ebp
 8747177:	c3                   	ret
 8747178:	90                   	nop
 8747179:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::ClientKeyExchange::set @ 0x8747170

/* yaSSL::ClientKeyExchange::set(yaSSL::input_buffer&) */

input_buffer * __thiscall
yaSSL::ClientKeyExchange::set(ClientKeyExchange *this,input_buffer *param_1)

{
  return param_1;
}

```

---

## ~ClientKeyExchange

```asm
// === 08748600 yaSSL::ClientKeyExchange::~ClientKeyExchange  [0x08748600-0x874865f] ===
 8748600:	55                   	push   %ebp
 8748601:	89 e5                	mov    %esp,%ebp
 8748603:	83 ec 28             	sub    $0x28,%esp
 8748606:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8748609:	e8 ea a7 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874860e:	81 c3 8a 45 c2 00    	add    $0xc2458a,%ebx
 8748614:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8748617:	8b 7d 08             	mov    0x8(%ebp),%edi
 874861a:	89 75 f8             	mov    %esi,-0x8(%ebp)
 874861d:	8b 77 08             	mov    0x8(%edi),%esi
 8748620:	8b 83 c8 ff ff ff    	mov    -0x38(%ebx),%eax
 8748626:	83 c0 08             	add    $0x8,%eax
 8748629:	85 f6                	test   %esi,%esi
 874862b:	89 07                	mov    %eax,(%edi)
 874862d:	74 07                	je     8748636 <_ZN5yaSSL17ClientKeyExchangeD1Ev+0x36>
 874862f:	8b 06                	mov    (%esi),%eax
 8748631:	89 34 24             	mov    %esi,(%esp)
 8748634:	ff 10                	call   *(%eax)
 8748636:	89 34 24             	mov    %esi,(%esp)
 8748639:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874863e:	e8 dd 81 00 00       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 8748643:	8b 83 4c fa ff ff    	mov    -0x5b4(%ebx),%eax
 8748649:	83 c0 08             	add    $0x8,%eax
 874864c:	89 07                	mov    %eax,(%edi)
 874864e:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8748651:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8748654:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8748657:	89 ec                	mov    %ebp,%esp
 8748659:	5d                   	pop    %ebp
 874865a:	c3                   	ret
 874865b:	90                   	nop
 874865c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::ClientKeyExchange::~ClientKeyExchange @ 0x8748600

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientKeyExchange::~ClientKeyExchange() */

void __thiscall yaSSL::ClientKeyExchange::~ClientKeyExchange(ClientKeyExchange *this)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 8);
  *(undefined **)this = PTR_vtable_0936cb60 + 8;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1);
  }
  operator_delete(puVar1,0);
  *(undefined **)this = PTR_vtable_0936c5e4 + 8;
  return;
}

```

---

## ~ClientKeyExchange_08748660

```asm
// === 08748660 yaSSL::ClientKeyExchange::~ClientKeyExchange  [0x08748660-0x874868f] ===
 8748660:	55                   	push   %ebp
 8748661:	89 e5                	mov    %esp,%ebp
 8748663:	53                   	push   %ebx
 8748664:	e8 8f a7 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8748669:	81 c3 2f 45 c2 00    	add    $0xc2452f,%ebx
 874866f:	83 ec 14             	sub    $0x14,%esp
 8748672:	8b 45 08             	mov    0x8(%ebp),%eax
 8748675:	89 04 24             	mov    %eax,(%esp)
 8748678:	e8 83 ff ff ff       	call   8748600 <_ZN5yaSSL17ClientKeyExchangeD1Ev>
 874867d:	83 c4 14             	add    $0x14,%esp
 8748680:	5b                   	pop    %ebx
 8748681:	5d                   	pop    %ebp
 8748682:	c3                   	ret
 8748683:	90                   	nop
 8748684:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874868a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::ClientKeyExchange::~ClientKeyExchange @ 0x8748660

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientKeyExchange::~ClientKeyExchange() */

void __thiscall yaSSL::ClientKeyExchange::~ClientKeyExchange(ClientKeyExchange *this)

{
  ~ClientKeyExchange(this);
  return;
}

```

