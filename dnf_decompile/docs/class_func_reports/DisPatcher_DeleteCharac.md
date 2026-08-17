# DisPatcher_DeleteCharac

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081c14f0 DisPatcher_DeleteCharac::check_error  [0x081c14f0-0x81c17bf] ===
 81c14f0:	55                   	push   %ebp
 81c14f1:	89 e5                	mov    %esp,%ebp
 81c14f3:	56                   	push   %esi
 81c14f4:	53                   	push   %ebx
 81c14f5:	83 ec 40             	sub    $0x40,%esp
 81c14f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c14fb:	89 04 24             	mov    %eax,(%esp)
 81c14fe:	e8 89 8e f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c1503:	83 f8 02             	cmp    $0x2,%eax
 81c1506:	0f 95 c0             	setne  %al
 81c1509:	84 c0                	test   %al,%al
 81c150b:	74 0a                	je     81c1517 <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE+0x27>
 81c150d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81c1512:	e9 a2 02 00 00       	jmp    81c17b9 <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE+0x2c9>
 81c1517:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c151a:	89 04 24             	mov    %eax,(%esp)
 81c151d:	e8 c4 95 48 00       	call   864aae6 <_ZN5CUser20isLockedCreateCharacEv>
 81c1522:	84 c0                	test   %al,%al
 81c1524:	74 0a                	je     81c1530 <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE+0x40>
 81c1526:	b8 13 00 00 00       	mov    $0x13,%eax
 81c152b:	e9 89 02 00 00       	jmp    81c17b9 <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE+0x2c9>
 81c1530:	8b 45 10             	mov    0x10(%ebp),%eax
 81c1533:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81c1536:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c1539:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c153d:	0f be d8             	movsbl %al,%ebx
 81c1540:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c1543:	89 04 24             	mov    %eax,(%esp)
 81c1546:	e8 9d eb 06 00       	call   82300e8 <_ZN5CUser16get_charac_countEv>
 81c154b:	39 c3                	cmp    %eax,%ebx
 81c154d:	7d 0b                	jge    81c155a <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE+0x6a>
 81c154f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c1552:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c1556:	84 c0                	test   %al,%al
 81c1558:	79 07                	jns    81c1561 <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE+0x71>
 81c155a:	b8 01 00 00 00       	mov    $0x1,%eax
 81c155f:	eb 05                	jmp    81c1566 <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE+0x76>
 81c1561:	b8 00 00 00 00       	mov    $0x0,%eax
 81c1566:	84 c0                	test   %al,%al
 81c1568:	74 0a                	je     81c1574 <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE+0x84>
 81c156a:	b8 fe ff ff ff       	mov    $0xfffffffe,%eax
 81c156f:	e9 45 02 00 00       	jmp    81c17b9 <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE+0x2c9>
 81c1574:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c1577:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c157b:	0f be c0             	movsbl %al,%eax
 81c157e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c1582:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c1585:	89 04 24             	mov    %eax,(%esp)
 81c1588:	e8 a3 92 48 00       	call   864a830 <_ZN5CUser21CheckDeleteCharacTimeEi>
 81c158d:	83 f0 01             	xor    $0x1,%eax
 81c1590:	84 c0                	test   %al,%al
 81c1592:	74 0a                	je     81c159e <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE+0xae>
 81c1594:	b8 16 00 00 00       	mov    $0x16,%eax
 81c1599:	e9 1b 02 00 00       	jmp    81c17b9 <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE+0x2c9>
 81c159e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c15a1:	89 04 24             	mov    %eax,(%esp)
 81c15a4:	e8 a5 a6 f0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81c15a9:	85 c0                	test   %eax,%eax
 81c15ab:	74 31                	je     81c15de <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE+0xee>
 81c15ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c15b0:	89 04 24             	mov    %eax,(%esp)
 81c15b3:	e8 96 a6 f0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81c15b8:	89 c3                	mov    %eax,%ebx
 81c15ba:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c15bd:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c15c1:	0f be c0             	movsbl %al,%eax
 81c15c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c15c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c15cb:	89 04 24             	mov    %eax,(%esp)
 81c15ce:	e8 cd c9 48 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81c15d3:	39 c3                	cmp    %eax,%ebx
 81c15d5:	75 07                	jne    81c15de <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE+0xee>
 81c15d7:	b8 01 00 00 00       	mov    $0x1,%eax
 81c15dc:	eb 05                	jmp    81c15e3 <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE+0xf3>
 81c15de:	b8 00 00 00 00       	mov    $0x0,%eax
 81c15e3:	84 c0                	test   %al,%al
 81c15e5:	74 6d                	je     81c1654 <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE+0x164>
 81c15e7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c15ea:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c15ee:	0f be c0             	movsbl %al,%eax
 81c15f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c15f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c15f8:	89 04 24             	mov    %eax,(%esp)
 81c15fb:	e8 a0 c9 48 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81c1600:	89 c3                	mov    %eax,%ebx
 81c1602:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c1605:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c1609:	0f be f0             	movsbl %al,%esi
 81c160c:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81c1613:	00 
 81c1614:	c7 44 24 08 a4 0a 00 	movl   $0xaa4,0x8(%esp)
 81c161b:	00 
 81c161c:	c7 44 24 04 60 5f bd 	movl   $0x8bd5f60,0x4(%esp)
 81c1623:	08 
 81c1624:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81c1627:	89 04 24             	mov    %eax,(%esp)
 81c162a:	e8 e9 e0 38 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81c162f:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81c1633:	89 74 24 08          	mov    %esi,0x8(%esp)
 81c1637:	c7 44 24 04 20 15 bc 	movl   $0x8bc1520,0x4(%esp)
 81c163e:	08 
 81c163f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81c1642:	89 04 24             	mov    %eax,(%esp)
 81c1645:	e8 3e e1 38 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81c164a:	b8 16 00 00 00       	mov    $0x16,%eax
 81c164f:	e9 65 01 00 00       	jmp    81c17b9 <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE+0x2c9>
 81c1654:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c1657:	89 04 24             	mov    %eax,(%esp)
 81c165a:	e8 ab 93 48 00       	call   864aa0a <_ZN5CUser17isLocked4DataLoadEv>
 81c165f:	84 c0                	test   %al,%al
 81c1661:	74 0a                	je     81c166d <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE+0x17d>
 81c1663:	b8 13 00 00 00       	mov    $0x13,%eax
 81c1668:	e9 4c 01 00 00       	jmp    81c17b9 <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE+0x2c9>
 81c166d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c1670:	89 04 24             	mov    %eax,(%esp)
 81c1673:	e8 ba ed f5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81c1678:	85 c0                	test   %eax,%eax
 81c167a:	0f 95 c0             	setne  %al
 81c167d:	84 c0                	test   %al,%al
 81c167f:	74 0a                	je     81c168b <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE+0x19b>
 81c1681:	b8 fd ff ff ff       	mov    $0xfffffffd,%eax
 81c1686:	e9 2e 01 00 00       	jmp    81c17b9 <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE+0x2c9>
 81c168b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c168e:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c1692:	0f be c0             	movsbl %al,%eax
 81c1695:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c1698:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 81c169e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c16a2:	89 14 24             	mov    %edx,(%esp)
 81c16a5:	e8 0e f5 fd ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 81c16aa:	0f b6 80 46 12 00 00 	movzbl 0x1246(%eax),%eax
 81c16b1:	3c 01                	cmp    $0x1,%al
 81c16b3:	0f 9f c0             	setg   %al
 81c16b6:	84 c0                	test   %al,%al
 81c16b8:	74 40                	je     81c16fa <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE+0x20a>
 81c16ba:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81c16c1:	00 
 81c16c2:	c7 44 24 08 b4 0a 00 	movl   $0xab4,0x8(%esp)
 81c16c9:	00 
 81c16ca:	c7 44 24 04 60 5f bd 	movl   $0x8bd5f60,0x4(%esp)
 81c16d1:	08 
 81c16d2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81c16d5:	89 04 24             	mov    %eax,(%esp)
 81c16d8:	e8 3b e0 38 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81c16dd:	c7 44 24 04 64 15 bc 	movl   $0x8bc1564,0x4(%esp)
 81c16e4:	08 
 81c16e5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81c16e8:	89 04 24             	mov    %eax,(%esp)
 81c16eb:	e8 98 e0 38 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81c16f0:	b8 fc ff ff ff       	mov    $0xfffffffc,%eax
 81c16f5:	e9 bf 00 00 00       	jmp    81c17b9 <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE+0x2c9>
 81c16fa:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c16fd:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c1701:	0f be c0             	movsbl %al,%eax
 81c1704:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c1708:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c170b:	89 04 24             	mov    %eax,(%esp)
 81c170e:	e8 a3 e7 06 00       	call   822feb6 <_ZNK5CUser15get_charac_nameEi>
 81c1713:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81c1716:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81c171a:	74 0d                	je     81c1729 <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE+0x239>
 81c171c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c171f:	83 c0 12             	add    $0x12,%eax
 81c1722:	0f b6 00             	movzbl (%eax),%eax
 81c1725:	84 c0                	test   %al,%al
 81c1727:	75 0a                	jne    81c1733 <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE+0x243>
 81c1729:	b8 fb ff ff ff       	mov    $0xfffffffb,%eax
 81c172e:	e9 86 00 00 00       	jmp    81c17b9 <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE+0x2c9>
 81c1733:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c1736:	83 c0 12             	add    $0x12,%eax
 81c1739:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81c1740:	00 
 81c1741:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c1745:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c1748:	89 04 24             	mov    %eax,(%esp)
 81c174b:	e8 70 d1 eb ff       	call   807e8c0 <strncmp@plt>
 81c1750:	85 c0                	test   %eax,%eax
 81c1752:	74 07                	je     81c175b <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE+0x26b>
 81c1754:	b8 fa ff ff ff       	mov    $0xfffffffa,%eax
 81c1759:	eb 5e                	jmp    81c17b9 <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE+0x2c9>
 81c175b:	e8 86 0e fa ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 81c1760:	c7 44 24 0c 17 00 00 	movl   $0x17,0xc(%esp)
 81c1767:	00 
 81c1768:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81c176f:	00 
 81c1770:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c1773:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c1777:	89 04 24             	mov    %eax,(%esp)
 81c177a:	e8 39 cf fa ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 81c177f:	84 c0                	test   %al,%al
 81c1781:	74 07                	je     81c178a <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE+0x29a>
 81c1783:	b8 d1 00 00 00       	mov    $0xd1,%eax
 81c1788:	eb 2f                	jmp    81c17b9 <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE+0x2c9>
 81c178a:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81c178f:	c7 44 24 08 2e 00 00 	movl   $0x2e,0x8(%esp)
 81c1796:	00 
 81c1797:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c179a:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c179e:	89 04 24             	mov    %eax,(%esp)
 81c17a1:	e8 5c 72 0c 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 81c17a6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c17a9:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81c17ad:	74 05                	je     81c17b4 <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE+0x2c4>
 81c17af:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c17b2:	eb 05                	jmp    81c17b9 <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE+0x2c9>
 81c17b4:	b8 00 00 00 00       	mov    $0x0,%eax
 81c17b9:	83 c4 40             	add    $0x40,%esp
 81c17bc:	5b                   	pop    %ebx
 81c17bd:	5e                   	pop    %esi
 81c17be:	5d                   	pop    %ebp
 81c17bf:	c3                   	ret

