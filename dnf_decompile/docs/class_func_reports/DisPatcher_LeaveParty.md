# DisPatcher_LeaveParty

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081c436e DisPatcher_LeaveParty::check_error  [0x081c436e-0x81c4395] ===
 81c436e:	55                   	push   %ebp
 81c436f:	89 e5                	mov    %esp,%ebp
 81c4371:	83 ec 28             	sub    $0x28,%esp
 81c4374:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c4377:	89 04 24             	mov    %eax,(%esp)
 81c437a:	e8 cd 0d 49 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81c437f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c4382:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81c4386:	75 07                	jne    81c438f <_ZN21DisPatcher_LeaveParty11check_errorEP5CUserR8MSG_BASE+0x21>
 81c4388:	b8 12 00 00 00       	mov    $0x12,%eax
 81c438d:	eb 05                	jmp    81c4394 <_ZN21DisPatcher_LeaveParty11check_errorEP5CUserR8MSG_BASE+0x26>
 81c438f:	b8 00 00 00 00       	mov    $0x0,%eax
 81c4394:	c9                   	leave
 81c4395:	c3                   	ret

```

```c
// DisPatcher_LeaveParty::check_error @ 0x81c436e

/* DisPatcher_LeaveParty::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_LeaveParty::check_error(CUser *param_1,MSG_BASE *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CUser::GetParty((CUser *)param_2);
  if (iVar1 == 0) {
    uVar2 = 0x12;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## process

```asm
// === 081c4256 DisPatcher_LeaveParty::process  [0x081c4256-0x81c4325] ===
 81c4256:	55                   	push   %ebp
 81c4257:	89 e5                	mov    %esp,%ebp
 81c4259:	83 ec 28             	sub    $0x28,%esp
 81c425c:	8b 45 14             	mov    0x14(%ebp),%eax
 81c425f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81c4262:	8b 45 10             	mov    0x10(%ebp),%eax
 81c4265:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c4269:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c426c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c4270:	8b 45 08             	mov    0x8(%ebp),%eax
 81c4273:	89 04 24             	mov    %eax,(%esp)
 81c4276:	e8 f3 00 00 00       	call   81c436e <_ZN21DisPatcher_LeaveParty11check_errorEP5CUserR8MSG_BASE>
 81c427b:	89 c2                	mov    %eax,%edx
 81c427d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c4280:	89 50 04             	mov    %edx,0x4(%eax)
 81c4283:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c4286:	8b 40 04             	mov    0x4(%eax),%eax
 81c4289:	85 c0                	test   %eax,%eax
 81c428b:	7e 0a                	jle    81c4297 <_ZN21DisPatcher_LeaveParty7processEP5CUserR8MSG_BASER9ParamBase+0x41>
 81c428d:	b8 00 00 00 00       	mov    $0x0,%eax
 81c4292:	e9 8d 00 00 00       	jmp    81c4324 <_ZN21DisPatcher_LeaveParty7processEP5CUserR8MSG_BASER9ParamBase+0xce>
 81c4297:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c429a:	8b 40 04             	mov    0x4(%eax),%eax
 81c429d:	85 c0                	test   %eax,%eax
 81c429f:	79 2f                	jns    81c42d0 <_ZN21DisPatcher_LeaveParty7processEP5CUserR8MSG_BASER9ParamBase+0x7a>
 81c42a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c42a4:	89 04 24             	mov    %eax,(%esp)
 81c42a7:	e8 c2 60 f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c42ac:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81c42af:	8b 52 04             	mov    0x4(%edx),%edx
 81c42b2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c42b6:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c42ba:	c7 44 24 04 00 5b bd 	movl   $0x8bd5b00,0x4(%esp)
 81c42c1:	08 
 81c42c2:	c7 04 24 9f 10 00 00 	movl   $0x109f,(%esp)
 81c42c9:	e8 09 c6 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c42ce:	eb 54                	jmp    81c4324 <_ZN21DisPatcher_LeaveParty7processEP5CUserR8MSG_BASER9ParamBase+0xce>
 81c42d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c42d3:	89 04 24             	mov    %eax,(%esp)
 81c42d6:	e8 71 0e 49 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81c42db:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81c42de:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 81c42e5:	00 
 81c42e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c42e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c42ed:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c42f0:	89 04 24             	mov    %eax,(%esp)
 81c42f3:	e8 1c 7e 3d 00       	call   859c114 <_ZN6CParty10leave_userEP5CUser20ENUM_PARTY_INFO_TYPE>
 81c42f8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c42fb:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 81c42ff:	75 0a                	jne    81c430b <_ZN21DisPatcher_LeaveParty7processEP5CUserR8MSG_BASER9ParamBase+0xb5>
 81c4301:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c4304:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
 81c430b:	e8 90 0d 07 00       	call   82350a0 <_ZN11pvp_assault21GetInstanceAssaultMgrEv>
 81c4310:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c4313:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c4317:	89 04 24             	mov    %eax,(%esp)
 81c431a:	e8 53 93 12 00       	call   82ed672 <_ZN11pvp_assault11CAssaultMgr25ForcedMoveAtPowerWarPlaceEP5CUser>
 81c431f:	b8 00 00 00 00       	mov    $0x0,%eax
 81c4324:	c9                   	leave
 81c4325:	c3                   	ret

```

```c
// DisPatcher_LeaveParty::process @ 0x81c4256

/* DisPatcher_LeaveParty::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_LeaveParty::process
          (DisPatcher_LeaveParty *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  CParty *pCVar3;
  int iVar4;
  CAssaultMgr *this_00;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x109f,
                       "virtual int DisPatcher_LeaveParty::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(param_3 + 4),uVar2);
    }
    else {
      pCVar3 = (CParty *)CUser::GetParty(param_1);
      iVar4 = CParty::leave_user(pCVar3,param_1,2);
      if (iVar4 == 1) {
        *(undefined4 *)(param_3 + 4) = 1;
      }
      this_00 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
      pvp_assault::CAssaultMgr::ForcedMoveAtPowerWarPlace(this_00,param_1);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## read

```asm
// === 081c424c DisPatcher_LeaveParty::read  [0x081c424c-0x81c4255] ===
 81c424c:	55                   	push   %ebp
 81c424d:	89 e5                	mov    %esp,%ebp
 81c424f:	b8 00 00 00 00       	mov    $0x0,%eax
 81c4254:	5d                   	pop    %ebp
 81c4255:	c3                   	ret

```

```c
// DisPatcher_LeaveParty::read @ 0x81c424c

/* DisPatcher_LeaveParty::read(PacketBuf&, MSG_BASE&) */

