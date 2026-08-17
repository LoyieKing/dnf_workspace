# Inter_MonitorAddBuddy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d14b0 Inter_MonitorAddBuddy::dispatch_sig  [0x084d14b0-0x84d16f5] ===
 84d14b0:	55                   	push   %ebp
 84d14b1:	89 e5                	mov    %esp,%ebp
 84d14b3:	56                   	push   %esi
 84d14b4:	53                   	push   %ebx
 84d14b5:	83 ec 30             	sub    $0x30,%esp
 84d14b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d14bb:	89 04 24             	mov    %eax,(%esp)
 84d14be:	e8 c9 8e c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84d14c3:	85 c0                	test   %eax,%eax
 84d14c5:	0f 94 c0             	sete   %al
 84d14c8:	84 c0                	test   %al,%al
 84d14ca:	74 0a                	je     84d14d6 <_ZN21Inter_MonitorAddBuddy12dispatch_sigEP5CUserPci+0x26>
 84d14cc:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d14d1:	e9 17 02 00 00       	jmp    84d16ed <_ZN21Inter_MonitorAddBuddy12dispatch_sigEP5CUserPci+0x23d>
 84d14d6:	8b 45 10             	mov    0x10(%ebp),%eax
 84d14d9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d14dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d14df:	89 04 24             	mov    %eax,(%esp)
 84d14e2:	e8 67 a7 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d14e7:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84d14ea:	8b 52 0a             	mov    0xa(%edx),%edx
 84d14ed:	39 d0                	cmp    %edx,%eax
 84d14ef:	0f 95 c0             	setne  %al
 84d14f2:	84 c0                	test   %al,%al
 84d14f4:	74 0a                	je     84d1500 <_ZN21Inter_MonitorAddBuddy12dispatch_sigEP5CUserPci+0x50>
 84d14f6:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d14fb:	e9 ed 01 00 00       	jmp    84d16ed <_ZN21Inter_MonitorAddBuddy12dispatch_sigEP5CUserPci+0x23d>
 84d1500:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d1503:	89 04 24             	mov    %eax,(%esp)
 84d1506:	e8 41 c8 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d150b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d150e:	0f b6 40 3a          	movzbl 0x3a(%eax),%eax
 84d1512:	84 c0                	test   %al,%al
 84d1514:	0f 85 2f 01 00 00    	jne    84d1649 <_ZN21Inter_MonitorAddBuddy12dispatch_sigEP5CUserPci+0x199>
 84d151a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d151d:	89 04 24             	mov    %eax,(%esp)
 84d1520:	e8 c1 a3 bf ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84d1525:	c7 44 24 08 3f 00 00 	movl   $0x3f,0x8(%esp)
 84d152c:	00 
 84d152d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d1534:	00 
 84d1535:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d1538:	89 04 24             	mov    %eax,(%esp)
 84d153b:	e8 bc a3 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d1540:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d1547:	00 
 84d1548:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d154b:	89 04 24             	mov    %eax,(%esp)
 84d154e:	e8 cd a3 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d1553:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d1556:	83 c0 12             	add    $0x12,%eax
 84d1559:	89 04 24             	mov    %eax,(%esp)
 84d155c:	e8 4f ce ba ff       	call   807e3b0 <strlen@plt>
 84d1561:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d1564:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d1567:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d156b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d156e:	89 04 24             	mov    %eax,(%esp)
 84d1571:	e8 c6 a3 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d1576:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d1579:	8d 50 12             	lea    0x12(%eax),%edx
 84d157c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d157f:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d1583:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d1587:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d158a:	89 04 24             	mov    %eax,(%esp)
 84d158d:	e8 52 5e ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84d1592:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d1595:	0f b7 40 30          	movzwl 0x30(%eax),%eax
 84d1599:	98                   	cwtl
 84d159a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d159e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d15a1:	89 04 24             	mov    %eax,(%esp)
 84d15a4:	e8 77 a3 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d15a9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d15ac:	0f b6 40 32          	movzbl 0x32(%eax),%eax
 84d15b0:	0f be c0             	movsbl %al,%eax
 84d15b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d15b7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d15ba:	89 04 24             	mov    %eax,(%esp)
 84d15bd:	e8 5e a3 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d15c2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d15c5:	0f b6 40 33          	movzbl 0x33(%eax),%eax
 84d15c9:	0f be c0             	movsbl %al,%eax
 84d15cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d15d0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d15d3:	89 04 24             	mov    %eax,(%esp)
 84d15d6:	e8 45 a3 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d15db:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d15de:	8b 40 34             	mov    0x34(%eax),%eax
 84d15e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d15e5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d15e8:	89 04 24             	mov    %eax,(%esp)
 84d15eb:	e8 4c a3 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d15f0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d15f3:	0f b6 40 38          	movzbl 0x38(%eax),%eax
 84d15f7:	0f be c0             	movsbl %al,%eax
 84d15fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d15fe:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d1601:	89 04 24             	mov    %eax,(%esp)
 84d1604:	e8 17 a3 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d1609:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d160c:	0f b6 40 39          	movzbl 0x39(%eax),%eax
 84d1610:	0f b6 c0             	movzbl %al,%eax
 84d1613:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d1617:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d161a:	89 04 24             	mov    %eax,(%esp)
 84d161d:	e8 fe a2 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d1622:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d1629:	00 
 84d162a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d162d:	89 04 24             	mov    %eax,(%esp)
 84d1630:	e8 23 a3 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d1635:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d1638:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d163c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d163f:	89 04 24             	mov    %eax,(%esp)
 84d1642:	e8 73 6f 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d1647:	eb 77                	jmp    84d16c0 <_ZN21Inter_MonitorAddBuddy12dispatch_sigEP5CUserPci+0x210>
 84d1649:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d164c:	89 04 24             	mov    %eax,(%esp)
 84d164f:	e8 92 a2 bf ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84d1654:	c7 44 24 08 3f 00 00 	movl   $0x3f,0x8(%esp)
 84d165b:	00 
 84d165c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d1663:	00 
 84d1664:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d1667:	89 04 24             	mov    %eax,(%esp)
 84d166a:	e8 8d a2 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d166f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d1676:	00 
 84d1677:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d167a:	89 04 24             	mov    %eax,(%esp)
 84d167d:	e8 9e a2 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d1682:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d1685:	0f b6 40 3a          	movzbl 0x3a(%eax),%eax
 84d1689:	0f be c0             	movsbl %al,%eax
 84d168c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d1690:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d1693:	89 04 24             	mov    %eax,(%esp)
 84d1696:	e8 85 a2 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d169b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d16a2:	00 
 84d16a3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d16a6:	89 04 24             	mov    %eax,(%esp)
 84d16a9:	e8 aa a2 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d16ae:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d16b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d16b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d16b8:	89 04 24             	mov    %eax,(%esp)
 84d16bb:	e8 fa 6e 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d16c0:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d16c5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d16c8:	89 04 24             	mov    %eax,(%esp)
 84d16cb:	e8 b0 c7 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d16d0:	eb 1b                	jmp    84d16ed <_ZN21Inter_MonitorAddBuddy12dispatch_sigEP5CUserPci+0x23d>
 84d16d2:	89 d3                	mov    %edx,%ebx
 84d16d4:	89 c6                	mov    %eax,%esi
 84d16d6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d16d9:	89 04 24             	mov    %eax,(%esp)
 84d16dc:	e8 9f c7 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d16e1:	89 f0                	mov    %esi,%eax
 84d16e3:	89 da                	mov    %ebx,%edx
 84d16e5:	89 04 24             	mov    %eax,(%esp)
 84d16e8:	e8 63 20 61 00       	call   8ae3750 <_Unwind_Resume>
 84d16ed:	89 d8                	mov    %ebx,%eax
 84d16ef:	83 c4 30             	add    $0x30,%esp
 84d16f2:	5b                   	pop    %ebx
 84d16f3:	5e                   	pop    %esi
 84d16f4:	5d                   	pop    %ebp
 84d16f5:	c3                   	ret

```

```c
// Inter_MonitorAddBuddy::dispatch_sig @ 0x84d14b0

/* Inter_MonitorAddBuddy::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorAddBuddy::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 != 0) {
    local_14 = param_3;
    iVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    if (iVar1 == *(int *)(local_14 + 10)) {
      PacketGuard::PacketGuard(local_20);
      if (*(char *)(local_14 + 0x3a) == '\0') {
                    /* try { // try from 084d1520 to 084d16bf has its CatchHandler @ 084d16d2 */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x3f);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
        local_10 = strlen((char *)(local_14 + 0x12));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x12),local_10);
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_20,(int)*(short *)(local_14 + 0x30));
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(local_14 + 0x32))
        ;
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(local_14 + 0x33))
        ;
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x34));
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(local_14 + 0x38))
        ;
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0x39));
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        CUser::Send((CUser *)param_2,local_20);
      }
      else {
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x3f);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(local_14 + 0x3a))
        ;
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        CUser::Send((CUser *)param_2,local_20);
      }
      PacketGuard::~PacketGuard(local_20);
    }
  }
  return 0;
}

```

