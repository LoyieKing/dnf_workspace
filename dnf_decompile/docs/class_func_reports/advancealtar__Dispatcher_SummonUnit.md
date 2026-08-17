# advancealtar__Dispatcher_SummonUnit

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## check_error

```asm
// === 081405ae advancealtar::Dispatcher_SummonUnit::check_error  [0x081405ae-0x81405b7] ===
 81405ae:	55                   	push   %ebp
 81405af:	89 e5                	mov    %esp,%ebp
 81405b1:	b8 00 00 00 00       	mov    $0x0,%eax
 81405b6:	5d                   	pop    %ebp
 81405b7:	c3                   	ret

```

```c
// advancealtar::Dispatcher_SummonUnit::check_error @ 0x81405ae

/* advancealtar::Dispatcher_SummonUnit::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const
    */

undefined4 advancealtar::Dispatcher_SummonUnit::check_error(CUser *param_1,STBaseRequest *param_2)

{
  return 0;
}

```

---

## dispatch_sig

```asm
// === 08140498 advancealtar::Dispatcher_SummonUnit::dispatch_sig  [0x08140498-0x814057f] ===
 8140498:	55                   	push   %ebp
 8140499:	89 e5                	mov    %esp,%ebp
 814049b:	56                   	push   %esi
 814049c:	53                   	push   %ebx
 814049d:	83 ec 40             	sub    $0x40,%esp
 81404a0:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81404a4:	74 1f                	je     81404c5 <_ZN12advancealtar21Dispatcher_SummonUnit12dispatch_sigEP5CUserR9PacketBuf+0x2d>
 81404a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81404a9:	89 04 24             	mov    %eax,(%esp)
 81404ac:	e8 db 9e f9 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81404b1:	83 f8 02             	cmp    $0x2,%eax
 81404b4:	7e 0f                	jle    81404c5 <_ZN12advancealtar21Dispatcher_SummonUnit12dispatch_sigEP5CUserR9PacketBuf+0x2d>
 81404b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81404b9:	89 04 24             	mov    %eax,(%esp)
 81404bc:	e8 71 ff fd ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81404c1:	85 c0                	test   %eax,%eax
 81404c3:	75 07                	jne    81404cc <_ZN12advancealtar21Dispatcher_SummonUnit12dispatch_sigEP5CUserR9PacketBuf+0x34>
 81404c5:	b8 01 00 00 00       	mov    $0x1,%eax
 81404ca:	eb 05                	jmp    81404d1 <_ZN12advancealtar21Dispatcher_SummonUnit12dispatch_sigEP5CUserR9PacketBuf+0x39>
 81404cc:	b8 00 00 00 00       	mov    $0x0,%eax
 81404d1:	84 c0                	test   %al,%al
 81404d3:	74 0a                	je     81404df <_ZN12advancealtar21Dispatcher_SummonUnit12dispatch_sigEP5CUserR9PacketBuf+0x47>
 81404d5:	bb 96 04 00 00       	mov    $0x496,%ebx
 81404da:	e9 98 00 00 00       	jmp    8140577 <_ZN12advancealtar21Dispatcher_SummonUnit12dispatch_sigEP5CUserR9PacketBuf+0xdf>
 81404df:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81404e2:	89 04 24             	mov    %eax,(%esp)
 81404e5:	e8 76 19 00 00       	call   8141e60 <_ZN15CMDPacketStruct26_ReqAdvanceAltarSummonUnitC1Ev>
 81404ea:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81404ed:	89 04 24             	mov    %eax,(%esp)
 81404f0:	e8 99 19 00 00       	call   8141e8e <_ZN15CMDPacketStruct26_ResAdvanceAltarSummonUnitC1Ev>
 81404f5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81404f8:	89 44 24 08          	mov    %eax,0x8(%esp)
 81404fc:	8b 45 10             	mov    0x10(%ebp),%eax
 81404ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8140503:	8b 45 08             	mov    0x8(%ebp),%eax
 8140506:	89 04 24             	mov    %eax,(%esp)
 8140509:	e8 72 00 00 00       	call   8140580 <_ZNK12advancealtar21Dispatcher_SummonUnit11read_packetER9PacketBufRN15CMDPacketStruct13STBaseRequestE>
 814050e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8140511:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8140515:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8140518:	89 44 24 08          	mov    %eax,0x8(%esp)
 814051c:	8b 45 0c             	mov    0xc(%ebp),%eax
 814051f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8140523:	8b 45 08             	mov    0x8(%ebp),%eax
 8140526:	89 04 24             	mov    %eax,(%esp)
 8140529:	e8 8a 00 00 00       	call   81405b8 <_ZNK12advancealtar21Dispatcher_SummonUnit14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE>
 814052e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8140531:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8140534:	89 44 24 08          	mov    %eax,0x8(%esp)
 8140538:	8b 45 0c             	mov    0xc(%ebp),%eax
 814053b:	89 44 24 04          	mov    %eax,0x4(%esp)
 814053f:	8b 45 08             	mov    0x8(%ebp),%eax
 8140542:	89 04 24             	mov    %eax,(%esp)
 8140545:	e8 6e 01 00 00       	call   81406b8 <_ZN12advancealtar21Dispatcher_SummonUnit11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE>
 814054a:	bb 00 00 00 00       	mov    $0x0,%ebx
 814054f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8140552:	89 04 24             	mov    %eax,(%esp)
 8140555:	e8 ac 20 00 00       	call   8142606 <_ZN15CMDPacketStruct26_ResAdvanceAltarSummonUnitD1Ev>
 814055a:	eb 1b                	jmp    8140577 <_ZN12advancealtar21Dispatcher_SummonUnit12dispatch_sigEP5CUserR9PacketBuf+0xdf>
 814055c:	89 d3                	mov    %edx,%ebx
 814055e:	89 c6                	mov    %eax,%esi
 8140560:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8140563:	89 04 24             	mov    %eax,(%esp)
 8140566:	e8 9b 20 00 00       	call   8142606 <_ZN15CMDPacketStruct26_ResAdvanceAltarSummonUnitD1Ev>
 814056b:	89 f0                	mov    %esi,%eax
 814056d:	89 da                	mov    %ebx,%edx
 814056f:	89 04 24             	mov    %eax,(%esp)
 8140572:	e8 d9 31 9a 00       	call   8ae3750 <_Unwind_Resume>
 8140577:	89 d8                	mov    %ebx,%eax
 8140579:	83 c4 40             	add    $0x40,%esp
 814057c:	5b                   	pop    %ebx
 814057d:	5e                   	pop    %esi
 814057e:	5d                   	pop    %ebp
 814057f:	c3                   	ret

```

