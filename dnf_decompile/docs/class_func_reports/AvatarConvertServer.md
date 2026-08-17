# AvatarConvertServer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## AvatarConvertServer

```asm
// === 081921b6 AvatarConvertServer::AvatarConvertServer  [0x081921b6-0x81921eb] ===
 81921b6:	55                   	push   %ebp
 81921b7:	89 e5                	mov    %esp,%ebp
 81921b9:	83 ec 18             	sub    $0x18,%esp
 81921bc:	8b 45 08             	mov    0x8(%ebp),%eax
 81921bf:	83 c0 04             	add    $0x4,%eax
 81921c2:	89 04 24             	mov    %eax,(%esp)
 81921c5:	e8 44 f9 71 00       	call   88b1b0e <_ZN4ARAD6SCRIPT13AvatarConvertC1Ev>
 81921ca:	8b 45 08             	mov    0x8(%ebp),%eax
 81921cd:	89 04 24             	mov    %eax,(%esp)
 81921d0:	e8 35 16 00 00       	call   819380a <_ZN4ARAD9SingletonI19AvatarConvertServerEC1Ev>
 81921d5:	8b 45 08             	mov    0x8(%ebp),%eax
 81921d8:	89 04 24             	mov    %eax,(%esp)
 81921db:	e8 74 02 f5 ff       	call   80e2454 <_ZN4ARAD15ScriptInterfaceC1Ev>
 81921e0:	8b 45 08             	mov    0x8(%ebp),%eax
 81921e3:	c7 00 38 b9 b9 08    	movl   $0x8b9b938,(%eax)
 81921e9:	c9                   	leave
 81921ea:	c3                   	ret
 81921eb:	90                   	nop

```

```c
// AvatarConvertServer::AvatarConvertServer @ 0x81921b6

/* AvatarConvertServer::AvatarConvertServer() */

void __thiscall AvatarConvertServer::AvatarConvertServer(AvatarConvertServer *this)

{
  ARAD::SCRIPT::AvatarConvert::AvatarConvert((AvatarConvert *)(this + 4));
  ARAD::Singleton<AvatarConvertServer>::Singleton();
  ARAD::ScriptInterface::ScriptInterface((ScriptInterface *)this);
  *(undefined ***)this = &PTR_Load_08b9b938;
  return;
}

```

---

## CheckCondition

```asm
// === 08192212 AvatarConvertServer::CheckCondition  [0x08192212-0x81926dd] ===
 8192212:	55                   	push   %ebp
 8192213:	89 e5                	mov    %esp,%ebp
 8192215:	53                   	push   %ebx
 8192216:	83 ec 44             	sub    $0x44,%esp
 8192219:	8b 45 10             	mov    0x10(%ebp),%eax
 819221c:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8192220:	0f b7 d8             	movzwl %ax,%ebx
 8192223:	8b 45 0c             	mov    0xc(%ebp),%eax
 8192226:	89 04 24             	mov    %eax,(%esp)
 8192229:	e8 50 80 f4 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 819222e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8192232:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8192239:	00 
 819223a:	89 04 24             	mov    %eax,(%esp)
 819223d:	e8 9c 9f 36 00       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 8192242:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8192245:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8192249:	74 0f                	je     819225a <_ZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertE+0x48>
 819224b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 819224e:	89 04 24             	mov    %eax,(%esp)
 8192251:	e8 10 cb f8 ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 8192256:	84 c0                	test   %al,%al
 8192258:	74 07                	je     8192261 <_ZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertE+0x4f>
 819225a:	b8 01 00 00 00       	mov    $0x1,%eax
 819225f:	eb 05                	jmp    8192266 <_ZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertE+0x54>
 8192261:	b8 00 00 00 00       	mov    $0x0,%eax
 8192266:	84 c0                	test   %al,%al
 8192268:	74 46                	je     81922b0 <_ZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertE+0x9e>
 819226a:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 8192271:	00 
 8192272:	c7 44 24 04 4f 02 00 	movl   $0x24f,0x4(%esp)
 8192279:	00 
 819227a:	8b 45 0c             	mov    0xc(%ebp),%eax
 819227d:	89 04 24             	mov    %eax,(%esp)
 8192280:	e8 bd 9c 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8192285:	8b 45 10             	mov    0x10(%ebp),%eax
 8192288:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 819228c:	0f b7 c0             	movzwl %ax,%eax
 819228f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8192293:	8b 45 0c             	mov    0xc(%ebp),%eax
 8192296:	89 44 24 04          	mov    %eax,0x4(%esp)
 819229a:	c7 04 24 76 a6 b9 08 	movl   $0x8b9a676,(%esp)
 81922a1:	e8 fe 58 00 00       	call   8197ba4 <_ZN4ARAD11PRINT_ERROR7isEmptyEPcP5CUsert>
 81922a6:	b8 00 00 00 00       	mov    $0x0,%eax
 81922ab:	e9 28 04 00 00       	jmp    81926d8 <_ZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertE+0x4c6>
 81922b0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81922b3:	8b 50 02             	mov    0x2(%eax),%edx
 81922b6:	8b 45 10             	mov    0x10(%ebp),%eax
 81922b9:	8b 40 04             	mov    0x4(%eax),%eax
 81922bc:	39 c2                	cmp    %eax,%edx
 81922be:	74 74                	je     8192334 <_ZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertE+0x122>
 81922c0:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 81922c7:	00 
 81922c8:	c7 44 24 04 4f 02 00 	movl   $0x24f,0x4(%esp)
 81922cf:	00 
 81922d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81922d3:	89 04 24             	mov    %eax,(%esp)
 81922d6:	e8 67 9c 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81922db:	8b 45 0c             	mov    0xc(%ebp),%eax
 81922de:	89 04 24             	mov    %eax,(%esp)
 81922e1:	e8 68 99 f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81922e6:	8b 55 10             	mov    0x10(%ebp),%edx
 81922e9:	8b 4a 04             	mov    0x4(%edx),%ecx
 81922ec:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81922ef:	8b 52 02             	mov    0x2(%edx),%edx
 81922f2:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 81922f6:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 81922fa:	89 54 24 14          	mov    %edx,0x14(%esp)
 81922fe:	c7 44 24 10 88 a6 b9 	movl   $0x8b9a688,0x10(%esp)
 8192305:	08 
 8192306:	c7 44 24 0c b5 02 00 	movl   $0x2b5,0xc(%esp)
 819230d:	00 
 819230e:	c7 44 24 08 60 b6 b9 	movl   $0x8b9b660,0x8(%esp)
 8192315:	08 
 8192316:	c7 44 24 04 c4 a3 b9 	movl   $0x8b9a3c4,0x4(%esp)
 819231d:	08 
 819231e:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8192325:	e8 e0 18 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 819232a:	b8 00 00 00 00       	mov    $0x0,%eax
 819232f:	e9 a4 03 00 00       	jmp    81926d8 <_ZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertE+0x4c6>
 8192334:	8b 45 10             	mov    0x10(%ebp),%eax
 8192337:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 819233b:	0f b7 c0             	movzwl %ax,%eax
 819233e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8192342:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8192349:	00 
 819234a:	8b 45 0c             	mov    0xc(%ebp),%eax
 819234d:	89 04 24             	mov    %eax,(%esp)
 8192350:	e8 ed 45 4b 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 8192355:	84 c0                	test   %al,%al
 8192357:	74 74                	je     81923cd <_ZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertE+0x1bb>
 8192359:	c7 44 24 08 d5 00 00 	movl   $0xd5,0x8(%esp)
 8192360:	00 
 8192361:	c7 44 24 04 4f 02 00 	movl   $0x24f,0x4(%esp)
 8192368:	00 
 8192369:	8b 45 0c             	mov    0xc(%ebp),%eax
 819236c:	89 04 24             	mov    %eax,(%esp)
 819236f:	e8 ce 9b 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8192374:	8b 45 0c             	mov    0xc(%ebp),%eax
 8192377:	89 04 24             	mov    %eax,(%esp)
 819237a:	e8 cf 98 f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 819237f:	8b 55 10             	mov    0x10(%ebp),%edx
 8192382:	8b 4a 04             	mov    0x4(%edx),%ecx
 8192385:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8192388:	8b 52 02             	mov    0x2(%edx),%edx
 819238b:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 819238f:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8192393:	89 54 24 14          	mov    %edx,0x14(%esp)
 8192397:	c7 44 24 10 c4 a6 b9 	movl   $0x8b9a6c4,0x10(%esp)
 819239e:	08 
 819239f:	c7 44 24 0c bc 02 00 	movl   $0x2bc,0xc(%esp)
 81923a6:	00 
 81923a7:	c7 44 24 08 60 b6 b9 	movl   $0x8b9b660,0x8(%esp)
 81923ae:	08 
 81923af:	c7 44 24 04 c4 a3 b9 	movl   $0x8b9a3c4,0x4(%esp)
 81923b6:	08 
 81923b7:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81923be:	e8 47 18 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81923c3:	b8 00 00 00 00       	mov    $0x0,%eax
 81923c8:	e9 0b 03 00 00       	jmp    81926d8 <_ZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertE+0x4c6>
 81923cd:	8b 45 10             	mov    0x10(%ebp),%eax
 81923d0:	8b 40 04             	mov    0x4(%eax),%eax
 81923d3:	89 c3                	mov    %eax,%ebx
 81923d5:	e8 c1 9d f3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81923da:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81923de:	89 04 24             	mov    %eax,(%esp)
 81923e1:	e8 4c d6 1c 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81923e6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81923e9:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81923ed:	74 19                	je     8192408 <_ZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertE+0x1f6>
 81923ef:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81923f2:	8b 00                	mov    (%eax),%eax
 81923f4:	83 c0 10             	add    $0x10,%eax
 81923f7:	8b 10                	mov    (%eax),%edx
 81923f9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81923fc:	89 04 24             	mov    %eax,(%esp)
 81923ff:	ff d2                	call   *%edx
 8192401:	83 f0 01             	xor    $0x1,%eax
 8192404:	84 c0                	test   %al,%al
 8192406:	74 07                	je     819240f <_ZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertE+0x1fd>
 8192408:	b8 01 00 00 00       	mov    $0x1,%eax
 819240d:	eb 05                	jmp    8192414 <_ZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertE+0x202>
 819240f:	b8 00 00 00 00       	mov    $0x0,%eax
 8192414:	84 c0                	test   %al,%al
 8192416:	74 42                	je     819245a <_ZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertE+0x248>
 8192418:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 819241f:	00 
 8192420:	c7 44 24 04 4f 02 00 	movl   $0x24f,0x4(%esp)
 8192427:	00 
 8192428:	8b 45 0c             	mov    0xc(%ebp),%eax
 819242b:	89 04 24             	mov    %eax,(%esp)
 819242e:	e8 0f 9b 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8192433:	8b 45 10             	mov    0x10(%ebp),%eax
 8192436:	8b 40 04             	mov    0x4(%eax),%eax
 8192439:	89 44 24 08          	mov    %eax,0x8(%esp)
 819243d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8192440:	89 44 24 04          	mov    %eax,0x4(%esp)
 8192444:	c7 04 24 76 a6 b9 08 	movl   $0x8b9a676,(%esp)
 819244b:	e8 5f 58 00 00       	call   8197caf <_ZN4ARAD11PRINT_ERROR9find_itemEPcP5CUseri>
 8192450:	b8 00 00 00 00       	mov    $0x0,%eax
 8192455:	e9 7e 02 00 00       	jmp    81926d8 <_ZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertE+0x4c6>
 819245a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 819245d:	8b 00                	mov    (%eax),%eax
 819245f:	83 c0 24             	add    $0x24,%eax
 8192462:	8b 10                	mov    (%eax),%edx
 8192464:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 819246b:	00 
 819246c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 819246f:	89 04 24             	mov    %eax,(%esp)
 8192472:	ff d2                	call   *%edx
 8192474:	83 f0 01             	xor    $0x1,%eax
 8192477:	84 c0                	test   %al,%al
 8192479:	74 71                	je     81924ec <_ZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertE+0x2da>
 819247b:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 8192482:	00 
 8192483:	c7 44 24 04 4f 02 00 	movl   $0x24f,0x4(%esp)
 819248a:	00 
 819248b:	8b 45 0c             	mov    0xc(%ebp),%eax
 819248e:	89 04 24             	mov    %eax,(%esp)
 8192491:	e8 ac 9a 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8192496:	8b 45 0c             	mov    0xc(%ebp),%eax
 8192499:	89 04 24             	mov    %eax,(%esp)
 819249c:	e8 ad 97 f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81924a1:	89 c3                	mov    %eax,%ebx
 81924a3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81924a6:	89 04 24             	mov    %eax,(%esp)
 81924a9:	e8 9a e7 f7 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 81924ae:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 81924b2:	89 44 24 14          	mov    %eax,0x14(%esp)
 81924b6:	c7 44 24 10 08 a7 b9 	movl   $0x8b9a708,0x10(%esp)
 81924bd:	08 
 81924be:	c7 44 24 0c d2 02 00 	movl   $0x2d2,0xc(%esp)
 81924c5:	00 
 81924c6:	c7 44 24 08 60 b6 b9 	movl   $0x8b9b660,0x8(%esp)
 81924cd:	08 
 81924ce:	c7 44 24 04 c4 a3 b9 	movl   $0x8b9a3c4,0x4(%esp)
 81924d5:	08 
 81924d6:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81924dd:	e8 28 17 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81924e2:	b8 00 00 00 00       	mov    $0x0,%eax
 81924e7:	e9 ec 01 00 00       	jmp    81926d8 <_ZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertE+0x4c6>
 81924ec:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81924ef:	8b 58 07             	mov    0x7(%eax),%ebx
 81924f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81924f5:	89 04 24             	mov    %eax,(%esp)
 81924f8:	e8 91 7d f4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81924fd:	89 04 24             	mov    %eax,(%esp)
 8192500:	e8 71 b0 f4 ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 8192505:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8192509:	89 04 24             	mov    %eax,(%esp)
 819250c:	e8 09 73 16 00       	call   82f981a <_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi>
 8192511:	85 c0                	test   %eax,%eax
 8192513:	0f 95 c0             	setne  %al
 8192516:	84 c0                	test   %al,%al
 8192518:	74 6a                	je     8192584 <_ZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertE+0x372>
 819251a:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 8192521:	00 
 8192522:	c7 44 24 04 4f 02 00 	movl   $0x24f,0x4(%esp)
 8192529:	00 
 819252a:	8b 45 0c             	mov    0xc(%ebp),%eax
 819252d:	89 04 24             	mov    %eax,(%esp)
 8192530:	e8 0d 9a 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8192535:	8b 45 0c             	mov    0xc(%ebp),%eax
 8192538:	89 04 24             	mov    %eax,(%esp)
 819253b:	e8 0e 97 f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8192540:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8192543:	8b 52 07             	mov    0x7(%edx),%edx
 8192546:	89 44 24 18          	mov    %eax,0x18(%esp)
 819254a:	89 54 24 14          	mov    %edx,0x14(%esp)
 819254e:	c7 44 24 10 6c a7 b9 	movl   $0x8b9a76c,0x10(%esp)
 8192555:	08 
 8192556:	c7 44 24 0c d9 02 00 	movl   $0x2d9,0xc(%esp)
 819255d:	00 
 819255e:	c7 44 24 08 60 b6 b9 	movl   $0x8b9b660,0x8(%esp)
 8192565:	08 
 8192566:	c7 44 24 04 c4 a3 b9 	movl   $0x8b9a3c4,0x4(%esp)
 819256d:	08 
 819256e:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8192575:	e8 90 16 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 819257a:	b8 00 00 00 00       	mov    $0x0,%eax
 819257f:	e9 54 01 00 00       	jmp    81926d8 <_ZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertE+0x4c6>
 8192584:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8192587:	89 04 24             	mov    %eax,(%esp)
 819258a:	e8 c5 e6 f7 ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 819258f:	8b 55 08             	mov    0x8(%ebp),%edx
 8192592:	83 c2 04             	add    $0x4,%edx
 8192595:	89 44 24 04          	mov    %eax,0x4(%esp)
 8192599:	89 14 24             	mov    %edx,(%esp)
 819259c:	e8 a7 f8 71 00       	call   88b1e48 <_ZN4ARAD6SCRIPT13AvatarConvert16getConvertResultEi>
 81925a1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81925a4:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81925a8:	75 6a                	jne    8192614 <_ZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertE+0x402>
 81925aa:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 81925b1:	00 
 81925b2:	c7 44 24 04 4f 02 00 	movl   $0x24f,0x4(%esp)
 81925b9:	00 
 81925ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 81925bd:	89 04 24             	mov    %eax,(%esp)
 81925c0:	e8 7d 99 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81925c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81925c8:	89 04 24             	mov    %eax,(%esp)
 81925cb:	e8 7e 96 f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81925d0:	8b 55 10             	mov    0x10(%ebp),%edx
 81925d3:	8b 52 04             	mov    0x4(%edx),%edx
 81925d6:	89 44 24 18          	mov    %eax,0x18(%esp)
 81925da:	89 54 24 14          	mov    %edx,0x14(%esp)
 81925de:	c7 44 24 10 ac a7 b9 	movl   $0x8b9a7ac,0x10(%esp)
 81925e5:	08 
 81925e6:	c7 44 24 0c e2 02 00 	movl   $0x2e2,0xc(%esp)
 81925ed:	00 
 81925ee:	c7 44 24 08 60 b6 b9 	movl   $0x8b9b660,0x8(%esp)
 81925f5:	08 
 81925f6:	c7 44 24 04 c4 a3 b9 	movl   $0x8b9a3c4,0x4(%esp)
 81925fd:	08 
 81925fe:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8192605:	e8 00 16 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 819260a:	b8 00 00 00 00       	mov    $0x0,%eax
 819260f:	e9 c4 00 00 00       	jmp    81926d8 <_ZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertE+0x4c6>
 8192614:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8192617:	0f b6 40 20          	movzbl 0x20(%eax),%eax
 819261b:	83 f0 01             	xor    $0x1,%eax
 819261e:	84 c0                	test   %al,%al
 8192620:	74 22                	je     8192644 <_ZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertE+0x432>
 8192622:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8192625:	83 c0 08             	add    $0x8,%eax
 8192628:	89 04 24             	mov    %eax,(%esp)
 819262b:	e8 e0 11 00 00       	call   8193810 <_ZNKSt6vectorIN4ARAD6SCRIPT13AvatarConvert7GetInfoESaIS3_EE4sizeEv>
 8192630:	8b 55 10             	mov    0x10(%ebp),%edx
 8192633:	0f b7 12             	movzwl (%edx),%edx
 8192636:	0f b7 d2             	movzwl %dx,%edx
 8192639:	39 d0                	cmp    %edx,%eax
 819263b:	72 07                	jb     8192644 <_ZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertE+0x432>
 819263d:	b8 01 00 00 00       	mov    $0x1,%eax
 8192642:	eb 05                	jmp    8192649 <_ZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertE+0x437>
 8192644:	b8 00 00 00 00       	mov    $0x0,%eax
 8192649:	84 c0                	test   %al,%al
 819264b:	0f 84 82 00 00 00    	je     81926d3 <_ZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertE+0x4c1>
 8192651:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 8192658:	00 
 8192659:	c7 44 24 04 4f 02 00 	movl   $0x24f,0x4(%esp)
 8192660:	00 
 8192661:	8b 45 0c             	mov    0xc(%ebp),%eax
 8192664:	89 04 24             	mov    %eax,(%esp)
 8192667:	e8 d6 98 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 819266c:	8b 45 0c             	mov    0xc(%ebp),%eax
 819266f:	89 04 24             	mov    %eax,(%esp)
 8192672:	e8 d7 95 f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8192677:	8b 55 10             	mov    0x10(%ebp),%edx
 819267a:	8b 5a 04             	mov    0x4(%edx),%ebx
 819267d:	8b 55 10             	mov    0x10(%ebp),%edx
 8192680:	0f b7 12             	movzwl (%edx),%edx
 8192683:	0f b7 ca             	movzwl %dx,%ecx
 8192686:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8192689:	0f b6 52 20          	movzbl 0x20(%edx),%edx
 819268d:	0f b6 d2             	movzbl %dl,%edx
 8192690:	89 44 24 20          	mov    %eax,0x20(%esp)
 8192694:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8192698:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 819269c:	89 54 24 14          	mov    %edx,0x14(%esp)
 81926a0:	c7 44 24 10 f4 a7 b9 	movl   $0x8b9a7f4,0x10(%esp)
 81926a7:	08 
 81926a8:	c7 44 24 0c e9 02 00 	movl   $0x2e9,0xc(%esp)
 81926af:	00 
 81926b0:	c7 44 24 08 60 b6 b9 	movl   $0x8b9b660,0x8(%esp)
 81926b7:	08 
 81926b8:	c7 44 24 04 c4 a3 b9 	movl   $0x8b9a3c4,0x4(%esp)
 81926bf:	08 
 81926c0:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81926c7:	e8 3e 15 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81926cc:	b8 00 00 00 00       	mov    $0x0,%eax
 81926d1:	eb 05                	jmp    81926d8 <_ZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertE+0x4c6>
 81926d3:	b8 01 00 00 00       	mov    $0x1,%eax
 81926d8:	83 c4 44             	add    $0x44,%esp
 81926db:	5b                   	pop    %ebx
 81926dc:	5d                   	pop    %ebp
 81926dd:	c3                   	ret

```

