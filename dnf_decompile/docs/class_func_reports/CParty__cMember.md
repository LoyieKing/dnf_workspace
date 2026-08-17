# CParty__cMember

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## Init

```asm
// === 08599a28 CParty::cMember::Init  [0x08599a28-0x8599a87] ===
 8599a28:	55                   	push   %ebp
 8599a29:	89 e5                	mov    %esp,%ebp
 8599a2b:	83 ec 18             	sub    $0x18,%esp
 8599a2e:	8b 45 08             	mov    0x8(%ebp),%eax
 8599a31:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8599a37:	8b 45 08             	mov    0x8(%ebp),%eax
 8599a3a:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 8599a3e:	8b 45 08             	mov    0x8(%ebp),%eax
 8599a41:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8599a48:	8b 45 08             	mov    0x8(%ebp),%eax
 8599a4b:	c6 40 0c ff          	movb   $0xff,0xc(%eax)
 8599a4f:	8b 45 08             	mov    0x8(%ebp),%eax
 8599a52:	c6 40 0d ff          	movb   $0xff,0xd(%eax)
 8599a56:	8b 45 08             	mov    0x8(%ebp),%eax
 8599a59:	83 c0 0e             	add    $0xe,%eax
 8599a5c:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 8599a63:	00 
 8599a64:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8599a6b:	00 
 8599a6c:	89 04 24             	mov    %eax,(%esp)
 8599a6f:	e8 4c 42 ae ff       	call   807dcc0 <memset@plt>
 8599a74:	8b 45 08             	mov    0x8(%ebp),%eax
 8599a77:	c6 40 12 ff          	movb   $0xff,0x12(%eax)
 8599a7b:	8b 45 08             	mov    0x8(%ebp),%eax
 8599a7e:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 8599a85:	c9                   	leave
 8599a86:	c3                   	ret
 8599a87:	90                   	nop

```

```c
// CParty::cMember::Init @ 0x8599a28

/* CParty::cMember::Init() */

void __thiscall CParty::cMember::Init(cMember *this)

{
  *(undefined4 *)this = 0;
  this[4] = (cMember)0x0;
  *(undefined4 *)(this + 8) = 0;
  this[0xc] = (cMember)0xff;
  this[0xd] = (cMember)0xff;
  memset(this + 0xe,0,4);
  this[0x12] = (cMember)0xff;
  *(undefined4 *)(this + 0x14) = 0;
  return;
}

```

---

## cMember

```asm
// === 08599a14 CParty::cMember::cMember  [0x08599a14-0x8599a27] ===
 8599a14:	55                   	push   %ebp
 8599a15:	89 e5                	mov    %esp,%ebp
 8599a17:	83 ec 18             	sub    $0x18,%esp
 8599a1a:	8b 45 08             	mov    0x8(%ebp),%eax
 8599a1d:	89 04 24             	mov    %eax,(%esp)
 8599a20:	e8 03 00 00 00       	call   8599a28 <_ZN6CParty7cMember4InitEv>
 8599a25:	c9                   	leave
 8599a26:	c3                   	ret
 8599a27:	90                   	nop

```

```c
// CParty::cMember::cMember @ 0x8599a14

/* CParty::cMember::cMember() */

void __thiscall CParty::cMember::cMember(cMember *this)

{
  Init(this);
  return;
}

```

