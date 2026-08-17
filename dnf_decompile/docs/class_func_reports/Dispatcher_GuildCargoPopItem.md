# Dispatcher_GuildCargoPopItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081d14aa Dispatcher_GuildCargoPopItem::check_error  [0x081d14aa-0x81d15b1] ===
 81d14aa:	55                   	push   %ebp
 81d14ab:	89 e5                	mov    %esp,%ebp
 81d14ad:	53                   	push   %ebx
 81d14ae:	83 ec 24             	sub    $0x24,%esp
 81d14b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d14b4:	89 04 24             	mov    %eax,(%esp)
 81d14b7:	e8 d0 8e f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d14bc:	83 f8 03             	cmp    $0x3,%eax
 81d14bf:	75 0f                	jne    81d14d0 <_ZN28Dispatcher_GuildCargoPopItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x26>
 81d14c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d14c4:	89 04 24             	mov    %eax,(%esp)
 81d14c7:	e8 66 ef f4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81d14cc:	85 c0                	test   %eax,%eax
 81d14ce:	75 07                	jne    81d14d7 <_ZN28Dispatcher_GuildCargoPopItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x2d>
 81d14d0:	b8 01 00 00 00       	mov    $0x1,%eax
 81d14d5:	eb 05                	jmp    81d14dc <_ZN28Dispatcher_GuildCargoPopItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x32>
 81d14d7:	b8 00 00 00 00       	mov    $0x0,%eax
 81d14dc:	84 c0                	test   %al,%al
 81d14de:	74 0a                	je     81d14ea <_ZN28Dispatcher_GuildCargoPopItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x40>
 81d14e0:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81d14e5:	e9 c1 00 00 00       	jmp    81d15ab <_ZN28Dispatcher_GuildCargoPopItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x101>
 81d14ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d14ed:	89 04 24             	mov    %eax,(%esp)
 81d14f0:	e8 77 df 05 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81d14f5:	85 c0                	test   %eax,%eax
 81d14f7:	0f 94 c0             	sete   %al
 81d14fa:	84 c0                	test   %al,%al
 81d14fc:	74 0a                	je     81d1508 <_ZN28Dispatcher_GuildCargoPopItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x5e>
 81d14fe:	b8 64 00 00 00       	mov    $0x64,%eax
 81d1503:	e9 a3 00 00 00       	jmp    81d15ab <_ZN28Dispatcher_GuildCargoPopItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x101>
 81d1508:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d150b:	89 04 24             	mov    %eax,(%esp)
 81d150e:	e8 c5 ec 05 00       	call   82301d8 <_ZN5CUser16IsExistGuildAgitEv>
 81d1513:	83 f0 01             	xor    $0x1,%eax
 81d1516:	84 c0                	test   %al,%al
 81d1518:	74 0a                	je     81d1524 <_ZN28Dispatcher_GuildCargoPopItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x7a>
 81d151a:	b8 b5 00 00 00       	mov    $0xb5,%eax
 81d151f:	e9 87 00 00 00       	jmp    81d15ab <_ZN28Dispatcher_GuildCargoPopItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x101>
 81d1524:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81d1529:	c7 44 24 08 09 00 00 	movl   $0x9,0x8(%esp)
 81d1530:	00 
 81d1531:	8b 55 0c             	mov    0xc(%ebp),%edx
 81d1534:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d1538:	89 04 24             	mov    %eax,(%esp)
 81d153b:	e8 c2 74 0b 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 81d1540:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d1543:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81d1547:	74 05                	je     81d154e <_ZN28Dispatcher_GuildCargoPopItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0xa4>
 81d1549:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d154c:	eb 5d                	jmp    81d15ab <_ZN28Dispatcher_GuildCargoPopItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x101>
 81d154e:	8b 45 10             	mov    0x10(%ebp),%eax
 81d1551:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d1554:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d1557:	8b 58 0f             	mov    0xf(%eax),%ebx
 81d155a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d155d:	89 04 24             	mov    %eax,(%esp)
 81d1560:	e8 19 8d f0 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81d1565:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d1569:	89 04 24             	mov    %eax,(%esp)
 81d156c:	e8 b9 40 33 00       	call   850562a <_ZNK10CInventory18possible_to_insertEi>
 81d1571:	83 f0 01             	xor    $0x1,%eax
 81d1574:	84 c0                	test   %al,%al
 81d1576:	74 07                	je     81d157f <_ZN28Dispatcher_GuildCargoPopItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0xd5>
 81d1578:	b8 cb 00 00 00       	mov    $0xcb,%eax
 81d157d:	eb 2c                	jmp    81d15ab <_ZN28Dispatcher_GuildCargoPopItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x101>
 81d157f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d1582:	8b 58 0f             	mov    0xf(%eax),%ebx
 81d1585:	e8 11 ac ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81d158a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d158e:	89 04 24             	mov    %eax,(%esp)
 81d1591:	e8 9c e4 18 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81d1596:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d1599:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81d159d:	75 07                	jne    81d15a6 <_ZN28Dispatcher_GuildCargoPopItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0xfc>
 81d159f:	b8 c5 00 00 00       	mov    $0xc5,%eax
 81d15a4:	eb 05                	jmp    81d15ab <_ZN28Dispatcher_GuildCargoPopItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x101>
 81d15a6:	b8 00 00 00 00       	mov    $0x0,%eax
 81d15ab:	83 c4 24             	add    $0x24,%esp
 81d15ae:	5b                   	pop    %ebx
 81d15af:	5d                   	pop    %ebp
 81d15b0:	c3                   	ret
 81d15b1:	90                   	nop

