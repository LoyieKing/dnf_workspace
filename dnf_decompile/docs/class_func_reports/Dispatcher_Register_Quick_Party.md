# Dispatcher_Register_Quick_Party

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081ddfce Dispatcher_Register_Quick_Party::check_error  [0x081ddfce-0x81de011] ===
 81ddfce:	55                   	push   %ebp
 81ddfcf:	89 e5                	mov    %esp,%ebp
 81ddfd1:	83 ec 18             	sub    $0x18,%esp
 81ddfd4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ddfd7:	89 04 24             	mov    %eax,(%esp)
 81ddfda:	e8 ad c3 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ddfdf:	83 f8 03             	cmp    $0x3,%eax
 81ddfe2:	7e 0f                	jle    81ddff3 <_ZN31Dispatcher_Register_Quick_Party11check_errorEP5CUserR8MSG_BASER9ParamBase+0x25>
 81ddfe4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ddfe7:	89 04 24             	mov    %eax,(%esp)
 81ddfea:	e8 43 24 f4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81ddfef:	85 c0                	test   %eax,%eax
 81ddff1:	75 07                	jne    81ddffa <_ZN31Dispatcher_Register_Quick_Party11check_errorEP5CUserR8MSG_BASER9ParamBase+0x2c>
 81ddff3:	b8 01 00 00 00       	mov    $0x1,%eax
 81ddff8:	eb 05                	jmp    81ddfff <_ZN31Dispatcher_Register_Quick_Party11check_errorEP5CUserR8MSG_BASER9ParamBase+0x31>
 81ddffa:	b8 00 00 00 00       	mov    $0x0,%eax
 81ddfff:	84 c0                	test   %al,%al
 81de001:	74 07                	je     81de00a <_ZN31Dispatcher_Register_Quick_Party11check_errorEP5CUserR8MSG_BASER9ParamBase+0x3c>
 81de003:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81de008:	eb 05                	jmp    81de00f <_ZN31Dispatcher_Register_Quick_Party11check_errorEP5CUserR8MSG_BASER9ParamBase+0x41>
 81de00a:	b8 00 00 00 00       	mov    $0x0,%eax
 81de00f:	c9                   	leave
 81de010:	c3                   	ret
 81de011:	90                   	nop

```

```c
// Dispatcher_Register_Quick_Party::check_error @ 0x81ddfce