```c
// AvatarConvertServer::CheckCondition @ 0x8192212

/* AvatarConvertServer::CheckCondition(CUser*, arad::SigAradAvatarConvert*) */

bool __thiscall
AvatarConvertServer::CheckCondition
          (AvatarConvertServer *this,CUser *param_1,SigAradAvatarConvert *param_2)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  CInventory *pCVar4;
  Inven_Item *this_00;
  undefined4 uVar5;
  CDataManager *this_01;
  CItem *this_02;
  undefined4 uVar6;
  CAvatarItemMgr *this_03;
  int iVar7;
  uint uVar8;
  
  uVar1 = *(ushort *)(param_2 + 2);
  pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  this_00 = (Inven_Item *)CInventory::GetInvenRef(pCVar4,2,(uint)uVar1);
  if ((this_00 == (Inven_Item *)0x0) || (cVar3 = Inven_Item::isEmpty(this_00), cVar3 != '\0')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    CUser::SendCmdErrorPacket(param_1,0x24f,0x16);
    ARAD::PRINT_ERROR::isEmpty("AVATAR CONVERT",param_1,*(ushort *)(param_2 + 2));
    return false;
  }
  if (*(int *)(this_00 + 2) != *(int *)(param_2 + 4)) {
    CUser::SendCmdErrorPacket(param_1,0x24f,0x11);
    uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    LogManager::logFormat
              (1,"localjapan/Arad_EmblemReformServer.cpp",
               "bool AvatarConvertServer::CheckCondition(CUser*, arad::SigAradAvatarConvert*)",0x2b5
               ,"AVATAR CONVERT : [item_id1:%d] [item_id2:%d] [charac_no:%d]",
               *(undefined4 *)(this_00 + 2),*(undefined4 *)(param_2 + 4),uVar5);
    return false;
  }
  cVar3 = CUser::CheckItemLock(param_1,2,(uint)*(ushort *)(param_2 + 2));
  if (cVar3 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0x24f,0xd5);
    uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    LogManager::logFormat
              (1,"localjapan/Arad_EmblemReformServer.cpp",
               "bool AvatarConvertServer::CheckCondition(CUser*, arad::SigAradAvatarConvert*)",700,
               "AVATAR CONVERT : lock [item_id1:%d] [item_id2:%d] [charac_no:%d]",
               *(undefined4 *)(this_00 + 2),*(undefined4 *)(param_2 + 4),uVar5);
    return false;
  }
  iVar7 = *(int *)(param_2 + 4);
  this_01 = (CDataManager *)G_CDataManager();
  this_02 = (CItem *)CDataManager::find_item(this_01,iVar7);
  if ((this_02 == (CItem *)0x0) ||
     (cVar3 = (**(code **)(*(int *)this_02 + 0x10))(this_02), cVar3 != '\x01')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    CUser::SendCmdErrorPacket(param_1,0x24f,0x11);
    ARAD::PRINT_ERROR::find_item("AVATAR CONVERT",param_1,*(int *)(param_2 + 4));
    return false;
  }
  cVar3 = (**(code **)(*(int *)this_02 + 0x24))(this_02,2);
  if (cVar3 != '\x01') {
    CUser::SendCmdErrorPacket(param_1,0x24f,0x17);
    uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    uVar6 = CItem::get_index(this_02);
    LogManager::logFormat
              (1,"localjapan/Arad_EmblemReformServer.cpp",
               "bool AvatarConvertServer::CheckCondition(CUser*, arad::SigAradAvatarConvert*)",0x2d2
               ,
               "AVATAR CONVERT : isEnableAvatarFunc(AVATAR_FUNC_FILTER_DISJOINT) fail [item_id:%d] [charac_no:%d]"
               ,uVar6,uVar5);
    return false;
  }
  iVar7 = *(int *)(this_00 + 7);
  pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  this_03 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar4);
  iVar7 = WongWork::CAvatarItemMgr::GetExpireDate(this_03,iVar7);
  if (iVar7 != 0) {
    CUser::SendCmdErrorPacket(param_1,0x24f,0x17);
    uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    LogManager::logFormat
              (1,"localjapan/Arad_EmblemReformServer.cpp",
               "bool AvatarConvertServer::CheckCondition(CUser*, arad::SigAradAvatarConvert*)",0x2d9
               ,"AVATAR CONVERT : GetExpireDate() fail [ui_id:%d] [charac_no:%d]",
               *(undefined4 *)(this_00 + 7),uVar5);
    return false;
  }
  CItem::get_grade(this_02);
  iVar7 = ARAD::SCRIPT::AvatarConvert::getConvertResult((int)(this + 4));
  if (iVar7 == 0) {
    CUser::SendCmdErrorPacket(param_1,0x24f,0x11);
    uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    LogManager::logFormat
              (1,"localjapan/Arad_EmblemReformServer.cpp",
               "bool AvatarConvertServer::CheckCondition(CUser*, arad::SigAradAvatarConvert*)",0x2e2
               ,"AVATAR CONVERT : getConvertResult() fail [item_id:%d] [charac_no:%d]",
               *(undefined4 *)(param_2 + 4),uVar5);
    return false;
  }
  if ((*(char *)(iVar7 + 0x20) == '\x01') ||
     (uVar8 = std::
              vector<ARAD::SCRIPT::AvatarConvert::GetInfo,std::allocator<ARAD::SCRIPT::AvatarConvert::GetInfo>>
              ::size((vector<ARAD::SCRIPT::AvatarConvert::GetInfo,std::allocator<ARAD::SCRIPT::AvatarConvert::GetInfo>>
                      *)(iVar7 + 8)), uVar8 < *(ushort *)param_2)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    CUser::SendCmdErrorPacket(param_1,0x24f,0x17);
    uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    LogManager::logFormat
              (1,"localjapan/Arad_EmblemReformServer.cpp",
               "bool AvatarConvertServer::CheckCondition(CUser*, arad::SigAradAvatarConvert*)",0x2e9
               ,"AVATAR CONVERT : [isSelect:%d] [selectNo:%d] [item_id:%d] [charac_no:%d]",
               (uint)*(byte *)(iVar7 + 0x20),(uint)*(ushort *)param_2,*(undefined4 *)(param_2 + 4),
               uVar5);
  }
  return !bVar2;
}

```

