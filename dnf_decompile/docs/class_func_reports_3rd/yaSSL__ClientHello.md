# yaSSL__ClientHello

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## ClientHello

```asm
// === 087479d0 yaSSL::ClientHello::ClientHello  [0x087479d0-0x8747a2f] ===
 87479d0:	e8 ef cb fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87479d5:	81 c1 c3 51 c2 00    	add    $0xc251c3,%ecx
 87479db:	55                   	push   %ebp
 87479dc:	89 e5                	mov    %esp,%ebp
 87479de:	8b 45 08             	mov    0x8(%ebp),%eax
 87479e1:	8b 91 40 fd ff ff    	mov    -0x2c0(%ecx),%edx
 87479e7:	83 c2 08             	add    $0x8,%edx
 87479ea:	89 10                	mov    %edx,(%eax)
 87479ec:	0f b7 55 0c          	movzwl 0xc(%ebp),%edx
 87479f0:	80 7d 10 01          	cmpb   $0x1,0x10(%ebp)
 87479f4:	66 c7 40 0a 00 00    	movw   $0x0,0xa(%eax)
 87479fa:	66 89 50 08          	mov    %dx,0x8(%eax)
 87479fe:	19 d2                	sbb    %edx,%edx
 8747a00:	f7 d2                	not    %edx
 8747a02:	81 e2 dd 00 00 00    	and    $0xdd,%edx
 8747a08:	89 90 d0 00 00 00    	mov    %edx,0xd0(%eax)
 8747a0e:	83 c0 0c             	add    $0xc,%eax
 8747a11:	31 d2                	xor    %edx,%edx
 8747a13:	c7 04 10 00 00 00 00 	movl   $0x0,(%eax,%edx,1)
 8747a1a:	83 c2 04             	add    $0x4,%edx
 8747a1d:	83 fa 1c             	cmp    $0x1c,%edx
 8747a20:	72 f1                	jb     8747a13 <_ZN5yaSSL11ClientHelloC1ENS_15ProtocolVersionEb+0x43>
 8747a22:	66 c7 04 10 00 00    	movw   $0x0,(%eax,%edx,1)
 8747a28:	5d                   	pop    %ebp
 8747a29:	c3                   	ret
 8747a2a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::ClientHello::ClientHello @ 0x87479d0

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* yaSSL::ClientHello::ClientHello(yaSSL::ProtocolVersion, bool) */

void __thiscall yaSSL::ClientHello::ClientHello(ClientHello *this,undefined2 param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined **)this = PTR_vtable_0936c8d8 + 8;
  *(undefined2 *)(this + 10) = 0;
  *(undefined2 *)(this + 8) = param_2;
  *(uint *)(this + 0xd0) = ~-(uint)(param_3 == '\0') & 0xdd;
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    *(undefined4 *)(this + uVar2 + 0xc) = 0;
    uVar1 = uVar2 + 4;
  } while (uVar2 + 4 < 0x1c);
  *(undefined2 *)(this + uVar2 + 0x10) = 0;
  return;
}

```

---

## ClientHello_08747a30

```asm
// === 08747a30 yaSSL::ClientHello::ClientHello  [0x08747a30-0x8747a9f] ===
 8747a30:	55                   	push   %ebp
 8747a31:	89 e5                	mov    %esp,%ebp
 8747a33:	83 ec 18             	sub    $0x18,%esp
 8747a36:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8747a39:	e8 ba b3 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8747a3e:	81 c3 5a 51 c2 00    	add    $0xc2515a,%ebx
 8747a44:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8747a47:	8b 75 08             	mov    0x8(%ebp),%esi
 8747a4a:	8b 83 40 fd ff ff    	mov    -0x2c0(%ebx),%eax
 8747a50:	83 c0 08             	add    $0x8,%eax
 8747a53:	89 06                	mov    %eax,(%esi)
 8747a55:	8d 46 08             	lea    0x8(%esi),%eax
 8747a58:	89 04 24             	mov    %eax,(%esp)
 8747a5b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8747a62:	00 
 8747a63:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8747a6a:	00 
 8747a6b:	e8 e0 ee ff ff       	call   8746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>
 8747a70:	31 c0                	xor    %eax,%eax
 8747a72:	66 c7 46 0a 00 00    	movw   $0x0,0xa(%esi)
 8747a78:	83 c6 0c             	add    $0xc,%esi
 8747a7b:	c7 04 06 00 00 00 00 	movl   $0x0,(%esi,%eax,1)
 8747a82:	83 c0 04             	add    $0x4,%eax
 8747a85:	83 f8 1c             	cmp    $0x1c,%eax
 8747a88:	72 f1                	jb     8747a7b <_ZN5yaSSL11ClientHelloC1Ev+0x4b>
 8747a8a:	66 c7 04 06 00 00    	movw   $0x0,(%esi,%eax,1)
 8747a90:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8747a93:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8747a96:	89 ec                	mov    %ebp,%esp
 8747a98:	5d                   	pop    %ebp
 8747a99:	c3                   	ret
 8747a9a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::ClientHello::ClientHello @ 0x8747a30

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientHello::ClientHello() */

void __thiscall yaSSL::ClientHello::ClientHello(ClientHello *this)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined **)this = PTR_vtable_0936c8d8 + 8;
  ProtocolVersion::ProtocolVersion((ProtocolVersion *)(this + 8),'\x03','\0');
  *(undefined2 *)(this + 10) = 0;
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    *(undefined4 *)(this + uVar2 + 0xc) = 0;
    uVar1 = uVar2 + 4;
  } while (uVar2 + 4 < 0x1c);
  *(undefined2 *)(this + uVar2 + 0x10) = 0;
  return;
}

```

