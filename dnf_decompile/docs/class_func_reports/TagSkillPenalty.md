# TagSkillPenalty

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## TagSkillPenalty

```asm
// === 08a9d768 TagSkillPenalty::TagSkillPenalty  [0x08a9d768-0x8a9d77b] ===
 8a9d768:	55                   	push   %ebp
 8a9d769:	89 e5                	mov    %esp,%ebp
 8a9d76b:	83 ec 18             	sub    $0x18,%esp
 8a9d76e:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9d771:	89 04 24             	mov    %eax,(%esp)
 8a9d774:	e8 03 00 00 00       	call   8a9d77c <_ZN15TagSkillPenalty5clearEv>
 8a9d779:	c9                   	leave
 8a9d77a:	c3                   	ret
 8a9d77b:	90                   	nop

```

```c
// TagSkillPenalty::TagSkillPenalty @ 0x8a9d768

/* TagSkillPenalty::TagSkillPenalty() */

void __thiscall TagSkillPenalty::TagSkillPenalty(TagSkillPenalty *this)

{
  clear(this);
  return;
}

```

---

## clear

```asm
// === 08a9d77c TagSkillPenalty::clear  [0x08a9d77c-0x8a9d7a5] ===
 8a9d77c:	55                   	push   %ebp
 8a9d77d:	89 e5                	mov    %esp,%ebp
 8a9d77f:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9d782:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8a9d788:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9d78b:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8a9d792:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9d795:	c6 40 08 00          	movb   $0x0,0x8(%eax)
 8a9d799:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9d79c:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8a9d7a3:	5d                   	pop    %ebp
 8a9d7a4:	c3                   	ret
 8a9d7a5:	90                   	nop

```

```c
// TagSkillPenalty::clear @ 0x8a9d77c

/* TagSkillPenalty::clear() */

void __thiscall TagSkillPenalty::clear(TagSkillPenalty *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  this[8] = (TagSkillPenalty)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}

```

---

## isPenaltyLevel

```asm
// === 08a9d7a6 TagSkillPenalty::isPenaltyLevel  [0x08a9d7a6-0x8a9d7cb] ===
 8a9d7a6:	55                   	push   %ebp
 8a9d7a7:	89 e5                	mov    %esp,%ebp
 8a9d7a9:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9d7ac:	8b 00                	mov    (%eax),%eax
 8a9d7ae:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8a9d7b1:	7f 12                	jg     8a9d7c5 <_ZN15TagSkillPenalty14isPenaltyLevelEi+0x1f>
 8a9d7b3:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9d7b6:	8b 40 04             	mov    0x4(%eax),%eax
 8a9d7b9:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8a9d7bc:	7c 07                	jl     8a9d7c5 <_ZN15TagSkillPenalty14isPenaltyLevelEi+0x1f>
 8a9d7be:	b8 01 00 00 00       	mov    $0x1,%eax
 8a9d7c3:	eb 05                	jmp    8a9d7ca <_ZN15TagSkillPenalty14isPenaltyLevelEi+0x24>
 8a9d7c5:	b8 00 00 00 00       	mov    $0x0,%eax
 8a9d7ca:	5d                   	pop    %ebp
 8a9d7cb:	c3                   	ret

```

```c
// TagSkillPenalty::isPenaltyLevel @ 0x8a9d7a6

/* TagSkillPenalty::isPenaltyLevel(int) */

undefined4 __thiscall TagSkillPenalty::isPenaltyLevel(TagSkillPenalty *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < *(int *)this) || (*(int *)(this + 4) < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

