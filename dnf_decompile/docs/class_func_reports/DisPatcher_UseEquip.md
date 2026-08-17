# DisPatcher_UseEquip

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081c0ee2 DisPatcher_UseEquip::check_error  [0x081c0ee2-0x81c0fab] ===
 81c0ee2:	55                   	push   %ebp
 81c0ee3:	89 e5                	mov    %esp,%ebp
 81c0ee5:	83 ec 28             	sub    $0x28,%esp
 81c0ee8:	8b 45 10             	mov    0x10(%ebp),%eax
 81c0eeb:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81c0eee:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c0ef1:	89 04 24             	mov    %eax,(%esp)
 81c0ef4:	e8 93 94 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c0ef9:	83 f8 05             	cmp    $0x5,%eax
 81c0efc:	74 47                	je     81c0f45 <_ZN19DisPatcher_UseEquip11check_errorEP5CUserR8MSG_BASE+0x63>
 81c0efe:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c0f01:	89 04 24             	mov    %eax,(%esp)
 81c0f04:	e8 83 94 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c0f09:	83 f8 07             	cmp    $0x7,%eax
 81c0f0c:	74 37                	je     81c0f45 <_ZN19DisPatcher_UseEquip11check_errorEP5CUserR8MSG_BASE+0x63>
 81c0f0e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c0f11:	89 04 24             	mov    %eax,(%esp)
 81c0f14:	e8 73 94 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c0f19:	83 f8 08             	cmp    $0x8,%eax
 81c0f1c:	74 27                	je     81c0f45 <_ZN19DisPatcher_UseEquip11check_errorEP5CUserR8MSG_BASE+0x63>
 81c0f1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c0f21:	89 04 24             	mov    %eax,(%esp)
 81c0f24:	e8 63 94 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c0f29:	83 f8 0a             	cmp    $0xa,%eax
 81c0f2c:	74 17                	je     81c0f45 <_ZN19DisPatcher_UseEquip11check_errorEP5CUserR8MSG_BASE+0x63>
 81c0f2e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c0f31:	89 04 24             	mov    %eax,(%esp)
 81c0f34:	e8 53 94 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c0f39:	83 f8 0c             	cmp    $0xc,%eax
 81c0f3c:	74 07                	je     81c0f45 <_ZN19DisPatcher_UseEquip11check_errorEP5CUserR8MSG_BASE+0x63>
 81c0f3e:	b8 01 00 00 00       	mov    $0x1,%eax
 81c0f43:	eb 05                	jmp    81c0f4a <_ZN19DisPatcher_UseEquip11check_errorEP5CUserR8MSG_BASE+0x68>
 81c0f45:	b8 00 00 00 00       	mov    $0x0,%eax
 81c0f4a:	84 c0                	test   %al,%al
 81c0f4c:	74 07                	je     81c0f55 <_ZN19DisPatcher_UseEquip11check_errorEP5CUserR8MSG_BASE+0x73>
 81c0f4e:	b8 13 00 00 00       	mov    $0x13,%eax
 81c0f53:	eb 55                	jmp    81c0faa <_ZN19DisPatcher_UseEquip11check_errorEP5CUserR8MSG_BASE+0xc8>
 81c0f55:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c0f58:	89 04 24             	mov    %eax,(%esp)
 81c0f5b:	e8 ec 41 49 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81c0f60:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81c0f63:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81c0f67:	74 3c                	je     81c0fa5 <_ZN19DisPatcher_UseEquip11check_errorEP5CUserR8MSG_BASE+0xc3>
 81c0f69:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c0f6c:	8b 80 d8 0c 00 00    	mov    0xcd8(%eax),%eax
 81c0f72:	83 f8 01             	cmp    $0x1,%eax
 81c0f75:	75 07                	jne    81c0f7e <_ZN19DisPatcher_UseEquip11check_errorEP5CUserR8MSG_BASE+0x9c>
 81c0f77:	b8 13 00 00 00       	mov    $0x13,%eax
 81c0f7c:	eb 2c                	jmp    81c0faa <_ZN19DisPatcher_UseEquip11check_errorEP5CUserR8MSG_BASE+0xc8>
 81c0f7e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c0f81:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 81c0f87:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c0f8a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81c0f8e:	74 15                	je     81c0fa5 <_ZN19DisPatcher_UseEquip11check_errorEP5CUserR8MSG_BASE+0xc3>
 81c0f90:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c0f93:	0f b6 80 9f 08 00 00 	movzbl 0x89f(%eax),%eax
 81c0f9a:	84 c0                	test   %al,%al
 81c0f9c:	74 07                	je     81c0fa5 <_ZN19DisPatcher_UseEquip11check_errorEP5CUserR8MSG_BASE+0xc3>
 81c0f9e:	b8 13 00 00 00       	mov    $0x13,%eax
 81c0fa3:	eb 05                	jmp    81c0faa <_ZN19DisPatcher_UseEquip11check_errorEP5CUserR8MSG_BASE+0xc8>
 81c0fa5:	b8 00 00 00 00       	mov    $0x0,%eax
 81c0faa:	c9                   	leave
 81c0fab:	c3                   	ret

