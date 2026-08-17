# Dispatcher_ScanBotByDll

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## check_error

```asm
// === 08264538 Dispatcher_ScanBotByDll::check_error  [0x08264538-0x8264573] ===
 8264538:	55                   	push   %ebp
 8264539:	89 e5                	mov    %esp,%ebp
 826453b:	83 ec 10             	sub    $0x10,%esp
 826453e:	8b 45 10             	mov    0x10(%ebp),%eax
 8264541:	89 45 f8             	mov    %eax,-0x8(%ebp)
 8264544:	8b 45 f8             	mov    -0x8(%ebp),%eax
 8264547:	8b 40 0d             	mov    0xd(%eax),%eax
 826454a:	05 52 03 00 00       	add    $0x352,%eax
 826454f:	89 45 fc             	mov    %eax,-0x4(%ebp)
 8264552:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8264555:	3d 51 03 00 00       	cmp    $0x351,%eax
 826455a:	7e 0a                	jle    8264566 <_ZN23Dispatcher_ScanBotByDll11check_errorEP5CUserR8MSG_BASE+0x2e>
 826455c:	8b 45 fc             	mov    -0x4(%ebp),%eax
 826455f:	3d 83 03 00 00       	cmp    $0x383,%eax
 8264564:	7e 07                	jle    826456d <_ZN23Dispatcher_ScanBotByDll11check_errorEP5CUserR8MSG_BASE+0x35>
 8264566:	b8 07 04 00 00       	mov    $0x407,%eax
 826456b:	eb 05                	jmp    8264572 <_ZN23Dispatcher_ScanBotByDll11check_errorEP5CUserR8MSG_BASE+0x3a>
 826456d:	b8 00 00 00 00       	mov    $0x0,%eax
 8264572:	c9                   	leave
 8264573:	c3                   	ret

```

```c
// Dispatcher_ScanBotByDll::check_error @ 0x8264538

/* Dispatcher_ScanBotByDll::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ScanBotByDll::check_error(Dispatcher_ScanBotByDll *this,CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_2 + 0xd) + 0x352 < 0x352) || (899 < *(int *)(param_2 + 0xd) + 0x352)) {
    uVar1 = 0x407;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## process

```asm
// === 08264488 Dispatcher_ScanBotByDll::process  [0x08264488-0x8264537] ===
 8264488:	55                   	push   %ebp
 8264489:	89 e5                	mov    %esp,%ebp
 826448b:	56                   	push   %esi
 826448c:	53                   	push   %ebx
 826448d:	83 ec 30             	sub    $0x30,%esp
 8264490:	8b 45 10             	mov    0x10(%ebp),%eax
 8264493:	89 44 24 08          	mov    %eax,0x8(%esp)
 8264497:	8b 45 0c             	mov    0xc(%ebp),%eax
 826449a:	89 44 24 04          	mov    %eax,0x4(%esp)
 826449e:	8b 45 08             	mov    0x8(%ebp),%eax
 82644a1:	89 04 24             	mov    %eax,(%esp)
 82644a4:	e8 8f 00 00 00       	call   8264538 <_ZN23Dispatcher_ScanBotByDll11check_errorEP5CUserR8MSG_BASE>
 82644a9:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82644ac:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 82644b0:	74 07                	je     82644b9 <_ZN23Dispatcher_ScanBotByDll7processEP5CUserR8MSG_BASER9ParamBase+0x31>
 82644b2:	b8 00 00 00 00       	mov    $0x0,%eax
 82644b7:	eb 77                	jmp    8264530 <_ZN23Dispatcher_ScanBotByDll7processEP5CUserR8MSG_BASER9ParamBase+0xa8>
 82644b9:	8b 45 10             	mov    0x10(%ebp),%eax
 82644bc:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82644bf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82644c2:	8b 40 0d             	mov    0xd(%eax),%eax
 82644c5:	05 52 03 00 00       	add    $0x352,%eax
 82644ca:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82644cd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82644d0:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 82644d4:	0f b7 f0             	movzwl %ax,%esi
 82644d7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82644da:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 82644de:	0f be d0             	movsbl %al,%edx
 82644e1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82644e4:	98                   	cwtl
 82644e5:	89 54 24 08          	mov    %edx,0x8(%esp)
 82644e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82644ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 82644f0:	89 04 24             	mov    %eax,(%esp)
 82644f3:	e8 70 54 e9 ff       	call   80f9968 <_ZN5CUser6SetETCEsi>
 82644f8:	89 c3                	mov    %eax,%ebx
 82644fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 82644fd:	89 04 24             	mov    %eax,(%esp)
 8264500:	e8 55 54 e9 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 8264505:	89 74 24 14          	mov    %esi,0x14(%esp)
 8264509:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 826450d:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8264514:	00 
 8264515:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8264518:	89 54 24 08          	mov    %edx,0x8(%esp)
 826451c:	8b 55 0c             	mov    0xc(%ebp),%edx
 826451f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8264523:	89 04 24             	mov    %eax,(%esp)
 8264526:	e8 53 47 e9 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 826452b:	b8 00 00 00 00       	mov    $0x0,%eax
 8264530:	83 c4 30             	add    $0x30,%esp
 8264533:	5b                   	pop    %ebx
 8264534:	5e                   	pop    %esi
 8264535:	5d                   	pop    %ebp
 8264536:	c3                   	ret
 8264537:	90                   	nop

