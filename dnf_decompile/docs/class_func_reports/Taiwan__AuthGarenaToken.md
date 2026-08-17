# Taiwan__AuthGarenaToken

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## decrypt

```asm
// === 081731f2 Taiwan::AuthGarenaToken::decrypt  [0x081731f2-0x817356e] ===
 81731f2:	55                   	push   %ebp
 81731f3:	89 e5                	mov    %esp,%ebp
 81731f5:	57                   	push   %edi
 81731f6:	56                   	push   %esi
 81731f7:	53                   	push   %ebx
 81731f8:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 81731fe:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 8173202:	75 40                	jne    8173244 <_ZN6Taiwan15AuthGarenaToken7decryptEPKciRNS_14GarenaAuthDataE+0x52>
 8173204:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 817320b:	00 
 817320c:	c7 44 24 08 7a 00 00 	movl   $0x7a,0x8(%esp)
 8173213:	00 
 8173214:	c7 44 24 04 b0 45 b8 	movl   $0x8b845b0,0x4(%esp)
 817321b:	08 
 817321c:	8d 45 b8             	lea    -0x48(%ebp),%eax
 817321f:	89 04 24             	mov    %eax,(%esp)
 8173222:	e8 f1 c4 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8173227:	c7 44 24 04 21 3f b8 	movl   $0x8b83f21,0x4(%esp)
 817322e:	08 
 817322f:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8173232:	89 04 24             	mov    %eax,(%esp)
 8173235:	e8 4e c5 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 817323a:	bb 7b 00 00 00       	mov    $0x7b,%ebx
 817323f:	e9 1e 03 00 00       	jmp    8173562 <_ZN6Taiwan15AuthGarenaToken7decryptEPKciRNS_14GarenaAuthDataE+0x370>
 8173244:	8b 45 08             	mov    0x8(%ebp),%eax
 8173247:	89 45 e0             	mov    %eax,-0x20(%ebp)
 817324a:	8d 45 ac             	lea    -0x54(%ebp),%eax
 817324d:	89 04 24             	mov    %eax,(%esp)
 8173250:	e8 bd 1a f7 ff       	call   80e4d12 <_ZNSt6vectorIhSaIhEEC1Ev>
 8173255:	8d 45 cf             	lea    -0x31(%ebp),%eax
 8173258:	89 04 24             	mov    %eax,(%esp)
 817325b:	e8 70 ce 56 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 8173260:	8d 45 cf             	lea    -0x31(%ebp),%eax
 8173263:	89 44 24 08          	mov    %eax,0x8(%esp)
 8173267:	8b 45 e0             	mov    -0x20(%ebp),%eax
 817326a:	89 44 24 04          	mov    %eax,0x4(%esp)
 817326e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8173271:	89 04 24             	mov    %eax,(%esp)
 8173274:	e8 b7 43 59 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8173279:	8d 45 ac             	lea    -0x54(%ebp),%eax
 817327c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8173280:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8173283:	89 04 24             	mov    %eax,(%esp)
 8173286:	e8 69 b9 f0 ff       	call   807ebf4 <_Z13base64_decodeRKSsRSt6vectorIhSaIhEE>
 817328b:	eb 15                	jmp    81732a2 <_ZN6Taiwan15AuthGarenaToken7decryptEPKciRNS_14GarenaAuthDataE+0xb0>
 817328d:	89 d3                	mov    %edx,%ebx
 817328f:	89 c6                	mov    %eax,%esi
 8173291:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8173294:	89 04 24             	mov    %eax,(%esp)
 8173297:	e8 44 49 59 00       	call   8707be0 <_ZNSsD1Ev>
 817329c:	89 f0                	mov    %esi,%eax
 817329e:	89 da                	mov    %ebx,%edx
 81732a0:	eb 0d                	jmp    81732af <_ZN6Taiwan15AuthGarenaToken7decryptEPKciRNS_14GarenaAuthDataE+0xbd>
 81732a2:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81732a5:	89 04 24             	mov    %eax,(%esp)
 81732a8:	e8 33 49 59 00       	call   8707be0 <_ZNSsD1Ev>
 81732ad:	eb 18                	jmp    81732c7 <_ZN6Taiwan15AuthGarenaToken7decryptEPKciRNS_14GarenaAuthDataE+0xd5>
 81732af:	89 d3                	mov    %edx,%ebx
 81732b1:	89 c6                	mov    %eax,%esi
 81732b3:	8d 45 cf             	lea    -0x31(%ebp),%eax
 81732b6:	89 04 24             	mov    %eax,(%esp)
 81732b9:	e8 32 ce 56 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81732be:	89 f0                	mov    %esi,%eax
 81732c0:	89 da                	mov    %ebx,%edx
 81732c2:	e9 75 02 00 00       	jmp    817353c <_ZN6Taiwan15AuthGarenaToken7decryptEPKciRNS_14GarenaAuthDataE+0x34a>
 81732c7:	8d 45 cf             	lea    -0x31(%ebp),%eax
 81732ca:	89 04 24             	mov    %eax,(%esp)
 81732cd:	e8 1e ce 56 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81732d2:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81732d5:	89 04 24             	mov    %eax,(%esp)
 81732d8:	e8 c3 c2 f0 ff       	call   807f5a0 <_ZNKSt6vectorIhSaIhEE4sizeEv>
 81732dd:	85 c0                	test   %eax,%eax
 81732df:	0f 94 c0             	sete   %al
 81732e2:	84 c0                	test   %al,%al
 81732e4:	74 36                	je     817331c <_ZN6Taiwan15AuthGarenaToken7decryptEPKciRNS_14GarenaAuthDataE+0x12a>
 81732e6:	c7 44 24 10 40 3f b8 	movl   $0x8b83f40,0x10(%esp)
 81732ed:	08 
 81732ee:	c7 44 24 0c 83 00 00 	movl   $0x83,0xc(%esp)
 81732f5:	00 
 81732f6:	c7 44 24 08 b0 45 b8 	movl   $0x8b845b0,0x8(%esp)
 81732fd:	08 
 81732fe:	c7 44 24 04 68 3f b8 	movl   $0x8b83f68,0x4(%esp)
 8173305:	08 
 8173306:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 817330d:	e8 f8 08 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8173312:	bb 84 00 00 00       	mov    $0x84,%ebx
 8173317:	e9 3b 02 00 00       	jmp    8173557 <_ZN6Taiwan15AuthGarenaToken7decryptEPKciRNS_14GarenaAuthDataE+0x365>
 817331c:	8d 45 a0             	lea    -0x60(%ebp),%eax
 817331f:	89 04 24             	mov    %eax,(%esp)
 8173322:	e8 eb 19 f7 ff       	call   80e4d12 <_ZNSt6vectorIhSaIhEEC1Ev>
 8173327:	8d 45 ac             	lea    -0x54(%ebp),%eax
 817332a:	89 04 24             	mov    %eax,(%esp)
 817332d:	e8 6e c2 f0 ff       	call   807f5a0 <_ZNKSt6vectorIhSaIhEE4sizeEv>
 8173332:	89 c3                	mov    %eax,%ebx
 8173334:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 817333b:	00 
 817333c:	8d 45 ac             	lea    -0x54(%ebp),%eax
 817333f:	89 04 24             	mov    %eax,(%esp)
 8173342:	e8 69 1a f7 ff       	call   80e4db0 <_ZNSt6vectorIhSaIhEEixEj>
 8173347:	8d 55 a0             	lea    -0x60(%ebp),%edx
 817334a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 817334e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8173352:	89 44 24 04          	mov    %eax,0x4(%esp)
 8173356:	c7 04 24 54 47 40 09 	movl   $0x9404754,(%esp)
 817335d:	e8 d0 91 ff ff       	call   816c532 <_ZN11COpensslRSA7DecryptEPKciRSt6vectorIhSaIhEE>
 8173362:	88 45 e7             	mov    %al,-0x19(%ebp)
 8173365:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 8173369:	83 f0 01             	xor    $0x1,%eax
 817336c:	84 c0                	test   %al,%al
 817336e:	74 36                	je     81733a6 <_ZN6Taiwan15AuthGarenaToken7decryptEPKciRNS_14GarenaAuthDataE+0x1b4>
 8173370:	c7 44 24 10 8c 3f b8 	movl   $0x8b83f8c,0x10(%esp)
 8173377:	08 
 8173378:	c7 44 24 0c 8b 00 00 	movl   $0x8b,0xc(%esp)
 817337f:	00 
 8173380:	c7 44 24 08 b0 45 b8 	movl   $0x8b845b0,0x8(%esp)
 8173387:	08 
 8173388:	c7 44 24 04 68 3f b8 	movl   $0x8b83f68,0x4(%esp)
 817338f:	08 
 8173390:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8173397:	e8 6e 08 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 817339c:	bb 8c 00 00 00       	mov    $0x8c,%ebx
 81733a1:	e9 89 01 00 00       	jmp    817352f <_ZN6Taiwan15AuthGarenaToken7decryptEPKciRNS_14GarenaAuthDataE+0x33d>
 81733a6:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81733a9:	89 04 24             	mov    %eax,(%esp)
 81733ac:	e8 ef c1 f0 ff       	call   807f5a0 <_ZNKSt6vectorIhSaIhEE4sizeEv>
 81733b1:	83 f8 68             	cmp    $0x68,%eax
 81733b4:	0f 97 c0             	seta   %al
 81733b7:	84 c0                	test   %al,%al
 81733b9:	74 4d                	je     8173408 <_ZN6Taiwan15AuthGarenaToken7decryptEPKciRNS_14GarenaAuthDataE+0x216>
 81733bb:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81733be:	89 04 24             	mov    %eax,(%esp)
 81733c1:	e8 da c1 f0 ff       	call   807f5a0 <_ZNKSt6vectorIhSaIhEE4sizeEv>
 81733c6:	89 44 24 18          	mov    %eax,0x18(%esp)
 81733ca:	c7 44 24 14 68 00 00 	movl   $0x68,0x14(%esp)
 81733d1:	00 
 81733d2:	c7 44 24 10 b4 3f b8 	movl   $0x8b83fb4,0x10(%esp)
 81733d9:	08 
 81733da:	c7 44 24 0c 92 00 00 	movl   $0x92,0xc(%esp)
 81733e1:	00 
 81733e2:	c7 44 24 08 b0 45 b8 	movl   $0x8b845b0,0x8(%esp)
 81733e9:	08 
 81733ea:	c7 44 24 04 68 3f b8 	movl   $0x8b83f68,0x4(%esp)
 81733f1:	08 
 81733f2:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81733f9:	e8 0c 08 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81733fe:	bb 93 00 00 00       	mov    $0x93,%ebx
 8173403:	e9 27 01 00 00       	jmp    817352f <_ZN6Taiwan15AuthGarenaToken7decryptEPKciRNS_14GarenaAuthDataE+0x33d>
 8173408:	c7 44 24 08 68 00 00 	movl   $0x68,0x8(%esp)
 817340f:	00 
 8173410:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8173417:	00 
 8173418:	8b 45 10             	mov    0x10(%ebp),%eax
 817341b:	89 04 24             	mov    %eax,(%esp)
 817341e:	e8 9d a8 f0 ff       	call   807dcc0 <memset@plt>
 8173423:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8173426:	89 04 24             	mov    %eax,(%esp)
 8173429:	e8 72 c1 f0 ff       	call   807f5a0 <_ZNKSt6vectorIhSaIhEE4sizeEv>
 817342e:	8d 58 ff             	lea    -0x1(%eax),%ebx
 8173431:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8173438:	00 
 8173439:	8d 45 a0             	lea    -0x60(%ebp),%eax
 817343c:	89 04 24             	mov    %eax,(%esp)
 817343f:	e8 6c 19 f7 ff       	call   80e4db0 <_ZNSt6vectorIhSaIhEEixEj>
 8173444:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8173448:	89 44 24 04          	mov    %eax,0x4(%esp)
 817344c:	8b 45 10             	mov    0x10(%ebp),%eax
 817344f:	89 04 24             	mov    %eax,(%esp)
 8173452:	e8 49 a4 f0 ff       	call   807d8a0 <memcpy@plt>
 8173457:	8b 45 10             	mov    0x10(%ebp),%eax
 817345a:	89 04 24             	mov    %eax,(%esp)
 817345d:	e8 c0 fb ff ff       	call   8173022 <_ZN6Taiwan14GarenaAuthData13getMobileAuthEv>
 8173462:	84 c0                	test   %al,%al
 8173464:	74 07                	je     817346d <_ZN6Taiwan15AuthGarenaToken7decryptEPKciRNS_14GarenaAuthDataE+0x27b>
 8173466:	bb 01 00 00 00       	mov    $0x1,%ebx
 817346b:	eb 05                	jmp    8173472 <_ZN6Taiwan15AuthGarenaToken7decryptEPKciRNS_14GarenaAuthDataE+0x280>
 817346d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8173472:	8b 45 10             	mov    0x10(%ebp),%eax
 8173475:	89 04 24             	mov    %eax,(%esp)
 8173478:	e8 d1 fb ff ff       	call   817304e <_ZN6Taiwan14GarenaAuthData17getGoldMemberTypeEv>
 817347d:	0f b6 c0             	movzbl %al,%eax
 8173480:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8173483:	8b 45 10             	mov    0x10(%ebp),%eax
 8173486:	89 04 24             	mov    %eax,(%esp)
 8173489:	e8 7a fb ff ff       	call   8173008 <_ZN6Taiwan14GarenaAuthData10getGcaTypeEv>
 817348e:	0f b7 c0             	movzwl %ax,%eax
 8173491:	89 45 90             	mov    %eax,-0x70(%ebp)
 8173494:	8b 45 10             	mov    0x10(%ebp),%eax
 8173497:	89 04 24             	mov    %eax,(%esp)
 817349a:	e8 4b fb ff ff       	call   8172fea <_ZN6Taiwan14GarenaAuthData12getTimeStampEv>
 817349f:	89 45 94             	mov    %eax,-0x6c(%ebp)
 81734a2:	8b 45 10             	mov    0x10(%ebp),%eax
 81734a5:	89 04 24             	mov    %eax,(%esp)
 81734a8:	e8 31 fb ff ff       	call   8172fde <_ZN6Taiwan14GarenaAuthData8getUnameEv>
 81734ad:	89 c7                	mov    %eax,%edi
 81734af:	8b 45 10             	mov    0x10(%ebp),%eax
 81734b2:	89 04 24             	mov    %eax,(%esp)
 81734b5:	e8 0e fb ff ff       	call   8172fc8 <_ZN6Taiwan14GarenaAuthData6getUidEv>
 81734ba:	89 c6                	mov    %eax,%esi
 81734bc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81734c3:	00 
 81734c4:	c7 44 24 08 99 00 00 	movl   $0x99,0x8(%esp)
 81734cb:	00 
 81734cc:	c7 44 24 04 b0 45 b8 	movl   $0x8b845b0,0x4(%esp)
 81734d3:	08 
 81734d4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81734d7:	89 04 24             	mov    %eax,(%esp)
 81734da:	e8 39 c2 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81734df:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 81734e3:	8b 45 8c             	mov    -0x74(%ebp),%eax
 81734e6:	89 44 24 18          	mov    %eax,0x18(%esp)
 81734ea:	8b 45 90             	mov    -0x70(%ebp),%eax
 81734ed:	89 44 24 14          	mov    %eax,0x14(%esp)
 81734f1:	8b 45 94             	mov    -0x6c(%ebp),%eax
 81734f4:	89 44 24 10          	mov    %eax,0x10(%esp)
 81734f8:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 81734fc:	89 74 24 08          	mov    %esi,0x8(%esp)
 8173500:	c7 44 24 04 04 40 b8 	movl   $0x8b84004,0x4(%esp)
 8173507:	08 
 8173508:	8d 45 d0             	lea    -0x30(%ebp),%eax
 817350b:	89 04 24             	mov    %eax,(%esp)
 817350e:	e8 75 c2 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8173513:	bb 00 00 00 00       	mov    $0x0,%ebx
 8173518:	eb 15                	jmp    817352f <_ZN6Taiwan15AuthGarenaToken7decryptEPKciRNS_14GarenaAuthDataE+0x33d>
 817351a:	89 d3                	mov    %edx,%ebx
 817351c:	89 c6                	mov    %eax,%esi
 817351e:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8173521:	89 04 24             	mov    %eax,(%esp)
 8173524:	e8 fd 17 f7 ff       	call   80e4d26 <_ZNSt6vectorIhSaIhEED1Ev>
 8173529:	89 f0                	mov    %esi,%eax
 817352b:	89 da                	mov    %ebx,%edx
 817352d:	eb 0d                	jmp    817353c <_ZN6Taiwan15AuthGarenaToken7decryptEPKciRNS_14GarenaAuthDataE+0x34a>
 817352f:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8173532:	89 04 24             	mov    %eax,(%esp)
 8173535:	e8 ec 17 f7 ff       	call   80e4d26 <_ZNSt6vectorIhSaIhEED1Ev>
 817353a:	eb 1b                	jmp    8173557 <_ZN6Taiwan15AuthGarenaToken7decryptEPKciRNS_14GarenaAuthDataE+0x365>
 817353c:	89 d3                	mov    %edx,%ebx
 817353e:	89 c6                	mov    %eax,%esi
 8173540:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8173543:	89 04 24             	mov    %eax,(%esp)
 8173546:	e8 db 17 f7 ff       	call   80e4d26 <_ZNSt6vectorIhSaIhEED1Ev>
 817354b:	89 f0                	mov    %esi,%eax
 817354d:	89 da                	mov    %ebx,%edx
 817354f:	89 04 24             	mov    %eax,(%esp)
 8173552:	e8 f9 01 97 00       	call   8ae3750 <_Unwind_Resume>
 8173557:	8d 45 ac             	lea    -0x54(%ebp),%eax
 817355a:	89 04 24             	mov    %eax,(%esp)
 817355d:	e8 c4 17 f7 ff       	call   80e4d26 <_ZNSt6vectorIhSaIhEED1Ev>
 8173562:	89 d8                	mov    %ebx,%eax
 8173564:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 817356a:	5b                   	pop    %ebx
 817356b:	5e                   	pop    %esi
 817356c:	5f                   	pop    %edi
 817356d:	5d                   	pop    %ebp
 817356e:	c3                   	ret

```

