# DB_SaveRank

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## SaveRankAll

```asm
// === 08417510 DB_SaveRank::SaveRankAll  [0x08417510-0x841776f] ===
 8417510:	55                   	push   %ebp
 8417511:	89 e5                	mov    %esp,%ebp
 8417513:	57                   	push   %edi
 8417514:	56                   	push   %esi
 8417515:	53                   	push   %ebx
 8417516:	83 ec 6c             	sub    $0x6c,%esp
 8417519:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841751e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8417525:	00 
 8417526:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 841752d:	00 
 841752e:	89 04 24             	mov    %eax,(%esp)
 8417531:	e8 08 dd fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8417536:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8417539:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8417540:	e9 09 02 00 00       	jmp    841774e <_ZN11DB_SaveRank11SaveRankAllEP13SIG_SAVE_RANK+0x23e>
 8417545:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8417548:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 841754b:	89 d0                	mov    %edx,%eax
 841754d:	c1 e0 02             	shl    $0x2,%eax
 8417550:	01 d0                	add    %edx,%eax
 8417552:	c1 e0 04             	shl    $0x4,%eax
 8417555:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8417558:	83 c0 40             	add    $0x40,%eax
 841755b:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 841755f:	0f b7 c0             	movzwl %ax,%eax
 8417562:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8417565:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8417568:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 841756b:	89 d0                	mov    %edx,%eax
 841756d:	c1 e0 02             	shl    $0x2,%eax
 8417570:	01 d0                	add    %edx,%eax
 8417572:	c1 e0 04             	shl    $0x4,%eax
 8417575:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8417578:	83 c0 40             	add    $0x40,%eax
 841757b:	8b 40 0c             	mov    0xc(%eax),%eax
 841757e:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8417581:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8417584:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8417587:	89 d0                	mov    %edx,%eax
 8417589:	c1 e0 02             	shl    $0x2,%eax
 841758c:	01 d0                	add    %edx,%eax
 841758e:	c1 e0 04             	shl    $0x4,%eax
 8417591:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8417594:	83 c0 40             	add    $0x40,%eax
 8417597:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 841759b:	0f b7 f8             	movzwl %ax,%edi
 841759e:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84175a1:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84175a4:	89 d0                	mov    %edx,%eax
 84175a6:	c1 e0 02             	shl    $0x2,%eax
 84175a9:	01 d0                	add    %edx,%eax
 84175ab:	c1 e0 04             	shl    $0x4,%eax
 84175ae:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84175b1:	83 c0 40             	add    $0x40,%eax
 84175b4:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 84175b8:	0f b7 f0             	movzwl %ax,%esi
 84175bb:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84175be:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84175c1:	89 d0                	mov    %edx,%eax
 84175c3:	c1 e0 02             	shl    $0x2,%eax
 84175c6:	01 d0                	add    %edx,%eax
 84175c8:	c1 e0 04             	shl    $0x4,%eax
 84175cb:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84175ce:	83 c0 10             	add    $0x10,%eax
 84175d1:	0f b6 00             	movzbl (%eax),%eax
 84175d4:	0f b6 d8             	movzbl %al,%ebx
 84175d7:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84175da:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84175dd:	89 d0                	mov    %edx,%eax
 84175df:	c1 e0 02             	shl    $0x2,%eax
 84175e2:	01 d0                	add    %edx,%eax
 84175e4:	c1 e0 04             	shl    $0x4,%eax
 84175e7:	8b 54 08 0c          	mov    0xc(%eax,%ecx,1),%edx
 84175eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84175ee:	8b 00                	mov    (%eax),%eax
 84175f0:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 84175f3:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 84175f7:	8b 4d c8             	mov    -0x38(%ebp),%ecx
 84175fa:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 84175fe:	89 7c 24 18          	mov    %edi,0x18(%esp)
 8417602:	89 74 24 14          	mov    %esi,0x14(%esp)
 8417606:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 841760a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 841760e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8417612:	c7 44 24 04 80 99 c4 	movl   $0x8c49980,0x4(%esp)
 8417619:	08 
 841761a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841761d:	89 04 24             	mov    %eax,(%esp)
 8417620:	e8 9b cb fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8417625:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841762c:	00 
 841762d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8417630:	89 04 24             	mov    %eax,(%esp)
 8417633:	e8 ee cc fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8417638:	83 f0 01             	xor    $0x1,%eax
 841763b:	84 c0                	test   %al,%al
 841763d:	0f 84 07 01 00 00    	je     841774a <_ZN11DB_SaveRank11SaveRankAllEP13SIG_SAVE_RANK+0x23a>
 8417643:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8417646:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8417649:	89 d0                	mov    %edx,%eax
 841764b:	c1 e0 02             	shl    $0x2,%eax
 841764e:	01 d0                	add    %edx,%eax
 8417650:	c1 e0 04             	shl    $0x4,%eax
 8417653:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8417656:	83 c0 10             	add    $0x10,%eax
 8417659:	0f b6 00             	movzbl (%eax),%eax
 841765c:	0f b6 c0             	movzbl %al,%eax
 841765f:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8417662:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8417665:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8417668:	89 d0                	mov    %edx,%eax
 841766a:	c1 e0 02             	shl    $0x2,%eax
 841766d:	01 d0                	add    %edx,%eax
 841766f:	c1 e0 04             	shl    $0x4,%eax
 8417672:	8b 44 08 0c          	mov    0xc(%eax,%ecx,1),%eax
 8417676:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8417679:	8b 45 0c             	mov    0xc(%ebp),%eax
 841767c:	8b 00                	mov    (%eax),%eax
 841767e:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8417681:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8417684:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8417687:	89 d0                	mov    %edx,%eax
 8417689:	c1 e0 02             	shl    $0x2,%eax
 841768c:	01 d0                	add    %edx,%eax
 841768e:	c1 e0 04             	shl    $0x4,%eax
 8417691:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8417694:	83 c0 40             	add    $0x40,%eax
 8417697:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 841769b:	0f b7 f8             	movzwl %ax,%edi
 841769e:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84176a1:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84176a4:	89 d0                	mov    %edx,%eax
 84176a6:	c1 e0 02             	shl    $0x2,%eax
 84176a9:	01 d0                	add    %edx,%eax
 84176ab:	c1 e0 04             	shl    $0x4,%eax
 84176ae:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84176b1:	83 c0 40             	add    $0x40,%eax
 84176b4:	8b 70 0c             	mov    0xc(%eax),%esi
 84176b7:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84176ba:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84176bd:	89 d0                	mov    %edx,%eax
 84176bf:	c1 e0 02             	shl    $0x2,%eax
 84176c2:	01 d0                	add    %edx,%eax
 84176c4:	c1 e0 04             	shl    $0x4,%eax
 84176c7:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84176ca:	83 c0 40             	add    $0x40,%eax
 84176cd:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 84176d1:	0f b7 d8             	movzwl %ax,%ebx
 84176d4:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84176d7:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84176da:	89 d0                	mov    %edx,%eax
 84176dc:	c1 e0 02             	shl    $0x2,%eax
 84176df:	01 d0                	add    %edx,%eax
 84176e1:	c1 e0 04             	shl    $0x4,%eax
 84176e4:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84176e7:	83 c0 40             	add    $0x40,%eax
 84176ea:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 84176ee:	0f b7 c0             	movzwl %ax,%eax
 84176f1:	8b 55 cc             	mov    -0x34(%ebp),%edx
 84176f4:	89 54 24 20          	mov    %edx,0x20(%esp)
 84176f8:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 84176fb:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 84176ff:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8417702:	89 54 24 18          	mov    %edx,0x18(%esp)
 8417706:	89 7c 24 14          	mov    %edi,0x14(%esp)
 841770a:	89 74 24 10          	mov    %esi,0x10(%esp)
 841770e:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8417712:	89 44 24 08          	mov    %eax,0x8(%esp)
 8417716:	c7 44 24 04 fc 99 c4 	movl   $0x8c499fc,0x4(%esp)
 841771d:	08 
 841771e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8417721:	89 04 24             	mov    %eax,(%esp)
 8417724:	e8 97 ca fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8417729:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8417730:	00 
 8417731:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8417734:	89 04 24             	mov    %eax,(%esp)
 8417737:	e8 ea cb fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841773c:	83 f0 01             	xor    $0x1,%eax
 841773f:	84 c0                	test   %al,%al
 8417741:	74 07                	je     841774a <_ZN11DB_SaveRank11SaveRankAllEP13SIG_SAVE_RANK+0x23a>
 8417743:	b8 00 00 00 00       	mov    $0x0,%eax
 8417748:	eb 1d                	jmp    8417767 <_ZN11DB_SaveRank11SaveRankAllEP13SIG_SAVE_RANK+0x257>
 841774a:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 841774e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8417751:	8b 40 04             	mov    0x4(%eax),%eax
 8417754:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8417757:	0f 9f c0             	setg   %al
 841775a:	84 c0                	test   %al,%al
 841775c:	0f 85 e3 fd ff ff    	jne    8417545 <_ZN11DB_SaveRank11SaveRankAllEP13SIG_SAVE_RANK+0x35>
 8417762:	b8 01 00 00 00       	mov    $0x1,%eax
 8417767:	83 c4 6c             	add    $0x6c,%esp
 841776a:	5b                   	pop    %ebx
 841776b:	5e                   	pop    %esi
 841776c:	5f                   	pop    %edi
 841776d:	5d                   	pop    %ebp
 841776e:	c3                   	ret
 841776f:	90                   	nop

```