---

## Convert

```asm
// === 081926de AvatarConvertServer::Convert  [0x081926de-0x81930b9] ===
 81926de:	55                   	push   %ebp
 81926df:	89 e5                	mov    %esp,%ebp
 81926e1:	57                   	push   %edi
 81926e2:	56                   	push   %esi
 81926e3:	53                   	push   %ebx
 81926e4:	81 ec 4c 01 00 00    	sub    $0x14c,%esp
 81926ea:	8b 45 10             	mov    0x10(%ebp),%eax
 81926ed:	8b 40 04             	mov    0x4(%eax),%eax
 81926f0:	89 c3                	mov    %eax,%ebx
 81926f2:	e8 a4 9a f3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81926f7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81926fb:	89 04 24             	mov    %eax,(%esp)
 81926fe:	e8 2f d3 1c 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8192703:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8192706:	83 7d b4 00          	cmpl   $0x0,-0x4c(%ebp)
 819270a:	74 19                	je     8192725 <_ZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertE+0x47>
 819270c:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 819270f:	8b 00                	mov    (%eax),%eax
 8192711:	83 c0 10             	add    $0x10,%eax
 8192714:	8b 10                	mov    (%eax),%edx
 8192716:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8192719:	89 04 24             	mov    %eax,(%esp)
 819271c:	ff d2                	call   *%edx
 819271e:	83 f0 01             	xor    $0x1,%eax
 8192721:	84 c0                	test   %al,%al
 8192723:	74 07                	je     819272c <_ZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertE+0x4e>
 8192725:	b8 01 00 00 00       	mov    $0x1,%eax
 819272a:	eb 05                	jmp    8192731 <_ZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertE+0x53>
 819272c:	b8 00 00 00 00       	mov    $0x0,%eax
 8192731:	84 c0                	test   %al,%al
 8192733:	74 27                	je     819275c <_ZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertE+0x7e>
 8192735:	8b 45 10             	mov    0x10(%ebp),%eax
 8192738:	8b 40 04             	mov    0x4(%eax),%eax
 819273b:	89 44 24 08          	mov    %eax,0x8(%esp)
 819273f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8192742:	89 44 24 04          	mov    %eax,0x4(%esp)
 8192746:	c7 04 24 76 a6 b9 08 	movl   $0x8b9a676,(%esp)
 819274d:	e8 5d 55 00 00       	call   8197caf <_ZN4ARAD11PRINT_ERROR9find_itemEPcP5CUseri>
 8192752:	bb 00 00 00 00       	mov    $0x0,%ebx
 8192757:	e9 50 09 00 00       	jmp    81930ac <_ZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertE+0x9ce>
 819275c:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 819275f:	89 04 24             	mov    %eax,(%esp)
 8192762:	e8 ed e4 f7 ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 8192767:	89 45 b8             	mov    %eax,-0x48(%ebp)
 819276a:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 819276d:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8192770:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8192773:	8b 00                	mov    (%eax),%eax
 8192775:	83 c0 0c             	add    $0xc,%eax
 8192778:	8b 10                	mov    (%eax),%edx
 819277a:	8b 45 bc             	mov    -0x44(%ebp),%eax
 819277d:	89 04 24             	mov    %eax,(%esp)
 8192780:	ff d2                	call   *%edx
 8192782:	83 f8 09             	cmp    $0x9,%eax
 8192785:	0f 94 c0             	sete   %al
 8192788:	84 c0                	test   %al,%al
 819278a:	74 07                	je     8192793 <_ZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertE+0xb5>
 819278c:	c7 45 b8 03 00 00 00 	movl   $0x3,-0x48(%ebp)
 8192793:	8b 45 10             	mov    0x10(%ebp),%eax
 8192796:	0f b7 00             	movzwl (%eax),%eax
 8192799:	0f b7 c0             	movzwl %ax,%eax
 819279c:	89 45 c0             	mov    %eax,-0x40(%ebp)
 819279f:	8b 45 08             	mov    0x8(%ebp),%eax
 81927a2:	8d 50 04             	lea    0x4(%eax),%edx
 81927a5:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81927a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81927ac:	89 14 24             	mov    %edx,(%esp)
 81927af:	e8 94 f6 71 00       	call   88b1e48 <_ZN4ARAD6SCRIPT13AvatarConvert16getConvertResultEi>
 81927b4:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 81927b7:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81927ba:	0f b6 40 20          	movzbl 0x20(%eax),%eax
 81927be:	83 f0 01             	xor    $0x1,%eax
 81927c1:	84 c0                	test   %al,%al
 81927c3:	0f 84 af 00 00 00    	je     8192878 <_ZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertE+0x19a>
 81927c9:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81927cc:	8b 40 04             	mov    0x4(%eax),%eax
 81927cf:	89 04 24             	mov    %eax,(%esp)
 81927d2:	e8 b0 f3 51 00       	call   86b1b87 <_Z12get_rand_inti>
 81927d7:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 81927dd:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81927e0:	8d 50 14             	lea    0x14(%eax),%edx
 81927e3:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 81927e9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81927ed:	89 04 24             	mov    %eax,(%esp)
 81927f0:	e8 77 ba ef ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 81927f5:	83 ec 04             	sub    $0x4,%esp
 81927f8:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81927fb:	8d 50 14             	lea    0x14(%eax),%edx
 81927fe:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8192804:	89 54 24 04          	mov    %edx,0x4(%esp)
 8192808:	89 04 24             	mov    %eax,(%esp)
 819280b:	e8 38 ba ef ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 8192810:	83 ec 04             	sub    $0x4,%esp
 8192813:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 8192819:	8d 95 48 ff ff ff    	lea    -0xb8(%ebp),%edx
 819281f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8192823:	8b 95 74 ff ff ff    	mov    -0x8c(%ebp),%edx
 8192829:	89 54 24 08          	mov    %edx,0x8(%esp)
 819282d:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 8192833:	89 54 24 04          	mov    %edx,0x4(%esp)
 8192837:	89 04 24             	mov    %eax,(%esp)
 819283a:	e8 7a c7 fe ff       	call   817efb9 <_ZSt11upper_boundIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiET_S7_S7_RKT0_>
 819283f:	83 ec 04             	sub    $0x4,%esp
 8192842:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8192845:	8d 50 14             	lea    0x14(%eax),%edx
 8192848:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 819284e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8192852:	89 04 24             	mov    %eax,(%esp)
 8192855:	e8 ee b9 ef ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 819285a:	83 ec 04             	sub    $0x4,%esp
 819285d:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8192863:	89 44 24 04          	mov    %eax,0x4(%esp)
 8192867:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 819286d:	89 04 24             	mov    %eax,(%esp)
 8192870:	e8 06 c0 ef ff       	call   808e87b <_ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_>
 8192875:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8192878:	8b 45 c0             	mov    -0x40(%ebp),%eax
 819287b:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 819287e:	83 c2 08             	add    $0x8,%edx
 8192881:	89 44 24 04          	mov    %eax,0x4(%esp)
 8192885:	89 14 24             	mov    %edx,(%esp)
 8192888:	e8 9f 0f 00 00       	call   819382c <_ZNSt6vectorIN4ARAD6SCRIPT13AvatarConvert7GetInfoESaIS3_EEixEj>
 819288d:	8b 10                	mov    (%eax),%edx
 819288f:	8b 45 10             	mov    0x10(%ebp),%eax
 8192892:	89 50 08             	mov    %edx,0x8(%eax)
 8192895:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8192898:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 819289b:	83 c2 08             	add    $0x8,%edx
 819289e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81928a2:	89 14 24             	mov    %edx,(%esp)
 81928a5:	e8 82 0f 00 00       	call   819382c <_ZNSt6vectorIN4ARAD6SCRIPT13AvatarConvert7GetInfoESaIS3_EEixEj>
 81928aa:	0f b7 50 04          	movzwl 0x4(%eax),%edx
 81928ae:	8b 45 10             	mov    0x10(%ebp),%eax
 81928b1:	66 89 50 0c          	mov    %dx,0xc(%eax)
 81928b5:	8b 45 10             	mov    0x10(%ebp),%eax
 81928b8:	8b 40 08             	mov    0x8(%eax),%eax
 81928bb:	89 c3                	mov    %eax,%ebx
 81928bd:	e8 d9 98 f3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81928c2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81928c6:	89 04 24             	mov    %eax,(%esp)
 81928c9:	e8 64 d1 1c 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81928ce:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81928d1:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 81928d5:	75 42                	jne    8192919 <_ZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertE+0x23b>
 81928d7:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 81928de:	00 
 81928df:	c7 44 24 04 4f 02 00 	movl   $0x24f,0x4(%esp)
 81928e6:	00 
 81928e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81928ea:	89 04 24             	mov    %eax,(%esp)
 81928ed:	e8 50 96 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81928f2:	8b 45 10             	mov    0x10(%ebp),%eax
 81928f5:	8b 40 04             	mov    0x4(%eax),%eax
 81928f8:	89 44 24 08          	mov    %eax,0x8(%esp)
 81928fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81928ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8192903:	c7 04 24 76 a6 b9 08 	movl   $0x8b9a676,(%esp)
 819290a:	e8 a0 53 00 00       	call   8197caf <_ZN4ARAD11PRINT_ERROR9find_itemEPcP5CUseri>
 819290f:	bb 00 00 00 00       	mov    $0x0,%ebx
 8192914:	e9 93 07 00 00       	jmp    81930ac <_ZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertE+0x9ce>
 8192919:	8d 85 07 ff ff ff    	lea    -0xf9(%ebp),%eax
 819291f:	89 04 24             	mov    %eax,(%esp)
 8192922:	e8 2d 8f f3 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8192927:	8b 45 10             	mov    0x10(%ebp),%eax
 819292a:	8b 40 08             	mov    0x8(%eax),%eax
 819292d:	89 85 09 ff ff ff    	mov    %eax,-0xf7(%ebp)
 8192933:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8192936:	89 04 24             	mov    %eax,(%esp)
 8192939:	e8 bc e9 f5 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 819293e:	84 c0                	test   %al,%al
 8192940:	0f 84 ea 00 00 00    	je     8192a30 <_ZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertE+0x352>
 8192946:	8b 45 10             	mov    0x10(%ebp),%eax
 8192949:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 819294d:	98                   	cwtl
 819294e:	89 85 0e ff ff ff    	mov    %eax,-0xf2(%ebp)
 8192954:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8192957:	8b 00                	mov    (%eax),%eax
 8192959:	83 c0 08             	add    $0x8,%eax
 819295c:	8b 10                	mov    (%eax),%edx
 819295e:	8d 85 07 ff ff ff    	lea    -0xf9(%ebp),%eax
 8192964:	89 44 24 04          	mov    %eax,0x4(%esp)
 8192968:	8b 45 c8             	mov    -0x38(%ebp),%eax
 819296b:	89 04 24             	mov    %eax,(%esp)
 819296e:	ff d2                	call   *%edx
 8192970:	8b 45 0c             	mov    0xc(%ebp),%eax
 8192973:	89 04 24             	mov    %eax,(%esp)
 8192976:	e8 13 79 f4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 819297b:	8b 95 07 ff ff ff    	mov    -0xf9(%ebp),%edx
 8192981:	89 54 24 04          	mov    %edx,0x4(%esp)
 8192985:	8b 95 0b ff ff ff    	mov    -0xf5(%ebp),%edx
 819298b:	89 54 24 08          	mov    %edx,0x8(%esp)
 819298f:	8b 95 0f ff ff ff    	mov    -0xf1(%ebp),%edx
 8192995:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8192999:	8b 95 13 ff ff ff    	mov    -0xed(%ebp),%edx
 819299f:	89 54 24 10          	mov    %edx,0x10(%esp)
 81929a3:	8b 95 17 ff ff ff    	mov    -0xe9(%ebp),%edx
 81929a9:	89 54 24 14          	mov    %edx,0x14(%esp)
 81929ad:	8b 95 1b ff ff ff    	mov    -0xe5(%ebp),%edx
 81929b3:	89 54 24 18          	mov    %edx,0x18(%esp)
 81929b7:	8b 95 1f ff ff ff    	mov    -0xe1(%ebp),%edx
 81929bd:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 81929c1:	8b 95 23 ff ff ff    	mov    -0xdd(%ebp),%edx
 81929c7:	89 54 24 20          	mov    %edx,0x20(%esp)
 81929cb:	8b 95 27 ff ff ff    	mov    -0xd9(%ebp),%edx
 81929d1:	89 54 24 24          	mov    %edx,0x24(%esp)
 81929d5:	8b 95 2b ff ff ff    	mov    -0xd5(%ebp),%edx
 81929db:	89 54 24 28          	mov    %edx,0x28(%esp)
 81929df:	8b 95 2f ff ff ff    	mov    -0xd1(%ebp),%edx
 81929e5:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 81929e9:	8b 95 33 ff ff ff    	mov    -0xcd(%ebp),%edx
 81929ef:	89 54 24 30          	mov    %edx,0x30(%esp)
 81929f3:	8b 95 37 ff ff ff    	mov    -0xc9(%ebp),%edx
 81929f9:	89 54 24 34          	mov    %edx,0x34(%esp)
 81929fd:	8b 95 3b ff ff ff    	mov    -0xc5(%ebp),%edx
 8192a03:	89 54 24 38          	mov    %edx,0x38(%esp)
 8192a07:	8b 95 3f ff ff ff    	mov    -0xc1(%ebp),%edx
 8192a0d:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 8192a11:	0f b6 95 43 ff ff ff 	movzbl -0xbd(%ebp),%edx
 8192a18:	88 54 24 40          	mov    %dl,0x40(%esp)
 8192a1c:	89 04 24             	mov    %eax,(%esp)
 8192a1f:	e8 a6 f4 36 00       	call   8501eca <_ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item>
 8192a24:	c1 e8 1f             	shr    $0x1f,%eax
 8192a27:	84 c0                	test   %al,%al
 8192a29:	75 6f                	jne    8192a9a <_ZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertE+0x3bc>
 8192a2b:	e9 d4 00 00 00       	jmp    8192b04 <_ZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertE+0x426>
 8192a30:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 8192a37:	00 
 8192a38:	c7 44 24 04 4f 02 00 	movl   $0x24f,0x4(%esp)
 8192a3f:	00 
 8192a40:	8b 45 0c             	mov    0xc(%ebp),%eax
 8192a43:	89 04 24             	mov    %eax,(%esp)
 8192a46:	e8 f7 94 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8192a4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8192a4e:	89 04 24             	mov    %eax,(%esp)
 8192a51:	e8 f8 91 f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8192a56:	8b 55 10             	mov    0x10(%ebp),%edx
 8192a59:	8b 52 08             	mov    0x8(%edx),%edx
 8192a5c:	89 44 24 18          	mov    %eax,0x18(%esp)
 8192a60:	89 54 24 14          	mov    %edx,0x14(%esp)
 8192a64:	c7 44 24 10 40 a8 b9 	movl   $0x8b9a840,0x10(%esp)
 8192a6b:	08 
 8192a6c:	c7 44 24 0c 22 03 00 	movl   $0x322,0xc(%esp)
 8192a73:	00 
 8192a74:	c7 44 24 08 00 b6 b9 	movl   $0x8b9b600,0x8(%esp)
 8192a7b:	08 
 8192a7c:	c7 44 24 04 c4 a3 b9 	movl   $0x8b9a3c4,0x4(%esp)
 8192a83:	08 
 8192a84:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8192a8b:	e8 7a 11 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8192a90:	bb 00 00 00 00       	mov    $0x0,%ebx
 8192a95:	e9 12 06 00 00       	jmp    81930ac <_ZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertE+0x9ce>
 8192a9a:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 8192aa1:	00 
 8192aa2:	c7 44 24 04 4f 02 00 	movl   $0x24f,0x4(%esp)
 8192aa9:	00 
 8192aaa:	8b 45 0c             	mov    0xc(%ebp),%eax
 8192aad:	89 04 24             	mov    %eax,(%esp)
 8192ab0:	e8 8d 94 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8192ab5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8192ab8:	89 04 24             	mov    %eax,(%esp)
 8192abb:	e8 8e 91 f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8192ac0:	8b 55 10             	mov    0x10(%ebp),%edx
 8192ac3:	8b 52 08             	mov    0x8(%edx),%edx
 8192ac6:	89 44 24 18          	mov    %eax,0x18(%esp)
 8192aca:	89 54 24 14          	mov    %edx,0x14(%esp)
 8192ace:	c7 44 24 10 84 a8 b9 	movl   $0x8b9a884,0x10(%esp)
 8192ad5:	08 
 8192ad6:	c7 44 24 0c 29 03 00 	movl   $0x329,0xc(%esp)
 8192add:	00 
 8192ade:	c7 44 24 08 00 b6 b9 	movl   $0x8b9b600,0x8(%esp)
 8192ae5:	08 
 8192ae6:	c7 44 24 04 c4 a3 b9 	movl   $0x8b9a3c4,0x4(%esp)
 8192aed:	08 
 8192aee:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8192af5:	e8 10 11 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8192afa:	bb 00 00 00 00       	mov    $0x0,%ebx
 8192aff:	e9 a8 05 00 00       	jmp    81930ac <_ZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertE+0x9ce>
 8192b04:	8b 45 10             	mov    0x10(%ebp),%eax
 8192b07:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8192b0b:	0f b7 d8             	movzwl %ax,%ebx
 8192b0e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8192b11:	89 04 24             	mov    %eax,(%esp)
 8192b14:	e8 65 77 f4 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8192b19:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8192b1d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8192b24:	00 
 8192b25:	89 04 24             	mov    %eax,(%esp)
 8192b28:	e8 b1 96 36 00       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 8192b2d:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8192b30:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8192b33:	8b 40 07             	mov    0x7(%eax),%eax
 8192b36:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8192b39:	8b 45 10             	mov    0x10(%ebp),%eax
 8192b3c:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8192b40:	0f b7 d8             	movzwl %ax,%ebx
 8192b43:	8b 45 0c             	mov    0xc(%ebp),%eax
 8192b46:	89 04 24             	mov    %eax,(%esp)
 8192b49:	e8 40 77 f4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8192b4e:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8192b55:	00 
 8192b56:	c7 44 24 10 06 00 00 	movl   $0x6,0x10(%esp)
 8192b5d:	00 
 8192b5e:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8192b65:	00 
 8192b66:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8192b6a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8192b71:	00 
 8192b72:	89 04 24             	mov    %eax,(%esp)
 8192b75:	e8 92 14 37 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 8192b7a:	83 f0 01             	xor    $0x1,%eax
 8192b7d:	84 c0                	test   %al,%al
 8192b7f:	74 46                	je     8192bc7 <_ZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertE+0x4e9>
 8192b81:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 8192b88:	00 
 8192b89:	c7 44 24 04 4f 02 00 	movl   $0x24f,0x4(%esp)
 8192b90:	00 
 8192b91:	8b 45 0c             	mov    0xc(%ebp),%eax
 8192b94:	89 04 24             	mov    %eax,(%esp)
 8192b97:	e8 a6 93 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8192b9c:	8b 45 10             	mov    0x10(%ebp),%eax
 8192b9f:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8192ba3:	0f b7 c0             	movzwl %ax,%eax
 8192ba6:	89 44 24 08          	mov    %eax,0x8(%esp)
 8192baa:	8b 45 0c             	mov    0xc(%ebp),%eax
 8192bad:	89 44 24 04          	mov    %eax,0x4(%esp)
 8192bb1:	c7 04 24 76 a6 b9 08 	movl   $0x8b9a676,(%esp)
 8192bb8:	e8 99 50 00 00       	call   8197c56 <_ZN4ARAD11PRINT_ERROR11delete_itemEPcP5CUsert>
 8192bbd:	bb 00 00 00 00       	mov    $0x0,%ebx
 8192bc2:	e9 e5 04 00 00       	jmp    81930ac <_ZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertE+0x9ce>
 8192bc7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8192bca:	89 04 24             	mov    %eax,(%esp)
 8192bcd:	e8 bc 76 f4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8192bd2:	89 04 24             	mov    %eax,(%esp)
 8192bd5:	e8 92 e0 f7 ff       	call   8110c6c <_ZN10CInventory17GetAvatarItemMgrWEv>
 8192bda:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8192bdd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8192be1:	89 04 24             	mov    %eax,(%esp)
 8192be4:	e8 19 68 16 00       	call   82f9402 <_ZN8WongWork14CAvatarItemMgr12UnRegistItemEi>
 8192be9:	83 f0 01             	xor    $0x1,%eax
 8192bec:	84 c0                	test   %al,%al
 8192bee:	74 67                	je     8192c57 <_ZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertE+0x579>
 8192bf0:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 8192bf7:	00 
 8192bf8:	c7 44 24 04 4f 02 00 	movl   $0x24f,0x4(%esp)
 8192bff:	00 
 8192c00:	8b 45 0c             	mov    0xc(%ebp),%eax
 8192c03:	89 04 24             	mov    %eax,(%esp)
 8192c06:	e8 37 93 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8192c0b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8192c0e:	89 04 24             	mov    %eax,(%esp)
 8192c11:	e8 38 90 f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8192c16:	89 44 24 18          	mov    %eax,0x18(%esp)
 8192c1a:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8192c1d:	89 44 24 14          	mov    %eax,0x14(%esp)
 8192c21:	c7 44 24 10 d4 a8 b9 	movl   $0x8b9a8d4,0x10(%esp)
 8192c28:	08 
 8192c29:	c7 44 24 0c 3c 03 00 	movl   $0x33c,0xc(%esp)
 8192c30:	00 
 8192c31:	c7 44 24 08 00 b6 b9 	movl   $0x8b9b600,0x8(%esp)
 8192c38:	08 
 8192c39:	c7 44 24 04 c4 a3 b9 	movl   $0x8b9a3c4,0x4(%esp)
 8192c40:	08 
 8192c41:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8192c48:	e8 bd 0f 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8192c4d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8192c52:	e9 55 04 00 00       	jmp    81930ac <_ZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertE+0x9ce>
 8192c57:	8b 45 10             	mov    0x10(%ebp),%eax
 8192c5a:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8192c5e:	0f b7 c0             	movzwl %ax,%eax
 8192c61:	8d 58 0a             	lea    0xa(%eax),%ebx
 8192c64:	8b 45 0c             	mov    0xc(%ebp),%eax
 8192c67:	89 04 24             	mov    %eax,(%esp)
 8192c6a:	e8 1f 76 f4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8192c6f:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8192c76:	00 
 8192c77:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8192c7b:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8192c82:	00 
 8192c83:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8192c86:	89 54 24 08          	mov    %edx,0x8(%esp)
 8192c8a:	c7 44 24 04 36 00 00 	movl   $0x36,0x4(%esp)
 8192c91:	00 
 8192c92:	89 04 24             	mov    %eax,(%esp)
 8192c95:	e8 94 5f 37 00       	call   8508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>
 8192c9a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8192c9d:	89 04 24             	mov    %eax,(%esp)
 8192ca0:	e8 a9 8f f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8192ca5:	c7 44 24 08 13 a9 b9 	movl   $0x8b9a913,0x8(%esp)
 8192cac:	08 
 8192cad:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8192cb0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8192cb4:	89 04 24             	mov    %eax,(%esp)
 8192cb7:	e8 ae 26 2b 00       	call   844536a <_ZN22DB_UpdateAvatarHistory11makeRequestEjiPc>
 8192cbc:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8192cc2:	89 04 24             	mov    %eax,(%esp)
 8192cc5:	e8 0c 1d fa ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 8192cca:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8192cd0:	89 04 24             	mov    %eax,(%esp)
 8192cd3:	e8 d4 b4 ef ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 8192cd8:	8b 45 10             	mov    0x10(%ebp),%eax
 8192cdb:	8d 48 0c             	lea    0xc(%eax),%ecx
 8192cde:	8b 45 10             	mov    0x10(%ebp),%eax
 8192ce1:	8d 50 08             	lea    0x8(%eax),%edx
 8192ce4:	8d 45 88             	lea    -0x78(%ebp),%eax
 8192ce7:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8192ceb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8192cef:	89 04 24             	mov    %eax,(%esp)
 8192cf2:	e8 47 0b 00 00       	call   819383e <_ZSt9make_pairIRmRsESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 8192cf7:	83 ec 04             	sub    $0x4,%esp
 8192cfa:	8d 45 88             	lea    -0x78(%ebp),%eax
 8192cfd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8192d01:	8d 45 80             	lea    -0x80(%ebp),%eax
 8192d04:	89 04 24             	mov    %eax,(%esp)
 8192d07:	e8 70 0b 00 00       	call   819387c <_ZNSt4pairIiiEC1ImsEEOS_IT_T0_E>
 8192d0c:	8d 45 80             	lea    -0x80(%ebp),%eax
 8192d0f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8192d13:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8192d19:	89 04 24             	mov    %eax,(%esp)
 8192d1c:	e8 e5 a8 f4 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 8192d21:	8b 45 0c             	mov    0xc(%ebp),%eax
 8192d24:	89 04 24             	mov    %eax,(%esp)
 8192d27:	e8 62 75 f4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8192d2c:	c7 44 24 1c 13 a9 b9 	movl   $0x8b9a913,0x1c(%esp)
 8192d33:	08 
 8192d34:	c7 44 24 18 13 a9 b9 	movl   $0x8b9a913,0x18(%esp)
 8192d3b:	08 
 8192d3c:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8192d43:	00 
 8192d44:	c7 44 24 10 0a 00 00 	movl   $0xa,0x10(%esp)
 8192d4b:	00 
 8192d4c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8192d53:	00 
 8192d54:	8d 95 5c ff ff ff    	lea    -0xa4(%ebp),%edx
 8192d5a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8192d5e:	8d 95 68 ff ff ff    	lea    -0x98(%ebp),%edx
 8192d64:	89 54 24 04          	mov    %edx,0x4(%esp)
 8192d68:	89 04 24             	mov    %eax,(%esp)
 8192d6b:	e8 42 3e 37 00       	call   8506bb2 <_ZN10CInventory18insert_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEE15eMoneyAddReason14eItemAddReasonbPKcSD_>
 8192d70:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8192d73:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 8192d79:	89 04 24             	mov    %eax,(%esp)
 8192d7c:	e8 cb af 3f 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8192d81:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 8192d87:	89 04 24             	mov    %eax,(%esp)
 8192d8a:	e8 57 8b f3 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8192d8f:	c7 44 24 08 4f 02 00 	movl   $0x24f,0x8(%esp)
 8192d96:	00 
 8192d97:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8192d9e:	00 
 8192d9f:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 8192da5:	89 04 24             	mov    %eax,(%esp)
 8192da8:	e8 4f 8b f3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8192dad:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8192db4:	00 
 8192db5:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 8192dbb:	89 04 24             	mov    %eax,(%esp)
 8192dbe:	e8 5d 8b f3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8192dc3:	8b 45 10             	mov    0x10(%ebp),%eax
 8192dc6:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8192dca:	0f b7 c0             	movzwl %ax,%eax
 8192dcd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8192dd1:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 8192dd7:	89 04 24             	mov    %eax,(%esp)
 8192dda:	e8 c5 70 f4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8192ddf:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8192de2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8192de6:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 8192dec:	89 04 24             	mov    %eax,(%esp)
 8192def:	e8 b0 70 f4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8192df4:	8d 45 90             	lea    -0x70(%ebp),%eax
 8192df7:	8d 95 5c ff ff ff    	lea    -0xa4(%ebp),%edx
 8192dfd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8192e01:	89 04 24             	mov    %eax,(%esp)
 8192e04:	e8 3f b4 ef ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 8192e09:	83 ec 04             	sub    $0x4,%esp
 8192e0c:	8d 45 90             	lea    -0x70(%ebp),%eax
 8192e0f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8192e13:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 8192e19:	89 04 24             	mov    %eax,(%esp)
 8192e1c:	e8 cb 6b f6 ff       	call   80f99ec <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1IPiEERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameIS9_S8_E7__valueES5_E6__typeEEE>
 8192e21:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8192e28:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8192e2f:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8192e36:	e9 41 01 00 00       	jmp    8192f7c <_ZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertE+0x89e>
 8192e3b:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 8192e41:	89 04 24             	mov    %eax,(%esp)
 8192e44:	e8 d3 6b f6 ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 8192e49:	8b 00                	mov    (%eax),%eax
 8192e4b:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8192e4e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8192e51:	89 44 24 04          	mov    %eax,0x4(%esp)
 8192e55:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 8192e5b:	89 04 24             	mov    %eax,(%esp)
 8192e5e:	e8 41 70 f4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8192e63:	8d 45 98             	lea    -0x68(%ebp),%eax
 8192e66:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8192e6d:	00 
 8192e6e:	8d 95 4c ff ff ff    	lea    -0xb4(%ebp),%edx
 8192e74:	89 54 24 04          	mov    %edx,0x4(%esp)
 8192e78:	89 04 24             	mov    %eax,(%esp)
 8192e7b:	e8 32 0a 00 00       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 8192e80:	83 ec 04             	sub    $0x4,%esp
 8192e83:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 8192e89:	89 04 24             	mov    %eax,(%esp)
 8192e8c:	e8 8b 6b f6 ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 8192e91:	8b 00                	mov    (%eax),%eax
 8192e93:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8192e96:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8192e99:	89 44 24 04          	mov    %eax,0x4(%esp)
 8192e9d:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 8192ea3:	89 04 24             	mov    %eax,(%esp)
 8192ea6:	e8 91 8a f3 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8192eab:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8192eae:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8192eb5:	00 
 8192eb6:	8d 95 4c ff ff ff    	lea    -0xb4(%ebp),%edx
 8192ebc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8192ec0:	89 04 24             	mov    %eax,(%esp)
 8192ec3:	e8 ea 09 00 00       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 8192ec8:	83 ec 04             	sub    $0x4,%esp
 8192ecb:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 8192ed1:	89 04 24             	mov    %eax,(%esp)
 8192ed4:	e8 43 6b f6 ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 8192ed9:	8b 00                	mov    (%eax),%eax
 8192edb:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8192ede:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8192ee1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8192ee5:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 8192eeb:	89 04 24             	mov    %eax,(%esp)
 8192eee:	e8 49 8a f3 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8192ef3:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8192ef6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8192efd:	00 
 8192efe:	8d 95 4c ff ff ff    	lea    -0xb4(%ebp),%edx
 8192f04:	89 54 24 04          	mov    %edx,0x4(%esp)
 8192f08:	89 04 24             	mov    %eax,(%esp)
 8192f0b:	e8 a2 09 00 00       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 8192f10:	83 ec 04             	sub    $0x4,%esp
 8192f13:	8b 45 0c             	mov    0xc(%ebp),%eax
 8192f16:	89 04 24             	mov    %eax,(%esp)
 8192f19:	e8 30 8d f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8192f1e:	89 c3                	mov    %eax,%ebx
 8192f20:	8b 45 10             	mov    0x10(%ebp),%eax
 8192f23:	0f b7 00             	movzwl (%eax),%eax
 8192f26:	0f b7 f8             	movzwl %ax,%edi
 8192f29:	8b 45 10             	mov    0x10(%ebp),%eax
 8192f2c:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8192f30:	0f b7 f0             	movzwl %ax,%esi
 8192f33:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8192f3a:	00 
 8192f3b:	c7 44 24 08 68 03 00 	movl   $0x368,0x8(%esp)
 8192f42:	00 
 8192f43:	c7 44 24 04 00 b6 b9 	movl   $0x8b9b600,0x4(%esp)
 8192f4a:	08 
 8192f4b:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8192f4e:	89 04 24             	mov    %eax,(%esp)
 8192f51:	e8 c2 c7 3b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8192f56:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8192f5a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8192f5d:	89 44 24 10          	mov    %eax,0x10(%esp)
 8192f61:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8192f65:	89 74 24 08          	mov    %esi,0x8(%esp)
 8192f69:	c7 44 24 04 14 a9 b9 	movl   $0x8b9a914,0x4(%esp)
 8192f70:	08 
 8192f71:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8192f74:	89 04 24             	mov    %eax,(%esp)
 8192f77:	e8 0c c8 3b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8192f7c:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8192f7f:	8d 95 5c ff ff ff    	lea    -0xa4(%ebp),%edx
 8192f85:	89 54 24 04          	mov    %edx,0x4(%esp)
 8192f89:	89 04 24             	mov    %eax,(%esp)
 8192f8c:	e8 db b2 ef ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 8192f91:	83 ec 04             	sub    $0x4,%esp
 8192f94:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8192f97:	89 44 24 04          	mov    %eax,0x4(%esp)
 8192f9b:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 8192fa1:	89 04 24             	mov    %eax,(%esp)
 8192fa4:	e8 7f 04 00 00       	call   8193428 <_ZN9__gnu_cxxneIPKiPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T1_EERKNS7_IT0_S9_EE>
 8192fa9:	84 c0                	test   %al,%al
 8192fab:	0f 85 8a fe ff ff    	jne    8192e3b <_ZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertE+0x75d>
 8192fb1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8192fb8:	00 
 8192fb9:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 8192fbf:	89 04 24             	mov    %eax,(%esp)
 8192fc2:	e8 91 89 f3 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8192fc7:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 8192fcd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8192fd1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8192fd4:	89 04 24             	mov    %eax,(%esp)
 8192fd7:	e8 de 55 4b 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8192fdc:	8b 45 10             	mov    0x10(%ebp),%eax
 8192fdf:	8b 40 08             	mov    0x8(%eax),%eax
 8192fe2:	89 c3                	mov    %eax,%ebx
 8192fe4:	e8 b9 05 00 00       	call   81935a2 <_ZN4ARAD9SingletonI20AvatarRechargeServerE3GetEv>
 8192fe9:	83 c0 04             	add    $0x4,%eax
 8192fec:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8192ff0:	89 04 24             	mov    %eax,(%esp)
 8192ff3:	e8 ae e3 71 00       	call   88b13a6 <_ZN4ARAD6SCRIPT14AvatarRecharge21IsEmblemRechargeStoneEi>
 8192ff8:	84 c0                	test   %al,%al
 8192ffa:	74 07                	je     8193003 <_ZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertE+0x925>
 8192ffc:	b8 01 00 00 00       	mov    $0x1,%eax
 8193001:	eb 05                	jmp    8193008 <_ZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertE+0x92a>
 8193003:	b8 00 00 00 00       	mov    $0x0,%eax
 8193008:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 819300b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 819300e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8193012:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8193015:	89 04 24             	mov    %eax,(%esp)
 8193018:	e8 19 01 00 00       	call   8193136 <_ZN19AvatarConvertServer24StatisticsAvatarDisjointEPK5CItemi>
 819301d:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8193023:	89 04 24             	mov    %eax,(%esp)
 8193026:	e8 b1 01 00 00       	call   81931dc <_ZN19AvatarConvertServer22StatisticsEmblemCreateERKSt6vectorISt4pairIiiESaIS2_EE>
 819302b:	bb 01 00 00 00       	mov    $0x1,%ebx
 8193030:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 8193036:	89 04 24             	mov    %eax,(%esp)
 8193039:	e8 42 ae 3f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 819303e:	eb 30                	jmp    8193070 <_ZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertE+0x992>
 8193040:	89 d3                	mov    %edx,%ebx
 8193042:	89 c6                	mov    %eax,%esi
 8193044:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 819304a:	89 04 24             	mov    %eax,(%esp)
 819304d:	e8 2e ae 3f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8193052:	89 f0                	mov    %esi,%eax
 8193054:	89 da                	mov    %ebx,%edx
 8193056:	eb 00                	jmp    8193058 <_ZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertE+0x97a>
 8193058:	89 d3                	mov    %edx,%ebx
 819305a:	89 c6                	mov    %eax,%esi
 819305c:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8193062:	89 04 24             	mov    %eax,(%esp)
 8193065:	e8 70 0d ef ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 819306a:	89 f0                	mov    %esi,%eax
 819306c:	89 da                	mov    %ebx,%edx
 819306e:	eb 10                	jmp    8193080 <_ZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertE+0x9a2>
 8193070:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8193076:	89 04 24             	mov    %eax,(%esp)
 8193079:	e8 5c 0d ef ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 819307e:	eb 1e                	jmp    819309e <_ZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertE+0x9c0>
 8193080:	89 d3                	mov    %edx,%ebx
 8193082:	89 c6                	mov    %eax,%esi
 8193084:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 819308a:	89 04 24             	mov    %eax,(%esp)
 819308d:	e8 58 19 fa ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8193092:	89 f0                	mov    %esi,%eax
 8193094:	89 da                	mov    %ebx,%edx
 8193096:	89 04 24             	mov    %eax,(%esp)
 8193099:	e8 b2 06 95 00       	call   8ae3750 <_Unwind_Resume>
 819309e:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 81930a4:	89 04 24             	mov    %eax,(%esp)
 81930a7:	e8 3e 19 fa ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 81930ac:	89 d8                	mov    %ebx,%eax
 81930ae:	8d 65 f4             	lea    -0xc(%ebp),%esp
 81930b1:	83 c4 00             	add    $0x0,%esp
 81930b4:	5b                   	pop    %ebx
 81930b5:	5e                   	pop    %esi
 81930b6:	5f                   	pop    %edi
 81930b7:	5d                   	pop    %ebp
 81930b8:	c3                   	ret
 81930b9:	90                   	nop

```

