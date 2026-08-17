# Dispatcher_CompatibilityIndex

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## check_error

```asm
// === 081e23e0 Dispatcher_CompatibilityIndex::check_error  [0x081e23e0-0x81e23e9] ===
 81e23e0:	55                   	push   %ebp
 81e23e1:	89 e5                	mov    %esp,%ebp
 81e23e3:	b8 00 00 00 00       	mov    $0x0,%eax
 81e23e8:	5d                   	pop    %ebp
 81e23e9:	c3                   	ret

```

```c
// Dispatcher_CompatibilityIndex::check_error @ 0x81e23e0

/* Dispatcher_CompatibilityIndex::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_CompatibilityIndex::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  return 0;
}

```

---

## process

```asm
// === 081e2664 Dispatcher_CompatibilityIndex::process  [0x081e2664-0x81e277f] ===
 81e2664:	55                   	push   %ebp
 81e2665:	89 e5                	mov    %esp,%ebp
 81e2667:	53                   	push   %ebx
 81e2668:	83 ec 44             	sub    $0x44,%esp
 81e266b:	8b 45 10             	mov    0x10(%ebp),%eax
 81e266e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e2671:	8b 45 14             	mov    0x14(%ebp),%eax
 81e2674:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81e2678:	8b 45 10             	mov    0x10(%ebp),%eax
 81e267b:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e267f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e2682:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e2686:	8b 45 08             	mov    0x8(%ebp),%eax
 81e2689:	89 04 24             	mov    %eax,(%esp)
 81e268c:	e8 4f fd ff ff       	call   81e23e0 <_ZN29Dispatcher_CompatibilityIndex11check_errorEP5CUserR8MSG_BASER9ParamBase>
 81e2691:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e2694:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81e2698:	7e 0a                	jle    81e26a4 <_ZN29Dispatcher_CompatibilityIndex7processEP5CUserR8MSG_BASER9ParamBase+0x40>
 81e269a:	b8 00 00 00 00       	mov    $0x0,%eax
 81e269f:	e9 d5 00 00 00       	jmp    81e2779 <_ZN29Dispatcher_CompatibilityIndex7processEP5CUserR8MSG_BASER9ParamBase+0x115>
 81e26a4:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81e26a8:	79 28                	jns    81e26d2 <_ZN29Dispatcher_CompatibilityIndex7processEP5CUserR8MSG_BASER9ParamBase+0x6e>
 81e26aa:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e26b1:	00 
 81e26b2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e26b5:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e26b9:	c7 44 24 04 80 16 bd 	movl   $0x8bd1680,0x4(%esp)
 81e26c0:	08 
 81e26c1:	c7 04 24 f8 58 00 00 	movl   $0x58f8,(%esp)
 81e26c8:	e8 0a e2 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e26cd:	e9 a7 00 00 00       	jmp    81e2779 <_ZN29Dispatcher_CompatibilityIndex7processEP5CUserR8MSG_BASER9ParamBase+0x115>
 81e26d2:	8d 45 d2             	lea    -0x2e(%ebp),%eax
 81e26d5:	89 04 24             	mov    %eax,(%esp)
 81e26d8:	e8 41 9f 04 00       	call   822c61e <_ZN31Packet_Stat_Compatibility_IndexC1Ev>
 81e26dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e26e0:	89 04 24             	mov    %eax,(%esp)
 81e26e3:	e8 86 7c ef ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81e26e8:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81e26eb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e26ee:	8b 40 10             	mov    0x10(%eax),%eax
 81e26f1:	89 45 e2             	mov    %eax,-0x1e(%ebp)
 81e26f4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e26f7:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81e26fb:	88 45 e1             	mov    %al,-0x1f(%ebp)
 81e26fe:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e2701:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e2705:	88 45 e0             	mov    %al,-0x20(%ebp)
 81e2708:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e270b:	0f b7 40 14          	movzwl 0x14(%eax),%eax
 81e270f:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 81e2713:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e2716:	0f b7 40 16          	movzwl 0x16(%eax),%eax
 81e271a:	66 89 45 e8          	mov    %ax,-0x18(%ebp)
 81e271e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e2721:	0f b7 40 1a          	movzwl 0x1a(%eax),%eax
 81e2725:	66 89 45 ec          	mov    %ax,-0x14(%ebp)
 81e2729:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e272c:	0f b7 40 18          	movzwl 0x18(%eax),%eax
 81e2730:	66 89 45 ea          	mov    %ax,-0x16(%ebp)
 81e2734:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e2737:	0f b6 40 1c          	movzbl 0x1c(%eax),%eax
 81e273b:	88 45 ee             	mov    %al,-0x12(%ebp)
 81e273e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e2741:	0f b6 40 1d          	movzbl 0x1d(%eax),%eax
 81e2745:	88 45 ef             	mov    %al,-0x11(%ebp)
 81e2748:	8d 5d d2             	lea    -0x2e(%ebp),%ebx
 81e274b:	a1 30 be 40 09       	mov    0x940be30,%eax
 81e2750:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e2757:	00 
 81e2758:	89 04 24             	mov    %eax,(%esp)
 81e275b:	e8 98 f5 f2 ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81e2760:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81e2767:	00 
 81e2768:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e276c:	89 04 24             	mov    %eax,(%esp)
 81e276f:	e8 d0 f8 28 00       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 81e2774:	b8 00 00 00 00       	mov    $0x0,%eax
 81e2779:	83 c4 44             	add    $0x44,%esp
 81e277c:	5b                   	pop    %ebx
 81e277d:	5d                   	pop    %ebp
 81e277e:	c3                   	ret
 81e277f:	90                   	nop

```