```c
// DB_SaveRank::SaveRankAll @ 0x8417510

/* DB_SaveRank::SaveRankAll(SIG_SAVE_RANK*) */

undefined4 __thiscall DB_SaveRank::SaveRankAll(DB_SaveRank *this,SIG_SAVE_RANK *param_1)

{
  char cVar1;
  MySQL *this_00;
  int local_20;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_20 = 0;
  do {
    if (*(int *)(param_1 + 4) <= local_20) {
      return 1;
    }
    MySQL::set_query(this_00,
                     "inSert into charac_best_record (charac_no,dungeon_no,difficulty,style,technic,attacked,rank) values(%d,%d,%d,%d,%d,%d,%d)"
                     ,*(undefined4 *)param_1,*(undefined4 *)(param_1 + local_20 * 0x50 + 0xc),
                     (uint)(byte)param_1[local_20 * 0x50 + 0x10],
                     (uint)*(ushort *)(param_1 + local_20 * 0x50 + 0x48),
                     (uint)*(ushort *)(param_1 + local_20 * 0x50 + 0x4a),
                     *(undefined4 *)(param_1 + local_20 * 0x50 + 0x4c),
                     (uint)*(ushort *)(param_1 + local_20 * 0x50 + 0x50));
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 != '\x01') {
      MySQL::set_query(this_00,
                       "upDate charac_best_record set style=%d, technic=%d ,attacked=%d, rank=%d where charac_no=%d and dungeon_no=%d and difficulty=%d"
                       ,(uint)*(ushort *)(param_1 + local_20 * 0x50 + 0x48),
                       (uint)*(ushort *)(param_1 + local_20 * 0x50 + 0x4a),
                       *(undefined4 *)(param_1 + local_20 * 0x50 + 0x4c),
                       (uint)*(ushort *)(param_1 + local_20 * 0x50 + 0x50),*(undefined4 *)param_1,
                       *(undefined4 *)(param_1 + local_20 * 0x50 + 0xc),
                       (uint)(byte)param_1[local_20 * 0x50 + 0x10]);
      cVar1 = MySQL::exec(this_00,true);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    local_20 = local_20 + 1;
  } while( true );
}

```

