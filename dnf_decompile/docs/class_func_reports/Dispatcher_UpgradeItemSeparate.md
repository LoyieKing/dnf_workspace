# Dispatcher_UpgradeItemSeparate

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## check_error

```asm
// === 081cbe84 Dispatcher_UpgradeItemSeparate::check_error  [0x081cbe84-0x81cbf23] ===
 81cbe84:	55                   	push   %ebp
 81cbe85:	89 e5                	mov    %esp,%ebp
 81cbe87:	83 ec 28             	sub    $0x28,%esp
 81cbe8a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cbe8d:	89 04 24             	mov    %eax,(%esp)
 81cbe90:	e8 f7 e4 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81cbe95:	83 f8 03             	cmp    $0x3,%eax
 81cbe98:	75 0f                	jne    81cbea9 <_ZN30Dispatcher_UpgradeItemSeparate11check_errorEP5CUserR8MSG_BASE+0x25>
 81cbe9a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cbe9d:	89 04 24             	mov    %eax,(%esp)
 81cbea0:	e8 8d 45 f5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81cbea5:	85 c0                	test   %eax,%eax
 81cbea7:	75 07                	jne    81cbeb0 <_ZN30Dispatcher_UpgradeItemSeparate11check_errorEP5CUserR8MSG_BASE+0x2c>
 81cbea9:	b8 01 00 00 00       	mov    $0x1,%eax
 81cbeae:	eb 05                	jmp    81cbeb5 <_ZN30Dispatcher_UpgradeItemSeparate11check_errorEP5CUserR8MSG_BASE+0x31>
 81cbeb0:	b8 00 00 00 00       	mov    $0x0,%eax
 81cbeb5:	84 c0                	test   %al,%al
 81cbeb7:	74 07                	je     81cbec0 <_ZN30Dispatcher_UpgradeItemSeparate11check_errorEP5CUserR8MSG_BASE+0x3c>
 81cbeb9:	b8 07 00 00 00       	mov    $0x7,%eax
 81cbebe:	eb 61                	jmp    81cbf21 <_ZN30Dispatcher_UpgradeItemSeparate11check_errorEP5CUserR8MSG_BASE+0x9d>
 81cbec0:	8b 45 10             	mov    0x10(%ebp),%eax
 81cbec3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81cbec6:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81cbecb:	c7 44 24 08 27 00 00 	movl   $0x27,0x8(%esp)
 81cbed2:	00 
 81cbed3:	8b 55 0c             	mov    0xc(%ebp),%edx
 81cbed6:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cbeda:	89 04 24             	mov    %eax,(%esp)
 81cbedd:	e8 20 cb 0b 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 81cbee2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cbee5:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81cbee9:	74 05                	je     81cbef0 <_ZN30Dispatcher_UpgradeItemSeparate11check_errorEP5CUserR8MSG_BASE+0x6c>
 81cbeeb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cbeee:	eb 31                	jmp    81cbf21 <_ZN30Dispatcher_UpgradeItemSeparate11check_errorEP5CUserR8MSG_BASE+0x9d>
 81cbef0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cbef3:	0f b7 40 1b          	movzwl 0x1b(%eax),%eax
 81cbef7:	0f b7 c0             	movzwl %ax,%eax
 81cbefa:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cbefe:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81cbf05:	00 
 81cbf06:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cbf09:	89 04 24             	mov    %eax,(%esp)
 81cbf0c:	e8 31 aa 47 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 81cbf11:	84 c0                	test   %al,%al
 81cbf13:	74 07                	je     81cbf1c <_ZN30Dispatcher_UpgradeItemSeparate11check_errorEP5CUserR8MSG_BASE+0x98>
 81cbf15:	b8 d5 00 00 00       	mov    $0xd5,%eax
 81cbf1a:	eb 05                	jmp    81cbf21 <_ZN30Dispatcher_UpgradeItemSeparate11check_errorEP5CUserR8MSG_BASE+0x9d>
 81cbf1c:	b8 00 00 00 00       	mov    $0x0,%eax
 81cbf21:	c9                   	leave
 81cbf22:	c3                   	ret
 81cbf23:	90                   	nop

```

