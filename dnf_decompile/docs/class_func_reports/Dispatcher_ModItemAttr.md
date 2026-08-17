# Dispatcher_ModItemAttr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## _SendResult

```asm
// === 08201938 Dispatcher_ModItemAttr::_SendResult  [0x08201938-0x8201b05] ===
 8201938:	55                   	push   %ebp
 8201939:	89 e5                	mov    %esp,%ebp
 820193b:	56                   	push   %esi
 820193c:	53                   	push   %ebx
 820193d:	81 ec b0 00 00 00    	sub    $0xb0,%esp
 8201943:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8201946:	8b 55 14             	mov    0x14(%ebp),%edx
 8201949:	8b 45 18             	mov    0x18(%ebp),%eax
 820194c:	66 89 4d a4          	mov    %cx,-0x5c(%ebp)
 8201950:	66 89 55 a0          	mov    %dx,-0x60(%ebp)
 8201954:	66 89 45 9c          	mov    %ax,-0x64(%ebp)
 8201958:	8d 45 af             	lea    -0x51(%ebp),%eax
 820195b:	89 04 24             	mov    %eax,(%esp)
 820195e:	e8 f1 9e ec ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8201963:	0f b7 5d a0          	movzwl -0x60(%ebp),%ebx
 8201967:	8b 45 0c             	mov    0xc(%ebp),%eax
 820196a:	89 04 24             	mov    %eax,(%esp)
 820196d:	e8 0c 89 ed ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8201972:	8d 95 58 ff ff ff    	lea    -0xa8(%ebp),%edx
 8201978:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 820197c:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8201983:	00 
 8201984:	89 44 24 04          	mov    %eax,0x4(%esp)
 8201988:	89 14 24             	mov    %edx,(%esp)
 820198b:	e8 88 9f 2f 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8201990:	83 ec 04             	sub    $0x4,%esp
 8201993:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 8201999:	89 45 af             	mov    %eax,-0x51(%ebp)
 820199c:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 82019a2:	89 45 b3             	mov    %eax,-0x4d(%ebp)
 82019a5:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 82019ab:	89 45 b7             	mov    %eax,-0x49(%ebp)
 82019ae:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 82019b4:	89 45 bb             	mov    %eax,-0x45(%ebp)
 82019b7:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 82019bd:	89 45 bf             	mov    %eax,-0x41(%ebp)
 82019c0:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 82019c6:	89 45 c3             	mov    %eax,-0x3d(%ebp)
 82019c9:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 82019cf:	89 45 c7             	mov    %eax,-0x39(%ebp)
 82019d2:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 82019d8:	89 45 cb             	mov    %eax,-0x35(%ebp)
 82019db:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 82019e1:	89 45 cf             	mov    %eax,-0x31(%ebp)
 82019e4:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 82019ea:	89 45 d3             	mov    %eax,-0x2d(%ebp)
 82019ed:	8b 45 80             	mov    -0x80(%ebp),%eax
 82019f0:	89 45 d7             	mov    %eax,-0x29(%ebp)
 82019f3:	8b 45 84             	mov    -0x7c(%ebp),%eax
 82019f6:	89 45 db             	mov    %eax,-0x25(%ebp)
 82019f9:	8b 45 88             	mov    -0x78(%ebp),%eax
 82019fc:	89 45 df             	mov    %eax,-0x21(%ebp)
 82019ff:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8201a02:	89 45 e3             	mov    %eax,-0x1d(%ebp)
 8201a05:	8b 45 90             	mov    -0x70(%ebp),%eax
 8201a08:	89 45 e7             	mov    %eax,-0x19(%ebp)
 8201a0b:	0f b6 45 94          	movzbl -0x6c(%ebp),%eax
 8201a0f:	88 45 eb             	mov    %al,-0x15(%ebp)
 8201a12:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8201a15:	89 04 24             	mov    %eax,(%esp)
 8201a18:	e8 2f c3 38 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8201a1d:	c7 44 24 08 54 00 00 	movl   $0x54,0x8(%esp)
 8201a24:	00 
 8201a25:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8201a2c:	00 
 8201a2d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8201a30:	89 04 24             	mov    %eax,(%esp)
 8201a33:	e8 c4 9e ec ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8201a38:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8201a3f:	00 
 8201a40:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8201a43:	89 04 24             	mov    %eax,(%esp)
 8201a46:	e8 d5 9e ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8201a4b:	0f b7 45 a0          	movzwl -0x60(%ebp),%eax
 8201a4f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8201a53:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8201a56:	89 04 24             	mov    %eax,(%esp)
 8201a59:	e8 46 84 ed ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8201a5e:	8d 45 af             	lea    -0x51(%ebp),%eax
 8201a61:	89 04 24             	mov    %eax,(%esp)
 8201a64:	e8 d1 5d ef ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 8201a69:	89 44 24 04          	mov    %eax,0x4(%esp)
 8201a6d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8201a70:	89 04 24             	mov    %eax,(%esp)
 8201a73:	e8 c4 9e ec ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8201a78:	0f b7 45 a4          	movzwl -0x5c(%ebp),%eax
 8201a7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8201a80:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8201a83:	89 04 24             	mov    %eax,(%esp)
 8201a86:	e8 19 84 ed ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8201a8b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8201a92:	00 
 8201a93:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8201a96:	89 04 24             	mov    %eax,(%esp)
 8201a99:	e8 ba 9e ec ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8201a9e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8201aa1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8201aa5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8201aa8:	89 04 24             	mov    %eax,(%esp)
 8201aab:	e8 0a 6b 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8201ab0:	0f b7 45 9c          	movzwl -0x64(%ebp),%eax
 8201ab4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8201ab8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8201abf:	00 
 8201ac0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8201ac7:	00 
 8201ac8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8201acb:	89 04 24             	mov    %eax,(%esp)
 8201ace:	e8 87 ab 47 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 8201ad3:	eb 1b                	jmp    8201af0 <_ZN22Dispatcher_ModItemAttr11_SendResultEP5CUserttt+0x1b8>
 8201ad5:	89 d3                	mov    %edx,%ebx
 8201ad7:	89 c6                	mov    %eax,%esi
 8201ad9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8201adc:	89 04 24             	mov    %eax,(%esp)
 8201adf:	e8 9c c3 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8201ae4:	89 f0                	mov    %esi,%eax
 8201ae6:	89 da                	mov    %ebx,%edx
 8201ae8:	89 04 24             	mov    %eax,(%esp)
 8201aeb:	e8 60 1c 8e 00       	call   8ae3750 <_Unwind_Resume>
 8201af0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8201af3:	89 04 24             	mov    %eax,(%esp)
 8201af6:	e8 85 c3 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8201afb:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8201afe:	83 c4 00             	add    $0x0,%esp
 8201b01:	5b                   	pop    %ebx
 8201b02:	5e                   	pop    %esi
 8201b03:	5d                   	pop    %ebp
 8201b04:	c3                   	ret
 8201b05:	90                   	nop

```

