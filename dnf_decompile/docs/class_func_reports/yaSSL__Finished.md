# yaSSL__Finished

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## Finished

```asm
// === 087471a0 yaSSL::Finished::Finished  [0x087471a0-0x87471df] ===
 87471a0:	55                   	push   %ebp
 87471a1:	89 e5                	mov    %esp,%ebp
 87471a3:	53                   	push   %ebx
 87471a4:	e8 4f bc fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87471a9:	81 c3 ef 59 c2 00    	add    $0xc259ef,%ebx
 87471af:	83 ec 14             	sub    $0x14,%esp
 87471b2:	8b 45 08             	mov    0x8(%ebp),%eax
 87471b5:	8b 93 4c fe ff ff    	mov    -0x1b4(%ebx),%edx
 87471bb:	83 c2 08             	add    $0x8,%edx
 87471be:	89 10                	mov    %edx,(%eax)
 87471c0:	c7 44 24 04 24 00 00 	movl   $0x24,0x4(%esp)
 87471c7:	00 
 87471c8:	89 04 24             	mov    %eax,(%esp)
 87471cb:	e8 e0 f8 ff ff       	call   8746ab0 <_ZN5yaSSL13HandShakeBase10set_lengthEi>
 87471d0:	83 c4 14             	add    $0x14,%esp
 87471d3:	5b                   	pop    %ebx
 87471d4:	5d                   	pop    %ebp
 87471d5:	c3                   	ret
 87471d6:	8d 76 00             	lea    0x0(%esi),%esi
 87471d9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::Finished::Finished @ 0x87471a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Finished::Finished() */

void __thiscall yaSSL::Finished::Finished(Finished *this)

{
  *(undefined **)this = PTR_vtable_0936c9e4 + 8;
  HandShakeBase::set_length((HandShakeBase *)this,0x24);
  return;
}

```

---

## Process

