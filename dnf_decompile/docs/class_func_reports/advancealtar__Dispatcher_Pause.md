# advancealtar__Dispatcher_Pause

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## check_error

```asm
// === 08140b32 advancealtar::Dispatcher_Pause::check_error  [0x08140b32-0x8140b3b] ===
 8140b32:	55                   	push   %ebp
 8140b33:	89 e5                	mov    %esp,%ebp
 8140b35:	b8 00 00 00 00       	mov    $0x0,%eax
 8140b3a:	5d                   	pop    %ebp
 8140b3b:	c3                   	ret

```

```c
// advancealtar::Dispatcher_Pause::check_error @ 0x8140b32

/* advancealtar::Dispatcher_Pause::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const */

undefined4 advancealtar::Dispatcher_Pause::check_error(CUser *param_1,STBaseRequest *param_2)

{
  return 0;
}

```

---

## dispatch_sig

```asm
// === 08140a1c advancealtar::Dispatcher_Pause::dispatch_sig  [0x08140a1c-0x8140b03] ===
 8140a1c:	55                   	push   %ebp
 8140a1d:	89 e5                	mov    %esp,%ebp
 8140a1f:	56                   	push   %esi
 8140a20:	53                   	push   %ebx
 8140a21:	83 ec 30             	sub    $0x30,%esp
 8140a24:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8140a28:	74 1f                	je     8140a49 <_ZN12advancealtar16Dispatcher_Pause12dispatch_sigEP5CUserR9PacketBuf+0x2d>
 8140a2a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8140a2d:	89 04 24             	mov    %eax,(%esp)
 8140a30:	e8 57 99 f9 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8140a35:	83 f8 02             	cmp    $0x2,%eax
 8140a38:	7e 0f                	jle    8140a49 <_ZN12advancealtar16Dispatcher_Pause12dispatch_sigEP5CUserR9PacketBuf+0x2d>
 8140a3a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8140a3d:	89 04 24             	mov    %eax,(%esp)
 8140a40:	e8 ed f9 fd ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8140a45:	85 c0                	test   %eax,%eax
 8140a47:	75 07                	jne    8140a50 <_ZN12advancealtar16Dispatcher_Pause12dispatch_sigEP5CUserR9PacketBuf+0x34>
 8140a49:	b8 01 00 00 00       	mov    $0x1,%eax
 8140a4e:	eb 05                	jmp    8140a55 <_ZN12advancealtar16Dispatcher_Pause12dispatch_sigEP5CUserR9PacketBuf+0x39>
 8140a50:	b8 00 00 00 00       	mov    $0x0,%eax
 8140a55:	84 c0                	test   %al,%al
 8140a57:	74 0a                	je     8140a63 <_ZN12advancealtar16Dispatcher_Pause12dispatch_sigEP5CUserR9PacketBuf+0x47>
 8140a59:	bb 2c 05 00 00       	mov    $0x52c,%ebx
 8140a5e:	e9 98 00 00 00       	jmp    8140afb <_ZN12advancealtar16Dispatcher_Pause12dispatch_sigEP5CUserR9PacketBuf+0xdf>
 8140a63:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 8140a66:	89 04 24             	mov    %eax,(%esp)
 8140a69:	e8 58 14 00 00       	call   8141ec6 <_ZN15CMDPacketStruct21_ReqAdvanceAltarPauseC1Ev>
 8140a6e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8140a71:	89 04 24             	mov    %eax,(%esp)
 8140a74:	e8 7b 14 00 00       	call   8141ef4 <_ZN15CMDPacketStruct21_ResAdvanceAltarPauseC1Ev>
 8140a79:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 8140a7c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8140a80:	8b 45 10             	mov    0x10(%ebp),%eax
 8140a83:	89 44 24 04          	mov    %eax,0x4(%esp)
 8140a87:	8b 45 08             	mov    0x8(%ebp),%eax
 8140a8a:	89 04 24             	mov    %eax,(%esp)
 8140a8d:	e8 72 00 00 00       	call   8140b04 <_ZNK12advancealtar16Dispatcher_Pause11read_packetER9PacketBufRN15CMDPacketStruct13STBaseRequestE>
 8140a92:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8140a95:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8140a99:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 8140a9c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8140aa0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8140aa3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8140aa7:	8b 45 08             	mov    0x8(%ebp),%eax
 8140aaa:	89 04 24             	mov    %eax,(%esp)
 8140aad:	e8 8a 00 00 00       	call   8140b3c <_ZNK12advancealtar16Dispatcher_Pause14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE>
 8140ab2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8140ab5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8140ab8:	89 44 24 08          	mov    %eax,0x8(%esp)
 8140abc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8140abf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8140ac3:	8b 45 08             	mov    0x8(%ebp),%eax
 8140ac6:	89 04 24             	mov    %eax,(%esp)
 8140ac9:	e8 e0 00 00 00       	call   8140bae <_ZN12advancealtar16Dispatcher_Pause11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE>
 8140ace:	bb 00 00 00 00       	mov    $0x0,%ebx
 8140ad3:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8140ad6:	89 04 24             	mov    %eax,(%esp)
 8140ad9:	e8 c4 1b 00 00       	call   81426a2 <_ZN15CMDPacketStruct21_ResAdvanceAltarPauseD1Ev>
 8140ade:	eb 1b                	jmp    8140afb <_ZN12advancealtar16Dispatcher_Pause12dispatch_sigEP5CUserR9PacketBuf+0xdf>
 8140ae0:	89 d3                	mov    %edx,%ebx
 8140ae2:	89 c6                	mov    %eax,%esi
 8140ae4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8140ae7:	89 04 24             	mov    %eax,(%esp)
 8140aea:	e8 b3 1b 00 00       	call   81426a2 <_ZN15CMDPacketStruct21_ResAdvanceAltarPauseD1Ev>
 8140aef:	89 f0                	mov    %esi,%eax
 8140af1:	89 da                	mov    %ebx,%edx
 8140af3:	89 04 24             	mov    %eax,(%esp)
 8140af6:	e8 55 2c 9a 00       	call   8ae3750 <_Unwind_Resume>
 8140afb:	89 d8                	mov    %ebx,%eax
 8140afd:	83 c4 30             	add    $0x30,%esp
 8140b00:	5b                   	pop    %ebx
 8140b01:	5e                   	pop    %esi
 8140b02:	5d                   	pop    %ebp
 8140b03:	c3                   	ret

```

