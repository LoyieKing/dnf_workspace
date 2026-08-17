# DisPatcher_WalkoutParty

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081cb062 DisPatcher_WalkoutParty::check_error  [0x081cb062-0x81cb0b7] ===
 81cb062:	55                   	push   %ebp
 81cb063:	89 e5                	mov    %esp,%ebp
 81cb065:	83 ec 18             	sub    $0x18,%esp
 81cb068:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81cb06c:	75 26                	jne    81cb094 <_ZN23DisPatcher_WalkoutParty11check_errorEP5CUserR8MSG_BASE+0x32>
 81cb06e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cb075:	00 
 81cb076:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cb07d:	00 
 81cb07e:	c7 44 24 04 20 51 bd 	movl   $0x8bd5120,0x4(%esp)
 81cb085:	08 
 81cb086:	c7 04 24 53 20 00 00 	movl   $0x2053,(%esp)
 81cb08d:	e8 45 58 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cb092:	eb 21                	jmp    81cb0b5 <_ZN23DisPatcher_WalkoutParty11check_errorEP5CUserR8MSG_BASE+0x53>
 81cb094:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb097:	89 04 24             	mov    %eax,(%esp)
 81cb09a:	e8 ed f2 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81cb09f:	83 f8 03             	cmp    $0x3,%eax
 81cb0a2:	0f 95 c0             	setne  %al
 81cb0a5:	84 c0                	test   %al,%al
 81cb0a7:	74 07                	je     81cb0b0 <_ZN23DisPatcher_WalkoutParty11check_errorEP5CUserR8MSG_BASE+0x4e>
 81cb0a9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81cb0ae:	eb 05                	jmp    81cb0b5 <_ZN23DisPatcher_WalkoutParty11check_errorEP5CUserR8MSG_BASE+0x53>
 81cb0b0:	b8 00 00 00 00       	mov    $0x0,%eax
 81cb0b5:	c9                   	leave
 81cb0b6:	c3                   	ret
 81cb0b7:	90                   	nop

```

```c
// DisPatcher_WalkoutParty::check_error @ 0x81cb062

/* DisPatcher_WalkoutParty::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_WalkoutParty::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = LineFunc(0x2053,"int DisPatcher_WalkoutParty::check_error(CUser*, MSG_BASE&)",0,0);
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 == 3) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

```

---

## process

```asm
// === 081caf98 DisPatcher_WalkoutParty::process  [0x081caf98-0x81cb061] ===
 81caf98:	55                   	push   %ebp
 81caf99:	89 e5                	mov    %esp,%ebp
 81caf9b:	83 ec 28             	sub    $0x28,%esp
 81caf9e:	8b 45 10             	mov    0x10(%ebp),%eax
 81cafa1:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cafa5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cafa8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cafac:	8b 45 08             	mov    0x8(%ebp),%eax
 81cafaf:	89 04 24             	mov    %eax,(%esp)
 81cafb2:	e8 ab 00 00 00       	call   81cb062 <_ZN23DisPatcher_WalkoutParty11check_errorEP5CUserR8MSG_BASE>
 81cafb7:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81cafba:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81cafbe:	7e 08                	jle    81cafc8 <_ZN23DisPatcher_WalkoutParty7processEP5CUserR8MSG_BASER9ParamBase+0x30>
 81cafc0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81cafc3:	e9 97 00 00 00       	jmp    81cb05f <_ZN23DisPatcher_WalkoutParty7processEP5CUserR8MSG_BASER9ParamBase+0xc7>
 81cafc8:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81cafcc:	79 0a                	jns    81cafd8 <_ZN23DisPatcher_WalkoutParty7processEP5CUserR8MSG_BASER9ParamBase+0x40>
 81cafce:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81cafd3:	e9 87 00 00 00       	jmp    81cb05f <_ZN23DisPatcher_WalkoutParty7processEP5CUserR8MSG_BASER9ParamBase+0xc7>
 81cafd8:	8b 45 10             	mov    0x10(%ebp),%eax
 81cafdb:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81cafde:	8b 45 14             	mov    0x14(%ebp),%eax
 81cafe1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81cafe4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cafe7:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 81cafee:	8b 45 0c             	mov    0xc(%ebp),%eax
 81caff1:	89 04 24             	mov    %eax,(%esp)
 81caff4:	e8 53 a1 48 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81caff9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81caffc:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81cb000:	75 11                	jne    81cb013 <_ZN23DisPatcher_WalkoutParty7processEP5CUserR8MSG_BASER9ParamBase+0x7b>
 81cb002:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cb005:	c7 40 04 13 00 00 00 	movl   $0x13,0x4(%eax)
 81cb00c:	b8 00 00 00 00       	mov    $0x0,%eax
 81cb011:	eb 4c                	jmp    81cb05f <_ZN23DisPatcher_WalkoutParty7processEP5CUserR8MSG_BASER9ParamBase+0xc7>
 81cb013:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81cb016:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81cb01a:	0f be c0             	movsbl %al,%eax
 81cb01d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cb024:	00 
 81cb025:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cb029:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cb02c:	89 04 24             	mov    %eax,(%esp)
 81cb02f:	e8 cc 1a 3d 00       	call   859cb00 <_ZN6CParty11SendWalkoutEi17ENUM_WALKOUT_TYPE>
 81cb034:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81cb037:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81cb03b:	0f be c0             	movsbl %al,%eax
 81cb03e:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cb042:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb045:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cb049:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cb04c:	89 04 24             	mov    %eax,(%esp)
 81cb04f:	e8 f6 19 3d 00       	call   859ca4a <_ZN6CParty14walkout_memberEP5CUseri>
 81cb054:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81cb057:	89 42 04             	mov    %eax,0x4(%edx)
 81cb05a:	b8 00 00 00 00       	mov    $0x0,%eax
 81cb05f:	c9                   	leave
 81cb060:	c3                   	ret
 81cb061:	90                   	nop

```

```c
// DisPatcher_WalkoutParty::process @ 0x81caf98

/* DisPatcher_WalkoutParty::process(CUser*, MSG_BASE&, ParamBase&) */

