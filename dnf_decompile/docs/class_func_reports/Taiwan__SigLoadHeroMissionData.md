# Taiwan__SigLoadHeroMissionData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## SigLoadHeroMissionData

```asm
// === 081639f0 Taiwan::SigLoadHeroMissionData::SigLoadHeroMissionData  [0x081639f0-0x8163a03] ===
 81639f0:	55                   	push   %ebp
 81639f1:	89 e5                	mov    %esp,%ebp
 81639f3:	83 ec 18             	sub    $0x18,%esp
 81639f6:	8b 45 08             	mov    0x8(%ebp),%eax
 81639f9:	89 04 24             	mov    %eax,(%esp)
 81639fc:	e8 03 00 00 00       	call   8163a04 <_ZN6Taiwan22SigLoadHeroMissionData4initEv>
 8163a01:	c9                   	leave
 8163a02:	c3                   	ret
 8163a03:	90                   	nop

```

```c
// Taiwan::SigLoadHeroMissionData::SigLoadHeroMissionData @ 0x81639f0

/* Taiwan::SigLoadHeroMissionData::SigLoadHeroMissionData() */

void __thiscall Taiwan::SigLoadHeroMissionData::SigLoadHeroMissionData(SigLoadHeroMissionData *this)

{
  init(this);
  return;
}

```

---

## init

```asm
// === 08163a04 Taiwan::SigLoadHeroMissionData::init  [0x08163a04-0x8163a32] ===
 8163a04:	55                   	push   %ebp
 8163a05:	89 e5                	mov    %esp,%ebp
 8163a07:	83 ec 18             	sub    $0x18,%esp
 8163a0a:	8b 45 08             	mov    0x8(%ebp),%eax
 8163a0d:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8163a13:	8b 45 08             	mov    0x8(%ebp),%eax
 8163a16:	83 c0 04             	add    $0x4,%eax
 8163a19:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 8163a20:	00 
 8163a21:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8163a28:	00 
 8163a29:	89 04 24             	mov    %eax,(%esp)
 8163a2c:	e8 8f a2 f1 ff       	call   807dcc0 <memset@plt>
 8163a31:	c9                   	leave
 8163a32:	c3                   	ret

```

```c
// Taiwan::SigLoadHeroMissionData::init @ 0x8163a04

/* Taiwan::SigLoadHeroMissionData::init() */

void __thiscall Taiwan::SigLoadHeroMissionData::init(SigLoadHeroMissionData *this)

{
  *(undefined4 *)this = 0;
  memset(this + 4,0,0x100);
  return;
}

```

