# Inter_MonitorDelBuddy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d16f6 Inter_MonitorDelBuddy::dispatch_sig  [0x084d16f6-0x84d18ab] ===
 84d16f6:	55                   	push   %ebp
 84d16f7:	89 e5                	mov    %esp,%ebp
 84d16f9:	56                   	push   %esi
 84d16fa:	53                   	push   %ebx
 84d16fb:	83 ec 30             	sub    $0x30,%esp
 84d16fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d1701:	89 04 24             	mov    %eax,(%esp)
 84d1704:	e8 83 8c c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84d1709:	85 c0                	test   %eax,%eax
 84d170b:	0f 94 c0             	sete   %al
 84d170e:	84 c0                	test   %al,%al
 84d1710:	74 0a                	je     84d171c <_ZN21Inter_MonitorDelBuddy12dispatch_sigEP5CUserPci+0x26>
 84d1712:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d1717:	e9 87 01 00 00       	jmp    84d18a3 <_ZN21Inter_MonitorDelBuddy12dispatch_sigEP5CUserPci+0x1ad>
 84d171c:	8b 45 10             	mov    0x10(%ebp),%eax
 84d171f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d1722:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d1725:	89 04 24             	mov    %eax,(%esp)
 84d1728:	e8 21 a5 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d172d:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84d1730:	8b 52 0a             	mov    0xa(%edx),%edx
 84d1733:	39 d0                	cmp    %edx,%eax
 84d1735:	0f 95 c0             	setne  %al
 84d1738:	84 c0                	test   %al,%al
 84d173a:	74 0a                	je     84d1746 <_ZN21Inter_MonitorDelBuddy12dispatch_sigEP5CUserPci+0x50>
 84d173c:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d1741:	e9 5d 01 00 00       	jmp    84d18a3 <_ZN21Inter_MonitorDelBuddy12dispatch_sigEP5CUserPci+0x1ad>
 84d1746:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d1749:	89 04 24             	mov    %eax,(%esp)
 84d174c:	e8 fb c5 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d1751:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d1754:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 84d1758:	84 c0                	test   %al,%al
 84d175a:	0f 85 9f 00 00 00    	jne    84d17ff <_ZN21Inter_MonitorDelBuddy12dispatch_sigEP5CUserPci+0x109>
 84d1760:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d1763:	89 04 24             	mov    %eax,(%esp)
 84d1766:	e8 7b a1 bf ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84d176b:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 84d1772:	00 
 84d1773:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d177a:	00 
 84d177b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d177e:	89 04 24             	mov    %eax,(%esp)
 84d1781:	e8 76 a1 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d1786:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d178d:	00 
 84d178e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d1791:	89 04 24             	mov    %eax,(%esp)
 84d1794:	e8 87 a1 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d1799:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d179c:	83 c0 12             	add    $0x12,%eax
 84d179f:	89 04 24             	mov    %eax,(%esp)
 84d17a2:	e8 09 cc ba ff       	call   807e3b0 <strlen@plt>
 84d17a7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d17aa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d17ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d17b1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d17b4:	89 04 24             	mov    %eax,(%esp)
 84d17b7:	e8 80 a1 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d17bc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d17bf:	8d 50 12             	lea    0x12(%eax),%edx
 84d17c2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d17c5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d17c9:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d17cd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d17d0:	89 04 24             	mov    %eax,(%esp)
 84d17d3:	e8 0c 5c ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84d17d8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d17df:	00 
 84d17e0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d17e3:	89 04 24             	mov    %eax,(%esp)
 84d17e6:	e8 6d a1 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d17eb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d17ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d17f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d17f5:	89 04 24             	mov    %eax,(%esp)
 84d17f8:	e8 bd 6d 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d17fd:	eb 77                	jmp    84d1876 <_ZN21Inter_MonitorDelBuddy12dispatch_sigEP5CUserPci+0x180>
 84d17ff:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d1802:	89 04 24             	mov    %eax,(%esp)
 84d1805:	e8 dc a0 bf ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84d180a:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 84d1811:	00 
 84d1812:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d1819:	00 
 84d181a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d181d:	89 04 24             	mov    %eax,(%esp)
 84d1820:	e8 d7 a0 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d1825:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d182c:	00 
 84d182d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d1830:	89 04 24             	mov    %eax,(%esp)
 84d1833:	e8 e8 a0 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d1838:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d183b:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 84d183f:	0f be c0             	movsbl %al,%eax
 84d1842:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d1846:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d1849:	89 04 24             	mov    %eax,(%esp)
 84d184c:	e8 cf a0 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d1851:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d1858:	00 
 84d1859:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d185c:	89 04 24             	mov    %eax,(%esp)
 84d185f:	e8 f4 a0 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d1864:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d1867:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d186b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d186e:	89 04 24             	mov    %eax,(%esp)
 84d1871:	e8 44 6d 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d1876:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d187b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d187e:	89 04 24             	mov    %eax,(%esp)
 84d1881:	e8 fa c5 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d1886:	eb 1b                	jmp    84d18a3 <_ZN21Inter_MonitorDelBuddy12dispatch_sigEP5CUserPci+0x1ad>
 84d1888:	89 d3                	mov    %edx,%ebx
 84d188a:	89 c6                	mov    %eax,%esi
 84d188c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d188f:	89 04 24             	mov    %eax,(%esp)
 84d1892:	e8 e9 c5 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d1897:	89 f0                	mov    %esi,%eax
 84d1899:	89 da                	mov    %ebx,%edx
 84d189b:	89 04 24             	mov    %eax,(%esp)
 84d189e:	e8 ad 1e 61 00       	call   8ae3750 <_Unwind_Resume>
 84d18a3:	89 d8                	mov    %ebx,%eax
 84d18a5:	83 c4 30             	add    $0x30,%esp
 84d18a8:	5b                   	pop    %ebx
 84d18a9:	5e                   	pop    %esi
 84d18aa:	5d                   	pop    %ebp
 84d18ab:	c3                   	ret

```

```c
// Inter_MonitorDelBuddy::dispatch_sig @ 0x84d16f6

/* Inter_MonitorDelBuddy::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorDelBuddy::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
      if (*(char *)(local_14 + 0x30) == '\0') {
                    /* try { // try from 084d1766 to 084d1875 has its CatchHandler @ 084d1888 */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x40);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
        local_10 = strlen((char *)(local_14 + 0x12));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x12),local_10);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        CUser::Send((CUser *)param_2,local_20);
      }
      else {
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x40);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(local_14 + 0x30))
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

