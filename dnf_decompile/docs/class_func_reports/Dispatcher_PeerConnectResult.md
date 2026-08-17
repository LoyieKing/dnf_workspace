# Dispatcher_PeerConnectResult

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 082033e6 Dispatcher_PeerConnectResult::dispatch_sig  [0x082033e6-0x820350d] ===
 82033e6:	55                   	push   %ebp
 82033e7:	89 e5                	mov    %esp,%ebp
 82033e9:	53                   	push   %ebx
 82033ea:	83 ec 24             	sub    $0x24,%esp
 82033ed:	c6 45 eb 00          	movb   $0x0,-0x15(%ebp)
 82033f1:	66 c7 45 e8 00 00    	movw   $0x0,-0x18(%ebp)
 82033f7:	8d 45 eb             	lea    -0x15(%ebp),%eax
 82033fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 82033fe:	8b 45 10             	mov    0x10(%ebp),%eax
 8203401:	89 04 24             	mov    %eax,(%esp)
 8203404:	e8 67 9b 38 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8203409:	83 f0 01             	xor    $0x1,%eax
 820340c:	84 c0                	test   %al,%al
 820340e:	74 29                	je     8203439 <_ZN28Dispatcher_PeerConnectResult12dispatch_sigEP5CUserR9PacketBuf+0x53>
 8203410:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8203417:	00 
 8203418:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820341f:	00 
 8203420:	c7 44 24 04 40 f2 bc 	movl   $0x8bcf240,0x4(%esp)
 8203427:	08 
 8203428:	c7 04 24 1c 9a 00 00 	movl   $0x9a1c,(%esp)
 820342f:	e8 a3 d4 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8203434:	e9 ce 00 00 00       	jmp    8203507 <_ZN28Dispatcher_PeerConnectResult12dispatch_sigEP5CUserR9PacketBuf+0x121>
 8203439:	8d 45 e8             	lea    -0x18(%ebp),%eax
 820343c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8203440:	8b 45 10             	mov    0x10(%ebp),%eax
 8203443:	89 04 24             	mov    %eax,(%esp)
 8203446:	e8 75 9b 38 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 820344b:	83 f0 01             	xor    $0x1,%eax
 820344e:	84 c0                	test   %al,%al
 8203450:	74 29                	je     820347b <_ZN28Dispatcher_PeerConnectResult12dispatch_sigEP5CUserR9PacketBuf+0x95>
 8203452:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8203459:	00 
 820345a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8203461:	00 
 8203462:	c7 44 24 04 40 f2 bc 	movl   $0x8bcf240,0x4(%esp)
 8203469:	08 
 820346a:	c7 04 24 1f 9a 00 00 	movl   $0x9a1f,(%esp)
 8203471:	e8 61 d4 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8203476:	e9 8c 00 00 00       	jmp    8203507 <_ZN28Dispatcher_PeerConnectResult12dispatch_sigEP5CUserR9PacketBuf+0x121>
 820347b:	0f b7 45 e8          	movzwl -0x18(%ebp),%eax
 820347f:	0f b7 d8             	movzwl %ax,%ebx
 8203482:	e8 20 6f ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 8203487:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 820348b:	89 04 24             	mov    %eax,(%esp)
 820348e:	e8 09 17 4c 00       	call   86c4b9c <_ZN9GameWorld15find_from_worldEt>
 8203493:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8203496:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 820349a:	0f 94 c0             	sete   %al
 820349d:	84 c0                	test   %al,%al
 820349f:	74 07                	je     82034a8 <_ZN28Dispatcher_PeerConnectResult12dispatch_sigEP5CUserR9PacketBuf+0xc2>
 82034a1:	b8 00 00 00 00       	mov    $0x0,%eax
 82034a6:	eb 5f                	jmp    8203507 <_ZN28Dispatcher_PeerConnectResult12dispatch_sigEP5CUserR9PacketBuf+0x121>
 82034a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82034ab:	05 e0 00 00 00       	add    $0xe0,%eax
 82034b0:	89 04 24             	mov    %eax,(%esp)
 82034b3:	e8 28 39 03 00       	call   8236de0 <_ZN8CNetworkILi4096ELi450000EE12get_nat_typeEv>
 82034b8:	0f be c0             	movsbl %al,%eax
 82034bb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82034be:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82034c1:	05 e0 00 00 00       	add    $0xe0,%eax
 82034c6:	89 04 24             	mov    %eax,(%esp)
 82034c9:	e8 12 39 03 00       	call   8236de0 <_ZN8CNetworkILi4096ELi450000EE12get_nat_typeEv>
 82034ce:	0f be c0             	movsbl %al,%eax
 82034d1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82034d4:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 82034d8:	0f b6 d8             	movzbl %al,%ebx
 82034db:	e8 c7 6e ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 82034e0:	89 04 24             	mov    %eax,(%esp)
 82034e3:	e8 d2 0e 03 00       	call   82343ba <_ZN9GameWorld20GetStatisticsNatTypeEv>
 82034e8:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 82034ec:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82034ef:	89 54 24 08          	mov    %edx,0x8(%esp)
 82034f3:	8b 55 f0             	mov    -0x10(%ebp),%edx
 82034f6:	89 54 24 04          	mov    %edx,0x4(%esp)
 82034fa:	89 04 24             	mov    %eax,(%esp)
 82034fd:	e8 6a 93 40 00       	call   860c86c <_ZN17StatisticsNatType15IncreaseNatTypeEiih>
 8203502:	b8 00 00 00 00       	mov    $0x0,%eax
 8203507:	83 c4 24             	add    $0x24,%esp
 820350a:	5b                   	pop    %ebx
 820350b:	5d                   	pop    %ebp
 820350c:	c3                   	ret
 820350d:	90                   	nop