```

```c
// DisPatcher_UseEquip::check_error @ 0x81c0ee2

/* DisPatcher_UseEquip::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_UseEquip::check_error(CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if ((((iVar2 == 5) || (iVar2 = CUser::get_state((CUser *)param_2), iVar2 == 7)) ||
      (iVar2 = CUser::get_state((CUser *)param_2), iVar2 == 8)) ||
     ((iVar2 = CUser::get_state((CUser *)param_2), iVar2 == 10 ||
      (iVar2 = CUser::get_state((CUser *)param_2), iVar2 == 0xc)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 0x13;
  }
  iVar2 = CUser::GetParty((CUser *)param_2);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0xcd8) == 1) {
      return 0x13;
    }
    if ((*(int *)(iVar2 + 0xcac) != 0) && (*(char *)(*(int *)(iVar2 + 0xcac) + 0x89f) != '\0')) {
      return 0x13;
    }
  }
  return 0;
}

```

---

## process

```asm
// === 081c0e4a DisPatcher_UseEquip::process  [0x081c0e4a-0x81c0ee1] ===
 81c0e4a:	55                   	push   %ebp
 81c0e4b:	89 e5                	mov    %esp,%ebp
 81c0e4d:	53                   	push   %ebx
 81c0e4e:	83 ec 24             	sub    $0x24,%esp
 81c0e51:	8b 45 10             	mov    0x10(%ebp),%eax
 81c0e54:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c0e58:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c0e5b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c0e5f:	8b 45 08             	mov    0x8(%ebp),%eax
 81c0e62:	89 04 24             	mov    %eax,(%esp)
 81c0e65:	e8 78 00 00 00       	call   81c0ee2 <_ZN19DisPatcher_UseEquip11check_errorEP5CUserR8MSG_BASE>
 81c0e6a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81c0e6d:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81c0e71:	7e 24                	jle    81c0e97 <_ZN19DisPatcher_UseEquip7processEP5CUserR8MSG_BASER9ParamBase+0x4d>
 81c0e73:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c0e76:	0f b6 c0             	movzbl %al,%eax
 81c0e79:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c0e7d:	c7 44 24 04 33 00 00 	movl   $0x33,0x4(%esp)
 81c0e84:	00 
 81c0e85:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c0e88:	89 04 24             	mov    %eax,(%esp)
 81c0e8b:	e8 b2 b0 4b 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81c0e90:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81c0e95:	eb 45                	jmp    81c0edc <_ZN19DisPatcher_UseEquip7processEP5CUserR8MSG_BASER9ParamBase+0x92>
 81c0e97:	8b 45 14             	mov    0x14(%ebp),%eax
 81c0e9a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81c0e9d:	8b 45 10             	mov    0x10(%ebp),%eax
 81c0ea0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c0ea3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c0ea6:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c0eaa:	0f be d8             	movsbl %al,%ebx
 81c0ead:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c0eb0:	89 04 24             	mov    %eax,(%esp)
 81c0eb3:	e8 d6 93 f1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81c0eb8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c0ebc:	89 04 24             	mov    %eax,(%esp)
 81c0ebf:	e8 9e e8 33 00       	call   84ff762 <_ZN10CInventory9use_equipEi>
 81c0ec4:	89 c2                	mov    %eax,%edx
 81c0ec6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c0ec9:	89 50 04             	mov    %edx,0x4(%eax)
 81c0ecc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c0ecf:	0f b6 50 0d          	movzbl 0xd(%eax),%edx
 81c0ed3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c0ed6:	88 50 08             	mov    %dl,0x8(%eax)
 81c0ed9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c0edc:	83 c4 24             	add    $0x24,%esp
 81c0edf:	5b                   	pop    %ebx
 81c0ee0:	5d                   	pop    %ebp
 81c0ee1:	c3                   	ret

```

```c
// DisPatcher_UseEquip::process @ 0x81c0e4a

/* DisPatcher_UseEquip::process(CUser*, MSG_BASE&, ParamBase&) */