```c
// Dispatcher_UpgradeItemSeparate::check_error @ 0x81cbe84

/* Dispatcher_UpgradeItemSeparate::check_error(CUser*, MSG_BASE&) */

int __thiscall
Dispatcher_UpgradeItemSeparate::check_error
          (Dispatcher_UpgradeItemSeparate *this,CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 == 3) &&
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    iVar3 = 7;
  }
  else {
    iVar3 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x27);
    if (iVar3 == 0) {
      cVar2 = CUser::CheckItemLock(param_1,1,(uint)*(ushort *)(param_2 + 0x1b));
      if (cVar2 == '\0') {
        iVar3 = 0;
      }
      else {
        iVar3 = 0xd5;
      }
    }
  }
  return iVar3;
}

```

---

## process

```asm
// === 081cc106 Dispatcher_UpgradeItemSeparate::process  [0x081cc106-0x81cc18b] ===
 81cc106:	55                   	push   %ebp
 81cc107:	89 e5                	mov    %esp,%ebp
 81cc109:	83 ec 28             	sub    $0x28,%esp
 81cc10c:	8b 45 10             	mov    0x10(%ebp),%eax
 81cc10f:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cc113:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc116:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cc11a:	8b 45 08             	mov    0x8(%ebp),%eax
 81cc11d:	89 04 24             	mov    %eax,(%esp)
 81cc120:	e8 5f fd ff ff       	call   81cbe84 <_ZN30Dispatcher_UpgradeItemSeparate11check_errorEP5CUserR8MSG_BASE>
 81cc125:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81cc128:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81cc12c:	7e 24                	jle    81cc152 <_ZN30Dispatcher_UpgradeItemSeparate7processEP5CUserR8MSG_BASER9ParamBase+0x4c>
 81cc12e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81cc131:	0f b6 c0             	movzbl %al,%eax
 81cc134:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cc138:	c7 44 24 04 b7 01 00 	movl   $0x1b7,0x4(%esp)
 81cc13f:	00 
 81cc140:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc143:	89 04 24             	mov    %eax,(%esp)
 81cc146:	e8 f7 fd 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81cc14b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81cc150:	eb 37                	jmp    81cc189 <_ZN30Dispatcher_UpgradeItemSeparate7processEP5CUserR8MSG_BASER9ParamBase+0x83>
 81cc152:	8b 45 14             	mov    0x14(%ebp),%eax
 81cc155:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81cc158:	8b 45 10             	mov    0x10(%ebp),%eax
 81cc15b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cc15e:	e8 38 00 f0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81cc163:	8b 40 24             	mov    0x24(%eax),%eax
 81cc166:	c7 44 24 0c b7 01 00 	movl   $0x1b7,0xc(%esp)
 81cc16d:	00 
 81cc16e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81cc171:	89 54 24 08          	mov    %edx,0x8(%esp)
 81cc175:	8b 55 0c             	mov    0xc(%ebp),%edx
 81cc178:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cc17c:	89 04 24             	mov    %eax,(%esp)
 81cc17f:	e8 cc 06 f3 ff       	call   80fc850 <_ZN8WongWork12IItemUpgrade19item_upgrade_systemEP5CUserP16MSG_ITEM_UPGRADEi>
 81cc184:	b8 00 00 00 00       	mov    $0x0,%eax
 81cc189:	c9                   	leave
 81cc18a:	c3                   	ret
 81cc18b:	90                   	nop

```

```c
// Dispatcher_UpgradeItemSeparate::process @ 0x81cc106

/* Dispatcher_UpgradeItemSeparate::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_UpgradeItemSeparate::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = check_error((Dispatcher_UpgradeItemSeparate *)param_1,(CUser *)param_2,(MSG_BASE *)param_3
                     );
  if ((int)uVar1 < 1) {
    iVar3 = G_CDataManager();
    WongWork::IItemUpgrade::item_upgrade_system
              (*(IItemUpgrade **)(iVar3 + 0x24),(CUser *)param_2,(MSG_ITEM_UPGRADE *)param_3,0x1b7);
    uVar2 = 0;
  }
  else {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x1b7,uVar1 & 0xff);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

```

