# StrikerSkillAddCommand

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## setType

```asm
// === 08a9d7cc StrikerSkillAddCommand::setType  [0x08a9d7cc-0x8a9d7eb] ===
 8a9d7cc:	55                   	push   %ebp
 8a9d7cd:	89 e5                	mov    %esp,%ebp
 8a9d7cf:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8a9d7d3:	78 11                	js     8a9d7e6 <_ZN22StrikerSkillAddCommand7setTypeEi+0x1a>
 8a9d7d5:	83 7d 0c 08          	cmpl   $0x8,0xc(%ebp)
 8a9d7d9:	7f 0e                	jg     8a9d7e9 <_ZN22StrikerSkillAddCommand7setTypeEi+0x1d>
 8a9d7db:	8b 55 0c             	mov    0xc(%ebp),%edx
 8a9d7de:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9d7e1:	89 50 08             	mov    %edx,0x8(%eax)
 8a9d7e4:	eb 04                	jmp    8a9d7ea <_ZN22StrikerSkillAddCommand7setTypeEi+0x1e>
 8a9d7e6:	90                   	nop
 8a9d7e7:	eb 01                	jmp    8a9d7ea <_ZN22StrikerSkillAddCommand7setTypeEi+0x1e>
 8a9d7e9:	90                   	nop
 8a9d7ea:	5d                   	pop    %ebp
 8a9d7eb:	c3                   	ret

```

```c
// StrikerSkillAddCommand::setType @ 0x8a9d7cc

/* StrikerSkillAddCommand::setType(int) */

void __thiscall StrikerSkillAddCommand::setType(StrikerSkillAddCommand *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < 9)) {
    *(int *)(this + 8) = param_1;
  }
  return;
}

```