uint __thiscall
DisPatcher_UseEquip::process
          (DisPatcher_UseEquip *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  MSG_BASE MVar1;
  uint uVar2;
  CInventory *this_00;
  undefined4 uVar3;
  
  uVar2 = check_error((CUser *)this,(MSG_BASE *)param_1);
  if ((int)uVar2 < 1) {
    MVar1 = param_2[0xd];
    this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    uVar3 = CInventory::use_equip(this_00,(int)(char)MVar1);
    *(undefined4 *)(param_3 + 4) = uVar3;
    *(MSG_BASE *)(param_3 + 8) = param_2[0xd];
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x33,uVar2 & 0xff);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

```

---

## read

```asm
// === 081c0dfa DisPatcher_UseEquip::read  [0x081c0dfa-0x81c0e49] ===
 81c0dfa:	55                   	push   %ebp
 81c0dfb:	89 e5                	mov    %esp,%ebp
 81c0dfd:	83 ec 18             	sub    $0x18,%esp
 81c0e00:	8b 45 10             	mov    0x10(%ebp),%eax
 81c0e03:	83 c0 0d             	add    $0xd,%eax
 81c0e06:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c0e0a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c0e0d:	89 04 24             	mov    %eax,(%esp)
 81c0e10:	e8 0d c1 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81c0e15:	83 f0 01             	xor    $0x1,%eax
 81c0e18:	84 c0                	test   %al,%al
 81c0e1a:	74 26                	je     81c0e42 <_ZN19DisPatcher_UseEquip4readER9PacketBufR8MSG_BASE+0x48>
 81c0e1c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c0e23:	00 
 81c0e24:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c0e2b:	00 
 81c0e2c:	c7 44 24 04 60 60 bd 	movl   $0x8bd6060,0x4(%esp)
 81c0e33:	08 
 81c0e34:	c7 04 24 d0 09 00 00 	movl   $0x9d0,(%esp)
 81c0e3b:	e8 97 fa 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c0e40:	eb 05                	jmp    81c0e47 <_ZN19DisPatcher_UseEquip4readER9PacketBufR8MSG_BASE+0x4d>
 81c0e42:	b8 00 00 00 00       	mov    $0x0,%eax
 81c0e47:	c9                   	leave
 81c0e48:	c3                   	ret
 81c0e49:	90                   	nop

```

```c
// DisPatcher_UseEquip::read @ 0x81c0dfa

/* DisPatcher_UseEquip::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_UseEquip::read(DisPatcher_UseEquip *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x9d0,"virtual int DisPatcher_UseEquip::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081c0fac DisPatcher_UseEquip::send  [0x081c0fac-0x81c1093] ===
 81c0fac:	55                   	push   %ebp
 81c0fad:	89 e5                	mov    %esp,%ebp
 81c0faf:	56                   	push   %esi
 81c0fb0:	53                   	push   %ebx
 81c0fb1:	83 ec 20             	sub    $0x20,%esp
 81c0fb4:	8b 45 10             	mov    0x10(%ebp),%eax
 81c0fb7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c0fba:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c0fbd:	89 04 24             	mov    %eax,(%esp)
 81c0fc0:	e8 87 cd 3c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81c0fc5:	c7 44 24 08 33 00 00 	movl   $0x33,0x8(%esp)
 81c0fcc:	00 
 81c0fcd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c0fd4:	00 
 81c0fd5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c0fd8:	89 04 24             	mov    %eax,(%esp)
 81c0fdb:	e8 1c a9 f0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81c0fe0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c0fe3:	8b 40 04             	mov    0x4(%eax),%eax
 81c0fe6:	85 c0                	test   %eax,%eax
 81c0fe8:	74 2a                	je     81c1014 <_ZN19DisPatcher_UseEquip4sendEP5CUserR9ParamBase+0x68>
 81c0fea:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c0ff1:	00 
 81c0ff2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c0ff5:	89 04 24             	mov    %eax,(%esp)
 81c0ff8:	e8 23 a9 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c0ffd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c1000:	8b 40 04             	mov    0x4(%eax),%eax
 81c1003:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c1007:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c100a:	89 04 24             	mov    %eax,(%esp)
 81c100d:	e8 0e a9 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c1012:	eb 2c                	jmp    81c1040 <_ZN19DisPatcher_UseEquip4sendEP5CUserR9ParamBase+0x94>
 81c1014:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c101b:	00 
 81c101c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c101f:	89 04 24             	mov    %eax,(%esp)
 81c1022:	e8 f9 a8 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c1027:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c102a:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 81c102e:	0f be c0             	movsbl %al,%eax
 81c1031:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c1035:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c1038:	89 04 24             	mov    %eax,(%esp)
 81c103b:	e8 e0 a8 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c1040:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c1047:	00 
 81c1048:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c104b:	89 04 24             	mov    %eax,(%esp)
 81c104e:	e8 05 a9 f0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81c1053:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c1056:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c105a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c105d:	89 04 24             	mov    %eax,(%esp)
 81c1060:	e8 55 75 48 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81c1065:	eb 1b                	jmp    81c1082 <_ZN19DisPatcher_UseEquip4sendEP5CUserR9ParamBase+0xd6>
 81c1067:	89 d3                	mov    %edx,%ebx
 81c1069:	89 c6                	mov    %eax,%esi
 81c106b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c106e:	89 04 24             	mov    %eax,(%esp)
 81c1071:	e8 0a ce 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c1076:	89 f0                	mov    %esi,%eax
 81c1078:	89 da                	mov    %ebx,%edx
 81c107a:	89 04 24             	mov    %eax,(%esp)
 81c107d:	e8 ce 26 92 00       	call   8ae3750 <_Unwind_Resume>
 81c1082:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c1085:	89 04 24             	mov    %eax,(%esp)
 81c1088:	e8 f3 cd 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c108d:	83 c4 20             	add    $0x20,%esp
 81c1090:	5b                   	pop    %ebx
 81c1091:	5e                   	pop    %esi
 81c1092:	5d                   	pop    %ebp
 81c1093:	c3                   	ret

```

```c
// DisPatcher_UseEquip::send @ 0x81c0fac

/* DisPatcher_UseEquip::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_UseEquip::send(DisPatcher_UseEquip *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081c0fdb to 081c1064 has its CatchHandler @ 081c1067 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x33);
  if (*(int *)(local_10 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[8]);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 4));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

