# advancealtar__Dispatcher_GetAchievementReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## check_error

```asm
// === 08140d80 advancealtar::Dispatcher_GetAchievementReward::check_error  [0x08140d80-0x8140d9f] ===
 8140d80:	55                   	push   %ebp
 8140d81:	89 e5                	mov    %esp,%ebp
 8140d83:	83 ec 08             	sub    $0x8,%esp
 8140d86:	e8 5f c2 fe ff       	call   812cfea <_ZN12advancealtar18isOpenAdvanceAltarEv>
 8140d8b:	83 f0 01             	xor    $0x1,%eax
 8140d8e:	84 c0                	test   %al,%al
 8140d90:	74 07                	je     8140d99 <_ZNK12advancealtar31Dispatcher_GetAchievementReward11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE+0x19>
 8140d92:	b8 01 00 00 00       	mov    $0x1,%eax
 8140d97:	eb 05                	jmp    8140d9e <_ZNK12advancealtar31Dispatcher_GetAchievementReward11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE+0x1e>
 8140d99:	b8 00 00 00 00       	mov    $0x0,%eax
 8140d9e:	c9                   	leave
 8140d9f:	c3                   	ret

```

```c
// advancealtar::Dispatcher_GetAchievementReward::check_error @ 0x8140d80

/* advancealtar::Dispatcher_GetAchievementReward::check_error(CUser*,
   CMDPacketStruct::STBaseRequest&) const */

bool advancealtar::Dispatcher_GetAchievementReward::check_error
               (CUser *param_1,STBaseRequest *param_2)

{
  char cVar1;
  
  cVar1 = isOpenAdvanceAltar();
  return cVar1 != '\x01';
}

```

---

## dispatch_sig

