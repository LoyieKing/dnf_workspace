# advancealtar__Dispatcher_BuyItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## check_error

```asm
// === 0813fbe6 advancealtar::Dispatcher_BuyItem::check_error  [0x0813fbe6-0x813fc05] ===
 813fbe6:	55                   	push   %ebp
 813fbe7:	89 e5                	mov    %esp,%ebp
 813fbe9:	83 ec 08             	sub    $0x8,%esp
 813fbec:	e8 f9 d3 fe ff       	call   812cfea <_ZN12advancealtar18isOpenAdvanceAltarEv>
 813fbf1:	83 f0 01             	xor    $0x1,%eax
 813fbf4:	84 c0                	test   %al,%al
 813fbf6:	74 07                	je     813fbff <_ZNK12advancealtar18Dispatcher_BuyItem11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE+0x19>
 813fbf8:	b8 01 00 00 00       	mov    $0x1,%eax
 813fbfd:	eb 05                	jmp    813fc04 <_ZNK12advancealtar18Dispatcher_BuyItem11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE+0x1e>
 813fbff:	b8 00 00 00 00       	mov    $0x0,%eax
 813fc04:	c9                   	leave
 813fc05:	c3                   	ret

```

```c
// advancealtar::Dispatcher_BuyItem::check_error @ 0x813fbe6

/* advancealtar::Dispatcher_BuyItem::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const */

bool advancealtar::Dispatcher_BuyItem::check_error(CUser *param_1,STBaseRequest *param_2)

{
  char cVar1;
  
  cVar1 = isOpenAdvanceAltar();
  return cVar1 != '\x01';
}

```

---

## dispatch_sig

