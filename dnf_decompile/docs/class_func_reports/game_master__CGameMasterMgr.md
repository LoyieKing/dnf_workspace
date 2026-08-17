# game_master__CGameMasterMgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## GetCommand

```asm
// === 084a8c92 game_master::CGameMasterMgr::GetCommand  [0x084a8c92-0x84a8caf] ===
 84a8c92:	55                   	push   %ebp
 84a8c93:	89 e5                	mov    %esp,%ebp
 84a8c95:	83 ec 18             	sub    $0x18,%esp
 84a8c98:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8c9b:	8d 50 08             	lea    0x8(%eax),%edx
 84a8c9e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a8ca1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a8ca5:	89 14 24             	mov    %edx,(%esp)
 84a8ca8:	e8 1b b3 00 00       	call   84b3fc8 <_ZN11game_master11CCommandMap3getEi>
 84a8cad:	c9                   	leave
 84a8cae:	c3                   	ret
 84a8caf:	90                   	nop

```

```c
// game_master::CGameMasterMgr::GetCommand @ 0x84a8c92

/* game_master::CGameMasterMgr::GetCommand(int) */

void game_master::CGameMasterMgr::GetCommand(int param_1)

{
  CCommandMap::get(param_1 + 8);
  return;
}

```

---

## GetCommand_084a8cb0

```asm
// === 084a8cb0 game_master::CGameMasterMgr::GetCommand  [0x084a8cb0-0x84a8ccd] ===
 84a8cb0:	55                   	push   %ebp
 84a8cb1:	89 e5                	mov    %esp,%ebp
 84a8cb3:	83 ec 18             	sub    $0x18,%esp
 84a8cb6:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8cb9:	8d 50 08             	lea    0x8(%eax),%edx
 84a8cbc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a8cbf:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a8cc3:	89 14 24             	mov    %edx,(%esp)
 84a8cc6:	e8 61 b3 00 00       	call   84b402c <_ZN11game_master11CCommandMap3getERSs>
 84a8ccb:	c9                   	leave
 84a8ccc:	c3                   	ret
 84a8ccd:	90                   	nop

```

```c
// game_master::CGameMasterMgr::GetCommand @ 0x84a8cb0

/* game_master::CGameMasterMgr::GetCommand(std::string&) */

void game_master::CGameMasterMgr::GetCommand(string *param_1)

{
  CCommandMap::get(param_1 + 2);
  return;
}

```

---

## GetDispatcher

```asm
// === 084a8a9a game_master::CGameMasterMgr::GetDispatcher  [0x084a8a9a-0x84a8ab5] ===
 84a8a9a:	55                   	push   %ebp
 84a8a9b:	89 e5                	mov    %esp,%ebp
 84a8a9d:	83 ec 18             	sub    $0x18,%esp
 84a8aa0:	e8 99 ba d8 ff       	call   823453e <_Z18G_PacketDispatcherv>
 84a8aa5:	8b 55 08             	mov    0x8(%ebp),%edx
 84a8aa8:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a8aac:	89 04 24             	mov    %eax,(%esp)
 84a8aaf:	e8 2e be 0e 00       	call   85948e2 <_ZN16PacketDispatcher14get_dispatcherEi>
 84a8ab4:	c9                   	leave
 84a8ab5:	c3                   	ret

```

```c
// game_master::CGameMasterMgr::GetDispatcher @ 0x84a8a9a

/* game_master::CGameMasterMgr::GetDispatcher(int) */

void game_master::CGameMasterMgr::GetDispatcher(int param_1)

{
  PacketDispatcher *this;
  
  this = (PacketDispatcher *)G_PacketDispatcher();
  PacketDispatcher::get_dispatcher(this,param_1);
  return;
}

```

---

## HandleRequest

```asm
// === 084a8c6e game_master::CGameMasterMgr::HandleRequest  [0x084a8c6e-0x84a8c91] ===
 84a8c6e:	55                   	push   %ebp
 84a8c6f:	89 e5                	mov    %esp,%ebp
 84a8c71:	83 ec 18             	sub    $0x18,%esp
 84a8c74:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8c77:	8b 40 04             	mov    0x4(%eax),%eax
 84a8c7a:	8b 00                	mov    (%eax),%eax
 84a8c7c:	8b 08                	mov    (%eax),%ecx
 84a8c7e:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8c81:	8b 40 04             	mov    0x4(%eax),%eax
 84a8c84:	8b 55 0c             	mov    0xc(%ebp),%edx
 84a8c87:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a8c8b:	89 04 24             	mov    %eax,(%esp)
 84a8c8e:	ff d1                	call   *%ecx
 84a8c90:	c9                   	leave
 84a8c91:	c3                   	ret

```

```c
// game_master::CGameMasterMgr::HandleRequest @ 0x84a8c6e

/* game_master::CGameMasterMgr::HandleRequest(game_master::CCommand*) */

void __thiscall game_master::CGameMasterMgr::HandleRequest(CGameMasterMgr *this,CCommand *param_1)

{
  (**(code **)**(undefined4 **)(this + 4))(*(undefined4 *)(this + 4),param_1);
  return;
}

```

