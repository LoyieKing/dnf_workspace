# game_master__CLinkSystem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084abdd0 game_master::CLinkSystem::execute  [0x084abdd0-0x84abf2b] ===
 84abdd0:	55                   	push   %ebp
 84abdd1:	89 e5                	mov    %esp,%ebp
 84abdd3:	56                   	push   %esi
 84abdd4:	53                   	push   %ebx
 84abdd5:	83 ec 20             	sub    $0x20,%esp
 84abdd8:	8d 45 f6             	lea    -0xa(%ebp),%eax
 84abddb:	89 04 24             	mov    %eax,(%esp)
 84abdde:	e8 ed 42 23 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 84abde3:	8d 45 f6             	lea    -0xa(%ebp),%eax
 84abde6:	89 44 24 08          	mov    %eax,0x8(%esp)
 84abdea:	c7 44 24 04 bc fc c7 	movl   $0x8c7fcbc,0x4(%esp)
 84abdf1:	08 
 84abdf2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84abdf5:	89 04 24             	mov    %eax,(%esp)
 84abdf8:	e8 33 b8 25 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 84abdfd:	eb 1b                	jmp    84abe1a <_ZN11game_master11CLinkSystem7executeEv+0x4a>
 84abdff:	89 d3                	mov    %edx,%ebx
 84abe01:	89 c6                	mov    %eax,%esi
 84abe03:	8d 45 f6             	lea    -0xa(%ebp),%eax
 84abe06:	89 04 24             	mov    %eax,(%esp)
 84abe09:	e8 e2 42 23 00       	call   86e00f0 <_ZNSaIcED1Ev>
 84abe0e:	89 f0                	mov    %esi,%eax
 84abe10:	89 da                	mov    %ebx,%edx
 84abe12:	89 04 24             	mov    %eax,(%esp)
 84abe15:	e8 36 79 63 00       	call   8ae3750 <_Unwind_Resume>
 84abe1a:	8d 45 f6             	lea    -0xa(%ebp),%eax
 84abe1d:	89 04 24             	mov    %eax,(%esp)
 84abe20:	e8 cb 42 23 00       	call   86e00f0 <_ZNSaIcED1Ev>
 84abe25:	8b 45 08             	mov    0x8(%ebp),%eax
 84abe28:	8b 40 04             	mov    0x4(%eax),%eax
 84abe2b:	83 c0 0c             	add    $0xc,%eax
 84abe2e:	89 04 24             	mov    %eax,(%esp)
 84abe31:	e8 32 32 df ff       	call   829f068 <_Z4trimRSs>
 84abe36:	8b 45 08             	mov    0x8(%ebp),%eax
 84abe39:	8b 40 04             	mov    0x4(%eax),%eax
 84abe3c:	83 c0 0c             	add    $0xc,%eax
 84abe3f:	89 04 24             	mov    %eax,(%esp)
 84abe42:	e8 a9 a6 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84abe47:	89 04 24             	mov    %eax,(%esp)
 84abe4a:	e8 a1 28 bd ff       	call   807e6f0 <atoi@plt>
 84abe4f:	88 45 f7             	mov    %al,-0x9(%ebp)
 84abe52:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
 84abe56:	85 c0                	test   %eax,%eax
 84abe58:	74 0a                	je     84abe64 <_ZN11game_master11CLinkSystem7executeEv+0x94>
 84abe5a:	83 f8 01             	cmp    $0x1,%eax
 84abe5d:	74 44                	je     84abea3 <_ZN11game_master11CLinkSystem7executeEv+0xd3>
 84abe5f:	e9 9b 00 00 00       	jmp    84abeff <_ZN11game_master11CLinkSystem7executeEv+0x12f>
 84abe64:	e8 32 03 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84abe69:	83 c0 68             	add    $0x68,%eax
 84abe6c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84abe73:	00 
 84abe74:	c7 44 24 04 ff 2a 00 	movl   $0x2aff,0x4(%esp)
 84abe7b:	00 
 84abe7c:	89 04 24             	mov    %eax,(%esp)
 84abe7f:	e8 08 c8 db ff       	call   826868c <_ZN21ServerParameterScript14setDungeonOpenEib>
 84abe84:	e8 1e e5 c2 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84abe89:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84abe90:	00 
 84abe91:	c7 44 24 04 ff 2a 00 	movl   $0x2aff,0x4(%esp)
 84abe98:	00 
 84abe99:	89 04 24             	mov    %eax,(%esp)
 84abe9c:	e8 ad cf 21 00       	call   86c8e4e <_ZN9GameWorld30send_all_dungeon_inout_messageEib>
 84abea1:	eb 5c                	jmp    84abeff <_ZN11game_master11CLinkSystem7executeEv+0x12f>
 84abea3:	e8 f3 02 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84abea8:	83 c0 68             	add    $0x68,%eax
 84abeab:	c7 44 24 04 ff 2a 00 	movl   $0x2aff,0x4(%esp)
 84abeb2:	00 
 84abeb3:	89 04 24             	mov    %eax,(%esp)
 84abeb6:	e8 41 c9 db ff       	call   82687fc <_ZN21ServerParameterScript13isDungeonOpenEi>
 84abebb:	83 f0 01             	xor    $0x1,%eax
 84abebe:	84 c0                	test   %al,%al
 84abec0:	74 3d                	je     84abeff <_ZN11game_master11CLinkSystem7executeEv+0x12f>
 84abec2:	e8 d4 02 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84abec7:	83 c0 68             	add    $0x68,%eax
 84abeca:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84abed1:	00 
 84abed2:	c7 44 24 04 ff 2a 00 	movl   $0x2aff,0x4(%esp)
 84abed9:	00 
 84abeda:	89 04 24             	mov    %eax,(%esp)
 84abedd:	e8 aa c7 db ff       	call   826868c <_ZN21ServerParameterScript14setDungeonOpenEib>
 84abee2:	e8 c0 e4 c2 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84abee7:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84abeee:	00 
 84abeef:	c7 44 24 04 ff 2a 00 	movl   $0x2aff,0x4(%esp)
 84abef6:	00 
 84abef7:	89 04 24             	mov    %eax,(%esp)
 84abefa:	e8 4f cf 21 00       	call   86c8e4e <_ZN9GameWorld30send_all_dungeon_inout_messageEib>
 84abeff:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84abf02:	89 04 24             	mov    %eax,(%esp)
 84abf05:	e8 d6 bc 25 00       	call   8707be0 <_ZNSsD1Ev>
 84abf0a:	83 c4 20             	add    $0x20,%esp
 84abf0d:	5b                   	pop    %ebx
 84abf0e:	5e                   	pop    %esi
 84abf0f:	5d                   	pop    %ebp
 84abf10:	c3                   	ret
 84abf11:	89 d3                	mov    %edx,%ebx
 84abf13:	89 c6                	mov    %eax,%esi
 84abf15:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84abf18:	89 04 24             	mov    %eax,(%esp)
 84abf1b:	e8 c0 bc 25 00       	call   8707be0 <_ZNSsD1Ev>
 84abf20:	89 f0                	mov    %esi,%eax
 84abf22:	89 da                	mov    %ebx,%edx
 84abf24:	89 04 24             	mov    %eax,(%esp)
 84abf27:	e8 24 78 63 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// game_master::CLinkSystem::execute @ 0x84abdd0