---

## read

```asm
// === 081cbf24 Dispatcher_UpgradeItemSeparate::read  [0x081cbf24-0x81cc105] ===
 81cbf24:	55                   	push   %ebp
 81cbf25:	89 e5                	mov    %esp,%ebp
 81cbf27:	57                   	push   %edi
 81cbf28:	53                   	push   %ebx
 81cbf29:	81 ec a0 00 00 00    	sub    $0xa0,%esp
 81cbf2f:	8b 45 10             	mov    0x10(%ebp),%eax
 81cbf32:	83 c0 1b             	add    $0x1b,%eax
 81cbf35:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cbf39:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cbf3c:	89 04 24             	mov    %eax,(%esp)
 81cbf3f:	e8 6c 11 3c 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81cbf44:	83 f0 01             	xor    $0x1,%eax
 81cbf47:	84 c0                	test   %al,%al
 81cbf49:	74 29                	je     81cbf74 <_ZN30Dispatcher_UpgradeItemSeparate4readER9PacketBufR8MSG_BASE+0x50>
 81cbf4b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cbf52:	00 
 81cbf53:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cbf5a:	00 
 81cbf5b:	c7 44 24 04 60 4c bd 	movl   $0x8bd4c60,0x4(%esp)
 81cbf62:	08 
 81cbf63:	c7 04 24 8e 22 00 00 	movl   $0x228e,(%esp)
 81cbf6a:	e8 68 49 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cbf6f:	e9 88 01 00 00       	jmp    81cc0fc <_ZN30Dispatcher_UpgradeItemSeparate4readER9PacketBufR8MSG_BASE+0x1d8>
 81cbf74:	8b 45 10             	mov    0x10(%ebp),%eax
 81cbf77:	83 c0 1d             	add    $0x1d,%eax
 81cbf7a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cbf7e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cbf81:	89 04 24             	mov    %eax,(%esp)
 81cbf84:	e8 f5 12 3c 00       	call   858d27e <_ZN9PacketBuf7get_intERm>
 81cbf89:	83 f0 01             	xor    $0x1,%eax
 81cbf8c:	84 c0                	test   %al,%al
 81cbf8e:	74 29                	je     81cbfb9 <_ZN30Dispatcher_UpgradeItemSeparate4readER9PacketBufR8MSG_BASE+0x95>
 81cbf90:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cbf97:	00 
 81cbf98:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cbf9f:	00 
 81cbfa0:	c7 44 24 04 60 4c bd 	movl   $0x8bd4c60,0x4(%esp)
 81cbfa7:	08 
 81cbfa8:	c7 04 24 90 22 00 00 	movl   $0x2290,(%esp)
 81cbfaf:	e8 23 49 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cbfb4:	e9 43 01 00 00       	jmp    81cc0fc <_ZN30Dispatcher_UpgradeItemSeparate4readER9PacketBufR8MSG_BASE+0x1d8>
 81cbfb9:	8b 45 10             	mov    0x10(%ebp),%eax
 81cbfbc:	83 c0 23             	add    $0x23,%eax
 81cbfbf:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cbfc3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cbfc6:	89 04 24             	mov    %eax,(%esp)
 81cbfc9:	e8 e2 10 3c 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81cbfce:	83 f0 01             	xor    $0x1,%eax
 81cbfd1:	84 c0                	test   %al,%al
 81cbfd3:	74 29                	je     81cbffe <_ZN30Dispatcher_UpgradeItemSeparate4readER9PacketBufR8MSG_BASE+0xda>
 81cbfd5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cbfdc:	00 
 81cbfdd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cbfe4:	00 
 81cbfe5:	c7 44 24 04 60 4c bd 	movl   $0x8bd4c60,0x4(%esp)
 81cbfec:	08 
 81cbfed:	c7 04 24 92 22 00 00 	movl   $0x2292,(%esp)
 81cbff4:	e8 de 48 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cbff9:	e9 fe 00 00 00       	jmp    81cc0fc <_ZN30Dispatcher_UpgradeItemSeparate4readER9PacketBufR8MSG_BASE+0x1d8>
 81cbffe:	c7 45 f4 80 00 00 00 	movl   $0x80,-0xc(%ebp)
 81cc005:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81cc00c:	8d 95 6f ff ff ff    	lea    -0x91(%ebp),%edx
 81cc012:	bb 81 00 00 00       	mov    $0x81,%ebx
 81cc017:	b8 00 00 00 00       	mov    $0x0,%eax
 81cc01c:	89 d1                	mov    %edx,%ecx
 81cc01e:	83 e1 01             	and    $0x1,%ecx
 81cc021:	85 c9                	test   %ecx,%ecx
 81cc023:	74 08                	je     81cc02d <_ZN30Dispatcher_UpgradeItemSeparate4readER9PacketBufR8MSG_BASE+0x109>
 81cc025:	88 02                	mov    %al,(%edx)
 81cc027:	83 c2 01             	add    $0x1,%edx
 81cc02a:	83 eb 01             	sub    $0x1,%ebx
 81cc02d:	89 d1                	mov    %edx,%ecx
 81cc02f:	83 e1 02             	and    $0x2,%ecx
 81cc032:	85 c9                	test   %ecx,%ecx
 81cc034:	74 09                	je     81cc03f <_ZN30Dispatcher_UpgradeItemSeparate4readER9PacketBufR8MSG_BASE+0x11b>
 81cc036:	66 89 02             	mov    %ax,(%edx)
 81cc039:	83 c2 02             	add    $0x2,%edx
 81cc03c:	83 eb 02             	sub    $0x2,%ebx
 81cc03f:	89 d9                	mov    %ebx,%ecx
 81cc041:	c1 e9 02             	shr    $0x2,%ecx
 81cc044:	89 d7                	mov    %edx,%edi
 81cc046:	f3 ab                	rep stos %eax,%es:(%edi)
 81cc048:	89 fa                	mov    %edi,%edx
 81cc04a:	89 d9                	mov    %ebx,%ecx
 81cc04c:	83 e1 02             	and    $0x2,%ecx
 81cc04f:	85 c9                	test   %ecx,%ecx
 81cc051:	74 06                	je     81cc059 <_ZN30Dispatcher_UpgradeItemSeparate4readER9PacketBufR8MSG_BASE+0x135>
 81cc053:	66 89 02             	mov    %ax,(%edx)
 81cc056:	83 c2 02             	add    $0x2,%edx
 81cc059:	89 d9                	mov    %ebx,%ecx
 81cc05b:	83 e1 01             	and    $0x1,%ecx
 81cc05e:	85 c9                	test   %ecx,%ecx
 81cc060:	74 05                	je     81cc067 <_ZN30Dispatcher_UpgradeItemSeparate4readER9PacketBufR8MSG_BASE+0x143>
 81cc062:	88 02                	mov    %al,(%edx)
 81cc064:	83 c2 01             	add    $0x1,%edx
 81cc067:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81cc06a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cc06e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc071:	89 04 24             	mov    %eax,(%esp)
 81cc074:	e8 c7 11 3c 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81cc079:	83 f0 01             	xor    $0x1,%eax
 81cc07c:	84 c0                	test   %al,%al
 81cc07e:	74 26                	je     81cc0a6 <_ZN30Dispatcher_UpgradeItemSeparate4readER9PacketBufR8MSG_BASE+0x182>
 81cc080:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cc087:	00 
 81cc088:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cc08f:	00 
 81cc090:	c7 44 24 04 60 4c bd 	movl   $0x8bd4c60,0x4(%esp)
 81cc097:	08 
 81cc098:	c7 04 24 9a 22 00 00 	movl   $0x229a,(%esp)
 81cc09f:	e8 33 48 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cc0a4:	eb 56                	jmp    81cc0fc <_ZN30Dispatcher_UpgradeItemSeparate4readER9PacketBufR8MSG_BASE+0x1d8>
 81cc0a6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cc0a9:	8b 55 10             	mov    0x10(%ebp),%edx
 81cc0ac:	83 c2 28             	add    $0x28,%edx
 81cc0af:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cc0b3:	c7 44 24 08 81 00 00 	movl   $0x81,0x8(%esp)
 81cc0ba:	00 
 81cc0bb:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cc0bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc0c2:	89 04 24             	mov    %eax,(%esp)
 81cc0c5:	e8 f2 11 3c 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81cc0ca:	83 f0 01             	xor    $0x1,%eax
 81cc0cd:	84 c0                	test   %al,%al
 81cc0cf:	74 26                	je     81cc0f7 <_ZN30Dispatcher_UpgradeItemSeparate4readER9PacketBufR8MSG_BASE+0x1d3>
 81cc0d1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cc0d8:	00 
 81cc0d9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cc0e0:	00 
 81cc0e1:	c7 44 24 04 60 4c bd 	movl   $0x8bd4c60,0x4(%esp)
 81cc0e8:	08 
 81cc0e9:	c7 04 24 9d 22 00 00 	movl   $0x229d,(%esp)
 81cc0f0:	e8 e2 47 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cc0f5:	eb 05                	jmp    81cc0fc <_ZN30Dispatcher_UpgradeItemSeparate4readER9PacketBufR8MSG_BASE+0x1d8>
 81cc0f7:	b8 00 00 00 00       	mov    $0x0,%eax
 81cc0fc:	81 c4 a0 00 00 00    	add    $0xa0,%esp
 81cc102:	5b                   	pop    %ebx
 81cc103:	5f                   	pop    %edi
 81cc104:	5d                   	pop    %ebp
 81cc105:	c3                   	ret

```

