# DisPatcher_ResPvpRank

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## ExtractPacket

```asm
// === 081f039e DisPatcher_ResPvpRank::ExtractPacket  [0x081f039e-0x81f05e9] ===
 81f039e:	55                   	push   %ebp
 81f039f:	89 e5                	mov    %esp,%ebp
 81f03a1:	83 ec 38             	sub    $0x38,%esp
 81f03a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f03a7:	83 c0 0d             	add    $0xd,%eax
 81f03aa:	89 04 24             	mov    %eax,(%esp)
 81f03ad:	e8 0e 5a 3e 00       	call   85d5dc0 <_ZN13PvpResultType5ClearEv>
 81f03b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f03b5:	83 c0 0d             	add    $0xd,%eax
 81f03b8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81f03bb:	8d 45 f2             	lea    -0xe(%ebp),%eax
 81f03be:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f03c2:	8b 45 10             	mov    0x10(%ebp),%eax
 81f03c5:	89 04 24             	mov    %eax,(%esp)
 81f03c8:	e8 f3 cb 39 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81f03cd:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81f03d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f03d4:	8b 45 10             	mov    0x10(%ebp),%eax
 81f03d7:	89 04 24             	mov    %eax,(%esp)
 81f03da:	e8 e1 cb 39 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81f03df:	8d 45 ee             	lea    -0x12(%ebp),%eax
 81f03e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f03e6:	8b 45 10             	mov    0x10(%ebp),%eax
 81f03e9:	89 04 24             	mov    %eax,(%esp)
 81f03ec:	e8 cf cb 39 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81f03f1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81f03f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f03f8:	8b 45 10             	mov    0x10(%ebp),%eax
 81f03fb:	89 04 24             	mov    %eax,(%esp)
 81f03fe:	e8 bd cb 39 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81f0403:	8d 45 ea             	lea    -0x16(%ebp),%eax
 81f0406:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f040a:	8b 45 10             	mov    0x10(%ebp),%eax
 81f040d:	89 04 24             	mov    %eax,(%esp)
 81f0410:	e8 ab cb 39 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81f0415:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81f0418:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f041c:	8b 45 10             	mov    0x10(%ebp),%eax
 81f041f:	89 04 24             	mov    %eax,(%esp)
 81f0422:	e8 99 cb 39 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81f0427:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 81f042a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f042e:	8b 45 10             	mov    0x10(%ebp),%eax
 81f0431:	89 04 24             	mov    %eax,(%esp)
 81f0434:	e8 87 cb 39 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81f0439:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81f043c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f0440:	8b 45 10             	mov    0x10(%ebp),%eax
 81f0443:	89 04 24             	mov    %eax,(%esp)
 81f0446:	e8 75 cb 39 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81f044b:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 81f044e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f0452:	8b 45 10             	mov    0x10(%ebp),%eax
 81f0455:	89 04 24             	mov    %eax,(%esp)
 81f0458:	e8 63 cb 39 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81f045d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81f0460:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f0464:	8b 45 10             	mov    0x10(%ebp),%eax
 81f0467:	89 04 24             	mov    %eax,(%esp)
 81f046a:	e8 51 cb 39 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81f046f:	8d 45 de             	lea    -0x22(%ebp),%eax
 81f0472:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f0476:	8b 45 10             	mov    0x10(%ebp),%eax
 81f0479:	89 04 24             	mov    %eax,(%esp)
 81f047c:	e8 3f cb 39 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81f0481:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f0484:	83 c0 44             	add    $0x44,%eax
 81f0487:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f048b:	8b 45 10             	mov    0x10(%ebp),%eax
 81f048e:	89 04 24             	mov    %eax,(%esp)
 81f0491:	e8 5a cc 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81f0496:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f0499:	83 c0 6c             	add    $0x6c,%eax
 81f049c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f04a0:	8b 45 10             	mov    0x10(%ebp),%eax
 81f04a3:	89 04 24             	mov    %eax,(%esp)
 81f04a6:	e8 45 cc 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81f04ab:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f04ae:	83 c0 70             	add    $0x70,%eax
 81f04b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f04b5:	8b 45 10             	mov    0x10(%ebp),%eax
 81f04b8:	89 04 24             	mov    %eax,(%esp)
 81f04bb:	e8 30 cc 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81f04c0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f04c3:	83 c0 74             	add    $0x74,%eax
 81f04c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f04ca:	8b 45 10             	mov    0x10(%ebp),%eax
 81f04cd:	89 04 24             	mov    %eax,(%esp)
 81f04d0:	e8 1b cc 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81f04d5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f04d8:	83 c0 78             	add    $0x78,%eax
 81f04db:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f04df:	8b 45 10             	mov    0x10(%ebp),%eax
 81f04e2:	89 04 24             	mov    %eax,(%esp)
 81f04e5:	e8 06 cc 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81f04ea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f04ed:	83 c0 48             	add    $0x48,%eax
 81f04f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f04f4:	8b 45 10             	mov    0x10(%ebp),%eax
 81f04f7:	89 04 24             	mov    %eax,(%esp)
 81f04fa:	e8 f1 cb 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81f04ff:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f0502:	83 c0 4c             	add    $0x4c,%eax
 81f0505:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f0509:	8b 45 10             	mov    0x10(%ebp),%eax
 81f050c:	89 04 24             	mov    %eax,(%esp)
 81f050f:	e8 dc cb 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81f0514:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f0517:	83 c0 50             	add    $0x50,%eax
 81f051a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f051e:	8b 45 10             	mov    0x10(%ebp),%eax
 81f0521:	89 04 24             	mov    %eax,(%esp)
 81f0524:	e8 c7 cb 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81f0529:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f052c:	83 c0 7c             	add    $0x7c,%eax
 81f052f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f0533:	8b 45 10             	mov    0x10(%ebp),%eax
 81f0536:	89 04 24             	mov    %eax,(%esp)
 81f0539:	e8 b2 cb 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81f053e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f0541:	83 e8 80             	sub    $0xffffff80,%eax
 81f0544:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f0548:	8b 45 10             	mov    0x10(%ebp),%eax
 81f054b:	89 04 24             	mov    %eax,(%esp)
 81f054e:	e8 9d cb 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81f0553:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
 81f0557:	0f bf d0             	movswl %ax,%edx
 81f055a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f055d:	89 50 18             	mov    %edx,0x18(%eax)
 81f0560:	0f b7 45 f0          	movzwl -0x10(%ebp),%eax
 81f0564:	0f bf d0             	movswl %ax,%edx
 81f0567:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f056a:	89 50 1c             	mov    %edx,0x1c(%eax)
 81f056d:	0f b7 45 ee          	movzwl -0x12(%ebp),%eax
 81f0571:	0f bf d0             	movswl %ax,%edx
 81f0574:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f0577:	89 50 20             	mov    %edx,0x20(%eax)
 81f057a:	0f b7 45 ec          	movzwl -0x14(%ebp),%eax
 81f057e:	0f bf d0             	movswl %ax,%edx
 81f0581:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f0584:	89 50 24             	mov    %edx,0x24(%eax)
 81f0587:	0f b7 45 ea          	movzwl -0x16(%ebp),%eax
 81f058b:	0f bf d0             	movswl %ax,%edx
 81f058e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f0591:	89 50 38             	mov    %edx,0x38(%eax)
 81f0594:	0f b7 45 e8          	movzwl -0x18(%ebp),%eax
 81f0598:	0f bf d0             	movswl %ax,%edx
 81f059b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f059e:	89 50 3c             	mov    %edx,0x3c(%eax)
 81f05a1:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 81f05a5:	0f bf d0             	movswl %ax,%edx
 81f05a8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f05ab:	89 50 30             	mov    %edx,0x30(%eax)
 81f05ae:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
 81f05b2:	0f bf d0             	movswl %ax,%edx
 81f05b5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f05b8:	89 50 34             	mov    %edx,0x34(%eax)
 81f05bb:	0f b7 45 e2          	movzwl -0x1e(%ebp),%eax
 81f05bf:	0f bf d0             	movswl %ax,%edx
 81f05c2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f05c5:	89 50 28             	mov    %edx,0x28(%eax)
 81f05c8:	0f b7 45 e0          	movzwl -0x20(%ebp),%eax
 81f05cc:	0f bf d0             	movswl %ax,%edx
 81f05cf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f05d2:	89 50 2c             	mov    %edx,0x2c(%eax)
 81f05d5:	0f b7 45 de          	movzwl -0x22(%ebp),%eax
 81f05d9:	0f bf d0             	movswl %ax,%edx
 81f05dc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f05df:	89 50 40             	mov    %edx,0x40(%eax)
 81f05e2:	b8 01 00 00 00       	mov    $0x1,%eax
 81f05e7:	c9                   	leave
 81f05e8:	c3                   	ret
 81f05e9:	90                   	nop

```

