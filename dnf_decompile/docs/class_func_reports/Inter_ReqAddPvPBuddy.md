# Inter_ReqAddPvPBuddy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e1832 Inter_ReqAddPvPBuddy::dispatch_sig  [0x084e1832-0x84e1977] ===
 84e1832:	55                   	push   %ebp
 84e1833:	89 e5                	mov    %esp,%ebp
 84e1835:	56                   	push   %esi
 84e1836:	53                   	push   %ebx
 84e1837:	83 ec 30             	sub    $0x30,%esp
 84e183a:	8b 45 10             	mov    0x10(%ebp),%eax
 84e183d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e1840:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e1843:	89 04 24             	mov    %eax,(%esp)
 84e1846:	e8 41 8b bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e184b:	83 f8 02             	cmp    $0x2,%eax
 84e184e:	7e 10                	jle    84e1860 <_ZN20Inter_ReqAddPvPBuddy12dispatch_sigEP5CUserPci+0x2e>
 84e1850:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e1853:	89 04 24             	mov    %eax,(%esp)
 84e1856:	e8 31 8b bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e185b:	83 f8 07             	cmp    $0x7,%eax
 84e185e:	75 07                	jne    84e1867 <_ZN20Inter_ReqAddPvPBuddy12dispatch_sigEP5CUserPci+0x35>
 84e1860:	b8 01 00 00 00       	mov    $0x1,%eax
 84e1865:	eb 05                	jmp    84e186c <_ZN20Inter_ReqAddPvPBuddy12dispatch_sigEP5CUserPci+0x3a>
 84e1867:	b8 00 00 00 00       	mov    $0x0,%eax
 84e186c:	84 c0                	test   %al,%al
 84e186e:	74 0a                	je     84e187a <_ZN20Inter_ReqAddPvPBuddy12dispatch_sigEP5CUserPci+0x48>
 84e1870:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e1875:	e9 f4 00 00 00       	jmp    84e196e <_ZN20Inter_ReqAddPvPBuddy12dispatch_sigEP5CUserPci+0x13c>
 84e187a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e187d:	8b 58 0a             	mov    0xa(%eax),%ebx
 84e1880:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e1883:	89 04 24             	mov    %eax,(%esp)
 84e1886:	e8 c3 a3 be ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84e188b:	39 c3                	cmp    %eax,%ebx
 84e188d:	0f 95 c0             	setne  %al
 84e1890:	84 c0                	test   %al,%al
 84e1892:	74 0a                	je     84e189e <_ZN20Inter_ReqAddPvPBuddy12dispatch_sigEP5CUserPci+0x6c>
 84e1894:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e1899:	e9 d0 00 00 00       	jmp    84e196e <_ZN20Inter_ReqAddPvPBuddy12dispatch_sigEP5CUserPci+0x13c>
 84e189e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e18a1:	89 04 24             	mov    %eax,(%esp)
 84e18a4:	e8 a3 c4 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e18a9:	c7 44 24 08 0c 01 00 	movl   $0x10c,0x8(%esp)
 84e18b0:	00 
 84e18b1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e18b8:	00 
 84e18b9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e18bc:	89 04 24             	mov    %eax,(%esp)
 84e18bf:	e8 38 a0 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e18c4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e18c7:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84e18cb:	0f be c0             	movsbl %al,%eax
 84e18ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e18d2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e18d5:	89 04 24             	mov    %eax,(%esp)
 84e18d8:	e8 43 a0 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e18dd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e18e0:	83 c0 13             	add    $0x13,%eax
 84e18e3:	89 04 24             	mov    %eax,(%esp)
 84e18e6:	e8 c5 ca b9 ff       	call   807e3b0 <strlen@plt>
 84e18eb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e18ee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e18f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e18f5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e18f8:	89 04 24             	mov    %eax,(%esp)
 84e18fb:	e8 3c a0 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e1900:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e1903:	8d 50 13             	lea    0x13(%eax),%edx
 84e1906:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e1909:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e190d:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e1911:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e1914:	89 04 24             	mov    %eax,(%esp)
 84e1917:	e8 c8 5a cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e191c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e1923:	00 
 84e1924:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e1927:	89 04 24             	mov    %eax,(%esp)
 84e192a:	e8 29 a0 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e192f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e1932:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e1936:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e1939:	89 04 24             	mov    %eax,(%esp)
 84e193c:	e8 79 6c 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e1941:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e1946:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e1949:	89 04 24             	mov    %eax,(%esp)
 84e194c:	e8 2f c5 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e1951:	eb 1b                	jmp    84e196e <_ZN20Inter_ReqAddPvPBuddy12dispatch_sigEP5CUserPci+0x13c>
 84e1953:	89 d3                	mov    %edx,%ebx
 84e1955:	89 c6                	mov    %eax,%esi
 84e1957:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e195a:	89 04 24             	mov    %eax,(%esp)
 84e195d:	e8 1e c5 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e1962:	89 f0                	mov    %esi,%eax
 84e1964:	89 da                	mov    %ebx,%edx
 84e1966:	89 04 24             	mov    %eax,(%esp)
 84e1969:	e8 e2 1d 60 00       	call   8ae3750 <_Unwind_Resume>
 84e196e:	89 d8                	mov    %ebx,%eax
 84e1970:	83 c4 30             	add    $0x30,%esp
 84e1973:	5b                   	pop    %ebx
 84e1974:	5e                   	pop    %esi
 84e1975:	5d                   	pop    %ebp
 84e1976:	c3                   	ret
 84e1977:	90                   	nop

```

```c
// Inter_ReqAddPvPBuddy::dispatch_sig @ 0x84e1832

/* Inter_ReqAddPvPBuddy::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReqAddPvPBuddy::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  local_14 = param_3;
  iVar2 = CUser::get_state((CUser *)param_2);
  if ((iVar2 < 3) || (iVar2 = CUser::get_state((CUser *)param_2), iVar2 == 7)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((!bVar1) &&
     (iVar2 = *(int *)(local_14 + 10),
     iVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2), iVar2 == iVar3)) {
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084e18bf to 084e1940 has its CatchHandler @ 084e1953 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x10c);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(local_14 + 0x12));
    local_10 = strlen((char *)(local_14 + 0x13));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x13),local_10);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send((CUser *)param_2,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return 0;
}

```