```asm
// === 08748020 yaSSL::Finished::Process  [0x08748020-0x874831f] ===
 8748020:	55                   	push   %ebp
 8748021:	89 e5                	mov    %esp,%ebp
 8748023:	57                   	push   %edi
 8748024:	56                   	push   %esi
 8748025:	53                   	push   %ebx
 8748026:	e8 cd ad fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874802b:	81 c3 6d 4b c2 00    	add    $0xc24b6d,%ebx
 8748031:	83 ec 6c             	sub    $0x6c,%esp
 8748034:	8b 45 10             	mov    0x10(%ebp),%eax
 8748037:	89 04 24             	mov    %eax,(%esp)
 874803a:	e8 51 60 00 00       	call   874e090 <_ZNK5yaSSL3SSL9getHashesEv>
 874803f:	89 04 24             	mov    %eax,(%esp)
 8748042:	e8 09 68 00 00       	call   874e850 <_ZNK5yaSSL9sslHashes10get_verifyEv>
 8748047:	8b 55 10             	mov    0x10(%ebp),%edx
 874804a:	89 14 24             	mov    %edx,(%esp)
 874804d:	89 c7                	mov    %eax,%edi
 874804f:	e8 4c 69 00 00       	call   874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>
 8748054:	8b 75 08             	mov    0x8(%ebp),%esi
 8748057:	3c 01                	cmp    $0x1,%al
 8748059:	19 c9                	sbb    %ecx,%ecx
 874805b:	83 e1 18             	and    $0x18,%ecx
 874805e:	83 c1 10             	add    $0x10,%ecx
 8748061:	3c 01                	cmp    $0x1,%al
 8748063:	8b 45 0c             	mov    0xc(%ebp),%eax
 8748066:	19 d2                	sbb    %edx,%edx
 8748068:	83 c6 08             	add    $0x8,%esi
 874806b:	83 e2 18             	and    $0x18,%edx
 874806e:	83 c7 08             	add    $0x8,%edi
 8748071:	83 c2 0c             	add    $0xc,%edx
 8748074:	89 4d b4             	mov    %ecx,-0x4c(%ebp)
 8748077:	89 54 24 08          	mov    %edx,0x8(%esp)
 874807b:	89 74 24 04          	mov    %esi,0x4(%esp)
 874807f:	89 55 a8             	mov    %edx,-0x58(%ebp)
 8748082:	89 04 24             	mov    %eax,(%esp)
 8748085:	e8 b6 ef 04 00       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 874808a:	8b 55 a8             	mov    -0x58(%ebp),%edx
 874808d:	39 d2                	cmp    %edx,%edx
 874808f:	89 d1                	mov    %edx,%ecx
 8748091:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 8748093:	0f 85 df 01 00 00    	jne    8748278 <_ZN5yaSSL8Finished7ProcessERNS_12input_bufferERNS_3SSLE+0x258>
 8748099:	8b 4d 10             	mov    0x10(%ebp),%ecx
 874809c:	89 55 a8             	mov    %edx,-0x58(%ebp)
 874809f:	89 0c 24             	mov    %ecx,(%esp)
 87480a2:	e8 f9 68 00 00       	call   874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>
 87480a7:	8b 55 a8             	mov    -0x58(%ebp),%edx
 87480aa:	84 c0                	test   %al,%al
 87480ac:	0f 85 6e 01 00 00    	jne    8748220 <_ZN5yaSSL8Finished7ProcessERNS_12input_bufferERNS_3SSLE+0x200>
 87480b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 87480b5:	89 55 a8             	mov    %edx,-0x58(%ebp)
 87480b8:	89 04 24             	mov    %eax,(%esp)
 87480bb:	e8 70 ec 04 00       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 87480c0:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 87480c3:	89 0c 24             	mov    %ecx,(%esp)
 87480c6:	89 c6                	mov    %eax,%esi
 87480c8:	e8 d3 ec 04 00       	call   8796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>
 87480cd:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 87480d0:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 87480d7:	00 
 87480d8:	c7 44 24 10 16 00 00 	movl   $0x16,0x10(%esp)
 87480df:	00 
 87480e0:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 87480e4:	29 c8                	sub    %ecx,%eax
 87480e6:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87480e9:	8d 04 06             	lea    (%esi,%eax,1),%eax
 87480ec:	89 44 24 08          	mov    %eax,0x8(%esp)
 87480f0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 87480f3:	89 45 ac             	mov    %eax,-0x54(%ebp)
 87480f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 87480fa:	89 0c 24             	mov    %ecx,(%esp)
 87480fd:	e8 ce 54 05 00       	call   879d5d0 <_ZN5yaSSL4hmacERNS_3SSLEPhPKhjNS_11ContentTypeEb>
 8748102:	8b 55 a8             	mov    -0x58(%ebp),%edx
 8748105:	8b 45 10             	mov    0x10(%ebp),%eax
 8748108:	89 55 a8             	mov    %edx,-0x58(%ebp)
 874810b:	89 04 24             	mov    %eax,(%esp)
 874810e:	e8 4d 5f 00 00       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 8748113:	89 04 24             	mov    %eax,(%esp)
 8748116:	e8 35 66 00 00       	call   874e750 <_ZNK5yaSSL6Crypto10get_digestEv>
 874811b:	8b 08                	mov    (%eax),%ecx
 874811d:	89 04 24             	mov    %eax,(%esp)
 8748120:	ff 51 0c             	call   *0xc(%ecx)
 8748123:	8d 4d c0             	lea    -0x40(%ebp),%ecx
 8748126:	89 4d b0             	mov    %ecx,-0x50(%ebp)
 8748129:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 874812d:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8748130:	89 44 24 08          	mov    %eax,0x8(%esp)
 8748134:	8b 45 0c             	mov    0xc(%ebp),%eax
 8748137:	89 04 24             	mov    %eax,(%esp)
 874813a:	e8 01 ef 04 00       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 874813f:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8748142:	89 0c 24             	mov    %ecx,(%esp)
 8748145:	e8 26 5f 00 00       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 874814a:	89 04 24             	mov    %eax,(%esp)
 874814d:	e8 fe 68 00 00       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 8748152:	8b 55 a8             	mov    -0x58(%ebp),%edx
 8748155:	83 78 08 01          	cmpl   $0x1,0x8(%eax)
 8748159:	0f 84 59 01 00 00    	je     87482b8 <_ZN5yaSSL8Finished7ProcessERNS_12input_bufferERNS_3SSLE+0x298>
 874815f:	31 f6                	xor    %esi,%esi
 8748161:	8b 45 10             	mov    0x10(%ebp),%eax
 8748164:	89 55 a8             	mov    %edx,-0x58(%ebp)
 8748167:	89 04 24             	mov    %eax,(%esp)
 874816a:	e8 01 5f 00 00       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 874816f:	89 04 24             	mov    %eax,(%esp)
 8748172:	e8 d9 68 00 00       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 8748177:	8b 55 a8             	mov    -0x58(%ebp),%edx
 874817a:	b9 fc ff ff ff       	mov    $0xfffffffc,%ecx
 874817f:	29 d1                	sub    %edx,%ecx
 8748181:	2b 4d b4             	sub    -0x4c(%ebp),%ecx
 8748184:	0f b7 78 2a          	movzwl 0x2a(%eax),%edi
 8748188:	29 f7                	sub    %esi,%edi
 874818a:	8d 3c 39             	lea    (%ecx,%edi,1),%edi
 874818d:	85 ff                	test   %edi,%edi
 874818f:	7e 21                	jle    87481b2 <_ZN5yaSSL8Finished7ProcessERNS_12input_bufferERNS_3SSLE+0x192>
 8748191:	31 f6                	xor    %esi,%esi
 8748193:	90                   	nop
 8748194:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8748198:	8b 55 0c             	mov    0xc(%ebp),%edx
 874819b:	83 c6 01             	add    $0x1,%esi
 874819e:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 87481a5:	fe 
 87481a6:	89 14 24             	mov    %edx,(%esp)
 87481a9:	e8 72 ec 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 87481ae:	39 f7                	cmp    %esi,%edi
 87481b0:	7f e6                	jg     8748198 <_ZN5yaSSL8Finished7ProcessERNS_12input_bufferERNS_3SSLE+0x178>
 87481b2:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 87481b5:	8b 75 b0             	mov    -0x50(%ebp),%esi
 87481b8:	8b 7d ac             	mov    -0x54(%ebp),%edi
 87481bb:	39 c9                	cmp    %ecx,%ecx
 87481bd:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 87481bf:	0f 85 d3 00 00 00    	jne    8748298 <_ZN5yaSSL8Finished7ProcessERNS_12input_bufferERNS_3SSLE+0x278>
 87481c5:	8b 55 10             	mov    0x10(%ebp),%edx
 87481c8:	89 14 24             	mov    %edx,(%esp)
 87481cb:	e8 00 61 00 00       	call   874e2d0 <_ZN5yaSSL3SSL9useStatesEv>
 87481d0:	89 04 24             	mov    %eax,(%esp)
 87481d3:	e8 38 5d 00 00       	call   874df10 <_ZN5yaSSL6States12useHandShakeEv>
 87481d8:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87481db:	c7 00 03 00 00 00    	movl   $0x3,(%eax)
 87481e1:	89 0c 24             	mov    %ecx,(%esp)
 87481e4:	e8 87 5e 00 00       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 87481e9:	89 04 24             	mov    %eax,(%esp)
 87481ec:	e8 5f 68 00 00       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 87481f1:	83 38 01             	cmpl   $0x1,(%eax)
 87481f4:	0f 84 fe 00 00 00    	je     87482f8 <_ZN5yaSSL8Finished7ProcessERNS_12input_bufferERNS_3SSLE+0x2d8>
 87481fa:	8b 55 10             	mov    0x10(%ebp),%edx
 87481fd:	89 14 24             	mov    %edx,(%esp)
 8748200:	e8 cb 60 00 00       	call   874e2d0 <_ZN5yaSSL3SSL9useStatesEv>
 8748205:	89 04 24             	mov    %eax,(%esp)
 8748208:	e8 23 5d 00 00       	call   874df30 <_ZN5yaSSL6States9useServerEv>
 874820d:	c7 00 03 00 00 00    	movl   $0x3,(%eax)
 8748213:	83 c4 6c             	add    $0x6c,%esp
 8748216:	5b                   	pop    %ebx
 8748217:	5e                   	pop    %esi
 8748218:	5f                   	pop    %edi
 8748219:	5d                   	pop    %ebp
 874821a:	c3                   	ret
 874821b:	90                   	nop
 874821c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8748220:	8b 45 0c             	mov    0xc(%ebp),%eax
 8748223:	89 04 24             	mov    %eax,(%esp)
 8748226:	e8 05 eb 04 00       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 874822b:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 874822e:	89 0c 24             	mov    %ecx,(%esp)
 8748231:	89 c6                	mov    %eax,%esi
 8748233:	e8 68 eb 04 00       	call   8796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>
 8748238:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 874823b:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8748242:	00 
 8748243:	c7 44 24 10 16 00 00 	movl   $0x16,0x10(%esp)
 874824a:	00 
 874824b:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 874824f:	29 c8                	sub    %ecx,%eax
 8748251:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8748254:	8d 04 06             	lea    (%esi,%eax,1),%eax
 8748257:	89 44 24 08          	mov    %eax,0x8(%esp)
 874825b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 874825e:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8748261:	89 44 24 04          	mov    %eax,0x4(%esp)
 8748265:	89 0c 24             	mov    %ecx,(%esp)
 8748268:	e8 03 71 05 00       	call   879f370 <_ZN5yaSSL8TLS_hmacERNS_3SSLEPhPKhjNS_11ContentTypeEb>
 874826d:	8b 55 a8             	mov    -0x58(%ebp),%edx
 8748270:	e9 90 fe ff ff       	jmp    8748105 <_ZN5yaSSL8Finished7ProcessERNS_12input_bufferERNS_3SSLE+0xe5>
 8748275:	8d 76 00             	lea    0x0(%esi),%esi
 8748278:	8b 55 10             	mov    0x10(%ebp),%edx
 874827b:	c7 44 24 04 70 00 00 	movl   $0x70,0x4(%esp)
 8748282:	00 
 8748283:	89 14 24             	mov    %edx,(%esp)
 8748286:	e8 45 5d 00 00       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 874828b:	83 c4 6c             	add    $0x6c,%esp
 874828e:	5b                   	pop    %ebx
 874828f:	5e                   	pop    %esi
 8748290:	5f                   	pop    %edi
 8748291:	5d                   	pop    %ebp
 8748292:	c3                   	ret
 8748293:	90                   	nop
 8748294:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8748298:	8b 45 10             	mov    0x10(%ebp),%eax
 874829b:	c7 44 24 04 70 00 00 	movl   $0x70,0x4(%esp)
 87482a2:	00 
 87482a3:	89 04 24             	mov    %eax,(%esp)
 87482a6:	e8 25 5d 00 00       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 87482ab:	83 c4 6c             	add    $0x6c,%esp
 87482ae:	5b                   	pop    %ebx
 87482af:	5e                   	pop    %esi
 87482b0:	5f                   	pop    %edi
 87482b1:	5d                   	pop    %ebp
 87482b2:	c3                   	ret
 87482b3:	90                   	nop
 87482b4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87482b8:	8b 45 10             	mov    0x10(%ebp),%eax
 87482bb:	89 04 24             	mov    %eax,(%esp)
 87482be:	e8 ad 66 00 00       	call   874e970 <_ZNK5yaSSL3SSL9isTLSv1_1Ev>
 87482c3:	8b 55 a8             	mov    -0x58(%ebp),%edx
 87482c6:	84 c0                	test   %al,%al
 87482c8:	0f 84 91 fe ff ff    	je     874815f <_ZN5yaSSL8Finished7ProcessERNS_12input_bufferERNS_3SSLE+0x13f>
 87482ce:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87482d1:	89 0c 24             	mov    %ecx,(%esp)
 87482d4:	e8 87 5d 00 00       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 87482d9:	89 04 24             	mov    %eax,(%esp)
 87482dc:	e8 7f 64 00 00       	call   874e760 <_ZNK5yaSSL6Crypto10get_cipherEv>
 87482e1:	89 c1                	mov    %eax,%ecx
 87482e3:	8b 00                	mov    (%eax),%eax
 87482e5:	89 0c 24             	mov    %ecx,(%esp)
 87482e8:	ff 50 10             	call   *0x10(%eax)
 87482eb:	8b 55 a8             	mov    -0x58(%ebp),%edx
 87482ee:	89 c6                	mov    %eax,%esi
 87482f0:	e9 6c fe ff ff       	jmp    8748161 <_ZN5yaSSL8Finished7ProcessERNS_12input_bufferERNS_3SSLE+0x141>
 87482f5:	8d 76 00             	lea    0x0(%esi),%esi
 87482f8:	8b 45 10             	mov    0x10(%ebp),%eax
 87482fb:	89 04 24             	mov    %eax,(%esp)
 87482fe:	e8 cd 5f 00 00       	call   874e2d0 <_ZN5yaSSL3SSL9useStatesEv>
 8748303:	89 04 24             	mov    %eax,(%esp)
 8748306:	e8 15 5c 00 00       	call   874df20 <_ZN5yaSSL6States9useClientEv>
 874830b:	c7 00 05 00 00 00    	movl   $0x5,(%eax)
 8748311:	e9 fd fe ff ff       	jmp    8748213 <_ZN5yaSSL8Finished7ProcessERNS_12input_bufferERNS_3SSLE+0x1f3>
 8748316:	8d 76 00             	lea    0x0(%esi),%esi
 8748319:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::Finished::Process @ 0x8748020

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Finished::Process(yaSSL::input_buffer&, yaSSL::SSL&) */

void __thiscall yaSSL::Finished::Process(Finished *this,input_buffer *param_1,SSL *param_2)

{
  char cVar1;
  sslHashes *this_00;
  int iVar2;
  int iVar3;
  Crypto *pCVar4;
  int *piVar5;
  Security *pSVar6;
  States *pSVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  Finished *pFVar12;
  uchar *puVar13;
  Finished *pFVar14;
  bool bVar15;
  byte bVar16;
  uchar *local_58;
  uchar local_44 [20];
  uchar local_30 [28];
  undefined4 uStack_14;
  
  bVar16 = 0;
  uStack_14 = 0x874802b;
  this_00 = (sslHashes *)SSL::getHashes(param_2);
  iVar2 = sslHashes::get_verify(this_00);
  cVar1 = SSL::isTLS(param_2);
  iVar9 = (-(uint)(cVar1 == '\0') & 0x18) + 0x10;
  uVar11 = (-(uint)(cVar1 == '\0') & 0x18) + 0xc;
  input_buffer::read(param_1,(uchar *)(this + 8),uVar11);
  bVar15 = true;
  uVar10 = uVar11;
  pFVar12 = this + 8;
  pFVar14 = (Finished *)(iVar2 + 8);
  do {
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    bVar15 = *pFVar12 == *pFVar14;
    pFVar12 = pFVar12 + (uint)bVar16 * -2 + 1;
    pFVar14 = pFVar14 + (uint)bVar16 * -2 + 1;
  } while (bVar15);
  if (!bVar15) {
    SSL::SetError(param_2,0x70);
    return;
  }
  cVar1 = SSL::isTLS(param_2);
  if (cVar1 == '\0') {
    iVar2 = input_buffer::get_buffer(param_1);
    iVar3 = input_buffer::get_current(param_1);
    hmac(param_2,local_30,iVar2 + (iVar3 - iVar9),iVar9,0x16,1);
  }
  else {
    iVar2 = input_buffer::get_buffer(param_1);
    iVar3 = input_buffer::get_current(param_1);
    TLS_hmac(param_2,local_30,iVar2 + (iVar3 - iVar9),iVar9,0x16,1);
  }
  local_58 = local_30;
  pCVar4 = (Crypto *)SSL::getCrypto(param_2);
  piVar5 = (int *)Crypto::get_digest(pCVar4);
  uVar10 = (**(code **)(*piVar5 + 0xc))(piVar5);
  input_buffer::read(param_1,local_44,uVar10);
  pSVar6 = (Security *)SSL::getSecurity(param_2);
  iVar2 = Security::get_parms(pSVar6);
  if (*(int *)(iVar2 + 8) == 1) {
    cVar1 = SSL::isTLSv1_1(param_2);
    if (cVar1 != '\0') {
      pCVar4 = (Crypto *)SSL::getCrypto(param_2);
      piVar5 = (int *)Crypto::get_cipher(pCVar4);
      iVar2 = (**(code **)(*piVar5 + 0x10))(piVar5);
      goto LAB_08748161;
    }
  }
  iVar2 = 0;
LAB_08748161:
  pSVar6 = (Security *)SSL::getSecurity(param_2);
  iVar9 = Security::get_parms(pSVar6);
  iVar2 = ((-4 - uVar11) - uVar10) + ((uint)*(ushort *)(iVar9 + 0x2a) - iVar2);
  if (0 < iVar2) {
    iVar9 = 0;
    do {
      iVar9 = iVar9 + 1;
      input_buffer::operator[]((uint)param_1);
    } while (iVar9 < iVar2);
  }
  bVar15 = true;
  puVar13 = local_44;
  do {
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    bVar15 = *puVar13 == *local_58;
    puVar13 = puVar13 + (uint)bVar16 * -2 + 1;
    local_58 = local_58 + (uint)bVar16 * -2 + 1;
  } while (bVar15);
  if (bVar15) {
    pSVar7 = (States *)SSL::useStates(param_2);
    puVar8 = (undefined4 *)States::useHandShake(pSVar7);
    *puVar8 = 3;
    pSVar6 = (Security *)SSL::getSecurity(param_2);
    piVar5 = (int *)Security::get_parms(pSVar6);
    if (*piVar5 == 1) {
      pSVar7 = (States *)SSL::useStates(param_2);
      puVar8 = (undefined4 *)States::useClient(pSVar7);
      *puVar8 = 5;
    }
    else {
      pSVar7 = (States *)SSL::useStates(param_2);
      puVar8 = (undefined4 *)States::useServer(pSVar7);
      *puVar8 = 3;
    }
    return;
  }
  SSL::SetError(param_2,0x70);
  return;
}

```

