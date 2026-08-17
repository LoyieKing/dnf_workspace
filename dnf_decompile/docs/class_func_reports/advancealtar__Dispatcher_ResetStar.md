# advancealtar__Dispatcher_ResetStar

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## check_error

```asm
// === 0814108a advancealtar::Dispatcher_ResetStar::check_error  [0x0814108a-0x81410a9] ===
 814108a:	55                   	push   %ebp
 814108b:	89 e5                	mov    %esp,%ebp
 814108d:	83 ec 08             	sub    $0x8,%esp
 8141090:	e8 55 bf fe ff       	call   812cfea <_ZN12advancealtar18isOpenAdvanceAltarEv>
 8141095:	83 f0 01             	xor    $0x1,%eax
 8141098:	84 c0                	test   %al,%al
 814109a:	74 07                	je     81410a3 <_ZNK12advancealtar20Dispatcher_ResetStar11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE+0x19>
 814109c:	b8 01 00 00 00       	mov    $0x1,%eax
 81410a1:	eb 05                	jmp    81410a8 <_ZNK12advancealtar20Dispatcher_ResetStar11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE+0x1e>
 81410a3:	b8 00 00 00 00       	mov    $0x0,%eax
 81410a8:	c9                   	leave
 81410a9:	c3                   	ret

```

```c
// advancealtar::Dispatcher_ResetStar::check_error @ 0x814108a

/* advancealtar::Dispatcher_ResetStar::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const */

bool advancealtar::Dispatcher_ResetStar::check_error(CUser *param_1,STBaseRequest *param_2)

{
  char cVar1;
  
  cVar1 = isOpenAdvanceAltar();
  return cVar1 != '\x01';
}

```

---

## dispatch_sig

