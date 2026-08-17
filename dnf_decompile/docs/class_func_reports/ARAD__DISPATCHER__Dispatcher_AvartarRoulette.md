# ARAD__DISPATCHER__Dispatcher_AvartarRoulette

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## checkWorkState

```asm
// === 0819ee6c ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState  [0x0819ee6c-0x819ef53] ===
 819ee6c:	55                   	push   %ebp
 819ee6d:	89 e5                	mov    %esp,%ebp
 819ee6f:	83 ec 28             	sub    $0x28,%esp
 819ee72:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 819ee77:	c7 44 24 08 45 00 00 	movl   $0x45,0x8(%esp)
 819ee7e:	00 
 819ee7f:	8b 55 0c             	mov    0xc(%ebp),%edx
 819ee82:	89 54 24 04          	mov    %edx,0x4(%esp)
 819ee86:	89 04 24             	mov    %eax,(%esp)
 819ee89:	e8 74 9b 0e 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 819ee8e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 819ee91:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 819ee95:	74 27                	je     819eebe <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x52>
 819ee97:	8b 45 f4             	mov    -0xc(%ebp),%eax
 819ee9a:	0f b6 c0             	movzbl %al,%eax
 819ee9d:	89 44 24 08          	mov    %eax,0x8(%esp)
 819eea1:	c7 44 24 04 4a 02 00 	movl   $0x24a,0x4(%esp)
 819eea8:	00 
 819eea9:	8b 45 0c             	mov    0xc(%ebp),%eax
 819eeac:	89 04 24             	mov    %eax,(%esp)
 819eeaf:	e8 8e d0 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 819eeb4:	b8 00 00 00 00       	mov    $0x0,%eax
 819eeb9:	e9 94 00 00 00       	jmp    819ef52 <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0xe6>
 819eebe:	8b 45 0c             	mov    0xc(%ebp),%eax
 819eec1:	89 04 24             	mov    %eax,(%esp)
 819eec4:	e8 b5 b3 f3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 819eec9:	05 58 06 00 00       	add    $0x658,%eax
 819eece:	89 04 24             	mov    %eax,(%esp)
 819eed1:	e8 6e 10 fe ff       	call   817ff44 <_ZNK10AvatarCoin8IsUsableEv>
 819eed6:	83 f0 01             	xor    $0x1,%eax
 819eed9:	84 c0                	test   %al,%al
 819eedb:	74 22                	je     819eeff <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x93>
 819eedd:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 819eee4:	00 
 819eee5:	c7 44 24 04 4a 02 00 	movl   $0x24a,0x4(%esp)
 819eeec:	00 
 819eeed:	8b 45 0c             	mov    0xc(%ebp),%eax
 819eef0:	89 04 24             	mov    %eax,(%esp)
 819eef3:	e8 4a d0 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 819eef8:	b8 00 00 00 00       	mov    $0x0,%eax
 819eefd:	eb 53                	jmp    819ef52 <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0xe6>
 819eeff:	8b 45 0c             	mov    0xc(%ebp),%eax
 819ef02:	89 04 24             	mov    %eax,(%esp)
 819ef05:	e8 74 b3 f3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 819ef0a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 819ef11:	00 
 819ef12:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 819ef19:	00 
 819ef1a:	89 04 24             	mov    %eax,(%esp)
 819ef1d:	e8 58 c7 35 00       	call   84fb67a <_ZNK10CInventory17GetRemainCapacityE10INVEN_TYPEN10Inven_Item9ITEM_TYPEE>
 819ef22:	85 c0                	test   %eax,%eax
 819ef24:	0f 9e c0             	setle  %al
 819ef27:	84 c0                	test   %al,%al
 819ef29:	74 22                	je     819ef4d <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0xe1>
 819ef2b:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 819ef32:	00 
 819ef33:	c7 44 24 04 4a 02 00 	movl   $0x24a,0x4(%esp)
 819ef3a:	00 
 819ef3b:	8b 45 0c             	mov    0xc(%ebp),%eax
 819ef3e:	89 04 24             	mov    %eax,(%esp)
 819ef41:	e8 fc cf 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 819ef46:	b8 00 00 00 00       	mov    $0x0,%eax
 819ef4b:	eb 05                	jmp    819ef52 <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0xe6>
 819ef4d:	b8 01 00 00 00       	mov    $0x1,%eax
 819ef52:	c9                   	leave
 819ef53:	c3                   	ret

```