```c
// advancealtar::Dispatcher_Pause::dispatch_sig @ 0x8140a1c

/* advancealtar::Dispatcher_Pause::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
advancealtar::Dispatcher_Pause::dispatch_sig
          (Dispatcher_Pause *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  _ResAdvanceAltarPause local_2c [14];
  _ReqAdvanceAltarPause local_1e [14];
  undefined4 local_10;
  
  if (param_1 != (CUser *)0x0) {
    iVar2 = CUser::get_state(param_1);
    if (2 < iVar2) {
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
      if (iVar2 != 0) {
        bVar1 = false;
        goto LAB_08140a55;
      }
    }
  }
  bVar1 = true;
LAB_08140a55:
  if (bVar1) {
    uVar3 = 0x52c;
  }
  else {
    CMDPacketStruct::_ReqAdvanceAltarPause::_ReqAdvanceAltarPause(local_1e);
    CMDPacketStruct::_ResAdvanceAltarPause::_ResAdvanceAltarPause(local_2c);
                    /* try { // try from 08140a8d to 08140acd has its CatchHandler @ 08140ae0 */
    read_packet(this,param_2,(STBaseRequest *)local_1e);
    local_10 = process_packet(this,param_1,(STBaseRequest *)local_1e,(STBaseResponse *)local_2c);
    send_packet(this,param_1,(STBaseResponse *)local_2c);
    uVar3 = 0;
    CMDPacketStruct::_ResAdvanceAltarPause::~_ResAdvanceAltarPause(local_2c);
  }
  return uVar3;
}

```

---

## process_packet