---

## get

```asm
// === 087483c0 yaSSL::Finished::get  [0x087483c0-0x87483ef] ===
 87483c0:	55                   	push   %ebp
 87483c1:	89 e5                	mov    %esp,%ebp
 87483c3:	53                   	push   %ebx
 87483c4:	83 ec 14             	sub    $0x14,%esp
 87483c7:	8b 45 08             	mov    0x8(%ebp),%eax
 87483ca:	e8 29 aa fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87483cf:	81 c3 c9 47 c2 00    	add    $0xc247c9,%ebx
 87483d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 87483d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 87483dc:	89 04 24             	mov    %eax,(%esp)
 87483df:	e8 3c ff ff ff       	call   8748320 <_ZN5yaSSLlsERNS_13output_bufferERKNS_8FinishedE>
 87483e4:	83 c4 14             	add    $0x14,%esp
 87483e7:	5b                   	pop    %ebx
 87483e8:	5d                   	pop    %ebp
 87483e9:	c3                   	ret
 87483ea:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::Finished::get @ 0x87483c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Finished::get(yaSSL::output_buffer&) const */

void __thiscall yaSSL::Finished::get(Finished *this,output_buffer *param_1)

{
  yaSSL::operator<<(param_1,this);
  return;
}

```

---

## get_type

