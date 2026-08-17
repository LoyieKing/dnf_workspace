# Inter_PowerWarEndInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084db070 Inter_PowerWarEndInfo::dispatch_sig  [0x084db070-0x84db1ff] ===
 84db070:	55                   	push   %ebp
 84db071:	89 e5                	mov    %esp,%ebp
 84db073:	56                   	push   %esi
 84db074:	53                   	push   %ebx
 84db075:	83 ec 20             	sub    $0x20,%esp
 84db078:	8b 45 10             	mov    0x10(%ebp),%eax
 84db07b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84db07e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84db081:	8b 58 0e             	mov    0xe(%eax),%ebx
 84db084:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84db08b:	ff 
 84db08c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84db08f:	89 04 24             	mov    %eax,(%esp)
 84db092:	e8 09 2f 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84db097:	39 c3                	cmp    %eax,%ebx
 84db099:	0f 95 c0             	setne  %al
 84db09c:	84 c0                	test   %al,%al
 84db09e:	74 0a                	je     84db0aa <_ZN21Inter_PowerWarEndInfo12dispatch_sigEP5CUserPci+0x3a>
 84db0a0:	bb 00 00 00 00       	mov    $0x0,%ebx
 84db0a5:	e9 4c 01 00 00       	jmp    84db1f6 <_ZN21Inter_PowerWarEndInfo12dispatch_sigEP5CUserPci+0x186>
 84db0aa:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84db0ad:	89 04 24             	mov    %eax,(%esp)
 84db0b0:	e8 97 2c 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84db0b5:	c7 44 24 08 df 00 00 	movl   $0xdf,0x8(%esp)
 84db0bc:	00 
 84db0bd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84db0c4:	00 
 84db0c5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84db0c8:	89 04 24             	mov    %eax,(%esp)
 84db0cb:	e8 2c 08 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84db0d0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84db0d3:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84db0d7:	0f b6 c0             	movzbl %al,%eax
 84db0da:	89 44 24 04          	mov    %eax,0x4(%esp)
 84db0de:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84db0e1:	89 04 24             	mov    %eax,(%esp)
 84db0e4:	e8 37 08 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84db0e9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84db0ec:	8b 40 13             	mov    0x13(%eax),%eax
 84db0ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 84db0f3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84db0f6:	89 04 24             	mov    %eax,(%esp)
 84db0f9:	e8 3e 08 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84db0fe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84db101:	8b 40 17             	mov    0x17(%eax),%eax
 84db104:	89 44 24 04          	mov    %eax,0x4(%esp)
 84db108:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84db10b:	89 04 24             	mov    %eax,(%esp)
 84db10e:	e8 29 08 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84db113:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84db116:	8b 40 1b             	mov    0x1b(%eax),%eax
 84db119:	89 44 24 04          	mov    %eax,0x4(%esp)
 84db11d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84db120:	89 04 24             	mov    %eax,(%esp)
 84db123:	e8 14 08 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84db128:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84db12b:	8b 40 1f             	mov    0x1f(%eax),%eax
 84db12e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84db132:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84db135:	89 04 24             	mov    %eax,(%esp)
 84db138:	e8 ff 07 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84db13d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84db140:	8b 40 23             	mov    0x23(%eax),%eax
 84db143:	89 44 24 04          	mov    %eax,0x4(%esp)
 84db147:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84db14a:	89 04 24             	mov    %eax,(%esp)
 84db14d:	e8 ea 07 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84db152:	a1 50 be 40 09       	mov    0x940be50,%eax
 84db157:	89 04 24             	mov    %eax,(%esp)
 84db15a:	e8 bb 9e e9 ff       	call   837501a <_ZN13CPowerManager13GetWinnerSideEv>
 84db15f:	89 c3                	mov    %eax,%ebx
 84db161:	8b 45 0c             	mov    0xc(%ebp),%eax
 84db164:	89 04 24             	mov    %eax,(%esp)
 84db167:	e8 5a 4b d5 ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 84db16c:	38 c3                	cmp    %al,%bl
 84db16e:	0f 94 c0             	sete   %al
 84db171:	84 c0                	test   %al,%al
 84db173:	74 1c                	je     84db191 <_ZN21Inter_PowerWarEndInfo12dispatch_sigEP5CUserPci+0x121>
 84db175:	e8 21 10 bf ff       	call   80cc19b <_Z14G_CDataManagerv>
 84db17a:	8b 80 a4 a6 00 00    	mov    0xa6a4(%eax),%eax
 84db180:	89 44 24 04          	mov    %eax,0x4(%esp)
 84db184:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84db187:	89 04 24             	mov    %eax,(%esp)
 84db18a:	e8 ad 07 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84db18f:	eb 13                	jmp    84db1a4 <_ZN21Inter_PowerWarEndInfo12dispatch_sigEP5CUserPci+0x134>
 84db191:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84db198:	00 
 84db199:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84db19c:	89 04 24             	mov    %eax,(%esp)
 84db19f:	e8 98 07 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84db1a4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84db1ab:	00 
 84db1ac:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84db1af:	89 04 24             	mov    %eax,(%esp)
 84db1b2:	e8 a1 07 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84db1b7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84db1ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 84db1be:	8b 45 0c             	mov    0xc(%ebp),%eax
 84db1c1:	89 04 24             	mov    %eax,(%esp)
 84db1c4:	e8 f1 d3 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84db1c9:	bb 00 00 00 00       	mov    $0x0,%ebx
 84db1ce:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84db1d1:	89 04 24             	mov    %eax,(%esp)
 84db1d4:	e8 a7 2c 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84db1d9:	eb 1b                	jmp    84db1f6 <_ZN21Inter_PowerWarEndInfo12dispatch_sigEP5CUserPci+0x186>
 84db1db:	89 d3                	mov    %edx,%ebx
 84db1dd:	89 c6                	mov    %eax,%esi
 84db1df:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84db1e2:	89 04 24             	mov    %eax,(%esp)
 84db1e5:	e8 96 2c 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84db1ea:	89 f0                	mov    %esi,%eax
 84db1ec:	89 da                	mov    %ebx,%edx
 84db1ee:	89 04 24             	mov    %eax,(%esp)
 84db1f1:	e8 5a 85 60 00       	call   8ae3750 <_Unwind_Resume>
 84db1f6:	89 d8                	mov    %ebx,%eax
 84db1f8:	83 c4 20             	add    $0x20,%esp
 84db1fb:	5b                   	pop    %ebx
 84db1fc:	5e                   	pop    %esi
 84db1fd:	5d                   	pop    %ebp
 84db1fe:	c3                   	ret
 84db1ff:	90                   	nop

```

```c
// Inter_PowerWarEndInfo::dispatch_sig @ 0x84db070

/* Inter_PowerWarEndInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_PowerWarEndInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  iVar4 = *(int *)(param_3 + 0xe);
  iVar3 = CUser::get_charac_no((CUser *)param_2,-1);
  if (iVar4 == iVar3) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084db0cb to 084db1c8 has its CatchHandler @ 084db1db */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xdf);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0x12));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x13));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x17));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x1b));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x1f));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x23));
    cVar1 = CPowerManager::GetWinnerSide(GlobalData::s_power_manager);
    cVar2 = CUser::getPowerSide((CUser *)param_2);
    if (cVar1 == cVar2) {
      iVar4 = G_CDataManager();
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(iVar4 + 0xa6a4));
    }
    else {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,0);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}

```

