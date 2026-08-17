# advancealtar__Dispatcher_SetSlot

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## check_error

```asm
// === 0814004e advancealtar::Dispatcher_SetSlot::check_error  [0x0814004e-0x814006d] ===
 814004e:	55                   	push   %ebp
 814004f:	89 e5                	mov    %esp,%ebp
 8140051:	83 ec 08             	sub    $0x8,%esp
 8140054:	e8 91 cf fe ff       	call   812cfea <_ZN12advancealtar18isOpenAdvanceAltarEv>
 8140059:	83 f0 01             	xor    $0x1,%eax
 814005c:	84 c0                	test   %al,%al
 814005e:	74 07                	je     8140067 <_ZNK12advancealtar18Dispatcher_SetSlot11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE+0x19>
 8140060:	b8 01 00 00 00       	mov    $0x1,%eax
 8140065:	eb 05                	jmp    814006c <_ZNK12advancealtar18Dispatcher_SetSlot11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE+0x1e>
 8140067:	b8 00 00 00 00       	mov    $0x0,%eax
 814006c:	c9                   	leave
 814006d:	c3                   	ret

```

```c
// advancealtar::Dispatcher_SetSlot::check_error @ 0x814004e

/* advancealtar::Dispatcher_SetSlot::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const */

bool advancealtar::Dispatcher_SetSlot::check_error(CUser *param_1,STBaseRequest *param_2)

{
  char cVar1;
  
  cVar1 = isOpenAdvanceAltar();
  return cVar1 != '\x01';
}

```

---

## dispatch_sig

