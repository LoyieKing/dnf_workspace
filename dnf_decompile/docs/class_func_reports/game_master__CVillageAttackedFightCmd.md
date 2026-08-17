# game_master__CVillageAttackedFightCmd

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084aa1dc game_master::CVillageAttackedFightCmd::execute  [0x084aa1dc-0x84aa297] ===
 84aa1dc:	55                   	push   %ebp
 84aa1dd:	89 e5                	mov    %esp,%ebp
 84aa1df:	53                   	push   %ebx
 84aa1e0:	83 ec 24             	sub    $0x24,%esp
 84aa1e3:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa1e6:	89 04 24             	mov    %eax,(%esp)
 84aa1e9:	e8 cc 9d 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84aa1ee:	89 04 24             	mov    %eax,(%esp)
 84aa1f1:	e8 56 af 1a 00       	call   865514c <_ZN5CUser8GetPartyEv>
 84aa1f6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84aa1f9:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 84aa1fd:	75 30                	jne    84aa22f <_ZN11game_master24CVillageAttackedFightCmd7executeEv+0x53>
 84aa1ff:	e8 8a 1f c2 ff       	call   80cc18e <_Z14G_CGameManagerv>
 84aa204:	89 04 24             	mov    %eax,(%esp)
 84aa207:	e8 04 ac de ff       	call   8294e10 <_ZN12CGameManager8GetPartyEv>
 84aa20c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84aa20f:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 84aa213:	74 1a                	je     84aa22f <_ZN11game_master24CVillageAttackedFightCmd7executeEv+0x53>
 84aa215:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa218:	89 04 24             	mov    %eax,(%esp)
 84aa21b:	e8 9a 9d 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84aa220:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aa224:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84aa227:	89 04 24             	mov    %eax,(%esp)
 84aa22a:	e8 13 0f 0f 00       	call   859b142 <_ZN6CParty15set_single_playEP5CUser>
 84aa22f:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 84aa233:	74 5c                	je     84aa291 <_ZN11game_master24CVillageAttackedFightCmd7executeEv+0xb5>
 84aa235:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84aa23c:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa23f:	89 04 24             	mov    %eax,(%esp)
 84aa242:	e8 73 9d 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84aa247:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84aa24e:	00 
 84aa24f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aa253:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84aa256:	89 04 24             	mov    %eax,(%esp)
 84aa259:	e8 38 f3 10 00       	call   85b9596 <_ZN6CParty21OnFightVillageMonsterEP5CUseri>
 84aa25e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84aa261:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84aa265:	0f 95 c0             	setne  %al
 84aa268:	84 c0                	test   %al,%al
 84aa26a:	74 25                	je     84aa291 <_ZN11game_master24CVillageAttackedFightCmd7executeEv+0xb5>
 84aa26c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84aa26f:	0f b6 d8             	movzbl %al,%ebx
 84aa272:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa275:	89 04 24             	mov    %eax,(%esp)
 84aa278:	e8 3d 9d 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84aa27d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84aa281:	c7 44 24 04 0b 01 00 	movl   $0x10b,0x4(%esp)
 84aa288:	00 
 84aa289:	89 04 24             	mov    %eax,(%esp)
 84aa28c:	e8 b1 1c 1d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84aa291:	83 c4 24             	add    $0x24,%esp
 84aa294:	5b                   	pop    %ebx
 84aa295:	5d                   	pop    %ebp
 84aa296:	c3                   	ret
 84aa297:	90                   	nop

```

```c
// game_master::CVillageAttackedFightCmd::execute @ 0x84aa1dc

/* game_master::CVillageAttackedFightCmd::execute() */

void __thiscall game_master::CVillageAttackedFightCmd::execute(CVillageAttackedFightCmd *this)

{
  CUser *pCVar1;
  CGameManager *this_00;
  uint uVar2;
  undefined4 local_14;
  
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  local_14 = (CParty *)CUser::GetParty(pCVar1);
  if (local_14 == (CParty *)0x0) {
    this_00 = (CGameManager *)G_CGameManager();
    local_14 = (CParty *)CGameManager::GetParty(this_00);
    if (local_14 != (CParty *)0x0) {
      pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
      CParty::set_single_play(local_14,pCVar1);
    }
  }
  if (local_14 != (CParty *)0x0) {
    pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
    uVar2 = CParty::OnFightVillageMonster(local_14,pCVar1,0);
    if (uVar2 != 0) {
      pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
      CUser::SendCmdErrorPacket(pCVar1,0x10b,uVar2 & 0xff);
    }
  }
  return;
}

```

