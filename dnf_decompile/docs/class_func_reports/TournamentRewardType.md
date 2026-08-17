# TournamentRewardType

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## Clear

```asm
// === 08284750 TournamentRewardType::Clear  [0x08284750-0x828476f] ===
 8284750:	55                   	push   %ebp
 8284751:	89 e5                	mov    %esp,%ebp
 8284753:	8b 45 08             	mov    0x8(%ebp),%eax
 8284756:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%eax)
 828475c:	8b 45 08             	mov    0x8(%ebp),%eax
 828475f:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8284766:	8b 45 08             	mov    0x8(%ebp),%eax
 8284769:	c6 40 08 ff          	movb   $0xff,0x8(%eax)
 828476d:	5d                   	pop    %ebp
 828476e:	c3                   	ret
 828476f:	90                   	nop

```

```c
// TournamentRewardType::Clear @ 0x8284750

/* TournamentRewardType::Clear() */

void __thiscall TournamentRewardType::Clear(TournamentRewardType *this)

{
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 4) = 0;
  this[8] = (TournamentRewardType)0xff;
  return;
}

```

