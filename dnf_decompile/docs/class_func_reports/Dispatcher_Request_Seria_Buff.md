# Dispatcher_Request_Seria_Buff

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081dbcd8 Dispatcher_Request_Seria_Buff::check_error  [0x081dbcd8-0x81dbd9f] ===
 81dbcd8:	55                   	push   %ebp
 81dbcd9:	89 e5                	mov    %esp,%ebp
 81dbcdb:	53                   	push   %ebx
 81dbcdc:	83 ec 24             	sub    $0x24,%esp
 81dbcdf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dbce2:	89 04 24             	mov    %eax,(%esp)
 81dbce5:	e8 48 47 f4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81dbcea:	85 c0                	test   %eax,%eax
 81dbcec:	0f 94 c0             	sete   %al
 81dbcef:	84 c0                	test   %al,%al
 81dbcf1:	74 0a                	je     81dbcfd <_ZN29Dispatcher_Request_Seria_Buff11check_errorEP5CUserR8MSG_BASER9ParamBase+0x25>
 81dbcf3:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81dbcf8:	e9 9d 00 00 00       	jmp    81dbd9a <_ZN29Dispatcher_Request_Seria_Buff11check_errorEP5CUserR8MSG_BASER9ParamBase+0xc2>
 81dbcfd:	a1 30 f7 41 09       	mov    0x941f730,%eax
 81dbd02:	c7 44 24 04 5d 00 00 	movl   $0x5d,0x4(%esp)
 81dbd09:	00 
 81dbd0a:	89 04 24             	mov    %eax,(%esp)
 81dbd0d:	e8 86 9c f3 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 81dbd12:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81dbd15:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dbd18:	8b 00                	mov    (%eax),%eax
 81dbd1a:	83 c0 34             	add    $0x34,%eax
 81dbd1d:	8b 10                	mov    (%eax),%edx
 81dbd1f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81dbd26:	00 
 81dbd27:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dbd2a:	89 04 24             	mov    %eax,(%esp)
 81dbd2d:	ff d2                	call   *%edx
 81dbd2f:	84 c0                	test   %al,%al
 81dbd31:	74 31                	je     81dbd64 <_ZN29Dispatcher_Request_Seria_Buff11check_errorEP5CUserR8MSG_BASER9ParamBase+0x8c>
 81dbd33:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dbd36:	89 04 24             	mov    %eax,(%esp)
 81dbd39:	e8 7a e5 ef ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81dbd3e:	89 c3                	mov    %eax,%ebx
 81dbd40:	e8 56 04 ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81dbd45:	05 94 50 00 00       	add    $0x5094,%eax
 81dbd4a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81dbd4e:	89 04 24             	mov    %eax,(%esp)
 81dbd51:	e8 cc f1 04 00       	call   822af22 <_ZN21stSeriaBlessingScript14is_possible_lvEi>
 81dbd56:	83 f0 01             	xor    $0x1,%eax
 81dbd59:	84 c0                	test   %al,%al
 81dbd5b:	74 38                	je     81dbd95 <_ZN29Dispatcher_Request_Seria_Buff11check_errorEP5CUserR8MSG_BASER9ParamBase+0xbd>
 81dbd5d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81dbd62:	eb 36                	jmp    81dbd9a <_ZN29Dispatcher_Request_Seria_Buff11check_errorEP5CUserR8MSG_BASER9ParamBase+0xc2>
 81dbd64:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dbd67:	89 04 24             	mov    %eax,(%esp)
 81dbd6a:	e8 49 e5 ef ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81dbd6f:	89 c3                	mov    %eax,%ebx
 81dbd71:	e8 25 04 ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81dbd76:	05 10 87 00 00       	add    $0x8710,%eax
 81dbd7b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81dbd7f:	89 04 24             	mov    %eax,(%esp)
 81dbd82:	e8 af f3 04 00       	call   822b136 <_ZN17STGrowthPowerData26get_idx_break_away_sectionEi>
 81dbd87:	c1 e8 1f             	shr    $0x1f,%eax
 81dbd8a:	84 c0                	test   %al,%al
 81dbd8c:	74 07                	je     81dbd95 <_ZN29Dispatcher_Request_Seria_Buff11check_errorEP5CUserR8MSG_BASER9ParamBase+0xbd>
 81dbd8e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81dbd93:	eb 05                	jmp    81dbd9a <_ZN29Dispatcher_Request_Seria_Buff11check_errorEP5CUserR8MSG_BASER9ParamBase+0xc2>
 81dbd95:	b8 00 00 00 00       	mov    $0x0,%eax
 81dbd9a:	83 c4 24             	add    $0x24,%esp
 81dbd9d:	5b                   	pop    %ebx
 81dbd9e:	5d                   	pop    %ebp
 81dbd9f:	c3                   	ret

