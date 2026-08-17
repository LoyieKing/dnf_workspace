# ARAD__DISPATCHER__Dispatcher_AradUseAvatarRecharge

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## checkWorkState

```asm
// === 0819f9d6 ARAD::DISPATCHER::Dispatcher_AradUseAvatarRecharge::checkWorkState  [0x0819f9d6-0x819fa55] ===
 819f9d6:	55                   	push   %ebp
 819f9d7:	89 e5                	mov    %esp,%ebp
 819f9d9:	83 ec 28             	sub    $0x28,%esp
 819f9dc:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 819f9e1:	c7 44 24 08 2a 00 00 	movl   $0x2a,0x8(%esp)
 819f9e8:	00 
 819f9e9:	8b 55 0c             	mov    0xc(%ebp),%edx
 819f9ec:	89 54 24 04          	mov    %edx,0x4(%esp)
 819f9f0:	89 04 24             	mov    %eax,(%esp)
 819f9f3:	e8 0a 90 0e 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 819f9f8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 819f9fb:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 819f9ff:	74 24                	je     819fa25 <_ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge14checkWorkStateEP5CUserRN4arad24SigAradUseAvatarRechargeE+0x4f>
 819fa01:	8b 45 f4             	mov    -0xc(%ebp),%eax
 819fa04:	0f b6 c0             	movzbl %al,%eax
 819fa07:	89 44 24 08          	mov    %eax,0x8(%esp)
 819fa0b:	c7 44 24 04 4d 02 00 	movl   $0x24d,0x4(%esp)
 819fa12:	00 
 819fa13:	8b 45 0c             	mov    0xc(%ebp),%eax
 819fa16:	89 04 24             	mov    %eax,(%esp)
 819fa19:	e8 24 c5 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 819fa1e:	b8 00 00 00 00       	mov    $0x0,%eax
 819fa23:	eb 2e                	jmp    819fa53 <_ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge14checkWorkStateEP5CUserRN4arad24SigAradUseAvatarRechargeE+0x7d>
 819fa25:	e8 78 3b ff ff       	call   81935a2 <_ZN4ARAD9SingletonI20AvatarRechargeServerE3GetEv>
 819fa2a:	8b 55 10             	mov    0x10(%ebp),%edx
 819fa2d:	89 54 24 08          	mov    %edx,0x8(%esp)
 819fa31:	8b 55 0c             	mov    0xc(%ebp),%edx
 819fa34:	89 54 24 04          	mov    %edx,0x4(%esp)
 819fa38:	89 04 24             	mov    %eax,(%esp)
 819fa3b:	e8 a2 0c ff ff       	call   81906e2 <_ZN20AvatarRechargeServer25CheckConditionUseRechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE>
 819fa40:	83 f0 01             	xor    $0x1,%eax
 819fa43:	84 c0                	test   %al,%al
 819fa45:	74 07                	je     819fa4e <_ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge14checkWorkStateEP5CUserRN4arad24SigAradUseAvatarRechargeE+0x78>
 819fa47:	b8 00 00 00 00       	mov    $0x0,%eax
 819fa4c:	eb 05                	jmp    819fa53 <_ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge14checkWorkStateEP5CUserRN4arad24SigAradUseAvatarRechargeE+0x7d>
 819fa4e:	b8 01 00 00 00       	mov    $0x1,%eax
 819fa53:	c9                   	leave
 819fa54:	c3                   	ret
 819fa55:	90                   	nop

```

