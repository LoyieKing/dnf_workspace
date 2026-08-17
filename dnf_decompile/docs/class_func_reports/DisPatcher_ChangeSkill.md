# DisPatcher_ChangeSkill

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081c0196 DisPatcher_ChangeSkill::check_error  [0x081c0196-0x81c01eb] ===
 81c0196:	55                   	push   %ebp
 81c0197:	89 e5                	mov    %esp,%ebp
 81c0199:	83 ec 28             	sub    $0x28,%esp
 81c019c:	8b 45 10             	mov    0x10(%ebp),%eax
 81c019f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81c01a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c01a5:	89 04 24             	mov    %eax,(%esp)
 81c01a8:	e8 8f f1 06 00       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 81c01ad:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c01b0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c01b3:	83 f8 ff             	cmp    $0xffffffff,%eax
 81c01b6:	74 07                	je     81c01bf <_ZN22DisPatcher_ChangeSkill11check_errorEP5CUserR8MSG_BASE+0x29>
 81c01b8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c01bb:	85 c0                	test   %eax,%eax
 81c01bd:	75 12                	jne    81c01d1 <_ZN22DisPatcher_ChangeSkill11check_errorEP5CUserR8MSG_BASE+0x3b>
 81c01bf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c01c2:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c01c6:	3c 01                	cmp    $0x1,%al
 81c01c8:	75 19                	jne    81c01e3 <_ZN22DisPatcher_ChangeSkill11check_errorEP5CUserR8MSG_BASE+0x4d>
 81c01ca:	b8 13 00 00 00       	mov    $0x13,%eax
 81c01cf:	eb 18                	jmp    81c01e9 <_ZN22DisPatcher_ChangeSkill11check_errorEP5CUserR8MSG_BASE+0x53>
 81c01d1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c01d4:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c01d8:	3c 01                	cmp    $0x1,%al
 81c01da:	74 08                	je     81c01e4 <_ZN22DisPatcher_ChangeSkill11check_errorEP5CUserR8MSG_BASE+0x4e>
 81c01dc:	b8 13 00 00 00       	mov    $0x13,%eax
 81c01e1:	eb 06                	jmp    81c01e9 <_ZN22DisPatcher_ChangeSkill11check_errorEP5CUserR8MSG_BASE+0x53>
 81c01e3:	90                   	nop
 81c01e4:	b8 00 00 00 00       	mov    $0x0,%eax
 81c01e9:	c9                   	leave
 81c01ea:	c3                   	ret
 81c01eb:	90                   	nop

```

```c
// DisPatcher_ChangeSkill::check_error @ 0x81c0196

