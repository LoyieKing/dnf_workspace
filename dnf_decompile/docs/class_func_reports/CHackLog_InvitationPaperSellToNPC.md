# CHackLog_InvitationPaperSellToNPC

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## GetHackType

```asm
// === 08286714 CHackLog_InvitationPaperSellToNPC::GetHackType  [0x08286714-0x828671d] ===
 8286714:	55                   	push   %ebp
 8286715:	89 e5                	mov    %esp,%ebp
 8286717:	b8 22 03 00 00       	mov    $0x322,%eax
 828671c:	5d                   	pop    %ebp
 828671d:	c3                   	ret

```

```c
// CHackLog_InvitationPaperSellToNPC::GetHackType @ 0x8286714

/* CHackLog_InvitationPaperSellToNPC::GetHackType() */

undefined4 CHackLog_InvitationPaperSellToNPC::GetHackType(void)

{
  return 0x322;
}

```

---

## IsInvitationPaper

```asm
// === 082866d0 CHackLog_InvitationPaperSellToNPC::IsInvitationPaper  [0x082866d0-0x8286713] ===
 82866d0:	55                   	push   %ebp
 82866d1:	89 e5                	mov    %esp,%ebp
 82866d3:	83 ec 10             	sub    $0x10,%esp
 82866d6:	c7 45 f8 07 00 00 00 	movl   $0x7,-0x8(%ebp)
 82866dd:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 82866e4:	eb 1a                	jmp    8286700 <_ZN33CHackLog_InvitationPaperSellToNPC17IsInvitationPaperEi+0x30>
 82866e6:	8b 45 fc             	mov    -0x4(%ebp),%eax
 82866e9:	8b 04 85 c0 01 c1 08 	mov    0x8c101c0(,%eax,4),%eax
 82866f0:	3b 45 08             	cmp    0x8(%ebp),%eax
 82866f3:	75 07                	jne    82866fc <_ZN33CHackLog_InvitationPaperSellToNPC17IsInvitationPaperEi+0x2c>
 82866f5:	b8 01 00 00 00       	mov    $0x1,%eax
 82866fa:	eb 16                	jmp    8286712 <_ZN33CHackLog_InvitationPaperSellToNPC17IsInvitationPaperEi+0x42>
 82866fc:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 8286700:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8286703:	3b 45 f8             	cmp    -0x8(%ebp),%eax
 8286706:	0f 92 c0             	setb   %al
 8286709:	84 c0                	test   %al,%al
 828670b:	75 d9                	jne    82866e6 <_ZN33CHackLog_InvitationPaperSellToNPC17IsInvitationPaperEi+0x16>
 828670d:	b8 00 00 00 00       	mov    $0x0,%eax
 8286712:	c9                   	leave
 8286713:	c3                   	ret

```

```c
// CHackLog_InvitationPaperSellToNPC::IsInvitationPaper @ 0x82866d0

/* CHackLog_InvitationPaperSellToNPC::IsInvitationPaper(int) */

undefined4 CHackLog_InvitationPaperSellToNPC::IsInvitationPaper(int param_1)

{
  uint local_8;
  
  local_8 = 0;
  while( true ) {
    if (6 < local_8) {
      return 0;
    }
    if (*(int *)(INVITATION_PAPER_NO + local_8 * 4) == param_1) break;
    local_8 = local_8 + 1;
  }
  return 1;
}

```

