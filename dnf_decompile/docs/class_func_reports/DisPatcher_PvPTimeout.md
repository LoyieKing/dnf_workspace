# DisPatcher_PvPTimeout

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081c5ebe DisPatcher_PvPTimeout::check_error  [0x081c5ebe-0x81c5ee7] ===
 81c5ebe:	55                   	push   %ebp
 81c5ebf:	89 e5                	mov    %esp,%ebp
 81c5ec1:	83 ec 18             	sub    $0x18,%esp
 81c5ec4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c5ec7:	89 04 24             	mov    %eax,(%esp)
 81c5eca:	e8 bd 44 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c5ecf:	83 f8 07             	cmp    $0x7,%eax
 81c5ed2:	0f 95 c0             	setne  %al
 81c5ed5:	84 c0                	test   %al,%al
 81c5ed7:	74 07                	je     81c5ee0 <_ZN21DisPatcher_PvPTimeout11check_errorEP5CUserR8MSG_BASE+0x22>
 81c5ed9:	b8 13 00 00 00       	mov    $0x13,%eax
 81c5ede:	eb 05                	jmp    81c5ee5 <_ZN21DisPatcher_PvPTimeout11check_errorEP5CUserR8MSG_BASE+0x27>
 81c5ee0:	b8 00 00 00 00       	mov    $0x0,%eax
 81c5ee5:	c9                   	leave
 81c5ee6:	c3                   	ret
 81c5ee7:	90                   	nop

```

```c
// DisPatcher_PvPTimeout::check_error @ 0x81c5ebe

/* DisPatcher_PvPTimeout::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_PvPTimeout::check_error(CUser *param_1,MSG_BASE *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 == 7) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x13;
  }
  return uVar2;
}

```

---

## process

```asm
// === 081c5dec DisPatcher_PvPTimeout::process  [0x081c5dec-0x81c5ebd] ===
 81c5dec:	55                   	push   %ebp
 81c5ded:	89 e5                	mov    %esp,%ebp
 81c5def:	83 ec 28             	sub    $0x28,%esp
 81c5df2:	8b 45 10             	mov    0x10(%ebp),%eax
 81c5df5:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c5df9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c5dfc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c5e00:	8b 45 08             	mov    0x8(%ebp),%eax
 81c5e03:	89 04 24             	mov    %eax,(%esp)
 81c5e06:	e8 b3 00 00 00       	call   81c5ebe <_ZN21DisPatcher_PvPTimeout11check_errorEP5CUserR8MSG_BASE>
 81c5e0b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81c5e0e:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81c5e12:	7e 0a                	jle    81c5e1e <_ZN21DisPatcher_PvPTimeout7processEP5CUserR8MSG_BASER9ParamBase+0x32>
 81c5e14:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81c5e19:	e9 9e 00 00 00       	jmp    81c5ebc <_ZN21DisPatcher_PvPTimeout7processEP5CUserR8MSG_BASER9ParamBase+0xd0>
 81c5e1e:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81c5e22:	79 2d                	jns    81c5e51 <_ZN21DisPatcher_PvPTimeout7processEP5CUserR8MSG_BASER9ParamBase+0x65>
 81c5e24:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c5e27:	89 04 24             	mov    %eax,(%esp)
 81c5e2a:	e8 3f 45 f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c5e2f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c5e33:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c5e3a:	00 
 81c5e3b:	c7 44 24 04 60 58 bd 	movl   $0x8bd5860,0x4(%esp)
 81c5e42:	08 
 81c5e43:	c7 04 24 b7 14 00 00 	movl   $0x14b7,(%esp)
 81c5e4a:	e8 88 aa 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c5e4f:	eb 6b                	jmp    81c5ebc <_ZN21DisPatcher_PvPTimeout7processEP5CUserR8MSG_BASER9ParamBase+0xd0>
 81c5e51:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c5e54:	89 04 24             	mov    %eax,(%esp)
 81c5e57:	e8 32 f3 48 00       	call   865518e <_ZN5CUser10GetPVPRoomEv>
 81c5e5c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81c5e5f:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81c5e63:	75 2d                	jne    81c5e92 <_ZN21DisPatcher_PvPTimeout7processEP5CUserR8MSG_BASER9ParamBase+0xa6>
 81c5e65:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c5e68:	89 04 24             	mov    %eax,(%esp)
 81c5e6b:	e8 fe 44 f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c5e70:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c5e74:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c5e7b:	00 
 81c5e7c:	c7 44 24 04 60 58 bd 	movl   $0x8bd5860,0x4(%esp)
 81c5e83:	08 
 81c5e84:	c7 04 24 bc 14 00 00 	movl   $0x14bc,(%esp)
 81c5e8b:	e8 47 aa 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c5e90:	eb 2a                	jmp    81c5ebc <_ZN21DisPatcher_PvPTimeout7processEP5CUserR8MSG_BASER9ParamBase+0xd0>
 81c5e92:	8b 45 14             	mov    0x14(%ebp),%eax
 81c5e95:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81c5e98:	8b 45 10             	mov    0x10(%ebp),%eax
 81c5e9b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c5e9e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c5ea1:	83 c0 0d             	add    $0xd,%eax
 81c5ea4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c5ea8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c5eab:	89 04 24             	mov    %eax,(%esp)
 81c5eae:	e8 5b 3c 41 00       	call   85d9b0e <_ZN8PvP_Room8time_outEPi>
 81c5eb3:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81c5eb6:	89 42 04             	mov    %eax,0x4(%edx)
 81c5eb9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c5ebc:	c9                   	leave
 81c5ebd:	c3                   	ret

```

```c
// DisPatcher_PvPTimeout::process @ 0x81c5dec

/* DisPatcher_PvPTimeout::process(CUser*, MSG_BASE&, ParamBase&) */

