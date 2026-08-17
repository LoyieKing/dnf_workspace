# Dispatcher_ScanBotByDrv

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## check_error

```asm
// === 08264806 Dispatcher_ScanBotByDrv::check_error  [0x08264806-0x826480f] ===
 8264806:	55                   	push   %ebp
 8264807:	89 e5                	mov    %esp,%ebp
 8264809:	b8 00 00 00 00       	mov    $0x0,%eax
 826480e:	5d                   	pop    %ebp
 826480f:	c3                   	ret

```

```c
// Dispatcher_ScanBotByDrv::check_error @ 0x8264806

/* Dispatcher_ScanBotByDrv::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_ScanBotByDrv::check_error(CUser *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## process

```asm
// === 08264740 Dispatcher_ScanBotByDrv::process  [0x08264740-0x8264805] ===
 8264740:	55                   	push   %ebp
 8264741:	89 e5                	mov    %esp,%ebp
 8264743:	53                   	push   %ebx
 8264744:	83 ec 34             	sub    $0x34,%esp
 8264747:	8b 45 10             	mov    0x10(%ebp),%eax
 826474a:	89 44 24 08          	mov    %eax,0x8(%esp)
 826474e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8264751:	89 44 24 04          	mov    %eax,0x4(%esp)
 8264755:	8b 45 08             	mov    0x8(%ebp),%eax
 8264758:	89 04 24             	mov    %eax,(%esp)
 826475b:	e8 a6 00 00 00       	call   8264806 <_ZN23Dispatcher_ScanBotByDrv11check_errorEP5CUserR8MSG_BASE>
 8264760:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8264763:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8264767:	74 0a                	je     8264773 <_ZN23Dispatcher_ScanBotByDrv7processEP5CUserR8MSG_BASER9ParamBase+0x33>
 8264769:	b8 00 00 00 00       	mov    $0x0,%eax
 826476e:	e9 8c 00 00 00       	jmp    82647ff <_ZN23Dispatcher_ScanBotByDrv7processEP5CUserR8MSG_BASER9ParamBase+0xbf>
 8264773:	8b 45 10             	mov    0x10(%ebp),%eax
 8264776:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8264779:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826477c:	8b 40 0d             	mov    0xd(%eax),%eax
 826477f:	05 08 07 00 00       	add    $0x708,%eax
 8264784:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8264787:	8b 45 0c             	mov    0xc(%ebp),%eax
 826478a:	89 04 24             	mov    %eax,(%esp)
 826478d:	e8 c8 51 e9 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 8264792:	c7 44 24 04 08 07 00 	movl   $0x708,0x4(%esp)
 8264799:	00 
 826479a:	89 04 24             	mov    %eax,(%esp)
 826479d:	e8 b4 50 e9 ff       	call   80f9856 <_ZN8WongWork13CHackAnalyzer15setBaseHackTypeENS_13ENUM_HACKTYPEE>
 82647a2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82647a5:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 82647a9:	0f be d0             	movsbl %al,%edx
 82647ac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82647af:	98                   	cwtl
 82647b0:	89 54 24 08          	mov    %edx,0x8(%esp)
 82647b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82647b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82647bb:	89 04 24             	mov    %eax,(%esp)
 82647be:	e8 a5 51 e9 ff       	call   80f9968 <_ZN5CUser6SetETCEsi>
 82647c3:	89 c3                	mov    %eax,%ebx
 82647c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82647c8:	89 04 24             	mov    %eax,(%esp)
 82647cb:	e8 8a 51 e9 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 82647d0:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 82647d7:	00 
 82647d8:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 82647dc:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 82647e3:	00 
 82647e4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82647e7:	89 54 24 08          	mov    %edx,0x8(%esp)
 82647eb:	8b 55 0c             	mov    0xc(%ebp),%edx
 82647ee:	89 54 24 04          	mov    %edx,0x4(%esp)
 82647f2:	89 04 24             	mov    %eax,(%esp)
 82647f5:	e8 84 44 e9 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 82647fa:	b8 00 00 00 00       	mov    $0x0,%eax
 82647ff:	83 c4 34             	add    $0x34,%esp
 8264802:	5b                   	pop    %ebx
 8264803:	5d                   	pop    %ebp
 8264804:	c3                   	ret
 8264805:	90                   	nop

