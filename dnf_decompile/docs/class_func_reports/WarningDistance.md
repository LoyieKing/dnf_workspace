# WarningDistance

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## WarningDistance

```asm
// === 08a3aeca WarningDistance::WarningDistance  [0x08a3aeca-0x8a3aeeb] ===
 8a3aeca:	55                   	push   %ebp
 8a3aecb:	89 e5                	mov    %esp,%ebp
 8a3aecd:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3aed0:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8a3aed6:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3aed9:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8a3aee0:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3aee3:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8a3aeea:	5d                   	pop    %ebp
 8a3aeeb:	c3                   	ret

```

```c
// WarningDistance::WarningDistance @ 0x8a3aeca

/* WarningDistance::WarningDistance() */

void __thiscall WarningDistance::WarningDistance(WarningDistance *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}

```

---

## WarningDistance_08a3aeec

```asm
// === 08a3aeec WarningDistance::WarningDistance  [0x08a3aeec-0x8a3af0b] ===
 8a3aeec:	55                   	push   %ebp
 8a3aeed:	89 e5                	mov    %esp,%ebp
 8a3aeef:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3aef2:	8b 55 0c             	mov    0xc(%ebp),%edx
 8a3aef5:	89 10                	mov    %edx,(%eax)
 8a3aef7:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3aefa:	8b 55 10             	mov    0x10(%ebp),%edx
 8a3aefd:	89 50 04             	mov    %edx,0x4(%eax)
 8a3af00:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3af03:	8b 55 14             	mov    0x14(%ebp),%edx
 8a3af06:	89 50 08             	mov    %edx,0x8(%eax)
 8a3af09:	5d                   	pop    %ebp
 8a3af0a:	c3                   	ret
 8a3af0b:	90                   	nop

```

```c
// WarningDistance::WarningDistance @ 0x8a3aeec

/* WarningDistance::WarningDistance(int, int, int) */

void __thiscall
WarningDistance::WarningDistance(WarningDistance *this,int param_1,int param_2,int param_3)

{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  return;
}

```