```c
// Dispatcher_ModItemAttr::_SendResult @ 0x8201938

/* Dispatcher_ModItemAttr::_SendResult(CUser*, unsigned short, unsigned short, unsigned short) */

void __thiscall
Dispatcher_ModItemAttr::_SendResult
          (Dispatcher_ModItemAttr *this,CUser *param_1,ushort param_2,ushort param_3,ushort param_4)

{
  int iVar1;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  ushort local_68;
  ushort local_64;
  ushort local_60;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined1 local_19;
  PacketGuard local_18 [12];
  
  local_60 = param_2;
  local_64 = param_3;
  local_68 = param_4;
  Inven_Item::Inven_Item((Inven_Item *)&local_55);
  iVar1 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)&local_ac,iVar1);
  local_55 = local_ac;
  local_51 = local_a8;
  local_4d = local_a4;
  local_49 = local_a0;
  local_45 = local_9c;
  local_41 = local_98;
  local_3d = local_94;
  local_39 = local_90;
  local_35 = local_8c;
  local_31 = local_88;
  local_2d = local_84;
  local_29 = local_80;
  local_25 = local_7c;
  local_21 = local_78;
  local_1d = local_74;
  local_19 = local_70;
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08201a33 to 08201ad2 has its CatchHandler @ 08201ad5 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0x54);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,(uint)local_64);
  iVar1 = Inven_Item::get_add_info((Inven_Item *)&local_55);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,iVar1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,(uint)local_60);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  CUser::SendUpdateItemList(param_1,1,0,local_68);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## dispatch_sig

```asm
// === 08200b08 Dispatcher_ModItemAttr::dispatch_sig  [0x08200b08-0x8201937] ===
 8200b08:	55                   	push   %ebp
 8200b09:	89 e5                	mov    %esp,%ebp
 8200b0b:	57                   	push   %edi
 8200b0c:	56                   	push   %esi
 8200b0d:	53                   	push   %ebx
 8200b0e:	81 ec ac 01 00 00    	sub    $0x1ac,%esp
 8200b14:	8b 45 0c             	mov    0xc(%ebp),%eax
 8200b17:	89 04 24             	mov    %eax,(%esp)
 8200b1a:	e8 6d 98 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8200b1f:	83 f8 03             	cmp    $0x3,%eax
 8200b22:	75 0f                	jne    8200b33 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x2b>
 8200b24:	8b 45 0c             	mov    0xc(%ebp),%eax
 8200b27:	89 04 24             	mov    %eax,(%esp)
 8200b2a:	e8 03 f9 f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8200b2f:	85 c0                	test   %eax,%eax
 8200b31:	75 07                	jne    8200b3a <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x32>
 8200b33:	b8 01 00 00 00       	mov    $0x1,%eax
 8200b38:	eb 05                	jmp    8200b3f <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x37>
 8200b3a:	b8 00 00 00 00       	mov    $0x0,%eax
 8200b3f:	84 c0                	test   %al,%al
 8200b41:	0f 84 94 00 00 00    	je     8200bdb <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0xd3>
 8200b47:	8b 45 0c             	mov    0xc(%ebp),%eax
 8200b4a:	89 04 24             	mov    %eax,(%esp)
 8200b4d:	e8 1c 98 ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8200b52:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8200b59:	00 
 8200b5a:	89 04 24             	mov    %eax,(%esp)
 8200b5d:	e8 e9 84 f0 ff       	call   810904b <_Z14NumberToStringji>
 8200b62:	89 c3                	mov    %eax,%ebx
 8200b64:	8b 45 0c             	mov    0xc(%ebp),%eax
 8200b67:	89 04 24             	mov    %eax,(%esp)
 8200b6a:	e8 1d 98 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8200b6f:	89 c6                	mov    %eax,%esi
 8200b71:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8200b78:	00 
 8200b79:	c7 44 24 08 db 95 00 	movl   $0x95db,0x8(%esp)
 8200b80:	00 
 8200b81:	c7 44 24 04 60 f6 bc 	movl   $0x8bcf660,0x4(%esp)
 8200b88:	08 
 8200b89:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8200b8c:	89 04 24             	mov    %eax,(%esp)
 8200b8f:	e8 84 eb 34 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8200b94:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8200b98:	89 74 24 08          	mov    %esi,0x8(%esp)
 8200b9c:	c7 44 24 04 8c 28 bc 	movl   $0x8bc288c,0x4(%esp)
 8200ba3:	08 
 8200ba4:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8200ba7:	89 04 24             	mov    %eax,(%esp)
 8200baa:	e8 d9 eb 34 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8200baf:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8200bb6:	e8 45 4c 52 00       	call   8725800 <__cxa_allocate_exception>
 8200bbb:	89 c2                	mov    %eax,%edx
 8200bbd:	c7 02 00 00 00 00    	movl   $0x0,(%edx)
 8200bc3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8200bca:	00 
 8200bcb:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8200bd2:	09 
 8200bd3:	89 04 24             	mov    %eax,(%esp)
 8200bd6:	e8 75 40 52 00       	call   8724c50 <__cxa_throw>
 8200bdb:	e8 06 1a f6 ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 8200be0:	c7 44 24 0c 0f 00 00 	movl   $0xf,0xc(%esp)
 8200be7:	00 
 8200be8:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8200bef:	00 
 8200bf0:	8b 55 0c             	mov    0xc(%ebp),%edx
 8200bf3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8200bf7:	89 04 24             	mov    %eax,(%esp)
 8200bfa:	e8 b9 da f6 ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 8200bff:	84 c0                	test   %al,%al
 8200c01:	74 25                	je     8200c28 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x120>
 8200c03:	c7 44 24 08 d1 00 00 	movl   $0xd1,0x8(%esp)
 8200c0a:	00 
 8200c0b:	c7 44 24 04 54 00 00 	movl   $0x54,0x4(%esp)
 8200c12:	00 
 8200c13:	8b 45 0c             	mov    0xc(%ebp),%eax
 8200c16:	89 04 24             	mov    %eax,(%esp)
 8200c19:	e8 24 b3 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8200c1e:	bb 00 00 00 00       	mov    $0x0,%ebx
 8200c23:	e9 03 0d 00 00       	jmp    820192b <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0xe23>
 8200c28:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 8200c2d:	c7 44 24 08 26 00 00 	movl   $0x26,0x8(%esp)
 8200c34:	00 
 8200c35:	8b 55 0c             	mov    0xc(%ebp),%edx
 8200c38:	89 54 24 04          	mov    %edx,0x4(%esp)
 8200c3c:	89 04 24             	mov    %eax,(%esp)
 8200c3f:	e8 be 7d 08 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 8200c44:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8200c47:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 8200c4b:	74 27                	je     8200c74 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x16c>
 8200c4d:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8200c50:	0f b6 c0             	movzbl %al,%eax
 8200c53:	89 44 24 08          	mov    %eax,0x8(%esp)
 8200c57:	c7 44 24 04 54 00 00 	movl   $0x54,0x4(%esp)
 8200c5e:	00 
 8200c5f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8200c62:	89 04 24             	mov    %eax,(%esp)
 8200c65:	e8 d8 b2 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8200c6a:	bb 00 00 00 00       	mov    $0x0,%ebx
 8200c6f:	e9 b7 0c 00 00       	jmp    820192b <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0xe23>
 8200c74:	8b 45 0c             	mov    0xc(%ebp),%eax
 8200c77:	89 04 24             	mov    %eax,(%esp)
 8200c7a:	e8 7f 96 ed ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 8200c7f:	84 c0                	test   %al,%al
 8200c81:	74 0a                	je     8200c8d <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x185>
 8200c83:	bb 00 00 00 00       	mov    $0x0,%ebx
 8200c88:	e9 9e 0c 00 00       	jmp    820192b <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0xe23>
 8200c8d:	8d 45 93             	lea    -0x6d(%ebp),%eax
 8200c90:	83 c0 0d             	add    $0xd,%eax
 8200c93:	89 44 24 04          	mov    %eax,0x4(%esp)
 8200c97:	8b 45 10             	mov    0x10(%ebp),%eax
 8200c9a:	89 04 24             	mov    %eax,(%esp)
 8200c9d:	e8 0e c4 38 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 8200ca2:	83 f0 01             	xor    $0x1,%eax
 8200ca5:	84 c0                	test   %al,%al
 8200ca7:	75 38                	jne    8200ce1 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x1d9>
 8200ca9:	8d 45 93             	lea    -0x6d(%ebp),%eax
 8200cac:	83 c0 0f             	add    $0xf,%eax
 8200caf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8200cb3:	8b 45 10             	mov    0x10(%ebp),%eax
 8200cb6:	89 04 24             	mov    %eax,(%esp)
 8200cb9:	e8 c0 c5 38 00       	call   858d27e <_ZN9PacketBuf7get_intERm>
 8200cbe:	83 f0 01             	xor    $0x1,%eax
 8200cc1:	84 c0                	test   %al,%al
 8200cc3:	75 1c                	jne    8200ce1 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x1d9>
 8200cc5:	8d 45 93             	lea    -0x6d(%ebp),%eax
 8200cc8:	83 c0 13             	add    $0x13,%eax
 8200ccb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8200ccf:	8b 45 10             	mov    0x10(%ebp),%eax
 8200cd2:	89 04 24             	mov    %eax,(%esp)
 8200cd5:	e8 d6 c3 38 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 8200cda:	83 f0 01             	xor    $0x1,%eax
 8200cdd:	84 c0                	test   %al,%al
 8200cdf:	74 07                	je     8200ce8 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x1e0>
 8200ce1:	b8 01 00 00 00       	mov    $0x1,%eax
 8200ce6:	eb 05                	jmp    8200ced <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x1e5>
 8200ce8:	b8 00 00 00 00       	mov    $0x0,%eax
 8200ced:	84 c0                	test   %al,%al
 8200cef:	74 2c                	je     8200d1d <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x215>
 8200cf1:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8200cf8:	e8 03 4b 52 00       	call   8725800 <__cxa_allocate_exception>
 8200cfd:	89 c2                	mov    %eax,%edx
 8200cff:	c7 02 ff ff ff ff    	movl   $0xffffffff,(%edx)
 8200d05:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8200d0c:	00 
 8200d0d:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8200d14:	09 
 8200d15:	89 04 24             	mov    %eax,(%esp)
 8200d18:	e8 33 3f 52 00       	call   8724c50 <__cxa_throw>
 8200d1d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8200d20:	89 04 24             	mov    %eax,(%esp)
 8200d23:	e8 66 95 ed ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8200d28:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8200d2b:	8d 85 56 ff ff ff    	lea    -0xaa(%ebp),%eax
 8200d31:	89 04 24             	mov    %eax,(%esp)
 8200d34:	e8 1b ab ec ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8200d39:	0f b7 45 a0          	movzwl -0x60(%ebp),%eax
 8200d3d:	0f b7 d0             	movzwl %ax,%edx
 8200d40:	8d 85 98 fe ff ff    	lea    -0x168(%ebp),%eax
 8200d46:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8200d4a:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8200d51:	00 
 8200d52:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8200d55:	89 54 24 04          	mov    %edx,0x4(%esp)
 8200d59:	89 04 24             	mov    %eax,(%esp)
 8200d5c:	e8 b7 ab 2f 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8200d61:	83 ec 04             	sub    $0x4,%esp
 8200d64:	8b 85 98 fe ff ff    	mov    -0x168(%ebp),%eax
 8200d6a:	89 85 56 ff ff ff    	mov    %eax,-0xaa(%ebp)
 8200d70:	8b 85 9c fe ff ff    	mov    -0x164(%ebp),%eax
 8200d76:	89 85 5a ff ff ff    	mov    %eax,-0xa6(%ebp)
 8200d7c:	8b 85 a0 fe ff ff    	mov    -0x160(%ebp),%eax
 8200d82:	89 85 5e ff ff ff    	mov    %eax,-0xa2(%ebp)
 8200d88:	8b 85 a4 fe ff ff    	mov    -0x15c(%ebp),%eax
 8200d8e:	89 85 62 ff ff ff    	mov    %eax,-0x9e(%ebp)
 8200d94:	8b 85 a8 fe ff ff    	mov    -0x158(%ebp),%eax
 8200d9a:	89 85 66 ff ff ff    	mov    %eax,-0x9a(%ebp)
 8200da0:	8b 85 ac fe ff ff    	mov    -0x154(%ebp),%eax
 8200da6:	89 85 6a ff ff ff    	mov    %eax,-0x96(%ebp)
 8200dac:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 8200db2:	89 85 6e ff ff ff    	mov    %eax,-0x92(%ebp)
 8200db8:	8b 85 b4 fe ff ff    	mov    -0x14c(%ebp),%eax
 8200dbe:	89 85 72 ff ff ff    	mov    %eax,-0x8e(%ebp)
 8200dc4:	8b 85 b8 fe ff ff    	mov    -0x148(%ebp),%eax
 8200dca:	89 85 76 ff ff ff    	mov    %eax,-0x8a(%ebp)
 8200dd0:	8b 85 bc fe ff ff    	mov    -0x144(%ebp),%eax
 8200dd6:	89 85 7a ff ff ff    	mov    %eax,-0x86(%ebp)
 8200ddc:	8b 85 c0 fe ff ff    	mov    -0x140(%ebp),%eax
 8200de2:	89 85 7e ff ff ff    	mov    %eax,-0x82(%ebp)
 8200de8:	8b 85 c4 fe ff ff    	mov    -0x13c(%ebp),%eax
 8200dee:	89 45 82             	mov    %eax,-0x7e(%ebp)
 8200df1:	8b 85 c8 fe ff ff    	mov    -0x138(%ebp),%eax
 8200df7:	89 45 86             	mov    %eax,-0x7a(%ebp)
 8200dfa:	8b 85 cc fe ff ff    	mov    -0x134(%ebp),%eax
 8200e00:	89 45 8a             	mov    %eax,-0x76(%ebp)
 8200e03:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 8200e09:	89 45 8e             	mov    %eax,-0x72(%ebp)
 8200e0c:	0f b6 85 d4 fe ff ff 	movzbl -0x12c(%ebp),%eax
 8200e13:	88 45 92             	mov    %al,-0x6e(%ebp)
 8200e16:	8d 85 56 ff ff ff    	lea    -0xaa(%ebp),%eax
 8200e1c:	89 04 24             	mov    %eax,(%esp)
 8200e1f:	e8 42 df f1 ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 8200e24:	84 c0                	test   %al,%al
 8200e26:	74 2c                	je     8200e54 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x34c>
 8200e28:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8200e2f:	e8 cc 49 52 00       	call   8725800 <__cxa_allocate_exception>
 8200e34:	89 c2                	mov    %eax,%edx
 8200e36:	c7 02 04 00 00 00    	movl   $0x4,(%edx)
 8200e3c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8200e43:	00 
 8200e44:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8200e4b:	08 
 8200e4c:	89 04 24             	mov    %eax,(%esp)
 8200e4f:	e8 fc 3d 52 00       	call   8724c50 <__cxa_throw>
 8200e54:	8b 95 58 ff ff ff    	mov    -0xa8(%ebp),%edx
 8200e5a:	8b 45 a2             	mov    -0x5e(%ebp),%eax
 8200e5d:	39 c2                	cmp    %eax,%edx
 8200e5f:	74 2c                	je     8200e8d <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x385>
 8200e61:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8200e68:	e8 93 49 52 00       	call   8725800 <__cxa_allocate_exception>
 8200e6d:	89 c2                	mov    %eax,%edx
 8200e6f:	c7 02 04 00 00 00    	movl   $0x4,(%edx)
 8200e75:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8200e7c:	00 
 8200e7d:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8200e84:	08 
 8200e85:	89 04 24             	mov    %eax,(%esp)
 8200e88:	e8 c3 3d 52 00       	call   8724c50 <__cxa_throw>
 8200e8d:	0f b6 85 57 ff ff ff 	movzbl -0xa9(%ebp),%eax
 8200e94:	3c 01                	cmp    $0x1,%al
 8200e96:	74 2c                	je     8200ec4 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x3bc>
 8200e98:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8200e9f:	e8 5c 49 52 00       	call   8725800 <__cxa_allocate_exception>
 8200ea4:	89 c2                	mov    %eax,%edx
 8200ea6:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 8200eac:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8200eb3:	00 
 8200eb4:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8200ebb:	08 
 8200ebc:	89 04 24             	mov    %eax,(%esp)
 8200ebf:	e8 8c 3d 52 00       	call   8724c50 <__cxa_throw>
 8200ec4:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 8200eca:	89 c3                	mov    %eax,%ebx
 8200ecc:	e8 ca b2 ec ff       	call   80cc19b <_Z14G_CDataManagerv>
 8200ed1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8200ed5:	89 04 24             	mov    %eax,(%esp)
 8200ed8:	e8 55 eb 15 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8200edd:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8200ee0:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 8200ee4:	75 2c                	jne    8200f12 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x40a>
 8200ee6:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8200eed:	e8 0e 49 52 00       	call   8725800 <__cxa_allocate_exception>
 8200ef2:	89 c2                	mov    %eax,%edx
 8200ef4:	c7 02 04 00 00 00    	movl   $0x4,(%edx)
 8200efa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8200f01:	00 
 8200f02:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8200f09:	08 
 8200f0a:	89 04 24             	mov    %eax,(%esp)
 8200f0d:	e8 3e 3d 52 00       	call   8724c50 <__cxa_throw>
 8200f12:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8200f15:	8b 00                	mov    (%eax),%eax
 8200f17:	83 c0 0c             	add    $0xc,%eax
 8200f1a:	8b 10                	mov    (%eax),%edx
 8200f1c:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8200f1f:	89 04 24             	mov    %eax,(%esp)
 8200f22:	ff d2                	call   *%edx
 8200f24:	83 f8 09             	cmp    $0x9,%eax
 8200f27:	7e 17                	jle    8200f40 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x438>
 8200f29:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8200f2c:	8b 00                	mov    (%eax),%eax
 8200f2e:	83 c0 0c             	add    $0xc,%eax
 8200f31:	8b 10                	mov    (%eax),%edx
 8200f33:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8200f36:	89 04 24             	mov    %eax,(%esp)
 8200f39:	ff d2                	call   *%edx
 8200f3b:	83 f8 15             	cmp    $0x15,%eax
 8200f3e:	7e 07                	jle    8200f47 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x43f>
 8200f40:	b8 01 00 00 00       	mov    $0x1,%eax
 8200f45:	eb 05                	jmp    8200f4c <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x444>
 8200f47:	b8 00 00 00 00       	mov    $0x0,%eax
 8200f4c:	84 c0                	test   %al,%al
 8200f4e:	74 2c                	je     8200f7c <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x474>
 8200f50:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8200f57:	e8 a4 48 52 00       	call   8725800 <__cxa_allocate_exception>
 8200f5c:	89 c2                	mov    %eax,%edx
 8200f5e:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 8200f64:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8200f6b:	00 
 8200f6c:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8200f73:	08 
 8200f74:	89 04 24             	mov    %eax,(%esp)
 8200f77:	e8 d4 3c 52 00       	call   8724c50 <__cxa_throw>
 8200f7c:	8d 85 19 ff ff ff    	lea    -0xe7(%ebp),%eax
 8200f82:	89 04 24             	mov    %eax,(%esp)
 8200f85:	e8 ca a8 ec ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8200f8a:	0f b7 45 a6          	movzwl -0x5a(%ebp),%eax
 8200f8e:	0f b7 d0             	movzwl %ax,%edx
 8200f91:	8d 85 98 fe ff ff    	lea    -0x168(%ebp),%eax
 8200f97:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8200f9b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8200fa2:	00 
 8200fa3:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8200fa6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8200faa:	89 04 24             	mov    %eax,(%esp)
 8200fad:	e8 66 a9 2f 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8200fb2:	83 ec 04             	sub    $0x4,%esp
 8200fb5:	8b 85 98 fe ff ff    	mov    -0x168(%ebp),%eax
 8200fbb:	89 85 19 ff ff ff    	mov    %eax,-0xe7(%ebp)
 8200fc1:	8b 85 9c fe ff ff    	mov    -0x164(%ebp),%eax
 8200fc7:	89 85 1d ff ff ff    	mov    %eax,-0xe3(%ebp)
 8200fcd:	8b 85 a0 fe ff ff    	mov    -0x160(%ebp),%eax
 8200fd3:	89 85 21 ff ff ff    	mov    %eax,-0xdf(%ebp)
 8200fd9:	8b 85 a4 fe ff ff    	mov    -0x15c(%ebp),%eax
 8200fdf:	89 85 25 ff ff ff    	mov    %eax,-0xdb(%ebp)
 8200fe5:	8b 85 a8 fe ff ff    	mov    -0x158(%ebp),%eax
 8200feb:	89 85 29 ff ff ff    	mov    %eax,-0xd7(%ebp)
 8200ff1:	8b 85 ac fe ff ff    	mov    -0x154(%ebp),%eax
 8200ff7:	89 85 2d ff ff ff    	mov    %eax,-0xd3(%ebp)
 8200ffd:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 8201003:	89 85 31 ff ff ff    	mov    %eax,-0xcf(%ebp)
 8201009:	8b 85 b4 fe ff ff    	mov    -0x14c(%ebp),%eax
 820100f:	89 85 35 ff ff ff    	mov    %eax,-0xcb(%ebp)
 8201015:	8b 85 b8 fe ff ff    	mov    -0x148(%ebp),%eax
 820101b:	89 85 39 ff ff ff    	mov    %eax,-0xc7(%ebp)
 8201021:	8b 85 bc fe ff ff    	mov    -0x144(%ebp),%eax
 8201027:	89 85 3d ff ff ff    	mov    %eax,-0xc3(%ebp)
 820102d:	8b 85 c0 fe ff ff    	mov    -0x140(%ebp),%eax
 8201033:	89 85 41 ff ff ff    	mov    %eax,-0xbf(%ebp)
 8201039:	8b 85 c4 fe ff ff    	mov    -0x13c(%ebp),%eax
 820103f:	89 85 45 ff ff ff    	mov    %eax,-0xbb(%ebp)
 8201045:	8b 85 c8 fe ff ff    	mov    -0x138(%ebp),%eax
 820104b:	89 85 49 ff ff ff    	mov    %eax,-0xb7(%ebp)
 8201051:	8b 85 cc fe ff ff    	mov    -0x134(%ebp),%eax
 8201057:	89 85 4d ff ff ff    	mov    %eax,-0xb3(%ebp)
 820105d:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 8201063:	89 85 51 ff ff ff    	mov    %eax,-0xaf(%ebp)
 8201069:	0f b6 85 d4 fe ff ff 	movzbl -0x12c(%ebp),%eax
 8201070:	88 85 55 ff ff ff    	mov    %al,-0xab(%ebp)
 8201076:	8d 85 19 ff ff ff    	lea    -0xe7(%ebp),%eax
 820107c:	89 04 24             	mov    %eax,(%esp)
 820107f:	e8 e2 dc f1 ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 8201084:	84 c0                	test   %al,%al
 8201086:	74 2c                	je     82010b4 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x5ac>
 8201088:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 820108f:	e8 6c 47 52 00       	call   8725800 <__cxa_allocate_exception>
 8201094:	89 c2                	mov    %eax,%edx
 8201096:	c7 02 11 00 00 00    	movl   $0x11,(%edx)
 820109c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82010a3:	00 
 82010a4:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82010ab:	08 
 82010ac:	89 04 24             	mov    %eax,(%esp)
 82010af:	e8 9c 3b 52 00       	call   8724c50 <__cxa_throw>
 82010b4:	0f b7 45 a0          	movzwl -0x60(%ebp),%eax
 82010b8:	0f b7 c0             	movzwl %ax,%eax
 82010bb:	89 44 24 08          	mov    %eax,0x8(%esp)
 82010bf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82010c6:	00 
 82010c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82010ca:	89 04 24             	mov    %eax,(%esp)
 82010cd:	e8 70 58 44 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 82010d2:	84 c0                	test   %al,%al
 82010d4:	74 25                	je     82010fb <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x5f3>
 82010d6:	c7 44 24 08 d5 00 00 	movl   $0xd5,0x8(%esp)
 82010dd:	00 
 82010de:	c7 44 24 04 54 00 00 	movl   $0x54,0x4(%esp)
 82010e5:	00 
 82010e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82010e9:	89 04 24             	mov    %eax,(%esp)
 82010ec:	e8 51 ae 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82010f1:	bb 00 00 00 00       	mov    $0x0,%ebx
 82010f6:	e9 30 08 00 00       	jmp    820192b <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0xe23>
 82010fb:	66 c7 45 ce 00 00    	movw   $0x0,-0x32(%ebp)
 8201101:	c7 45 d0 01 00 00 00 	movl   $0x1,-0x30(%ebp)
 8201108:	8b 85 1b ff ff ff    	mov    -0xe5(%ebp),%eax
 820110e:	3d 4e d1 28 00       	cmp    $0x28d14e,%eax
 8201113:	0f 84 9f 01 00 00    	je     82012b8 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x7b0>
 8201119:	3d 4e d1 28 00       	cmp    $0x28d14e,%eax
 820111e:	77 1e                	ja     820113e <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x636>
 8201120:	83 f8 0f             	cmp    $0xf,%eax
 8201123:	0f 84 8f 01 00 00    	je     82012b8 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x7b0>
 8201129:	3d 81 03 00 00       	cmp    $0x381,%eax
 820112e:	0f 84 84 01 00 00    	je     82012b8 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x7b0>
 8201134:	83 f8 0e             	cmp    $0xe,%eax
 8201137:	74 27                	je     8201160 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x658>
 8201139:	90                   	nop
 820113a:	90                   	nop
 820113b:	90                   	nop
 820113c:	90                   	nop
 820113d:	90                   	nop
 820113e:	3d f1 90 20 29       	cmp    $0x292090f1,%eax
 8201143:	74 1b                	je     8201160 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x658>
 8201145:	3d f2 90 20 29       	cmp    $0x292090f2,%eax
 820114a:	0f 84 68 01 00 00    	je     82012b8 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x7b0>
 8201150:	3d 8e 97 28 00       	cmp    $0x28978e,%eax
 8201155:	0f 84 68 01 00 00    	je     82012c3 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x7bb>
 820115b:	e9 74 02 00 00       	jmp    82013d4 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x8cc>
 8201160:	66 c7 45 ce 01 00    	movw   $0x1,-0x32(%ebp)
 8201166:	8d 85 56 ff ff ff    	lea    -0xaa(%ebp),%eax
 820116c:	89 04 24             	mov    %eax,(%esp)
 820116f:	e8 e2 a2 02 00       	call   822b456 <_ZNK10Inven_Item14GetReSealCountEv>
 8201174:	3c 06                	cmp    $0x6,%al
 8201176:	0f 97 c0             	seta   %al
 8201179:	84 c0                	test   %al,%al
 820117b:	74 2c                	je     82011a9 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x6a1>
 820117d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8201184:	e8 77 46 52 00       	call   8725800 <__cxa_allocate_exception>
 8201189:	89 c2                	mov    %eax,%edx
 820118b:	c7 02 0d 00 00 00    	movl   $0xd,(%edx)
 8201191:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8201198:	00 
 8201199:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82011a0:	08 
 82011a1:	89 04 24             	mov    %eax,(%esp)
 82011a4:	e8 a7 3a 52 00       	call   8724c50 <__cxa_throw>
 82011a9:	8b 45 c8             	mov    -0x38(%ebp),%eax
 82011ac:	8b 00                	mov    (%eax),%eax
 82011ae:	83 c0 0c             	add    $0xc,%eax
 82011b1:	8b 10                	mov    (%eax),%edx
 82011b3:	8b 45 c8             	mov    -0x38(%ebp),%eax
 82011b6:	89 04 24             	mov    %eax,(%esp)
 82011b9:	ff d2                	call   *%edx
 82011bb:	83 f8 0b             	cmp    $0xb,%eax
 82011be:	0f 94 c0             	sete   %al
 82011c1:	84 c0                	test   %al,%al
 82011c3:	74 2c                	je     82011f1 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x6e9>
 82011c5:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82011cc:	e8 2f 46 52 00       	call   8725800 <__cxa_allocate_exception>
 82011d1:	89 c2                	mov    %eax,%edx
 82011d3:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 82011d9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82011e0:	00 
 82011e1:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82011e8:	08 
 82011e9:	89 04 24             	mov    %eax,(%esp)
 82011ec:	e8 5f 3a 52 00       	call   8724c50 <__cxa_throw>
 82011f1:	8d 85 56 ff ff ff    	lea    -0xaa(%ebp),%eax
 82011f7:	89 04 24             	mov    %eax,(%esp)
 82011fa:	e8 57 a2 02 00       	call   822b456 <_ZNK10Inven_Item14GetReSealCountEv>
 82011ff:	0f b6 f8             	movzbl %al,%edi
 8201202:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8201205:	89 04 24             	mov    %eax,(%esp)
 8201208:	e8 47 fa f0 ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 820120d:	0f b6 f0             	movzbl %al,%esi
 8201210:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8201213:	89 04 24             	mov    %eax,(%esp)
 8201216:	e8 bb 00 ef ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 820121b:	0f b6 d8             	movzbl %al,%ebx
 820121e:	e8 78 af ec ff       	call   80cc19b <_Z14G_CDataManagerv>
 8201223:	83 c0 2c             	add    $0x2c,%eax
 8201226:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 820122a:	89 74 24 08          	mov    %esi,0x8(%esp)
 820122e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8201232:	89 04 24             	mov    %eax,(%esp)
 8201235:	e8 c8 f8 6f 00       	call   8900b02 <_ZN14reseal_table_t15get_reseal_costEhhh>
 820123a:	89 45 d0             	mov    %eax,-0x30(%ebp)
 820123d:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8201240:	c1 e8 1f             	shr    $0x1f,%eax
 8201243:	84 c0                	test   %al,%al
 8201245:	74 2c                	je     8201273 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x76b>
 8201247:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 820124e:	e8 ad 45 52 00       	call   8725800 <__cxa_allocate_exception>
 8201253:	89 c2                	mov    %eax,%edx
 8201255:	c7 02 fe ff ff ff    	movl   $0xfffffffe,(%edx)
 820125b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8201262:	00 
 8201263:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 820126a:	09 
 820126b:	89 04 24             	mov    %eax,(%esp)
 820126e:	e8 dd 39 52 00       	call   8724c50 <__cxa_throw>
 8201273:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8201276:	89 04 24             	mov    %eax,(%esp)
 8201279:	e8 64 00 ef ff       	call   80f12e2 <_ZNK5CItem13GetAttachTypeEv>
 820127e:	83 f8 03             	cmp    $0x3,%eax
 8201281:	0f 95 c0             	setne  %al
 8201284:	84 c0                	test   %al,%al
 8201286:	0f 84 74 01 00 00    	je     8201400 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x8f8>
 820128c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8201293:	e8 68 45 52 00       	call   8725800 <__cxa_allocate_exception>
 8201298:	89 c2                	mov    %eax,%edx
 820129a:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 82012a0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82012a7:	00 
 82012a8:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82012af:	08 
 82012b0:	89 04 24             	mov    %eax,(%esp)
 82012b3:	e8 98 39 52 00       	call   8724c50 <__cxa_throw>
 82012b8:	66 c7 45 ce 02 00    	movw   $0x2,-0x32(%ebp)
 82012be:	e9 41 01 00 00       	jmp    8201404 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x8fc>
 82012c3:	66 c7 45 ce 01 00    	movw   $0x1,-0x32(%ebp)
 82012c9:	8b 45 c8             	mov    -0x38(%ebp),%eax
 82012cc:	8b 00                	mov    (%eax),%eax
 82012ce:	83 c0 0c             	add    $0xc,%eax
 82012d1:	8b 10                	mov    (%eax),%edx
 82012d3:	8b 45 c8             	mov    -0x38(%ebp),%eax
 82012d6:	89 04 24             	mov    %eax,(%esp)
 82012d9:	ff d2                	call   *%edx
 82012db:	83 f8 0b             	cmp    $0xb,%eax
 82012de:	0f 94 c0             	sete   %al
 82012e1:	84 c0                	test   %al,%al
 82012e3:	74 2c                	je     8201311 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x809>
 82012e5:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82012ec:	e8 0f 45 52 00       	call   8725800 <__cxa_allocate_exception>
 82012f1:	89 c2                	mov    %eax,%edx
 82012f3:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 82012f9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8201300:	00 
 8201301:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8201308:	08 
 8201309:	89 04 24             	mov    %eax,(%esp)
 820130c:	e8 3f 39 52 00       	call   8724c50 <__cxa_throw>
 8201311:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8201314:	89 04 24             	mov    %eax,(%esp)
 8201317:	e8 c6 ff ee ff       	call   80f12e2 <_ZNK5CItem13GetAttachTypeEv>
 820131c:	83 f8 03             	cmp    $0x3,%eax
 820131f:	0f 95 c0             	setne  %al
 8201322:	84 c0                	test   %al,%al
 8201324:	74 2c                	je     8201352 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x84a>
 8201326:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 820132d:	e8 ce 44 52 00       	call   8725800 <__cxa_allocate_exception>
 8201332:	89 c2                	mov    %eax,%edx
 8201334:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 820133a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8201341:	00 
 8201342:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8201349:	08 
 820134a:	89 04 24             	mov    %eax,(%esp)
 820134d:	e8 fe 38 52 00       	call   8724c50 <__cxa_throw>
 8201352:	8d 85 56 ff ff ff    	lea    -0xaa(%ebp),%eax
 8201358:	89 04 24             	mov    %eax,(%esp)
 820135b:	e8 f6 a0 02 00       	call   822b456 <_ZNK10Inven_Item14GetReSealCountEv>
 8201360:	0f b6 f8             	movzbl %al,%edi
 8201363:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8201366:	89 04 24             	mov    %eax,(%esp)
 8201369:	e8 e6 f8 f0 ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 820136e:	0f b6 f0             	movzbl %al,%esi
 8201371:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8201374:	89 04 24             	mov    %eax,(%esp)
 8201377:	e8 5a ff ee ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 820137c:	0f b6 d8             	movzbl %al,%ebx
 820137f:	e8 17 ae ec ff       	call   80cc19b <_Z14G_CDataManagerv>
 8201384:	83 c0 2c             	add    $0x2c,%eax
 8201387:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 820138b:	89 74 24 08          	mov    %esi,0x8(%esp)
 820138f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8201393:	89 04 24             	mov    %eax,(%esp)
 8201396:	e8 45 f8 6f 00       	call   8900be0 <_ZN14reseal_table_t23get_oneshot_reseal_costEhhh>
 820139b:	89 45 d0             	mov    %eax,-0x30(%ebp)
 820139e:	8b 45 d0             	mov    -0x30(%ebp),%eax
 82013a1:	c1 e8 1f             	shr    $0x1f,%eax
 82013a4:	84 c0                	test   %al,%al
 82013a6:	74 5b                	je     8201403 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x8fb>
 82013a8:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82013af:	e8 4c 44 52 00       	call   8725800 <__cxa_allocate_exception>
 82013b4:	89 c2                	mov    %eax,%edx
 82013b6:	c7 02 fe ff ff ff    	movl   $0xfffffffe,(%edx)
 82013bc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82013c3:	00 
 82013c4:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 82013cb:	09 
 82013cc:	89 04 24             	mov    %eax,(%esp)
 82013cf:	e8 7c 38 52 00       	call   8724c50 <__cxa_throw>
 82013d4:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82013db:	e8 20 44 52 00       	call   8725800 <__cxa_allocate_exception>
 82013e0:	89 c2                	mov    %eax,%edx
 82013e2:	c7 02 11 00 00 00    	movl   $0x11,(%edx)
 82013e8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82013ef:	00 
 82013f0:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82013f7:	08 
 82013f8:	89 04 24             	mov    %eax,(%esp)
 82013fb:	e8 50 38 52 00       	call   8724c50 <__cxa_throw>
 8201400:	90                   	nop
 8201401:	eb 01                	jmp    8201404 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x8fc>
 8201403:	90                   	nop
 8201404:	8d 85 19 ff ff ff    	lea    -0xe7(%ebp),%eax
 820140a:	89 04 24             	mov    %eax,(%esp)
 820140d:	e8 28 64 ef ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 8201412:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 8201415:	0f 9c c0             	setl   %al
 8201418:	84 c0                	test   %al,%al
 820141a:	74 2c                	je     8201448 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x940>
 820141c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8201423:	e8 d8 43 52 00       	call   8725800 <__cxa_allocate_exception>
 8201428:	89 c2                	mov    %eax,%edx
 820142a:	c7 02 16 00 00 00    	movl   $0x16,(%edx)
 8201430:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8201437:	00 
 8201438:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 820143f:	08 
 8201440:	89 04 24             	mov    %eax,(%esp)
 8201443:	e8 08 38 52 00       	call   8724c50 <__cxa_throw>
 8201448:	0f b7 45 a6          	movzwl -0x5a(%ebp),%eax
 820144c:	0f b7 c0             	movzwl %ax,%eax
 820144f:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8201456:	00 
 8201457:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 820145e:	00 
 820145f:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8201462:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8201466:	89 44 24 08          	mov    %eax,0x8(%esp)
 820146a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8201471:	00 
 8201472:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8201475:	89 04 24             	mov    %eax,(%esp)
 8201478:	e8 8f 2b 30 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 820147d:	83 f0 01             	xor    $0x1,%eax
 8201480:	84 c0                	test   %al,%al
 8201482:	74 2c                	je     82014b0 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x9a8>
 8201484:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 820148b:	e8 70 43 52 00       	call   8725800 <__cxa_allocate_exception>
 8201490:	89 c2                	mov    %eax,%edx
 8201492:	c7 02 fd ff ff ff    	movl   $0xfffffffd,(%edx)
 8201498:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820149f:	00 
 82014a0:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 82014a7:	09 
 82014a8:	89 04 24             	mov    %eax,(%esp)
 82014ab:	e8 a0 37 52 00       	call   8724c50 <__cxa_throw>
 82014b0:	0f b7 45 ce          	movzwl -0x32(%ebp),%eax
 82014b4:	83 f8 01             	cmp    $0x1,%eax
 82014b7:	74 0e                	je     82014c7 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x9bf>
 82014b9:	83 f8 02             	cmp    $0x2,%eax
 82014bc:	0f 84 8c 00 00 00    	je     820154e <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0xa46>
 82014c2:	e9 a5 00 00 00       	jmp    820156c <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0xa64>
 82014c7:	0f b6 85 56 ff ff ff 	movzbl -0xaa(%ebp),%eax
 82014ce:	84 c0                	test   %al,%al
 82014d0:	74 2c                	je     82014fe <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0x9f6>
 82014d2:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82014d9:	e8 22 43 52 00       	call   8725800 <__cxa_allocate_exception>
 82014de:	89 c2                	mov    %eax,%edx
 82014e0:	c7 02 12 00 00 00    	movl   $0x12,(%edx)
 82014e6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82014ed:	00 
 82014ee:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82014f5:	08 
 82014f6:	89 04 24             	mov    %eax,(%esp)
 82014f9:	e8 52 37 52 00       	call   8724c50 <__cxa_throw>
 82014fe:	c6 85 56 ff ff ff 01 	movb   $0x1,-0xaa(%ebp)
 8201505:	c7 45 b8 07 00 00 00 	movl   $0x7,-0x48(%ebp)
 820150c:	8d 85 56 ff ff ff    	lea    -0xaa(%ebp),%eax
 8201512:	89 04 24             	mov    %eax,(%esp)
 8201515:	e8 3c 9f 02 00       	call   822b456 <_ZNK10Inven_Item14GetReSealCountEv>
 820151a:	0f b6 c0             	movzbl %al,%eax
 820151d:	83 c0 01             	add    $0x1,%eax
 8201520:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8201523:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8201526:	89 44 24 04          	mov    %eax,0x4(%esp)
 820152a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 820152d:	89 04 24             	mov    %eax,(%esp)
 8201530:	e8 d9 e3 ed ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 8201535:	8b 00                	mov    (%eax),%eax
 8201537:	0f b6 c0             	movzbl %al,%eax
 820153a:	89 44 24 04          	mov    %eax,0x4(%esp)
 820153e:	8d 85 56 ff ff ff    	lea    -0xaa(%ebp),%eax
 8201544:	89 04 24             	mov    %eax,(%esp)
 8201547:	e8 1a 9f 02 00       	call   822b466 <_ZN10Inven_Item14SetReSealCountEh>
 820154c:	eb 1e                	jmp    820156c <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0xa64>
 820154e:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8201555:	e8 2d 06 4b 00       	call   86b1b87 <_Z12get_rand_inti>
 820155a:	89 44 24 04          	mov    %eax,0x4(%esp)
 820155e:	8d 85 56 ff ff ff    	lea    -0xaa(%ebp),%eax
 8201564:	89 04 24             	mov    %eax,(%esp)
 8201567:	e8 18 a3 ec ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 820156c:	0f b7 45 a0          	movzwl -0x60(%ebp),%eax
 8201570:	0f b7 c0             	movzwl %ax,%eax
 8201573:	8b 95 56 ff ff ff    	mov    -0xaa(%ebp),%edx
 8201579:	89 54 24 0c          	mov    %edx,0xc(%esp)
 820157d:	8b 95 5a ff ff ff    	mov    -0xa6(%ebp),%edx
 8201583:	89 54 24 10          	mov    %edx,0x10(%esp)
 8201587:	8b 95 5e ff ff ff    	mov    -0xa2(%ebp),%edx
 820158d:	89 54 24 14          	mov    %edx,0x14(%esp)
 8201591:	8b 95 62 ff ff ff    	mov    -0x9e(%ebp),%edx
 8201597:	89 54 24 18          	mov    %edx,0x18(%esp)
 820159b:	8b 95 66 ff ff ff    	mov    -0x9a(%ebp),%edx
 82015a1:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 82015a5:	8b 95 6a ff ff ff    	mov    -0x96(%ebp),%edx
 82015ab:	89 54 24 20          	mov    %edx,0x20(%esp)
 82015af:	8b 95 6e ff ff ff    	mov    -0x92(%ebp),%edx
 82015b5:	89 54 24 24          	mov    %edx,0x24(%esp)
 82015b9:	8b 95 72 ff ff ff    	mov    -0x8e(%ebp),%edx
 82015bf:	89 54 24 28          	mov    %edx,0x28(%esp)
 82015c3:	8b 95 76 ff ff ff    	mov    -0x8a(%ebp),%edx
 82015c9:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 82015cd:	8b 95 7a ff ff ff    	mov    -0x86(%ebp),%edx
 82015d3:	89 54 24 30          	mov    %edx,0x30(%esp)
 82015d7:	8b 95 7e ff ff ff    	mov    -0x82(%ebp),%edx
 82015dd:	89 54 24 34          	mov    %edx,0x34(%esp)
 82015e1:	8b 55 82             	mov    -0x7e(%ebp),%edx
 82015e4:	89 54 24 38          	mov    %edx,0x38(%esp)
 82015e8:	8b 55 86             	mov    -0x7a(%ebp),%edx
 82015eb:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 82015ef:	8b 55 8a             	mov    -0x76(%ebp),%edx
 82015f2:	89 54 24 40          	mov    %edx,0x40(%esp)
 82015f6:	8b 55 8e             	mov    -0x72(%ebp),%edx
 82015f9:	89 54 24 44          	mov    %edx,0x44(%esp)
 82015fd:	0f b6 55 92          	movzbl -0x6e(%ebp),%edx
 8201601:	88 54 24 48          	mov    %dl,0x48(%esp)
 8201605:	89 44 24 08          	mov    %eax,0x8(%esp)
 8201609:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8201610:	00 
 8201611:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8201614:	89 04 24             	mov    %eax,(%esp)
 8201617:	e8 92 ea 2f 00       	call   85000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>
 820161c:	0f b7 45 a0          	movzwl -0x60(%ebp),%eax
 8201620:	0f b7 c8             	movzwl %ax,%ecx
 8201623:	0f b7 45 a6          	movzwl -0x5a(%ebp),%eax
 8201627:	0f b7 d0             	movzwl %ax,%edx
 820162a:	0f b7 45 ce          	movzwl -0x32(%ebp),%eax
 820162e:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8201632:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8201636:	89 44 24 08          	mov    %eax,0x8(%esp)
 820163a:	8b 45 0c             	mov    0xc(%ebp),%eax
 820163d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8201641:	8b 45 08             	mov    0x8(%ebp),%eax
 8201644:	89 04 24             	mov    %eax,(%esp)
 8201647:	e8 ec 02 00 00       	call   8201938 <_ZN22Dispatcher_ModItemAttr11_SendResultEP5CUserttt>
 820164c:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8201653:	8b 85 1b ff ff ff    	mov    -0xe5(%ebp),%eax
 8201659:	89 c3                	mov    %eax,%ebx
 820165b:	8b 45 0c             	mov    0xc(%ebp),%eax
 820165e:	89 04 24             	mov    %eax,(%esp)
 8201661:	e8 c2 b7 f2 ff       	call   812ce28 <_ZNK5CUser14GetPremiumInfoEv>
 8201666:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 820166a:	89 04 24             	mov    %eax,(%esp)
 820166d:	e8 36 d1 4a 00       	call   86ae7a8 <_ZNK8WongWork12CUserPremium17GetReturnItemRateEi>
 8201672:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8201675:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 8201679:	0f 84 a7 02 00 00    	je     8201926 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0xe1e>
 820167f:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8201682:	89 c1                	mov    %eax,%ecx
 8201684:	0f af 4d d4          	imul   -0x2c(%ebp),%ecx
 8201688:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 820168d:	89 c8                	mov    %ecx,%eax
 820168f:	f7 ea                	imul   %edx
 8201691:	c1 fa 05             	sar    $0x5,%edx
 8201694:	89 c8                	mov    %ecx,%eax
 8201696:	c1 f8 1f             	sar    $0x1f,%eax
 8201699:	89 d1                	mov    %edx,%ecx
 820169b:	29 c1                	sub    %eax,%ecx
 820169d:	89 c8                	mov    %ecx,%eax
 820169f:	89 45 d8             	mov    %eax,-0x28(%ebp)
 82016a2:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 82016a6:	0f 8e 7a 02 00 00    	jle    8201926 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0xe1e>
 82016ac:	8b 85 19 ff ff ff    	mov    -0xe7(%ebp),%eax
 82016b2:	89 85 dc fe ff ff    	mov    %eax,-0x124(%ebp)
 82016b8:	8b 85 1d ff ff ff    	mov    -0xe3(%ebp),%eax
 82016be:	89 85 e0 fe ff ff    	mov    %eax,-0x120(%ebp)
 82016c4:	8b 85 21 ff ff ff    	mov    -0xdf(%ebp),%eax
 82016ca:	89 85 e4 fe ff ff    	mov    %eax,-0x11c(%ebp)
 82016d0:	8b 85 25 ff ff ff    	mov    -0xdb(%ebp),%eax
 82016d6:	89 85 e8 fe ff ff    	mov    %eax,-0x118(%ebp)
 82016dc:	8b 85 29 ff ff ff    	mov    -0xd7(%ebp),%eax
 82016e2:	89 85 ec fe ff ff    	mov    %eax,-0x114(%ebp)
 82016e8:	8b 85 2d ff ff ff    	mov    -0xd3(%ebp),%eax
 82016ee:	89 85 f0 fe ff ff    	mov    %eax,-0x110(%ebp)
 82016f4:	8b 85 31 ff ff ff    	mov    -0xcf(%ebp),%eax
 82016fa:	89 85 f4 fe ff ff    	mov    %eax,-0x10c(%ebp)
 8201700:	8b 85 35 ff ff ff    	mov    -0xcb(%ebp),%eax
 8201706:	89 85 f8 fe ff ff    	mov    %eax,-0x108(%ebp)
 820170c:	8b 85 39 ff ff ff    	mov    -0xc7(%ebp),%eax
 8201712:	89 85 fc fe ff ff    	mov    %eax,-0x104(%ebp)
 8201718:	8b 85 3d ff ff ff    	mov    -0xc3(%ebp),%eax
 820171e:	89 85 00 ff ff ff    	mov    %eax,-0x100(%ebp)
 8201724:	8b 85 41 ff ff ff    	mov    -0xbf(%ebp),%eax
 820172a:	89 85 04 ff ff ff    	mov    %eax,-0xfc(%ebp)
 8201730:	8b 85 45 ff ff ff    	mov    -0xbb(%ebp),%eax
 8201736:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
 820173c:	8b 85 49 ff ff ff    	mov    -0xb7(%ebp),%eax
 8201742:	89 85 0c ff ff ff    	mov    %eax,-0xf4(%ebp)
 8201748:	8b 85 4d ff ff ff    	mov    -0xb3(%ebp),%eax
 820174e:	89 85 10 ff ff ff    	mov    %eax,-0xf0(%ebp)
 8201754:	8b 85 51 ff ff ff    	mov    -0xaf(%ebp),%eax
 820175a:	89 85 14 ff ff ff    	mov    %eax,-0xec(%ebp)
 8201760:	0f b6 85 55 ff ff ff 	movzbl -0xab(%ebp),%eax
 8201767:	88 85 18 ff ff ff    	mov    %al,-0xe8(%ebp)
 820176d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8201770:	89 85 e3 fe ff ff    	mov    %eax,-0x11d(%ebp)
 8201776:	c7 44 24 4c 00 00 00 	movl   $0x0,0x4c(%esp)
 820177d:	00 
 820177e:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 8201785:	00 
 8201786:	c7 44 24 44 0e 00 00 	movl   $0xe,0x44(%esp)
 820178d:	00 
 820178e:	8b 85 dc fe ff ff    	mov    -0x124(%ebp),%eax
 8201794:	89 44 24 04          	mov    %eax,0x4(%esp)
 8201798:	8b 85 e0 fe ff ff    	mov    -0x120(%ebp),%eax
 820179e:	89 44 24 08          	mov    %eax,0x8(%esp)
 82017a2:	8b 85 e4 fe ff ff    	mov    -0x11c(%ebp),%eax
 82017a8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82017ac:	8b 85 e8 fe ff ff    	mov    -0x118(%ebp),%eax
 82017b2:	89 44 24 10          	mov    %eax,0x10(%esp)
 82017b6:	8b 85 ec fe ff ff    	mov    -0x114(%ebp),%eax
 82017bc:	89 44 24 14          	mov    %eax,0x14(%esp)
 82017c0:	8b 85 f0 fe ff ff    	mov    -0x110(%ebp),%eax
 82017c6:	89 44 24 18          	mov    %eax,0x18(%esp)
 82017ca:	8b 85 f4 fe ff ff    	mov    -0x10c(%ebp),%eax
 82017d0:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 82017d4:	8b 85 f8 fe ff ff    	mov    -0x108(%ebp),%eax
 82017da:	89 44 24 20          	mov    %eax,0x20(%esp)
 82017de:	8b 85 fc fe ff ff    	mov    -0x104(%ebp),%eax
 82017e4:	89 44 24 24          	mov    %eax,0x24(%esp)
 82017e8:	8b 85 00 ff ff ff    	mov    -0x100(%ebp),%eax
 82017ee:	89 44 24 28          	mov    %eax,0x28(%esp)
 82017f2:	8b 85 04 ff ff ff    	mov    -0xfc(%ebp),%eax
 82017f8:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 82017fc:	8b 85 08 ff ff ff    	mov    -0xf8(%ebp),%eax
 8201802:	89 44 24 30          	mov    %eax,0x30(%esp)
 8201806:	8b 85 0c ff ff ff    	mov    -0xf4(%ebp),%eax
 820180c:	89 44 24 34          	mov    %eax,0x34(%esp)
 8201810:	8b 85 10 ff ff ff    	mov    -0xf0(%ebp),%eax
 8201816:	89 44 24 38          	mov    %eax,0x38(%esp)
 820181a:	8b 85 14 ff ff ff    	mov    -0xec(%ebp),%eax
 8201820:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 8201824:	0f b6 85 18 ff ff ff 	movzbl -0xe8(%ebp),%eax
 820182b:	88 44 24 40          	mov    %al,0x40(%esp)
 820182f:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8201832:	89 04 24             	mov    %eax,(%esp)
 8201835:	e8 4c 15 30 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 820183a:	89 45 dc             	mov    %eax,-0x24(%ebp)
 820183d:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8201841:	0f 88 df 00 00 00    	js     8201926 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0xe1e>
 8201847:	8b 45 dc             	mov    -0x24(%ebp),%eax
 820184a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 820184e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8201855:	00 
 8201856:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820185d:	00 
 820185e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8201861:	89 04 24             	mov    %eax,(%esp)
 8201864:	e8 f1 ad 47 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 8201869:	e9 b8 00 00 00       	jmp    8201926 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0xe1e>
 820186e:	83 fa 02             	cmp    $0x2,%edx
 8201871:	74 0d                	je     8201880 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0xd78>
 8201873:	83 fa 01             	cmp    $0x1,%edx
 8201876:	74 50                	je     82018c8 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0xdc0>
 8201878:	89 04 24             	mov    %eax,(%esp)
 820187b:	e8 d0 1e 8e 00       	call   8ae3750 <_Unwind_Resume>
 8201880:	89 04 24             	mov    %eax,(%esp)
 8201883:	e8 58 44 52 00       	call   8725ce0 <__cxa_begin_catch>
 8201888:	8b 00                	mov    (%eax),%eax
 820188a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 820188d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8201890:	0f b6 c0             	movzbl %al,%eax
 8201893:	89 44 24 08          	mov    %eax,0x8(%esp)
 8201897:	c7 44 24 04 54 00 00 	movl   $0x54,0x4(%esp)
 820189e:	00 
 820189f:	8b 45 0c             	mov    0xc(%ebp),%eax
 82018a2:	89 04 24             	mov    %eax,(%esp)
 82018a5:	e8 98 a6 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82018aa:	eb 15                	jmp    82018c1 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0xdb9>
 82018ac:	89 d3                	mov    %edx,%ebx
 82018ae:	89 c6                	mov    %eax,%esi
 82018b0:	e8 7b 43 52 00       	call   8725c30 <__cxa_end_catch>
 82018b5:	89 f0                	mov    %esi,%eax
 82018b7:	89 da                	mov    %ebx,%edx
 82018b9:	89 04 24             	mov    %eax,(%esp)
 82018bc:	e8 8f 1e 8e 00       	call   8ae3750 <_Unwind_Resume>
 82018c1:	e8 6a 43 52 00       	call   8725c30 <__cxa_end_catch>
 82018c6:	eb 5e                	jmp    8201926 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0xe1e>
 82018c8:	89 04 24             	mov    %eax,(%esp)
 82018cb:	e8 10 44 52 00       	call   8725ce0 <__cxa_begin_catch>
 82018d0:	8b 00                	mov    (%eax),%eax
 82018d2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 82018d5:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 82018d9:	79 28                	jns    8201903 <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0xdfb>
 82018db:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82018e2:	00 
 82018e3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82018ea:	00 
 82018eb:	c7 44 24 04 60 f6 bc 	movl   $0x8bcf660,0x4(%esp)
 82018f2:	08 
 82018f3:	c7 04 24 06 97 00 00 	movl   $0x9706,(%esp)
 82018fa:	e8 d8 ef 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82018ff:	89 c3                	mov    %eax,%ebx
 8201901:	eb 1c                	jmp    820191f <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0xe17>
 8201903:	bb 00 00 00 00       	mov    $0x0,%ebx
 8201908:	eb 15                	jmp    820191f <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0xe17>
 820190a:	89 d3                	mov    %edx,%ebx
 820190c:	89 c6                	mov    %eax,%esi
 820190e:	e8 1d 43 52 00       	call   8725c30 <__cxa_end_catch>
 8201913:	89 f0                	mov    %esi,%eax
 8201915:	89 da                	mov    %ebx,%edx
 8201917:	89 04 24             	mov    %eax,(%esp)
 820191a:	e8 31 1e 8e 00       	call   8ae3750 <_Unwind_Resume>
 820191f:	e8 0c 43 52 00       	call   8725c30 <__cxa_end_catch>
 8201924:	eb 05                	jmp    820192b <_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf+0xe23>
 8201926:	bb 00 00 00 00       	mov    $0x0,%ebx
 820192b:	89 d8                	mov    %ebx,%eax
 820192d:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8201930:	83 c4 00             	add    $0x0,%esp
 8201933:	5b                   	pop    %ebx
 8201934:	5e                   	pop    %esi
 8201935:	5f                   	pop    %edi
 8201936:	5d                   	pop    %ebp
 8201937:	c3                   	ret

