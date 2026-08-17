# DB_LoadPrivateStore

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0841c08c DB_LoadPrivateStore::dispatch  [0x0841c08c-0x841c427] ===
 841c08c:	55                   	push   %ebp
 841c08d:	89 e5                	mov    %esp,%ebp
 841c08f:	56                   	push   %esi
 841c090:	53                   	push   %ebx
 841c091:	83 ec 70             	sub    $0x70,%esp
 841c094:	8b 45 08             	mov    0x8(%ebp),%eax
 841c097:	8b 55 14             	mov    0x14(%ebp),%edx
 841c09a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 841c09e:	8b 55 10             	mov    0x10(%ebp),%edx
 841c0a1:	89 54 24 08          	mov    %edx,0x8(%esp)
 841c0a5:	8b 55 0c             	mov    0xc(%ebp),%edx
 841c0a8:	89 54 24 04          	mov    %edx,0x4(%esp)
 841c0ac:	89 04 24             	mov    %eax,(%esp)
 841c0af:	e8 c8 fe fd ff       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 841c0b4:	83 f0 01             	xor    $0x1,%eax
 841c0b7:	84 c0                	test   %al,%al
 841c0b9:	74 0a                	je     841c0c5 <_ZN19DB_LoadPrivateStore8dispatchEiiP6Stream+0x39>
 841c0bb:	bb 00 00 00 00       	mov    $0x0,%ebx
 841c0c0:	e9 5a 03 00 00       	jmp    841c41f <_ZN19DB_LoadPrivateStore8dispatchEiiP6Stream+0x393>
 841c0c5:	8d 45 a8             	lea    -0x58(%ebp),%eax
 841c0c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 841c0cc:	8b 45 14             	mov    0x14(%ebp),%eax
 841c0cf:	89 04 24             	mov    %eax,(%esp)
 841c0d2:	e8 ed 04 20 00       	call   861c5c4 <_ZN6StreamrsERi>
 841c0d7:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841c0dc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841c0e3:	00 
 841c0e4:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 841c0eb:	00 
 841c0ec:	89 04 24             	mov    %eax,(%esp)
 841c0ef:	e8 4a 91 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841c0f4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 841c0f7:	8b 45 a8             	mov    -0x58(%ebp),%eax
 841c0fa:	89 44 24 08          	mov    %eax,0x8(%esp)
 841c0fe:	c7 44 24 04 0c b9 c4 	movl   $0x8c4b90c,0x4(%esp)
 841c105:	08 
 841c106:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841c109:	89 04 24             	mov    %eax,(%esp)
 841c10c:	e8 af 80 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841c111:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841c118:	00 
 841c119:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841c11c:	89 04 24             	mov    %eax,(%esp)
 841c11f:	e8 02 82 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841c124:	88 45 ef             	mov    %al,-0x11(%ebp)
 841c127:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 841c12b:	83 f0 01             	xor    $0x1,%eax
 841c12e:	84 c0                	test   %al,%al
 841c130:	74 47                	je     841c179 <_ZN19DB_LoadPrivateStore8dispatchEiiP6Stream+0xed>
 841c132:	8b 5d a8             	mov    -0x58(%ebp),%ebx
 841c135:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 841c13c:	00 
 841c13d:	c7 44 24 08 8b 4f 00 	movl   $0x4f8b,0x8(%esp)
 841c144:	00 
 841c145:	c7 44 24 04 e0 c9 c5 	movl   $0x8c5c9e0,0x4(%esp)
 841c14c:	08 
 841c14d:	8d 45 ac             	lea    -0x54(%ebp),%eax
 841c150:	89 04 24             	mov    %eax,(%esp)
 841c153:	e8 c0 35 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 841c158:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 841c15c:	c7 44 24 04 44 b9 c4 	movl   $0x8c4b944,0x4(%esp)
 841c163:	08 
 841c164:	8d 45 ac             	lea    -0x54(%ebp),%eax
 841c167:	89 04 24             	mov    %eax,(%esp)
 841c16a:	e8 19 36 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 841c16f:	bb 00 00 00 00       	mov    $0x0,%ebx
 841c174:	e9 a6 02 00 00       	jmp    841c41f <_ZN19DB_LoadPrivateStore8dispatchEiiP6Stream+0x393>
 841c179:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 841c17e:	c7 44 24 08 90 4f 00 	movl   $0x4f90,0x8(%esp)
 841c185:	00 
 841c186:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 841c18d:	08 
 841c18e:	89 04 24             	mov    %eax,(%esp)
 841c191:	e8 f0 38 e7 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 841c196:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 841c19d:	00 
 841c19e:	89 44 24 04          	mov    %eax,0x4(%esp)
 841c1a2:	8d 45 a0             	lea    -0x60(%ebp),%eax
 841c1a5:	89 04 24             	mov    %eax,(%esp)
 841c1a8:	e8 79 ca ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 841c1ad:	8d 45 a0             	lea    -0x60(%ebp),%eax
 841c1b0:	89 04 24             	mov    %eax,(%esp)
 841c1b3:	e8 8e ca ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 841c1b8:	8b 55 0c             	mov    0xc(%ebp),%edx
 841c1bb:	89 54 24 04          	mov    %edx,0x4(%esp)
 841c1bf:	89 04 24             	mov    %eax,(%esp)
 841c1c2:	e8 8f ca ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 841c1c7:	8d 45 a0             	lea    -0x60(%ebp),%eax
 841c1ca:	89 04 24             	mov    %eax,(%esp)
 841c1cd:	e8 74 ca ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 841c1d2:	8b 55 10             	mov    0x10(%ebp),%edx
 841c1d5:	89 54 24 04          	mov    %edx,0x4(%esp)
 841c1d9:	89 04 24             	mov    %eax,(%esp)
 841c1dc:	e8 75 ca ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 841c1e1:	8d 45 a0             	lea    -0x60(%ebp),%eax
 841c1e4:	89 04 24             	mov    %eax,(%esp)
 841c1e7:	e8 62 ca ca ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 841c1ec:	89 04 24             	mov    %eax,(%esp)
 841c1ef:	e8 a8 51 03 00       	call   845139c <_ZN12CStreamGuard11GetInBufferIN13private_store17SIG_PRIVATE_STOREEEEPT_v>
 841c1f4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 841c1f7:	c7 44 24 08 34 04 00 	movl   $0x434,0x8(%esp)
 841c1fe:	00 
 841c1ff:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841c206:	00 
 841c207:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841c20a:	89 04 24             	mov    %eax,(%esp)
 841c20d:	e8 ae 1a c6 ff       	call   807dcc0 <memset@plt>
 841c212:	8b 55 a8             	mov    -0x58(%ebp),%edx
 841c215:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841c218:	89 10                	mov    %edx,(%eax)
 841c21a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841c21d:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 841c221:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841c224:	89 04 24             	mov    %eax,(%esp)
 841c227:	e8 40 61 cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 841c22c:	85 c0                	test   %eax,%eax
 841c22e:	0f 95 c0             	setne  %al
 841c231:	84 c0                	test   %al,%al
 841c233:	0f 84 9d 01 00 00    	je     841c3d6 <_ZN19DB_LoadPrivateStore8dispatchEiiP6Stream+0x34a>
 841c239:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841c23c:	89 04 24             	mov    %eax,(%esp)
 841c23f:	e8 78 82 fd ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 841c244:	88 45 ef             	mov    %al,-0x11(%ebp)
 841c247:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 841c24b:	83 f0 01             	xor    $0x1,%eax
 841c24e:	84 c0                	test   %al,%al
 841c250:	74 5b                	je     841c2ad <_ZN19DB_LoadPrivateStore8dispatchEiiP6Stream+0x221>
 841c252:	8b 5d a8             	mov    -0x58(%ebp),%ebx
 841c255:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 841c25c:	00 
 841c25d:	c7 44 24 08 a0 4f 00 	movl   $0x4fa0,0x8(%esp)
 841c264:	00 
 841c265:	c7 44 24 04 e0 c9 c5 	movl   $0x8c5c9e0,0x4(%esp)
 841c26c:	08 
 841c26d:	8d 45 bc             	lea    -0x44(%ebp),%eax
 841c270:	89 04 24             	mov    %eax,(%esp)
 841c273:	e8 a0 34 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 841c278:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 841c27c:	c7 44 24 04 7c b9 c4 	movl   $0x8c4b97c,0x4(%esp)
 841c283:	08 
 841c284:	8d 45 bc             	lea    -0x44(%ebp),%eax
 841c287:	89 04 24             	mov    %eax,(%esp)
 841c28a:	e8 f9 34 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 841c28f:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 841c294:	8d 55 a0             	lea    -0x60(%ebp),%edx
 841c297:	89 54 24 04          	mov    %edx,0x4(%esp)
 841c29b:	89 04 24             	mov    %eax,(%esp)
 841c29e:	e8 dd 4d ce ff       	call   8101080 <_ZN10StreamPool4FreeER12CStreamGuard>
 841c2a3:	bb 00 00 00 00       	mov    $0x0,%ebx
 841c2a8:	e9 67 01 00 00       	jmp    841c414 <_ZN19DB_LoadPrivateStore8dispatchEiiP6Stream+0x388>
 841c2ad:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841c2b0:	83 c0 08             	add    $0x8,%eax
 841c2b3:	c7 44 24 0c 28 04 00 	movl   $0x428,0xc(%esp)
 841c2ba:	00 
 841c2bb:	89 44 24 08          	mov    %eax,0x8(%esp)
 841c2bf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841c2c6:	00 
 841c2c7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841c2ca:	89 04 24             	mov    %eax,(%esp)
 841c2cd:	e8 48 90 d0 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 841c2d2:	88 45 ef             	mov    %al,-0x11(%ebp)
 841c2d5:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 841c2d9:	83 f0 01             	xor    $0x1,%eax
 841c2dc:	84 c0                	test   %al,%al
 841c2de:	74 5b                	je     841c33b <_ZN19DB_LoadPrivateStore8dispatchEiiP6Stream+0x2af>
 841c2e0:	8b 5d a8             	mov    -0x58(%ebp),%ebx
 841c2e3:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 841c2ea:	00 
 841c2eb:	c7 44 24 08 a8 4f 00 	movl   $0x4fa8,0x8(%esp)
 841c2f2:	00 
 841c2f3:	c7 44 24 04 e0 c9 c5 	movl   $0x8c5c9e0,0x4(%esp)
 841c2fa:	08 
 841c2fb:	8d 45 cc             	lea    -0x34(%ebp),%eax
 841c2fe:	89 04 24             	mov    %eax,(%esp)
 841c301:	e8 12 34 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 841c306:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 841c30a:	c7 44 24 04 b4 b9 c4 	movl   $0x8c4b9b4,0x4(%esp)
 841c311:	08 
 841c312:	8d 45 cc             	lea    -0x34(%ebp),%eax
 841c315:	89 04 24             	mov    %eax,(%esp)
 841c318:	e8 6b 34 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 841c31d:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 841c322:	8d 55 a0             	lea    -0x60(%ebp),%edx
 841c325:	89 54 24 04          	mov    %edx,0x4(%esp)
 841c329:	89 04 24             	mov    %eax,(%esp)
 841c32c:	e8 4f 4d ce ff       	call   8101080 <_ZN10StreamPool4FreeER12CStreamGuard>
 841c331:	bb 00 00 00 00       	mov    $0x0,%ebx
 841c336:	e9 d9 00 00 00       	jmp    841c414 <_ZN19DB_LoadPrivateStore8dispatchEiiP6Stream+0x388>
 841c33b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841c33e:	c6 40 04 01          	movb   $0x1,0x4(%eax)
 841c342:	c6 45 9f 00          	movb   $0x0,-0x61(%ebp)
 841c346:	8d 45 9f             	lea    -0x61(%ebp),%eax
 841c349:	89 44 24 08          	mov    %eax,0x8(%esp)
 841c34d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841c354:	00 
 841c355:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841c358:	89 04 24             	mov    %eax,(%esp)
 841c35b:	e8 f4 1a ce ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 841c360:	88 45 ef             	mov    %al,-0x11(%ebp)
 841c363:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 841c367:	83 f0 01             	xor    $0x1,%eax
 841c36a:	84 c0                	test   %al,%al
 841c36c:	74 58                	je     841c3c6 <_ZN19DB_LoadPrivateStore8dispatchEiiP6Stream+0x33a>
 841c36e:	8b 5d a8             	mov    -0x58(%ebp),%ebx
 841c371:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 841c378:	00 
 841c379:	c7 44 24 08 b4 4f 00 	movl   $0x4fb4,0x8(%esp)
 841c380:	00 
 841c381:	c7 44 24 04 e0 c9 c5 	movl   $0x8c5c9e0,0x4(%esp)
 841c388:	08 
 841c389:	8d 45 dc             	lea    -0x24(%ebp),%eax
 841c38c:	89 04 24             	mov    %eax,(%esp)
 841c38f:	e8 84 33 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 841c394:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 841c398:	c7 44 24 04 f8 b9 c4 	movl   $0x8c4b9f8,0x4(%esp)
 841c39f:	08 
 841c3a0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 841c3a3:	89 04 24             	mov    %eax,(%esp)
 841c3a6:	e8 dd 33 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 841c3ab:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 841c3b0:	8d 55 a0             	lea    -0x60(%ebp),%edx
 841c3b3:	89 54 24 04          	mov    %edx,0x4(%esp)
 841c3b7:	89 04 24             	mov    %eax,(%esp)
 841c3ba:	e8 c1 4c ce ff       	call   8101080 <_ZN10StreamPool4FreeER12CStreamGuard>
 841c3bf:	bb 00 00 00 00       	mov    $0x0,%ebx
 841c3c4:	eb 4e                	jmp    841c414 <_ZN19DB_LoadPrivateStore8dispatchEiiP6Stream+0x388>
 841c3c6:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 841c3ca:	0f be d0             	movsbl %al,%edx
 841c3cd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841c3d0:	89 90 30 04 00 00    	mov    %edx,0x430(%eax)
 841c3d6:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 841c3db:	8d 55 a0             	lea    -0x60(%ebp),%edx
 841c3de:	89 54 24 08          	mov    %edx,0x8(%esp)
 841c3e2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841c3e9:	00 
 841c3ea:	89 04 24             	mov    %eax,(%esp)
 841c3ed:	e8 ec 4b 15 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 841c3f2:	bb 01 00 00 00       	mov    $0x1,%ebx
 841c3f7:	eb 1b                	jmp    841c414 <_ZN19DB_LoadPrivateStore8dispatchEiiP6Stream+0x388>
 841c3f9:	89 d3                	mov    %edx,%ebx
 841c3fb:	89 c6                	mov    %eax,%esi
 841c3fd:	8d 45 a0             	lea    -0x60(%ebp),%eax
 841c400:	89 04 24             	mov    %eax,(%esp)
 841c403:	e8 ca 04 20 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 841c408:	89 f0                	mov    %esi,%eax
 841c40a:	89 da                	mov    %ebx,%edx
 841c40c:	89 04 24             	mov    %eax,(%esp)
 841c40f:	e8 3c 73 6c 00       	call   8ae3750 <_Unwind_Resume>
 841c414:	8d 45 a0             	lea    -0x60(%ebp),%eax
 841c417:	89 04 24             	mov    %eax,(%esp)
 841c41a:	e8 b3 04 20 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 841c41f:	89 d8                	mov    %ebx,%eax
 841c421:	83 c4 70             	add    $0x70,%esp
 841c424:	5b                   	pop    %ebx
 841c425:	5e                   	pop    %esi
 841c426:	5d                   	pop    %ebp
 841c427:	c3                   	ret