```c
// ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState @ 0x819ee6c

/* ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&) */

undefined4
ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState
          (CUser *param_1,SigAvatarRoulette *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  CInventory *pCVar5;
  
  uVar2 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_2,0x45);
  if (uVar2 == 0) {
    iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
    cVar1 = AvatarCoin::IsUsable((AvatarCoin *)(iVar4 + 0x658));
    if (cVar1 == '\x01') {
      pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      iVar4 = CInventory::GetRemainCapacity(pCVar5,2,0);
      if (iVar4 < 1) {
        CUser::SendCmdErrorPacket((CUser *)param_2,0x24a,4);
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x24a,0x16);
      uVar3 = 0;
    }
  }
  else {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x24a,uVar2 & 0xff);
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## dispatch_sig

```asm
// === 0819ef54 ARAD::DISPATCHER::Dispatcher_AvartarRoulette::dispatch_sig  [0x0819ef54-0x819f1bb] ===
 819ef54:	55                   	push   %ebp
 819ef55:	89 e5                	mov    %esp,%ebp
 819ef57:	56                   	push   %esi
 819ef58:	53                   	push   %ebx
 819ef59:	83 ec 20             	sub    $0x20,%esp
 819ef5c:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 819ef60:	75 0a                	jne    819ef6c <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette12dispatch_sigEP5CUserR9PacketBuf+0x18>
 819ef62:	bb 12 03 00 00       	mov    $0x312,%ebx
 819ef67:	e9 46 02 00 00       	jmp    819f1b2 <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette12dispatch_sigEP5CUserR9PacketBuf+0x25e>
 819ef6c:	8b 45 0c             	mov    0xc(%ebp),%eax
 819ef6f:	89 04 24             	mov    %eax,(%esp)
 819ef72:	e8 bb 14 f8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 819ef77:	85 c0                	test   %eax,%eax
 819ef79:	0f 94 c0             	sete   %al
 819ef7c:	84 c0                	test   %al,%al
 819ef7e:	74 0a                	je     819ef8a <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette12dispatch_sigEP5CUserR9PacketBuf+0x36>
 819ef80:	bb 00 00 00 00       	mov    $0x0,%ebx
 819ef85:	e9 28 02 00 00       	jmp    819f1b2 <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette12dispatch_sigEP5CUserR9PacketBuf+0x25e>
 819ef8a:	8b 45 0c             	mov    0xc(%ebp),%eax
 819ef8d:	89 04 24             	mov    %eax,(%esp)
 819ef90:	e8 f7 b3 f3 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 819ef95:	83 f8 02             	cmp    $0x2,%eax
 819ef98:	0f 9e c0             	setle  %al
 819ef9b:	84 c0                	test   %al,%al
 819ef9d:	74 25                	je     819efc4 <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette12dispatch_sigEP5CUserR9PacketBuf+0x70>
 819ef9f:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 819efa6:	00 
 819efa7:	c7 44 24 04 4a 02 00 	movl   $0x24a,0x4(%esp)
 819efae:	00 
 819efaf:	8b 45 0c             	mov    0xc(%ebp),%eax
 819efb2:	89 04 24             	mov    %eax,(%esp)
 819efb5:	e8 88 cf 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 819efba:	bb 00 00 00 00       	mov    $0x0,%ebx
 819efbf:	e9 ee 01 00 00       	jmp    819f1b2 <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette12dispatch_sigEP5CUserR9PacketBuf+0x25e>
 819efc4:	8b 45 0c             	mov    0xc(%ebp),%eax
 819efc7:	89 04 24             	mov    %eax,(%esp)
 819efca:	e8 2f b3 f3 ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 819efcf:	84 c0                	test   %al,%al
 819efd1:	74 25                	je     819eff8 <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette12dispatch_sigEP5CUserR9PacketBuf+0xa4>
 819efd3:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 819efda:	00 
 819efdb:	c7 44 24 04 4a 02 00 	movl   $0x24a,0x4(%esp)
 819efe2:	00 
 819efe3:	8b 45 0c             	mov    0xc(%ebp),%eax
 819efe6:	89 04 24             	mov    %eax,(%esp)
 819efe9:	e8 54 cf 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 819efee:	bb 00 00 00 00       	mov    $0x0,%ebx
 819eff3:	e9 ba 01 00 00       	jmp    819f1b2 <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette12dispatch_sigEP5CUserR9PacketBuf+0x25e>
 819eff8:	e8 aa b3 f3 ff       	call   80da3a7 <_Z11G_GameWorldv>
 819effd:	89 04 24             	mov    %eax,(%esp)
 819f000:	e8 e3 34 fa ff       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 819f005:	84 c0                	test   %al,%al
 819f007:	75 11                	jne    819f01a <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette12dispatch_sigEP5CUserR9PacketBuf+0xc6>
 819f009:	e8 99 b3 f3 ff       	call   80da3a7 <_Z11G_GameWorldv>
 819f00e:	89 04 24             	mov    %eax,(%esp)
 819f011:	e8 9c 1a 00 00       	call   81a0ab2 <_ZNK9GameWorld16IsFreePvPChannelEv>
 819f016:	84 c0                	test   %al,%al
 819f018:	74 07                	je     819f021 <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette12dispatch_sigEP5CUserR9PacketBuf+0xcd>
 819f01a:	b8 01 00 00 00       	mov    $0x1,%eax
 819f01f:	eb 05                	jmp    819f026 <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette12dispatch_sigEP5CUserR9PacketBuf+0xd2>
 819f021:	b8 00 00 00 00       	mov    $0x0,%eax
 819f026:	84 c0                	test   %al,%al
 819f028:	74 25                	je     819f04f <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette12dispatch_sigEP5CUserR9PacketBuf+0xfb>
 819f02a:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 819f031:	00 
 819f032:	c7 44 24 04 4a 02 00 	movl   $0x24a,0x4(%esp)
 819f039:	00 
 819f03a:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f03d:	89 04 24             	mov    %eax,(%esp)
 819f040:	e8 fd ce 4d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 819f045:	bb 00 00 00 00       	mov    $0x0,%ebx
 819f04a:	e9 63 01 00 00       	jmp    819f1b2 <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette12dispatch_sigEP5CUserR9PacketBuf+0x25e>
 819f04f:	8d 45 f5             	lea    -0xb(%ebp),%eax
 819f052:	89 04 24             	mov    %eax,(%esp)
 819f055:	e8 d4 18 00 00       	call   81a092e <_ZN4arad17SigAvatarRouletteC1Ev>
 819f05a:	8d 45 f5             	lea    -0xb(%ebp),%eax
 819f05d:	89 44 24 04          	mov    %eax,0x4(%esp)
 819f061:	8b 45 10             	mov    0x10(%ebp),%eax
 819f064:	89 04 24             	mov    %eax,(%esp)
 819f067:	e8 04 df 3e 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 819f06c:	83 f0 01             	xor    $0x1,%eax
 819f06f:	84 c0                	test   %al,%al
 819f071:	74 0a                	je     819f07d <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette12dispatch_sigEP5CUserR9PacketBuf+0x129>
 819f073:	bb 2f 03 00 00       	mov    $0x32f,%ebx
 819f078:	e9 35 01 00 00       	jmp    819f1b2 <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette12dispatch_sigEP5CUserR9PacketBuf+0x25e>
 819f07d:	8d 45 f5             	lea    -0xb(%ebp),%eax
 819f080:	83 c0 01             	add    $0x1,%eax
 819f083:	89 44 24 04          	mov    %eax,0x4(%esp)
 819f087:	8b 45 10             	mov    0x10(%ebp),%eax
 819f08a:	89 04 24             	mov    %eax,(%esp)
 819f08d:	e8 de de 3e 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 819f092:	83 f0 01             	xor    $0x1,%eax
 819f095:	84 c0                	test   %al,%al
 819f097:	74 0a                	je     819f0a3 <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette12dispatch_sigEP5CUserR9PacketBuf+0x14f>
 819f099:	bb 31 03 00 00       	mov    $0x331,%ebx
 819f09e:	e9 0f 01 00 00       	jmp    819f1b2 <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette12dispatch_sigEP5CUserR9PacketBuf+0x25e>
 819f0a3:	0f b6 45 f5          	movzbl -0xb(%ebp),%eax
 819f0a7:	3c 0a                	cmp    $0xa,%al
 819f0a9:	76 0a                	jbe    819f0b5 <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette12dispatch_sigEP5CUserR9PacketBuf+0x161>
 819f0ab:	bb 34 03 00 00       	mov    $0x334,%ebx
 819f0b0:	e9 fd 00 00 00       	jmp    819f1b2 <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette12dispatch_sigEP5CUserR9PacketBuf+0x25e>
 819f0b5:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
 819f0b9:	3c 09                	cmp    $0x9,%al
 819f0bb:	76 0a                	jbe    819f0c7 <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette12dispatch_sigEP5CUserR9PacketBuf+0x173>
 819f0bd:	bb 37 03 00 00       	mov    $0x337,%ebx
 819f0c2:	e9 eb 00 00 00       	jmp    819f1b2 <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette12dispatch_sigEP5CUserR9PacketBuf+0x25e>
 819f0c7:	8d 45 f5             	lea    -0xb(%ebp),%eax
 819f0ca:	89 44 24 08          	mov    %eax,0x8(%esp)
 819f0ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f0d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 819f0d5:	8b 45 08             	mov    0x8(%ebp),%eax
 819f0d8:	89 04 24             	mov    %eax,(%esp)
 819f0db:	e8 8c fd ff ff       	call   819ee6c <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE>
 819f0e0:	83 f0 01             	xor    $0x1,%eax
 819f0e3:	84 c0                	test   %al,%al
 819f0e5:	74 0a                	je     819f0f1 <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette12dispatch_sigEP5CUserR9PacketBuf+0x19d>
 819f0e7:	bb 00 00 00 00       	mov    $0x0,%ebx
 819f0ec:	e9 c1 00 00 00       	jmp    819f1b2 <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette12dispatch_sigEP5CUserR9PacketBuf+0x25e>
 819f0f1:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 819f0f6:	c7 44 24 08 47 03 00 	movl   $0x347,0x8(%esp)
 819f0fd:	00 
 819f0fe:	c7 44 24 04 60 9a ba 	movl   $0x8ba9a60,0x4(%esp)
 819f105:	08 
 819f106:	89 04 24             	mov    %eax,(%esp)
 819f109:	e8 78 09 0f 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 819f10e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 819f115:	00 
 819f116:	89 44 24 04          	mov    %eax,0x4(%esp)
 819f11a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 819f11d:	89 04 24             	mov    %eax,(%esp)
 819f120:	e8 01 9b f2 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 819f125:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f128:	89 04 24             	mov    %eax,(%esp)
 819f12b:	e8 66 9b f2 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 819f130:	89 44 24 08          	mov    %eax,0x8(%esp)
 819f134:	c7 44 24 04 2c 00 00 	movl   $0x2c,0x4(%esp)
 819f13b:	00 
 819f13c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 819f13f:	89 04 24             	mov    %eax,(%esp)
 819f142:	e8 6f 86 ff ff       	call   81977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>
 819f147:	8d 45 ec             	lea    -0x14(%ebp),%eax
 819f14a:	89 04 24             	mov    %eax,(%esp)
 819f14d:	e8 fc 9a f2 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 819f152:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 819f159:	00 
 819f15a:	8d 55 f5             	lea    -0xb(%ebp),%edx
 819f15d:	89 54 24 04          	mov    %edx,0x4(%esp)
 819f161:	89 04 24             	mov    %eax,(%esp)
 819f164:	e8 e9 f4 f3 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 819f169:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 819f16e:	8d 55 ec             	lea    -0x14(%ebp),%edx
 819f171:	89 54 24 08          	mov    %edx,0x8(%esp)
 819f175:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 819f17c:	00 
 819f17d:	89 04 24             	mov    %eax,(%esp)
 819f180:	e8 59 1e 3d 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 819f185:	bb 00 00 00 00       	mov    $0x0,%ebx
 819f18a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 819f18d:	89 04 24             	mov    %eax,(%esp)
 819f190:	e8 3d d7 47 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 819f195:	eb 1b                	jmp    819f1b2 <_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette12dispatch_sigEP5CUserR9PacketBuf+0x25e>
 819f197:	89 d3                	mov    %edx,%ebx
 819f199:	89 c6                	mov    %eax,%esi
 819f19b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 819f19e:	89 04 24             	mov    %eax,(%esp)
 819f1a1:	e8 2c d7 47 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 819f1a6:	89 f0                	mov    %esi,%eax
 819f1a8:	89 da                	mov    %ebx,%edx
 819f1aa:	89 04 24             	mov    %eax,(%esp)
 819f1ad:	e8 9e 45 94 00       	call   8ae3750 <_Unwind_Resume>
 819f1b2:	89 d8                	mov    %ebx,%eax
 819f1b4:	83 c4 20             	add    $0x20,%esp
 819f1b7:	5b                   	pop    %ebx
 819f1b8:	5e                   	pop    %esi
 819f1b9:	5d                   	pop    %ebp
 819f1ba:	c3                   	ret
 819f1bb:	90                   	nop