```asm
// === 08140c64 advancealtar::Dispatcher_GetAchievementReward::dispatch_sig  [0x08140c64-0x8140d51] ===
 8140c64:	55                   	push   %ebp
 8140c65:	89 e5                	mov    %esp,%ebp
 8140c67:	56                   	push   %esi
 8140c68:	53                   	push   %ebx
 8140c69:	83 ec 40             	sub    $0x40,%esp
 8140c6c:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8140c70:	74 1f                	je     8140c91 <_ZN12advancealtar31Dispatcher_GetAchievementReward12dispatch_sigEP5CUserR9PacketBuf+0x2d>
 8140c72:	8b 45 0c             	mov    0xc(%ebp),%eax
 8140c75:	89 04 24             	mov    %eax,(%esp)
 8140c78:	e8 0f 97 f9 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8140c7d:	83 f8 02             	cmp    $0x2,%eax
 8140c80:	7e 0f                	jle    8140c91 <_ZN12advancealtar31Dispatcher_GetAchievementReward12dispatch_sigEP5CUserR9PacketBuf+0x2d>
 8140c82:	8b 45 0c             	mov    0xc(%ebp),%eax
 8140c85:	89 04 24             	mov    %eax,(%esp)
 8140c88:	e8 a5 f7 fd ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8140c8d:	85 c0                	test   %eax,%eax
 8140c8f:	75 07                	jne    8140c98 <_ZN12advancealtar31Dispatcher_GetAchievementReward12dispatch_sigEP5CUserR9PacketBuf+0x34>
 8140c91:	b8 01 00 00 00       	mov    $0x1,%eax
 8140c96:	eb 05                	jmp    8140c9d <_ZN12advancealtar31Dispatcher_GetAchievementReward12dispatch_sigEP5CUserR9PacketBuf+0x39>
 8140c98:	b8 00 00 00 00       	mov    $0x0,%eax
 8140c9d:	84 c0                	test   %al,%al
 8140c9f:	74 0a                	je     8140cab <_ZN12advancealtar31Dispatcher_GetAchievementReward12dispatch_sigEP5CUserR9PacketBuf+0x47>
 8140ca1:	bb 71 05 00 00       	mov    $0x571,%ebx
 8140ca6:	e9 9e 00 00 00       	jmp    8140d49 <_ZN12advancealtar31Dispatcher_GetAchievementReward12dispatch_sigEP5CUserR9PacketBuf+0xe5>
 8140cab:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8140cae:	89 04 24             	mov    %eax,(%esp)
 8140cb1:	e8 76 12 00 00       	call   8141f2c <_ZN15CMDPacketStruct36_ReqAdvanceAltarGetAchievementRewardC1Ev>
 8140cb6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8140cb9:	89 04 24             	mov    %eax,(%esp)
 8140cbc:	e8 99 12 00 00       	call   8141f5a <_ZN15CMDPacketStruct36_ResAdvanceAltarGetAchievementRewardC1Ev>
 8140cc1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8140cc4:	89 44 24 08          	mov    %eax,0x8(%esp)
 8140cc8:	8b 45 10             	mov    0x10(%ebp),%eax
 8140ccb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8140ccf:	8b 45 08             	mov    0x8(%ebp),%eax
 8140cd2:	89 04 24             	mov    %eax,(%esp)
 8140cd5:	e8 78 00 00 00       	call   8140d52 <_ZNK12advancealtar31Dispatcher_GetAchievementReward11read_packetER9PacketBufRN15CMDPacketStruct13STBaseRequestE>
 8140cda:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8140cdd:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8140ce0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8140ce3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8140ce7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8140cea:	89 44 24 08          	mov    %eax,0x8(%esp)
 8140cee:	8b 45 0c             	mov    0xc(%ebp),%eax
 8140cf1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8140cf5:	8b 45 08             	mov    0x8(%ebp),%eax
 8140cf8:	89 04 24             	mov    %eax,(%esp)
 8140cfb:	e8 a0 00 00 00       	call   8140da0 <_ZNK12advancealtar31Dispatcher_GetAchievementReward14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE>
 8140d00:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8140d03:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8140d06:	89 44 24 08          	mov    %eax,0x8(%esp)
 8140d0a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8140d0d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8140d11:	8b 45 08             	mov    0x8(%ebp),%eax
 8140d14:	89 04 24             	mov    %eax,(%esp)
 8140d17:	e8 8e 00 00 00       	call   8140daa <_ZN12advancealtar31Dispatcher_GetAchievementReward11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE>
 8140d1c:	bb 00 00 00 00       	mov    $0x0,%ebx
 8140d21:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8140d24:	89 04 24             	mov    %eax,(%esp)
 8140d27:	e8 c4 19 00 00       	call   81426f0 <_ZN15CMDPacketStruct36_ResAdvanceAltarGetAchievementRewardD1Ev>
 8140d2c:	eb 1b                	jmp    8140d49 <_ZN12advancealtar31Dispatcher_GetAchievementReward12dispatch_sigEP5CUserR9PacketBuf+0xe5>
 8140d2e:	89 d3                	mov    %edx,%ebx
 8140d30:	89 c6                	mov    %eax,%esi
 8140d32:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8140d35:	89 04 24             	mov    %eax,(%esp)
 8140d38:	e8 b3 19 00 00       	call   81426f0 <_ZN15CMDPacketStruct36_ResAdvanceAltarGetAchievementRewardD1Ev>
 8140d3d:	89 f0                	mov    %esi,%eax
 8140d3f:	89 da                	mov    %ebx,%edx
 8140d41:	89 04 24             	mov    %eax,(%esp)
 8140d44:	e8 07 2a 9a 00       	call   8ae3750 <_Unwind_Resume>
 8140d49:	89 d8                	mov    %ebx,%eax
 8140d4b:	83 c4 40             	add    $0x40,%esp
 8140d4e:	5b                   	pop    %ebx
 8140d4f:	5e                   	pop    %esi
 8140d50:	5d                   	pop    %ebp
 8140d51:	c3                   	ret

```