```c
// DisPatcher_ResPvpRank::ExtractPacket @ 0x81f039e

/* DisPatcher_ResPvpRank::ExtractPacket(MSG_RES_PVP_RANK&, PacketBuf&) */

undefined4 __thiscall
DisPatcher_ResPvpRank::ExtractPacket
          (DisPatcher_ResPvpRank *this,MSG_RES_PVP_RANK *param_1,PacketBuf *param_2)

{
  short local_26;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  MSG_RES_PVP_RANK *local_10;
  
  PvpResultType::Clear((PvpResultType *)(param_1 + 0xd));
  local_10 = param_1 + 0xd;
  PacketBuf::get_short(param_2,&local_12);
  PacketBuf::get_short(param_2,&local_14);
  PacketBuf::get_short(param_2,&local_16);
  PacketBuf::get_short(param_2,&local_18);
  PacketBuf::get_short(param_2,&local_1a);
  PacketBuf::get_short(param_2,&local_1c);
  PacketBuf::get_short(param_2,&local_1e);
  PacketBuf::get_short(param_2,&local_20);
  PacketBuf::get_short(param_2,&local_22);
  PacketBuf::get_short(param_2,&local_24);
  PacketBuf::get_short(param_2,&local_26);
  PacketBuf::get_int(param_2,(int *)(local_10 + 0x44));
  PacketBuf::get_int(param_2,(int *)(local_10 + 0x6c));
  PacketBuf::get_int(param_2,(int *)(local_10 + 0x70));
  PacketBuf::get_int(param_2,(int *)(local_10 + 0x74));
  PacketBuf::get_int(param_2,(int *)(local_10 + 0x78));
  PacketBuf::get_int(param_2,(int *)(local_10 + 0x48));
  PacketBuf::get_int(param_2,(int *)(local_10 + 0x4c));
  PacketBuf::get_int(param_2,(int *)(local_10 + 0x50));
  PacketBuf::get_int(param_2,(int *)(local_10 + 0x7c));
  PacketBuf::get_int(param_2,(int *)(local_10 + 0x80));
  *(int *)(local_10 + 0x18) = (int)local_12;
  *(int *)(local_10 + 0x1c) = (int)local_14;
  *(int *)(local_10 + 0x20) = (int)local_16;
  *(int *)(local_10 + 0x24) = (int)local_18;
  *(int *)(local_10 + 0x38) = (int)local_1a;
  *(int *)(local_10 + 0x3c) = (int)local_1c;
  *(int *)(local_10 + 0x30) = (int)local_1e;
  *(int *)(local_10 + 0x34) = (int)local_20;
  *(int *)(local_10 + 0x28) = (int)local_22;
  *(int *)(local_10 + 0x2c) = (int)local_24;
  *(int *)(local_10 + 0x40) = (int)local_26;
  return 1;
}

```

