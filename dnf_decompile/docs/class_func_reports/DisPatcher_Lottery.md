# DisPatcher_Lottery

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081f8380 DisPatcher_Lottery::dispatch_sig  [0x081f8380-0x81f8601] ===
 81f8380:	55                   	push   %ebp
 81f8381:	89 e5                	mov    %esp,%ebp
 81f8383:	56                   	push   %esi
 81f8384:	53                   	push   %ebx
 81f8385:	83 ec 50             	sub    $0x50,%esp
 81f8388:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f838b:	89 04 24             	mov    %eax,(%esp)
 81f838e:	e8 f9 1f ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f8393:	83 f8 02             	cmp    $0x2,%eax
 81f8396:	0f 9e c0             	setle  %al
 81f8399:	84 c0                	test   %al,%al
 81f839b:	74 0a                	je     81f83a7 <_ZN18DisPatcher_Lottery12dispatch_sigEP5CUserR9PacketBuf+0x27>
 81f839d:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f83a2:	e9 52 02 00 00       	jmp    81f85f9 <_ZN18DisPatcher_Lottery12dispatch_sigEP5CUserR9PacketBuf+0x279>
 81f83a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f83aa:	89 04 24             	mov    %eax,(%esp)
 81f83ad:	e8 4c 1f ee ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 81f83b2:	84 c0                	test   %al,%al
 81f83b4:	0f 84 a1 00 00 00    	je     81f845b <_ZN18DisPatcher_Lottery12dispatch_sigEP5CUserR9PacketBuf+0xdb>
 81f83ba:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f83bd:	89 04 24             	mov    %eax,(%esp)
 81f83c0:	e8 87 59 39 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81f83c5:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 81f83cc:	00 
 81f83cd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f83d4:	00 
 81f83d5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f83d8:	89 04 24             	mov    %eax,(%esp)
 81f83db:	e8 1c 35 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f83e0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f83e7:	00 
 81f83e8:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f83eb:	89 04 24             	mov    %eax,(%esp)
 81f83ee:	e8 2d 35 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f83f3:	c7 44 24 04 da 00 00 	movl   $0xda,0x4(%esp)
 81f83fa:	00 
 81f83fb:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f83fe:	89 04 24             	mov    %eax,(%esp)
 81f8401:	e8 1a 35 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f8406:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f840d:	00 
 81f840e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f8411:	89 04 24             	mov    %eax,(%esp)
 81f8414:	e8 3f 35 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f8419:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f841c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f8420:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f8423:	89 04 24             	mov    %eax,(%esp)
 81f8426:	e8 8f 01 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f842b:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f8430:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f8433:	89 04 24             	mov    %eax,(%esp)
 81f8436:	e8 45 5a 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f843b:	e9 b9 01 00 00       	jmp    81f85f9 <_ZN18DisPatcher_Lottery12dispatch_sigEP5CUserR9PacketBuf+0x279>
 81f8440:	89 d3                	mov    %edx,%ebx
 81f8442:	89 c6                	mov    %eax,%esi
 81f8444:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f8447:	89 04 24             	mov    %eax,(%esp)
 81f844a:	e8 31 5a 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f844f:	89 f0                	mov    %esi,%eax
 81f8451:	89 da                	mov    %ebx,%edx
 81f8453:	89 04 24             	mov    %eax,(%esp)
 81f8456:	e8 f5 b2 8e 00       	call   8ae3750 <_Unwind_Resume>
 81f845b:	8d 45 e1             	lea    -0x1f(%ebp),%eax
 81f845e:	83 c0 0d             	add    $0xd,%eax
 81f8461:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f8465:	8b 45 10             	mov    0x10(%ebp),%eax
 81f8468:	89 04 24             	mov    %eax,(%esp)
 81f846b:	e8 50 4b 39 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81f8470:	83 f0 01             	xor    $0x1,%eax
 81f8473:	84 c0                	test   %al,%al
 81f8475:	74 2b                	je     81f84a2 <_ZN18DisPatcher_Lottery12dispatch_sigEP5CUserR9PacketBuf+0x122>
 81f8477:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f847e:	00 
 81f847f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f8486:	00 
 81f8487:	c7 44 24 04 60 fe bc 	movl   $0x8bcfe60,0x4(%esp)
 81f848e:	08 
 81f848f:	c7 04 24 1c 86 00 00 	movl   $0x861c,(%esp)
 81f8496:	e8 3c 84 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f849b:	89 c3                	mov    %eax,%ebx
 81f849d:	e9 57 01 00 00       	jmp    81f85f9 <_ZN18DisPatcher_Lottery12dispatch_sigEP5CUserR9PacketBuf+0x279>
 81f84a2:	0f b7 45 ee          	movzwl -0x12(%ebp),%eax
 81f84a6:	98                   	cwtl
 81f84a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f84ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f84ae:	89 04 24             	mov    %eax,(%esp)
 81f84b1:	e8 ec ae 47 00       	call   86733a2 <_ZN5CUser12lottery_itemEi>
 81f84b6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81f84b9:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81f84bd:	0f 8e a0 00 00 00    	jle    81f8563 <_ZN18DisPatcher_Lottery12dispatch_sigEP5CUserR9PacketBuf+0x1e3>
 81f84c3:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81f84c6:	89 04 24             	mov    %eax,(%esp)
 81f84c9:	e8 7e 58 39 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81f84ce:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 81f84d5:	00 
 81f84d6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f84dd:	00 
 81f84de:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81f84e1:	89 04 24             	mov    %eax,(%esp)
 81f84e4:	e8 13 34 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f84e9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f84f0:	00 
 81f84f1:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81f84f4:	89 04 24             	mov    %eax,(%esp)
 81f84f7:	e8 24 34 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f84fc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81f84ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f8503:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81f8506:	89 04 24             	mov    %eax,(%esp)
 81f8509:	e8 12 34 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f850e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f8515:	00 
 81f8516:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81f8519:	89 04 24             	mov    %eax,(%esp)
 81f851c:	e8 37 34 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f8521:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81f8524:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f8528:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f852b:	89 04 24             	mov    %eax,(%esp)
 81f852e:	e8 87 00 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f8533:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f8538:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81f853b:	89 04 24             	mov    %eax,(%esp)
 81f853e:	e8 3d 59 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f8543:	e9 b1 00 00 00       	jmp    81f85f9 <_ZN18DisPatcher_Lottery12dispatch_sigEP5CUserR9PacketBuf+0x279>
 81f8548:	89 d3                	mov    %edx,%ebx
 81f854a:	89 c6                	mov    %eax,%esi
 81f854c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81f854f:	89 04 24             	mov    %eax,(%esp)
 81f8552:	e8 29 59 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f8557:	89 f0                	mov    %esi,%eax
 81f8559:	89 da                	mov    %ebx,%edx
 81f855b:	89 04 24             	mov    %eax,(%esp)
 81f855e:	e8 ed b1 8e 00       	call   8ae3750 <_Unwind_Resume>
 81f8563:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f8566:	89 04 24             	mov    %eax,(%esp)
 81f8569:	e8 4c 82 03 00       	call   82307ba <_ZN5CUser18getLastLotteryTimeEv>
 81f856e:	85 c0                	test   %eax,%eax
 81f8570:	0f 95 c0             	setne  %al
 81f8573:	84 c0                	test   %al,%al
 81f8575:	74 62                	je     81f85d9 <_ZN18DisPatcher_Lottery12dispatch_sigEP5CUserR9PacketBuf+0x259>
 81f8577:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81f857e:	e8 1b 37 ed ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 81f8583:	89 c3                	mov    %eax,%ebx
 81f8585:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f8588:	89 04 24             	mov    %eax,(%esp)
 81f858b:	e8 2a 82 03 00       	call   82307ba <_ZN5CUser18getLastLotteryTimeEv>
 81f8590:	89 da                	mov    %ebx,%edx
 81f8592:	29 c2                	sub    %eax,%edx
 81f8594:	89 d0                	mov    %edx,%eax
 81f8596:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81f8599:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 81f859d:	77 3a                	ja     81f85d9 <_ZN18DisPatcher_Lottery12dispatch_sigEP5CUserR9PacketBuf+0x259>
 81f859f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f85a2:	89 04 24             	mov    %eax,(%esp)
 81f85a5:	e8 b0 13 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81f85aa:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81f85b1:	00 
 81f85b2:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81f85b9:	00 
 81f85ba:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81f85c1:	00 
 81f85c2:	c7 44 24 08 34 03 00 	movl   $0x334,0x8(%esp)
 81f85c9:	00 
 81f85ca:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f85cd:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f85d1:	89 04 24             	mov    %eax,(%esp)
 81f85d4:	e8 a5 06 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81f85d9:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81f85e0:	e8 b9 36 ed ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 81f85e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f85e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f85ec:	89 04 24             	mov    %eax,(%esp)
 81f85ef:	e8 d4 81 03 00       	call   82307c8 <_ZN5CUser18setLastLotteryTimeEm>
 81f85f4:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f85f9:	89 d8                	mov    %ebx,%eax
 81f85fb:	83 c4 50             	add    $0x50,%esp
 81f85fe:	5b                   	pop    %ebx
 81f85ff:	5e                   	pop    %esi
 81f8600:	5d                   	pop    %ebp
 81f8601:	c3                   	ret