```

```c
// DisPatcher_DeleteCharac::check_error @ 0x81c14f0

/* DisPatcher_DeleteCharac::check_error(CUser*, MSG_BASE&) */

int __thiscall
DisPatcher_DeleteCharac::check_error(DisPatcher_DeleteCharac *this,CUser *param_1,MSG_BASE *param_2)

{
  MSG_BASE MVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ServiceRestrictManager *pSVar7;
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  MSG_BASE *local_18;
  char *local_14;
  
  iVar4 = CUser::get_state(param_1);
  if (iVar4 != 2) {
    return -1;
  }
  cVar3 = CUser::isLockedCreateCharac(param_1);
  if (cVar3 != '\0') {
    return 0x13;
  }
  local_18 = param_2;
  MVar1 = param_2[0xd];
  iVar4 = CUser::get_charac_count(param_1);
  if (((char)MVar1 < iVar4) && (-1 < (char)local_18[0xd])) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    return -2;
  }
  cVar3 = CUser::CheckDeleteCharacTime(param_1,(int)(char)local_18[0xd]);
  if (cVar3 != '\x01') {
    return 0x16;
  }
  iVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  if (iVar4 != 0) {
    iVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    iVar5 = CUser::get_charac_no(param_1,(int)(char)local_18[0xd]);
    if (iVar4 == iVar5) {
      bVar2 = true;
      goto LAB_081c15e3;
    }
  }
  bVar2 = false;
