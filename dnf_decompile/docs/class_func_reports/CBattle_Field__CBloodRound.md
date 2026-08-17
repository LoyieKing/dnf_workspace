# CBattle_Field__CBloodRound

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## reset_blood_values

```asm
// === 08306d66 CBattle_Field::CBloodRound::reset_blood_values  [0x08306d66-0x8306d85] ===
 8306d66:	55                   	push   %ebp
 8306d67:	89 e5                	mov    %esp,%ebp
 8306d69:	8b 45 08             	mov    0x8(%ebp),%eax
 8306d6c:	66 c7 40 06 00 00    	movw   $0x0,0x6(%eax)
 8306d72:	8b 45 08             	mov    0x8(%ebp),%eax
 8306d75:	66 c7 40 02 00 00    	movw   $0x0,0x2(%eax)
 8306d7b:	8b 45 08             	mov    0x8(%ebp),%eax
 8306d7e:	66 c7 40 04 00 00    	movw   $0x0,0x4(%eax)
 8306d84:	5d                   	pop    %ebp
 8306d85:	c3                   	ret

```

```c
// CBattle_Field::CBloodRound::reset_blood_values @ 0x8306d66

/* CBattle_Field::CBloodRound::reset_blood_values() */

void __thiscall CBattle_Field::CBloodRound::reset_blood_values(CBloodRound *this)

{
  *(undefined2 *)(this + 6) = 0;
  *(undefined2 *)(this + 2) = 0;
  *(undefined2 *)(this + 4) = 0;
  return;
}

```