/* Dispatcher_Register_Quick_Party::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_Register_Quick_Party::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (3 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081ddfff;
    }
  }
  bVar1 = true;
LAB_081ddfff:
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
// === 081de012 Dispatcher_Register_Quick_Party::process  [0x081de012-0x81de0c5] ===
 81de012:	55                   	push   %ebp
 81de013:	89 e5                	mov    %esp,%ebp
 81de015:	53                   	push   %ebx
 81de016:	83 ec 24             	sub    $0x24,%esp
 81de019:	8b 45 14             	mov    0x14(%ebp),%eax
 81de01c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81de020:	8b 45 10             	mov    0x10(%ebp),%eax
 81de023:	89 44 24 08          	mov    %eax,0x8(%esp)
 81de027:	8b 45 0c             	mov    0xc(%ebp),%eax
 81de02a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81de02e:	8b 45 08             	mov    0x8(%ebp),%eax
 81de031:	89 04 24             	mov    %eax,(%esp)
 81de034:	e8 95 ff ff ff       	call   81ddfce <_ZN31Dispatcher_Register_Quick_Party11check_errorEP5CUserR8MSG_BASER9ParamBase>
 81de039:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81de03c:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81de040:	7e 05                	jle    81de047 <_ZN31Dispatcher_Register_Quick_Party7processEP5CUserR8MSG_BASER9ParamBase+0x35>
 81de042:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81de045:	eb 78                	jmp    81de0bf <_ZN31Dispatcher_Register_Quick_Party7processEP5CUserR8MSG_BASER9ParamBase+0xad>
 81de047:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81de04b:	79 07                	jns    81de054 <_ZN31Dispatcher_Register_Quick_Party7processEP5CUserR8MSG_BASER9ParamBase+0x42>
 81de04d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81de052:	eb 6b                	jmp    81de0bf <_ZN31Dispatcher_Register_Quick_Party7processEP5CUserR8MSG_BASER9ParamBase+0xad>
 81de054:	8b 45 10             	mov    0x10(%ebp),%eax
 81de057:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81de05a:	8b 45 14             	mov    0x14(%ebp),%eax
 81de05d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81de060:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81de063:	89 04 24             	mov    %eax,(%esp)
 81de066:	e8 5f 64 05 00       	call   82344ca <_ZN10QuickParty23STQuickPartyPoolMap_KeyC1Ev>
 81de06b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81de06e:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81de072:	66 89 45 e8          	mov    %ax,-0x18(%ebp)
 81de076:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81de079:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 81de07d:	88 45 ea             	mov    %al,-0x16(%ebp)
 81de080:	8b 45 0c             	mov    0xc(%ebp),%eax
 81de083:	89 04 24             	mov    %eax,(%esp)
 81de086:	e8 c1 70 47 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81de08b:	89 c3                	mov    %eax,%ebx
 81de08d:	e8 fc e0 ee ff       	call   80cc18e <_Z14G_CGameManagerv>
 81de092:	89 04 24             	mov    %eax,(%esp)
 81de095:	e8 26 ad 0b 00       	call   8298dc0 <_ZN12CGameManager26GetQuickPartySystemManagerEv>
 81de09a:	8b 55 0c             	mov    0xc(%ebp),%edx
 81de09d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81de0a1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81de0a5:	8d 55 e8             	lea    -0x18(%ebp),%edx
 81de0a8:	89 54 24 04          	mov    %edx,0x4(%esp)
 81de0ac:	89 04 24             	mov    %eax,(%esp)
 81de0af:	e8 88 be 08 00       	call   8269f3c <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser>
 81de0b4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81de0b7:	89 42 04             	mov    %eax,0x4(%edx)
 81de0ba:	b8 00 00 00 00       	mov    $0x0,%eax
 81de0bf:	83 c4 24             	add    $0x24,%esp
 81de0c2:	5b                   	pop    %ebx
 81de0c3:	5d                   	pop    %ebp
 81de0c4:	c3                   	ret
 81de0c5:	90                   	nop

```

```c
// Dispatcher_Register_Quick_Party::process @ 0x81de012

/* Dispatcher_Register_Quick_Party::process(CUser*, MSG_BASE&, ParamBase&) */

int __thiscall
Dispatcher_Register_Quick_Party::process
          (Dispatcher_Register_Quick_Party *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3
          )

{
  CParty *pCVar1;
  CGameManager *this_00;
  CQuickPartySystemManager *this_01;
  undefined4 uVar2;
  undefined2 local_1c;
  MSG_BASE local_1a;
  int local_18;
  MSG_BASE *local_14;
  ParamBase *local_10;
  
  local_18 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  if (local_18 < 1) {
    if (local_18 < 0) {
      local_18 = -1;
    }
    else {
      local_14 = param_2;
      local_10 = param_3;
      QuickParty::STQuickPartyPoolMap_Key::STQuickPartyPoolMap_Key
                ((STQuickPartyPoolMap_Key *)&local_1c);
      local_1c = *(undefined2 *)(local_14 + 0xe);
      local_1a = local_14[0x10];
      pCVar1 = (CParty *)CUser::GetParty(param_1);
      this_00 = (CGameManager *)G_CGameManager();
      this_01 = (CQuickPartySystemManager *)CGameManager::GetQuickPartySystemManager(this_00);
      uVar2 = QuickParty::CQuickPartySystemManager::match_proper_party
                        (this_01,(STQuickPartyPoolMap_Key *)&local_1c,pCVar1,param_1);
      *(undefined4 *)(local_10 + 4) = uVar2;
      local_18 = 0;
    }
  }
  return local_18;
}