```c
// Taiwan::AuthGarenaToken::decrypt @ 0x81731f2

/* Taiwan::AuthGarenaToken::decrypt(char const*, int, Taiwan::GarenaAuthData&) */

undefined4 Taiwan::AuthGarenaToken::decrypt(char *param_1,int param_2,GarenaAuthData *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  void *__src;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  vector<unsigned_char,std::allocator<unsigned_char>> local_64 [12];
  vector<unsigned_char,std::allocator<unsigned_char>> local_58 [12];
  cMyTrace local_4c [16];
  string local_3c;
  allocator<char> local_35;
  cMyTrace local_34 [16];
  char *local_24;
  char local_1d;
  
  if (param_1 == (char *)0x0) {
    cMyTrace::cMyTrace(local_4c,"decrypt",0x7a,5);
    cMyTrace::operator()(local_4c,"[Taiwan, Auth] Token is null!");
    uVar8 = 0x7b;
  }
  else {
    local_24 = param_1;
    std::vector<unsigned_char,std::allocator<unsigned_char>>::vector(local_58);
    std::allocator<char>::allocator();
                    /* try { // try from 08173274 to 08173278 has its CatchHandler @ 081732af */
    std::string::string((string *)&local_3c,local_24,(allocator *)&local_35);
                    /* try { // try from 08173286 to 0817328a has its CatchHandler @ 0817328d */
    base64_decode(&local_3c,(vector *)local_58);
                    /* try { // try from 081732a8 to 081732ac has its CatchHandler @ 081732af */
    std::string::~string((string *)&local_3c);
    std::allocator<char>::~allocator(&local_35);
    iVar2 = std::vector<unsigned_char,std::allocator<unsigned_char>>::size(local_58);
    if (iVar2 == 0) {
                    /* try { // try from 0817330d to 08173326 has its CatchHandler @ 0817353c */
      LogManager::logFormat
                (1,"localtaiwan/System/TaiwanAuth.cpp","decrypt",0x83,
                 "[Taiwan, Auth] Invalid token format!");
      uVar8 = 0x84;
    }
    else {
      std::vector<unsigned_char,std::allocator<unsigned_char>>::vector(local_64);
      iVar2 = std::vector<unsigned_char,std::allocator<unsigned_char>>::size(local_58);
      pcVar3 = (char *)std::vector<unsigned_char,std::allocator<unsigned_char>>::operator[]
                                 (local_58,0);
                    /* try { // try from 0817335d to 08173512 has its CatchHandler @ 0817351a */
      local_1d = COpensslRSA::Decrypt((COpensslRSA *)&openSSLRSA_,pcVar3,iVar2,(vector *)local_64);
      if (local_1d == '\x01') {
        uVar4 = std::vector<unsigned_char,std::allocator<unsigned_char>>::size(local_64);
        if (uVar4 < 0x69) {
          memset(param_3,0,0x68);
          iVar2 = std::vector<unsigned_char,std::allocator<unsigned_char>>::size(local_64);
          __src = (void *)std::vector<unsigned_char,std::allocator<unsigned_char>>::operator[]
                                    (local_64,0);
          memcpy(param_3,__src,iVar2 - 1);
          cVar1 = GarenaAuthData::getMobileAuth(param_3);
          uVar4 = GarenaAuthData::getGoldMemberType(param_3);
          uVar5 = GarenaAuthData::getGcaType(param_3);
          uVar8 = GarenaAuthData::getTimeStamp(param_3);
          uVar6 = GarenaAuthData::getUname(param_3);
          uVar7 = GarenaAuthData::getUid(param_3);
          cMyTrace::cMyTrace(local_34,"decrypt",0x99,0);
          cMyTrace::operator()
                    (local_34,
                     "[Taiwan, Auth] Success!! Uid:%u, UserName:%s, Timestamp:%u, GcaType:%u, GoldMemberType:%u, Mobile:%u"
                     ,uVar7,uVar6,uVar8,uVar5 & 0xffff,uVar4 & 0xff,(uint)(cVar1 != '\0'));
          uVar8 = 0;
        }
        else {
          uVar8 = std::vector<unsigned_char,std::allocator<unsigned_char>>::size(local_64);
          LogManager::logFormat
                    (1,"localtaiwan/System/TaiwanAuth.cpp","decrypt",0x92,
                     "[Taiwan, Auth] Invalid decrypted token length! (buffer_size:%u, token_size:%u)"
                     ,0x68,uVar8);
          uVar8 = 0x93;
        }
      }
      else {
        LogManager::logFormat
                  (1,"localtaiwan/System/TaiwanAuth.cpp","decrypt",0x8b,
                   "[Taiwan, Auth] Decrypt token failed!");
        uVar8 = 0x8c;
      }
                    /* try { // try from 08173535 to 08173539 has its CatchHandler @ 0817353c */
      std::vector<unsigned_char,std::allocator<unsigned_char>>::~vector(local_64);
    }
    std::vector<unsigned_char,std::allocator<unsigned_char>>::~vector(local_58);
  }
  return uVar8;
}

```