```c
// Dispatcher_CompatibilityIndex::process @ 0x81e2664

/* Dispatcher_CompatibilityIndex::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_CompatibilityIndex::process
          (Dispatcher_CompatibilityIndex *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  CStatisticServerProxy *this_00;
  Packet_Stat_Compatibility_Index local_32 [10];
  undefined4 local_28;
  MSG_BASE local_24;
  MSG_BASE local_23;
  undefined4 local_22;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  MSG_BASE local_16;
  MSG_BASE local_15;
  MSG_BASE *local_14;
  int local_10;
  
  local_14 = param_2;
  local_10 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  if (local_10 < 1) {
    if (local_10 < 0) {
      uVar1 = LineFunc(0x58f8,
                       "virtual int Dispatcher_CompatibilityIndex::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,local_10,0);
    }
    else {
      Packet_Stat_Compatibility_Index::Packet_Stat_Compatibility_Index(local_32);
      local_28 = CUser::get_acc_id(param_1);
      local_22 = *(undefined4 *)(local_14 + 0x10);
      local_23 = local_14[0xe];
      local_24 = local_14[0xd];
      local_1e = *(undefined2 *)(local_14 + 0x14);
      local_1c = *(undefined2 *)(local_14 + 0x16);
      local_18 = *(undefined2 *)(local_14 + 0x1a);
      local_1a = *(undefined2 *)(local_14 + 0x18);
      local_16 = local_14[0x1c];
      local_15 = local_14[0x1d];
      this_00 = (CStatisticServerProxy *)
                CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                          (GlobalData::s_statistic_proxy_mgr,0,param_2,param_3);
      CStatisticServerProxy::SendPacket(this_00,(char *)local_32,0x1e);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## read

```asm
// === 081e23ea Dispatcher_CompatibilityIndex::read  [0x081e23ea-0x81e2663] ===
 81e23ea:	55                   	push   %ebp
 81e23eb:	89 e5                	mov    %esp,%ebp
 81e23ed:	83 ec 28             	sub    $0x28,%esp
 81e23f0:	8b 45 10             	mov    0x10(%ebp),%eax
 81e23f3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e23f6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e23f9:	83 c0 0d             	add    $0xd,%eax
 81e23fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e2400:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e2403:	89 04 24             	mov    %eax,(%esp)
 81e2406:	e8 65 ab 3a 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81e240b:	83 f0 01             	xor    $0x1,%eax
 81e240e:	84 c0                	test   %al,%al
 81e2410:	74 29                	je     81e243b <_ZN29Dispatcher_CompatibilityIndex4readER9PacketBufR8MSG_BASE+0x51>
 81e2412:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e2419:	00 
 81e241a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e2421:	00 
 81e2422:	c7 44 24 04 e0 16 bd 	movl   $0x8bd16e0,0x4(%esp)
 81e2429:	08 
 81e242a:	c7 04 24 df 58 00 00 	movl   $0x58df,(%esp)
 81e2431:	e8 a1 e4 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e2436:	e9 27 02 00 00       	jmp    81e2662 <_ZN29Dispatcher_CompatibilityIndex4readER9PacketBufR8MSG_BASE+0x278>
 81e243b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e243e:	83 c0 0e             	add    $0xe,%eax
 81e2441:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e2445:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e2448:	89 04 24             	mov    %eax,(%esp)
 81e244b:	e8 20 ab 3a 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81e2450:	83 f0 01             	xor    $0x1,%eax
 81e2453:	84 c0                	test   %al,%al
 81e2455:	74 29                	je     81e2480 <_ZN29Dispatcher_CompatibilityIndex4readER9PacketBufR8MSG_BASE+0x96>
 81e2457:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e245e:	00 
 81e245f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e2466:	00 
 81e2467:	c7 44 24 04 e0 16 bd 	movl   $0x8bd16e0,0x4(%esp)
 81e246e:	08 
 81e246f:	c7 04 24 e0 58 00 00 	movl   $0x58e0,(%esp)
 81e2476:	e8 5c e4 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e247b:	e9 e2 01 00 00       	jmp    81e2662 <_ZN29Dispatcher_CompatibilityIndex4readER9PacketBufR8MSG_BASE+0x278>
 81e2480:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e2483:	83 c0 10             	add    $0x10,%eax
 81e2486:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e248a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e248d:	89 04 24             	mov    %eax,(%esp)
 81e2490:	e8 ab ad 3a 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81e2495:	83 f0 01             	xor    $0x1,%eax
 81e2498:	84 c0                	test   %al,%al
 81e249a:	74 29                	je     81e24c5 <_ZN29Dispatcher_CompatibilityIndex4readER9PacketBufR8MSG_BASE+0xdb>
 81e249c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e24a3:	00 
 81e24a4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e24ab:	00 
 81e24ac:	c7 44 24 04 e0 16 bd 	movl   $0x8bd16e0,0x4(%esp)
 81e24b3:	08 
 81e24b4:	c7 04 24 e1 58 00 00 	movl   $0x58e1,(%esp)
 81e24bb:	e8 17 e4 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e24c0:	e9 9d 01 00 00       	jmp    81e2662 <_ZN29Dispatcher_CompatibilityIndex4readER9PacketBufR8MSG_BASE+0x278>
 81e24c5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e24c8:	83 c0 14             	add    $0x14,%eax
 81e24cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e24cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e24d2:	89 04 24             	mov    %eax,(%esp)
 81e24d5:	e8 d6 ab 3a 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81e24da:	83 f0 01             	xor    $0x1,%eax
 81e24dd:	84 c0                	test   %al,%al
 81e24df:	74 29                	je     81e250a <_ZN29Dispatcher_CompatibilityIndex4readER9PacketBufR8MSG_BASE+0x120>
 81e24e1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e24e8:	00 
 81e24e9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e24f0:	00 
 81e24f1:	c7 44 24 04 e0 16 bd 	movl   $0x8bd16e0,0x4(%esp)
 81e24f8:	08 
 81e24f9:	c7 04 24 e2 58 00 00 	movl   $0x58e2,(%esp)
 81e2500:	e8 d2 e3 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e2505:	e9 58 01 00 00       	jmp    81e2662 <_ZN29Dispatcher_CompatibilityIndex4readER9PacketBufR8MSG_BASE+0x278>
 81e250a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e250d:	83 c0 16             	add    $0x16,%eax
 81e2510:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e2514:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e2517:	89 04 24             	mov    %eax,(%esp)
 81e251a:	e8 91 ab 3a 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81e251f:	83 f0 01             	xor    $0x1,%eax
 81e2522:	84 c0                	test   %al,%al
 81e2524:	74 29                	je     81e254f <_ZN29Dispatcher_CompatibilityIndex4readER9PacketBufR8MSG_BASE+0x165>
 81e2526:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e252d:	00 
 81e252e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e2535:	00 
 81e2536:	c7 44 24 04 e0 16 bd 	movl   $0x8bd16e0,0x4(%esp)
 81e253d:	08 
 81e253e:	c7 04 24 e3 58 00 00 	movl   $0x58e3,(%esp)
 81e2545:	e8 8d e3 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e254a:	e9 13 01 00 00       	jmp    81e2662 <_ZN29Dispatcher_CompatibilityIndex4readER9PacketBufR8MSG_BASE+0x278>
 81e254f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e2552:	83 c0 18             	add    $0x18,%eax
 81e2555:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e2559:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e255c:	89 04 24             	mov    %eax,(%esp)
 81e255f:	e8 4c ab 3a 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81e2564:	83 f0 01             	xor    $0x1,%eax
 81e2567:	84 c0                	test   %al,%al
 81e2569:	74 29                	je     81e2594 <_ZN29Dispatcher_CompatibilityIndex4readER9PacketBufR8MSG_BASE+0x1aa>
 81e256b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e2572:	00 
 81e2573:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e257a:	00 
 81e257b:	c7 44 24 04 e0 16 bd 	movl   $0x8bd16e0,0x4(%esp)
 81e2582:	08 
 81e2583:	c7 04 24 e4 58 00 00 	movl   $0x58e4,(%esp)
 81e258a:	e8 48 e3 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e258f:	e9 ce 00 00 00       	jmp    81e2662 <_ZN29Dispatcher_CompatibilityIndex4readER9PacketBufR8MSG_BASE+0x278>
 81e2594:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e2597:	83 c0 1a             	add    $0x1a,%eax
 81e259a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e259e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e25a1:	89 04 24             	mov    %eax,(%esp)
 81e25a4:	e8 07 ab 3a 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81e25a9:	83 f0 01             	xor    $0x1,%eax
 81e25ac:	84 c0                	test   %al,%al
 81e25ae:	74 29                	je     81e25d9 <_ZN29Dispatcher_CompatibilityIndex4readER9PacketBufR8MSG_BASE+0x1ef>
 81e25b0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e25b7:	00 
 81e25b8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e25bf:	00 
 81e25c0:	c7 44 24 04 e0 16 bd 	movl   $0x8bd16e0,0x4(%esp)
 81e25c7:	08 
 81e25c8:	c7 04 24 e5 58 00 00 	movl   $0x58e5,(%esp)
 81e25cf:	e8 03 e3 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e25d4:	e9 89 00 00 00       	jmp    81e2662 <_ZN29Dispatcher_CompatibilityIndex4readER9PacketBufR8MSG_BASE+0x278>
 81e25d9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e25dc:	83 c0 1c             	add    $0x1c,%eax
 81e25df:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e25e3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e25e6:	89 04 24             	mov    %eax,(%esp)
 81e25e9:	e8 82 a9 3a 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81e25ee:	83 f0 01             	xor    $0x1,%eax
 81e25f1:	84 c0                	test   %al,%al
 81e25f3:	74 26                	je     81e261b <_ZN29Dispatcher_CompatibilityIndex4readER9PacketBufR8MSG_BASE+0x231>
 81e25f5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e25fc:	00 
 81e25fd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e2604:	00 
 81e2605:	c7 44 24 04 e0 16 bd 	movl   $0x8bd16e0,0x4(%esp)
 81e260c:	08 
 81e260d:	c7 04 24 e6 58 00 00 	movl   $0x58e6,(%esp)
 81e2614:	e8 be e2 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e2619:	eb 47                	jmp    81e2662 <_ZN29Dispatcher_CompatibilityIndex4readER9PacketBufR8MSG_BASE+0x278>
 81e261b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e261e:	83 c0 1d             	add    $0x1d,%eax
 81e2621:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e2625:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e2628:	89 04 24             	mov    %eax,(%esp)
 81e262b:	e8 40 a9 3a 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81e2630:	83 f0 01             	xor    $0x1,%eax
 81e2633:	84 c0                	test   %al,%al
 81e2635:	74 26                	je     81e265d <_ZN29Dispatcher_CompatibilityIndex4readER9PacketBufR8MSG_BASE+0x273>
 81e2637:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e263e:	00 
 81e263f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e2646:	00 
 81e2647:	c7 44 24 04 e0 16 bd 	movl   $0x8bd16e0,0x4(%esp)
 81e264e:	08 
 81e264f:	c7 04 24 e7 58 00 00 	movl   $0x58e7,(%esp)
 81e2656:	e8 7c e2 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e265b:	eb 05                	jmp    81e2662 <_ZN29Dispatcher_CompatibilityIndex4readER9PacketBufR8MSG_BASE+0x278>
 81e265d:	b8 00 00 00 00       	mov    $0x0,%eax
 81e2662:	c9                   	leave
 81e2663:	c3                   	ret