```c
// advancealtar::Dispatcher_SummonUnit::dispatch_sig @ 0x8140498

/* advancealtar::Dispatcher_SummonUnit::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
advancealtar::Dispatcher_SummonUnit::dispatch_sig
          (Dispatcher_SummonUnit *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  _ResAdvanceAltarSummonUnit local_3c [20];
  _ReqAdvanceAltarSummonUnit local_28 [24];
  undefined4 local_10;
  
  if (param_1 != (CUser *)0x0) {
    iVar2 = CUser::get_state(param_1);
    if (2 < iVar2) {
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
      if (iVar2 != 0) {
        bVar1 = false;
        goto LAB_081404d1;
      }
    }
  }
  bVar1 = true;
LAB_081404d1:
  if (bVar1) {
    uVar3 = 0x496;
  }
  else {
    CMDPacketStruct::_ReqAdvanceAltarSummonUnit::_ReqAdvanceAltarSummonUnit(local_28);
    CMDPacketStruct::_ResAdvanceAltarSummonUnit::_ResAdvanceAltarSummonUnit(local_3c);
                    /* try { // try from 08140509 to 08140549 has its CatchHandler @ 0814055c */
    read_packet(this,param_2,(STBaseRequest *)local_28);
    local_10 = process_packet(this,param_1,(STBaseRequest *)local_28,(STBaseResponse *)local_3c);
    send_packet(this,param_1,(STBaseResponse *)local_3c);
    uVar3 = 0;
    CMDPacketStruct::_ResAdvanceAltarSummonUnit::~_ResAdvanceAltarSummonUnit(local_3c);
  }
  return uVar3;
}

```