```asm
// === 0813fad0 advancealtar::Dispatcher_BuyItem::dispatch_sig  [0x0813fad0-0x813fbb7] ===
 813fad0:	55                   	push   %ebp
 813fad1:	89 e5                	mov    %esp,%ebp
 813fad3:	56                   	push   %esi
 813fad4:	53                   	push   %ebx
 813fad5:	83 ec 50             	sub    $0x50,%esp
 813fad8:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 813fadc:	74 1f                	je     813fafd <_ZN12advancealtar18Dispatcher_BuyItem12dispatch_sigEP5CUserR9PacketBuf+0x2d>
 813fade:	8b 45 0c             	mov    0xc(%ebp),%eax
 813fae1:	89 04 24             	mov    %eax,(%esp)
 813fae4:	e8 a3 a8 f9 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 813fae9:	83 f8 02             	cmp    $0x2,%eax
 813faec:	7e 0f                	jle    813fafd <_ZN12advancealtar18Dispatcher_BuyItem12dispatch_sigEP5CUserR9PacketBuf+0x2d>
 813faee:	8b 45 0c             	mov    0xc(%ebp),%eax
 813faf1:	89 04 24             	mov    %eax,(%esp)
 813faf4:	e8 39 09 fe ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 813faf9:	85 c0                	test   %eax,%eax
 813fafb:	75 07                	jne    813fb04 <_ZN12advancealtar18Dispatcher_BuyItem12dispatch_sigEP5CUserR9PacketBuf+0x34>
 813fafd:	b8 01 00 00 00       	mov    $0x1,%eax
 813fb02:	eb 05                	jmp    813fb09 <_ZN12advancealtar18Dispatcher_BuyItem12dispatch_sigEP5CUserR9PacketBuf+0x39>
 813fb04:	b8 00 00 00 00       	mov    $0x0,%eax
 813fb09:	84 c0                	test   %al,%al
 813fb0b:	74 0a                	je     813fb17 <_ZN12advancealtar18Dispatcher_BuyItem12dispatch_sigEP5CUserR9PacketBuf+0x47>
 813fb0d:	bb 80 03 00 00       	mov    $0x380,%ebx
 813fb12:	e9 98 00 00 00       	jmp    813fbaf <_ZN12advancealtar18Dispatcher_BuyItem12dispatch_sigEP5CUserR9PacketBuf+0xdf>
 813fb17:	8d 45 b8             	lea    -0x48(%ebp),%eax
 813fb1a:	89 04 24             	mov    %eax,(%esp)
 813fb1d:	e8 a6 21 00 00       	call   8141cc8 <_ZN15CMDPacketStruct23_ReqAdvanceAltarBuyItemC1Ev>
 813fb22:	8d 45 d8             	lea    -0x28(%ebp),%eax
 813fb25:	89 04 24             	mov    %eax,(%esp)
 813fb28:	e8 c9 21 00 00       	call   8141cf6 <_ZN15CMDPacketStruct23_ResAdvanceAltarBuyItemC1Ev>
 813fb2d:	8d 45 b8             	lea    -0x48(%ebp),%eax
 813fb30:	89 44 24 08          	mov    %eax,0x8(%esp)
 813fb34:	8b 45 10             	mov    0x10(%ebp),%eax
 813fb37:	89 44 24 04          	mov    %eax,0x4(%esp)
 813fb3b:	8b 45 08             	mov    0x8(%ebp),%eax
 813fb3e:	89 04 24             	mov    %eax,(%esp)
 813fb41:	e8 72 00 00 00       	call   813fbb8 <_ZNK12advancealtar18Dispatcher_BuyItem11read_packetER9PacketBufRN15CMDPacketStruct13STBaseRequestE>
 813fb46:	8d 45 d8             	lea    -0x28(%ebp),%eax
 813fb49:	89 44 24 0c          	mov    %eax,0xc(%esp)
 813fb4d:	8d 45 b8             	lea    -0x48(%ebp),%eax
 813fb50:	89 44 24 08          	mov    %eax,0x8(%esp)
 813fb54:	8b 45 0c             	mov    0xc(%ebp),%eax
 813fb57:	89 44 24 04          	mov    %eax,0x4(%esp)
 813fb5b:	8b 45 08             	mov    0x8(%ebp),%eax
 813fb5e:	89 04 24             	mov    %eax,(%esp)
 813fb61:	e8 a0 00 00 00       	call   813fc06 <_ZNK12advancealtar18Dispatcher_BuyItem14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE>
 813fb66:	89 45 f4             	mov    %eax,-0xc(%ebp)
 813fb69:	8d 45 d8             	lea    -0x28(%ebp),%eax
 813fb6c:	89 44 24 08          	mov    %eax,0x8(%esp)
 813fb70:	8b 45 0c             	mov    0xc(%ebp),%eax
 813fb73:	89 44 24 04          	mov    %eax,0x4(%esp)
 813fb77:	8b 45 08             	mov    0x8(%ebp),%eax
 813fb7a:	89 04 24             	mov    %eax,(%esp)
 813fb7d:	e8 00 03 00 00       	call   813fe82 <_ZN12advancealtar18Dispatcher_BuyItem11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE>
 813fb82:	bb 00 00 00 00       	mov    $0x0,%ebx
 813fb87:	8d 45 d8             	lea    -0x28(%ebp),%eax
 813fb8a:	89 04 24             	mov    %eax,(%esp)
 813fb8d:	e8 8a 29 00 00       	call   814251c <_ZN15CMDPacketStruct23_ResAdvanceAltarBuyItemD1Ev>
 813fb92:	eb 1b                	jmp    813fbaf <_ZN12advancealtar18Dispatcher_BuyItem12dispatch_sigEP5CUserR9PacketBuf+0xdf>
 813fb94:	89 d3                	mov    %edx,%ebx
 813fb96:	89 c6                	mov    %eax,%esi
 813fb98:	8d 45 d8             	lea    -0x28(%ebp),%eax
 813fb9b:	89 04 24             	mov    %eax,(%esp)
 813fb9e:	e8 79 29 00 00       	call   814251c <_ZN15CMDPacketStruct23_ResAdvanceAltarBuyItemD1Ev>
 813fba3:	89 f0                	mov    %esi,%eax
 813fba5:	89 da                	mov    %ebx,%edx
 813fba7:	89 04 24             	mov    %eax,(%esp)
 813fbaa:	e8 a1 3b 9a 00       	call   8ae3750 <_Unwind_Resume>
 813fbaf:	89 d8                	mov    %ebx,%eax
 813fbb1:	83 c4 50             	add    $0x50,%esp
 813fbb4:	5b                   	pop    %ebx
 813fbb5:	5e                   	pop    %esi
 813fbb6:	5d                   	pop    %ebp
 813fbb7:	c3                   	ret

```

