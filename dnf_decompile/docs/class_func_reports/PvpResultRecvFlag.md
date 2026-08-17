# PvpResultRecvFlag

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## Clear

```asm
// === 085d5fc6 PvpResultRecvFlag::Clear  [0x085d5fc6-0x85d5fef] ===
 85d5fc6:	55                   	push   %ebp
 85d5fc7:	89 e5                	mov    %esp,%ebp
 85d5fc9:	83 ec 10             	sub    $0x10,%esp
 85d5fcc:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 85d5fd3:	eb 0e                	jmp    85d5fe3 <_ZN17PvpResultRecvFlag5ClearEv+0x1d>
 85d5fd5:	8b 45 fc             	mov    -0x4(%ebp),%eax
 85d5fd8:	8b 55 08             	mov    0x8(%ebp),%edx
 85d5fdb:	c6 04 02 00          	movb   $0x0,(%edx,%eax,1)
 85d5fdf:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 85d5fe3:	83 7d fc 07          	cmpl   $0x7,-0x4(%ebp)
 85d5fe7:	0f 9e c0             	setle  %al
 85d5fea:	84 c0                	test   %al,%al
 85d5fec:	75 e7                	jne    85d5fd5 <_ZN17PvpResultRecvFlag5ClearEv+0xf>
 85d5fee:	c9                   	leave
 85d5fef:	c3                   	ret

```

```c
// PvpResultRecvFlag::Clear @ 0x85d5fc6

/* PvpResultRecvFlag::Clear() */

void __thiscall PvpResultRecvFlag::Clear(PvpResultRecvFlag *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    this[local_8] = (PvpResultRecvFlag)0x0;
  }
  return;
}

```

---

## IsRecv

```asm
// === 085d5ff0 PvpResultRecvFlag::IsRecv  [0x085d5ff0-0x85d6011] ===
 85d5ff0:	55                   	push   %ebp
 85d5ff1:	89 e5                	mov    %esp,%ebp
 85d5ff3:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85d5ff7:	78 06                	js     85d5fff <_ZNK17PvpResultRecvFlag6IsRecvEi+0xf>
 85d5ff9:	83 7d 0c 07          	cmpl   $0x7,0xc(%ebp)
 85d5ffd:	7e 07                	jle    85d6006 <_ZNK17PvpResultRecvFlag6IsRecvEi+0x16>
 85d5fff:	b8 00 00 00 00       	mov    $0x0,%eax
 85d6004:	eb 0a                	jmp    85d6010 <_ZNK17PvpResultRecvFlag6IsRecvEi+0x20>
 85d6006:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d6009:	8b 55 08             	mov    0x8(%ebp),%edx
 85d600c:	0f b6 04 02          	movzbl (%edx,%eax,1),%eax
 85d6010:	5d                   	pop    %ebp
 85d6011:	c3                   	ret

```

```c
// PvpResultRecvFlag::IsRecv @ 0x85d5ff0

/* PvpResultRecvFlag::IsRecv(int) const */

PvpResultRecvFlag __thiscall PvpResultRecvFlag::IsRecv(PvpResultRecvFlag *this,int param_1)

{
  PvpResultRecvFlag PVar1;
  
  if ((param_1 < 0) || (7 < param_1)) {
    PVar1 = (PvpResultRecvFlag)0x0;
  }
  else {
    PVar1 = this[param_1];
  }
  return PVar1;
}

```

---

## PvpResultRecvFlag

```asm
// === 085d5f7e PvpResultRecvFlag::PvpResultRecvFlag  [0x085d5f7e-0x85d5f91] ===
 85d5f7e:	55                   	push   %ebp
 85d5f7f:	89 e5                	mov    %esp,%ebp
 85d5f81:	83 ec 18             	sub    $0x18,%esp
 85d5f84:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5f87:	89 04 24             	mov    %eax,(%esp)
 85d5f8a:	e8 37 00 00 00       	call   85d5fc6 <_ZN17PvpResultRecvFlag5ClearEv>
 85d5f8f:	c9                   	leave
 85d5f90:	c3                   	ret
 85d5f91:	90                   	nop

```

```c
// PvpResultRecvFlag::PvpResultRecvFlag @ 0x85d5f7e

/* PvpResultRecvFlag::PvpResultRecvFlag() */

void __thiscall PvpResultRecvFlag::PvpResultRecvFlag(PvpResultRecvFlag *this)

{
  Clear(this);
  return;
}

```

---

## SetRecvFlag

```asm
// === 085d5f98 PvpResultRecvFlag::SetRecvFlag  [0x085d5f98-0x85d5fc5] ===
 85d5f98:	55                   	push   %ebp
 85d5f99:	89 e5                	mov    %esp,%ebp
 85d5f9b:	83 ec 18             	sub    $0x18,%esp
 85d5f9e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d5fa1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d5fa5:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5fa8:	89 04 24             	mov    %eax,(%esp)
 85d5fab:	e8 02 98 00 00       	call   85df7b2 <_ZNK17PvpResultRecvFlag10IsValidIdxEi>
 85d5fb0:	83 f0 01             	xor    $0x1,%eax
 85d5fb3:	84 c0                	test   %al,%al
 85d5fb5:	75 0c                	jne    85d5fc3 <_ZN17PvpResultRecvFlag11SetRecvFlagEi+0x2b>
 85d5fb7:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d5fba:	8b 55 08             	mov    0x8(%ebp),%edx
 85d5fbd:	c6 04 02 01          	movb   $0x1,(%edx,%eax,1)
 85d5fc1:	eb 01                	jmp    85d5fc4 <_ZN17PvpResultRecvFlag11SetRecvFlagEi+0x2c>
 85d5fc3:	90                   	nop
 85d5fc4:	c9                   	leave
 85d5fc5:	c3                   	ret

```

```c
// PvpResultRecvFlag::SetRecvFlag @ 0x85d5f98

/* PvpResultRecvFlag::SetRecvFlag(int) */

void __thiscall PvpResultRecvFlag::SetRecvFlag(PvpResultRecvFlag *this,int param_1)

{
  char cVar1;
  
  cVar1 = IsValidIdx(this,param_1);
  if (cVar1 == '\x01') {
    this[param_1] = (PvpResultRecvFlag)0x1;
  }
  return;
}

```

---

## ~PvpResultRecvFlag

```asm
// === 085d5f92 PvpResultRecvFlag::~PvpResultRecvFlag  [0x085d5f92-0x85d5f97] ===
 85d5f92:	55                   	push   %ebp
 85d5f93:	89 e5                	mov    %esp,%ebp
 85d5f95:	5d                   	pop    %ebp
 85d5f96:	c3                   	ret
 85d5f97:	90                   	nop

```

```c
// PvpResultRecvFlag::~PvpResultRecvFlag @ 0x85d5f92

/* PvpResultRecvFlag::~PvpResultRecvFlag() */

void __thiscall PvpResultRecvFlag::~PvpResultRecvFlag(PvpResultRecvFlag *this)

{
  return;
}

```

