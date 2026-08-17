# user_creature__CCreatureItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## SetSlotNo

```asm
// === 08337050 user_creature::CCreatureItem::SetSlotNo  [0x08337050-0x833705d] ===
 8337050:	55                   	push   %ebp
 8337051:	89 e5                	mov    %esp,%ebp
 8337053:	8b 45 08             	mov    0x8(%ebp),%eax
 8337056:	8b 55 0c             	mov    0xc(%ebp),%edx
 8337059:	89 50 10             	mov    %edx,0x10(%eax)
 833705c:	5d                   	pop    %ebp
 833705d:	c3                   	ret

```

```c
// user_creature::CCreatureItem::SetSlotNo @ 0x8337050

/* user_creature::CCreatureItem::SetSlotNo(int) */

void __thiscall user_creature::CCreatureItem::SetSlotNo(CCreatureItem *this,int param_1)

{
  *(int *)(this + 0x10) = param_1;
  return;
}

```