```c
// advancealtar::Dispatcher_BuyItem::dispatch_sig @ 0x813fad0

/* advancealtar::Dispatcher_BuyItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
advancealtar::Dispatcher_BuyItem::dispatch_sig
          (Dispatcher_BuyItem *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  _ReqAdvanceAltarBuyItem local_4c [32];
  _ResAdvanceAltarBuyItem local_2c [28];
  undefined4 local_10;
  
  if (param_1 != (CUser *)0x0) {
    iVar2 = CUser::get_state(param_1);
    if (2 < iVar2) {
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
      if (iVar2 != 0) {
        bVar1 = false;
        goto LAB_0813fb09;
      }
    }
  }
  bVar1 = true;
LAB_0813fb09:
  if (bVar1) {
    uVar3 = 0x380;
  }
  else {
    CMDPacketStruct::_ReqAdvanceAltarBuyItem::_ReqAdvanceAltarBuyItem(local_4c);
    CMDPacketStruct::_ResAdvanceAltarBuyItem::_ResAdvanceAltarBuyItem(local_2c);
                    /* try { // try from 0813fb41 to 0813fb81 has its CatchHandler @ 0813fb94 */
    read_packet(this,param_2,(STBaseRequest *)local_4c);
    local_10 = process_packet(this,param_1,(STBaseRequest *)local_4c,(STBaseResponse *)local_2c);
    send_packet(this,param_1,(STBaseResponse *)local_2c);
    uVar3 = 0;
    CMDPacketStruct::_ResAdvanceAltarBuyItem::~_ResAdvanceAltarBuyItem(local_2c);
  }
  return uVar3;
}

```

---

## process_packet

