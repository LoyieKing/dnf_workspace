# DisPatcher_SortItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081c9d64 DisPatcher_SortItem::check_error  [0x081c9d64-0x81c9db9] ===
 81c9d64:	55                   	push   %ebp
 81c9d65:	89 e5                	mov    %esp,%ebp
 81c9d67:	83 ec 18             	sub    $0x18,%esp
 81c9d6a:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81c9d6e:	75 26                	jne    81c9d96 <_ZN19DisPatcher_SortItem11check_errorEP5CUserR8MSG_BASE+0x32>
 81c9d70:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c9d77:	00 
 81c9d78:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c9d7f:	00 
 81c9d80:	c7 44 24 04 a0 53 bd 	movl   $0x8bd53a0,0x4(%esp)
 81c9d87:	08 
 81c9d88:	c7 04 24 56 1d 00 00 	movl   $0x1d56,(%esp)
 81c9d8f:	e8 43 6b 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c9d94:	eb 21                	jmp    81c9db7 <_ZN19DisPatcher_SortItem11check_errorEP5CUserR8MSG_BASE+0x53>
 81c9d96:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9d99:	89 04 24             	mov    %eax,(%esp)
 81c9d9c:	e8 eb 05 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c9da1:	83 f8 02             	cmp    $0x2,%eax
 81c9da4:	0f 9e c0             	setle  %al
 81c9da7:	84 c0                	test   %al,%al
 81c9da9:	74 07                	je     81c9db2 <_ZN19DisPatcher_SortItem11check_errorEP5CUserR8MSG_BASE+0x4e>
 81c9dab:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81c9db0:	eb 05                	jmp    81c9db7 <_ZN19DisPatcher_SortItem11check_errorEP5CUserR8MSG_BASE+0x53>
 81c9db2:	b8 00 00 00 00       	mov    $0x0,%eax
 81c9db7:	c9                   	leave
 81c9db8:	c3                   	ret
 81c9db9:	90                   	nop

```

```c
// DisPatcher_SortItem::check_error @ 0x81c9d64