---

## SavePvpRank

```asm
// === 081f05ea DisPatcher_ResPvpRank::SavePvpRank  [0x081f05ea-0x81f088d] ===
 81f05ea:	55                   	push   %ebp
 81f05eb:	89 e5                	mov    %esp,%ebp
 81f05ed:	53                   	push   %ebx
 81f05ee:	83 ec 64             	sub    $0x64,%esp
 81f05f1:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 81f05f8:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 81f05ff:	8b 45 10             	mov    0x10(%ebp),%eax
 81f0602:	8b 80 89 00 00 00    	mov    0x89(%eax),%eax
 81f0608:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81f060b:	8b 45 10             	mov    0x10(%ebp),%eax
 81f060e:	8b 88 8d 00 00 00    	mov    0x8d(%eax),%ecx
 81f0614:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 81f0619:	89 c8                	mov    %ecx,%eax
 81f061b:	f7 ea                	imul   %edx
 81f061d:	c1 fa 06             	sar    $0x6,%edx
 81f0620:	89 c8                	mov    %ecx,%eax
 81f0622:	c1 f8 1f             	sar    $0x1f,%eax
 81f0625:	89 d1                	mov    %edx,%ecx
 81f0627:	29 c1                	sub    %eax,%ecx
 81f0629:	89 c8                	mov    %ecx,%eax
 81f062b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81f062e:	81 7d e4 10 27 00 00 	cmpl   $0x2710,-0x1c(%ebp)
 81f0635:	0f 86 84 00 00 00    	jbe    81f06bf <_ZN21DisPatcher_ResPvpRank11SavePvpRankEP5CUserR16MSG_RES_PVP_RANK+0xd5>
 81f063b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81f0642:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81f0649:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81f064c:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 81f064f:	ba 59 17 b7 d1       	mov    $0xd1b71759,%edx
 81f0654:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81f0657:	f7 e2                	mul    %edx
 81f0659:	89 d0                	mov    %edx,%eax
 81f065b:	c1 e8 0d             	shr    $0xd,%eax
 81f065e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81f0661:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 81f0664:	ba 59 17 b7 d1       	mov    $0xd1b71759,%edx
 81f0669:	89 c8                	mov    %ecx,%eax
 81f066b:	f7 e2                	mul    %edx
 81f066d:	89 d0                	mov    %edx,%eax
 81f066f:	c1 e8 0d             	shr    $0xd,%eax
 81f0672:	69 c0 10 27 00 00    	imul   $0x2710,%eax,%eax
 81f0678:	89 ca                	mov    %ecx,%edx
 81f067a:	29 c2                	sub    %eax,%edx
 81f067c:	89 d0                	mov    %edx,%eax
 81f067e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81f0681:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 81f0684:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f0687:	89 04 24             	mov    %eax,(%esp)
 81f068a:	e8 cb 92 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81f068f:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81f0692:	89 54 24 14          	mov    %edx,0x14(%esp)
 81f0696:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81f069a:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81f06a1:	00 
 81f06a2:	c7 44 24 08 76 00 00 	movl   $0x76,0x8(%esp)
 81f06a9:	00 
 81f06aa:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f06ad:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f06b1:	89 04 24             	mov    %eax,(%esp)
 81f06b4:	e8 c5 85 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81f06b9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f06bc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81f06bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f06c2:	89 04 24             	mov    %eax,(%esp)
 81f06c5:	e8 56 d8 f0 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81f06ca:	83 f8 03             	cmp    $0x3,%eax
 81f06cd:	74 1f                	je     81f06ee <_ZN21DisPatcher_ResPvpRank11SavePvpRankEP5CUserR16MSG_RES_PVP_RANK+0x104>
 81f06cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f06d2:	89 04 24             	mov    %eax,(%esp)
 81f06d5:	e8 46 d8 f0 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81f06da:	83 f8 04             	cmp    $0x4,%eax
 81f06dd:	75 16                	jne    81f06f5 <_ZN21DisPatcher_ResPvpRank11SavePvpRankEP5CUserR16MSG_RES_PVP_RANK+0x10b>
 81f06df:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f06e2:	89 04 24             	mov    %eax,(%esp)
 81f06e5:	e8 aa 05 f2 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 81f06ea:	3c 02                	cmp    $0x2,%al
 81f06ec:	75 07                	jne    81f06f5 <_ZN21DisPatcher_ResPvpRank11SavePvpRankEP5CUserR16MSG_RES_PVP_RANK+0x10b>
 81f06ee:	b8 01 00 00 00       	mov    $0x1,%eax
 81f06f3:	eb 05                	jmp    81f06fa <_ZN21DisPatcher_ResPvpRank11SavePvpRankEP5CUserR16MSG_RES_PVP_RANK+0x110>
 81f06f5:	b8 00 00 00 00       	mov    $0x0,%eax
 81f06fa:	84 c0                	test   %al,%al
 81f06fc:	74 3a                	je     81f0738 <_ZN21DisPatcher_ResPvpRank11SavePvpRankEP5CUserR16MSG_RES_PVP_RANK+0x14e>
 81f06fe:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81f0701:	ba 00 00 00 00       	mov    $0x0,%edx
 81f0706:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81f0709:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 81f070c:	df 6d d0             	fildll -0x30(%ebp)
 81f070f:	dd 05 20 63 bd 08    	fldl   0x8bd6320
 81f0715:	de c9                	fmulp  %st,%st(1)
 81f0717:	d9 7d ce             	fnstcw -0x32(%ebp)
 81f071a:	0f b7 45 ce          	movzwl -0x32(%ebp),%eax
 81f071e:	b4 0c                	mov    $0xc,%ah
 81f0720:	66 89 45 cc          	mov    %ax,-0x34(%ebp)
 81f0724:	d9 6d cc             	fldcw  -0x34(%ebp)
 81f0727:	df 7d d0             	fistpll -0x30(%ebp)
 81f072a:	d9 6d ce             	fldcw  -0x32(%ebp)
 81f072d:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81f0730:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81f0733:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81f0736:	eb 38                	jmp    81f0770 <_ZN21DisPatcher_ResPvpRank11SavePvpRankEP5CUserR16MSG_RES_PVP_RANK+0x186>
 81f0738:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81f073b:	ba 00 00 00 00       	mov    $0x0,%edx
 81f0740:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81f0743:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 81f0746:	df 6d d0             	fildll -0x30(%ebp)
 81f0749:	dd 05 28 63 bd 08    	fldl   0x8bd6328
 81f074f:	de c9                	fmulp  %st,%st(1)
 81f0751:	d9 7d ce             	fnstcw -0x32(%ebp)
 81f0754:	0f b7 45 ce          	movzwl -0x32(%ebp),%eax
 81f0758:	b4 0c                	mov    $0xc,%ah
 81f075a:	66 89 45 cc          	mov    %ax,-0x34(%ebp)
 81f075e:	d9 6d cc             	fldcw  -0x34(%ebp)
 81f0761:	df 7d d0             	fistpll -0x30(%ebp)
 81f0764:	d9 6d ce             	fldcw  -0x32(%ebp)
 81f0767:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81f076a:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81f076d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81f0770:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81f0773:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 81f0776:	76 38                	jbe    81f07b0 <_ZN21DisPatcher_ResPvpRank11SavePvpRankEP5CUserR16MSG_RES_PVP_RANK+0x1c6>
 81f0778:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f077b:	89 04 24             	mov    %eax,(%esp)
 81f077e:	e8 d7 91 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81f0783:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81f0786:	89 54 24 14          	mov    %edx,0x14(%esp)
 81f078a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81f078d:	89 54 24 10          	mov    %edx,0x10(%esp)
 81f0791:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81f0798:	00 
 81f0799:	c7 44 24 08 73 00 00 	movl   $0x73,0x8(%esp)
 81f07a0:	00 
 81f07a1:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f07a4:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f07a8:	89 04 24             	mov    %eax,(%esp)
 81f07ab:	e8 ce 84 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81f07b0:	8b 45 10             	mov    0x10(%ebp),%eax
 81f07b3:	83 c0 0d             	add    $0xd,%eax
 81f07b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f07ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f07bd:	89 04 24             	mov    %eax,(%esp)
 81f07c0:	e8 bf c7 46 00       	call   865cf84 <_ZN5CUser15update_pvp_rankERK13PvpResultType>
 81f07c5:	88 45 e3             	mov    %al,-0x1d(%ebp)
 81f07c8:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 81f07cc:	83 f0 01             	xor    $0x1,%eax
 81f07cf:	84 c0                	test   %al,%al
 81f07d1:	74 0a                	je     81f07dd <_ZN21DisPatcher_ResPvpRank11SavePvpRankEP5CUserR16MSG_RES_PVP_RANK+0x1f3>
 81f07d3:	b8 00 00 00 00       	mov    $0x0,%eax
 81f07d8:	e9 aa 00 00 00       	jmp    81f0887 <_ZN21DisPatcher_ResPvpRank11SavePvpRankEP5CUserR16MSG_RES_PVP_RANK+0x29d>
 81f07dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f07e0:	89 04 24             	mov    %eax,(%esp)
 81f07e3:	e8 a6 49 46 00       	call   865518e <_ZN5CUser10GetPVPRoomEv>
 81f07e8:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81f07eb:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81f07ef:	75 0a                	jne    81f07fb <_ZN21DisPatcher_ResPvpRank11SavePvpRankEP5CUserR16MSG_RES_PVP_RANK+0x211>
 81f07f1:	b8 00 00 00 00       	mov    $0x0,%eax
 81f07f6:	e9 8c 00 00 00       	jmp    81f0887 <_ZN21DisPatcher_ResPvpRank11SavePvpRankEP5CUserR16MSG_RES_PVP_RANK+0x29d>
 81f07fb:	8b 45 10             	mov    0x10(%ebp),%eax
 81f07fe:	8d 58 0d             	lea    0xd(%eax),%ebx
 81f0801:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f0804:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f0808:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81f080b:	89 04 24             	mov    %eax,(%esp)
 81f080e:	e8 cf 89 3e 00       	call   85d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>
 81f0813:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81f0817:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f081b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81f081e:	89 04 24             	mov    %eax,(%esp)
 81f0821:	e8 0e b8 3e 00       	call   85dc034 <_ZN8PvP_Room12SetPVPResultEiRK13PvpResultType>
 81f0826:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f0829:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f082d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81f0830:	89 04 24             	mov    %eax,(%esp)
 81f0833:	e8 4a b7 3e 00       	call   85dbf82 <_ZN8PvP_Room22set_recv_pvp_rank_flagEP5CUser>
 81f0838:	83 f0 01             	xor    $0x1,%eax
 81f083b:	84 c0                	test   %al,%al
 81f083d:	74 07                	je     81f0846 <_ZN21DisPatcher_ResPvpRank11SavePvpRankEP5CUserR16MSG_RES_PVP_RANK+0x25c>
 81f083f:	b8 00 00 00 00       	mov    $0x0,%eax
 81f0844:	eb 41                	jmp    81f0887 <_ZN21DisPatcher_ResPvpRank11SavePvpRankEP5CUserR16MSG_RES_PVP_RANK+0x29d>
 81f0846:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81f0849:	89 04 24             	mov    %eax,(%esp)
 81f084c:	e8 69 bc 3e 00       	call   85dc4ba <_ZNK8PvP_Room17recv_pvp_rank_allEv>
 81f0851:	84 c0                	test   %al,%al
 81f0853:	74 0d                	je     81f0862 <_ZN21DisPatcher_ResPvpRank11SavePvpRankEP5CUserR16MSG_RES_PVP_RANK+0x278>
 81f0855:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81f0858:	89 04 24             	mov    %eax,(%esp)
 81f085b:	e8 16 bc 3e 00       	call   85dc476 <_ZN8PvP_Room12send_pvp_endEv>
 81f0860:	eb 20                	jmp    81f0882 <_ZN21DisPatcher_ResPvpRank11SavePvpRankEP5CUserR16MSG_RES_PVP_RANK+0x298>
 81f0862:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81f0865:	89 04 24             	mov    %eax,(%esp)
 81f0868:	e8 5f ba 3e 00       	call   85dc2cc <_ZN8PvP_Room23get_recv_pvp_rank_countEv>
 81f086d:	83 f8 01             	cmp    $0x1,%eax
 81f0870:	0f 94 c0             	sete   %al
 81f0873:	84 c0                	test   %al,%al
 81f0875:	74 0b                	je     81f0882 <_ZN21DisPatcher_ResPvpRank11SavePvpRankEP5CUserR16MSG_RES_PVP_RANK+0x298>
 81f0877:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81f087a:	89 04 24             	mov    %eax,(%esp)
 81f087d:	e8 be ba 3e 00       	call   85dc340 <_ZN8PvP_Room26insert_timer_recv_pvp_rankEv>
 81f0882:	b8 01 00 00 00       	mov    $0x1,%eax
 81f0887:	83 c4 64             	add    $0x64,%esp
 81f088a:	5b                   	pop    %ebx
 81f088b:	5d                   	pop    %ebp
 81f088c:	c3                   	ret
 81f088d:	90                   	nop

```