```asm
// === 0813fc06 advancealtar::Dispatcher_BuyItem::process_packet  [0x0813fc06-0x813fe81] ===
 813fc06:	55                   	push   %ebp
 813fc07:	89 e5                	mov    %esp,%ebp
 813fc09:	57                   	push   %edi
 813fc0a:	56                   	push   %esi
 813fc0b:	53                   	push   %ebx
 813fc0c:	83 ec 5c             	sub    $0x5c,%esp
 813fc0f:	8b 45 10             	mov    0x10(%ebp),%eax
 813fc12:	89 45 cc             	mov    %eax,-0x34(%ebp)
 813fc15:	8b 45 14             	mov    0x14(%ebp),%eax
 813fc18:	89 45 d0             	mov    %eax,-0x30(%ebp)
 813fc1b:	8b 45 cc             	mov    -0x34(%ebp),%eax
 813fc1e:	8b 50 10             	mov    0x10(%eax),%edx
 813fc21:	8b 45 d0             	mov    -0x30(%ebp),%eax
 813fc24:	89 50 08             	mov    %edx,0x8(%eax)
 813fc27:	8b 45 cc             	mov    -0x34(%ebp),%eax
 813fc2a:	8b 50 14             	mov    0x14(%eax),%edx
 813fc2d:	8b 45 d0             	mov    -0x30(%ebp),%eax
 813fc30:	89 50 0c             	mov    %edx,0xc(%eax)
 813fc33:	8b 45 cc             	mov    -0x34(%ebp),%eax
 813fc36:	8b 50 18             	mov    0x18(%eax),%edx
 813fc39:	8b 45 d0             	mov    -0x30(%ebp),%eax
 813fc3c:	89 50 10             	mov    %edx,0x10(%eax)
 813fc3f:	8b 45 cc             	mov    -0x34(%ebp),%eax
 813fc42:	0f b7 50 1c          	movzwl 0x1c(%eax),%edx
 813fc46:	8b 45 d0             	mov    -0x30(%ebp),%eax
 813fc49:	66 89 50 14          	mov    %dx,0x14(%eax)
 813fc4d:	8b 45 cc             	mov    -0x34(%ebp),%eax
 813fc50:	0f b7 50 1e          	movzwl 0x1e(%eax),%edx
 813fc54:	8b 45 d0             	mov    -0x30(%ebp),%eax
 813fc57:	66 89 50 16          	mov    %dx,0x16(%eax)
 813fc5b:	8b 45 10             	mov    0x10(%ebp),%eax
 813fc5e:	89 44 24 08          	mov    %eax,0x8(%esp)
 813fc62:	8b 45 0c             	mov    0xc(%ebp),%eax
 813fc65:	89 44 24 04          	mov    %eax,0x4(%esp)
 813fc69:	8b 45 08             	mov    0x8(%ebp),%eax
 813fc6c:	89 04 24             	mov    %eax,(%esp)
 813fc6f:	e8 72 ff ff ff       	call   813fbe6 <_ZNK12advancealtar18Dispatcher_BuyItem11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE>
 813fc74:	89 c2                	mov    %eax,%edx
 813fc76:	8b 45 d0             	mov    -0x30(%ebp),%eax
 813fc79:	89 50 04             	mov    %edx,0x4(%eax)
 813fc7c:	8b 45 d0             	mov    -0x30(%ebp),%eax
 813fc7f:	8b 40 04             	mov    0x4(%eax),%eax
 813fc82:	85 c0                	test   %eax,%eax
 813fc84:	74 0a                	je     813fc90 <_ZNK12advancealtar18Dispatcher_BuyItem14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0x8a>
 813fc86:	b8 00 00 00 00       	mov    $0x0,%eax
 813fc8b:	e9 e7 01 00 00       	jmp    813fe77 <_ZNK12advancealtar18Dispatcher_BuyItem14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0x271>
 813fc90:	8b 45 cc             	mov    -0x34(%ebp),%eax
 813fc93:	8b 70 14             	mov    0x14(%eax),%esi
 813fc96:	8b 45 cc             	mov    -0x34(%ebp),%eax
 813fc99:	8b 58 10             	mov    0x10(%eax),%ebx
 813fc9c:	e8 fa c4 f8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 813fca1:	05 1c 63 00 00       	add    $0x631c,%eax
 813fca6:	89 74 24 08          	mov    %esi,0x8(%esp)
 813fcaa:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 813fcae:	89 04 24             	mov    %eax,(%esp)
 813fcb1:	e8 32 13 76 00       	call   88a0fe8 <_ZN12advancealtar25AdvanceAltarShopParameter20getBuyUpgradeDataVecEiNS_20AdvanceAltarShopType1TE>
 813fcb6:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 813fcb9:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 813fcbd:	75 14                	jne    813fcd3 <_ZNK12advancealtar18Dispatcher_BuyItem14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0xcd>
 813fcbf:	8b 45 d0             	mov    -0x30(%ebp),%eax
 813fcc2:	c7 40 04 03 00 00 00 	movl   $0x3,0x4(%eax)
 813fcc9:	b8 00 00 00 00       	mov    $0x0,%eax
 813fcce:	e9 a4 01 00 00       	jmp    813fe77 <_ZNK12advancealtar18Dispatcher_BuyItem14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0x271>
 813fcd3:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 813fcda:	8d 45 c0             	lea    -0x40(%ebp),%eax
 813fcdd:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 813fce0:	89 54 24 04          	mov    %edx,0x4(%esp)
 813fce4:	89 04 24             	mov    %eax,(%esp)
 813fce7:	e8 b2 63 ff ff       	call   813609e <_ZNSt6vectorIN12advancealtar14BuyUpgradeDataESaIS1_EE5beginEv>
 813fcec:	83 ec 04             	sub    $0x4,%esp
 813fcef:	eb 49                	jmp    813fd3a <_ZNK12advancealtar18Dispatcher_BuyItem14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0x134>
 813fcf1:	8d 45 c0             	lea    -0x40(%ebp),%eax
 813fcf4:	89 04 24             	mov    %eax,(%esp)
 813fcf7:	e8 4c 64 ff ff       	call   8136148 <_ZNK9__gnu_cxx17__normal_iteratorIPN12advancealtar14BuyUpgradeDataESt6vectorIS2_SaIS2_EEEptEv>
 813fcfc:	8b 10                	mov    (%eax),%edx
 813fcfe:	8b 45 d0             	mov    -0x30(%ebp),%eax
 813fd01:	8b 40 10             	mov    0x10(%eax),%eax
 813fd04:	39 c2                	cmp    %eax,%edx
 813fd06:	0f 94 c0             	sete   %al
 813fd09:	84 c0                	test   %al,%al
 813fd0b:	74 10                	je     813fd1d <_ZNK12advancealtar18Dispatcher_BuyItem14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0x117>
 813fd0d:	8d 45 c0             	lea    -0x40(%ebp),%eax
 813fd10:	89 04 24             	mov    %eax,(%esp)
 813fd13:	e8 3a 64 ff ff       	call   8136152 <_ZNK9__gnu_cxx17__normal_iteratorIPN12advancealtar14BuyUpgradeDataESt6vectorIS2_SaIS2_EEEdeEv>
 813fd18:	89 45 d8             	mov    %eax,-0x28(%ebp)
 813fd1b:	eb 48                	jmp    813fd65 <_ZNK12advancealtar18Dispatcher_BuyItem14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0x15f>
 813fd1d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 813fd20:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 813fd27:	00 
 813fd28:	8d 55 c0             	lea    -0x40(%ebp),%edx
 813fd2b:	89 54 24 04          	mov    %edx,0x4(%esp)
 813fd2f:	89 04 24             	mov    %eax,(%esp)
 813fd32:	e8 dd 63 ff ff       	call   8136114 <_ZN9__gnu_cxx17__normal_iteratorIPN12advancealtar14BuyUpgradeDataESt6vectorIS2_SaIS2_EEEppEi>
 813fd37:	83 ec 04             	sub    $0x4,%esp
 813fd3a:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 813fd3d:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 813fd40:	89 54 24 04          	mov    %edx,0x4(%esp)
 813fd44:	89 04 24             	mov    %eax,(%esp)
 813fd47:	e8 76 63 ff ff       	call   81360c2 <_ZNSt6vectorIN12advancealtar14BuyUpgradeDataESaIS1_EE3endEv>
 813fd4c:	83 ec 04             	sub    $0x4,%esp
 813fd4f:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 813fd52:	89 44 24 04          	mov    %eax,0x4(%esp)
 813fd56:	8d 45 c0             	lea    -0x40(%ebp),%eax
 813fd59:	89 04 24             	mov    %eax,(%esp)
 813fd5c:	e8 87 63 ff ff       	call   81360e8 <_ZN9__gnu_cxxneIPN12advancealtar14BuyUpgradeDataESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 813fd61:	84 c0                	test   %al,%al
 813fd63:	75 8c                	jne    813fcf1 <_ZNK12advancealtar18Dispatcher_BuyItem14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0xeb>
 813fd65:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 813fd69:	75 14                	jne    813fd7f <_ZNK12advancealtar18Dispatcher_BuyItem14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0x179>
 813fd6b:	8b 45 d0             	mov    -0x30(%ebp),%eax
 813fd6e:	c7 40 04 03 00 00 00 	movl   $0x3,0x4(%eax)
 813fd75:	b8 00 00 00 00       	mov    $0x0,%eax
 813fd7a:	e9 f8 00 00 00       	jmp    813fe77 <_ZNK12advancealtar18Dispatcher_BuyItem14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0x271>
 813fd7f:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 813fd86:	8b 45 cc             	mov    -0x34(%ebp),%eax
 813fd89:	0f b7 40 1c          	movzwl 0x1c(%eax),%eax
 813fd8d:	98                   	cwtl
 813fd8e:	89 45 e0             	mov    %eax,-0x20(%ebp)
 813fd91:	eb 44                	jmp    813fdd7 <_ZNK12advancealtar18Dispatcher_BuyItem14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0x1d1>
 813fd93:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 813fd9a:	00 
 813fd9b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 813fd9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 813fda2:	8b 45 d8             	mov    -0x28(%ebp),%eax
 813fda5:	89 04 24             	mov    %eax,(%esp)
 813fda8:	e8 9f 30 76 00       	call   88a2e4c <_ZN12advancealtar14BuyUpgradeData17getFieldDataPointEiNS_9FieldType1TE>
 813fdad:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 813fdb0:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 813fdb4:	75 14                	jne    813fdca <_ZNK12advancealtar18Dispatcher_BuyItem14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0x1c4>
 813fdb6:	8b 45 d0             	mov    -0x30(%ebp),%eax
 813fdb9:	c7 40 04 03 00 00 00 	movl   $0x3,0x4(%eax)
 813fdc0:	b8 00 00 00 00       	mov    $0x0,%eax
 813fdc5:	e9 ad 00 00 00       	jmp    813fe77 <_ZNK12advancealtar18Dispatcher_BuyItem14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0x271>
 813fdca:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813fdcd:	8b 40 04             	mov    0x4(%eax),%eax
 813fdd0:	01 45 dc             	add    %eax,-0x24(%ebp)
 813fdd3:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 813fdd7:	8b 45 cc             	mov    -0x34(%ebp),%eax
 813fdda:	0f b7 40 1e          	movzwl 0x1e(%eax),%eax
 813fdde:	98                   	cwtl
 813fddf:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 813fde2:	0f 9d c0             	setge  %al
 813fde5:	84 c0                	test   %al,%al
 813fde7:	75 aa                	jne    813fd93 <_ZNK12advancealtar18Dispatcher_BuyItem14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0x18d>
 813fde9:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 813fdf0:	8b 45 cc             	mov    -0x34(%ebp),%eax
 813fdf3:	0f b7 40 1e          	movzwl 0x1e(%eax),%eax
 813fdf7:	0f bf d8             	movswl %ax,%ebx
 813fdfa:	8b 45 cc             	mov    -0x34(%ebp),%eax
 813fdfd:	0f b7 40 1c          	movzwl 0x1c(%eax),%eax
 813fe01:	0f bf c8             	movswl %ax,%ecx
 813fe04:	8b 45 cc             	mov    -0x34(%ebp),%eax
 813fe07:	8b 50 18             	mov    0x18(%eax),%edx
 813fe0a:	8b 45 cc             	mov    -0x34(%ebp),%eax
 813fe0d:	8b 40 14             	mov    0x14(%eax),%eax
 813fe10:	8b 75 0c             	mov    0xc(%ebp),%esi
 813fe13:	8d be 60 df 08 00    	lea    0x8df60(%esi),%edi
 813fe19:	8d 75 bc             	lea    -0x44(%ebp),%esi
 813fe1c:	89 74 24 18          	mov    %esi,0x18(%esp)
 813fe20:	8b 75 dc             	mov    -0x24(%ebp),%esi
 813fe23:	89 74 24 14          	mov    %esi,0x14(%esp)
 813fe27:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 813fe2b:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 813fe2f:	89 54 24 08          	mov    %edx,0x8(%esp)
 813fe33:	89 44 24 04          	mov    %eax,0x4(%esp)
 813fe37:	89 3c 24             	mov    %edi,(%esp)
 813fe3a:	e8 6f 1b ff ff       	call   81319ae <_ZN12advancealtar25CharacAdvanceAltarManager7buyItemENS_20AdvanceAltarShopType1TEissiRi>
 813fe3f:	8b 55 d0             	mov    -0x30(%ebp),%edx
 813fe42:	89 42 04             	mov    %eax,0x4(%edx)
 813fe45:	8b 55 bc             	mov    -0x44(%ebp),%edx
 813fe48:	8b 45 d0             	mov    -0x30(%ebp),%eax
 813fe4b:	89 50 18             	mov    %edx,0x18(%eax)
 813fe4e:	8b 45 d0             	mov    -0x30(%ebp),%eax
 813fe51:	8b 40 04             	mov    0x4(%eax),%eax
 813fe54:	85 c0                	test   %eax,%eax
 813fe56:	75 1a                	jne    813fe72 <_ZNK12advancealtar18Dispatcher_BuyItem14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0x26c>
 813fe58:	8b 45 dc             	mov    -0x24(%ebp),%eax
 813fe5b:	89 44 24 08          	mov    %eax,0x8(%esp)
 813fe5f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 813fe66:	00 
 813fe67:	8b 45 0c             	mov    0xc(%ebp),%eax
 813fe6a:	89 04 24             	mov    %eax,(%esp)
 813fe6d:	e8 3e 3f ff ff       	call   8133db0 <_ZN12advancealtar10HistoryLog7starSubER5CUserNS_11SubStarType1TEi>
 813fe72:	b8 00 00 00 00       	mov    $0x0,%eax
 813fe77:	8d 65 f4             	lea    -0xc(%ebp),%esp
 813fe7a:	83 c4 00             	add    $0x0,%esp
 813fe7d:	5b                   	pop    %ebx
 813fe7e:	5e                   	pop    %esi
 813fe7f:	5f                   	pop    %edi
 813fe80:	5d                   	pop    %ebp
 813fe81:	c3                   	ret

```

