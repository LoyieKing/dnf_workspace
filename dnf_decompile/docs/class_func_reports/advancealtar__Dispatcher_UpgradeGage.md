# advancealtar__Dispatcher_UpgradeGage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## check_error

```asm
// === 08140314 advancealtar::Dispatcher_UpgradeGage::check_error  [0x08140314-0x814031d] ===
 8140314:	55                   	push   %ebp
 8140315:	89 e5                	mov    %esp,%ebp
 8140317:	b8 00 00 00 00       	mov    $0x0,%eax
 814031c:	5d                   	pop    %ebp
 814031d:	c3                   	ret

```

```c
// advancealtar::Dispatcher_UpgradeGage::check_error @ 0x8140314

/* advancealtar::Dispatcher_UpgradeGage::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const
    */

undefined4 advancealtar::Dispatcher_UpgradeGage::check_error(CUser *param_1,STBaseRequest *param_2)

{
  return 0;
}

```

---

## dispatch_sig

```asm
// === 081401fe advancealtar::Dispatcher_UpgradeGage::dispatch_sig  [0x081401fe-0x81402e5] ===
 81401fe:	55                   	push   %ebp
 81401ff:	89 e5                	mov    %esp,%ebp
 8140201:	56                   	push   %esi
 8140202:	53                   	push   %ebx
 8140203:	83 ec 40             	sub    $0x40,%esp
 8140206:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 814020a:	74 1f                	je     814022b <_ZN12advancealtar22Dispatcher_UpgradeGage12dispatch_sigEP5CUserR9PacketBuf+0x2d>
 814020c:	8b 45 0c             	mov    0xc(%ebp),%eax
 814020f:	89 04 24             	mov    %eax,(%esp)
 8140212:	e8 75 a1 f9 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8140217:	83 f8 02             	cmp    $0x2,%eax
 814021a:	7e 0f                	jle    814022b <_ZN12advancealtar22Dispatcher_UpgradeGage12dispatch_sigEP5CUserR9PacketBuf+0x2d>
 814021c:	8b 45 0c             	mov    0xc(%ebp),%eax
 814021f:	89 04 24             	mov    %eax,(%esp)
 8140222:	e8 0b 02 fe ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8140227:	85 c0                	test   %eax,%eax
 8140229:	75 07                	jne    8140232 <_ZN12advancealtar22Dispatcher_UpgradeGage12dispatch_sigEP5CUserR9PacketBuf+0x34>
 814022b:	b8 01 00 00 00       	mov    $0x1,%eax
 8140230:	eb 05                	jmp    8140237 <_ZN12advancealtar22Dispatcher_UpgradeGage12dispatch_sigEP5CUserR9PacketBuf+0x39>
 8140232:	b8 00 00 00 00       	mov    $0x0,%eax
 8140237:	84 c0                	test   %al,%al
 8140239:	74 0a                	je     8140245 <_ZN12advancealtar22Dispatcher_UpgradeGage12dispatch_sigEP5CUserR9PacketBuf+0x47>
 814023b:	bb 46 04 00 00       	mov    $0x446,%ebx
 8140240:	e9 98 00 00 00       	jmp    81402dd <_ZN12advancealtar22Dispatcher_UpgradeGage12dispatch_sigEP5CUserR9PacketBuf+0xdf>
 8140245:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8140248:	89 04 24             	mov    %eax,(%esp)
 814024b:	e8 aa 1b 00 00       	call   8141dfa <_ZN15CMDPacketStruct27_ReqAdvanceAltarUpgradeGageC1Ev>
 8140250:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8140253:	89 04 24             	mov    %eax,(%esp)
 8140256:	e8 cd 1b 00 00       	call   8141e28 <_ZN15CMDPacketStruct27_ResAdvanceAltarUpgradeGageC1Ev>
 814025b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 814025e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8140262:	8b 45 10             	mov    0x10(%ebp),%eax
 8140265:	89 44 24 04          	mov    %eax,0x4(%esp)
 8140269:	8b 45 08             	mov    0x8(%ebp),%eax
 814026c:	89 04 24             	mov    %eax,(%esp)
 814026f:	e8 72 00 00 00       	call   81402e6 <_ZNK12advancealtar22Dispatcher_UpgradeGage11read_packetER9PacketBufRN15CMDPacketStruct13STBaseRequestE>
 8140274:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8140277:	89 44 24 0c          	mov    %eax,0xc(%esp)
 814027b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 814027e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8140282:	8b 45 0c             	mov    0xc(%ebp),%eax
 8140285:	89 44 24 04          	mov    %eax,0x4(%esp)
 8140289:	8b 45 08             	mov    0x8(%ebp),%eax
 814028c:	89 04 24             	mov    %eax,(%esp)
 814028f:	e8 8a 00 00 00       	call   814031e <_ZNK12advancealtar22Dispatcher_UpgradeGage14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE>
 8140294:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8140297:	8d 45 c8             	lea    -0x38(%ebp),%eax
 814029a:	89 44 24 08          	mov    %eax,0x8(%esp)
 814029e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81402a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81402a5:	8b 45 08             	mov    0x8(%ebp),%eax
 81402a8:	89 04 24             	mov    %eax,(%esp)
 81402ab:	e8 32 01 00 00       	call   81403e2 <_ZN12advancealtar22Dispatcher_UpgradeGage11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE>
 81402b0:	bb 00 00 00 00       	mov    $0x0,%ebx
 81402b5:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81402b8:	89 04 24             	mov    %eax,(%esp)
 81402bb:	e8 f8 22 00 00       	call   81425b8 <_ZN15CMDPacketStruct27_ResAdvanceAltarUpgradeGageD1Ev>
 81402c0:	eb 1b                	jmp    81402dd <_ZN12advancealtar22Dispatcher_UpgradeGage12dispatch_sigEP5CUserR9PacketBuf+0xdf>
 81402c2:	89 d3                	mov    %edx,%ebx
 81402c4:	89 c6                	mov    %eax,%esi
 81402c6:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81402c9:	89 04 24             	mov    %eax,(%esp)
 81402cc:	e8 e7 22 00 00       	call   81425b8 <_ZN15CMDPacketStruct27_ResAdvanceAltarUpgradeGageD1Ev>
 81402d1:	89 f0                	mov    %esi,%eax
 81402d3:	89 da                	mov    %ebx,%edx
 81402d5:	89 04 24             	mov    %eax,(%esp)
 81402d8:	e8 73 34 9a 00       	call   8ae3750 <_Unwind_Resume>
 81402dd:	89 d8                	mov    %ebx,%eax
 81402df:	83 c4 40             	add    $0x40,%esp
 81402e2:	5b                   	pop    %ebx
 81402e3:	5e                   	pop    %esi
 81402e4:	5d                   	pop    %ebp
 81402e5:	c3                   	ret

```

