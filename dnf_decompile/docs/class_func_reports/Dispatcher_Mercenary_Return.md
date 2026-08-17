# Dispatcher_Mercenary_Return

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## process

```asm
// === 081dd99c Dispatcher_Mercenary_Return::process  [0x081dd99c-0x81dda1b] ===
 81dd99c:	55                   	push   %ebp
 81dd99d:	89 e5                	mov    %esp,%ebp
 81dd99f:	83 ec 28             	sub    $0x28,%esp
 81dd9a2:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81dd9a6:	75 07                	jne    81dd9af <_ZN27Dispatcher_Mercenary_Return7processEP5CUserR8MSG_BASER9ParamBase+0x13>
 81dd9a8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81dd9ad:	eb 6b                	jmp    81dda1a <_ZN27Dispatcher_Mercenary_Return7processEP5CUserR8MSG_BASER9ParamBase+0x7e>
 81dd9af:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd9b2:	89 04 24             	mov    %eax,(%esp)
 81dd9b5:	e8 d2 c9 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81dd9ba:	83 f8 03             	cmp    $0x3,%eax
 81dd9bd:	0f 95 c0             	setne  %al
 81dd9c0:	84 c0                	test   %al,%al
 81dd9c2:	74 07                	je     81dd9cb <_ZN27Dispatcher_Mercenary_Return7processEP5CUserR8MSG_BASER9ParamBase+0x2f>
 81dd9c4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81dd9c9:	eb 4f                	jmp    81dda1a <_ZN27Dispatcher_Mercenary_Return7processEP5CUserR8MSG_BASER9ParamBase+0x7e>
 81dd9cb:	8b 45 10             	mov    0x10(%ebp),%eax
 81dd9ce:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81dd9d1:	8b 45 14             	mov    0x14(%ebp),%eax
 81dd9d4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81dd9d7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dd9da:	8d 50 0c             	lea    0xc(%eax),%edx
 81dd9dd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dd9e0:	8b 40 10             	mov    0x10(%eax),%eax
 81dd9e3:	89 54 24 08          	mov    %edx,0x8(%esp)
 81dd9e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dd9eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd9ee:	89 04 24             	mov    %eax,(%esp)
 81dd9f1:	e8 9c 0c 4b 00       	call   868e692 <_ZN5CUser23Return_Mercenary_CharacEjR25competition_reward_result>
 81dd9f6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81dd9f9:	88 42 04             	mov    %al,0x4(%edx)
 81dd9fc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dd9ff:	0f b6 50 0d          	movzbl 0xd(%eax),%edx
 81dda03:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dda06:	88 50 05             	mov    %dl,0x5(%eax)
 81dda09:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dda0c:	8b 50 10             	mov    0x10(%eax),%edx
 81dda0f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dda12:	89 50 08             	mov    %edx,0x8(%eax)
 81dda15:	b8 00 00 00 00       	mov    $0x0,%eax
 81dda1a:	c9                   	leave
 81dda1b:	c3                   	ret

```

```c
// Dispatcher_Mercenary_Return::process @ 0x81dd99c

/* Dispatcher_Mercenary_Return::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Mercenary_Return::process
          (Dispatcher_Mercenary_Return *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ParamBase PVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = CUser::get_state(param_1);
    if (iVar3 == 3) {
      PVar1 = (ParamBase)
              CUser::Return_Mercenary_Charac
                        (param_1,*(uint *)(param_2 + 0x10),
                         (competition_reward_result *)(param_3 + 0xc));
      param_3[4] = PVar1;
      *(MSG_BASE *)(param_3 + 5) = param_2[0xd];
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 0x10);
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

```

---

## read

```asm
// === 081dd904 Dispatcher_Mercenary_Return::read  [0x081dd904-0x81dd99b] ===
 81dd904:	55                   	push   %ebp
 81dd905:	89 e5                	mov    %esp,%ebp
 81dd907:	83 ec 28             	sub    $0x28,%esp
 81dd90a:	8b 45 10             	mov    0x10(%ebp),%eax
 81dd90d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81dd910:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dd913:	83 c0 0d             	add    $0xd,%eax
 81dd916:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dd91a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd91d:	89 04 24             	mov    %eax,(%esp)
 81dd920:	e8 fd f5 3a 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81dd925:	83 f0 01             	xor    $0x1,%eax
 81dd928:	84 c0                	test   %al,%al
 81dd92a:	74 26                	je     81dd952 <_ZN27Dispatcher_Mercenary_Return4readER9PacketBufR8MSG_BASE+0x4e>
 81dd92c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81dd933:	00 
 81dd934:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81dd93b:	00 
 81dd93c:	c7 44 24 04 80 1e bd 	movl   $0x8bd1e80,0x4(%esp)
 81dd943:	08 
 81dd944:	c7 04 24 88 4e 00 00 	movl   $0x4e88,(%esp)
 81dd94b:	e8 87 2f 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81dd950:	eb 47                	jmp    81dd999 <_ZN27Dispatcher_Mercenary_Return4readER9PacketBufR8MSG_BASE+0x95>
 81dd952:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dd955:	83 c0 10             	add    $0x10,%eax
 81dd958:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dd95c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd95f:	89 04 24             	mov    %eax,(%esp)
 81dd962:	e8 d9 f8 3a 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81dd967:	83 f0 01             	xor    $0x1,%eax
 81dd96a:	84 c0                	test   %al,%al
 81dd96c:	74 26                	je     81dd994 <_ZN27Dispatcher_Mercenary_Return4readER9PacketBufR8MSG_BASE+0x90>
 81dd96e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81dd975:	00 
 81dd976:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81dd97d:	00 
 81dd97e:	c7 44 24 04 80 1e bd 	movl   $0x8bd1e80,0x4(%esp)
 81dd985:	08 
 81dd986:	c7 04 24 8a 4e 00 00 	movl   $0x4e8a,(%esp)
 81dd98d:	e8 45 2f 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81dd992:	eb 05                	jmp    81dd999 <_ZN27Dispatcher_Mercenary_Return4readER9PacketBufR8MSG_BASE+0x95>
 81dd994:	b8 00 00 00 00       	mov    $0x0,%eax
 81dd999:	c9                   	leave
 81dd99a:	c3                   	ret
 81dd99b:	90                   	nop

```

