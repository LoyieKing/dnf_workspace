# game_master__CItemDropRateCmd

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084a9002 game_master::CItemDropRateCmd::execute  [0x084a9002-0x84a905d] ===
 84a9002:	55                   	push   %ebp
 84a9003:	89 e5                	mov    %esp,%ebp
 84a9005:	83 ec 18             	sub    $0x18,%esp
 84a9008:	b8 40 dc 43 09       	mov    $0x943dc40,%eax
 84a900d:	0f b6 00             	movzbl (%eax),%eax
 84a9010:	84 c0                	test   %al,%al
 84a9012:	75 2d                	jne    84a9041 <_ZN11game_master16CItemDropRateCmd7executeEv+0x3f>
 84a9014:	c7 04 24 40 dc 43 09 	movl   $0x943dc40,(%esp)
 84a901b:	e8 10 c3 27 00       	call   8725330 <__cxa_guard_acquire>
 84a9020:	85 c0                	test   %eax,%eax
 84a9022:	0f 95 c0             	setne  %al
 84a9025:	84 c0                	test   %al,%al
 84a9027:	74 18                	je     84a9041 <_ZN11game_master16CItemDropRateCmd7executeEv+0x3f>
 84a9029:	c7 04 24 48 dc 43 09 	movl   $0x943dc48,(%esp)
 84a9030:	e8 ff b3 00 00       	call   84b4434 <_ZN32CGameMasterCharacterItemDropRateC1Ev>
 84a9035:	c7 04 24 40 dc 43 09 	movl   $0x943dc40,(%esp)
 84a903c:	e8 0f c2 27 00       	call   8725250 <__cxa_guard_release>
 84a9041:	8b 45 08             	mov    0x8(%ebp),%eax
 84a9044:	89 04 24             	mov    %eax,(%esp)
 84a9047:	e8 6e af 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a904c:	c7 44 24 04 48 dc 43 	movl   $0x943dc48,0x4(%esp)
 84a9053:	09 
 84a9054:	89 04 24             	mov    %eax,(%esp)
 84a9057:	e8 c2 b2 00 00       	call   84b431e <_ZN5CUser22SetGameMasterCharacterEP20CGameMasterCharacter>
 84a905c:	c9                   	leave
 84a905d:	c3                   	ret

```

```c
// game_master::CItemDropRateCmd::execute @ 0x84a9002

/* game_master::CItemDropRateCmd::execute() */

void __thiscall game_master::CItemDropRateCmd::execute(CItemDropRateCmd *this)

{
  int iVar1;
  CUser *this_00;
  
  if (execute()::gameMasterCharacter == '\0') {
    iVar1 = __cxa_guard_acquire(&execute()::gameMasterCharacter);
    if (iVar1 != 0) {
      CGameMasterCharacterItemDropRate::CGameMasterCharacterItemDropRate
                ((CGameMasterCharacterItemDropRate *)&execute()::gameMasterCharacter);
      __cxa_guard_release(&execute()::gameMasterCharacter);
    }
  }
  this_00 = (CUser *)CCommand::GetUser((CCommand *)this);
  CUser::SetGameMasterCharacter(this_00,(CGameMasterCharacter *)&execute()::gameMasterCharacter);
  return;
}

```

