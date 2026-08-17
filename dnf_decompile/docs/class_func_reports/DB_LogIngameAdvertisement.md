# DB_LogIngameAdvertisement

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0844c304 DB_LogIngameAdvertisement::dispatch  [0x0844c304-0x844c409] ===
 844c304:	55                   	push   %ebp
 844c305:	89 e5                	mov    %esp,%ebp
 844c307:	57                   	push   %edi
 844c308:	56                   	push   %esi
 844c309:	53                   	push   %ebx
 844c30a:	83 ec 5c             	sub    $0x5c,%esp
 844c30d:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 844c312:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844c319:	00 
 844c31a:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 844c321:	00 
 844c322:	89 04 24             	mov    %eax,(%esp)
 844c325:	e8 14 8f fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 844c32a:	89 45 dc             	mov    %eax,-0x24(%ebp)
 844c32d:	8b 45 14             	mov    0x14(%ebp),%eax
 844c330:	89 04 24             	mov    %eax,(%esp)
 844c333:	e8 92 85 00 00       	call   84548ca <_ZN6Stream12GetOutBufferI29SIG_IN_GAME_ADVERTISEMENT_LOGEEPT_v>
 844c338:	89 45 e0             	mov    %eax,-0x20(%ebp)
 844c33b:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 844c33f:	75 0a                	jne    844c34b <_ZN25DB_LogIngameAdvertisement8dispatchEiiP6Stream+0x47>
 844c341:	b8 00 00 00 00       	mov    $0x0,%eax
 844c346:	e9 b7 00 00 00       	jmp    844c402 <_ZN25DB_LogIngameAdvertisement8dispatchEiiP6Stream+0xfe>
 844c34b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 844c34e:	8b 58 1c             	mov    0x1c(%eax),%ebx
 844c351:	8b 45 e0             	mov    -0x20(%ebp),%eax
 844c354:	8b 70 18             	mov    0x18(%eax),%esi
 844c357:	8b 45 e0             	mov    -0x20(%ebp),%eax
 844c35a:	8b 40 14             	mov    0x14(%eax),%eax
 844c35d:	89 45 cc             	mov    %eax,-0x34(%ebp)
 844c360:	8b 45 e0             	mov    -0x20(%ebp),%eax
 844c363:	8b 40 10             	mov    0x10(%eax),%eax
 844c366:	89 45 d0             	mov    %eax,-0x30(%ebp)
 844c369:	8b 45 e0             	mov    -0x20(%ebp),%eax
 844c36c:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 844c370:	0f be c0             	movsbl %al,%eax
 844c373:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 844c376:	8b 45 e0             	mov    -0x20(%ebp),%eax
 844c379:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 844c37d:	0f bf f8             	movswl %ax,%edi
 844c380:	8b 45 e0             	mov    -0x20(%ebp),%eax
 844c383:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 844c387:	0f be c8             	movsbl %al,%ecx
 844c38a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 844c38d:	8b 50 04             	mov    0x4(%eax),%edx
 844c390:	8b 45 e0             	mov    -0x20(%ebp),%eax
 844c393:	8b 00                	mov    (%eax),%eax
 844c395:	89 5c 24 28          	mov    %ebx,0x28(%esp)
 844c399:	89 74 24 24          	mov    %esi,0x24(%esp)
 844c39d:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 844c3a0:	89 5c 24 20          	mov    %ebx,0x20(%esp)
 844c3a4:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 844c3a7:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 844c3ab:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 844c3ae:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 844c3b2:	89 7c 24 14          	mov    %edi,0x14(%esp)
 844c3b6:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 844c3ba:	89 54 24 0c          	mov    %edx,0xc(%esp)
 844c3be:	89 44 24 08          	mov    %eax,0x8(%esp)
 844c3c2:	c7 44 24 04 4c 99 c5 	movl   $0x8c5994c,0x4(%esp)
 844c3c9:	08 
 844c3ca:	8b 45 dc             	mov    -0x24(%ebp),%eax
 844c3cd:	89 04 24             	mov    %eax,(%esp)
 844c3d0:	e8 eb 7d fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844c3d5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844c3dc:	00 
 844c3dd:	8b 45 dc             	mov    -0x24(%ebp),%eax
 844c3e0:	89 04 24             	mov    %eax,(%esp)
 844c3e3:	e8 3e 7f fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844c3e8:	88 45 e7             	mov    %al,-0x19(%ebp)
 844c3eb:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 844c3ef:	83 f0 01             	xor    $0x1,%eax
 844c3f2:	84 c0                	test   %al,%al
 844c3f4:	74 07                	je     844c3fd <_ZN25DB_LogIngameAdvertisement8dispatchEiiP6Stream+0xf9>
 844c3f6:	b8 00 00 00 00       	mov    $0x0,%eax
 844c3fb:	eb 05                	jmp    844c402 <_ZN25DB_LogIngameAdvertisement8dispatchEiiP6Stream+0xfe>
 844c3fd:	b8 01 00 00 00       	mov    $0x1,%eax
 844c402:	83 c4 5c             	add    $0x5c,%esp
 844c405:	5b                   	pop    %ebx
 844c406:	5e                   	pop    %esi
 844c407:	5f                   	pop    %edi
 844c408:	5d                   	pop    %ebp
 844c409:	c3                   	ret

```

```c
// DB_LogIngameAdvertisement::dispatch @ 0x844c304

/* DB_LogIngameAdvertisement::dispatch(int, int, Stream*) */

undefined4 DB_LogIngameAdvertisement::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  MySQL *this;
  SIG_IN_GAME_ADVERTISEMENT_LOG *pSVar2;
  undefined4 uVar3;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  pSVar2 = Stream::GetOutBuffer<SIG_IN_GAME_ADVERTISEMENT_LOG>(in_stack_00000010);
  if (pSVar2 == (SIG_IN_GAME_ADVERTISEMENT_LOG *)0x0) {
    uVar3 = 0;
  }
  else {
    MySQL::set_query(this,
                     "inSert into log_in_game_ad(occ_date, m_id, charac_no, state, view_code, type_code, banner_id, dungeon_index, village_index, area_index) values (now(), %u, %u, %d, %d, %d, %u, %d, %d, %d)"
                     ,*(undefined4 *)pSVar2,*(undefined4 *)(pSVar2 + 4),(int)(char)pSVar2[8],
                     (int)*(short *)(pSVar2 + 10),(int)(char)pSVar2[0xc],
                     *(undefined4 *)(pSVar2 + 0x10),*(undefined4 *)(pSVar2 + 0x14),
                     *(undefined4 *)(pSVar2 + 0x18),*(undefined4 *)(pSVar2 + 0x1c));
    cVar1 = MySQL::exec(this,true);
    if (cVar1 == '\x01') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