```asm
// === 08747230 yaSSL::Finished::get_type  [0x08747230-0x874723f] ===
 8747230:	55                   	push   %ebp
 8747231:	b8 14 00 00 00       	mov    $0x14,%eax
 8747236:	89 e5                	mov    %esp,%ebp
 8747238:	5d                   	pop    %ebp
 8747239:	c3                   	ret
 874723a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::Finished::get_type @ 0x8747230

/* yaSSL::Finished::get_type() const */

undefined4 yaSSL::Finished::get_type(void)

{
  return 0x14;
}

```

---

## set

```asm
// === 08747200 yaSSL::Finished::set  [0x08747200-0x874722f] ===
 8747200:	55                   	push   %ebp
 8747201:	89 e5                	mov    %esp,%ebp
 8747203:	53                   	push   %ebx
 8747204:	83 ec 14             	sub    $0x14,%esp
 8747207:	8b 45 08             	mov    0x8(%ebp),%eax
 874720a:	e8 e9 bb fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874720f:	81 c3 89 59 c2 00    	add    $0xc25989,%ebx
 8747215:	89 44 24 04          	mov    %eax,0x4(%esp)
 8747219:	8b 45 0c             	mov    0xc(%ebp),%eax
 874721c:	89 04 24             	mov    %eax,(%esp)
 874721f:	e8 6c ff ff ff       	call   8747190 <_ZN5yaSSLrsERNS_12input_bufferERNS_8FinishedE>
 8747224:	83 c4 14             	add    $0x14,%esp
 8747227:	5b                   	pop    %ebx
 8747228:	5d                   	pop    %ebp
 8747229:	c3                   	ret
 874722a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::Finished::set @ 0x8747200

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Finished::set(yaSSL::input_buffer&) */

void __thiscall yaSSL::Finished::set(Finished *this,input_buffer *param_1)

{
  yaSSL::operator>>(param_1,this);
  return;
}

```