```c
// AvatarConvertServer::Convert @ 0x81926de

/* AvatarConvertServer::Convert(CUser*, arad::SigAradAvatarConvert*) */

undefined4 __thiscall
AvatarConvertServer::Convert(AvatarConvertServer *this,CUser *param_1,SigAradAvatarConvert *param_2)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  CDataManager *this_00;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 uVar11;
  uint *puVar12;
  undefined2 local_fd;
  undefined2 uStack_fb;
  undefined2 uStack_f9;
  undefined1 uStack_f7;
  int iStack_f6;
  undefined1 uStack_f2;
  uint local_f1;
  uint local_ed;
  uint local_e9;
  uint local_e5;
  uint local_e1;
  uint local_dd;
  uint local_d9;
  uint local_d5;
  uint local_d1;
  uint local_cd;
  uint local_c9;
  uint local_c5;
  undefined1 local_c1;
  __normal_iterator local_c0 [4];
  undefined4 local_bc;
  undefined1 local_b8 [4];
  undefined1 local_b4 [12];
  undefined1 local_a8 [12];
  undefined1 local_9c [20];
  __normal_iterator local_88 [4];
  undefined1 local_84 [8];
  undefined1 local_7c [8];
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_60 [16];
  CItem *local_50;
  undefined4 local_4c;
  CItem *local_48;
  uint local_44;
  int local_40;
  int *local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  
  puVar12 = (uint *)&stack0xfffffea4;
  iVar6 = *(int *)(param_2 + 4);
  this_00 = (CDataManager *)G_CDataManager();
  local_50 = (CItem *)CDataManager::find_item(this_00,iVar6);
  if ((local_50 == (CItem *)0x0) ||
     (cVar4 = (**(code **)(*(int *)local_50 + 0x10))(), cVar4 != '\x01')) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    ARAD::PRINT_ERROR::find_item("AVATAR CONVERT",param_1,*(int *)(param_2 + 4));
    uVar11 = 0;
  }
  else {
    local_4c = CItem::get_grade(local_50);
    local_48 = local_50;
    iVar6 = (**(code **)(*(int *)local_50 + 0xc))();
    if (iVar6 == 9) {
      local_4c = 3;
    }
    local_44 = (uint)*(ushort *)param_2;
    local_40 = ARAD::SCRIPT::AvatarConvert::getConvertResult((int)(this + 4));
    if (*(char *)(local_40 + 0x20) != '\x01') {
      local_bc = get_rand_int(*(int *)(local_40 + 4));
      std::vector<int,std::allocator<int>>::end();
      std::vector<int,std::allocator<int>>::begin();
      std::upper_bound<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                ();
      std::vector<int,std::allocator<int>>::begin();
      puVar12 = (uint *)&stack0xfffffea0;
      local_44 = __gnu_cxx::operator-(local_c0,local_88);
    }
    puVar12[1] = local_44;
    *puVar12 = local_40 + 8;
    puVar12[-1] = 0x819288d;
    puVar7 = (undefined4 *)
             std::
             vector<ARAD::SCRIPT::AvatarConvert::GetInfo,std::allocator<ARAD::SCRIPT::AvatarConvert::GetInfo>>
             ::operator[]((vector<ARAD::SCRIPT::AvatarConvert::GetInfo,std::allocator<ARAD::SCRIPT::AvatarConvert::GetInfo>>
                           *)*puVar12,puVar12[1]);
    *(undefined4 *)(param_2 + 8) = *puVar7;
    puVar12[1] = local_44;
    *puVar12 = local_40 + 8;
    puVar12[-1] = 0x81928aa;
    iVar6 = std::
            vector<ARAD::SCRIPT::AvatarConvert::GetInfo,std::allocator<ARAD::SCRIPT::AvatarConvert::GetInfo>>
            ::operator[]((vector<ARAD::SCRIPT::AvatarConvert::GetInfo,std::allocator<ARAD::SCRIPT::AvatarConvert::GetInfo>>
                          *)*puVar12,puVar12[1]);
    *(undefined2 *)(param_2 + 0xc) = *(undefined2 *)(iVar6 + 4);
    uVar9 = *(uint *)(param_2 + 8);
    puVar12[-1] = 0x81928c2;
    uVar11 = G_CDataManager();
    puVar12[1] = uVar9;
    *puVar12 = uVar11;
    puVar12[-1] = 0x81928ce;
    local_3c = (int *)CDataManager::find_item((CDataManager *)*puVar12,puVar12[1]);
    if (local_3c == (int *)0x0) {
      puVar12[2] = 0x11;
      puVar12[1] = 0x24f;
      *puVar12 = (uint)param_1;
      puVar12[-1] = 0x81928f2;
      CUser::SendCmdErrorPacket();
      puVar12[2] = *(uint *)(param_2 + 4);
      puVar12[1] = (uint)param_1;
      *puVar12 = (uint)"AVATAR CONVERT";
      puVar12[-1] = 0x819290f;
      ARAD::PRINT_ERROR::find_item((char *)*puVar12,(CUser *)puVar12[1],puVar12[2]);
      uVar11 = 0;
    }
    else {
      *puVar12 = (uint)&local_fd;
      puVar12[-1] = 0x8192927;
      Inven_Item::Inven_Item((Inven_Item *)*puVar12);
      uStack_fb = (undefined2)*(undefined4 *)(param_2 + 8);
      uStack_f9 = (undefined2)((uint)*(undefined4 *)(param_2 + 8) >> 0x10);
      *puVar12 = (uint)local_3c;
      puVar12[-1] = 0x819293e;
      cVar4 = CItem::is_stackable((CItem *)*puVar12);
      if (cVar4 == '\0') {
        puVar12[2] = 0x11;
        puVar12[1] = 0x24f;
        *puVar12 = (uint)param_1;
        puVar12[-1] = 0x8192a4b;
        CUser::SendCmdErrorPacket();
        *puVar12 = (uint)param_1;
        puVar12[-1] = 0x8192a56;
        uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)*puVar12);
        uVar9 = *(uint *)(param_2 + 8);
        puVar12[6] = uVar8;
        puVar12[5] = uVar9;
        puVar12[4] = (uint)"AVATAR CONVERT : is_stackable() fail [item_id:%d] [charac_no:%d]";
        puVar12[3] = 0x322;
        puVar12[2] = (uint)"bool AvatarConvertServer::Convert(CUser*, arad::SigAradAvatarConvert*)";
        puVar12[1] = (uint)"localjapan/Arad_EmblemReformServer.cpp";
        *puVar12 = 1;
        puVar12[-1] = 0x8192a90;
        LogManager::logFormat
                  (*puVar12,(char *)puVar12[1],(char *)puVar12[2],puVar12[3],(char *)puVar12[4]);
        uVar11 = 0;
      }
      else {
        iStack_f6 = (int)*(short *)(param_2 + 0xc);
        pcVar3 = *(code **)(*local_3c + 8);
        puVar12[1] = (uint)&local_fd;
        *puVar12 = (uint)local_3c;
        puVar12[-1] = 0x8192970;
        (*pcVar3)();
        *puVar12 = (uint)param_1;
        puVar12[-1] = 0x819297b;
        uVar11 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)*puVar12);
        puVar12[1] = CONCAT22(uStack_fb,local_fd);
        puVar12[2] = CONCAT13((undefined1)iStack_f6,CONCAT12(uStack_f7,uStack_f9));
        puVar12[3] = CONCAT13(uStack_f2,iStack_f6._1_3_);
        puVar12[4] = local_f1;
        puVar12[5] = local_ed;
        puVar12[6] = local_e9;
        puVar12[7] = local_e5;
        puVar12[8] = local_e1;
        puVar12[9] = local_dd;
        puVar12[10] = local_d9;
        puVar12[0xb] = local_d5;
        puVar12[0xc] = local_d1;
        puVar12[0xd] = local_cd;
        puVar12[0xe] = local_c9;
        puVar12[0xf] = local_c5;
        *(undefined1 *)(puVar12 + 0x10) = local_c1;
        *puVar12 = uVar11;
        puVar12[-1] = 0x8192a24;
        iVar6 = CInventory::tryInsertItemIntoInventory();
        if (iVar6 < 0) {
          puVar12[2] = 4;
          puVar12[1] = 0x24f;
          *puVar12 = (uint)param_1;
          puVar12[-1] = 0x8192ab5;
          CUser::SendCmdErrorPacket();
          *puVar12 = (uint)param_1;
          puVar12[-1] = 0x8192ac0;
          uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)*puVar12);
          uVar9 = *(uint *)(param_2 + 8);
          puVar12[6] = uVar8;
          puVar12[5] = uVar9;
          puVar12[4] = (uint)
                       "AVATAR CONVERT : tryInsertItemIntoInventory() fail [item_id:%d] [charac_no:%d]"
          ;
          puVar12[3] = 0x329;
          puVar12[2] = (uint)
                       "bool AvatarConvertServer::Convert(CUser*, arad::SigAradAvatarConvert*)";
          puVar12[1] = (uint)"localjapan/Arad_EmblemReformServer.cpp";
          *puVar12 = 1;
          puVar12[-1] = 0x8192afa;
          LogManager::logFormat
                    (*puVar12,(char *)puVar12[1],(char *)puVar12[2],puVar12[3],(char *)puVar12[4]);
          uVar11 = 0;
        }
        else {
          uVar1 = *(ushort *)(param_2 + 2);
          *puVar12 = (uint)param_1;
          puVar12[-1] = 0x8192b19;
          uVar11 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)*puVar12);
          puVar12[2] = (uint)uVar1;
          puVar12[1] = 2;
          *puVar12 = uVar11;
          puVar12[-1] = 0x8192b2d;
          local_38 = CInventory::GetInvenRef((CInventory *)*puVar12,puVar12[1],puVar12[2]);
          local_34 = *(uint *)(local_38 + 7);
          uVar1 = *(ushort *)(param_2 + 2);
          *puVar12 = (uint)param_1;
          puVar12[-1] = 0x8192b4e;
          uVar11 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)*puVar12);
          puVar12[5] = 1;
          puVar12[4] = 6;
          puVar12[3] = 1;
          puVar12[2] = (uint)uVar1;
          puVar12[1] = 2;
          *puVar12 = uVar11;
          puVar12[-1] = 0x8192b7a;
          cVar4 = CInventory::delete_item();
          if (cVar4 == '\x01') {
            *puVar12 = (uint)param_1;
            puVar12[-1] = 0x8192bd2;
            uVar11 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)*puVar12);
            *puVar12 = uVar11;
            puVar12[-1] = 0x8192bda;
            uVar11 = CInventory::GetAvatarItemMgrW((CInventory *)*puVar12);
            puVar12[1] = local_34;
            *puVar12 = uVar11;
            puVar12[-1] = 0x8192be9;
            cVar4 = WongWork::CAvatarItemMgr::UnRegistItem(*puVar12);
            if (cVar4 == '\x01') {
              uVar1 = *(ushort *)(param_2 + 2);
              *puVar12 = (uint)param_1;
              puVar12[-1] = 0x8192c6f;
              uVar11 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)*puVar12);
              puVar12[5] = 0;
              puVar12[4] = uVar1 + 10;
              puVar12[3] = 5;
              puVar12[2] = local_34;
              puVar12[1] = 0x36;
              *puVar12 = uVar11;
              puVar12[-1] = 0x8192c9a;
              CInventory::SendAvatarEvent
                        ((CInventory *)*puVar12,puVar12[1],puVar12[2],puVar12[3],puVar12[4],
                         puVar12[5]);
              *puVar12 = (uint)param_1;
              puVar12[-1] = 0x8192ca5;
              uVar11 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)*puVar12);
              puVar12[2] = (uint)&DAT_08b9a913;
              puVar12[1] = local_34;
              *puVar12 = uVar11;
              puVar12[-1] = 0x8192cbc;
              DB_UpdateAvatarHistory::makeRequest(*puVar12,puVar12[1],(char *)puVar12[2]);
              *puVar12 = (uint)local_9c;
              puVar12[-1] = 0x8192cca;
              std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)*puVar12);
              *puVar12 = (uint)local_a8;
                    /* try { // try from 08192cd3 to 08192cd7 has its CatchHandler @ 08193080 */
              puVar12[-1] = 0x8192cd8;
              std::vector<int,std::allocator<int>>::vector
                        ((vector<int,std::allocator<int>> *)*puVar12);
              puVar12[2] = (uint)(param_2 + 0xc);
              puVar12[1] = (uint)(param_2 + 8);
              *puVar12 = (uint)local_7c;
                    /* try { // try from 08192cf2 to 08192d80 has its CatchHandler @ 08193058 */
              puVar12[-1] = 0x8192cf7;
              std::make_pair<unsigned_long&,short&>((ulong *)*puVar12,(short *)puVar12[1]);
              puVar12[1] = (uint)local_7c;
              *puVar12 = (uint)local_84;
              puVar12[-1] = 0x8192d0c;
              std::pair<int,int>::pair<unsigned_long,short>
                        ((pair<int,int> *)*puVar12,(pair *)puVar12[1]);
              puVar12[1] = (uint)local_84;
              *puVar12 = (uint)local_9c;
              puVar12[-1] = 0x8192d21;
              std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)*puVar12,
                         (pair *)puVar12[1]);
              *puVar12 = (uint)param_1;
              puVar12[-1] = 0x8192d2c;
              uVar11 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)*puVar12);
              puVar12[7] = (uint)&DAT_08b9a913;
              puVar12[6] = (uint)&DAT_08b9a913;
              puVar12[5] = 0;
              puVar12[4] = 10;
              puVar12[3] = 0;
              puVar12[2] = (uint)local_a8;
              puVar12[1] = (uint)local_9c;
              *puVar12 = uVar11;
              puVar12[-1] = 0x8192d70;
              local_30 = CInventory::insert_event_items();
              *puVar12 = (uint)local_b4;
              puVar12[-1] = 0x8192d81;
              PacketGuard::PacketGuard((PacketGuard *)*puVar12);
              *puVar12 = (uint)local_b4;
                    /* try { // try from 08192d8a to 0819302a has its CatchHandler @ 08193040 */
              puVar12[-1] = 0x8192d8f;
              InterfacePacketBuf::clear((InterfacePacketBuf *)*puVar12);
              puVar12[2] = 0x24f;
              puVar12[1] = 1;
              *puVar12 = (uint)local_b4;
              puVar12[-1] = 0x8192dad;
              InterfacePacketBuf::put_header((InterfacePacketBuf *)*puVar12,puVar12[1],puVar12[2]);
              puVar12[1] = 1;
              *puVar12 = (uint)local_b4;
              puVar12[-1] = 0x8192dc3;
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)*puVar12,puVar12[1]);
              puVar12[1] = (uint)*(ushort *)(param_2 + 2);
              *puVar12 = (uint)local_b4;
              puVar12[-1] = 0x8192ddf;
              InterfacePacketBuf::put_short((InterfacePacketBuf *)*puVar12,puVar12[1]);
              puVar12[1] = local_30;
              *puVar12 = (uint)local_b4;
              puVar12[-1] = 0x8192df4;
              InterfacePacketBuf::put_short((InterfacePacketBuf *)*puVar12,puVar12[1]);
              puVar12[1] = (uint)local_a8;
              *puVar12 = (uint)local_74;
              puVar12[-1] = 0x8192e09;
              std::vector<int,std::allocator<int>>::begin();
              puVar12[1] = (uint)local_74;
              *puVar12 = (uint)local_b8;
              puVar12[-1] = 0x8192e21;
              __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
              __normal_iterator<int*>
                        ((__normal_iterator<int_const*,std::vector<int,std::allocator<int>>> *)
                         *puVar12,(__normal_iterator *)puVar12[1]);
              local_2c = 0;
              local_28 = 0;
              local_24 = 0;
              while( true ) {
                puVar12[1] = (uint)local_a8;
                *puVar12 = (uint)local_70;
                puVar12[-1] = 0x8192f91;
                std::vector<int,std::allocator<int>>::end();
                puVar12[1] = (uint)local_70;
                *puVar12 = (uint)local_b8;
                puVar12[-1] = 0x8192fa9;
                bVar5 = __gnu_cxx::operator!=
                                  ((__normal_iterator *)*puVar12,(__normal_iterator *)puVar12[1]);
                if (!bVar5) break;
                *puVar12 = (uint)local_b8;
                puVar12[-1] = 0x8192e49;
                puVar10 = (uint *)__gnu_cxx::
                                  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                                  ::operator*((__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                                               *)*puVar12);
                local_2c = *puVar10;
                puVar12[1] = local_2c;
                *puVar12 = (uint)local_b4;
                puVar12[-1] = 0x8192e63;
                InterfacePacketBuf::put_short((InterfacePacketBuf *)*puVar12,puVar12[1]);
                puVar12[2] = 0;
                puVar12[1] = (uint)local_b8;
                *puVar12 = (uint)local_6c;
                puVar12[-1] = 0x8192e80;
                __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                operator++((__normal_iterator<int_const*,std::vector<int,std::allocator<int>>> *)
                           *puVar12,puVar12[1]);
                *puVar12 = (uint)local_b8;
                puVar12[-1] = 0x8192e91;
                puVar10 = (uint *)__gnu_cxx::
                                  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                                  ::operator*((__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                                               *)*puVar12);
                local_28 = *puVar10;
                puVar12[1] = local_28;
                *puVar12 = (uint)local_b4;
                puVar12[-1] = 0x8192eab;
                InterfacePacketBuf::put_int((InterfacePacketBuf *)*puVar12,puVar12[1]);
                puVar12[2] = 0;
                puVar12[1] = (uint)local_b8;
                *puVar12 = (uint)local_68;
                puVar12[-1] = 0x8192ec8;
                __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                operator++((__normal_iterator<int_const*,std::vector<int,std::allocator<int>>> *)
                           *puVar12,puVar12[1]);
                *puVar12 = (uint)local_b8;
                puVar12[-1] = 0x8192ed9;
                puVar10 = (uint *)__gnu_cxx::
                                  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                                  ::operator*((__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                                               *)*puVar12);
                local_24 = *puVar10;
                puVar12[1] = local_24;
                *puVar12 = (uint)local_b4;
                puVar12[-1] = 0x8192ef3;
                InterfacePacketBuf::put_int((InterfacePacketBuf *)*puVar12,puVar12[1]);
                puVar12[2] = 0;
                puVar12[1] = (uint)local_b8;
                *puVar12 = (uint)local_64;
                puVar12[-1] = 0x8192f10;
                __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                operator++((__normal_iterator<int_const*,std::vector<int,std::allocator<int>>> *)
                           *puVar12,puVar12[1]);
                *puVar12 = (uint)param_1;
                puVar12[-1] = 0x8192f1e;
                uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)*puVar12);
                uVar1 = *(ushort *)param_2;
                uVar2 = *(ushort *)(param_2 + 2);
                puVar12[3] = 0;
                puVar12[2] = 0x368;
                puVar12[1] = (uint)
                             "bool AvatarConvertServer::Convert(CUser*, arad::SigAradAvatarConvert*)"
                ;
                *puVar12 = (uint)local_60;
                puVar12[-1] = 0x8192f56;
                cMyTrace::cMyTrace((cMyTrace *)*puVar12,(char *)puVar12[1],puVar12[2],puVar12[3]);
                puVar12[5] = uVar9;
                puVar12[4] = local_28;
                puVar12[3] = (uint)uVar1;
                puVar12[2] = (uint)uVar2;
                puVar12[1] = (uint)
                             "AVATAR CONVERT : success [slot:%d] [selectNo:%d] [resultIdx:%d] [charac_no:%d]"
                ;
                *puVar12 = (uint)local_60;
                puVar12[-1] = 0x8192f7c;
                cMyTrace::operator()((cMyTrace *)*puVar12,(char *)puVar12[1]);
              }
              puVar12[1] = 1;
              *puVar12 = (uint)local_b4;
              puVar12[-1] = 0x8192fc7;
              InterfacePacketBuf::finalize((InterfacePacketBuf *)*puVar12,SUB41(puVar12[1],0));
              puVar12[1] = (uint)local_b4;
              *puVar12 = (uint)param_1;
              puVar12[-1] = 0x8192fdc;
              CUser::Send((CUser *)*puVar12,(PacketGuard *)puVar12[1]);
              uVar9 = *(uint *)(param_2 + 8);
              puVar12[-1] = 0x8192fe9;
              iVar6 = ARAD::Singleton<AvatarRechargeServer>::Get();
              puVar12[1] = uVar9;
              *puVar12 = iVar6 + 4;
              puVar12[-1] = 0x8192ff8;
              cVar4 = ARAD::SCRIPT::AvatarRecharge::IsEmblemRechargeStone(*puVar12);
              local_20 = (uint)(cVar4 != '\0');
              puVar12[1] = local_20;
              *puVar12 = (uint)local_50;
              puVar12[-1] = 0x819301d;
              StatisticsAvatarDisjoint((CItem *)*puVar12,puVar12[1]);
              *puVar12 = (uint)local_9c;
              puVar12[-1] = 0x819302b;
              StatisticsEmblemCreate((vector *)*puVar12);
              uVar11 = 1;
              *puVar12 = (uint)local_b4;
                    /* try { // try from 08193039 to 0819303d has its CatchHandler @ 08193058 */
              puVar12[-1] = 0x819303e;
              PacketGuard::~PacketGuard((PacketGuard *)*puVar12);
              *puVar12 = (uint)local_a8;
                    /* try { // try from 08193079 to 0819307d has its CatchHandler @ 08193080 */
              puVar12[-1] = 0x819307e;
              std::vector<int,std::allocator<int>>::~vector
                        ((vector<int,std::allocator<int>> *)*puVar12);
              *puVar12 = (uint)local_9c;
              puVar12[-1] = 0x81930ac;
              std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)*puVar12);
            }
            else {
              puVar12[2] = 0x16;
              puVar12[1] = 0x24f;
              *puVar12 = (uint)param_1;
              puVar12[-1] = 0x8192c0b;
              CUser::SendCmdErrorPacket();
              *puVar12 = (uint)param_1;
              puVar12[-1] = 0x8192c16;
              uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)*puVar12);
              puVar12[6] = uVar9;
              puVar12[5] = local_34;
              puVar12[4] = (uint)"AVATAR CONVERT : UnRegistItem() fail [ui_id:%d] [charac_no:%d]";
              puVar12[3] = 0x33c;
              puVar12[2] = (uint)
                           "bool AvatarConvertServer::Convert(CUser*, arad::SigAradAvatarConvert*)";
              puVar12[1] = (uint)"localjapan/Arad_EmblemReformServer.cpp";
              *puVar12 = 1;
              puVar12[-1] = 0x8192c4d;
              LogManager::logFormat
                        (*puVar12,(char *)puVar12[1],(char *)puVar12[2],puVar12[3],
                         (char *)puVar12[4]);
              uVar11 = 0;
            }
          }
          else {
            puVar12[2] = 0x16;
            puVar12[1] = 0x24f;
            *puVar12 = (uint)param_1;
            puVar12[-1] = 0x8192b9c;
            CUser::SendCmdErrorPacket();
            puVar12[2] = (uint)*(ushort *)(param_2 + 2);
            puVar12[1] = (uint)param_1;
            *puVar12 = (uint)"AVATAR CONVERT";
            puVar12[-1] = 0x8192bbd;
            ARAD::PRINT_ERROR::delete_item((char *)*puVar12,(CUser *)puVar12[1],(ushort)puVar12[2]);
            uVar11 = 0;
          }
        }
      }
    }
  }
  return uVar11;
}

```