```asm
// === 08140f6e advancealtar::Dispatcher_ResetStar::dispatch_sig  [0x08140f6e-0x814105b] ===
 8140f6e:	55                   	push   %ebp
 8140f6f:	89 e5                	mov    %esp,%ebp
 8140f71:	56                   	push   %esi
 8140f72:	53                   	push   %ebx
 8140f73:	83 ec 40             	sub    $0x40,%esp
 8140f76:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8140f7a:	74 1f                	je     8140f9b <_ZN12advancealtar20Dispatcher_ResetStar12dispatch_sigEP5CUserR9PacketBuf+0x2d>
 8140f7c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8140f7f:	89 04 24             	mov    %eax,(%esp)
 8140f82:	e8 05 94 f9 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8140f87:	83 f8 02             	cmp    $0x2,%eax
 8140f8a:	7e 0f                	jle    8140f9b <_ZN12advancealtar20Dispatcher_ResetStar12dispatch_sigEP5CUserR9PacketBuf+0x2d>
 8140f8c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8140f8f:	89 04 24             	mov    %eax,(%esp)
 8140f92:	e8 9b f4 fd ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8140f97:	85 c0                	test   %eax,%eax
 8140f99:	75 07                	jne    8140fa2 <_ZN12advancealtar20Dispatcher_ResetStar12dispatch_sigEP5CUserR9PacketBuf+0x34>
 8140f9b:	b8 01 00 00 00       	mov    $0x1,%eax
 8140fa0:	eb 05                	jmp    8140fa7 <_ZN12advancealtar20Dispatcher_ResetStar12dispatch_sigEP5CUserR9PacketBuf+0x39>
 8140fa2:	b8 00 00 00 00       	mov    $0x0,%eax
 8140fa7:	84 c0                	test   %al,%al
 8140fa9:	74 0a                	je     8140fb5 <_ZN12advancealtar20Dispatcher_ResetStar12dispatch_sigEP5CUserR9PacketBuf+0x47>
 8140fab:	bb c0 05 00 00       	mov    $0x5c0,%ebx
 8140fb0:	e9 9e 00 00 00       	jmp    8141053 <_ZN12advancealtar20Dispatcher_ResetStar12dispatch_sigEP5CUserR9PacketBuf+0xe5>
 8140fb5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8140fb8:	89 04 24             	mov    %eax,(%esp)
 8140fbb:	e8 d2 0f 00 00       	call   8141f92 <_ZN15CMDPacketStruct25_ReqAdvanceAltarResetStarC1Ev>
 8140fc0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8140fc3:	89 04 24             	mov    %eax,(%esp)
 8140fc6:	e8 f5 0f 00 00       	call   8141fc0 <_ZN15CMDPacketStruct25_ResAdvanceAltarResetStarC1Ev>
 8140fcb:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8140fce:	89 44 24 08          	mov    %eax,0x8(%esp)
 8140fd2:	8b 45 10             	mov    0x10(%ebp),%eax
 8140fd5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8140fd9:	8b 45 08             	mov    0x8(%ebp),%eax
 8140fdc:	89 04 24             	mov    %eax,(%esp)
 8140fdf:	e8 78 00 00 00       	call   814105c <_ZNK12advancealtar20Dispatcher_ResetStar11read_packetER9PacketBufRN15CMDPacketStruct13STBaseRequestE>
 8140fe4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8140fe7:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8140fea:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8140fed:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8140ff1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8140ff4:	89 44 24 08          	mov    %eax,0x8(%esp)
 8140ff8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8140ffb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8140fff:	8b 45 08             	mov    0x8(%ebp),%eax
 8141002:	89 04 24             	mov    %eax,(%esp)
 8141005:	e8 a0 00 00 00       	call   81410aa <_ZNK12advancealtar20Dispatcher_ResetStar14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE>
 814100a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 814100d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8141010:	89 44 24 08          	mov    %eax,0x8(%esp)
 8141014:	8b 45 0c             	mov    0xc(%ebp),%eax
 8141017:	89 44 24 04          	mov    %eax,0x4(%esp)
 814101b:	8b 45 08             	mov    0x8(%ebp),%eax
 814101e:	89 04 24             	mov    %eax,(%esp)
 8141021:	e8 d6 01 00 00       	call   81411fc <_ZN12advancealtar20Dispatcher_ResetStar11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE>
 8141026:	bb 00 00 00 00       	mov    $0x0,%ebx
 814102b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814102e:	89 04 24             	mov    %eax,(%esp)
 8141031:	e8 08 17 00 00       	call   814273e <_ZN15CMDPacketStruct25_ResAdvanceAltarResetStarD1Ev>
 8141036:	eb 1b                	jmp    8141053 <_ZN12advancealtar20Dispatcher_ResetStar12dispatch_sigEP5CUserR9PacketBuf+0xe5>
 8141038:	89 d3                	mov    %edx,%ebx
 814103a:	89 c6                	mov    %eax,%esi
 814103c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814103f:	89 04 24             	mov    %eax,(%esp)
 8141042:	e8 f7 16 00 00       	call   814273e <_ZN15CMDPacketStruct25_ResAdvanceAltarResetStarD1Ev>
 8141047:	89 f0                	mov    %esi,%eax
 8141049:	89 da                	mov    %ebx,%edx
 814104b:	89 04 24             	mov    %eax,(%esp)
 814104e:	e8 fd 26 9a 00       	call   8ae3750 <_Unwind_Resume>
 8141053:	89 d8                	mov    %ebx,%eax
 8141055:	83 c4 40             	add    $0x40,%esp
 8141058:	5b                   	pop    %ebx
 8141059:	5e                   	pop    %esi
 814105a:	5d                   	pop    %ebp
 814105b:	c3                   	ret

```

```c
// advancealtar::Dispatcher_ResetStar::dispatch_sig @ 0x8140f6e

/* advancealtar::Dispatcher_ResetStar::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
advancealtar::Dispatcher_ResetStar::dispatch_sig
          (Dispatcher_ResetStar *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  _ResAdvanceAltarResetStar local_30 [8];
  undefined4 local_28;
  _ReqAdvanceAltarResetStar local_24 [16];
  undefined4 local_14;
  undefined4 local_10;
  
  if (param_1 != (CUser *)0x0) {
    iVar2 = CUser::get_state(param_1);
    if (2 < iVar2) {
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
      if (iVar2 != 0) {
        bVar1 = false;
        goto LAB_08140fa7;
      }
    }
  }
  bVar1 = true;
LAB_08140fa7:
  if (bVar1) {
    uVar3 = 0x5c0;
  }
  else {
    CMDPacketStruct::_ReqAdvanceAltarResetStar::_ReqAdvanceAltarResetStar(local_24);
    CMDPacketStruct::_ResAdvanceAltarResetStar::_ResAdvanceAltarResetStar(local_30);
                    /* try { // try from 08140fdf to 08141025 has its CatchHandler @ 08141038 */
    read_packet(this,param_2,(STBaseRequest *)local_24);
    local_28 = local_14;
    local_10 = process_packet(this,param_1,(STBaseRequest *)local_24,(STBaseResponse *)local_30);
    send_packet(this,param_1,(STBaseResponse *)local_30);
    uVar3 = 0;
    CMDPacketStruct::_ResAdvanceAltarResetStar::~_ResAdvanceAltarResetStar(local_30);
  }
  return uVar3;
}

```