/* DisPatcher_SortItem::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_SortItem::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = LineFunc(0x1d56,"int DisPatcher_SortItem::check_error(CUser*, MSG_BASE&)",0,0);
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 < 3) {
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

## process

```asm
// === 081c9c54 DisPatcher_SortItem::process  [0x081c9c54-0x81c9d63] ===
 81c9c54:	55                   	push   %ebp
 81c9c55:	89 e5                	mov    %esp,%ebp
 81c9c57:	83 ec 28             	sub    $0x28,%esp
 81c9c5a:	8b 45 10             	mov    0x10(%ebp),%eax
 81c9c5d:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c9c61:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9c64:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c9c68:	8b 45 08             	mov    0x8(%ebp),%eax
 81c9c6b:	89 04 24             	mov    %eax,(%esp)
 81c9c6e:	e8 f1 00 00 00       	call   81c9d64 <_ZN19DisPatcher_SortItem11check_errorEP5CUserR8MSG_BASE>
 81c9c73:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81c9c76:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81c9c7a:	7e 08                	jle    81c9c84 <_ZN19DisPatcher_SortItem7processEP5CUserR8MSG_BASER9ParamBase+0x30>
 81c9c7c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c9c7f:	e9 dd 00 00 00       	jmp    81c9d61 <_ZN19DisPatcher_SortItem7processEP5CUserR8MSG_BASER9ParamBase+0x10d>
 81c9c84:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81c9c88:	79 0a                	jns    81c9c94 <_ZN19DisPatcher_SortItem7processEP5CUserR8MSG_BASER9ParamBase+0x40>
 81c9c8a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81c9c8f:	e9 cd 00 00 00       	jmp    81c9d61 <_ZN19DisPatcher_SortItem7processEP5CUserR8MSG_BASER9ParamBase+0x10d>
 81c9c94:	8b 45 10             	mov    0x10(%ebp),%eax
 81c9c97:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81c9c9a:	8b 45 14             	mov    0x14(%ebp),%eax
 81c9c9d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c9ca0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c9ca3:	0f b6 50 0d          	movzbl 0xd(%eax),%edx
 81c9ca7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c9caa:	88 50 04             	mov    %dl,0x4(%eax)
 81c9cad:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c9cb0:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 81c9cb7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c9cba:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 81c9cbe:	0f be c0             	movsbl %al,%eax
 81c9cc1:	83 f8 01             	cmp    $0x1,%eax
 81c9cc4:	74 3d                	je     81c9d03 <_ZN19DisPatcher_SortItem7processEP5CUserR8MSG_BASER9ParamBase+0xaf>
 81c9cc6:	83 f8 01             	cmp    $0x1,%eax
 81c9cc9:	7f 09                	jg     81c9cd4 <_ZN19DisPatcher_SortItem7processEP5CUserR8MSG_BASER9ParamBase+0x80>
 81c9ccb:	85 c0                	test   %eax,%eax
 81c9ccd:	74 11                	je     81c9ce0 <_ZN19DisPatcher_SortItem7processEP5CUserR8MSG_BASER9ParamBase+0x8c>
 81c9ccf:	e9 88 00 00 00       	jmp    81c9d5c <_ZN19DisPatcher_SortItem7processEP5CUserR8MSG_BASER9ParamBase+0x108>
 81c9cd4:	83 f8 02             	cmp    $0x2,%eax
 81c9cd7:	74 4d                	je     81c9d26 <_ZN19DisPatcher_SortItem7processEP5CUserR8MSG_BASER9ParamBase+0xd2>
 81c9cd9:	83 f8 07             	cmp    $0x7,%eax
 81c9cdc:	74 5d                	je     81c9d3b <_ZN19DisPatcher_SortItem7processEP5CUserR8MSG_BASER9ParamBase+0xe7>
 81c9cde:	eb 7c                	jmp    81c9d5c <_ZN19DisPatcher_SortItem7processEP5CUserR8MSG_BASER9ParamBase+0x108>
 81c9ce0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9ce3:	89 04 24             	mov    %eax,(%esp)
 81c9ce6:	e8 a3 05 f1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81c9ceb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c9cf2:	00 
 81c9cf3:	89 04 24             	mov    %eax,(%esp)
 81c9cf6:	e8 85 b0 33 00       	call   8504d80 <_ZN10CInventory4sortE10INVEN_TYPE>
 81c9cfb:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81c9cfe:	89 42 08             	mov    %eax,0x8(%edx)
 81c9d01:	eb 59                	jmp    81c9d5c <_ZN19DisPatcher_SortItem7processEP5CUserR8MSG_BASER9ParamBase+0x108>
 81c9d03:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9d06:	89 04 24             	mov    %eax,(%esp)
 81c9d09:	e8 80 05 f1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81c9d0e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81c9d15:	00 
 81c9d16:	89 04 24             	mov    %eax,(%esp)
 81c9d19:	e8 62 b0 33 00       	call   8504d80 <_ZN10CInventory4sortE10INVEN_TYPE>
 81c9d1e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81c9d21:	89 42 08             	mov    %eax,0x8(%edx)
 81c9d24:	eb 36                	jmp    81c9d5c <_ZN19DisPatcher_SortItem7processEP5CUserR8MSG_BASER9ParamBase+0x108>
 81c9d26:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9d29:	89 04 24             	mov    %eax,(%esp)
 81c9d2c:	e8 63 7d f8 ff       	call   8151a94 <_ZN15CUserCharacInfo18getCurCharacCargoWEv>
 81c9d31:	89 04 24             	mov    %eax,(%esp)
 81c9d34:	e8 d3 1f 34 00       	call   850bd0c <_ZN6CCargo4sortEv>
 81c9d39:	eb 21                	jmp    81c9d5c <_ZN19DisPatcher_SortItem7processEP5CUserR8MSG_BASER9ParamBase+0x108>
 81c9d3b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9d3e:	89 04 24             	mov    %eax,(%esp)
 81c9d41:	e8 48 05 f1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81c9d46:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 81c9d4d:	00 
 81c9d4e:	89 04 24             	mov    %eax,(%esp)
 81c9d51:	e8 2a b0 33 00       	call   8504d80 <_ZN10CInventory4sortE10INVEN_TYPE>
 81c9d56:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81c9d59:	89 42 08             	mov    %eax,0x8(%edx)
 81c9d5c:	b8 00 00 00 00       	mov    $0x0,%eax
 81c9d61:	c9                   	leave
 81c9d62:	c3                   	ret
 81c9d63:	90                   	nop

```

```c
// DisPatcher_SortItem::process @ 0x81c9c54

/* DisPatcher_SortItem::process(CUser*, MSG_BASE&, ParamBase&) */