---

## Destroy

```asm
// === 0819312c AvatarConvertServer::Destroy  [0x0819312c-0x8193135] ===
 819312c:	55                   	push   %ebp
 819312d:	89 e5                	mov    %esp,%ebp
 819312f:	b8 01 00 00 00       	mov    $0x1,%eax
 8193134:	5d                   	pop    %ebp
 8193135:	c3                   	ret

```

```c
// AvatarConvertServer::Destroy @ 0x819312c

/* AvatarConvertServer::Destroy() */

undefined4 AvatarConvertServer::Destroy(void)

{
  return 1;
}

```

---

## Load

```asm
// === 081930ba AvatarConvertServer::Load  [0x081930ba-0x819312b] ===
 81930ba:	55                   	push   %ebp
 81930bb:	89 e5                	mov    %esp,%ebp
 81930bd:	83 ec 38             	sub    $0x38,%esp
 81930c0:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81930c7:	00 
 81930c8:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 81930cf:	00 
 81930d0:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 81930d7:	00 
 81930d8:	c7 44 24 08 7f 03 00 	movl   $0x37f,0x8(%esp)
 81930df:	00 
 81930e0:	c7 44 24 04 c0 b5 b9 	movl   $0x8b9b5c0,0x4(%esp)
 81930e7:	08 
 81930e8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81930eb:	89 04 24             	mov    %eax,(%esp)
 81930ee:	e8 53 c6 3b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 81930f3:	c7 44 24 04 64 a9 b9 	movl   $0x8b9a964,0x4(%esp)
 81930fa:	08 
 81930fb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81930fe:	89 04 24             	mov    %eax,(%esp)
 8193101:	e8 82 c6 3b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8193106:	8b 45 08             	mov    0x8(%ebp),%eax
 8193109:	83 c0 04             	add    $0x4,%eax
 819310c:	89 04 24             	mov    %eax,(%esp)
 819310f:	e8 22 ea 71 00       	call   88b1b36 <_ZN4ARAD6SCRIPT13AvatarConvert10loadScriptEv>
 8193114:	85 c0                	test   %eax,%eax
 8193116:	0f 95 c0             	setne  %al
 8193119:	84 c0                	test   %al,%al
 819311b:	74 07                	je     8193124 <_ZN19AvatarConvertServer4LoadEv+0x6a>
 819311d:	b8 00 00 00 00       	mov    $0x0,%eax
 8193122:	eb 05                	jmp    8193129 <_ZN19AvatarConvertServer4LoadEv+0x6f>
 8193124:	b8 01 00 00 00       	mov    $0x1,%eax
 8193129:	c9                   	leave
 819312a:	c3                   	ret
 819312b:	90                   	nop

```

