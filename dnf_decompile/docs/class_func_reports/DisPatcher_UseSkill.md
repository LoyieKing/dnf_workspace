# DisPatcher_UseSkill

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081cad80 DisPatcher_UseSkill::check_error  [0x081cad80-0x81cada9] ===
 81cad80:	55                   	push   %ebp
 81cad81:	89 e5                	mov    %esp,%ebp
 81cad83:	83 ec 18             	sub    $0x18,%esp
 81cad86:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cad89:	89 04 24             	mov    %eax,(%esp)
 81cad8c:	e8 fb f5 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81cad91:	83 f8 05             	cmp    $0x5,%eax
 81cad94:	0f 95 c0             	setne  %al
 81cad97:	84 c0                	test   %al,%al
 81cad99:	74 07                	je     81cada2 <_ZN19DisPatcher_UseSkill11check_errorEP5CUserR8MSG_BASER9ParamBase+0x22>
 81cad9b:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81cada0:	eb 05                	jmp    81cada7 <_ZN19DisPatcher_UseSkill11check_errorEP5CUserR8MSG_BASER9ParamBase+0x27>
 81cada2:	b8 00 00 00 00       	mov    $0x0,%eax
 81cada7:	c9                   	leave
 81cada8:	c3                   	ret
 81cada9:	90                   	nop

```

```c
// DisPatcher_UseSkill::check_error @ 0x81cad80