```c
// advancealtar::Dispatcher_BuyItem::process_packet @ 0x813fc06

/* advancealtar::Dispatcher_BuyItem::process_packet(CUser*, CMDPacketStruct::STBaseRequest&,
   CMDPacketStruct::STBaseResponse&) const */

undefined4 __thiscall
advancealtar::Dispatcher_BuyItem::process_packet
          (Dispatcher_BuyItem *this,CUser *param_1,STBaseRequest *param_2,STBaseResponse *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_48;
  __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
  local_44 [4];
  __normal_iterator local_40 [4];
  __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
  local_3c [4];
  STBaseRequest *local_38;
  STBaseResponse *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_38 = param_2;
  local_34 = param_3;
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_2 + 0x18);
  *(undefined2 *)(param_3 + 0x14) = *(undefined2 *)(param_2 + 0x1c);
  *(undefined2 *)(param_3 + 0x16) = *(undefined2 *)(param_2 + 0x1e);
  uVar3 = check_error((CUser *)this,(STBaseRequest *)param_1);
  *(undefined4 *)(local_34 + 4) = uVar3;
  if (*(int *)(local_34 + 4) == 0) {
    uVar3 = *(undefined4 *)(local_38 + 0x14);
    uVar1 = *(undefined4 *)(local_38 + 0x10);
    iVar4 = G_CDataManager();
    local_30 = AdvanceAltarShopParameter::getBuyUpgradeDataVec
                         ((AdvanceAltarShopParameter *)(iVar4 + 0x631c),uVar1,uVar3);
    if (local_30 == 0) {
      *(undefined4 *)(local_34 + 4) = 3;
    }
    else {
      local_2c = 0;
      std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>::begin
                ();
      while( true ) {
        std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>::end
                  ();
        bVar2 = __gnu_cxx::operator!=(local_44,local_40);
        if (!bVar2) break;
        piVar5 = (int *)__gnu_cxx::
                        __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
                        ::operator->(local_44);
        if (*piVar5 == *(int *)(local_34 + 0x10)) {
          local_2c = __gnu_cxx::
                     __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
                     ::operator*(local_44);
          break;
        }
        __gnu_cxx::
        __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
        ::operator++(local_3c,(int)local_44);
      }
      if (local_2c == 0) {
        *(undefined4 *)(local_34 + 4) = 3;
      }
      else {
        local_28 = 0;
        for (local_24 = (int)*(short *)(local_38 + 0x1c); local_24 <= *(short *)(local_38 + 0x1e);
            local_24 = local_24 + 1) {
          local_20 = BuyUpgradeData::getFieldDataPoint(local_2c,local_24,2);
          if (local_20 == 0) {
            *(undefined4 *)(local_34 + 4) = 3;
            return 0;
          }
          local_28 = local_28 + *(int *)(local_20 + 4);
        }
        local_48 = 0;
        uVar3 = CharacAdvanceAltarManager::buyItem
                          ((CharacAdvanceAltarManager *)(param_1 + 0x8df60),
                           *(undefined4 *)(local_38 + 0x14),*(undefined4 *)(local_38 + 0x18),
                           (int)*(short *)(local_38 + 0x1c),(int)*(short *)(local_38 + 0x1e),
                           local_28,&local_48);
        *(undefined4 *)(local_34 + 4) = uVar3;
        *(undefined4 *)(local_34 + 0x18) = local_48;
        if (*(int *)(local_34 + 4) == 0) {
          HistoryLog::starSub(param_1,0,local_28);
        }
      }
    }
  }
  return 0;
}

```