```c
// AvatarConvertServer::Load @ 0x81930ba

/* AvatarConvertServer::Load() */

bool AvatarConvertServer::Load(void)

{
  int iVar1;
  cMyTrace local_1c [24];
  
  cMyTrace::cMyTrace(local_1c,"virtual bool AvatarConvertServer::Load()",0x37f,9,true,false);
  cMyTrace::operator()(local_1c,"\t- Loading Avatar Convert script - ");
  iVar1 = ARAD::SCRIPT::AvatarConvert::loadScript();
  return iVar1 == 0;
}

```

---

## StatisticsAvatarDisjoint

```asm
// === 08193136 AvatarConvertServer::StatisticsAvatarDisjoint  [0x08193136-0x81931db] ===
 8193136:	55                   	push   %ebp
 8193137:	89 e5                	mov    %esp,%ebp
 8193139:	53                   	push   %ebx
 819313a:	83 ec 44             	sub    $0x44,%esp
 819313d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8193140:	89 04 24             	mov    %eax,(%esp)
 8193143:	e8 66 da f7 ff       	call   8110bae <_ZN32Packet_Avater_Disjoint_StatisticC1Ev>
 8193148:	c7 45 d6 01 00 00 00 	movl   $0x1,-0x2a(%ebp)
 819314f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8193156:	8b 45 08             	mov    0x8(%ebp),%eax
 8193159:	89 04 24             	mov    %eax,(%esp)
 819315c:	e8 75 e1 f5 ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 8193161:	83 f8 02             	cmp    $0x2,%eax
 8193164:	0f 94 c0             	sete   %al
 8193167:	84 c0                	test   %al,%al
 8193169:	74 09                	je     8193174 <_ZN19AvatarConvertServer24StatisticsAvatarDisjointEPK5CItemi+0x3e>
 819316b:	c7 45 f4 02 00 00 00 	movl   $0x2,-0xc(%ebp)
 8193172:	eb 11                	jmp    8193185 <_ZN19AvatarConvertServer24StatisticsAvatarDisjointEPK5CItemi+0x4f>
 8193174:	8b 45 08             	mov    0x8(%ebp),%eax
 8193177:	89 04 24             	mov    %eax,(%esp)
 819317a:	e8 d5 da f7 ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 819317f:	83 e8 01             	sub    $0x1,%eax
 8193182:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8193185:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8193188:	89 45 da             	mov    %eax,-0x26(%ebp)
 819318b:	8b 45 08             	mov    0x8(%ebp),%eax
 819318e:	8b 00                	mov    (%eax),%eax
 8193190:	83 c0 0c             	add    $0xc,%eax
 8193193:	8b 10                	mov    (%eax),%edx
 8193195:	8b 45 08             	mov    0x8(%ebp),%eax
 8193198:	89 04 24             	mov    %eax,(%esp)
 819319b:	ff d2                	call   *%edx
 819319d:	89 45 de             	mov    %eax,-0x22(%ebp)
 81931a0:	c6 45 e2 01          	movb   $0x1,-0x1e(%ebp)
 81931a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81931a7:	89 45 e3             	mov    %eax,-0x1d(%ebp)
 81931aa:	8d 5d cc             	lea    -0x34(%ebp),%ebx
 81931ad:	a1 30 be 40 09       	mov    0x940be30,%eax
 81931b2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81931b9:	00 
 81931ba:	89 04 24             	mov    %eax,(%esp)
 81931bd:	e8 36 eb f7 ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81931c2:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 81931c9:	00 
 81931ca:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81931ce:	89 04 24             	mov    %eax,(%esp)
 81931d1:	e8 6e ee 2d 00       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 81931d6:	83 c4 44             	add    $0x44,%esp
 81931d9:	5b                   	pop    %ebx
 81931da:	5d                   	pop    %ebp
 81931db:	c3                   	ret

```