LAB_081c15e3:
  if (bVar2) {
    uVar6 = CUser::get_charac_no(param_1,(int)(char)local_18[0xd]);
    MVar1 = local_18[0xd];
    cMyTrace::cMyTrace(local_38,"int DisPatcher_DeleteCharac::check_error(CUser*, MSG_BASE&)",0xaa4,
                       5);
    cMyTrace::operator()
              (local_38,"pUser->getCurCharacNo() == recv_pk_del_charac.charac_index %d %d",
               (int)(char)MVar1,uVar6);
    iVar4 = 0x16;
  }
  else {
    cVar3 = CUser::isLocked4DataLoad(param_1);
    if (cVar3 == '\0') {
      iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
      if (iVar4 == 0) {
        iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8),
                           (int)(char)local_18[0xd]);
        if (*(char *)(iVar4 + 0x1246) < '\x02') {
          local_14 = (char *)CUser::get_charac_name(param_1,(int)(char)local_18[0xd]);
          if ((local_14 == (char *)0x0) || (local_18[0x12] == (MSG_BASE)0x0)) {
            iVar4 = -5;
          }
          else {
            iVar4 = strncmp(local_14,(char *)(local_18 + 0x12),0x1e);
            if (iVar4 == 0) {
              pSVar7 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
              cVar3 = ServiceRestrictManager::isRestricted(pSVar7,param_1,1,0x17);
              if (cVar3 == '\0') {
                iVar4 = CSecu_ProtectionField::Check
                                  (GlobalData::s_pSecuProtectionField,param_1,0x2e);
                if (iVar4 == 0) {
                  iVar4 = 0;
                }
              }
              else {
                iVar4 = 0xd1;
              }
            }
            else {
              iVar4 = -6;
            }
          }
        }
        else {
          cMyTrace::cMyTrace(local_28,"int DisPatcher_DeleteCharac::check_error(CUser*, MSG_BASE&)",
                             0xab4,5);
          cMyTrace::operator()(local_28,"LINK_LOG : ABNOMAL CHARAC DELETEING!!");
          iVar4 = -4;
        }
      }
      else {
        iVar4 = -3;
      }
    }
    else {
      iVar4 = 0x13;
    }
  }
  return iVar4;
}