```

```c
// Dispatcher_GuildCargoPopItem::check_error @ 0x81d14aa

/* Dispatcher_GuildCargoPopItem::check_error(CUser*, MSG_BASE&, ParamBase&) */

int Dispatcher_GuildCargoPopItem::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CInventory *this;
  CDataManager *this_00;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if ((iVar3 == 3) &&
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar3 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    iVar3 = -1;
  }
  else {
    iVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
    if (iVar3 == 0) {
      iVar3 = 100;
    }
    else {
      cVar2 = CUser::IsExistGuildAgit((CUser *)param_2);
      if (cVar2 == '\x01') {
        iVar3 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_2,9);
        if (iVar3 == 0) {
          iVar3 = *(int *)(param_3 + 0xf);
          this = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
          cVar2 = CInventory::possible_to_insert(this,iVar3);
          if (cVar2 == '\x01') {
            iVar3 = *(int *)(param_3 + 0xf);
            this_00 = (CDataManager *)G_CDataManager();
            iVar3 = CDataManager::find_item(this_00,iVar3);
            if (iVar3 == 0) {
              iVar3 = 0xc5;
            }
            else {
              iVar3 = 0;
            }
          }
          else {
            iVar3 = 0xcb;
          }
        }
      }
      else {
        iVar3 = 0xb5;
      }
    }
  }
  return iVar3;
}