/* DisPatcher_UseSkill::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4 DisPatcher_UseSkill::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 == 5) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x7fffffff;
  }
  return uVar2;
}

```

---

## process

```asm
// === 081cadaa DisPatcher_UseSkill::process  [0x081cadaa-0x81caf27] ===
 81cadaa:	55                   	push   %ebp
 81cadab:	89 e5                	mov    %esp,%ebp
 81cadad:	57                   	push   %edi
 81cadae:	56                   	push   %esi
 81cadaf:	53                   	push   %ebx
 81cadb0:	83 ec 4c             	sub    $0x4c,%esp
 81cadb3:	8b 45 14             	mov    0x14(%ebp),%eax
 81cadb6:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81cadb9:	8b 45 14             	mov    0x14(%ebp),%eax
 81cadbc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cadc0:	8b 45 10             	mov    0x10(%ebp),%eax
 81cadc3:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cadc7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cadca:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cadce:	8b 45 08             	mov    0x8(%ebp),%eax
 81cadd1:	89 04 24             	mov    %eax,(%esp)
 81cadd4:	e8 a7 ff ff ff       	call   81cad80 <_ZN19DisPatcher_UseSkill11check_errorEP5CUserR8MSG_BASER9ParamBase>
 81cadd9:	89 c2                	mov    %eax,%edx
 81caddb:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81cadde:	89 50 04             	mov    %edx,0x4(%eax)
 81cade1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81cade4:	8b 40 04             	mov    0x4(%eax),%eax
 81cade7:	85 c0                	test   %eax,%eax
 81cade9:	7e 0a                	jle    81cadf5 <_ZN19DisPatcher_UseSkill7processEP5CUserR8MSG_BASER9ParamBase+0x4b>
 81cadeb:	b8 00 00 00 00       	mov    $0x0,%eax
 81cadf0:	e9 2a 01 00 00       	jmp    81caf1f <_ZN19DisPatcher_UseSkill7processEP5CUserR8MSG_BASER9ParamBase+0x175>
 81cadf5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81cadf8:	8b 40 04             	mov    0x4(%eax),%eax
 81cadfb:	85 c0                	test   %eax,%eax
 81cadfd:	79 32                	jns    81cae31 <_ZN19DisPatcher_UseSkill7processEP5CUserR8MSG_BASER9ParamBase+0x87>
 81cadff:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cae02:	89 04 24             	mov    %eax,(%esp)
 81cae05:	e8 64 f5 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81cae0a:	8b 55 dc             	mov    -0x24(%ebp),%edx
 81cae0d:	8b 52 04             	mov    0x4(%edx),%edx
 81cae10:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cae14:	89 54 24 08          	mov    %edx,0x8(%esp)
 81cae18:	c7 44 24 04 c0 51 bd 	movl   $0x8bd51c0,0x4(%esp)
 81cae1f:	08 
 81cae20:	c7 04 24 f2 1f 00 00 	movl   $0x1ff2,(%esp)
 81cae27:	e8 ab 5a 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cae2c:	e9 ee 00 00 00       	jmp    81caf1f <_ZN19DisPatcher_UseSkill7processEP5CUserR8MSG_BASER9ParamBase+0x175>
 81cae31:	8b 45 10             	mov    0x10(%ebp),%eax
 81cae34:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81cae37:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cae3a:	89 04 24             	mov    %eax,(%esp)
 81cae3d:	e8 fa 43 06 00       	call   822f23c <_ZNK15CUserCharacInfo24getCurCharSecondGrowTypeEv>
 81cae42:	0f be f8             	movsbl %al,%edi
 81cae45:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cae48:	89 04 24             	mov    %eax,(%esp)
 81cae4b:	e8 44 5e f4 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 81cae50:	0f be f0             	movsbl %al,%esi
 81cae53:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81cae56:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81cae5a:	0f b6 d8             	movzbl %al,%ebx
 81cae5d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cae60:	89 04 24             	mov    %eax,(%esp)
 81cae63:	e8 b8 30 f3 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81cae68:	89 7c 24 10          	mov    %edi,0x10(%esp)
 81cae6c:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81cae70:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81cae74:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cae78:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81cae7b:	89 04 24             	mov    %eax,(%esp)
 81cae7e:	e8 d3 98 06 00       	call   8234756 <_ZN25SKILL_USING_VALIDATE_INFOC1Eihcc>
 81cae83:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81cae86:	89 04 24             	mov    %eax,(%esp)
 81cae89:	e8 6e b6 0b 00       	call   82864fc <_ZN26CHackLog_InvalidUsingSkill17IsValidUsingSkillEPK25SKILL_USING_VALIDATE_INFO>
 81cae8e:	83 f0 01             	xor    $0x1,%eax
 81cae91:	84 c0                	test   %al,%al
 81cae93:	74 43                	je     81caed8 <_ZN19DisPatcher_UseSkill7processEP5CUserR8MSG_BASER9ParamBase+0x12e>
 81cae95:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81cae98:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81cae9c:	0f b6 f0             	movzbl %al,%esi
 81cae9f:	e8 b2 b7 0b 00       	call   8286656 <_ZN26CHackLog_InvalidUsingSkill11GetHackTypeEv>
 81caea4:	89 c3                	mov    %eax,%ebx
 81caea6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81caea9:	89 04 24             	mov    %eax,(%esp)
 81caeac:	e8 a9 ea f2 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81caeb1:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81caeb8:	00 
 81caeb9:	89 74 24 10          	mov    %esi,0x10(%esp)
 81caebd:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81caec4:	00 
 81caec5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81caec9:	8b 55 0c             	mov    0xc(%ebp),%edx
 81caecc:	89 54 24 04          	mov    %edx,0x4(%esp)
 81caed0:	89 04 24             	mov    %eax,(%esp)
 81caed3:	e8 a6 dd f2 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81caed8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81caedb:	89 04 24             	mov    %eax,(%esp)
 81caede:	e8 69 a2 48 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81caee3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81caee6:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81caeea:	74 2e                	je     81caf1a <_ZN19DisPatcher_UseSkill7processEP5CUserR8MSG_BASER9ParamBase+0x170>
 81caeec:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81caeef:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 81caef3:	0f b7 d0             	movzwl %ax,%edx
 81caef6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81caef9:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81caefd:	0f b6 c0             	movzbl %al,%eax
 81caf00:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81caf04:	89 44 24 08          	mov    %eax,0x8(%esp)
 81caf08:	8b 45 0c             	mov    0xc(%ebp),%eax
 81caf0b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81caf0f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81caf12:	89 04 24             	mov    %eax,(%esp)
 81caf15:	e8 be c8 3d 00       	call   85a77d8 <_ZN6CParty9use_skillEP5CUserii>
 81caf1a:	b8 00 00 00 00       	mov    $0x0,%eax
 81caf1f:	83 c4 4c             	add    $0x4c,%esp
 81caf22:	5b                   	pop    %ebx
 81caf23:	5e                   	pop    %esi
 81caf24:	5f                   	pop    %edi
 81caf25:	5d                   	pop    %ebp
 81caf26:	c3                   	ret
 81caf27:	90                   	nop

```

```c
// DisPatcher_UseSkill::process @ 0x81cadaa

/* DisPatcher_UseSkill::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_UseSkill::process
          (DisPatcher_UseSkill *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  MSG_BASE MVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  CHackAnalyzer *pCVar7;
  SKILL_USING_VALIDATE_INFO local_30 [8];
  ParamBase *local_28;
  MSG_BASE *local_24;
  CUser *local_20;
  
  local_28 = param_3;
  uVar4 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(local_28 + 4) = uVar4;
  if (*(int *)(local_28 + 4) < 1) {
    if (*(int *)(local_28 + 4) < 0) {
      uVar5 = CUser::get_acc_id(param_1);
      uVar4 = LineFunc(0x1ff2,
                       "virtual int DisPatcher_UseSkill::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(local_28 + 4),uVar5);
    }
    else {
      local_24 = param_2;
      cVar2 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)param_1);
      cVar3 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
      MVar1 = local_24[0xe];
      iVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
      SKILL_USING_VALIDATE_INFO::SKILL_USING_VALIDATE_INFO(local_30,iVar6,(uchar)MVar1,cVar3,cVar2);
      cVar2 = CHackLog_InvalidUsingSkill::IsValidUsingSkill(local_30);
      if (cVar2 != '\x01') {
        MVar1 = local_24[0xe];
        uVar4 = CHackLog_InvalidUsingSkill::GetHackType();
        pCVar7 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar7,param_1,uVar4,1,MVar1,0);
      }
      local_20 = (CUser *)CUser::GetParty(param_1);
      if (local_20 != (CUser *)0x0) {
        CParty::use_skill(local_20,(int)param_1,(uint)(byte)local_24[0xe]);
      }
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## read

```asm
// === 081cac5e DisPatcher_UseSkill::read  [0x081cac5e-0x81cad7f] ===
 81cac5e:	55                   	push   %ebp
 81cac5f:	89 e5                	mov    %esp,%ebp
 81cac61:	83 ec 28             	sub    $0x28,%esp
 81cac64:	8b 45 10             	mov    0x10(%ebp),%eax
 81cac67:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cac6a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cac6d:	83 c0 0d             	add    $0xd,%eax
 81cac70:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cac74:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cac77:	89 04 24             	mov    %eax,(%esp)
 81cac7a:	e8 a3 22 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81cac7f:	83 f0 01             	xor    $0x1,%eax
 81cac82:	84 c0                	test   %al,%al
 81cac84:	74 29                	je     81cacaf <_ZN19DisPatcher_UseSkill4readER9PacketBufR8MSG_BASE+0x51>
 81cac86:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cac8d:	00 
 81cac8e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cac95:	00 
 81cac96:	c7 44 24 04 20 52 bd 	movl   $0x8bd5220,0x4(%esp)
 81cac9d:	08 
 81cac9e:	c7 04 24 ce 1f 00 00 	movl   $0x1fce,(%esp)
 81caca5:	e8 2d 5c 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cacaa:	e9 ce 00 00 00       	jmp    81cad7d <_ZN19DisPatcher_UseSkill4readER9PacketBufR8MSG_BASE+0x11f>
 81cacaf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cacb2:	83 c0 0e             	add    $0xe,%eax
 81cacb5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cacb9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cacbc:	89 04 24             	mov    %eax,(%esp)
 81cacbf:	e8 ac 22 3c 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81cacc4:	83 f0 01             	xor    $0x1,%eax
 81cacc7:	84 c0                	test   %al,%al
 81cacc9:	74 29                	je     81cacf4 <_ZN19DisPatcher_UseSkill4readER9PacketBufR8MSG_BASE+0x96>
 81caccb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cacd2:	00 
 81cacd3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cacda:	00 
 81cacdb:	c7 44 24 04 20 52 bd 	movl   $0x8bd5220,0x4(%esp)
 81cace2:	08 
 81cace3:	c7 04 24 d0 1f 00 00 	movl   $0x1fd0,(%esp)
 81cacea:	e8 e8 5b 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cacef:	e9 89 00 00 00       	jmp    81cad7d <_ZN19DisPatcher_UseSkill4readER9PacketBufR8MSG_BASE+0x11f>
 81cacf4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cacf7:	83 c0 0f             	add    $0xf,%eax
 81cacfa:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cacfe:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cad01:	89 04 24             	mov    %eax,(%esp)
 81cad04:	e8 a7 23 3c 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81cad09:	83 f0 01             	xor    $0x1,%eax
 81cad0c:	84 c0                	test   %al,%al
 81cad0e:	74 26                	je     81cad36 <_ZN19DisPatcher_UseSkill4readER9PacketBufR8MSG_BASE+0xd8>
 81cad10:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cad17:	00 
 81cad18:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cad1f:	00 
 81cad20:	c7 44 24 04 20 52 bd 	movl   $0x8bd5220,0x4(%esp)
 81cad27:	08 
 81cad28:	c7 04 24 d2 1f 00 00 	movl   $0x1fd2,(%esp)
 81cad2f:	e8 a3 5b 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cad34:	eb 47                	jmp    81cad7d <_ZN19DisPatcher_UseSkill4readER9PacketBufR8MSG_BASE+0x11f>
 81cad36:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cad39:	83 c0 11             	add    $0x11,%eax
 81cad3c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cad40:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cad43:	89 04 24             	mov    %eax,(%esp)
 81cad46:	e8 65 23 3c 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81cad4b:	83 f0 01             	xor    $0x1,%eax
 81cad4e:	84 c0                	test   %al,%al
 81cad50:	74 26                	je     81cad78 <_ZN19DisPatcher_UseSkill4readER9PacketBufR8MSG_BASE+0x11a>
 81cad52:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cad59:	00 
 81cad5a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cad61:	00 
 81cad62:	c7 44 24 04 20 52 bd 	movl   $0x8bd5220,0x4(%esp)
 81cad69:	08 
 81cad6a:	c7 04 24 d9 1f 00 00 	movl   $0x1fd9,(%esp)
 81cad71:	e8 61 5b 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cad76:	eb 05                	jmp    81cad7d <_ZN19DisPatcher_UseSkill4readER9PacketBufR8MSG_BASE+0x11f>
 81cad78:	b8 00 00 00 00       	mov    $0x0,%eax
 81cad7d:	c9                   	leave
 81cad7e:	c3                   	ret
 81cad7f:	90                   	nop

```

```c
// DisPatcher_UseSkill::read @ 0x81cac5e

/* DisPatcher_UseSkill::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_UseSkill::read(DisPatcher_UseSkill *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xf));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x11));
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = LineFunc(0x1fd9,"virtual int DisPatcher_UseSkill::read(PacketBuf&, MSG_BASE&)",0,0
                          );
        }
      }
      else {
        uVar2 = LineFunc(0x1fd2,"virtual int DisPatcher_UseSkill::read(PacketBuf&, MSG_BASE&)",0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x1fd0,"virtual int DisPatcher_UseSkill::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x1fce,"virtual int DisPatcher_UseSkill::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081caf28 DisPatcher_UseSkill::send  [0x081caf28-0x81caf41] ===
 81caf28:	55                   	push   %ebp
 81caf29:	89 e5                	mov    %esp,%ebp
 81caf2b:	83 ec 10             	sub    $0x10,%esp
 81caf2e:	8b 45 10             	mov    0x10(%ebp),%eax
 81caf31:	89 45 fc             	mov    %eax,-0x4(%ebp)
 81caf34:	8b 45 fc             	mov    -0x4(%ebp),%eax
 81caf37:	8b 40 04             	mov    0x4(%eax),%eax
 81caf3a:	3d ff ff ff 7f       	cmp    $0x7fffffff,%eax
 81caf3f:	c9                   	leave
 81caf40:	c3                   	ret
 81caf41:	90                   	nop

```

```c
// DisPatcher_UseSkill::send @ 0x81caf28

/* DisPatcher_UseSkill::send(CUser*, ParamBase&) */

undefined4 __thiscall
DisPatcher_UseSkill::send(DisPatcher_UseSkill *this,CUser *param_1,ParamBase *param_2)

{
  return *(undefined4 *)(param_2 + 4);
}

```