```

```c
// DisPatcher_Lottery::dispatch_sig @ 0x81f8380

/* DisPatcher_Lottery::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_Lottery::dispatch_sig(DisPatcher_Lottery *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  CHackAnalyzer *pCVar4;
  ulong uVar5;
  undefined4 uVar6;
  PacketGuard local_3c [12];
  PacketGuard local_30 [26];
  short local_16;
  int local_14;
  uint local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 3) {
    uVar6 = 0;
  }
  else {
    cVar1 = CUser::CheckInTrade(param_1);
    if (cVar1 == '\0') {
      cVar1 = PacketBuf::get_short(param_2,&local_16);
      if (cVar1 == '\x01') {
        local_14 = CUser::lottery_item(param_1,(int)local_16);
        if (local_14 < 1) {
          iVar2 = CUser::getLastLotteryTime(param_1);
          if (iVar2 != 0) {
            iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
            iVar3 = CUser::getLastLotteryTime(param_1);
            local_10 = iVar2 - iVar3;
            if (local_10 < 3) {
              pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_1,0x334,1,0,0);
            }
          }
          uVar5 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          CUser::setLastLotteryTime(param_1,uVar5);
          uVar6 = 0;
        }
        else {
          PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 081f84e4 to 081f8532 has its CatchHandler @ 081f8548 */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,1,0x1d);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,local_14);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
          CUser::Send(param_1,local_3c);
          uVar6 = 0;
          PacketGuard::~PacketGuard(local_3c);
        }
      }
      else {
        uVar6 = LineFunc(0x861c,"virtual int DisPatcher_Lottery::dispatch_sig(CUser*, PacketBuf&)",0
                         ,0);
      }
    }
    else {
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 081f83db to 081f842a has its CatchHandler @ 081f8440 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0x1d);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0xda);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      CUser::Send(param_1,local_30);
      uVar6 = 0;
      PacketGuard::~PacketGuard(local_30);
    }
  }
  return uVar6;
}

```