```c
// ARAD::DISPATCHER::Dispatcher_AradUseAvatarRecharge::checkWorkState @ 0x819f9d6

/* ARAD::DISPATCHER::Dispatcher_AradUseAvatarRecharge::checkWorkState(CUser*,
   arad::SigAradUseAvatarRecharge&) */

undefined4 __thiscall
ARAD::DISPATCHER::Dispatcher_AradUseAvatarRecharge::checkWorkState
          (Dispatcher_AradUseAvatarRecharge *this,CUser *param_1,SigAradUseAvatarRecharge *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  AvatarRechargeServer *this_00;
  
  uVar2 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x2a);
  if (uVar2 == 0) {
    this_00 = (AvatarRechargeServer *)Singleton<AvatarRechargeServer>::Get();
    cVar1 = AvatarRechargeServer::CheckConditionUseRecharge(this_00,param_1,param_2);
    if (cVar1 == '\x01') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x24d,uVar2 & 0xff);
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## dispatch_sig

```asm
// === 0819fa56 ARAD::DISPATCHER::Dispatcher_AradUseAvatarRecharge::dispatch_sig  [0x0819fa56-0x819fcb3] ===
 819fa56:	55                   	push   %ebp
 819fa57:	89 e5                	mov    %esp,%ebp
 819fa59:	56                   	push   %esi
 819fa5a:	53                   	push   %ebx
 819fa5b:	83 ec 30             	sub    $0x30,%esp
 819fa5e:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 819fa62:	75 0a                	jne    819fa6e <_ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge12dispatch_sigEP5CUserR9PacketBuf+0x18>
 819fa64:	bb 9c 06 00 00       	mov    $0x69c,%ebx
 819fa69:	e9 3d 02 00 00       	jmp    819fcab <_ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge12dispatch_sigEP5CUserR9PacketBuf+0x255>
 819fa6e:	8b 45 0c             	mov    0xc(%ebp),%eax
 819fa71:	89 04 24             	mov    %eax,(%esp)
 819fa74:	e8 b9 09 f8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 819fa79:	85 c0                	test   %eax,%eax
 819fa7b:	0f 94 c0             	sete   %al
 819fa7e:	84 c0                	test   %al,%al
 819fa80:	74 0a                	je     819fa8c <_ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge12dispatch_sigEP5CUserR9PacketBuf+0x36>
 819fa82:	bb 00 00 00 00       	mov    $0x0,%ebx
 819fa87:	e9 1f 02 00 00       	jmp    819fcab <_ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge12dispatch_sigEP5CUserR9PacketBuf+0x255>
 819fa8c:	8b 45 0c             	mov    0xc(%ebp),%eax
 819fa8f:	89 04 24             	mov    %eax,(%esp)
 819fa92:	e8 f5 a8 f3 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 819fa97:	83 f8 02             	cmp    $0x2,%eax
 819fa9a:	7e 10                	jle    819faac <_ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge12dispatch_sigEP5CUserR9PacketBuf+0x56>
 819fa9c:	8b 45 0c             	mov    0xc(%ebp),%eax
 819fa9f:	89 04 24             	mov    %eax,(%esp)
 819faa2:	e8 e5 a8 f3 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 819faa7:	83 f8 04             	cmp    $0x4,%eax
 819faaa:	7e 07                	jle    819fab3 <_ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge12dispatch_sigEP5CUserR9PacketBuf+0x5d>
 819faac:	b8 01 00 00 00       	mov    $0x1,%eax
 819fab1:	eb 05                	jmp    819fab8 <_ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge12dispatch_sigEP5CUserR9PacketBuf+0x62>
 819fab3:	b8 00 00 00 00       	mov    $0x0,%eax
 819fab8:	84 c0                	test   %al,%al
 819faba:	74 25                	je     819fae1 <_ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge12dispatch_sigEP5CUserR9PacketBuf+0x8b>
 819fabc:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 819fac3:	00 
 819fac4:	c7 44 24 04 4d 02 00 	movl   $0x24d,0x4(%esp)
 819facb:	00 
 819facc:	8b 45 0c             	mov    0xc(%ebp),%eax
 819facf:	89 04 24             	mov    %eax,(%esp)
 819fad2:	e8 6b c4 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 819fad7:	bb 00 00 00 00       	mov    $0x0,%ebx
 819fadc:	e9 ca 01 00 00       	jmp    819fcab <_ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge12dispatch_sigEP5CUserR9PacketBuf+0x255>
 819fae1:	e8 c1 a8 f3 ff       	call   80da3a7 <_Z11G_GameWorldv>
 819fae6:	89 04 24             	mov    %eax,(%esp)
 819fae9:	e8 fa 29 fa ff       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 819faee:	84 c0                	test   %al,%al
 819faf0:	75 11                	jne    819fb03 <_ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge12dispatch_sigEP5CUserR9PacketBuf+0xad>
 819faf2:	e8 b0 a8 f3 ff       	call   80da3a7 <_Z11G_GameWorldv>
 819faf7:	89 04 24             	mov    %eax,(%esp)
 819fafa:	e8 b3 0f 00 00       	call   81a0ab2 <_ZNK9GameWorld16IsFreePvPChannelEv>
 819faff:	84 c0                	test   %al,%al
 819fb01:	74 07                	je     819fb0a <_ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge12dispatch_sigEP5CUserR9PacketBuf+0xb4>
 819fb03:	b8 01 00 00 00       	mov    $0x1,%eax
 819fb08:	eb 05                	jmp    819fb0f <_ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge12dispatch_sigEP5CUserR9PacketBuf+0xb9>
 819fb0a:	b8 00 00 00 00       	mov    $0x0,%eax
 819fb0f:	84 c0                	test   %al,%al
 819fb11:	74 25                	je     819fb38 <_ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge12dispatch_sigEP5CUserR9PacketBuf+0xe2>
 819fb13:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 819fb1a:	00 
 819fb1b:	c7 44 24 04 4d 02 00 	movl   $0x24d,0x4(%esp)
 819fb22:	00 
 819fb23:	8b 45 0c             	mov    0xc(%ebp),%eax
 819fb26:	89 04 24             	mov    %eax,(%esp)
 819fb29:	e8 14 c4 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 819fb2e:	bb 00 00 00 00       	mov    $0x0,%ebx
 819fb33:	e9 73 01 00 00       	jmp    819fcab <_ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge12dispatch_sigEP5CUserR9PacketBuf+0x255>
 819fb38:	8b 45 0c             	mov    0xc(%ebp),%eax
 819fb3b:	89 04 24             	mov    %eax,(%esp)
 819fb3e:	e8 bb a7 f3 ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 819fb43:	84 c0                	test   %al,%al
 819fb45:	74 25                	je     819fb6c <_ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge12dispatch_sigEP5CUserR9PacketBuf+0x116>
 819fb47:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 819fb4e:	00 
 819fb4f:	c7 44 24 04 4d 02 00 	movl   $0x24d,0x4(%esp)
 819fb56:	00 
 819fb57:	8b 45 0c             	mov    0xc(%ebp),%eax
 819fb5a:	89 04 24             	mov    %eax,(%esp)
 819fb5d:	e8 e0 c3 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 819fb62:	bb 00 00 00 00       	mov    $0x0,%ebx
 819fb67:	e9 3f 01 00 00       	jmp    819fcab <_ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge12dispatch_sigEP5CUserR9PacketBuf+0x255>
 819fb6c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819fb6f:	89 04 24             	mov    %eax,(%esp)
 819fb72:	e8 81 0e 00 00       	call   81a09f8 <_ZN4arad24SigAradUseAvatarRechargeC1Ev>
 819fb77:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819fb7a:	83 c0 02             	add    $0x2,%eax
 819fb7d:	89 44 24 04          	mov    %eax,0x4(%esp)
 819fb81:	8b 45 10             	mov    0x10(%ebp),%eax
 819fb84:	89 04 24             	mov    %eax,(%esp)
 819fb87:	e8 24 d5 3e 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 819fb8c:	83 f0 01             	xor    $0x1,%eax
 819fb8f:	84 c0                	test   %al,%al
 819fb91:	74 0a                	je     819fb9d <_ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge12dispatch_sigEP5CUserR9PacketBuf+0x147>
 819fb93:	bb b6 06 00 00       	mov    $0x6b6,%ebx
 819fb98:	e9 0e 01 00 00       	jmp    819fcab <_ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge12dispatch_sigEP5CUserR9PacketBuf+0x255>
 819fb9d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819fba0:	89 44 24 04          	mov    %eax,0x4(%esp)
 819fba4:	8b 45 10             	mov    0x10(%ebp),%eax
 819fba7:	89 04 24             	mov    %eax,(%esp)
 819fbaa:	e8 01 d5 3e 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 819fbaf:	83 f0 01             	xor    $0x1,%eax
 819fbb2:	84 c0                	test   %al,%al
 819fbb4:	74 0a                	je     819fbc0 <_ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge12dispatch_sigEP5CUserR9PacketBuf+0x16a>
 819fbb6:	bb ba 06 00 00       	mov    $0x6ba,%ebx
 819fbbb:	e9 eb 00 00 00       	jmp    819fcab <_ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge12dispatch_sigEP5CUserR9PacketBuf+0x255>
 819fbc0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819fbc3:	89 44 24 08          	mov    %eax,0x8(%esp)
 819fbc7:	8b 45 0c             	mov    0xc(%ebp),%eax
 819fbca:	89 44 24 04          	mov    %eax,0x4(%esp)
 819fbce:	8b 45 08             	mov    0x8(%ebp),%eax
 819fbd1:	89 04 24             	mov    %eax,(%esp)
 819fbd4:	e8 fd fd ff ff       	call   819f9d6 <_ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge14checkWorkStateEP5CUserRN4arad24SigAradUseAvatarRechargeE>
 819fbd9:	83 f0 01             	xor    $0x1,%eax
 819fbdc:	84 c0                	test   %al,%al
 819fbde:	74 0a                	je     819fbea <_ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge12dispatch_sigEP5CUserR9PacketBuf+0x194>
 819fbe0:	bb 00 00 00 00       	mov    $0x0,%ebx
 819fbe5:	e9 c1 00 00 00       	jmp    819fcab <_ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge12dispatch_sigEP5CUserR9PacketBuf+0x255>
 819fbea:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 819fbef:	c7 44 24 08 c2 06 00 	movl   $0x6c2,0x8(%esp)
 819fbf6:	00 
 819fbf7:	c7 44 24 04 60 9a ba 	movl   $0x8ba9a60,0x4(%esp)
 819fbfe:	08 
 819fbff:	89 04 24             	mov    %eax,(%esp)
 819fc02:	e8 7f fe 0e 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 819fc07:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 819fc0e:	00 
 819fc0f:	89 44 24 04          	mov    %eax,0x4(%esp)
 819fc13:	8d 45 e0             	lea    -0x20(%ebp),%eax
 819fc16:	89 04 24             	mov    %eax,(%esp)
 819fc19:	e8 08 90 f2 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 819fc1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 819fc21:	89 04 24             	mov    %eax,(%esp)
 819fc24:	e8 6d 90 f2 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 819fc29:	89 44 24 08          	mov    %eax,0x8(%esp)
 819fc2d:	c7 44 24 04 30 00 00 	movl   $0x30,0x4(%esp)
 819fc34:	00 
 819fc35:	8d 45 e0             	lea    -0x20(%ebp),%eax
 819fc38:	89 04 24             	mov    %eax,(%esp)
 819fc3b:	e8 76 7b ff ff       	call   81977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>
 819fc40:	8d 45 e0             	lea    -0x20(%ebp),%eax
 819fc43:	89 04 24             	mov    %eax,(%esp)
 819fc46:	e8 03 90 f2 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 819fc4b:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 819fc52:	00 
 819fc53:	8d 55 e8             	lea    -0x18(%ebp),%edx
 819fc56:	89 54 24 04          	mov    %edx,0x4(%esp)
 819fc5a:	89 04 24             	mov    %eax,(%esp)
 819fc5d:	e8 f0 e9 f3 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 819fc62:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 819fc67:	8d 55 e0             	lea    -0x20(%ebp),%edx
 819fc6a:	89 54 24 08          	mov    %edx,0x8(%esp)
 819fc6e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 819fc75:	00 
 819fc76:	89 04 24             	mov    %eax,(%esp)
 819fc79:	e8 60 13 3d 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 819fc7e:	bb 00 00 00 00       	mov    $0x0,%ebx
 819fc83:	8d 45 e0             	lea    -0x20(%ebp),%eax
 819fc86:	89 04 24             	mov    %eax,(%esp)
 819fc89:	e8 44 cc 47 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 819fc8e:	eb 1b                	jmp    819fcab <_ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge12dispatch_sigEP5CUserR9PacketBuf+0x255>
 819fc90:	89 d3                	mov    %edx,%ebx
 819fc92:	89 c6                	mov    %eax,%esi
 819fc94:	8d 45 e0             	lea    -0x20(%ebp),%eax
 819fc97:	89 04 24             	mov    %eax,(%esp)
 819fc9a:	e8 33 cc 47 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 819fc9f:	89 f0                	mov    %esi,%eax
 819fca1:	89 da                	mov    %ebx,%edx
 819fca3:	89 04 24             	mov    %eax,(%esp)
 819fca6:	e8 a5 3a 94 00       	call   8ae3750 <_Unwind_Resume>
 819fcab:	89 d8                	mov    %ebx,%eax
 819fcad:	83 c4 30             	add    $0x30,%esp
 819fcb0:	5b                   	pop    %ebx
 819fcb1:	5e                   	pop    %esi
 819fcb2:	5d                   	pop    %ebp
 819fcb3:	c3                   	ret

