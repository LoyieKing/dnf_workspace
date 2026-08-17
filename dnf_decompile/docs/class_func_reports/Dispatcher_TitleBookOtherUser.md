# Dispatcher_TitleBookOtherUser

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## process

```asm
// === 081d7d56 Dispatcher_TitleBookOtherUser::process  [0x081d7d56-0x81d7dfb] ===
 81d7d56:	55                   	push   %ebp
 81d7d57:	89 e5                	mov    %esp,%ebp
 81d7d59:	53                   	push   %ebx
 81d7d5a:	83 ec 24             	sub    $0x24,%esp
 81d7d5d:	8b 45 10             	mov    0x10(%ebp),%eax
 81d7d60:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d7d63:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d7d66:	89 04 24             	mov    %eax,(%esp)
 81d7d69:	e8 1e 26 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d7d6e:	83 f8 02             	cmp    $0x2,%eax
 81d7d71:	0f 9e c0             	setle  %al
 81d7d74:	84 c0                	test   %al,%al
 81d7d76:	74 07                	je     81d7d7f <_ZN29Dispatcher_TitleBookOtherUser7processEP5CUserR8MSG_BASER9ParamBase+0x29>
 81d7d78:	b8 00 00 00 00       	mov    $0x0,%eax
 81d7d7d:	eb 76                	jmp    81d7df5 <_ZN29Dispatcher_TitleBookOtherUser7processEP5CUserR8MSG_BASER9ParamBase+0x9f>
 81d7d7f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d7d82:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81d7d86:	0f b7 d8             	movzwl %ax,%ebx
 81d7d89:	e8 19 26 f0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81d7d8e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d7d92:	89 04 24             	mov    %eax,(%esp)
 81d7d95:	e8 02 ce 4e 00       	call   86c4b9c <_ZN9GameWorld15find_from_worldEt>
 81d7d9a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d7d9d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81d7da1:	75 07                	jne    81d7daa <_ZN29Dispatcher_TitleBookOtherUser7processEP5CUserR8MSG_BASER9ParamBase+0x54>
 81d7da3:	b8 00 00 00 00       	mov    $0x0,%eax
 81d7da8:	eb 4b                	jmp    81d7df5 <_ZN29Dispatcher_TitleBookOtherUser7processEP5CUserR8MSG_BASER9ParamBase+0x9f>
 81d7daa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d7dad:	89 04 24             	mov    %eax,(%esp)
 81d7db0:	e8 d7 25 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d7db5:	83 f8 02             	cmp    $0x2,%eax
 81d7db8:	0f 9e c0             	setle  %al
 81d7dbb:	84 c0                	test   %al,%al
 81d7dbd:	74 07                	je     81d7dc6 <_ZN29Dispatcher_TitleBookOtherUser7processEP5CUserR8MSG_BASER9ParamBase+0x70>
 81d7dbf:	b8 00 00 00 00       	mov    $0x0,%eax
 81d7dc4:	eb 2f                	jmp    81d7df5 <_ZN29Dispatcher_TitleBookOtherUser7processEP5CUserR8MSG_BASER9ParamBase+0x9f>
 81d7dc6:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 81d7dcd:	00 
 81d7dce:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d7dd1:	89 04 24             	mov    %eax,(%esp)
 81d7dd4:	e8 ab 57 f0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 81d7dd9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81d7de0:	00 
 81d7de1:	8b 55 0c             	mov    0xc(%ebp),%edx
 81d7de4:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d7de8:	89 04 24             	mov    %eax,(%esp)
 81d7deb:	e8 60 99 46 00       	call   8641750 <_ZN10CTitleBook17sendListOtherUserEP5CUser25ENUM_TITLE_BOOK_INFO_TYPE>
 81d7df0:	b8 00 00 00 00       	mov    $0x0,%eax
 81d7df5:	83 c4 24             	add    $0x24,%esp
 81d7df8:	5b                   	pop    %ebx
 81d7df9:	5d                   	pop    %ebp
 81d7dfa:	c3                   	ret
 81d7dfb:	90                   	nop

```

```c
// Dispatcher_TitleBookOtherUser::process @ 0x81d7d56

/* Dispatcher_TitleBookOtherUser::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_TitleBookOtherUser::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ushort uVar1;
  int iVar2;
  GameWorld *this;
  CUser *this_00;
  CTitleBook *pCVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    uVar1 = *(ushort *)(param_3 + 0xd);
    this = (GameWorld *)G_GameWorld();
    this_00 = (CUser *)GameWorld::find_from_world(this,uVar1);
    if ((this_00 != (CUser *)0x0) && (iVar2 = CUser::get_state(this_00), 2 < iVar2)) {
      pCVar3 = (CTitleBook *)CUser::GetCharacExpandData(this_00,0xe);
      CTitleBook::sendListOtherUser(pCVar3,param_2,1);
    }
  }
  return 0;
}

```

---

## read

```asm
// === 081d7d00 Dispatcher_TitleBookOtherUser::read  [0x081d7d00-0x81d7d55] ===
 81d7d00:	55                   	push   %ebp
 81d7d01:	89 e5                	mov    %esp,%ebp
 81d7d03:	83 ec 28             	sub    $0x28,%esp
 81d7d06:	8b 45 10             	mov    0x10(%ebp),%eax
 81d7d09:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d7d0c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d7d0f:	83 c0 0d             	add    $0xd,%eax
 81d7d12:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d7d16:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d7d19:	89 04 24             	mov    %eax,(%esp)
 81d7d1c:	e8 8f 53 3b 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81d7d21:	83 f0 01             	xor    $0x1,%eax
 81d7d24:	84 c0                	test   %al,%al
 81d7d26:	74 26                	je     81d7d4e <_ZN29Dispatcher_TitleBookOtherUser4readER9PacketBufR8MSG_BASE+0x4e>
 81d7d28:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d7d2f:	00 
 81d7d30:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d7d37:	00 
 81d7d38:	c7 44 24 04 a0 27 bd 	movl   $0x8bd27a0,0x4(%esp)
 81d7d3f:	08 
 81d7d40:	c7 04 24 44 42 00 00 	movl   $0x4244,(%esp)
 81d7d47:	e8 8b 8b 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d7d4c:	eb 05                	jmp    81d7d53 <_ZN29Dispatcher_TitleBookOtherUser4readER9PacketBufR8MSG_BASE+0x53>
 81d7d4e:	b8 00 00 00 00       	mov    $0x0,%eax
 81d7d53:	c9                   	leave
 81d7d54:	c3                   	ret
 81d7d55:	90                   	nop

```

```c
// Dispatcher_TitleBookOtherUser::read @ 0x81d7d00

/* Dispatcher_TitleBookOtherUser::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_TitleBookOtherUser::read
          (Dispatcher_TitleBookOtherUser *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x4244,"virtual int Dispatcher_TitleBookOtherUser::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}

```