```c
// advancealtar::Dispatcher_GetAchievementReward::dispatch_sig @ 0x8140c64

/* advancealtar::Dispatcher_GetAchievementReward::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
advancealtar::Dispatcher_GetAchievementReward::dispatch_sig
          (Dispatcher_GetAchievementReward *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  _ResAdvanceAltarGetAchievementReward local_30 [8];
  undefined4 local_28;
  _ReqAdvanceAltarGetAchievementReward local_24 [16];
  undefined4 local_14;
  undefined4 local_10;
  
  if (param_1 != (CUser *)0x0) {
    iVar2 = CUser::get_state(param_1);
    if (2 < iVar2) {
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
      if (iVar2 != 0) {
        bVar1 = false;
        goto LAB_08140c9d;
      }
    }
  }
  bVar1 = true;
LAB_08140c9d:
  if (bVar1) {
    uVar3 = 0x571;
  }
  else {
    CMDPacketStruct::_ReqAdvanceAltarGetAchievementReward::_ReqAdvanceAltarGetAchievementReward
              (local_24);
    CMDPacketStruct::_ResAdvanceAltarGetAchievementReward::_ResAdvanceAltarGetAchievementReward
              (local_30);
                    /* try { // try from 08140cd5 to 08140d1b has its CatchHandler @ 08140d2e */
    read_packet(this,param_2,(STBaseRequest *)local_24);
    local_28 = local_14;
    local_10 = process_packet((CUser *)this,(STBaseRequest *)param_1,(STBaseResponse *)local_24);
    send_packet(this,param_1,(STBaseResponse *)local_30);
    uVar3 = 0;
    CMDPacketStruct::_ResAdvanceAltarGetAchievementReward::~_ResAdvanceAltarGetAchievementReward
              (local_30);
  }
  return uVar3;
}

```

---

## process_packet

```asm
// === 08140da0 advancealtar::Dispatcher_GetAchievementReward::process_packet  [0x08140da0-0x8140da9] ===
 8140da0:	55                   	push   %ebp
 8140da1:	89 e5                	mov    %esp,%ebp
 8140da3:	b8 00 00 00 00       	mov    $0x0,%eax
 8140da8:	5d                   	pop    %ebp
 8140da9:	c3                   	ret

```

```c
// advancealtar::Dispatcher_GetAchievementReward::process_packet @ 0x8140da0

/* advancealtar::Dispatcher_GetAchievementReward::process_packet(CUser*,
   CMDPacketStruct::STBaseRequest&, CMDPacketStruct::STBaseResponse&) const */

undefined4
advancealtar::Dispatcher_GetAchievementReward::process_packet
          (CUser *param_1,STBaseRequest *param_2,STBaseResponse *param_3)

{
  return 0;
}

```

---

## read_packet

```asm
// === 08140d52 advancealtar::Dispatcher_GetAchievementReward::read_packet  [0x08140d52-0x8140d7f] ===
 8140d52:	55                   	push   %ebp
 8140d53:	89 e5                	mov    %esp,%ebp
 8140d55:	83 ec 28             	sub    $0x28,%esp
 8140d58:	8b 45 10             	mov    0x10(%ebp),%eax
 8140d5b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8140d5e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8140d61:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8140d68:	00 
 8140d69:	89 44 24 04          	mov    %eax,0x4(%esp)
 8140d6d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8140d70:	89 04 24             	mov    %eax,(%esp)
 8140d73:	e8 3a c6 44 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 8140d78:	b8 00 00 00 00       	mov    $0x0,%eax
 8140d7d:	c9                   	leave
 8140d7e:	c3                   	ret
 8140d7f:	90                   	nop

```

```c
// advancealtar::Dispatcher_GetAchievementReward::read_packet @ 0x8140d52

/* advancealtar::Dispatcher_GetAchievementReward::read_packet(PacketBuf&,
   CMDPacketStruct::STBaseRequest&) const */

undefined4 __thiscall
advancealtar::Dispatcher_GetAchievementReward::read_packet
          (Dispatcher_GetAchievementReward *this,PacketBuf *param_1,STBaseRequest *param_2)

{
  PacketBuf::get_binary(param_1,(char *)param_2,0x14);
  return 0;
}

```

---

## send_packet