int __thiscall
DisPatcher_WalkoutParty::process
          (DisPatcher_WalkoutParty *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  CParty *this_00;
  undefined4 uVar2;
  
  iVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      *(undefined4 *)(param_3 + 4) = 0;
      this_00 = (CParty *)CUser::GetParty(param_1);
      if (this_00 == (CParty *)0x0) {
        *(undefined4 *)(param_3 + 4) = 0x13;
        iVar1 = 0;
      }
      else {
        CParty::SendWalkout(this_00,(int)(char)param_2[0xd],0);
        uVar2 = CParty::walkout_member(this_00,param_1,(int)(char)param_2[0xd]);
        *(undefined4 *)(param_3 + 4) = uVar2;
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
// === 081caf42 DisPatcher_WalkoutParty::read  [0x081caf42-0x81caf97] ===
 81caf42:	55                   	push   %ebp
 81caf43:	89 e5                	mov    %esp,%ebp
 81caf45:	83 ec 28             	sub    $0x28,%esp
 81caf48:	8b 45 10             	mov    0x10(%ebp),%eax
 81caf4b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81caf4e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81caf51:	83 c0 0d             	add    $0xd,%eax
 81caf54:	89 44 24 04          	mov    %eax,0x4(%esp)
 81caf58:	8b 45 0c             	mov    0xc(%ebp),%eax
 81caf5b:	89 04 24             	mov    %eax,(%esp)
 81caf5e:	e8 bf 1f 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81caf63:	83 f0 01             	xor    $0x1,%eax
 81caf66:	84 c0                	test   %al,%al
 81caf68:	74 26                	je     81caf90 <_ZN23DisPatcher_WalkoutParty4readER9PacketBufR8MSG_BASE+0x4e>
 81caf6a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81caf71:	00 
 81caf72:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81caf79:	00 
 81caf7a:	c7 44 24 04 60 51 bd 	movl   $0x8bd5160,0x4(%esp)
 81caf81:	08 
 81caf82:	c7 04 24 2b 20 00 00 	movl   $0x202b,(%esp)
 81caf89:	e8 49 59 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81caf8e:	eb 05                	jmp    81caf95 <_ZN23DisPatcher_WalkoutParty4readER9PacketBufR8MSG_BASE+0x53>
 81caf90:	b8 00 00 00 00       	mov    $0x0,%eax
 81caf95:	c9                   	leave
 81caf96:	c3                   	ret
 81caf97:	90                   	nop

```

```c
// DisPatcher_WalkoutParty::read @ 0x81caf42

/* DisPatcher_WalkoutParty::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_WalkoutParty::read(DisPatcher_WalkoutParty *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x202b,"virtual int DisPatcher_WalkoutParty::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081cb0b8 DisPatcher_WalkoutParty::send  [0x081cb0b8-0x81cb1c9] ===
 81cb0b8:	55                   	push   %ebp
 81cb0b9:	89 e5                	mov    %esp,%ebp
 81cb0bb:	56                   	push   %esi
 81cb0bc:	53                   	push   %ebx
 81cb0bd:	83 ec 20             	sub    $0x20,%esp
 81cb0c0:	8b 45 10             	mov    0x10(%ebp),%eax
 81cb0c3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cb0c6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81cb0c9:	89 04 24             	mov    %eax,(%esp)
 81cb0cc:	e8 7b 2c 3c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81cb0d1:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 81cb0d8:	00 
 81cb0d9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81cb0e0:	00 
 81cb0e1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81cb0e4:	89 04 24             	mov    %eax,(%esp)
 81cb0e7:	e8 10 08 f0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81cb0ec:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cb0ef:	8b 40 04             	mov    0x4(%eax),%eax
 81cb0f2:	83 f8 13             	cmp    $0x13,%eax
 81cb0f5:	75 4d                	jne    81cb144 <_ZN23DisPatcher_WalkoutParty4sendEP5CUserR9ParamBase+0x8c>
 81cb0f7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81cb0fe:	00 
 81cb0ff:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81cb102:	89 04 24             	mov    %eax,(%esp)
 81cb105:	e8 16 08 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81cb10a:	c7 44 24 04 13 00 00 	movl   $0x13,0x4(%esp)
 81cb111:	00 
 81cb112:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81cb115:	89 04 24             	mov    %eax,(%esp)
 81cb118:	e8 03 08 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81cb11d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81cb124:	00 
 81cb125:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81cb128:	89 04 24             	mov    %eax,(%esp)
 81cb12b:	e8 28 08 f0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81cb130:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81cb133:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cb137:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb13a:	89 04 24             	mov    %eax,(%esp)
 81cb13d:	e8 78 d4 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81cb142:	eb 74                	jmp    81cb1b8 <_ZN23DisPatcher_WalkoutParty4sendEP5CUserR9ParamBase+0x100>
 81cb144:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cb147:	8b 40 04             	mov    0x4(%eax),%eax
 81cb14a:	85 c0                	test   %eax,%eax
 81cb14c:	7e 6a                	jle    81cb1b8 <_ZN23DisPatcher_WalkoutParty4sendEP5CUserR9ParamBase+0x100>
 81cb14e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81cb155:	00 
 81cb156:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81cb159:	89 04 24             	mov    %eax,(%esp)
 81cb15c:	e8 bf 07 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81cb161:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cb164:	8b 40 04             	mov    0x4(%eax),%eax
 81cb167:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cb16b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81cb16e:	89 04 24             	mov    %eax,(%esp)
 81cb171:	e8 aa 07 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81cb176:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81cb17d:	00 
 81cb17e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81cb181:	89 04 24             	mov    %eax,(%esp)
 81cb184:	e8 cf 07 f0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81cb189:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81cb18c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cb190:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb193:	89 04 24             	mov    %eax,(%esp)
 81cb196:	e8 1f d4 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81cb19b:	eb 1b                	jmp    81cb1b8 <_ZN23DisPatcher_WalkoutParty4sendEP5CUserR9ParamBase+0x100>
 81cb19d:	89 d3                	mov    %edx,%ebx
 81cb19f:	89 c6                	mov    %eax,%esi
 81cb1a1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81cb1a4:	89 04 24             	mov    %eax,(%esp)
 81cb1a7:	e8 d4 2c 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81cb1ac:	89 f0                	mov    %esi,%eax
 81cb1ae:	89 da                	mov    %ebx,%edx
 81cb1b0:	89 04 24             	mov    %eax,(%esp)
 81cb1b3:	e8 98 85 91 00       	call   8ae3750 <_Unwind_Resume>
 81cb1b8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81cb1bb:	89 04 24             	mov    %eax,(%esp)
 81cb1be:	e8 bd 2c 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81cb1c3:	83 c4 20             	add    $0x20,%esp
 81cb1c6:	5b                   	pop    %ebx
 81cb1c7:	5e                   	pop    %esi
 81cb1c8:	5d                   	pop    %ebp
 81cb1c9:	c3                   	ret

```

```c
// DisPatcher_WalkoutParty::send @ 0x81cb0b8

/* DisPatcher_WalkoutParty::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_WalkoutParty::send(DisPatcher_WalkoutParty *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081cb0e7 to 081cb19a has its CatchHandler @ 081cb19d */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0xe);
  if (*(int *)(local_10 + 4) == 0x13) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0x13);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
  }
  else if (0 < *(int *)(local_10 + 4)) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 4));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
  }
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