```

```c
// Dispatcher_ModItemAttr::dispatch_sig @ 0x8200b08

/* Dispatcher_ModItemAttr::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_ModItemAttr::dispatch_sig(Dispatcher_ModItemAttr *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  ServiceRestrictManager *pSVar12;
  CDataManager *this_00;
  uint uVar13;
  int *piVar14;
  CInventory *pCVar15;
  uint uVar16;
  undefined1 local_16c [8];
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined1 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined2 local_eb;
  undefined2 uStack_e9;
  undefined2 local_e7;
  undefined2 uStack_e5;
  undefined4 local_e3;
  undefined4 local_df;
  undefined4 local_db;
  undefined4 local_d7;
  undefined4 local_d3;
  undefined4 local_cf;
  undefined4 local_cb;
  undefined4 local_c7;
  undefined4 local_c3;
  undefined4 local_bf;
  undefined4 local_bb;
  undefined4 local_b7;
  undefined4 local_b3;
  undefined1 local_af;
  Inven_Item local_ae;
  char cStack_ad;
  undefined2 uStack_ac;
  undefined2 local_aa;
  undefined2 uStack_a8;
  undefined4 local_a6;
  undefined4 local_a2;
  undefined4 local_9e;
  undefined4 local_9a;
  undefined4 local_96;
  undefined4 local_92;
  undefined4 local_8e;
  undefined4 local_8a;
  undefined4 local_86;
  undefined4 local_82;
  undefined4 local_7e;
  undefined4 local_7a;
  undefined4 local_76;
  undefined1 local_72;
  ushort local_64;
  ulong local_62;
  ushort local_5e;
  cMyTrace local_5c [16];
  int local_4c;
  int local_48;
  uint local_44;
  CInventory *local_40;
  CItem *local_3c;
  ushort local_36;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar7 = CUser::get_state(param_1);
  if ((iVar7 == 3) &&
     (iVar7 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar7 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar8 = CUser::get_acc_id(param_1);
                    /* try { // try from 08200b5d to 08201868 has its CatchHandler @ 0820186e */
    uVar9 = NumberToString(uVar8,0);
    uVar10 = CUser::get_state(param_1);
    cMyTrace::cMyTrace(local_5c,
                       "virtual int Dispatcher_ModItemAttr::dispatch_sig(CUser*, PacketBuf&)",0x95db
                       ,5);
    cMyTrace::operator()
              (local_5c,"Dispatcher_ModItemAttr => User State : %d, m_id : %s",uVar10,uVar9);
    puVar11 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar11 = 0;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar11,&int::typeinfo,0);
  }
  pSVar12 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
  cVar3 = ServiceRestrictManager::isRestricted(pSVar12,param_1,1,0xf);
  if (cVar3 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0x54,0xd1);
    return 0;
  }
  local_44 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x26);
  if (local_44 != 0) {
    CUser::SendCmdErrorPacket(param_1,0x54,local_44 & 0xff);
    return 0;
  }
  cVar3 = CUser::CheckInTrade(param_1);
  if (cVar3 != '\0') {
    return 0;
  }
  cVar3 = PacketBuf::get_short(param_2,&local_64);
  if (((cVar3 == '\x01') && (cVar3 = PacketBuf::get_int(param_2,&local_62), cVar3 == '\x01')) &&
     (cVar3 = PacketBuf::get_short(param_2,&local_5e), cVar3 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    puVar11 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar11 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar11,&int::typeinfo,0);
  }
  local_40 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  Inven_Item::Inven_Item(&local_ae);
  uVar8 = (uint)local_64;
  uVar9 = 1;
  CInventory::GetInvenSlot((int)local_16c,(int)local_40);
  local_ae = SUB41(local_16c._0_4_,0);
  cStack_ad = SUB41(local_16c._0_4_,1);
  uStack_ac = SUB42(local_16c._0_4_,2);
  local_aa = (undefined2)local_16c._4_4_;
  uStack_a8 = SUB42(local_16c._4_4_,2);
  local_a6 = local_164;
  local_a2 = local_160;
  local_9e = local_15c;
  local_9a = local_158;
  local_96 = local_154;
  local_92 = local_150;
  local_8e = local_14c;
  local_8a = local_148;
  local_86 = local_144;
  local_82 = local_140;
  local_7e = local_13c;
  local_7a = local_138;
  local_76 = local_134;
  local_72 = local_130;
  cVar3 = Inven_Item::isEmpty(&local_ae);
  if (cVar3 != '\0') {
    puVar11 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar11 = 4;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar11,&ENUM_ERROR::typeinfo,0);
  }
  if (CONCAT22(local_aa,uStack_ac) != local_62) {
    puVar11 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar11 = 4;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar11,&ENUM_ERROR::typeinfo,0);
  }
  if (cStack_ad != '\x01') {
    puVar11 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar11 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar11,&ENUM_ERROR::typeinfo,0);
  }
  iVar7 = CONCAT22(local_aa,uStack_ac);
  this_00 = (CDataManager *)G_CDataManager();
  local_3c = (CItem *)CDataManager::find_item(this_00,iVar7);
  if (local_3c == (CItem *)0x0) {
    puVar11 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar11 = 4;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar11,&ENUM_ERROR::typeinfo,0);
  }
  iVar7 = (**(code **)(*(int *)local_3c + 0xc))(local_3c,iVar7,uVar9,uVar8);
  if ((iVar7 < 10) || (iVar7 = (**(code **)(*(int *)local_3c + 0xc))(local_3c), 0x15 < iVar7)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    puVar11 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar11 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar11,&ENUM_ERROR::typeinfo,0);
  }
  Inven_Item::Inven_Item((Inven_Item *)&local_eb);
  uVar8 = (uint)local_5e;
  uVar9 = 1;
  pCVar15 = local_40;
  CInventory::GetInvenSlot((int)local_16c,(int)local_40);
  local_eb = (undefined2)local_16c._0_4_;
  uStack_e9 = SUB42(local_16c._0_4_,2);
  local_e7 = (undefined2)local_16c._4_4_;
  uStack_e5 = SUB42(local_16c._4_4_,2);
  local_e3 = local_164;
  local_df = local_160;
  local_db = local_15c;
  local_d7 = local_158;
  local_d3 = local_154;
  local_cf = local_150;
  local_cb = local_14c;
  local_c7 = local_148;
  local_c3 = local_144;
  local_bf = local_140;
  local_bb = local_13c;
  local_b7 = local_138;
  local_b3 = local_134;
  local_af = local_130;
  cVar3 = Inven_Item::isEmpty((Inven_Item *)&local_eb);
  if (cVar3 != '\0') {
    puVar11 = (undefined4 *)__cxa_allocate_exception(4,pCVar15,uVar9);
    *puVar11 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar11,&ENUM_ERROR::typeinfo,0);
  }
  uVar13 = (uint)local_64;
  uVar16 = 1;
  cVar3 = CUser::CheckItemLock(param_1,1,uVar13);
  if (cVar3 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0x54,0xd5);
    return 0;
  }
  local_36 = 0;
  local_34 = 1;
  uVar2 = CONCAT22(local_e7,uStack_e9);
  if (uVar2 != 0x28d14e) {
    if (uVar2 < 0x28d14f) {
      if ((uVar2 != 0xf) && (uVar2 != 0x381)) {
        if (uVar2 != 0xe) goto LAB_0820113e;
        goto LAB_08201160;
      }
    }
    else {
LAB_0820113e:
      if (uVar2 == 0x292090f1) {
LAB_08201160:
        local_36 = 1;
        bVar5 = Inven_Item::GetReSealCount(&local_ae);
        if (6 < bVar5) {
          puVar11 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar11 = 0xd;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar11,&ENUM_ERROR::typeinfo,0);
        }
        iVar7 = (**(code **)(*(int *)local_3c + 0xc))(local_3c,uVar16,uVar13,uVar8);
        if (iVar7 == 0xb) {
          puVar11 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar11 = 0x13;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar11,&ENUM_ERROR::typeinfo,0);
        }
        bVar5 = Inven_Item::GetReSealCount(&local_ae);
        uVar8 = (uint)bVar5;
        bVar6 = CItem::get_grade(local_3c);
        uVar13 = (uint)bVar6;
        bVar4 = CItem::get_rarity(local_3c);
        uVar16 = (uint)bVar4;
        iVar7 = G_CDataManager();
        local_34 = reseal_table_t::get_reseal_cost
                             ((reseal_table_t *)(iVar7 + 0x2c),bVar4,bVar6,bVar5);
        if (local_34 < 0) {
          puVar11 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar11 = 0xfffffffe;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar11,&int::typeinfo,0);
        }
        iVar7 = CItem::GetAttachType(local_3c);
        if (iVar7 != 3) {
          puVar11 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar11 = 0x13;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar11,&ENUM_ERROR::typeinfo,0);
        }
        goto LAB_08201404;
      }
      if (uVar2 != 0x292090f2) {
        if (uVar2 != 0x28978e) {
          puVar11 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar11 = 0x11;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar11,&ENUM_ERROR::typeinfo,0);
        }
        local_36 = 1;
        iVar7 = (**(code **)(*(int *)local_3c + 0xc))(local_3c);
        if (iVar7 == 0xb) {
          puVar11 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar11 = 0x13;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar11,&ENUM_ERROR::typeinfo,0);
        }
        iVar7 = CItem::GetAttachType(local_3c);
        if (iVar7 != 3) {
          puVar11 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar11 = 0x13;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar11,&ENUM_ERROR::typeinfo,0);
        }
        uVar8 = Inven_Item::GetReSealCount(&local_ae);
        uVar8 = uVar8 & 0xff;
        bVar5 = CItem::get_grade(local_3c);
        uVar13 = (uint)bVar5;
        bVar6 = CItem::get_rarity(local_3c);
        uVar16 = (uint)bVar6;
        cVar3 = G_CDataManager();
        local_34 = reseal_table_t::get_oneshot_reseal_cost(cVar3 + ',',bVar6,bVar5);
        if (local_34 < 0) {
          puVar11 = (undefined4 *)__cxa_allocate_exception(4,uVar16,uVar13,uVar8);
          *puVar11 = 0xfffffffe;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar11,&int::typeinfo,0);
        }
        goto LAB_08201404;
      }
    }
  }
  local_36 = 2;