---

## read_packet

```asm
// === 0813fbb8 advancealtar::Dispatcher_BuyItem::read_packet  [0x0813fbb8-0x813fbe5] ===
 813fbb8:	55                   	push   %ebp
 813fbb9:	89 e5                	mov    %esp,%ebp
 813fbbb:	83 ec 28             	sub    $0x28,%esp
 813fbbe:	8b 45 10             	mov    0x10(%ebp),%eax
 813fbc1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 813fbc4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813fbc7:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 813fbce:	00 
 813fbcf:	89 44 24 04          	mov    %eax,0x4(%esp)
 813fbd3:	8b 45 0c             	mov    0xc(%ebp),%eax
 813fbd6:	89 04 24             	mov    %eax,(%esp)
 813fbd9:	e8 d4 d7 44 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 813fbde:	b8 00 00 00 00       	mov    $0x0,%eax
 813fbe3:	c9                   	leave
 813fbe4:	c3                   	ret
 813fbe5:	90                   	nop

```

```c
// advancealtar::Dispatcher_BuyItem::read_packet @ 0x813fbb8

/* advancealtar::Dispatcher_BuyItem::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&) const
    */

undefined4 __thiscall
advancealtar::Dispatcher_BuyItem::read_packet
          (Dispatcher_BuyItem *this,PacketBuf *param_1,STBaseRequest *param_2)

{
  PacketBuf::get_binary(param_1,(char *)param_2,0x20);
  return 0;
}

```

