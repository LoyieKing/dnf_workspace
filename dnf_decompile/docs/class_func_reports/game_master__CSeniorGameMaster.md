# game_master__CSeniorGameMaster

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## HandleRequest

```asm
// === 084a8c44 game_master::CSeniorGameMaster::HandleRequest  [0x084a8c44-0x84a8c6d] ===
 84a8c44:	55                   	push   %ebp
 84a8c45:	89 e5                	mov    %esp,%ebp
 84a8c47:	83 ec 18             	sub    $0x18,%esp
 84a8c4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a8c4d:	8b 00                	mov    (%eax),%eax
 84a8c4f:	83 c0 0c             	add    $0xc,%eax
 84a8c52:	8b 10                	mov    (%eax),%edx
 84a8c54:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a8c57:	89 04 24             	mov    %eax,(%esp)
 84a8c5a:	ff d2                	call   *%edx
 84a8c5c:	84 c0                	test   %al,%al
 84a8c5e:	74 0b                	je     84a8c6b <_ZN11game_master17CSeniorGameMaster13HandleRequestEPNS_8CCommandE+0x27>
 84a8c60:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a8c63:	89 04 24             	mov    %eax,(%esp)
 84a8c66:	e8 25 b3 00 00       	call   84b3f90 <_ZN11game_master8CCommand15executeTemplateEv>
 84a8c6b:	c9                   	leave
 84a8c6c:	c3                   	ret
 84a8c6d:	90                   	nop

```

```c
// game_master::CSeniorGameMaster::HandleRequest @ 0x84a8c44

/* game_master::CSeniorGameMaster::HandleRequest(game_master::CCommand*) */

void __thiscall
game_master::CSeniorGameMaster::HandleRequest(CSeniorGameMaster *this,CCommand *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)param_1 + 0xc))(param_1);
  if (cVar1 != '\0') {
    CCommand::executeTemplate(param_1);
  }
  return;
}

```