```

---

## process

```asm
// === 081c1182 DisPatcher_DeleteCharac::process  [0x081c1182-0x81c14b7] ===
 81c1182:	55                   	push   %ebp
 81c1183:	89 e5                	mov    %esp,%ebp
 81c1185:	57                   	push   %edi
 81c1186:	56                   	push   %esi
 81c1187:	53                   	push   %ebx
 81c1188:	83 ec 5c             	sub    $0x5c,%esp
 81c118b:	8b 45 14             	mov    0x14(%ebp),%eax
 81c118e:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81c1191:	8b 45 10             	mov    0x10(%ebp),%eax
 81c1194:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c1198:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c119b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c119f:	8b 45 08             	mov    0x8(%ebp),%eax
 81c11a2:	89 04 24             	mov    %eax,(%esp)
 81c11a5:	e8 46 03 00 00       	call   81c14f0 <_ZN23DisPatcher_DeleteCharac11check_errorEP5CUserR8MSG_BASE>
 81c11aa:	89 c2                	mov    %eax,%edx
 81c11ac:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c11af:	89 50 04             	mov    %edx,0x4(%eax)
 81c11b2:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c11b5:	8b 40 04             	mov    0x4(%eax),%eax
 81c11b8:	85 c0                	test   %eax,%eax
 81c11ba:	7e 0a                	jle    81c11c6 <_ZN23DisPatcher_DeleteCharac7processEP5CUserR8MSG_BASER9ParamBase+0x44>
 81c11bc:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c11c1:	e9 e7 02 00 00       	jmp    81c14ad <_ZN23DisPatcher_DeleteCharac7processEP5CUserR8MSG_BASER9ParamBase+0x32b>
 81c11c6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c11c9:	8b 40 04             	mov    0x4(%eax),%eax
 81c11cc:	85 c0                	test   %eax,%eax
 81c11ce:	79 34                	jns    81c1204 <_ZN23DisPatcher_DeleteCharac7processEP5CUserR8MSG_BASER9ParamBase+0x82>
 81c11d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c11d3:	89 04 24             	mov    %eax,(%esp)
 81c11d6:	e8 93 91 f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c11db:	8b 55 dc             	mov    -0x24(%ebp),%edx
 81c11de:	8b 52 04             	mov    0x4(%edx),%edx
 81c11e1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c11e5:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c11e9:	c7 44 24 04 a0 5f bd 	movl   $0x8bd5fa0,0x4(%esp)
 81c11f0:	08 
 81c11f1:	c7 04 24 41 0a 00 00 	movl   $0xa41,(%esp)
 81c11f8:	e8 da f6 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c11fd:	89 c3                	mov    %eax,%ebx
 81c11ff:	e9 a9 02 00 00       	jmp    81c14ad <_ZN23DisPatcher_DeleteCharac7processEP5CUserR8MSG_BASER9ParamBase+0x32b>
 81c1204:	8b 45 10             	mov    0x10(%ebp),%eax
 81c1207:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81c120a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c120d:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c1211:	0f be c0             	movsbl %al,%eax
 81c1214:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c1218:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c121b:	89 04 24             	mov    %eax,(%esp)
 81c121e:	e8 7d cd 48 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81c1223:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c1227:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c122a:	89 04 24             	mov    %eax,(%esp)
 81c122d:	e8 40 d4 4c 00       	call   868e672 <_ZN5CUser25RemoveCharacMercenaryInfoEj>
 81c1232:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81c1237:	c7 44 24 08 4d 0a 00 	movl   $0xa4d,0x8(%esp)
 81c123e:	00 
 81c123f:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81c1246:	08 
 81c1247:	89 04 24             	mov    %eax,(%esp)
 81c124a:	e8 37 e8 0c 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 81c124f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81c1256:	00 
 81c1257:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c125b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81c125e:	89 04 24             	mov    %eax,(%esp)
 81c1261:	e8 c0 79 f0 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81c1266:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81c1269:	89 04 24             	mov    %eax,(%esp)
 81c126c:	e8 d5 79 f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c1271:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 81c1278:	00 
 81c1279:	89 04 24             	mov    %eax,(%esp)
 81c127c:	e8 d5 79 f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c1281:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c1284:	89 04 24             	mov    %eax,(%esp)
 81c1287:	e8 0a 7a f0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81c128c:	89 c3                	mov    %eax,%ebx
 81c128e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81c1291:	89 04 24             	mov    %eax,(%esp)
 81c1294:	e8 ad 79 f0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81c1299:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c129d:	89 04 24             	mov    %eax,(%esp)
 81c12a0:	e8 b1 79 f0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81c12a5:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81c12a8:	89 04 24             	mov    %eax,(%esp)
 81c12ab:	e8 9e 79 f0 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81c12b0:	89 04 24             	mov    %eax,(%esp)
 81c12b3:	e8 2a 5a 07 00       	call   8236ce2 <_ZN12CStreamGuard11GetInBufferI17SIG_DELETE_CHARACEEPT_v>
 81c12b8:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81c12bb:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 81c12c2:	00 
 81c12c3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c12ca:	00 
 81c12cb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c12ce:	89 04 24             	mov    %eax,(%esp)
 81c12d1:	e8 ea c9 eb ff       	call   807dcc0 <memset@plt>
 81c12d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c12d9:	89 04 24             	mov    %eax,(%esp)
 81c12dc:	e8 8d 90 f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c12e1:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81c12e4:	89 02                	mov    %eax,(%edx)
 81c12e6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c12e9:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c12ed:	0f be c0             	movsbl %al,%eax
 81c12f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c12f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c12f7:	89 04 24             	mov    %eax,(%esp)
 81c12fa:	e8 a1 cc 48 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81c12ff:	89 c2                	mov    %eax,%edx
 81c1301:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c1304:	89 50 04             	mov    %edx,0x4(%eax)
 81c1307:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c130a:	8b 40 04             	mov    0x4(%eax),%eax
 81c130d:	85 c0                	test   %eax,%eax
 81c130f:	75 28                	jne    81c1339 <_ZN23DisPatcher_DeleteCharac7processEP5CUserR8MSG_BASER9ParamBase+0x1b7>
 81c1311:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c1314:	c7 40 04 15 00 00 00 	movl   $0x15,0x4(%eax)
 81c131b:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81c1320:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 81c1323:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c1327:	89 04 24             	mov    %eax,(%esp)
 81c132a:	e8 51 fd f3 ff       	call   8101080 <_ZN10StreamPool4FreeER12CStreamGuard>
 81c132f:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c1334:	e9 69 01 00 00       	jmp    81c14a2 <_ZN23DisPatcher_DeleteCharac7processEP5CUserR8MSG_BASER9ParamBase+0x320>
 81c1339:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c133c:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c1340:	0f be c0             	movsbl %al,%eax
 81c1343:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c1347:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c134a:	89 04 24             	mov    %eax,(%esp)
 81c134d:	e8 04 96 48 00       	call   864a956 <_ZN5CUser31GetGuildIdBeforeDeleteCharacterEi>
 81c1352:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81c1355:	89 42 0c             	mov    %eax,0xc(%edx)
 81c1358:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c135b:	89 04 24             	mov    %eax,(%esp)
 81c135e:	e8 b7 96 48 00       	call   864aa1a <_ZN5CUser16lockDeleteCharacEv>
 81c1363:	83 f0 01             	xor    $0x1,%eax
 81c1366:	84 c0                	test   %al,%al
 81c1368:	74 46                	je     81c13b0 <_ZN23DisPatcher_DeleteCharac7processEP5CUserR8MSG_BASER9ParamBase+0x22e>
 81c136a:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81c136f:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 81c1372:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c1376:	89 04 24             	mov    %eax,(%esp)
 81c1379:	e8 02 fd f3 ff       	call   8101080 <_ZN10StreamPool4FreeER12CStreamGuard>
 81c137e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c1381:	89 04 24             	mov    %eax,(%esp)
 81c1384:	e8 e5 8f f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c1389:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c138d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c1394:	00 
 81c1395:	c7 44 24 04 a0 5f bd 	movl   $0x8bd5fa0,0x4(%esp)
 81c139c:	08 
 81c139d:	c7 04 24 68 0a 00 00 	movl   $0xa68,(%esp)
 81c13a4:	e8 2e f5 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c13a9:	89 c3                	mov    %eax,%ebx
 81c13ab:	e9 f2 00 00 00       	jmp    81c14a2 <_ZN23DisPatcher_DeleteCharac7processEP5CUserR8MSG_BASER9ParamBase+0x320>
 81c13b0:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81c13b5:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 81c13b8:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c13bc:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81c13c3:	00 
 81c13c4:	89 04 24             	mov    %eax,(%esp)
 81c13c7:	e8 12 fc 3a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81c13cc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c13cf:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c13d3:	0f be c0             	movsbl %al,%eax
 81c13d6:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c13d9:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 81c13df:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c13e3:	89 14 24             	mov    %edx,(%esp)
 81c13e6:	e8 cd f7 fd ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 81c13eb:	83 c0 04             	add    $0x4,%eax
 81c13ee:	89 c7                	mov    %eax,%edi
 81c13f0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c13f3:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c13f7:	0f be c0             	movsbl %al,%eax
 81c13fa:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c13fd:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 81c1403:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c1407:	89 14 24             	mov    %edx,(%esp)
 81c140a:	e8 a9 f7 fd ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 81c140f:	8b 30                	mov    (%eax),%esi
 81c1411:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c1414:	89 04 24             	mov    %eax,(%esp)
 81c1417:	e8 52 8f f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c141c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c1423:	00 
 81c1424:	89 04 24             	mov    %eax,(%esp)
 81c1427:	e8 1f 7c f4 ff       	call   810904b <_Z14NumberToStringji>
 81c142c:	89 c3                	mov    %eax,%ebx
 81c142e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c1435:	00 
 81c1436:	c7 44 24 08 6e 0a 00 	movl   $0xa6e,0x8(%esp)
 81c143d:	00 
 81c143e:	c7 44 24 04 a0 5f bd 	movl   $0x8bd5fa0,0x4(%esp)
 81c1445:	08 
 81c1446:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81c1449:	89 04 24             	mov    %eax,(%esp)
 81c144c:	e8 c7 e2 38 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81c1451:	89 7c 24 18          	mov    %edi,0x18(%esp)
 81c1455:	89 74 24 14          	mov    %esi,0x14(%esp)
 81c1459:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81c145d:	c7 44 24 0c 6e 0a 00 	movl   $0xa6e,0xc(%esp)
 81c1464:	00 
 81c1465:	c7 44 24 08 a0 5f bd 	movl   $0x8bd5fa0,0x8(%esp)
 81c146c:	08 
 81c146d:	c7 44 24 04 f8 14 bc 	movl   $0x8bc14f8,0x4(%esp)
 81c1474:	08 
 81c1475:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81c1478:	89 04 24             	mov    %eax,(%esp)
 81c147b:	e8 08 e3 38 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81c1480:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c1485:	eb 1b                	jmp    81c14a2 <_ZN23DisPatcher_DeleteCharac7processEP5CUserR8MSG_BASER9ParamBase+0x320>
 81c1487:	89 d3                	mov    %edx,%ebx
 81c1489:	89 c6                	mov    %eax,%esi
 81c148b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81c148e:	89 04 24             	mov    %eax,(%esp)
 81c1491:	e8 3c b4 45 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81c1496:	89 f0                	mov    %esi,%eax
 81c1498:	89 da                	mov    %ebx,%edx
 81c149a:	89 04 24             	mov    %eax,(%esp)
 81c149d:	e8 ae 22 92 00       	call   8ae3750 <_Unwind_Resume>
 81c14a2:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81c14a5:	89 04 24             	mov    %eax,(%esp)
 81c14a8:	e8 25 b4 45 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81c14ad:	89 d8                	mov    %ebx,%eax
 81c14af:	83 c4 5c             	add    $0x5c,%esp
 81c14b2:	5b                   	pop    %ebx
 81c14b3:	5e                   	pop    %esi
 81c14b4:	5f                   	pop    %edi
 81c14b5:	5d                   	pop    %ebp
 81c14b6:	c3                   	ret
 81c14b7:	90                   	nop