```c
// advancealtar::Dispatcher_UpgradeGage::dispatch_sig @ 0x81401fe

/* advancealtar::Dispatcher_UpgradeGage::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
advancealtar::Dispatcher_UpgradeGage::dispatch_sig
          (Dispatcher_UpgradeGage *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  _ResAdvanceAltarUpgradeGage local_3c [20];
  _ReqAdvanceAltarUpgradeGage local_28 [24];
  undefined4 local_10;
  
  if (param_1 != (CUser *)0x0) {
    iVar2 = CUser::get_state(param_1);
    if (2 < iVar2) {
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
      if (iVar2 != 0) {
        bVar1 = false;
        goto LAB_08140237;
      }
    }
  }
  bVar1 = true;
LAB_08140237:
  if (bVar1) {
    uVar3 = 0x446;
  }
  else {
    CMDPacketStruct::_ReqAdvanceAltarUpgradeGage::_ReqAdvanceAltarUpgradeGage(local_28);
    CMDPacketStruct::_ResAdvanceAltarUpgradeGage::_ResAdvanceAltarUpgradeGage(local_3c);
                    /* try { // try from 0814026f to 081402af has its CatchHandler @ 081402c2 */
    read_packet(this,param_2,(STBaseRequest *)local_28);
    local_10 = process_packet(this,param_1,(STBaseRequest *)local_28,(STBaseResponse *)local_3c);
    send_packet(this,param_1,(STBaseResponse *)local_3c);
    uVar3 = 0;
    CMDPacketStruct::_ResAdvanceAltarUpgradeGage::~_ResAdvanceAltarUpgradeGage(local_3c);
  }
  return uVar3;
}

```