```

```c
// Dispatcher_ScanBotByDrv::process @ 0x8264740

/* Dispatcher_ScanBotByDrv::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_ScanBotByDrv::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  CHackAnalyzer *pCVar2;
  undefined4 uVar3;
  ParamBase *pPVar4;
  
  pPVar4 = param_3;
  iVar1 = check_error(param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_3 + 0xd);
    pCVar2 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
    WongWork::CHackAnalyzer::setBaseHackType(pCVar2,0x708,pPVar4);
    uVar3 = CUser::SetETC((CUser *)param_2,(short)(iVar1 + 0x708),(int)(char)param_3[0x11]);
    pCVar2 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar2,param_2,iVar1 + 0x708,1,uVar3,0);
  }
  return 0;
}

```

---

## read

```asm
// === 082646ae Dispatcher_ScanBotByDrv::read  [0x082646ae-0x826473f] ===
 82646ae:	55                   	push   %ebp
 82646af:	89 e5                	mov    %esp,%ebp
 82646b1:	83 ec 18             	sub    $0x18,%esp
 82646b4:	8b 45 10             	mov    0x10(%ebp),%eax
 82646b7:	83 c0 0d             	add    $0xd,%eax
 82646ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 82646be:	8b 45 0c             	mov    0xc(%ebp),%eax
 82646c1:	89 04 24             	mov    %eax,(%esp)
 82646c4:	e8 27 8a 32 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 82646c9:	83 f0 01             	xor    $0x1,%eax
 82646cc:	84 c0                	test   %al,%al
 82646ce:	74 26                	je     82646f6 <_ZN23Dispatcher_ScanBotByDrv4readER9PacketBufR8MSG_BASE+0x48>
 82646d0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82646d7:	00 
 82646d8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82646df:	00 
 82646e0:	c7 44 24 04 40 c7 be 	movl   $0x8bec740,0x4(%esp)
 82646e7:	08 
 82646e8:	c7 04 24 2c 04 00 00 	movl   $0x42c,(%esp)
 82646ef:	e8 e3 c1 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 82646f4:	eb 47                	jmp    826473d <_ZN23Dispatcher_ScanBotByDrv4readER9PacketBufR8MSG_BASE+0x8f>
 82646f6:	8b 45 10             	mov    0x10(%ebp),%eax
 82646f9:	83 c0 11             	add    $0x11,%eax
 82646fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8264700:	8b 45 0c             	mov    0xc(%ebp),%eax
 8264703:	89 04 24             	mov    %eax,(%esp)
 8264706:	e8 17 88 32 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 826470b:	83 f0 01             	xor    $0x1,%eax
 826470e:	84 c0                	test   %al,%al
 8264710:	74 26                	je     8264738 <_ZN23Dispatcher_ScanBotByDrv4readER9PacketBufR8MSG_BASE+0x8a>
 8264712:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8264719:	00 
 826471a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8264721:	00 
 8264722:	c7 44 24 04 40 c7 be 	movl   $0x8bec740,0x4(%esp)
 8264729:	08 
 826472a:	c7 04 24 31 04 00 00 	movl   $0x431,(%esp)
 8264731:	e8 a1 c1 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 8264736:	eb 05                	jmp    826473d <_ZN23Dispatcher_ScanBotByDrv4readER9PacketBufR8MSG_BASE+0x8f>
 8264738:	b8 00 00 00 00       	mov    $0x0,%eax
 826473d:	c9                   	leave
 826473e:	c3                   	ret
 826473f:	90                   	nop

```

```c
// Dispatcher_ScanBotByDrv::read @ 0x82646ae

/* Dispatcher_ScanBotByDrv::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ScanBotByDrv::read(Dispatcher_ScanBotByDrv *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x11));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x431,"virtual int Dispatcher_ScanBotByDrv::read(PacketBuf&, MSG_BASE&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0x42c,"virtual int Dispatcher_ScanBotByDrv::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

