# DB_SecurityCardIssue

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## _sendResult

```asm
// === 0842b410 DB_SecurityCardIssue::_sendResult  [0x0842b410-0x842b579] ===
 842b410:	55                   	push   %ebp
 842b411:	89 e5                	mov    %esp,%ebp
 842b413:	56                   	push   %esi
 842b414:	53                   	push   %ebx
 842b415:	83 ec 20             	sub    $0x20,%esp
 842b418:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842b41d:	c7 44 24 08 ec 6d 00 	movl   $0x6dec,0x8(%esp)
 842b424:	00 
 842b425:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842b42c:	08 
 842b42d:	89 04 24             	mov    %eax,(%esp)
 842b430:	e8 51 46 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842b435:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842b43c:	00 
 842b43d:	89 44 24 04          	mov    %eax,0x4(%esp)
 842b441:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842b444:	89 04 24             	mov    %eax,(%esp)
 842b447:	e8 da d7 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842b44c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842b44f:	89 04 24             	mov    %eax,(%esp)
 842b452:	e8 ef d7 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842b457:	c7 44 24 04 fd 00 00 	movl   $0xfd,0x4(%esp)
 842b45e:	00 
 842b45f:	89 04 24             	mov    %eax,(%esp)
 842b462:	e8 ef d7 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842b467:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842b46a:	89 04 24             	mov    %eax,(%esp)
 842b46d:	e8 d4 d7 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842b472:	8b 55 0c             	mov    0xc(%ebp),%edx
 842b475:	89 54 24 04          	mov    %edx,0x4(%esp)
 842b479:	89 04 24             	mov    %eax,(%esp)
 842b47c:	e8 d5 d7 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842b481:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842b484:	89 04 24             	mov    %eax,(%esp)
 842b487:	e8 c2 d7 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 842b48c:	89 04 24             	mov    %eax,(%esp)
 842b48f:	e8 74 71 02 00       	call   8452608 <_ZN12CStreamGuard11GetInBufferI23SIG_SECURITY_CARD_ISSUEEEPT_v>
 842b494:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842b497:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842b49a:	8b 55 20             	mov    0x20(%ebp),%edx
 842b49d:	89 90 8c 00 00 00    	mov    %edx,0x8c(%eax)
 842b4a3:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 842b4a7:	74 1d                	je     842b4c6 <_ZN20DB_SecurityCardIssue11_sendResultEiPKcS1_S1_S1_10ENUM_ERROR+0xb6>
 842b4a9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842b4ac:	8d 50 04             	lea    0x4(%eax),%edx
 842b4af:	c7 44 24 08 21 00 00 	movl   $0x21,0x8(%esp)
 842b4b6:	00 
 842b4b7:	8b 45 14             	mov    0x14(%ebp),%eax
 842b4ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 842b4be:	89 14 24             	mov    %edx,(%esp)
 842b4c1:	e8 0a 24 c5 ff       	call   807d8d0 <strncpy@plt>
 842b4c6:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 842b4ca:	74 1d                	je     842b4e9 <_ZN20DB_SecurityCardIssue11_sendResultEiPKcS1_S1_S1_10ENUM_ERROR+0xd9>
 842b4cc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842b4cf:	8d 50 37             	lea    0x37(%eax),%edx
 842b4d2:	c7 44 24 08 27 00 00 	movl   $0x27,0x8(%esp)
 842b4d9:	00 
 842b4da:	8b 45 18             	mov    0x18(%ebp),%eax
 842b4dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 842b4e1:	89 14 24             	mov    %edx,(%esp)
 842b4e4:	e8 e7 23 c5 ff       	call   807d8d0 <strncpy@plt>
 842b4e9:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 842b4ed:	74 1d                	je     842b50c <_ZN20DB_SecurityCardIssue11_sendResultEiPKcS1_S1_S1_10ENUM_ERROR+0xfc>
 842b4ef:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842b4f2:	8d 50 5e             	lea    0x5e(%eax),%edx
 842b4f5:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 842b4fc:	00 
 842b4fd:	8b 45 1c             	mov    0x1c(%ebp),%eax
 842b500:	89 44 24 04          	mov    %eax,0x4(%esp)
 842b504:	89 14 24             	mov    %edx,(%esp)
 842b507:	e8 c4 23 c5 ff       	call   807d8d0 <strncpy@plt>
 842b50c:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 842b510:	74 1d                	je     842b52f <_ZN20DB_SecurityCardIssue11_sendResultEiPKcS1_S1_S1_10ENUM_ERROR+0x11f>
 842b512:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842b515:	8d 50 25             	lea    0x25(%eax),%edx
 842b518:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 842b51f:	00 
 842b520:	8b 45 10             	mov    0x10(%ebp),%eax
 842b523:	89 44 24 04          	mov    %eax,0x4(%esp)
 842b527:	89 14 24             	mov    %edx,(%esp)
 842b52a:	e8 a1 23 c5 ff       	call   807d8d0 <strncpy@plt>
 842b52f:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842b534:	8d 55 ec             	lea    -0x14(%ebp),%edx
 842b537:	89 54 24 08          	mov    %edx,0x8(%esp)
 842b53b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842b542:	00 
 842b543:	89 04 24             	mov    %eax,(%esp)
 842b546:	e8 93 5a 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842b54b:	eb 1b                	jmp    842b568 <_ZN20DB_SecurityCardIssue11_sendResultEiPKcS1_S1_S1_10ENUM_ERROR+0x158>
 842b54d:	89 d3                	mov    %edx,%ebx
 842b54f:	89 c6                	mov    %eax,%esi
 842b551:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842b554:	89 04 24             	mov    %eax,(%esp)
 842b557:	e8 76 13 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842b55c:	89 f0                	mov    %esi,%eax
 842b55e:	89 da                	mov    %ebx,%edx
 842b560:	89 04 24             	mov    %eax,(%esp)
 842b563:	e8 e8 81 6b 00       	call   8ae3750 <_Unwind_Resume>
 842b568:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842b56b:	89 04 24             	mov    %eax,(%esp)
 842b56e:	e8 5f 13 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842b573:	83 c4 20             	add    $0x20,%esp
 842b576:	5b                   	pop    %ebx
 842b577:	5e                   	pop    %esi
 842b578:	5d                   	pop    %ebp
 842b579:	c3                   	ret

```