---

## process_packet

```asm
// === 0814031e advancealtar::Dispatcher_UpgradeGage::process_packet  [0x0814031e-0x81403e1] ===
 814031e:	55                   	push   %ebp
 814031f:	89 e5                	mov    %esp,%ebp
 8140321:	83 ec 28             	sub    $0x28,%esp
 8140324:	8b 45 10             	mov    0x10(%ebp),%eax
 8140327:	89 45 ec             	mov    %eax,-0x14(%ebp)
 814032a:	8b 45 14             	mov    0x14(%ebp),%eax
 814032d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8140330:	8b 45 10             	mov    0x10(%ebp),%eax
 8140333:	89 44 24 08          	mov    %eax,0x8(%esp)
 8140337:	8b 45 0c             	mov    0xc(%ebp),%eax
 814033a:	89 44 24 04          	mov    %eax,0x4(%esp)
 814033e:	8b 45 08             	mov    0x8(%ebp),%eax
 8140341:	89 04 24             	mov    %eax,(%esp)
 8140344:	e8 cb ff ff ff       	call   8140314 <_ZNK12advancealtar22Dispatcher_UpgradeGage11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE>
 8140349:	89 c2                	mov    %eax,%edx
 814034b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 814034e:	89 50 04             	mov    %edx,0x4(%eax)
 8140351:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8140354:	8b 40 04             	mov    0x4(%eax),%eax
 8140357:	85 c0                	test   %eax,%eax
 8140359:	74 07                	je     8140362 <_ZNK12advancealtar22Dispatcher_UpgradeGage14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0x44>
 814035b:	b8 00 00 00 00       	mov    $0x0,%eax
 8140360:	eb 7d                	jmp    81403df <_ZNK12advancealtar22Dispatcher_UpgradeGage14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0xc1>
 8140362:	8b 45 0c             	mov    0xc(%ebp),%eax
 8140365:	89 04 24             	mov    %eax,(%esp)
 8140368:	e8 f5 4e 51 00       	call   8655262 <_ZN5CUser15getAdvanceAltarEv>
 814036d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8140370:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8140374:	74 64                	je     81403da <_ZNK12advancealtar22Dispatcher_UpgradeGage14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0xbc>
 8140376:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8140379:	89 04 24             	mov    %eax,(%esp)
 814037c:	e8 1f 45 ff ff       	call   81348a0 <_ZN12advancealtar12StageControl13getCharacDataEv>
 8140381:	89 04 24             	mov    %eax,(%esp)
 8140384:	e8 0b 1d 00 00       	call   8142094 <_ZNK12advancealtar10CharacData12getGageLevelEv>
 8140389:	8b 55 f0             	mov    -0x10(%ebp),%edx
 814038c:	89 42 08             	mov    %eax,0x8(%edx)
 814038f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8140392:	89 04 24             	mov    %eax,(%esp)
 8140395:	e8 06 45 ff ff       	call   81348a0 <_ZN12advancealtar12StageControl13getCharacDataEv>
 814039a:	89 04 24             	mov    %eax,(%esp)
 814039d:	e8 d4 cd fe ff       	call   812d176 <_ZN12advancealtar10CharacData11upgreadGageEv>
 81403a2:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81403a5:	89 42 04             	mov    %eax,0x4(%edx)
 81403a8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81403ab:	89 04 24             	mov    %eax,(%esp)
 81403ae:	e8 ed 44 ff ff       	call   81348a0 <_ZN12advancealtar12StageControl13getCharacDataEv>
 81403b3:	89 04 24             	mov    %eax,(%esp)
 81403b6:	e8 d9 1c 00 00       	call   8142094 <_ZNK12advancealtar10CharacData12getGageLevelEv>
 81403bb:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81403be:	89 42 0c             	mov    %eax,0xc(%edx)
 81403c1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81403c4:	89 04 24             	mov    %eax,(%esp)
 81403c7:	e8 d4 44 ff ff       	call   81348a0 <_ZN12advancealtar12StageControl13getCharacDataEv>
 81403cc:	89 04 24             	mov    %eax,(%esp)
 81403cf:	e8 b4 1c 00 00       	call   8142088 <_ZNK12advancealtar10CharacData7getGageEv>
 81403d4:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81403d7:	89 42 10             	mov    %eax,0x10(%edx)
 81403da:	b8 00 00 00 00       	mov    $0x0,%eax
 81403df:	c9                   	leave
 81403e0:	c3                   	ret
 81403e1:	90                   	nop

```

