# ARAD__DISPATCHER__Dispatcher_AradEmblemCompound

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## checkWorkState

```asm
// === 0819fcb4 ARAD::DISPATCHER::Dispatcher_AradEmblemCompound::checkWorkState  [0x0819fcb4-0x819fd7d] ===
 819fcb4:	55                   	push   %ebp
 819fcb5:	89 e5                	mov    %esp,%ebp
 819fcb7:	83 ec 28             	sub    $0x28,%esp
 819fcba:	e8 27 29 fc ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 819fcbf:	c7 44 24 0c 15 00 00 	movl   $0x15,0xc(%esp)
 819fcc6:	00 
 819fcc7:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 819fcce:	00 
 819fccf:	8b 55 0c             	mov    0xc(%ebp),%edx
 819fcd2:	89 54 24 04          	mov    %edx,0x4(%esp)
 819fcd6:	89 04 24             	mov    %eax,(%esp)
 819fcd9:	e8 da e9 fc ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 819fcde:	84 c0                	test   %al,%al
 819fce0:	74 22                	je     819fd04 <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound14checkWorkStateEP5CUserRN4arad21SigAradEmblemCompoundE+0x50>
 819fce2:	c7 44 24 08 d1 00 00 	movl   $0xd1,0x8(%esp)
 819fce9:	00 
 819fcea:	c7 44 24 04 4e 02 00 	movl   $0x24e,0x4(%esp)
 819fcf1:	00 
 819fcf2:	8b 45 0c             	mov    0xc(%ebp),%eax
 819fcf5:	89 04 24             	mov    %eax,(%esp)
 819fcf8:	e8 45 c2 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 819fcfd:	b8 00 00 00 00       	mov    $0x0,%eax
 819fd02:	eb 77                	jmp    819fd7b <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound14checkWorkStateEP5CUserRN4arad21SigAradEmblemCompoundE+0xc7>
 819fd04:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 819fd09:	c7 44 24 08 2a 00 00 	movl   $0x2a,0x8(%esp)
 819fd10:	00 
 819fd11:	8b 55 0c             	mov    0xc(%ebp),%edx
 819fd14:	89 54 24 04          	mov    %edx,0x4(%esp)
 819fd18:	89 04 24             	mov    %eax,(%esp)
 819fd1b:	e8 e2 8c 0e 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 819fd20:	89 45 f4             	mov    %eax,-0xc(%ebp)
 819fd23:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 819fd27:	74 24                	je     819fd4d <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound14checkWorkStateEP5CUserRN4arad21SigAradEmblemCompoundE+0x99>
 819fd29:	8b 45 f4             	mov    -0xc(%ebp),%eax
 819fd2c:	0f b6 c0             	movzbl %al,%eax
 819fd2f:	89 44 24 08          	mov    %eax,0x8(%esp)
 819fd33:	c7 44 24 04 4e 02 00 	movl   $0x24e,0x4(%esp)
 819fd3a:	00 
 819fd3b:	8b 45 0c             	mov    0xc(%ebp),%eax
 819fd3e:	89 04 24             	mov    %eax,(%esp)
 819fd41:	e8 fc c1 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 819fd46:	b8 00 00 00 00       	mov    $0x0,%eax
 819fd4b:	eb 2e                	jmp    819fd7b <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound14checkWorkStateEP5CUserRN4arad21SigAradEmblemCompoundE+0xc7>
 819fd4d:	e8 24 3a ff ff       	call   8193776 <_ZN4ARAD9SingletonI20EmblemCompoundServerE3GetEv>
 819fd52:	8b 55 10             	mov    0x10(%ebp),%edx
 819fd55:	89 54 24 08          	mov    %edx,0x8(%esp)
 819fd59:	8b 55 0c             	mov    0xc(%ebp),%edx
 819fd5c:	89 54 24 04          	mov    %edx,0x4(%esp)
 819fd60:	89 04 24             	mov    %eax,(%esp)
 819fd63:	e8 ce 18 ff ff       	call   8191636 <_ZN20EmblemCompoundServer14CheckConditionEP5CUserPN4arad21SigAradEmblemCompoundE>
 819fd68:	83 f0 01             	xor    $0x1,%eax
 819fd6b:	84 c0                	test   %al,%al
 819fd6d:	74 07                	je     819fd76 <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound14checkWorkStateEP5CUserRN4arad21SigAradEmblemCompoundE+0xc2>
 819fd6f:	b8 00 00 00 00       	mov    $0x0,%eax
 819fd74:	eb 05                	jmp    819fd7b <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound14checkWorkStateEP5CUserRN4arad21SigAradEmblemCompoundE+0xc7>
 819fd76:	b8 01 00 00 00       	mov    $0x1,%eax
 819fd7b:	c9                   	leave
 819fd7c:	c3                   	ret
 819fd7d:	90                   	nop

```