```

---

## process

```asm
// === 081d15b2 Dispatcher_GuildCargoPopItem::process  [0x081d15b2-0x81d1747] ===
 81d15b2:	55                   	push   %ebp
 81d15b3:	89 e5                	mov    %esp,%ebp
 81d15b5:	57                   	push   %edi
 81d15b6:	56                   	push   %esi
 81d15b7:	53                   	push   %ebx
 81d15b8:	83 ec 5c             	sub    $0x5c,%esp
 81d15bb:	8b 45 14             	mov    0x14(%ebp),%eax
 81d15be:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81d15c1:	8b 45 14             	mov    0x14(%ebp),%eax
 81d15c4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d15c8:	8b 45 10             	mov    0x10(%ebp),%eax
 81d15cb:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d15cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d15d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d15d6:	8b 45 08             	mov    0x8(%ebp),%eax
 81d15d9:	89 04 24             	mov    %eax,(%esp)
 81d15dc:	e8 c9 fe ff ff       	call   81d14aa <_ZN28Dispatcher_GuildCargoPopItem11check_errorEP5CUserR8MSG_BASER9ParamBase>
 81d15e1:	89 c2                	mov    %eax,%edx
 81d15e3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81d15e6:	89 50 04             	mov    %edx,0x4(%eax)
 81d15e9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81d15ec:	8b 40 04             	mov    0x4(%eax),%eax
 81d15ef:	85 c0                	test   %eax,%eax
 81d15f1:	7e 0a                	jle    81d15fd <_ZN28Dispatcher_GuildCargoPopItem7processEP5CUserR8MSG_BASER9ParamBase+0x4b>
 81d15f3:	b8 00 00 00 00       	mov    $0x0,%eax
 81d15f8:	e9 42 01 00 00       	jmp    81d173f <_ZN28Dispatcher_GuildCargoPopItem7processEP5CUserR8MSG_BASER9ParamBase+0x18d>
 81d15fd:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81d1600:	8b 40 04             	mov    0x4(%eax),%eax
 81d1603:	85 c0                	test   %eax,%eax
 81d1605:	79 2b                	jns    81d1632 <_ZN28Dispatcher_GuildCargoPopItem7processEP5CUserR8MSG_BASER9ParamBase+0x80>
 81d1607:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81d160a:	8b 40 04             	mov    0x4(%eax),%eax
 81d160d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d1614:	00 
 81d1615:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d1619:	c7 44 24 04 e0 3a bd 	movl   $0x8bd3ae0,0x4(%esp)
 81d1620:	08 
 81d1621:	c7 04 24 8f 2d 00 00 	movl   $0x2d8f,(%esp)
 81d1628:	e8 aa f2 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d162d:	e9 0d 01 00 00       	jmp    81d173f <_ZN28Dispatcher_GuildCargoPopItem7processEP5CUserR8MSG_BASER9ParamBase+0x18d>
 81d1632:	8b 45 10             	mov    0x10(%ebp),%eax
 81d1635:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81d1638:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d163b:	8b 58 0f             	mov    0xf(%eax),%ebx
 81d163e:	e8 58 ab ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81d1643:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d1647:	89 04 24             	mov    %eax,(%esp)
 81d164a:	e8 e3 e3 18 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81d164f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81d1652:	8d 45 b9             	lea    -0x47(%ebp),%eax
 81d1655:	89 04 24             	mov    %eax,(%esp)
 81d1658:	e8 db a8 05 00       	call   822bf38 <_ZN33Packet_Guild_Guild_Cargo_Pop_ItemC1Ev>
 81d165d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d1660:	89 04 24             	mov    %eax,(%esp)
 81d1663:	e8 04 de 05 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81d1668:	89 45 c3             	mov    %eax,-0x3d(%ebp)
 81d166b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d166e:	89 04 24             	mov    %eax,(%esp)
 81d1671:	e8 d8 a5 ef ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81d1676:	89 45 c7             	mov    %eax,-0x39(%ebp)
 81d1679:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d167c:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81d1680:	0f b7 c0             	movzwl %ax,%eax
 81d1683:	89 45 cb             	mov    %eax,-0x35(%ebp)
 81d1686:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d1689:	8b 40 0f             	mov    0xf(%eax),%eax
 81d168c:	89 45 cf             	mov    %eax,-0x31(%ebp)
 81d168f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d1692:	8b 40 13             	mov    0x13(%eax),%eax
 81d1695:	89 45 d3             	mov    %eax,-0x2d(%ebp)
 81d1698:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d169b:	89 04 24             	mov    %eax,(%esp)
 81d169e:	e8 57 fc f1 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 81d16a3:	84 c0                	test   %al,%al
 81d16a5:	74 07                	je     81d16ae <_ZN28Dispatcher_GuildCargoPopItem7processEP5CUserR8MSG_BASER9ParamBase+0xfc>
 81d16a7:	b8 01 00 00 00       	mov    $0x1,%eax
 81d16ac:	eb 05                	jmp    81d16b3 <_ZN28Dispatcher_GuildCargoPopItem7processEP5CUserR8MSG_BASER9ParamBase+0x101>
 81d16ae:	b8 00 00 00 00       	mov    $0x0,%eax
 81d16b3:	88 45 d7             	mov    %al,-0x29(%ebp)
 81d16b6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d16b9:	0f b6 40 17          	movzbl 0x17(%eax),%eax
 81d16bd:	0f b6 c0             	movzbl %al,%eax
 81d16c0:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81d16c3:	0f b7 45 bb          	movzwl -0x45(%ebp),%eax
 81d16c7:	0f b7 f0             	movzwl %ax,%esi
 81d16ca:	8d 5d b9             	lea    -0x47(%ebp),%ebx
 81d16cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d16d0:	89 04 24             	mov    %eax,(%esp)
 81d16d3:	e8 b8 a5 ef ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81d16d8:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 81d16de:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d16e2:	89 14 24             	mov    %edx,(%esp)
 81d16e5:	e8 ce bc f4 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81d16ea:	89 74 24 08          	mov    %esi,0x8(%esp)
 81d16ee:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d16f2:	89 04 24             	mov    %eax,(%esp)
 81d16f5:	e8 d4 c5 29 00       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 81d16fa:	8b 75 d8             	mov    -0x28(%ebp),%esi
 81d16fd:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 81d1701:	0f b6 d8             	movzbl %al,%ebx
 81d1704:	8b 4d d3             	mov    -0x2d(%ebp),%ecx
 81d1707:	8b 55 cf             	mov    -0x31(%ebp),%edx
 81d170a:	8b 45 cb             	mov    -0x35(%ebp),%eax
 81d170d:	8b 7d 0c             	mov    0xc(%ebp),%edi
 81d1710:	81 c7 00 97 07 00    	add    $0x79700,%edi
 81d1716:	89 74 24 18          	mov    %esi,0x18(%esp)
 81d171a:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 81d171e:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81d1722:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81d1726:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d172a:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81d1731:	00 
 81d1732:	89 3c 24             	mov    %edi,(%esp)
 81d1735:	e8 b0 4f 4b 00       	call   86866ea <_ZN15cUserHistoryLog17GuildCargoPopItemE31ENUM_GUILD_CARGO_HISTORY_REASONiiiii>
 81d173a:	b8 00 00 00 00       	mov    $0x0,%eax
 81d173f:	83 c4 5c             	add    $0x5c,%esp
 81d1742:	5b                   	pop    %ebx
 81d1743:	5e                   	pop    %esi
 81d1744:	5f                   	pop    %edi
 81d1745:	5d                   	pop    %ebp
 81d1746:	c3                   	ret
 81d1747:	90                   	nop

