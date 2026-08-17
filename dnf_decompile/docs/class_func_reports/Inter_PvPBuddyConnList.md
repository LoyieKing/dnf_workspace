# Inter_PvPBuddyConnList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e16fe Inter_PvPBuddyConnList::dispatch_sig  [0x084e16fe-0x84e1831] ===
 84e16fe:	55                   	push   %ebp
 84e16ff:	89 e5                	mov    %esp,%ebp
 84e1701:	56                   	push   %esi
 84e1702:	53                   	push   %ebx
 84e1703:	83 ec 30             	sub    $0x30,%esp
 84e1706:	8b 45 10             	mov    0x10(%ebp),%eax
 84e1709:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e170c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e170f:	89 04 24             	mov    %eax,(%esp)
 84e1712:	e8 75 8c bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e1717:	83 f8 02             	cmp    $0x2,%eax
 84e171a:	0f 9e c0             	setle  %al
 84e171d:	84 c0                	test   %al,%al
 84e171f:	74 0a                	je     84e172b <_ZN22Inter_PvPBuddyConnList12dispatch_sigEP5CUserPci+0x2d>
 84e1721:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e1726:	e9 fd 00 00 00       	jmp    84e1828 <_ZN22Inter_PvPBuddyConnList12dispatch_sigEP5CUserPci+0x12a>
 84e172b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e172e:	8b 58 0a             	mov    0xa(%eax),%ebx
 84e1731:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e1734:	89 04 24             	mov    %eax,(%esp)
 84e1737:	e8 12 a5 be ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84e173c:	39 c3                	cmp    %eax,%ebx
 84e173e:	0f 95 c0             	setne  %al
 84e1741:	84 c0                	test   %al,%al
 84e1743:	74 0a                	je     84e174f <_ZN22Inter_PvPBuddyConnList12dispatch_sigEP5CUserPci+0x51>
 84e1745:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e174a:	e9 d9 00 00 00       	jmp    84e1828 <_ZN22Inter_PvPBuddyConnList12dispatch_sigEP5CUserPci+0x12a>
 84e174f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e1752:	89 04 24             	mov    %eax,(%esp)
 84e1755:	e8 f2 c5 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e175a:	c7 44 24 08 0f 01 00 	movl   $0x10f,0x8(%esp)
 84e1761:	00 
 84e1762:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e1769:	00 
 84e176a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e176d:	89 04 24             	mov    %eax,(%esp)
 84e1770:	e8 87 a1 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e1775:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e1778:	8b 40 12             	mov    0x12(%eax),%eax
 84e177b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e177f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e1782:	89 04 24             	mov    %eax,(%esp)
 84e1785:	e8 b2 a1 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e178a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84e1791:	eb 33                	jmp    84e17c6 <_ZN22Inter_PvPBuddyConnList12dispatch_sigEP5CUserPci+0xc8>
 84e1793:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84e1796:	89 d0                	mov    %edx,%eax
 84e1798:	c1 e0 02             	shl    $0x2,%eax
 84e179b:	01 d0                	add    %edx,%eax
 84e179d:	c1 e0 03             	shl    $0x3,%eax
 84e17a0:	01 d0                	add    %edx,%eax
 84e17a2:	83 c0 10             	add    $0x10,%eax
 84e17a5:	03 45 f0             	add    -0x10(%ebp),%eax
 84e17a8:	83 c0 06             	add    $0x6,%eax
 84e17ab:	c7 44 24 08 29 00 00 	movl   $0x29,0x8(%esp)
 84e17b2:	00 
 84e17b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e17b7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e17ba:	89 04 24             	mov    %eax,(%esp)
 84e17bd:	e8 46 c7 c3 ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 84e17c2:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84e17c6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e17c9:	8b 40 12             	mov    0x12(%eax),%eax
 84e17cc:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84e17cf:	0f 9f c0             	setg   %al
 84e17d2:	84 c0                	test   %al,%al
 84e17d4:	75 bd                	jne    84e1793 <_ZN22Inter_PvPBuddyConnList12dispatch_sigEP5CUserPci+0x95>
 84e17d6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e17dd:	00 
 84e17de:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e17e1:	89 04 24             	mov    %eax,(%esp)
 84e17e4:	e8 6f a1 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e17e9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e17ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e17f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e17f3:	89 04 24             	mov    %eax,(%esp)
 84e17f6:	e8 bf 6d 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e17fb:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e1800:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e1803:	89 04 24             	mov    %eax,(%esp)
 84e1806:	e8 75 c6 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e180b:	eb 1b                	jmp    84e1828 <_ZN22Inter_PvPBuddyConnList12dispatch_sigEP5CUserPci+0x12a>
 84e180d:	89 d3                	mov    %edx,%ebx
 84e180f:	89 c6                	mov    %eax,%esi
 84e1811:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e1814:	89 04 24             	mov    %eax,(%esp)
 84e1817:	e8 64 c6 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e181c:	89 f0                	mov    %esi,%eax
 84e181e:	89 da                	mov    %ebx,%edx
 84e1820:	89 04 24             	mov    %eax,(%esp)
 84e1823:	e8 28 1f 60 00       	call   8ae3750 <_Unwind_Resume>
 84e1828:	89 d8                	mov    %ebx,%eax
 84e182a:	83 c4 30             	add    $0x30,%esp
 84e182d:	5b                   	pop    %ebx
 84e182e:	5e                   	pop    %esi
 84e182f:	5d                   	pop    %ebp
 84e1830:	c3                   	ret
 84e1831:	90                   	nop

```

```c
// Inter_PvPBuddyConnList::dispatch_sig @ 0x84e16fe

/* Inter_PvPBuddyConnList::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_PvPBuddyConnList::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  PacketGuard local_20 [12];
  int local_14;
  int local_10;
  
  local_14 = param_3;
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar1) &&
     (iVar1 = *(int *)(local_14 + 10),
     iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2), iVar1 == iVar2)) {
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084e1770 to 084e17fa has its CatchHandler @ 084e180d */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x10f);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x12));
    for (local_10 = 0; local_10 < *(int *)(local_14 + 0x12); local_10 = local_10 + 1) {
      InterfacePacketBuf::put_binary
                ((InterfacePacketBuf *)local_20,(char *)(local_10 * 0x29 + local_14 + 0x16),0x29);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send((CUser *)param_2,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return 0;
}

```