int __thiscall
DisPatcher_PvPTimeout::process
          (DisPatcher_PvPTimeout *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  uint uVar2;
  PvP_Room *this_00;
  undefined4 uVar3;
  
  iVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      iVar1 = LineFunc(0x14b7,
                       "virtual int DisPatcher_PvPTimeout::process(CUser*, MSG_BASE&, ParamBase&)",0
                       ,uVar2);
    }
    else {
      this_00 = (PvP_Room *)CUser::GetPVPRoom(param_1);
      if (this_00 == (PvP_Room *)0x0) {
        uVar2 = CUser::get_acc_id(param_1);
        iVar1 = LineFunc(0x14bc,
                         "virtual int DisPatcher_PvPTimeout::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0,uVar2);
      }
      else {
        uVar3 = PvP_Room::time_out(this_00,(int *)(param_2 + 0xd));
        *(undefined4 *)(param_3 + 4) = uVar3;
      }
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

```

---

## read

```asm
// === 081c5d78 DisPatcher_PvPTimeout::read  [0x081c5d78-0x81c5deb] ===
 81c5d78:	55                   	push   %ebp
 81c5d79:	89 e5                	mov    %esp,%ebp
 81c5d7b:	83 ec 28             	sub    $0x28,%esp
 81c5d7e:	8b 45 10             	mov    0x10(%ebp),%eax
 81c5d81:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81c5d84:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81c5d8b:	eb 4c                	jmp    81c5dd9 <_ZN21DisPatcher_PvPTimeout4readER9PacketBufR8MSG_BASE+0x61>
 81c5d8d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c5d90:	c1 e0 02             	shl    $0x2,%eax
 81c5d93:	03 45 f0             	add    -0x10(%ebp),%eax
 81c5d96:	83 c0 0d             	add    $0xd,%eax
 81c5d99:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c5d9d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c5da0:	89 04 24             	mov    %eax,(%esp)
 81c5da3:	e8 48 73 3c 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81c5da8:	83 f0 01             	xor    $0x1,%eax
 81c5dab:	84 c0                	test   %al,%al
 81c5dad:	74 26                	je     81c5dd5 <_ZN21DisPatcher_PvPTimeout4readER9PacketBufR8MSG_BASE+0x5d>
 81c5daf:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c5db6:	00 
 81c5db7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c5dbe:	00 
 81c5dbf:	c7 44 24 04 c0 58 bd 	movl   $0x8bd58c0,0x4(%esp)
 81c5dc6:	08 
 81c5dc7:	c7 04 24 a6 14 00 00 	movl   $0x14a6,(%esp)
 81c5dce:	e8 04 ab 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c5dd3:	eb 14                	jmp    81c5de9 <_ZN21DisPatcher_PvPTimeout4readER9PacketBufR8MSG_BASE+0x71>
 81c5dd5:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81c5dd9:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 81c5ddd:	0f 9e c0             	setle  %al
 81c5de0:	84 c0                	test   %al,%al
 81c5de2:	75 a9                	jne    81c5d8d <_ZN21DisPatcher_PvPTimeout4readER9PacketBufR8MSG_BASE+0x15>
 81c5de4:	b8 00 00 00 00       	mov    $0x0,%eax
 81c5de9:	c9                   	leave
 81c5dea:	c3                   	ret
 81c5deb:	90                   	nop

```

```c
// DisPatcher_PvPTimeout::read @ 0x81c5d78

/* DisPatcher_PvPTimeout::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_PvPTimeout::read(DisPatcher_PvPTimeout *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (7 < local_10) {
      return 0;
    }
    cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + local_10 * 4 + 0xd));
    if (cVar1 != '\x01') break;
    local_10 = local_10 + 1;
  }
  uVar2 = LineFunc(0x14a6,"virtual int DisPatcher_PvPTimeout::read(PacketBuf&, MSG_BASE&)",0,0);
  return uVar2;
}

```

---

## send

```asm
// === 081c5ee8 DisPatcher_PvPTimeout::send  [0x081c5ee8-0x81c5fa5] ===
 81c5ee8:	55                   	push   %ebp
 81c5ee9:	89 e5                	mov    %esp,%ebp
 81c5eeb:	56                   	push   %esi
 81c5eec:	53                   	push   %ebx
 81c5eed:	83 ec 20             	sub    $0x20,%esp
 81c5ef0:	8b 45 10             	mov    0x10(%ebp),%eax
 81c5ef3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c5ef6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c5ef9:	89 04 24             	mov    %eax,(%esp)
 81c5efc:	e8 4b 7e 3c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81c5f01:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c5f04:	8b 40 04             	mov    0x4(%eax),%eax
 81c5f07:	85 c0                	test   %eax,%eax
 81c5f09:	0f 8e 85 00 00 00    	jle    81c5f94 <_ZN21DisPatcher_PvPTimeout4sendEP5CUserR9ParamBase+0xac>
 81c5f0f:	c7 44 24 08 3b 00 00 	movl   $0x3b,0x8(%esp)
 81c5f16:	00 
 81c5f17:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c5f1e:	00 
 81c5f1f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c5f22:	89 04 24             	mov    %eax,(%esp)
 81c5f25:	e8 d2 59 f0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81c5f2a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c5f31:	00 
 81c5f32:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c5f35:	89 04 24             	mov    %eax,(%esp)
 81c5f38:	e8 e3 59 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c5f3d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c5f40:	8b 40 04             	mov    0x4(%eax),%eax
 81c5f43:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c5f47:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c5f4a:	89 04 24             	mov    %eax,(%esp)
 81c5f4d:	e8 ce 59 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c5f52:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c5f59:	00 
 81c5f5a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c5f5d:	89 04 24             	mov    %eax,(%esp)
 81c5f60:	e8 f3 59 f0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81c5f65:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c5f68:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c5f6c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c5f6f:	89 04 24             	mov    %eax,(%esp)
 81c5f72:	e8 43 26 48 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81c5f77:	eb 1b                	jmp    81c5f94 <_ZN21DisPatcher_PvPTimeout4sendEP5CUserR9ParamBase+0xac>
 81c5f79:	89 d3                	mov    %edx,%ebx
 81c5f7b:	89 c6                	mov    %eax,%esi
 81c5f7d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c5f80:	89 04 24             	mov    %eax,(%esp)
 81c5f83:	e8 f8 7e 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c5f88:	89 f0                	mov    %esi,%eax
 81c5f8a:	89 da                	mov    %ebx,%edx
 81c5f8c:	89 04 24             	mov    %eax,(%esp)
 81c5f8f:	e8 bc d7 91 00       	call   8ae3750 <_Unwind_Resume>
 81c5f94:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c5f97:	89 04 24             	mov    %eax,(%esp)
 81c5f9a:	e8 e1 7e 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c5f9f:	83 c4 20             	add    $0x20,%esp
 81c5fa2:	5b                   	pop    %ebx
 81c5fa3:	5e                   	pop    %esi
 81c5fa4:	5d                   	pop    %ebp
 81c5fa5:	c3                   	ret

```

```c
// DisPatcher_PvPTimeout::send @ 0x81c5ee8

/* DisPatcher_PvPTimeout::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_PvPTimeout::send(DisPatcher_PvPTimeout *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
  if (0 < *(int *)(local_10 + 4)) {
                    /* try { // try from 081c5f25 to 081c5f76 has its CatchHandler @ 081c5f79 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x3b);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 4));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
  }
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

