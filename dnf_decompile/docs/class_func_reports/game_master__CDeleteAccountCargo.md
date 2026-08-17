# game_master__CDeleteAccountCargo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084abdb4 game_master::CDeleteAccountCargo::execute  [0x084abdb4-0x84abdcf] ===
 84abdb4:	55                   	push   %ebp
 84abdb5:	89 e5                	mov    %esp,%ebp
 84abdb7:	83 ec 18             	sub    $0x18,%esp
 84abdba:	8b 45 08             	mov    0x8(%ebp),%eax
 84abdbd:	89 04 24             	mov    %eax,(%esp)
 84abdc0:	e8 f5 81 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84abdc5:	89 04 24             	mov    %eax,(%esp)
 84abdc8:	e8 1f f7 dd ff       	call   828b4ec <_ZN13CAccountCargo18DeleteAccountCargoEP5CUser>
 84abdcd:	c9                   	leave
 84abdce:	c3                   	ret
 84abdcf:	90                   	nop

```

```c
// game_master::CDeleteAccountCargo::execute @ 0x84abdb4

/* game_master::CDeleteAccountCargo::execute() */

void __thiscall game_master::CDeleteAccountCargo::execute(CDeleteAccountCargo *this)

{
  CUser *pCVar1;
  
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  CAccountCargo::DeleteAccountCargo(pCVar1);
  return;
}

```