```

```c
// Dispatcher_GuildCargoPopItem::process @ 0x81d15b2

/* Dispatcher_GuildCargoPopItem::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_GuildCargoPopItem::process
          (Dispatcher_GuildCargoPopItem *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  CDataManager *this_00;
  CGuildServerProxy *this_01;
  Packet_Guild_Guild_Cargo_Pop_Item local_4b [2];
  ushort local_49;
  undefined4 local_41;
  undefined4 local_3d;
  uint local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined1 local_2d;
  uint local_2c;
  ParamBase *local_28;
  MSG_BASE *local_24;
  CItem *local_20;
  
  local_28 = param_3;
  uVar3 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(local_28 + 4) = uVar3;
  if (*(int *)(local_28 + 4) < 1) {
    if (*(int *)(local_28 + 4) < 0) {
      uVar3 = LineFunc(0x2d8f,
                       "virtual int Dispatcher_GuildCargoPopItem::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_28 + 4),0);
    }
    else {
      local_24 = param_2;
      iVar1 = *(int *)(param_2 + 0xf);
      this_00 = (CDataManager *)G_CDataManager();
      local_20 = (CItem *)CDataManager::find_item(this_00,iVar1);
      Packet_Guild_Guild_Cargo_Pop_Item::Packet_Guild_Guild_Cargo_Pop_Item(local_4b);
      local_41 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
      local_3d = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      local_39 = (uint)*(ushort *)(local_24 + 0xd);
      local_35 = *(undefined4 *)(local_24 + 0xf);
      local_31 = *(undefined4 *)(local_24 + 0x13);
      cVar2 = CItem::is_stackable(local_20);
      local_2d = cVar2 != '\0';
      local_2c = (uint)(byte)local_24[0x17];
      uVar3 = CUser::GetServerGroup(param_1);
      this_01 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                          (GlobalData::s_guild_proxy_mgr,uVar3);
      CGuildServerProxy::SendTcpPacket(this_01,(char *)local_4b,(uint)local_49);
      cUserHistoryLog::GuildCargoPopItem
                ((cUserHistoryLog *)(param_1 + 0x79700),10,local_39,local_35,local_31,local_2d,
                 local_2c);
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## read

```asm
// === 081d1388 Dispatcher_GuildCargoPopItem::read  [0x081d1388-0x81d14a9] ===
 81d1388:	55                   	push   %ebp
 81d1389:	89 e5                	mov    %esp,%ebp
 81d138b:	83 ec 28             	sub    $0x28,%esp
 81d138e:	8b 45 10             	mov    0x10(%ebp),%eax
 81d1391:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d1394:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d1397:	83 c0 0d             	add    $0xd,%eax
 81d139a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d139e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d13a1:	89 04 24             	mov    %eax,(%esp)
 81d13a4:	e8 07 bd 3b 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81d13a9:	83 f0 01             	xor    $0x1,%eax
 81d13ac:	84 c0                	test   %al,%al
 81d13ae:	74 29                	je     81d13d9 <_ZN28Dispatcher_GuildCargoPopItem4readER9PacketBufR8MSG_BASE+0x51>
 81d13b0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d13b7:	00 
 81d13b8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d13bf:	00 
 81d13c0:	c7 44 24 04 40 3b bd 	movl   $0x8bd3b40,0x4(%esp)
 81d13c7:	08 
 81d13c8:	c7 04 24 3b 2d 00 00 	movl   $0x2d3b,(%esp)
 81d13cf:	e8 03 f5 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d13d4:	e9 ce 00 00 00       	jmp    81d14a7 <_ZN28Dispatcher_GuildCargoPopItem4readER9PacketBufR8MSG_BASE+0x11f>
 81d13d9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d13dc:	83 c0 0f             	add    $0xf,%eax
 81d13df:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d13e3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d13e6:	89 04 24             	mov    %eax,(%esp)
 81d13e9:	e8 02 bd 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81d13ee:	83 f0 01             	xor    $0x1,%eax
 81d13f1:	84 c0                	test   %al,%al
 81d13f3:	74 29                	je     81d141e <_ZN28Dispatcher_GuildCargoPopItem4readER9PacketBufR8MSG_BASE+0x96>
 81d13f5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d13fc:	00 
 81d13fd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d1404:	00 
 81d1405:	c7 44 24 04 40 3b bd 	movl   $0x8bd3b40,0x4(%esp)
 81d140c:	08 
 81d140d:	c7 04 24 3c 2d 00 00 	movl   $0x2d3c,(%esp)
 81d1414:	e8 be f4 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d1419:	e9 89 00 00 00       	jmp    81d14a7 <_ZN28Dispatcher_GuildCargoPopItem4readER9PacketBufR8MSG_BASE+0x11f>
 81d141e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d1421:	83 c0 13             	add    $0x13,%eax
 81d1424:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d1428:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d142b:	89 04 24             	mov    %eax,(%esp)
 81d142e:	e8 bd bc 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81d1433:	83 f0 01             	xor    $0x1,%eax
 81d1436:	84 c0                	test   %al,%al
 81d1438:	74 26                	je     81d1460 <_ZN28Dispatcher_GuildCargoPopItem4readER9PacketBufR8MSG_BASE+0xd8>
 81d143a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d1441:	00 
 81d1442:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d1449:	00 
 81d144a:	c7 44 24 04 40 3b bd 	movl   $0x8bd3b40,0x4(%esp)
 81d1451:	08 
 81d1452:	c7 04 24 3d 2d 00 00 	movl   $0x2d3d,(%esp)
 81d1459:	e8 79 f4 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d145e:	eb 47                	jmp    81d14a7 <_ZN28Dispatcher_GuildCargoPopItem4readER9PacketBufR8MSG_BASE+0x11f>
 81d1460:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d1463:	83 c0 17             	add    $0x17,%eax
 81d1466:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d146a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d146d:	89 04 24             	mov    %eax,(%esp)
 81d1470:	e8 fb ba 3b 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81d1475:	83 f0 01             	xor    $0x1,%eax
 81d1478:	84 c0                	test   %al,%al
 81d147a:	74 26                	je     81d14a2 <_ZN28Dispatcher_GuildCargoPopItem4readER9PacketBufR8MSG_BASE+0x11a>
 81d147c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d1483:	00 
 81d1484:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d148b:	00 
 81d148c:	c7 44 24 04 40 3b bd 	movl   $0x8bd3b40,0x4(%esp)
 81d1493:	08 
 81d1494:	c7 04 24 3e 2d 00 00 	movl   $0x2d3e,(%esp)
 81d149b:	e8 37 f4 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d14a0:	eb 05                	jmp    81d14a7 <_ZN28Dispatcher_GuildCargoPopItem4readER9PacketBufR8MSG_BASE+0x11f>
 81d14a2:	b8 00 00 00 00       	mov    $0x0,%eax
 81d14a7:	c9                   	leave
 81d14a8:	c3                   	ret
 81d14a9:	90                   	nop

```

```c
// Dispatcher_GuildCargoPopItem::read @ 0x81d1388

/* Dispatcher_GuildCargoPopItem::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_GuildCargoPopItem::read
          (Dispatcher_GuildCargoPopItem *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xf));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x13));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x17));
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = LineFunc(0x2d3e,
                           "virtual int Dispatcher_GuildCargoPopItem::read(PacketBuf&, MSG_BASE&)",0
                           ,0);
        }
      }
      else {
        uVar2 = LineFunc(0x2d3d,
                         "virtual int Dispatcher_GuildCargoPopItem::read(PacketBuf&, MSG_BASE&)",0,0
                        );
      }
    }
    else {
      uVar2 = LineFunc(0x2d3c,
                       "virtual int Dispatcher_GuildCargoPopItem::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x2d3b,"virtual int Dispatcher_GuildCargoPopItem::read(PacketBuf&, MSG_BASE&)",
                     0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081d1748 Dispatcher_GuildCargoPopItem::send  [0x081d1748-0x81d17b9] ===
 81d1748:	55                   	push   %ebp
 81d1749:	89 e5                	mov    %esp,%ebp
 81d174b:	83 ec 28             	sub    $0x28,%esp
 81d174e:	8b 45 10             	mov    0x10(%ebp),%eax
 81d1751:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d1754:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d1757:	8b 40 04             	mov    0x4(%eax),%eax
 81d175a:	85 c0                	test   %eax,%eax
 81d175c:	74 5a                	je     81d17b8 <_ZN28Dispatcher_GuildCargoPopItem4sendEP5CUserR9ParamBase+0x70>
 81d175e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d1761:	8b 40 04             	mov    0x4(%eax),%eax
 81d1764:	83 f8 64             	cmp    $0x64,%eax
 81d1767:	74 0d                	je     81d1776 <_ZN28Dispatcher_GuildCargoPopItem4sendEP5CUserR9ParamBase+0x2e>
 81d1769:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d176c:	8b 40 04             	mov    0x4(%eax),%eax
 81d176f:	3d b5 00 00 00       	cmp    $0xb5,%eax
 81d1774:	75 22                	jne    81d1798 <_ZN28Dispatcher_GuildCargoPopItem4sendEP5CUserR9ParamBase+0x50>
 81d1776:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d1779:	8b 40 04             	mov    0x4(%eax),%eax
 81d177c:	0f b6 c0             	movzbl %al,%eax
 81d177f:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d1783:	c7 44 24 04 09 01 00 	movl   $0x109,0x4(%esp)
 81d178a:	00 
 81d178b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d178e:	89 04 24             	mov    %eax,(%esp)
 81d1791:	e8 ac a7 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d1796:	eb 20                	jmp    81d17b8 <_ZN28Dispatcher_GuildCargoPopItem4sendEP5CUserR9ParamBase+0x70>
 81d1798:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d179b:	8b 40 04             	mov    0x4(%eax),%eax
 81d179e:	0f b6 c0             	movzbl %al,%eax
 81d17a1:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d17a5:	c7 44 24 04 fc 00 00 	movl   $0xfc,0x4(%esp)
 81d17ac:	00 
 81d17ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d17b0:	89 04 24             	mov    %eax,(%esp)
 81d17b3:	e8 8a a7 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d17b8:	c9                   	leave
 81d17b9:	c3                   	ret

```

```c
// Dispatcher_GuildCargoPopItem::send @ 0x81d1748

/* Dispatcher_GuildCargoPopItem::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_GuildCargoPopItem::send
          (Dispatcher_GuildCargoPopItem *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    if ((*(int *)(param_2 + 4) == 100) || (*(int *)(param_2 + 4) == 0xb5)) {
      CUser::SendCmdErrorPacket(param_1,0x109,*(uint *)(param_2 + 4) & 0xff);
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0xfc,*(uint *)(param_2 + 4) & 0xff);
    }
  }
  return;
}

```