---

## process_packet

```asm
// === 081405b8 advancealtar::Dispatcher_SummonUnit::process_packet  [0x081405b8-0x81406b7] ===
 81405b8:	55                   	push   %ebp
 81405b9:	89 e5                	mov    %esp,%ebp
 81405bb:	56                   	push   %esi
 81405bc:	53                   	push   %ebx
 81405bd:	83 ec 20             	sub    $0x20,%esp
 81405c0:	8b 45 10             	mov    0x10(%ebp),%eax
 81405c3:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81405c6:	8b 45 14             	mov    0x14(%ebp),%eax
 81405c9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81405cc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81405cf:	0f b6 50 0d          	movzbl 0xd(%eax),%edx
 81405d3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81405d6:	88 50 08             	mov    %dl,0x8(%eax)
 81405d9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81405dc:	8b 50 10             	mov    0x10(%eax),%edx
 81405df:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81405e2:	89 50 0c             	mov    %edx,0xc(%eax)
 81405e5:	8b 45 10             	mov    0x10(%ebp),%eax
 81405e8:	89 44 24 08          	mov    %eax,0x8(%esp)
 81405ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 81405ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 81405f3:	8b 45 08             	mov    0x8(%ebp),%eax
 81405f6:	89 04 24             	mov    %eax,(%esp)
 81405f9:	e8 b0 ff ff ff       	call   81405ae <_ZNK12advancealtar21Dispatcher_SummonUnit11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE>
 81405fe:	89 c2                	mov    %eax,%edx
 8140600:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8140603:	89 50 04             	mov    %edx,0x4(%eax)
 8140606:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8140609:	8b 40 04             	mov    0x4(%eax),%eax
 814060c:	85 c0                	test   %eax,%eax
 814060e:	74 0a                	je     814061a <_ZNK12advancealtar21Dispatcher_SummonUnit14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0x62>
 8140610:	b8 00 00 00 00       	mov    $0x0,%eax
 8140615:	e9 96 00 00 00       	jmp    81406b0 <_ZNK12advancealtar21Dispatcher_SummonUnit14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0xf8>
 814061a:	8b 45 0c             	mov    0xc(%ebp),%eax
 814061d:	89 04 24             	mov    %eax,(%esp)
 8140620:	e8 3d 4c 51 00       	call   8655262 <_ZN5CUser15getAdvanceAltarEv>
 8140625:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8140628:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 814062c:	74 7d                	je     81406ab <_ZNK12advancealtar21Dispatcher_SummonUnit14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0xf3>
 814062e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8140631:	8b 58 14             	mov    0x14(%eax),%ebx
 8140634:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8140637:	89 04 24             	mov    %eax,(%esp)
 814063a:	e8 61 42 ff ff       	call   81348a0 <_ZN12advancealtar12StageControl13getCharacDataEv>
 814063f:	89 04 24             	mov    %eax,(%esp)
 8140642:	e8 4d 1a 00 00       	call   8142094 <_ZNK12advancealtar10CharacData12getGageLevelEv>
 8140647:	39 c3                	cmp    %eax,%ebx
 8140649:	0f 95 c0             	setne  %al
 814064c:	84 c0                	test   %al,%al
 814064e:	74 11                	je     8140661 <_ZNK12advancealtar21Dispatcher_SummonUnit14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0xa9>
 8140650:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8140653:	c7 40 04 03 00 00 00 	movl   $0x3,0x4(%eax)
 814065a:	b8 00 00 00 00       	mov    $0x0,%eax
 814065f:	eb 4f                	jmp    81406b0 <_ZNK12advancealtar21Dispatcher_SummonUnit14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0xf8>
 8140661:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8140664:	8b 70 10             	mov    0x10(%eax),%esi
 8140667:	8b 45 ec             	mov    -0x14(%ebp),%eax
 814066a:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 814066e:	0f b6 d8             	movzbl %al,%ebx
 8140671:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8140674:	89 04 24             	mov    %eax,(%esp)
 8140677:	e8 24 42 ff ff       	call   81348a0 <_ZN12advancealtar12StageControl13getCharacDataEv>
 814067c:	89 74 24 08          	mov    %esi,0x8(%esp)
 8140680:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8140684:	89 04 24             	mov    %eax,(%esp)
 8140687:	e8 ec cb fe ff       	call   812d278 <_ZN12advancealtar10CharacData14summonSlotUnitEhi>
 814068c:	8b 55 f0             	mov    -0x10(%ebp),%edx
 814068f:	89 42 04             	mov    %eax,0x4(%edx)
 8140692:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8140695:	89 04 24             	mov    %eax,(%esp)
 8140698:	e8 03 42 ff ff       	call   81348a0 <_ZN12advancealtar12StageControl13getCharacDataEv>
 814069d:	89 04 24             	mov    %eax,(%esp)
 81406a0:	e8 e3 19 00 00       	call   8142088 <_ZNK12advancealtar10CharacData7getGageEv>
 81406a5:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81406a8:	89 42 10             	mov    %eax,0x10(%edx)
 81406ab:	b8 00 00 00 00       	mov    $0x0,%eax
 81406b0:	83 c4 20             	add    $0x20,%esp
 81406b3:	5b                   	pop    %ebx
 81406b4:	5e                   	pop    %esi
 81406b5:	5d                   	pop    %ebp
 81406b6:	c3                   	ret
 81406b7:	90                   	nop

```

