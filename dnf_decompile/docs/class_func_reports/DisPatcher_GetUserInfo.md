# DisPatcher_GetUserInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## check_error

```asm
// === 081c3e7c DisPatcher_GetUserInfo::check_error  [0x081c3e7c-0x81c3ea3] ===
 81c3e7c:	55                   	push   %ebp
 81c3e7d:	89 e5                	mov    %esp,%ebp
 81c3e7f:	83 ec 18             	sub    $0x18,%esp
 81c3e82:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3e85:	89 04 24             	mov    %eax,(%esp)
 81c3e88:	e8 ff 64 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c3e8d:	85 c0                	test   %eax,%eax
 81c3e8f:	0f 94 c0             	sete   %al
 81c3e92:	84 c0                	test   %al,%al
 81c3e94:	74 07                	je     81c3e9d <_ZN22DisPatcher_GetUserInfo11check_errorEP5CUserR8MSG_BASE+0x21>
 81c3e96:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81c3e9b:	eb 05                	jmp    81c3ea2 <_ZN22DisPatcher_GetUserInfo11check_errorEP5CUserR8MSG_BASE+0x26>
 81c3e9d:	b8 00 00 00 00       	mov    $0x0,%eax
 81c3ea2:	c9                   	leave
 81c3ea3:	c3                   	ret

```

```c
// DisPatcher_GetUserInfo::check_error @ 0x81c3e7c

/* DisPatcher_GetUserInfo::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_GetUserInfo::check_error(CUser *param_1,MSG_BASE *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
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
// === 081c3dd8 DisPatcher_GetUserInfo::process  [0x081c3dd8-0x81c3e7b] ===
 81c3dd8:	55                   	push   %ebp
 81c3dd9:	89 e5                	mov    %esp,%ebp
 81c3ddb:	56                   	push   %esi
 81c3ddc:	53                   	push   %ebx
 81c3ddd:	83 ec 20             	sub    $0x20,%esp
 81c3de0:	8b 45 10             	mov    0x10(%ebp),%eax
 81c3de3:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c3de7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3dea:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c3dee:	8b 45 08             	mov    0x8(%ebp),%eax
 81c3df1:	89 04 24             	mov    %eax,(%esp)
 81c3df4:	e8 83 00 00 00       	call   81c3e7c <_ZN22DisPatcher_GetUserInfo11check_errorEP5CUserR8MSG_BASE>
 81c3df9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81c3dfc:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81c3e00:	7e 07                	jle    81c3e09 <_ZN22DisPatcher_GetUserInfo7processEP5CUserR8MSG_BASER9ParamBase+0x31>
 81c3e02:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81c3e07:	eb 6c                	jmp    81c3e75 <_ZN22DisPatcher_GetUserInfo7processEP5CUserR8MSG_BASER9ParamBase+0x9d>
 81c3e09:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81c3e0d:	79 2d                	jns    81c3e3c <_ZN22DisPatcher_GetUserInfo7processEP5CUserR8MSG_BASER9ParamBase+0x64>
 81c3e0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3e12:	89 04 24             	mov    %eax,(%esp)
 81c3e15:	e8 54 65 f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c3e1a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c3e1e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c3e25:	00 
 81c3e26:	c7 44 24 04 20 5c bd 	movl   $0x8bd5c20,0x4(%esp)
 81c3e2d:	08 
 81c3e2e:	c7 04 24 6d 0f 00 00 	movl   $0xf6d,(%esp)
 81c3e35:	e8 9d ca 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c3e3a:	eb 39                	jmp    81c3e75 <_ZN22DisPatcher_GetUserInfo7processEP5CUserR8MSG_BASER9ParamBase+0x9d>
 81c3e3c:	8b 45 10             	mov    0x10(%ebp),%eax
 81c3e3f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c3e42:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c3e45:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 81c3e49:	0f be f0             	movsbl %al,%esi
 81c3e4c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c3e4f:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81c3e53:	0f b7 d8             	movzwl %ax,%ebx
 81c3e56:	e8 4c 65 f1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81c3e5b:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81c3e5f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81c3e63:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c3e66:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c3e6a:	89 04 24             	mov    %eax,(%esp)
 81c3e6d:	e8 f6 6e 50 00       	call   86cad68 <_ZN9GameWorld13get_user_infoEP5CUserii>
 81c3e72:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c3e75:	83 c4 20             	add    $0x20,%esp
 81c3e78:	5b                   	pop    %ebx
 81c3e79:	5e                   	pop    %esi
 81c3e7a:	5d                   	pop    %ebp
 81c3e7b:	c3                   	ret

```