```c
// ARAD::DISPATCHER::Dispatcher_AradEmblemCompound::checkWorkState @ 0x819fcb4

/* ARAD::DISPATCHER::Dispatcher_AradEmblemCompound::checkWorkState(CUser*,
   arad::SigAradEmblemCompound&) */

undefined4 __thiscall
ARAD::DISPATCHER::Dispatcher_AradEmblemCompound::checkWorkState
          (Dispatcher_AradEmblemCompound *this,CUser *param_1,SigAradEmblemCompound *param_2)

{
  char cVar1;
  ServiceRestrictManager *pSVar2;
  undefined4 uVar3;
  uint uVar4;
  EmblemCompoundServer *this_00;
  
  pSVar2 = (ServiceRestrictManager *)Singleton<ServiceRestrictManager>::Get();
  cVar1 = ServiceRestrictManager::isRestricted(pSVar2,param_1,1,0x15);
  if (cVar1 == '\0') {
    uVar4 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x2a);
    if (uVar4 == 0) {
      this_00 = (EmblemCompoundServer *)Singleton<EmblemCompoundServer>::Get();
      cVar1 = EmblemCompoundServer::CheckCondition(this_00,param_1,param_2);
      if (cVar1 == '\x01') {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x24e,uVar4 & 0xff);
      uVar3 = 0;
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x24e,0xd1);
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## dispatch_sig

```asm
// === 0819fd7e ARAD::DISPATCHER::Dispatcher_AradEmblemCompound::dispatch_sig  [0x0819fd7e-0x81a003d] ===
 819fd7e:	55                   	push   %ebp
 819fd7f:	89 e5                	mov    %esp,%ebp
 819fd81:	56                   	push   %esi
 819fd82:	53                   	push   %ebx
 819fd83:	83 ec 40             	sub    $0x40,%esp
 819fd86:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 819fd8a:	75 0a                	jne    819fd96 <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound12dispatch_sigEP5CUserR9PacketBuf+0x18>
 819fd8c:	bb f1 06 00 00       	mov    $0x6f1,%ebx
 819fd91:	e9 9e 02 00 00       	jmp    81a0034 <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound12dispatch_sigEP5CUserR9PacketBuf+0x2b6>
 819fd96:	8b 45 0c             	mov    0xc(%ebp),%eax
 819fd99:	89 04 24             	mov    %eax,(%esp)
 819fd9c:	e8 91 06 f8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 819fda1:	85 c0                	test   %eax,%eax
 819fda3:	0f 94 c0             	sete   %al
 819fda6:	84 c0                	test   %al,%al
 819fda8:	74 0a                	je     819fdb4 <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound12dispatch_sigEP5CUserR9PacketBuf+0x36>
 819fdaa:	bb 00 00 00 00       	mov    $0x0,%ebx
 819fdaf:	e9 80 02 00 00       	jmp    81a0034 <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound12dispatch_sigEP5CUserR9PacketBuf+0x2b6>
 819fdb4:	8b 45 0c             	mov    0xc(%ebp),%eax
 819fdb7:	89 04 24             	mov    %eax,(%esp)
 819fdba:	e8 cd a5 f3 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 819fdbf:	83 f8 02             	cmp    $0x2,%eax
 819fdc2:	7e 10                	jle    819fdd4 <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound12dispatch_sigEP5CUserR9PacketBuf+0x56>
 819fdc4:	8b 45 0c             	mov    0xc(%ebp),%eax
 819fdc7:	89 04 24             	mov    %eax,(%esp)
 819fdca:	e8 bd a5 f3 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 819fdcf:	83 f8 04             	cmp    $0x4,%eax
 819fdd2:	7e 07                	jle    819fddb <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound12dispatch_sigEP5CUserR9PacketBuf+0x5d>
 819fdd4:	b8 01 00 00 00       	mov    $0x1,%eax
 819fdd9:	eb 05                	jmp    819fde0 <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound12dispatch_sigEP5CUserR9PacketBuf+0x62>
 819fddb:	b8 00 00 00 00       	mov    $0x0,%eax
 819fde0:	84 c0                	test   %al,%al
 819fde2:	74 25                	je     819fe09 <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound12dispatch_sigEP5CUserR9PacketBuf+0x8b>
 819fde4:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 819fdeb:	00 
 819fdec:	c7 44 24 04 4e 02 00 	movl   $0x24e,0x4(%esp)
 819fdf3:	00 
 819fdf4:	8b 45 0c             	mov    0xc(%ebp),%eax
 819fdf7:	89 04 24             	mov    %eax,(%esp)
 819fdfa:	e8 43 c1 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 819fdff:	bb 00 00 00 00       	mov    $0x0,%ebx
 819fe04:	e9 2b 02 00 00       	jmp    81a0034 <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound12dispatch_sigEP5CUserR9PacketBuf+0x2b6>
 819fe09:	e8 99 a5 f3 ff       	call   80da3a7 <_Z11G_GameWorldv>
 819fe0e:	89 04 24             	mov    %eax,(%esp)
 819fe11:	e8 d2 26 fa ff       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 819fe16:	84 c0                	test   %al,%al
 819fe18:	75 11                	jne    819fe2b <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound12dispatch_sigEP5CUserR9PacketBuf+0xad>
 819fe1a:	e8 88 a5 f3 ff       	call   80da3a7 <_Z11G_GameWorldv>
 819fe1f:	89 04 24             	mov    %eax,(%esp)
 819fe22:	e8 8b 0c 00 00       	call   81a0ab2 <_ZNK9GameWorld16IsFreePvPChannelEv>
 819fe27:	84 c0                	test   %al,%al
 819fe29:	74 07                	je     819fe32 <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound12dispatch_sigEP5CUserR9PacketBuf+0xb4>
 819fe2b:	b8 01 00 00 00       	mov    $0x1,%eax
 819fe30:	eb 05                	jmp    819fe37 <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound12dispatch_sigEP5CUserR9PacketBuf+0xb9>
 819fe32:	b8 00 00 00 00       	mov    $0x0,%eax
 819fe37:	84 c0                	test   %al,%al
 819fe39:	74 25                	je     819fe60 <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound12dispatch_sigEP5CUserR9PacketBuf+0xe2>
 819fe3b:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 819fe42:	00 
 819fe43:	c7 44 24 04 4e 02 00 	movl   $0x24e,0x4(%esp)
 819fe4a:	00 
 819fe4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 819fe4e:	89 04 24             	mov    %eax,(%esp)
 819fe51:	e8 ec c0 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 819fe56:	bb 00 00 00 00       	mov    $0x0,%ebx
 819fe5b:	e9 d4 01 00 00       	jmp    81a0034 <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound12dispatch_sigEP5CUserR9PacketBuf+0x2b6>
 819fe60:	8b 45 0c             	mov    0xc(%ebp),%eax
 819fe63:	89 04 24             	mov    %eax,(%esp)
 819fe66:	e8 93 a4 f3 ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 819fe6b:	84 c0                	test   %al,%al
 819fe6d:	74 25                	je     819fe94 <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound12dispatch_sigEP5CUserR9PacketBuf+0x116>
 819fe6f:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 819fe76:	00 
 819fe77:	c7 44 24 04 4e 02 00 	movl   $0x24e,0x4(%esp)
 819fe7e:	00 
 819fe7f:	8b 45 0c             	mov    0xc(%ebp),%eax
 819fe82:	89 04 24             	mov    %eax,(%esp)
 819fe85:	e8 b8 c0 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 819fe8a:	bb 00 00 00 00       	mov    $0x0,%ebx
 819fe8f:	e9 a0 01 00 00       	jmp    81a0034 <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound12dispatch_sigEP5CUserR9PacketBuf+0x2b6>
 819fe94:	8b 45 0c             	mov    0xc(%ebp),%eax
 819fe97:	89 04 24             	mov    %eax,(%esp)
 819fe9a:	e8 09 12 4e 00       	call   86810a8 <_ZN5CUser26isEnableAvatarSocketActionEv>
 819fe9f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 819fea2:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 819fea6:	74 27                	je     819fecf <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound12dispatch_sigEP5CUserR9PacketBuf+0x151>
 819fea8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 819feab:	0f b6 c0             	movzbl %al,%eax
 819feae:	89 44 24 08          	mov    %eax,0x8(%esp)
 819feb2:	c7 44 24 04 4e 02 00 	movl   $0x24e,0x4(%esp)
 819feb9:	00 
 819feba:	8b 45 0c             	mov    0xc(%ebp),%eax
 819febd:	89 04 24             	mov    %eax,(%esp)
 819fec0:	e8 7d c0 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 819fec5:	bb 00 00 00 00       	mov    $0x0,%ebx
 819feca:	e9 65 01 00 00       	jmp    81a0034 <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound12dispatch_sigEP5CUserR9PacketBuf+0x2b6>
 819fecf:	8d 45 de             	lea    -0x22(%ebp),%eax
 819fed2:	89 04 24             	mov    %eax,(%esp)
 819fed5:	e8 52 0b 00 00       	call   81a0a2c <_ZN4arad21SigAradEmblemCompoundC1Ev>
 819feda:	8d 45 de             	lea    -0x22(%ebp),%eax
 819fedd:	89 44 24 04          	mov    %eax,0x4(%esp)
 819fee1:	8b 45 10             	mov    0x10(%ebp),%eax
 819fee4:	89 04 24             	mov    %eax,(%esp)
 819fee7:	e8 c4 d1 3e 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 819feec:	83 f0 01             	xor    $0x1,%eax
 819feef:	84 c0                	test   %al,%al
 819fef1:	74 0a                	je     819fefd <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound12dispatch_sigEP5CUserR9PacketBuf+0x17f>
 819fef3:	bb 13 07 00 00       	mov    $0x713,%ebx
 819fef8:	e9 37 01 00 00       	jmp    81a0034 <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound12dispatch_sigEP5CUserR9PacketBuf+0x2b6>
 819fefd:	8d 45 de             	lea    -0x22(%ebp),%eax
 819ff00:	83 c0 08             	add    $0x8,%eax
 819ff03:	89 44 24 04          	mov    %eax,0x4(%esp)
 819ff07:	8b 45 10             	mov    0x10(%ebp),%eax
 819ff0a:	89 04 24             	mov    %eax,(%esp)
 819ff0d:	e8 9e d1 3e 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 819ff12:	83 f0 01             	xor    $0x1,%eax
 819ff15:	84 c0                	test   %al,%al
 819ff17:	74 0a                	je     819ff23 <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound12dispatch_sigEP5CUserR9PacketBuf+0x1a5>
 819ff19:	bb 17 07 00 00       	mov    $0x717,%ebx
 819ff1e:	e9 11 01 00 00       	jmp    81a0034 <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound12dispatch_sigEP5CUserR9PacketBuf+0x2b6>
 819ff23:	8d 45 de             	lea    -0x22(%ebp),%eax
 819ff26:	83 c0 14             	add    $0x14,%eax
 819ff29:	89 44 24 04          	mov    %eax,0x4(%esp)
 819ff2d:	8b 45 10             	mov    0x10(%ebp),%eax
 819ff30:	89 04 24             	mov    %eax,(%esp)
 819ff33:	e8 78 d1 3e 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 819ff38:	83 f0 01             	xor    $0x1,%eax
 819ff3b:	84 c0                	test   %al,%al
 819ff3d:	74 0a                	je     819ff49 <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound12dispatch_sigEP5CUserR9PacketBuf+0x1cb>
 819ff3f:	bb 1b 07 00 00       	mov    $0x71b,%ebx
 819ff44:	e9 eb 00 00 00       	jmp    81a0034 <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound12dispatch_sigEP5CUserR9PacketBuf+0x2b6>
 819ff49:	8d 45 de             	lea    -0x22(%ebp),%eax
 819ff4c:	89 44 24 08          	mov    %eax,0x8(%esp)
 819ff50:	8b 45 0c             	mov    0xc(%ebp),%eax
 819ff53:	89 44 24 04          	mov    %eax,0x4(%esp)
 819ff57:	8b 45 08             	mov    0x8(%ebp),%eax
 819ff5a:	89 04 24             	mov    %eax,(%esp)
 819ff5d:	e8 52 fd ff ff       	call   819fcb4 <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound14checkWorkStateEP5CUserRN4arad21SigAradEmblemCompoundE>
 819ff62:	83 f0 01             	xor    $0x1,%eax
 819ff65:	84 c0                	test   %al,%al
 819ff67:	74 0a                	je     819ff73 <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound12dispatch_sigEP5CUserR9PacketBuf+0x1f5>
 819ff69:	bb 00 00 00 00       	mov    $0x0,%ebx
 819ff6e:	e9 c1 00 00 00       	jmp    81a0034 <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound12dispatch_sigEP5CUserR9PacketBuf+0x2b6>
 819ff73:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 819ff78:	c7 44 24 08 23 07 00 	movl   $0x723,0x8(%esp)
 819ff7f:	00 
 819ff80:	c7 44 24 04 60 9a ba 	movl   $0x8ba9a60,0x4(%esp)
 819ff87:	08 
 819ff88:	89 04 24             	mov    %eax,(%esp)
 819ff8b:	e8 f6 fa 0e 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 819ff90:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 819ff97:	00 
 819ff98:	89 44 24 04          	mov    %eax,0x4(%esp)
 819ff9c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 819ff9f:	89 04 24             	mov    %eax,(%esp)
 819ffa2:	e8 7f 8c f2 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 819ffa7:	8b 45 0c             	mov    0xc(%ebp),%eax
 819ffaa:	89 04 24             	mov    %eax,(%esp)
 819ffad:	e8 e4 8c f2 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 819ffb2:	89 44 24 08          	mov    %eax,0x8(%esp)
 819ffb6:	c7 44 24 04 32 00 00 	movl   $0x32,0x4(%esp)
 819ffbd:	00 
 819ffbe:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 819ffc1:	89 04 24             	mov    %eax,(%esp)
 819ffc4:	e8 ed 77 ff ff       	call   81977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>
 819ffc9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 819ffcc:	89 04 24             	mov    %eax,(%esp)
 819ffcf:	e8 7a 8c f2 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 819ffd4:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 819ffdb:	00 
 819ffdc:	8d 55 de             	lea    -0x22(%ebp),%edx
 819ffdf:	89 54 24 04          	mov    %edx,0x4(%esp)
 819ffe3:	89 04 24             	mov    %eax,(%esp)
 819ffe6:	e8 67 e6 f3 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 819ffeb:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 819fff0:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 819fff3:	89 54 24 08          	mov    %edx,0x8(%esp)
 819fff7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 819fffe:	00 
 819ffff:	89 04 24             	mov    %eax,(%esp)
 81a0002:	e8 d7 0f 3d 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81a0007:	bb 00 00 00 00       	mov    $0x0,%ebx
 81a000c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81a000f:	89 04 24             	mov    %eax,(%esp)
 81a0012:	e8 bb c8 47 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81a0017:	eb 1b                	jmp    81a0034 <_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound12dispatch_sigEP5CUserR9PacketBuf+0x2b6>
 81a0019:	89 d3                	mov    %edx,%ebx
 81a001b:	89 c6                	mov    %eax,%esi
 81a001d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81a0020:	89 04 24             	mov    %eax,(%esp)
 81a0023:	e8 aa c8 47 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81a0028:	89 f0                	mov    %esi,%eax
 81a002a:	89 da                	mov    %ebx,%edx
 81a002c:	89 04 24             	mov    %eax,(%esp)
 81a002f:	e8 1c 37 94 00       	call   8ae3750 <_Unwind_Resume>
 81a0034:	89 d8                	mov    %ebx,%eax
 81a0036:	83 c4 40             	add    $0x40,%esp
 81a0039:	5b                   	pop    %ebx
 81a003a:	5e                   	pop    %esi
 81a003b:	5d                   	pop    %ebp
 81a003c:	c3                   	ret
 81a003d:	90                   	nop