/* DisPatcher_ChangeSkill::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_ChangeSkill::check_error(DisPatcher_ChangeSkill *this,CUser *param_1,MSG_BASE *param_2)

{
  int iVar1;
  
  iVar1 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
  if ((iVar1 == -1) || (iVar1 == 0)) {
    if (param_2[0xd] == (MSG_BASE)0x1) {
      return 0x13;
    }
  }
  else if (param_2[0xd] != (MSG_BASE)0x1) {
    return 0x13;
  }
  return 0;
}

```

---

## process

```asm
// === 081bffbc DisPatcher_ChangeSkill::process  [0x081bffbc-0x81c00ab] ===
 81bffbc:	55                   	push   %ebp
 81bffbd:	89 e5                	mov    %esp,%ebp
 81bffbf:	57                   	push   %edi
 81bffc0:	56                   	push   %esi
 81bffc1:	53                   	push   %ebx
 81bffc2:	83 ec 2c             	sub    $0x2c,%esp
 81bffc5:	8b 45 10             	mov    0x10(%ebp),%eax
 81bffc8:	89 44 24 08          	mov    %eax,0x8(%esp)
 81bffcc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bffcf:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bffd3:	8b 45 08             	mov    0x8(%ebp),%eax
 81bffd6:	89 04 24             	mov    %eax,(%esp)
 81bffd9:	e8 b8 01 00 00       	call   81c0196 <_ZN22DisPatcher_ChangeSkill11check_errorEP5CUserR8MSG_BASE>
 81bffde:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81bffe1:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 81bffe5:	7e 27                	jle    81c000e <_ZN22DisPatcher_ChangeSkill7processEP5CUserR8MSG_BASER9ParamBase+0x52>
 81bffe7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81bffea:	0f b6 c0             	movzbl %al,%eax
 81bffed:	89 44 24 08          	mov    %eax,0x8(%esp)
 81bfff1:	c7 44 24 04 1e 00 00 	movl   $0x1e,0x4(%esp)
 81bfff8:	00 
 81bfff9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfffc:	89 04 24             	mov    %eax,(%esp)
 81bffff:	e8 3e bf 4b 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81c0004:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81c0009:	e9 96 00 00 00       	jmp    81c00a4 <_ZN22DisPatcher_ChangeSkill7processEP5CUserR8MSG_BASER9ParamBase+0xe8>
 81c000e:	8b 45 14             	mov    0x14(%ebp),%eax
 81c0011:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81c0014:	8b 45 10             	mov    0x10(%ebp),%eax
 81c0017:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81c001a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c001d:	0f b6 50 0e          	movzbl 0xe(%eax),%edx
 81c0021:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c0024:	88 50 04             	mov    %dl,0x4(%eax)
 81c0027:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c002a:	0f b6 50 0f          	movzbl 0xf(%eax),%edx
 81c002e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c0031:	88 50 05             	mov    %dl,0x5(%eax)
 81c0034:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c0037:	89 04 24             	mov    %eax,(%esp)
 81c003a:	e8 e1 de f3 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81c003f:	89 c3                	mov    %eax,%ebx
 81c0041:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c0044:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 81c0048:	0f b6 f8             	movzbl %al,%edi
 81c004b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c004e:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81c0052:	0f b6 f0             	movzbl %al,%esi
 81c0055:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c0058:	89 04 24             	mov    %eax,(%esp)
 81c005b:	e8 e0 f0 06 00       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 81c0060:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81c0064:	89 7c 24 08          	mov    %edi,0x8(%esp)
 81c0068:	89 74 24 04          	mov    %esi,0x4(%esp)
 81c006c:	89 04 24             	mov    %eax,(%esp)
 81c006f:	e8 b4 43 44 00       	call   8604428 <_ZN9SkillSlot10skill_moveEhhi>
 81c0074:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81c0077:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 81c007b:	7e 24                	jle    81c00a1 <_ZN22DisPatcher_ChangeSkill7processEP5CUserR8MSG_BASER9ParamBase+0xe5>
 81c007d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c0080:	0f b6 c0             	movzbl %al,%eax
 81c0083:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c0087:	c7 44 24 04 1e 00 00 	movl   $0x1e,0x4(%esp)
 81c008e:	00 
 81c008f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c0092:	89 04 24             	mov    %eax,(%esp)
 81c0095:	e8 a8 be 4b 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81c009a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81c009f:	eb 03                	jmp    81c00a4 <_ZN22DisPatcher_ChangeSkill7processEP5CUserR8MSG_BASER9ParamBase+0xe8>
 81c00a1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c00a4:	83 c4 2c             	add    $0x2c,%esp
 81c00a7:	5b                   	pop    %ebx
 81c00a8:	5e                   	pop    %esi
 81c00a9:	5f                   	pop    %edi
 81c00aa:	5d                   	pop    %ebp
 81c00ab:	c3                   	ret

```

```c
// DisPatcher_ChangeSkill::process @ 0x81bffbc

/* DisPatcher_ChangeSkill::process(CUser*, MSG_BASE&, ParamBase&) */