---

## Process

```asm
// === 0874a450 yaSSL::ClientHello::Process  [0x0874a450-0x874a81f] ===
 874a450:	55                   	push   %ebp
 874a451:	89 e5                	mov    %esp,%ebp
 874a453:	83 ec 68             	sub    $0x68,%esp
 874a456:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 874a459:	e8 9a 89 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874a45e:	81 c3 3a 27 c2 00    	add    $0xc2273a,%ebx
 874a464:	89 75 f8             	mov    %esi,-0x8(%ebp)
 874a467:	8b 75 10             	mov    0x10(%ebp),%esi
 874a46a:	89 7d fc             	mov    %edi,-0x4(%ebp)
 874a46d:	8b 7d 08             	mov    0x8(%ebp),%edi
 874a470:	89 34 24             	mov    %esi,(%esp)
 874a473:	e8 48 3e 00 00       	call   874e2c0 <_ZN5yaSSL3SSL11useSecurityEv>
 874a478:	89 04 24             	mov    %eax,(%esp)
 874a47b:	e8 80 48 00 00       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 874a480:	0f b7 57 08          	movzwl 0x8(%edi),%edx
 874a484:	66 89 90 30 01 00 00 	mov    %dx,0x130(%eax)
 874a48b:	80 7f 08 03          	cmpb   $0x3,0x8(%edi)
 874a48f:	74 1f                	je     874a4b0 <_ZN5yaSSL11ClientHello7ProcessERNS_12input_bufferERNS_3SSLE+0x60>
 874a491:	c7 44 24 04 75 00 00 	movl   $0x75,0x4(%esp)
 874a498:	00 
 874a499:	89 34 24             	mov    %esi,(%esp)
 874a49c:	e8 2f 3b 00 00       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 874a4a1:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 874a4a4:	8b 75 f8             	mov    -0x8(%ebp),%esi
 874a4a7:	8b 7d fc             	mov    -0x4(%ebp),%edi
 874a4aa:	89 ec                	mov    %ebp,%esp
 874a4ac:	5d                   	pop    %ebp
 874a4ad:	c3                   	ret
 874a4ae:	66 90                	xchg   %ax,%ax
 874a4b0:	89 34 24             	mov    %esi,(%esp)
 874a4b3:	e8 58 45 00 00       	call   874ea10 <_ZNK5yaSSL3SSL16GetMultiProtocolEv>
 874a4b8:	84 c0                	test   %al,%al
 874a4ba:	0f 85 08 01 00 00    	jne    874a5c8 <_ZN5yaSSL11ClientHello7ProcessERNS_12input_bufferERNS_3SSLE+0x178>
 874a4c0:	89 34 24             	mov    %esi,(%esp)
 874a4c3:	e8 a8 44 00 00       	call   874e970 <_ZNK5yaSSL3SSL9isTLSv1_1Ev>
 874a4c8:	84 c0                	test   %al,%al
 874a4ca:	74 06                	je     874a4d2 <_ZN5yaSSL11ClientHello7ProcessERNS_12input_bufferERNS_3SSLE+0x82>
 874a4cc:	80 7f 09 01          	cmpb   $0x1,0x9(%edi)
 874a4d0:	76 bf                	jbe    874a491 <_ZN5yaSSL11ClientHello7ProcessERNS_12input_bufferERNS_3SSLE+0x41>
 874a4d2:	89 34 24             	mov    %esi,(%esp)
 874a4d5:	e8 c6 44 00 00       	call   874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>
 874a4da:	84 c0                	test   %al,%al
 874a4dc:	74 06                	je     874a4e4 <_ZN5yaSSL11ClientHello7ProcessERNS_12input_bufferERNS_3SSLE+0x94>
 874a4de:	80 7f 09 00          	cmpb   $0x0,0x9(%edi)
 874a4e2:	74 ad                	je     874a491 <_ZN5yaSSL11ClientHello7ProcessERNS_12input_bufferERNS_3SSLE+0x41>
 874a4e4:	89 34 24             	mov    %esi,(%esp)
 874a4e7:	e8 b4 44 00 00       	call   874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>
 874a4ec:	84 c0                	test   %al,%al
 874a4ee:	0f 84 dc 01 00 00    	je     874a6d0 <_ZN5yaSSL11ClientHello7ProcessERNS_12input_bufferERNS_3SSLE+0x280>
 874a4f4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 874a4f8:	8d 47 0a             	lea    0xa(%edi),%eax
 874a4fb:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 874a502:	00 
 874a503:	89 44 24 04          	mov    %eax,0x4(%esp)
 874a507:	89 34 24             	mov    %esi,(%esp)
 874a50a:	e8 c1 4e 00 00       	call   874f3d0 <_ZN5yaSSL3SSL10set_randomEPKhNS_13ConnectionEndE>
 874a50f:	80 7f 2a 00          	cmpb   $0x0,0x2a(%edi)
 874a513:	74 3b                	je     874a550 <_ZN5yaSSL11ClientHello7ProcessERNS_12input_bufferERNS_3SSLE+0x100>
 874a515:	89 34 24             	mov    %esi,(%esp)
 874a518:	e8 53 3b 00 00       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 874a51d:	89 04 24             	mov    %eax,(%esp)
 874a520:	e8 db 44 00 00       	call   874ea00 <_ZNK5yaSSL8Security10GetContextEv>
 874a525:	89 04 24             	mov    %eax,(%esp)
 874a528:	e8 f3 3f 00 00       	call   874e520 <_ZNK5yaSSL7SSL_CTX18GetSessionCacheOffEv>
 874a52d:	84 c0                	test   %al,%al
 874a52f:	0f 84 c3 01 00 00    	je     874a6f8 <_ZN5yaSSL11ClientHello7ProcessERNS_12input_bufferERNS_3SSLE+0x2a8>
 874a535:	89 34 24             	mov    %esi,(%esp)
 874a538:	e8 c3 3d 00 00       	call   874e300 <_ZN5yaSSL3SSL6useLogEv>
 874a53d:	8d 93 e9 81 99 ff    	lea    -0x667e17(%ebx),%edx
 874a543:	89 54 24 04          	mov    %edx,0x4(%esp)
 874a547:	89 04 24             	mov    %eax,(%esp)
 874a54a:	e8 11 6f 05 00       	call   87a1460 <_ZN5yaSSL3Log5TraceEPKc>
 874a54f:	90                   	nop
 874a550:	0f b7 47 4c          	movzwl 0x4c(%edi),%eax
 874a554:	89 34 24             	mov    %esi,(%esp)
 874a557:	89 44 24 08          	mov    %eax,0x8(%esp)
 874a55b:	8d 47 4e             	lea    0x4e(%edi),%eax
 874a55e:	89 44 24 04          	mov    %eax,0x4(%esp)
 874a562:	e8 49 49 00 00       	call   874eeb0 <_ZN5yaSSL3SSL10matchSuiteEPKhj>
 874a567:	89 34 24             	mov    %esi,(%esp)
 874a56a:	e8 41 3b 00 00       	call   874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>
 874a56f:	85 c0                	test   %eax,%eax
 874a571:	0f 85 2a ff ff ff    	jne    874a4a1 <_ZN5yaSSL11ClientHello7ProcessERNS_12input_bufferERNS_3SSLE+0x51>
 874a577:	89 34 24             	mov    %esi,(%esp)
 874a57a:	e8 f1 3a 00 00       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 874a57f:	89 04 24             	mov    %eax,(%esp)
 874a582:	e8 c9 44 00 00       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 874a587:	0f b6 40 2d          	movzbl 0x2d(%eax),%eax
 874a58b:	89 34 24             	mov    %esi,(%esp)
 874a58e:	89 44 24 04          	mov    %eax,0x4(%esp)
 874a592:	e8 89 6c 00 00       	call   8751220 <_ZN5yaSSL3SSL11set_pendingEh>
 874a597:	81 bf d0 00 00 00 dd 	cmpl   $0xdd,0xd0(%edi)
 874a59e:	00 00 00 
 874a5a1:	0f 84 3e 01 00 00    	je     874a6e5 <_ZN5yaSSL11ClientHello7ProcessERNS_12input_bufferERNS_3SSLE+0x295>
 874a5a7:	89 34 24             	mov    %esi,(%esp)
 874a5aa:	e8 21 3d 00 00       	call   874e2d0 <_ZN5yaSSL3SSL9useStatesEv>
 874a5af:	89 04 24             	mov    %eax,(%esp)
 874a5b2:	e8 79 39 00 00       	call   874df30 <_ZN5yaSSL6States9useServerEv>
 874a5b7:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 874a5bd:	e9 df fe ff ff       	jmp    874a4a1 <_ZN5yaSSL11ClientHello7ProcessERNS_12input_bufferERNS_3SSLE+0x51>
 874a5c2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874a5c8:	89 34 24             	mov    %esi,(%esp)
 874a5cb:	e8 d0 43 00 00       	call   874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>
 874a5d0:	84 c0                	test   %al,%al
 874a5d2:	74 06                	je     874a5da <_ZN5yaSSL11ClientHello7ProcessERNS_12input_bufferERNS_3SSLE+0x18a>
 874a5d4:	80 7f 09 00          	cmpb   $0x0,0x9(%edi)
 874a5d8:	74 3e                	je     874a618 <_ZN5yaSSL11ClientHello7ProcessERNS_12input_bufferERNS_3SSLE+0x1c8>
 874a5da:	89 34 24             	mov    %esi,(%esp)
 874a5dd:	e8 8e 43 00 00       	call   874e970 <_ZNK5yaSSL3SSL9isTLSv1_1Ev>
 874a5e2:	84 c0                	test   %al,%al
 874a5e4:	0f 84 0e ff ff ff    	je     874a4f8 <_ZN5yaSSL11ClientHello7ProcessERNS_12input_bufferERNS_3SSLE+0xa8>
 874a5ea:	80 7f 09 01          	cmpb   $0x1,0x9(%edi)
 874a5ee:	0f 85 04 ff ff ff    	jne    874a4f8 <_ZN5yaSSL11ClientHello7ProcessERNS_12input_bufferERNS_3SSLE+0xa8>
 874a5f4:	89 34 24             	mov    %esi,(%esp)
 874a5f7:	e8 c4 3c 00 00       	call   874e2c0 <_ZN5yaSSL3SSL11useSecurityEv>
 874a5fc:	89 04 24             	mov    %eax,(%esp)
 874a5ff:	e8 fc 46 00 00       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 874a604:	89 04 24             	mov    %eax,(%esp)
 874a607:	e8 54 cc ff ff       	call   8747260 <_ZN5yaSSL10Connection13TurnOffTLS1_1Ev>
 874a60c:	e9 e7 fe ff ff       	jmp    874a4f8 <_ZN5yaSSL11ClientHello7ProcessERNS_12input_bufferERNS_3SSLE+0xa8>
 874a611:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 874a618:	89 34 24             	mov    %esi,(%esp)
 874a61b:	e8 a0 3c 00 00       	call   874e2c0 <_ZN5yaSSL3SSL11useSecurityEv>
 874a620:	89 04 24             	mov    %eax,(%esp)
 874a623:	e8 d8 46 00 00       	call   874ed00 <_ZN5yaSSL8Security14use_connectionEv>
 874a628:	89 04 24             	mov    %eax,(%esp)
 874a62b:	e8 10 cc ff ff       	call   8747240 <_ZN5yaSSL10Connection10TurnOffTLSEv>
 874a630:	89 34 24             	mov    %esi,(%esp)
 874a633:	e8 38 3a 00 00       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 874a638:	89 04 24             	mov    %eax,(%esp)
 874a63b:	e8 20 43 00 00       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 874a640:	0f b7 80 2e 01 00 00 	movzwl 0x12e(%eax),%eax
 874a647:	89 34 24             	mov    %esi,(%esp)
 874a64a:	66 89 45 c2          	mov    %ax,-0x3e(%ebp)
 874a64e:	e8 1d 3a 00 00       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 874a653:	89 04 24             	mov    %eax,(%esp)
 874a656:	e8 f5 43 00 00       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 874a65b:	0f b6 80 df 06 00 00 	movzbl 0x6df(%eax),%eax
 874a662:	89 34 24             	mov    %esi,(%esp)
 874a665:	88 45 c4             	mov    %al,-0x3c(%ebp)
 874a668:	e8 f3 39 00 00       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 874a66d:	89 04 24             	mov    %eax,(%esp)
 874a670:	e8 1b 41 00 00       	call   874e790 <_ZNK5yaSSL6Crypto15get_certManagerEv>
 874a675:	89 04 24             	mov    %eax,(%esp)
 874a678:	e8 53 ce 04 00       	call   87974d0 <_ZNK5yaSSL11CertManager11get_keyTypeEv>
 874a67d:	31 c9                	xor    %ecx,%ecx
 874a67f:	89 34 24             	mov    %esi,(%esp)
 874a682:	83 f8 01             	cmp    $0x1,%eax
 874a685:	0f 95 c1             	setne  %cl
 874a688:	31 d2                	xor    %edx,%edx
 874a68a:	83 f8 01             	cmp    $0x1,%eax
 874a68d:	0f 94 c2             	sete   %dl
 874a690:	89 55 bc             	mov    %edx,-0x44(%ebp)
 874a693:	89 4d b8             	mov    %ecx,-0x48(%ebp)
 874a696:	e8 25 3c 00 00       	call   874e2c0 <_ZN5yaSSL3SSL11useSecurityEv>
 874a69b:	89 04 24             	mov    %eax,(%esp)
 874a69e:	e8 fd 47 00 00       	call   874eea0 <_ZN5yaSSL8Security9use_parmsEv>
 874a6a3:	8b 55 bc             	mov    -0x44(%ebp),%edx
 874a6a6:	8b 4d b8             	mov    -0x48(%ebp),%ecx
 874a6a9:	89 54 24 10          	mov    %edx,0x10(%esp)
 874a6ad:	0f b6 55 c4          	movzbl -0x3c(%ebp),%edx
 874a6b1:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 874a6b5:	89 04 24             	mov    %eax,(%esp)
 874a6b8:	89 54 24 08          	mov    %edx,0x8(%esp)
 874a6bc:	0f b7 55 c2          	movzwl -0x3e(%ebp),%edx
 874a6c0:	66 89 54 24 04       	mov    %dx,0x4(%esp)
 874a6c5:	e8 66 fb ff ff       	call   874a230 <_ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb>
 874a6ca:	e9 29 fe ff ff       	jmp    874a4f8 <_ZN5yaSSL11ClientHello7ProcessERNS_12input_bufferERNS_3SSLE+0xa8>
 874a6cf:	90                   	nop
 874a6d0:	80 7f 09 00          	cmpb   $0x0,0x9(%edi)
 874a6d4:	0f 84 1e fe ff ff    	je     874a4f8 <_ZN5yaSSL11ClientHello7ProcessERNS_12input_bufferERNS_3SSLE+0xa8>
 874a6da:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874a6e0:	e9 ac fd ff ff       	jmp    874a491 <_ZN5yaSSL11ClientHello7ProcessERNS_12input_bufferERNS_3SSLE+0x41>
 874a6e5:	89 34 24             	mov    %esi,(%esp)
 874a6e8:	e8 d3 38 00 00       	call   874dfc0 <_ZN5yaSSL3SSL14SetCompressionEv>
 874a6ed:	8d 76 00             	lea    0x0(%esi),%esi
 874a6f0:	e9 b2 fe ff ff       	jmp    874a5a7 <_ZN5yaSSL11ClientHello7ProcessERNS_12input_bufferERNS_3SSLE+0x157>
 874a6f5:	8d 76 00             	lea    0x0(%esi),%esi
 874a6f8:	e8 a3 6a 00 00       	call   87511a0 <_ZN5yaSSL11GetSessionsEv>
 874a6fd:	8d 57 2b             	lea    0x2b(%edi),%edx
 874a700:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 874a707:	00 
 874a708:	89 54 24 04          	mov    %edx,0x4(%esp)
 874a70c:	89 04 24             	mov    %eax,(%esp)
 874a70f:	e8 4c 87 00 00       	call   8752e60 <_ZN5yaSSL8Sessions6lookupEPKhPNS_11SSL_SESSIONE>
 874a714:	85 c0                	test   %eax,%eax
 874a716:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 874a719:	0f 84 16 fe ff ff    	je     874a535 <_ZN5yaSSL11ClientHello7ProcessERNS_12input_bufferERNS_3SSLE+0xe5>
 874a71f:	89 44 24 04          	mov    %eax,0x4(%esp)
 874a723:	8d 7d c8             	lea    -0x38(%ebp),%edi
 874a726:	89 34 24             	mov    %esi,(%esp)
 874a729:	e8 b2 88 00 00       	call   8752fe0 <_ZN5yaSSL3SSL11set_sessionEPNS_11SSL_SESSIONE>
 874a72e:	89 34 24             	mov    %esi,(%esp)
 874a731:	e8 8a 3b 00 00       	call   874e2c0 <_ZN5yaSSL3SSL11useSecurityEv>
 874a736:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 874a73d:	00 
 874a73e:	89 04 24             	mov    %eax,(%esp)
 874a741:	e8 7a 48 00 00       	call   874efc0 <_ZN5yaSSL8Security12set_resumingEb>
 874a746:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 874a749:	89 14 24             	mov    %edx,(%esp)
 874a74c:	e8 ef 3b 00 00       	call   874e340 <_ZNK5yaSSL11SSL_SESSION8GetSuiteEv>
 874a751:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 874a758:	00 
 874a759:	89 34 24             	mov    %esi,(%esp)
 874a75c:	89 44 24 04          	mov    %eax,0x4(%esp)
 874a760:	e8 4b 47 00 00       	call   874eeb0 <_ZN5yaSSL3SSL10matchSuiteEPKhj>
 874a765:	89 34 24             	mov    %esi,(%esp)
 874a768:	e8 03 39 00 00       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 874a76d:	89 04 24             	mov    %eax,(%esp)
 874a770:	e8 db 42 00 00       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 874a775:	0f b6 40 2d          	movzbl 0x2d(%eax),%eax
 874a779:	89 34 24             	mov    %esi,(%esp)
 874a77c:	89 44 24 04          	mov    %eax,0x4(%esp)
 874a780:	e8 9b 6a 00 00       	call   8751220 <_ZN5yaSSL3SSL11set_pendingEh>
 874a785:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 874a788:	89 04 24             	mov    %eax,(%esp)
 874a78b:	e8 a0 3b 00 00       	call   874e330 <_ZNK5yaSSL11SSL_SESSION9GetSecretEv>
 874a790:	89 34 24             	mov    %esi,(%esp)
 874a793:	89 44 24 04          	mov    %eax,0x4(%esp)
 874a797:	e8 b4 4b 00 00       	call   874f350 <_ZN5yaSSL3SSL16set_masterSecretEPKh>
 874a79c:	89 34 24             	mov    %esi,(%esp)
 874a79f:	e8 bc 38 00 00       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 874a7a4:	89 04 24             	mov    %eax,(%esp)
 874a7a7:	e8 d4 3f 00 00       	call   874e780 <_ZNK5yaSSL6Crypto10get_randomEv>
 874a7ac:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 874a7b3:	00 
 874a7b4:	89 7c 24 04          	mov    %edi,0x4(%esp)
 874a7b8:	89 04 24             	mov    %eax,(%esp)
 874a7bb:	e8 00 e8 04 00       	call   8798fc0 <_ZNK5yaSSL10RandomPool4FillEPhj>
 874a7c0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 874a7c7:	00 
 874a7c8:	89 7c 24 04          	mov    %edi,0x4(%esp)
 874a7cc:	89 34 24             	mov    %esi,(%esp)
 874a7cf:	e8 fc 4b 00 00       	call   874f3d0 <_ZN5yaSSL3SSL10set_randomEPKhNS_13ConnectionEndE>
 874a7d4:	89 34 24             	mov    %esi,(%esp)
 874a7d7:	e8 c4 41 00 00       	call   874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>
 874a7dc:	84 c0                	test   %al,%al
 874a7de:	74 30                	je     874a810 <_ZN5yaSSL11ClientHello7ProcessERNS_12input_bufferERNS_3SSLE+0x3c0>
 874a7e0:	89 34 24             	mov    %esi,(%esp)
 874a7e3:	e8 d8 53 00 00       	call   874fbc0 <_ZN5yaSSL3SSL13deriveTLSKeysEv>
 874a7e8:	89 34 24             	mov    %esi,(%esp)
 874a7eb:	e8 e0 3a 00 00       	call   874e2d0 <_ZN5yaSSL3SSL9useStatesEv>
 874a7f0:	89 04 24             	mov    %eax,(%esp)
 874a7f3:	e8 38 37 00 00       	call   874df30 <_ZN5yaSSL6States9useServerEv>
 874a7f8:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 874a7fe:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 874a801:	8b 75 f8             	mov    -0x8(%ebp),%esi
 874a804:	8b 7d fc             	mov    -0x4(%ebp),%edi
 874a807:	89 ec                	mov    %ebp,%esp
 874a809:	5d                   	pop    %ebp
 874a80a:	c3                   	ret
 874a80b:	90                   	nop
 874a80c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 874a810:	89 34 24             	mov    %esi,(%esp)
 874a813:	e8 18 56 00 00       	call   874fe30 <_ZN5yaSSL3SSL10deriveKeysEv>
 874a818:	eb ce                	jmp    874a7e8 <_ZN5yaSSL11ClientHello7ProcessERNS_12input_bufferERNS_3SSLE+0x398>
 874a81a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::ClientHello::Process @ 0x874a450

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientHello::Process(yaSSL::input_buffer&, yaSSL::SSL&) */

void __thiscall yaSSL::ClientHello::Process(ClientHello *this,input_buffer *param_1,SSL *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  char cVar3;
  Security *pSVar4;
  int iVar5;
  SSL_CTX *this_00;
  char *pcVar6;
  States *pSVar7;
  undefined4 *puVar8;
  Connection *pCVar9;
  CertManager *this_01;
  Parameters *pPVar10;
  Sessions *this_02;
  SSL_SESSION *this_03;
  uchar *puVar11;
  Crypto *pCVar12;
  RandomPool *this_04;
  undefined4 in_stack_ffffff98;
  undefined2 uVar13;
  uchar local_3c [44];
  
  uVar13 = (undefined2)((uint)in_stack_ffffff98 >> 0x10);
  pSVar4 = (Security *)SSL::useSecurity(param_2);
  iVar5 = Security::use_connection(pSVar4);
  *(undefined2 *)(iVar5 + 0x130) = *(undefined2 *)(this + 8);
  if (this[8] == (ClientHello)0x3) {
    cVar3 = SSL::GetMultiProtocol(param_2);
    if (cVar3 == '\0') {
      cVar3 = SSL::isTLSv1_1(param_2);
      if ((((cVar3 != '\0') && ((byte)this[9] < 2)) ||
          ((cVar3 = SSL::isTLS(param_2), cVar3 != '\0' && (this[9] == (ClientHello)0x0)))) ||
         ((cVar3 = SSL::isTLS(param_2), cVar3 == '\0' && (this[9] != (ClientHello)0x0))))
      goto LAB_0874a491;
    }
    else {
      cVar3 = SSL::isTLS(param_2);
      if ((cVar3 == '\0') || (this[9] != (ClientHello)0x0)) {
        cVar3 = SSL::isTLSv1_1(param_2);
        if ((cVar3 != '\0') && (this[9] == (ClientHello)0x1)) {
          pSVar4 = (Security *)SSL::useSecurity(param_2);
          pCVar9 = (Connection *)Security::use_connection(pSVar4);
          Connection::TurnOffTLS1_1(pCVar9);
        }
      }
      else {
        pSVar4 = (Security *)SSL::useSecurity(param_2);
        pCVar9 = (Connection *)Security::use_connection(pSVar4);
        Connection::TurnOffTLS(pCVar9);
        pSVar4 = (Security *)SSL::getSecurity(param_2);
        iVar5 = Security::get_connection(pSVar4);
        uVar2 = *(undefined2 *)(iVar5 + 0x12e);
        pSVar4 = (Security *)SSL::getSecurity(param_2);
        iVar5 = Security::get_parms(pSVar4);
        uVar1 = *(undefined1 *)(iVar5 + 0x6df);
        pCVar12 = (Crypto *)SSL::getCrypto(param_2);
        this_01 = (CertManager *)Crypto::get_certManager(pCVar12);
        iVar5 = CertManager::get_keyType(this_01);
        pSVar4 = (Security *)SSL::useSecurity(param_2);
        pPVar10 = (Parameters *)Security::use_parms(pSVar4);
        Parameters::SetSuites(pPVar10,CONCAT22(uVar13,uVar2),uVar1,iVar5 != 1,iVar5 == 1);
      }
    }
    SSL::set_random(param_2,this + 10,1);
    if (this[0x2a] != (ClientHello)0x0) {
      pSVar4 = (Security *)SSL::getSecurity(param_2);
      this_00 = (SSL_CTX *)Security::GetContext(pSVar4);
      cVar3 = SSL_CTX::GetSessionCacheOff(this_00);
      if (cVar3 == '\0') {
        this_02 = (Sessions *)GetSessions();
        this_03 = (SSL_SESSION *)Sessions::lookup(this_02,(uchar *)(this + 0x2b),(SSL_SESSION *)0x0)
        ;
        if (this_03 != (SSL_SESSION *)0x0) {
          SSL::set_session(param_2,this_03);
          pSVar4 = (Security *)SSL::useSecurity(param_2);
          Security::set_resuming(pSVar4,true);
          puVar11 = (uchar *)SSL_SESSION::GetSuite(this_03);
          SSL::matchSuite(param_2,puVar11,2);
          pSVar4 = (Security *)SSL::getSecurity(param_2);
          iVar5 = Security::get_parms(pSVar4);
          SSL::set_pending(param_2,*(uchar *)(iVar5 + 0x2d));
          puVar11 = (uchar *)SSL_SESSION::GetSecret(this_03);
          SSL::set_masterSecret(param_2,puVar11);
          pCVar12 = (Crypto *)SSL::getCrypto(param_2);
          this_04 = (RandomPool *)Crypto::get_random(pCVar12);
          RandomPool::Fill(this_04,local_3c,0x20);
          SSL::set_random(param_2,local_3c,0);
          cVar3 = SSL::isTLS(param_2);
          if (cVar3 == '\0') {
            SSL::deriveKeys(param_2);
          }
          else {
            SSL::deriveTLSKeys(param_2);
          }
          pSVar7 = (States *)SSL::useStates(param_2);
          puVar8 = (undefined4 *)States::useServer(pSVar7);
          *puVar8 = 2;
          return;
        }
      }
      pcVar6 = (char *)SSL::useLog(param_2);
      Log::Trace(pcVar6);
    }
    SSL::matchSuite(param_2,(uchar *)(this + 0x4e),(uint)*(ushort *)(this + 0x4c));
    iVar5 = SSL::GetError(param_2);
    if (iVar5 == 0) {
      pSVar4 = (Security *)SSL::getSecurity(param_2);
      iVar5 = Security::get_parms(pSVar4);
      SSL::set_pending(param_2,*(uchar *)(iVar5 + 0x2d));
      if (*(int *)(this + 0xd0) == 0xdd) {
        SSL::SetCompression();
      }
      pSVar7 = (States *)SSL::useStates(param_2);
      puVar8 = (undefined4 *)States::useServer(pSVar7);
      *puVar8 = 1;
    }
  }
  else {
LAB_0874a491:
    SSL::SetError(param_2,0x75);
  }
  return;
}

```

