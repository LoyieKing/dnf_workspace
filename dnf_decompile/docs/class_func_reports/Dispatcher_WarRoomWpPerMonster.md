# Dispatcher_WarRoomWpPerMonster

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081d5df2 Dispatcher_WarRoomWpPerMonster::check_error  [0x081d5df2-0x81d5e81] ===
 81d5df2:	55                   	push   %ebp
 81d5df3:	89 e5                	mov    %esp,%ebp
 81d5df5:	83 ec 18             	sub    $0x18,%esp
 81d5df8:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81d5dfc:	75 26                	jne    81d5e24 <_ZN30Dispatcher_WarRoomWpPerMonster11check_errorEP5CUserR8MSG_BASE+0x32>
 81d5dfe:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d5e05:	00 
 81d5e06:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d5e0d:	00 
 81d5e0e:	c7 44 24 04 20 2d bd 	movl   $0x8bd2d20,0x4(%esp)
 81d5e15:	08 
 81d5e16:	c7 04 24 af 39 00 00 	movl   $0x39af,(%esp)
 81d5e1d:	e8 b5 aa 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d5e22:	eb 5b                	jmp    81d5e7f <_ZN30Dispatcher_WarRoomWpPerMonster11check_errorEP5CUserR8MSG_BASE+0x8d>
 81d5e24:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5e27:	89 04 24             	mov    %eax,(%esp)
 81d5e2a:	e8 03 a6 f4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81d5e2f:	85 c0                	test   %eax,%eax
 81d5e31:	0f 94 c0             	sete   %al
 81d5e34:	84 c0                	test   %al,%al
 81d5e36:	74 26                	je     81d5e5e <_ZN30Dispatcher_WarRoomWpPerMonster11check_errorEP5CUserR8MSG_BASE+0x6c>
 81d5e38:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d5e3f:	00 
 81d5e40:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d5e47:	00 
 81d5e48:	c7 44 24 04 20 2d bd 	movl   $0x8bd2d20,0x4(%esp)
 81d5e4f:	08 
 81d5e50:	c7 04 24 b2 39 00 00 	movl   $0x39b2,(%esp)
 81d5e57:	e8 7b aa 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d5e5c:	eb 21                	jmp    81d5e7f <_ZN30Dispatcher_WarRoomWpPerMonster11check_errorEP5CUserR8MSG_BASE+0x8d>
 81d5e5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5e61:	89 04 24             	mov    %eax,(%esp)
 81d5e64:	e8 23 45 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d5e69:	83 f8 08             	cmp    $0x8,%eax
 81d5e6c:	0f 95 c0             	setne  %al
 81d5e6f:	84 c0                	test   %al,%al
 81d5e71:	74 07                	je     81d5e7a <_ZN30Dispatcher_WarRoomWpPerMonster11check_errorEP5CUserR8MSG_BASE+0x88>
 81d5e73:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81d5e78:	eb 05                	jmp    81d5e7f <_ZN30Dispatcher_WarRoomWpPerMonster11check_errorEP5CUserR8MSG_BASE+0x8d>
 81d5e7a:	b8 00 00 00 00       	mov    $0x0,%eax
 81d5e7f:	c9                   	leave
 81d5e80:	c3                   	ret
 81d5e81:	90                   	nop

```

```c
// Dispatcher_WarRoomWpPerMonster::check_error @ 0x81d5df2

