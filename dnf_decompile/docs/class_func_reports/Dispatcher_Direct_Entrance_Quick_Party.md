# Dispatcher_Direct_Entrance_Quick_Party

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081de2e6 Dispatcher_Direct_Entrance_Quick_Party::check_error  [0x081de2e6-0x81de329] ===
 81de2e6:	55                   	push   %ebp
 81de2e7:	89 e5                	mov    %esp,%ebp
 81de2e9:	83 ec 18             	sub    $0x18,%esp
 81de2ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 81de2ef:	89 04 24             	mov    %eax,(%esp)
 81de2f2:	e8 95 c0 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81de2f7:	83 f8 03             	cmp    $0x3,%eax
 81de2fa:	7e 0f                	jle    81de30b <_ZN38Dispatcher_Direct_Entrance_Quick_Party11check_errorEP5CUserR8MSG_BASER9ParamBase+0x25>
 81de2fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81de2ff:	89 04 24             	mov    %eax,(%esp)
 81de302:	e8 2b 21 f4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81de307:	85 c0                	test   %eax,%eax
 81de309:	75 07                	jne    81de312 <_ZN38Dispatcher_Direct_Entrance_Quick_Party11check_errorEP5CUserR8MSG_BASER9ParamBase+0x2c>
 81de30b:	b8 01 00 00 00       	mov    $0x1,%eax
 81de310:	eb 05                	jmp    81de317 <_ZN38Dispatcher_Direct_Entrance_Quick_Party11check_errorEP5CUserR8MSG_BASER9ParamBase+0x31>
 81de312:	b8 00 00 00 00       	mov    $0x0,%eax
 81de317:	84 c0                	test   %al,%al
 81de319:	74 07                	je     81de322 <_ZN38Dispatcher_Direct_Entrance_Quick_Party11check_errorEP5CUserR8MSG_BASER9ParamBase+0x3c>
 81de31b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81de320:	eb 05                	jmp    81de327 <_ZN38Dispatcher_Direct_Entrance_Quick_Party11check_errorEP5CUserR8MSG_BASER9ParamBase+0x41>
 81de322:	b8 00 00 00 00       	mov    $0x0,%eax
 81de327:	c9                   	leave
 81de328:	c3                   	ret
 81de329:	90                   	nop

```

```c
// Dispatcher_Direct_Entrance_Quick_Party::check_error @ 0x81de2e6

/* Dispatcher_Direct_Entrance_Quick_Party::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_Direct_Entrance_Quick_Party::check_error
          (CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (3 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081de317;
    }
  }
  bVar1 = true;
LAB_081de317:
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
// === 081de334 Dispatcher_Direct_Entrance_Quick_Party::process  [0x081de334-0x81de3b7] ===
 81de334:	55                   	push   %ebp
 81de335:	89 e5                	mov    %esp,%ebp
 81de337:	83 ec 28             	sub    $0x28,%esp
 81de33a:	8b 45 14             	mov    0x14(%ebp),%eax
 81de33d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81de341:	8b 45 10             	mov    0x10(%ebp),%eax
 81de344:	89 44 24 08          	mov    %eax,0x8(%esp)
 81de348:	8b 45 0c             	mov    0xc(%ebp),%eax
 81de34b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81de34f:	8b 45 08             	mov    0x8(%ebp),%eax
 81de352:	89 04 24             	mov    %eax,(%esp)
 81de355:	e8 8c ff ff ff       	call   81de2e6 <_ZN38Dispatcher_Direct_Entrance_Quick_Party11check_errorEP5CUserR8MSG_BASER9ParamBase>
 81de35a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81de35d:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81de361:	7e 05                	jle    81de368 <_ZN38Dispatcher_Direct_Entrance_Quick_Party7processEP5CUserR8MSG_BASER9ParamBase+0x34>
 81de363:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81de366:	eb 4d                	jmp    81de3b5 <_ZN38Dispatcher_Direct_Entrance_Quick_Party7processEP5CUserR8MSG_BASER9ParamBase+0x81>
 81de368:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81de36c:	79 07                	jns    81de375 <_ZN38Dispatcher_Direct_Entrance_Quick_Party7processEP5CUserR8MSG_BASER9ParamBase+0x41>
 81de36e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81de373:	eb 40                	jmp    81de3b5 <_ZN38Dispatcher_Direct_Entrance_Quick_Party7processEP5CUserR8MSG_BASER9ParamBase+0x81>
 81de375:	8b 45 14             	mov    0x14(%ebp),%eax
 81de378:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81de37b:	e8 0e de ee ff       	call   80cc18e <_Z14G_CGameManagerv>
 81de380:	89 04 24             	mov    %eax,(%esp)
 81de383:	e8 38 aa 0b 00       	call   8298dc0 <_ZN12CGameManager26GetQuickPartySystemManagerEv>
 81de388:	8b 55 0c             	mov    0xc(%ebp),%edx
 81de38b:	89 54 24 04          	mov    %edx,0x4(%esp)
 81de38f:	89 04 24             	mov    %eax,(%esp)
 81de392:	e8 cb c3 08 00       	call   826a762 <_ZN10QuickParty24CQuickPartySystemManager27direct_entrance_quick_partyEP5CUser>
 81de397:	89 c2                	mov    %eax,%edx
 81de399:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81de39c:	89 50 04             	mov    %edx,0x4(%eax)
 81de39f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81de3a2:	8b 40 04             	mov    0x4(%eax),%eax
 81de3a5:	85 c0                	test   %eax,%eax
 81de3a7:	74 07                	je     81de3b0 <_ZN38Dispatcher_Direct_Entrance_Quick_Party7processEP5CUserR8MSG_BASER9ParamBase+0x7c>
 81de3a9:	b8 00 00 00 00       	mov    $0x0,%eax
 81de3ae:	eb 05                	jmp    81de3b5 <_ZN38Dispatcher_Direct_Entrance_Quick_Party7processEP5CUserR8MSG_BASER9ParamBase+0x81>
 81de3b0:	b8 00 00 00 00       	mov    $0x0,%eax
 81de3b5:	c9                   	leave
 81de3b6:	c3                   	ret
 81de3b7:	90                   	nop

```

```c
// Dispatcher_Direct_Entrance_Quick_Party::process @ 0x81de334

/* Dispatcher_Direct_Entrance_Quick_Party::process(CUser*, MSG_BASE&, ParamBase&) */