```c
// advancealtar::Dispatcher_UpgradeGage::process_packet @ 0x814031e

/* advancealtar::Dispatcher_UpgradeGage::process_packet(CUser*, CMDPacketStruct::STBaseRequest&,
   CMDPacketStruct::STBaseResponse&) const */

undefined4 __thiscall
advancealtar::Dispatcher_UpgradeGage::process_packet
          (Dispatcher_UpgradeGage *this,CUser *param_1,STBaseRequest *param_2,
          STBaseResponse *param_3)

{
  undefined4 uVar1;
  StageControl *this_00;
  CharacData *pCVar2;
  
  uVar1 = check_error((CUser *)this,(STBaseRequest *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if ((*(int *)(param_3 + 4) == 0) &&
     (this_00 = (StageControl *)CUser::getAdvanceAltar(param_1), this_00 != (StageControl *)0x0)) {
    pCVar2 = (CharacData *)StageControl::getCharacData(this_00);
    uVar1 = CharacData::getGageLevel(pCVar2);
    *(undefined4 *)(param_3 + 8) = uVar1;
    pCVar2 = (CharacData *)StageControl::getCharacData(this_00);
    uVar1 = CharacData::upgreadGage(pCVar2);
    *(undefined4 *)(param_3 + 4) = uVar1;
    pCVar2 = (CharacData *)StageControl::getCharacData(this_00);
    uVar1 = CharacData::getGageLevel(pCVar2);
    *(undefined4 *)(param_3 + 0xc) = uVar1;
    pCVar2 = (CharacData *)StageControl::getCharacData(this_00);
    uVar1 = CharacData::getGage(pCVar2);
    *(undefined4 *)(param_3 + 0x10) = uVar1;
  }
  return 0;
}

```

---

## read_packet

```asm
// === 081402e6 advancealtar::Dispatcher_UpgradeGage::read_packet  [0x081402e6-0x8140313] ===
 81402e6:	55                   	push   %ebp
 81402e7:	89 e5                	mov    %esp,%ebp
 81402e9:	83 ec 28             	sub    $0x28,%esp
 81402ec:	8b 45 10             	mov    0x10(%ebp),%eax
 81402ef:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81402f2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81402f5:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 81402fc:	00 
 81402fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8140301:	8b 45 0c             	mov    0xc(%ebp),%eax
 8140304:	89 04 24             	mov    %eax,(%esp)
 8140307:	e8 a6 d0 44 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 814030c:	b8 00 00 00 00       	mov    $0x0,%eax
 8140311:	c9                   	leave
 8140312:	c3                   	ret
 8140313:	90                   	nop

```