```

```c
// Dispatcher_ScanBotByDll::process @ 0x8264488

/* Dispatcher_ScanBotByDll::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_ScanBotByDll::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  CHackAnalyzer *pCVar4;
  
  iVar2 = check_error((Dispatcher_ScanBotByDll *)param_1,(CUser *)param_2,(MSG_BASE *)param_3);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_3 + 0xd);
    uVar1 = *(undefined2 *)(param_3 + 0x12);
    uVar3 = CUser::SetETC((CUser *)param_2,(short)(iVar2 + 0x352),(int)(char)param_3[0x11]);
    pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_2,iVar2 + 0x352,1,uVar3,uVar1);
  }
  return 0;
}

```

---

## read

```asm
// === 082643b2 Dispatcher_ScanBotByDll::read  [0x082643b2-0x8264487] ===
 82643b2:	55                   	push   %ebp
 82643b3:	89 e5                	mov    %esp,%ebp
 82643b5:	83 ec 18             	sub    $0x18,%esp
 82643b8:	8b 45 10             	mov    0x10(%ebp),%eax
 82643bb:	83 c0 0d             	add    $0xd,%eax
 82643be:	89 44 24 04          	mov    %eax,0x4(%esp)
 82643c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 82643c5:	89 04 24             	mov    %eax,(%esp)
 82643c8:	e8 23 8d 32 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 82643cd:	83 f0 01             	xor    $0x1,%eax
 82643d0:	84 c0                	test   %al,%al
 82643d2:	74 29                	je     82643fd <_ZN23Dispatcher_ScanBotByDll4readER9PacketBufR8MSG_BASE+0x4b>
 82643d4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82643db:	00 
 82643dc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82643e3:	00 
 82643e4:	c7 44 24 04 e0 c7 be 	movl   $0x8bec7e0,0x4(%esp)
 82643eb:	08 
 82643ec:	c7 04 24 d6 03 00 00 	movl   $0x3d6,(%esp)
 82643f3:	e8 df c4 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 82643f8:	e9 89 00 00 00       	jmp    8264486 <_ZN23Dispatcher_ScanBotByDll4readER9PacketBufR8MSG_BASE+0xd4>
 82643fd:	8b 45 10             	mov    0x10(%ebp),%eax
 8264400:	83 c0 11             	add    $0x11,%eax
 8264403:	89 44 24 04          	mov    %eax,0x4(%esp)
 8264407:	8b 45 0c             	mov    0xc(%ebp),%eax
 826440a:	89 04 24             	mov    %eax,(%esp)
 826440d:	e8 10 8b 32 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 8264412:	83 f0 01             	xor    $0x1,%eax
 8264415:	84 c0                	test   %al,%al
 8264417:	74 26                	je     826443f <_ZN23Dispatcher_ScanBotByDll4readER9PacketBufR8MSG_BASE+0x8d>
 8264419:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8264420:	00 
 8264421:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8264428:	00 
 8264429:	c7 44 24 04 e0 c7 be 	movl   $0x8bec7e0,0x4(%esp)
 8264430:	08 
 8264431:	c7 04 24 db 03 00 00 	movl   $0x3db,(%esp)
 8264438:	e8 9a c4 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 826443d:	eb 47                	jmp    8264486 <_ZN23Dispatcher_ScanBotByDll4readER9PacketBufR8MSG_BASE+0xd4>
 826443f:	8b 45 10             	mov    0x10(%ebp),%eax
 8264442:	83 c0 12             	add    $0x12,%eax
 8264445:	89 44 24 04          	mov    %eax,0x4(%esp)
 8264449:	8b 45 0c             	mov    0xc(%ebp),%eax
 826444c:	89 04 24             	mov    %eax,(%esp)
 826444f:	e8 5c 8c 32 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 8264454:	83 f0 01             	xor    $0x1,%eax
 8264457:	84 c0                	test   %al,%al
 8264459:	74 26                	je     8264481 <_ZN23Dispatcher_ScanBotByDll4readER9PacketBufR8MSG_BASE+0xcf>
 826445b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8264462:	00 
 8264463:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 826446a:	00 
 826446b:	c7 44 24 04 e0 c7 be 	movl   $0x8bec7e0,0x4(%esp)
 8264472:	08 
 8264473:	c7 04 24 e0 03 00 00 	movl   $0x3e0,(%esp)
 826447a:	e8 58 c4 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 826447f:	eb 05                	jmp    8264486 <_ZN23Dispatcher_ScanBotByDll4readER9PacketBufR8MSG_BASE+0xd4>
 8264481:	b8 00 00 00 00       	mov    $0x0,%eax
 8264486:	c9                   	leave
 8264487:	c3                   	ret

```

```c
// Dispatcher_ScanBotByDll::read @ 0x82643b2

/* Dispatcher_ScanBotByDll::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ScanBotByDll::read(Dispatcher_ScanBotByDll *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x11));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x12));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x3e0,"virtual int Dispatcher_ScanBotByDll::read(PacketBuf&, MSG_BASE&)",0,
                         0);
      }
    }
    else {
      uVar2 = LineFunc(0x3db,"virtual int Dispatcher_ScanBotByDll::read(PacketBuf&, MSG_BASE&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0x3d6,"virtual int Dispatcher_ScanBotByDll::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