---

## init

```asm
// === 081730c2 Taiwan::AuthGarenaToken::init  [0x081730c2-0x81730d5] ===
 81730c2:	55                   	push   %ebp
 81730c3:	89 e5                	mov    %esp,%ebp
 81730c5:	83 ec 18             	sub    $0x18,%esp
 81730c8:	c7 04 24 54 47 40 09 	movl   $0x9404754,(%esp)
 81730cf:	e8 9a 91 ff ff       	call   816c26e <_ZN11COpensslRSA4InitEv>
 81730d4:	c9                   	leave
 81730d5:	c3                   	ret

```

```c
// Taiwan::AuthGarenaToken::init @ 0x81730c2

/* Taiwan::AuthGarenaToken::init() */

void Taiwan::AuthGarenaToken::init(void)

{
  COpensslRSA::Init((COpensslRSA *)&openSSLRSA_);
  return;
}

```

---

## init_081730d6

```asm
// === 081730d6 Taiwan::AuthGarenaToken::init  [0x081730d6-0x81731f1] ===
 81730d6:	55                   	push   %ebp
 81730d7:	89 e5                	mov    %esp,%ebp
 81730d9:	56                   	push   %esi
 81730da:	53                   	push   %ebx
 81730db:	83 ec 20             	sub    $0x20,%esp
 81730de:	8d 45 ef             	lea    -0x11(%ebp),%eax
 81730e1:	89 04 24             	mov    %eax,(%esp)
 81730e4:	e8 e7 cf 56 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 81730e9:	8d 45 ef             	lea    -0x11(%ebp),%eax
 81730ec:	89 44 24 08          	mov    %eax,0x8(%esp)
 81730f0:	c7 44 24 04 20 3f b8 	movl   $0x8b83f20,0x4(%esp)
 81730f7:	08 
 81730f8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81730fb:	89 04 24             	mov    %eax,(%esp)
 81730fe:	e8 2d 45 59 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8173103:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8173106:	89 04 24             	mov    %eax,(%esp)
 8173109:	e8 c2 cf 56 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 817310e:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8173111:	89 44 24 08          	mov    %eax,0x8(%esp)
 8173115:	8b 45 08             	mov    0x8(%ebp),%eax
 8173118:	89 44 24 04          	mov    %eax,0x4(%esp)
 817311c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 817311f:	89 04 24             	mov    %eax,(%esp)
 8173122:	e8 09 45 59 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8173127:	8d 45 e8             	lea    -0x18(%ebp),%eax
 817312a:	89 44 24 04          	mov    %eax,0x4(%esp)
 817312e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8173131:	89 04 24             	mov    %eax,(%esp)
 8173134:	e8 3a e1 ff ff       	call   8171273 <_ZSteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKSbIS3_St11char_traitsIS3_ESaIS3_EESC_>
 8173139:	84 c0                	test   %al,%al
 817313b:	74 0e                	je     817314b <_ZN6Taiwan15AuthGarenaToken4initEPKc+0x75>
 817313d:	c7 04 24 54 47 40 09 	movl   $0x9404754,(%esp)
 8173144:	e8 25 91 ff ff       	call   816c26e <_ZN11COpensslRSA4InitEv>
 8173149:	eb 13                	jmp    817315e <_ZN6Taiwan15AuthGarenaToken4initEPKc+0x88>
 817314b:	8b 45 08             	mov    0x8(%ebp),%eax
 817314e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8173152:	c7 04 24 54 47 40 09 	movl   $0x9404754,(%esp)
 8173159:	e8 2c 91 ff ff       	call   816c28a <_ZN11COpensslRSA4InitEPKc>
 817315e:	89 c3                	mov    %eax,%ebx
 8173160:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8173163:	89 04 24             	mov    %eax,(%esp)
 8173166:	e8 75 4a 59 00       	call   8707be0 <_ZNSsD1Ev>
 817316b:	eb 3d                	jmp    81731aa <_ZN6Taiwan15AuthGarenaToken4initEPKc+0xd4>
 817316d:	89 d3                	mov    %edx,%ebx
 817316f:	89 c6                	mov    %eax,%esi
 8173171:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8173174:	89 04 24             	mov    %eax,(%esp)
 8173177:	e8 64 4a 59 00       	call   8707be0 <_ZNSsD1Ev>
 817317c:	89 f0                	mov    %esi,%eax
 817317e:	89 da                	mov    %ebx,%edx
 8173180:	eb 00                	jmp    8173182 <_ZN6Taiwan15AuthGarenaToken4initEPKc+0xac>
 8173182:	89 d3                	mov    %edx,%ebx
 8173184:	89 c6                	mov    %eax,%esi
 8173186:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8173189:	89 04 24             	mov    %eax,(%esp)
 817318c:	e8 5f cf 56 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8173191:	89 f0                	mov    %esi,%eax
 8173193:	89 da                	mov    %ebx,%edx
 8173195:	89 d3                	mov    %edx,%ebx
 8173197:	89 c6                	mov    %eax,%esi
 8173199:	8d 45 e8             	lea    -0x18(%ebp),%eax
 817319c:	89 04 24             	mov    %eax,(%esp)
 817319f:	e8 3c 4a 59 00       	call   8707be0 <_ZNSsD1Ev>
 81731a4:	89 f0                	mov    %esi,%eax
 81731a6:	89 da                	mov    %ebx,%edx
 81731a8:	eb 18                	jmp    81731c2 <_ZN6Taiwan15AuthGarenaToken4initEPKc+0xec>
 81731aa:	8d 45 f7             	lea    -0x9(%ebp),%eax
 81731ad:	89 04 24             	mov    %eax,(%esp)
 81731b0:	e8 3b cf 56 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81731b5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81731b8:	89 04 24             	mov    %eax,(%esp)
 81731bb:	e8 20 4a 59 00       	call   8707be0 <_ZNSsD1Ev>
 81731c0:	eb 1b                	jmp    81731dd <_ZN6Taiwan15AuthGarenaToken4initEPKc+0x107>
 81731c2:	89 d3                	mov    %edx,%ebx
 81731c4:	89 c6                	mov    %eax,%esi
 81731c6:	8d 45 ef             	lea    -0x11(%ebp),%eax
 81731c9:	89 04 24             	mov    %eax,(%esp)
 81731cc:	e8 1f cf 56 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81731d1:	89 f0                	mov    %esi,%eax
 81731d3:	89 da                	mov    %ebx,%edx
 81731d5:	89 04 24             	mov    %eax,(%esp)
 81731d8:	e8 73 05 97 00       	call   8ae3750 <_Unwind_Resume>
 81731dd:	8d 45 ef             	lea    -0x11(%ebp),%eax
 81731e0:	89 04 24             	mov    %eax,(%esp)
 81731e3:	e8 08 cf 56 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81731e8:	89 d8                	mov    %ebx,%eax
 81731ea:	83 c4 20             	add    $0x20,%esp
 81731ed:	5b                   	pop    %ebx
 81731ee:	5e                   	pop    %esi
 81731ef:	5d                   	pop    %ebp
 81731f0:	c3                   	ret
 81731f1:	90                   	nop

```

