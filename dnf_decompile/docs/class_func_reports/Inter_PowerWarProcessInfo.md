# Inter_PowerWarProcessInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084daf30 Inter_PowerWarProcessInfo::dispatch_sig  [0x084daf30-0x84db06f] ===
 84daf30:	55                   	push   %ebp
 84daf31:	89 e5                	mov    %esp,%ebp
 84daf33:	56                   	push   %esi
 84daf34:	53                   	push   %ebx
 84daf35:	83 ec 20             	sub    $0x20,%esp
 84daf38:	8b 45 10             	mov    0x10(%ebp),%eax
 84daf3b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84daf3e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84daf41:	8b 58 0e             	mov    0xe(%eax),%ebx
 84daf44:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84daf4b:	ff 
 84daf4c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84daf4f:	89 04 24             	mov    %eax,(%esp)
 84daf52:	e8 49 30 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84daf57:	39 c3                	cmp    %eax,%ebx
 84daf59:	0f 95 c0             	setne  %al
 84daf5c:	84 c0                	test   %al,%al
 84daf5e:	74 0a                	je     84daf6a <_ZN25Inter_PowerWarProcessInfo12dispatch_sigEP5CUserPci+0x3a>
 84daf60:	bb 00 00 00 00       	mov    $0x0,%ebx
 84daf65:	e9 fc 00 00 00       	jmp    84db066 <_ZN25Inter_PowerWarProcessInfo12dispatch_sigEP5CUserPci+0x136>
 84daf6a:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84daf71:	e8 28 0d bf ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84daf76:	8b 55 0c             	mov    0xc(%ebp),%edx
 84daf79:	89 44 24 04          	mov    %eax,0x4(%esp)
 84daf7d:	89 14 24             	mov    %edx,(%esp)
 84daf80:	e8 fd 11 01 00       	call   84ec182 <_ZN15CUserCharacInfo36SetPowerWarProcessInfoLastUpdateTimeEl>
 84daf85:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84daf88:	89 04 24             	mov    %eax,(%esp)
 84daf8b:	e8 bc 2d 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84daf90:	c7 44 24 08 c9 00 00 	movl   $0xc9,0x8(%esp)
 84daf97:	00 
 84daf98:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84daf9f:	00 
 84dafa0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dafa3:	89 04 24             	mov    %eax,(%esp)
 84dafa6:	e8 51 09 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84dafab:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dafae:	8b 40 12             	mov    0x12(%eax),%eax
 84dafb1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dafb5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dafb8:	89 04 24             	mov    %eax,(%esp)
 84dafbb:	e8 7c 09 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84dafc0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dafc3:	8b 40 16             	mov    0x16(%eax),%eax
 84dafc6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dafca:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dafcd:	89 04 24             	mov    %eax,(%esp)
 84dafd0:	e8 67 09 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84dafd5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dafd8:	8b 40 1a             	mov    0x1a(%eax),%eax
 84dafdb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dafdf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dafe2:	89 04 24             	mov    %eax,(%esp)
 84dafe5:	e8 52 09 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84dafea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dafed:	8b 40 1e             	mov    0x1e(%eax),%eax
 84daff0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84daff4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84daff7:	89 04 24             	mov    %eax,(%esp)
 84daffa:	e8 3d 09 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84dafff:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84db002:	8b 40 22             	mov    0x22(%eax),%eax
 84db005:	89 44 24 04          	mov    %eax,0x4(%esp)
 84db009:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84db00c:	89 04 24             	mov    %eax,(%esp)
 84db00f:	e8 28 09 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84db014:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84db01b:	00 
 84db01c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84db01f:	89 04 24             	mov    %eax,(%esp)
 84db022:	e8 31 09 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84db027:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84db02a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84db02e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84db031:	89 04 24             	mov    %eax,(%esp)
 84db034:	e8 81 d5 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84db039:	bb 00 00 00 00       	mov    $0x0,%ebx
 84db03e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84db041:	89 04 24             	mov    %eax,(%esp)
 84db044:	e8 37 2e 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84db049:	eb 1b                	jmp    84db066 <_ZN25Inter_PowerWarProcessInfo12dispatch_sigEP5CUserPci+0x136>
 84db04b:	89 d3                	mov    %edx,%ebx
 84db04d:	89 c6                	mov    %eax,%esi
 84db04f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84db052:	89 04 24             	mov    %eax,(%esp)
 84db055:	e8 26 2e 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84db05a:	89 f0                	mov    %esi,%eax
 84db05c:	89 da                	mov    %ebx,%edx
 84db05e:	89 04 24             	mov    %eax,(%esp)
 84db061:	e8 ea 86 60 00       	call   8ae3750 <_Unwind_Resume>
 84db066:	89 d8                	mov    %ebx,%eax
 84db068:	83 c4 20             	add    $0x20,%esp
 84db06b:	5b                   	pop    %ebx
 84db06c:	5e                   	pop    %esi
 84db06d:	5d                   	pop    %ebp
 84db06e:	c3                   	ret
 84db06f:	90                   	nop

```

```c
// Inter_PowerWarProcessInfo::dispatch_sig @ 0x84daf30

/* Inter_PowerWarProcessInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_PowerWarProcessInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  iVar1 = *(int *)(param_3 + 0xe);
  iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
  if (iVar1 == iVar2) {
    lVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    CUserCharacInfo::SetPowerWarProcessInfoLastUpdateTime((CUserCharacInfo *)param_2,lVar3);
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084dafa6 to 084db038 has its CatchHandler @ 084db04b */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xc9);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x12));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x16));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x1a));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x1e));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x22));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}

```