---

## send_packet

```asm
// === 0813fe82 advancealtar::Dispatcher_BuyItem::send_packet  [0x0813fe82-0x813ff37] ===
 813fe82:	55                   	push   %ebp
 813fe83:	89 e5                	mov    %esp,%ebp
 813fe85:	56                   	push   %esi
 813fe86:	53                   	push   %ebx
 813fe87:	83 ec 20             	sub    $0x20,%esp
 813fe8a:	8b 45 10             	mov    0x10(%ebp),%eax
 813fe8d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 813fe90:	8d 45 e8             	lea    -0x18(%ebp),%eax
 813fe93:	89 04 24             	mov    %eax,(%esp)
 813fe96:	e8 b1 de 44 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 813fe9b:	c7 44 24 08 3d 02 00 	movl   $0x23d,0x8(%esp)
 813fea2:	00 
 813fea3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 813feaa:	00 
 813feab:	8d 45 e8             	lea    -0x18(%ebp),%eax
 813feae:	89 04 24             	mov    %eax,(%esp)
 813feb1:	e8 46 ba f8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 813feb6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 813febd:	00 
 813febe:	8d 45 e8             	lea    -0x18(%ebp),%eax
 813fec1:	89 04 24             	mov    %eax,(%esp)
 813fec4:	e8 57 ba f8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 813fec9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813fecc:	c7 44 24 08 1c 00 00 	movl   $0x1c,0x8(%esp)
 813fed3:	00 
 813fed4:	89 44 24 04          	mov    %eax,0x4(%esp)
 813fed8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 813fedb:	89 04 24             	mov    %eax,(%esp)
 813fede:	e8 25 e0 fd ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 813fee3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 813feea:	00 
 813feeb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 813feee:	89 04 24             	mov    %eax,(%esp)
 813fef1:	e8 62 ba f8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 813fef6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 813fef9:	89 44 24 04          	mov    %eax,0x4(%esp)
 813fefd:	8b 45 0c             	mov    0xc(%ebp),%eax
 813ff00:	89 04 24             	mov    %eax,(%esp)
 813ff03:	e8 b2 86 50 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 813ff08:	eb 1b                	jmp    813ff25 <_ZN12advancealtar18Dispatcher_BuyItem11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE+0xa3>
 813ff0a:	89 d3                	mov    %edx,%ebx
 813ff0c:	89 c6                	mov    %eax,%esi
 813ff0e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 813ff11:	89 04 24             	mov    %eax,(%esp)
 813ff14:	e8 67 df 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 813ff19:	89 f0                	mov    %esi,%eax
 813ff1b:	89 da                	mov    %ebx,%edx
 813ff1d:	89 04 24             	mov    %eax,(%esp)
 813ff20:	e8 2b 38 9a 00       	call   8ae3750 <_Unwind_Resume>
 813ff25:	8d 45 e8             	lea    -0x18(%ebp),%eax
 813ff28:	89 04 24             	mov    %eax,(%esp)
 813ff2b:	e8 50 df 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 813ff30:	83 c4 20             	add    $0x20,%esp
 813ff33:	5b                   	pop    %ebx
 813ff34:	5e                   	pop    %esi
 813ff35:	5d                   	pop    %ebp
 813ff36:	c3                   	ret
 813ff37:	90                   	nop

```

```c
// advancealtar::Dispatcher_BuyItem::send_packet @ 0x813fe82

/* advancealtar::Dispatcher_BuyItem::send_packet(CUser*, CMDPacketStruct::STBaseResponse&) */

void __thiscall
advancealtar::Dispatcher_BuyItem::send_packet
          (Dispatcher_BuyItem *this,CUser *param_1,STBaseResponse *param_2)

{
  PacketGuard local_1c [12];
  STBaseResponse *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0813feb1 to 0813ff07 has its CatchHandler @ 0813ff0a */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x23d);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_1c,(char *)local_10,0x1c);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