```

```c
// Dispatcher_CompatibilityIndex::read @ 0x81e23ea

/* Dispatcher_CompatibilityIndex::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_CompatibilityIndex::read
          (Dispatcher_CompatibilityIndex *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x10));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x14));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x16));
          if (cVar1 == '\x01') {
            cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x18));
            if (cVar1 == '\x01') {
              cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x1a));
              if (cVar1 == '\x01') {
                cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x1c));
                if (cVar1 == '\x01') {
                  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x1d));
                  if (cVar1 == '\x01') {
                    uVar2 = 0;
                  }
                  else {
                    uVar2 = LineFunc(0x58e7,
                                     "virtual int Dispatcher_CompatibilityIndex::read(PacketBuf&, MSG_BASE&)"
                                     ,0,0);
                  }
                }
                else {
                  uVar2 = LineFunc(0x58e6,
                                   "virtual int Dispatcher_CompatibilityIndex::read(PacketBuf&, MSG_BASE&)"
                                   ,0,0);
                }
              }
              else {
                uVar2 = LineFunc(0x58e5,
                                 "virtual int Dispatcher_CompatibilityIndex::read(PacketBuf&, MSG_BASE&)"
                                 ,0,0);
              }
            }
            else {
              uVar2 = LineFunc(0x58e4,
                               "virtual int Dispatcher_CompatibilityIndex::read(PacketBuf&, MSG_BASE&)"
                               ,0,0);
            }
          }
          else {
            uVar2 = LineFunc(0x58e3,
                             "virtual int Dispatcher_CompatibilityIndex::read(PacketBuf&, MSG_BASE&)"
                             ,0,0);
          }
        }
        else {
          uVar2 = LineFunc(0x58e2,
                           "virtual int Dispatcher_CompatibilityIndex::read(PacketBuf&, MSG_BASE&)",
                           0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x58e1,
                         "virtual int Dispatcher_CompatibilityIndex::read(PacketBuf&, MSG_BASE&)",0,
                         0);
      }
    }
    else {
      uVar2 = LineFunc(0x58e0,
                       "virtual int Dispatcher_CompatibilityIndex::read(PacketBuf&, MSG_BASE&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0x58df,"virtual int Dispatcher_CompatibilityIndex::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}

```