/* game_master::CLinkSystem::execute() */

void __thiscall game_master::CLinkSystem::execute(CLinkSystem *this)

{
  char cVar1;
  char *__nptr;
  int iVar2;
  GameWorld *pGVar3;
  string local_14 [6];
  allocator<char> local_e;
  char local_d;
  
  std::allocator<char>::allocator();
                    /* try { // try from 084abdf8 to 084abdfc has its CatchHandler @ 084abdff */
  std::string::string(local_14,"gm Link Charac : ",(allocator *)&local_e);
  std::allocator<char>::~allocator(&local_e);
                    /* try { // try from 084abe31 to 084abefe has its CatchHandler @ 084abf11 */
  trim((string *)(*(int *)(this + 4) + 0xc));
  __nptr = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
  iVar2 = atoi(__nptr);
  local_d = (char)iVar2;
  if (local_d == '\0') {
    iVar2 = G_CDataManager();
    ServerParameterScript::setDungeonOpen((ServerParameterScript *)(iVar2 + 0x68),0x2aff,false);
    pGVar3 = (GameWorld *)G_GameWorld();
    GameWorld::send_all_dungeon_inout_message(pGVar3,0x2aff,false);
  }
  else if (local_d == '\x01') {
    iVar2 = G_CDataManager();
    cVar1 = ServerParameterScript::isDungeonOpen(iVar2 + 0x68);
    if (cVar1 != '\x01') {
      iVar2 = G_CDataManager();
      ServerParameterScript::setDungeonOpen((ServerParameterScript *)(iVar2 + 0x68),0x2aff,true);
      pGVar3 = (GameWorld *)G_GameWorld();
      GameWorld::send_all_dungeon_inout_message(pGVar3,0x2aff,true);
    }
  }
  std::string::~string(local_14);
  return;
}

```