```asm
// === 0813ff38 advancealtar::Dispatcher_SetSlot::dispatch_sig  [0x0813ff38-0x814001f] ===
 813ff38:	55                   	push   %ebp
 813ff39:	89 e5                	mov    %esp,%ebp
 813ff3b:	56                   	push   %esi
 813ff3c:	53                   	push   %ebx
 813ff3d:	83 ec 60             	sub    $0x60,%esp
 813ff40:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 813ff44:	74 1f                	je     813ff65 <_ZN12advancealtar18Dispatcher_SetSlot12dispatch_sigEP5CUserR9PacketBuf+0x2d>
 813ff46:	8b 45 0c             	mov    0xc(%ebp),%eax
 813ff49:	89 04 24             	mov    %eax,(%esp)
 813ff4c:	e8 3b a4 f9 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 813ff51:	83 f8 02             	cmp    $0x2,%eax
 813ff54:	7e 0f                	jle    813ff65 <_ZN12advancealtar18Dispatcher_SetSlot12dispatch_sigEP5CUserR9PacketBuf+0x2d>
 813ff56:	8b 45 0c             	mov    0xc(%ebp),%eax
 813ff59:	89 04 24             	mov    %eax,(%esp)
 813ff5c:	e8 d1 04 fe ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 813ff61:	85 c0                	test   %eax,%eax
 813ff63:	75 07                	jne    813ff6c <_ZN12advancealtar18Dispatcher_SetSlot12dispatch_sigEP5CUserR9PacketBuf+0x34>
 813ff65:	b8 01 00 00 00       	mov    $0x1,%eax
 813ff6a:	eb 05                	jmp    813ff71 <_ZN12advancealtar18Dispatcher_SetSlot12dispatch_sigEP5CUserR9PacketBuf+0x39>
 813ff6c:	b8 00 00 00 00       	mov    $0x0,%eax
 813ff71:	84 c0                	test   %al,%al
 813ff73:	74 0a                	je     813ff7f <_ZN12advancealtar18Dispatcher_SetSlot12dispatch_sigEP5CUserR9PacketBuf+0x47>
 813ff75:	bb fc 03 00 00       	mov    $0x3fc,%ebx
 813ff7a:	e9 98 00 00 00       	jmp    8140017 <_ZN12advancealtar18Dispatcher_SetSlot12dispatch_sigEP5CUserR9PacketBuf+0xdf>
 813ff7f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 813ff82:	89 04 24             	mov    %eax,(%esp)
 813ff85:	e8 a4 1d 00 00       	call   8141d2e <_ZN15CMDPacketStruct23_ReqAdvanceAltarSetSlotC1Ev>
 813ff8a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 813ff8d:	89 04 24             	mov    %eax,(%esp)
 813ff90:	e8 c7 1d 00 00       	call   8141d5c <_ZN15CMDPacketStruct23_ResAdvanceAltarSetSlotC1Ev>
 813ff95:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 813ff98:	89 44 24 08          	mov    %eax,0x8(%esp)
 813ff9c:	8b 45 10             	mov    0x10(%ebp),%eax
 813ff9f:	89 44 24 04          	mov    %eax,0x4(%esp)
 813ffa3:	8b 45 08             	mov    0x8(%ebp),%eax
 813ffa6:	89 04 24             	mov    %eax,(%esp)
 813ffa9:	e8 72 00 00 00       	call   8140020 <_ZNK12advancealtar18Dispatcher_SetSlot11read_packetER9PacketBufRN15CMDPacketStruct13STBaseRequestE>
 813ffae:	8d 45 d8             	lea    -0x28(%ebp),%eax
 813ffb1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 813ffb5:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 813ffb8:	89 44 24 08          	mov    %eax,0x8(%esp)
 813ffbc:	8b 45 0c             	mov    0xc(%ebp),%eax
 813ffbf:	89 44 24 04          	mov    %eax,0x4(%esp)
 813ffc3:	8b 45 08             	mov    0x8(%ebp),%eax
 813ffc6:	89 04 24             	mov    %eax,(%esp)
 813ffc9:	e8 a0 00 00 00       	call   814006e <_ZNK12advancealtar18Dispatcher_SetSlot14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE>
 813ffce:	89 45 f4             	mov    %eax,-0xc(%ebp)
 813ffd1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 813ffd4:	89 44 24 08          	mov    %eax,0x8(%esp)
 813ffd8:	8b 45 0c             	mov    0xc(%ebp),%eax
 813ffdb:	89 44 24 04          	mov    %eax,0x4(%esp)
 813ffdf:	8b 45 08             	mov    0x8(%ebp),%eax
 813ffe2:	89 04 24             	mov    %eax,(%esp)
 813ffe5:	e8 5e 01 00 00       	call   8140148 <_ZN12advancealtar18Dispatcher_SetSlot11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE>
 813ffea:	bb 00 00 00 00       	mov    $0x0,%ebx
 813ffef:	8d 45 d8             	lea    -0x28(%ebp),%eax
 813fff2:	89 04 24             	mov    %eax,(%esp)
 813fff5:	e8 70 25 00 00       	call   814256a <_ZN15CMDPacketStruct23_ResAdvanceAltarSetSlotD1Ev>
 813fffa:	eb 1b                	jmp    8140017 <_ZN12advancealtar18Dispatcher_SetSlot12dispatch_sigEP5CUserR9PacketBuf+0xdf>
 813fffc:	89 d3                	mov    %edx,%ebx
 813fffe:	89 c6                	mov    %eax,%esi
 8140000:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8140003:	89 04 24             	mov    %eax,(%esp)
 8140006:	e8 5f 25 00 00       	call   814256a <_ZN15CMDPacketStruct23_ResAdvanceAltarSetSlotD1Ev>
 814000b:	89 f0                	mov    %esi,%eax
 814000d:	89 da                	mov    %ebx,%edx
 814000f:	89 04 24             	mov    %eax,(%esp)
 8140012:	e8 39 37 9a 00       	call   8ae3750 <_Unwind_Resume>
 8140017:	89 d8                	mov    %ebx,%eax
 8140019:	83 c4 60             	add    $0x60,%esp
 814001c:	5b                   	pop    %ebx
 814001d:	5e                   	pop    %esi
 814001e:	5d                   	pop    %ebp
 814001f:	c3                   	ret

```

