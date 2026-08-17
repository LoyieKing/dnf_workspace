# Dispatcher_Cancel_Quick_Party

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081de1b4 Dispatcher_Cancel_Quick_Party::check_error  [0x081de1b4-0x81de1f7] ===
 81de1b4:	55                   	push   %ebp
 81de1b5:	89 e5                	mov    %esp,%ebp
 81de1b7:	83 ec 18             	sub    $0x18,%esp
 81de1ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 81de1bd:	89 04 24             	mov    %eax,(%esp)
 81de1c0:	e8 c7 c1 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81de1c5:	83 f8 03             	cmp    $0x3,%eax
 81de1c8:	7e 0f                	jle    81de1d9 <_ZN29Dispatcher_Cancel_Quick_Party11check_errorEP5CUserR8MSG_BASER9ParamBase+0x25>
 81de1ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 81de1cd:	89 04 24             	mov    %eax,(%esp)
 81de1d0:	e8 5d 22 f4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81de1d5:	85 c0                	test   %eax,%eax
 81de1d7:	75 07                	jne    81de1e0 <_ZN29Dispatcher_Cancel_Quick_Party11check_errorEP5CUserR8MSG_BASER9ParamBase+0x2c>
 81de1d9:	b8 01 00 00 00       	mov    $0x1,%eax
 81de1de:	eb 05                	jmp    81de1e5 <_ZN29Dispatcher_Cancel_Quick_Party11check_errorEP5CUserR8MSG_BASER9ParamBase+0x31>
 81de1e0:	b8 00 00 00 00       	mov    $0x0,%eax
 81de1e5:	84 c0                	test   %al,%al
 81de1e7:	74 07                	je     81de1f0 <_ZN29Dispatcher_Cancel_Quick_Party11check_errorEP5CUserR8MSG_BASER9ParamBase+0x3c>
 81de1e9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81de1ee:	eb 05                	jmp    81de1f5 <_ZN29Dispatcher_Cancel_Quick_Party11check_errorEP5CUserR8MSG_BASER9ParamBase+0x41>
 81de1f0:	b8 00 00 00 00       	mov    $0x0,%eax
 81de1f5:	c9                   	leave
 81de1f6:	c3                   	ret
 81de1f7:	90                   	nop

```

```c
// Dispatcher_Cancel_Quick_Party::check_error @ 0x81de1b4

/* Dispatcher_Cancel_Quick_Party::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_Cancel_Quick_Party::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (3 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081de1e5;
    }
  }
  bVar1 = true;
LAB_081de1e5:
  if (bVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## process

```asm
// === 081de1f8 Dispatcher_Cancel_Quick_Party::process  [0x081de1f8-0x81de297] ===
 81de1f8:	55                   	push   %ebp
 81de1f9:	89 e5                	mov    %esp,%ebp
 81de1fb:	53                   	push   %ebx
 81de1fc:	83 ec 24             	sub    $0x24,%esp
 81de1ff:	8b 45 14             	mov    0x14(%ebp),%eax
 81de202:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81de206:	8b 45 10             	mov    0x10(%ebp),%eax
 81de209:	89 44 24 08          	mov    %eax,0x8(%esp)
 81de20d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81de210:	89 44 24 04          	mov    %eax,0x4(%esp)
 81de214:	8b 45 08             	mov    0x8(%ebp),%eax
 81de217:	89 04 24             	mov    %eax,(%esp)
 81de21a:	e8 95 ff ff ff       	call   81de1b4 <_ZN29Dispatcher_Cancel_Quick_Party11check_errorEP5CUserR8MSG_BASER9ParamBase>
 81de21f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81de222:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81de226:	7e 05                	jle    81de22d <_ZN29Dispatcher_Cancel_Quick_Party7processEP5CUserR8MSG_BASER9ParamBase+0x35>
 81de228:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81de22b:	eb 64                	jmp    81de291 <_ZN29Dispatcher_Cancel_Quick_Party7processEP5CUserR8MSG_BASER9ParamBase+0x99>
 81de22d:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81de231:	79 07                	jns    81de23a <_ZN29Dispatcher_Cancel_Quick_Party7processEP5CUserR8MSG_BASER9ParamBase+0x42>
 81de233:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81de238:	eb 57                	jmp    81de291 <_ZN29Dispatcher_Cancel_Quick_Party7processEP5CUserR8MSG_BASER9ParamBase+0x99>
 81de23a:	8b 45 10             	mov    0x10(%ebp),%eax
 81de23d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81de240:	8b 45 14             	mov    0x14(%ebp),%eax
 81de243:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81de246:	8b 45 0c             	mov    0xc(%ebp),%eax
 81de249:	89 04 24             	mov    %eax,(%esp)
 81de24c:	e8 fb 6e 47 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81de251:	89 c3                	mov    %eax,%ebx
 81de253:	e8 36 df ee ff       	call   80cc18e <_Z14G_CGameManagerv>
 81de258:	89 04 24             	mov    %eax,(%esp)
 81de25b:	e8 60 ab 0b 00       	call   8298dc0 <_ZN12CGameManager26GetQuickPartySystemManagerEv>
 81de260:	8b 55 0c             	mov    0xc(%ebp),%edx
 81de263:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81de267:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81de26e:	00 
 81de26f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81de273:	89 04 24             	mov    %eax,(%esp)
 81de276:	e8 0b c1 08 00       	call   826a386 <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser>
 81de27b:	83 f0 01             	xor    $0x1,%eax
 81de27e:	84 c0                	test   %al,%al
 81de280:	74 0a                	je     81de28c <_ZN29Dispatcher_Cancel_Quick_Party7processEP5CUserR8MSG_BASER9ParamBase+0x94>
 81de282:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81de285:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
 81de28c:	b8 00 00 00 00       	mov    $0x0,%eax
 81de291:	83 c4 24             	add    $0x24,%esp
 81de294:	5b                   	pop    %ebx
 81de295:	5d                   	pop    %ebp
 81de296:	c3                   	ret
 81de297:	90                   	nop

```

```c
// Dispatcher_Cancel_Quick_Party::process @ 0x81de1f8

/* Dispatcher_Cancel_Quick_Party::process(CUser*, MSG_BASE&, ParamBase&) */

