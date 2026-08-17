# DB_SaveCerashopAddRestrictType

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 080e14f6 DB_SaveCerashopAddRestrictType::dispatch  [0x080e14f6-0x80e17b9] ===
 80e14f6:	55                   	push   %ebp
 80e14f7:	89 e5                	mov    %esp,%ebp
 80e14f9:	56                   	push   %esi
 80e14fa:	53                   	push   %ebx
 80e14fb:	83 ec 50             	sub    $0x50,%esp
 80e14fe:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 80e1505:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 80e150c:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 80e1513:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 80e151a:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 80e1521:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80e1524:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e1528:	8b 45 14             	mov    0x14(%ebp),%eax
 80e152b:	89 04 24             	mov    %eax,(%esp)
 80e152e:	e8 63 b2 53 00       	call   861c796 <_ZN6StreamrsERj>
 80e1533:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e1536:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e153a:	8b 45 14             	mov    0x14(%ebp),%eax
 80e153d:	89 04 24             	mov    %eax,(%esp)
 80e1540:	e8 51 b2 53 00       	call   861c796 <_ZN6StreamrsERj>
 80e1545:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80e1548:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e154c:	8b 45 14             	mov    0x14(%ebp),%eax
 80e154f:	89 04 24             	mov    %eax,(%esp)
 80e1552:	e8 3f b2 53 00       	call   861c796 <_ZN6StreamrsERj>
 80e1557:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80e155a:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e155e:	8b 45 14             	mov    0x14(%ebp),%eax
 80e1561:	89 04 24             	mov    %eax,(%esp)
 80e1564:	e8 cd b0 53 00       	call   861c636 <_ZN6StreamrsERl>
 80e1569:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80e156c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e1570:	8b 45 14             	mov    0x14(%ebp),%eax
 80e1573:	89 04 24             	mov    %eax,(%esp)
 80e1576:	e8 bb b0 53 00       	call   861c636 <_ZN6StreamrsERl>
 80e157b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80e157e:	85 c0                	test   %eax,%eax
 80e1580:	74 0e                	je     80e1590 <_ZN30DB_SaveCerashopAddRestrictType8dispatchEiiP6Stream+0x9a>
 80e1582:	83 f8 01             	cmp    $0x1,%eax
 80e1585:	0f 84 19 01 00 00    	je     80e16a4 <_ZN30DB_SaveCerashopAddRestrictType8dispatchEiiP6Stream+0x1ae>
 80e158b:	e9 1e 02 00 00       	jmp    80e17ae <_ZN30DB_SaveCerashopAddRestrictType8dispatchEiiP6Stream+0x2b8>
 80e1590:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 80e1597:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80e159a:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e159e:	8b 45 14             	mov    0x14(%ebp),%eax
 80e15a1:	89 04 24             	mov    %eax,(%esp)
 80e15a4:	e8 ed b1 53 00       	call   861c796 <_ZN6StreamrsERj>
 80e15a9:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 80e15ae:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80e15b5:	00 
 80e15b6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80e15bd:	00 
 80e15be:	89 04 24             	mov    %eax,(%esp)
 80e15c1:	e8 78 3c 31 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 80e15c6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80e15c9:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 80e15cd:	75 0a                	jne    80e15d9 <_ZN30DB_SaveCerashopAddRestrictType8dispatchEiiP6Stream+0xe3>
 80e15cf:	b8 00 00 00 00       	mov    $0x0,%eax
 80e15d4:	e9 da 01 00 00       	jmp    80e17b3 <_ZN30DB_SaveCerashopAddRestrictType8dispatchEiiP6Stream+0x2bd>
 80e15d9:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 80e15dc:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 80e15df:	8b 55 e0             	mov    -0x20(%ebp),%edx
 80e15e2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80e15e5:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 80e15e9:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 80e15ed:	89 54 24 0c          	mov    %edx,0xc(%esp)
 80e15f1:	89 44 24 08          	mov    %eax,0x8(%esp)
 80e15f5:	c7 44 24 04 38 cb b2 	movl   $0x8b2cb38,0x4(%esp)
 80e15fc:	08 
 80e15fd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80e1600:	89 04 24             	mov    %eax,(%esp)
 80e1603:	e8 b8 2b 31 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 80e1608:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80e160f:	00 
 80e1610:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80e1613:	89 04 24             	mov    %eax,(%esp)
 80e1616:	e8 0b 2d 31 00       	call   83f4326 <_ZN5MySQL4execEb>
 80e161b:	83 f0 01             	xor    $0x1,%eax
 80e161e:	84 c0                	test   %al,%al
 80e1620:	74 0a                	je     80e162c <_ZN30DB_SaveCerashopAddRestrictType8dispatchEiiP6Stream+0x136>
 80e1622:	b8 00 00 00 00       	mov    $0x0,%eax
 80e1627:	e9 87 01 00 00       	jmp    80e17b3 <_ZN30DB_SaveCerashopAddRestrictType8dispatchEiiP6Stream+0x2bd>
 80e162c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80e162f:	89 04 24             	mov    %eax,(%esp)
 80e1632:	e8 d9 2c 31 00       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 80e1637:	09 d0                	or     %edx,%eax
 80e1639:	85 c0                	test   %eax,%eax
 80e163b:	0f 94 c0             	sete   %al
 80e163e:	84 c0                	test   %al,%al
 80e1640:	0f 84 64 01 00 00    	je     80e17aa <_ZN30DB_SaveCerashopAddRestrictType8dispatchEiiP6Stream+0x2b4>
 80e1646:	8b 75 dc             	mov    -0x24(%ebp),%esi
 80e1649:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 80e164c:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 80e164f:	8b 55 e8             	mov    -0x18(%ebp),%edx
 80e1652:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80e1655:	89 74 24 18          	mov    %esi,0x18(%esp)
 80e1659:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 80e165d:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 80e1661:	89 54 24 0c          	mov    %edx,0xc(%esp)
 80e1665:	89 44 24 08          	mov    %eax,0x8(%esp)
 80e1669:	c7 44 24 04 b8 cb b2 	movl   $0x8b2cbb8,0x4(%esp)
 80e1670:	08 
 80e1671:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80e1674:	89 04 24             	mov    %eax,(%esp)
 80e1677:	e8 44 2b 31 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 80e167c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80e1683:	00 
 80e1684:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80e1687:	89 04 24             	mov    %eax,(%esp)
 80e168a:	e8 97 2c 31 00       	call   83f4326 <_ZN5MySQL4execEb>
 80e168f:	83 f0 01             	xor    $0x1,%eax
 80e1692:	84 c0                	test   %al,%al
 80e1694:	0f 84 13 01 00 00    	je     80e17ad <_ZN30DB_SaveCerashopAddRestrictType8dispatchEiiP6Stream+0x2b7>
 80e169a:	b8 00 00 00 00       	mov    $0x0,%eax
 80e169f:	e9 0f 01 00 00       	jmp    80e17b3 <_ZN30DB_SaveCerashopAddRestrictType8dispatchEiiP6Stream+0x2bd>
 80e16a4:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 80e16ab:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80e16ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e16b2:	8b 45 14             	mov    0x14(%ebp),%eax
 80e16b5:	89 04 24             	mov    %eax,(%esp)
 80e16b8:	e8 d9 b0 53 00       	call   861c796 <_ZN6StreamrsERj>
 80e16bd:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 80e16c2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80e16c9:	00 
 80e16ca:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 80e16d1:	00 
 80e16d2:	89 04 24             	mov    %eax,(%esp)
 80e16d5:	e8 64 3b 31 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 80e16da:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80e16dd:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80e16e1:	75 0a                	jne    80e16ed <_ZN30DB_SaveCerashopAddRestrictType8dispatchEiiP6Stream+0x1f7>
 80e16e3:	b8 00 00 00 00       	mov    $0x0,%eax
 80e16e8:	e9 c6 00 00 00       	jmp    80e17b3 <_ZN30DB_SaveCerashopAddRestrictType8dispatchEiiP6Stream+0x2bd>
 80e16ed:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 80e16f0:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 80e16f3:	8b 55 e0             	mov    -0x20(%ebp),%edx
 80e16f6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80e16f9:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 80e16fd:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 80e1701:	89 54 24 0c          	mov    %edx,0xc(%esp)
 80e1705:	89 44 24 08          	mov    %eax,0x8(%esp)
 80e1709:	c7 44 24 04 48 cc b2 	movl   $0x8b2cc48,0x4(%esp)
 80e1710:	08 
 80e1711:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e1714:	89 04 24             	mov    %eax,(%esp)
 80e1717:	e8 a4 2a 31 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 80e171c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80e1723:	00 
 80e1724:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e1727:	89 04 24             	mov    %eax,(%esp)
 80e172a:	e8 f7 2b 31 00       	call   83f4326 <_ZN5MySQL4execEb>
 80e172f:	83 f0 01             	xor    $0x1,%eax
 80e1732:	84 c0                	test   %al,%al
 80e1734:	74 07                	je     80e173d <_ZN30DB_SaveCerashopAddRestrictType8dispatchEiiP6Stream+0x247>
 80e1736:	b8 00 00 00 00       	mov    $0x0,%eax
 80e173b:	eb 76                	jmp    80e17b3 <_ZN30DB_SaveCerashopAddRestrictType8dispatchEiiP6Stream+0x2bd>
 80e173d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e1740:	89 04 24             	mov    %eax,(%esp)
 80e1743:	e8 c8 2b 31 00       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 80e1748:	09 d0                	or     %edx,%eax
 80e174a:	85 c0                	test   %eax,%eax
 80e174c:	0f 94 c0             	sete   %al
 80e174f:	84 c0                	test   %al,%al
 80e1751:	74 5b                	je     80e17ae <_ZN30DB_SaveCerashopAddRestrictType8dispatchEiiP6Stream+0x2b8>
 80e1753:	8b 75 dc             	mov    -0x24(%ebp),%esi
 80e1756:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 80e1759:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 80e175c:	8b 55 e8             	mov    -0x18(%ebp),%edx
 80e175f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80e1762:	89 74 24 18          	mov    %esi,0x18(%esp)
 80e1766:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 80e176a:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 80e176e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 80e1772:	89 44 24 08          	mov    %eax,0x8(%esp)
 80e1776:	c7 44 24 04 cc cc b2 	movl   $0x8b2cccc,0x4(%esp)
 80e177d:	08 
 80e177e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e1781:	89 04 24             	mov    %eax,(%esp)
 80e1784:	e8 37 2a 31 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 80e1789:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80e1790:	00 
 80e1791:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e1794:	89 04 24             	mov    %eax,(%esp)
 80e1797:	e8 8a 2b 31 00       	call   83f4326 <_ZN5MySQL4execEb>
 80e179c:	83 f0 01             	xor    $0x1,%eax
 80e179f:	84 c0                	test   %al,%al
 80e17a1:	74 0b                	je     80e17ae <_ZN30DB_SaveCerashopAddRestrictType8dispatchEiiP6Stream+0x2b8>
 80e17a3:	b8 00 00 00 00       	mov    $0x0,%eax
 80e17a8:	eb 09                	jmp    80e17b3 <_ZN30DB_SaveCerashopAddRestrictType8dispatchEiiP6Stream+0x2bd>
 80e17aa:	90                   	nop
 80e17ab:	eb 01                	jmp    80e17ae <_ZN30DB_SaveCerashopAddRestrictType8dispatchEiiP6Stream+0x2b8>
 80e17ad:	90                   	nop
 80e17ae:	b8 01 00 00 00       	mov    $0x1,%eax
 80e17b3:	83 c4 50             	add    $0x50,%esp
 80e17b6:	5b                   	pop    %ebx
 80e17b7:	5e                   	pop    %esi
 80e17b8:	5d                   	pop    %ebp
 80e17b9:	c3                   	ret