```asm
// === 08140b3c advancealtar::Dispatcher_Pause::process_packet  [0x08140b3c-0x8140bad] ===
 8140b3c:	55                   	push   %ebp
 8140b3d:	89 e5                	mov    %esp,%ebp
 8140b3f:	83 ec 28             	sub    $0x28,%esp
 8140b42:	8b 45 10             	mov    0x10(%ebp),%eax
 8140b45:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8140b48:	8b 45 14             	mov    0x14(%ebp),%eax
 8140b4b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8140b4e:	8b 45 10             	mov    0x10(%ebp),%eax
 8140b51:	89 44 24 08          	mov    %eax,0x8(%esp)
 8140b55:	8b 45 0c             	mov    0xc(%ebp),%eax
 8140b58:	89 44 24 04          	mov    %eax,0x4(%esp)
 8140b5c:	8b 45 08             	mov    0x8(%ebp),%eax
 8140b5f:	89 04 24             	mov    %eax,(%esp)
 8140b62:	e8 cb ff ff ff       	call   8140b32 <_ZNK12advancealtar16Dispatcher_Pause11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE>
 8140b67:	89 c2                	mov    %eax,%edx
 8140b69:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8140b6c:	89 50 04             	mov    %edx,0x4(%eax)
 8140b6f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8140b72:	8b 40 04             	mov    0x4(%eax),%eax
 8140b75:	85 c0                	test   %eax,%eax
 8140b77:	74 07                	je     8140b80 <_ZNK12advancealtar16Dispatcher_Pause14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0x44>
 8140b79:	b8 00 00 00 00       	mov    $0x0,%eax
 8140b7e:	eb 2b                	jmp    8140bab <_ZNK12advancealtar16Dispatcher_Pause14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0x6f>
 8140b80:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8140b83:	0f b6 50 0d          	movzbl 0xd(%eax),%edx
 8140b87:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8140b8a:	88 50 08             	mov    %dl,0x8(%eax)
 8140b8d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8140b90:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 8140b94:	0f b6 c0             	movzbl %al,%eax
 8140b97:	89 44 24 04          	mov    %eax,0x4(%esp)
 8140b9b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8140b9e:	89 04 24             	mov    %eax,(%esp)
 8140ba1:	e8 b6 04 ff ff       	call   813105c <_ZN12advancealtar7Manager5pauseEP5CUserb>
 8140ba6:	b8 00 00 00 00       	mov    $0x0,%eax
 8140bab:	c9                   	leave
 8140bac:	c3                   	ret
 8140bad:	90                   	nop

```

```c
// advancealtar::Dispatcher_Pause::process_packet @ 0x8140b3c

/* advancealtar::Dispatcher_Pause::process_packet(CUser*, CMDPacketStruct::STBaseRequest&,
   CMDPacketStruct::STBaseResponse&) const */

undefined4 __thiscall
advancealtar::Dispatcher_Pause::process_packet
          (Dispatcher_Pause *this,CUser *param_1,STBaseRequest *param_2,STBaseResponse *param_3)

{
  undefined4 uVar1;
  
  uVar1 = check_error((CUser *)this,(STBaseRequest *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) == 0) {
    *(STBaseRequest *)(param_3 + 8) = param_2[0xd];
    Manager::pause(param_1,(bool)param_2[0xd]);
  }
  return 0;
}

```

---

## read_packet

```asm
// === 08140b04 advancealtar::Dispatcher_Pause::read_packet  [0x08140b04-0x8140b31] ===
 8140b04:	55                   	push   %ebp
 8140b05:	89 e5                	mov    %esp,%ebp
 8140b07:	83 ec 28             	sub    $0x28,%esp
 8140b0a:	8b 45 10             	mov    0x10(%ebp),%eax
 8140b0d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8140b10:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8140b13:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 8140b1a:	00 
 8140b1b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8140b1f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8140b22:	89 04 24             	mov    %eax,(%esp)
 8140b25:	e8 88 c8 44 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 8140b2a:	b8 00 00 00 00       	mov    $0x0,%eax
 8140b2f:	c9                   	leave
 8140b30:	c3                   	ret
 8140b31:	90                   	nop

```