---

## get

```asm
// === 08748e90 yaSSL::ClientHello::get  [0x08748e90-0x8748ebf] ===
 8748e90:	55                   	push   %ebp
 8748e91:	89 e5                	mov    %esp,%ebp
 8748e93:	53                   	push   %ebx
 8748e94:	83 ec 14             	sub    $0x14,%esp
 8748e97:	8b 45 08             	mov    0x8(%ebp),%eax
 8748e9a:	e8 59 9f fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8748e9f:	81 c3 f9 3c c2 00    	add    $0xc23cf9,%ebx
 8748ea5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8748ea9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8748eac:	89 04 24             	mov    %eax,(%esp)
 8748eaf:	e8 ac fe ff ff       	call   8748d60 <_ZN5yaSSLlsERNS_13output_bufferERKNS_11ClientHelloE>
 8748eb4:	83 c4 14             	add    $0x14,%esp
 8748eb7:	5b                   	pop    %ebx
 8748eb8:	5d                   	pop    %ebp
 8748eb9:	c3                   	ret
 8748eba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::ClientHello::get @ 0x8748e90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientHello::get(yaSSL::output_buffer&) const */

void __thiscall yaSSL::ClientHello::get(ClientHello *this,output_buffer *param_1)

{
  yaSSL::operator<<(param_1,this);
  return;
}

```