```c
// advancealtar::Dispatcher_UpgradeGage::read_packet @ 0x81402e6

/* advancealtar::Dispatcher_UpgradeGage::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&)
   const */

undefined4 __thiscall
advancealtar::Dispatcher_UpgradeGage::read_packet
          (Dispatcher_UpgradeGage *this,PacketBuf *param_1,STBaseRequest *param_2)

{
  PacketBuf::get_binary(param_1,(char *)param_2,0x18);
  return 0;
}

```

---

## send_packet

```asm
// === 081403e2 advancealtar::Dispatcher_UpgradeGage::send_packet  [0x081403e2-0x8140497] ===
 81403e2:	55                   	push   %ebp
 81403e3:	89 e5                	mov    %esp,%ebp
 81403e5:	56                   	push   %esi
 81403e6:	53                   	push   %ebx
 81403e7:	83 ec 20             	sub    $0x20,%esp
 81403ea:	8b 45 10             	mov    0x10(%ebp),%eax
 81403ed:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81403f0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81403f3:	89 04 24             	mov    %eax,(%esp)
 81403f6:	e8 51 d9 44 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81403fb:	c7 44 24 08 3f 02 00 	movl   $0x23f,0x8(%esp)
 8140402:	00 
 8140403:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814040a:	00 
 814040b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 814040e:	89 04 24             	mov    %eax,(%esp)
 8140411:	e8 e6 b4 f8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8140416:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814041d:	00 
 814041e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8140421:	89 04 24             	mov    %eax,(%esp)
 8140424:	e8 f7 b4 f8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8140429:	8b 45 f4             	mov    -0xc(%ebp),%eax
 814042c:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8140433:	00 
 8140434:	89 44 24 04          	mov    %eax,0x4(%esp)
 8140438:	8d 45 e8             	lea    -0x18(%ebp),%eax
 814043b:	89 04 24             	mov    %eax,(%esp)
 814043e:	e8 c5 da fd ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 8140443:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814044a:	00 
 814044b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 814044e:	89 04 24             	mov    %eax,(%esp)
 8140451:	e8 02 b5 f8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8140456:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8140459:	89 44 24 04          	mov    %eax,0x4(%esp)
 814045d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8140460:	89 04 24             	mov    %eax,(%esp)
 8140463:	e8 52 81 50 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8140468:	eb 1b                	jmp    8140485 <_ZN12advancealtar22Dispatcher_UpgradeGage11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE+0xa3>
 814046a:	89 d3                	mov    %edx,%ebx
 814046c:	89 c6                	mov    %eax,%esi
 814046e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8140471:	89 04 24             	mov    %eax,(%esp)
 8140474:	e8 07 da 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8140479:	89 f0                	mov    %esi,%eax
 814047b:	89 da                	mov    %ebx,%edx
 814047d:	89 04 24             	mov    %eax,(%esp)
 8140480:	e8 cb 32 9a 00       	call   8ae3750 <_Unwind_Resume>
 8140485:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8140488:	89 04 24             	mov    %eax,(%esp)
 814048b:	e8 f0 d9 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8140490:	83 c4 20             	add    $0x20,%esp
 8140493:	5b                   	pop    %ebx
 8140494:	5e                   	pop    %esi
 8140495:	5d                   	pop    %ebp
 8140496:	c3                   	ret
 8140497:	90                   	nop

```

```c
// advancealtar::Dispatcher_UpgradeGage::send_packet @ 0x81403e2

/* advancealtar::Dispatcher_UpgradeGage::send_packet(CUser*, CMDPacketStruct::STBaseResponse&) */

void __thiscall
advancealtar::Dispatcher_UpgradeGage::send_packet
          (Dispatcher_UpgradeGage *this,CUser *param_1,STBaseResponse *param_2)

{
  PacketGuard local_1c [12];
  STBaseResponse *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08140411 to 08140467 has its CatchHandler @ 0814046a */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x23f);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_1c,(char *)local_10,0x14);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