```c
// Taiwan::AuthGarenaToken::init @ 0x81730d6

/* Taiwan::AuthGarenaToken::init(char const*) */

undefined4 Taiwan::AuthGarenaToken::init(char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  string local_1c;
  allocator<char> local_15;
  string local_14;
  allocator<char> local_d;
  
  std::allocator<char>::allocator();
                    /* try { // try from 081730fe to 08173102 has its CatchHandler @ 081731c2 */
  std::string::string((string *)&local_1c,"",(allocator *)&local_15);
  std::allocator<char>::allocator();
                    /* try { // try from 08173122 to 08173126 has its CatchHandler @ 08173182 */
  std::string::string((string *)&local_14,param_1,(allocator *)&local_d);
                    /* try { // try from 08173134 to 0817315d has its CatchHandler @ 0817316d */
  cVar1 = std::operator==(&local_14,&local_1c);
  if (cVar1 == '\0') {
    uVar2 = COpensslRSA::Init((COpensslRSA *)&openSSLRSA_,param_1);
  }
  else {
    uVar2 = COpensslRSA::Init((COpensslRSA *)&openSSLRSA_);
  }
                    /* try { // try from 08173166 to 0817316a has its CatchHandler @ 08173182 */
  std::string::~string((string *)&local_14);
  std::allocator<char>::~allocator(&local_d);
                    /* try { // try from 081731bb to 081731bf has its CatchHandler @ 081731c2 */
  std::string::~string((string *)&local_1c);
  std::allocator<char>::~allocator(&local_15);
  return uVar2;
}

```