```c
// DisPatcher_ResPvpRank::SavePvpRank @ 0x81f05ea

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DisPatcher_ResPvpRank::SavePvpRank(CUser*, MSG_RES_PVP_RANK&) */

undefined4 __thiscall
DisPatcher_ResPvpRank::SavePvpRank
          (DisPatcher_ResPvpRank *this,CUser *param_1,MSG_RES_PVP_RANK *param_2)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  CHackAnalyzer *pCVar5;
  int iVar6;
  undefined4 uVar7;
  PvP_Room *this_00;
  ulonglong local_34;
  uint local_20;
  
  local_20 = *(uint *)(param_2 + 0x89);
  uVar2 = *(int *)(param_2 + 0x8d) / 1000;
  if (10000 < local_20) {
    uVar4 = local_20 / 10000;
    local_20 = local_20 % 10000;
    pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar5,param_1,0x76,1,uVar4,uVar2);
  }
  iVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  if (iVar6 == 3) {
LAB_081f06ee:
    bVar1 = true;
  }
  else {
    iVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    if (iVar6 == 4) {
      cVar3 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
      if (cVar3 == '\x02') goto LAB_081f06ee;
    }
    bVar1 = false;
  }
  if (bVar1) {
    local_34 = (ulonglong)local_20;
    local_34._0_4_ = (uint)(longlong)ROUND(_DAT_08bd6320 * (double)local_34);
    local_20 = (uint)local_34;
  }
  else {
    local_34 = (ulonglong)local_20;
    local_34._0_4_ = (uint)(longlong)ROUND(_DAT_08bd6328 * (double)local_34);
    local_20 = (uint)local_34;
  }
  if (uVar2 < local_20) {
    pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar5,param_1,0x73,1,local_20,uVar2);
  }
  cVar3 = CUser::update_pvp_rank(param_1,(PvpResultType *)(param_2 + 0xd));
  if (cVar3 == '\x01') {
    this_00 = (PvP_Room *)CUser::GetPVPRoom(param_1);
    if (this_00 == (PvP_Room *)0x0) {
      uVar7 = 0;
    }
    else {
      iVar6 = PvP_Room::get_user_seat(this_00,param_1);
      PvP_Room::SetPVPResult(this_00,iVar6,(PvpResultType *)(param_2 + 0xd));
      cVar3 = PvP_Room::set_recv_pvp_rank_flag(this_00,param_1);
      if (cVar3 == '\x01') {
        cVar3 = PvP_Room::recv_pvp_rank_all(this_00);
        if (cVar3 == '\0') {
          iVar6 = PvP_Room::get_recv_pvp_rank_count(this_00);
          if (iVar6 == 1) {
            PvP_Room::insert_timer_recv_pvp_rank(this_00);
          }
        }
        else {
          PvP_Room::send_pvp_end(this_00);
        }
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
      }
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

```