---

## process_packet

```asm
// === 081410aa advancealtar::Dispatcher_ResetStar::process_packet  [0x081410aa-0x81411fb] ===
 81410aa:	55                   	push   %ebp
 81410ab:	89 e5                	mov    %esp,%ebp
 81410ad:	56                   	push   %esi
 81410ae:	53                   	push   %ebx
 81410af:	83 ec 30             	sub    $0x30,%esp
 81410b2:	8b 45 10             	mov    0x10(%ebp),%eax
 81410b5:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81410b8:	8b 45 14             	mov    0x14(%ebp),%eax
 81410bb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81410be:	8b 45 10             	mov    0x10(%ebp),%eax
 81410c1:	89 44 24 08          	mov    %eax,0x8(%esp)
 81410c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81410c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81410cc:	8b 45 08             	mov    0x8(%ebp),%eax
 81410cf:	89 04 24             	mov    %eax,(%esp)
 81410d2:	e8 b3 ff ff ff       	call   814108a <_ZNK12advancealtar20Dispatcher_ResetStar11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE>
 81410d7:	89 c2                	mov    %eax,%edx
 81410d9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81410dc:	89 50 04             	mov    %edx,0x4(%eax)
 81410df:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81410e2:	8b 40 04             	mov    0x4(%eax),%eax
 81410e5:	85 c0                	test   %eax,%eax
 81410e7:	74 0a                	je     81410f3 <_ZNK12advancealtar20Dispatcher_ResetStar14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0x49>
 81410e9:	b8 00 00 00 00       	mov    $0x0,%eax
 81410ee:	e9 02 01 00 00       	jmp    81411f5 <_ZNK12advancealtar20Dispatcher_ResetStar14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0x14b>
 81410f3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81410f6:	8b 40 10             	mov    0x10(%eax),%eax
 81410f9:	8b 55 0c             	mov    0xc(%ebp),%edx
 81410fc:	81 c2 60 df 08 00    	add    $0x8df60,%edx
 8141102:	89 44 24 08          	mov    %eax,0x8(%esp)
 8141106:	8b 45 0c             	mov    0xc(%ebp),%eax
 8141109:	89 44 24 04          	mov    %eax,0x4(%esp)
 814110d:	89 14 24             	mov    %edx,(%esp)
 8141110:	e8 9d 22 ff ff       	call   81333b2 <_ZN12advancealtar25CharacAdvanceAltarManager9resetStarEP5CUserN15CMDPacketStruct13ResetStarType1TE>
 8141115:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8141118:	89 42 04             	mov    %eax,0x4(%edx)
 814111b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 814111e:	8b 40 04             	mov    0x4(%eax),%eax
 8141121:	85 c0                	test   %eax,%eax
 8141123:	0f 85 c7 00 00 00    	jne    81411f0 <_ZNK12advancealtar20Dispatcher_ResetStar14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0x146>
 8141129:	8b 45 0c             	mov    0xc(%ebp),%eax
 814112c:	05 60 df 08 00       	add    $0x8df60,%eax
 8141131:	89 04 24             	mov    %eax,(%esp)
 8141134:	e8 8b 37 ff ff       	call   81348c4 <_ZNK12advancealtar25CharacAdvanceAltarManager26getCurrentAdvanceAltarDataEv>
 8141139:	89 45 f4             	mov    %eax,-0xc(%ebp)
 814113c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8141140:	0f 84 aa 00 00 00    	je     81411f0 <_ZNK12advancealtar20Dispatcher_ResetStar14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0x146>
 8141146:	8d 45 eb             	lea    -0x15(%ebp),%eax
 8141149:	89 04 24             	mov    %eax,(%esp)
 814114c:	e8 a7 0e 00 00       	call   8141ff8 <_ZN16NOTIPacketStruct30_NotiAdvanceAltarUpdateRidableC1Ev>
 8141151:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8141154:	89 04 24             	mov    %eax,(%esp)
 8141157:	e8 f0 cb 44 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 814115c:	c7 44 24 08 10 02 00 	movl   $0x210,0x8(%esp)
 8141163:	00 
 8141164:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814116b:	00 
 814116c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 814116f:	89 04 24             	mov    %eax,(%esp)
 8141172:	e8 85 a7 f8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8141177:	8d 45 eb             	lea    -0x15(%ebp),%eax
 814117a:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8141181:	00 
 8141182:	89 44 24 04          	mov    %eax,0x4(%esp)
 8141186:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8141189:	89 04 24             	mov    %eax,(%esp)
 814118c:	e8 77 cd fd ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 8141191:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8141194:	89 44 24 04          	mov    %eax,0x4(%esp)
 8141198:	8d 45 dc             	lea    -0x24(%ebp),%eax
 814119b:	89 04 24             	mov    %eax,(%esp)
 814119e:	e8 de 05 00 00       	call   8141781 <_ZN12advancealtar22putRidableInfoToPacketER11PacketGuardRKNS_16AdvanceAltarDataE>
 81411a3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81411aa:	00 
 81411ab:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81411ae:	89 04 24             	mov    %eax,(%esp)
 81411b1:	e8 a2 a7 f8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81411b6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81411b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81411bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81411c0:	89 04 24             	mov    %eax,(%esp)
 81411c3:	e8 f2 73 50 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81411c8:	eb 1b                	jmp    81411e5 <_ZNK12advancealtar20Dispatcher_ResetStar14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0x13b>
 81411ca:	89 d3                	mov    %edx,%ebx
 81411cc:	89 c6                	mov    %eax,%esi
 81411ce:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81411d1:	89 04 24             	mov    %eax,(%esp)
 81411d4:	e8 a7 cc 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81411d9:	89 f0                	mov    %esi,%eax
 81411db:	89 da                	mov    %ebx,%edx
 81411dd:	89 04 24             	mov    %eax,(%esp)
 81411e0:	e8 6b 25 9a 00       	call   8ae3750 <_Unwind_Resume>
 81411e5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81411e8:	89 04 24             	mov    %eax,(%esp)
 81411eb:	e8 90 cc 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81411f0:	b8 00 00 00 00       	mov    $0x0,%eax
 81411f5:	83 c4 30             	add    $0x30,%esp
 81411f8:	5b                   	pop    %ebx
 81411f9:	5e                   	pop    %esi
 81411fa:	5d                   	pop    %ebp
 81411fb:	c3                   	ret

```