```c
// AvatarConvertServer::StatisticsAvatarDisjoint @ 0x8193136

/* AvatarConvertServer::StatisticsAvatarDisjoint(CItem const*, int) */

void AvatarConvertServer::StatisticsAvatarDisjoint(CItem *param_1,int param_2)

{
  int iVar1;
  CStatisticServerProxy *this;
  Packet_Avater_Disjoint_Statistic local_38 [10];
  undefined4 local_2e;
  int local_2a;
  undefined4 local_26;
  undefined1 local_22;
  int local_21;
  int local_10;
  
  Packet_Avater_Disjoint_Statistic::Packet_Avater_Disjoint_Statistic(local_38);
  local_2e = 1;
  local_10 = 0;
  iVar1 = CItem::get_rarity(param_1);
  if (iVar1 == 2) {
    local_10 = 2;
  }
  else {
    local_10 = CItem::get_grade(param_1);
    local_10 = local_10 + -1;
  }
  local_2a = local_10;
  local_26 = (**(code **)(*(int *)param_1 + 0xc))(param_1);
  local_22 = 1;
  local_21 = param_2;
  this = (CStatisticServerProxy *)
         CServerProxyMgr<CStatisticServerProxy>::GetServerProxy(GlobalData::s_statistic_proxy_mgr,0)
  ;
  CStatisticServerProxy::SendPacket(this,(char *)local_38,0x28);
  return;
}

```