---

## dispatch

```asm
// === 084174c0 DB_SaveRank::dispatch  [0x084174c0-0x841750f] ===
 84174c0:	55                   	push   %ebp
 84174c1:	89 e5                	mov    %esp,%ebp
 84174c3:	83 ec 28             	sub    $0x28,%esp
 84174c6:	8b 45 14             	mov    0x14(%ebp),%eax
 84174c9:	89 04 24             	mov    %eax,(%esp)
 84174cc:	e8 5f 96 03 00       	call   8450b30 <_ZN6Stream12GetOutBufferI13SIG_SAVE_RANKEEPT_v>
 84174d1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84174d4:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84174d8:	75 07                	jne    84174e1 <_ZN11DB_SaveRank8dispatchEiiP6Stream+0x21>
 84174da:	b8 00 00 00 00       	mov    $0x0,%eax
 84174df:	eb 2c                	jmp    841750d <_ZN11DB_SaveRank8dispatchEiiP6Stream+0x4d>
 84174e1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84174e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84174e8:	8b 45 08             	mov    0x8(%ebp),%eax
 84174eb:	89 04 24             	mov    %eax,(%esp)
 84174ee:	e8 1d 00 00 00       	call   8417510 <_ZN11DB_SaveRank11SaveRankAllEP13SIG_SAVE_RANK>
 84174f3:	88 45 f3             	mov    %al,-0xd(%ebp)
 84174f6:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 84174fa:	83 f0 01             	xor    $0x1,%eax
 84174fd:	84 c0                	test   %al,%al
 84174ff:	74 07                	je     8417508 <_ZN11DB_SaveRank8dispatchEiiP6Stream+0x48>
 8417501:	b8 00 00 00 00       	mov    $0x0,%eax
 8417506:	eb 05                	jmp    841750d <_ZN11DB_SaveRank8dispatchEiiP6Stream+0x4d>
 8417508:	b8 01 00 00 00       	mov    $0x1,%eax
 841750d:	c9                   	leave
 841750e:	c3                   	ret
 841750f:	90                   	nop

```

```c
// DB_SaveRank::dispatch @ 0x84174c0

/* DB_SaveRank::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_SaveRank::dispatch(DB_SaveRank *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_SAVE_RANK *pSVar2;
  undefined4 uVar3;
  
  pSVar2 = Stream::GetOutBuffer<SIG_SAVE_RANK>(param_3);
  if (pSVar2 == (SIG_SAVE_RANK *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = SaveRankAll(this,pSVar2);
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