```c
// advancealtar::Dispatcher_SummonUnit::process_packet @ 0x81405b8

/* advancealtar::Dispatcher_SummonUnit::process_packet(CUser*, CMDPacketStruct::STBaseRequest&,
   CMDPacketStruct::STBaseResponse&) const */

undefined4 __thiscall
advancealtar::Dispatcher_SummonUnit::process_packet
          (Dispatcher_SummonUnit *this,CUser *param_1,STBaseRequest *param_2,STBaseResponse *param_3
          )

{
  STBaseRequest SVar1;
  int iVar2;
  undefined4 uVar3;
  StageControl *this_00;
  CharacData *pCVar4;
  int iVar5;
  
  *(STBaseRequest *)(param_3 + 8) = param_2[0xd];
  *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_2 + 0x10);
  uVar3 = check_error((CUser *)this,(STBaseRequest *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar3;
  if ((*(int *)(param_3 + 4) == 0) &&
     (this_00 = (StageControl *)CUser::getAdvanceAltar(param_1), this_00 != (StageControl *)0x0)) {
    iVar2 = *(int *)(param_2 + 0x14);
    pCVar4 = (CharacData *)StageControl::getCharacData(this_00);
    iVar5 = CharacData::getGageLevel(pCVar4);
    if (iVar2 == iVar5) {
      iVar2 = *(int *)(param_2 + 0x10);
      SVar1 = param_2[0xd];
      pCVar4 = (CharacData *)StageControl::getCharacData(this_00);
      uVar3 = CharacData::summonSlotUnit(pCVar4,(uchar)SVar1,iVar2);
      *(undefined4 *)(param_3 + 4) = uVar3;
      pCVar4 = (CharacData *)StageControl::getCharacData(this_00);
      uVar3 = CharacData::getGage(pCVar4);
      *(undefined4 *)(param_3 + 0x10) = uVar3;
    }
    else {
      *(undefined4 *)(param_3 + 4) = 3;
    }
  }
  return 0;
}

```

---

## read_packet

```asm
// === 08140580 advancealtar::Dispatcher_SummonUnit::read_packet  [0x08140580-0x81405ad] ===
 8140580:	55                   	push   %ebp
 8140581:	89 e5                	mov    %esp,%ebp
 8140583:	83 ec 28             	sub    $0x28,%esp
 8140586:	8b 45 10             	mov    0x10(%ebp),%eax
 8140589:	89 45 f4             	mov    %eax,-0xc(%ebp)
 814058c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 814058f:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 8140596:	00 
 8140597:	89 44 24 04          	mov    %eax,0x4(%esp)
 814059b:	8b 45 0c             	mov    0xc(%ebp),%eax
 814059e:	89 04 24             	mov    %eax,(%esp)
 81405a1:	e8 0c ce 44 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 81405a6:	b8 00 00 00 00       	mov    $0x0,%eax
 81405ab:	c9                   	leave
 81405ac:	c3                   	ret
 81405ad:	90                   	nop

```