int __thiscall
Dispatcher_Cancel_Quick_Party::process
          (Dispatcher_Cancel_Quick_Party *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  int iVar2;
  CParty *pCVar3;
  CGameManager *this_00;
  CQuickPartySystemManager *this_01;
  
  iVar2 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      iVar2 = -1;
    }
    else {
      pCVar3 = (CParty *)CUser::GetParty(param_1);
      this_00 = (CGameManager *)G_CGameManager();
      this_01 = (CQuickPartySystemManager *)CGameManager::GetQuickPartySystemManager(this_00);
      cVar1 = QuickParty::CQuickPartySystemManager::cancel_quick_party(this_01,pCVar3,true,param_1);
      if (cVar1 != '\x01') {
        *(undefined4 *)(param_3 + 4) = 1;
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}

```

---

## read

```asm
// === 081de1aa Dispatcher_Cancel_Quick_Party::read  [0x081de1aa-0x81de1b3] ===
 81de1aa:	55                   	push   %ebp
 81de1ab:	89 e5                	mov    %esp,%ebp
 81de1ad:	b8 00 00 00 00       	mov    $0x0,%eax
 81de1b2:	5d                   	pop    %ebp
 81de1b3:	c3                   	ret

```

```c
// Dispatcher_Cancel_Quick_Party::read @ 0x81de1aa

/* Dispatcher_Cancel_Quick_Party::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_Cancel_Quick_Party::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## send

```asm
// === 081de298 Dispatcher_Cancel_Quick_Party::send  [0x081de298-0x81de2e5] ===
 81de298:	55                   	push   %ebp
 81de299:	89 e5                	mov    %esp,%ebp
 81de29b:	83 ec 28             	sub    $0x28,%esp
 81de29e:	8b 45 10             	mov    0x10(%ebp),%eax
 81de2a1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81de2a4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81de2a7:	8b 40 04             	mov    0x4(%eax),%eax
 81de2aa:	85 c0                	test   %eax,%eax
 81de2ac:	75 15                	jne    81de2c3 <_ZN29Dispatcher_Cancel_Quick_Party4sendEP5CUserR9ParamBase+0x2b>
 81de2ae:	c7 44 24 04 bd 01 00 	movl   $0x1bd,0x4(%esp)
 81de2b5:	00 
 81de2b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81de2b9:	89 04 24             	mov    %eax,(%esp)
 81de2bc:	e8 df db 49 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 81de2c1:	eb 20                	jmp    81de2e3 <_ZN29Dispatcher_Cancel_Quick_Party4sendEP5CUserR9ParamBase+0x4b>
 81de2c3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81de2c6:	8b 40 04             	mov    0x4(%eax),%eax
 81de2c9:	0f b6 c0             	movzbl %al,%eax
 81de2cc:	89 44 24 08          	mov    %eax,0x8(%esp)
 81de2d0:	c7 44 24 04 bd 01 00 	movl   $0x1bd,0x4(%esp)
 81de2d7:	00 
 81de2d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81de2db:	89 04 24             	mov    %eax,(%esp)
 81de2de:	e8 5f dc 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81de2e3:	c9                   	leave
 81de2e4:	c3                   	ret
 81de2e5:	90                   	nop

```

```c
// Dispatcher_Cancel_Quick_Party::send @ 0x81de298

/* Dispatcher_Cancel_Quick_Party::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Cancel_Quick_Party::send
          (Dispatcher_Cancel_Quick_Party *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x1bd);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1bd,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