```

```c
// DisPatcher_DeleteCharac::process @ 0x81c1182

/* DisPatcher_DeleteCharac::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_DeleteCharac::process
          (DisPatcher_DeleteCharac *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  CStreamGuard local_40 [8];
  cMyTrace local_38 [16];
  ParamBase *local_28;
  MSG_BASE *local_24;
  SIG_DELETE_CHARAC *local_20;
  
  local_28 = param_3;
  uVar2 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_28 + 4) = uVar2;
  if (*(int *)(local_28 + 4) < 1) {
    if (*(int *)(local_28 + 4) < 0) {
      uVar3 = CUser::get_acc_id(param_1);
      uVar2 = LineFunc(0xa41,
                       "virtual int DisPatcher_DeleteCharac::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_28 + 4),uVar3);
    }
    else {
      local_24 = param_2;
      uVar3 = CUser::get_charac_no(param_1,(int)(char)param_2[0xd]);
      CUser::RemoveCharacMercenaryInfo(param_1,uVar3);
      pSVar4 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0xa4d);
      CStreamGuard::CStreamGuard(local_40,pSVar4,true);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_40);
                    /* try { // try from 081c127c to 081c147f has its CatchHandler @ 081c1487 */
      CStreamGuard::operator<<(pCVar5,5);
      iVar6 = CUser::GetUID(param_1);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_40);
      CStreamGuard::operator<<(pCVar5,iVar6);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_40);
      local_20 = CStreamGuard::GetInBuffer<SIG_DELETE_CHARAC>(pCVar5);
      memset(local_20,0,0x14);
      uVar2 = CUser::get_acc_id(param_1);
      *(undefined4 *)local_20 = uVar2;
      uVar2 = CUser::get_charac_no(param_1,(int)(char)local_24[0xd]);
      *(undefined4 *)(local_20 + 4) = uVar2;
      if (*(int *)(local_20 + 4) == 0) {
        *(undefined4 *)(local_28 + 4) = 0x15;
        StreamPool::Free(GlobalData::s_stream_pool,local_40);
        uVar2 = 0;
      }
      else {
        uVar2 = CUser::GetGuildIdBeforeDeleteCharacter(param_1,(int)(char)local_24[0xd]);
        *(undefined4 *)(local_20 + 0xc) = uVar2;
        cVar1 = CUser::lockDeleteCharac(param_1);
        if (cVar1 == '\x01') {
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_40);
          iVar6 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                            ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                             (param_1 + 0x796e8),(int)(char)local_24[0xd]);
          puVar7 = (undefined4 *)
                   std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                             ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                              (param_1 + 0x796e8),(int)(char)local_24[0xd]);
          uVar2 = *puVar7;
          uVar3 = CUser::get_acc_id(param_1);
          uVar8 = NumberToString(uVar3,0);
          cMyTrace::cMyTrace(local_38,
                             "virtual int DisPatcher_DeleteCharac::process(CUser*, MSG_BASE&, ParamBase&)"
                             ,0xa6e,0);
          cMyTrace::operator()
                    (local_38,"[%s][%d] accid(%s) delete charac(%d) %s",
                     "virtual int DisPatcher_DeleteCharac::process(CUser*, MSG_BASE&, ParamBase&)",
                     0xa6e,uVar8,uVar2,iVar6 + 4);
          uVar2 = 0;
        }
        else {
          StreamPool::Free(GlobalData::s_stream_pool,local_40);
          uVar3 = CUser::get_acc_id(param_1);
          uVar2 = LineFunc(0xa68,
                           "virtual int DisPatcher_DeleteCharac::process(CUser*, MSG_BASE&, ParamBase&)"
                           ,0,uVar3);
        }
      }
      CStreamGuard::~CStreamGuard(local_40);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## read

