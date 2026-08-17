# game_master__CPvPStartCmd

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084a8f6a game_master::CPvPStartCmd::execute  [0x084a8f6a-0x84a8ff5] ===
 84a8f6a:	55                   	push   %ebp
 84a8f6b:	89 e5                	mov    %esp,%ebp
 84a8f6d:	53                   	push   %ebx
 84a8f6e:	83 ec 34             	sub    $0x34,%esp
 84a8f71:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8f74:	89 04 24             	mov    %eax,(%esp)
 84a8f77:	e8 3e b0 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a8f7c:	89 04 24             	mov    %eax,(%esp)
 84a8f7f:	e8 0a c2 1a 00       	call   865518e <_ZN5CUser10GetPVPRoomEv>
 84a8f84:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a8f87:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84a8f8b:	75 2e                	jne    84a8fbb <_ZN11game_master12CPvPStartCmd7executeEv+0x51>
 84a8f8d:	c7 44 24 10 74 fa c7 	movl   $0x8c7fa74,0x10(%esp)
 84a8f94:	08 
 84a8f95:	c7 44 24 0c 69 01 00 	movl   $0x169,0xc(%esp)
 84a8f9c:	00 
 84a8f9d:	c7 44 24 08 40 14 c8 	movl   $0x8c81440,0x8(%esp)
 84a8fa4:	08 
 84a8fa5:	c7 44 24 04 63 fa c7 	movl   $0x8c7fa63,0x4(%esp)
 84a8fac:	08 
 84a8fad:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84a8fb4:	e8 51 ac 62 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84a8fb9:	eb 34                	jmp    84a8fef <_ZN11game_master12CPvPStartCmd7executeEv+0x85>
 84a8fbb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a8fbe:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 84a8fc4:	8b 00                	mov    (%eax),%eax
 84a8fc6:	83 c0 30             	add    $0x30,%eax
 84a8fc9:	8b 18                	mov    (%eax),%ebx
 84a8fcb:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8fce:	89 04 24             	mov    %eax,(%esp)
 84a8fd1:	e8 e4 af 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a8fd6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84a8fd9:	8b 92 e4 06 00 00    	mov    0x6e4(%edx),%edx
 84a8fdf:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 84a8fe2:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84a8fe6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a8fea:	89 14 24             	mov    %edx,(%esp)
 84a8fed:	ff d3                	call   *%ebx
 84a8fef:	83 c4 34             	add    $0x34,%esp
 84a8ff2:	5b                   	pop    %ebx
 84a8ff3:	5d                   	pop    %ebp
 84a8ff4:	c3                   	ret
 84a8ff5:	90                   	nop

```

```c
// game_master::CPvPStartCmd::execute @ 0x84a8f6a

/* game_master::CPvPStartCmd::execute() */

void __thiscall game_master::CPvPStartCmd::execute(CPvPStartCmd *this)

{
  code *pcVar1;
  CUser *this_00;
  int iVar2;
  undefined4 uVar3;
  
  this_00 = (CUser *)CCommand::GetUser((CCommand *)this);
  iVar2 = CUser::GetPVPRoom(this_00);
  if (iVar2 == 0) {
    LogManager::logFormat
              (1,"GameMaster.cpp","virtual void game_master::CPvPStartCmd::execute()",0x169,
               "PVPRoom pRoom is NULL");
  }
  else {
    pcVar1 = *(code **)(**(int **)(iVar2 + 0x6e4) + 0x30);
    uVar3 = CCommand::GetUser((CCommand *)this);
    (*pcVar1)(*(undefined4 *)(iVar2 + 0x6e4),uVar3,iVar2);
  }
  return;
}

```