```c
// DB_SecurityCardIssue::_sendResult @ 0x842b410

/* DB_SecurityCardIssue::_sendResult(int, char const*, char const*, char const*, char const*,
   ENUM_ERROR) */

void __thiscall
DB_SecurityCardIssue::_sendResult
          (undefined4 this,int param_1,char *param_2,char *param_3,char *param_4,char *param_5,
          undefined4 param_7)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SECURITY_CARD_ISSUE *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6dec);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842b462 to 0842b54a has its CatchHandler @ 0842b54d */
  CStreamGuard::operator<<(pCVar2,0xfd);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SECURITY_CARD_ISSUE>(pCVar2);
  *(undefined4 *)(local_10 + 0x8c) = param_7;
  if (param_3 != (char *)0x0) {
    strncpy((char *)(local_10 + 4),param_3,0x21);
  }
  if (param_4 != (char *)0x0) {
    strncpy((char *)(local_10 + 0x37),param_4,0x27);
  }
  if (param_5 != (char *)0x0) {
    strncpy((char *)(local_10 + 0x5e),param_5,5);
  }
  if (param_2 != (char *)0x0) {
    strncpy((char *)(local_10 + 0x25),param_2,0xc);
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

---

## dispatch

```asm
// === 0842af94 DB_SecurityCardIssue::dispatch  [0x0842af94-0x842b40f] ===
 842af94:	55                   	push   %ebp
 842af95:	89 e5                	mov    %esp,%ebp
 842af97:	57                   	push   %edi
 842af98:	56                   	push   %esi
 842af99:	53                   	push   %ebx
 842af9a:	81 ec cc 00 00 00    	sub    $0xcc,%esp
 842afa0:	8b 45 08             	mov    0x8(%ebp),%eax
 842afa3:	8b 55 14             	mov    0x14(%ebp),%edx
 842afa6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 842afaa:	8b 55 10             	mov    0x10(%ebp),%edx
 842afad:	89 54 24 08          	mov    %edx,0x8(%esp)
 842afb1:	8b 55 0c             	mov    0xc(%ebp),%edx
 842afb4:	89 54 24 04          	mov    %edx,0x4(%esp)
 842afb8:	89 04 24             	mov    %eax,(%esp)
 842afbb:	e8 bc 0f fd ff       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 842afc0:	83 f0 01             	xor    $0x1,%eax
 842afc3:	84 c0                	test   %al,%al
 842afc5:	74 0a                	je     842afd1 <_ZN20DB_SecurityCardIssue8dispatchEiiP6Stream+0x3d>
 842afc7:	b8 00 00 00 00       	mov    $0x0,%eax
 842afcc:	e9 34 04 00 00       	jmp    842b405 <_ZN20DB_SecurityCardIssue8dispatchEiiP6Stream+0x471>
 842afd1:	8b 45 14             	mov    0x14(%ebp),%eax
 842afd4:	89 04 24             	mov    %eax,(%esp)
 842afd7:	e8 d8 75 02 00       	call   84525b4 <_ZN6Stream12GetOutBufferI23SIG_SECURITY_CARD_ISSUEEEPT_v>
 842afdc:	89 45 dc             	mov    %eax,-0x24(%ebp)
 842afdf:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842afe4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842afeb:	00 
 842afec:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 842aff3:	00 
 842aff4:	89 04 24             	mov    %eax,(%esp)
 842aff7:	e8 42 a2 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842affc:	89 45 e0             	mov    %eax,-0x20(%ebp)
 842afff:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842b002:	83 c0 63             	add    $0x63,%eax
 842b005:	89 44 24 08          	mov    %eax,0x8(%esp)
 842b009:	c7 44 24 04 14 fd c4 	movl   $0x8c4fd14,0x4(%esp)
 842b010:	08 
 842b011:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842b014:	89 04 24             	mov    %eax,(%esp)
 842b017:	e8 a4 91 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842b01c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842b023:	00 
 842b024:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842b027:	89 04 24             	mov    %eax,(%esp)
 842b02a:	e8 f7 92 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842b02f:	83 f0 01             	xor    $0x1,%eax
 842b032:	84 c0                	test   %al,%al
 842b034:	75 10                	jne    842b046 <_ZN20DB_SecurityCardIssue8dispatchEiiP6Stream+0xb2>
 842b036:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842b039:	89 04 24             	mov    %eax,(%esp)
 842b03c:	e8 2b 73 cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 842b041:	83 f8 04             	cmp    $0x4,%eax
 842b044:	76 07                	jbe    842b04d <_ZN20DB_SecurityCardIssue8dispatchEiiP6Stream+0xb9>
 842b046:	b8 01 00 00 00       	mov    $0x1,%eax
 842b04b:	eb 05                	jmp    842b052 <_ZN20DB_SecurityCardIssue8dispatchEiiP6Stream+0xbe>
 842b04d:	b8 00 00 00 00       	mov    $0x0,%eax
 842b052:	84 c0                	test   %al,%al
 842b054:	74 2c                	je     842b082 <_ZN20DB_SecurityCardIssue8dispatchEiiP6Stream+0xee>
 842b056:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 842b05d:	e8 9e a7 2f 00       	call   8725800 <__cxa_allocate_exception>
 842b062:	89 c2                	mov    %eax,%edx
 842b064:	c7 02 77 00 00 00    	movl   $0x77,(%edx)
 842b06a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842b071:	00 
 842b072:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 842b079:	08 
 842b07a:	89 04 24             	mov    %eax,(%esp)
 842b07d:	e8 ce 9b 2f 00       	call   8724c50 <__cxa_throw>
 842b082:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842b085:	8b 00                	mov    (%eax),%eax
 842b087:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842b08e:	00 
 842b08f:	89 04 24             	mov    %eax,(%esp)
 842b092:	e8 b4 df cd ff       	call   810904b <_Z14NumberToStringji>
 842b097:	89 44 24 08          	mov    %eax,0x8(%esp)
 842b09b:	c7 44 24 04 64 fd c4 	movl   $0x8c4fd64,0x4(%esp)
 842b0a2:	08 
 842b0a3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842b0a6:	89 04 24             	mov    %eax,(%esp)
 842b0a9:	e8 12 91 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842b0ae:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842b0b5:	00 
 842b0b6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842b0b9:	89 04 24             	mov    %eax,(%esp)
 842b0bc:	e8 65 92 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842b0c1:	83 f0 01             	xor    $0x1,%eax
 842b0c4:	84 c0                	test   %al,%al
 842b0c6:	74 2c                	je     842b0f4 <_ZN20DB_SecurityCardIssue8dispatchEiiP6Stream+0x160>
 842b0c8:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 842b0cf:	e8 2c a7 2f 00       	call   8725800 <__cxa_allocate_exception>
 842b0d4:	89 c2                	mov    %eax,%edx
 842b0d6:	c7 02 01 00 00 00    	movl   $0x1,(%edx)
 842b0dc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842b0e3:	00 
 842b0e4:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 842b0eb:	08 
 842b0ec:	89 04 24             	mov    %eax,(%esp)
 842b0ef:	e8 5c 9b 2f 00       	call   8724c50 <__cxa_throw>
 842b0f4:	c7 45 d7 00 00 00 00 	movl   $0x0,-0x29(%ebp)
 842b0fb:	c6 45 db 00          	movb   $0x0,-0x25(%ebp)
 842b0ff:	8d 45 d7             	lea    -0x29(%ebp),%eax
 842b102:	89 04 24             	mov    %eax,(%esp)
 842b105:	e8 63 70 28 00       	call   86b216d <_Z28generateSecurityCardQuestionPc>
 842b10a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842b10d:	8d 50 5e             	lea    0x5e(%eax),%edx
 842b110:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 842b117:	00 
 842b118:	8d 45 d7             	lea    -0x29(%ebp),%eax
 842b11b:	89 44 24 04          	mov    %eax,0x4(%esp)
 842b11f:	89 14 24             	mov    %edx,(%esp)
 842b122:	e8 a9 27 c5 ff       	call   807d8d0 <strncpy@plt>
 842b127:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842b12a:	89 04 24             	mov    %eax,(%esp)
 842b12d:	e8 3a 72 cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 842b132:	85 c0                	test   %eax,%eax
 842b134:	0f 94 c0             	sete   %al
 842b137:	84 c0                	test   %al,%al
 842b139:	74 7f                	je     842b1ba <_ZN20DB_SecurityCardIssue8dispatchEiiP6Stream+0x226>
 842b13b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842b13e:	83 c0 37             	add    $0x37,%eax
 842b141:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 842b147:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842b14a:	8d 78 04             	lea    0x4(%eax),%edi
 842b14d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842b150:	8d 70 31             	lea    0x31(%eax),%esi
 842b153:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842b156:	8d 58 63             	lea    0x63(%eax),%ebx
 842b159:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842b15c:	8b 00                	mov    (%eax),%eax
 842b15e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842b165:	00 
 842b166:	89 04 24             	mov    %eax,(%esp)
 842b169:	e8 dd de cd ff       	call   810904b <_Z14NumberToStringji>
 842b16e:	8d 55 d7             	lea    -0x29(%ebp),%edx
 842b171:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 842b175:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 842b17b:	89 54 24 18          	mov    %edx,0x18(%esp)
 842b17f:	89 7c 24 14          	mov    %edi,0x14(%esp)
 842b183:	89 74 24 10          	mov    %esi,0x10(%esp)
 842b187:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 842b18b:	89 44 24 08          	mov    %eax,0x8(%esp)
 842b18f:	c7 44 24 04 c0 fd c4 	movl   $0x8c4fdc0,0x4(%esp)
 842b196:	08 
 842b197:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842b19a:	89 04 24             	mov    %eax,(%esp)
 842b19d:	e8 1e 90 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842b1a2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842b1a9:	00 
 842b1aa:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842b1ad:	89 04 24             	mov    %eax,(%esp)
 842b1b0:	e8 71 91 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842b1b5:	e9 7f 01 00 00       	jmp    842b339 <_ZN20DB_SecurityCardIssue8dispatchEiiP6Stream+0x3a5>
 842b1ba:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 842b1c1:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 842b1c8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842b1cb:	89 04 24             	mov    %eax,(%esp)
 842b1ce:	e8 e9 92 fc ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 842b1d3:	83 f0 01             	xor    $0x1,%eax
 842b1d6:	84 c0                	test   %al,%al
 842b1d8:	74 2c                	je     842b206 <_ZN20DB_SecurityCardIssue8dispatchEiiP6Stream+0x272>
 842b1da:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 842b1e1:	e8 1a a6 2f 00       	call   8725800 <__cxa_allocate_exception>
 842b1e6:	89 c2                	mov    %eax,%edx
 842b1e8:	c7 02 01 00 00 00    	movl   $0x1,(%edx)
 842b1ee:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842b1f5:	00 
 842b1f6:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 842b1fd:	08 
 842b1fe:	89 04 24             	mov    %eax,(%esp)
 842b201:	e8 4a 9a 2f 00       	call   8724c50 <__cxa_throw>
 842b206:	8d 45 d0             	lea    -0x30(%ebp),%eax
 842b209:	89 44 24 08          	mov    %eax,0x8(%esp)
 842b20d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842b214:	00 
 842b215:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842b218:	89 04 24             	mov    %eax,(%esp)
 842b21b:	e8 d2 70 cb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 842b220:	8d 45 cc             	lea    -0x34(%ebp),%eax
 842b223:	89 44 24 08          	mov    %eax,0x8(%esp)
 842b227:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842b22e:	00 
 842b22f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842b232:	89 04 24             	mov    %eax,(%esp)
 842b235:	e8 b8 70 cb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 842b23a:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 842b241:	e8 58 0a ca ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 842b246:	89 45 c8             	mov    %eax,-0x38(%ebp)
 842b249:	8b 45 cc             	mov    -0x34(%ebp),%eax
 842b24c:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 842b24f:	8d 45 98             	lea    -0x68(%ebp),%eax
 842b252:	89 44 24 04          	mov    %eax,0x4(%esp)
 842b256:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 842b259:	89 04 24             	mov    %eax,(%esp)
 842b25c:	e8 ff 30 c5 ff       	call   807e360 <localtime_r@plt>
 842b261:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 842b267:	89 44 24 04          	mov    %eax,0x4(%esp)
 842b26b:	8d 45 c8             	lea    -0x38(%ebp),%eax
 842b26e:	89 04 24             	mov    %eax,(%esp)
 842b271:	e8 ea 30 c5 ff       	call   807e360 <localtime_r@plt>
 842b276:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 842b279:	8b 45 88             	mov    -0x78(%ebp),%eax
 842b27c:	39 c2                	cmp    %eax,%edx
 842b27e:	75 3d                	jne    842b2bd <_ZN20DB_SecurityCardIssue8dispatchEiiP6Stream+0x329>
 842b280:	8b 45 d0             	mov    -0x30(%ebp),%eax
 842b283:	83 c0 01             	add    $0x1,%eax
 842b286:	89 45 d0             	mov    %eax,-0x30(%ebp)
 842b289:	8b 45 d0             	mov    -0x30(%ebp),%eax
 842b28c:	83 f8 03             	cmp    $0x3,%eax
 842b28f:	76 33                	jbe    842b2c4 <_ZN20DB_SecurityCardIssue8dispatchEiiP6Stream+0x330>
 842b291:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 842b298:	e8 63 a5 2f 00       	call   8725800 <__cxa_allocate_exception>
 842b29d:	89 c2                	mov    %eax,%edx
 842b29f:	c7 02 78 00 00 00    	movl   $0x78,(%edx)
 842b2a5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842b2ac:	00 
 842b2ad:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 842b2b4:	08 
 842b2b5:	89 04 24             	mov    %eax,(%esp)
 842b2b8:	e8 93 99 2f 00       	call   8724c50 <__cxa_throw>
 842b2bd:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 842b2c4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842b2c7:	8b 00                	mov    (%eax),%eax
 842b2c9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842b2d0:	00 
 842b2d1:	89 04 24             	mov    %eax,(%esp)
 842b2d4:	e8 72 dd cd ff       	call   810904b <_Z14NumberToStringji>
 842b2d9:	8b 55 d0             	mov    -0x30(%ebp),%edx
 842b2dc:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 842b2df:	8d 79 37             	lea    0x37(%ecx),%edi
 842b2e2:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 842b2e5:	8d 71 04             	lea    0x4(%ecx),%esi
 842b2e8:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 842b2eb:	8d 59 31             	lea    0x31(%ecx),%ebx
 842b2ee:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 842b2f1:	83 c1 63             	add    $0x63,%ecx
 842b2f4:	89 44 24 20          	mov    %eax,0x20(%esp)
 842b2f8:	8d 45 d7             	lea    -0x29(%ebp),%eax
 842b2fb:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 842b2ff:	89 54 24 18          	mov    %edx,0x18(%esp)
 842b303:	89 7c 24 14          	mov    %edi,0x14(%esp)
 842b307:	89 74 24 10          	mov    %esi,0x10(%esp)
 842b30b:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 842b30f:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 842b313:	c7 44 24 04 8c fe c4 	movl   $0x8c4fe8c,0x4(%esp)
 842b31a:	08 
 842b31b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842b31e:	89 04 24             	mov    %eax,(%esp)
 842b321:	e8 9a 8e fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842b326:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842b32d:	00 
 842b32e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842b331:	89 04 24             	mov    %eax,(%esp)
 842b334:	e8 ed 8f fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842b339:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842b33c:	8b 00                	mov    (%eax),%eax
 842b33e:	89 44 24 04          	mov    %eax,0x4(%esp)
 842b342:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842b345:	89 04 24             	mov    %eax,(%esp)
 842b348:	e8 c5 fb ff ff       	call   842af12 <_Z19turnOffSecurityFlagP5MySQLj>
 842b34d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842b350:	8d 58 5e             	lea    0x5e(%eax),%ebx
 842b353:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842b356:	8d 48 37             	lea    0x37(%eax),%ecx
 842b359:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842b35c:	8d 50 04             	lea    0x4(%eax),%edx
 842b35f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842b362:	83 c0 25             	add    $0x25,%eax
 842b365:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 842b36c:	00 
 842b36d:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 842b371:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 842b375:	89 54 24 0c          	mov    %edx,0xc(%esp)
 842b379:	89 44 24 08          	mov    %eax,0x8(%esp)
 842b37d:	8b 45 10             	mov    0x10(%ebp),%eax
 842b380:	89 44 24 04          	mov    %eax,0x4(%esp)
 842b384:	8b 45 08             	mov    0x8(%ebp),%eax
 842b387:	89 04 24             	mov    %eax,(%esp)
 842b38a:	e8 81 00 00 00       	call   842b410 <_ZN20DB_SecurityCardIssue11_sendResultEiPKcS1_S1_S1_10ENUM_ERROR>
 842b38f:	eb 6f                	jmp    842b400 <_ZN20DB_SecurityCardIssue8dispatchEiiP6Stream+0x46c>
 842b391:	83 fa 01             	cmp    $0x1,%edx
 842b394:	74 08                	je     842b39e <_ZN20DB_SecurityCardIssue8dispatchEiiP6Stream+0x40a>
 842b396:	89 04 24             	mov    %eax,(%esp)
 842b399:	e8 b2 83 6b 00       	call   8ae3750 <_Unwind_Resume>
 842b39e:	89 04 24             	mov    %eax,(%esp)
 842b3a1:	e8 3a a9 2f 00       	call   8725ce0 <__cxa_begin_catch>
 842b3a6:	8b 00                	mov    (%eax),%eax
 842b3a8:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 842b3ab:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842b3ae:	89 44 24 18          	mov    %eax,0x18(%esp)
 842b3b2:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 842b3b9:	00 
 842b3ba:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 842b3c1:	00 
 842b3c2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 842b3c9:	00 
 842b3ca:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842b3d1:	00 
 842b3d2:	8b 45 10             	mov    0x10(%ebp),%eax
 842b3d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 842b3d9:	8b 45 08             	mov    0x8(%ebp),%eax
 842b3dc:	89 04 24             	mov    %eax,(%esp)
 842b3df:	e8 2c 00 00 00       	call   842b410 <_ZN20DB_SecurityCardIssue11_sendResultEiPKcS1_S1_S1_10ENUM_ERROR>
 842b3e4:	eb 15                	jmp    842b3fb <_ZN20DB_SecurityCardIssue8dispatchEiiP6Stream+0x467>
 842b3e6:	89 d3                	mov    %edx,%ebx
 842b3e8:	89 c6                	mov    %eax,%esi
 842b3ea:	e8 41 a8 2f 00       	call   8725c30 <__cxa_end_catch>
 842b3ef:	89 f0                	mov    %esi,%eax
 842b3f1:	89 da                	mov    %ebx,%edx
 842b3f3:	89 04 24             	mov    %eax,(%esp)
 842b3f6:	e8 55 83 6b 00       	call   8ae3750 <_Unwind_Resume>
 842b3fb:	e8 30 a8 2f 00       	call   8725c30 <__cxa_end_catch>
 842b400:	b8 01 00 00 00       	mov    $0x1,%eax
 842b405:	81 c4 cc 00 00 00    	add    $0xcc,%esp
 842b40b:	5b                   	pop    %ebx
 842b40c:	5e                   	pop    %esi
 842b40d:	5f                   	pop    %edi
 842b40e:	5d                   	pop    %ebp
 842b40f:	c3                   	ret