int __thiscall
DisPatcher_SortItem::process
          (DisPatcher_SortItem *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ParamBase PVar1;
  int iVar2;
  CInventory *pCVar3;
  undefined4 uVar4;
  CCargo *this_00;
  MSG_BASE *pMVar5;
  
  pMVar5 = param_2;
  iVar2 = check_error((CUser *)this,(MSG_BASE *)param_1);
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      iVar2 = -1;
    }
    else {
      *(MSG_BASE *)(param_3 + 4) = param_2[0xd];
      *(undefined4 *)(param_3 + 8) = 0;
      PVar1 = param_3[4];
      if (PVar1 == (ParamBase)0x1) {
        pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        uVar4 = CInventory::sort(pCVar3,2,pMVar5);
        *(undefined4 *)(param_3 + 8) = uVar4;
      }
      else if ((char)PVar1 < '\x02') {
        if (PVar1 == (ParamBase)0x0) {
          pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          uVar4 = CInventory::sort(pCVar3,1,pMVar5);
          *(undefined4 *)(param_3 + 8) = uVar4;
        }
      }
      else if (PVar1 == (ParamBase)0x2) {
        this_00 = (CCargo *)CUserCharacInfo::getCurCharacCargoW((CUserCharacInfo *)param_1);
        CCargo::sort(this_00);
      }
      else if (PVar1 == (ParamBase)0x7) {
        pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        uVar4 = CInventory::sort(pCVar3,3,pMVar5);
        *(undefined4 *)(param_3 + 8) = uVar4;
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
// === 081c9bfe DisPatcher_SortItem::read  [0x081c9bfe-0x81c9c53] ===
 81c9bfe:	55                   	push   %ebp
 81c9bff:	89 e5                	mov    %esp,%ebp
 81c9c01:	83 ec 28             	sub    $0x28,%esp
 81c9c04:	8b 45 10             	mov    0x10(%ebp),%eax
 81c9c07:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c9c0a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c9c0d:	83 c0 0d             	add    $0xd,%eax
 81c9c10:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c9c14:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9c17:	89 04 24             	mov    %eax,(%esp)
 81c9c1a:	e8 03 33 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81c9c1f:	83 f0 01             	xor    $0x1,%eax
 81c9c22:	84 c0                	test   %al,%al
 81c9c24:	74 26                	je     81c9c4c <_ZN19DisPatcher_SortItem4readER9PacketBufR8MSG_BASE+0x4e>
 81c9c26:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c9c2d:	00 
 81c9c2e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c9c35:	00 
 81c9c36:	c7 44 24 04 e0 53 bd 	movl   $0x8bd53e0,0x4(%esp)
 81c9c3d:	08 
 81c9c3e:	c7 04 24 16 1d 00 00 	movl   $0x1d16,(%esp)
 81c9c45:	e8 8d 6c 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c9c4a:	eb 05                	jmp    81c9c51 <_ZN19DisPatcher_SortItem4readER9PacketBufR8MSG_BASE+0x53>
 81c9c4c:	b8 00 00 00 00       	mov    $0x0,%eax
 81c9c51:	c9                   	leave
 81c9c52:	c3                   	ret
 81c9c53:	90                   	nop

```

```c
// DisPatcher_SortItem::read @ 0x81c9bfe

/* DisPatcher_SortItem::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_SortItem::read(DisPatcher_SortItem *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x1d16,"virtual int DisPatcher_SortItem::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081c9dba DisPatcher_SortItem::send  [0x081c9dba-0x81c9f61] ===
 81c9dba:	55                   	push   %ebp
 81c9dbb:	89 e5                	mov    %esp,%ebp
 81c9dbd:	56                   	push   %esi
 81c9dbe:	53                   	push   %ebx
 81c9dbf:	83 ec 20             	sub    $0x20,%esp
 81c9dc2:	8b 45 10             	mov    0x10(%ebp),%eax
 81c9dc5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c9dc8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c9dcb:	89 04 24             	mov    %eax,(%esp)
 81c9dce:	e8 79 3f 3c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81c9dd3:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 81c9dda:	00 
 81c9ddb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c9de2:	00 
 81c9de3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c9de6:	89 04 24             	mov    %eax,(%esp)
 81c9de9:	e8 0e 1b f0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81c9dee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c9df1:	8b 40 08             	mov    0x8(%eax),%eax
 81c9df4:	85 c0                	test   %eax,%eax
 81c9df6:	75 2e                	jne    81c9e26 <_ZN19DisPatcher_SortItem4sendEP5CUserR9ParamBase+0x6c>
 81c9df8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c9dff:	00 
 81c9e00:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c9e03:	89 04 24             	mov    %eax,(%esp)
 81c9e06:	e8 15 1b f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c9e0b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c9e0e:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 81c9e12:	0f be c0             	movsbl %al,%eax
 81c9e15:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c9e19:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c9e1c:	89 04 24             	mov    %eax,(%esp)
 81c9e1f:	e8 fc 1a f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c9e24:	eb 44                	jmp    81c9e6a <_ZN19DisPatcher_SortItem4sendEP5CUserR9ParamBase+0xb0>
 81c9e26:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c9e2d:	00 
 81c9e2e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c9e31:	89 04 24             	mov    %eax,(%esp)
 81c9e34:	e8 e7 1a f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c9e39:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c9e3c:	8b 40 08             	mov    0x8(%eax),%eax
 81c9e3f:	0f be c0             	movsbl %al,%eax
 81c9e42:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c9e46:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c9e49:	89 04 24             	mov    %eax,(%esp)
 81c9e4c:	e8 cf 1a f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c9e51:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c9e54:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 81c9e58:	0f be c0             	movsbl %al,%eax
 81c9e5b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c9e5f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c9e62:	89 04 24             	mov    %eax,(%esp)
 81c9e65:	e8 b6 1a f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c9e6a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c9e71:	00 
 81c9e72:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c9e75:	89 04 24             	mov    %eax,(%esp)
 81c9e78:	e8 db 1a f0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81c9e7d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c9e80:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c9e84:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9e87:	89 04 24             	mov    %eax,(%esp)
 81c9e8a:	e8 2b e7 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81c9e8f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c9e92:	8b 40 08             	mov    0x8(%eax),%eax
 81c9e95:	85 c0                	test   %eax,%eax
 81c9e97:	75 19                	jne    81c9eb2 <_ZN19DisPatcher_SortItem4sendEP5CUserR9ParamBase+0xf8>
 81c9e99:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c9e9c:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 81c9ea0:	0f be c0             	movsbl %al,%eax
 81c9ea3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c9ea7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9eaa:	89 04 24             	mov    %eax,(%esp)
 81c9ead:	e8 ba 3c 49 00       	call   865db6c <_ZN5CUser14send_itemspaceEi>
 81c9eb2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c9eb5:	8b 40 08             	mov    0x8(%eax),%eax
 81c9eb8:	85 c0                	test   %eax,%eax
 81c9eba:	75 78                	jne    81c9f34 <_ZN19DisPatcher_SortItem4sendEP5CUserR9ParamBase+0x17a>
 81c9ebc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c9ebf:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 81c9ec3:	0f be c0             	movsbl %al,%eax
 81c9ec6:	83 f8 01             	cmp    $0x1,%eax
 81c9ec9:	74 2c                	je     81c9ef7 <_ZN19DisPatcher_SortItem4sendEP5CUserR9ParamBase+0x13d>
 81c9ecb:	83 f8 01             	cmp    $0x1,%eax
 81c9ece:	7f 06                	jg     81c9ed6 <_ZN19DisPatcher_SortItem4sendEP5CUserR9ParamBase+0x11c>
 81c9ed0:	85 c0                	test   %eax,%eax
 81c9ed2:	74 0e                	je     81c9ee2 <_ZN19DisPatcher_SortItem4sendEP5CUserR9ParamBase+0x128>
 81c9ed4:	eb 5e                	jmp    81c9f34 <_ZN19DisPatcher_SortItem4sendEP5CUserR9ParamBase+0x17a>
 81c9ed6:	83 f8 02             	cmp    $0x2,%eax
 81c9ed9:	74 31                	je     81c9f0c <_ZN19DisPatcher_SortItem4sendEP5CUserR9ParamBase+0x152>
 81c9edb:	83 f8 07             	cmp    $0x7,%eax
 81c9ede:	74 41                	je     81c9f21 <_ZN19DisPatcher_SortItem4sendEP5CUserR9ParamBase+0x167>
 81c9ee0:	eb 52                	jmp    81c9f34 <_ZN19DisPatcher_SortItem4sendEP5CUserR9ParamBase+0x17a>
 81c9ee2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9ee5:	89 04 24             	mov    %eax,(%esp)
 81c9ee8:	e8 91 03 f1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81c9eed:	89 04 24             	mov    %eax,(%esp)
 81c9ef0:	e8 99 10 33 00       	call   84faf8e <_ZNK10CInventory21SendItemLockListInvenEv>
 81c9ef5:	eb 3d                	jmp    81c9f34 <_ZN19DisPatcher_SortItem4sendEP5CUserR9ParamBase+0x17a>
 81c9ef7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9efa:	89 04 24             	mov    %eax,(%esp)
 81c9efd:	e8 7c 03 f1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81c9f02:	89 04 24             	mov    %eax,(%esp)
 81c9f05:	e8 b4 10 33 00       	call   84fafbe <_ZNK10CInventory22SendItemLockListAvatarEv>
 81c9f0a:	eb 28                	jmp    81c9f34 <_ZN19DisPatcher_SortItem4sendEP5CUserR9ParamBase+0x17a>
 81c9f0c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9f0f:	89 04 24             	mov    %eax,(%esp)
 81c9f12:	e8 6d 7b f8 ff       	call   8151a84 <_ZNK15CUserCharacInfo18getCurCharacCargoREv>
 81c9f17:	89 04 24             	mov    %eax,(%esp)
 81c9f1a:	e8 31 1e 34 00       	call   850bd50 <_ZNK6CCargo16SendItemLockListEv>
 81c9f1f:	eb 13                	jmp    81c9f34 <_ZN19DisPatcher_SortItem4sendEP5CUserR9ParamBase+0x17a>
 81c9f21:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9f24:	89 04 24             	mov    %eax,(%esp)
 81c9f27:	e8 52 03 f1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81c9f2c:	89 04 24             	mov    %eax,(%esp)
 81c9f2f:	e8 ba 10 33 00       	call   84fafee <_ZNK10CInventory24SendItemLockListCreatureEv>
 81c9f34:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c9f37:	89 04 24             	mov    %eax,(%esp)
 81c9f3a:	e8 41 3f 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c9f3f:	83 c4 20             	add    $0x20,%esp
 81c9f42:	5b                   	pop    %ebx
 81c9f43:	5e                   	pop    %esi
 81c9f44:	5d                   	pop    %ebp
 81c9f45:	c3                   	ret
 81c9f46:	89 d3                	mov    %edx,%ebx
 81c9f48:	89 c6                	mov    %eax,%esi
 81c9f4a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c9f4d:	89 04 24             	mov    %eax,(%esp)
 81c9f50:	e8 2b 3f 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c9f55:	89 f0                	mov    %esi,%eax
 81c9f57:	89 da                	mov    %ebx,%edx
 81c9f59:	89 04 24             	mov    %eax,(%esp)
 81c9f5c:	e8 ef 97 91 00       	call   8ae3750 <_Unwind_Resume>
 81c9f61:	90                   	nop

```

```c
// DisPatcher_SortItem::send @ 0x81c9dba

/* DisPatcher_SortItem::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_SortItem::send(DisPatcher_SortItem *this,CUser *param_1,ParamBase *param_2)

{
  ParamBase PVar1;
  CInventory *pCVar2;
  CCargo *this_00;
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081c9de9 to 081c9f33 has its CatchHandler @ 081c9f46 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x14);
  if (*(int *)(local_10 + 8) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[4]);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte
              ((InterfacePacketBuf *)local_1c,(int)(char)*(undefined4 *)(local_10 + 8));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[4]);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  if (*(int *)(local_10 + 8) == 0) {
    CUser::send_itemspace(param_1,(int)(char)local_10[4]);
  }
  if (*(int *)(local_10 + 8) == 0) {
    PVar1 = local_10[4];
    if (PVar1 == (ParamBase)0x1) {
      pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::SendItemLockListAvatar(pCVar2);
    }
    else if ((char)PVar1 < '\x02') {
      if (PVar1 == (ParamBase)0x0) {
        pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::SendItemLockListInven(pCVar2);
      }
    }
    else if (PVar1 == (ParamBase)0x2) {
      this_00 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
      CCargo::SendItemLockList(this_00);
    }
    else if (PVar1 == (ParamBase)0x7) {
      pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::SendItemLockListCreature(pCVar2);
    }
  }
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