LAB_08201404:
  iVar7 = Inven_Item::get_add_info((Inven_Item *)&local_eb);
  if (iVar7 < local_34) {
    puVar11 = (undefined4 *)__cxa_allocate_exception(4,uVar16,uVar13,uVar8);
    *puVar11 = 0x16;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar11,&ENUM_ERROR::typeinfo,0);
  }
  cVar3 = CInventory::delete_item(local_40,1,local_5e,local_34,3,1);
  if (cVar3 == '\x01') {
    if (local_36 == 1) {
      if (local_ae != (Inven_Item)0x0) {
        puVar11 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar11 = 0x12;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar11,&ENUM_ERROR::typeinfo,0);
      }
      local_ae = (Inven_Item)0x1;
      local_4c = 7;
      uVar8 = Inven_Item::GetReSealCount(&local_ae);
      local_48 = (uVar8 & 0xff) + 1;
      piVar14 = std::min<int>(&local_48,&local_4c);
      Inven_Item::SetReSealCount(&local_ae,(uchar)*piVar14);
    }
    else if (local_36 == 2) {
      iVar7 = get_rand_int(0);
      Inven_Item::set_add_info(&local_ae,iVar7);
    }
    CInventory::update_item
              (local_40,1,local_64,CONCAT22(uStack_ac,CONCAT11(cStack_ad,local_ae)),
               CONCAT22(uStack_a8,local_aa),local_a6,local_a2,local_9e,local_9a,local_96,local_92,
               local_8e,local_8a,local_86,local_82,local_7e,local_7a,local_76,local_72);
    _SendResult(this,param_1,local_36,local_5e,local_64);
    local_30 = 0;
    iVar7 = CUser::GetPremiumInfo(param_1);
    local_30 = WongWork::CUserPremium::GetReturnItemRate(iVar7);
    if ((local_30 != 0) && (local_2c = (local_34 * local_30) / 100, 0 < local_2c)) {
      local_128 = CONCAT22(uStack_e9,local_eb);
      local_11c = local_df;
      local_118 = local_db;
      local_114 = local_d7;
      local_110 = local_d3;
      local_10c = local_cf;
      local_108 = local_cb;
      local_104 = local_c7;
      local_100 = local_c3;
      local_fc = local_bf;
      local_f8 = local_bb;
      local_f4 = local_b7;
      local_f0 = local_b3;
      local_ec = local_af;
      local_124._0_3_ = (undefined3)CONCAT22(uStack_e5,local_e7);
      local_124._3_1_ = (undefined1)local_2c;
      local_120._3_1_ = (undefined1)((uint)local_e3 >> 0x18);
      local_120._0_3_ = (undefined3)((uint)local_2c >> 8);
      local_28 = CInventory::insertItemIntoInventory
                           (local_40,local_128,local_124,local_120,local_df,local_db,local_d7,
                            local_d3,local_cf,local_cb,local_c7,local_c3,local_bf,local_bb,local_b7,
                            local_b3,local_af,0xe,1,0);
      if (-1 < local_28) {
        CUser::SendUpdateItemList(param_1,1,0,local_28);
      }
    }
    return 0;
  }
  puVar11 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar11 = 0xfffffffd;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar11,&int::typeinfo,0);
}

```