```c
// advancealtar::Dispatcher_SetSlot::dispatch_sig @ 0x813ff38

/* advancealtar::Dispatcher_SetSlot::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
advancealtar::Dispatcher_SetSlot::dispatch_sig
          (Dispatcher_SetSlot *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  _ReqAdvanceAltarSetSlot local_50 [36];
  _ResAdvanceAltarSetSlot local_2c [28];
  undefined4 local_10;
  
  if (param_1 != (CUser *)0x0) {
    iVar2 = CUser::get_state(param_1);
    if (2 < iVar2) {
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
      if (iVar2 != 0) {
        bVar1 = false;
        goto LAB_0813ff71;
      }
    }
  }
  bVar1 = true;
LAB_0813ff71:
  if (bVar1) {
    uVar3 = 0x3fc;
  }
  else {
    CMDPacketStruct::_ReqAdvanceAltarSetSlot::_ReqAdvanceAltarSetSlot(local_50);
    CMDPacketStruct::_ResAdvanceAltarSetSlot::_ResAdvanceAltarSetSlot(local_2c);
                    /* try { // try from 0813ffa9 to 0813ffe9 has its CatchHandler @ 0813fffc */
    read_packet(this,param_2,(STBaseRequest *)local_50);
    local_10 = process_packet(this,param_1,(STBaseRequest *)local_50,(STBaseResponse *)local_2c);
    send_packet(this,param_1,(STBaseResponse *)local_2c);
    uVar3 = 0;
    CMDPacketStruct::_ResAdvanceAltarSetSlot::~_ResAdvanceAltarSetSlot(local_2c);
  }
  return uVar3;
}

```

---

## process_packet

```asm
// === 0814006e advancealtar::Dispatcher_SetSlot::process_packet  [0x0814006e-0x8140147] ===
 814006e:	55                   	push   %ebp
 814006f:	89 e5                	mov    %esp,%ebp
 8140071:	83 ec 28             	sub    $0x28,%esp
 8140074:	8b 45 10             	mov    0x10(%ebp),%eax
 8140077:	89 45 f0             	mov    %eax,-0x10(%ebp)
 814007a:	8b 45 14             	mov    0x14(%ebp),%eax
 814007d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8140080:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8140083:	0f b6 50 14          	movzbl 0x14(%eax),%edx
 8140087:	8b 45 f4             	mov    -0xc(%ebp),%eax
 814008a:	88 50 0c             	mov    %dl,0xc(%eax)
 814008d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8140090:	8b 50 10             	mov    0x10(%eax),%edx
 8140093:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8140096:	89 50 08             	mov    %edx,0x8(%eax)
 8140099:	8b 45 f0             	mov    -0x10(%ebp),%eax
 814009c:	8d 50 18             	lea    0x18(%eax),%edx
 814009f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81400a2:	83 c0 10             	add    $0x10,%eax
 81400a5:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 81400ac:	00 
 81400ad:	89 54 24 04          	mov    %edx,0x4(%esp)
 81400b1:	89 04 24             	mov    %eax,(%esp)
 81400b4:	e8 e7 d7 f3 ff       	call   807d8a0 <memcpy@plt>
 81400b9:	8b 45 10             	mov    0x10(%ebp),%eax
 81400bc:	89 44 24 08          	mov    %eax,0x8(%esp)
 81400c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81400c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81400c7:	8b 45 08             	mov    0x8(%ebp),%eax
 81400ca:	89 04 24             	mov    %eax,(%esp)
 81400cd:	e8 7c ff ff ff       	call   814004e <_ZNK12advancealtar18Dispatcher_SetSlot11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE>
 81400d2:	89 c2                	mov    %eax,%edx
 81400d4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81400d7:	89 50 04             	mov    %edx,0x4(%eax)
 81400da:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81400dd:	8b 40 04             	mov    0x4(%eax),%eax
 81400e0:	85 c0                	test   %eax,%eax
 81400e2:	74 07                	je     81400eb <_ZNK12advancealtar18Dispatcher_SetSlot14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0x7d>
 81400e4:	b8 00 00 00 00       	mov    $0x0,%eax
 81400e9:	eb 5b                	jmp    8140146 <_ZNK12advancealtar18Dispatcher_SetSlot14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0xd8>
 81400eb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81400ee:	8b 40 18             	mov    0x18(%eax),%eax
 81400f1:	83 f8 02             	cmp    $0x2,%eax
 81400f4:	74 1c                	je     8140112 <_ZNK12advancealtar18Dispatcher_SetSlot14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0xa4>
 81400f6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81400f9:	8b 40 18             	mov    0x18(%eax),%eax
 81400fc:	83 f8 01             	cmp    $0x1,%eax
 81400ff:	74 11                	je     8140112 <_ZNK12advancealtar18Dispatcher_SetSlot14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0xa4>
 8140101:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8140104:	c7 40 04 02 00 00 00 	movl   $0x2,0x4(%eax)
 814010b:	b8 00 00 00 00       	mov    $0x0,%eax
 8140110:	eb 34                	jmp    8140146 <_ZNK12advancealtar18Dispatcher_SetSlot14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0xd8>
 8140112:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8140115:	8d 48 18             	lea    0x18(%eax),%ecx
 8140118:	8b 45 f0             	mov    -0x10(%ebp),%eax
 814011b:	0f b6 40 14          	movzbl 0x14(%eax),%eax
 814011f:	0f b6 c0             	movzbl %al,%eax
 8140122:	8b 55 0c             	mov    0xc(%ebp),%edx
 8140125:	81 c2 60 df 08 00    	add    $0x8df60,%edx
 814012b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 814012f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8140133:	89 14 24             	mov    %edx,(%esp)
 8140136:	e8 1d 1a ff ff       	call   8131b58 <_ZN12advancealtar25CharacAdvanceAltarManager7setSlotEbRKN15CMDPacketStruct12_SetSlotDataE>
 814013b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 814013e:	89 42 04             	mov    %eax,0x4(%edx)
 8140141:	b8 00 00 00 00       	mov    $0x0,%eax
 8140146:	c9                   	leave
 8140147:	c3                   	ret

```