```asm
// === 08140daa advancealtar::Dispatcher_GetAchievementReward::send_packet  [0x08140daa-0x8140f6d] ===
 8140daa:	55                   	push   %ebp
 8140dab:	89 e5                	mov    %esp,%ebp
 8140dad:	56                   	push   %esi
 8140dae:	53                   	push   %ebx
 8140daf:	83 ec 40             	sub    $0x40,%esp
 8140db2:	8b 45 10             	mov    0x10(%ebp),%eax
 8140db5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8140db8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8140dbb:	89 04 24             	mov    %eax,(%esp)
 8140dbe:	e8 89 cf 44 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8140dc3:	c7 44 24 08 43 02 00 	movl   $0x243,0x8(%esp)
 8140dca:	00 
 8140dcb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8140dd2:	00 
 8140dd3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8140dd6:	89 04 24             	mov    %eax,(%esp)
 8140dd9:	e8 1e ab f8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8140dde:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8140de5:	00 
 8140de6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8140de9:	89 04 24             	mov    %eax,(%esp)
 8140dec:	e8 2f ab f8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8140df1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8140df8:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8140dff:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8140e02:	8b 40 08             	mov    0x8(%eax),%eax
 8140e05:	8b 55 0c             	mov    0xc(%ebp),%edx
 8140e08:	8d 8a 60 df 08 00    	lea    0x8df60(%edx),%ecx
 8140e0e:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8140e11:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8140e15:	89 44 24 08          	mov    %eax,0x8(%esp)
 8140e19:	8b 45 0c             	mov    0xc(%ebp),%eax
 8140e1c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8140e20:	89 0c 24             	mov    %ecx,(%esp)
 8140e23:	e8 26 15 ff ff       	call   813234e <_ZN12advancealtar25CharacAdvanceAltarManager21sendAchievementRewardEP5CUseriPPKSt6vectorINS_11_RewardItemESaIS4_EE>
 8140e28:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8140e2b:	89 42 04             	mov    %eax,0x4(%edx)
 8140e2e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8140e31:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8140e38:	00 
 8140e39:	89 44 24 04          	mov    %eax,0x4(%esp)
 8140e3d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8140e40:	89 04 24             	mov    %eax,(%esp)
 8140e43:	e8 c0 d0 fd ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 8140e48:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8140e4b:	8b 40 04             	mov    0x4(%eax),%eax
 8140e4e:	85 c0                	test   %eax,%eax
 8140e50:	0f 85 ae 00 00 00    	jne    8140f04 <_ZN12advancealtar31Dispatcher_GetAchievementReward11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE+0x15a>
 8140e56:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8140e59:	85 c0                	test   %eax,%eax
 8140e5b:	0f 84 a3 00 00 00    	je     8140f04 <_ZN12advancealtar31Dispatcher_GetAchievementReward11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE+0x15a>
 8140e61:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8140e64:	89 04 24             	mov    %eax,(%esp)
 8140e67:	e8 54 48 ff ff       	call   81356c0 <_ZNKSt6vectorIN12advancealtar11_RewardItemESaIS1_EE4sizeEv>
 8140e6c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8140e6f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8140e72:	89 44 24 04          	mov    %eax,0x4(%esp)
 8140e76:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8140e79:	89 04 24             	mov    %eax,(%esp)
 8140e7c:	e8 bb aa f8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8140e81:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8140e84:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8140e87:	89 54 24 04          	mov    %edx,0x4(%esp)
 8140e8b:	89 04 24             	mov    %eax,(%esp)
 8140e8e:	e8 c1 48 ff ff       	call   8135754 <_ZNKSt6vectorIN12advancealtar11_RewardItemESaIS1_EE5beginEv>
 8140e93:	83 ec 04             	sub    $0x4,%esp
 8140e96:	eb 3f                	jmp    8140ed7 <_ZN12advancealtar31Dispatcher_GetAchievementReward11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE+0x12d>
 8140e98:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8140e9b:	89 04 24             	mov    %eax,(%esp)
 8140e9e:	e8 69 49 ff ff       	call   813580c <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar11_RewardItemESt6vectorIS2_SaIS2_EEEdeEv>
 8140ea3:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8140eaa:	00 
 8140eab:	89 44 24 04          	mov    %eax,0x4(%esp)
 8140eaf:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8140eb2:	89 04 24             	mov    %eax,(%esp)
 8140eb5:	e8 4e d0 fd ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 8140eba:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8140ebd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8140ec4:	00 
 8140ec5:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 8140ec8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8140ecc:	89 04 24             	mov    %eax,(%esp)
 8140ecf:	e8 04 49 ff ff       	call   81357d8 <_ZN9__gnu_cxx17__normal_iteratorIPKN12advancealtar11_RewardItemESt6vectorIS2_SaIS2_EEEppEi>
 8140ed4:	83 ec 04             	sub    $0x4,%esp
 8140ed7:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8140eda:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8140edd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8140ee1:	89 04 24             	mov    %eax,(%esp)
 8140ee4:	e8 97 48 ff ff       	call   8135780 <_ZNKSt6vectorIN12advancealtar11_RewardItemESaIS1_EE3endEv>
 8140ee9:	83 ec 04             	sub    $0x4,%esp
 8140eec:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8140eef:	89 44 24 04          	mov    %eax,0x4(%esp)
 8140ef3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8140ef6:	89 04 24             	mov    %eax,(%esp)
 8140ef9:	e8 ae 48 ff ff       	call   81357ac <_ZN9__gnu_cxxneIPKN12advancealtar11_RewardItemESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8140efe:	84 c0                	test   %al,%al
 8140f00:	75 96                	jne    8140e98 <_ZN12advancealtar31Dispatcher_GetAchievementReward11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE+0xee>
 8140f02:	eb 12                	jmp    8140f16 <_ZN12advancealtar31Dispatcher_GetAchievementReward11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE+0x16c>
 8140f04:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8140f07:	89 44 24 04          	mov    %eax,0x4(%esp)
 8140f0b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8140f0e:	89 04 24             	mov    %eax,(%esp)
 8140f11:	e8 26 aa f8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8140f16:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8140f1d:	00 
 8140f1e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8140f21:	89 04 24             	mov    %eax,(%esp)
 8140f24:	e8 2f aa f8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8140f29:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8140f2c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8140f30:	8b 45 0c             	mov    0xc(%ebp),%eax
 8140f33:	89 04 24             	mov    %eax,(%esp)
 8140f36:	e8 7f 76 50 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8140f3b:	eb 1b                	jmp    8140f58 <_ZN12advancealtar31Dispatcher_GetAchievementReward11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE+0x1ae>
 8140f3d:	89 d3                	mov    %edx,%ebx
 8140f3f:	89 c6                	mov    %eax,%esi
 8140f41:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8140f44:	89 04 24             	mov    %eax,(%esp)
 8140f47:	e8 34 cf 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8140f4c:	89 f0                	mov    %esi,%eax
 8140f4e:	89 da                	mov    %ebx,%edx
 8140f50:	89 04 24             	mov    %eax,(%esp)
 8140f53:	e8 f8 27 9a 00       	call   8ae3750 <_Unwind_Resume>
 8140f58:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8140f5b:	89 04 24             	mov    %eax,(%esp)
 8140f5e:	e8 1d cf 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8140f63:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8140f66:	83 c4 00             	add    $0x0,%esp
 8140f69:	5b                   	pop    %ebx
 8140f6a:	5e                   	pop    %esi
 8140f6b:	5d                   	pop    %ebp
 8140f6c:	c3                   	ret
 8140f6d:	90                   	nop

```