---

## get_random

```asm
// === 08746f30 yaSSL::ClientHello::get_random  [0x08746f30-0x8746f3f] ===
 8746f30:	55                   	push   %ebp
 8746f31:	89 e5                	mov    %esp,%ebp
 8746f33:	8b 45 08             	mov    0x8(%ebp),%eax
 8746f36:	5d                   	pop    %ebp
 8746f37:	83 c0 0a             	add    $0xa,%eax
 8746f3a:	c3                   	ret
 8746f3b:	90                   	nop
 8746f3c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::ClientHello::get_random @ 0x8746f30

/* yaSSL::ClientHello::get_random() const */

ClientHello * __thiscall yaSSL::ClientHello::get_random(ClientHello *this)

{
  return this + 10;
}

```

---

## get_type

```asm
// === 08746f20 yaSSL::ClientHello::get_type  [0x08746f20-0x8746f2f] ===
 8746f20:	55                   	push   %ebp
 8746f21:	b8 01 00 00 00       	mov    $0x1,%eax
 8746f26:	89 e5                	mov    %esp,%ebp
 8746f28:	5d                   	pop    %ebp
 8746f29:	c3                   	ret
 8746f2a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::ClientHello::get_type @ 0x8746f20

/* yaSSL::ClientHello::get_type() const */

undefined4 yaSSL::ClientHello::get_type(void)

{
  return 1;
}

```