```

---

## read

```asm
// === 081ddf36 Dispatcher_Register_Quick_Party::read  [0x081ddf36-0x81ddfcd] ===
 81ddf36:	55                   	push   %ebp
 81ddf37:	89 e5                	mov    %esp,%ebp
 81ddf39:	83 ec 28             	sub    $0x28,%esp
 81ddf3c:	8b 45 10             	mov    0x10(%ebp),%eax
 81ddf3f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ddf42:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ddf45:	83 c0 0e             	add    $0xe,%eax
 81ddf48:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ddf4c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ddf4f:	89 04 24             	mov    %eax,(%esp)
 81ddf52:	e8 69 f0 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81ddf57:	83 f0 01             	xor    $0x1,%eax
 81ddf5a:	84 c0                	test   %al,%al
 81ddf5c:	74 26                	je     81ddf84 <_ZN31Dispatcher_Register_Quick_Party4readER9PacketBufR8MSG_BASE+0x4e>
 81ddf5e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ddf65:	00 
 81ddf66:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ddf6d:	00 
 81ddf6e:	c7 44 24 04 c0 1d bd 	movl   $0x8bd1dc0,0x4(%esp)
 81ddf75:	08 
 81ddf76:	c7 04 24 1e 4f 00 00 	movl   $0x4f1e,(%esp)
 81ddf7d:	e8 55 29 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ddf82:	eb 47                	jmp    81ddfcb <_ZN31Dispatcher_Register_Quick_Party4readER9PacketBufR8MSG_BASE+0x95>
 81ddf84:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ddf87:	83 c0 10             	add    $0x10,%eax
 81ddf8a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ddf8e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ddf91:	89 04 24             	mov    %eax,(%esp)
 81ddf94:	e8 89 ef 3a 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81ddf99:	83 f0 01             	xor    $0x1,%eax
 81ddf9c:	84 c0                	test   %al,%al
 81ddf9e:	74 26                	je     81ddfc6 <_ZN31Dispatcher_Register_Quick_Party4readER9PacketBufR8MSG_BASE+0x90>
 81ddfa0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ddfa7:	00 
 81ddfa8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ddfaf:	00 
 81ddfb0:	c7 44 24 04 c0 1d bd 	movl   $0x8bd1dc0,0x4(%esp)
 81ddfb7:	08 
 81ddfb8:	c7 04 24 20 4f 00 00 	movl   $0x4f20,(%esp)
 81ddfbf:	e8 13 29 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ddfc4:	eb 05                	jmp    81ddfcb <_ZN31Dispatcher_Register_Quick_Party4readER9PacketBufR8MSG_BASE+0x95>
 81ddfc6:	b8 00 00 00 00       	mov    $0x0,%eax
 81ddfcb:	c9                   	leave
 81ddfcc:	c3                   	ret
 81ddfcd:	90                   	nop

```

```c
// Dispatcher_Register_Quick_Party::read @ 0x81ddf36