int __thiscall
Dispatcher_Direct_Entrance_Quick_Party::process
          (Dispatcher_Direct_Entrance_Quick_Party *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  int iVar1;
  CGameManager *this_00;
  CQuickPartySystemManager *this_01;
  undefined4 uVar2;
  
  iVar1 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      this_00 = (CGameManager *)G_CGameManager();
      this_01 = (CQuickPartySystemManager *)CGameManager::GetQuickPartySystemManager(this_00);
      uVar2 = QuickParty::CQuickPartySystemManager::direct_entrance_quick_party(this_01,param_1);
      *(undefined4 *)(param_3 + 4) = uVar2;
      if (*(int *)(param_3 + 4) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}

```

---

## read

```asm
// === 081de32a Dispatcher_Direct_Entrance_Quick_Party::read  [0x081de32a-0x81de333] ===
 81de32a:	55                   	push   %ebp
 81de32b:	89 e5                	mov    %esp,%ebp
 81de32d:	b8 00 00 00 00       	mov    $0x0,%eax
 81de332:	5d                   	pop    %ebp
 81de333:	c3                   	ret

```

```c
// Dispatcher_Direct_Entrance_Quick_Party::read @ 0x81de32a

/* Dispatcher_Direct_Entrance_Quick_Party::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_Direct_Entrance_Quick_Party::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## send

```asm
// === 081de3b8 Dispatcher_Direct_Entrance_Quick_Party::send  [0x081de3b8-0x81de405] ===
 81de3b8:	55                   	push   %ebp
 81de3b9:	89 e5                	mov    %esp,%ebp
 81de3bb:	83 ec 28             	sub    $0x28,%esp
 81de3be:	8b 45 10             	mov    0x10(%ebp),%eax
 81de3c1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81de3c4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81de3c7:	8b 40 04             	mov    0x4(%eax),%eax
 81de3ca:	85 c0                	test   %eax,%eax
 81de3cc:	75 15                	jne    81de3e3 <_ZN38Dispatcher_Direct_Entrance_Quick_Party4sendEP5CUserR9ParamBase+0x2b>
 81de3ce:	c7 44 24 04 be 01 00 	movl   $0x1be,0x4(%esp)
 81de3d5:	00 
 81de3d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81de3d9:	89 04 24             	mov    %eax,(%esp)
 81de3dc:	e8 bf da 49 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 81de3e1:	eb 20                	jmp    81de403 <_ZN38Dispatcher_Direct_Entrance_Quick_Party4sendEP5CUserR9ParamBase+0x4b>
 81de3e3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81de3e6:	8b 40 04             	mov    0x4(%eax),%eax
 81de3e9:	0f b6 c0             	movzbl %al,%eax
 81de3ec:	89 44 24 08          	mov    %eax,0x8(%esp)
 81de3f0:	c7 44 24 04 be 01 00 	movl   $0x1be,0x4(%esp)
 81de3f7:	00 
 81de3f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81de3fb:	89 04 24             	mov    %eax,(%esp)
 81de3fe:	e8 3f db 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81de403:	c9                   	leave
 81de404:	c3                   	ret
 81de405:	90                   	nop

```

```c
// Dispatcher_Direct_Entrance_Quick_Party::send @ 0x81de3b8

/* Dispatcher_Direct_Entrance_Quick_Party::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Direct_Entrance_Quick_Party::send
          (Dispatcher_Direct_Entrance_Quick_Party *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x1be);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1be,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