```

```c
// ARAD::DISPATCHER::Dispatcher_AvartarRoulette::dispatch_sig @ 0x819ef54

/* ARAD::DISPATCHER::Dispatcher_AvartarRoulette::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
ARAD::DISPATCHER::Dispatcher_AvartarRoulette::dispatch_sig
          (Dispatcher_AvartarRoulette *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  GameWorld *pGVar4;
  Stream *pSVar5;
  CStreamGuard *this_00;
  undefined4 uVar6;
  CStreamGuard local_18 [9];
  SigAvatarRoulette local_f;
  byte local_e [2];
  
  if (param_1 == (CUser *)0x0) {
    return 0x312;
  }
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = CUser::get_state(param_1);
  if (iVar3 < 3) {
    CUser::SendCmdErrorPacket(param_1,0x24a,7);
    return 0;
  }
  cVar2 = CUser::CheckInTrade(param_1);
  if (cVar2 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0x24a,7);
    return 0;
  }
  pGVar4 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsPVPChannel(pGVar4);
  if (cVar2 == '\0') {
    pGVar4 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsFreePvPChannel(pGVar4);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_0819f026;
    }
  }
  bVar1 = true;
LAB_0819f026:
  if (bVar1) {
    CUser::SendCmdErrorPacket(param_1,0x24a,7);
    uVar6 = 0;
  }
  else {
    arad::SigAvatarRoulette::SigAvatarRoulette(&local_f);
    cVar2 = PacketBuf::get_byte(param_2,(uchar *)&local_f);
    if (cVar2 == '\x01') {
      cVar2 = PacketBuf::get_byte(param_2,local_e);
      if (cVar2 == '\x01') {
        if ((byte)local_f < 0xb) {
          if (local_e[0] < 10) {
            cVar2 = checkWorkState((CUser *)this,(SigAvatarRoulette *)param_1);
            if (cVar2 == '\x01') {
              pSVar5 = (Stream *)
                       StreamPool::Acquire(GlobalData::s_stream_pool,
                                           "localjapan/Arad_PacketDispatcher.cpp",0x347);
              CStreamGuard::CStreamGuard(local_18,pSVar5,true);
              uVar6 = CUser::GetUID(param_1);
                    /* try { // try from 0819f142 to 0819f184 has its CatchHandler @ 0819f197 */
              make_internal_stream_jpn(local_18,0x2c,uVar6);
              this_00 = (CStreamGuard *)CStreamGuard::operator->(local_18);
              CStreamGuard::put_binary(this_00,&local_f,3);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
              uVar6 = 0;
              CStreamGuard::~CStreamGuard(local_18);
            }
            else {
              uVar6 = 0;
            }
          }
          else {
            uVar6 = 0x337;
          }
        }
        else {
          uVar6 = 0x334;
        }
      }
      else {
        uVar6 = 0x331;
      }
    }
    else {
      uVar6 = 0x32f;
    }
  }
  return uVar6;
}

```