```

```c
// ARAD::DISPATCHER::Dispatcher_AradUseAvatarRecharge::dispatch_sig @ 0x819fa56

/* ARAD::DISPATCHER::Dispatcher_AradUseAvatarRecharge::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
ARAD::DISPATCHER::Dispatcher_AradUseAvatarRecharge::dispatch_sig
          (Dispatcher_AradUseAvatarRecharge *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  GameWorld *pGVar4;
  Stream *pSVar5;
  CStreamGuard *this_00;
  undefined4 uVar6;
  CStreamGuard local_24 [8];
  SigAradUseAvatarRecharge local_1c [2];
  ushort auStack_1a [7];
  
  if (param_1 == (CUser *)0x0) {
    return 0x69c;
  }
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 < 3) || (iVar3 = CUser::get_state(param_1), 4 < iVar3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    CUser::SendCmdErrorPacket(param_1,0x24d,7);
    return 0;
  }
  pGVar4 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsPVPChannel(pGVar4);
  if (cVar2 == '\0') {
    pGVar4 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsFreePvPChannel(pGVar4);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_0819fb0f;
    }
  }
  bVar1 = true;
LAB_0819fb0f:
  if (bVar1) {
    CUser::SendCmdErrorPacket(param_1,0x24d,7);
    uVar6 = 0;
  }
  else {
    cVar2 = CUser::CheckInTrade(param_1);
    if (cVar2 == '\0') {
      arad::SigAradUseAvatarRecharge::SigAradUseAvatarRecharge(local_1c);
      cVar2 = PacketBuf::get_short(param_2,auStack_1a);
      if (cVar2 == '\x01') {
        cVar2 = PacketBuf::get_short(param_2,(ushort *)local_1c);
        if (cVar2 == '\x01') {
          cVar2 = checkWorkState(this,param_1,local_1c);
          if (cVar2 == '\x01') {
            pSVar5 = (Stream *)
                     StreamPool::Acquire(GlobalData::s_stream_pool,
                                         "localjapan/Arad_PacketDispatcher.cpp",0x6c2);
            CStreamGuard::CStreamGuard(local_24,pSVar5,true);
            uVar6 = CUser::GetUID(param_1);
                    /* try { // try from 0819fc3b to 0819fc7d has its CatchHandler @ 0819fc90 */
            make_internal_stream_jpn(local_24,0x30,uVar6);
            this_00 = (CStreamGuard *)CStreamGuard::operator->(local_24);
            CStreamGuard::put_binary(this_00,local_1c,0x10);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_24);
            uVar6 = 0;
            CStreamGuard::~CStreamGuard(local_24);
          }
          else {
            uVar6 = 0;
          }
        }
        else {
          uVar6 = 0x6ba;
        }
      }
      else {
        uVar6 = 0x6b6;
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x24d,7);
      uVar6 = 0;
    }
  }
  return uVar6;
}

```