/* Dispatcher_Register_Quick_Party::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Register_Quick_Party::read
          (Dispatcher_Register_Quick_Party *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x10));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x4f20,
                       "virtual int Dispatcher_Register_Quick_Party::read(PacketBuf&, MSG_BASE&)",0,
                       0);
    }
  }
  else {
    uVar2 = LineFunc(0x4f1e,
                     "virtual int Dispatcher_Register_Quick_Party::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}

```

---

## send

```asm
// === 081de0c6 Dispatcher_Register_Quick_Party::send  [0x081de0c6-0x81de1a9] ===
 81de0c6:	55                   	push   %ebp
 81de0c7:	89 e5                	mov    %esp,%ebp
 81de0c9:	56                   	push   %esi
 81de0ca:	53                   	push   %ebx
 81de0cb:	83 ec 20             	sub    $0x20,%esp
 81de0ce:	8b 45 10             	mov    0x10(%ebp),%eax
 81de0d1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81de0d4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81de0d7:	8b 40 04             	mov    0x4(%eax),%eax
 81de0da:	85 c0                	test   %eax,%eax
 81de0dc:	75 18                	jne    81de0f6 <_ZN31Dispatcher_Register_Quick_Party4sendEP5CUserR9ParamBase+0x30>
 81de0de:	c7 44 24 04 bc 01 00 	movl   $0x1bc,0x4(%esp)
 81de0e5:	00 
 81de0e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81de0e9:	89 04 24             	mov    %eax,(%esp)
 81de0ec:	e8 af dd 49 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 81de0f1:	e9 ad 00 00 00       	jmp    81de1a3 <_ZN31Dispatcher_Register_Quick_Party4sendEP5CUserR9ParamBase+0xdd>
 81de0f6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81de0f9:	8b 40 04             	mov    0x4(%eax),%eax
 81de0fc:	83 f8 01             	cmp    $0x1,%eax
 81de0ff:	0f 85 9d 00 00 00    	jne    81de1a2 <_ZN31Dispatcher_Register_Quick_Party4sendEP5CUserR9ParamBase+0xdc>
 81de105:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81de108:	89 04 24             	mov    %eax,(%esp)
 81de10b:	e8 3c fc 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81de110:	c7 44 24 08 bc 01 00 	movl   $0x1bc,0x8(%esp)
 81de117:	00 
 81de118:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81de11f:	00 
 81de120:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81de123:	89 04 24             	mov    %eax,(%esp)
 81de126:	e8 d1 d7 ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81de12b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81de132:	00 
 81de133:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81de136:	89 04 24             	mov    %eax,(%esp)
 81de139:	e8 e2 d7 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81de13e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81de141:	8b 40 04             	mov    0x4(%eax),%eax
 81de144:	89 44 24 04          	mov    %eax,0x4(%esp)
 81de148:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81de14b:	89 04 24             	mov    %eax,(%esp)
 81de14e:	e8 e9 d7 ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81de153:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81de15a:	00 
 81de15b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81de15e:	89 04 24             	mov    %eax,(%esp)
 81de161:	e8 f2 d7 ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81de166:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81de169:	89 44 24 04          	mov    %eax,0x4(%esp)
 81de16d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81de170:	89 04 24             	mov    %eax,(%esp)
 81de173:	e8 42 a4 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81de178:	eb 1b                	jmp    81de195 <_ZN31Dispatcher_Register_Quick_Party4sendEP5CUserR9ParamBase+0xcf>
 81de17a:	89 d3                	mov    %edx,%ebx
 81de17c:	89 c6                	mov    %eax,%esi
 81de17e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81de181:	89 04 24             	mov    %eax,(%esp)
 81de184:	e8 f7 fc 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81de189:	89 f0                	mov    %esi,%eax
 81de18b:	89 da                	mov    %ebx,%edx
 81de18d:	89 04 24             	mov    %eax,(%esp)
 81de190:	e8 bb 55 90 00       	call   8ae3750 <_Unwind_Resume>
 81de195:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81de198:	89 04 24             	mov    %eax,(%esp)
 81de19b:	e8 e0 fc 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81de1a0:	eb 01                	jmp    81de1a3 <_ZN31Dispatcher_Register_Quick_Party4sendEP5CUserR9ParamBase+0xdd>
 81de1a2:	90                   	nop
 81de1a3:	83 c4 20             	add    $0x20,%esp
 81de1a6:	5b                   	pop    %ebx
 81de1a7:	5e                   	pop    %esi
 81de1a8:	5d                   	pop    %ebp
 81de1a9:	c3                   	ret

```

```c
// Dispatcher_Register_Quick_Party::send @ 0x81de0c6

/* Dispatcher_Register_Quick_Party::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Register_Quick_Party::send
          (Dispatcher_Register_Quick_Party *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x1bc);
  }
  else if (*(int *)(param_2 + 4) == 1) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081de126 to 081de177 has its CatchHandler @ 081de17a */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1bc);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 4));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return;
}

```

