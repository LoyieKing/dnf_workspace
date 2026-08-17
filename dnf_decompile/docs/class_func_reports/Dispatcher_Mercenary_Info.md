# Dispatcher_Mercenary_Info

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## process

```asm
// === 081ddb46 Dispatcher_Mercenary_Info::process  [0x081ddb46-0x81ddb7b] ===
 81ddb46:	55                   	push   %ebp
 81ddb47:	89 e5                	mov    %esp,%ebp
 81ddb49:	83 ec 18             	sub    $0x18,%esp
 81ddb4c:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81ddb50:	75 07                	jne    81ddb59 <_ZN25Dispatcher_Mercenary_Info7processEP5CUserR8MSG_BASER9ParamBase+0x13>
 81ddb52:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81ddb57:	eb 21                	jmp    81ddb7a <_ZN25Dispatcher_Mercenary_Info7processEP5CUserR8MSG_BASER9ParamBase+0x34>
 81ddb59:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ddb5c:	89 04 24             	mov    %eax,(%esp)
 81ddb5f:	e8 28 c8 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ddb64:	83 f8 01             	cmp    $0x1,%eax
 81ddb67:	0f 9e c0             	setle  %al
 81ddb6a:	84 c0                	test   %al,%al
 81ddb6c:	74 07                	je     81ddb75 <_ZN25Dispatcher_Mercenary_Info7processEP5CUserR8MSG_BASER9ParamBase+0x2f>
 81ddb6e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81ddb73:	eb 05                	jmp    81ddb7a <_ZN25Dispatcher_Mercenary_Info7processEP5CUserR8MSG_BASER9ParamBase+0x34>
 81ddb75:	b8 00 00 00 00       	mov    $0x0,%eax
 81ddb7a:	c9                   	leave
 81ddb7b:	c3                   	ret

```

```c
// Dispatcher_Mercenary_Info::process @ 0x81ddb46

/* Dispatcher_Mercenary_Info::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_Mercenary_Info::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 < 2) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

```

---

## read

```asm
// === 081ddb3c Dispatcher_Mercenary_Info::read  [0x081ddb3c-0x81ddb45] ===
 81ddb3c:	55                   	push   %ebp
 81ddb3d:	89 e5                	mov    %esp,%ebp
 81ddb3f:	b8 00 00 00 00       	mov    $0x0,%eax
 81ddb44:	5d                   	pop    %ebp
 81ddb45:	c3                   	ret

```

```c
// Dispatcher_Mercenary_Info::read @ 0x81ddb3c

/* Dispatcher_Mercenary_Info::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_Mercenary_Info::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## send

```asm
// === 081ddb7c Dispatcher_Mercenary_Info::send  [0x081ddb7c-0x81ddc23] ===
 81ddb7c:	55                   	push   %ebp
 81ddb7d:	89 e5                	mov    %esp,%ebp
 81ddb7f:	56                   	push   %esi
 81ddb80:	53                   	push   %ebx
 81ddb81:	83 ec 20             	sub    $0x20,%esp
 81ddb84:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81ddb87:	89 04 24             	mov    %eax,(%esp)
 81ddb8a:	e8 bd 01 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81ddb8f:	c7 44 24 08 ba 01 00 	movl   $0x1ba,0x8(%esp)
 81ddb96:	00 
 81ddb97:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ddb9e:	00 
 81ddb9f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81ddba2:	89 04 24             	mov    %eax,(%esp)
 81ddba5:	e8 52 dd ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81ddbaa:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ddbb1:	00 
 81ddbb2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81ddbb5:	89 04 24             	mov    %eax,(%esp)
 81ddbb8:	e8 63 dd ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81ddbbd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81ddbc0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ddbc4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ddbc7:	89 04 24             	mov    %eax,(%esp)
 81ddbca:	e8 35 0b 4b 00       	call   868e704 <_ZN5CUser22SetMercenaryInfoPacketER11PacketGuard>
 81ddbcf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ddbd6:	00 
 81ddbd7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81ddbda:	89 04 24             	mov    %eax,(%esp)
 81ddbdd:	e8 76 dd ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81ddbe2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81ddbe5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ddbe9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ddbec:	89 04 24             	mov    %eax,(%esp)
 81ddbef:	e8 c6 a9 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81ddbf4:	eb 1b                	jmp    81ddc11 <_ZN25Dispatcher_Mercenary_Info4sendEP5CUserR9ParamBase+0x95>
 81ddbf6:	89 d3                	mov    %edx,%ebx
 81ddbf8:	89 c6                	mov    %eax,%esi
 81ddbfa:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81ddbfd:	89 04 24             	mov    %eax,(%esp)
 81ddc00:	e8 7b 02 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81ddc05:	89 f0                	mov    %esi,%eax
 81ddc07:	89 da                	mov    %ebx,%edx
 81ddc09:	89 04 24             	mov    %eax,(%esp)
 81ddc0c:	e8 3f 5b 90 00       	call   8ae3750 <_Unwind_Resume>
 81ddc11:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81ddc14:	89 04 24             	mov    %eax,(%esp)
 81ddc17:	e8 64 02 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81ddc1c:	83 c4 20             	add    $0x20,%esp
 81ddc1f:	5b                   	pop    %ebx
 81ddc20:	5e                   	pop    %esi
 81ddc21:	5d                   	pop    %ebp
 81ddc22:	c3                   	ret
 81ddc23:	90                   	nop

```

```c
// Dispatcher_Mercenary_Info::send @ 0x81ddb7c

/* Dispatcher_Mercenary_Info::send(CUser*, ParamBase&) */

void Dispatcher_Mercenary_Info::send(CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 081ddba5 to 081ddbf3 has its CatchHandler @ 081ddbf6 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0x1ba);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  CUser::SetMercenaryInfoPacket((CUser *)param_2,local_18);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send((CUser *)param_2,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