---

## dispatch_sig

```asm
// === 081f0282 DisPatcher_ResPvpRank::dispatch_sig  [0x081f0282-0x81f039d] ===
 81f0282:	55                   	push   %ebp
 81f0283:	89 e5                	mov    %esp,%ebp
 81f0285:	56                   	push   %esi
 81f0286:	53                   	push   %ebx
 81f0287:	81 ec b0 00 00 00    	sub    $0xb0,%esp
 81f028d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f0290:	89 04 24             	mov    %eax,(%esp)
 81f0293:	e8 f4 a0 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f0298:	83 f8 07             	cmp    $0x7,%eax
 81f029b:	0f 95 c0             	setne  %al
 81f029e:	84 c0                	test   %al,%al
 81f02a0:	74 0a                	je     81f02ac <_ZN21DisPatcher_ResPvpRank12dispatch_sigEP5CUserR9PacketBuf+0x2a>
 81f02a2:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f02a7:	e9 e5 00 00 00       	jmp    81f0391 <_ZN21DisPatcher_ResPvpRank12dispatch_sigEP5CUserR9PacketBuf+0x10f>
 81f02ac:	8d 85 66 ff ff ff    	lea    -0x9a(%ebp),%eax
 81f02b2:	89 04 24             	mov    %eax,(%esp)
 81f02b5:	e8 be 50 04 00       	call   8235378 <_ZN16MSG_RES_PVP_RANKC1Ev>
 81f02ba:	8b 45 10             	mov    0x10(%ebp),%eax
 81f02bd:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f02c1:	8d 85 66 ff ff ff    	lea    -0x9a(%ebp),%eax
 81f02c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f02cb:	8b 45 08             	mov    0x8(%ebp),%eax
 81f02ce:	89 04 24             	mov    %eax,(%esp)
 81f02d1:	e8 c8 00 00 00       	call   81f039e <_ZN21DisPatcher_ResPvpRank13ExtractPacketER16MSG_RES_PVP_RANKR9PacketBuf>
 81f02d6:	88 45 f7             	mov    %al,-0x9(%ebp)
 81f02d9:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 81f02dd:	83 f0 01             	xor    $0x1,%eax
 81f02e0:	84 c0                	test   %al,%al
 81f02e2:	74 28                	je     81f030c <_ZN21DisPatcher_ResPvpRank12dispatch_sigEP5CUserR9PacketBuf+0x8a>
 81f02e4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f02eb:	00 
 81f02ec:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f02f3:	00 
 81f02f4:	c7 44 24 04 c0 02 bd 	movl   $0x8bd02c0,0x4(%esp)
 81f02fb:	08 
 81f02fc:	c7 04 24 36 77 00 00 	movl   $0x7736,(%esp)
 81f0303:	e8 cf 05 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f0308:	89 c3                	mov    %eax,%ebx
 81f030a:	eb 77                	jmp    81f0383 <_ZN21DisPatcher_ResPvpRank12dispatch_sigEP5CUserR9PacketBuf+0x101>
 81f030c:	8d 85 66 ff ff ff    	lea    -0x9a(%ebp),%eax
 81f0312:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f0316:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f0319:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f031d:	8b 45 08             	mov    0x8(%ebp),%eax
 81f0320:	89 04 24             	mov    %eax,(%esp)
 81f0323:	e8 c2 02 00 00       	call   81f05ea <_ZN21DisPatcher_ResPvpRank11SavePvpRankEP5CUserR16MSG_RES_PVP_RANK>
 81f0328:	88 45 f7             	mov    %al,-0x9(%ebp)
 81f032b:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 81f032f:	83 f0 01             	xor    $0x1,%eax
 81f0332:	84 c0                	test   %al,%al
 81f0334:	74 28                	je     81f035e <_ZN21DisPatcher_ResPvpRank12dispatch_sigEP5CUserR9PacketBuf+0xdc>
 81f0336:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f033d:	00 
 81f033e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f0345:	00 
 81f0346:	c7 44 24 04 c0 02 bd 	movl   $0x8bd02c0,0x4(%esp)
 81f034d:	08 
 81f034e:	c7 04 24 39 77 00 00 	movl   $0x7739,(%esp)
 81f0355:	e8 7d 05 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f035a:	89 c3                	mov    %eax,%ebx
 81f035c:	eb 25                	jmp    81f0383 <_ZN21DisPatcher_ResPvpRank12dispatch_sigEP5CUserR9PacketBuf+0x101>
 81f035e:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f0363:	eb 1e                	jmp    81f0383 <_ZN21DisPatcher_ResPvpRank12dispatch_sigEP5CUserR9PacketBuf+0x101>
 81f0365:	89 d3                	mov    %edx,%ebx
 81f0367:	89 c6                	mov    %eax,%esi
 81f0369:	8d 85 66 ff ff ff    	lea    -0x9a(%ebp),%eax
 81f036f:	89 04 24             	mov    %eax,(%esp)
 81f0372:	e8 17 50 04 00       	call   823538e <_ZN16MSG_RES_PVP_RANKD1Ev>
 81f0377:	89 f0                	mov    %esi,%eax
 81f0379:	89 da                	mov    %ebx,%edx
 81f037b:	89 04 24             	mov    %eax,(%esp)
 81f037e:	e8 cd 33 8f 00       	call   8ae3750 <_Unwind_Resume>
 81f0383:	8d 85 66 ff ff ff    	lea    -0x9a(%ebp),%eax
 81f0389:	89 04 24             	mov    %eax,(%esp)
 81f038c:	e8 fd 4f 04 00       	call   823538e <_ZN16MSG_RES_PVP_RANKD1Ev>
 81f0391:	89 d8                	mov    %ebx,%eax
 81f0393:	81 c4 b0 00 00 00    	add    $0xb0,%esp
 81f0399:	5b                   	pop    %ebx
 81f039a:	5e                   	pop    %esi
 81f039b:	5d                   	pop    %ebp
 81f039c:	c3                   	ret
 81f039d:	90                   	nop

```

```c
// DisPatcher_ResPvpRank::dispatch_sig @ 0x81f0282

/* DisPatcher_ResPvpRank::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_ResPvpRank::dispatch_sig(DisPatcher_ResPvpRank *this,CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  undefined4 uVar2;
  MSG_RES_PVP_RANK local_9e [145];
  char local_d;
  
  iVar1 = CUser::get_state(param_1);
  if (iVar1 == 7) {
    MSG_RES_PVP_RANK::MSG_RES_PVP_RANK(local_9e);
                    /* try { // try from 081f02d1 to 081f0359 has its CatchHandler @ 081f0365 */
    local_d = ExtractPacket(this,local_9e,param_2);
    if (local_d == '\x01') {
      local_d = SavePvpRank(this,param_1,local_9e);
      if (local_d == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x7739,
                         "virtual int DisPatcher_ResPvpRank::dispatch_sig(CUser*, PacketBuf&)",0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x7736,"virtual int DisPatcher_ResPvpRank::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
    }
    MSG_RES_PVP_RANK::~MSG_RES_PVP_RANK(local_9e);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