```

```c
// Dispatcher_PeerConnectResult::dispatch_sig @ 0x82033e6

/* Dispatcher_PeerConnectResult::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_PeerConnectResult::dispatch_sig
          (Dispatcher_PeerConnectResult *this,CUser *param_1,PacketBuf *param_2)

{
  ushort uVar1;
  uchar uVar2;
  char cVar3;
  undefined4 uVar4;
  GameWorld *pGVar5;
  StatisticsNatType *this_00;
  ushort local_1c;
  uchar local_19;
  int local_18;
  int local_14;
  int local_10;
  
  local_19 = '\0';
  local_1c = 0;
  cVar3 = PacketBuf::get_byte(param_2,&local_19);
  if (cVar3 == '\x01') {
    cVar3 = PacketBuf::get_short(param_2,(short *)&local_1c);
    uVar1 = local_1c;
    if (cVar3 == '\x01') {
      pGVar5 = (GameWorld *)G_GameWorld();
      local_18 = GameWorld::find_from_world(pGVar5,uVar1);
      if (local_18 == 0) {
        uVar4 = 0;
      }
      else {
        cVar3 = CNetwork<4096,450000>::get_nat_type((CNetwork<4096,450000> *)(param_1 + 0xe0));
        local_14 = (int)cVar3;
        cVar3 = CNetwork<4096,450000>::get_nat_type((CNetwork<4096,450000> *)(local_18 + 0xe0));
        uVar2 = local_19;
        local_10 = (int)cVar3;
        pGVar5 = (GameWorld *)G_GameWorld();
        this_00 = (StatisticsNatType *)GameWorld::GetStatisticsNatType(pGVar5);
        StatisticsNatType::IncreaseNatType(this_00,local_14,local_10,uVar2);
        uVar4 = 0;
      }
    }
    else {
      uVar4 = LineFunc(0x9a1f,
                       "virtual int Dispatcher_PeerConnectResult::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
    }
  }
  else {
    uVar4 = LineFunc(0x9a1c,
                     "virtual int Dispatcher_PeerConnectResult::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
  }
  return uVar4;
}

```

