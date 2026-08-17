# DB_SavePremiumInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0841b4be DB_SavePremiumInfo::dispatch  [0x0841b4be-0x841b623] ===
 841b4be:	55                   	push   %ebp
 841b4bf:	89 e5                	mov    %esp,%ebp
 841b4c1:	57                   	push   %edi
 841b4c2:	56                   	push   %esi
 841b4c3:	53                   	push   %ebx
 841b4c4:	83 ec 4c             	sub    $0x4c,%esp
 841b4c7:	8b 45 14             	mov    0x14(%ebp),%eax
 841b4ca:	89 04 24             	mov    %eax,(%esp)
 841b4cd:	e8 9a 5c 03 00       	call   845116c <_ZN6Stream12GetOutBufferI21SIG_SAVE_PREMIUM_INFOEEPT_v>
 841b4d2:	89 45 e0             	mov    %eax,-0x20(%ebp)
 841b4d5:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841b4da:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841b4e1:	00 
 841b4e2:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 841b4e9:	00 
 841b4ea:	89 04 24             	mov    %eax,(%esp)
 841b4ed:	e8 4c 9d fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841b4f2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 841b4f5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841b4f8:	8b 78 14             	mov    0x14(%eax),%edi
 841b4fb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841b4fe:	8b 70 08             	mov    0x8(%eax),%esi
 841b501:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841b504:	8b 00                	mov    (%eax),%eax
 841b506:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841b50d:	00 
 841b50e:	89 04 24             	mov    %eax,(%esp)
 841b511:	e8 35 db ce ff       	call   810904b <_Z14NumberToStringji>
 841b516:	8b 55 e0             	mov    -0x20(%ebp),%edx
 841b519:	8b 5a 04             	mov    0x4(%edx),%ebx
 841b51c:	8b 55 e0             	mov    -0x20(%ebp),%edx
 841b51f:	8b 4a 10             	mov    0x10(%edx),%ecx
 841b522:	8b 55 e0             	mov    -0x20(%ebp),%edx
 841b525:	8b 52 0c             	mov    0xc(%edx),%edx
 841b528:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 841b52c:	89 74 24 18          	mov    %esi,0x18(%esp)
 841b530:	89 44 24 14          	mov    %eax,0x14(%esp)
 841b534:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 841b538:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 841b53c:	89 54 24 08          	mov    %edx,0x8(%esp)
 841b540:	c7 44 24 04 68 b2 c4 	movl   $0x8c4b268,0x4(%esp)
 841b547:	08 
 841b548:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 841b54b:	89 04 24             	mov    %eax,(%esp)
 841b54e:	e8 6d 8c fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841b553:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841b55a:	00 
 841b55b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 841b55e:	89 04 24             	mov    %eax,(%esp)
 841b561:	e8 c0 8d fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841b566:	83 f0 01             	xor    $0x1,%eax
 841b569:	84 c0                	test   %al,%al
 841b56b:	75 11                	jne    841b57e <_ZN18DB_SavePremiumInfo8dispatchEiiP6Stream+0xc0>
 841b56d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 841b570:	89 04 24             	mov    %eax,(%esp)
 841b573:	e8 98 8d fd ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 841b578:	09 d0                	or     %edx,%eax
 841b57a:	85 c0                	test   %eax,%eax
 841b57c:	75 07                	jne    841b585 <_ZN18DB_SavePremiumInfo8dispatchEiiP6Stream+0xc7>
 841b57e:	b8 01 00 00 00       	mov    $0x1,%eax
 841b583:	eb 05                	jmp    841b58a <_ZN18DB_SavePremiumInfo8dispatchEiiP6Stream+0xcc>
 841b585:	b8 00 00 00 00       	mov    $0x0,%eax
 841b58a:	84 c0                	test   %al,%al
 841b58c:	0f 84 85 00 00 00    	je     841b617 <_ZN18DB_SavePremiumInfo8dispatchEiiP6Stream+0x159>
 841b592:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841b595:	8b 40 14             	mov    0x14(%eax),%eax
 841b598:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 841b59b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841b59e:	8b 78 10             	mov    0x10(%eax),%edi
 841b5a1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841b5a4:	8b 70 0c             	mov    0xc(%eax),%esi
 841b5a7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841b5aa:	8b 58 08             	mov    0x8(%eax),%ebx
 841b5ad:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841b5b0:	8b 00                	mov    (%eax),%eax
 841b5b2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841b5b9:	00 
 841b5ba:	89 04 24             	mov    %eax,(%esp)
 841b5bd:	e8 89 da ce ff       	call   810904b <_Z14NumberToStringji>
 841b5c2:	8b 55 e0             	mov    -0x20(%ebp),%edx
 841b5c5:	8b 52 04             	mov    0x4(%edx),%edx
 841b5c8:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 841b5cb:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 841b5cf:	89 7c 24 18          	mov    %edi,0x18(%esp)
 841b5d3:	89 74 24 14          	mov    %esi,0x14(%esp)
 841b5d7:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 841b5db:	89 44 24 0c          	mov    %eax,0xc(%esp)
 841b5df:	89 54 24 08          	mov    %edx,0x8(%esp)
 841b5e3:	c7 44 24 04 04 b3 c4 	movl   $0x8c4b304,0x4(%esp)
 841b5ea:	08 
 841b5eb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 841b5ee:	89 04 24             	mov    %eax,(%esp)
 841b5f1:	e8 ca 8b fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841b5f6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841b5fd:	00 
 841b5fe:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 841b601:	89 04 24             	mov    %eax,(%esp)
 841b604:	e8 1d 8d fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841b609:	83 f0 01             	xor    $0x1,%eax
 841b60c:	84 c0                	test   %al,%al
 841b60e:	74 07                	je     841b617 <_ZN18DB_SavePremiumInfo8dispatchEiiP6Stream+0x159>
 841b610:	b8 00 00 00 00       	mov    $0x0,%eax
 841b615:	eb 05                	jmp    841b61c <_ZN18DB_SavePremiumInfo8dispatchEiiP6Stream+0x15e>
 841b617:	b8 01 00 00 00       	mov    $0x1,%eax
 841b61c:	83 c4 4c             	add    $0x4c,%esp
 841b61f:	5b                   	pop    %ebx
 841b620:	5e                   	pop    %esi
 841b621:	5f                   	pop    %edi
 841b622:	5d                   	pop    %ebp
 841b623:	c3                   	ret

