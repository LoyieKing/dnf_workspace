# Dispatcher_VerifyCreatureQuest

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## process

```asm
// === 081e324c Dispatcher_VerifyCreatureQuest::process  [0x081e324c-0x81e329d] ===
 81e324c:	55                   	push   %ebp
 81e324d:	89 e5                	mov    %esp,%ebp
 81e324f:	83 ec 18             	sub    $0x18,%esp
 81e3252:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81e3256:	75 07                	jne    81e325f <_ZN30Dispatcher_VerifyCreatureQuest7processEP5CUserR8MSG_BASER9ParamBase+0x13>
 81e3258:	b8 00 00 00 00       	mov    $0x0,%eax
 81e325d:	eb 3c                	jmp    81e329b <_ZN30Dispatcher_VerifyCreatureQuest7processEP5CUserR8MSG_BASER9ParamBase+0x4f>
 81e325f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e3262:	89 04 24             	mov    %eax,(%esp)
 81e3265:	e8 22 71 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e326a:	83 f8 02             	cmp    $0x2,%eax
 81e326d:	0f 9e c0             	setle  %al
 81e3270:	84 c0                	test   %al,%al
 81e3272:	74 07                	je     81e327b <_ZN30Dispatcher_VerifyCreatureQuest7processEP5CUserR8MSG_BASER9ParamBase+0x2f>
 81e3274:	b8 00 00 00 00       	mov    $0x0,%eax
 81e3279:	eb 20                	jmp    81e329b <_ZN30Dispatcher_VerifyCreatureQuest7processEP5CUserR8MSG_BASER9ParamBase+0x4f>
 81e327b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e327e:	89 04 24             	mov    %eax,(%esp)
 81e3281:	e8 f8 6f ef ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81e3286:	89 04 24             	mov    %eax,(%esp)
 81e3289:	e8 7a 41 fd ff       	call   81b7408 <_ZNK10CInventory15GetCreatureMgrREv>
 81e328e:	89 04 24             	mov    %eax,(%esp)
 81e3291:	e8 64 a4 15 00       	call   833d6fa <_ZNK13user_creature12CCreatureMgr26VerifyEquipedCreatureQuestEv>
 81e3296:	b8 00 00 00 00       	mov    $0x0,%eax
 81e329b:	c9                   	leave
 81e329c:	c3                   	ret
 81e329d:	90                   	nop

```

```c
// Dispatcher_VerifyCreatureQuest::process @ 0x81e324c

/* Dispatcher_VerifyCreatureQuest::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_VerifyCreatureQuest::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  CInventory *this;
  CCreatureMgr *this_00;
  
  if ((param_2 != (MSG_BASE *)0x0) && (iVar1 = CUser::get_state((CUser *)param_2), 2 < iVar1)) {
    this = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
    this_00 = (CCreatureMgr *)CInventory::GetCreatureMgrR(this);
    user_creature::CCreatureMgr::VerifyEquipedCreatureQuest(this_00);
  }
  return 0;
}

```

---

## read

```asm
// === 081e3242 Dispatcher_VerifyCreatureQuest::read  [0x081e3242-0x81e324b] ===
 81e3242:	55                   	push   %ebp
 81e3243:	89 e5                	mov    %esp,%ebp
 81e3245:	b8 00 00 00 00       	mov    $0x0,%eax
 81e324a:	5d                   	pop    %ebp
 81e324b:	c3                   	ret

```

```c
// Dispatcher_VerifyCreatureQuest::read @ 0x81e3242

/* Dispatcher_VerifyCreatureQuest::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_VerifyCreatureQuest::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