```

```c
// DB_SecurityCardIssue::dispatch @ 0x842af94

/* DB_SecurityCardIssue::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_SecurityCardIssue::dispatch(DB_SecurityCardIssue *this,int param_1,int param_2,Stream *param_3)

{
  SIG_SECURITY_CARD_ISSUE *pSVar1;
  SIG_SECURITY_CARD_ISSUE *pSVar2;
  SIG_SECURITY_CARD_ISSUE *pSVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  SIG_SECURITY_CARD_ISSUE *pSVar10;
  Stream *pSVar11;
  tm local_98;
  tm local_6c;
  uint local_40;
  time_t local_3c;
  uint local_38;
  uint local_34;
  char local_2d [5];
  SIG_SECURITY_CARD_ISSUE *local_28;
  MySQL *local_24;
  
  pSVar11 = param_3;
  cVar5 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar5 != '\x01') {
    return 0;
  }
  local_28 = Stream::GetOutBuffer<SIG_SECURITY_CARD_ISSUE>(param_3);
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0,pSVar11);
                    /* try { // try from 0842b017 to 0842b38e has its CatchHandler @ 0842b391 */
  MySQL::set_query(local_24,
                   "seLect apply_flag from member_security_card where phone=\'%s\' and apply_flag=1"
                   ,local_28 + 99);
  cVar5 = MySQL::exec(local_24,true);
  if ((cVar5 == '\x01') && (uVar6 = MySQL::get_n_rows(local_24), uVar6 < 5)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    uVar8 = NumberToString(*(uint *)local_28,0);
    MySQL::set_query(local_24,
                     "seLect re_issue_cnt,unix_timestamp(last_issue_time) from member_security_card where m_id=%s"
                     ,uVar8);
    cVar5 = MySQL::exec(local_24,true);
    if (cVar5 != '\x01') {
      puVar7 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar7 = 1;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
    }
    local_2d[0] = '\0';
    local_2d[1] = '\0';
    local_2d[2] = '\0';
    local_2d[3] = '\0';
    local_2d[4] = 0;
    generateSecurityCardQuestion(local_2d);
    strncpy((char *)(local_28 + 0x5e),local_2d,5);
    iVar9 = MySQL::get_n_rows(local_24);
    if (iVar9 == 0) {
      pSVar10 = local_28 + 0x37;
      pSVar1 = local_28 + 4;
      pSVar2 = local_28 + 0x31;
      pSVar3 = local_28 + 99;
      uVar8 = NumberToString(*(uint *)local_28,0);
      MySQL::set_query(local_24,
                       "inSert into member_security_card(m_id,occ_time,phone,cert_key,server_key,card,fail_cnt,re_issue_cnt,last_issue_time,validity_time,apply_flag,q_pos) values(%s,now(),\'%s\',\'%s\',\'%s\',\'%s\',0,0,now(),0,0,\'%s\')"
                       ,uVar8,pSVar3,pSVar2,pSVar1,pSVar10,local_2d);
      MySQL::exec(local_24,true);
    }
    else {
      local_34 = 0;
      local_38 = 0;
      cVar5 = MySQL::fetch(local_24);
      if (cVar5 != '\x01') {
        puVar7 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar7 = 1;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
      }
      MySQL::get_uint(local_24,0,&local_34);
      MySQL::get_uint(local_24,1,&local_38);
      local_3c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      local_40 = local_38;
      localtime_r((time_t *)&local_40,&local_6c);
      localtime_r(&local_3c,&local_98);
      if (local_6c.tm_yday == local_98.tm_yday) {
        local_34 = local_34 + 1;
        if (3 < local_34) {
          puVar7 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar7 = 0x78;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
        }
      }
      else {
        local_34 = 0;
      }
      uVar8 = NumberToString(*(uint *)local_28,0);
      MySQL::set_query(local_24,
                       "upDate member_security_card set phone=\'%s\',cert_key=\'%s\',server_key=\'%s\',card=\'%s\',fail_cnt=0,re_issue_cnt=%d,last_issue_time=now(),validity_time=0,apply_flag=0,q_pos=\'%s\' where m_id=%s"
                       ,local_28 + 99,local_28 + 0x31,local_28 + 4,local_28 + 0x37,local_34,local_2d
                       ,uVar8);
      MySQL::exec(local_24,true);
    }
    turnOffSecurityFlag(local_24,*(uint *)local_28);
    _sendResult(this,param_2,local_28 + 0x25,local_28 + 4,local_28 + 0x37,local_28 + 0x5e,0);
    return 1;
  }
  puVar7 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar7 = 0x77;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
}