---

## StatisticsEmblemCreate

```asm
// === 081931dc AvatarConvertServer::StatisticsEmblemCreate  [0x081931dc-0x8193357] ===
 81931dc:	55                   	push   %ebp
 81931dd:	89 e5                	mov    %esp,%ebp
 81931df:	53                   	push   %ebx
 81931e0:	83 ec 74             	sub    $0x74,%esp
 81931e3:	8d 45 a6             	lea    -0x5a(%ebp),%eax
 81931e6:	89 04 24             	mov    %eax,(%esp)
 81931e9:	e8 ee d9 f7 ff       	call   8110bdc <_ZN30Packet_Emblem_Create_StatisticC1Ev>
 81931ee:	8b 45 08             	mov    0x8(%ebp),%eax
 81931f1:	89 04 24             	mov    %eax,(%esp)
 81931f4:	e8 1b a6 f4 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 81931f9:	83 f8 05             	cmp    $0x5,%eax
 81931fc:	0f 97 c0             	seta   %al
 81931ff:	84 c0                	test   %al,%al
 8193201:	0f 85 45 01 00 00    	jne    819334c <_ZN19AvatarConvertServer22StatisticsEmblemCreateERKSt6vectorISt4pairIiiESaIS2_EE+0x170>
 8193207:	8d 45 e0             	lea    -0x20(%ebp),%eax
 819320a:	8b 55 08             	mov    0x8(%ebp),%edx
 819320d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8193211:	89 04 24             	mov    %eax,(%esp)
 8193214:	e8 07 e0 f7 ff       	call   8111220 <_ZNKSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 8193219:	83 ec 04             	sub    $0x4,%esp
 819321c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 819321f:	8b 55 08             	mov    0x8(%ebp),%edx
 8193222:	89 54 24 04          	mov    %edx,0x4(%esp)
 8193226:	89 04 24             	mov    %eax,(%esp)
 8193229:	e8 1e e0 f7 ff       	call   811124c <_ZNKSt6vectorISt4pairIiiESaIS1_EE3endEv>
 819322e:	83 ec 04             	sub    $0x4,%esp
 8193231:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8193238:	e9 a7 00 00 00       	jmp    81932e4 <_ZN19AvatarConvertServer22StatisticsEmblemCreateERKSt6vectorISt4pairIiiESaIS2_EE+0x108>
 819323d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8193240:	89 04 24             	mov    %eax,(%esp)
 8193243:	e8 ca 06 00 00       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 8193248:	8b 00                	mov    (%eax),%eax
 819324a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 819324d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8193250:	89 04 24             	mov    %eax,(%esp)
 8193253:	e8 ba 06 00 00       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 8193258:	8b 40 04             	mov    0x4(%eax),%eax
 819325b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 819325e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8193261:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8193268:	00 
 8193269:	8d 55 e0             	lea    -0x20(%ebp),%edx
 819326c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8193270:	89 04 24             	mov    %eax,(%esp)
 8193273:	e8 fa 01 00 00       	call   8193472 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEppEi>
 8193278:	83 ec 04             	sub    $0x4,%esp
 819327b:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 819327e:	e8 18 8f f3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8193283:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8193287:	89 04 24             	mov    %eax,(%esp)
 819328a:	e8 a3 c7 1c 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 819328f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8193292:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8193296:	0f 84 b3 00 00 00    	je     819334f <_ZN19AvatarConvertServer22StatisticsEmblemCreateERKSt6vectorISt4pairIiiESaIS2_EE+0x173>
 819329c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 819329f:	8b 00                	mov    (%eax),%eax
 81932a1:	83 c0 0c             	add    $0xc,%eax
 81932a4:	8b 10                	mov    (%eax),%edx
 81932a6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81932a9:	89 04 24             	mov    %eax,(%esp)
 81932ac:	ff d2                	call   *%edx
 81932ae:	83 f8 14             	cmp    $0x14,%eax
 81932b1:	0f 95 c0             	setne  %al
 81932b4:	84 c0                	test   %al,%al
 81932b6:	75 2b                	jne    81932e3 <_ZN19AvatarConvertServer22StatisticsEmblemCreateERKSt6vectorISt4pairIiiESaIS2_EE+0x107>
 81932b8:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 81932bb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81932be:	89 04 24             	mov    %eax,(%esp)
 81932c1:	e8 8e d9 f7 ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 81932c6:	89 44 9d b4          	mov    %eax,-0x4c(%ebp,%ebx,4)
 81932ca:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81932cd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81932d0:	83 c2 08             	add    $0x8,%edx
 81932d3:	89 44 95 a8          	mov    %eax,-0x58(%ebp,%edx,4)
 81932d7:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 81932db:	83 7d e8 05          	cmpl   $0x5,-0x18(%ebp)
 81932df:	7f 1f                	jg     8193300 <_ZN19AvatarConvertServer22StatisticsEmblemCreateERKSt6vectorISt4pairIiiESaIS2_EE+0x124>
 81932e1:	eb 01                	jmp    81932e4 <_ZN19AvatarConvertServer22StatisticsEmblemCreateERKSt6vectorISt4pairIiiESaIS2_EE+0x108>
 81932e3:	90                   	nop
 81932e4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81932e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81932eb:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81932ee:	89 04 24             	mov    %eax,(%esp)
 81932f1:	e8 ef 05 00 00       	call   81938e5 <_ZN9__gnu_cxxneIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 81932f6:	84 c0                	test   %al,%al
 81932f8:	0f 85 3f ff ff ff    	jne    819323d <_ZN19AvatarConvertServer22StatisticsEmblemCreateERKSt6vectorISt4pairIiiESaIS2_EE+0x61>
 81932fe:	eb 01                	jmp    8193301 <_ZN19AvatarConvertServer22StatisticsEmblemCreateERKSt6vectorISt4pairIiiESaIS2_EE+0x125>
 8193300:	90                   	nop
 8193301:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 8193304:	8b 45 08             	mov    0x8(%ebp),%eax
 8193307:	89 04 24             	mov    %eax,(%esp)
 819330a:	e8 05 a5 f4 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 819330f:	39 c3                	cmp    %eax,%ebx
 8193311:	0f 95 c0             	setne  %al
 8193314:	84 c0                	test   %al,%al
 8193316:	75 3a                	jne    8193352 <_ZN19AvatarConvertServer22StatisticsEmblemCreateERKSt6vectorISt4pairIiiESaIS2_EE+0x176>
 8193318:	8b 45 e8             	mov    -0x18(%ebp),%eax
 819331b:	89 45 b0             	mov    %eax,-0x50(%ebp)
 819331e:	8d 5d a6             	lea    -0x5a(%ebp),%ebx
 8193321:	a1 30 be 40 09       	mov    0x940be30,%eax
 8193326:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 819332d:	00 
 819332e:	89 04 24             	mov    %eax,(%esp)
 8193331:	e8 c2 e9 f7 ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8193336:	c7 44 24 08 36 00 00 	movl   $0x36,0x8(%esp)
 819333d:	00 
 819333e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8193342:	89 04 24             	mov    %eax,(%esp)
 8193345:	e8 fa ec 2d 00       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 819334a:	eb 07                	jmp    8193353 <_ZN19AvatarConvertServer22StatisticsEmblemCreateERKSt6vectorISt4pairIiiESaIS2_EE+0x177>
 819334c:	90                   	nop
 819334d:	eb 04                	jmp    8193353 <_ZN19AvatarConvertServer22StatisticsEmblemCreateERKSt6vectorISt4pairIiiESaIS2_EE+0x177>
 819334f:	90                   	nop
 8193350:	eb 01                	jmp    8193353 <_ZN19AvatarConvertServer22StatisticsEmblemCreateERKSt6vectorISt4pairIiiESaIS2_EE+0x177>
 8193352:	90                   	nop
 8193353:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8193356:	c9                   	leave
 8193357:	c3                   	ret

```

```c
// AvatarConvertServer::StatisticsEmblemCreate @ 0x81931dc

/* AvatarConvertServer::StatisticsEmblemCreate(std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > > const&) */

void AvatarConvertServer::StatisticsEmblemCreate(vector *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  CDataManager *this;
  int iVar5;
  CStatisticServerProxy *this_00;
  undefined4 uVar6;
  Packet_Emblem_Create_Statistic local_5e [2];
  int aiStack_5c [13];
  __normal_iterator local_28 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_24 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_20 [4];
  int local_1c;
  int local_18;
  int local_14;
  CItem *local_10;
  
  Packet_Emblem_Create_Statistic::Packet_Emblem_Create_Statistic(local_5e);
  uVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1);
  if (uVar2 < 6) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    local_1c = 0;
    do {
      do {
        bVar1 = __gnu_cxx::operator!=(local_24,local_28);
        if (!bVar1) goto LAB_08193301;
        piVar3 = (int *)__gnu_cxx::
                        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                        ::operator->(local_24);
        local_18 = *piVar3;
        iVar4 = __gnu_cxx::
                __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                ::operator->(local_24);
        local_14 = *(int *)(iVar4 + 4);
        uVar6 = 0;
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++(local_20,(int)local_24);
        iVar4 = local_18;
        this = (CDataManager *)G_CDataManager();
        local_10 = (CItem *)CDataManager::find_item(this,iVar4);
        if (local_10 == (CItem *)0x0) {
          return;
        }
        iVar5 = (**(code **)(*(int *)local_10 + 0xc))(local_10,iVar4,uVar6);
        iVar4 = local_1c;
      } while (iVar5 != 0x14);
      iVar5 = CItem::get_grade(local_10);
      aiStack_5c[iVar4 + 3] = iVar5;
      aiStack_5c[local_1c + 8] = local_14;
      local_1c = local_1c + 1;
    } while (local_1c < 6);
LAB_08193301:
    iVar4 = local_1c;
    iVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1);
    if (iVar4 == iVar5) {
      aiStack_5c[2] = local_1c;
      this_00 = (CStatisticServerProxy *)
                CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                          (GlobalData::s_statistic_proxy_mgr,0);
      CStatisticServerProxy::SendPacket(this_00,(char *)local_5e,0x36);
    }
  }
  return;
}

```

---

## Test

```asm
// === 0819220c AvatarConvertServer::Test  [0x0819220c-0x8192211] ===
 819220c:	55                   	push   %ebp
 819220d:	89 e5                	mov    %esp,%ebp
 819220f:	5d                   	pop    %ebp
 8192210:	c3                   	ret
 8192211:	90                   	nop

```

```c
// AvatarConvertServer::Test @ 0x819220c

/* AvatarConvertServer::Test() */

void AvatarConvertServer::Test(void)

{
  return;
}

```

---

## ~AvatarConvertServer

```asm
// === 081921ec AvatarConvertServer::~AvatarConvertServer  [0x081921ec-0x819220b] ===
 81921ec:	55                   	push   %ebp
 81921ed:	89 e5                	mov    %esp,%ebp
 81921ef:	83 ec 18             	sub    $0x18,%esp
 81921f2:	8b 45 08             	mov    0x8(%ebp),%eax
 81921f5:	c7 00 38 b9 b9 08    	movl   $0x8b9b938,(%eax)
 81921fb:	8b 45 08             	mov    0x8(%ebp),%eax
 81921fe:	83 c0 04             	add    $0x4,%eax
 8192201:	89 04 24             	mov    %eax,(%esp)
 8192204:	e8 19 f9 71 00       	call   88b1b22 <_ZN4ARAD6SCRIPT13AvatarConvertD1Ev>
 8192209:	c9                   	leave
 819220a:	c3                   	ret
 819220b:	90                   	nop

```

```c
// AvatarConvertServer::~AvatarConvertServer @ 0x81921ec

/* AvatarConvertServer::~AvatarConvertServer() */

void __thiscall AvatarConvertServer::~AvatarConvertServer(AvatarConvertServer *this)

{
  *(undefined ***)this = &PTR_Load_08b9b938;
  ARAD::SCRIPT::AvatarConvert::~AvatarConvert((AvatarConvert *)(this + 4));
  return;
}

```