/* Dispatcher_WarRoomWpPerMonster::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_WarRoomWpPerMonster::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = LineFunc(0x39af,"int Dispatcher_WarRoomWpPerMonster::check_error(CUser*, MSG_BASE&)",0,0
                    );
  }
  else {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 == 0) {
      uVar1 = LineFunc(0x39b2,"int Dispatcher_WarRoomWpPerMonster::check_error(CUser*, MSG_BASE&)",0
                       ,0);
    }
    else {
      iVar2 = CUser::get_state((CUser *)param_2);
      if (iVar2 == 8) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0xffffffff;
      }
    }
  }
  return uVar1;
}

```

---

## process

```asm
// === 081d5ca8 Dispatcher_WarRoomWpPerMonster::process  [0x081d5ca8-0x81d5df1] ===
 81d5ca8:	55                   	push   %ebp
 81d5ca9:	89 e5                	mov    %esp,%ebp
 81d5cab:	53                   	push   %ebx
 81d5cac:	83 ec 44             	sub    $0x44,%esp
 81d5caf:	8b 45 10             	mov    0x10(%ebp),%eax
 81d5cb2:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d5cb6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5cb9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d5cbd:	8b 45 08             	mov    0x8(%ebp),%eax
 81d5cc0:	89 04 24             	mov    %eax,(%esp)
 81d5cc3:	e8 2a 01 00 00       	call   81d5df2 <_ZN30Dispatcher_WarRoomWpPerMonster11check_errorEP5CUserR8MSG_BASE>
 81d5cc8:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81d5ccb:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81d5ccf:	7e 08                	jle    81d5cd9 <_ZN30Dispatcher_WarRoomWpPerMonster7processEP5CUserR8MSG_BASER9ParamBase+0x31>
 81d5cd1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d5cd4:	e9 13 01 00 00       	jmp    81d5dec <_ZN30Dispatcher_WarRoomWpPerMonster7processEP5CUserR8MSG_BASER9ParamBase+0x144>
 81d5cd9:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81d5cdd:	79 0a                	jns    81d5ce9 <_ZN30Dispatcher_WarRoomWpPerMonster7processEP5CUserR8MSG_BASER9ParamBase+0x41>
 81d5cdf:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81d5ce4:	e9 03 01 00 00       	jmp    81d5dec <_ZN30Dispatcher_WarRoomWpPerMonster7processEP5CUserR8MSG_BASER9ParamBase+0x144>
 81d5ce9:	8b 45 10             	mov    0x10(%ebp),%eax
 81d5cec:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81d5cef:	8b 45 14             	mov    0x14(%ebp),%eax
 81d5cf2:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d5cf5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5cf8:	89 04 24             	mov    %eax,(%esp)
 81d5cfb:	e8 84 a1 05 00       	call   822fe84 <_ZN5CUser15GetWarRoomIndexEv>
 81d5d00:	0f bf d8             	movswl %ax,%ebx
 81d5d03:	e8 86 64 ef ff       	call   80cc18e <_Z14G_CGameManagerv>
 81d5d08:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d5d0c:	89 04 24             	mov    %eax,(%esp)
 81d5d0f:	e8 bc c8 0c 00       	call   82a25d0 <_ZN12CGameManager10GetWarRoomEi>
 81d5d14:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d5d17:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81d5d1b:	75 30                	jne    81d5d4d <_ZN30Dispatcher_WarRoomWpPerMonster7processEP5CUserR8MSG_BASER9ParamBase+0xa5>
 81d5d1d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5d20:	89 04 24             	mov    %eax,(%esp)
 81d5d23:	e8 46 46 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81d5d28:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d5d2c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d5d33:	00 
 81d5d34:	c7 44 24 04 80 2d bd 	movl   $0x8bd2d80,0x4(%esp)
 81d5d3b:	08 
 81d5d3c:	c7 04 24 99 39 00 00 	movl   $0x3999,(%esp)
 81d5d43:	e8 8f ab 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d5d48:	e9 9f 00 00 00       	jmp    81d5dec <_ZN30Dispatcher_WarRoomWpPerMonster7processEP5CUserR8MSG_BASER9ParamBase+0x144>
 81d5d4d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d5d50:	0f b7 40 15          	movzwl 0x15(%eax),%eax
 81d5d54:	66 83 f8 ff          	cmp    $0xffff,%ax
 81d5d58:	75 09                	jne    81d5d63 <_ZN30Dispatcher_WarRoomWpPerMonster7processEP5CUserR8MSG_BASER9ParamBase+0xbb>
 81d5d5a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81d5d61:	eb 51                	jmp    81d5db4 <_ZN30Dispatcher_WarRoomWpPerMonster7processEP5CUserR8MSG_BASER9ParamBase+0x10c>
 81d5d63:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d5d66:	0f b7 40 15          	movzwl 0x15(%eax),%eax
 81d5d6a:	0f b7 d8             	movzwl %ax,%ebx
 81d5d6d:	e8 35 46 f0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81d5d72:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d5d76:	89 04 24             	mov    %eax,(%esp)
 81d5d79:	e8 1e ee 4e 00       	call   86c4b9c <_ZN9GameWorld15find_from_worldEt>
 81d5d7e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d5d81:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81d5d85:	75 2d                	jne    81d5db4 <_ZN30Dispatcher_WarRoomWpPerMonster7processEP5CUserR8MSG_BASER9ParamBase+0x10c>
 81d5d87:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5d8a:	89 04 24             	mov    %eax,(%esp)
 81d5d8d:	e8 dc 45 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81d5d92:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d5d96:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d5d9d:	00 
 81d5d9e:	c7 44 24 04 80 2d bd 	movl   $0x8bd2d80,0x4(%esp)
 81d5da5:	08 
 81d5da6:	c7 04 24 a4 39 00 00 	movl   $0x39a4,(%esp)
 81d5dad:	e8 25 ab 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d5db2:	eb 38                	jmp    81d5dec <_ZN30Dispatcher_WarRoomWpPerMonster7processEP5CUserR8MSG_BASER9ParamBase+0x144>
 81d5db4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d5db7:	8b 50 11             	mov    0x11(%eax),%edx
 81d5dba:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d5dbd:	8b 40 0d             	mov    0xd(%eax),%eax
 81d5dc0:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 81d5dc3:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81d5dc7:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81d5dcb:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d5dcf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5dd2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d5dd6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d5dd9:	89 04 24             	mov    %eax,(%esp)
 81d5ddc:	e8 93 a7 4e 00       	call   86c0574 <_ZN7WarRoom18HandleWpPerMonsterEP5CUseriiS1_>
 81d5de1:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81d5de4:	89 42 04             	mov    %eax,0x4(%edx)
 81d5de7:	b8 00 00 00 00       	mov    $0x0,%eax
 81d5dec:	83 c4 44             	add    $0x44,%esp
 81d5def:	5b                   	pop    %ebx
 81d5df0:	5d                   	pop    %ebp
 81d5df1:	c3                   	ret

```

```c
// Dispatcher_WarRoomWpPerMonster::process @ 0x81d5ca8

/* Dispatcher_WarRoomWpPerMonster::process(CUser*, MSG_BASE&, ParamBase&) */