```c
// advancealtar::Dispatcher_ResetStar::process_packet @ 0x81410aa

/* advancealtar::Dispatcher_ResetStar::process_packet(CUser*, CMDPacketStruct::STBaseRequest&,
   CMDPacketStruct::STBaseResponse&) const */

undefined4 __thiscall
advancealtar::Dispatcher_ResetStar::process_packet
          (Dispatcher_ResetStar *this,CUser *param_1,STBaseRequest *param_2,STBaseResponse *param_3)

{
  undefined4 uVar1;
  PacketGuard local_28 [15];
  _NotiAdvanceAltarUpdateRidable local_19;
  STBaseRequest *local_18;
  STBaseResponse *local_14;
  AdvanceAltarData *local_10;
  
  local_18 = param_2;
  local_14 = param_3;
  uVar1 = check_error((CUser *)this,(STBaseRequest *)param_1);
  *(undefined4 *)(local_14 + 4) = uVar1;
  if (*(int *)(local_14 + 4) == 0) {
    uVar1 = CharacAdvanceAltarManager::resetStar
                      ((CharacAdvanceAltarManager *)(param_1 + 0x8df60),param_1,
                       *(undefined4 *)(local_18 + 0x10));
    *(undefined4 *)(local_14 + 4) = uVar1;
    if ((*(int *)(local_14 + 4) == 0) &&
       (local_10 = (AdvanceAltarData *)
                   CharacAdvanceAltarManager::getCurrentAdvanceAltarData
                             ((CharacAdvanceAltarManager *)(param_1 + 0x8df60)),
       local_10 != (AdvanceAltarData *)0x0)) {
      NOTIPacketStruct::_NotiAdvanceAltarUpdateRidable::_NotiAdvanceAltarUpdateRidable(&local_19);
      PacketGuard::PacketGuard(local_28);
                    /* try { // try from 08141172 to 081411c7 has its CatchHandler @ 081411ca */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x210);
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_28,(char *)&local_19,1);
      putRidableInfoToPacket(local_28,local_10);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
      CUser::Send(param_1,local_28);
      PacketGuard::~PacketGuard(local_28);
    }
  }
  return 0;
}

```

---

## read_packet