```

```c
// ARAD::DISPATCHER::Dispatcher_AradEmblemCompound::dispatch_sig @ 0x819fd7e

/* ARAD::DISPATCHER::Dispatcher_AradEmblemCompound::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
ARAD::DISPATCHER::Dispatcher_AradEmblemCompound::dispatch_sig
          (Dispatcher_AradEmblemCompound *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  GameWorld *pGVar4;
  Stream *pSVar5;
  CStreamGuard *this_00;
  undefined4 uVar6;
  CStreamGuard local_30 [10];
  SigAradEmblemCompound local_26 [8];
  ushort auStack_1e [6];
  ushort uStack_12;
  uint local_10;
  
  if (param_1 == (CUser *)0x0) {
    return 0x6f1;
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
    CUser::SendCmdErrorPacket(param_1,0x24e,7);
    return 0;
  }
  pGVar4 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsPVPChannel(pGVar4);
  if (cVar2 == '\0') {
    pGVar4 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsFreePvPChannel(pGVar4);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_0819fe37;
    }
  }
  bVar1 = true;
LAB_0819fe37:
  if (bVar1) {
    CUser::SendCmdErrorPacket(param_1,0x24e,7);
    uVar6 = 0;
  }
  else {
    cVar2 = CUser::CheckInTrade(param_1);
    if (cVar2 == '\0') {
      local_10 = CUser::isEnableAvatarSocketAction(param_1);
      if (local_10 == 0) {
        arad::SigAradEmblemCompound::SigAradEmblemCompound(local_26);
        cVar2 = PacketBuf::get_short(param_2,(ushort *)local_26);
        if (cVar2 == '\x01') {
          cVar2 = PacketBuf::get_short(param_2,auStack_1e);
          if (cVar2 == '\x01') {
            cVar2 = PacketBuf::get_short(param_2,&uStack_12);
            if (cVar2 == '\x01') {
              cVar2 = checkWorkState(this,param_1,local_26);
              if (cVar2 == '\x01') {
                pSVar5 = (Stream *)
                         StreamPool::Acquire(GlobalData::s_stream_pool,
                                             "localjapan/Arad_PacketDispatcher.cpp",0x723);
                CStreamGuard::CStreamGuard(local_30,pSVar5,true);
                uVar6 = CUser::GetUID(param_1);
                    /* try { // try from 0819ffc4 to 081a0006 has its CatchHandler @ 081a0019 */
                make_internal_stream_jpn(local_30,0x32,uVar6);
                this_00 = (CStreamGuard *)CStreamGuard::operator->(local_30);
                CStreamGuard::put_binary(this_00,local_26,0x16);
                MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_30);
                uVar6 = 0;
                CStreamGuard::~CStreamGuard(local_30);
              }
              else {
                uVar6 = 0;
              }
            }
            else {
              uVar6 = 0x71b;
            }
          }
          else {
            uVar6 = 0x717;
          }
        }
        else {
          uVar6 = 0x713;
        }
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x24e,local_10 & 0xff);
        uVar6 = 0;
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x24e,7);
      uVar6 = 0;
    }
  }
  return uVar6;
}

```

