# Dispatcher_ObjectBringUp

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081e16ce Dispatcher_ObjectBringUp::check_error  [0x081e16ce-0x81e1703] ===
 81e16ce:	55                   	push   %ebp
 81e16cf:	89 e5                	mov    %esp,%ebp
 81e16d1:	83 ec 18             	sub    $0x18,%esp
 81e16d4:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81e16d8:	75 07                	jne    81e16e1 <_ZN24Dispatcher_ObjectBringUp11check_errorEP5CUserR8MSG_BASE+0x13>
 81e16da:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81e16df:	eb 21                	jmp    81e1702 <_ZN24Dispatcher_ObjectBringUp11check_errorEP5CUserR8MSG_BASE+0x34>
 81e16e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e16e4:	89 04 24             	mov    %eax,(%esp)
 81e16e7:	e8 a0 8c ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e16ec:	83 f8 02             	cmp    $0x2,%eax
 81e16ef:	0f 9e c0             	setle  %al
 81e16f2:	84 c0                	test   %al,%al
 81e16f4:	74 07                	je     81e16fd <_ZN24Dispatcher_ObjectBringUp11check_errorEP5CUserR8MSG_BASE+0x2f>
 81e16f6:	b8 fe ff ff ff       	mov    $0xfffffffe,%eax
 81e16fb:	eb 05                	jmp    81e1702 <_ZN24Dispatcher_ObjectBringUp11check_errorEP5CUserR8MSG_BASE+0x34>
 81e16fd:	b8 00 00 00 00       	mov    $0x0,%eax
 81e1702:	c9                   	leave
 81e1703:	c3                   	ret

```

```c
// Dispatcher_ObjectBringUp::check_error @ 0x81e16ce