```c
// Dispatcher_Mercenary_Return::read @ 0x81dd904

/* Dispatcher_Mercenary_Return::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Mercenary_Return::read
          (Dispatcher_Mercenary_Return *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x10));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x4e8a,"virtual int Dispatcher_Mercenary_Return::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x4e88,"virtual int Dispatcher_Mercenary_Return::read(PacketBuf&, MSG_BASE&)",0
                     ,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081dda1c Dispatcher_Mercenary_Return::send  [0x081dda1c-0x81ddb3b] ===
 81dda1c:	55                   	push   %ebp
 81dda1d:	89 e5                	mov    %esp,%ebp
 81dda1f:	56                   	push   %esi
 81dda20:	53                   	push   %ebx
 81dda21:	83 ec 20             	sub    $0x20,%esp
 81dda24:	8b 45 10             	mov    0x10(%ebp),%eax
 81dda27:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81dda2a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81dda2d:	89 04 24             	mov    %eax,(%esp)
 81dda30:	e8 17 03 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81dda35:	c7 44 24 08 b9 01 00 	movl   $0x1b9,0x8(%esp)
 81dda3c:	00 
 81dda3d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81dda44:	00 
 81dda45:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81dda48:	89 04 24             	mov    %eax,(%esp)
 81dda4b:	e8 ac de ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81dda50:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dda53:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 81dda57:	84 c0                	test   %al,%al
 81dda59:	74 07                	je     81dda62 <_ZN27Dispatcher_Mercenary_Return4sendEP5CUserR9ParamBase+0x46>
 81dda5b:	b8 01 00 00 00       	mov    $0x1,%eax
 81dda60:	eb 05                	jmp    81dda67 <_ZN27Dispatcher_Mercenary_Return4sendEP5CUserR9ParamBase+0x4b>
 81dda62:	b8 00 00 00 00       	mov    $0x0,%eax
 81dda67:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dda6b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81dda6e:	89 04 24             	mov    %eax,(%esp)
 81dda71:	e8 aa de ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81dda76:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dda79:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 81dda7d:	0f be c0             	movsbl %al,%eax
 81dda80:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dda84:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81dda87:	89 04 24             	mov    %eax,(%esp)
 81dda8a:	e8 91 de ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81dda8f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dda92:	8b 40 08             	mov    0x8(%eax),%eax
 81dda95:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dda99:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81dda9c:	89 04 24             	mov    %eax,(%esp)
 81dda9f:	e8 98 de ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81ddaa4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ddaa7:	8b 40 0c             	mov    0xc(%eax),%eax
 81ddaaa:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ddaae:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ddab1:	89 04 24             	mov    %eax,(%esp)
 81ddab4:	e8 83 de ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81ddab9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ddabc:	8b 40 10             	mov    0x10(%eax),%eax
 81ddabf:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ddac3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ddac6:	89 04 24             	mov    %eax,(%esp)
 81ddac9:	e8 6e de ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81ddace:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ddad1:	0f b6 40 14          	movzbl 0x14(%eax),%eax
 81ddad5:	0f be c0             	movsbl %al,%eax
 81ddad8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ddadc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ddadf:	89 04 24             	mov    %eax,(%esp)
 81ddae2:	e8 39 de ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81ddae7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ddaee:	00 
 81ddaef:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ddaf2:	89 04 24             	mov    %eax,(%esp)
 81ddaf5:	e8 5e de ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81ddafa:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ddafd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ddb01:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ddb04:	89 04 24             	mov    %eax,(%esp)
 81ddb07:	e8 ae aa 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81ddb0c:	eb 1b                	jmp    81ddb29 <_ZN27Dispatcher_Mercenary_Return4sendEP5CUserR9ParamBase+0x10d>
 81ddb0e:	89 d3                	mov    %edx,%ebx
 81ddb10:	89 c6                	mov    %eax,%esi
 81ddb12:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ddb15:	89 04 24             	mov    %eax,(%esp)
 81ddb18:	e8 63 03 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81ddb1d:	89 f0                	mov    %esi,%eax
 81ddb1f:	89 da                	mov    %ebx,%edx
 81ddb21:	89 04 24             	mov    %eax,(%esp)
 81ddb24:	e8 27 5c 90 00       	call   8ae3750 <_Unwind_Resume>
 81ddb29:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ddb2c:	89 04 24             	mov    %eax,(%esp)
 81ddb2f:	e8 4c 03 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81ddb34:	83 c4 20             	add    $0x20,%esp
 81ddb37:	5b                   	pop    %ebx
 81ddb38:	5e                   	pop    %esi
 81ddb39:	5d                   	pop    %ebp
 81ddb3a:	c3                   	ret
 81ddb3b:	90                   	nop

```

```c
// Dispatcher_Mercenary_Return::send @ 0x81dda1c

/* Dispatcher_Mercenary_Return::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Mercenary_Return::send
          (Dispatcher_Mercenary_Return *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081dda4b to 081ddb0b has its CatchHandler @ 081ddb0e */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1b9);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(local_10[4] != (ParamBase)0x0))
  ;
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[5]);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 8));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0xc));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x10));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[0x14]);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