```c
// advancealtar::Dispatcher_SetSlot::process_packet @ 0x814006e

/* advancealtar::Dispatcher_SetSlot::process_packet(CUser*, CMDPacketStruct::STBaseRequest&,
   CMDPacketStruct::STBaseResponse&) const */

undefined4 __thiscall
advancealtar::Dispatcher_SetSlot::process_packet
          (Dispatcher_SetSlot *this,CUser *param_1,STBaseRequest *param_2,STBaseResponse *param_3)

{
  undefined4 uVar1;
  
  *(STBaseRequest *)(param_3 + 0xc) = param_2[0x14];
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 0x10);
  memcpy(param_3 + 0x10,param_2 + 0x18,0xc);
  uVar1 = check_error((CUser *)this,(STBaseRequest *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) == 0) {
    if ((*(int *)(param_2 + 0x18) == 2) || (*(int *)(param_2 + 0x18) == 1)) {
      uVar1 = CharacAdvanceAltarManager::setSlot
                        ((CharacAdvanceAltarManager *)(param_1 + 0x8df60),(bool)param_2[0x14],
                         (_SetSlotData *)(param_2 + 0x18));
      *(undefined4 *)(param_3 + 4) = uVar1;
    }
    else {
      *(undefined4 *)(param_3 + 4) = 2;
    }
  }
  return 0;
}

```

---

## read_packet

```asm
// === 08140020 advancealtar::Dispatcher_SetSlot::read_packet  [0x08140020-0x814004d] ===
 8140020:	55                   	push   %ebp
 8140021:	89 e5                	mov    %esp,%ebp
 8140023:	83 ec 28             	sub    $0x28,%esp
 8140026:	8b 45 10             	mov    0x10(%ebp),%eax
 8140029:	89 45 f4             	mov    %eax,-0xc(%ebp)
 814002c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 814002f:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 8140036:	00 
 8140037:	89 44 24 04          	mov    %eax,0x4(%esp)
 814003b:	8b 45 0c             	mov    0xc(%ebp),%eax
 814003e:	89 04 24             	mov    %eax,(%esp)
 8140041:	e8 6c d3 44 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 8140046:	b8 00 00 00 00       	mov    $0x0,%eax
 814004b:	c9                   	leave
 814004c:	c3                   	ret
 814004d:	90                   	nop

```