```

---

## makeRequest

```asm
// === 0842b57a DB_SecurityCardIssue::makeRequest  [0x0842b57a-0x842b6e5] ===
 842b57a:	55                   	push   %ebp
 842b57b:	89 e5                	mov    %esp,%ebp
 842b57d:	56                   	push   %esi
 842b57e:	53                   	push   %ebx
 842b57f:	83 ec 20             	sub    $0x20,%esp
 842b582:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842b587:	c7 44 24 08 0a 6e 00 	movl   $0x6e0a,0x8(%esp)
 842b58e:	00 
 842b58f:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842b596:	08 
 842b597:	89 04 24             	mov    %eax,(%esp)
 842b59a:	e8 e7 44 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842b59f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842b5a6:	00 
 842b5a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 842b5ab:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842b5ae:	89 04 24             	mov    %eax,(%esp)
 842b5b1:	e8 70 d6 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842b5b6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842b5b9:	89 04 24             	mov    %eax,(%esp)
 842b5bc:	e8 85 d6 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842b5c1:	c7 44 24 04 fd 00 00 	movl   $0xfd,0x4(%esp)
 842b5c8:	00 
 842b5c9:	89 04 24             	mov    %eax,(%esp)
 842b5cc:	e8 85 d6 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842b5d1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842b5d4:	89 04 24             	mov    %eax,(%esp)
 842b5d7:	e8 6a d6 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842b5dc:	8b 55 08             	mov    0x8(%ebp),%edx
 842b5df:	89 54 24 04          	mov    %edx,0x4(%esp)
 842b5e3:	89 04 24             	mov    %eax,(%esp)
 842b5e6:	e8 6b d6 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842b5eb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842b5ee:	89 04 24             	mov    %eax,(%esp)
 842b5f1:	e8 58 d6 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 842b5f6:	89 04 24             	mov    %eax,(%esp)
 842b5f9:	e8 0a 70 02 00       	call   8452608 <_ZN12CStreamGuard11GetInBufferI23SIG_SECURITY_CARD_ISSUEEEPT_v>
 842b5fe:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842b601:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842b604:	8b 55 0c             	mov    0xc(%ebp),%edx
 842b607:	89 10                	mov    %edx,(%eax)
 842b609:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842b60c:	8d 50 31             	lea    0x31(%eax),%edx
 842b60f:	c7 44 24 08 06 00 00 	movl   $0x6,0x8(%esp)
 842b616:	00 
 842b617:	8b 45 10             	mov    0x10(%ebp),%eax
 842b61a:	89 44 24 04          	mov    %eax,0x4(%esp)
 842b61e:	89 14 24             	mov    %edx,(%esp)
 842b621:	e8 aa 22 c5 ff       	call   807d8d0 <strncpy@plt>
 842b626:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842b629:	8d 50 04             	lea    0x4(%eax),%edx
 842b62c:	c7 44 24 08 21 00 00 	movl   $0x21,0x8(%esp)
 842b633:	00 
 842b634:	8b 45 14             	mov    0x14(%ebp),%eax
 842b637:	89 44 24 04          	mov    %eax,0x4(%esp)
 842b63b:	89 14 24             	mov    %edx,(%esp)
 842b63e:	e8 8d 22 c5 ff       	call   807d8d0 <strncpy@plt>
 842b643:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842b646:	8d 50 25             	lea    0x25(%eax),%edx
 842b649:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 842b650:	00 
 842b651:	8b 45 18             	mov    0x18(%ebp),%eax
 842b654:	89 44 24 04          	mov    %eax,0x4(%esp)
 842b658:	89 14 24             	mov    %edx,(%esp)
 842b65b:	e8 70 22 c5 ff       	call   807d8d0 <strncpy@plt>
 842b660:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842b663:	8d 50 37             	lea    0x37(%eax),%edx
 842b666:	c7 44 24 08 27 00 00 	movl   $0x27,0x8(%esp)
 842b66d:	00 
 842b66e:	8b 45 20             	mov    0x20(%ebp),%eax
 842b671:	89 44 24 04          	mov    %eax,0x4(%esp)
 842b675:	89 14 24             	mov    %edx,(%esp)
 842b678:	e8 53 22 c5 ff       	call   807d8d0 <strncpy@plt>
 842b67d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842b680:	8d 50 63             	lea    0x63(%eax),%edx
 842b683:	c7 44 24 08 29 00 00 	movl   $0x29,0x8(%esp)
 842b68a:	00 
 842b68b:	8b 45 1c             	mov    0x1c(%ebp),%eax
 842b68e:	89 44 24 04          	mov    %eax,0x4(%esp)
 842b692:	89 14 24             	mov    %edx,(%esp)
 842b695:	e8 36 22 c5 ff       	call   807d8d0 <strncpy@plt>
 842b69a:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842b69f:	8d 55 ec             	lea    -0x14(%ebp),%edx
 842b6a2:	89 54 24 08          	mov    %edx,0x8(%esp)
 842b6a6:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 842b6ad:	00 
 842b6ae:	89 04 24             	mov    %eax,(%esp)
 842b6b1:	e8 28 59 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842b6b6:	eb 1b                	jmp    842b6d3 <_ZN20DB_SecurityCardIssue11makeRequestEijPKcS1_S1_S1_S1_+0x159>
 842b6b8:	89 d3                	mov    %edx,%ebx
 842b6ba:	89 c6                	mov    %eax,%esi
 842b6bc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842b6bf:	89 04 24             	mov    %eax,(%esp)
 842b6c2:	e8 0b 12 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842b6c7:	89 f0                	mov    %esi,%eax
 842b6c9:	89 da                	mov    %ebx,%edx
 842b6cb:	89 04 24             	mov    %eax,(%esp)
 842b6ce:	e8 7d 80 6b 00       	call   8ae3750 <_Unwind_Resume>
 842b6d3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842b6d6:	89 04 24             	mov    %eax,(%esp)
 842b6d9:	e8 f4 11 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842b6de:	83 c4 20             	add    $0x20,%esp
 842b6e1:	5b                   	pop    %ebx
 842b6e2:	5e                   	pop    %esi
 842b6e3:	5d                   	pop    %ebp
 842b6e4:	c3                   	ret
 842b6e5:	90                   	nop

```

```c
// DB_SecurityCardIssue::makeRequest @ 0x842b57a

/* DB_SecurityCardIssue::makeRequest(int, unsigned int, char const*, char const*, char const*, char
   const*, char const*) */

void DB_SecurityCardIssue::makeRequest
               (int param_1,uint param_2,char *param_3,char *param_4,char *param_5,char *param_6,
               char *param_7)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SECURITY_CARD_ISSUE *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6e0a);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842b5cc to 0842b6b5 has its CatchHandler @ 0842b6b8 */
  CStreamGuard::operator<<(pCVar2,0xfd);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SECURITY_CARD_ISSUE>(pCVar2);
  *(uint *)local_10 = param_2;
  strncpy((char *)(local_10 + 0x31),param_3,6);
  strncpy((char *)(local_10 + 4),param_4,0x21);
  strncpy((char *)(local_10 + 0x25),param_5,0xc);
  strncpy((char *)(local_10 + 0x37),param_7,0x27);
  strncpy((char *)(local_10 + 99),param_6,0x29);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