```

```c
// DB_SavePremiumInfo::dispatch @ 0x841b4be

/* DB_SavePremiumInfo::dispatch(int, int, Stream*) */

undefined4 DB_SavePremiumInfo::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  SIG_SAVE_PREMIUM_INFO *pSVar6;
  MySQL *this;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  Stream *in_stack_00000010;
  
  pSVar6 = Stream::GetOutBuffer<SIG_SAVE_PREMIUM_INFO>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  uVar1 = *(undefined4 *)(pSVar6 + 0x14);
  uVar2 = *(undefined4 *)(pSVar6 + 8);
  uVar7 = NumberToString(*(uint *)pSVar6,0);
  MySQL::set_query(this,
                   "upDate member_premium set service_end=from_unixtime(%d) where event_id=%d and pre_type=%d and m_id=%s and service_end>from_unixtime(%d) and server_id=%d"
                   ,*(undefined4 *)(pSVar6 + 0xc),*(undefined4 *)(pSVar6 + 0x10),
                   *(undefined4 *)(pSVar6 + 4),uVar7,uVar2,uVar1);
  cVar5 = MySQL::exec(this,true);
  if ((cVar5 == '\x01') && (lVar9 = MySQL::getAffectedRowCount(this), lVar9 != 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    uVar1 = *(undefined4 *)(pSVar6 + 0x14);
    uVar2 = *(undefined4 *)(pSVar6 + 0x10);
    uVar7 = *(undefined4 *)(pSVar6 + 0xc);
    uVar3 = *(undefined4 *)(pSVar6 + 8);
    uVar8 = NumberToString(*(uint *)pSVar6,0);
    MySQL::set_query(this,
                     "inSert into member_premium(pre_type,m_id,service_start,service_end,event_id,server_id) values(%d,%s,from_unixtime(%d),from_unixtime(%d),%d,%d)"
                     ,*(undefined4 *)(pSVar6 + 4),uVar8,uVar3,uVar7,uVar2,uVar1);
    cVar5 = MySQL::exec(this,true);
    if (cVar5 != '\x01') {
      return 0;
    }
  }
  return 1;
}

```