uint __thiscall
DisPatcher_ChangeSkill::process
          (DisPatcher_ChangeSkill *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  MSG_BASE MVar1;
  MSG_BASE MVar2;
  uint uVar3;
  int iVar4;
  SkillSlot *this_00;
  
  uVar3 = check_error(this,param_1,param_2);
  if ((int)uVar3 < 1) {
    *(MSG_BASE *)(param_3 + 4) = param_2[0xe];
    *(MSG_BASE *)(param_3 + 5) = param_2[0xf];
    iVar4 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    MVar1 = param_2[0xf];
    MVar2 = param_2[0xe];
    this_00 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
    uVar3 = SkillSlot::skill_move(this_00,(uchar)MVar2,(uchar)MVar1,iVar4);
    if (0 < (int)uVar3) {
      CUser::SendCmdErrorPacket(param_1,0x1e,uVar3 & 0xff);
      uVar3 = 0xffffffff;
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1e,uVar3 & 0xff);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

```

---

## read

```asm
// === 081bfee6 DisPatcher_ChangeSkill::read  [0x081bfee6-0x81bffbb] ===
 81bfee6:	55                   	push   %ebp
 81bfee7:	89 e5                	mov    %esp,%ebp
 81bfee9:	83 ec 18             	sub    $0x18,%esp
 81bfeec:	8b 45 10             	mov    0x10(%ebp),%eax
 81bfeef:	83 c0 0d             	add    $0xd,%eax
 81bfef2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bfef6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfef9:	89 04 24             	mov    %eax,(%esp)
 81bfefc:	e8 21 d0 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81bff01:	83 f0 01             	xor    $0x1,%eax
 81bff04:	84 c0                	test   %al,%al
 81bff06:	74 29                	je     81bff31 <_ZN22DisPatcher_ChangeSkill4readER9PacketBufR8MSG_BASE+0x4b>
 81bff08:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81bff0f:	00 
 81bff10:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81bff17:	00 
 81bff18:	c7 44 24 04 a0 61 bd 	movl   $0x8bd61a0,0x4(%esp)
 81bff1f:	08 
 81bff20:	c7 04 24 f4 06 00 00 	movl   $0x6f4,(%esp)
 81bff27:	e8 ab 09 3d 00       	call   85908d7 <_Z8LineFunciPKcij>
 81bff2c:	e9 89 00 00 00       	jmp    81bffba <_ZN22DisPatcher_ChangeSkill4readER9PacketBufR8MSG_BASE+0xd4>
 81bff31:	8b 45 10             	mov    0x10(%ebp),%eax
 81bff34:	83 c0 0e             	add    $0xe,%eax
 81bff37:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bff3b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bff3e:	89 04 24             	mov    %eax,(%esp)
 81bff41:	e8 dc cf 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81bff46:	83 f0 01             	xor    $0x1,%eax
 81bff49:	84 c0                	test   %al,%al
 81bff4b:	74 26                	je     81bff73 <_ZN22DisPatcher_ChangeSkill4readER9PacketBufR8MSG_BASE+0x8d>
 81bff4d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81bff54:	00 
 81bff55:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81bff5c:	00 
 81bff5d:	c7 44 24 04 a0 61 bd 	movl   $0x8bd61a0,0x4(%esp)
 81bff64:	08 
 81bff65:	c7 04 24 f6 06 00 00 	movl   $0x6f6,(%esp)
 81bff6c:	e8 66 09 3d 00       	call   85908d7 <_Z8LineFunciPKcij>
 81bff71:	eb 47                	jmp    81bffba <_ZN22DisPatcher_ChangeSkill4readER9PacketBufR8MSG_BASE+0xd4>
 81bff73:	8b 45 10             	mov    0x10(%ebp),%eax
 81bff76:	83 c0 0f             	add    $0xf,%eax
 81bff79:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bff7d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bff80:	89 04 24             	mov    %eax,(%esp)
 81bff83:	e8 9a cf 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81bff88:	83 f0 01             	xor    $0x1,%eax
 81bff8b:	84 c0                	test   %al,%al
 81bff8d:	74 26                	je     81bffb5 <_ZN22DisPatcher_ChangeSkill4readER9PacketBufR8MSG_BASE+0xcf>
 81bff8f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81bff96:	00 
 81bff97:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81bff9e:	00 
 81bff9f:	c7 44 24 04 a0 61 bd 	movl   $0x8bd61a0,0x4(%esp)
 81bffa6:	08 
 81bffa7:	c7 04 24 f8 06 00 00 	movl   $0x6f8,(%esp)
 81bffae:	e8 24 09 3d 00       	call   85908d7 <_Z8LineFunciPKcij>
 81bffb3:	eb 05                	jmp    81bffba <_ZN22DisPatcher_ChangeSkill4readER9PacketBufR8MSG_BASE+0xd4>
 81bffb5:	b8 00 00 00 00       	mov    $0x0,%eax
 81bffba:	c9                   	leave
 81bffbb:	c3                   	ret

```

```c
// DisPatcher_ChangeSkill::read @ 0x81bfee6

/* DisPatcher_ChangeSkill::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_ChangeSkill::read(DisPatcher_ChangeSkill *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xf));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x6f8,"virtual int DisPatcher_ChangeSkill::read(PacketBuf&, MSG_BASE&)",0,0
                        );
      }
    }
    else {
      uVar2 = LineFunc(0x6f6,"virtual int DisPatcher_ChangeSkill::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x6f4,"virtual int DisPatcher_ChangeSkill::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081c00ac DisPatcher_ChangeSkill::send  [0x081c00ac-0x81c0195] ===
 81c00ac:	55                   	push   %ebp
 81c00ad:	89 e5                	mov    %esp,%ebp
 81c00af:	56                   	push   %esi
 81c00b0:	53                   	push   %ebx
 81c00b1:	83 ec 20             	sub    $0x20,%esp
 81c00b4:	8b 45 10             	mov    0x10(%ebp),%eax
 81c00b7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c00ba:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c00bd:	89 04 24             	mov    %eax,(%esp)
 81c00c0:	e8 87 dc 3c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81c00c5:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81c00cc:	00 
 81c00cd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c00d4:	00 
 81c00d5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c00d8:	89 04 24             	mov    %eax,(%esp)
 81c00db:	e8 1c b8 f0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81c00e0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c00e7:	00 
 81c00e8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c00eb:	89 04 24             	mov    %eax,(%esp)
 81c00ee:	e8 2d b8 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c00f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c00f6:	89 04 24             	mov    %eax,(%esp)
 81c00f9:	e8 3e f2 06 00       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 81c00fe:	0f be c0             	movsbl %al,%eax
 81c0101:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c0105:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c0108:	89 04 24             	mov    %eax,(%esp)
 81c010b:	e8 10 b8 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c0110:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c0113:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 81c0117:	0f be c0             	movsbl %al,%eax
 81c011a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c011e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c0121:	89 04 24             	mov    %eax,(%esp)
 81c0124:	e8 f7 b7 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c0129:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c012c:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 81c0130:	0f be c0             	movsbl %al,%eax
 81c0133:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c0137:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c013a:	89 04 24             	mov    %eax,(%esp)
 81c013d:	e8 de b7 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c0142:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c0149:	00 
 81c014a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c014d:	89 04 24             	mov    %eax,(%esp)
 81c0150:	e8 03 b8 f0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81c0155:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c0158:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c015c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c015f:	89 04 24             	mov    %eax,(%esp)
 81c0162:	e8 53 84 48 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81c0167:	eb 1b                	jmp    81c0184 <_ZN22DisPatcher_ChangeSkill4sendEP5CUserR9ParamBase+0xd8>
 81c0169:	89 d3                	mov    %edx,%ebx
 81c016b:	89 c6                	mov    %eax,%esi
 81c016d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c0170:	89 04 24             	mov    %eax,(%esp)
 81c0173:	e8 08 dd 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c0178:	89 f0                	mov    %esi,%eax
 81c017a:	89 da                	mov    %ebx,%edx
 81c017c:	89 04 24             	mov    %eax,(%esp)
 81c017f:	e8 cc 35 92 00       	call   8ae3750 <_Unwind_Resume>
 81c0184:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c0187:	89 04 24             	mov    %eax,(%esp)
 81c018a:	e8 f1 dc 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c018f:	83 c4 20             	add    $0x20,%esp
 81c0192:	5b                   	pop    %ebx
 81c0193:	5e                   	pop    %esi
 81c0194:	5d                   	pop    %ebp
 81c0195:	c3                   	ret

```

```c
// DisPatcher_ChangeSkill::send @ 0x81c00ac

/* DisPatcher_ChangeSkill::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_ChangeSkill::send(DisPatcher_ChangeSkill *this,CUser *param_1,ParamBase *param_2)

{
  char cVar1;
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081c00db to 081c0166 has its CatchHandler @ 081c0169 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1e);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  cVar1 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)cVar1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[4]);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[5]);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