```c
// advancealtar::Dispatcher_Pause::read_packet @ 0x8140b04

/* advancealtar::Dispatcher_Pause::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&) const */

undefined4 __thiscall
advancealtar::Dispatcher_Pause::read_packet
          (Dispatcher_Pause *this,PacketBuf *param_1,STBaseRequest *param_2)

{
  PacketBuf::get_binary(param_1,(char *)param_2,0xe);
  return 0;
}

```

---

## send_packet

```asm
// === 08140bae advancealtar::Dispatcher_Pause::send_packet  [0x08140bae-0x8140c63] ===
 8140bae:	55                   	push   %ebp
 8140baf:	89 e5                	mov    %esp,%ebp
 8140bb1:	56                   	push   %esi
 8140bb2:	53                   	push   %ebx
 8140bb3:	83 ec 20             	sub    $0x20,%esp
 8140bb6:	8b 45 10             	mov    0x10(%ebp),%eax
 8140bb9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8140bbc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8140bbf:	89 04 24             	mov    %eax,(%esp)
 8140bc2:	e8 85 d1 44 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8140bc7:	c7 44 24 08 42 02 00 	movl   $0x242,0x8(%esp)
 8140bce:	00 
 8140bcf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8140bd6:	00 
 8140bd7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8140bda:	89 04 24             	mov    %eax,(%esp)
 8140bdd:	e8 1a ad f8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8140be2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8140be9:	00 
 8140bea:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8140bed:	89 04 24             	mov    %eax,(%esp)
 8140bf0:	e8 2b ad f8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8140bf5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8140bf8:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8140bff:	00 
 8140c00:	89 44 24 04          	mov    %eax,0x4(%esp)
 8140c04:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8140c07:	89 04 24             	mov    %eax,(%esp)
 8140c0a:	e8 f9 d2 fd ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 8140c0f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8140c16:	00 
 8140c17:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8140c1a:	89 04 24             	mov    %eax,(%esp)
 8140c1d:	e8 36 ad f8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8140c22:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8140c25:	89 44 24 04          	mov    %eax,0x4(%esp)
 8140c29:	8b 45 0c             	mov    0xc(%ebp),%eax
 8140c2c:	89 04 24             	mov    %eax,(%esp)
 8140c2f:	e8 86 79 50 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8140c34:	eb 1b                	jmp    8140c51 <_ZN12advancealtar16Dispatcher_Pause11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE+0xa3>
 8140c36:	89 d3                	mov    %edx,%ebx
 8140c38:	89 c6                	mov    %eax,%esi
 8140c3a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8140c3d:	89 04 24             	mov    %eax,(%esp)
 8140c40:	e8 3b d2 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8140c45:	89 f0                	mov    %esi,%eax
 8140c47:	89 da                	mov    %ebx,%edx
 8140c49:	89 04 24             	mov    %eax,(%esp)
 8140c4c:	e8 ff 2a 9a 00       	call   8ae3750 <_Unwind_Resume>
 8140c51:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8140c54:	89 04 24             	mov    %eax,(%esp)
 8140c57:	e8 24 d2 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8140c5c:	83 c4 20             	add    $0x20,%esp
 8140c5f:	5b                   	pop    %ebx
 8140c60:	5e                   	pop    %esi
 8140c61:	5d                   	pop    %ebp
 8140c62:	c3                   	ret
 8140c63:	90                   	nop

```

```c
// advancealtar::Dispatcher_Pause::send_packet @ 0x8140bae

/* advancealtar::Dispatcher_Pause::send_packet(CUser*, CMDPacketStruct::STBaseResponse&) */

void __thiscall
advancealtar::Dispatcher_Pause::send_packet
          (Dispatcher_Pause *this,CUser *param_1,STBaseResponse *param_2)

{
  PacketGuard local_1c [12];
  STBaseResponse *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08140bdd to 08140c33 has its CatchHandler @ 08140c36 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x242);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_1c,(char *)local_10,0xc);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