```c
// advancealtar::Dispatcher_SummonUnit::read_packet @ 0x8140580

/* advancealtar::Dispatcher_SummonUnit::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&)
   const */

undefined4 __thiscall
advancealtar::Dispatcher_SummonUnit::read_packet
          (Dispatcher_SummonUnit *this,PacketBuf *param_1,STBaseRequest *param_2)

{
  PacketBuf::get_binary(param_1,(char *)param_2,0x18);
  return 0;
}

```

---

## send_packet

```asm
// === 081406b8 advancealtar::Dispatcher_SummonUnit::send_packet  [0x081406b8-0x814076d] ===
 81406b8:	55                   	push   %ebp
 81406b9:	89 e5                	mov    %esp,%ebp
 81406bb:	56                   	push   %esi
 81406bc:	53                   	push   %ebx
 81406bd:	83 ec 20             	sub    $0x20,%esp
 81406c0:	8b 45 10             	mov    0x10(%ebp),%eax
 81406c3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81406c6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81406c9:	89 04 24             	mov    %eax,(%esp)
 81406cc:	e8 7b d6 44 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81406d1:	c7 44 24 08 40 02 00 	movl   $0x240,0x8(%esp)
 81406d8:	00 
 81406d9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81406e0:	00 
 81406e1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81406e4:	89 04 24             	mov    %eax,(%esp)
 81406e7:	e8 10 b2 f8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81406ec:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81406f3:	00 
 81406f4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81406f7:	89 04 24             	mov    %eax,(%esp)
 81406fa:	e8 21 b2 f8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81406ff:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8140702:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8140709:	00 
 814070a:	89 44 24 04          	mov    %eax,0x4(%esp)
 814070e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8140711:	89 04 24             	mov    %eax,(%esp)
 8140714:	e8 ef d7 fd ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 8140719:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8140720:	00 
 8140721:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8140724:	89 04 24             	mov    %eax,(%esp)
 8140727:	e8 2c b2 f8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 814072c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 814072f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8140733:	8b 45 0c             	mov    0xc(%ebp),%eax
 8140736:	89 04 24             	mov    %eax,(%esp)
 8140739:	e8 7c 7e 50 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 814073e:	eb 1b                	jmp    814075b <_ZN12advancealtar21Dispatcher_SummonUnit11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE+0xa3>
 8140740:	89 d3                	mov    %edx,%ebx
 8140742:	89 c6                	mov    %eax,%esi
 8140744:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8140747:	89 04 24             	mov    %eax,(%esp)
 814074a:	e8 31 d7 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 814074f:	89 f0                	mov    %esi,%eax
 8140751:	89 da                	mov    %ebx,%edx
 8140753:	89 04 24             	mov    %eax,(%esp)
 8140756:	e8 f5 2f 9a 00       	call   8ae3750 <_Unwind_Resume>
 814075b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 814075e:	89 04 24             	mov    %eax,(%esp)
 8140761:	e8 1a d7 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8140766:	83 c4 20             	add    $0x20,%esp
 8140769:	5b                   	pop    %ebx
 814076a:	5e                   	pop    %esi
 814076b:	5d                   	pop    %ebp
 814076c:	c3                   	ret
 814076d:	90                   	nop

```

```c
// advancealtar::Dispatcher_SummonUnit::send_packet @ 0x81406b8

/* advancealtar::Dispatcher_SummonUnit::send_packet(CUser*, CMDPacketStruct::STBaseResponse&) */

void __thiscall
advancealtar::Dispatcher_SummonUnit::send_packet
          (Dispatcher_SummonUnit *this,CUser *param_1,STBaseResponse *param_2)

{
  PacketGuard local_1c [12];
  STBaseResponse *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081406e7 to 0814073d has its CatchHandler @ 08140740 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x240);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_1c,(char *)local_10,0x14);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