```

```c
// DB_LoadPrivateStore::dispatch @ 0x841c08c

/* DB_LoadPrivateStore::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadPrivateStore::dispatch(DB_LoadPrivateStore *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  char local_65;
  CStreamGuard local_64 [8];
  int local_5c;
  cMyTrace local_58 [16];
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [19];
  char local_15;
  MySQL *local_14;
  SIG_PRIVATE_STORE *local_10;
  
  pSVar2 = param_3;
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 != '\x01') {
    return 0;
  }
  Stream::operator>>(param_3,&local_5c);
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0,pSVar2);
  MySQL::set_query(local_14,"seLect store, use_doll from store where charac_no=%d",local_5c);
  local_15 = MySQL::exec(local_14,true);
  if (local_15 != '\x01') {
    cMyTrace::cMyTrace(local_58,"virtual bool DB_LoadPrivateStore::dispatch(int, int, Stream*)",
                       0x4f8b,5);
    cMyTrace::operator()(local_58,"DB_LoadPrivateStore::dispatch, exec ERROR charac_no=%d",local_5c)
    ;
    return 0;
  }
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x4f90);
  CStreamGuard::CStreamGuard(local_64,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_64);
                    /* try { // try from 0841c1c2 to 0841c3f1 has its CatchHandler @ 0841c3f9 */
  CStreamGuard::operator<<(pCVar3,param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_64);
  CStreamGuard::operator<<(pCVar3,param_2);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_64);
  local_10 = CStreamGuard::GetInBuffer<private_store::SIG_PRIVATE_STORE>(pCVar3);
  memset(local_10,0,0x434);
  *(int *)local_10 = local_5c;
  local_10[4] = (SIG_PRIVATE_STORE)0x0;
  iVar4 = MySQL::get_n_rows(local_14);
  if (iVar4 != 0) {
    local_15 = MySQL::fetch(local_14);
    if (local_15 != '\x01') {
      cMyTrace::cMyTrace(local_48,"virtual bool DB_LoadPrivateStore::dispatch(int, int, Stream*)",
                         0x4fa0,5);
      cMyTrace::operator()
                (local_48,"DB_LoadPrivateStore::dispatch, fetch ERROR charac_no=%d",local_5c);
      StreamPool::Free(GlobalData::s_stream_pool,local_64);
      uVar5 = 0;
      goto LAB_0841c414;
    }
    local_15 = MySQL::get_binary(local_14,0,local_10 + 8,0x428);
    if (local_15 != '\x01') {
      cMyTrace::cMyTrace(local_38,"virtual bool DB_LoadPrivateStore::dispatch(int, int, Stream*)",
                         0x4fa8,5);
      cMyTrace::operator()
                (local_38,"DB_LoadPrivateStore::GetUserInven, get_binary(2) ERROR charac_no=%d",
                 local_5c);
      StreamPool::Free(GlobalData::s_stream_pool,local_64);
      uVar5 = 0;
      goto LAB_0841c414;
    }
    local_10[4] = (SIG_PRIVATE_STORE)0x1;
    local_65 = '\0';
    local_15 = MySQL::get_byte(local_14,1,&local_65);
    if (local_15 != '\x01') {
      cMyTrace::cMyTrace(local_28,"virtual bool DB_LoadPrivateStore::dispatch(int, int, Stream*)",
                         0x4fb4,5);
      cMyTrace::operator()
                (local_28,"DB_LoadPrivateStore::Get_Use_State, get_byte ERROR charac_no=%d",local_5c
                );
      StreamPool::Free(GlobalData::s_stream_pool,local_64);
      uVar5 = 0;
      goto LAB_0841c414;
    }
    *(int *)(local_10 + 0x430) = (int)local_65;
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_64);
  uVar5 = 1;
LAB_0841c414:
  CStreamGuard::~CStreamGuard(local_64);
  return uVar5;
}

```