```c
// advancealtar::Dispatcher_SetSlot::read_packet @ 0x8140020

/* advancealtar::Dispatcher_SetSlot::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&) const
    */

undefined4 __thiscall
advancealtar::Dispatcher_SetSlot::read_packet
          (Dispatcher_SetSlot *this,PacketBuf *param_1,STBaseRequest *param_2)

{
  PacketBuf::get_binary(param_1,(char *)param_2,0x24);
  return 0;
}

```

---

## send_packet

```asm
// === 08140148 advancealtar::Dispatcher_SetSlot::send_packet  [0x08140148-0x81401fd] ===
 8140148:	55                   	push   %ebp
 8140149:	89 e5                	mov    %esp,%ebp
 814014b:	56                   	push   %esi
 814014c:	53                   	push   %ebx
 814014d:	83 ec 20             	sub    $0x20,%esp
 8140150:	8b 45 10             	mov    0x10(%ebp),%eax
 8140153:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8140156:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8140159:	89 04 24             	mov    %eax,(%esp)
 814015c:	e8 eb db 44 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8140161:	c7 44 24 08 3e 02 00 	movl   $0x23e,0x8(%esp)
 8140168:	00 
 8140169:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8140170:	00 
 8140171:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8140174:	89 04 24             	mov    %eax,(%esp)
 8140177:	e8 80 b7 f8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 814017c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8140183:	00 
 8140184:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8140187:	89 04 24             	mov    %eax,(%esp)
 814018a:	e8 91 b7 f8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814018f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8140192:	c7 44 24 08 1c 00 00 	movl   $0x1c,0x8(%esp)
 8140199:	00 
 814019a:	89 44 24 04          	mov    %eax,0x4(%esp)
 814019e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81401a1:	89 04 24             	mov    %eax,(%esp)
 81401a4:	e8 5f dd fd ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 81401a9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81401b0:	00 
 81401b1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81401b4:	89 04 24             	mov    %eax,(%esp)
 81401b7:	e8 9c b7 f8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81401bc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81401bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 81401c3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81401c6:	89 04 24             	mov    %eax,(%esp)
 81401c9:	e8 ec 83 50 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81401ce:	eb 1b                	jmp    81401eb <_ZN12advancealtar18Dispatcher_SetSlot11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE+0xa3>
 81401d0:	89 d3                	mov    %edx,%ebx
 81401d2:	89 c6                	mov    %eax,%esi
 81401d4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81401d7:	89 04 24             	mov    %eax,(%esp)
 81401da:	e8 a1 dc 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81401df:	89 f0                	mov    %esi,%eax
 81401e1:	89 da                	mov    %ebx,%edx
 81401e3:	89 04 24             	mov    %eax,(%esp)
 81401e6:	e8 65 35 9a 00       	call   8ae3750 <_Unwind_Resume>
 81401eb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81401ee:	89 04 24             	mov    %eax,(%esp)
 81401f1:	e8 8a dc 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81401f6:	83 c4 20             	add    $0x20,%esp
 81401f9:	5b                   	pop    %ebx
 81401fa:	5e                   	pop    %esi
 81401fb:	5d                   	pop    %ebp
 81401fc:	c3                   	ret
 81401fd:	90                   	nop

```

```c
// advancealtar::Dispatcher_SetSlot::send_packet @ 0x8140148

/* advancealtar::Dispatcher_SetSlot::send_packet(CUser*, CMDPacketStruct::STBaseResponse&) */

void __thiscall
advancealtar::Dispatcher_SetSlot::send_packet
          (Dispatcher_SetSlot *this,CUser *param_1,STBaseResponse *param_2)

{
  PacketGuard local_1c [12];
  STBaseResponse *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08140177 to 081401cd has its CatchHandler @ 081401d0 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x23e);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_1c,(char *)local_10,0x1c);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