---

## set

```asm
// === 08749400 yaSSL::ClientHello::set  [0x08749400-0x874942f] ===
 8749400:	55                   	push   %ebp
 8749401:	89 e5                	mov    %esp,%ebp
 8749403:	53                   	push   %ebx
 8749404:	83 ec 14             	sub    $0x14,%esp
 8749407:	8b 45 08             	mov    0x8(%ebp),%eax
 874940a:	e8 e9 99 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874940f:	81 c3 89 37 c2 00    	add    $0xc23789,%ebx
 8749415:	89 44 24 04          	mov    %eax,0x4(%esp)
 8749419:	8b 45 0c             	mov    0xc(%ebp),%eax
 874941c:	89 04 24             	mov    %eax,(%esp)
 874941f:	e8 ec fd ff ff       	call   8749210 <_ZN5yaSSLrsERNS_12input_bufferERNS_11ClientHelloE>
 8749424:	83 c4 14             	add    $0x14,%esp
 8749427:	5b                   	pop    %ebx
 8749428:	5d                   	pop    %ebp
 8749429:	c3                   	ret
 874942a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::ClientHello::set @ 0x8749400

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientHello::set(yaSSL::input_buffer&) */

void __thiscall yaSSL::ClientHello::set(ClientHello *this,input_buffer *param_1)

{
  yaSSL::operator>>(param_1,this);
  return;
}

```