/* Dispatcher_ObjectBringUp::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_ObjectBringUp::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 < 3) {
      uVar1 = 0xfffffffe;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

```

---

## process

```asm
// === 081e14d4 Dispatcher_ObjectBringUp::process  [0x081e14d4-0x81e16cd] ===
 81e14d4:	55                   	push   %ebp
 81e14d5:	89 e5                	mov    %esp,%ebp
 81e14d7:	53                   	push   %ebx
 81e14d8:	83 ec 74             	sub    $0x74,%esp
 81e14db:	8b 45 10             	mov    0x10(%ebp),%eax
 81e14de:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81e14e1:	8b 45 14             	mov    0x14(%ebp),%eax
 81e14e4:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81e14e7:	e8 af ac ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e14ec:	89 04 24             	mov    %eax,(%esp)
 81e14ef:	e8 6e f6 f2 ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 81e14f4:	c7 44 24 04 9b 01 00 	movl   $0x19b,0x4(%esp)
 81e14fb:	00 
 81e14fc:	89 04 24             	mov    %eax,(%esp)
 81e14ff:	e8 66 a4 f2 ff       	call   810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>
 81e1504:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e1507:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81e150b:	75 14                	jne    81e1521 <_ZN24Dispatcher_ObjectBringUp7processEP5CUserR8MSG_BASER9ParamBase+0x4d>
 81e150d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e1510:	c7 40 04 b2 00 00 00 	movl   $0xb2,0x4(%eax)
 81e1517:	b8 00 00 00 00       	mov    $0x0,%eax
 81e151c:	e9 a8 01 00 00       	jmp    81e16c9 <_ZN24Dispatcher_ObjectBringUp7processEP5CUserR8MSG_BASER9ParamBase+0x1f5>
 81e1521:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e1524:	8b 00                	mov    (%eax),%eax
 81e1526:	83 c0 08             	add    $0x8,%eax
 81e1529:	8b 10                	mov    (%eax),%edx
 81e152b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e152e:	89 04 24             	mov    %eax,(%esp)
 81e1531:	ff d2                	call   *%edx
 81e1533:	83 f0 01             	xor    $0x1,%eax
 81e1536:	84 c0                	test   %al,%al
 81e1538:	74 14                	je     81e154e <_ZN24Dispatcher_ObjectBringUp7processEP5CUserR8MSG_BASER9ParamBase+0x7a>
 81e153a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e153d:	c7 40 04 b2 00 00 00 	movl   $0xb2,0x4(%eax)
 81e1544:	b8 00 00 00 00       	mov    $0x0,%eax
 81e1549:	e9 7b 01 00 00       	jmp    81e16c9 <_ZN24Dispatcher_ObjectBringUp7processEP5CUserR8MSG_BASER9ParamBase+0x1f5>
 81e154e:	8b 45 10             	mov    0x10(%ebp),%eax
 81e1551:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e1555:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e1558:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e155c:	8b 45 08             	mov    0x8(%ebp),%eax
 81e155f:	89 04 24             	mov    %eax,(%esp)
 81e1562:	e8 67 01 00 00       	call   81e16ce <_ZN24Dispatcher_ObjectBringUp11check_errorEP5CUserR8MSG_BASE>
 81e1567:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81e156a:	89 42 04             	mov    %eax,0x4(%edx)
 81e156d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e1570:	8b 40 04             	mov    0x4(%eax),%eax
 81e1573:	85 c0                	test   %eax,%eax
 81e1575:	74 0a                	je     81e1581 <_ZN24Dispatcher_ObjectBringUp7processEP5CUserR8MSG_BASER9ParamBase+0xad>
 81e1577:	b8 00 00 00 00       	mov    $0x0,%eax
 81e157c:	e9 48 01 00 00       	jmp    81e16c9 <_ZN24Dispatcher_ObjectBringUp7processEP5CUserR8MSG_BASER9ParamBase+0x1f5>
 81e1581:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e1584:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81e1588:	0f b7 d8             	movzwl %ax,%ebx
 81e158b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e158e:	89 04 24             	mov    %eax,(%esp)
 81e1591:	e8 e8 8c ef ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81e1596:	8d 55 ab             	lea    -0x55(%ebp),%edx
 81e1599:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81e159d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81e15a4:	00 
 81e15a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e15a9:	89 14 24             	mov    %edx,(%esp)
 81e15ac:	e8 67 a3 31 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 81e15b1:	83 ec 04             	sub    $0x4,%esp
 81e15b4:	8b 45 ad             	mov    -0x53(%ebp),%eax
 81e15b7:	89 c3                	mov    %eax,%ebx
 81e15b9:	e8 dd ab ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e15be:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e15c2:	89 04 24             	mov    %eax,(%esp)
 81e15c5:	e8 68 e4 17 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81e15ca:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e15cd:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81e15d1:	75 14                	jne    81e15e7 <_ZN24Dispatcher_ObjectBringUp7processEP5CUserR8MSG_BASER9ParamBase+0x113>
 81e15d3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e15d6:	c7 40 04 11 00 00 00 	movl   $0x11,0x4(%eax)
 81e15dd:	b8 00 00 00 00       	mov    $0x0,%eax
 81e15e2:	e9 e2 00 00 00       	jmp    81e16c9 <_ZN24Dispatcher_ObjectBringUp7processEP5CUserR8MSG_BASER9ParamBase+0x1f5>
 81e15e7:	8b 45 ad             	mov    -0x53(%ebp),%eax
 81e15ea:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e15ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e15f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e15f5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e15f8:	89 04 24             	mov    %eax,(%esp)
 81e15fb:	e8 ea e6 f2 ff       	call   810fcea <_ZN13EventClassify14CObjectBringUp24verifyMaterialItemByRuleEP5CUserj>
 81e1600:	83 f0 01             	xor    $0x1,%eax
 81e1603:	84 c0                	test   %al,%al
 81e1605:	74 14                	je     81e161b <_ZN24Dispatcher_ObjectBringUp7processEP5CUserR8MSG_BASER9ParamBase+0x147>
 81e1607:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e160a:	c7 40 04 17 00 00 00 	movl   $0x17,0x4(%eax)
 81e1611:	b8 00 00 00 00       	mov    $0x0,%eax
 81e1616:	e9 ae 00 00 00       	jmp    81e16c9 <_ZN24Dispatcher_ObjectBringUp7processEP5CUserR8MSG_BASER9ParamBase+0x1f5>
 81e161b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e161e:	89 04 24             	mov    %eax,(%esp)
 81e1621:	e8 9e e4 04 00       	call   822fac4 <_ZN15CUserCharacInfo29incCurUseBringUpMaterialCountEv>
 81e1626:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e1629:	89 04 24             	mov    %eax,(%esp)
 81e162c:	e8 e1 f6 f2 ff       	call   8110d12 <_ZNK15CUserCharacInfo29getCurUseBringUpMaterialTotalEv>
 81e1631:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81e1634:	88 42 0a             	mov    %al,0xa(%edx)
 81e1637:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e163a:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81e163e:	0f b7 d8             	movzwl %ax,%ebx
 81e1641:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e1644:	89 04 24             	mov    %eax,(%esp)
 81e1647:	e8 42 8c ef ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81e164c:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81e1653:	00 
 81e1654:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 81e165b:	00 
 81e165c:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81e1663:	00 
 81e1664:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81e1668:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e166f:	00 
 81e1670:	89 04 24             	mov    %eax,(%esp)
 81e1673:	e8 94 29 32 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 81e1678:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e167b:	8d 50 0b             	lea    0xb(%eax),%edx
 81e167e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e1681:	83 c0 0c             	add    $0xc,%eax
 81e1684:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81e1688:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e168c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e168f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e1693:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e1696:	89 04 24             	mov    %eax,(%esp)
 81e1699:	e8 f2 e7 f2 ff       	call   810fe90 <_ZN13EventClassify14CObjectBringUp17sendBringUpRewardEP5CUserRSt6vectorIiSaIiEERh>
 81e169e:	83 f0 01             	xor    $0x1,%eax
 81e16a1:	84 c0                	test   %al,%al
 81e16a3:	74 11                	je     81e16b6 <_ZN24Dispatcher_ObjectBringUp7processEP5CUserR8MSG_BASER9ParamBase+0x1e2>
 81e16a5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e16a8:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
 81e16af:	b8 00 00 00 00       	mov    $0x0,%eax
 81e16b4:	eb 13                	jmp    81e16c9 <_ZN24Dispatcher_ObjectBringUp7processEP5CUserR8MSG_BASER9ParamBase+0x1f5>
 81e16b6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e16b9:	0f b7 50 0e          	movzwl 0xe(%eax),%edx
 81e16bd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e16c0:	66 89 50 08          	mov    %dx,0x8(%eax)
 81e16c4:	b8 00 00 00 00       	mov    $0x0,%eax
 81e16c9:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 81e16cc:	c9                   	leave
 81e16cd:	c3                   	ret

```

```c
// Dispatcher_ObjectBringUp::process @ 0x81e14d4

/* Dispatcher_ObjectBringUp::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_ObjectBringUp::process
          (Dispatcher_ObjectBringUp *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  char cVar3;
  ParamBase PVar4;
  CDataManager *pCVar5;
  int iVar6;
  CInventory *pCVar7;
  undefined4 uVar8;
  undefined1 local_59 [2];
  uint local_57;
  MSG_BASE *local_1c;
  ParamBase *local_18;
  CObjectBringUp *local_14;
  int local_10;
  
  local_1c = param_2;
  local_18 = param_3;
  pCVar5 = (CDataManager *)G_CDataManager();
  iVar6 = CDataManager::get_event_script_mng(pCVar5);
  uVar8 = 0x19b;
  local_14 = (CObjectBringUp *)EventClassify::CEventScriptMng::get_event_entity(iVar6);
  if (local_14 == (CObjectBringUp *)0x0) {
    *(undefined4 *)(local_18 + 4) = 0xb2;
  }
  else {
    cVar3 = (**(code **)(*(int *)local_14 + 8))(local_14,uVar8);
    if (cVar3 == '\x01') {
      uVar8 = check_error((CUser *)this,(MSG_BASE *)param_1);
      *(undefined4 *)(local_18 + 4) = uVar8;
      if (*(int *)(local_18 + 4) == 0) {
        iVar6 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_59,iVar6);
        uVar2 = local_57;
        pCVar5 = (CDataManager *)G_CDataManager();
        local_10 = CDataManager::find_item(pCVar5,uVar2);
        if (local_10 == 0) {
          *(undefined4 *)(local_18 + 4) = 0x11;
        }
        else {
          cVar3 = EventClassify::CObjectBringUp::verifyMaterialItemByRule(local_14,param_1,local_57)
          ;
          if (cVar3 == '\x01') {
            CUserCharacInfo::incCurUseBringUpMaterialCount((CUserCharacInfo *)param_1);
            PVar4 = (ParamBase)
                    CUserCharacInfo::getCurUseBringUpMaterialTotal((CUserCharacInfo *)param_1);
            local_18[10] = PVar4;
            uVar1 = *(undefined2 *)(local_1c + 0xe);
            pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            CInventory::delete_item(pCVar7,1,uVar1,1,3,1);
            cVar3 = EventClassify::CObjectBringUp::sendBringUpReward
                              (local_14,param_1,(vector *)(local_18 + 0xc),(uchar *)(local_18 + 0xb)
                              );
            if (cVar3 == '\x01') {
              *(undefined2 *)(local_18 + 8) = *(undefined2 *)(local_1c + 0xe);
            }
            else {
              *(undefined4 *)(local_18 + 4) = 1;
            }
          }
          else {
            *(undefined4 *)(local_18 + 4) = 0x17;
          }
        }
      }
    }
    else {
      *(undefined4 *)(local_18 + 4) = 0xb2;
    }
  }
  return 0;
}

```

---

## read

```asm
// === 081e147e Dispatcher_ObjectBringUp::read  [0x081e147e-0x81e14d3] ===
 81e147e:	55                   	push   %ebp
 81e147f:	89 e5                	mov    %esp,%ebp
 81e1481:	83 ec 28             	sub    $0x28,%esp
 81e1484:	8b 45 10             	mov    0x10(%ebp),%eax
 81e1487:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e148a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e148d:	83 c0 0e             	add    $0xe,%eax
 81e1490:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e1494:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e1497:	89 04 24             	mov    %eax,(%esp)
 81e149a:	e8 11 bc 3a 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81e149f:	83 f0 01             	xor    $0x1,%eax
 81e14a2:	84 c0                	test   %al,%al
 81e14a4:	74 26                	je     81e14cc <_ZN24Dispatcher_ObjectBringUp4readER9PacketBufR8MSG_BASE+0x4e>
 81e14a6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e14ad:	00 
 81e14ae:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e14b5:	00 
 81e14b6:	c7 44 24 04 40 18 bd 	movl   $0x8bd1840,0x4(%esp)
 81e14bd:	08 
 81e14be:	c7 04 24 aa 56 00 00 	movl   $0x56aa,(%esp)
 81e14c5:	e8 0d f4 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e14ca:	eb 05                	jmp    81e14d1 <_ZN24Dispatcher_ObjectBringUp4readER9PacketBufR8MSG_BASE+0x53>
 81e14cc:	b8 00 00 00 00       	mov    $0x0,%eax
 81e14d1:	c9                   	leave
 81e14d2:	c3                   	ret
 81e14d3:	90                   	nop

```

```c
// Dispatcher_ObjectBringUp::read @ 0x81e147e

/* Dispatcher_ObjectBringUp::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ObjectBringUp::read(Dispatcher_ObjectBringUp *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x56aa,"virtual int Dispatcher_ObjectBringUp::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}

```

---

## send

```asm
// === 081e1704 Dispatcher_ObjectBringUp::send  [0x081e1704-0x81e191f] ===
 81e1704:	55                   	push   %ebp
 81e1705:	89 e5                	mov    %esp,%ebp
 81e1707:	56                   	push   %esi
 81e1708:	53                   	push   %ebx
 81e1709:	83 ec 30             	sub    $0x30,%esp
 81e170c:	8b 45 10             	mov    0x10(%ebp),%eax
 81e170f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e1712:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e1715:	89 04 24             	mov    %eax,(%esp)
 81e1718:	e8 2f c6 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81e171d:	c7 44 24 08 d5 01 00 	movl   $0x1d5,0x8(%esp)
 81e1724:	00 
 81e1725:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e172c:	00 
 81e172d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e1730:	89 04 24             	mov    %eax,(%esp)
 81e1733:	e8 c4 a1 ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81e1738:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e173b:	8b 40 04             	mov    0x4(%eax),%eax
 81e173e:	85 c0                	test   %eax,%eax
 81e1740:	0f 85 5a 01 00 00    	jne    81e18a0 <_ZN24Dispatcher_ObjectBringUp4sendEP5CUserR9ParamBase+0x19c>
 81e1746:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e174d:	00 
 81e174e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e1751:	89 04 24             	mov    %eax,(%esp)
 81e1754:	e8 c7 a1 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e1759:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e175c:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 81e1760:	0f b7 c0             	movzwl %ax,%eax
 81e1763:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e1767:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e176a:	89 04 24             	mov    %eax,(%esp)
 81e176d:	e8 32 87 ef ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81e1772:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e1775:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 81e1779:	0f b6 c0             	movzbl %al,%eax
 81e177c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e1780:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e1783:	89 04 24             	mov    %eax,(%esp)
 81e1786:	e8 95 a1 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e178b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e178e:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 81e1792:	0f b6 c0             	movzbl %al,%eax
 81e1795:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e1799:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e179c:	89 04 24             	mov    %eax,(%esp)
 81e179f:	e8 7c a1 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e17a4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e17a7:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 81e17ab:	84 c0                	test   %al,%al
 81e17ad:	0f 84 15 01 00 00    	je     81e18c8 <_ZN24Dispatcher_ObjectBringUp4sendEP5CUserR9ParamBase+0x1c4>
 81e17b3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e17b6:	8d 50 0c             	lea    0xc(%eax),%edx
 81e17b9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e17bc:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e17c0:	89 04 24             	mov    %eax,(%esp)
 81e17c3:	e8 80 ca ea ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 81e17c8:	83 ec 04             	sub    $0x4,%esp
 81e17cb:	e9 9c 00 00 00       	jmp    81e186c <_ZN24Dispatcher_ObjectBringUp4sendEP5CUserR9ParamBase+0x168>
 81e17d0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e17d3:	89 04 24             	mov    %eax,(%esp)
 81e17d6:	e8 f1 cf ea ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 81e17db:	8b 00                	mov    (%eax),%eax
 81e17dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e17e1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e17e4:	89 04 24             	mov    %eax,(%esp)
 81e17e7:	e8 b8 86 ef ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81e17ec:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e17ef:	89 04 24             	mov    %eax,(%esp)
 81e17f2:	e8 95 91 f0 ff       	call   80ea98c <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv>
 81e17f7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e17fa:	89 04 24             	mov    %eax,(%esp)
 81e17fd:	e8 ca cf ea ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 81e1802:	8b 00                	mov    (%eax),%eax
 81e1804:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e1808:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e180b:	89 04 24             	mov    %eax,(%esp)
 81e180e:	e8 29 a1 ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81e1813:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e1816:	89 04 24             	mov    %eax,(%esp)
 81e1819:	e8 6e 91 f0 ff       	call   80ea98c <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv>
 81e181e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e1821:	89 04 24             	mov    %eax,(%esp)
 81e1824:	e8 a3 cf ea ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 81e1829:	8b 00                	mov    (%eax),%eax
 81e182b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e182f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e1832:	89 04 24             	mov    %eax,(%esp)
 81e1835:	e8 02 a1 ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81e183a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e183d:	89 04 24             	mov    %eax,(%esp)
 81e1840:	e8 47 91 f0 ff       	call   80ea98c <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv>
 81e1845:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e1848:	89 04 24             	mov    %eax,(%esp)
 81e184b:	e8 7c cf ea ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 81e1850:	8b 00                	mov    (%eax),%eax
 81e1852:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e1856:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e1859:	89 04 24             	mov    %eax,(%esp)
 81e185c:	e8 43 86 ef ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81e1861:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e1864:	89 04 24             	mov    %eax,(%esp)
 81e1867:	e8 20 91 f0 ff       	call   80ea98c <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv>
 81e186c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e186f:	8d 50 0c             	lea    0xc(%eax),%edx
 81e1872:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81e1875:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e1879:	89 04 24             	mov    %eax,(%esp)
 81e187c:	e8 eb c9 ea ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 81e1881:	83 ec 04             	sub    $0x4,%esp
 81e1884:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81e1887:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e188b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e188e:	89 04 24             	mov    %eax,(%esp)
 81e1891:	e8 cc 8b f0 ff       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 81e1896:	84 c0                	test   %al,%al
 81e1898:	0f 85 32 ff ff ff    	jne    81e17d0 <_ZN24Dispatcher_ObjectBringUp4sendEP5CUserR9ParamBase+0xcc>
 81e189e:	eb 28                	jmp    81e18c8 <_ZN24Dispatcher_ObjectBringUp4sendEP5CUserR9ParamBase+0x1c4>
 81e18a0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e18a7:	00 
 81e18a8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e18ab:	89 04 24             	mov    %eax,(%esp)
 81e18ae:	e8 6d a0 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e18b3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e18b6:	8b 40 04             	mov    0x4(%eax),%eax
 81e18b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e18bd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e18c0:	89 04 24             	mov    %eax,(%esp)
 81e18c3:	e8 58 a0 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e18c8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e18cf:	00 
 81e18d0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e18d3:	89 04 24             	mov    %eax,(%esp)
 81e18d6:	e8 7d a0 ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81e18db:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e18de:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e18e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e18e5:	89 04 24             	mov    %eax,(%esp)
 81e18e8:	e8 cd 6c 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81e18ed:	eb 1b                	jmp    81e190a <_ZN24Dispatcher_ObjectBringUp4sendEP5CUserR9ParamBase+0x206>
 81e18ef:	89 d3                	mov    %edx,%ebx
 81e18f1:	89 c6                	mov    %eax,%esi
 81e18f3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e18f6:	89 04 24             	mov    %eax,(%esp)
 81e18f9:	e8 82 c5 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e18fe:	89 f0                	mov    %esi,%eax
 81e1900:	89 da                	mov    %ebx,%edx
 81e1902:	89 04 24             	mov    %eax,(%esp)
 81e1905:	e8 46 1e 90 00       	call   8ae3750 <_Unwind_Resume>
 81e190a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e190d:	89 04 24             	mov    %eax,(%esp)
 81e1910:	e8 6b c5 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e1915:	8d 65 f8             	lea    -0x8(%ebp),%esp
 81e1918:	83 c4 00             	add    $0x0,%esp
 81e191b:	5b                   	pop    %ebx
 81e191c:	5e                   	pop    %esi
 81e191d:	5d                   	pop    %ebp
 81e191e:	c3                   	ret
 81e191f:	90                   	nop

```

```c
// Dispatcher_ObjectBringUp::send @ 0x81e1704

/* Dispatcher_ObjectBringUp::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_ObjectBringUp::send(Dispatcher_ObjectBringUp *this,CUser *param_1,ParamBase *param_2)

{
  bool bVar1;
  int *piVar2;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_24 [4];
  PacketGuard local_20 [12];
  __normal_iterator local_14 [4];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 081e1733 to 081e18ec has its CatchHandler @ 081e18ef */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x1d5);
  if (*(int *)(local_10 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,(uint)*(ushort *)(local_10 + 8));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)(byte)local_10[10]);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)(byte)local_10[0xb]);
    if (local_10[0xb] != (ParamBase)0x0) {
      std::vector<int,std::allocator<int>>::begin();
      while( true ) {
        std::vector<int,std::allocator<int>>::end();
        bVar1 = __gnu_cxx::operator!=(local_24,local_14);
        if (!bVar1) break;
        piVar2 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_24);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,*piVar2);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_24);
        piVar2 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_24);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*piVar2);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_24);
        piVar2 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_24);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*piVar2);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_24);
        piVar2 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_24);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,*piVar2);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_24);
      }
    }
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,*(int *)(local_10 + 4));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  CUser::Send(param_1,local_20);
  PacketGuard::~PacketGuard(local_20);
  return;
}

```