```

```c
// Dispatcher_Request_Seria_Buff::check_error @ 0x81dbcd8

/* Dispatcher_Request_Seria_Buff::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_Request_Seria_Buff::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    piVar4 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x5d);
    cVar1 = (**(code **)(*piVar4 + 0x34))(piVar4,0);
    if (cVar1 == '\0') {
      iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
      iVar5 = G_CDataManager();
      iVar2 = STGrowthPowerData::get_idx_break_away_section
                        ((STGrowthPowerData *)(iVar5 + 0x8710),iVar2);
      if (iVar2 < 0) {
        return 0xffffffff;
      }
    }
    else {
      iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
      iVar5 = G_CDataManager();
      cVar1 = stSeriaBlessingScript::is_possible_lv((stSeriaBlessingScript *)(iVar5 + 0x5094),iVar2)
      ;
      if (cVar1 != '\x01') {
        return 0xffffffff;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## process

```asm
// === 081dbda0 Dispatcher_Request_Seria_Buff::process  [0x081dbda0-0x81dbe07] ===
 81dbda0:	55                   	push   %ebp
 81dbda1:	89 e5                	mov    %esp,%ebp
 81dbda3:	83 ec 28             	sub    $0x28,%esp
 81dbda6:	8b 45 14             	mov    0x14(%ebp),%eax
 81dbda9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81dbdad:	8b 45 10             	mov    0x10(%ebp),%eax
 81dbdb0:	89 44 24 08          	mov    %eax,0x8(%esp)
 81dbdb4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dbdb7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dbdbb:	8b 45 08             	mov    0x8(%ebp),%eax
 81dbdbe:	89 04 24             	mov    %eax,(%esp)
 81dbdc1:	e8 12 ff ff ff       	call   81dbcd8 <_ZN29Dispatcher_Request_Seria_Buff11check_errorEP5CUserR8MSG_BASER9ParamBase>
 81dbdc6:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81dbdc9:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81dbdcd:	7e 05                	jle    81dbdd4 <_ZN29Dispatcher_Request_Seria_Buff7processEP5CUserR8MSG_BASER9ParamBase+0x34>
 81dbdcf:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81dbdd2:	eb 31                	jmp    81dbe05 <_ZN29Dispatcher_Request_Seria_Buff7processEP5CUserR8MSG_BASER9ParamBase+0x65>
 81dbdd4:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81dbdd8:	79 07                	jns    81dbde1 <_ZN29Dispatcher_Request_Seria_Buff7processEP5CUserR8MSG_BASER9ParamBase+0x41>
 81dbdda:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81dbddf:	eb 24                	jmp    81dbe05 <_ZN29Dispatcher_Request_Seria_Buff7processEP5CUserR8MSG_BASER9ParamBase+0x65>
 81dbde1:	8b 45 10             	mov    0x10(%ebp),%eax
 81dbde4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81dbde7:	8b 45 14             	mov    0x14(%ebp),%eax
 81dbdea:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81dbded:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dbdf0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81dbdf7:	00 
 81dbdf8:	89 04 24             	mov    %eax,(%esp)
 81dbdfb:	e8 50 3d 05 00       	call   822fb50 <_ZN15CUserCharacInfo33set_growth_power_exp_reward_rightEb>
 81dbe00:	b8 00 00 00 00       	mov    $0x0,%eax
 81dbe05:	c9                   	leave
 81dbe06:	c3                   	ret
 81dbe07:	90                   	nop

```

```c
// Dispatcher_Request_Seria_Buff::process @ 0x81dbda0

/* Dispatcher_Request_Seria_Buff::process(CUser*, MSG_BASE&, ParamBase&) */