undefined4 DisPatcher_LeaveParty::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## send

```asm
// === 081c4326 DisPatcher_LeaveParty::send  [0x081c4326-0x81c436d] ===
 81c4326:	55                   	push   %ebp
 81c4327:	89 e5                	mov    %esp,%ebp
 81c4329:	83 ec 28             	sub    $0x28,%esp
 81c432c:	8b 45 10             	mov    0x10(%ebp),%eax
 81c432f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c4332:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c4335:	8b 40 04             	mov    0x4(%eax),%eax
 81c4338:	3d ff ff ff 7f       	cmp    $0x7fffffff,%eax
 81c433d:	74 2c                	je     81c436b <_ZN21DisPatcher_LeaveParty4sendEP5CUserR9ParamBase+0x45>
 81c433f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c4342:	8b 40 04             	mov    0x4(%eax),%eax
 81c4345:	85 c0                	test   %eax,%eax
 81c4347:	74 23                	je     81c436c <_ZN21DisPatcher_LeaveParty4sendEP5CUserR9ParamBase+0x46>
 81c4349:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c434c:	8b 40 04             	mov    0x4(%eax),%eax
 81c434f:	0f b6 c0             	movzbl %al,%eax
 81c4352:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c4356:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 81c435d:	00 
 81c435e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c4361:	89 04 24             	mov    %eax,(%esp)
 81c4364:	e8 d9 7b 4b 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81c4369:	eb 01                	jmp    81c436c <_ZN21DisPatcher_LeaveParty4sendEP5CUserR9ParamBase+0x46>
 81c436b:	90                   	nop
 81c436c:	c9                   	leave
 81c436d:	c3                   	ret

```

```c
// DisPatcher_LeaveParty::send @ 0x81c4326

/* DisPatcher_LeaveParty::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_LeaveParty::send(DisPatcher_LeaveParty *this,CUser *param_1,ParamBase *param_2)

{
  if ((*(int *)(param_2 + 4) != 0x7fffffff) && (*(int *)(param_2 + 4) != 0)) {
    CUser::SendCmdErrorPacket(param_1,0xd,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