```asm
// === 081c1094 DisPatcher_DeleteCharac::read  [0x081c1094-0x81c1181] ===
 81c1094:	55                   	push   %ebp
 81c1095:	89 e5                	mov    %esp,%ebp
 81c1097:	83 ec 28             	sub    $0x28,%esp
 81c109a:	8b 45 10             	mov    0x10(%ebp),%eax
 81c109d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c10a0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c10a3:	83 c0 0d             	add    $0xd,%eax
 81c10a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c10aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c10ad:	89 04 24             	mov    %eax,(%esp)
 81c10b0:	e8 6d be 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81c10b5:	83 f0 01             	xor    $0x1,%eax
 81c10b8:	84 c0                	test   %al,%al
 81c10ba:	74 29                	je     81c10e5 <_ZN23DisPatcher_DeleteCharac4readER9PacketBufR8MSG_BASE+0x51>
 81c10bc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c10c3:	00 
 81c10c4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c10cb:	00 
 81c10cc:	c7 44 24 04 00 60 bd 	movl   $0x8bd6000,0x4(%esp)
 81c10d3:	08 
 81c10d4:	c7 04 24 26 0a 00 00 	movl   $0xa26,(%esp)
 81c10db:	e8 f7 f7 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c10e0:	e9 9b 00 00 00       	jmp    81c1180 <_ZN23DisPatcher_DeleteCharac4readER9PacketBufR8MSG_BASE+0xec>
 81c10e5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c10e8:	83 c0 0e             	add    $0xe,%eax
 81c10eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c10ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c10f2:	89 04 24             	mov    %eax,(%esp)
 81c10f5:	e8 f6 bf 3c 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81c10fa:	83 f0 01             	xor    $0x1,%eax
 81c10fd:	84 c0                	test   %al,%al
 81c10ff:	74 26                	je     81c1127 <_ZN23DisPatcher_DeleteCharac4readER9PacketBufR8MSG_BASE+0x93>
 81c1101:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c1108:	00 
 81c1109:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c1110:	00 
 81c1111:	c7 44 24 04 00 60 bd 	movl   $0x8bd6000,0x4(%esp)
 81c1118:	08 
 81c1119:	c7 04 24 29 0a 00 00 	movl   $0xa29,(%esp)
 81c1120:	e8 b2 f7 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c1125:	eb 59                	jmp    81c1180 <_ZN23DisPatcher_DeleteCharac4readER9PacketBufR8MSG_BASE+0xec>
 81c1127:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c112a:	8b 40 0e             	mov    0xe(%eax),%eax
 81c112d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81c1130:	83 c2 12             	add    $0x12,%edx
 81c1133:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c1137:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81c113e:	00 
 81c113f:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c1143:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c1146:	89 04 24             	mov    %eax,(%esp)
 81c1149:	e8 6e c1 3c 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81c114e:	83 f0 01             	xor    $0x1,%eax
 81c1151:	84 c0                	test   %al,%al
 81c1153:	74 26                	je     81c117b <_ZN23DisPatcher_DeleteCharac4readER9PacketBufR8MSG_BASE+0xe7>
 81c1155:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c115c:	00 
 81c115d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c1164:	00 
 81c1165:	c7 44 24 04 00 60 bd 	movl   $0x8bd6000,0x4(%esp)
 81c116c:	08 
 81c116d:	c7 04 24 30 0a 00 00 	movl   $0xa30,(%esp)
 81c1174:	e8 5e f7 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c1179:	eb 05                	jmp    81c1180 <_ZN23DisPatcher_DeleteCharac4readER9PacketBufR8MSG_BASE+0xec>
 81c117b:	b8 00 00 00 00       	mov    $0x0,%eax
 81c1180:	c9                   	leave
 81c1181:	c3                   	ret

```