```asm
// === 0814105c advancealtar::Dispatcher_ResetStar::read_packet  [0x0814105c-0x8141089] ===
 814105c:	55                   	push   %ebp
 814105d:	89 e5                	mov    %esp,%ebp
 814105f:	83 ec 28             	sub    $0x28,%esp
 8141062:	8b 45 10             	mov    0x10(%ebp),%eax
 8141065:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8141068:	8b 45 f4             	mov    -0xc(%ebp),%eax
 814106b:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8141072:	00 
 8141073:	89 44 24 04          	mov    %eax,0x4(%esp)
 8141077:	8b 45 0c             	mov    0xc(%ebp),%eax
 814107a:	89 04 24             	mov    %eax,(%esp)
 814107d:	e8 30 c3 44 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 8141082:	b8 00 00 00 00       	mov    $0x0,%eax
 8141087:	c9                   	leave
 8141088:	c3                   	ret
 8141089:	90                   	nop

```

```c
// advancealtar::Dispatcher_ResetStar::read_packet @ 0x814105c

/* advancealtar::Dispatcher_ResetStar::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&)
   const */

undefined4 __thiscall
advancealtar::Dispatcher_ResetStar::read_packet
          (Dispatcher_ResetStar *this,PacketBuf *param_1,STBaseRequest *param_2)

{
  PacketBuf::get_binary(param_1,(char *)param_2,0x14);
  return 0;
}

```

---

## send_packet

```asm
// === 081411fc advancealtar::Dispatcher_ResetStar::send_packet  [0x081411fc-0x81412b1] ===
 81411fc:	55                   	push   %ebp
 81411fd:	89 e5                	mov    %esp,%ebp
 81411ff:	56                   	push   %esi
 8141200:	53                   	push   %ebx
 8141201:	83 ec 20             	sub    $0x20,%esp
 8141204:	8b 45 10             	mov    0x10(%ebp),%eax
 8141207:	89 45 f4             	mov    %eax,-0xc(%ebp)
 814120a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 814120d:	89 04 24             	mov    %eax,(%esp)
 8141210:	e8 37 cb 44 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8141215:	c7 44 24 08 44 02 00 	movl   $0x244,0x8(%esp)
 814121c:	00 
 814121d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8141224:	00 
 8141225:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8141228:	89 04 24             	mov    %eax,(%esp)
 814122b:	e8 cc a6 f8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8141230:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8141237:	00 
 8141238:	8d 45 e8             	lea    -0x18(%ebp),%eax
 814123b:	89 04 24             	mov    %eax,(%esp)
 814123e:	e8 dd a6 f8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8141243:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8141246:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 814124d:	00 
 814124e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8141252:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8141255:	89 04 24             	mov    %eax,(%esp)
 8141258:	e8 ab cc fd ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 814125d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8141264:	00 
 8141265:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8141268:	89 04 24             	mov    %eax,(%esp)
 814126b:	e8 e8 a6 f8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8141270:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8141273:	89 44 24 04          	mov    %eax,0x4(%esp)
 8141277:	8b 45 0c             	mov    0xc(%ebp),%eax
 814127a:	89 04 24             	mov    %eax,(%esp)
 814127d:	e8 38 73 50 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8141282:	eb 1b                	jmp    814129f <_ZN12advancealtar20Dispatcher_ResetStar11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE+0xa3>
 8141284:	89 d3                	mov    %edx,%ebx
 8141286:	89 c6                	mov    %eax,%esi
 8141288:	8d 45 e8             	lea    -0x18(%ebp),%eax
 814128b:	89 04 24             	mov    %eax,(%esp)
 814128e:	e8 ed cb 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8141293:	89 f0                	mov    %esi,%eax
 8141295:	89 da                	mov    %ebx,%edx
 8141297:	89 04 24             	mov    %eax,(%esp)
 814129a:	e8 b1 24 9a 00       	call   8ae3750 <_Unwind_Resume>
 814129f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81412a2:	89 04 24             	mov    %eax,(%esp)
 81412a5:	e8 d6 cb 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81412aa:	83 c4 20             	add    $0x20,%esp
 81412ad:	5b                   	pop    %ebx
 81412ae:	5e                   	pop    %esi
 81412af:	5d                   	pop    %ebp
 81412b0:	c3                   	ret
 81412b1:	90                   	nop

```

```c
// advancealtar::Dispatcher_ResetStar::send_packet @ 0x81411fc

/* advancealtar::Dispatcher_ResetStar::send_packet(CUser*, CMDPacketStruct::STBaseResponse&) */

void __thiscall
advancealtar::Dispatcher_ResetStar::send_packet
          (Dispatcher_ResetStar *this,CUser *param_1,STBaseResponse *param_2)

{
  PacketGuard local_1c [12];
  STBaseResponse *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0814122b to 08141281 has its CatchHandler @ 08141284 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x244);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_1c,(char *)local_10,0xc);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