---

## set_md5

```asm
// === 087471e0 yaSSL::Finished::set_md5  [0x087471e0-0x87471ef] ===
 87471e0:	55                   	push   %ebp
 87471e1:	89 e5                	mov    %esp,%ebp
 87471e3:	8b 45 08             	mov    0x8(%ebp),%eax
 87471e6:	5d                   	pop    %ebp
 87471e7:	83 c0 08             	add    $0x8,%eax
 87471ea:	c3                   	ret
 87471eb:	90                   	nop
 87471ec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Finished::set_md5 @ 0x87471e0

/* yaSSL::Finished::set_md5() */

Finished * __thiscall yaSSL::Finished::set_md5(Finished *this)

{
  return this + 8;
}

```

---

## set_sha

```asm
// === 087471f0 yaSSL::Finished::set_sha  [0x087471f0-0x87471ff] ===
 87471f0:	55                   	push   %ebp
 87471f1:	89 e5                	mov    %esp,%ebp
 87471f3:	8b 45 08             	mov    0x8(%ebp),%eax
 87471f6:	5d                   	pop    %ebp
 87471f7:	83 c0 18             	add    $0x18,%eax
 87471fa:	c3                   	ret
 87471fb:	90                   	nop
 87471fc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Finished::set_sha @ 0x87471f0

/* yaSSL::Finished::set_sha() */

Finished * __thiscall yaSSL::Finished::set_sha(Finished *this)

{
  return this + 0x18;
}

```