```c
// DisPatcher_DeleteCharac::read @ 0x81c1094

/* DisPatcher_DeleteCharac::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_DeleteCharac::read(DisPatcher_DeleteCharac *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x12),0x1e,*(int *)(param_2 + 0xe));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0xa30,"virtual int DisPatcher_DeleteCharac::read(PacketBuf&, MSG_BASE&)",0,
                         0);
      }
    }
    else {
      uVar2 = LineFunc(0xa29,"virtual int DisPatcher_DeleteCharac::read(PacketBuf&, MSG_BASE&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0xa26,"virtual int DisPatcher_DeleteCharac::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081c14b8 DisPatcher_DeleteCharac::send  [0x081c14b8-0x81c14ef] ===
 81c14b8:	55                   	push   %ebp
 81c14b9:	89 e5                	mov    %esp,%ebp
 81c14bb:	83 ec 28             	sub    $0x28,%esp
 81c14be:	8b 45 10             	mov    0x10(%ebp),%eax
 81c14c1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c14c4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c14c7:	8b 40 04             	mov    0x4(%eax),%eax
 81c14ca:	85 c0                	test   %eax,%eax
 81c14cc:	74 20                	je     81c14ee <_ZN23DisPatcher_DeleteCharac4sendEP5CUserR9ParamBase+0x36>
 81c14ce:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c14d1:	8b 40 04             	mov    0x4(%eax),%eax
 81c14d4:	0f b6 c0             	movzbl %al,%eax
 81c14d7:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c14db:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 81c14e2:	00 
 81c14e3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c14e6:	89 04 24             	mov    %eax,(%esp)
 81c14e9:	e8 54 aa 4b 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81c14ee:	c9                   	leave
 81c14ef:	c3                   	ret

```

```c
// DisPatcher_DeleteCharac::send @ 0x81c14b8

/* DisPatcher_DeleteCharac::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_DeleteCharac::send(DisPatcher_DeleteCharac *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    CUser::SendCmdErrorPacket(param_1,6,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