```c
// DisPatcher_GetUserInfo::process @ 0x81c3dd8

/* DisPatcher_GetUserInfo::process(CUser*, MSG_BASE&, ParamBase&) */

int DisPatcher_GetUserInfo::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ParamBase PVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  GameWorld *this;
  
  iVar3 = check_error(param_1,param_2);
  if (iVar3 < 1) {
    if (iVar3 < 0) {
      uVar4 = CUser::get_acc_id((CUser *)param_2);
      iVar3 = LineFunc(0xf6d,
                       "virtual int DisPatcher_GetUserInfo::process(CUser*, MSG_BASE&, ParamBase&)",
                       0,uVar4);
    }
    else {
      PVar1 = param_3[0xf];
      uVar2 = *(ushort *)(param_3 + 0xd);
      this = (GameWorld *)G_GameWorld();
      GameWorld::get_user_info(this,(CUser *)param_2,(uint)uVar2,(int)(char)PVar1);
    }
  }
  else {
    iVar3 = -1;
  }
  return iVar3;
}

```

---

## read

```asm
// === 081c3d46 DisPatcher_GetUserInfo::read  [0x081c3d46-0x81c3dd7] ===
 81c3d46:	55                   	push   %ebp
 81c3d47:	89 e5                	mov    %esp,%ebp
 81c3d49:	83 ec 18             	sub    $0x18,%esp
 81c3d4c:	8b 45 10             	mov    0x10(%ebp),%eax
 81c3d4f:	83 c0 0d             	add    $0xd,%eax
 81c3d52:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c3d56:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3d59:	89 04 24             	mov    %eax,(%esp)
 81c3d5c:	e8 4f 93 3c 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81c3d61:	83 f0 01             	xor    $0x1,%eax
 81c3d64:	84 c0                	test   %al,%al
 81c3d66:	74 26                	je     81c3d8e <_ZN22DisPatcher_GetUserInfo4readER9PacketBufR8MSG_BASE+0x48>
 81c3d68:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c3d6f:	00 
 81c3d70:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c3d77:	00 
 81c3d78:	c7 44 24 04 80 5c bd 	movl   $0x8bd5c80,0x4(%esp)
 81c3d7f:	08 
 81c3d80:	c7 04 24 5b 0f 00 00 	movl   $0xf5b,(%esp)
 81c3d87:	e8 4b cb 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c3d8c:	eb 47                	jmp    81c3dd5 <_ZN22DisPatcher_GetUserInfo4readER9PacketBufR8MSG_BASE+0x8f>
 81c3d8e:	8b 45 10             	mov    0x10(%ebp),%eax
 81c3d91:	83 c0 0f             	add    $0xf,%eax
 81c3d94:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c3d98:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3d9b:	89 04 24             	mov    %eax,(%esp)
 81c3d9e:	e8 7f 91 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81c3da3:	83 f0 01             	xor    $0x1,%eax
 81c3da6:	84 c0                	test   %al,%al
 81c3da8:	74 26                	je     81c3dd0 <_ZN22DisPatcher_GetUserInfo4readER9PacketBufR8MSG_BASE+0x8a>
 81c3daa:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c3db1:	00 
 81c3db2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c3db9:	00 
 81c3dba:	c7 44 24 04 80 5c bd 	movl   $0x8bd5c80,0x4(%esp)
 81c3dc1:	08 
 81c3dc2:	c7 04 24 5d 0f 00 00 	movl   $0xf5d,(%esp)
 81c3dc9:	e8 09 cb 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c3dce:	eb 05                	jmp    81c3dd5 <_ZN22DisPatcher_GetUserInfo4readER9PacketBufR8MSG_BASE+0x8f>
 81c3dd0:	b8 00 00 00 00       	mov    $0x0,%eax
 81c3dd5:	c9                   	leave
 81c3dd6:	c3                   	ret
 81c3dd7:	90                   	nop

```

```c
// DisPatcher_GetUserInfo::read @ 0x81c3d46

/* DisPatcher_GetUserInfo::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_GetUserInfo::read(DisPatcher_GetUserInfo *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xf));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0xf5d,"virtual int DisPatcher_GetUserInfo::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0xf5b,"virtual int DisPatcher_GetUserInfo::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