```

```c
// DB_SaveCerashopAddRestrictType::dispatch @ 0x80e14f6

/* DB_SaveCerashopAddRestrictType::dispatch(int, int, Stream*) */

undefined4 DB_SaveCerashopAddRestrictType::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  longlong lVar2;
  Stream *in_stack_00000010;
  uint local_30;
  uint local_2c;
  long local_28;
  long local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  MySQL *local_14;
  MySQL *local_10;
  
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::operator>>(in_stack_00000010,&local_1c);
  Stream::operator>>(in_stack_00000010,&local_20);
  Stream::operator>>(in_stack_00000010,&local_24);
  Stream::operator>>(in_stack_00000010,&local_28);
  if (local_18 == 0) {
    local_2c = 0;
    Stream::operator>>(in_stack_00000010,&local_2c);
    local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    if (local_14 == (MySQL *)0x0) {
      return 0;
    }
    MySQL::set_query(local_14,
                     "upDate account_cerashop_restrict set count=%u, next_date=%d, last_access_date=UNIX_TIMESTAMP() where m_id = %u and ipg_no=%u"
                     ,local_20,local_24,local_2c,local_1c);
    cVar1 = MySQL::exec(local_14,true);
    if (cVar1 != '\x01') {
      return 0;
    }
    lVar2 = MySQL::getAffectedRowCount(local_14);
    if (lVar2 == 0) {
      MySQL::set_query(local_14,
                       "inSert into account_cerashop_restrict(m_id, ipg_no, count, next_date, end_date, last_access_date) values(%u, %u, %u, %d, %d, UNIX_TIMESTAMP())"
                       ,local_2c,local_1c,local_20,local_24,local_28);
      cVar1 = MySQL::exec(local_14,true);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
  }
  else if (local_18 == 1) {
    local_30 = 0;
    Stream::operator>>(in_stack_00000010,&local_30);
    local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    if (local_10 == (MySQL *)0x0) {
      return 0;
    }
    MySQL::set_query(local_10,
                     "upDate charac_cerashop_restrict set count=%u, next_date=%d, last_access_date=UNIX_TIMESTAMP() where charac_no = %u and ipg_no=%u"
                     ,local_20,local_24,local_30,local_1c);
    cVar1 = MySQL::exec(local_10,true);
    if (cVar1 != '\x01') {
      return 0;
    }
    lVar2 = MySQL::getAffectedRowCount(local_10);
    if (lVar2 == 0) {
      MySQL::set_query(local_10,
                       "inSert into charac_cerashop_restrict(charac_no, ipg_no, count, next_date, end_date, last_access_date) values(%u, %u, %u, %d, %d, UNIX_TIMESTAMP())"
                       ,local_30,local_1c,local_20,local_24,local_28);
      cVar1 = MySQL::exec(local_10,true);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
  }
  return 1;
}

```

---

## makeRequest

```asm
// === 080e17ba DB_SaveCerashopAddRestrictType::makeRequest  [0x080e17ba-0x80e1ac9] ===
 80e17ba:	55                   	push   %ebp
 80e17bb:	89 e5                	mov    %esp,%ebp
 80e17bd:	56                   	push   %esi
 80e17be:	53                   	push   %ebx
 80e17bf:	83 ec 20             	sub    $0x20,%esp
 80e17c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e17c5:	8b 40 04             	mov    0x4(%eax),%eax
 80e17c8:	8b 00                	mov    (%eax),%eax
 80e17ca:	85 c0                	test   %eax,%eax
 80e17cc:	74 0e                	je     80e17dc <_ZN30DB_SaveCerashopAddRestrictType11makeRequestEP5CUserRN19CerashopAddRestrict11DBInputDataE+0x22>
 80e17ce:	83 f8 01             	cmp    $0x1,%eax
 80e17d1:	0f 84 7b 01 00 00    	je     80e1952 <_ZN30DB_SaveCerashopAddRestrictType11makeRequestEP5CUserRN19CerashopAddRestrict11DBInputDataE+0x198>
 80e17d7:	e9 e7 02 00 00       	jmp    80e1ac3 <_ZN30DB_SaveCerashopAddRestrictType11makeRequestEP5CUserRN19CerashopAddRestrict11DBInputDataE+0x309>
 80e17dc:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 80e17e1:	c7 44 24 08 8c 01 00 	movl   $0x18c,0x8(%esp)
 80e17e8:	00 
 80e17e9:	c7 44 24 04 5f cd b2 	movl   $0x8b2cd5f,0x4(%esp)
 80e17f0:	08 
 80e17f1:	89 04 24             	mov    %eax,(%esp)
 80e17f4:	e8 8d e2 1a 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 80e17f9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 80e1800:	00 
 80e1801:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e1805:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e1808:	89 04 24             	mov    %eax,(%esp)
 80e180b:	e8 16 74 fe ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 80e1810:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e1813:	89 04 24             	mov    %eax,(%esp)
 80e1816:	e8 2b 74 fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80e181b:	c7 44 24 04 40 03 00 	movl   $0x340,0x4(%esp)
 80e1822:	00 
 80e1823:	89 04 24             	mov    %eax,(%esp)
 80e1826:	e8 2b 74 fe ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 80e182b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e182e:	89 04 24             	mov    %eax,(%esp)
 80e1831:	e8 10 74 fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80e1836:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 80e183d:	ff 
 80e183e:	89 04 24             	mov    %eax,(%esp)
 80e1841:	e8 10 74 fe ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 80e1846:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e1849:	8b 40 04             	mov    0x4(%eax),%eax
 80e184c:	8b 00                	mov    (%eax),%eax
 80e184e:	89 c3                	mov    %eax,%ebx
 80e1850:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e1853:	89 04 24             	mov    %eax,(%esp)
 80e1856:	e8 eb 73 fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80e185b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80e185f:	89 04 24             	mov    %eax,(%esp)
 80e1862:	e8 2b 0a 00 00       	call   80e2292 <_ZN12CStreamGuardlsEj>
 80e1867:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e186a:	8b 40 04             	mov    0x4(%eax),%eax
 80e186d:	8b 58 04             	mov    0x4(%eax),%ebx
 80e1870:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e1873:	89 04 24             	mov    %eax,(%esp)
 80e1876:	e8 cb 73 fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80e187b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80e187f:	89 04 24             	mov    %eax,(%esp)
 80e1882:	e8 0b 0a 00 00       	call   80e2292 <_ZN12CStreamGuardlsEj>
 80e1887:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e188a:	8b 00                	mov    (%eax),%eax
 80e188c:	8b 58 04             	mov    0x4(%eax),%ebx
 80e188f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e1892:	89 04 24             	mov    %eax,(%esp)
 80e1895:	e8 ac 73 fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80e189a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80e189e:	89 04 24             	mov    %eax,(%esp)
 80e18a1:	e8 ec 09 00 00       	call   80e2292 <_ZN12CStreamGuardlsEj>
 80e18a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e18a9:	8b 00                	mov    (%eax),%eax
 80e18ab:	8b 58 08             	mov    0x8(%eax),%ebx
 80e18ae:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e18b1:	89 04 24             	mov    %eax,(%esp)
 80e18b4:	e8 8d 73 fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80e18b9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80e18bd:	89 04 24             	mov    %eax,(%esp)
 80e18c0:	e8 b1 09 00 00       	call   80e2276 <_ZN12CStreamGuardlsEl>
 80e18c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e18c8:	8b 40 04             	mov    0x4(%eax),%eax
 80e18cb:	8b 58 10             	mov    0x10(%eax),%ebx
 80e18ce:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e18d1:	89 04 24             	mov    %eax,(%esp)
 80e18d4:	e8 6d 73 fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80e18d9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80e18dd:	89 04 24             	mov    %eax,(%esp)
 80e18e0:	e8 91 09 00 00       	call   80e2276 <_ZN12CStreamGuardlsEl>
 80e18e5:	8b 45 08             	mov    0x8(%ebp),%eax
 80e18e8:	89 04 24             	mov    %eax,(%esp)
 80e18eb:	e8 7e 8a ff ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 80e18f0:	89 c3                	mov    %eax,%ebx
 80e18f2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e18f5:	89 04 24             	mov    %eax,(%esp)
 80e18f8:	e8 49 73 fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80e18fd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80e1901:	89 04 24             	mov    %eax,(%esp)
 80e1904:	e8 89 09 00 00       	call   80e2292 <_ZN12CStreamGuardlsEj>
 80e1909:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 80e190e:	8d 55 f0             	lea    -0x10(%ebp),%edx
 80e1911:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e1915:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 80e191c:	00 
 80e191d:	89 04 24             	mov    %eax,(%esp)
 80e1920:	e8 b9 f6 48 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 80e1925:	eb 1b                	jmp    80e1942 <_ZN30DB_SaveCerashopAddRestrictType11makeRequestEP5CUserRN19CerashopAddRestrict11DBInputDataE+0x188>
 80e1927:	89 d3                	mov    %edx,%ebx
 80e1929:	89 c6                	mov    %eax,%esi
 80e192b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e192e:	89 04 24             	mov    %eax,(%esp)
 80e1931:	e8 9c af 53 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 80e1936:	89 f0                	mov    %esi,%eax
 80e1938:	89 da                	mov    %ebx,%edx
 80e193a:	89 04 24             	mov    %eax,(%esp)
 80e193d:	e8 0e 1e a0 00       	call   8ae3750 <_Unwind_Resume>
 80e1942:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e1945:	89 04 24             	mov    %eax,(%esp)
 80e1948:	e8 85 af 53 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 80e194d:	e9 71 01 00 00       	jmp    80e1ac3 <_ZN30DB_SaveCerashopAddRestrictType11makeRequestEP5CUserRN19CerashopAddRestrict11DBInputDataE+0x309>
 80e1952:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 80e1957:	c7 44 24 08 9a 01 00 	movl   $0x19a,0x8(%esp)
 80e195e:	00 
 80e195f:	c7 44 24 04 5f cd b2 	movl   $0x8b2cd5f,0x4(%esp)
 80e1966:	08 
 80e1967:	89 04 24             	mov    %eax,(%esp)
 80e196a:	e8 17 e1 1a 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 80e196f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 80e1976:	00 
 80e1977:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e197b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e197e:	89 04 24             	mov    %eax,(%esp)
 80e1981:	e8 a0 72 fe ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 80e1986:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e1989:	89 04 24             	mov    %eax,(%esp)
 80e198c:	e8 b5 72 fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80e1991:	c7 44 24 04 40 03 00 	movl   $0x340,0x4(%esp)
 80e1998:	00 
 80e1999:	89 04 24             	mov    %eax,(%esp)
 80e199c:	e8 b5 72 fe ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 80e19a1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e19a4:	89 04 24             	mov    %eax,(%esp)
 80e19a7:	e8 9a 72 fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80e19ac:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 80e19b3:	ff 
 80e19b4:	89 04 24             	mov    %eax,(%esp)
 80e19b7:	e8 9a 72 fe ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 80e19bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e19bf:	8b 40 04             	mov    0x4(%eax),%eax
 80e19c2:	8b 00                	mov    (%eax),%eax
 80e19c4:	89 c3                	mov    %eax,%ebx
 80e19c6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e19c9:	89 04 24             	mov    %eax,(%esp)
 80e19cc:	e8 75 72 fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80e19d1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80e19d5:	89 04 24             	mov    %eax,(%esp)
 80e19d8:	e8 b5 08 00 00       	call   80e2292 <_ZN12CStreamGuardlsEj>
 80e19dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e19e0:	8b 40 04             	mov    0x4(%eax),%eax
 80e19e3:	8b 58 04             	mov    0x4(%eax),%ebx
 80e19e6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e19e9:	89 04 24             	mov    %eax,(%esp)
 80e19ec:	e8 55 72 fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80e19f1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80e19f5:	89 04 24             	mov    %eax,(%esp)
 80e19f8:	e8 95 08 00 00       	call   80e2292 <_ZN12CStreamGuardlsEj>
 80e19fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e1a00:	8b 00                	mov    (%eax),%eax
 80e1a02:	8b 58 04             	mov    0x4(%eax),%ebx
 80e1a05:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e1a08:	89 04 24             	mov    %eax,(%esp)
 80e1a0b:	e8 36 72 fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80e1a10:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80e1a14:	89 04 24             	mov    %eax,(%esp)
 80e1a17:	e8 76 08 00 00       	call   80e2292 <_ZN12CStreamGuardlsEj>
 80e1a1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e1a1f:	8b 00                	mov    (%eax),%eax
 80e1a21:	8b 58 08             	mov    0x8(%eax),%ebx
 80e1a24:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e1a27:	89 04 24             	mov    %eax,(%esp)
 80e1a2a:	e8 17 72 fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80e1a2f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80e1a33:	89 04 24             	mov    %eax,(%esp)
 80e1a36:	e8 3b 08 00 00       	call   80e2276 <_ZN12CStreamGuardlsEl>
 80e1a3b:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e1a3e:	8b 40 04             	mov    0x4(%eax),%eax
 80e1a41:	8b 58 10             	mov    0x10(%eax),%ebx
 80e1a44:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e1a47:	89 04 24             	mov    %eax,(%esp)
 80e1a4a:	e8 f7 71 fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80e1a4f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80e1a53:	89 04 24             	mov    %eax,(%esp)
 80e1a56:	e8 1b 08 00 00       	call   80e2276 <_ZN12CStreamGuardlsEl>
 80e1a5b:	8b 45 08             	mov    0x8(%ebp),%eax
 80e1a5e:	89 04 24             	mov    %eax,(%esp)
 80e1a61:	e8 e8 a1 fe ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 80e1a66:	89 c3                	mov    %eax,%ebx
 80e1a68:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e1a6b:	89 04 24             	mov    %eax,(%esp)
 80e1a6e:	e8 d3 71 fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80e1a73:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80e1a77:	89 04 24             	mov    %eax,(%esp)
 80e1a7a:	e8 13 08 00 00       	call   80e2292 <_ZN12CStreamGuardlsEj>
 80e1a7f:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 80e1a84:	8d 55 e8             	lea    -0x18(%ebp),%edx
 80e1a87:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e1a8b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 80e1a92:	00 
 80e1a93:	89 04 24             	mov    %eax,(%esp)
 80e1a96:	e8 43 f5 48 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 80e1a9b:	eb 1b                	jmp    80e1ab8 <_ZN30DB_SaveCerashopAddRestrictType11makeRequestEP5CUserRN19CerashopAddRestrict11DBInputDataE+0x2fe>
 80e1a9d:	89 d3                	mov    %edx,%ebx
 80e1a9f:	89 c6                	mov    %eax,%esi
 80e1aa1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e1aa4:	89 04 24             	mov    %eax,(%esp)
 80e1aa7:	e8 26 ae 53 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 80e1aac:	89 f0                	mov    %esi,%eax
 80e1aae:	89 da                	mov    %ebx,%edx
 80e1ab0:	89 04 24             	mov    %eax,(%esp)
 80e1ab3:	e8 98 1c a0 00       	call   8ae3750 <_Unwind_Resume>
 80e1ab8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e1abb:	89 04 24             	mov    %eax,(%esp)
 80e1abe:	e8 0f ae 53 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 80e1ac3:	83 c4 20             	add    $0x20,%esp
 80e1ac6:	5b                   	pop    %ebx
 80e1ac7:	5e                   	pop    %esi
 80e1ac8:	5d                   	pop    %ebp
 80e1ac9:	c3                   	ret

```

```c
// DB_SaveCerashopAddRestrictType::makeRequest @ 0x80e17ba

/* DB_SaveCerashopAddRestrictType::makeRequest(CUser*, CerashopAddRestrict::DBInputData&) */

void DB_SaveCerashopAddRestrictType::makeRequest(CUser *param_1,DBInputData *param_2)

{
  long lVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  uint uVar4;
  CStreamGuard local_1c [8];
  CStreamGuard local_14 [8];
  
  if (**(int **)(param_2 + 4) == 0) {
    pSVar2 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"CerashopAddRestrictType.cpp",0x18c);
    CStreamGuard::CStreamGuard(local_14,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 080e1826 to 080e1924 has its CatchHandler @ 080e1927 */
    CStreamGuard::operator<<(pCVar3,0x340);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar3,-1);
    uVar4 = **(uint **)(param_2 + 4);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar3,uVar4);
    uVar4 = *(uint *)(*(int *)(param_2 + 4) + 4);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar3,uVar4);
    uVar4 = *(uint *)(*(int *)param_2 + 4);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar3,uVar4);
    lVar1 = *(long *)(*(int *)param_2 + 8);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar3,lVar1);
    lVar1 = *(long *)(*(int *)(param_2 + 4) + 0x10);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar3,lVar1);
    uVar4 = CUser::get_acc_id(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar3,uVar4);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
    CStreamGuard::~CStreamGuard(local_14);
  }
  else if (**(int **)(param_2 + 4) == 1) {
    pSVar2 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"CerashopAddRestrictType.cpp",0x19a);
    CStreamGuard::CStreamGuard(local_1c,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 080e199c to 080e1a9a has its CatchHandler @ 080e1a9d */
    CStreamGuard::operator<<(pCVar3,0x340);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,-1);
    uVar4 = **(uint **)(param_2 + 4);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,uVar4);
    uVar4 = *(uint *)(*(int *)(param_2 + 4) + 4);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,uVar4);
    uVar4 = *(uint *)(*(int *)param_2 + 4);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,uVar4);
    lVar1 = *(long *)(*(int *)param_2 + 8);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,lVar1);
    lVar1 = *(long *)(*(int *)(param_2 + 4) + 0x10);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,lVar1);
    uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,uVar4);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
    CStreamGuard::~CStreamGuard(local_1c);
  }
  return;
}

```

