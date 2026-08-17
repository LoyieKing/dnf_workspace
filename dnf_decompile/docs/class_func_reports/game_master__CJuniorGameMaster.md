# game_master__CJuniorGameMaster

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## HandleRequest

```asm
// === 084a8c06 game_master::CJuniorGameMaster::HandleRequest  [0x084a8c06-0x84a8c43] ===
 84a8c06:	55                   	push   %ebp
 84a8c07:	89 e5                	mov    %esp,%ebp
 84a8c09:	83 ec 18             	sub    $0x18,%esp
 84a8c0c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a8c0f:	8b 00                	mov    (%eax),%eax
 84a8c11:	83 c0 08             	add    $0x8,%eax
 84a8c14:	8b 10                	mov    (%eax),%edx
 84a8c16:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a8c19:	89 04 24             	mov    %eax,(%esp)
 84a8c1c:	ff d2                	call   *%edx
 84a8c1e:	84 c0                	test   %al,%al
 84a8c20:	74 0d                	je     84a8c2f <_ZN11game_master17CJuniorGameMaster13HandleRequestEPNS_8CCommandE+0x29>
 84a8c22:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a8c25:	89 04 24             	mov    %eax,(%esp)
 84a8c28:	e8 63 b3 00 00       	call   84b3f90 <_ZN11game_master8CCommand15executeTemplateEv>
 84a8c2d:	eb 12                	jmp    84a8c41 <_ZN11game_master17CJuniorGameMaster13HandleRequestEPNS_8CCommandE+0x3b>
 84a8c2f:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8c32:	8b 55 0c             	mov    0xc(%ebp),%edx
 84a8c35:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a8c39:	89 04 24             	mov    %eax,(%esp)
 84a8c3c:	e8 95 f2 df ff       	call   82a7ed6 <_ZN11game_master11IGameMaster13HandleRequestEPNS_8CCommandE>
 84a8c41:	c9                   	leave
 84a8c42:	c3                   	ret
 84a8c43:	90                   	nop

```

```c
// game_master::CJuniorGameMaster::HandleRequest @ 0x84a8c06

/* game_master::CJuniorGameMaster::HandleRequest(game_master::CCommand*) */

void __thiscall
game_master::CJuniorGameMaster::HandleRequest(CJuniorGameMaster *this,CCommand *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)param_1 + 8))(param_1);
  if (cVar1 == '\0') {
    IGameMaster::HandleRequest((IGameMaster *)this,param_1);
  }
  else {
    CCommand::executeTemplate(param_1);
  }
  return;
}

```