```c
// Dispatcher_UpgradeItemSeparate::read @ 0x81cbf24

/* Dispatcher_UpgradeItemSeparate::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_UpgradeItemSeparate::read
          (Dispatcher_UpgradeItemSeparate *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  undefined1 local_95;
  undefined4 local_94 [32];
  uint local_14 [2];
  
  bVar7 = 0;
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x1b));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(ulong *)(param_2 + 0x1d));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x23));
      if (cVar1 == '\x01') {
        local_14[1] = 0x80;
        local_14[0] = 0;
        puVar4 = (undefined4 *)&local_95;
        uVar5 = 0x81;
        bVar6 = ((uint)puVar4 & 1) != 0;
        if (bVar6) {
          local_95 = 0;
          puVar4 = local_94;
          uVar5 = 0x80;
        }
        if (((uint)puVar4 & 2) != 0) {
          *(undefined2 *)puVar4 = 0;
          puVar4 = (undefined4 *)((int)puVar4 + 2);
          uVar5 = uVar5 - 2;
        }
        for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar4 = 0;
          puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
        }
        if ((uVar5 & 2) != 0) {
          *(undefined2 *)puVar4 = 0;
          puVar4 = (undefined4 *)((int)puVar4 + 2);
        }
        if (!bVar6) {
          *(undefined1 *)puVar4 = 0;
        }
        cVar1 = PacketBuf::get_int(param_1,local_14);
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x28),0x81,local_14[0]);
          if (cVar1 == '\x01') {
            uVar2 = 0;
          }
          else {
            uVar2 = LineFunc(0x229d,
                             "virtual int Dispatcher_UpgradeItemSeparate::read(PacketBuf&, MSG_BASE&)"
                             ,0,0);
          }
        }
        else {
          uVar2 = LineFunc(0x229a,
                           "virtual int Dispatcher_UpgradeItemSeparate::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x2292,
                         "virtual int Dispatcher_UpgradeItemSeparate::read(PacketBuf&, MSG_BASE&)",0
                         ,0);
      }
    }
    else {
      uVar2 = LineFunc(0x2290,
                       "virtual int Dispatcher_UpgradeItemSeparate::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0x228e,
                     "virtual int Dispatcher_UpgradeItemSeparate::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