```c
// advancealtar::Dispatcher_GetAchievementReward::send_packet @ 0x8140daa

/* advancealtar::Dispatcher_GetAchievementReward::send_packet(CUser*,
   CMDPacketStruct::STBaseResponse&) */

void __thiscall
advancealtar::Dispatcher_GetAchievementReward::send_packet
          (Dispatcher_GetAchievementReward *this,CUser *param_1,STBaseResponse *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  char *pcVar3;
  __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
  local_30 [4];
  vector *local_2c;
  PacketGuard local_28 [12];
  __normal_iterator local_1c [4];
  __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
  local_18 [4];
  STBaseResponse *local_14;
  int local_10;
  
  local_14 = param_2;
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 08140dd9 to 08140f3a has its CatchHandler @ 08140f3d */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x243);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
  local_10 = 0;
  local_2c = (vector *)0x0;
  uVar2 = CharacAdvanceAltarManager::sendAchievementReward
                    ((CharacAdvanceAltarManager *)(param_1 + 0x8df60),param_1,*(int *)(local_14 + 8)
                     ,&local_2c);
  *(undefined4 *)(local_14 + 4) = uVar2;
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_28,(char *)local_14,0xc);
  if ((*(int *)(local_14 + 4) == 0) && (local_2c != (vector *)0x0)) {
    local_10 = std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::
               size((vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>> *)
                    local_2c);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,local_10);
    std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::begin();
    while( true ) {
      std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::end();
      bVar1 = __gnu_cxx::operator!=(local_30,local_1c);
      if (!bVar1) break;
      pcVar3 = (char *)__gnu_cxx::
                       __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
                       ::operator*(local_30);
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_28,pcVar3,0xc);
      __gnu_cxx::
      __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
      ::operator++(local_18,(int)local_30);
    }
  }
  else {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,local_10);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
  CUser::Send(param_1,local_28);
  PacketGuard::~PacketGuard(local_28);
  return;
}

```