int __thiscall
Dispatcher_WarRoomWpPerMonster::process
          (Dispatcher_WarRoomWpPerMonster *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ushort uVar1;
  int iVar2;
  WarRoom *this_00;
  uint uVar3;
  GameWorld *this_01;
  undefined4 uVar4;
  CUser *local_10;
  
  iVar2 = check_error((CUser *)this,(MSG_BASE *)param_1);
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      iVar2 = -1;
    }
    else {
      CUser::GetWarRoomIndex(param_1);
      iVar2 = G_CGameManager();
      this_00 = (WarRoom *)CGameManager::GetWarRoom(iVar2);
      if (this_00 == (WarRoom *)0x0) {
        uVar3 = CUser::get_acc_id(param_1);
        iVar2 = LineFunc(0x3999,
                         "virtual int Dispatcher_WarRoomWpPerMonster::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0,uVar3);
      }
      else {
        if (*(short *)(param_2 + 0x15) == -1) {
          local_10 = (CUser *)0x0;
        }
        else {
          uVar1 = *(ushort *)(param_2 + 0x15);
          this_01 = (GameWorld *)G_GameWorld();
          local_10 = (CUser *)GameWorld::find_from_world(this_01,uVar1);
          if (local_10 == (CUser *)0x0) {
            uVar3 = CUser::get_acc_id(param_1);
            iVar2 = LineFunc(0x39a4,
                             "virtual int Dispatcher_WarRoomWpPerMonster::process(CUser*, MSG_BASE&, ParamBase&)"
                             ,0,uVar3);
            return iVar2;
          }
        }
        uVar4 = WarRoom::HandleWpPerMonster
                          (this_00,param_1,*(int *)(param_2 + 0xd),*(int *)(param_2 + 0x11),local_10
                          );
        *(undefined4 *)(param_3 + 4) = uVar4;
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}

```

---

## read

```asm
// === 081d5bcc Dispatcher_WarRoomWpPerMonster::read  [0x081d5bcc-0x81d5ca7] ===
 81d5bcc:	55                   	push   %ebp
 81d5bcd:	89 e5                	mov    %esp,%ebp
 81d5bcf:	83 ec 28             	sub    $0x28,%esp
 81d5bd2:	8b 45 10             	mov    0x10(%ebp),%eax
 81d5bd5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d5bd8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d5bdb:	83 c0 0d             	add    $0xd,%eax
 81d5bde:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d5be2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5be5:	89 04 24             	mov    %eax,(%esp)
 81d5be8:	e8 03 75 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81d5bed:	83 f0 01             	xor    $0x1,%eax
 81d5bf0:	84 c0                	test   %al,%al
 81d5bf2:	74 29                	je     81d5c1d <_ZN30Dispatcher_WarRoomWpPerMonster4readER9PacketBufR8MSG_BASE+0x51>
 81d5bf4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d5bfb:	00 
 81d5bfc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d5c03:	00 
 81d5c04:	c7 44 24 04 e0 2d bd 	movl   $0x8bd2de0,0x4(%esp)
 81d5c0b:	08 
 81d5c0c:	c7 04 24 7d 39 00 00 	movl   $0x397d,(%esp)
 81d5c13:	e8 bf ac 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d5c18:	e9 89 00 00 00       	jmp    81d5ca6 <_ZN30Dispatcher_WarRoomWpPerMonster4readER9PacketBufR8MSG_BASE+0xda>
 81d5c1d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d5c20:	83 c0 11             	add    $0x11,%eax
 81d5c23:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d5c27:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5c2a:	89 04 24             	mov    %eax,(%esp)
 81d5c2d:	e8 be 74 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81d5c32:	83 f0 01             	xor    $0x1,%eax
 81d5c35:	84 c0                	test   %al,%al
 81d5c37:	74 26                	je     81d5c5f <_ZN30Dispatcher_WarRoomWpPerMonster4readER9PacketBufR8MSG_BASE+0x93>
 81d5c39:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d5c40:	00 
 81d5c41:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d5c48:	00 
 81d5c49:	c7 44 24 04 e0 2d bd 	movl   $0x8bd2de0,0x4(%esp)
 81d5c50:	08 
 81d5c51:	c7 04 24 80 39 00 00 	movl   $0x3980,(%esp)
 81d5c58:	e8 7a ac 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d5c5d:	eb 47                	jmp    81d5ca6 <_ZN30Dispatcher_WarRoomWpPerMonster4readER9PacketBufR8MSG_BASE+0xda>
 81d5c5f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d5c62:	83 c0 15             	add    $0x15,%eax
 81d5c65:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d5c69:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5c6c:	89 04 24             	mov    %eax,(%esp)
 81d5c6f:	e8 3c 74 3b 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81d5c74:	83 f0 01             	xor    $0x1,%eax
 81d5c77:	84 c0                	test   %al,%al
 81d5c79:	74 26                	je     81d5ca1 <_ZN30Dispatcher_WarRoomWpPerMonster4readER9PacketBufR8MSG_BASE+0xd5>
 81d5c7b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d5c82:	00 
 81d5c83:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d5c8a:	00 
 81d5c8b:	c7 44 24 04 e0 2d bd 	movl   $0x8bd2de0,0x4(%esp)
 81d5c92:	08 
 81d5c93:	c7 04 24 83 39 00 00 	movl   $0x3983,(%esp)
 81d5c9a:	e8 38 ac 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d5c9f:	eb 05                	jmp    81d5ca6 <_ZN30Dispatcher_WarRoomWpPerMonster4readER9PacketBufR8MSG_BASE+0xda>
 81d5ca1:	b8 00 00 00 00       	mov    $0x0,%eax
 81d5ca6:	c9                   	leave
 81d5ca7:	c3                   	ret

```

```c
// Dispatcher_WarRoomWpPerMonster::read @ 0x81d5bcc

/* Dispatcher_WarRoomWpPerMonster::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_WarRoomWpPerMonster::read
          (Dispatcher_WarRoomWpPerMonster *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x11));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x15));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x3983,
                         "virtual int Dispatcher_WarRoomWpPerMonster::read(PacketBuf&, MSG_BASE&)",0
                         ,0);
      }
    }
    else {
      uVar2 = LineFunc(0x3980,
                       "virtual int Dispatcher_WarRoomWpPerMonster::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0x397d,
                     "virtual int Dispatcher_WarRoomWpPerMonster::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081d5e82 Dispatcher_WarRoomWpPerMonster::send  [0x081d5e82-0x81d5eb9] ===
 81d5e82:	55                   	push   %ebp
 81d5e83:	89 e5                	mov    %esp,%ebp
 81d5e85:	83 ec 28             	sub    $0x28,%esp
 81d5e88:	8b 45 10             	mov    0x10(%ebp),%eax
 81d5e8b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d5e8e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d5e91:	8b 40 04             	mov    0x4(%eax),%eax
 81d5e94:	85 c0                	test   %eax,%eax
 81d5e96:	74 20                	je     81d5eb8 <_ZN30Dispatcher_WarRoomWpPerMonster4sendEP5CUserR9ParamBase+0x36>
 81d5e98:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d5e9b:	8b 40 04             	mov    0x4(%eax),%eax
 81d5e9e:	0f b6 c0             	movzbl %al,%eax
 81d5ea1:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d5ea5:	c7 44 24 04 79 01 00 	movl   $0x179,0x4(%esp)
 81d5eac:	00 
 81d5ead:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5eb0:	89 04 24             	mov    %eax,(%esp)
 81d5eb3:	e8 8a 60 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d5eb8:	c9                   	leave
 81d5eb9:	c3                   	ret

```

```c
// Dispatcher_WarRoomWpPerMonster::send @ 0x81d5e82

/* Dispatcher_WarRoomWpPerMonster::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_WarRoomWpPerMonster::send
          (Dispatcher_WarRoomWpPerMonster *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    CUser::SendCmdErrorPacket(param_1,0x179,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