int Dispatcher_Request_Seria_Buff::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  
  iVar1 = check_error(param_1,param_2,param_3);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      CUserCharacInfo::set_growth_power_exp_reward_right((CUserCharacInfo *)param_2,false);
      iVar1 = 0;
    }
  }
  return iVar1;
}

```

---

## read

```asm
// === 081dbcce Dispatcher_Request_Seria_Buff::read  [0x081dbcce-0x81dbcd7] ===
 81dbcce:	55                   	push   %ebp
 81dbccf:	89 e5                	mov    %esp,%ebp
 81dbcd1:	b8 00 00 00 00       	mov    $0x0,%eax
 81dbcd6:	5d                   	pop    %ebp
 81dbcd7:	c3                   	ret

```

```c
// Dispatcher_Request_Seria_Buff::read @ 0x81dbcce

/* Dispatcher_Request_Seria_Buff::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_Request_Seria_Buff::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## send

```asm
// === 081dbe08 Dispatcher_Request_Seria_Buff::send  [0x081dbe08-0x81dbe6f] ===
 81dbe08:	55                   	push   %ebp
 81dbe09:	89 e5                	mov    %esp,%ebp
 81dbe0b:	83 ec 28             	sub    $0x28,%esp
 81dbe0e:	8b 45 10             	mov    0x10(%ebp),%eax
 81dbe11:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81dbe14:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dbe17:	8b 40 04             	mov    0x4(%eax),%eax
 81dbe1a:	85 c0                	test   %eax,%eax
 81dbe1c:	75 2f                	jne    81dbe4d <_ZN29Dispatcher_Request_Seria_Buff4sendEP5CUserR9ParamBase+0x45>
 81dbe1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dbe21:	89 04 24             	mov    %eax,(%esp)
 81dbe24:	e8 8f e4 ef ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81dbe29:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dbe2d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dbe30:	89 04 24             	mov    %eax,(%esp)
 81dbe33:	e8 96 1c 4b 00       	call   868dace <_ZN5CUser27set_growth_power_exp_rewardEi>
 81dbe38:	c7 44 24 04 b1 01 00 	movl   $0x1b1,0x4(%esp)
 81dbe3f:	00 
 81dbe40:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dbe43:	89 04 24             	mov    %eax,(%esp)
 81dbe46:	e8 55 00 4a 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 81dbe4b:	eb 20                	jmp    81dbe6d <_ZN29Dispatcher_Request_Seria_Buff4sendEP5CUserR9ParamBase+0x65>
 81dbe4d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dbe50:	8b 40 04             	mov    0x4(%eax),%eax
 81dbe53:	0f b6 c0             	movzbl %al,%eax
 81dbe56:	89 44 24 08          	mov    %eax,0x8(%esp)
 81dbe5a:	c7 44 24 04 b1 01 00 	movl   $0x1b1,0x4(%esp)
 81dbe61:	00 
 81dbe62:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dbe65:	89 04 24             	mov    %eax,(%esp)
 81dbe68:	e8 d5 00 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81dbe6d:	c9                   	leave
 81dbe6e:	c3                   	ret
 81dbe6f:	90                   	nop

```

```c
// Dispatcher_Request_Seria_Buff::send @ 0x81dbe08

/* Dispatcher_Request_Seria_Buff::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Request_Seria_Buff::send
          (Dispatcher_Request_Seria_Buff *this,CUser *param_1,ParamBase *param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 4) == 0) {
    iVar1 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    CUser::set_growth_power_exp_reward(param_1,iVar1);
    CUser::SendCmdOkPacket(param_1,0x1b1);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1b1,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

